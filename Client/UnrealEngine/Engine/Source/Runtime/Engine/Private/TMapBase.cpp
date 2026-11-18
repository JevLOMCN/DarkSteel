// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 367

// Find @ 14734d1f0

int * __thiscall
TMapBase<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>_>::
Find(TMapBase<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>_>
     *this,uint param_1)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x10 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == param_1) {
          puVar3 = (uint *)0x0;
          if (puVar2 != (uint *)0x0) {
            puVar3 = puVar2 + 1;
          }
          return (int *)puVar3;
        }
        uVar1 = puVar2[2];
      } while (uVar1 != 0xffffffff);
    }
  }
  return (int *)0x0;
}

// GenerateValueArray<TSizedDefaultAllocator<32>_> @ 147374470

void __thiscall
TMapBase<FName,FActorPrimitiveColorHandler::FPrimitiveColorHandler,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FActorPrimitiveColorHandler::FPrimitiveColorHandler,0>_>
::GenerateValueArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FName,FActorPrimitiveColorHandler::FPrimitiveColorHandler,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FActorPrimitiveColorHandler::FPrimitiveColorHandler,0>_>
           *this,TArray<FActorPrimitiveColorHandler::FPrimitiveColorHandler,TSizedDefaultAllocator<32>_>
                 *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FPrimitiveColorHandler *pFVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  FPrimitiveColorHandler *pFVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar9 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  DestructItems<FActorPrimitiveColorHandler::FPrimitiveColorHandler,int>
            ((FPrimitiveColorHandler *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  iVar10 = 0;
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc0,0x10,uVar9,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar9 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar4 = *puVar13;
    while (uVar4 == 0) {
      lVar8 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_147374550;
      uVar4 = puVar13[lVar8 + 1];
    }
    uVar9 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar9 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar8 + -1 + iVar12;
    if (iVar3 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar3;
    }
  }
LAB_147374550:
  TStack_40._padding_ = CONCAT44(uVar9,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < iVar3) {
    do {
      pFVar11 = (FPrimitiveColorHandler *)
                (*(longlong *)&(this->Pairs).Elements + 0x10 +
                (longlong)TStack_40.CurrentBitIndex * 0xe0);
      pFVar5 = (FPrimitiveColorHandler *)(param_1->AllocatorInstance).Data;
      if (((pFVar5 <= pFVar11) && (pFVar11 < pFVar5 + *piVar1)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar10 = param_1->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10c0,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar10 + 1;
      FActorPrimitiveColorHandler::FPrimitiveColorHandler::FPrimitiveColorHandler
                ((FPrimitiveColorHandler *)
                 ((param_1->AllocatorInstance).Data + (longlong)iVar10 * 0xc0),pFVar11);
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// Find @ 1473fc920

FAnimNodeStructData * __thiscall
TMapBase<TObjectPtr<UScriptStruct_const_>,FAnimNodeStructData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FAnimNodeStructData,0>_>
::Find(TMapBase<TObjectPtr<UScriptStruct_const_>,FAnimNodeStructData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FAnimNodeStructData,0>_>
       *this,TObjectPtr<UScriptStruct_const_> param_1)

{
  int iVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  uint uVar4;
  ForElementType<FSetElementId> FVar5;
  longlong lVar6;
  
  pUVar2 = *(UObject **)param_1.field0_0x0;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar2 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
  }
  uVar4 = ((uint)((ulonglong)pUVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar2 >> 4)) *
          -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar5 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
    while (iVar1 != -1) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      lVar6 = (longlong)iVar1 * 0x68;
      pUVar3 = *(UObject **)(lVar6 + *(longlong *)&(this->Pairs).Elements);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      if (pUVar3 == pUVar2) {
        if (iVar1 == -1) {
          return (FAnimNodeStructData *)0x0;
        }
        lVar6 = *(longlong *)&(this->Pairs).Elements + lVar6;
        if (lVar6 != 0) {
          return (FAnimNodeStructData *)(lVar6 + 8);
        }
        return (FAnimNodeStructData *)0x0;
      }
      iVar1 = *(int *)(*(longlong *)&(this->Pairs).Elements + 0x60 + lVar6);
    }
  }
  return (FAnimNodeStructData *)0x0;
}

// EmplaceByHash<FName_const_&> @ 14742ae60

FInertializationRequest * __thiscall
TMapBase<FName,FInertializationRequest,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInertializationRequest,0>_>
::EmplaceByHash<FName_const_&>
          (TMapBase<FName,FInertializationRequest,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInertializationRequest,0>_>
           *this,uint param_1,FName *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  FInertializationRequest *pFVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  FInertializationRequest local_68;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x68,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar4 * 0x68 + 4 + lVar6);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x68 + lVar6) = 0xffffffff;
    }
  }
  TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_78,iVar4);
  if (local_78.Pointer != (TSparseSetElement<TTuple<FName,FInertializationRequest>_> *)0x0) {
    pFVar5 = FInertializationRequest::FInertializationRequest(&local_68);
    *(FName *)local_78.Pointer = *param_2;
    FInertializationRequest::FInertializationRequest
              ((FInertializationRequest *)((longlong)local_78.Pointer + 8),pFVar5);
    if (local_68.DescriptionString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.DescriptionString.Data.AllocatorInstance.Data);
    }
    if (local_68.Description_DEPRECATED.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.Description_DEPRECATED.TextData.Reference + 0x10))();
    }
    *(undefined4 *)((longlong)local_78.Pointer + 0x60) = 0xffffffff;
  }
  local_res8[0] = local_78.Index;
  bVar3 = TSet<TTuple<FName,FInertializationRequest>,TDefaultMapHashableKeyFuncs<FName,FInertializationRequest,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_78.Pointer,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<FName,FInertializationRequest>,TDefaultMapHashableKeyFuncs<FName,FInertializationRequest,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_78.Pointer,local_res8[0]);
  }
  return (FInertializationRequest *)(*(longlong *)&(this->Pairs).Elements + lVar6 * 0x68 + 8);
}

// EmplaceByHash<FName_const_&> @ 14742afc0

TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *
__thiscall
TMapBase<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
::EmplaceByHash<FName_const_&>
          (TMapBase<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
           *this,uint param_1,FName *param_2)

{
  TMapBase<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
  *pTVar1;
  bool bVar2;
  TSparseSetElement<TTuple<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>
  *pTVar3;
  longlong lVar4;
  int local_68 [2];
  FSparseArrayAllocationInfo local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  TSparseArrayBase<64,8,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
  ::AddUninitialized((TSparseArrayBase<64,8,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                      *)this,&local_60);
  if (local_60.Pointer ==
      (TSparseSetElement<TTuple<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>
       *)0x0) {
    pTVar3 = (TSparseSetElement<TTuple<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>
              *)0x0;
  }
  else {
    *(FName *)local_60.Pointer = *param_2;
    *(undefined8 *)((longlong)local_60.Pointer + 0x28) = 0;
    *(undefined8 *)((longlong)local_60.Pointer + 8) = local_50;
    *(undefined8 *)((longlong)local_60.Pointer + 0x10) = uStack_48;
    *(undefined8 *)((longlong)local_60.Pointer + 0x18) = local_40;
    *(undefined8 *)((longlong)local_60.Pointer + 0x20) = uStack_38;
    if (*(void **)((longlong)local_60.Pointer + 0x28) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)local_60.Pointer + 0x28));
    }
    *(undefined8 *)((longlong)local_60.Pointer + 0x28) = 0;
    *(undefined4 *)((longlong)local_60.Pointer + 0x30) = 0;
    *(undefined4 *)((longlong)local_60.Pointer + 0x34) = 4;
    *(undefined4 *)((longlong)local_60.Pointer + 0x38) = 0xffffffff;
    pTVar3 = local_60.Pointer;
  }
  local_68[0] = local_60.Index;
  bVar2 = TSet<TTuple<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
          ::TryReplaceExisting(&this->Pairs,param_1,pTVar3,local_68,(bool *)0x0);
  lVar4 = (longlong)local_68[0];
  if (!bVar2) {
    TSet<TTuple<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
    ::RehashOrLink(&this->Pairs,param_1,pTVar3,local_68[0]);
  }
  pTVar1 = *(TMapBase<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
             **)&(this->Pairs).Elements.field_0x100;
  if (pTVar1 != (TMapBase<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
                 *)0x0) {
    this = pTVar1;
  }
  return (TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *)(&(this->Pairs).Elements.field_0x8 + lVar4 * 0x40);
}

// EmplaceByHash<FName> @ 14742b9d0

FInertializationRequest * __thiscall
TMapBase<FName,FInertializationRequest,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInertializationRequest,0>_>
::EmplaceByHash<FName>
          (TMapBase<FName,FInertializationRequest,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInertializationRequest,0>_>
           *this,uint param_1,FName *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  FInertializationRequest *pFVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  FInertializationRequest local_68;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x68,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar4 * 0x68 + 4 + lVar6);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x68 + lVar6) = 0xffffffff;
    }
  }
  TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_78,iVar4);
  if (local_78.Pointer != (TSparseSetElement<TTuple<FName,FInertializationRequest>_> *)0x0) {
    pFVar5 = FInertializationRequest::FInertializationRequest(&local_68);
    *(FName *)local_78.Pointer = *param_2;
    FInertializationRequest::FInertializationRequest
              ((FInertializationRequest *)((longlong)local_78.Pointer + 8),pFVar5);
    if (local_68.DescriptionString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.DescriptionString.Data.AllocatorInstance.Data);
    }
    if (local_68.Description_DEPRECATED.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.Description_DEPRECATED.TextData.Reference + 0x10))();
    }
    *(undefined4 *)((longlong)local_78.Pointer + 0x60) = 0xffffffff;
  }
  local_res8[0] = local_78.Index;
  bVar3 = TSet<TTuple<FName,FInertializationRequest>,TDefaultMapHashableKeyFuncs<FName,FInertializationRequest,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_78.Pointer,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<FName,FInertializationRequest>,TDefaultMapHashableKeyFuncs<FName,FInertializationRequest,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_78.Pointer,local_res8[0]);
  }
  return (FInertializationRequest *)(*(longlong *)&(this->Pairs).Elements + lVar6 * 0x68 + 8);
}

// EmplaceByHash<FName> @ 14742bb30

TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *
__thiscall
TMapBase<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
::EmplaceByHash<FName>
          (TMapBase<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
           *this,uint param_1,FName *param_2)

{
  TMapBase<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
  *pTVar1;
  bool bVar2;
  TSparseSetElement<TTuple<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>
  *pTVar3;
  longlong lVar4;
  int local_68 [2];
  FSparseArrayAllocationInfo local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  TSparseArrayBase<64,8,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
  ::AddUninitialized((TSparseArrayBase<64,8,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                      *)this,&local_60);
  if (local_60.Pointer ==
      (TSparseSetElement<TTuple<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>
       *)0x0) {
    pTVar3 = (TSparseSetElement<TTuple<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>
              *)0x0;
  }
  else {
    *(FName *)local_60.Pointer = *param_2;
    *(undefined8 *)((longlong)local_60.Pointer + 0x28) = 0;
    *(undefined8 *)((longlong)local_60.Pointer + 8) = local_50;
    *(undefined8 *)((longlong)local_60.Pointer + 0x10) = uStack_48;
    *(undefined8 *)((longlong)local_60.Pointer + 0x18) = local_40;
    *(undefined8 *)((longlong)local_60.Pointer + 0x20) = uStack_38;
    if (*(void **)((longlong)local_60.Pointer + 0x28) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)local_60.Pointer + 0x28));
    }
    *(undefined8 *)((longlong)local_60.Pointer + 0x28) = 0;
    *(undefined4 *)((longlong)local_60.Pointer + 0x30) = 0;
    *(undefined4 *)((longlong)local_60.Pointer + 0x34) = 4;
    *(undefined4 *)((longlong)local_60.Pointer + 0x38) = 0xffffffff;
    pTVar3 = local_60.Pointer;
  }
  local_68[0] = local_60.Index;
  bVar2 = TSet<TTuple<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
          ::TryReplaceExisting(&this->Pairs,param_1,pTVar3,local_68,(bool *)0x0);
  lVar4 = (longlong)local_68[0];
  if (!bVar2) {
    TSet<TTuple<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
    ::RehashOrLink(&this->Pairs,param_1,pTVar3,local_68[0]);
  }
  pTVar1 = *(TMapBase<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
             **)&(this->Pairs).Elements.field_0x100;
  if (pTVar1 != (TMapBase<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
                 *)0x0) {
    this = pTVar1;
  }
  return (TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *)(&(this->Pairs).Elements.field_0x8 + lVar4 * 0x40);
}

// FindOrAddImpl<UClass_*_const_&> @ 14742bd20

TMap<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
* __thiscall
TMapBase<UClass_*,TMap<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<UClass_*,TMap<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>,0>_>
::FindOrAddImpl<UClass_*_const_&>
          (TMapBase<UClass_*,TMap<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<UClass_*,TMap<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>,0>_>
           *this,uint param_1,UClass **param_2)

{
  TMapBase<UClass_*,TMap<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<UClass_*,TMap<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>,0>_>
  *pTVar1;
  TMapBase<UClass_*,TMap<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<UClass_*,TMap<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>,0>_>
  *pTVar2;
  ForElementType<FSetElementId> FVar4;
  int iVar5;
  longlong lVar6;
  int local_res8 [2];
  UClass **local_res20;
  undefined1 *puVar3;
  
  if (*(int *)&(this->Pairs).Elements.field_0x568 != *(int *)&(this->Pairs).Elements.field_0x58c) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      pTVar1 = *(TMapBase<UClass_*,TMap<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<UClass_*,TMap<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>,0>_>
                 **)&(this->Pairs).Elements.field_0x560;
      do {
        pTVar2 = this;
        if (pTVar1 != (TMapBase<UClass_*,TMap<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<UClass_*,TMap<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>,0>_>
                       *)0x0) {
          pTVar2 = pTVar1;
        }
        lVar6 = (longlong)iVar5 * 0x158;
        if (*(UClass **)(&(pTVar2->Pairs).Elements.field_0x0 + lVar6) == *param_2) {
          if (iVar5 != -1) {
            pTVar2 = this;
            if (pTVar1 != (TMapBase<UClass_*,TMap<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<UClass_*,TMap<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>,0>_>
                           *)0x0) {
              pTVar2 = pTVar1;
            }
            puVar3 = &(pTVar2->Pairs).Elements.field_0x0 + lVar6;
            if (puVar3 != (undefined1 *)0x0) {
              return (TMap<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
                      *)(puVar3 + 8);
            }
          }
          break;
        }
        pTVar2 = this;
        if (pTVar1 != (TMapBase<UClass_*,TMap<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<UClass_*,TMap<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>,0>_>
                       *)0x0) {
          pTVar2 = pTVar1;
        }
        iVar5 = *(int *)(&(pTVar2->Pairs).Elements.field_0x150 + lVar6);
      } while (iVar5 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<UClass_*,TMap<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TMap<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  ::EmplaceByHash<TKeyInitializer<UClass_*_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<UClass_*_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  pTVar1 = *(TMapBase<UClass_*,TMap<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<UClass_*,TMap<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>,0>_>
             **)&(this->Pairs).Elements.field_0x560;
  if (pTVar1 != (TMapBase<UClass_*,TMap<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<UClass_*,TMap<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>,0>_>
                 *)0x0) {
    this = pTVar1;
  }
  return (TMap<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
          *)(&(this->Pairs).Elements.field_0x8 + (longlong)local_res8[0] * 0x158);
}

// FindOrAddImpl<FName_const_&> @ 14742be40

float * __thiscall
TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>::
FindOrAddImpl<FName_const_&>
          (TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
           *this,uint param_1,FName *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x14;
        if (*(FName *)(lVar1 + (longlong)iVar2 * 0x14) == *param_2) {
          if (lVar3 != 0) goto LAB_14742bed2;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0xc);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
  EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x14;
LAB_14742bed2:
  return (float *)(lVar3 + 8);
}

// FindOrAddImpl<FName_const_&> @ 14742bef0

TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *
__thiscall
TMapBase<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
           *this,uint param_1,FName *param_2)

{
  TMapBase<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
  *pTVar1;
  int iVar2;
  undefined1 *puVar3;
  TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar4;
  TMapBase<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
  *pTVar5;
  
  iVar2 = TSet<TTuple<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
          ::FindIndexByHash<FName>(&this->Pairs,param_1,param_2);
  if (iVar2 != -1) {
    pTVar1 = *(TMapBase<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
               **)&(this->Pairs).Elements.field_0x100;
    pTVar5 = this;
    if (pTVar1 != (TMapBase<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
                   *)0x0) {
      pTVar5 = pTVar1;
    }
    puVar3 = &(pTVar5->Pairs).Elements.field_0x0 + (longlong)iVar2 * 0x40;
    if (puVar3 != (undefined1 *)0x0) {
      return (TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              *)(puVar3 + 8);
    }
  }
  pTVar4 = EmplaceByHash<FName_const_&>(this,param_1,param_2);
  return pTVar4;
}

// FindOrAddImpl<FName_const_&> @ 14742bf70

TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> *)
                   (pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// FindOrAddImpl<FName_const_&> @ 14742c020

TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
TMapBase<FName,TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pFVar2 + 1)
            ;
          }
          break;
        }
        uVar1 = pFVar2[5].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FName,TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x30);
}

// FindOrAddImpl<FName> @ 14742c0d0

FInertializationRequest * __thiscall
TMapBase<FName,FInertializationRequest,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInertializationRequest,0>_>
::FindOrAddImpl<FName>
          (TMapBase<FName,FInertializationRequest,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInertializationRequest,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  FInertializationRequest *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x68 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (FInertializationRequest *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[0xc].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  pFVar3 = EmplaceByHash<FName>(this,param_1,param_2);
  return pFVar3;
}

// FindOrAddImpl<FName> @ 14742c150

TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *
__thiscall
TMapBase<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
::FindOrAddImpl<FName>
          (TMapBase<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
           *this,uint param_1,FName *param_2)

{
  TMapBase<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
  *pTVar1;
  int iVar2;
  undefined1 *puVar3;
  TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar4;
  TMapBase<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
  *pTVar5;
  
  iVar2 = TSet<TTuple<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
          ::FindIndexByHash<FName>(&this->Pairs,param_1,param_2);
  if (iVar2 != -1) {
    pTVar1 = *(TMapBase<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
               **)&(this->Pairs).Elements.field_0x100;
    pTVar5 = this;
    if (pTVar1 != (TMapBase<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
                   *)0x0) {
      pTVar5 = pTVar1;
    }
    puVar3 = &(pTVar5->Pairs).Elements.field_0x0 + (longlong)iVar2 * 0x40;
    if (puVar3 != (undefined1 *)0x0) {
      return (TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              *)(puVar3 + 8);
    }
  }
  pTVar4 = EmplaceByHash<FName>(this,param_1,param_2);
  return pTVar4;
}

// GenerateKeyArray<TSizedDefaultAllocator<32>_> @ 14742c1d0

void __thiscall
TMapBase<FName,FCurveMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>_>
::GenerateKeyArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FName,FCurveMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>_>
           *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &param_1->ArrayMax;
  iVar10 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar11,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar4 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar11 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar4 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar5 = *puVar13;
    while (uVar5 == 0) {
      lVar9 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14742c2b2;
      uVar5 = puVar13[lVar9 + 1];
    }
    uVar11 = -uVar5 & uVar5;
    uVar3 = (ulonglong)uVar11 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar9 + -1 + iVar12;
    if (iVar4 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar4;
    }
  }
LAB_14742c2b2:
  TStack_40._padding_ = CONCAT44(uVar11,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar2 = (FScriptContainerElement *)
               (*(longlong *)&(this->Pairs).Elements + (longlong)TStack_40.CurrentBitIndex * 0x28);
      pFVar6 = (param_1->AllocatorInstance).Data;
      if (((pFVar6 <= pFVar2) && (pFVar2 < pFVar6 + (longlong)*piVar1 * 8)) &&
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
      iVar10 = param_1->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar10 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8) =
           *(undefined8 *)pFVar2;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// GetKeys<TSizedDefaultAllocator<32>_> @ 14742c810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>::
GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
           *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  int iVar17;
  ForElementType<unsigned_int> FVar18;
  uint *puVar19;
  longlong lVar20;
  undefined1 auStackY_1b8 [32];
  uint local_168;
  uint uStack_164;
  uint uStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined4 local_120;
  int local_11c;
  int local_118;
  undefined1 local_114 [12];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_108;
  TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *local_e8;
  int iStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  undefined4 uStack_c4;
  undefined4 local_9c;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  piVar1 = &param_1->ArrayMax;
  uVar10 = 0;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&param_1->AllocatorInstance,0,piVar1);
  }
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  uVar13 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if (uVar13 == 0) goto LAB_14742cac6;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar13);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar13);
  uVar14 = 1;
  if (3 < uVar13) {
    uVar12 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_120 = (undefined4)lVar11;
    uVar14 = 1 << ((byte)lVar11 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar14 <= (int)local_50)) goto LAB_14742cac6;
  local_50 = uVar14;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar14 != 0) {
    uVar13 = uVar14;
    if (uVar14 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar13 = 0;
        goto LAB_14742c925;
      }
    }
    else {
LAB_14742c925:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar13,4);
    }
    if (0 < (int)uVar14) {
      uVar16 = (ulonglong)uVar14;
      uVar12 = uVar10;
      do {
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        uVar8 = uVar12 & (longlong)(int)uVar14 - 1U;
        uVar12 = uVar12 + 1;
        *(undefined4 *)(FVar9.Data + uVar8 * 4) = 0xffffffff;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  if (local_50 != 0) {
    local_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_168 = 0;
    uStack_164 = 1;
    uStack_154 = 0;
    uStack_150 = 0;
    if (local_70 != 0) {
      FVar18 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar18 = local_78;
      }
      uVar13 = *(uint *)FVar18;
      uVar12 = uVar10;
      while (uVar13 == 0) {
        uStack_150 = (int)uVar12 + 0x20;
        uVar12 = (ulonglong)uStack_150;
        iVar17 = (int)uVar10;
        local_168 = iVar17 + 1;
        uVar10 = (ulonglong)local_168;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_168)
        goto LAB_14742ca22;
        uVar13 = ((uint *)((longlong)FVar18 + 4))[iVar17];
      }
      uStack_164 = -uVar13 & uVar13;
      uVar10 = (ulonglong)uStack_164 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_11c = (int)lVar11;
      uStack_154 = local_11c + -1 + uStack_150;
      uVar10 = (ulonglong)uStack_154;
      if ((int)local_70 < (int)uStack_154) {
LAB_14742ca22:
        uVar10 = (ulonglong)local_70;
        uStack_154 = local_70;
      }
    }
    local_114._4_8_ = local_98;
    local_108._padding_ = CONCAT44(uStack_164,local_168);
    local_108.CurrentBitIndex = uStack_154;
    local_108.UnvisitedBitMask = 0xffffffff;
    local_108._28_4_ = uStack_14c;
    local_108.BaseBitIndex = uStack_150;
    if ((int)uVar10 < (int)local_70) {
      do {
        puVar15 = (undefined8 *)((longlong)(int)uVar10 * 0x10 + *(longlong *)local_114._4_8_);
        uVar4 = *puVar15;
        uVar13 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
        uVar13 = local_50 - 1 & uVar13 + (int)((ulonglong)uVar4 >> 0x20);
        *(uint *)((longlong)puVar15 + 0xc) = uVar13;
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        uVar12 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar13;
        *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(FVar9.Data + uVar12 * 4);
        *(int *)(FVar9.Data + uVar12 * 4) = (int)uVar10;
        local_108.UnvisitedBitMask = local_108.UnvisitedBitMask & ~local_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_108);
        uVar10 = (ulonglong)(uint)local_108.CurrentBitIndex;
      } while (local_108.CurrentBitIndex < (local_108.Array)->NumBits);
    }
  }
LAB_14742cac6:
  iVar17 = 0;
  uVar13 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  if (*piVar1 < (int)uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar13,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  iVar3 = *(int *)&(this->Pairs).Elements.field_0x28;
  local_c8 = iVar17;
  iStack_cc = 0;
  uStack_dc = 1;
  if (iVar3 != 0) {
    puVar19 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)TStack_140.Array;
    }
    uVar13 = *puVar19;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar17;
      local_c8 = local_c8 + 0x20;
      iVar17 = iVar17 + 1;
      iStack_cc = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14742cb6e;
      uVar13 = puVar19[lVar11 + 1];
    }
    uStack_dc = -uVar13 & uVar13;
    uVar10 = (ulonglong)uStack_dc * 2 + 1;
    lVar11 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_118 = (int)lVar11;
    iStack_cc = local_c8 + -1 + local_118;
    if (iVar3 < iStack_cc) {
      iStack_cc = iVar3;
    }
  }
LAB_14742cb6e:
  uStack_d0 = 0xffffffff;
  uStack_c4 = local_9c;
  TStack_140._padding_ = CONCAT44(uStack_dc,iVar17);
  TStack_140.UnvisitedBitMask = 0xffffffff;
  TStack_140._28_4_ = local_9c;
  TStack_140.BaseBitIndex = local_c8;
  local_e8 = this;
  iStack_e0 = iVar17;
  local_d8 = (undefined1 *)TStack_140.Array;
  TStack_140.CurrentBitIndex = iStack_cc;
  if (iStack_cc < iVar3) {
    do {
      lVar20 = (longlong)TStack_140.CurrentBitIndex;
      lVar11 = *(longlong *)
                (*(longlong *)&(this->Pairs).Elements + (longlong)TStack_140.CurrentBitIndex * 0x14)
      ;
      uVar13 = ::GetTypeHash((FNameEntryId)(uint)lVar11);
      if (local_98._8_4_ != local_64) {
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        for (iVar17 = *(int *)(FVar9.Data +
                              (ulonglong)(local_50 - 1 & (int)((ulonglong)lVar11 >> 0x20) + uVar13)
                              * 4); iVar17 != -1;
            iVar17 = *(int *)(local_98._0_8_ + (longlong)iVar17 * 0x10 + 8)) {
          if (*(longlong *)(local_98._0_8_ + (longlong)iVar17 * 0x10) == lVar11) goto LAB_14742ccee;
        }
      }
      pFVar2 = (FScriptContainerElement *)(*(longlong *)&(this->Pairs).Elements + lVar20 * 0x14);
      pFVar5 = (param_1->AllocatorInstance).Data;
      if (((pFVar5 <= pFVar2) && (pFVar2 < pFVar5 + (longlong)*piVar1 * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        iVar17 = (*pcVar6)();
        return iVar17;
      }
      iVar17 = param_1->ArrayNum;
      if (iVar17 == *piVar1) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar17 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar17 * 8) =
           *(undefined8 *)pFVar2;
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_98,
                 (FName *)local_114,
                 (bool *)(*(longlong *)&(this->Pairs).Elements +
                         (longlong)TStack_140.CurrentBitIndex * 0x14));
LAB_14742ccee:
      TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
    } while (TStack_140.CurrentBitIndex < (TStack_140.Array)->NumBits);
  }
  iVar17 = param_1->ArrayNum;
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return iVar17;
}

// Find @ 14744a7a0

FAnimMontageInstance ** __thiscall
TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
::Find(TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
       *this,UAnimMontage *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  FAnimMontageInstance **ppFVar5;
  uint uVar6;
  
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(UAnimMontage **)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          ppFVar5 = (FAnimMontageInstance **)0x0;
          if (lVar1 != 0) {
            ppFVar5 = (FAnimMontageInstance **)(lVar1 + 8);
          }
          return ppFVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (FAnimMontageInstance **)0x0;
}

// Find @ 14744a850

FCurveMetaData * __thiscall
TMapBase<FName,FCurveMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>_>
::Find(TMapBase<FName,FCurveMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  FCurveMetaData *pFVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar4 * 0x28;
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x28) == param_1) {
          pFVar5 = (FCurveMetaData *)0x0;
          if (lVar1 != 0) {
            pFVar5 = (FCurveMetaData *)(lVar1 + 8);
          }
          return pFVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x20);
      } while (iVar4 != -1);
    }
  }
  return (FCurveMetaData *)0x0;
}

// Find @ 14744a8f0

FGraphAssetPlayerInformation * __thiscall
TMapBase<FName,FGraphAssetPlayerInformation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGraphAssetPlayerInformation,0>_>
::Find(TMapBase<FName,FGraphAssetPlayerInformation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGraphAssetPlayerInformation,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == param_1) {
          pFVar4 = (FName *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pFVar4 = pFVar2 + 1;
          }
          return (FGraphAssetPlayerInformation *)pFVar4;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FGraphAssetPlayerInformation *)0x0;
}

// Find @ 14744a990

TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>,0>_>
::Find(TMapBase<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_> *pTVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == param_1) {
          pTVar4 = (TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_> *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pTVar4 = (TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_> *)(pFVar2 + 1);
          }
          return pTVar4;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_> *)0x0;
}

// Find @ 14744aa30

TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>,0>_>
::Find(TMapBase<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> *pTVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == param_1) {
          pTVar4 = (TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pTVar4 = (TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> *)
                     (pFVar2 + 1);
          }
          return pTVar4;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> *)0x0;
}

// Find @ 14744aad0

TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
TMapBase<FName,TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,0>_>
::Find(TMapBase<FName,TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,0>_>
       *this,FName param_1)

{
  uint uVar1;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pTVar2 = (TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pTVar2 = (TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                     (pFVar4 + 1);
          }
          return pTVar2;
        }
        uVar1 = pFVar4[5].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0;
}

// Emplace<FName_const_&> @ 1474a4e40

TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
* __thiscall
TMapBase<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>_>
::Emplace<FName_const_&>
          (TMapBase<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>_>
           *this,FName *param_1)

{
  undefined8 uVar1;
  TMapBase<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>_>
  *pTVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  TKeyInitializer<FName_const_&> local_res8;
  FSparseArrayAllocationInfo local_18;
  
  local_res8.Key = param_1;
  TSparseArrayBase<288,8,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
  ::AddUninitialized((TSparseArrayBase<288,8,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                      *)this,&local_18);
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_>
       *)0x0) {
    TKeyInitializer<FName_const_&>::
    operator<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
              (&local_res8,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x118) = 0xffffffff;
  }
  uVar1 = *(undefined8 *)local_18.Pointer;
  local_res8.Key._0_4_ = local_18.Index;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  uVar4 = uVar4 + (int)((ulonglong)uVar1 >> 0x20);
  bVar3 = TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
          ::TryReplaceExisting(&this->Pairs,uVar4,local_18.Pointer,(int *)&local_res8,(bool *)0x0);
  lVar5 = (longlong)(int)local_res8.Key;
  if (!bVar3) {
    TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
    ::RehashOrLink(&this->Pairs,uVar4,local_18.Pointer,(int)local_res8.Key);
  }
  pTVar2 = *(TMapBase<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>_>
             **)&(this->Pairs).Elements.field_0x900;
  if (pTVar2 != (TMapBase<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>_>
                 *)0x0) {
    this = pTVar2;
  }
  return (TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          *)(&(this->Pairs).Elements.field_0x8 + lVar5 * 0x120);
}

// Emplace<FName_const_&> @ 1474a4f10

TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
* __thiscall
TMapBase<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
::Emplace<FName_const_&>
          (TMapBase<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
           *this,FName *param_1)

{
  undefined8 uVar1;
  TMapBase<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
  *pTVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  TKeyInitializer<FName_const_&> local_res8;
  FSparseArrayAllocationInfo local_18;
  
  local_res8.Key = param_1;
  TSparseArrayBase<96,8,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
  ::AddUninitialized((TSparseArrayBase<96,8,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                      *)this,&local_18);
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>
       *)0x0) {
    TKeyInitializer<FName_const_&>::
    operator<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_TTuple<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
              (&local_res8,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x58) = 0xffffffff;
  }
  uVar1 = *(undefined8 *)local_18.Pointer;
  local_res8.Key._0_4_ = local_18.Index;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  uVar4 = uVar4 + (int)((ulonglong)uVar1 >> 0x20);
  bVar3 = TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
          ::TryReplaceExisting(&this->Pairs,uVar4,local_18.Pointer,(int *)&local_res8,(bool *)0x0);
  lVar5 = (longlong)(int)local_res8.Key;
  if (!bVar3) {
    TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
    ::RehashOrLink(&this->Pairs,uVar4,local_18.Pointer,(int)local_res8.Key);
  }
  pTVar2 = *(TMapBase<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
             **)&(this->Pairs).Elements.field_0x180;
  if (pTVar2 != (TMapBase<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
                 *)0x0) {
    this = pTVar2;
  }
  return (TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *)(&(this->Pairs).Elements.field_0x8 + lVar5 * 0x60);
}

// EmplaceByHash<FName_const_&> @ 1474a5680

TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
* __thiscall
TMapBase<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>_>
::EmplaceByHash<FName_const_&>
          (TMapBase<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>_>
           *this,uint param_1,FName *param_2)

{
  TMapBase<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>_>
  *pTVar1;
  bool bVar2;
  TKeyInitializer<FName_const_&> local_res8;
  FSparseArrayAllocationInfo local_18;
  
  local_res8.Key = param_2;
  TSparseArrayBase<288,8,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
  ::AddUninitialized((TSparseArrayBase<288,8,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                      *)this,&local_18);
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_>
       *)0x0) {
    TKeyInitializer<FName_const_&>::
    operator<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
              (&local_res8,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x118) = 0xffffffff;
  }
  local_res8.Key._0_4_ = local_18.Index;
  bVar2 = TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,(int *)&local_res8,(bool *)0x0)
  ;
  if (!bVar2) {
    TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,(int)local_res8.Key);
  }
  pTVar1 = *(TMapBase<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>_>
             **)&(this->Pairs).Elements.field_0x900;
  if (pTVar1 != (TMapBase<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>_>
                 *)0x0) {
    this = pTVar1;
  }
  return (TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          *)(&(this->Pairs).Elements.field_0x8 + (longlong)(int)local_res8.Key * 0x120);
}

// EmplaceByHash<FName_const_&> @ 1474a5740

TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
* __thiscall
TMapBase<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
::EmplaceByHash<FName_const_&>
          (TMapBase<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
           *this,uint param_1,FName *param_2)

{
  TMapBase<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
  *pTVar1;
  bool bVar2;
  TKeyInitializer<FName_const_&> local_res8;
  FSparseArrayAllocationInfo local_18;
  
  local_res8.Key = param_2;
  TSparseArrayBase<96,8,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
  ::AddUninitialized((TSparseArrayBase<96,8,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                      *)this,&local_18);
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>
       *)0x0) {
    TKeyInitializer<FName_const_&>::
    operator<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_TTuple<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
              (&local_res8,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x58) = 0xffffffff;
  }
  local_res8.Key._0_4_ = local_18.Index;
  bVar2 = TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,(int *)&local_res8,(bool *)0x0)
  ;
  if (!bVar2) {
    TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,(int)local_res8.Key);
  }
  pTVar1 = *(TMapBase<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
             **)&(this->Pairs).Elements.field_0x180;
  if (pTVar1 != (TMapBase<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
                 *)0x0) {
    this = pTVar1;
  }
  return (TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *)(&(this->Pairs).Elements.field_0x8 + (longlong)(int)local_res8.Key * 0x60);
}

// FindOrAddImpl<FName_const_&> @ 1474a65b0

FAnimNotifyArray * __thiscall
TMapBase<FName,FAnimNotifyArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimNotifyArray,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,FAnimNotifyArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimNotifyArray,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (FAnimNotifyArray *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,FAnimNotifyArray>,TDefaultMapHashableKeyFuncs<FName,FAnimNotifyArray,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FAnimNotifyArray *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// Find @ 1474d2ef0

FCachedPose * __thiscall
TMapBase<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose,0>_>
::Find(TMapBase<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose,0>_>
       *this,FAnimNode_SaveCachedPose *param_1)

{
  TMapBase<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose,0>_>
  *pTVar1;
  int iVar2;
  FCachedPose *pFVar3;
  undefined1 *puVar4;
  uint uVar5;
  FAnimNode_SaveCachedPose *local_res8 [4];
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  local_res8[0] = param_1;
  iVar2 = TSet<TTuple<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose>,TDefaultMapHashableKeyFuncs<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
          ::FindIndexByHash<FAnimNode_SaveCachedPose_const_*>
                    (&this->Pairs,uVar5 >> 0x10 ^ uVar5,local_res8);
  if (iVar2 != -1) {
    pTVar1 = *(TMapBase<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose,0>_>
               **)&(this->Pairs).Elements.field_0x1100;
    if (pTVar1 != (TMapBase<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose,0>_>
                   *)0x0) {
      this = pTVar1;
    }
    puVar4 = &(this->Pairs).Elements.field_0x0 + (longlong)iVar2 * 0x88;
    pFVar3 = (FCachedPose *)0x0;
    if (puVar4 != (undefined1 *)0x0) {
      pFVar3 = (FCachedPose *)(puVar4 + 8);
    }
    return pFVar3;
  }
  return (FCachedPose *)0x0;
}

// Find @ 1474d2f70

FAnimGraphBlendOptions * __thiscall
TMapBase<FName,FAnimGraphBlendOptions,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGraphBlendOptions,0>_>
::Find(TMapBase<FName,FAnimGraphBlendOptions,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGraphBlendOptions,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FAnimGraphBlendOptions *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pFVar2 = (FAnimGraphBlendOptions *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pFVar2 = (FAnimGraphBlendOptions *)(pFVar4 + 1);
          }
          return pFVar2;
        }
        uVar1 = pFVar4[5].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FAnimGraphBlendOptions *)0x0;
}

// FindOrAddImpl<FName_const_&> @ 1475275a0

FAnimGroupInstance * __thiscall
TMapBase<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x88 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (FAnimGroupInstance *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[0x10].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,FAnimGroupInstance>,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FAnimGroupInstance *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x88 + 8);
}

// GenerateKeyArray<TSizedDefaultAllocator<32>_> @ 147527d10

void __thiscall
TMapBase<FName,enum_ECustomAttributeBlendType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_ECustomAttributeBlendType,0>_>
::GenerateKeyArray<TSizedDefaultAllocator<32>_>
          (void *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  TBitArray<FDefaultBitArrayAllocator> *pTVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar11 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &param_1->ArrayMax;
  iVar10 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar11,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar4 = *(int *)((longlong)this + 0x28);
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
  uVar11 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar4 != 0) {
    pTVar13 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar13 = TStack_40.Array;
    }
    uVar5 = *(uint *)(pTVar13->AllocatorInstance).InlineData;
    while (uVar5 == 0) {
      lVar9 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_147527df2;
      uVar5 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar9 * 4 + 4);
    }
    uVar11 = -uVar5 & uVar5;
    uVar3 = (ulonglong)uVar11 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar9 + -1 + iVar12;
    if (iVar4 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar4;
    }
  }
LAB_147527df2:
  TStack_40._padding_ = CONCAT44(uVar11,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < *(int *)((longlong)this + 0x28)) {
    do {
      pFVar2 = (FScriptContainerElement *)
               (*(longlong *)this + (longlong)TStack_40.CurrentBitIndex * 0x14);
      pFVar6 = (param_1->AllocatorInstance).Data;
      if (((pFVar6 <= pFVar2) && (pFVar2 < pFVar6 + (longlong)*piVar1 * 8)) &&
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
      iVar10 = param_1->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar10 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8) =
           *(undefined8 *)pFVar2;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// Find @ 147554260

FTracker * __thiscall
TMapBase<FAnimNode_Base_const_*,FAnimSubsystemInstance_NodeRelevancy::FTracker,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAnimNode_Base_const_*,FAnimSubsystemInstance_NodeRelevancy::FTracker,0>_>
::Find(TMapBase<FAnimNode_Base_const_*,FAnimSubsystemInstance_NodeRelevancy::FTracker,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAnimNode_Base_const_*,FAnimSubsystemInstance_NodeRelevancy::FTracker,0>_>
       *this,FAnimNode_Base *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  FTracker *pFVar5;
  uint uVar6;
  
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x28;
        if (*(FAnimNode_Base **)(lVar2 + (longlong)iVar3 * 0x28) == param_1) {
          pFVar5 = (FTracker *)0x0;
          if (lVar1 != 0) {
            pFVar5 = (FTracker *)(lVar1 + 8);
          }
          return pFVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x20);
      } while (iVar3 != -1);
    }
  }
  return (FTracker *)0x0;
}

// Find @ 147554310

FAnimGroupInstance * __thiscall
TMapBase<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_>
::Find(TMapBase<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FAnimGroupInstance *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0x88 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pFVar2 = (FAnimGroupInstance *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pFVar2 = (FAnimGroupInstance *)(pFVar4 + 1);
          }
          return pFVar2;
        }
        uVar1 = pFVar4[0x10].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FAnimGroupInstance *)0x0;
}

// Emplace<FPrimaryAssetId_const_&,TSharedPtr<FAssetBundleData,1>_const_&> @ 1475934d0

TSharedPtr<FAssetBundleData,1> * __thiscall
TMapBase<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>,0>_>
::Emplace<FPrimaryAssetId_const_&,TSharedPtr<FAssetBundleData,1>_const_&>
          (TMapBase<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>,0>_>
           *this,FPrimaryAssetId *param_1,TSharedPtr<FAssetBundleData,1> *param_2)

{
  int iVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar8 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar8 + 4 + (longlong)iVar6 * 0x28);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar8 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar6);
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>_>_> *)0x0) {
    FVar4 = param_1->PrimaryAssetName;
    *(FName *)local_18.Pointer = (param_1->PrimaryAssetType).Name;
    *(FName *)((longlong)local_18.Pointer + 8) = FVar4;
    *(FAssetBundleData **)((longlong)local_18.Pointer + 0x10) = param_2->Object;
    pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)((longlong)local_18.Pointer + 0x18) = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(undefined4 *)((longlong)local_18.Pointer + 0x20) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  uVar7 = ::GetTypeHash(local_18.Pointer);
  bVar5 = TSet<TTuple<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>_>,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar7,local_18.Pointer,local_res8,(bool *)0x0);
  lVar8 = (longlong)local_res8[0];
  if (!bVar5) {
    TSet<TTuple<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>_>,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar7,local_18.Pointer,local_res8[0]);
  }
  return (TSharedPtr<FAssetBundleData,1> *)
         (*(longlong *)&(this->Pairs).Elements + lVar8 * 0x28 + 0x10);
}

// Emplace<FPrimaryAssetId_const_&,TSharedPtr<FAssetBundleData,1>_> @ 147593610

TSharedPtr<FAssetBundleData,1> * __thiscall
TMapBase<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>,0>_>
::Emplace<FPrimaryAssetId_const_&,TSharedPtr<FAssetBundleData,1>_>
          (TMapBase<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>,0>_>
           *this,FPrimaryAssetId *param_1,TSharedPtr<FAssetBundleData,1> *param_2)

{
  int iVar1;
  int iVar2;
  FName FVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  TSparseSetElement<TTuple<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>_>_> *pTVar7;
  longlong lVar8;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar8 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar8 + 4 + (longlong)iVar5 * 0x28);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar8 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  if (local_28.Pointer ==
      (TSparseSetElement<TTuple<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>_>_> *)0x0) {
    pTVar7 = (TSparseSetElement<TTuple<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>_>_> *)0x0;
  }
  else {
    FVar3 = param_1->PrimaryAssetName;
    *(FName *)local_28.Pointer = (param_1->PrimaryAssetType).Name;
    *(FName *)((longlong)local_28.Pointer + 8) = FVar3;
    *(FAssetBundleData **)((longlong)local_28.Pointer + 0x10) = param_2->Object;
    *(TReferenceControllerBase<1> **)((longlong)local_28.Pointer + 0x18) =
         (param_2->SharedReferenceCount).ReferenceController;
    (param_2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_2->Object = (FAssetBundleData *)0x0;
    *(undefined4 *)((longlong)local_28.Pointer + 0x20) = 0xffffffff;
    pTVar7 = local_28.Pointer;
  }
  local_res8[0] = local_28.Index;
  uVar6 = ::GetTypeHash((FPrimaryAssetId *)pTVar7);
  bVar4 = TSet<TTuple<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>_>,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,pTVar7,local_res8,(bool *)0x0);
  lVar8 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>_>,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,pTVar7,local_res8[0]);
  }
  return (TSharedPtr<FAssetBundleData,1> *)
         (*(longlong *)&(this->Pairs).Elements + lVar8 * 0x28 + 0x10);
}

// Emplace<FName_const_&> @ 147593750

FCurveMetaData * __thiscall
TMapBase<FName,FCurveMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>_>
::Emplace<FName_const_&>
          (TMapBase<FName,FCurveMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>_>
           *this,FName *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  TKeyInitializer<FName_const_&> local_res8;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  local_res8.Key = param_1;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar7 + 4 + (longlong)iVar5 * 0x28);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar7 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FName,FCurveMetaData>_> *)0x0) {
    TKeyInitializer<FName_const_&>::operator<FName,FCurveMetaData>_TTuple<FName,FCurveMetaData>
              (&local_res8,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x20) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)local_18.Pointer;
  local_res8.Key._0_4_ = local_18.Index;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar6 = uVar6 + (int)((ulonglong)uVar3 >> 0x20);
  bVar4 = TSet<TTuple<FName,FCurveMetaData>,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,local_18.Pointer,(int *)&local_res8,(bool *)0x0);
  lVar7 = (longlong)(int)local_res8.Key;
  if (!bVar4) {
    TSet<TTuple<FName,FCurveMetaData>,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,local_18.Pointer,(int)local_res8.Key);
  }
  return (FCurveMetaData *)(*(longlong *)&(this->Pairs).Elements + lVar7 * 0x28 + 8);
}

// Emplace<FName_const_&> @ 147593880

FRuntimeSkinWeightProfileData * __thiscall
TMapBase<FName,FRuntimeSkinWeightProfileData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRuntimeSkinWeightProfileData,0>_>
::Emplace<FName_const_&>
          (TMapBase<FName,FRuntimeSkinWeightProfileData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRuntimeSkinWeightProfileData,0>_>
           *this,FName *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  TKeyInitializer<FName_const_&> local_res8;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  local_res8.Key = param_1;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x88,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x88 + 4 + lVar7);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x88 + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<136,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<136,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FName,FRuntimeSkinWeightProfileData>_> *)0x0) {
    TKeyInitializer<FName_const_&>::
    operator<FName,FRuntimeSkinWeightProfileData>_TTuple<FName,FRuntimeSkinWeightProfileData>
              (&local_res8,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x80) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)local_18.Pointer;
  local_res8.Key._0_4_ = local_18.Index;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar6 = uVar6 + (int)((ulonglong)uVar3 >> 0x20);
  bVar4 = TSet<TTuple<FName,FRuntimeSkinWeightProfileData>,TDefaultMapHashableKeyFuncs<FName,FRuntimeSkinWeightProfileData,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,local_18.Pointer,(int *)&local_res8,(bool *)0x0);
  lVar7 = (longlong)(int)local_res8.Key;
  if (!bVar4) {
    TSet<TTuple<FName,FRuntimeSkinWeightProfileData>,TDefaultMapHashableKeyFuncs<FName,FRuntimeSkinWeightProfileData,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,local_18.Pointer,(int)local_res8.Key);
  }
  return (FRuntimeSkinWeightProfileData *)(*(longlong *)&(this->Pairs).Elements + lVar7 * 0x88 + 8);
}

// Emplace<FSoftObjectPath,FSoftObjectPath> @ 147593bf0

FSoftObjectPath * __thiscall
TMapBase<FSoftObjectPath,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FSoftObjectPath,0>_>
::Emplace<FSoftObjectPath,FSoftObjectPath>
          (TMapBase<FSoftObjectPath,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FSoftObjectPath,0>_>
           *this,FSoftObjectPath *param_1,FSoftObjectPath *param_2)

{
  TPairInitializer<FSoftObjectPath_&&,FSoftObjectPath_&&> local_res8 [2];
  FSoftObjectPath *local_18;
  FSoftObjectPath *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  TSet<TTuple<FSoftObjectPath,FSoftObjectPath>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FSoftObjectPath,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FSoftObjectPath_&&,FSoftObjectPath_&&>_>
            (&this->Pairs,local_res8,(bool *)&local_18);
  return (FSoftObjectPath *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)(int)local_res8[0].Key * 0x48 + 0x20);
}

// Emplace<FName,FName> @ 147595d00

FName * __thiscall
TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>::
Emplace<FName,FName>
          (TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
           *this,FName *param_1,FName *param_2)

{
  TPairInitializer<FName_&&,FName_&&> local_res8 [2];
  FName *local_18;
  FName *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_&&,FName_&&>_>(&this->Pairs,local_res8,(bool *)&local_18);
  return (FName *)(*(longlong *)&(this->Pairs).Elements + (longlong)(int)local_res8[0].Key * 0x18 +
                  8);
}

// EmplaceByHash<FName_const_&> @ 147595d50

FCurveMetaData * __thiscall
TMapBase<FName,FCurveMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>_>
::EmplaceByHash<FName_const_&>
          (TMapBase<FName,FCurveMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>_>
           *this,uint param_1,FName *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  TKeyInitializer<FName_const_&> local_res8;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  local_res8.Key = param_2;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar5 * 0x28);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FName,FCurveMetaData>_> *)0x0) {
    TKeyInitializer<FName_const_&>::operator<FName,FCurveMetaData>_TTuple<FName,FCurveMetaData>
              (&local_res8,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x20) = 0xffffffff;
  }
  local_res8.Key._0_4_ = local_18.Index;
  bVar4 = TSet<TTuple<FName,FCurveMetaData>,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,(int *)&local_res8,(bool *)0x0)
  ;
  if (!bVar4) {
    TSet<TTuple<FName,FCurveMetaData>,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,(int)local_res8.Key);
  }
  return (FCurveMetaData *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)(int)local_res8.Key * 0x28 + 8);
}

// EmplaceByHash<FName_const_&> @ 147595e70

FRuntimeSkinWeightProfileData * __thiscall
TMapBase<FName,FRuntimeSkinWeightProfileData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRuntimeSkinWeightProfileData,0>_>
::EmplaceByHash<FName_const_&>
          (TMapBase<FName,FRuntimeSkinWeightProfileData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRuntimeSkinWeightProfileData,0>_>
           *this,uint param_1,FName *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  TKeyInitializer<FName_const_&> local_res8;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  local_res8.Key = param_2;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x88,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x88 + 4 + lVar3);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x88 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<136,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<136,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FName,FRuntimeSkinWeightProfileData>_> *)0x0) {
    TKeyInitializer<FName_const_&>::
    operator<FName,FRuntimeSkinWeightProfileData>_TTuple<FName,FRuntimeSkinWeightProfileData>
              (&local_res8,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x80) = 0xffffffff;
  }
  local_res8.Key._0_4_ = local_18.Index;
  bVar4 = TSet<TTuple<FName,FRuntimeSkinWeightProfileData>,TDefaultMapHashableKeyFuncs<FName,FRuntimeSkinWeightProfileData,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,(int *)&local_res8,(bool *)0x0)
  ;
  if (!bVar4) {
    TSet<TTuple<FName,FRuntimeSkinWeightProfileData>,TDefaultMapHashableKeyFuncs<FName,FRuntimeSkinWeightProfileData,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,(int)local_res8.Key);
  }
  return (FRuntimeSkinWeightProfileData *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)(int)local_res8.Key * 0x88 + 8);
}

// FindOrAddImpl<FPrimaryAssetId_const_&,enum_UE::AssetRegistry::EDependencyProperty> @ 147598ad0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

EDependencyProperty * __thiscall
TMapBase<FPrimaryAssetId,enum_UE::AssetRegistry::EDependencyProperty,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,enum_UE::AssetRegistry::EDependencyProperty,0>_>
::FindOrAddImpl<FPrimaryAssetId_const_&,enum_UE::AssetRegistry::EDependencyProperty>
          (void *this,uint param_1,FPrimaryAssetId *param_2,EDependencyProperty *param_3)

{
  FName *pFVar1;
  uint uVar2;
  longlong lVar3;
  int local_res8 [2];
  FPrimaryAssetId *local_18;
  EDependencyProperty *local_10;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar3 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar3 = (longlong)this + 0x38;
    }
    uVar2 = *(uint *)(lVar3 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        pFVar1 = (FName *)((longlong)(int)uVar2 * 0x1c + *(longlong *)this);
        if ((*pFVar1 == (param_2->PrimaryAssetType).Name) &&
           (pFVar1[1] == param_2->PrimaryAssetName)) {
          if ((uVar2 != 0xffffffff) && (pFVar1 != (FName *)0x0)) {
            return (EDependencyProperty *)(pFVar1 + 2);
          }
          break;
        }
        uVar2 = pFVar1[2].Number;
      } while (uVar2 != 0xffffffff);
    }
  }
  local_18 = param_2;
  local_10 = param_3;
  TSet<TTuple<FPrimaryAssetId,enum_UE::AssetRegistry::EDependencyProperty>,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,enum_UE::AssetRegistry::EDependencyProperty,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<FPrimaryAssetId_const_&,enum_UE::AssetRegistry::EDependencyProperty_&&>_>
            (this,(uint)local_res8,
             (TPairInitializer<FPrimaryAssetId_const_&,UE::AssetRegistry::EDependencyProperty_&&> *)
             (ulonglong)param_1,(bool *)&local_18);
  return (EDependencyProperty *)(*(longlong *)this + (longlong)local_res8[0] * 0x1c + 0x10);
}

// FindOrAddImpl<FName_const_&> @ 147598bc0

FPrimaryAssetData * __thiscall
TMapBase<FName,FPrimaryAssetData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPrimaryAssetData,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,FPrimaryAssetData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPrimaryAssetData,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x78 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (FPrimaryAssetData *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[0xe].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,FPrimaryAssetData>,TDefaultMapHashableKeyFuncs<FName,FPrimaryAssetData,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FPrimaryAssetData *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x78 + 8);
}

// FindOrAddImpl<FName_const_&> @ 147598c70

FRuntimeSkinWeightProfileData * __thiscall
TMapBase<FName,FRuntimeSkinWeightProfileData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRuntimeSkinWeightProfileData,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,FRuntimeSkinWeightProfileData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRuntimeSkinWeightProfileData,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  FRuntimeSkinWeightProfileData *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x88 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (FRuntimeSkinWeightProfileData *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[0x10].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  pFVar3 = EmplaceByHash<FName_const_&>(this,param_1,param_2);
  return pFVar3;
}

// FindOrAddImpl<FName_const_&> @ 147598cf0

FName * __thiscall
TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>::
FindOrAddImpl<FName_const_&>
          (TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
           *this,uint param_1,FName *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x18;
        if (*(FName *)(lVar1 + (longlong)iVar2 * 0x18) == *param_2) {
          if (lVar3 != 0) goto LAB_147598d82;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
  EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
LAB_147598d82:
  return (FName *)(lVar3 + 8);
}

// FindOrAddImpl<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int> @ 147598da0

int * __thiscall
TMapBase<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>_>
::FindOrAddImpl<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>
          (TMapBase<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>_>
           *this,uint param_1,TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr> *param_2,int *param_3)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_28;
  int *local_20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    while (iVar1 != -1) {
      local_res8 = param_2->WeakPtr;
      local_28 = *(FWeakObjectPtr *)((longlong)iVar1 * 0x14 + *(longlong *)&(this->Pairs).Elements);
      bVar2 = TWeakObjectPtr<USkeletalMesh_const_,FWeakObjectPtr>::UEOpEquals<USkeletalMesh,bool>
                        ((TWeakObjectPtr<USkeletalMesh_const_,FWeakObjectPtr> *)&local_28,
                         (TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr> *)&local_res8);
      lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x14;
      if (bVar2) {
        if (lVar3 != 0) goto LAB_147598e6f;
        break;
      }
      iVar1 = *(int *)(lVar3 + 0xc);
    }
  }
  local_28 = (FWeakObjectPtr)param_2;
  local_20 = param_3;
  TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TPairInitializer<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>_&&,int_&&>_>
            (&this->Pairs,(uint)&local_res8,
             (TPairInitializer<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>_&&,int_&&> *)
             (ulonglong)param_1,(bool *)&local_28);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8.ObjectIndex * 0x14;
LAB_147598e6f:
  return (int *)(lVar3 + 8);
}

// GenerateKeyArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> @ 147599200

void __thiscall
TMapBase<FName,FRuntimeSkinWeightProfileData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRuntimeSkinWeightProfileData,0>_>
::GenerateKeyArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          (TMapBase<FName,FRuntimeSkinWeightProfileData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRuntimeSkinWeightProfileData,0>_>
           *this,TArray<FName,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  ForElementType<FName> FVar5;
  code *pcVar6;
  bool bVar7;
  ForElementType<FName> FVar8;
  longlong lVar9;
  int iVar10;
  ForElementType<FName> FVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar12 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  piVar1 = &param_1->ArrayMax;
  iVar10 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar12) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
              (8,4,uVar12,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar12 = 1;
  iVar13 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)TStack_40.Array;
    }
    uVar4 = *puVar14;
    while (uVar4 == 0) {
      lVar9 = (longlong)iVar10;
      iVar13 = iVar13 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1475992e2;
      uVar4 = puVar14[lVar9 + 1];
    }
    uVar12 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar12 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = iVar13 + -1 + (int)lVar9;
    if (iVar3 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar3;
    }
  }
LAB_1475992e2:
  TStack_40._padding_ = CONCAT44(uVar12,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar13;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      FVar5 = (param_1->AllocatorInstance).SecondaryData;
      FVar11 = (ForElementType<FName>)
               ((longlong)TStack_40.CurrentBitIndex * 0x88 + *(longlong *)&(this->Pairs).Elements);
      FVar8 = (ForElementType<FName>)param_1;
      if (FVar5 != (ForElementType<FName>)0x0) {
        FVar8 = FVar5;
      }
      if ((ulonglong)FVar8 <= (ulonglong)FVar11) {
        FVar8 = (ForElementType<FName>)param_1;
        if (FVar5 != (ForElementType<FName>)0x0) {
          FVar8 = FVar5;
        }
        if (((ulonglong)FVar11 < (ulonglong)((longlong)FVar8 + (longlong)*piVar1 * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar10 = param_1->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                           (0x408,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar10 + 1;
      FVar5 = (param_1->AllocatorInstance).SecondaryData;
      FVar8 = (ForElementType<FName>)param_1;
      if (FVar5 != (ForElementType<FName>)0x0) {
        FVar8 = FVar5;
      }
      *(undefined8 *)((longlong)FVar8 + (longlong)iVar10 * 8) = *(undefined8 *)FVar11;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// GenerateValueArray<TSizedDefaultAllocator<32>_> @ 147599480

void __thiscall
TMapBase<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*,0>_>
::GenerateValueArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*,0>_>
           *this,TArray<FSkinWeightVertexBuffer_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &param_1->ArrayMax;
  iVar9 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar11,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar11 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar4 = *puVar13;
    while (uVar4 == 0) {
      lVar8 = (longlong)iVar9;
      iVar12 = iVar12 + 0x20;
      iVar9 = iVar9 + 1;
      TStack_40.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_147599553;
      uVar4 = puVar13[lVar8 + 1];
    }
    uVar11 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar11 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar8 + -1 + iVar12;
    if (iVar3 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar3;
    }
  }
LAB_147599553:
  TStack_40._padding_ = CONCAT44(uVar11,iVar9);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar5 = (param_1->AllocatorInstance).Data;
      pFVar10 = (FScriptContainerElement *)
                (*(longlong *)&(this->Pairs).Elements + 0x10 +
                (longlong)TStack_40.CurrentBitIndex * 0x20);
      if (((pFVar5 <= pFVar10) && (pFVar10 < pFVar5 + (longlong)*piVar1 * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = param_1->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar9 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 8) =
           *(undefined8 *)pFVar10;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// GenerateValueArray<TSizedDefaultAllocator<32>_> @ 1475996d0

void __thiscall
TMapBase<FName,FCurveMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>_>
::GenerateValueArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FName,FCurveMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>_>
           *this,TArray<FCurveMetaData,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FCurveMetaData *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FCurveMetaData *pFVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar10 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  DestructItems<FCurveMetaData,int>
            ((FCurveMetaData *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  iVar11 = 0;
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar10,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar4 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar10 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar4 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar5 = *puVar13;
    while (uVar5 == 0) {
      lVar9 = (longlong)iVar11;
      iVar12 = iVar12 + 0x20;
      iVar11 = iVar11 + 1;
      TStack_40.CurrentBitIndex = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1475997b0;
      uVar5 = puVar13[lVar9 + 1];
    }
    uVar10 = -uVar5 & uVar5;
    uVar3 = (ulonglong)uVar10 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar9 + -1 + iVar12;
    if (iVar4 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar4;
    }
  }
LAB_1475997b0:
  TStack_40._padding_ = CONCAT44(uVar10,iVar11);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < iVar4) {
    do {
      pFVar6 = (FCurveMetaData *)(param_1->AllocatorInstance).Data;
      pFVar2 = (FCurveMetaData *)
               (*(longlong *)&(this->Pairs).Elements +
               ((longlong)TStack_40.CurrentBitIndex * 5 + 1) * 8);
      if (((pFVar6 <= pFVar2) && (pFVar2 < pFVar6 + *piVar1)) &&
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
      iVar11 = param_1->ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar11 + 1;
      FCurveMetaData::FCurveMetaData
                ((FCurveMetaData *)((param_1->AllocatorInstance).Data + (longlong)iVar11 * 0x18),
                 pFVar2);
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// Find @ 1475c89d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSkinWeightProfileManager ** __thiscall
TMapBase<UWorld_*,FSkinWeightProfileManager_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorld_*,FSkinWeightProfileManager_*,0>_>
::Find(TMapBase<UWorld_*,FSkinWeightProfileManager_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorld_*,FSkinWeightProfileManager_*,0>_>
       *this,UWorld *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  FSkinWeightProfileManager **ppFVar5;
  uint uVar6;
  
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(UWorld **)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          ppFVar5 = (FSkinWeightProfileManager **)0x0;
          if (lVar1 != 0) {
            ppFVar5 = (FSkinWeightProfileManager **)(lVar1 + 8);
          }
          return ppFVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (FSkinWeightProfileManager **)0x0;
}

// Find @ 1475c8a80

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

FPrimaryAssetRulesExplicitOverride * __thiscall
TMapBase<FPrimaryAssetId,FPrimaryAssetRulesExplicitOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,FPrimaryAssetRulesExplicitOverride,0>_>
::Find(TMapBase<FPrimaryAssetId,FPrimaryAssetRulesExplicitOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,FPrimaryAssetRulesExplicitOverride,0>_>
       *this,FPrimaryAssetId *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  FPrimaryAssetRulesExplicitOverride *pFVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar3 = ::GetTypeHash(param_1);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & uVar3) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x28;
        if ((*(FName *)(lVar2 + (longlong)iVar5 * 0x28) == (param_1->PrimaryAssetType).Name) &&
           (*(FName *)(lVar1 + 8) == param_1->PrimaryAssetName)) {
          if (iVar5 == -1) {
            return (FPrimaryAssetRulesExplicitOverride *)0x0;
          }
          pFVar4 = (FPrimaryAssetRulesExplicitOverride *)0x0;
          if (lVar1 != 0) {
            pFVar4 = (FPrimaryAssetRulesExplicitOverride *)(lVar1 + 0x10);
          }
          return pFVar4;
        }
        iVar5 = *(int *)(lVar1 + 0x20);
      } while (iVar5 != -1);
    }
  }
  return (FPrimaryAssetRulesExplicitOverride *)0x0;
}

// Find @ 1475c8b30

TSharedPtr<FAssetBundleData,1> * __thiscall
TMapBase<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>,0>_>
::Find(TMapBase<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>,0>_>
       *this,FPrimaryAssetId *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  TSharedPtr<FAssetBundleData,1> *pTVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar3 = ::GetTypeHash(param_1);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & uVar3) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x28;
        if ((*(FName *)(lVar2 + (longlong)iVar5 * 0x28) == (param_1->PrimaryAssetType).Name) &&
           (*(FName *)(lVar1 + 8) == param_1->PrimaryAssetName)) {
          if (iVar5 == -1) {
            return (TSharedPtr<FAssetBundleData,1> *)0x0;
          }
          pTVar4 = (TSharedPtr<FAssetBundleData,1> *)0x0;
          if (lVar1 != 0) {
            pTVar4 = (TSharedPtr<FAssetBundleData,1> *)(lVar1 + 0x10);
          }
          return pTVar4;
        }
        iVar5 = *(int *)(lVar1 + 0x20);
      } while (iVar5 != -1);
    }
  }
  return (TSharedPtr<FAssetBundleData,1> *)0x0;
}

// Find @ 1475c8be0

FPrimaryAssetData * __thiscall
TMapBase<FName,FPrimaryAssetData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPrimaryAssetData,0>_>
::Find(TMapBase<FName,FPrimaryAssetData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPrimaryAssetData,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FPrimaryAssetData *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0x78 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pFVar2 = (FPrimaryAssetData *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pFVar2 = (FPrimaryAssetData *)(pFVar4 + 1);
          }
          return pFVar2;
        }
        uVar1 = pFVar4[0xe].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FPrimaryAssetData *)0x0;
}

// Find @ 1475c8c80

FReferencePose * __thiscall
TMapBase<FName,FReferencePose,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FReferencePose,0>_>
::Find(TMapBase<FName,FReferencePose,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FReferencePose,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  FReferencePose *pFVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar4 * 0x28;
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x28) == param_1) {
          pFVar5 = (FReferencePose *)0x0;
          if (lVar1 != 0) {
            pFVar5 = (FReferencePose *)(lVar1 + 8);
          }
          return pFVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x20);
      } while (iVar4 != -1);
    }
  }
  return (FReferencePose *)0x0;
}

// Find @ 1475c8d20

FRuntimeSkinWeightProfileData * __thiscall
TMapBase<FName,FRuntimeSkinWeightProfileData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRuntimeSkinWeightProfileData,0>_>
::Find(TMapBase<FName,FRuntimeSkinWeightProfileData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRuntimeSkinWeightProfileData,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FRuntimeSkinWeightProfileData *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0x88 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pFVar2 = (FRuntimeSkinWeightProfileData *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pFVar2 = (FRuntimeSkinWeightProfileData *)(pFVar4 + 1);
          }
          return pFVar2;
        }
        uVar1 = pFVar4[0x10].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FRuntimeSkinWeightProfileData *)0x0;
}

// Find @ 1475c8dc0

FSmartNameMapping * __thiscall
TMapBase<FName,FSmartNameMapping,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSmartNameMapping,0>_>
::Find(TMapBase<FName,FSmartNameMapping,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSmartNameMapping,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FSmartNameMapping *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x80 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == param_1) {
          pFVar4 = (FSmartNameMapping *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pFVar4 = (FSmartNameMapping *)(pFVar2 + 1);
          }
          return pFVar4;
        }
        uVar1 = pFVar2[0xf].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FSmartNameMapping *)0x0;
}

// Find @ 1475c8e60

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

TSharedRef<FPrimaryAssetTypeData,1> * __thiscall
TMapBase<FName,TSharedRef<FPrimaryAssetTypeData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>_>
::Find(TMapBase<FName,TSharedRef<FPrimaryAssetTypeData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  TSharedRef<FPrimaryAssetTypeData,1> *pTVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == param_1) {
          pTVar4 = (TSharedRef<FPrimaryAssetTypeData,1> *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pTVar4 = (TSharedRef<FPrimaryAssetTypeData,1> *)(pFVar2 + 1);
          }
          return pTVar4;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (TSharedRef<FPrimaryAssetTypeData,1> *)0x0;
}

// FindChecked @ 1475c9850

FSkinWeightVertexBuffer ** __thiscall
TMapBase<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*,0>_>
::FindChecked(TMapBase<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*,0>_>
              *this,FSkinWeightProfileStack *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*> *pTVar3;
  FSkinWeightVertexBuffer **ppFVar4;
  
  pTVar3 = TSet<TTuple<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*>,TDefaultMapHashableKeyFuncs<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*,0>,FDefaultSetAllocator>
           ::Find(&this->Pairs,param_1);
  if (pTVar3 != (TTuple<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*> *)0x0) {
    return (FSkinWeightVertexBuffer **)&pTVar3->field_0x10;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    ppFVar4 = (FSkinWeightVertexBuffer **)(*pcVar1)();
    return ppFVar4;
  }
  return (FSkinWeightVertexBuffer **)&DAT_00000010;
}

// FindChecked @ 1475c98b0

int * __thiscall
TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::FindChecked
          (TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
           *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  
  iVar4 = (param_1->Data).ArrayNum;
  if (iVar4 == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  lVar8 = 0;
  iVar6 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar6 = 0;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  iVar4 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar3,param_1);
  if ((iVar4 == -1) ||
     (lVar8 = (longlong)iVar4 * 0x20 + *(longlong *)&(this->Pairs).Elements, lVar8 == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      piVar5 = (int *)(*pcVar1)();
      return piVar5;
    }
  }
  return (int *)(lVar8 + 0x10);
}

// Remove @ 1475f1f90

int __thiscall
TMapBase<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>,0>_>
::Remove(TMapBase<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>,0>_>
         *this,FPrimaryAssetId *param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    uVar1 = ::GetTypeHash(param_1);
    iVar2 = TSet<TTuple<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>_>,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>,0>,FDefaultSetAllocator>
            ::RemoveImpl<FPrimaryAssetId>(&this->Pairs,uVar1,param_1);
    return iVar2;
  }
  return 0;
}

// Emplace<USoundClass_*_const_&,FSoundClassProperties_const_&> @ 14760b4a0

FSoundClassProperties * __thiscall
TMapBase<USoundClass_*,FSoundClassProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundClassProperties,0>_>
::Emplace<USoundClass_*_const_&,FSoundClassProperties_const_&>
          (TMapBase<USoundClass_*,FSoundClassProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundClassProperties,0>_>
           *this,USoundClass **param_1,FSoundClassProperties *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1a8,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar4 * 0x1a8 + 4 + lVar6);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x1a8 + lVar6) = 0xffffffff;
    }
  }
  TSparseArrayBase<424,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<424,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar4);
  if (local_28.Pointer != (TSparseSetElement<TTuple<USoundClass_*,FSoundClassProperties>_> *)0x0) {
    *(USoundClass **)local_28.Pointer = *param_1;
    FSoundClassProperties::FSoundClassProperties
              ((FSoundClassProperties *)((longlong)local_28.Pointer + 8),param_2);
    *(undefined4 *)((longlong)local_28.Pointer + 0x1a0) = 0xffffffff;
  }
  local_res8[0] = local_28.Index;
  uVar5 = ((uint)(*(ulonglong *)local_28.Pointer >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)local_28.Pointer >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  bVar3 = TSet<TTuple<USoundClass_*,FSoundClassProperties>,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundClassProperties,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar5,local_28.Pointer,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<USoundClass_*,FSoundClassProperties>,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundClassProperties,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar5,local_28.Pointer,local_res8[0]);
  }
  return (FSoundClassProperties *)(*(longlong *)&(this->Pairs).Elements + lVar6 * 0x1a8 + 8);
}

// Emplace<USoundClass_*_const_&,FSoundClassProperties> @ 14760b600

FSoundClassProperties * __thiscall
TMapBase<USoundClass_*,FSoundClassProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundClassProperties,0>_>
::Emplace<USoundClass_*_const_&,FSoundClassProperties>
          (TMapBase<USoundClass_*,FSoundClassProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundClassProperties,0>_>
           *this,USoundClass **param_1,FSoundClassProperties *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1a8,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar4 * 0x1a8 + 4 + lVar6);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x1a8 + lVar6) = 0xffffffff;
    }
  }
  TSparseArrayBase<424,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<424,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar4);
  if (local_28.Pointer != (TSparseSetElement<TTuple<USoundClass_*,FSoundClassProperties>_> *)0x0) {
    *(USoundClass **)local_28.Pointer = *param_1;
    FSoundClassProperties::FSoundClassProperties
              ((FSoundClassProperties *)((longlong)local_28.Pointer + 8),param_2);
    *(undefined4 *)((longlong)local_28.Pointer + 0x1a0) = 0xffffffff;
  }
  local_res8[0] = local_28.Index;
  uVar5 = ((uint)(*(ulonglong *)local_28.Pointer >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)local_28.Pointer >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  bVar3 = TSet<TTuple<USoundClass_*,FSoundClassProperties>,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundClassProperties,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar5,local_28.Pointer,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<USoundClass_*,FSoundClassProperties>,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundClassProperties,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar5,local_28.Pointer,local_res8[0]);
  }
  return (FSoundClassProperties *)(*(longlong *)&(this->Pairs).Elements + lVar6 * 0x1a8 + 8);
}

// Emplace<unsigned___int64> @ 14760e0f0

TArray<FActiveSound_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<unsigned___int64,TArray<FActiveSound_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<FActiveSound_*,TSizedDefaultAllocator<32>_>,0>_>
::Emplace<unsigned___int64>
          (TMapBase<unsigned___int64,TArray<FActiveSound_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<FActiveSound_*,TSizedDefaultAllocator<32>_>,0>_>
           *this,ulong64 *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  TSparseSetElement<TTuple<unsigned___int64,TArray<FActiveSound_*,TSizedDefaultAllocator<32>_>_>_>
  *pTVar5;
  uint uVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar7);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  pTVar5 = (TSparseSetElement<TTuple<unsigned___int64,TArray<FActiveSound_*,TSizedDefaultAllocator<32>_>_>_>
            *)0x0;
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<unsigned___int64,TArray<FActiveSound_*,TSizedDefaultAllocator<32>_>_>_>
       *)0x0) {
    *(ulong64 *)local_18.Pointer = *param_1;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x18) = 0xffffffff;
    pTVar5 = local_18.Pointer;
  }
  local_res8[0] = local_18.Index;
  uVar6 = (int)((ulonglong)*(undefined8 *)pTVar5 >> 0x20) * 0x17 + (int)*(undefined8 *)pTVar5;
  bVar3 = TSet<TTuple<unsigned___int64,TArray<FActiveSound_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<FActiveSound_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,pTVar5,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<unsigned___int64,TArray<FActiveSound_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<FActiveSound_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,pTVar5,local_res8[0]);
  }
  return (TArray<FActiveSound_*,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + lVar7 * 0x20);
}

// EmplaceByHash<unsigned___int64> @ 14760eec0

TArray<FActiveSound_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<unsigned___int64,TArray<FActiveSound_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<FActiveSound_*,TSizedDefaultAllocator<32>_>,0>_>
::EmplaceByHash<unsigned___int64>
          (TMapBase<unsigned___int64,TArray<FActiveSound_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<FActiveSound_*,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,ulong64 *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  TSparseSetElement<TTuple<unsigned___int64,TArray<FActiveSound_*,TSizedDefaultAllocator<32>_>_>_>
  *pTVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar6);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar6) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  pTVar5 = (TSparseSetElement<TTuple<unsigned___int64,TArray<FActiveSound_*,TSizedDefaultAllocator<32>_>_>_>
            *)0x0;
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<unsigned___int64,TArray<FActiveSound_*,TSizedDefaultAllocator<32>_>_>_>
       *)0x0) {
    *(ulong64 *)local_18.Pointer = *param_2;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x18) = 0xffffffff;
    pTVar5 = local_18.Pointer;
  }
  local_res8[0] = local_18.Index;
  bVar3 = TSet<TTuple<unsigned___int64,TArray<FActiveSound_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<FActiveSound_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,pTVar5,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<unsigned___int64,TArray<FActiveSound_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<FActiveSound_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,pTVar5,local_res8[0]);
  }
  return (TArray<FActiveSound_*,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + lVar6 * 0x20);
}

// FindOrAddImpl<unsigned_int_const_&> @ 14760f4b0

FAudioStats * __thiscall
TMapBase<unsigned_int,Audio::FAudioStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FAudioStats,0>_>
::FindOrAddImpl<unsigned_int_const_&>
          (TMapBase<unsigned_int,Audio::FAudioStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FAudioStats,0>_>
           *this,uint param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  uint *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x98 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (uint *)0x0) {
            return (FAudioStats *)(puVar2 + 2);
          }
          break;
        }
        uVar1 = puVar2[0x24];
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned_int,Audio::FAudioStats>,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FAudioStats,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (FAudioStats *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x98 + 8);
}

// FindOrAddImpl<unsigned_int_const_&> @ 14760f560

FAudioStats_AudioThread * __thiscall
TMapBase<unsigned_int,Audio::FAudioStats_AudioThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FAudioStats_AudioThread,0>_>
::FindOrAddImpl<unsigned_int_const_&>
          (TMapBase<unsigned_int,Audio::FAudioStats_AudioThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FAudioStats_AudioThread,0>_>
           *this,uint param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  uint *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (uint *)0x0) {
            return (FAudioStats_AudioThread *)(puVar2 + 2);
          }
          break;
        }
        uVar1 = puVar2[0x16];
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned_int,Audio::FAudioStats_AudioThread>,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FAudioStats_AudioThread,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (FAudioStats_AudioThread *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x60);
}

// FindOrAddImpl<USoundMix_*_const_&> @ 14760f610

TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>
* __thiscall
TMapBase<USoundMix_*,TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundMix_*,TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>,0>_>
::FindOrAddImpl<USoundMix_*_const_&>
          (TMapBase<USoundMix_*,TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundMix_*,TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>,0>_>
           *this,uint param_1,USoundMix **param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  USoundMix **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if ((USoundMix *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>
                    *)(plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[0xb];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<USoundMix_*,TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>_>,TDefaultMapHashableKeyFuncs<USoundMix_*,TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<USoundMix_*_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<USoundMix_*_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>
          *)(*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x60);
}

// FindOrAddImpl<FName_const_&> @ 14760f6c0

FActivatedReverb * __thiscall
TMapBase<FName,FActivatedReverb,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FActivatedReverb,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,FActivatedReverb,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FActivatedReverb,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x38 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (FActivatedReverb *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[6].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,FActivatedReverb>,TDefaultMapHashableKeyFuncs<FName,FActivatedReverb,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FActivatedReverb *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x38 + 8);
}

// GenerateKeyArray<TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> @ 14760f770

void __thiscall
TMapBase<TObjectPtr<USoundMix>,FSoundMixState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<USoundMix>,FSoundMixState,0>_>
::GenerateKeyArray<TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
          (TMapBase<TObjectPtr<USoundMix>,FSoundMixState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<USoundMix>,FSoundMixState,0>_>
           *this,TArray<TObjectPtr<USoundMix>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                 *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  ForElementType<TObjectPtr<USoundMix>_> FVar5;
  UObject *pUVar6;
  code *pcVar7;
  bool bVar8;
  ForElementType<TObjectPtr<USoundMix>_> FVar9;
  longlong lVar10;
  int iVar11;
  ForElementType<TObjectPtr<USoundMix>_> FVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar13 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  piVar1 = &param_1->ArrayMax;
  iVar11 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar13) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectPtr<USoundMix>_>_>
              (8,8,uVar13,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar13 = 1;
  iVar14 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)TStack_40.Array;
    }
    uVar4 = *puVar15;
    while (uVar4 == 0) {
      lVar10 = (longlong)iVar11;
      iVar14 = iVar14 + 0x20;
      iVar11 = iVar11 + 1;
      TStack_40.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14760f852;
      uVar4 = puVar15[lVar10 + 1];
    }
    uVar13 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar13 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = iVar14 + -1 + (int)lVar10;
    if (iVar3 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar3;
    }
  }
LAB_14760f852:
  TStack_40._padding_ = CONCAT44(uVar13,iVar11);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar14;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      FVar5 = (param_1->AllocatorInstance).SecondaryData;
      FVar12 = (ForElementType<TObjectPtr<USoundMix>_>)
               ((longlong)TStack_40.CurrentBitIndex * 0x50 + *(longlong *)&(this->Pairs).Elements);
      FVar9 = (ForElementType<TObjectPtr<USoundMix>_>)param_1;
      if (FVar5 != (ForElementType<TObjectPtr<USoundMix>_>)0x0) {
        FVar9 = FVar5;
      }
      if ((ulonglong)FVar9 <= (ulonglong)FVar12) {
        FVar9 = (ForElementType<TObjectPtr<USoundMix>_>)param_1;
        if (FVar5 != (ForElementType<TObjectPtr<USoundMix>_>)0x0) {
          FVar9 = FVar5;
        }
        if (((ulonglong)FVar12 < (ulonglong)((longlong)FVar9 + (longlong)*piVar1 * 8)) &&
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
      }
      iVar11 = param_1->ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectPtr<USoundMix>_>_>
                           (0x808,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar11 + 1;
      FVar5 = (param_1->AllocatorInstance).SecondaryData;
      FVar9 = (ForElementType<TObjectPtr<USoundMix>_>)param_1;
      if (FVar5 != (ForElementType<TObjectPtr<USoundMix>_>)0x0) {
        FVar9 = FVar5;
      }
      pUVar6 = *(UObject **)FVar12;
      *(UObject **)((longlong)FVar9 + (longlong)iVar11 * 8) = pUVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// GetKeys<TSizedDefaultAllocator<32>_> @ 14760faf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,0>_>
::GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,0>_>
           *this,TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ForElementType<unsigned_int> FVar16;
  uint *puVar17;
  undefined1 auStackY_1b8 [32];
  uint local_168;
  uint uStack_164;
  uint uStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined4 local_120;
  int local_11c;
  int local_118;
  uint local_114;
  longlong *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_108;
  TMapBase<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,0>_>
  *local_e8;
  uint uStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  uint local_c8;
  undefined4 uStack_c4;
  undefined4 local_9c;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  ulonglong uVar15;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  piVar1 = &param_1->ArrayMax;
  uVar15 = 0;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_1->AllocatorInstance,0,piVar1);
  }
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  uVar14 = 0;
  if (uVar11 == 0) goto LAB_14760fd99;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar11);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar11);
  uVar12 = 1;
  if (3 < uVar11) {
    uVar10 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_120 = (undefined4)lVar4;
    uVar12 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar12 <= (int)local_50)) goto LAB_14760fd99;
  local_50 = uVar12;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar12 != 0) {
    uVar11 = uVar12;
    if (uVar12 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar11 = 0;
        goto LAB_14760fc01;
      }
    }
    else {
LAB_14760fc01:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar11,4);
    }
    if (0 < (int)uVar12) {
      uVar13 = (ulonglong)uVar12;
      uVar10 = uVar15;
      do {
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        uVar8 = (longlong)(int)uVar12 - 1U & uVar10;
        uVar10 = uVar10 + 1;
        *(undefined4 *)(FVar9.Data + uVar8 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
  if (local_50 != 0) {
    local_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_168 = 0;
    uStack_164 = 1;
    uStack_154 = 0;
    uStack_150 = 0;
    uVar10 = uVar15;
    if (local_70 != 0) {
      FVar16 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar16 = local_78;
      }
      uVar11 = *(uint *)FVar16;
      uVar13 = uVar15;
      while (uVar11 == 0) {
        uStack_150 = (int)uVar13 + 0x20;
        uVar13 = (ulonglong)uStack_150;
        iVar7 = (int)uVar10;
        local_168 = iVar7 + 1;
        uVar10 = (ulonglong)local_168;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_168)
        goto LAB_14760fd02;
        uVar11 = ((uint *)((longlong)FVar16 + 4))[iVar7];
      }
      uStack_164 = -uVar11 & uVar11;
      uVar10 = (ulonglong)uStack_164 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      local_11c = (int)lVar4;
      uStack_154 = local_11c + -1 + uStack_150;
      uVar10 = (ulonglong)uStack_154;
      if ((int)local_70 < (int)uStack_154) {
LAB_14760fd02:
        uVar10 = (ulonglong)local_70;
        uStack_154 = local_70;
      }
    }
    local_110 = (longlong *)local_98;
    local_108._padding_ = CONCAT44(uStack_164,local_168);
    local_108.CurrentBitIndex = uStack_154;
    local_108.UnvisitedBitMask = 0xffffffff;
    local_108._28_4_ = uStack_14c;
    local_108.BaseBitIndex = uStack_150;
    if ((int)uVar10 < (int)local_70) {
      do {
        iVar7 = (int)uVar10;
        uVar11 = local_50 - 1 & *(uint *)(*local_110 + (longlong)iVar7 * 0xc);
        lVar4 = *local_110 + (longlong)iVar7 * 0xc;
        *(uint *)(lVar4 + 8) = uVar11;
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        uVar10 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar11;
        *(undefined4 *)(lVar4 + 4) = *(undefined4 *)(FVar9.Data + uVar10 * 4);
        *(int *)(FVar9.Data + uVar10 * 4) = iVar7;
        local_108.UnvisitedBitMask = local_108.UnvisitedBitMask & ~local_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_108);
        uVar10 = (ulonglong)(uint)local_108.CurrentBitIndex;
      } while (local_108.CurrentBitIndex < (local_108.Array)->NumBits);
    }
  }
LAB_14760fd99:
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  if (*piVar1 < (int)uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar11,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar11 = *(uint *)&(this->Pairs).Elements.field_0x28;
  TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar10 = uVar15;
  local_c8 = uVar14;
  uStack_dc = 1;
  if (uVar11 != 0) {
    puVar17 = *(uint **)&(this->Pairs).Elements.field_0x20;
    uVar10 = (ulonglong)uVar11;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)TStack_140.Array;
    }
    uVar12 = *puVar17;
    uVar13 = uVar15;
    local_c8 = 0;
    uVar14 = 0;
    while (uVar12 == 0) {
      iVar7 = (int)uVar15;
      local_c8 = (int)uVar13 + 0x20;
      uVar13 = (ulonglong)local_c8;
      uVar14 = iVar7 + 1;
      uVar15 = (ulonglong)uVar14;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar14)
      goto LAB_14760fe4e;
      uVar12 = puVar17[(longlong)iVar7 + 1];
    }
    uStack_dc = -uVar12 & uVar12;
    uVar15 = (ulonglong)uStack_dc * 2 + 1;
    lVar4 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_118 = (int)lVar4;
    uVar12 = (local_c8 - 1) + local_118;
    if ((int)uVar11 < (int)uVar12) {
      uVar12 = uVar11;
    }
    uVar10 = (ulonglong)uVar12;
  }
LAB_14760fe4e:
  uStack_d0 = 0xffffffff;
  uStack_cc = (uint)uVar10;
  uStack_c4 = local_9c;
  TStack_140._padding_ = CONCAT44(uStack_dc,uVar14);
  TStack_140.UnvisitedBitMask = 0xffffffff;
  TStack_140._28_4_ = local_9c;
  TStack_140.BaseBitIndex = local_c8;
  local_e8 = this;
  uStack_e0 = uVar14;
  local_d8 = (undefined1 *)TStack_140.Array;
  TStack_140.CurrentBitIndex = uStack_cc;
  if ((int)uStack_cc < (int)uVar11) {
    do {
      lVar4 = *(longlong *)&(this->Pairs).Elements;
      uVar14 = *(uint *)((longlong)(int)uVar10 * 0x40 + lVar4);
      if (local_98._8_4_ != local_64) {
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        for (iVar7 = *(int *)(FVar9.Data + (ulonglong)(local_50 - 1 & uVar14) * 4); iVar7 != -1;
            iVar7 = *(int *)(local_98._0_8_ + (longlong)iVar7 * 0xc + 4)) {
          if (*(uint *)(local_98._0_8_ + (longlong)iVar7 * 0xc) == uVar14) goto LAB_14760ffaa;
        }
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      pFVar2 = (FScriptContainerElement *)((longlong)(int)uVar10 * 0x40 + lVar4);
      if (((pFVar3 <= pFVar2) && (pFVar2 < pFVar3 + (longlong)*piVar1 * 4)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
      iVar7 = param_1->ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar7 + 1;
      *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 4) =
           *(undefined4 *)pFVar2;
      TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
      Emplace<unsigned_int_const_&>
                ((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)local_98
                 ,&local_114,
                 (bool *)((longlong)TStack_140.CurrentBitIndex * 0x40 +
                         *(longlong *)&(this->Pairs).Elements));
LAB_14760ffaa:
      TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
      uVar10 = (ulonglong)(uint)TStack_140.CurrentBitIndex;
    } while (TStack_140.CurrentBitIndex < (TStack_140.Array)->NumBits);
  }
  iVar7 = param_1->ArrayNum;
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return iVar7;
}

// Find @ 147638390

FSoundClassDynamicProperties * __thiscall
TMapBase<USoundClass_*,FSoundClassDynamicProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundClassDynamicProperties,0>_>
::Find(TMapBase<USoundClass_*,FSoundClassDynamicProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundClassDynamicProperties,0>_>
       *this,USoundClass *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  FSoundClassDynamicProperties *pFVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if ((USoundClass *)*plVar2 == param_1) {
          pFVar4 = (FSoundClassDynamicProperties *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pFVar4 = (FSoundClassDynamicProperties *)(plVar2 + 1);
          }
          return pFVar4;
        }
        iVar1 = (int)plVar2[5];
      } while (iVar1 != -1);
    }
  }
  return (FSoundClassDynamicProperties *)0x0;
}

// Find @ 147638440

FSoundClassProperties * __thiscall
TMapBase<USoundClass_*,FSoundClassProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundClassProperties,0>_>
::Find(TMapBase<USoundClass_*,FSoundClassProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundClassProperties,0>_>
       *this,USoundClass *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  FSoundClassProperties *pFVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x1a8 + *(longlong *)&(this->Pairs).Elements);
        if ((USoundClass *)*plVar2 == param_1) {
          pFVar4 = (FSoundClassProperties *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pFVar4 = (FSoundClassProperties *)(plVar2 + 1);
          }
          return pFVar4;
        }
        iVar1 = (int)plVar2[0x34];
      } while (iVar1 != -1);
    }
  }
  return (FSoundClassProperties *)0x0;
}

// Find @ 1476384f0

FSoundMixClassOverride * __thiscall
TMapBase<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>
::Find(TMapBase<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>
       *this,USoundClass *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  FSoundMixClassOverride *pFVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x70 + *(longlong *)&(this->Pairs).Elements);
        if ((USoundClass *)*plVar2 == param_1) {
          pFVar4 = (FSoundMixClassOverride *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pFVar4 = (FSoundMixClassOverride *)(plVar2 + 1);
          }
          return pFVar4;
        }
        iVar1 = (int)plVar2[0xd];
      } while (iVar1 != -1);
    }
  }
  return (FSoundMixClassOverride *)0x0;
}

// Find @ 147638590

TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>
* __thiscall
TMapBase<USoundMix_*,TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundMix_*,TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>,0>_>
::Find(TMapBase<USoundMix_*,TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundMix_*,TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>,0>_>
       *this,USoundMix *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>
  *pTVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if ((USoundMix *)*plVar2 == param_1) {
          pTVar4 = (TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>
                    *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>
                      *)(plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[0xb];
      } while (iVar1 != -1);
    }
  }
  return (TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>
          *)0x0;
}

// Find @ 147638640

FSoundMixState * __thiscall
TMapBase<TObjectPtr<USoundMix>,FSoundMixState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<USoundMix>,FSoundMixState,0>_>
::Find(TMapBase<TObjectPtr<USoundMix>,FSoundMixState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<USoundMix>,FSoundMixState,0>_>
       *this,TObjectPtr<USoundMix_const_> param_1)

{
  TObjectPtr<USoundMix_const_>_u_0 TVar1;
  int iVar2;
  FSoundMixState *pFVar3;
  uint uVar4;
  longlong lVar5;
  TObjectPtr<USoundMix_const_>_u_0 local_res8;
  
                    /* WARNING: Load size is inaccurate */
  TVar1.DebugPtr = *param_1.field0_0x0;
  local_res8 = TVar1;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (TVar1.DebugPtr != (USoundMix *)0x0) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar1.DebugPtr != (USoundMix *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
  }
  uVar4 = ((uint)((ulonglong)TVar1.DebugPtr >> 0x14) & 0xffff ^
          (uint)((ulonglong)TVar1.DebugPtr >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar2 = TSet<TTuple<TObjectPtr<USoundMix>,FSoundMixState>,TDefaultMapHashableKeyFuncs<TObjectPtr<USoundMix>,FSoundMixState,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectPtr<USoundMix_const_>_>
                    (&this->Pairs,uVar4 >> 0x10 ^ uVar4,
                     (TObjectPtr<USoundMix_const_> *)&local_res8.ObjectPtr);
  if (iVar2 != -1) {
    lVar5 = (longlong)iVar2 * 0x50 + *(longlong *)&(this->Pairs).Elements;
    pFVar3 = (FSoundMixState *)0x0;
    if (lVar5 != 0) {
      pFVar3 = (FSoundMixState *)(lVar5 + 8);
    }
    return pFVar3;
  }
  return (FSoundMixState *)0x0;
}

// Find @ 147638700

IAudioInfoFactory ** __thiscall
TMapBase<FName,IAudioInfoFactory_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,IAudioInfoFactory_*,0>_>
::Find(TMapBase<FName,IAudioInfoFactory_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,IAudioInfoFactory_*,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  IAudioInfoFactory **ppIVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar4 * 0x18;
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x18) == param_1) {
          ppIVar5 = (IAudioInfoFactory **)0x0;
          if (lVar1 != 0) {
            ppIVar5 = (IAudioInfoFactory **)(lVar1 + 8);
          }
          return ppIVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return (IAudioInfoFactory **)0x0;
}

// Find @ 1476387a0

float * __thiscall
TMapBase<enum_ESoundwaveSampleRateSettings,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ESoundwaveSampleRateSettings,float,0>_>
::Find(void *this,ESoundwaveSampleRateSettings param_1)

{
  undefined4 uVar1;
  float *pfVar2;
  ESoundwaveSampleRateSettings *pEVar3;
  longlong lVar4;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar4 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar4 = (longlong)this + 0x38;
    }
    uVar1 = *(int *)(lVar4 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pEVar3 = (ESoundwaveSampleRateSettings *)((longlong)(int)uVar1 * 0x10 + *(longlong *)this);
        if (*pEVar3 == param_1) {
          pfVar2 = (float *)0x0;
          if (pEVar3 != (ESoundwaveSampleRateSettings *)0x0) {
            pfVar2 = (float *)(pEVar3 + 4);
          }
          return pfVar2;
        }
        uVar1 = *(undefined4 *)(pEVar3 + 8);
      } while (uVar1 != 0xffffffff);
    }
  }
  return (float *)0x0;
}

// Find @ 147638810

TArray<FActiveSound_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<unsigned___int64,TArray<FActiveSound_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<FActiveSound_*,TSizedDefaultAllocator<32>_>,0>_>
::Find(TMapBase<unsigned___int64,TArray<FActiveSound_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<FActiveSound_*,TSizedDefaultAllocator<32>_>,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  ulong64 *puVar2;
  TArray<FActiveSound_*,TSizedDefaultAllocator<32>_> *pTVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == param_1) {
          pTVar3 = (TArray<FActiveSound_*,TSizedDefaultAllocator<32>_> *)0x0;
          if (puVar2 != (ulong64 *)0x0) {
            pTVar3 = (TArray<FActiveSound_*,TSizedDefaultAllocator<32>_> *)(puVar2 + 1);
          }
          return pTVar3;
        }
        iVar1 = (int)puVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TArray<FActiveSound_*,TSizedDefaultAllocator<32>_> *)0x0;
}

// Find @ 147638880

bool * __thiscall
TMapBase<unsigned___int64,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,bool,0>_>
::Find(TMapBase<unsigned___int64,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,bool,0>_>
       *this,ulong64 param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  bool *pbVar4;
  ForElementType<FSetElementId> FVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(ulong64 *)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          pbVar4 = (bool *)0x0;
          if (lVar1 != 0) {
            pbVar4 = (bool *)(lVar1 + 8);
          }
          return pbVar4;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (bool *)0x0;
}

// FindChecked @ 147638a60

FAudioDeviceContainer * __thiscall
TMapBase<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,0>_>
::FindChecked(TMapBase<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,0>_>
              *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FAudioDeviceContainer *pFVar4;
  uint *puVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar3 = *(uint *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar3 * 0x40 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar5 == param_1) {
          if (puVar5 != (uint *)0x0) {
            return (FAudioDeviceContainer *)(puVar5 + 2);
          }
          break;
        }
        uVar3 = puVar5[0xe];
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FAudioDeviceContainer *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FAudioDeviceContainer *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 147638b00

FAudioDeviceContainer * __thiscall
TMapBase<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,0>_>
::FindChecked(TMapBase<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,0>_>
              *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FAudioDeviceContainer *pFVar4;
  uint *puVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar3 = *(uint *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar3 * 0x40 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar5 == param_1) {
          if (puVar5 != (uint *)0x0) {
            return (FAudioDeviceContainer *)(puVar5 + 2);
          }
          break;
        }
        uVar3 = puVar5[0xe];
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (FAudioDeviceContainer *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FAudioDeviceContainer *)(*pcVar1)();
  return pFVar4;
}

// Remove @ 147652e40

int __thiscall
TMapBase<USoundMix_*,TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundMix_*,TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>,0>_>
::Remove(TMapBase<USoundMix_*,TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundMix_*,TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>,0>_>
         *this,USoundMix *param_1)

{
  int iVar1;
  uint uVar2;
  USoundMix *local_res8 [4];
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    uVar2 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    local_res8[0] = param_1;
    iVar1 = TSet<TTuple<USoundMix_*,TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>_>,TDefaultMapHashableKeyFuncs<USoundMix_*,TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>,0>,FDefaultSetAllocator>
            ::RemoveImpl<USoundMix_const_*>(&this->Pairs,uVar2 >> 0x10 ^ uVar2,local_res8);
    return iVar1;
  }
  return 0;
}

// Emplace<FName_const_&,FBufferVisualizationData::Record> @ 147679220

Record * __thiscall
TMapBase<FName,FBufferVisualizationData::Record,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FBufferVisualizationData::Record,1>_>
::Emplace<FName_const_&,FBufferVisualizationData::Record>
          (TMapBase<FName,FBufferVisualizationData::Record,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FBufferVisualizationData::Record,1>_>
           *this,FName *param_1,Record *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  TSparseSetElement<TTuple<FName,FBufferVisualizationData::Record>_> *pTVar7;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x40 + 4 + lVar3);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x40 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  pTVar7 = (TSparseSetElement<TTuple<FName,FBufferVisualizationData::Record>_> *)0x0;
  if (local_18.Pointer != (TSparseSetElement<TTuple<FName,FBufferVisualizationData::Record>_> *)0x0)
  {
    *(FName *)local_18.Pointer = *param_1;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = 0;
    *(FScriptContainerElement **)((longlong)local_18.Pointer + 8) =
         (param_2->Name).Data.AllocatorInstance.Data;
    (param_2->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)local_18.Pointer + 0x10) = (param_2->Name).Data.ArrayNum;
    *(int *)((longlong)local_18.Pointer + 0x14) = (param_2->Name).Data.ArrayMax;
    (param_2->Name).Data.ArrayNum = 0;
    (param_2->Name).Data.ArrayMax = 0;
    FText::FText((FText *)((longlong)local_18.Pointer + 0x18),&param_2->DisplayName);
    *(UMaterialInterface **)((longlong)local_18.Pointer + 0x28) = param_2->Material;
    *(bool *)((longlong)local_18.Pointer + 0x30) = param_2->bApplyAutoExposure;
    *(undefined4 *)((longlong)local_18.Pointer + 0x38) = 0xffffffff;
    pTVar7 = local_18.Pointer;
  }
  uVar4 = *(undefined8 *)pTVar7;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
  TSet<TTuple<FName,FBufferVisualizationData::Record>,TDefaultMapHashableKeyFuncs<FName,FBufferVisualizationData::Record,1>,FDefaultSetAllocator>
  ::RehashOrLink(&this->Pairs,(int)((ulonglong)uVar4 >> 0x20) + uVar6,pTVar7,local_18.Index);
  return (Record *)(*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_18.Index * 0x40);
}

// Emplace<FName,FBufferVisualizationData::Record_const_&> @ 147679a50

Record * __thiscall
TMapBase<FName,FBufferVisualizationData::Record,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FBufferVisualizationData::Record,1>_>
::Emplace<FName,FBufferVisualizationData::Record_const_&>
          (TMapBase<FName,FBufferVisualizationData::Record,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FBufferVisualizationData::Record,1>_>
           *this,FName *param_1,Record *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  TPairInitializer<FName_&&,FBufferVisualizationData::Record_const_&> local_28;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  local_28.Key = param_1;
  local_28.Value = param_2;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x40 + 4 + lVar3);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x40 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FName,FBufferVisualizationData::Record>_> *)0x0)
  {
    TPairInitializer<FName_&&,FBufferVisualizationData::Record_const_&>::
    operator<FName,FBufferVisualizationData::Record>_TTuple<FName,FBufferVisualizationData::Record>
              (&local_28,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x38) = 0xffffffff;
  }
  uVar4 = *(undefined8 *)local_18.Pointer;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
  TSet<TTuple<FName,FBufferVisualizationData::Record>,TDefaultMapHashableKeyFuncs<FName,FBufferVisualizationData::Record,1>,FDefaultSetAllocator>
  ::RehashOrLink(&this->Pairs,(int)((ulonglong)uVar4 >> 0x20) + uVar6,local_18.Pointer,
                 local_18.Index);
  return (Record *)(*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_18.Index * 0x40);
}

// FindOrAddImpl<FAudioChunkCache::FChunkKey_const_&> @ 14767ad70

ulong64 * __thiscall
TMapBase<FAudioChunkCache::FChunkKey,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAudioChunkCache::FChunkKey,unsigned___int64,0>_>
::FindOrAddImpl<FAudioChunkCache::FChunkKey_const_&>
          (TMapBase<FAudioChunkCache::FChunkKey,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAudioChunkCache::FChunkKey,unsigned___int64,0>_>
           *this,uint param_1,FChunkKey *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FChunkKey *local_res20;
  
  iVar1 = TSet<TTuple<FAudioChunkCache::FChunkKey,unsigned___int64>,TDefaultMapHashableKeyFuncs<FAudioChunkCache::FChunkKey,unsigned___int64,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FAudioChunkCache::FChunkKey>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x30 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (ulong64 *)(lVar2 + 0x20);
  }
  local_res20 = param_2;
  TSet<TTuple<FAudioChunkCache::FChunkKey,unsigned___int64>,TDefaultMapHashableKeyFuncs<FAudioChunkCache::FChunkKey,unsigned___int64,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FAudioChunkCache::FChunkKey_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FAudioChunkCache::FChunkKey_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (ulong64 *)(*(longlong *)&(this->Pairs).Elements + 0x20 + (longlong)local_res8[0] * 0x30);
}

// FindOrAddImpl<TSharedPtr<FSoundWaveProxy,1>_const_&> @ 14767ae10

FSoundWaveMemoryTracker * __thiscall
TMapBase<TSharedPtr<FSoundWaveProxy,1>,FAudioChunkCache::FSoundWaveMemoryTracker,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FSoundWaveProxy,1>,FAudioChunkCache::FSoundWaveMemoryTracker,0>_>
::FindOrAddImpl<TSharedPtr<FSoundWaveProxy,1>_const_&>
          (TMapBase<TSharedPtr<FSoundWaveProxy,1>,FAudioChunkCache::FSoundWaveMemoryTracker,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FSoundWaveProxy,1>,FAudioChunkCache::FSoundWaveMemoryTracker,0>_>
           *this,uint param_1,TSharedPtr<FSoundWaveProxy,1> *param_2)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FSoundWaveProxy *pFVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  FSoundWaveProxy *pFVar6;
  longlong lVar7;
  ForElementType<FSetElementId> FVar8;
  int local_res8 [2];
  TSharedPtr<FSoundWaveProxy,1> *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar8 = (this->Pairs).Hash.SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar8 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    while (iVar1 != -1) {
      pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
      pFVar3 = param_2->Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      lVar4 = *(longlong *)&(this->Pairs).Elements;
      lVar7 = (longlong)iVar1 * 0x28;
      pTVar5 = *(TReferenceControllerBase<1> **)(lVar7 + 8 + lVar4);
      pFVar6 = *(FSoundWaveProxy **)(lVar7 + lVar4);
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      if (pFVar6 == pFVar3) {
        if ((iVar1 != -1) && (lVar7 = *(longlong *)&(this->Pairs).Elements + lVar7, lVar7 != 0))
        goto LAB_14767aefb;
        break;
      }
      iVar1 = *(int *)(lVar7 + 0x20 + *(longlong *)&(this->Pairs).Elements);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<TSharedPtr<FSoundWaveProxy,1>,FAudioChunkCache::FSoundWaveMemoryTracker>,TDefaultMapHashableKeyFuncs<TSharedPtr<FSoundWaveProxy,1>,FAudioChunkCache::FSoundWaveMemoryTracker,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TSharedPtr<FSoundWaveProxy,1>_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<TSharedPtr<FSoundWaveProxy,1>_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar7 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
LAB_14767aefb:
  return (FSoundWaveMemoryTracker *)(lVar7 + 0x10);
}

// Find @ 1476a7e90

Record * __thiscall
TMapBase<FName,FBufferVisualizationData::Record,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FBufferVisualizationData::Record,1>_>
::Find(TMapBase<FName,FBufferVisualizationData::Record,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FBufferVisualizationData::Record,1>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  Record *pRVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x40 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == param_1) {
          pRVar4 = (Record *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pRVar4 = (Record *)(pFVar2 + 1);
          }
          return pRVar4;
        }
        uVar1 = pFVar2[7].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (Record *)0x0;
}

// Emplace<FName_const_&,FName_const_&> @ 1476e0660

FName * __thiscall
TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>::
Emplace<FName_const_&,FName_const_&>
          (TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
           *this,FName *param_1,FName *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar7 + 4 + (longlong)iVar5 * 0x18);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar7 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  if (local_28.Pointer != (TSparseSetElement<TTuple<FName,FName>_> *)0x0) {
    *(FName *)local_28.Pointer = *param_1;
    *(FName *)((longlong)local_28.Pointer + 8) = *param_2;
    *(undefined4 *)((longlong)local_28.Pointer + 0x10) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar6 = uVar6 + (int)((ulonglong)uVar3 >> 0x20);
  bVar4 = TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,local_28.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
    RehashOrLink(&this->Pairs,uVar6,local_28.Pointer,local_res8[0]);
  }
  return (FName *)(*(longlong *)&(this->Pairs).Elements + lVar7 * 0x18 + 8);
}

// Emplace<FOverlapKey,int> @ 1476e07a0

int * __thiscall
TMapBase<FOverlapKey,int,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FOverlapKey,int,0>_>
::Emplace<FOverlapKey,int>
          (TMapBase<FOverlapKey,int,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FOverlapKey,int,0>_>
           *this,FOverlapKey *param_1,int *param_2)

{
  TMapBase<FOverlapKey,int,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FOverlapKey,int,0>_>
  *pTVar1;
  FWeakObjectPtr FVar2;
  int iVar3;
  uint uVar4;
  TMapBase<FOverlapKey,int,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FOverlapKey,int,0>_>
  *pTVar5;
  FSparseArrayAllocationInfo local_18;
  
  TSparseArrayBase<40,8,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
  ::AddUninitialized((TSparseArrayBase<40,8,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                      *)this,&local_18);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FOverlapKey,int>_> *)0x0) {
    FVar2 = (param_1->Component).WeakPtr;
    *(FPhysicsObject **)local_18.Pointer = param_1->PhysicsObject;
    *(FWeakObjectPtr *)((longlong)local_18.Pointer + 8) = FVar2;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = *(undefined8 *)&param_1->ComponentIndex;
    *(int *)((longlong)local_18.Pointer + 0x18) = *param_2;
    *(undefined4 *)((longlong)local_18.Pointer + 0x20) = 0xffffffff;
  }
  uVar4 = ((uint)(*(ulonglong *)local_18.Pointer >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)local_18.Pointer >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ *(uint *)((longlong)local_18.Pointer + 0xc) ^
          *(uint *)((longlong)local_18.Pointer + 0x10) ^ uVar4 ^
          *(uint *)((longlong)local_18.Pointer + 8);
  if (*(int *)&(this->Pairs).Elements.field_0xa08 - *(int *)&(this->Pairs).Elements.field_0xa2c != 1
     ) {
    iVar3 = TSet<TTuple<FOverlapKey,int>,TDefaultMapHashableKeyFuncs<FOverlapKey,int,0>,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
            ::FindIndexByHash<FOverlapKey>(&this->Pairs,uVar4,local_18.Pointer);
    if (iVar3 != -1) {
      pTVar1 = *(TMapBase<FOverlapKey,int,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FOverlapKey,int,0>_>
                 **)&(this->Pairs).Elements.field_0xa00;
      pTVar5 = this;
      if (pTVar1 != (TMapBase<FOverlapKey,int,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FOverlapKey,int,0>_>
                     *)0x0) {
        pTVar5 = pTVar1;
      }
      memmove(&(pTVar5->Pairs).Elements.field_0x0 + (longlong)iVar3 * 0x28,local_18.Pointer,0x20);
      TSparseArrayBase<40,8,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<40,8,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                  *)this,local_18.Index,1);
      local_18.Index = iVar3;
      goto LAB_1476e089c;
    }
  }
  TSet<TTuple<FOverlapKey,int>,TDefaultMapHashableKeyFuncs<FOverlapKey,int,0>,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  ::RehashOrLink(&this->Pairs,uVar4,local_18.Pointer,local_18.Index);
LAB_1476e089c:
  pTVar1 = *(TMapBase<FOverlapKey,int,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FOverlapKey,int,0>_>
             **)&(this->Pairs).Elements.field_0xa00;
  if (pTVar1 != (TMapBase<FOverlapKey,int,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FOverlapKey,int,0>_>
                 *)0x0) {
    this = pTVar1;
  }
  return (int *)(&(this->Pairs).Elements.field_0x18 + (longlong)local_18.Index * 0x28);
}

// EmplaceByHash<FName_const_&> @ 1476e0fa0

FName * __thiscall
TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>::
EmplaceByHash<FName_const_&>
          (TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
           *this,uint param_1,FName *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  TSparseSetElement<TTuple<FName,FName>_> *pTVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar6 + 4 + (longlong)iVar4 * 0x18);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar6 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  pTVar5 = (TSparseSetElement<TTuple<FName,FName>_> *)0x0;
  if (local_18.Pointer != (TSparseSetElement<TTuple<FName,FName>_> *)0x0) {
    *(FName *)local_18.Pointer = *param_2;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x10) = 0xffffffff;
    local_res8[1] = 0;
    pTVar5 = local_18.Pointer;
  }
  local_res8[0] = local_18.Index;
  bVar3 = TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,pTVar5,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
    RehashOrLink(&this->Pairs,param_1,pTVar5,local_res8[0]);
  }
  return (FName *)(*(longlong *)&(this->Pairs).Elements + lVar6 * 0x18 + 8);
}

// EmplaceByHash<FOverlapKey> @ 1476e10d0

int * __thiscall
TMapBase<FOverlapKey,int,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FOverlapKey,int,0>_>
::EmplaceByHash<FOverlapKey>
          (TMapBase<FOverlapKey,int,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FOverlapKey,int,0>_>
           *this,uint param_1,FOverlapKey *param_2)

{
  TMapBase<FOverlapKey,int,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FOverlapKey,int,0>_>
  *pTVar1;
  FWeakObjectPtr FVar2;
  int iVar3;
  TMapBase<FOverlapKey,int,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FOverlapKey,int,0>_>
  *pTVar4;
  FSparseArrayAllocationInfo local_18;
  
  TSparseArrayBase<40,8,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
  ::AddUninitialized((TSparseArrayBase<40,8,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                      *)this,&local_18);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FOverlapKey,int>_> *)0x0) {
    FVar2 = (param_2->Component).WeakPtr;
    *(FPhysicsObject **)local_18.Pointer = param_2->PhysicsObject;
    *(FWeakObjectPtr *)((longlong)local_18.Pointer + 8) = FVar2;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = *(undefined8 *)&param_2->ComponentIndex;
    *(undefined4 *)((longlong)local_18.Pointer + 0x18) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x20) = 0xffffffff;
  }
  if (*(int *)&(this->Pairs).Elements.field_0xa08 - *(int *)&(this->Pairs).Elements.field_0xa2c != 1
     ) {
    iVar3 = TSet<TTuple<FOverlapKey,int>,TDefaultMapHashableKeyFuncs<FOverlapKey,int,0>,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
            ::FindIndexByHash<FOverlapKey>(&this->Pairs,param_1,local_18.Pointer);
    if (iVar3 != -1) {
      pTVar1 = *(TMapBase<FOverlapKey,int,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FOverlapKey,int,0>_>
                 **)&(this->Pairs).Elements.field_0xa00;
      pTVar4 = this;
      if (pTVar1 != (TMapBase<FOverlapKey,int,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FOverlapKey,int,0>_>
                     *)0x0) {
        pTVar4 = pTVar1;
      }
      memmove(&(pTVar4->Pairs).Elements.field_0x0 + (longlong)iVar3 * 0x28,local_18.Pointer,0x20);
      TSparseArrayBase<40,8,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<40,8,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                  *)this,local_18.Index,1);
      local_18.Index = iVar3;
      goto LAB_1476e119a;
    }
  }
  TSet<TTuple<FOverlapKey,int>,TDefaultMapHashableKeyFuncs<FOverlapKey,int,0>,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,local_18.Index);
LAB_1476e119a:
  pTVar1 = *(TMapBase<FOverlapKey,int,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FOverlapKey,int,0>_>
             **)&(this->Pairs).Elements.field_0xa00;
  if (pTVar1 != (TMapBase<FOverlapKey,int,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FOverlapKey,int,0>_>
                 *)0x0) {
    this = pTVar1;
  }
  return (int *)(&(this->Pairs).Elements.field_0x18 + (longlong)local_18.Index * 0x28);
}

// GenerateKeyArray<TSizedDefaultAllocator<32>_> @ 147749510

void __thiscall
TMapBase<USceneComponent_*,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USceneComponent_*,UE::Math::TTransform<double>,0>_>
::GenerateKeyArray<TSizedDefaultAllocator<32>_>
          (TMapBase<USceneComponent_*,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USceneComponent_*,UE::Math::TTransform<double>,0>_>
           *this,TArray<USceneComponent_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &param_1->ArrayMax;
  iVar9 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar11,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar11 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar4 = *puVar13;
    while (uVar4 == 0) {
      lVar8 = (longlong)iVar9;
      iVar12 = iVar12 + 0x20;
      iVar9 = iVar9 + 1;
      TStack_40.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_1477495e3;
      uVar4 = puVar13[lVar8 + 1];
    }
    uVar11 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar11 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar8 + -1 + iVar12;
    if (iVar3 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar3;
    }
  }
LAB_1477495e3:
  TStack_40._padding_ = CONCAT44(uVar11,iVar9);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar5 = (param_1->AllocatorInstance).Data;
      pFVar10 = (FScriptContainerElement *)
                ((longlong)TStack_40.CurrentBitIndex * 0x80 + *(longlong *)&(this->Pairs).Elements);
      if (((pFVar5 <= pFVar10) && (pFVar10 < pFVar5 + (longlong)*piVar1 * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = param_1->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar9 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 8) =
           *(undefined8 *)pFVar10;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// Find @ 147822080

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>,0>_>
::Find(TMapBase<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>,0>_>
       *this,UActorComponent *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_> *pTVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((UActorComponent *)*plVar2 == param_1) {
          pTVar4 = (TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_> *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_> *)(plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_> *)0x0;
}

// FindOrAddImpl<FKey_const_&> @ 14789c8b0

TArray<TSharedPtr<FInputActionBinding,1>,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FKey,TArray<TSharedPtr<FInputActionBinding,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,TArray<TSharedPtr<FInputActionBinding,1>,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<FKey_const_&>
          (TMapBase<FKey,TArray<TSharedPtr<FInputActionBinding,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,TArray<TSharedPtr<FInputActionBinding,1>,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FKey *param_2)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FKey *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == param_2->KeyName) {
          if (pFVar2 != (FName *)0x0) {
            return (TArray<TSharedPtr<FInputActionBinding,1>,TSizedDefaultAllocator<32>_> *)
                   (pFVar2 + 3);
          }
          break;
        }
        uVar1 = pFVar2[5].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FKey,TArray<TSharedPtr<FInputActionBinding,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FKey,TArray<TSharedPtr<FInputActionBinding,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FKey_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FKey_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TArray<TSharedPtr<FInputActionBinding,1>,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + 0x18 + (longlong)local_res8[0] * 0x30);
}

// Find @ 1478cdab0

TArray<TSharedPtr<FInputActionBinding,1>,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FKey,TArray<TSharedPtr<FInputActionBinding,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,TArray<TSharedPtr<FInputActionBinding,1>,TSizedDefaultAllocator<32>_>,0>_>
::Find(TMapBase<FKey,TArray<TSharedPtr<FInputActionBinding,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,TArray<TSharedPtr<FInputActionBinding,1>,TSizedDefaultAllocator<32>_>,0>_>
       *this,FKey *param_1)

{
  FName FVar1;
  uint uVar2;
  TArray<TSharedPtr<FInputActionBinding,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  ForElementType<FSetElementId> FVar4;
  FName *pFVar5;
  
  FVar1 = param_1->KeyName;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar2 = *(uint *)((longlong)FVar4 +
                     (ulonglong)((this->Pairs).HashSize - 1U & FVar1.Number + uVar2) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        pFVar5 = (FName *)((longlong)(int)uVar2 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar5 == param_1->KeyName) {
          pTVar3 = (TArray<TSharedPtr<FInputActionBinding,1>,TSizedDefaultAllocator<32>_> *)0x0;
          if (pFVar5 != (FName *)0x0) {
            pTVar3 = (TArray<TSharedPtr<FInputActionBinding,1>,TSizedDefaultAllocator<32>_> *)
                     (pFVar5 + 3);
          }
          return pTVar3;
        }
        uVar2 = pFVar5[5].ComparisonIndex.Value;
      } while (uVar2 != 0xffffffff);
    }
  }
  return (TArray<TSharedPtr<FInputActionBinding,1>,TSizedDefaultAllocator<32>_> *)0x0;
}

// Find @ 1478cdb60

FLODMappingData * __thiscall
TMapBase<FName,FLODMappingData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLODMappingData,0>_>
::Find(TMapBase<FName,FLODMappingData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLODMappingData,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FLODMappingData *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pFVar2 = (FLODMappingData *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pFVar2 = (FLODMappingData *)(pFVar4 + 1);
          }
          return pFVar2;
        }
        uVar1 = pFVar4[5].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FLODMappingData *)0x0;
}

// GenerateKeyArray<TSizedDefaultAllocator<32>_> @ 147923630

void __thiscall
TMapBase<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,0>_>
::GenerateKeyArray<TSizedDefaultAllocator<32>_>
          (TMapBase<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,0>_>
           *this,TArray<TObjectPtr<USceneComponent>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  UObject *pUVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar12 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  piVar1 = &param_1->ArrayMax;
  iVar10 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar12,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar12 = 1;
  iVar13 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)TStack_40.Array;
    }
    uVar4 = *puVar14;
    while (uVar4 == 0) {
      lVar9 = (longlong)iVar10;
      iVar13 = iVar13 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_147923703;
      uVar4 = puVar14[lVar9 + 1];
    }
    uVar12 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar12 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar9 + -1 + iVar13;
    if (iVar3 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar3;
    }
  }
LAB_147923703:
  TStack_40._padding_ = CONCAT44(uVar12,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar13;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar5 = (param_1->AllocatorInstance).Data;
      pFVar11 = (FScriptContainerElement *)
                ((longlong)TStack_40.CurrentBitIndex * 0x80 + *(longlong *)&(this->Pairs).Elements);
      if (((pFVar5 <= pFVar11) && (pFVar11 < pFVar5 + (longlong)*piVar1 * 8)) &&
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
      iVar10 = param_1->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&param_1->AllocatorInstance,piVar1);
      }
      pFVar5 = (param_1->AllocatorInstance).Data;
      param_1->ArrayNum = iVar10 + 1;
      pUVar6 = *(UObject **)pFVar11;
      *(UObject **)(pFVar5 + (longlong)iVar10 * 8) = pUVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// Remove @ 1479623f0

int __thiscall
TMapBase<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,1>_>
::Remove(TMapBase<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,1>_>
         *this,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr> param_1)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  int *piVar6;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  
  iVar4 = 0;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    lVar3 = (longlong)
            (int)((param_1.WeakPtr.ObjectSerialNumber ^ param_1.WeakPtr.ObjectIndex) &
                 (this->Pairs).HashSize - 1U);
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    piVar6 = (int *)((longlong)FVar5 + lVar3 * 4);
    iVar1 = *(int *)((longlong)FVar5 + lVar3 * 4);
    while (iVar1 != -1) {
      lVar3 = *(longlong *)&(this->Pairs).Elements;
      local_res10 = *(FWeakObjectPtr *)(lVar3 + (longlong)iVar1 * 0x18);
      local_res8 = param_1.WeakPtr;
      bVar2 = TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>::UEOpEquals<UWorld_const_,bool>
                        ((TWeakObjectPtr<UWorld_const_,FWeakObjectPtr> *)&local_res10,
                         (TWeakObjectPtr<UWorld_const_,FWeakObjectPtr> *)&local_res8);
      if (bVar2) {
        TSet<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,1>,FDefaultSetAllocator>
        ::RemoveByIndex(&this->Pairs,iVar1);
        iVar4 = iVar4 + 1;
      }
      else {
        piVar6 = (int *)(lVar3 + (longlong)iVar1 * 0x18 + 0x10);
      }
      iVar1 = *piVar6;
    }
  }
  return iVar4;
}

// Find @ 1479c1090

FRealCurve ** __thiscall
TMapBase<FName,FRealCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>_>
::Find(TMapBase<FName,FRealCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  FRealCurve **ppFVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar4 * 0x18;
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x18) == param_1) {
          ppFVar5 = (FRealCurve **)0x0;
          if (lVar1 != 0) {
            ppFVar5 = (FRealCurve **)(lVar1 + 8);
          }
          return ppFVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return (FRealCurve **)0x0;
}

// FindChecked @ 1479c1270

TObjectPtr<UObject> * __thiscall
TMapBase<TObjectPtr<UObject>,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TObjectPtr<UObject>,0>_>
::FindChecked(TMapBase<TObjectPtr<UObject>,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TObjectPtr<UObject>,0>_>
              *this,TObjectPtr<UObject_const_> param_1)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  TTuple<TObjectPtr<UObject>,TObjectPtr<UObject>_> *pTVar4;
  TObjectPtr<UObject> *pTVar5;
  UObject *local_res8;
  
  pUVar1 = *(UObject **)param_1.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  pTVar4 = TSet<TTuple<TObjectPtr<UObject>,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
           ::Find(&this->Pairs,(TObjectPtr<UObject_const_>)&local_res8);
  if (pTVar4 == (TTuple<TObjectPtr<UObject>,TObjectPtr<UObject>_> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TObjectPtr<UObject> *)(*pcVar2)();
      return pTVar5;
    }
    return (TObjectPtr<UObject> *)&DAT_00000008;
  }
  return (TObjectPtr<UObject> *)&pTVar4->field_0x8;
}

// FindOrAddImpl<FProperty_*_const_&> @ 147a175f0

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<FProperty_*_const_&>
          (TMapBase<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FProperty **param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FProperty **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((FProperty *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FProperty_*_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FProperty_*_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// FindOrAddImpl<FNetworkGUID_const_&> @ 147a176a0

TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<FNetworkGUID_const_&>
          (TMapBase<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FNetworkGUID *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FNetworkGUID *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == (param_2->field0_0x0).ObjectId) {
          if (puVar2 != (ulong64 *)0x0) {
            return (TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_> *)(puVar2 + 1);
          }
          break;
        }
        iVar1 = (int)puVar2[3];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FNetworkGUID_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FNetworkGUID_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// FindOrAddImpl<FNetworkGUID_const_&> @ 147a17750

TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator> * __thiscall
TMapBase<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>,0>_>
::FindOrAddImpl<FNetworkGUID_const_&>
          (TMapBase<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>,0>_>
           *this,uint param_1,FNetworkGUID *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FNetworkGUID *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == (param_2->field0_0x0).ObjectId) {
          if (puVar2 != (ulong64 *)0x0) {
            return (TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>
                    *)(puVar2 + 1);
          }
          break;
        }
        iVar1 = (int)puVar2[0xb];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FNetworkGUID_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FNetworkGUID_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x60);
}

// GenerateKeyArray<TSizedDefaultAllocator<32>_> @ 147a17800

void __thiscall
TMapBase<FName,FRichCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurve_*,0>_>
::GenerateKeyArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FName,FRichCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurve_*,0>_>
           *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &param_1->ArrayMax;
  iVar10 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar11,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar4 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar11 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar4 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar5 = *puVar13;
    while (uVar5 == 0) {
      lVar9 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_147a178e2;
      uVar5 = puVar13[lVar9 + 1];
    }
    uVar11 = -uVar5 & uVar5;
    uVar3 = (ulonglong)uVar11 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar9 + -1 + iVar12;
    if (iVar4 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar4;
    }
  }
LAB_147a178e2:
  TStack_40._padding_ = CONCAT44(uVar11,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar2 = (FScriptContainerElement *)
               (*(longlong *)&(this->Pairs).Elements + (longlong)TStack_40.CurrentBitIndex * 0x18);
      pFVar6 = (param_1->AllocatorInstance).Data;
      if (((pFVar6 <= pFVar2) && (pFVar2 < pFVar6 + (longlong)*piVar1 * 8)) &&
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
      iVar10 = param_1->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar10 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8) =
           *(undefined8 *)pFVar2;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// GenerateKeyArray<TSizedDefaultAllocator<32>_> @ 147a17a60

void __thiscall
TMapBase<FName,FSimpleCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSimpleCurve_*,0>_>
::GenerateKeyArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FName,FSimpleCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSimpleCurve_*,0>_>
           *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &param_1->ArrayMax;
  iVar10 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar11,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar4 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar11 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar4 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar5 = *puVar13;
    while (uVar5 == 0) {
      lVar9 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_147a17b42;
      uVar5 = puVar13[lVar9 + 1];
    }
    uVar11 = -uVar5 & uVar5;
    uVar3 = (ulonglong)uVar11 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar9 + -1 + iVar12;
    if (iVar4 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar4;
    }
  }
LAB_147a17b42:
  TStack_40._padding_ = CONCAT44(uVar11,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar2 = (FScriptContainerElement *)
               (*(longlong *)&(this->Pairs).Elements + (longlong)TStack_40.CurrentBitIndex * 0x18);
      pFVar6 = (param_1->AllocatorInstance).Data;
      if (((pFVar6 <= pFVar2) && (pFVar2 < pFVar6 + (longlong)*piVar1 * 8)) &&
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
      iVar10 = param_1->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar10 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8) =
           *(undefined8 *)pFVar2;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// GenerateValueArray<TSizedDefaultAllocator<32>_> @ 147a17cc0

void __thiscall
TMapBase<FName,FRichCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurve_*,0>_>
::GenerateValueArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FName,FRichCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurve_*,0>_>
           *this,TArray<FRichCurve_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &param_1->ArrayMax;
  iVar10 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar11,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar4 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar11 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar4 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar5 = *puVar13;
    while (uVar5 == 0) {
      lVar9 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_147a17d93;
      uVar5 = puVar13[lVar9 + 1];
    }
    uVar11 = -uVar5 & uVar5;
    uVar3 = (ulonglong)uVar11 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar9 + -1 + iVar12;
    if (iVar4 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar4;
    }
  }
LAB_147a17d93:
  TStack_40._padding_ = CONCAT44(uVar11,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar2 = (FScriptContainerElement *)
               (*(longlong *)&(this->Pairs).Elements +
               ((longlong)TStack_40.CurrentBitIndex * 3 + 1) * 8);
      pFVar6 = (param_1->AllocatorInstance).Data;
      if (((pFVar6 <= pFVar2) && (pFVar2 < pFVar6 + (longlong)*piVar1 * 8)) &&
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
      iVar10 = param_1->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar10 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8) =
           *(undefined8 *)pFVar2;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// GenerateValueArray<TSizedDefaultAllocator<32>_> @ 147a17f10

void __thiscall
TMapBase<FName,FSimpleCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSimpleCurve_*,0>_>
::GenerateValueArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FName,FSimpleCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSimpleCurve_*,0>_>
           *this,TArray<FSimpleCurve_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &param_1->ArrayMax;
  iVar10 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar11,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar4 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar11 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar4 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar5 = *puVar13;
    while (uVar5 == 0) {
      lVar9 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_147a17fe3;
      uVar5 = puVar13[lVar9 + 1];
    }
    uVar11 = -uVar5 & uVar5;
    uVar3 = (ulonglong)uVar11 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar9 + -1 + iVar12;
    if (iVar4 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar4;
    }
  }
LAB_147a17fe3:
  TStack_40._padding_ = CONCAT44(uVar11,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar2 = (FScriptContainerElement *)
               (*(longlong *)&(this->Pairs).Elements +
               ((longlong)TStack_40.CurrentBitIndex * 3 + 1) * 8);
      pFVar6 = (param_1->AllocatorInstance).Data;
      if (((pFVar6 <= pFVar2) && (pFVar2 < pFVar6 + (longlong)*piVar1 * 8)) &&
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
      iVar10 = param_1->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar10 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8) =
           *(undefined8 *)pFVar2;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// Find @ 147a44260

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSharedRef<FObjectReplicator,1> * __thiscall
TMapBase<UObject_*,TSharedRef<FObjectReplicator,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>_>
::Find(TMapBase<UObject_*,TSharedRef<FObjectReplicator,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>_>
       *this,UObject *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TSharedRef<FObjectReplicator,1> *pTVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((UObject *)*plVar2 == param_1) {
          pTVar4 = (TSharedRef<FObjectReplicator,1> *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TSharedRef<FObjectReplicator,1> *)(plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TSharedRef<FObjectReplicator,1> *)0x0;
}

// FindChecked @ 147a443a0

FChannelDefinition * __thiscall
TMapBase<FName,FChannelDefinition,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelDefinition,0>_>
::FindChecked(TMapBase<FName,FChannelDefinition,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelDefinition,0>_>
              *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FChannelDefinition *pFVar4;
  ForElementType<FSetElementId> FVar5;
  FName *pFVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar3 = *(uint *)((longlong)FVar5 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pFVar6 = (FName *)((longlong)(int)uVar3 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar6 == param_1) {
          if (pFVar6 != (FName *)0x0) {
            return (FChannelDefinition *)(pFVar6 + 1);
          }
          break;
        }
        uVar3 = pFVar6[5].ComparisonIndex.Value;
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FChannelDefinition *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FChannelDefinition *)(*pcVar1)();
  return pFVar4;
}

// Remove @ 147a79f80

int __thiscall
TMapBase<UObject_*,TSharedRef<FObjectReplicator,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>_>
::Remove(TMapBase<UObject_*,TSharedRef<FObjectReplicator,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>_>
         *this,UObject *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  int iVar5;
  
  iVar5 = 0;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    uVar2 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (((ulonglong)(uVar2 >> 0x10) ^ (longlong)(int)uVar2) &
                    (longlong)(this->Pairs).HashSize - 1U) * 4);
    iVar5 = 0;
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      while (*(UObject **)((longlong)iVar3 * 0x20 + lVar1) != param_1) {
        iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + lVar1);
        if (iVar3 == -1) {
          return 0;
        }
      }
      TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
      ::RemoveByIndex(&this->Pairs,iVar3);
      iVar5 = 1;
    }
  }
  return iVar5;
}

// Remove @ 147a7a030

int __thiscall
TMapBase<FKeyHandle,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>_>::Remove
          (TMapBase<FKeyHandle,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>_>
           *this,FKeyHandle *param_1)

{
  longlong lVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 +
                    ((longlong)(this->Pairs).HashSize - 1U & (longlong)(int)param_1->Index) * 4);
    iVar4 = 0;
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      while (*(uint *)(lVar1 + (longlong)iVar2 * 0x10) != param_1->Index) {
        iVar2 = *(int *)(lVar1 + 8 + (longlong)iVar2 * 0x10);
        if (iVar2 == -1) {
          return 0;
        }
      }
      TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
      ::RemoveByIndex(&this->Pairs,iVar2);
      iVar4 = 1;
    }
  }
  return iVar4;
}

// Emplace<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&,FNetworkGUID_const_&> @ 147aafd60

FNetworkGUID * __thiscall
TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>_>
::Emplace<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&,FNetworkGUID_const_&>
          (TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>_>
           *this,TWeakObjectPtr<UObject,FWeakObjectPtr> *param_1,FNetworkGUID *param_2)

{
  TPairInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&,FNetworkGUID_const_&>
  local_res8 [2];
  TWeakObjectPtr<UObject,FWeakObjectPtr> *local_18;
  FNetworkGUID *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&,FNetworkGUID_const_&>_>
            (&this->Pairs,local_res8,(bool *)&local_18);
  return (FNetworkGUID *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)(int)local_res8[0].Key * 0x18 + 8);
}

// EmplaceByHash<FName_const_&> @ 147ab18b0

TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> * __thiscall
TMapBase<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
::EmplaceByHash<FName_const_&>
          (TMapBase<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
           *this,uint param_1,FName *param_2)

{
  bool bVar1;
  TKeyInitializer<FName_const_&> local_res8;
  FSparseArrayAllocationInfo local_18;
  
  local_res8.Key = param_2;
  TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AddUninitialized((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)this,&local_18);
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
       *)0x0) {
    TKeyInitializer<FName_const_&>::
    operator<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_TTuple<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
              (&local_res8,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x58) = 0xffffffff;
  }
  local_res8.Key._0_4_ = local_18.Index;
  bVar1 = TSet<TTuple<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,(int *)&local_res8,(bool *)0x0)
  ;
  if (!bVar1) {
    TSet<TTuple<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,(int)local_res8.Key);
  }
  return (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)(int)local_res8.Key * 0x60);
}

// EmplaceByHash<FName> @ 147ab1d70

TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> * __thiscall
TMapBase<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
::EmplaceByHash<FName>
          (TMapBase<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
           *this,uint param_1,FName *param_2)

{
  bool bVar1;
  TKeyInitializer<FName_&&> local_res8;
  FSparseArrayAllocationInfo local_18;
  
  local_res8.Key = param_2;
  TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AddUninitialized((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)this,&local_18);
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
       *)0x0) {
    TKeyInitializer<FName_&&>::
    operator<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_TTuple<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
              (&local_res8,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x58) = 0xffffffff;
  }
  local_res8.Key._0_4_ = local_18.Index;
  bVar1 = TSet<TTuple<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,(int *)&local_res8,(bool *)0x0)
  ;
  if (!bVar1) {
    TSet<TTuple<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,(int)local_res8.Key);
  }
  return (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)(int)local_res8.Key * 0x60);
}

// FindOrAddImpl<UDataTable_*_const_&> @ 147ab23b0

int * __thiscall
TMapBase<UDataTable_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UDataTable_*,int,0>_>::
FindOrAddImpl<UDataTable_*_const_&>
          (TMapBase<UDataTable_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UDataTable_*,int,0>_>
           *this,uint param_1,UDataTable **param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  UDataTable **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x18;
        if (*(UDataTable **)(lVar1 + (longlong)iVar2 * 0x18) == *param_2) {
          if (lVar3 != 0) goto LAB_147ab2442;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<UDataTable_*,int>,TDefaultMapHashableKeyFuncs<UDataTable_*,int,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UDataTable_*_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<UDataTable_*_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
LAB_147ab2442:
  return (int *)(lVar3 + 8);
}

// FindOrAddImpl<FNetworkGUID_const_&> @ 147ab2460

FNetGuidCacheObject * __thiscall
TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
::FindOrAddImpl<FNetworkGUID_const_&>
          (TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
           *this,uint param_1,FNetworkGUID *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FNetworkGUID *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x40 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == (param_2->field0_0x0).ObjectId) {
          if (puVar2 != (ulong64 *)0x0) {
            return (FNetGuidCacheObject *)(puVar2 + 1);
          }
          break;
        }
        iVar1 = (int)puVar2[7];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FNetworkGUID_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FNetworkGUID_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (FNetGuidCacheObject *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x40 + 8);
}

// FindOrAddImpl<FName> @ 147ab2510

TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> * __thiscall
TMapBase<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
::FindOrAddImpl<FName>
          (TMapBase<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[0xb].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  pTVar3 = EmplaceByHash<FName>(this,param_1,param_2);
  return pTVar3;
}

// GetKeys<TSizedDefaultAllocator<32>_> @ 147ab3990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<FName,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>_>
::GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<FName,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>_>
           *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  int iVar17;
  ForElementType<unsigned_int> FVar18;
  uint *puVar19;
  longlong lVar20;
  undefined1 auStackY_1b8 [32];
  uint local_168;
  uint uStack_164;
  uint uStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined4 local_120;
  int local_11c;
  int local_118;
  undefined1 local_114 [12];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_108;
  TMapBase<FName,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>_>
  *local_e8;
  int iStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  undefined4 uStack_c4;
  undefined4 local_9c;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  piVar1 = &param_1->ArrayMax;
  uVar10 = 0;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&param_1->AllocatorInstance,0,piVar1);
  }
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  uVar13 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if (uVar13 == 0) goto LAB_147ab3c46;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar13);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar13);
  uVar14 = 1;
  if (3 < uVar13) {
    uVar12 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_120 = (undefined4)lVar11;
    uVar14 = 1 << ((byte)lVar11 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar14 <= (int)local_50)) goto LAB_147ab3c46;
  local_50 = uVar14;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar14 != 0) {
    uVar13 = uVar14;
    if (uVar14 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar13 = 0;
        goto LAB_147ab3aa5;
      }
    }
    else {
LAB_147ab3aa5:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar13,4);
    }
    if (0 < (int)uVar14) {
      uVar16 = (ulonglong)uVar14;
      uVar12 = uVar10;
      do {
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        uVar8 = uVar12 & (longlong)(int)uVar14 - 1U;
        uVar12 = uVar12 + 1;
        *(undefined4 *)(FVar9.Data + uVar8 * 4) = 0xffffffff;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  if (local_50 != 0) {
    local_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_168 = 0;
    uStack_164 = 1;
    uStack_154 = 0;
    uStack_150 = 0;
    if (local_70 != 0) {
      FVar18 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar18 = local_78;
      }
      uVar13 = *(uint *)FVar18;
      uVar12 = uVar10;
      while (uVar13 == 0) {
        uStack_150 = (int)uVar12 + 0x20;
        uVar12 = (ulonglong)uStack_150;
        iVar17 = (int)uVar10;
        local_168 = iVar17 + 1;
        uVar10 = (ulonglong)local_168;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_168)
        goto LAB_147ab3ba2;
        uVar13 = ((uint *)((longlong)FVar18 + 4))[iVar17];
      }
      uStack_164 = -uVar13 & uVar13;
      uVar10 = (ulonglong)uStack_164 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_11c = (int)lVar11;
      uStack_154 = local_11c + -1 + uStack_150;
      uVar10 = (ulonglong)uStack_154;
      if ((int)local_70 < (int)uStack_154) {
LAB_147ab3ba2:
        uVar10 = (ulonglong)local_70;
        uStack_154 = local_70;
      }
    }
    local_114._4_8_ = local_98;
    local_108._padding_ = CONCAT44(uStack_164,local_168);
    local_108.CurrentBitIndex = uStack_154;
    local_108.UnvisitedBitMask = 0xffffffff;
    local_108._28_4_ = uStack_14c;
    local_108.BaseBitIndex = uStack_150;
    if ((int)uVar10 < (int)local_70) {
      do {
        puVar15 = (undefined8 *)((longlong)(int)uVar10 * 0x10 + *(longlong *)local_114._4_8_);
        uVar4 = *puVar15;
        uVar13 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
        uVar13 = local_50 - 1 & uVar13 + (int)((ulonglong)uVar4 >> 0x20);
        *(uint *)((longlong)puVar15 + 0xc) = uVar13;
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        uVar12 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar13;
        *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(FVar9.Data + uVar12 * 4);
        *(int *)(FVar9.Data + uVar12 * 4) = (int)uVar10;
        local_108.UnvisitedBitMask = local_108.UnvisitedBitMask & ~local_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_108);
        uVar10 = (ulonglong)(uint)local_108.CurrentBitIndex;
      } while (local_108.CurrentBitIndex < (local_108.Array)->NumBits);
    }
  }
LAB_147ab3c46:
  iVar17 = 0;
  uVar13 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  if (*piVar1 < (int)uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar13,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  iVar3 = *(int *)&(this->Pairs).Elements.field_0x28;
  local_c8 = iVar17;
  iStack_cc = 0;
  uStack_dc = 1;
  if (iVar3 != 0) {
    puVar19 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)TStack_140.Array;
    }
    uVar13 = *puVar19;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar17;
      local_c8 = local_c8 + 0x20;
      iVar17 = iVar17 + 1;
      iStack_cc = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_147ab3cee;
      uVar13 = puVar19[lVar11 + 1];
    }
    uStack_dc = -uVar13 & uVar13;
    uVar10 = (ulonglong)uStack_dc * 2 + 1;
    lVar11 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_118 = (int)lVar11;
    iStack_cc = local_c8 + -1 + local_118;
    if (iVar3 < iStack_cc) {
      iStack_cc = iVar3;
    }
  }
LAB_147ab3cee:
  uStack_d0 = 0xffffffff;
  uStack_c4 = local_9c;
  TStack_140._padding_ = CONCAT44(uStack_dc,iVar17);
  TStack_140.UnvisitedBitMask = 0xffffffff;
  TStack_140._28_4_ = local_9c;
  TStack_140.BaseBitIndex = local_c8;
  local_e8 = this;
  iStack_e0 = iVar17;
  local_d8 = (undefined1 *)TStack_140.Array;
  TStack_140.CurrentBitIndex = iStack_cc;
  if (iStack_cc < iVar3) {
    do {
      lVar20 = (longlong)TStack_140.CurrentBitIndex;
      lVar11 = *(longlong *)
                (*(longlong *)&(this->Pairs).Elements + (longlong)TStack_140.CurrentBitIndex * 0x18)
      ;
      uVar13 = ::GetTypeHash((FNameEntryId)(uint)lVar11);
      if (local_98._8_4_ != local_64) {
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        for (iVar17 = *(int *)(FVar9.Data +
                              (ulonglong)(local_50 - 1 & (int)((ulonglong)lVar11 >> 0x20) + uVar13)
                              * 4); iVar17 != -1;
            iVar17 = *(int *)(local_98._0_8_ + (longlong)iVar17 * 0x10 + 8)) {
          if (*(longlong *)(local_98._0_8_ + (longlong)iVar17 * 0x10) == lVar11) goto LAB_147ab3e6e;
        }
      }
      pFVar2 = (FScriptContainerElement *)(*(longlong *)&(this->Pairs).Elements + lVar20 * 0x18);
      pFVar5 = (param_1->AllocatorInstance).Data;
      if (((pFVar5 <= pFVar2) && (pFVar2 < pFVar5 + (longlong)*piVar1 * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        iVar17 = (*pcVar6)();
        return iVar17;
      }
      iVar17 = param_1->ArrayNum;
      if (iVar17 == *piVar1) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar17 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar17 * 8) =
           *(undefined8 *)pFVar2;
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_98,
                 (FName *)local_114,
                 (bool *)(*(longlong *)&(this->Pairs).Elements +
                         (longlong)TStack_140.CurrentBitIndex * 0x18));
LAB_147ab3e6e:
      TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
    } while (TStack_140.CurrentBitIndex < (TStack_140.Array)->NumBits);
  }
  iVar17 = param_1->ArrayNum;
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return iVar17;
}

// Find @ 147addb60

uchar ** __thiscall
TMapBase<FName,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>_>
::Find(TMapBase<FName,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uchar **ppuVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar4 * 0x18;
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x18) == param_1) {
          ppuVar5 = (uchar **)0x0;
          if (lVar1 != 0) {
            ppuVar5 = (uchar **)(lVar1 + 8);
          }
          return ppuVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return (uchar **)0x0;
}

// FindChecked @ 147ade340

int * __thiscall
TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::FindChecked
          (TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
           *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  
  iVar4 = (param_1->Data).ArrayNum;
  if (iVar4 == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  lVar8 = 0;
  iVar6 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar6 = 0;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  iVar4 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar3,param_1);
  if ((iVar4 == -1) ||
     (lVar8 = (longlong)iVar4 * 0x20 + *(longlong *)&(this->Pairs).Elements, lVar8 == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      piVar5 = (int *)(*pcVar1)();
      return piVar5;
    }
  }
  return (int *)(lVar8 + 0x10);
}

// FindRef @ 147adecb0

FNetworkGUID __thiscall
TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>_>
::FindRef(TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>_>
          *this,TWeakObjectPtr<UObject_const_,FWeakObjectPtr> param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 in_R8;
  TWeakObjectPtr<UObject_const_,FWeakObjectPtr> local_res8;
  
  iVar2 = TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>
                    (&this->Pairs,(uint)((ulonglong)in_R8 >> 0x20) ^ (uint)in_R8,&local_res8);
  if ((iVar2 != -1) &&
     (lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar2 * 0x18, lVar1 != 0)) {
    *(undefined8 *)param_1.WeakPtr = *(undefined8 *)(lVar1 + 8);
    return (FNetworkGUID)param_1.WeakPtr;
  }
  *(undefined8 *)param_1.WeakPtr = 0;
  return (FNetworkGUID)param_1.WeakPtr;
}

// FindOrAddImpl<UClass_*_const_&> @ 147b30cd0

int * __thiscall
TMapBase<UClass_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,int,0>_>::
FindOrAddImpl<UClass_*_const_&>
          (TMapBase<UClass_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,int,0>_>
           *this,uint param_1,UClass **param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  UClass **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x18;
        if (*(UClass **)(lVar1 + (longlong)iVar2 * 0x18) == *param_2) {
          if (lVar3 != 0) goto LAB_147b30d62;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<UClass_*,int>,TDefaultMapHashableKeyFuncs<UClass_*,int,0>,FDefaultSetAllocator>::
  EmplaceByHash<TKeyInitializer<UClass_*_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<UClass_*_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
LAB_147b30d62:
  return (int *)(lVar3 + 8);
}

// FindOrAddImpl<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>_> @ 147b30d80

TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>_>
          (TMapBase<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr> *param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    while (iVar1 != -1) {
      local_res8 = param_2->WeakPtr;
      local_res20 = *(FWeakObjectPtr *)
                     ((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
      bVar2 = TWeakObjectPtr<UEdGraphPin_Deprecated_const_,FWeakObjectPtr>::
              UEOpEquals<UEdGraphPin_Deprecated,bool>
                        ((TWeakObjectPtr<UEdGraphPin_Deprecated_const_,FWeakObjectPtr> *)
                         &local_res20,
                         (TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr> *)&local_res8);
      lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x20;
      if (bVar2) {
        if (lVar3 != 0) {
          return (TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_> *)(lVar3 + 8);
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0x18);
    }
  }
  local_res20 = (FWeakObjectPtr)param_2;
  TSet<TTuple<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>_&&>_>
            (&this->Pairs,(uint)&local_res8,
             (TKeyInitializer<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>_&&> *)
             (ulonglong)param_1,(bool *)&local_res20);
  return (TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8.ObjectIndex * 0x20 + 8);
}

// FindOrAddImpl<FPinResolveId> @ 147b30e60

TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FPinResolveId,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPinResolveId,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<FPinResolveId>
          (TMapBase<FPinResolveId,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPinResolveId,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FPinResolveId *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FPinResolveId *local_res20;
  
  iVar1 = TSet<TTuple<FPinResolveId,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPinResolveId,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FPinResolveId>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x30 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_> *)(lVar2 + 0x18);
  }
  local_res20 = param_2;
  TSet<TTuple<FPinResolveId,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPinResolveId,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FPinResolveId_&&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FPinResolveId_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + 0x18 + (longlong)local_res8[0] * 0x30);
}

// Find @ 147b61280

ulong64 * __thiscall
TMapBase<int,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>_>
::Find(TMapBase<int,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>_>
       *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulong64 *puVar4;
  ForElementType<FSetElementId> FVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(int *)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          puVar4 = (ulong64 *)0x0;
          if (lVar1 != 0) {
            puVar4 = (ulong64 *)(lVar1 + 8);
          }
          return puVar4;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (ulong64 *)0x0;
}

// Find @ 147b612f0

TFunction<TSharedRef<FWorldElementPasteImporter,1>___cdecl(void)> * __thiscall
TMapBase<TStringView<wchar_t>,TFunction<TSharedRef<FWorldElementPasteImporter,1>___cdecl(void)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,TFunction<TSharedRef<FWorldElementPasteImporter,1>___cdecl(void)>,0>_>
::Find(TMapBase<TStringView<wchar_t>,TFunction<TSharedRef<FWorldElementPasteImporter,1>___cdecl(void)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,TFunction<TSharedRef<FWorldElementPasteImporter,1>___cdecl(void)>,0>_>
       *this,TStringView<wchar_t> *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  ForElementType<FSetElementId> FVar8;
  
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>((int)*(undefined8 *)&param_1->Size,param_1->DataPtr);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar8 = (this->Pairs).Hash.SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar8 + (ulonglong)((this->Pairs).HashSize - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = *(longlong *)&(this->Pairs).Elements;
      lVar5 = (longlong)iVar1;
      iVar2 = *(int *)(lVar6 + 8 + lVar5 * 0x50);
      iVar7 = (int)*(undefined8 *)&param_1->Size;
      if (iVar2 == iVar7) {
        if ((iVar2 != 0) && (iVar7 != 0)) {
          iVar4 = iVar7;
          if (iVar2 < iVar7) {
            iVar4 = iVar2;
          }
          iVar4 = FGenericPlatformStricmp::Strnicmp
                            (*(wchar_t **)(lVar6 + lVar5 * 0x50),param_1->DataPtr,(longlong)iVar4);
          if (iVar4 != 0) goto LAB_147b61398;
        }
        if (iVar2 == iVar7) {
          if (iVar1 == -1) {
            return (TFunction<TSharedRef<FWorldElementPasteImporter,1>___cdecl(void)> *)0x0;
          }
          lVar6 = (longlong)iVar1 * 0x50 + *(longlong *)&(this->Pairs).Elements;
          if (lVar6 != 0) {
            return (TFunction<TSharedRef<FWorldElementPasteImporter,1>___cdecl(void)> *)
                   (lVar6 + 0x10);
          }
          return (TFunction<TSharedRef<FWorldElementPasteImporter,1>___cdecl(void)> *)0x0;
        }
      }
LAB_147b61398:
      iVar1 = *(int *)(*(longlong *)&(this->Pairs).Elements + 0x40 + lVar5 * 0x50);
    }
  }
  return (TFunction<TSharedRef<FWorldElementPasteImporter,1>___cdecl(void)> *)0x0;
}

// FindChecked @ 147b61520

int * __thiscall
TMapBase<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
::FindChecked(TMapBase<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
              *this,ulong64 param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(ulong64 *)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (int *)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (int *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  piVar6 = (int *)(*pcVar3)();
  return piVar6;
}

// FindOrAddImpl<enum_EHardwareDevicePrimaryType_const_&,FInputDeviceId_const_&> @ 147baff30

FInputDeviceId * __thiscall
TMapBase<enum_EHardwareDevicePrimaryType,FInputDeviceId,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EHardwareDevicePrimaryType,FInputDeviceId,0>_>
::FindOrAddImpl<enum_EHardwareDevicePrimaryType_const_&,FInputDeviceId_const_&>
          (void *this,uint param_1,EHardwareDevicePrimaryType *param_2,FInputDeviceId *param_3)

{
  undefined4 uVar1;
  EHardwareDevicePrimaryType *pEVar2;
  longlong lVar3;
  int local_res8 [8];
  EHardwareDevicePrimaryType *local_18;
  FInputDeviceId *local_10;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar3 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar3 = (longlong)this + 0x38;
    }
    uVar1 = *(int *)(lVar3 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pEVar2 = (EHardwareDevicePrimaryType *)((longlong)(int)uVar1 * 0x10 + *(longlong *)this);
        if (*pEVar2 == *param_2) {
          if (pEVar2 != (EHardwareDevicePrimaryType *)0x0) {
            return (FInputDeviceId *)(pEVar2 + 4);
          }
          break;
        }
        uVar1 = *(undefined4 *)(pEVar2 + 8);
      } while (uVar1 != 0xffffffff);
    }
  }
  local_18 = param_2;
  local_10 = param_3;
  TSet<TTuple<enum_EHardwareDevicePrimaryType,FInputDeviceId>,TDefaultMapHashableKeyFuncs<enum_EHardwareDevicePrimaryType,FInputDeviceId,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TPairInitializer<enum_EHardwareDevicePrimaryType_const_&,FInputDeviceId_const_&>_>
            (this,(uint)local_res8,
             (TPairInitializer<EHardwareDevicePrimaryType_const_&,FInputDeviceId_const_&> *)
             (ulonglong)param_1,(bool *)&local_18);
  return (FInputDeviceId *)(*(longlong *)this + (longlong)local_res8[0] * 0x10 + 4);
}

// GetKeys<TSizedDefaultAllocator<32>_> @ 147bb0340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
           *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  longlong lVar9;
  ulonglong uVar10;
  wchar_t *pwVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  FString *pFVar15;
  FScriptContainerElement *pFVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint *puVar19;
  uint uVar20;
  undefined1 auStackY_198 [32];
  uint local_148;
  uint uStack_144;
  uint uStack_134;
  uint uStack_130;
  undefined4 uStack_12c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_120;
  undefined4 local_100;
  int local_fc;
  int local_f8;
  FString local_f4;
  uint uStack_e4;
  undefined1 *local_e0;
  undefined4 uStack_d8;
  uint uStack_d4;
  uint local_d0;
  uint uStack_cc;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b8;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  piVar1 = &param_1->ArrayMax;
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (param_1->ArrayMax < 0) {
    DestructItems<FString,int>((FString *)pFVar3,param_1->ArrayNum);
    param_1->ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&param_1->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar3,param_1->ArrayNum);
    param_1->ArrayNum = 0;
  }
  uVar18 = 0;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  uVar20 = 0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  uVar13 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if (uVar13 == 0) goto LAB_147bb0639;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar13);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar13);
  uVar14 = 1;
  if (3 < uVar13) {
    uVar10 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_100 = (undefined4)lVar9;
    uVar14 = 1 << ((byte)lVar9 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar14 <= (int)local_50)) goto LAB_147bb0639;
  local_50 = uVar14;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar14 != 0) {
    uVar13 = uVar14;
    if (uVar14 < 2) {
      if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
        uVar13 = 0;
        goto LAB_147bb0480;
      }
    }
    else {
LAB_147bb0480:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar13,4);
    }
    if (0 < (int)uVar14) {
      uVar17 = (ulonglong)uVar14;
      uVar10 = uVar18;
      do {
        FVar8.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar7 = (longlong)(int)uVar14 - 1U & uVar10;
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)FVar8.Data + uVar7 * 4) = 0xffffffff;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
  }
  if (local_50 != 0) {
    local_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_148 = 0;
    uStack_144 = 1;
    uStack_134 = 0;
    uStack_130 = 0;
    uVar10 = uVar18;
    if (local_70 != 0) {
      puVar19 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar19 = local_78;
      }
      uVar13 = *puVar19;
      uVar17 = uVar18;
      while (uVar13 == 0) {
        uStack_130 = (int)uVar17 + 0x20;
        uVar17 = (ulonglong)uStack_130;
        iVar6 = (int)uVar10;
        local_148 = iVar6 + 1;
        uVar10 = (ulonglong)local_148;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_148)
        goto LAB_147bb0580;
        uVar13 = puVar19[(longlong)iVar6 + 1];
      }
      uStack_144 = -uVar13 & uVar13;
      uVar10 = (ulonglong)uStack_144 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_fc = (int)lVar9;
      uStack_134 = local_fc + -1 + uStack_130;
      uVar10 = (ulonglong)uStack_134;
      if ((int)local_70 < (int)uStack_134) {
LAB_147bb0580:
        uVar10 = (ulonglong)local_70;
        uStack_134 = local_70;
      }
    }
    local_b8._padding_ = CONCAT44(uStack_144,local_148);
    local_b8.CurrentBitIndex = uStack_134;
    local_b8.UnvisitedBitMask = 0xffffffff;
    local_b8._28_4_ = uStack_12c;
    local_b8.BaseBitIndex = uStack_130;
    local_c0 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98;
    if ((int)uVar10 < (int)local_70) {
      do {
        iVar12 = (int)uVar10;
        puVar2 = (undefined8 *)(*(longlong *)&local_c0->Elements + (longlong)iVar12 * 0x18);
        iVar6 = *(int *)(*(longlong *)&local_c0->Elements + 8 + (longlong)iVar12 * 0x18);
        if (iVar6 == 0) {
          pwVar11 = L"";
          uVar13 = uVar20;
        }
        else {
          pwVar11 = (wchar_t *)*puVar2;
          uVar13 = iVar6 - 1;
        }
        uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar13,pwVar11);
        uVar13 = local_50 - 1 & uVar13;
        *(uint *)((longlong)puVar2 + 0x14) = uVar13;
        FVar8.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar10 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar13;
        *(undefined4 *)(puVar2 + 2) = *(undefined4 *)((longlong)FVar8.Data + uVar10 * 4);
        *(int *)((longlong)FVar8.Data + uVar10 * 4) = iVar12;
        local_b8.UnvisitedBitMask = local_b8.UnvisitedBitMask & ~local_b8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_b8);
        uVar10 = (ulonglong)(uint)local_b8.CurrentBitIndex;
      } while (local_b8.CurrentBitIndex < (local_b8.Array)->NumBits);
    }
  }
LAB_147bb0639:
  uVar13 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  if (*piVar1 < (int)uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar13,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar13 = *(uint *)&(this->Pairs).Elements.field_0x28;
  TStack_120.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar10 = uVar18;
  local_f4.Data.ArrayMax = uVar20;
  local_d0 = uVar20;
  uStack_e4 = 1;
  if (uVar13 != 0) {
    puVar19 = *(uint **)&(this->Pairs).Elements.field_0x20;
    uVar10 = (ulonglong)uVar13;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)TStack_120.Array;
    }
    uVar14 = *puVar19;
    uVar17 = uVar18;
    while( true ) {
      local_f4.Data.ArrayMax = (int)uVar18;
      local_d0 = (uint)uVar17;
      if (uVar14 != 0) break;
      lVar9 = (longlong)local_f4.Data.ArrayMax;
      local_d0 = local_d0 + 0x20;
      uVar17 = (ulonglong)local_d0;
      local_f4.Data.ArrayMax = local_f4.Data.ArrayMax + 1;
      uVar18 = (ulonglong)(uint)local_f4.Data.ArrayMax;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < local_f4.Data.ArrayMax)
      goto LAB_147bb06df;
      uVar14 = puVar19[lVar9 + 1];
    }
    uStack_e4 = -uVar14 & uVar14;
    uVar18 = (ulonglong)uStack_e4 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_f8 = (int)lVar9;
    uVar14 = (local_d0 - 1) + local_f8;
    if ((int)uVar13 < (int)uVar14) {
      uVar14 = uVar13;
    }
    uVar10 = (ulonglong)uVar14;
  }
LAB_147bb06df:
  uStack_d4 = (uint)uVar10;
  uStack_d8 = 0xffffffff;
  TStack_120._padding_ = CONCAT44(uStack_e4,local_f4.Data.ArrayMax);
  TStack_120.UnvisitedBitMask = 0xffffffff;
  TStack_120._28_4_ = uStack_d4;
  TStack_120.BaseBitIndex = local_d0;
  local_f4.Data._4_8_ = this;
  local_e0 = (undefined1 *)TStack_120.Array;
  uStack_cc = uStack_d4;
  TStack_120.CurrentBitIndex = uStack_d4;
  if ((int)uStack_d4 < (int)uVar13) {
    do {
      lVar9 = (longlong)(int)uVar10 * 0x28;
      pFVar15 = (FString *)(*(longlong *)&(this->Pairs).Elements + lVar9);
      iVar6 = (pFVar15->Data).ArrayNum;
      if (iVar6 == 0) {
        pwVar11 = L"";
        uVar13 = uVar20;
      }
      else {
        pwVar11 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
        uVar13 = iVar6 - 1;
      }
      uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar13,pwVar11);
      iVar6 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
              FindIndexByHash<FString>
                        ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98,
                         uVar13,pFVar15);
      if (iVar6 == -1) {
        pFVar3 = (param_1->AllocatorInstance).Data;
        pFVar16 = (FScriptContainerElement *)(*(longlong *)&(this->Pairs).Elements + lVar9);
        if (((pFVar3 <= pFVar16) && (pFVar16 < pFVar3 + (longlong)*piVar1 * 0x10)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        iVar6 = param_1->ArrayNum;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_1->AllocatorInstance,piVar1);
        }
        param_1->ArrayNum = iVar6 + 1;
        ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 0x10),
                           (FString *)pFVar16);
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                  ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98,
                   &local_f4,
                   (bool *)(*(longlong *)&(this->Pairs).Elements +
                           (longlong)TStack_120.CurrentBitIndex * 0x28));
      }
      TStack_120.UnvisitedBitMask = TStack_120.UnvisitedBitMask & ~TStack_120._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_120);
      uVar10 = (ulonglong)(uint)TStack_120.CurrentBitIndex;
    } while (TStack_120.CurrentBitIndex < (TStack_120.Array)->NumBits);
  }
  iVar6 = param_1->ArrayNum;
  local_50 = 0;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return iVar6;
}

// Find @ 147bdbce0

ushort * __thiscall
TMapBase<unsigned_short,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>_>
::Find(TMapBase<unsigned_short,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>_>
       *this,ushort param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ushort *puVar4;
  ForElementType<FSetElementId> FVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 +
                    ((ulonglong)((this->Pairs).HashSize - 1) & (ulonglong)param_1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0xc;
        if (*(ushort *)(lVar2 + (longlong)iVar3 * 0xc) == param_1) {
          puVar4 = (ushort *)0x0;
          if (lVar1 != 0) {
            puVar4 = (ushort *)(lVar1 + 2);
          }
          return puVar4;
        }
        iVar3 = *(int *)(lVar1 + 4);
      } while (iVar3 != -1);
    }
  }
  return (ushort *)0x0;
}

// Find @ 147bdbd50

FExternalTextureEntry * __thiscall
TMapBase<FGuid,FExternalTextureRegistry::FExternalTextureEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FExternalTextureRegistry::FExternalTextureEntry,0>_>
::Find(TMapBase<FGuid,FExternalTextureRegistry::FExternalTextureEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FExternalTextureRegistry::FExternalTextureEntry,0>_>
       *this,FGuid *param_1)

{
  longlong lVar1;
  int iVar2;
  ulong64 uVar3;
  FExternalTextureEntry *pFVar4;
  
  uVar3 = CityHash64((char *)param_1,0x10);
  iVar2 = TSet<TTuple<FGuid,FExternalTextureRegistry::FExternalTextureEntry>,TDefaultMapHashableKeyFuncs<FGuid,FExternalTextureRegistry::FExternalTextureEntry,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,(uint)uVar3,param_1);
  if (iVar2 != -1) {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar2 * 0x48;
    pFVar4 = (FExternalTextureEntry *)0x0;
    if (lVar1 != 0) {
      pFVar4 = (FExternalTextureEntry *)(lVar1 + 0x10);
    }
    return pFVar4;
  }
  return (FExternalTextureEntry *)0x0;
}

// Find @ 147bdbdc0

FAudioBasedVibrationData * __thiscall
TMapBase<FName,FAudioBasedVibrationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAudioBasedVibrationData,0>_>
::Find(TMapBase<FName,FAudioBasedVibrationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAudioBasedVibrationData,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  FAudioBasedVibrationData *pFVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar4 * 0x18;
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x18) == param_1) {
          pFVar5 = (FAudioBasedVibrationData *)0x0;
          if (lVar1 != 0) {
            pFVar5 = (FAudioBasedVibrationData *)(lVar1 + 8);
          }
          return pFVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return (FAudioBasedVibrationData *)0x0;
}

// Find @ 147bdbe60

FDeviceColorCurveData * __thiscall
TMapBase<FName,FDeviceColorCurveData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDeviceColorCurveData,0>_>
::Find(TMapBase<FName,FDeviceColorCurveData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDeviceColorCurveData,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FDeviceColorCurveData *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == param_1) {
          pFVar4 = (FDeviceColorCurveData *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pFVar4 = (FDeviceColorCurveData *)(pFVar2 + 1);
          }
          return pFVar4;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FDeviceColorCurveData *)0x0;
}

// Find @ 147bdbf00

FDeviceColorData * __thiscall
TMapBase<FName,FDeviceColorData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDeviceColorData,0>_>
::Find(TMapBase<FName,FDeviceColorData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDeviceColorData,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  FDeviceColorData *pFVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar4 * 0x18;
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x18) == param_1) {
          pFVar5 = (FDeviceColorData *)0x0;
          if (lVar1 != 0) {
            pFVar5 = (FDeviceColorData *)(lVar1 + 8);
          }
          return pFVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return (FDeviceColorData *)0x0;
}

// Find @ 147bdbfa0

FDeviceTriggerFeedbackData * __thiscall
TMapBase<FName,FDeviceTriggerFeedbackData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDeviceTriggerFeedbackData,0>_>
::Find(TMapBase<FName,FDeviceTriggerFeedbackData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDeviceTriggerFeedbackData,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FDeviceTriggerFeedbackData *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == param_1) {
          pFVar4 = (FDeviceTriggerFeedbackData *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pFVar4 = (FDeviceTriggerFeedbackData *)(pFVar2 + 1);
          }
          return pFVar4;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FDeviceTriggerFeedbackData *)0x0;
}

// Find @ 147bdc040

FDeviceTriggerTriggerResistanceData * __thiscall
TMapBase<FName,FDeviceTriggerTriggerResistanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDeviceTriggerTriggerResistanceData,0>_>
::Find(TMapBase<FName,FDeviceTriggerTriggerResistanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDeviceTriggerTriggerResistanceData,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FDeviceTriggerTriggerResistanceData *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == param_1) {
          pFVar4 = (FDeviceTriggerTriggerResistanceData *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pFVar4 = (FDeviceTriggerTriggerResistanceData *)(pFVar2 + 1);
          }
          return pFVar4;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FDeviceTriggerTriggerResistanceData *)0x0;
}

// Find @ 147bdc0e0

FDeviceTriggerTriggerVibrationData * __thiscall
TMapBase<FName,FDeviceTriggerTriggerVibrationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDeviceTriggerTriggerVibrationData,0>_>
::Find(TMapBase<FName,FDeviceTriggerTriggerVibrationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDeviceTriggerTriggerVibrationData,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  FDeviceTriggerTriggerVibrationData *pFVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar4 * 0x28;
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x28) == param_1) {
          pFVar5 = (FDeviceTriggerTriggerVibrationData *)0x0;
          if (lVar1 != 0) {
            pFVar5 = (FDeviceTriggerTriggerVibrationData *)(lVar1 + 8);
          }
          return pFVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x20);
      } while (iVar4 != -1);
    }
  }
  return (FDeviceTriggerTriggerVibrationData *)0x0;
}

// Find @ 147bdc180

FForceFeedbackEffectOverridenChannelDetails * __thiscall
TMapBase<FName,FForceFeedbackEffectOverridenChannelDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FForceFeedbackEffectOverridenChannelDetails,0>_>
::Find(TMapBase<FName,FForceFeedbackEffectOverridenChannelDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FForceFeedbackEffectOverridenChannelDetails,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == param_1) {
          pFVar4 = (FName *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pFVar4 = pFVar2 + 1;
          }
          return (FForceFeedbackEffectOverridenChannelDetails *)pFVar4;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FForceFeedbackEffectOverridenChannelDetails *)0x0;
}

// Find @ 147bdc220

FSpawnActorTimingInfo * __thiscall
TMapBase<FName,FSpawnActorTimingInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSpawnActorTimingInfo,0>_>
::Find(TMapBase<FName,FSpawnActorTimingInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSpawnActorTimingInfo,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FSpawnActorTimingInfo *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == param_1) {
          pFVar4 = (FSpawnActorTimingInfo *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pFVar4 = (FSpawnActorTimingInfo *)(pFVar2 + 1);
          }
          return pFVar4;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FSpawnActorTimingInfo *)0x0;
}

// Emplace<FKey_const_&,float_const_&> @ 147c20e00

float * __thiscall
TMapBase<FKey,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,float,0>_>::
Emplace<FKey_const_&,float_const_&>
          (TMapBase<FKey,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,float,0>_>
           *this,FKey *param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar8 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar8 + 4 + (longlong)iVar6 * 0x28);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar8 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar6);
  if (local_28.Pointer != (TSparseSetElement<TTuple<FKey,float>_> *)0x0) {
    *(FName *)local_28.Pointer = param_1->KeyName;
    *(FKeyDetails **)((longlong)local_28.Pointer + 8) = (param_1->KeyDetails).Object;
    pTVar3 = (param_1->KeyDetails).SharedReferenceCount.ReferenceController;
    *(TReferenceControllerBase<1> **)((longlong)local_28.Pointer + 0x10) = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(float *)((longlong)local_28.Pointer + 0x18) = *param_2;
    *(undefined4 *)((longlong)local_28.Pointer + 0x20) = 0xffffffff;
  }
  uVar4 = *(undefined8 *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
  uVar7 = uVar7 + (int)((ulonglong)uVar4 >> 0x20);
  bVar5 = TSet<TTuple<FKey,float>,TDefaultMapHashableKeyFuncs<FKey,float,0>,FDefaultSetAllocator>::
          TryReplaceExisting(&this->Pairs,uVar7,local_28.Pointer,local_res8,(bool *)0x0);
  lVar8 = (longlong)local_res8[0];
  if (!bVar5) {
    TSet<TTuple<FKey,float>,TDefaultMapHashableKeyFuncs<FKey,float,0>,FDefaultSetAllocator>::
    RehashOrLink(&this->Pairs,uVar7,local_28.Pointer,local_res8[0]);
  }
  return (float *)(*(longlong *)&(this->Pairs).Elements + lVar8 * 0x28 + 0x18);
}

// Emplace<FKey_const_&,float> @ 147c20f40

float * __thiscall
TMapBase<FKey,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,float,0>_>::
Emplace<FKey_const_&,float>
          (TMapBase<FKey,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,float,0>_>
           *this,FKey *param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar8 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar8 + 4 + (longlong)iVar6 * 0x28);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar8 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar6);
  if (local_28.Pointer != (TSparseSetElement<TTuple<FKey,float>_> *)0x0) {
    *(FName *)local_28.Pointer = param_1->KeyName;
    *(FKeyDetails **)((longlong)local_28.Pointer + 8) = (param_1->KeyDetails).Object;
    pTVar3 = (param_1->KeyDetails).SharedReferenceCount.ReferenceController;
    *(TReferenceControllerBase<1> **)((longlong)local_28.Pointer + 0x10) = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(float *)((longlong)local_28.Pointer + 0x18) = *param_2;
    *(undefined4 *)((longlong)local_28.Pointer + 0x20) = 0xffffffff;
  }
  uVar4 = *(undefined8 *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
  uVar7 = uVar7 + (int)((ulonglong)uVar4 >> 0x20);
  bVar5 = TSet<TTuple<FKey,float>,TDefaultMapHashableKeyFuncs<FKey,float,0>,FDefaultSetAllocator>::
          TryReplaceExisting(&this->Pairs,uVar7,local_28.Pointer,local_res8,(bool *)0x0);
  lVar8 = (longlong)local_res8[0];
  if (!bVar5) {
    TSet<TTuple<FKey,float>,TDefaultMapHashableKeyFuncs<FKey,float,0>,FDefaultSetAllocator>::
    RehashOrLink(&this->Pairs,uVar7,local_28.Pointer,local_res8[0]);
  }
  return (float *)(*(longlong *)&(this->Pairs).Elements + lVar8 * 0x28 + 0x18);
}

// Emplace<unsigned_int> @ 147c21080

FCsvLocalPlayer * __thiscall
TMapBase<unsigned_int,FCsvLocalPlayer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FCsvLocalPlayer,0>_>
::Emplace<unsigned_int>
          (TMapBase<unsigned_int,FCsvLocalPlayer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FCsvLocalPlayer,0>_>
           *this,uint *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar8 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar9 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar8 * 0x38 + 4 + lVar9);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x38 + lVar9) = 0xffffffff;
    }
  }
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar8);
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  if (local_48.Pointer != (TSparseSetElement<TTuple<unsigned_int,FCsvLocalPlayer>_> *)0x0) {
    *(uint *)local_48.Pointer = *param_1;
    local_38 = 0xffffffff;
    uStack_34 = 0;
    uStack_30 = 0;
    *(undefined8 *)((longlong)local_48.Pointer + 8) = 0xffffffff;
    *(ulonglong *)((longlong)local_48.Pointer + 0x10) = (ulonglong)uStack_2c << 0x20;
    *(undefined8 *)((longlong)local_48.Pointer + 0x18) = uVar4;
    *(undefined8 *)((longlong)local_48.Pointer + 0x20) = uVar5;
    *(undefined8 *)((longlong)local_48.Pointer + 0x28) = uVar6;
    *(undefined4 *)((longlong)local_48.Pointer + 0x30) = 0xffffffff;
  }
  uVar3 = *(uint *)local_48.Pointer;
  local_res8[0] = local_48.Index;
  bVar7 = TSet<TTuple<unsigned_int,FCsvLocalPlayer>,TDefaultMapHashableKeyFuncs<unsigned_int,FCsvLocalPlayer,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar3,local_48.Pointer,local_res8,(bool *)0x0);
  lVar9 = (longlong)local_res8[0];
  if (!bVar7) {
    TSet<TTuple<unsigned_int,FCsvLocalPlayer>,TDefaultMapHashableKeyFuncs<unsigned_int,FCsvLocalPlayer,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar3,local_48.Pointer,local_res8[0]);
  }
  return (FCsvLocalPlayer *)(*(longlong *)&(this->Pairs).Elements + lVar9 * 0x38 + 8);
}

// EmplaceByHash<unsigned_int_const_&> @ 147c21cc0

FCsvLocalPlayer * __thiscall
TMapBase<unsigned_int,FCsvLocalPlayer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FCsvLocalPlayer,0>_>
::EmplaceByHash<unsigned_int_const_&>
          (TMapBase<unsigned_int,FCsvLocalPlayer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FCsvLocalPlayer,0>_>
           *this,uint param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar7 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar8 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar7 * 0x38 + 4 + lVar8);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x38 + lVar8) = 0xffffffff;
    }
  }
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar7);
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  if (local_48.Pointer != (TSparseSetElement<TTuple<unsigned_int,FCsvLocalPlayer>_> *)0x0) {
    *(uint *)local_48.Pointer = *param_2;
    local_38 = 0xffffffff;
    uStack_34 = 0;
    uStack_30 = 0;
    *(undefined8 *)((longlong)local_48.Pointer + 8) = 0xffffffff;
    *(ulonglong *)((longlong)local_48.Pointer + 0x10) = (ulonglong)uStack_2c << 0x20;
    *(undefined8 *)((longlong)local_48.Pointer + 0x18) = uVar3;
    *(undefined8 *)((longlong)local_48.Pointer + 0x20) = uVar4;
    *(undefined8 *)((longlong)local_48.Pointer + 0x28) = uVar5;
    *(undefined4 *)((longlong)local_48.Pointer + 0x30) = 0xffffffff;
  }
  local_res8[0] = local_48.Index;
  bVar6 = TSet<TTuple<unsigned_int,FCsvLocalPlayer>,TDefaultMapHashableKeyFuncs<unsigned_int,FCsvLocalPlayer,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_48.Pointer,local_res8,(bool *)0x0);
  lVar8 = (longlong)local_res8[0];
  if (!bVar6) {
    TSet<TTuple<unsigned_int,FCsvLocalPlayer>,TDefaultMapHashableKeyFuncs<unsigned_int,FCsvLocalPlayer,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_48.Pointer,local_res8[0]);
  }
  return (FCsvLocalPlayer *)(*(longlong *)&(this->Pairs).Elements + lVar8 * 0x38 + 8);
}

// Find @ 147c4fe70

float * __thiscall
TMapBase<FKey,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,float,0>_>::Find
          (TMapBase<FKey,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,float,0>_>
           *this,FKey *param_1)

{
  longlong lVar1;
  FName FVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  ForElementType<FSetElementId> FVar7;
  
  FVar2 = param_1->KeyName;
  uVar4 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 +
                    (ulonglong)((this->Pairs).HashSize - 1U & FVar2.Number + uVar4) * 4);
    if (iVar5 != -1) {
      lVar3 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar3 + (longlong)iVar5 * 0x28;
        if (*(FName *)(lVar3 + (longlong)iVar5 * 0x28) == param_1->KeyName) {
          pfVar6 = (float *)0x0;
          if (lVar1 != 0) {
            pfVar6 = (float *)(lVar1 + 0x18);
          }
          return pfVar6;
        }
        iVar5 = *(int *)(lVar1 + 0x20);
      } while (iVar5 != -1);
    }
  }
  return (float *)0x0;
}

// Find @ 147cf6ba0

FFoliageOcclusionResults * __thiscall
TMapBase<unsigned_int,FFoliageOcclusionResults,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FFoliageOcclusionResults,0>_>
::Find(TMapBase<unsigned_int,FFoliageOcclusionResults,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FFoliageOcclusionResults,0>_>
       *this,uint param_1)

{
  uint uVar1;
  uint *puVar2;
  FFoliageOcclusionResults *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == param_1) {
          pFVar3 = (FFoliageOcclusionResults *)0x0;
          if (puVar2 != (uint *)0x0) {
            pFVar3 = (FFoliageOcclusionResults *)(puVar2 + 2);
          }
          return pFVar3;
        }
        uVar1 = puVar2[10];
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FFoliageOcclusionResults *)0x0;
}

// Find @ 147cf6c10

FModeRecord * __thiscall
TMapBase<FName,FGPUSkinCacheVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGPUSkinCacheVisualizationData::FModeRecord,0>_>
::Find(TMapBase<FName,FGPUSkinCacheVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGPUSkinCacheVisualizationData::FModeRecord,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FModeRecord *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0x50 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pFVar2 = (FModeRecord *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pFVar2 = (FModeRecord *)(pFVar4 + 1);
          }
          return pFVar2;
        }
        uVar1 = pFVar4[9].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FModeRecord *)0x0;
}

// Find @ 147cf6cb0

FModeRecord * __thiscall
TMapBase<FName,FGroomVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGroomVisualizationData::FModeRecord,1>_>
::Find(TMapBase<FName,FGroomVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGroomVisualizationData::FModeRecord,1>_>
       *this,FName param_1)

{
  uint uVar1;
  FModeRecord *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0x50 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pFVar2 = (FModeRecord *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pFVar2 = (FModeRecord *)(pFVar4 + 1);
          }
          return pFVar2;
        }
        uVar1 = pFVar4[9].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FModeRecord *)0x0;
}

// FindChecked @ 147cf6d50

TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters> * __thiscall
TMapBase<unsigned_int,TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>,0>_>
::FindChecked(TMapBase<unsigned_int,TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>,0>_>
              *this,uint param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters> *pTVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(uint *)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters> *)
                   (lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar4) {
    return (TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters> *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pTVar6 = (TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters> *)(*pcVar3)();
  return pTVar6;
}

// Find @ 147d9c410

FAsyncLoadingStringTable * __thiscall
TMapBase<FName,FStringTableEngineBridge::FAsyncLoadingStringTable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStringTableEngineBridge::FAsyncLoadingStringTable,0>_>
::Find(TMapBase<FName,FStringTableEngineBridge::FAsyncLoadingStringTable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStringTableEngineBridge::FAsyncLoadingStringTable,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FAsyncLoadingStringTable *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pFVar2 = (FAsyncLoadingStringTable *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pFVar2 = (FAsyncLoadingStringTable *)(pFVar4 + 1);
          }
          return pFVar2;
        }
        uVar1 = pFVar4[5].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FAsyncLoadingStringTable *)0x0;
}

// FindOrAddImpl<FLevelInstanceID_const_&> @ 147e4a4f0

ILevelInstanceInterface ** __thiscall
TMapBase<FLevelInstanceID,ILevelInstanceInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLevelInstanceID,ILevelInstanceInterface_*,0>_>
::FindOrAddImpl<FLevelInstanceID_const_&>
          (TMapBase<FLevelInstanceID,ILevelInstanceInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLevelInstanceID,ILevelInstanceInterface_*,0>_>
           *this,uint param_1,FLevelInstanceID *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FLevelInstanceID *local_res20;
  
  iVar1 = TSet<TTuple<FLevelInstanceID,ILevelInstanceInterface_*>,TDefaultMapHashableKeyFuncs<FLevelInstanceID,ILevelInstanceInterface_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FLevelInstanceID>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x40 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (ILevelInstanceInterface **)(lVar2 + 0x30);
  }
  local_res20 = param_2;
  TSet<TTuple<FLevelInstanceID,ILevelInstanceInterface_*>,TDefaultMapHashableKeyFuncs<FLevelInstanceID,ILevelInstanceInterface_*,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FLevelInstanceID_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FLevelInstanceID_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (ILevelInstanceInterface **)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x40 + 0x30);
}

// FindOrAddImpl<FName_const_&> @ 147e4a580

Type * __thiscall
TMapBase<FName,enum_EWorldType::Type,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EWorldType::Type,0>_>
::FindOrAddImpl<FName_const_&>(void *this,uint param_1,FName *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar2 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar2 = (longlong)this + 0x38;
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *(longlong *)this + (longlong)iVar1 * 0x14;
        if (*(FName *)(*(longlong *)this + (longlong)iVar1 * 0x14) == *param_2) {
          if (lVar2 != 0) goto LAB_147e4a612;
          break;
        }
        iVar1 = *(int *)(lVar2 + 0xc);
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,enum_EWorldType::Type>,TDefaultMapHashableKeyFuncs<FName,enum_EWorldType::Type,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (this,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar2 = *(longlong *)this + (longlong)local_res8[0] * 0x14;
LAB_147e4a612:
  return (Type *)(lVar2 + 8);
}

// FindOrAddImpl<TWeakObjectPtr<UObject,FWeakObjectPtr>_> @ 147e4a630

TSharedPtr<FLatentActionManager::FObjectActions,1> * __thiscall
TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FLatentActionManager::FObjectActions,1>,FDefaultSetAllocator,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FLatentActionManager::FObjectActions,1>,0>_>
::FindOrAddImpl<TWeakObjectPtr<UObject,FWeakObjectPtr>_>
          (TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FLatentActionManager::FObjectActions,1>,FDefaultSetAllocator,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FLatentActionManager::FObjectActions,1>,0>_>
           *this,uint param_1,TWeakObjectPtr<UObject,FWeakObjectPtr> *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [2];
  TWeakObjectPtr<UObject,FWeakObjectPtr> *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        puVar2 = (undefined8 *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (((int)*puVar2 == (param_2->WeakPtr).ObjectIndex) &&
           ((int)((ulonglong)*puVar2 >> 0x20) == (param_2->WeakPtr).ObjectSerialNumber)) {
          if ((iVar1 != -1) && (puVar2 != (undefined8 *)0x0)) {
            return (TSharedPtr<FLatentActionManager::FObjectActions,1> *)(puVar2 + 1);
          }
          break;
        }
        iVar1 = *(int *)(puVar2 + 3);
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FLatentActionManager::FObjectActions,1>_>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FLatentActionManager::FObjectActions,1>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_&&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TSharedPtr<FLatentActionManager::FObjectActions,1> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// Find @ 147e65090

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FLevelAnnotation * __thiscall
TMapBase<UObjectBase_const_*,ULevelStreaming::FLevelAnnotation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,ULevelStreaming::FLevelAnnotation,0>_>
::Find(TMapBase<UObjectBase_const_*,ULevelStreaming::FLevelAnnotation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,ULevelStreaming::FLevelAnnotation,0>_>
       *this,UObjectBase *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  FLevelAnnotation *pFVar5;
  uint uVar6;
  
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(UObjectBase **)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          pFVar5 = (FLevelAnnotation *)0x0;
          if (lVar1 != 0) {
            pFVar5 = (FLevelAnnotation *)(lVar1 + 8);
          }
          return pFVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (FLevelAnnotation *)0x0;
}

// Find @ 147e65140

UScriptStruct ** __thiscall
TMapBase<UScriptStruct_const_*,UScriptStruct_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,UScriptStruct_const_*,0>_>
::Find(TMapBase<UScriptStruct_const_*,UScriptStruct_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,UScriptStruct_const_*,0>_>
       *this,UScriptStruct *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  UScriptStruct **ppUVar5;
  uint uVar6;
  
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(UScriptStruct **)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          ppUVar5 = (UScriptStruct **)0x0;
          if (lVar1 != 0) {
            ppUVar5 = (UScriptStruct **)(lVar1 + 8);
          }
          return ppUVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (UScriptStruct **)0x0;
}

// Find @ 147e651f0

TTuple<void_(__cdecl*)(void_const_*,void_*),UFunction_*> * __thiscall
TMapBase<TTuple<UScriptStruct_const_*,UScriptStruct_const_*>,TTuple<void_(__cdecl*)(void_const_*,void_*),UFunction_*>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UScriptStruct_const_*,UScriptStruct_const_*>,TTuple<void_(__cdecl*)(void_const_*,void_*),UFunction_*>,0>_>
::Find(TMapBase<TTuple<UScriptStruct_const_*,UScriptStruct_const_*>,TTuple<void_(__cdecl*)(void_const_*,void_*),UFunction_*>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UScriptStruct_const_*,UScriptStruct_const_*>,TTuple<void_(__cdecl*)(void_const_*,void_*),UFunction_*>,0>_>
       *this,TTuple<UScriptStruct_const_*,UScriptStruct_const_*> *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  ForElementType<FSetElementId> FVar6;
  TTuple<void_(__cdecl*)(void_const_*,void_*),UFunction_*> *pTVar7;
  uint uVar8;
  int iVar9;
  
  uVar2 = *(ulonglong *)param_1;
  uVar3 = *(ulonglong *)&param_1->field_0x8;
  uVar8 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  uVar8 = uVar8 >> 0x10 ^ uVar8;
  uVar5 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar9 = *(int *)((longlong)FVar6 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U &
                    ((uVar8 >> 2) + 0x9e3779b9 + (uVar5 >> 0x10 ^ uVar5) + uVar8 * 0x40 ^ uVar8)) *
                    4);
    if (iVar9 != -1) {
      lVar4 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar4 + (longlong)iVar9 * 0x28;
        if ((*(ulonglong *)(lVar4 + (longlong)iVar9 * 0x28) == uVar2) &&
           (*(ulonglong *)(lVar1 + 8) == uVar3)) {
          if (iVar9 == -1) {
            return (TTuple<void_(__cdecl*)(void_const_*,void_*),UFunction_*> *)0x0;
          }
          pTVar7 = (TTuple<void_(__cdecl*)(void_const_*,void_*),UFunction_*> *)0x0;
          if (lVar1 != 0) {
            pTVar7 = (TTuple<void_(__cdecl*)(void_const_*,void_*),UFunction_*> *)(lVar1 + 0x10);
          }
          return pTVar7;
        }
        iVar9 = *(int *)(lVar1 + 0x20);
      } while (iVar9 != -1);
    }
  }
  return (TTuple<void_(__cdecl*)(void_const_*,void_*),UFunction_*> *)0x0;
}

// Find @ 147e652f0

Type * __thiscall
TMapBase<FName,enum_EWorldType::Type,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EWorldType::Type,0>_>
::Find(void *this,FName param_1)

{
  uint uVar1;
  int iVar2;
  Type *pTVar3;
  longlong lVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar4 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar4 = (longlong)this + 0x38;
    }
    iVar2 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)((longlong)this + 0x48) - 1U & param_1.Number + uVar1) * 4);
    if (iVar2 != -1) {
      do {
        lVar4 = *(longlong *)this + (longlong)iVar2 * 0x14;
        if (*(FName *)(*(longlong *)this + (longlong)iVar2 * 0x14) == param_1) {
          pTVar3 = (Type *)0x0;
          if (lVar4 != 0) {
            pTVar3 = (Type *)(lVar4 + 8);
          }
          return pTVar3;
        }
        iVar2 = *(int *)(lVar4 + 0xc);
      } while (iVar2 != -1);
    }
  }
  return (Type *)0x0;
}

// Emplace<FGuid_const_&,FLightComponentMapBuildData_const_&> @ 147e91830

FLightComponentMapBuildData * __thiscall
TMapBase<FGuid,FLightComponentMapBuildData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FLightComponentMapBuildData,0>_>
::Emplace<FGuid_const_&,FLightComponentMapBuildData_const_&>
          (TMapBase<FGuid,FLightComponentMapBuildData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FLightComponentMapBuildData,0>_>
           *this,FGuid *param_1,FLightComponentMapBuildData *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  ulong64 uVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xd0,0x10,1,(ForAnyElementType *)this,
                       (int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0xd0 + 4 + lVar7);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0xd0 + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<208,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<208,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FGuid,FLightComponentMapBuildData>_> *)0x0) {
    uVar3 = *(undefined8 *)&param_1->C;
    *(undefined8 *)local_18.Pointer = *(undefined8 *)param_1;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = uVar3;
    FLightComponentMapBuildData::FLightComponentMapBuildData
              ((FLightComponentMapBuildData *)((longlong)local_18.Pointer + 0x10),param_2);
    *(undefined4 *)((longlong)local_18.Pointer + 0xc0) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  uVar6 = CityHash64(local_18.Pointer,0x10);
  bVar4 = TSet<TTuple<FGuid,FLightComponentMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FLightComponentMapBuildData,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,(uint)uVar6,local_18.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FGuid,FLightComponentMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FLightComponentMapBuildData,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,(uint)uVar6,local_18.Pointer,local_res8[0]);
  }
  return (FLightComponentMapBuildData *)(*(longlong *)&(this->Pairs).Elements + lVar7 * 0xd0 + 0x10)
  ;
}

// Emplace<FGuid_const_&,FMeshMapBuildData_const_&> @ 147e91970

FMeshMapBuildData * __thiscall
TMapBase<FGuid,FMeshMapBuildData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>_>
::Emplace<FGuid_const_&,FMeshMapBuildData_const_&>
          (TMapBase<FGuid,FMeshMapBuildData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>_>
           *this,FGuid *param_1,FMeshMapBuildData *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  ulong64 uVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar7 + 4 + (longlong)iVar5 * 0x50);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar7 + (longlong)iVar2 * 0x50) = 0xffffffff;
    }
  }
  TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FGuid,FMeshMapBuildData>_> *)0x0) {
    uVar3 = *(undefined8 *)&param_1->C;
    *(undefined8 *)local_18.Pointer = *(undefined8 *)param_1;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = uVar3;
    FMeshMapBuildData::FMeshMapBuildData
              ((FMeshMapBuildData *)((longlong)local_18.Pointer + 0x10),param_2);
    *(undefined4 *)((longlong)local_18.Pointer + 0x48) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  uVar6 = CityHash64(local_18.Pointer,0x10);
  bVar4 = TSet<TTuple<FGuid,FMeshMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,(uint)uVar6,local_18.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FGuid,FMeshMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,(uint)uVar6,local_18.Pointer,local_res8[0]);
  }
  return (FMeshMapBuildData *)(*(longlong *)&(this->Pairs).Elements + 0x10 + lVar7 * 0x50);
}

// Emplace<FGuid_const_&,FReflectionCaptureMapBuildData_const_&> @ 147e91ab0

FReflectionCaptureMapBuildData * __thiscall
TMapBase<FGuid,FReflectionCaptureMapBuildData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>_>
::Emplace<FGuid_const_&,FReflectionCaptureMapBuildData_const_&>
          (TMapBase<FGuid,FReflectionCaptureMapBuildData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>_>
           *this,FGuid *param_1,FReflectionCaptureMapBuildData *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  ulong64 uVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar7 + 4 + (longlong)iVar5 * 0x50);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar7 + (longlong)iVar2 * 0x50) = 0xffffffff;
    }
  }
  TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FGuid,FReflectionCaptureMapBuildData>_> *)0x0) {
    uVar3 = *(undefined8 *)&param_1->C;
    *(undefined8 *)local_18.Pointer = *(undefined8 *)param_1;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = uVar3;
    FReflectionCaptureMapBuildData::FReflectionCaptureMapBuildData
              ((FReflectionCaptureMapBuildData *)((longlong)local_18.Pointer + 0x10),param_2);
    *(undefined4 *)((longlong)local_18.Pointer + 0x48) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  uVar6 = CityHash64(local_18.Pointer,0x10);
  bVar4 = TSet<TTuple<FGuid,FReflectionCaptureMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,(uint)uVar6,local_18.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FGuid,FReflectionCaptureMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,(uint)uVar6,local_18.Pointer,local_res8[0]);
  }
  return (FReflectionCaptureMapBuildData *)
         (*(longlong *)&(this->Pairs).Elements + 0x10 + lVar7 * 0x50);
}

// Emplace<FGuid_const_&,FMeshMapBuildData> @ 147e91bf0

FMeshMapBuildData * __thiscall
TMapBase<FGuid,FMeshMapBuildData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>_>
::Emplace<FGuid_const_&,FMeshMapBuildData>
          (TMapBase<FGuid,FMeshMapBuildData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>_>
           *this,FGuid *param_1,FMeshMapBuildData *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  ulong64 uVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar7 + 4 + (longlong)iVar5 * 0x50);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar7 + (longlong)iVar2 * 0x50) = 0xffffffff;
    }
  }
  TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FGuid,FMeshMapBuildData>_> *)0x0) {
    uVar3 = *(undefined8 *)&param_1->C;
    *(undefined8 *)local_18.Pointer = *(undefined8 *)param_1;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = uVar3;
    FMeshMapBuildData::FMeshMapBuildData
              ((FMeshMapBuildData *)((longlong)local_18.Pointer + 0x10),param_2);
    *(undefined4 *)((longlong)local_18.Pointer + 0x48) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  uVar6 = CityHash64(local_18.Pointer,0x10);
  bVar4 = TSet<TTuple<FGuid,FMeshMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,(uint)uVar6,local_18.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FGuid,FMeshMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,(uint)uVar6,local_18.Pointer,local_res8[0]);
  }
  return (FMeshMapBuildData *)(*(longlong *)&(this->Pairs).Elements + 0x10 + lVar7 * 0x50);
}

// Emplace<FGuid_const_&,FReflectionCaptureMapBuildData> @ 147e91d30

FReflectionCaptureMapBuildData * __thiscall
TMapBase<FGuid,FReflectionCaptureMapBuildData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>_>
::Emplace<FGuid_const_&,FReflectionCaptureMapBuildData>
          (TMapBase<FGuid,FReflectionCaptureMapBuildData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>_>
           *this,FGuid *param_1,FReflectionCaptureMapBuildData *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  ulong64 uVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar7 + 4 + (longlong)iVar5 * 0x50);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar7 + (longlong)iVar2 * 0x50) = 0xffffffff;
    }
  }
  TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FGuid,FReflectionCaptureMapBuildData>_> *)0x0) {
    uVar3 = *(undefined8 *)&param_1->C;
    *(undefined8 *)local_18.Pointer = *(undefined8 *)param_1;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = uVar3;
    FReflectionCaptureMapBuildData::FReflectionCaptureMapBuildData
              ((FReflectionCaptureMapBuildData *)((longlong)local_18.Pointer + 0x10),param_2);
    *(undefined4 *)((longlong)local_18.Pointer + 0x48) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  uVar6 = CityHash64(local_18.Pointer,0x10);
  bVar4 = TSet<TTuple<FGuid,FReflectionCaptureMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,(uint)uVar6,local_18.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FGuid,FReflectionCaptureMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,(uint)uVar6,local_18.Pointer,local_res8[0]);
  }
  return (FReflectionCaptureMapBuildData *)
         (*(longlong *)&(this->Pairs).Elements + 0x10 + lVar7 * 0x50);
}

// EmplaceByHash<FGuid_const_&> @ 147e93b70

FLightComponentMapBuildData * __thiscall
TMapBase<FGuid,FLightComponentMapBuildData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FLightComponentMapBuildData,0>_>
::EmplaceByHash<FGuid_const_&>
          (TMapBase<FGuid,FLightComponentMapBuildData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FLightComponentMapBuildData,0>_>
           *this,uint param_1,FGuid *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  TKeyInitializer<FGuid_const_&> local_res8;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  local_res8.Key = param_2;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xd0,0x10,1,(ForAnyElementType *)this,
                       (int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0xd0 + 4 + lVar3);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0xd0 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<208,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<208,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FGuid,FLightComponentMapBuildData>_> *)0x0) {
    TKeyInitializer<FGuid_const_&>::
    operator<FGuid,FLightComponentMapBuildData>_TTuple<FGuid,FLightComponentMapBuildData>
              (&local_res8,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0xc0) = 0xffffffff;
  }
  local_res8.Key._0_4_ = local_18.Index;
  bVar4 = TSet<TTuple<FGuid,FLightComponentMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FLightComponentMapBuildData,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,(int *)&local_res8,(bool *)0x0)
  ;
  if (!bVar4) {
    TSet<TTuple<FGuid,FLightComponentMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FLightComponentMapBuildData,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,(int)local_res8.Key);
  }
  return (FLightComponentMapBuildData *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)(int)local_res8.Key * 0xd0 + 0x10);
}

// FindOrAddImpl<FGuid_const_&> @ 147e96cc0

FSkyAtmosphereMapBuildData * __thiscall
TMapBase<FGuid,FSkyAtmosphereMapBuildData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FSkyAtmosphereMapBuildData,0>_>
::FindOrAddImpl<FGuid_const_&>
          (TMapBase<FGuid,FSkyAtmosphereMapBuildData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FSkyAtmosphereMapBuildData,0>_>
           *this,uint param_1,FGuid *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FGuid *local_res20;
  
  iVar1 = TSet<TTuple<FGuid,FSkyAtmosphereMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FSkyAtmosphereMapBuildData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x1c + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (FSkyAtmosphereMapBuildData *)(lVar2 + 0x10);
  }
  local_res20 = param_2;
  TSet<TTuple<FGuid,FSkyAtmosphereMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FSkyAtmosphereMapBuildData,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FGuid_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FGuid_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FSkyAtmosphereMapBuildData *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x1c + 0x10);
}

// Find @ 147eba700

UMapBuildDataRegistry ** __thiscall
TMapBase<UPackage_*,UMapBuildDataRegistry_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPackage_*,UMapBuildDataRegistry_*,0>_>
::Find(TMapBase<UPackage_*,UMapBuildDataRegistry_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPackage_*,UMapBuildDataRegistry_*,0>_>
       *this,UPackage *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  UMapBuildDataRegistry **ppUVar5;
  uint uVar6;
  
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(UPackage **)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          ppUVar5 = (UMapBuildDataRegistry **)0x0;
          if (lVar1 != 0) {
            ppUVar5 = (UMapBuildDataRegistry **)(lVar1 + 8);
          }
          return ppUVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (UMapBuildDataRegistry **)0x0;
}

// Find @ 147eba7b0

FPlayerState * __thiscall
TMapBase<UObjectBase_const_*,FLockedViewState::FPlayerState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLockedViewState::FPlayerState,0>_>
::Find(TMapBase<UObjectBase_const_*,FLockedViewState::FPlayerState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLockedViewState::FPlayerState,0>_>
       *this,UObjectBase *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  FPlayerState *pFVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x50 + *(longlong *)&(this->Pairs).Elements);
        if ((UObjectBase *)*plVar2 == param_1) {
          pFVar4 = (FPlayerState *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pFVar4 = (FPlayerState *)(plVar2 + 1);
          }
          return pFVar4;
        }
        iVar1 = (int)plVar2[9];
      } while (iVar1 != -1);
    }
  }
  return (FPlayerState *)0x0;
}

// Find @ 147eba860

FModeRecord * __thiscall
TMapBase<FName,FLumenVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLumenVisualizationData::FModeRecord,1>_>
::Find(TMapBase<FName,FLumenVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLumenVisualizationData::FModeRecord,1>_>
       *this,FName param_1)

{
  uint uVar1;
  FModeRecord *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0x58 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pFVar2 = (FModeRecord *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pFVar2 = (FModeRecord *)(pFVar4 + 1);
          }
          return pFVar2;
        }
        uVar1 = pFVar4[10].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FModeRecord *)0x0;
}

// FindChecked @ 147ebb1b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TObjectPtr<AActor> * __thiscall
TMapBase<int,TObjectPtr<AActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<AActor>,0>_>
::FindChecked(TMapBase<int,TObjectPtr<AActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<AActor>,0>_>
              *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TObjectPtr<AActor> *pTVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(int *)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (TObjectPtr<AActor> *)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (TObjectPtr<AActor> *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pTVar6 = (TObjectPtr<AActor> *)(*pcVar3)();
  return pTVar6;
}

// EmplaceByHash<FMaterialParameterInfo_const_&> @ 147eed8f0

/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */

FMaterialParameterMetadata * __thiscall
TMapBase<FMaterialParameterInfo,FMaterialParameterMetadata,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMaterialParameterInfo,FMaterialParameterMetadata,0>_>
::EmplaceByHash<FMaterialParameterInfo_const_&>
          (TMapBase<FMaterialParameterInfo,FMaterialParameterMetadata,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMaterialParameterInfo,FMaterialParameterMetadata,0>_>
           *this,uint param_1,FMaterialParameterInfo *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_48 [3];
  undefined8 local_18;
  undefined8 uStack_10;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x48,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar6 + 4 + (longlong)iVar5 * 0x48);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar6 + (longlong)iVar2 * 0x48) = 0xffffffff;
    }
  }
  TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,local_48,iVar5);
  if (local_48[0].Pointer !=
      (TSparseSetElement<TTuple<FMaterialParameterInfo,FMaterialParameterMetadata>_> *)0x0) {
    uVar3 = *(undefined8 *)&param_2->Association;
    *(FName *)local_48[0].Pointer = param_2->Name;
    *(undefined8 *)((longlong)local_48[0].Pointer + 8) = uVar3;
    local_18 = 0xff;
    *(undefined8 *)((longlong)local_48[0].Pointer + 0x10) = 0;
    *(undefined8 *)((longlong)local_48[0].Pointer + 0x18) = 0;
    *(undefined8 *)((longlong)local_48[0].Pointer + 0x20) = 0;
    *(undefined8 *)((longlong)local_48[0].Pointer + 0x28) = 0;
    uStack_10 = 0xffffffff;
    *(undefined8 *)((longlong)local_48[0].Pointer + 0x30) = 0xff;
    *(undefined8 *)((longlong)local_48[0].Pointer + 0x38) = 0xffffffff;
    *(undefined4 *)((longlong)local_48[0].Pointer + 0x40) = 0xffffffff;
  }
  local_res8[0] = local_48[0].Index;
  bVar4 = TSet<TTuple<FMaterialParameterInfo,FMaterialParameterMetadata>,TDefaultMapHashableKeyFuncs<FMaterialParameterInfo,FMaterialParameterMetadata,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_48[0].Pointer,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FMaterialParameterInfo,FMaterialParameterMetadata>,TDefaultMapHashableKeyFuncs<FMaterialParameterInfo,FMaterialParameterMetadata,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_48[0].Pointer,local_res8[0]);
  }
  return (FMaterialParameterMetadata *)(*(longlong *)&(this->Pairs).Elements + lVar6 * 0x48 + 0x10);
}

// Find @ 147f389e0

FMaterialExternalCodeDeclaration ** __thiscall
TMapBase<FName,FMaterialExternalCodeDeclaration_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMaterialExternalCodeDeclaration_const_*,0>_>
::Find(TMapBase<FName,FMaterialExternalCodeDeclaration_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMaterialExternalCodeDeclaration_const_*,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  FMaterialExternalCodeDeclaration **ppFVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar4 * 0x18;
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x18) == param_1) {
          ppFVar5 = (FMaterialExternalCodeDeclaration **)0x0;
          if (lVar1 != 0) {
            ppFVar5 = (FMaterialExternalCodeDeclaration **)(lVar1 + 8);
          }
          return ppFVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return (FMaterialExternalCodeDeclaration **)0x0;
}

// Remove @ 147f85050

int __thiscall
TMapBase<FMaterialShaderMapId,FMaterialShaderMap_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>_>
::Remove(TMapBase<FMaterialShaderMapId,FMaterialShaderMap_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>_>
         *this,FMaterialShaderMapId *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ForElementType<FSetElementId> FVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar3 +
                    ((longlong)(this->Pairs).HashSize - 1U &
                    (longlong)*(int *)(param_1->CookedShaderMapIdHash).Hash) * 4);
    iVar5 = 0;
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      while ((((lVar2 = (longlong)iVar4 * 0x38,
               *(longlong *)(lVar2 + lVar1) != *(longlong *)(param_1->CookedShaderMapIdHash).Hash ||
               (*(longlong *)(lVar2 + 8 + lVar1) !=
                *(longlong *)((param_1->CookedShaderMapIdHash).Hash + 8))) ||
              (*(int *)(lVar2 + 0x10 + lVar1) !=
               *(int *)((param_1->CookedShaderMapIdHash).Hash + 0x10))) ||
             (((*(Type *)(lVar2 + 0x14 + lVar1) != param_1->QualityLevel ||
               (*(Type *)(lVar2 + 0x18 + lVar1) != param_1->FeatureLevel)) ||
              ((*(uint *)(lVar2 + 0x20 + lVar1) != (param_1->LayoutParams).Flags ||
               (*(uint *)(lVar2 + 0x1c + lVar1) != (param_1->LayoutParams).MaxFieldAlignment)))))))
      {
        iVar4 = *(int *)(lVar2 + 0x30 + lVar1);
        if (iVar4 == -1) {
          return 0;
        }
      }
      TSet<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>,FDefaultSetAllocator>
      ::RemoveByIndex(&this->Pairs,iVar4);
      iVar5 = 1;
    }
  }
  return iVar5;
}

// FindOrAddImpl<FUniformParameterOverrides::FTextureParameterKey_const_&> @ 147f9b250

UTexture ** __thiscall
TMapBase<FUniformParameterOverrides::FTextureParameterKey,UTexture_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUniformParameterOverrides::FTextureParameterKey,UTexture_*,0>_>
::FindOrAddImpl<FUniformParameterOverrides::FTextureParameterKey_const_&>
          (TMapBase<FUniformParameterOverrides::FTextureParameterKey,UTexture_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUniformParameterOverrides::FTextureParameterKey,UTexture_*,0>_>
           *this,uint param_1,FTextureParameterKey *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FTextureParameterKey *local_res20;
  
  iVar1 = TSet<TTuple<FUniformParameterOverrides::FTextureParameterKey,UTexture_*>,TDefaultMapHashableKeyFuncs<FUniformParameterOverrides::FTextureParameterKey,UTexture_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FUniformParameterOverrides::FTextureParameterKey>
                    (&this->Pairs,param_1,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x28, lVar2 == 0)) {
    local_res20 = param_2;
    TSet<TTuple<FUniformParameterOverrides::FTextureParameterKey,UTexture_*>,TDefaultMapHashableKeyFuncs<FUniformParameterOverrides::FTextureParameterKey,UTexture_*,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FUniformParameterOverrides::FTextureParameterKey_const_&>_>
              (&this->Pairs,(uint)local_res8,
               (TKeyInitializer<FUniformParameterOverrides::FTextureParameterKey_const_&> *)
               (ulonglong)param_1,(bool *)&local_res20);
    lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
  }
  return (UTexture **)(lVar2 + 0x18);
}

// FindOrAddImpl<FName_const_&> @ 147f9b2d0

FUpdateLevelVisibilityLevelInfo * __thiscall
TMapBase<FName,FUpdateLevelVisibilityLevelInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FUpdateLevelVisibilityLevelInfo,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,FUpdateLevelVisibilityLevelInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FUpdateLevelVisibilityLevelInfo,0>_>
           *this,uint param_1,FName *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x28;
        if (*(FName *)(lVar1 + (longlong)iVar2 * 0x28) == *param_2) {
          if (lVar3 != 0) goto LAB_147f9b362;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x20);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,FUpdateLevelVisibilityLevelInfo>,TDefaultMapHashableKeyFuncs<FName,FUpdateLevelVisibilityLevelInfo,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
LAB_147f9b362:
  return (FUpdateLevelVisibilityLevelInfo *)(lVar3 + 8);
}

// FindOrAddImpl<FName_const_&> @ 147f9b380

TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> * __thiscall
TMapBase<FName,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *)
                   (pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[0xb].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x60);
}

// FindOrAddImpl<FName_const_&> @ 147f9b430

bool * __thiscall
TMapBase<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_>::
FindOrAddImpl<FName_const_&>
          (TMapBase<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_>
           *this,uint param_1,FName *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x14;
        if (*(FName *)(lVar1 + (longlong)iVar2 * 0x14) == *param_2) {
          if (lVar3 != 0) goto LAB_147f9b4c2;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0xc);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>::
  EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x14;
LAB_147f9b4c2:
  return (bool *)(lVar3 + 8);
}

// FindOrAddImpl<FName_const_&,FNetLevelVisibilityTransactionId> @ 147f9b4e0

FNetLevelVisibilityTransactionId * __thiscall
TMapBase<FName,FNetLevelVisibilityTransactionId,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNetLevelVisibilityTransactionId,0>_>
::FindOrAddImpl<FName_const_&,FNetLevelVisibilityTransactionId>
          (TMapBase<FName,FNetLevelVisibilityTransactionId,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNetLevelVisibilityTransactionId,0>_>
           *this,uint param_1,FName *param_2,FNetLevelVisibilityTransactionId *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [2];
  FName *local_18;
  FNetLevelVisibilityTransactionId *local_10;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x14;
        if (*(FName *)(lVar1 + (longlong)iVar2 * 0x14) == *param_2) {
          if (lVar3 != 0) goto LAB_147f9b577;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0xc);
      } while (iVar2 != -1);
    }
  }
  local_18 = param_2;
  local_10 = param_3;
  TSet<TTuple<FName,FNetLevelVisibilityTransactionId>,TDefaultMapHashableKeyFuncs<FName,FNetLevelVisibilityTransactionId,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TPairInitializer<FName_const_&,FNetLevelVisibilityTransactionId_&&>_>
            (&this->Pairs,(uint)local_res8,
             (TPairInitializer<FName_const_&,FNetLevelVisibilityTransactionId_&&> *)
             (ulonglong)param_1,(bool *)&local_18);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x14;
LAB_147f9b577:
  return (FNetLevelVisibilityTransactionId *)(lVar3 + 8);
}

// FindOrAddImpl<FPlaneKey> @ 147f9b590

TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> * __thiscall
TMapBase<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
::FindOrAddImpl<FPlaneKey>
          (TMapBase<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
           *this,uint param_1,FPlaneKey *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FPlaneKey *local_res20;
  
  iVar1 = TSet<TTuple<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FPlaneKey>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x68 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)(lVar2 + 0x10);
  }
  local_res20 = param_2;
  TSet<TTuple<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FPlaneKey_&&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FPlaneKey_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x68 + 0x10);
}

// FindOrAddImpl<enum_ENetDormancy> @ 147f9b620

int * __thiscall
TMapBase<enum_ENetDormancy,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ENetDormancy,int,0>_>
::FindOrAddImpl<enum_ENetDormancy>(void *this,uint param_1,ENetDormancy *param_2)

{
  ENetDormancy EVar1;
  ENetDormancy *pEVar2;
  longlong lVar3;
  int local_res8 [6];
  ENetDormancy *local_res20;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar3 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar3 = (longlong)this + 0x38;
    }
    EVar1 = *(ENetDormancy *)
             (lVar3 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (EVar1 != ~DORM_Never) {
      do {
        pEVar2 = (ENetDormancy *)((longlong)(int)EVar1 * 0x10 + *(longlong *)this);
        if (*pEVar2 == *param_2) {
          if (pEVar2 != (ENetDormancy *)0x0) {
            return (int *)(pEVar2 + 1);
          }
          break;
        }
        EVar1 = pEVar2[2];
      } while (EVar1 != ~DORM_Never);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<enum_ENetDormancy,int>,TDefaultMapHashableKeyFuncs<enum_ENetDormancy,int,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<enum_ENetDormancy_&&>_>
            (this,(uint)local_res8,(TKeyInitializer<ENetDormancy_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (int *)(*(longlong *)this + (longlong)local_res8[0] * 0x10 + 4);
}

// Find @ 147fcb820

FModeRecord * __thiscall
TMapBase<FName,FNaniteVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNaniteVisualizationData::FModeRecord,1>_>
::Find(TMapBase<FName,FNaniteVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNaniteVisualizationData::FModeRecord,1>_>
       *this,FName param_1)

{
  uint uVar1;
  FModeRecord *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0x68 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pFVar2 = (FModeRecord *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pFVar2 = (FModeRecord *)(pFVar4 + 1);
          }
          return pFVar2;
        }
        uVar1 = pFVar4[0xc].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FModeRecord *)0x0;
}

// FindChecked @ 147fcc0e0

TUniquePtr<FActorDestructionInfo,TDefaultDelete<FActorDestructionInfo>_> * __thiscall
TMapBase<FNetworkGUID,TUniquePtr<FActorDestructionInfo,TDefaultDelete<FActorDestructionInfo>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TUniquePtr<FActorDestructionInfo,TDefaultDelete<FActorDestructionInfo>_>,0>_>
::FindChecked(TMapBase<FNetworkGUID,TUniquePtr<FActorDestructionInfo,TDefaultDelete<FActorDestructionInfo>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TUniquePtr<FActorDestructionInfo,TDefaultDelete<FActorDestructionInfo>_>,0>_>
              *this,FNetworkGUID *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TUniquePtr<FActorDestructionInfo,TDefaultDelete<FActorDestructionInfo>_> *pTVar7;
  ForElementType<FSetElementId> FVar8;
  
  uVar2 = (param_1->field0_0x0).ObjectId;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar8 = (this->Pairs).Hash.SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar6 = *(int *)((longlong)FVar8 +
                    ((uVar2 >> 0x20) * 0x17 + uVar2 & (ulonglong)((this->Pairs).HashSize - 1)) * 4);
    if (iVar6 != -1) {
      lVar3 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar3 + (longlong)iVar6 * 0x18;
        if (*(ulonglong *)(lVar3 + (longlong)iVar6 * 0x18) == uVar2) {
          if (lVar1 != 0) {
            return (TUniquePtr<FActorDestructionInfo,TDefaultDelete<FActorDestructionInfo>_> *)
                   (lVar1 + 8);
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x10);
      } while (iVar6 != -1);
    }
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar5) {
    return (TUniquePtr<FActorDestructionInfo,TDefaultDelete<FActorDestructionInfo>_> *)&DAT_00000008
    ;
  }
  pcVar4 = (code *)swi(3);
  pTVar7 = (TUniquePtr<FActorDestructionInfo,TDefaultDelete<FActorDestructionInfo>_> *)(*pcVar4)();
  return pTVar7;
}

// Emplace<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FRepLayout,1>_const_&> @ 14800c520

TSharedPtr<FRepLayout,1> * __thiscall
TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FRepLayout,1>,FDefaultSetAllocator,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FRepLayout,1>,0>_>
::Emplace<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FRepLayout,1>_const_&>
          (TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FRepLayout,1>,FDefaultSetAllocator,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FRepLayout,1>,0>_>
           *this,TWeakObjectPtr<UObject,FWeakObjectPtr> *param_1,TSharedPtr<FRepLayout,1> *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar6 * 0x20 + 4 + lVar3);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar6);
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FRepLayout,1>_>_>
       *)0x0) {
    *(FWeakObjectPtr *)local_18.Pointer = param_1->WeakPtr;
    *(FRepLayout **)((longlong)local_18.Pointer + 8) = param_2->Object;
    pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)((longlong)local_18.Pointer + 0x10) = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(undefined4 *)((longlong)local_18.Pointer + 0x18) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  uVar7 = (uint)((ulonglong)*(undefined8 *)local_18.Pointer >> 0x20) ^
          (uint)*(undefined8 *)local_18.Pointer;
  bVar5 = TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FRepLayout,1>_>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FRepLayout,1>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar7,local_18.Pointer,local_res8,(bool *)0x0);
  if (!bVar5) {
    TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FRepLayout,1>_>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FRepLayout,1>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar7,local_18.Pointer,local_res8[0]);
  }
  return (TSharedPtr<FRepLayout,1> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// Emplace<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FRepLayout,1>_> @ 14800c660

TSharedPtr<FRepLayout,1> * __thiscall
TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FRepLayout,1>,FDefaultSetAllocator,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FRepLayout,1>,0>_>
::Emplace<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FRepLayout,1>_>
          (TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FRepLayout,1>,FDefaultSetAllocator,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FRepLayout,1>,0>_>
           *this,TWeakObjectPtr<UObject,FWeakObjectPtr> *param_1,TSharedPtr<FRepLayout,1> *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FRepLayout,1>_>_>
  *pTVar6;
  uint uVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x20 + 4 + lVar3);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  pTVar6 = (TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FRepLayout,1>_>_>
            *)0x0;
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FRepLayout,1>_>_>
       *)0x0) {
    *(FWeakObjectPtr *)local_18.Pointer = param_1->WeakPtr;
    *(FRepLayout **)((longlong)local_18.Pointer + 8) = param_2->Object;
    *(TReferenceControllerBase<1> **)((longlong)local_18.Pointer + 0x10) =
         (param_2->SharedReferenceCount).ReferenceController;
    (param_2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_2->Object = (FRepLayout *)0x0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x18) = 0xffffffff;
    pTVar6 = local_18.Pointer;
  }
  local_res8[0] = local_18.Index;
  uVar7 = (uint)((ulonglong)*(undefined8 *)pTVar6 >> 0x20) ^ (uint)*(undefined8 *)pTVar6;
  bVar4 = TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FRepLayout,1>_>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FRepLayout,1>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar7,pTVar6,local_res8,(bool *)0x0);
  if (!bVar4) {
    TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FRepLayout,1>_>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FRepLayout,1>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar7,pTVar6,local_res8[0]);
  }
  return (TSharedPtr<FRepLayout,1> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// FindOrAddImpl<UNetConnection_*_const_&> @ 14800f6b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<FNetworkProfiler::FSendBunchInfo,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<UNetConnection_*,TArray<FNetworkProfiler::FSendBunchInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UNetConnection_*,TArray<FNetworkProfiler::FSendBunchInfo,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<UNetConnection_*_const_&>
          (TMapBase<UNetConnection_*,TArray<FNetworkProfiler::FSendBunchInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UNetConnection_*,TArray<FNetworkProfiler::FSendBunchInfo,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,UNetConnection **param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  UNetConnection **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((UNetConnection *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (TArray<FNetworkProfiler::FSendBunchInfo,TSizedDefaultAllocator<32>_> *)
                   (plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<UNetConnection_*,TArray<FNetworkProfiler::FSendBunchInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UNetConnection_*,TArray<FNetworkProfiler::FSendBunchInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UNetConnection_*_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<UNetConnection_*_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (TArray<FNetworkProfiler::FSendBunchInfo,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// FindOrAddImpl<FName_const_&> @ 14800f760

TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator> * __thiscall
TMapBase<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>
                    *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[0xb].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x60);
}

// FindOrAddImpl<FNetworkGUID_const_&> @ 14800f810

TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> * __thiscall
TMapBase<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>,0>_>
::FindOrAddImpl<FNetworkGUID_const_&>
          (TMapBase<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>,0>_>
           *this,uint param_1,FNetworkGUID *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FNetworkGUID *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == (param_2->field0_0x0).ObjectId) {
          if (puVar2 != (ulong64 *)0x0) {
            return (TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *)
                   (puVar2 + 1);
          }
          break;
        }
        iVar1 = (int)puVar2[0xb];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FNetworkGUID_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FNetworkGUID_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x60);
}

// FindOrAddImpl<TWeakObjectPtr<UClass,FWeakObjectPtr>_> @ 14800f8c0

int * __thiscall
TMapBase<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,0>_>
::FindOrAddImpl<TWeakObjectPtr<UClass,FWeakObjectPtr>_>
          (TMapBase<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,0>_>
           *this,uint param_1,TWeakObjectPtr<UClass,FWeakObjectPtr> *param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    while (iVar1 != -1) {
      local_res8 = param_2->WeakPtr;
      local_res20 = *(FWeakObjectPtr *)
                     ((longlong)iVar1 * 0x14 + *(longlong *)&(this->Pairs).Elements);
      bVar2 = TWeakObjectPtr<UClass_const_,FWeakObjectPtr>::UEOpEquals<UClass,bool>
                        ((TWeakObjectPtr<UClass_const_,FWeakObjectPtr> *)&local_res20,
                         (TWeakObjectPtr<UClass,FWeakObjectPtr> *)&local_res8);
      lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x14;
      if (bVar2) {
        if (lVar3 != 0) {
          return (int *)(lVar3 + 8);
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0xc);
    }
  }
  local_res20 = (FWeakObjectPtr)param_2;
  TSet<TTuple<TWeakObjectPtr<UClass,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TWeakObjectPtr<UClass,FWeakObjectPtr>_&&>_>
            (&this->Pairs,(uint)&local_res8,
             (TKeyInitializer<TWeakObjectPtr<UClass,FWeakObjectPtr>_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (int *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8.ObjectIndex * 0x14 + 8)
  ;
}

// FindOrAddImpl<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_> @ 14800f9b0

int * __thiscall
TMapBase<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int,0>_>
::FindOrAddImpl<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
          (TMapBase<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int,0>_>
           *this,uint param_1,TWeakObjectPtr<UNetConnection,FWeakObjectPtr> *param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    while (iVar1 != -1) {
      local_res8 = param_2->WeakPtr;
      local_res20 = *(FWeakObjectPtr *)
                     ((longlong)iVar1 * 0x14 + *(longlong *)&(this->Pairs).Elements);
      bVar2 = TWeakObjectPtr<UNetConnection_const_,FWeakObjectPtr>::UEOpEquals<UNetConnection,bool>
                        ((TWeakObjectPtr<UNetConnection_const_,FWeakObjectPtr> *)&local_res20,
                         (TWeakObjectPtr<UNetConnection,FWeakObjectPtr> *)&local_res8);
      lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x14;
      if (bVar2) {
        if (lVar3 != 0) {
          return (int *)(lVar3 + 8);
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0xc);
    }
  }
  local_res20 = (FWeakObjectPtr)param_2;
  TSet<TTuple<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_&&>_>
            (&this->Pairs,(uint)&local_res8,
             (TKeyInitializer<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_&&> *)(ulonglong)param_1
             ,(bool *)&local_res20);
  return (int *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8.ObjectIndex * 0x14 + 8)
  ;
}

// FindOrAddImpl<FString> @ 14800faa0

int * __thiscall
TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::
FindOrAddImpl<FString>
          (TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FString *local_res20;
  
  iVar1 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (int *)(lVar2 + 0x10);
  }
  local_res20 = param_2;
  TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
  EmplaceByHash<TKeyInitializer<FString_&&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FString_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (int *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 0x10);
}

// Find @ 148030670

TSharedPtr<FRepLayout,1> * __thiscall
TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FRepLayout,1>,FDefaultSetAllocator,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FRepLayout,1>,0>_>
::Find(TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FRepLayout,1>,FDefaultSetAllocator,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FRepLayout,1>,0>_>
       *this,TWeakObjectPtr<UObject_const_,FWeakObjectPtr> param_1)

{
  TSharedPtr<FRepLayout,1> *pTVar1;
  int iVar2;
  undefined8 *puVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 +
                    (((ulonglong)param_1.WeakPtr >> 0x20 ^ (ulonglong)param_1.WeakPtr & 0xffffffff)
                    & (ulonglong)((this->Pairs).HashSize - 1)) * 4);
    if (iVar2 != -1) {
      do {
        puVar3 = (undefined8 *)((longlong)iVar2 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (((int)*puVar3 == param_1.WeakPtr.ObjectIndex) &&
           ((int)((ulonglong)*puVar3 >> 0x20) == param_1.WeakPtr.ObjectSerialNumber)) {
          if (iVar2 == -1) {
            return (TSharedPtr<FRepLayout,1> *)0x0;
          }
          pTVar1 = (TSharedPtr<FRepLayout,1> *)0x0;
          if (puVar3 != (undefined8 *)0x0) {
            pTVar1 = (TSharedPtr<FRepLayout,1> *)(puVar3 + 1);
          }
          return pTVar1;
        }
        iVar2 = *(int *)(puVar3 + 3);
      } while (iVar2 != -1);
    }
  }
  return (TSharedPtr<FRepLayout,1> *)0x0;
}

// Find @ 1480306f0

TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>
* __thiscall
TMapBase<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>,0>_>
::Find(TMapBase<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>,0>_>
       *this,TObjectKey<UNetConnection> *param_1)

{
  int iVar1;
  TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>
  *pTVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (param_1->ObjectKey).ObjectSerialNumber;
  uVar6 = (param_1->ObjectKey).ObjectIndex - uVar4 ^ uVar4 >> 0xd;
  uVar5 = (-0x61c88647 - uVar6) - uVar4 ^ uVar6 << 8;
  uVar4 = (uVar4 - uVar5) - uVar6 ^ uVar5 >> 0xd;
  uVar6 = (uVar6 - uVar4) - uVar5 ^ uVar4 >> 0xc;
  uVar5 = (uVar5 - uVar6) - uVar4 ^ uVar6 << 0x10;
  uVar4 = (uVar4 - uVar5) - uVar6 ^ uVar5 >> 5;
  uVar6 = (uVar6 - uVar4) - uVar5 ^ uVar4 >> 3;
  uVar5 = (uVar5 - uVar6) - uVar4 ^ uVar6 << 10;
  iVar1 = TSet<TTuple<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectKey<UNetConnection>_>
                    (&this->Pairs,(uVar4 - uVar5) - uVar6 ^ uVar5 >> 0xf,param_1);
  if (iVar1 != -1) {
    lVar3 = (longlong)iVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements;
    pTVar2 = (TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>
              *)0x0;
    if (lVar3 != 0) {
      pTVar2 = (TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>
                *)(lVar3 + 8);
    }
    return pTVar2;
  }
  return (TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>
          *)0x0;
}

// Find @ 1480307c0

TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator> * __thiscall
TMapBase<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>
::Find(TMapBase<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>
       *this,FName param_1)

{
  uint uVar1;
  TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator> *pTVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pTVar2 = (TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>
                    *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pTVar2 = (TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>
                      *)(pFVar4 + 1);
          }
          return pTVar2;
        }
        uVar1 = pFVar4[0xb].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator> *)0x0;
}

// Find @ 148030860

TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator> * __thiscall
TMapBase<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>,0>_>
::Find(TMapBase<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>,0>_>
       *this,FNetworkGUID *param_1)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong *puVar3;
  TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator> *pTVar4;
  ForElementType<FSetElementId> FVar5;
  
  uVar1 = (param_1->field0_0x0).ObjectId;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar5 +
                    ((uVar1 >> 0x20) * 0x17 + uVar1 & (ulonglong)((this->Pairs).HashSize - 1)) * 4);
    if (iVar2 != -1) {
      do {
        puVar3 = (ulonglong *)((longlong)iVar2 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar3 == uVar1) {
          pTVar4 = (TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>
                    *)0x0;
          if (puVar3 != (ulonglong *)0x0) {
            pTVar4 = (TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>
                      *)(puVar3 + 1);
          }
          return pTVar4;
        }
        iVar2 = (int)puVar3[0xb];
      } while (iVar2 != -1);
    }
  }
  return (TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator> *)
         0x0;
}

// FindChecked @ 148031090

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<FNetworkProfiler::FSendBunchInfo,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<UNetConnection_*,TArray<FNetworkProfiler::FSendBunchInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UNetConnection_*,TArray<FNetworkProfiler::FSendBunchInfo,TSizedDefaultAllocator<32>_>,0>_>
::FindChecked(TMapBase<UNetConnection_*,TArray<FNetworkProfiler::FSendBunchInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UNetConnection_*,TArray<FNetworkProfiler::FSendBunchInfo,TSizedDefaultAllocator<32>_>,0>_>
              *this,UNetConnection *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArray<FNetworkProfiler::FSendBunchInfo,TSizedDefaultAllocator<32>_> *pTVar4;
  ForElementType<FSetElementId> FVar5;
  longlong *plVar6;
  uint uVar7;
  
  uVar7 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
    if (iVar3 != -1) {
      do {
        plVar6 = (longlong *)((longlong)iVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((UNetConnection *)*plVar6 == param_1) {
          if (plVar6 != (longlong *)0x0) {
            return (TArray<FNetworkProfiler::FSendBunchInfo,TSizedDefaultAllocator<32>_> *)
                   (plVar6 + 1);
          }
          break;
        }
        iVar3 = (int)plVar6[3];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TArray<FNetworkProfiler::FSendBunchInfo,TSizedDefaultAllocator<32>_> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TArray<FNetworkProfiler::FSendBunchInfo,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
  return pTVar4;
}

// Remove @ 148050880

int __thiscall
TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FRepLayout,1>,FDefaultSetAllocator,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FRepLayout,1>,0>_>
::Remove(TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FRepLayout,1>,FDefaultSetAllocator,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FRepLayout,1>,0>_>
         *this,TWeakObjectPtr<UObject_const_,FWeakObjectPtr> param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  int iVar5;
  
  iVar5 = 0;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    ((longlong)(param_1.WeakPtr.ObjectSerialNumber ^ param_1.WeakPtr.ObjectIndex) &
                    (longlong)(this->Pairs).HashSize - 1U) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      while( true ) {
        uVar2 = *(undefined8 *)((longlong)iVar3 * 0x20 + lVar1);
        if (((uint)uVar2 == param_1.WeakPtr.ObjectIndex) &&
           ((uint)((ulonglong)uVar2 >> 0x20) == param_1.WeakPtr.ObjectSerialNumber)) break;
        iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + lVar1);
        if (iVar3 == -1) {
          return 0;
        }
      }
      TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FRepLayout,1>_>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FRepLayout,1>,0>,FDefaultSetAllocator>
      ::RemoveByIndex(&this->Pairs,iVar3);
      iVar5 = 1;
    }
  }
  return iVar5;
}

// Remove @ 148050930

int __thiscall
TMapBase<FObjectKey,TSharedPtr<FReplicationChangelistMgr,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<FReplicationChangelistMgr,1>,0>_>
::Remove(TMapBase<FObjectKey,TSharedPtr<FReplicationChangelistMgr,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<FReplicationChangelistMgr,1>,0>_>
         *this,FObjectKey *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ForElementType<FSetElementId> FVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 == *(int *)&(this->Pairs).Elements.field_0x34) {
    return 0;
  }
  uVar1 = param_1->ObjectSerialNumber;
  iVar10 = 0;
  uVar8 = param_1->ObjectIndex - uVar1 ^ uVar1 >> 0xd;
  uVar5 = (-0x61c88647 - uVar8) - uVar1 ^ uVar8 << 8;
  uVar4 = (uVar1 - uVar8) - uVar5 ^ uVar5 >> 0xd;
  uVar9 = (uVar8 - uVar4) - uVar5 ^ uVar4 >> 0xc;
  uVar8 = (uVar5 - uVar9) - uVar4 ^ uVar9 << 0x10;
  uVar5 = (uVar4 - uVar8) - uVar9 ^ uVar8 >> 5;
  uVar9 = (uVar9 - uVar5) - uVar8 ^ uVar5 >> 3;
  uVar4 = uVar9 << 10 ^ (uVar8 - uVar9) - uVar5;
  FVar7 = (this->Pairs).Hash.SecondaryData;
  if (FVar7 == (ForElementType<FSetElementId>)0x0) {
    FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
  }
  iVar6 = *(int *)((longlong)FVar7 +
                  (((longlong)(int)((uVar5 - uVar4) - uVar9) ^ (ulonglong)(uVar4 >> 0xf)) &
                  (longlong)(this->Pairs).HashSize - 1U) * 4);
  if (iVar6 != -1) {
    lVar2 = *(longlong *)&(this->Pairs).Elements;
    while ((lVar3 = (longlong)iVar6 * 0x20, *(int *)(lVar3 + lVar2) != param_1->ObjectIndex ||
           (*(uint *)(lVar3 + 4 + lVar2) != uVar1))) {
      iVar6 = *(int *)(lVar3 + 0x18 + lVar2);
      if (iVar6 == -1) {
        return 0;
      }
    }
    TSet<TTuple<FObjectKey,TSharedPtr<FReplicationChangelistMgr,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<FReplicationChangelistMgr,1>,0>,FDefaultSetAllocator>
    ::RemoveByIndex(&this->Pairs,iVar6);
    iVar10 = 1;
  }
  return iVar10;
}

// Remove @ 148050a60

int __thiscall
TMapBase<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>
::Remove(TMapBase<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>
         *this,FName param_1)

{
  uint uVar1;
  int iVar2;
  FName local_res8;
  FName local_res10;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    local_res8 = param_1;
    local_res10 = param_1;
    uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    iVar2 = TSet<TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
            ::RemoveImpl<FName>(&this->Pairs,local_res10.Number + uVar1,&local_res8);
    return iVar2;
  }
  return 0;
}

// Emplace<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>_const_&> @ 148079a30

TSet<TTuple<FName,UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>
* __thiscall
TMapBase<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,TSet<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,TSet<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>,0>_>
::Emplace<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>_const_&>
          (void *this,TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr> *param_1)

{
  TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr> *pTVar1;
  int iVar2;
  uint uVar3;
  void *_Dst;
  TKeyInitializer<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>_const_&> local_res8;
  FSparseArrayAllocationInfo local_28;
  
  local_res8.Key = param_1;
  TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(this,&local_28);
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,TSet<TTuple<FName,UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>_>_>
       *)0x0) {
    TKeyInitializer<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>_const_&>::
    operator<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,TSet<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>_>_TTuple<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,TSet<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>_>
              (&local_res8,local_28.Pointer);
    *(undefined4 *)((longlong)local_28.Pointer + 0x58) = 0xffffffff;
  }
  pTVar1 = *(TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr> **)local_28.Pointer;
  uVar3 = (uint)((ulonglong)pTVar1 >> 0x20) ^ (uint)pTVar1;
  if (*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34) != 1) {
    local_res8.Key = pTVar1;
    iVar2 = TSet<TTuple<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,TSet<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,TSet<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<TWeakObjectPtr<UNetworkMetricsBaseListener_const_,FWeakObjectPtr>_>
                      (this,uVar3,
                       (TWeakObjectPtr<UNetworkMetricsBaseListener_const_,FWeakObjectPtr> *)
                       &local_res8);
    if (iVar2 != -1) {
      _Dst = (void *)((longlong)iVar2 * 0x60 + *(longlong *)this);
      *(undefined4 *)((longlong)_Dst + 0x50) = 0;
      if (*(void **)((longlong)_Dst + 0x48) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)_Dst + 0x48));
      }
      TSparseArray<TSparseSetElement<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((void *)((longlong)_Dst + 8));
      memmove(_Dst,local_28.Pointer,0x58);
      TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(this,local_28.Index,1);
      local_28.Index = iVar2;
      goto LAB_148079b13;
    }
  }
  TSet<TTuple<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,TSet<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,TSet<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::RehashOrLink(this,uVar3,local_28.Pointer,local_28.Index);
LAB_148079b13:
  return (TSet<TTuple<FName,UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>
          *)(*(longlong *)this + 8 + (longlong)local_28.Index * 0x60);
}

// EmplaceByHash<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>_const_&> @ 14807cfc0

TSet<TTuple<FName,UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>
* __thiscall
TMapBase<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,TSet<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,TSet<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>,0>_>
::EmplaceByHash<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>_const_&>
          (void *this,uint param_1,
          TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr> *param_2)

{
  int iVar1;
  void *_Dst;
  TKeyInitializer<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>_const_&> local_res8;
  FSparseArrayAllocationInfo local_28;
  
  local_res8.Key = param_2;
  TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(this,&local_28);
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,TSet<TTuple<FName,UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>_>_>
       *)0x0) {
    TKeyInitializer<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>_const_&>::
    operator<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,TSet<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>_>_TTuple<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,TSet<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>_>
              (&local_res8,local_28.Pointer);
    *(undefined4 *)((longlong)local_28.Pointer + 0x58) = 0xffffffff;
  }
  if (*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34) != 1) {
    local_res8.Key =
         *(TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr> **)local_28.Pointer;
    iVar1 = TSet<TTuple<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,TSet<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,TSet<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<TWeakObjectPtr<UNetworkMetricsBaseListener_const_,FWeakObjectPtr>_>
                      (this,param_1,
                       (TWeakObjectPtr<UNetworkMetricsBaseListener_const_,FWeakObjectPtr> *)
                       &local_res8);
    if (iVar1 != -1) {
      _Dst = (void *)((longlong)iVar1 * 0x60 + *(longlong *)this);
      *(undefined4 *)((longlong)_Dst + 0x50) = 0;
      if (*(void **)((longlong)_Dst + 0x48) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)_Dst + 0x48));
      }
      TSparseArray<TSparseSetElement<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((void *)((longlong)_Dst + 8));
      memmove(_Dst,local_28.Pointer,0x58);
      TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(this,local_28.Index,1);
      local_28.Index = iVar1;
      goto LAB_14807d09c;
    }
  }
  TSet<TTuple<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,TSet<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,TSet<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::RehashOrLink(this,param_1,local_28.Pointer,local_28.Index);
LAB_14807d09c:
  return (TSet<TTuple<FName,UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>
          *)(*(longlong *)this + 8 + (longlong)local_28.Index * 0x60);
}

// EmplaceByHash<FName_const_&> @ 14807d0d0

FODSCShaderMapData * __thiscall
TMapBase<FName,FODSCThread::FODSCShaderMapData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FODSCThread::FODSCShaderMapData,0>_>
::EmplaceByHash<FName_const_&>
          (TMapBase<FName,FODSCThread::FODSCShaderMapData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FODSCThread::FODSCShaderMapData,0>_>
           *this,uint param_1,FName *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  TKeyInitializer<FName_const_&> local_res8;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  local_res8.Key = param_2;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x78,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x78 + 4 + lVar3);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x78 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<120,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<120,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FName,FODSCThread::FODSCShaderMapData>_> *)0x0)
  {
    TKeyInitializer<FName_const_&>::
    operator<FName,FODSCThread::FODSCShaderMapData>_TTuple<FName,FODSCThread::FODSCShaderMapData>
              (&local_res8,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x70) = 0xffffffff;
  }
  local_res8.Key._0_4_ = local_18.Index;
  bVar4 = TSet<TTuple<FName,FODSCThread::FODSCShaderMapData>,TDefaultMapHashableKeyFuncs<FName,FODSCThread::FODSCShaderMapData,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,(int *)&local_res8,(bool *)0x0)
  ;
  if (!bVar4) {
    TSet<TTuple<FName,FODSCThread::FODSCShaderMapData>,TDefaultMapHashableKeyFuncs<FName,FODSCThread::FODSCShaderMapData,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,(int)local_res8.Key);
  }
  return (FODSCShaderMapData *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)(int)local_res8.Key * 0x78 + 8);
}

// EmplaceByHash<FName> @ 14807eb80

FODSCShaderMapData * __thiscall
TMapBase<FName,FODSCThread::FODSCShaderMapData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FODSCThread::FODSCShaderMapData,0>_>
::EmplaceByHash<FName>
          (TMapBase<FName,FODSCThread::FODSCShaderMapData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FODSCThread::FODSCShaderMapData,0>_>
           *this,uint param_1,FName *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  TKeyInitializer<FName_&&> local_res8;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  local_res8.Key = param_2;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x78,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x78 + 4 + lVar3);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x78 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<120,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<120,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FName,FODSCThread::FODSCShaderMapData>_> *)0x0)
  {
    TKeyInitializer<FName_&&>::
    operator<FName,FODSCThread::FODSCShaderMapData>_TTuple<FName,FODSCThread::FODSCShaderMapData>
              (&local_res8,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x70) = 0xffffffff;
  }
  local_res8.Key._0_4_ = local_18.Index;
  bVar4 = TSet<TTuple<FName,FODSCThread::FODSCShaderMapData>,TDefaultMapHashableKeyFuncs<FName,FODSCThread::FODSCShaderMapData,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,(int *)&local_res8,(bool *)0x0)
  ;
  if (!bVar4) {
    TSet<TTuple<FName,FODSCThread::FODSCShaderMapData>,TDefaultMapHashableKeyFuncs<FName,FODSCThread::FODSCShaderMapData,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,(int)local_res8.Key);
  }
  return (FODSCShaderMapData *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)(int)local_res8.Key * 0x78 + 8);
}

// FindOrAddImpl<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>_const_&> @ 148080700

TSet<TTuple<FName,UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>
* __thiscall
TMapBase<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,TSet<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,TSet<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>,0>_>
::FindOrAddImpl<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>_const_&>
          (void *this,uint param_1,
          TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr> *param_2)

{
  int iVar1;
  bool bVar2;
  TSet<TTuple<FName,UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>
  *pTVar3;
  longlong lVar4;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar4 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar4 = (longlong)this + 0x38;
    }
    iVar1 = *(int *)(lVar4 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    while (iVar1 != -1) {
      local_res8 = param_2->WeakPtr;
      local_res20 = *(FWeakObjectPtr *)((longlong)iVar1 * 0x60 + *(longlong *)this);
      bVar2 = TWeakObjectPtr<UNetworkMetricsBaseListener_const_,FWeakObjectPtr>::
              UEOpEquals<UNetworkMetricsBaseListener,bool>
                        ((TWeakObjectPtr<UNetworkMetricsBaseListener_const_,FWeakObjectPtr> *)
                         &local_res20,
                         (TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr> *)&local_res8);
      lVar4 = *(longlong *)this + (longlong)iVar1 * 0x60;
      if (bVar2) {
        if (lVar4 != 0) {
          return (TSet<TTuple<FName,UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>
                  *)(lVar4 + 8);
        }
        break;
      }
      iVar1 = *(int *)(lVar4 + 0x58);
    }
  }
  pTVar3 = EmplaceByHash<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>_const_&>
                     (this,param_1,param_2);
  return pTVar3;
}

// FindOrAddImpl<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&> @ 1480807c0

FNetworkGUID * __thiscall
TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>_>
::FindOrAddImpl<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&>
          (TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>_>
           *this,uint param_1,TWeakObjectPtr<UObject,FWeakObjectPtr> *param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    while (iVar1 != -1) {
      local_res8 = param_2->WeakPtr;
      local_res20 = *(FWeakObjectPtr *)
                     ((longlong)iVar1 * 0x18 + *(longlong *)&(this->Pairs).Elements);
      bVar2 = TWeakObjectPtr<UObject_const_,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                        ((TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_res20,
                         (TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_res8);
      lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x18;
      if (bVar2) {
        if (lVar3 != 0) {
          return (FNetworkGUID *)(lVar3 + 8);
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0x10);
    }
  }
  local_res20 = (FWeakObjectPtr)param_2;
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&>_>
            (&this->Pairs,(uint)&local_res8,
             (TKeyInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FNetworkGUID *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8.ObjectIndex * 0x18 + 8);
}

// FindOrAddImpl<FName_const_&> @ 1480808b0

FODSCShaderMapData * __thiscall
TMapBase<FName,FODSCThread::FODSCShaderMapData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FODSCThread::FODSCShaderMapData,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,FODSCThread::FODSCShaderMapData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FODSCThread::FODSCShaderMapData,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  FODSCShaderMapData *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x78 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (FODSCShaderMapData *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[0xe].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  pFVar3 = EmplaceByHash<FName_const_&>(this,param_1,param_2);
  return pFVar3;
}

// FindOrAddImpl<FNetworkGUID_const_&> @ 148080930

int * __thiscall
TMapBase<FNetworkGUID,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>_>::
FindOrAddImpl<FNetworkGUID_const_&>
          (TMapBase<FNetworkGUID,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>_>
           *this,uint param_1,FNetworkGUID *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  FNetworkGUID *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x18;
        if (*(ulong64 *)(lVar1 + (longlong)iVar2 * 0x18) == (param_2->field0_0x0).ObjectId) {
          if (lVar3 != 0) goto LAB_1480809c2;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FNetworkGUID_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FNetworkGUID_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
LAB_1480809c2:
  return (int *)(lVar3 + 8);
}

// FindOrAddImpl<FNetworkGUID_const_&> @ 1480809e0

FRefCountedNetGUIDArray * __thiscall
TMapBase<FNetworkGUID,UE::Net::Private::FRefCountedNetGUIDArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,UE::Net::Private::FRefCountedNetGUIDArray,0>_>
::FindOrAddImpl<FNetworkGUID_const_&>
          (TMapBase<FNetworkGUID,UE::Net::Private::FRefCountedNetGUIDArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,UE::Net::Private::FRefCountedNetGUIDArray,0>_>
           *this,uint param_1,FNetworkGUID *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FNetworkGUID *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == (param_2->field0_0x0).ObjectId) {
          if (puVar2 != (ulong64 *)0x0) {
            return (FRefCountedNetGUIDArray *)(puVar2 + 1);
          }
          break;
        }
        iVar1 = (int)puVar2[5];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FNetworkGUID,UE::Net::Private::FRefCountedNetGUIDArray>,TDefaultMapHashableKeyFuncs<FNetworkGUID,UE::Net::Private::FRefCountedNetGUIDArray,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FNetworkGUID_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FNetworkGUID_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (FRefCountedNetGUIDArray *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x30);
}

// FindOrAddImpl<FString_const_&> @ 148080a90

TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>
* __thiscall
TMapBase<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>_>
::FindOrAddImpl<FString_const_&>
          (TMapBase<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FString *local_res20;
  
  iVar1 = TSet<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>
            *)(lVar2 + 0x10);
  }
  local_res20 = param_2;
  TSet<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FString_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>
          *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 0x10);
}

// FindOrAddImpl<FString_const_&> @ 148080b20

ulong64 * __thiscall
TMapBase<FString,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned___int64,0>_>
::FindOrAddImpl<FString_const_&>
          (TMapBase<FString,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned___int64,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FString *local_res20;
  
  iVar1 = TSet<TTuple<FString,unsigned___int64>,TDefaultMapHashableKeyFuncs<FString,unsigned___int64,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (ulong64 *)(lVar2 + 0x10);
  }
  local_res20 = param_2;
  TSet<TTuple<FString,unsigned___int64>,TDefaultMapHashableKeyFuncs<FString,unsigned___int64,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FString_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (ulong64 *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 0x10);
}

// FindOrAddImpl<FName> @ 148080bb0

FODSCShaderMapData * __thiscall
TMapBase<FName,FODSCThread::FODSCShaderMapData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FODSCThread::FODSCShaderMapData,0>_>
::FindOrAddImpl<FName>
          (TMapBase<FName,FODSCThread::FODSCShaderMapData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FODSCThread::FODSCShaderMapData,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  FODSCShaderMapData *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x78 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (FODSCShaderMapData *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[0xe].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  pFVar3 = EmplaceByHash<FName>(this,param_1,param_2);
  return pFVar3;
}

// Find @ 1480a1350

FObjectIdAnnotation * __thiscall
TMapBase<UObjectBase_const_*,FObjectIdAnnotation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FObjectIdAnnotation,0>_>
::Find(TMapBase<UObjectBase_const_*,FObjectIdAnnotation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FObjectIdAnnotation,0>_>
       *this,UObjectBase *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  FObjectIdAnnotation *pFVar5;
  uint uVar6;
  
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(UObjectBase **)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          pFVar5 = (FObjectIdAnnotation *)0x0;
          if (lVar1 != 0) {
            pFVar5 = (FObjectIdAnnotation *)(lVar1 + 8);
          }
          return pFVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (FObjectIdAnnotation *)0x0;
}

// Find @ 1480a1400

FNetworkMetric<float> * __thiscall
TMapBase<FName,UE::Net::FNetworkMetric<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetworkMetric<float>,0>_>
::Find(TMapBase<FName,UE::Net::FNetworkMetric<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetworkMetric<float>,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FNetworkMetric<float> *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0x1c + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pFVar2 = (FNetworkMetric<float> *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pFVar2 = (FNetworkMetric<float> *)(pFVar4 + 1);
          }
          return pFVar2;
        }
        uVar1 = pFVar4[2].Number;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FNetworkMetric<float> *)0x0;
}

// Find @ 1480a14a0

FNetworkMetric<__int64> * __thiscall
TMapBase<FName,UE::Net::FNetworkMetric<__int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetworkMetric<__int64>,0>_>
::Find(TMapBase<FName,UE::Net::FNetworkMetric<__int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetworkMetric<__int64>,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FNetworkMetric<__int64> *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == param_1) {
          pFVar4 = (FNetworkMetric<__int64> *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pFVar4 = (FNetworkMetric<__int64> *)(pFVar2 + 1);
          }
          return pFVar4;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FNetworkMetric<__int64> *)0x0;
}

// Find @ 1480a1540

FODSCShaderMapData * __thiscall
TMapBase<FName,FODSCThread::FODSCShaderMapData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FODSCThread::FODSCShaderMapData,0>_>
::Find(TMapBase<FName,FODSCThread::FODSCShaderMapData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FODSCThread::FODSCShaderMapData,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FODSCShaderMapData *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0x78 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pFVar2 = (FODSCShaderMapData *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pFVar2 = (FODSCShaderMapData *)(pFVar4 + 1);
          }
          return pFVar2;
        }
        uVar1 = pFVar4[0xe].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FODSCShaderMapData *)0x0;
}

// Find @ 1480a15e0

EMetricType * __thiscall
TMapBase<FName,enum_UNetworkMetricsDatabase::EMetricType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_UNetworkMetricsDatabase::EMetricType,0>_>
::Find(void *this,FName param_1)

{
  uint uVar1;
  int iVar2;
  EMetricType *pEVar3;
  longlong lVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar4 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar4 = (longlong)this + 0x38;
    }
    iVar2 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)((longlong)this + 0x48) - 1U & param_1.Number + uVar1) * 4);
    if (iVar2 != -1) {
      do {
        lVar4 = *(longlong *)this + (longlong)iVar2 * 0x14;
        if (*(FName *)(*(longlong *)this + (longlong)iVar2 * 0x14) == param_1) {
          pEVar3 = (EMetricType *)0x0;
          if (lVar4 != 0) {
            pEVar3 = (EMetricType *)(lVar4 + 8);
          }
          return pEVar3;
        }
        iVar2 = *(int *)(lVar4 + 0xc);
      } while (iVar2 != -1);
    }
  }
  return (EMetricType *)0x0;
}

// Find @ 1480a1680

FNetGuidCacheObject * __thiscall
TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
::Find(TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
       *this,FNetworkGUID *param_1)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong *puVar3;
  FNetGuidCacheObject *pFVar4;
  ForElementType<FSetElementId> FVar5;
  
  uVar1 = (param_1->field0_0x0).ObjectId;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar5 +
                    ((uVar1 >> 0x20) * 0x17 + uVar1 & (ulonglong)((this->Pairs).HashSize - 1)) * 4);
    if (iVar2 != -1) {
      do {
        puVar3 = (ulonglong *)((longlong)iVar2 * 0x40 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar3 == uVar1) {
          pFVar4 = (FNetGuidCacheObject *)0x0;
          if (puVar3 != (ulonglong *)0x0) {
            pFVar4 = (FNetGuidCacheObject *)(puVar3 + 1);
          }
          return pFVar4;
        }
        iVar2 = (int)puVar3[7];
      } while (iVar2 != -1);
    }
  }
  return (FNetGuidCacheObject *)0x0;
}

// Find @ 1480a1700

FRefCountedNetGUIDArray * __thiscall
TMapBase<FNetworkGUID,UE::Net::Private::FRefCountedNetGUIDArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,UE::Net::Private::FRefCountedNetGUIDArray,0>_>
::Find(TMapBase<FNetworkGUID,UE::Net::Private::FRefCountedNetGUIDArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,UE::Net::Private::FRefCountedNetGUIDArray,0>_>
       *this,FNetworkGUID *param_1)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong *puVar3;
  FRefCountedNetGUIDArray *pFVar4;
  ForElementType<FSetElementId> FVar5;
  
  uVar1 = (param_1->field0_0x0).ObjectId;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar5 +
                    ((uVar1 >> 0x20) * 0x17 + uVar1 & (ulonglong)((this->Pairs).HashSize - 1)) * 4);
    if (iVar2 != -1) {
      do {
        puVar3 = (ulonglong *)((longlong)iVar2 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar3 == uVar1) {
          pFVar4 = (FRefCountedNetGUIDArray *)0x0;
          if (puVar3 != (ulonglong *)0x0) {
            pFVar4 = (FRefCountedNetGUIDArray *)(puVar3 + 1);
          }
          return pFVar4;
        }
        iVar2 = (int)puVar3[5];
      } while (iVar2 != -1);
    }
  }
  return (FRefCountedNetGUIDArray *)0x0;
}

// Find @ 1480a1790

TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>
* __thiscall
TMapBase<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>_>
::Find(TMapBase<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>_>
       *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>
  *pTVar6;
  
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
  iVar2 = TSet<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x20 + *(longlong *)&(this->Pairs).Elements;
    pTVar6 = (TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>
              *)0x0;
    if (lVar4 != 0) {
      pTVar6 = (TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>
                *)(lVar4 + 0x10);
    }
    return pTVar6;
  }
  return (TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>
          *)0x0;
}

// Find @ 1480a1820

FName * __thiscall
TMapBase<unsigned___int64,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FName,0>_>
::Find(TMapBase<unsigned___int64,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FName,0>_>
       *this,ulong64 param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  FName *pFVar4;
  ForElementType<FSetElementId> FVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(ulong64 *)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          pFVar4 = (FName *)0x0;
          if (lVar1 != 0) {
            pFVar4 = (FName *)(lVar1 + 8);
          }
          return pFVar4;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (FName *)0x0;
}

// FindChecked @ 1480a1ab0

FNetFieldExportGroup ** __thiscall
TMapBase<unsigned_int,FNetFieldExportGroup_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FNetFieldExportGroup_*,0>_>
::FindChecked(TMapBase<unsigned_int,FNetFieldExportGroup_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FNetFieldExportGroup_*,0>_>
              *this,uint param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FNetFieldExportGroup **ppFVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(uint *)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (FNetFieldExportGroup **)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (FNetFieldExportGroup **)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  ppFVar6 = (FNetFieldExportGroup **)(*pcVar3)();
  return ppFVar6;
}

// FindChecked @ 1480a1b50

FNetworkGUID * __thiscall
TMapBase<FName,FNetworkGUID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNetworkGUID,0>_>
::FindChecked(TMapBase<FName,FNetworkGUID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNetworkGUID,0>_>
              *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FNetworkGUID *pFVar7;
  ForElementType<FSetElementId> FVar8;
  
  uVar5 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar8 = (this->Pairs).Hash.SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar6 = *(int *)((longlong)FVar8 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar5) * 4);
    if (iVar6 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar6 * 0x18;
        if (*(FName *)(lVar2 + (longlong)iVar6 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (FNetworkGUID *)(lVar1 + 8);
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x10);
      } while (iVar6 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (FNetworkGUID *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pFVar7 = (FNetworkGUID *)(*pcVar3)();
  return pFVar7;
}

// FindChecked @ 1480a1c10

FNetGuidCacheObject * __thiscall
TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
::FindChecked(TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
              *this,FNetworkGUID *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FNetGuidCacheObject *pFVar5;
  ulonglong *puVar6;
  ForElementType<FSetElementId> FVar7;
  
  uVar1 = (param_1->field0_0x0).ObjectId;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar7 +
                    ((uVar1 >> 0x20) * 0x17 + uVar1 & (ulonglong)((this->Pairs).HashSize - 1)) * 4);
    if (iVar4 != -1) {
      do {
        puVar6 = (ulonglong *)((longlong)iVar4 * 0x40 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar6 == uVar1) {
          if (puVar6 != (ulonglong *)0x0) {
            return (FNetGuidCacheObject *)(puVar6 + 1);
          }
          break;
        }
        iVar4 = (int)puVar6[7];
      } while (iVar4 != -1);
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar3) {
    return (FNetGuidCacheObject *)&DAT_00000008;
  }
  pcVar2 = (code *)swi(3);
  pFVar5 = (FNetGuidCacheObject *)(*pcVar2)();
  return pFVar5;
}

// Remove @ 1480c8dc0

int __thiscall
TMapBase<int,UE::Net::FNetToken,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Net::FNetToken,1>_>
::Remove(TMapBase<int,UE::Net::FNetToken,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Net::FNetToken,1>_>
         *this,int param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  iVar4 = 0;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar3 = (longlong)(this->Pairs).HashSize - 1U & (longlong)param_1;
    piVar5 = (int *)((longlong)FVar6 + uVar3 * 4);
    iVar1 = *(int *)((longlong)FVar6 + uVar3 * 4);
    while (iVar1 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      if (*(int *)(lVar2 + (longlong)iVar1 * 0x10) == param_1) {
        TSet<TTuple<int,UE::Net::FNetToken>,TDefaultMapHashableKeyFuncs<int,UE::Net::FNetToken,1>,FDefaultSetAllocator>
        ::RemoveByIndex(&this->Pairs,iVar1);
        iVar4 = iVar4 + 1;
      }
      else {
        piVar5 = (int *)(lVar2 + 8 + (longlong)iVar1 * 0x10);
      }
      iVar1 = *piVar5;
    }
  }
  return iVar4;
}

// Remove @ 1480c8e60

int __thiscall
TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>_>
::Remove(TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>_>
         *this,TWeakObjectPtr<UObject_const_,FWeakObjectPtr> param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  ForElementType<FSetElementId> FVar4;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    for (iVar1 = *(int *)((longlong)FVar4 +
                         ((longlong)
                          (param_1.WeakPtr.ObjectSerialNumber ^ param_1.WeakPtr.ObjectIndex) &
                         (longlong)(this->Pairs).HashSize - 1U) * 4); iVar1 != -1;
        iVar1 = *(int *)(lVar2 + (longlong)iVar1 * 0x18 + 0x10)) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      local_res10 = *(FWeakObjectPtr *)(lVar2 + (longlong)iVar1 * 0x18);
      local_res8 = param_1.WeakPtr;
      bVar3 = TWeakObjectPtr<UObject_const_,FWeakObjectPtr>::UEOpEquals<UObject_const_,bool>
                        ((TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_res10,
                         (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_res8);
      if (bVar3) {
        TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
        ::RemoveByIndex(&this->Pairs,iVar1);
        return 1;
      }
    }
  }
  return 0;
}

// Remove @ 1480c8f30

int __thiscall
TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
::Remove(TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
         *this,FNetworkGUID *param_1)

{
  ulong64 uVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  int iVar5;
  
  iVar5 = 0;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    uVar1 = (param_1->field0_0x0).ObjectId;
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    ((longlong)((int)(uVar1 >> 0x20) * 0x17 + (int)uVar1) &
                    (longlong)(this->Pairs).HashSize - 1U) * 4);
    iVar5 = 0;
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      while (*(ulong64 *)((longlong)iVar3 * 0x40 + lVar2) != uVar1) {
        iVar3 = *(int *)((longlong)iVar3 * 0x40 + 0x38 + lVar2);
        if (iVar3 == -1) {
          return 0;
        }
      }
      TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
      ::RemoveByIndex(&this->Pairs,iVar3);
      iVar5 = 1;
    }
  }
  return iVar5;
}

// Emplace<UParticleModule_*_const_&,unsigned_int> @ 1480e8010

uint * __thiscall
TMapBase<UParticleModule_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>_>
::Emplace<UParticleModule_*_const_&,unsigned_int>
          (TMapBase<UParticleModule_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>_>
           *this,UParticleModule **param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar6 + 4 + (longlong)iVar4 * 0x18);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar6 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar4);
  if (local_28.Pointer != (TSparseSetElement<TTuple<UParticleModule_*,unsigned_int>_> *)0x0) {
    *(UParticleModule **)local_28.Pointer = *param_1;
    *(uint *)((longlong)local_28.Pointer + 8) = *param_2;
    *(undefined4 *)((longlong)local_28.Pointer + 0x10) = 0xffffffff;
  }
  local_res8[0] = local_28.Index;
  uVar5 = ((uint)(*(ulonglong *)local_28.Pointer >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)local_28.Pointer >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  bVar3 = TSet<TTuple<UParticleModule_*,unsigned_int>,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar5,local_28.Pointer,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<UParticleModule_*,unsigned_int>,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar5,local_28.Pointer,local_res8[0]);
  }
  return (uint *)(*(longlong *)&(this->Pairs).Elements + lVar6 * 0x18 + 8);
}

// Emplace<UParticleModule_*,unsigned_int> @ 1480e8150

uint * __thiscall
TMapBase<UParticleModule_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>_>
::Emplace<UParticleModule_*,unsigned_int>
          (TMapBase<UParticleModule_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>_>
           *this,UParticleModule **param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar6 + 4 + (longlong)iVar4 * 0x18);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar6 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar4);
  if (local_28.Pointer != (TSparseSetElement<TTuple<UParticleModule_*,unsigned_int>_> *)0x0) {
    *(UParticleModule **)local_28.Pointer = *param_1;
    *(uint *)((longlong)local_28.Pointer + 8) = *param_2;
    *(undefined4 *)((longlong)local_28.Pointer + 0x10) = 0xffffffff;
  }
  local_res8[0] = local_28.Index;
  uVar5 = ((uint)(*(ulonglong *)local_28.Pointer >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)local_28.Pointer >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  bVar3 = TSet<TTuple<UParticleModule_*,unsigned_int>,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar5,local_28.Pointer,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<UParticleModule_*,unsigned_int>,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar5,local_28.Pointer,local_res8[0]);
  }
  return (uint *)(*(longlong *)&(this->Pairs).Elements + lVar6 * 0x18 + 8);
}

// Find @ 14810a8d0

uint * __thiscall
TMapBase<UParticleModule_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>_>
::Find(TMapBase<UParticleModule_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>_>
       *this,UParticleModule *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  uint *puVar5;
  uint uVar6;
  
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(UParticleModule **)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          puVar5 = (uint *)0x0;
          if (lVar1 != 0) {
            puVar5 = (uint *)(lVar1 + 8);
          }
          return puVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (uint *)0x0;
}

// FindOrAddImpl<UWorld_*_const_&> @ 148153790

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPSCWorldInfo * __thiscall
TMapBase<UWorld_*,`<lambda_27>::operator()'::__l2::FPSCWorldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorld_*,`<lambda_27>::operator()'::__l2::FPSCWorldInfo,0>_>
::FindOrAddImpl<UWorld_*_const_&>(void *this,uint param_1,UWorld **param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int local_res8 [6];
  UWorld **local_res20;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar3 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar3 = (longlong)this + 0x38;
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x88 + *(longlong *)this);
        if ((UWorld *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (FPSCWorldInfo *)(plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[0x10];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<UWorld_*,`<lambda_27>::operator()'::__l2::FPSCWorldInfo>,TDefaultMapHashableKeyFuncs<UWorld_*,`<lambda_27>::operator()'::__l2::FPSCWorldInfo,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UWorld_*_const_&>_>
            (this,(uint)local_res8,(TKeyInitializer<UWorld_*_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FPSCWorldInfo *)(*(longlong *)this + (longlong)local_res8[0] * 0x88 + 8);
}

// EmplaceByHash<TObjectPtr<UParticleSystem>_> @ 1481c0700

/* WARNING: Enum "Type": Some values do not have unique names */

FPSCPool * __thiscall
TMapBase<TObjectPtr<UParticleSystem>,FPSCPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UParticleSystem>,FPSCPool,0>_>
::EmplaceByHash<TObjectPtr<UParticleSystem>_>
          (TMapBase<TObjectPtr<UParticleSystem>,FPSCPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UParticleSystem>,FPSCPool,0>_>
           *this,uint param_1,TObjectPtr<UParticleSystem> *param_2)

{
  int iVar1;
  int iVar2;
  UParticleSystem *pUVar3;
  bool bVar4;
  int iVar5;
  TSparseSetElement<TTuple<TObjectPtr<UParticleSystem>,FPSCPool>_> *pTVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x48,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar7 + 4 + (longlong)iVar5 * 0x48);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar7 + (longlong)iVar2 * 0x48) = 0xffffffff;
    }
  }
  TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer == (TSparseSetElement<TTuple<TObjectPtr<UParticleSystem>,FPSCPool>_> *)0x0) {
    pTVar6 = (TSparseSetElement<TTuple<TObjectPtr<UParticleSystem>,FPSCPool>_> *)0x0;
  }
  else {
    pUVar3 = (param_2->field0_0x0).DebugPtr;
    *(UParticleSystem **)local_18.Pointer = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UParticleSystem *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    *(undefined8 *)((longlong)local_18.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x18) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x20) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x28) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x30) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x38) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x40) = 0xffffffff;
    pTVar6 = local_18.Pointer;
  }
  local_res8[0] = local_18.Index;
  bVar4 = TSet<TTuple<TObjectPtr<UParticleSystem>,FPSCPool>,TDefaultMapHashableKeyFuncs<TObjectPtr<UParticleSystem>,FPSCPool,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,pTVar6,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<TObjectPtr<UParticleSystem>,FPSCPool>,TDefaultMapHashableKeyFuncs<TObjectPtr<UParticleSystem>,FPSCPool,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,pTVar6,local_res8[0]);
  }
  return (FPSCPool *)(*(longlong *)&(this->Pairs).Elements + lVar7 * 0x48 + 8);
}

// FindOrAddImpl<TObjectPtr<UParticleSystem>_> @ 1481c0a00

/* WARNING: Enum "Type": Some values do not have unique names */

FPSCPool * __thiscall
TMapBase<TObjectPtr<UParticleSystem>,FPSCPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UParticleSystem>,FPSCPool,0>_>
::FindOrAddImpl<TObjectPtr<UParticleSystem>_>
          (TMapBase<TObjectPtr<UParticleSystem>,FPSCPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UParticleSystem>,FPSCPool,0>_>
           *this,uint param_1,TObjectPtr<UParticleSystem> *param_2)

{
  int iVar1;
  UParticleSystem *pUVar2;
  UParticleSystem *pUVar3;
  FPSCPool *pFVar4;
  longlong lVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    while (iVar1 != -1) {
      pUVar2 = (param_2->field0_0x0).DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UParticleSystem *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      lVar5 = (longlong)iVar1 * 0x48;
      pUVar3 = *(UParticleSystem **)(lVar5 + *(longlong *)&(this->Pairs).Elements);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UParticleSystem *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      if (pUVar3 == pUVar2) {
        if ((iVar1 != -1) && (lVar5 = *(longlong *)&(this->Pairs).Elements + lVar5, lVar5 != 0)) {
          return (FPSCPool *)(lVar5 + 8);
        }
        break;
      }
      iVar1 = *(int *)(lVar5 + 0x40 + *(longlong *)&(this->Pairs).Elements);
    }
  }
  pFVar4 = EmplaceByHash<TObjectPtr<UParticleSystem>_>(this,param_1,param_2);
  return pFVar4;
}

// Find @ 1481f0330

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FParticleSystemWorldManager ** __thiscall
TMapBase<UWorld_*,FParticleSystemWorldManager_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorld_*,FParticleSystemWorldManager_*,0>_>
::Find(TMapBase<UWorld_*,FParticleSystemWorldManager_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorld_*,FParticleSystemWorldManager_*,0>_>
       *this,UWorld *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  FParticleSystemWorldManager **ppFVar5;
  uint uVar6;
  
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(UWorld **)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          ppFVar5 = (FParticleSystemWorldManager **)0x0;
          if (lVar1 != 0) {
            ppFVar5 = (FParticleSystemWorldManager **)(lVar1 + 8);
          }
          return ppFVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (FParticleSystemWorldManager **)0x0;
}

// Find @ 1481f03e0

FWeldInfo * __thiscall
TMapBase<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
::Find(TMapBase<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
       *this,FPhysicsShapeReference_Chaos *param_1)

{
  FPerShapeData *pFVar1;
  int iVar2;
  ulonglong *puVar3;
  uint uVar4;
  ForElementType<FSetElementId> FVar5;
  FWeldInfo *pFVar6;
  
  pFVar1 = param_1->Shape;
  uVar4 = ((uint)((ulonglong)pFVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar1 >> 4)) *
          -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar5 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
    if (iVar2 != -1) {
      do {
        puVar3 = (ulonglong *)((longlong)iVar2 * 0x90 + *(longlong *)&(this->Pairs).Elements);
        if ((FPerShapeData *)*puVar3 == pFVar1) {
          pFVar6 = (FWeldInfo *)0x0;
          if (puVar3 != (ulonglong *)0x0) {
            pFVar6 = (FWeldInfo *)(puVar3 + 2);
          }
          return pFVar6;
        }
        iVar2 = (int)puVar3[0x10];
      } while (iVar2 != -1);
    }
  }
  return (FWeldInfo *)0x0;
}

// FindOrAddImpl<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*_const_&> @ 14823cd60

TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,0>,FDefaultSetAllocator>
* __thiscall
TMapBase<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,0>,FDefaultSetAllocator>,0>_>
::FindOrAddImpl<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*_const_&>
          (TMapBase<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,0>,FDefaultSetAllocator>,0>_>
           *this,uint param_1,TGeometryParticleHandleImp<double,3,1> **param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  TGeometryParticleHandleImp<double,3,1> **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if ((TGeometryParticleHandleImp<double,3,1> *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,0>,FDefaultSetAllocator>
                    *)(plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[0xb];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*_const_&> *)
             (ulonglong)param_1,(bool *)&local_res20);
  return (TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,0>,FDefaultSetAllocator>
          *)(*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x60);
}

// FindOrAddImpl<TObjectKey<UPrimitiveComponent>_const_&> @ 14823ce10

FClusteredComponentData * __thiscall
TMapBase<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,0>_>
::FindOrAddImpl<TObjectKey<UPrimitiveComponent>_const_&>
          (TMapBase<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,0>_>
           *this,uint param_1,TObjectKey<UPrimitiveComponent> *param_2)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [2];
  TObjectKey<UPrimitiveComponent> *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        piVar1 = (int *)((longlong)iVar2 * 0x38 + *(longlong *)&(this->Pairs).Elements);
        if ((*piVar1 == (param_2->ObjectKey).ObjectIndex) &&
           (piVar1[1] == (param_2->ObjectKey).ObjectSerialNumber)) {
          if ((iVar2 != -1) && (piVar1 != (int *)0x0)) {
            return (FClusteredComponentData *)(piVar1 + 2);
          }
          break;
        }
        iVar2 = piVar1[0xc];
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<TObjectKey<UPrimitiveComponent>,FClusteredComponentData>,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TObjectKey<UPrimitiveComponent>_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<TObjectKey<UPrimitiveComponent>_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FClusteredComponentData *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x38 + 8);
}

// Find @ 14827f1a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TObjectPtr<UPrimitiveComponent> * __thiscall
TMapBase<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>,0>_>
::Find(TMapBase<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>,0>_>
       *this,IPhysicsProxyBase *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  TObjectPtr<UPrimitiveComponent> *pTVar5;
  uint uVar6;
  
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(IPhysicsProxyBase **)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          pTVar5 = (TObjectPtr<UPrimitiveComponent> *)0x0;
          if (lVar1 != 0) {
            pTVar5 = (TObjectPtr<UPrimitiveComponent> *)(lVar1 + 8);
          }
          return pTVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (TObjectPtr<UPrimitiveComponent> *)0x0;
}

// Find @ 14827f250

FClusteredActorData * __thiscall
TMapBase<TObjectKey<AActor>,FClusteredActorData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FClusteredActorData,0>_>
::Find(TMapBase<TObjectKey<AActor>,FClusteredActorData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FClusteredActorData,0>_>
       *this,TObjectKey<AActor> *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  ForElementType<FSetElementId> FVar5;
  FClusteredActorData *pFVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  uVar1 = (param_1->ObjectKey).ObjectSerialNumber;
  iVar2 = (param_1->ObjectKey).ObjectIndex;
  uVar8 = iVar2 - uVar1 ^ uVar1 >> 0xd;
  uVar4 = (-0x61c88647 - uVar8) - uVar1 ^ uVar8 << 8;
  uVar7 = (uVar1 - uVar8) - uVar4 ^ uVar4 >> 0xd;
  uVar8 = (uVar8 - uVar7) - uVar4 ^ uVar7 >> 0xc;
  uVar4 = (uVar4 - uVar8) - uVar7 ^ uVar8 << 0x10;
  uVar7 = (uVar7 - uVar4) - uVar8 ^ uVar4 >> 5;
  uVar8 = (uVar8 - uVar7) - uVar4 ^ uVar7 >> 3;
  uVar4 = (uVar4 - uVar8) - uVar7 ^ uVar8 << 10;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar9 = *(int *)((longlong)FVar5 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & ((uVar7 - uVar4) - uVar8 ^ uVar4 >> 0xf)) * 4);
    if (iVar9 != -1) {
      do {
        piVar3 = (int *)((longlong)iVar9 * 0x68 + *(longlong *)&(this->Pairs).Elements);
        if ((*piVar3 == iVar2) && (piVar3[1] == uVar1)) {
          if (iVar9 == -1) {
            return (FClusteredActorData *)0x0;
          }
          pFVar6 = (FClusteredActorData *)0x0;
          if (piVar3 != (int *)0x0) {
            pFVar6 = (FClusteredActorData *)(piVar3 + 2);
          }
          return pFVar6;
        }
        iVar9 = piVar3[0x18];
      } while (iVar9 != -1);
    }
  }
  return (FClusteredActorData *)0x0;
}

// Find @ 14827f360

FClusterUnionPendingAddData * __thiscall
TMapBase<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,0>_>
::Find(TMapBase<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,0>_>
       *this,TObjectKey<UPrimitiveComponent> *param_1)

{
  int iVar1;
  FClusterUnionPendingAddData *pFVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (param_1->ObjectKey).ObjectSerialNumber;
  uVar6 = (param_1->ObjectKey).ObjectIndex - uVar4 ^ uVar4 >> 0xd;
  uVar5 = (-0x61c88647 - uVar6) - uVar4 ^ uVar6 << 8;
  uVar4 = (uVar4 - uVar5) - uVar6 ^ uVar5 >> 0xd;
  uVar6 = (uVar6 - uVar4) - uVar5 ^ uVar4 >> 0xc;
  uVar5 = (uVar5 - uVar6) - uVar4 ^ uVar6 << 0x10;
  uVar4 = (uVar4 - uVar5) - uVar6 ^ uVar5 >> 5;
  uVar6 = (uVar6 - uVar4) - uVar5 ^ uVar4 >> 3;
  uVar5 = (uVar5 - uVar6) - uVar4 ^ uVar6 << 10;
  iVar1 = TSet<TTuple<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData>,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectKey<UPrimitiveComponent>_>
                    (&this->Pairs,(uVar4 - uVar5) - uVar6 ^ uVar5 >> 0xf,param_1);
  if (iVar1 != -1) {
    lVar3 = (longlong)iVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements;
    pFVar2 = (FClusterUnionPendingAddData *)0x0;
    if (lVar3 != 0) {
      pFVar2 = (FClusterUnionPendingAddData *)(lVar3 + 8);
    }
    return pFVar2;
  }
  return (FClusterUnionPendingAddData *)0x0;
}

// Find @ 14827f430

FClusteredComponentData * __thiscall
TMapBase<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,0>_>
::Find(TMapBase<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,0>_>
       *this,TObjectKey<UPrimitiveComponent> *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  ForElementType<FSetElementId> FVar5;
  FClusteredComponentData *pFVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  uVar1 = (param_1->ObjectKey).ObjectSerialNumber;
  iVar2 = (param_1->ObjectKey).ObjectIndex;
  uVar8 = iVar2 - uVar1 ^ uVar1 >> 0xd;
  uVar4 = (-0x61c88647 - uVar8) - uVar1 ^ uVar8 << 8;
  uVar7 = (uVar1 - uVar8) - uVar4 ^ uVar4 >> 0xd;
  uVar8 = (uVar8 - uVar7) - uVar4 ^ uVar7 >> 0xc;
  uVar4 = (uVar4 - uVar8) - uVar7 ^ uVar8 << 0x10;
  uVar7 = (uVar7 - uVar4) - uVar8 ^ uVar4 >> 5;
  uVar8 = (uVar8 - uVar7) - uVar4 ^ uVar7 >> 3;
  uVar4 = (uVar4 - uVar8) - uVar7 ^ uVar8 << 10;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar9 = *(int *)((longlong)FVar5 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & ((uVar7 - uVar4) - uVar8 ^ uVar4 >> 0xf)) * 4);
    if (iVar9 != -1) {
      do {
        piVar3 = (int *)((longlong)iVar9 * 0x38 + *(longlong *)&(this->Pairs).Elements);
        if ((*piVar3 == iVar2) && (piVar3[1] == uVar1)) {
          if (iVar9 == -1) {
            return (FClusteredComponentData *)0x0;
          }
          pFVar6 = (FClusteredComponentData *)0x0;
          if (piVar3 != (int *)0x0) {
            pFVar6 = (FClusteredComponentData *)(piVar3 + 2);
          }
          return pFVar6;
        }
        iVar9 = piVar3[0xc];
      } while (iVar9 != -1);
    }
  }
  return (FClusteredComponentData *)0x0;
}

// Remove @ 1482a1060

int __thiscall
TMapBase<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,0>_>
::Remove(TMapBase<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,0>_>
         *this,TObjectKey<UPrimitiveComponent> *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    uVar3 = (param_1->ObjectKey).ObjectSerialNumber;
    uVar5 = (param_1->ObjectKey).ObjectIndex - uVar3 ^ uVar3 >> 0xd;
    uVar2 = (-0x61c88647 - uVar5) - uVar3 ^ uVar5 << 8;
    uVar4 = (uVar3 - uVar2) - uVar5 ^ uVar2 >> 0xd;
    uVar5 = (uVar5 - uVar4) - uVar2 ^ uVar4 >> 0xc;
    uVar3 = (uVar2 - uVar5) - uVar4 ^ uVar5 << 0x10;
    uVar2 = (uVar4 - uVar3) - uVar5 ^ uVar3 >> 5;
    uVar4 = (uVar5 - uVar2) - uVar3 ^ uVar2 >> 3;
    uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 << 10;
    iVar1 = TSet<TTuple<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData>,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,0>,FDefaultSetAllocator>
            ::RemoveImpl<TObjectKey<UPrimitiveComponent>_>
                      (&this->Pairs,(uVar2 - uVar3) - uVar4 ^ uVar3 >> 0xf,param_1);
    return iVar1;
  }
  return 0;
}

// FindOrAddImpl<FBodyInstance_*_const_&> @ 1482d3540

FPhysTarget * __thiscall
TMapBase<FBodyInstance_*,FPhysTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBodyInstance_*,FPhysTarget,0>_>
::FindOrAddImpl<FBodyInstance_*_const_&>
          (TMapBase<FBodyInstance_*,FPhysTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBodyInstance_*,FPhysTarget,0>_>
           *this,uint param_1,FBodyInstance **param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FBodyInstance **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x140 + *(longlong *)&(this->Pairs).Elements);
        if ((FBodyInstance *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (FPhysTarget *)(plVar2 + 2);
          }
          break;
        }
        iVar1 = (int)plVar2[0x26];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FBodyInstance_*,FPhysTarget>,TDefaultMapHashableKeyFuncs<FBodyInstance_*,FPhysTarget,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FBodyInstance_*_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FBodyInstance_*_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (FPhysTarget *)
         (*(longlong *)&(this->Pairs).Elements + 0x10 + (longlong)local_res8[0] * 0x140);
}

// FindOrAddImpl<Chaos::FPhysicsObject_const_*_const_&> @ 1482d3600

FPhysicsReplicationCacheData * __thiscall
TMapBase<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData,0>_>
::FindOrAddImpl<Chaos::FPhysicsObject_const_*_const_&>
          (TMapBase<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData,0>_>
           *this,uint param_1,FPhysicsObject **param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FPhysicsObject **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0xb0 + *(longlong *)&(this->Pairs).Elements);
        if ((FPhysicsObject *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (FPhysicsReplicationCacheData *)(plVar2 + 2);
          }
          break;
        }
        iVar1 = (int)plVar2[0x14];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<Chaos::FPhysicsObject_const_*_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<Chaos::FPhysicsObject_const_*_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FPhysicsReplicationCacheData *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0xb0 + 0x10);
}

// FindOrAddImpl<Chaos::FPhysicsObject_const_*_const_&> @ 1482d36b0

TWeakPtr<FNetworkPhysicsSettingsData_const_,1> * __thiscall
TMapBase<Chaos::FPhysicsObject_const_*,TWeakPtr<FNetworkPhysicsSettingsData_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,TWeakPtr<FNetworkPhysicsSettingsData_const_,1>,0>_>
::FindOrAddImpl<Chaos::FPhysicsObject_const_*_const_&>
          (TMapBase<Chaos::FPhysicsObject_const_*,TWeakPtr<FNetworkPhysicsSettingsData_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,TWeakPtr<FNetworkPhysicsSettingsData_const_,1>,0>_>
           *this,uint param_1,FPhysicsObject **param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FPhysicsObject **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((FPhysicsObject *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (TWeakPtr<FNetworkPhysicsSettingsData_const_,1> *)(plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<Chaos::FPhysicsObject_const_*,TWeakPtr<FNetworkPhysicsSettingsData_const_,1>_>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,TWeakPtr<FNetworkPhysicsSettingsData_const_,1>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<Chaos::FPhysicsObject_const_*_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<Chaos::FPhysicsObject_const_*_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TWeakPtr<FNetworkPhysicsSettingsData_const_,1> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// Find @ 148302e60

FPhysTarget * __thiscall
TMapBase<FBodyInstance_*,FPhysTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBodyInstance_*,FPhysTarget,0>_>
::Find(TMapBase<FBodyInstance_*,FPhysTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBodyInstance_*,FPhysTarget,0>_>
       *this,FBodyInstance *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  FPhysTarget *pFVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x140 + *(longlong *)&(this->Pairs).Elements);
        if ((FBodyInstance *)*plVar2 == param_1) {
          pFVar4 = (FPhysTarget *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pFVar4 = (FPhysTarget *)(plVar2 + 2);
          }
          return pFVar4;
        }
        iVar1 = (int)plVar2[0x26];
      } while (iVar1 != -1);
    }
  }
  return (FPhysTarget *)0x0;
}

// Find @ 148302f10

FReplicatedPhysicsTargetAsync * __thiscall
TMapBase<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync,0>_>
::Find(TMapBase<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync,0>_>
       *this,FPhysicsObject *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  FReplicatedPhysicsTargetAsync *pFVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x140 + *(longlong *)&(this->Pairs).Elements);
        if ((FPhysicsObject *)*plVar2 == param_1) {
          pFVar4 = (FReplicatedPhysicsTargetAsync *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pFVar4 = (FReplicatedPhysicsTargetAsync *)(plVar2 + 2);
          }
          return pFVar4;
        }
        iVar1 = (int)plVar2[0x26];
      } while (iVar1 != -1);
    }
  }
  return (FReplicatedPhysicsTargetAsync *)0x0;
}

// Find @ 148302fc0

bool * __thiscall
TMapBase<FRigidBodyIndexPair,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigidBodyIndexPair,bool,0>_>
::Find(TMapBase<FRigidBodyIndexPair,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigidBodyIndexPair,bool,0>_>
       *this,FRigidBodyIndexPair *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool *pbVar4;
  ForElementType<FSetElementId> FVar5;
  int iVar6;
  
  uVar2 = *(ulonglong *)param_1->Indices;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar6 = *(int *)((longlong)FVar5 +
                    ((uVar2 >> 0x20) * 0x17 + uVar2 & (ulonglong)((this->Pairs).HashSize - 1)) * 4);
    if (iVar6 != -1) {
      lVar3 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar3 + (longlong)iVar6 * 0x14;
        if ((*(int *)(lVar3 + (longlong)iVar6 * 0x14) == (int)uVar2) &&
           (*(int *)(lVar1 + 4) == param_1->Indices[1])) {
          if (iVar6 == -1) {
            return (bool *)0x0;
          }
          pbVar4 = (bool *)0x0;
          if (lVar1 != 0) {
            pbVar4 = (bool *)(lVar1 + 8);
          }
          return pbVar4;
        }
        iVar6 = *(int *)(lVar1 + 0xc);
      } while (iVar6 != -1);
    }
  }
  return (bool *)0x0;
}

// Remove @ 14831cb80

int __thiscall
TMapBase<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData,0>_>
::Remove(TMapBase<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData,0>_>
         *this,FPhysicsObject *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  int iVar5;
  
  iVar5 = 0;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    uVar2 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (((ulonglong)(uVar2 >> 0x10) ^ (longlong)(int)uVar2) &
                    (longlong)(this->Pairs).HashSize - 1U) * 4);
    iVar5 = 0;
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      while (*(FPhysicsObject **)((longlong)iVar3 * 0xb0 + lVar1) != param_1) {
        iVar3 = *(int *)((longlong)iVar3 * 0xb0 + 0xa0 + lVar1);
        if (iVar3 == -1) {
          return 0;
        }
      }
      TSet<TTuple<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData,0>,FDefaultSetAllocator>
      ::RemoveByIndex(&this->Pairs,iVar3);
      iVar5 = 1;
    }
  }
  return iVar5;
}

// GetKeys<DefaultKeyFuncs<FVolumetricLightMapGridCell_*,0>,FDefaultSetAllocator> @ 1483427d0

int __thiscall
TMapBase<FVolumetricLightMapGridCell_*,FVolumetricLightmapGridManager::FLoadedCellData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVolumetricLightMapGridCell_*,FVolumetricLightmapGridManager::FLoadedCellData,0>_>
::GetKeys<DefaultKeyFuncs<FVolumetricLightMapGridCell_*,0>,FDefaultSetAllocator>
          (TMapBase<FVolumetricLightMapGridCell_*,FVolumetricLightmapGridManager::FLoadedCellData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVolumetricLightMapGridCell_*,FVolumetricLightmapGridManager::FLoadedCellData,0>_>
           *this,TSet<FVolumetricLightMapGridCell_*,DefaultKeyFuncs<FVolumetricLightMapGridCell_*,0>,FDefaultSetAllocator>
                 *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  FVolumetricLightMapGridCell *local_res8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  TMapBase<FVolumetricLightMapGridCell_*,FVolumetricLightmapGridManager::FLoadedCellData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVolumetricLightMapGridCell_*,FVolumetricLightmapGridManager::FLoadedCellData,0>_>
  *local_50;
  int iStack_48;
  uint uStack_44;
  undefined1 *local_40;
  undefined4 uStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  
  iVar5 = 0;
  iVar2 = *(int *)&(param_1->Elements).field_0x8;
  iVar7 = *(int *)&(param_1->Elements).field_0x34;
  if (iVar2 != iVar7) {
    TSet<FVolumetricLightMapGridCell_*,DefaultKeyFuncs<FVolumetricLightMapGridCell_*,0>,FDefaultSetAllocator>
    ::UnhashElements(param_1);
    *(undefined4 *)&(param_1->Elements).field_0x8 = 0;
    iVar2 = 0;
    if (*(int *)&(param_1->Elements).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)param_1,0,(int *)&(param_1->Elements).field_0xc);
      iVar2 = *(int *)&(param_1->Elements).field_0x8;
    }
    *(undefined4 *)&(param_1->Elements).field_0x30 = 0xffffffff;
    iVar7 = 0;
    *(undefined4 *)&(param_1->Elements).field_0x34 = 0;
    *(undefined4 *)&(param_1->Elements).field_0x28 = 0;
  }
  uVar6 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  uVar3 = 1;
  if ((uint)(iVar2 - iVar7) < uVar6) {
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar6);
    }
    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)param_1,uVar6);
    if (uVar6 < 4) {
      iVar2 = 1;
    }
    else {
      uVar1 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar2 = 1 << ((byte)lVar4 & 0x1f);
    }
    if ((param_1->HashSize == 0) || (param_1->HashSize < iVar2)) {
      param_1->HashSize = iVar2;
      TSet<FVolumetricLightMapGridCell_*,DefaultKeyFuncs<FVolumetricLightMapGridCell_*,0>,FDefaultSetAllocator>
      ::Rehash(param_1);
    }
  }
  iVar2 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  local_30 = 0;
  iStack_34 = 0;
  if (iVar2 != 0) {
    puVar8 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar8 == (uint *)0x0) {
      puVar8 = (uint *)TStack_70.Array;
    }
    uVar6 = *puVar8;
    while (uVar6 == 0) {
      lVar4 = (longlong)iVar5;
      local_30 = local_30 + 0x20;
      iVar5 = iVar5 + 1;
      iStack_34 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar5) goto LAB_148342908;
      uVar6 = puVar8[lVar4 + 1];
    }
    uVar3 = -uVar6 & uVar6;
    uVar1 = (ulonglong)uVar3 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iStack_34 = local_30 + -1 + (int)lVar4;
    if (iVar2 < iStack_34) {
      iStack_34 = iVar2;
    }
  }
LAB_148342908:
  uStack_38 = 0xffffffff;
  iStack_2c = TStack_70.CurrentBitIndex;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  TStack_70._28_4_ = TStack_70.CurrentBitIndex;
  TStack_70.BaseBitIndex = local_30;
  local_50 = this;
  iStack_48 = iVar5;
  uStack_44 = uVar3;
  local_40 = (undefined1 *)TStack_70.Array;
  TStack_70._padding_._0_4_ = iVar5;
  TStack_70._padding_._4_4_ = uVar3;
  TStack_70.CurrentBitIndex = iStack_34;
  if (iStack_34 < iVar2) {
    do {
      TSet<FVolumetricLightMapGridCell_*,DefaultKeyFuncs<FVolumetricLightMapGridCell_*,0>,FDefaultSetAllocator>
      ::Emplace<FVolumetricLightMapGridCell_*_const_&>
                (param_1,&local_res8,
                 (bool *)(*(longlong *)&(this->Pairs).Elements +
                         (longlong)TStack_70.CurrentBitIndex * 0x28));
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    } while (TStack_70.CurrentBitIndex < (TStack_70.Array)->NumBits);
  }
  return *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
}

// Find @ 14837be80

EVoiceBlockReasons * __thiscall
TMapBase<TSharedRef<FUniqueNetId_const_,1>,enum_EVoiceBlockReasons,FDefaultSetAllocator,TUniqueNetIdMapKeyFuncs<enum_EVoiceBlockReasons>_>
::Find(void *this,TSharedRef<FUniqueNetId_const_,1> *param_1)

{
  uint uVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  TSharedRef<FUniqueNetId_const_,1> local_18;
  
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  local_18.Object = param_1->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.SharedReferenceCount.ReferenceController = pTVar3;
  uVar1 = (**(code **)(*(longlong *)local_18.Object + 0x40))();
  iVar2 = TSet<TTuple<TSharedRef<FUniqueNetId_const_,1>,enum_EVoiceBlockReasons>,TUniqueNetIdMapKeyFuncs<enum_EVoiceBlockReasons>,FDefaultSetAllocator>
          ::FindIndexByHash<TSharedRef<FUniqueNetId_const_,1>_>(this,uVar1,&local_18);
  if (iVar2 == -1) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  }
  else {
    lVar4 = (longlong)iVar2 * 0x20 + *(longlong *)this;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
    if (lVar4 != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return (EVoiceBlockReasons *)(lVar4 + 0x10);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return (EVoiceBlockReasons *)0x0;
}

// EmplaceByHash<UStreamableRenderAsset_*_const_&> @ 1483d6150

TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>
* __thiscall
TMapBase<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,0>_>
::EmplaceByHash<UStreamableRenderAsset_*_const_&>
          (TMapBase<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,0>_>
           *this,uint param_1,UStreamableRenderAsset **param_2)

{
  bool bVar1;
  TKeyInitializer<UStreamableRenderAsset_*_const_&> local_res8;
  FSparseArrayAllocationInfo local_18;
  
  local_res8.Key = param_2;
  TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AddUninitialized((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)this,&local_18);
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>_>_>
       *)0x0) {
    TKeyInitializer<UStreamableRenderAsset_*_const_&>::
    operator<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>_>_TTuple<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>_>
              (&local_res8,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x58) = 0xffffffff;
  }
  local_res8.Key._0_4_ = local_18.Index;
  bVar1 = TSet<TTuple<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,(int *)&local_res8,(bool *)0x0)
  ;
  if (!bVar1) {
    TSet<TTuple<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,(int)local_res8.Key);
  }
  return (TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>
          *)(*(longlong *)&(this->Pairs).Elements + 8 + (longlong)(int)local_res8.Key * 0x60);
}

// FindOrAddImpl<TObjectKey<ULevelStreaming_const_>_> @ 1483da240

TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>
* __thiscall
TMapBase<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,0>_>
::FindOrAddImpl<TObjectKey<ULevelStreaming_const_>_>
          (TMapBase<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,0>_>
           *this,uint param_1,TObjectKey<ULevelStreaming_const_> *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [2];
  TObjectKey<ULevelStreaming_const_> *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if ((*(int *)(lVar2 + (longlong)iVar3 * 0x18) == (param_2->ObjectKey).ObjectIndex) &&
           (*(int *)(lVar1 + 4) == (param_2->ObjectKey).ObjectSerialNumber)) {
          if ((iVar3 != -1) && (lVar1 != 0)) {
            return (TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>
                    *)(lVar1 + 8);
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TObjectKey<ULevelStreaming_const_>_&&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<TObjectKey<ULevelStreaming_const_>_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>
          *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18 + 8);
}

// Find @ 148401450

TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>
* __thiscall
TMapBase<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,0>_>
::Find(TMapBase<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,0>_>
       *this,UStreamableRenderAsset *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>
  *pTVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if ((UStreamableRenderAsset *)*plVar2 == param_1) {
          pTVar4 = (TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>
                    *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>
                      *)(plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[0xb];
      } while (iVar1 != -1);
    }
  }
  return (TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>
          *)0x0;
}

// Find @ 148401500

FSimulatedTransform * __thiscall
TMapBase<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform,0>_>
::Find(TMapBase<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform,0>_>
       *this,UObjectBase *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  FSimulatedTransform *pFVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x90 + *(longlong *)&(this->Pairs).Elements);
        if ((UObjectBase *)*plVar2 == param_1) {
          pFVar4 = (FSimulatedTransform *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pFVar4 = (FSimulatedTransform *)(plVar2 + 2);
          }
          return pFVar4;
        }
        iVar1 = (int)plVar2[0x10];
      } while (iVar1 != -1);
    }
  }
  return (FSimulatedTransform *)0x0;
}

// Find @ 1484015b0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FPrecacheData * __thiscall
TMapBase<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData,0>_>
::Find(TMapBase<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData,0>_>
       *this,FMaterialPSOPrecacheParams *param_1)

{
  uint uVar1;
  int iVar2;
  FPrecacheData *pFVar3;
  longlong lVar4;
  
  uVar1 = ::GetTypeHash(param_1);
  iVar2 = TSet<TTuple<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData>,TDefaultMapHashableKeyFuncs<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FMaterialPSOPrecacheParams>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0xa8 + *(longlong *)&(this->Pairs).Elements;
    pFVar3 = (FPrecacheData *)0x0;
    if (lVar4 != 0) {
      pFVar3 = (FPrecacheData *)(lVar4 + 0x28);
    }
    return pFVar3;
  }
  return (FPrecacheData *)0x0;
}

// Find @ 148401610

FModeRecord * __thiscall
TMapBase<FName,FRayTracingVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRayTracingVisualizationData::FModeRecord,1>_>
::Find(TMapBase<FName,FRayTracingVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRayTracingVisualizationData::FModeRecord,1>_>
       *this,FName param_1)

{
  uint uVar1;
  FModeRecord *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0x58 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pFVar2 = (FModeRecord *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pFVar2 = (FModeRecord *)(pFVar4 + 1);
          }
          return pFVar2;
        }
        uVar1 = pFVar4[10].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FModeRecord *)0x0;
}

// Find @ 1484016b0

TUniquePtr<ICustomRenderPassUserData,TDefaultDelete<ICustomRenderPassUserData>_> * __thiscall
TMapBase<FName,TUniquePtr<ICustomRenderPassUserData,TDefaultDelete<ICustomRenderPassUserData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<ICustomRenderPassUserData,TDefaultDelete<ICustomRenderPassUserData>_>,0>_>
::Find(TMapBase<FName,TUniquePtr<ICustomRenderPassUserData,TDefaultDelete<ICustomRenderPassUserData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<ICustomRenderPassUserData,TDefaultDelete<ICustomRenderPassUserData>_>,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  TUniquePtr<ICustomRenderPassUserData,TDefaultDelete<ICustomRenderPassUserData>_> *pTVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar4 * 0x18;
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x18) == param_1) {
          pTVar5 = (TUniquePtr<ICustomRenderPassUserData,TDefaultDelete<ICustomRenderPassUserData>_>
                    *)0x0;
          if (lVar1 != 0) {
            pTVar5 = (TUniquePtr<ICustomRenderPassUserData,TDefaultDelete<ICustomRenderPassUserData>_>
                      *)(lVar1 + 8);
          }
          return pTVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return (TUniquePtr<ICustomRenderPassUserData,TDefaultDelete<ICustomRenderPassUserData>_> *)0x0;
}

// Remove @ 14841f870

int __thiscall
TMapBase<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform,0>_>
::Remove(TMapBase<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform,0>_>
         *this,UObjectBase *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  int iVar5;
  
  iVar5 = 0;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    uVar2 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (((ulonglong)(uVar2 >> 0x10) ^ (longlong)(int)uVar2) &
                    (longlong)(this->Pairs).HashSize - 1U) * 4);
    iVar5 = 0;
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      while (*(UObjectBase **)(lVar1 + (longlong)iVar3 * 0x90) != param_1) {
        iVar3 = *(int *)(lVar1 + 0x80 + (longlong)iVar3 * 0x90);
        if (iVar3 == -1) {
          return 0;
        }
      }
      TSet<TTuple<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform,0>,FDefaultSetAllocator>
      ::RemoveByIndex(&this->Pairs,iVar3);
      iVar5 = 1;
    }
  }
  return iVar5;
}

// GenerateKeyArray<TSizedDefaultAllocator<32>_> @ 1484395a0

void __thiscall
TMapBase<FNetworkGUID,enum_EChannelCloseReason,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,enum_EChannelCloseReason,0>_>
::GenerateKeyArray<TSizedDefaultAllocator<32>_>
          (void *this,TArray<FNetworkGUID,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  TBitArray<FDefaultBitArrayAllocator> *pTVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar11 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &param_1->ArrayMax;
  iVar10 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar11,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar4 = *(int *)((longlong)this + 0x28);
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
  uVar11 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar4 != 0) {
    pTVar13 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar13 = TStack_40.Array;
    }
    uVar5 = *(uint *)(pTVar13->AllocatorInstance).InlineData;
    while (uVar5 == 0) {
      lVar9 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_148439673;
      uVar5 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar9 * 4 + 4);
    }
    uVar11 = -uVar5 & uVar5;
    uVar3 = (ulonglong)uVar11 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar9 + -1 + iVar12;
    if (iVar4 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar4;
    }
  }
LAB_148439673:
  TStack_40._padding_ = CONCAT44(uVar11,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < *(int *)((longlong)this + 0x28)) {
    do {
      pFVar2 = (FScriptContainerElement *)
               (*(longlong *)this + (longlong)TStack_40.CurrentBitIndex * 0x18);
      pFVar6 = (param_1->AllocatorInstance).Data;
      if (((pFVar6 <= pFVar2) && (pFVar2 < pFVar6 + (longlong)*piVar1 * 8)) &&
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
      iVar10 = param_1->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar10 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8) =
           *(undefined8 *)pFVar2;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// Find @ 148466e80

IStaticLightingSystemImpl ** __thiscall
TMapBase<FName,IStaticLightingSystemImpl_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,IStaticLightingSystemImpl_*,0>_>
::Find(TMapBase<FName,IStaticLightingSystemImpl_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,IStaticLightingSystemImpl_*,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  IStaticLightingSystemImpl **ppIVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar4 * 0x18;
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x18) == param_1) {
          ppIVar5 = (IStaticLightingSystemImpl **)0x0;
          if (lVar1 != 0) {
            ppIVar5 = (IStaticLightingSystemImpl **)(lVar1 + 8);
          }
          return ppIVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return (IStaticLightingSystemImpl **)0x0;
}

// FindChecked @ 148467150

EChannelCloseReason * __thiscall
TMapBase<FNetworkGUID,enum_EChannelCloseReason,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,enum_EChannelCloseReason,0>_>
::FindChecked(void *this,FNetworkGUID *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  EChannelCloseReason *pEVar5;
  longlong lVar6;
  
  uVar1 = (param_1->field0_0x0).ObjectId;
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    iVar4 = *(int *)(lVar6 + ((uVar1 >> 0x20) * 0x17 + uVar1 &
                             (ulonglong)(*(int *)((longlong)this + 0x48) - 1)) * 4);
    if (iVar4 != -1) {
      do {
        lVar6 = *(longlong *)this + (longlong)iVar4 * 0x18;
        if (*(ulonglong *)(*(longlong *)this + (longlong)iVar4 * 0x18) == uVar1) {
          if (lVar6 != 0) {
            return (EChannelCloseReason *)(lVar6 + 8);
          }
          break;
        }
        iVar4 = *(int *)(lVar6 + 0x10);
      } while (iVar4 != -1);
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar3) {
    return &DAT_00000008;
  }
  pcVar2 = (code *)swi(3);
  pEVar5 = (EChannelCloseReason *)(*pcVar2)();
  return pEVar5;
}

// Emplace<int_const_&,int_&> @ 1484b0e40

int * __thiscall
TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
Emplace<int_const_&,int_&>
          (TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *this,
          int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar6 + 4 + (longlong)iVar5 * 0x10);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar6 + (longlong)iVar2 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  if (local_28.Pointer != (TSparseSetElement<TTuple<int,int>_> *)0x0) {
    *(int *)local_28.Pointer = *param_1;
    *(int *)((longlong)local_28.Pointer + 4) = *param_2;
    *(undefined4 *)((longlong)local_28.Pointer + 8) = 0xffffffff;
  }
  uVar3 = *(uint *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  bVar4 = TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          TryReplaceExisting(&this->Pairs,uVar3,local_28.Pointer,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::RehashOrLink
              (&this->Pairs,uVar3,local_28.Pointer,local_res8[0]);
  }
  return (int *)(*(longlong *)&(this->Pairs).Elements + 4 + lVar6 * 0x10);
}

// Emplace<int,int_const_&> @ 1484b0f60

int * __thiscall
TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
Emplace<int,int_const_&>
          (TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *this,
          int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar6 + 4 + (longlong)iVar5 * 0x10);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar6 + (longlong)iVar2 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  if (local_28.Pointer != (TSparseSetElement<TTuple<int,int>_> *)0x0) {
    *(int *)local_28.Pointer = *param_1;
    *(int *)((longlong)local_28.Pointer + 4) = *param_2;
    *(undefined4 *)((longlong)local_28.Pointer + 8) = 0xffffffff;
  }
  uVar3 = *(uint *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  bVar4 = TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          TryReplaceExisting(&this->Pairs,uVar3,local_28.Pointer,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::RehashOrLink
              (&this->Pairs,uVar3,local_28.Pointer,local_res8[0]);
  }
  return (int *)(*(longlong *)&(this->Pairs).Elements + 4 + lVar6 * 0x10);
}

// Find @ 1484d7450

FGuidReferences * __thiscall
TMapBase<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
::Find(TMapBase<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
       *this,int param_1)

{
  int iVar1;
  int *piVar2;
  FGuidReferences *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0xe0 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == param_1) {
          pFVar3 = (FGuidReferences *)0x0;
          if (piVar2 != (int *)0x0) {
            pFVar3 = (FGuidReferences *)(piVar2 + 2);
          }
          return pFVar3;
        }
        iVar1 = piVar2[0x36];
      } while (iVar1 != -1);
    }
  }
  return (FGuidReferences *)0x0;
}

// FindChecked @ 1484d7550

TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FRepLayoutCmd_*,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRepLayoutCmd_*,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>,0>_>
::FindChecked(TMapBase<FRepLayoutCmd_*,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRepLayoutCmd_*,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>,0>_>
              *this,FRepLayoutCmd *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<FRepLayoutCmd_*,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>_> *pTVar3;
  TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_> *pTVar4;
  
  pTVar3 = TSet<TTuple<FRepLayoutCmd_*,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRepLayoutCmd_*,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           ::Find(&this->Pairs,param_1);
  if (pTVar3 != (TTuple<FRepLayoutCmd_*,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>_> *)0x0) {
    return (TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_> *)&pTVar3->field_0x8;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar4;
  }
  return (TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_> *)&DAT_00000008;
}

// Emplace<FString_const_&,FShaderStats_const_&> @ 148506670

FShaderStats * __thiscall
TMapBase<FString,FShaderStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderStats,0>_>
::Emplace<FString_const_&,FShaderStats_const_&>
          (TMapBase<FString,FShaderStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderStats,0>_>
           *this,FString *param_1,FShaderStats *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  TSparseSetElement<TTuple<FString,FShaderStats>_> *pTVar8;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar5 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar5 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)((longlong)iVar3 * 0x40 + 4 + lVar7);
    iVar5 = iVar5 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x40 + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar3);
  pTVar8 = (TSparseSetElement<TTuple<FString,FShaderStats>_> *)0x0;
  if (local_28.Pointer != (TSparseSetElement<TTuple<FString,FShaderStats>_> *)0x0) {
    ::FString::FString(local_28.Pointer,param_1);
    FShaderStats::FShaderStats((FShaderStats *)((longlong)local_28.Pointer + 0x10),param_2);
    *(undefined4 *)((longlong)local_28.Pointer + 0x38) = 0xffffffff;
    pTVar8 = local_28.Pointer;
  }
  local_res8[0] = local_28.Index;
  iVar5 = *(int *)&pTVar8->field_0x8 + -1;
  if (*(int *)&pTVar8->field_0x8 == 0) {
    pwVar6 = L"";
    iVar5 = 0;
  }
  else {
    pwVar6 = *(wchar_t **)pTVar8;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar6);
  bVar2 = TSet<TTuple<FString,FShaderStats>,TDefaultMapHashableKeyFuncs<FString,FShaderStats,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar4,pTVar8,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar2) {
    TSet<TTuple<FString,FShaderStats>,TDefaultMapHashableKeyFuncs<FString,FShaderStats,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar4,pTVar8,local_res8[0]);
  }
  return (FShaderStats *)(*(longlong *)&(this->Pairs).Elements + 0x10 + lVar7 * 0x40);
}

// EmplaceByHash<int_const_&> @ 148507340

FShaderMapCompileResults * __thiscall
TMapBase<int,FShaderMapCompileResults,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>_>
::EmplaceByHash<int_const_&>
          (TMapBase<int,FShaderMapCompileResults,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>_>
           *this,uint param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  TKeyInitializer<int_const_&> local_res8;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  local_res8.Key = param_2;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x38 + 4 + lVar3);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x38 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer != (TSparseSetElement<TTuple<int,FShaderMapCompileResults>_> *)0x0) {
    TKeyInitializer<int_const_&>::
    operator<int,FShaderMapCompileResults>_TTuple<int,FShaderMapCompileResults>
              (&local_res8,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x30) = 0xffffffff;
  }
  local_res8.Key._0_4_ = local_18.Index;
  bVar4 = TSet<TTuple<int,FShaderMapCompileResults>,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,(int *)&local_res8,(bool *)0x0)
  ;
  if (!bVar4) {
    TSet<TTuple<int,FShaderMapCompileResults>,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,(int)local_res8.Key);
  }
  return (FShaderMapCompileResults *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)(int)local_res8.Key * 0x38 + 8);
}

// EmplaceByHash<FString_const_&> @ 148507460

FShaderStats * __thiscall
TMapBase<FString,FShaderStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderStats,0>_>
::EmplaceByHash<FString_const_&>
          (TMapBase<FString,FShaderStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderStats,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar5 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar4 * 0x40 + 4 + lVar5);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x40 + lVar5) = 0xffffffff;
    }
  }
  TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  if (local_18.Pointer == (TSparseSetElement<TTuple<FString,FShaderStats>_> *)0x0) {
    local_18.Pointer = (TSparseSetElement<TTuple<FString,FShaderStats>_> *)0x0;
  }
  else {
    ::FString::FString(local_18.Pointer,param_2);
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x18) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x20) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x28) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x30) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x38) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  bVar3 = TSet<TTuple<FString,FShaderStats>,TDefaultMapHashableKeyFuncs<FString,FShaderStats,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,local_res8,(bool *)0x0);
  lVar5 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<FString,FShaderStats>,TDefaultMapHashableKeyFuncs<FString,FShaderStats,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,local_res8[0]);
  }
  return (FShaderStats *)(*(longlong *)&(this->Pairs).Elements + 0x10 + lVar5 * 0x40);
}

// FindOrAddImpl<int_const_&> @ 148508df0

FShaderMapCompileResults * __thiscall
TMapBase<int,FShaderMapCompileResults,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int,FShaderMapCompileResults,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>_>
           *this,uint param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  FShaderMapCompileResults *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x38 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == *param_2) {
          if (piVar2 != (int *)0x0) {
            return (FShaderMapCompileResults *)(piVar2 + 2);
          }
          break;
        }
        iVar1 = piVar2[0xc];
      } while (iVar1 != -1);
    }
  }
  pFVar3 = EmplaceByHash<int_const_&>(this,param_1,param_2);
  return pFVar3;
}

// Find @ 148525460

FShaderMapCompileResults * __thiscall
TMapBase<int,FShaderMapCompileResults,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>_>
::Find(TMapBase<int,FShaderMapCompileResults,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>_>
       *this,int param_1)

{
  int iVar1;
  int *piVar2;
  FShaderMapCompileResults *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x38 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == param_1) {
          pFVar3 = (FShaderMapCompileResults *)0x0;
          if (piVar2 != (int *)0x0) {
            pFVar3 = (FShaderMapCompileResults *)(piVar2 + 2);
          }
          return pFVar3;
        }
        iVar1 = piVar2[0xc];
      } while (iVar1 != -1);
    }
  }
  return (FShaderMapCompileResults *)0x0;
}

// Remove @ 148540020

int __thiscall
TMapBase<int,TRefCountPtr<FPendingShaderMapCompileResults>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>_>
::Remove(TMapBase<int,TRefCountPtr<FPendingShaderMapCompileResults>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>_>
         *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 +
                    ((longlong)(this->Pairs).HashSize - 1U & (longlong)param_1) * 4);
    iVar4 = 0;
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      while (*(int *)(lVar1 + (longlong)iVar2 * 0x18) != param_1) {
        iVar2 = *(int *)(lVar1 + 0x10 + (longlong)iVar2 * 0x18);
        if (iVar2 == -1) {
          return 0;
        }
      }
      TSet<TTuple<int,TRefCountPtr<FPendingShaderMapCompileResults>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>,FDefaultSetAllocator>
      ::RemoveByIndex(&this->Pairs,iVar2);
      iVar4 = 1;
    }
  }
  return iVar4;
}

// Find @ 1485bb7f0

FSocketInfo * __thiscall
TMapBase<FName,USkeletalMesh::FSocketInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,USkeletalMesh::FSocketInfo,0>_>
::Find(TMapBase<FName,USkeletalMesh::FSocketInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,USkeletalMesh::FSocketInfo,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FSocketInfo *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0x90 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pFVar2 = (FSocketInfo *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pFVar2 = (FSocketInfo *)(pFVar4 + 2);
          }
          return pFVar2;
        }
        uVar1 = pFVar4[0x10].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FSocketInfo *)0x0;
}

// Find @ 1485bb890

ECustomShowFlag * __thiscall
TMapBase<FString,enum_FEngineShowFlags::ECustomShowFlag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,enum_FEngineShowFlags::ECustomShowFlag,0>_>
::Find(void *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  ECustomShowFlag *pEVar6;
  
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
  iVar2 = TSet<TTuple<FString,enum_FEngineShowFlags::ECustomShowFlag>,TDefaultMapHashableKeyFuncs<FString,enum_FEngineShowFlags::ECustomShowFlag,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(this,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x20 + *(longlong *)this;
    pEVar6 = (ECustomShowFlag *)0x0;
    if (lVar4 != 0) {
      pEVar6 = (ECustomShowFlag *)(lVar4 + 0x10);
    }
    return pEVar6;
  }
  return (ECustomShowFlag *)0x0;
}

// Find @ 1485bb920

FStructType ** __thiscall
TMapBase<unsigned___int64,UE::Shader::FStructType_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::Shader::FStructType_const_*,0>_>
::Find(TMapBase<unsigned___int64,UE::Shader::FStructType_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::Shader::FStructType_const_*,0>_>
       *this,ulong64 param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  FStructType **ppFVar4;
  ForElementType<FSetElementId> FVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(ulong64 *)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          ppFVar4 = (FStructType **)0x0;
          if (lVar1 != 0) {
            ppFVar4 = (FStructType **)(lVar1 + 8);
          }
          return ppFVar4;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (FStructType **)0x0;
}

// Find @ 148640d60

int * __thiscall
TMapBase<UMorphTarget_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMorphTarget_const_*,int,0>_>
::Find(TMapBase<UMorphTarget_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMorphTarget_const_*,int,0>_>
       *this,UMorphTarget *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  int *piVar5;
  uint uVar6;
  
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(UMorphTarget **)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          piVar5 = (int *)0x0;
          if (lVar1 != 0) {
            piVar5 = (int *)(lVar1 + 8);
          }
          return piVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (int *)0x0;
}

// Emplace<FKey_const_&,bool> @ 14867ff60

bool * __thiscall
TMapBase<FKey,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,bool,0>_>::
Emplace<FKey_const_&,bool>
          (TMapBase<FKey,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,bool,0>_> *this,
          FKey *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar8 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar8 + 4 + (longlong)iVar6 * 0x28);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar8 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar6);
  if (local_28.Pointer != (TSparseSetElement<TTuple<FKey,bool>_> *)0x0) {
    *(FName *)local_28.Pointer = param_1->KeyName;
    *(FKeyDetails **)((longlong)local_28.Pointer + 8) = (param_1->KeyDetails).Object;
    pTVar3 = (param_1->KeyDetails).SharedReferenceCount.ReferenceController;
    *(TReferenceControllerBase<1> **)((longlong)local_28.Pointer + 0x10) = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(bool *)((longlong)local_28.Pointer + 0x18) = *param_2;
    *(undefined4 *)((longlong)local_28.Pointer + 0x20) = 0xffffffff;
  }
  uVar4 = *(undefined8 *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
  uVar7 = uVar7 + (int)((ulonglong)uVar4 >> 0x20);
  bVar5 = TSet<TTuple<FKey,bool>,TDefaultMapHashableKeyFuncs<FKey,bool,0>,FDefaultSetAllocator>::
          TryReplaceExisting(&this->Pairs,uVar7,local_28.Pointer,local_res8,(bool *)0x0);
  lVar8 = (longlong)local_res8[0];
  if (!bVar5) {
    TSet<TTuple<FKey,bool>,TDefaultMapHashableKeyFuncs<FKey,bool,0>,FDefaultSetAllocator>::
    RehashOrLink(&this->Pairs,uVar7,local_28.Pointer,local_res8[0]);
  }
  return (bool *)(*(longlong *)&(this->Pairs).Elements + lVar8 * 0x28 + 0x18);
}

// Emplace<FKey,bool> @ 1486802d0

bool * __thiscall
TMapBase<FKey,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,bool,0>_>::
Emplace<FKey,bool>(TMapBase<FKey,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,bool,0>_>
                   *this,FKey *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar7 + 4 + (longlong)iVar5 * 0x28);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar7 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FKey,bool>_> *)0x0) {
    *(FName *)local_18.Pointer = param_1->KeyName;
    *(FKeyDetails **)((longlong)local_18.Pointer + 8) = (param_1->KeyDetails).Object;
    *(TReferenceControllerBase<1> **)((longlong)local_18.Pointer + 0x10) =
         (param_1->KeyDetails).SharedReferenceCount.ReferenceController;
    (param_1->KeyDetails).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (param_1->KeyDetails).Object = (FKeyDetails *)0x0;
    *(bool *)((longlong)local_18.Pointer + 0x18) = *param_2;
    *(undefined4 *)((longlong)local_18.Pointer + 0x20) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)local_18.Pointer;
  local_res8[0] = local_18.Index;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar6 = uVar6 + (int)((ulonglong)uVar3 >> 0x20);
  bVar4 = TSet<TTuple<FKey,bool>,TDefaultMapHashableKeyFuncs<FKey,bool,0>,FDefaultSetAllocator>::
          TryReplaceExisting(&this->Pairs,uVar6,local_18.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FKey,bool>,TDefaultMapHashableKeyFuncs<FKey,bool,0>,FDefaultSetAllocator>::
    RehashOrLink(&this->Pairs,uVar6,local_18.Pointer,local_res8[0]);
  }
  return (bool *)(*(longlong *)&(this->Pairs).Elements + lVar7 * 0x28 + 0x18);
}

// Emplace<enum_ESoundGroup,FSoundGroup_const_&> @ 148681bc0

FSoundGroup * __thiscall
TMapBase<enum_ESoundGroup,FSoundGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ESoundGroup,FSoundGroup,0>_>
::Emplace<enum_ESoundGroup,FSoundGroup_const_&>
          (void *this,ESoundGroup *param_1,FSoundGroup *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar5 = *(int *)((longlong)this + 0x30);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    iVar2 = *(int *)(*(longlong *)this + 4 + (longlong)iVar5 * 0x30);
    *(int *)((longlong)this + 0x30) = iVar2;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*(longlong *)this + (longlong)iVar2 * 0x30) = 0xffffffff;
    }
  }
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_28,iVar5);
  if (local_28.Pointer != (TSparseSetElement<TTuple<ESoundGroup,FSoundGroup>_> *)0x0) {
    *(ESoundGroup *)local_28.Pointer = *param_1;
    *(uchar *)((longlong)local_28.Pointer + 8) = (param_2->SoundGroup).Value;
    ::FString::FString((FString *)((longlong)local_28.Pointer + 0x10),&param_2->DisplayName);
    *(uint *)((longlong)local_28.Pointer + 0x20) =
         *(uint *)((longlong)local_28.Pointer + 0x20) ^
         (*(uint *)((longlong)local_28.Pointer + 0x20) ^ param_2->bAlwaysDecompressOnLoad) & 1;
    *(float *)((longlong)local_28.Pointer + 0x24) = param_2->DecompressedDuration;
    *(undefined4 *)((longlong)local_28.Pointer + 0x28) = 0xffffffff;
  }
  uVar3 = *(uint *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  bVar4 = TSet<TTuple<enum_ESoundGroup,FSoundGroup>,TDefaultMapHashableKeyFuncs<enum_ESoundGroup,FSoundGroup,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(this,uVar3,local_28.Pointer,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<enum_ESoundGroup,FSoundGroup>,TDefaultMapHashableKeyFuncs<enum_ESoundGroup,FSoundGroup,0>,FDefaultSetAllocator>
    ::RehashOrLink(this,uVar3,local_28.Pointer,local_res8[0]);
  }
  return (FSoundGroup *)(*(longlong *)this + 8 + lVar6 * 0x30);
}

// Emplace<enum_ESoundGroup,FSoundGroup> @ 148681d10

FSoundGroup * __thiscall
TMapBase<enum_ESoundGroup,FSoundGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ESoundGroup,FSoundGroup,0>_>
::Emplace<enum_ESoundGroup,FSoundGroup>(void *this,ESoundGroup *param_1,FSoundGroup *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  TSparseSetElement<TTuple<ESoundGroup,FSoundGroup>_> *pTVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar5 = *(int *)((longlong)this + 0x30);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    iVar2 = *(int *)(*(longlong *)this + 4 + (longlong)iVar5 * 0x30);
    *(int *)((longlong)this + 0x30) = iVar2;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*(longlong *)this + (longlong)iVar2 * 0x30) = 0xffffffff;
    }
  }
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_28,iVar5);
  pTVar6 = (TSparseSetElement<TTuple<ESoundGroup,FSoundGroup>_> *)0x0;
  if (local_28.Pointer != (TSparseSetElement<TTuple<ESoundGroup,FSoundGroup>_> *)0x0) {
    *(ESoundGroup *)local_28.Pointer = *param_1;
    *(uchar *)((longlong)local_28.Pointer + 8) = (param_2->SoundGroup).Value;
    *(undefined8 *)((longlong)local_28.Pointer + 0x10) = 0;
    *(FScriptContainerElement **)((longlong)local_28.Pointer + 0x10) =
         (param_2->DisplayName).Data.AllocatorInstance.Data;
    (param_2->DisplayName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)local_28.Pointer + 0x18) = (param_2->DisplayName).Data.ArrayNum;
    *(int *)((longlong)local_28.Pointer + 0x1c) = (param_2->DisplayName).Data.ArrayMax;
    (param_2->DisplayName).Data.ArrayNum = 0;
    (param_2->DisplayName).Data.ArrayMax = 0;
    *(uint *)((longlong)local_28.Pointer + 0x20) =
         *(uint *)((longlong)local_28.Pointer + 0x20) ^
         (*(uint *)((longlong)local_28.Pointer + 0x20) ^ param_2->bAlwaysDecompressOnLoad) & 1;
    *(float *)((longlong)local_28.Pointer + 0x24) = param_2->DecompressedDuration;
    *(undefined4 *)((longlong)local_28.Pointer + 0x28) = 0xffffffff;
    pTVar6 = local_28.Pointer;
  }
  uVar3 = *(uint *)pTVar6;
  local_res8[0] = local_28.Index;
  bVar4 = TSet<TTuple<enum_ESoundGroup,FSoundGroup>,TDefaultMapHashableKeyFuncs<enum_ESoundGroup,FSoundGroup,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(this,uVar3,pTVar6,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<enum_ESoundGroup,FSoundGroup>,TDefaultMapHashableKeyFuncs<enum_ESoundGroup,FSoundGroup,0>,FDefaultSetAllocator>
    ::RehashOrLink(this,uVar3,pTVar6,local_res8[0]);
  }
  return (FSoundGroup *)(*(longlong *)this + 8 + lVar7 * 0x30);
}

// Find @ 1486b6030

TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,TSizedDefaultAllocator<32>_>
* __thiscall
TMapBase<USoundNodeGroupControl_*,TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundNodeGroupControl_*,TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,TSizedDefaultAllocator<32>_>,0>_>
::Find(TMapBase<USoundNodeGroupControl_*,TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundNodeGroupControl_*,TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,TSizedDefaultAllocator<32>_>,0>_>
       *this,USoundNodeGroupControl *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,TSizedDefaultAllocator<32>_>
  *pTVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((USoundNodeGroupControl *)*plVar2 == param_1) {
          pTVar4 = (TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,TSizedDefaultAllocator<32>_>
                    *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,TSizedDefaultAllocator<32>_>
                      *)(plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,TSizedDefaultAllocator<32>_>
          *)0x0;
}

// Find @ 1486b60d0

TObjectPtr<UObject> * __thiscall
TMapBase<FName,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UObject>,0>_>
::Find(TMapBase<FName,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UObject>,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  TObjectPtr<UObject> *pTVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar4 * 0x18;
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x18) == param_1) {
          pTVar5 = (TObjectPtr<UObject> *)0x0;
          if (lVar1 != 0) {
            pTVar5 = (TObjectPtr<UObject> *)(lVar1 + 8);
          }
          return pTVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return (TObjectPtr<UObject> *)0x0;
}

// Find @ 1486b6170

uint * __thiscall
TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
::Find(TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
       *this,ulong64 param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint *puVar4;
  ForElementType<FSetElementId> FVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(ulong64 *)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          puVar4 = (uint *)0x0;
          if (lVar1 != 0) {
            puVar4 = (uint *)(lVar1 + 8);
          }
          return puVar4;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (uint *)0x0;
}

// FindChecked @ 1486b64e0

FConcurrencySoundData * __thiscall
TMapBase<unsigned_int,FConcurrencySoundData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FConcurrencySoundData,0>_>
::FindChecked(TMapBase<unsigned_int,FConcurrencySoundData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FConcurrencySoundData,0>_>
              *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FConcurrencySoundData *pFVar4;
  uint *puVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar3 = *(uint *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar5 == param_1) {
          if (puVar5 != (uint *)0x0) {
            return (FConcurrencySoundData *)(puVar5 + 1);
          }
          break;
        }
        uVar3 = puVar5[6];
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FConcurrencySoundData *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FConcurrencySoundData *)(*pcVar1)();
  return pFVar4;
}

// Remove @ 1486e7060

int __thiscall
TMapBase<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>
::Remove(TMapBase<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>
         *this,FActiveSound *param_1)

{
  int iVar1;
  uint uVar2;
  FActiveSound *local_res8 [4];
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    uVar2 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    local_res8[0] = param_1;
    iVar1 = TSet<TTuple<FActiveSound_*,int>,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>,FDefaultSetAllocator>
            ::RemoveImpl<FActiveSound_const_*>(&this->Pairs,uVar2 >> 0x10 ^ uVar2,local_res8);
    return iVar1;
  }
  return 0;
}

// FindChecked @ 148734b50

FPolygonGroupID * __thiscall
TMapBase<int,FPolygonGroupID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPolygonGroupID,0>_>
::FindChecked(TMapBase<int,FPolygonGroupID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPolygonGroupID,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FPolygonGroupID *pFVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x10 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (FPolygonGroupID *)(piVar5 + 1);
          }
          break;
        }
        iVar3 = piVar5[2];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FPolygonGroupID *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FPolygonGroupID *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 148734bf0

uint * __thiscall
TMapBase<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
::FindChecked(TMapBase<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
              *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  ForElementType<FSetElementId> FVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar3 = *(uint *)((longlong)FVar5 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar4 = (uint *)((longlong)(int)uVar3 * 0x10 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar4 == param_1) {
          if (puVar4 != (uint *)0x0) {
            return puVar4 + 1;
          }
          break;
        }
        uVar3 = puVar4[2];
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (uint *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  puVar4 = (uint *)(*pcVar1)();
  return puVar4;
}

// Emplace<FSoftObjectPath_const_&,FStreamable_*_const_&> @ 14876acc0

FStreamable ** __thiscall
TMapBase<FSoftObjectPath,FStreamable_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamable_*,0>_>
::Emplace<FSoftObjectPath_const_&,FStreamable_*_const_&>
          (TMapBase<FSoftObjectPath,FStreamable_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamable_*,0>_>
           *this,FSoftObjectPath *param_1,FStreamable **param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar6 + 4 + (longlong)iVar4 * 0x30);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar6 + (longlong)iVar2 * 0x30) = 0xffffffff;
    }
  }
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FSoftObjectPath,FStreamable_*>_> *)0x0) {
    FSoftObjectPath::FSoftObjectPath(local_18.Pointer,param_1);
    *(FStreamable **)((longlong)local_18.Pointer + 0x20) = *param_2;
    *(undefined4 *)((longlong)local_18.Pointer + 0x28) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  uVar5 = ::GetTypeHash(local_18.Pointer);
  bVar3 = TSet<TTuple<FSoftObjectPath,FStreamable_*>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamable_*,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar5,local_18.Pointer,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<FSoftObjectPath,FStreamable_*>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamable_*,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar5,local_18.Pointer,local_res8[0]);
  }
  return (FStreamable **)(*(longlong *)&(this->Pairs).Elements + 0x20 + lVar6 * 0x30);
}

// Emplace<FSoftObjectPath_const_&,FStreamable_*> @ 14876ae00

FStreamable ** __thiscall
TMapBase<FSoftObjectPath,FStreamable_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamable_*,0>_>
::Emplace<FSoftObjectPath_const_&,FStreamable_*>
          (TMapBase<FSoftObjectPath,FStreamable_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamable_*,0>_>
           *this,FSoftObjectPath *param_1,FStreamable **param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar6 + 4 + (longlong)iVar4 * 0x30);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar6 + (longlong)iVar2 * 0x30) = 0xffffffff;
    }
  }
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FSoftObjectPath,FStreamable_*>_> *)0x0) {
    FSoftObjectPath::FSoftObjectPath(local_18.Pointer,param_1);
    *(FStreamable **)((longlong)local_18.Pointer + 0x20) = *param_2;
    *(undefined4 *)((longlong)local_18.Pointer + 0x28) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  uVar5 = ::GetTypeHash(local_18.Pointer);
  bVar3 = TSet<TTuple<FSoftObjectPath,FStreamable_*>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamable_*,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar5,local_18.Pointer,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<FSoftObjectPath,FStreamable_*>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamable_*,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar5,local_18.Pointer,local_res8[0]);
  }
  return (FStreamable **)(*(longlong *)&(this->Pairs).Elements + 0x20 + lVar6 * 0x30);
}

// FindOrAddImpl<TSharedPtr<FStreamableHandle,1>_const_&> @ 14876da20

FPendingDelegateList * __thiscall
TMapBase<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList,0>_>
::FindOrAddImpl<TSharedPtr<FStreamableHandle,1>_const_&>
          (TMapBase<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList,0>_>
           *this,uint param_1,TSharedPtr<FStreamableHandle,1> *param_2)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FStreamableHandle *pFVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  FStreamableHandle *pFVar6;
  longlong lVar7;
  ForElementType<FSetElementId> FVar8;
  int local_res8 [2];
  TSharedPtr<FStreamableHandle,1> *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar8 = (this->Pairs).Hash.SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar8 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    while (iVar1 != -1) {
      pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
      pFVar3 = param_2->Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      lVar4 = *(longlong *)&(this->Pairs).Elements;
      lVar7 = (longlong)iVar1 * 0x28;
      pTVar5 = *(TReferenceControllerBase<1> **)(lVar7 + 8 + lVar4);
      pFVar6 = *(FStreamableHandle **)(lVar7 + lVar4);
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      if (pFVar6 == pFVar3) {
        if ((iVar1 != -1) && (lVar7 = *(longlong *)&(this->Pairs).Elements + lVar7, lVar7 != 0))
        goto LAB_14876db0b;
        break;
      }
      iVar1 = *(int *)(lVar7 + 0x20 + *(longlong *)&(this->Pairs).Elements);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList>,TDefaultMapHashableKeyFuncs<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TSharedPtr<FStreamableHandle,1>_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<TSharedPtr<FStreamableHandle,1>_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar7 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
LAB_14876db0b:
  return (FPendingDelegateList *)(lVar7 + 0x10);
}

// GetKeys<TSizedDefaultAllocator<32>_> @ 14876ef10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,0>_>
::GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,0>_>
           *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  int iVar17;
  ForElementType<unsigned_int> FVar18;
  uint *puVar19;
  longlong lVar20;
  undefined1 auStackY_1b8 [32];
  uint local_168;
  uint uStack_164;
  uint uStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined4 local_120;
  int local_11c;
  int local_118;
  undefined1 local_114 [12];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_108;
  TMapBase<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,0>_>
  *local_e8;
  int iStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  undefined4 uStack_c4;
  undefined4 local_9c;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  piVar1 = &param_1->ArrayMax;
  uVar9 = 0;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&param_1->AllocatorInstance,0,piVar1);
  }
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  uVar12 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if (uVar12 == 0) goto LAB_14876f1c6;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar12);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar12);
  uVar13 = 1;
  if (3 < uVar12) {
    uVar11 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_120 = (undefined4)lVar10;
    uVar13 = 1 << ((byte)lVar10 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar13 <= (int)local_50)) goto LAB_14876f1c6;
  local_50 = uVar13;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar13 != 0) {
    uVar12 = uVar13;
    if (uVar13 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar12 = 0;
        goto LAB_14876f025;
      }
    }
    else {
LAB_14876f025:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar12,4);
    }
    if (0 < (int)uVar13) {
      uVar16 = (ulonglong)uVar13;
      uVar11 = uVar9;
      do {
        FVar8.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar7 = uVar11 & (longlong)(int)uVar13 - 1U;
        uVar11 = uVar11 + 1;
        *(undefined4 *)(FVar8.Data + uVar7 * 4) = 0xffffffff;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  if (local_50 != 0) {
    local_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_168 = 0;
    uStack_164 = 1;
    uStack_154 = 0;
    uStack_150 = 0;
    if (local_70 != 0) {
      FVar18 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar18 = local_78;
      }
      uVar12 = *(uint *)FVar18;
      uVar11 = uVar9;
      while (uVar12 == 0) {
        uStack_150 = (int)uVar11 + 0x20;
        uVar11 = (ulonglong)uStack_150;
        iVar17 = (int)uVar9;
        local_168 = iVar17 + 1;
        uVar9 = (ulonglong)local_168;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_168)
        goto LAB_14876f122;
        uVar12 = ((uint *)((longlong)FVar18 + 4))[iVar17];
      }
      uStack_164 = -uVar12 & uVar12;
      uVar9 = (ulonglong)uStack_164 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_11c = (int)lVar10;
      uStack_154 = local_11c + -1 + uStack_150;
      uVar9 = (ulonglong)uStack_154;
      if ((int)local_70 < (int)uStack_154) {
LAB_14876f122:
        uVar9 = (ulonglong)local_70;
        uStack_154 = local_70;
      }
    }
    local_114._4_8_ = local_98;
    local_108._padding_ = CONCAT44(uStack_164,local_168);
    local_108.CurrentBitIndex = uStack_154;
    local_108.UnvisitedBitMask = 0xffffffff;
    local_108._28_4_ = uStack_14c;
    local_108.BaseBitIndex = uStack_150;
    if ((int)uVar9 < (int)local_70) {
      do {
        puVar15 = (undefined8 *)((longlong)(int)uVar9 * 0x10 + *(longlong *)local_114._4_8_);
        uVar3 = *puVar15;
        uVar12 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar12 = local_50 - 1 & uVar12 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)((longlong)puVar15 + 0xc) = uVar12;
        FVar8.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar11 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar12;
        *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(FVar8.Data + uVar11 * 4);
        *(int *)(FVar8.Data + uVar11 * 4) = (int)uVar9;
        local_108.UnvisitedBitMask = local_108.UnvisitedBitMask & ~local_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_108);
        uVar9 = (ulonglong)(uint)local_108.CurrentBitIndex;
      } while (local_108.CurrentBitIndex < (local_108.Array)->NumBits);
    }
  }
LAB_14876f1c6:
  iVar17 = 0;
  uVar12 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  if (*piVar1 < (int)uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar12,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  iVar2 = *(int *)&(this->Pairs).Elements.field_0x28;
  local_c8 = iVar17;
  iStack_cc = 0;
  uStack_dc = 1;
  if (iVar2 != 0) {
    puVar19 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)TStack_140.Array;
    }
    uVar12 = *puVar19;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar17;
      local_c8 = local_c8 + 0x20;
      iVar17 = iVar17 + 1;
      iStack_cc = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14876f26e;
      uVar12 = puVar19[lVar10 + 1];
    }
    uStack_dc = -uVar12 & uVar12;
    uVar9 = (ulonglong)uStack_dc * 2 + 1;
    lVar10 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_118 = (int)lVar10;
    iStack_cc = local_c8 + -1 + local_118;
    if (iVar2 < iStack_cc) {
      iStack_cc = iVar2;
    }
  }
LAB_14876f26e:
  uStack_d0 = 0xffffffff;
  uStack_c4 = local_9c;
  TStack_140._padding_ = CONCAT44(uStack_dc,iVar17);
  TStack_140.UnvisitedBitMask = 0xffffffff;
  TStack_140._28_4_ = local_9c;
  TStack_140.BaseBitIndex = local_c8;
  local_e8 = this;
  iStack_e0 = iVar17;
  local_d8 = (undefined1 *)TStack_140.Array;
  TStack_140.CurrentBitIndex = iStack_cc;
  if (iStack_cc < iVar2) {
    do {
      lVar20 = (longlong)TStack_140.CurrentBitIndex;
      lVar10 = *(longlong *)
                ((longlong)TStack_140.CurrentBitIndex * 0x20 + *(longlong *)&(this->Pairs).Elements)
      ;
      uVar12 = ::GetTypeHash((FNameEntryId)(uint)lVar10);
      if (local_98._8_4_ != local_64) {
        FVar8.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar8.Data = local_58.Data;
        }
        for (iVar17 = *(int *)(FVar8.Data +
                              (ulonglong)(local_50 - 1 & (int)((ulonglong)lVar10 >> 0x20) + uVar12)
                              * 4); iVar17 != -1;
            iVar17 = *(int *)(local_98._0_8_ + (longlong)iVar17 * 0x10 + 8)) {
          if (*(longlong *)(local_98._0_8_ + (longlong)iVar17 * 0x10) == lVar10) goto LAB_14876f3e9;
        }
      }
      pFVar4 = (param_1->AllocatorInstance).Data;
      pFVar14 = (FScriptContainerElement *)(*(longlong *)&(this->Pairs).Elements + lVar20 * 0x20);
      if (((pFVar4 <= pFVar14) && (pFVar14 < pFVar4 + (longlong)*piVar1 * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar17 = (*pcVar5)();
        return iVar17;
      }
      iVar17 = param_1->ArrayNum;
      if (iVar17 == *piVar1) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar17 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar17 * 8) =
           *(undefined8 *)pFVar14;
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_98,
                 (FName *)local_114,
                 (bool *)((longlong)TStack_140.CurrentBitIndex * 0x20 +
                         *(longlong *)&(this->Pairs).Elements));
LAB_14876f3e9:
      TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
    } while (TStack_140.CurrentBitIndex < (TStack_140.Array)->NumBits);
  }
  iVar17 = param_1->ArrayNum;
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return iVar17;
}

// Find @ 148799310

int * __thiscall
TMapBase<UStreamableRenderAsset_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,int,0>_>
::Find(TMapBase<UStreamableRenderAsset_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,int,0>_>
       *this,UStreamableRenderAsset *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  int *piVar5;
  uint uVar6;
  
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(UStreamableRenderAsset **)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          piVar5 = (int *)0x0;
          if (lVar1 != 0) {
            piVar5 = (int *)(lVar1 + 8);
          }
          return piVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (int *)0x0;
}

// Find @ 1487993c0

FPendingDelegateList * __thiscall
TMapBase<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList,0>_>
::Find(TMapBase<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList,0>_>
       *this,TSharedPtr<FStreamableHandle_const_,1> *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<FStreamableHandle_const_,1> local_18;
  
  local_18.Object = param_1->Object;
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar3 = ((uint)((ulonglong)local_18.Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)local_18.Object >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  local_18.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  iVar2 = TSet<TTuple<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList>,TDefaultMapHashableKeyFuncs<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TSharedPtr<FStreamableHandle_const_,1>_>
                    (&this->Pairs,uVar3 >> 0x10 ^ uVar3,&local_18);
  if (iVar2 == -1) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  }
  else {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar2 * 0x28;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
    if (lVar1 != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return (FPendingDelegateList *)(lVar1 + 0x10);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return (FPendingDelegateList *)0x0;
}

// Find @ 148799490

uint * __thiscall
TMapBase<FName,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>_>
::Find(TMapBase<FName,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar4 * 0x14;
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x14) == param_1) {
          puVar5 = (uint *)0x0;
          if (lVar1 != 0) {
            puVar5 = (uint *)(lVar1 + 8);
          }
          return puVar5;
        }
        iVar4 = *(int *)(lVar1 + 0xc);
      } while (iVar4 != -1);
    }
  }
  return (uint *)0x0;
}

// Find @ 148799530

TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr> * __thiscall
TMapBase<FName,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>,0>_>
::Find(TMapBase<FName,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr> *pTVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar4 * 0x18;
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x18) == param_1) {
          pTVar5 = (TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr> *)0x0;
          if (lVar1 != 0) {
            pTVar5 = (TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr> *)(lVar1 + 8);
          }
          return pTVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return (TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr> *)0x0;
}

// FindChecked @ 1487996f0

FString * __thiscall
TMapBase<enum_FWindowsPlatformMemory::EMemoryCounterRegion,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FWindowsPlatformMemory::EMemoryCounterRegion,FString,0>_>
::FindChecked(void *this,EMemoryCounterRegion param_1)

{
  code *pcVar1;
  bool bVar2;
  EMemoryCounterRegion EVar3;
  FString *pFVar4;
  EMemoryCounterRegion *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    EVar3 = *(EMemoryCounterRegion *)
             (lVar6 + (ulonglong)(*(int *)((longlong)this + 0x48) - MCR_Physical & param_1) * 4);
    if (EVar3 != ~MCR_Invalid) {
      do {
        pEVar5 = (EMemoryCounterRegion *)((longlong)(int)EVar3 * 0x20 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EMemoryCounterRegion *)0x0) {
            return (FString *)(pEVar5 + 2);
          }
          break;
        }
        EVar3 = pEVar5[6];
      } while (EVar3 != ~MCR_Invalid);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (FString *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FString *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 148799790

long64 * __thiscall
TMapBase<enum_FWindowsPlatformMemory::EMemoryCounterRegion,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FWindowsPlatformMemory::EMemoryCounterRegion,__int64,0>_>
::FindChecked(void *this,EMemoryCounterRegion param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  long64 *plVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)(*(int *)((longlong)this + 0x48) - MCR_Physical & param_1) *
                             4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0x18;
        if (*(EMemoryCounterRegion *)(*(longlong *)this + (longlong)iVar3 * 0x18) == param_1) {
          if (lVar5 != 0) {
            return (long64 *)(lVar5 + 8);
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0x10);
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (long64 *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  plVar4 = (long64 *)(*pcVar1)();
  return plVar4;
}

// Emplace<UStreamableRenderAsset_const_*_const_&> @ 1487f7560

TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>,0>_>
::Emplace<UStreamableRenderAsset_const_*_const_&>
          (TMapBase<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>,0>_>
           *this,UStreamableRenderAsset **param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  TSparseSetElement<TTuple<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>_>_>
  *pTVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar7);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  pTVar6 = (TSparseSetElement<TTuple<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>_>_>
            *)0x0;
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>_>_>
       *)0x0) {
    *(UStreamableRenderAsset **)local_18.Pointer = *param_1;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x18) = 0xffffffff;
    pTVar6 = local_18.Pointer;
  }
  local_res8[0] = local_18.Index;
  uVar5 = ((uint)(*(ulonglong *)pTVar6 >> 0x14) & 0xffff ^ (uint)(*(ulonglong *)pTVar6 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  bVar3 = TSet<TTuple<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar5,pTVar6,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar5,pTVar6,local_res8[0]);
  }
  return (TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + lVar7 * 0x20);
}

// Emplace<FName_const_&,TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_>_> @ 1487f76b0

TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FName,TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_>,0>_>
::Emplace<FName_const_&,TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_>_>
          (TMapBase<FName,TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_>,0>_>
           *this,FName *param_1,
          TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  TSparseSetElement<TTuple<FName,TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_>_>_>
  *pTVar8;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x20 + 4 + lVar7);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  pTVar8 = (TSparseSetElement<TTuple<FName,TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_>_>_>
            *)0x0;
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<FName,TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_>_>_>
       *)0x0) {
    *(FName *)local_28.Pointer = *param_1;
    *(undefined8 *)((longlong)local_28.Pointer + 8) = 0;
    *(FScriptContainerElement **)((longlong)local_28.Pointer + 8) =
         (param_2->AllocatorInstance).Data;
    (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)local_28.Pointer + 0x10) = param_2->ArrayNum;
    *(int *)((longlong)local_28.Pointer + 0x14) = param_2->ArrayMax;
    param_2->ArrayNum = 0;
    param_2->ArrayMax = 0;
    *(undefined4 *)((longlong)local_28.Pointer + 0x18) = 0xffffffff;
    pTVar8 = local_28.Pointer;
  }
  uVar3 = *(undefined8 *)pTVar8;
  local_res8[0] = local_28.Index;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar6 = uVar6 + (int)((ulonglong)uVar3 >> 0x20);
  bVar4 = TSet<TTuple<FName,TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,pTVar8,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FName,TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,pTVar8,local_res8[0]);
  }
  return (TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + lVar7 * 0x20);
}

// EmplaceByHash<UStreamableRenderAsset_const_*_const_&> @ 1487f8c50

TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>,0>_>
::EmplaceByHash<UStreamableRenderAsset_const_*_const_&>
          (TMapBase<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,UStreamableRenderAsset **param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  TSparseSetElement<TTuple<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>_>_>
  *pTVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar6);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar6) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  pTVar5 = (TSparseSetElement<TTuple<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>_>_>
            *)0x0;
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>_>_>
       *)0x0) {
    *(UStreamableRenderAsset **)local_18.Pointer = *param_2;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x18) = 0xffffffff;
    pTVar5 = local_18.Pointer;
  }
  local_res8[0] = local_18.Index;
  bVar3 = TSet<TTuple<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,pTVar5,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,pTVar5,local_res8[0]);
  }
  return (TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + lVar6 * 0x20);
}

// EmplaceByHash<FName_const_&> @ 1487f8d80

TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FName,TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_>,0>_>
::EmplaceByHash<FName_const_&>
          (TMapBase<FName,TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FName *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  TSparseSetElement<TTuple<FName,TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_>_>_>
  *pTVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar6);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar6) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  pTVar5 = (TSparseSetElement<TTuple<FName,TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_>_>_>
            *)0x0;
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<FName,TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_>_>_>
       *)0x0) {
    *(FName *)local_18.Pointer = *param_2;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x18) = 0xffffffff;
    pTVar5 = local_18.Pointer;
  }
  local_res8[0] = local_18.Index;
  bVar3 = TSet<TTuple<FName,TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,pTVar5,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<FName,TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,pTVar5,local_res8[0]);
  }
  return (TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + lVar6 * 0x20);
}

// FindOrAddImpl<UStreamableRenderAsset_const_*_const_&> @ 1487f9c00

TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<UStreamableRenderAsset_const_*_const_&>
          (TMapBase<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,UStreamableRenderAsset **param_2)

{
  int iVar1;
  longlong *plVar2;
  TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_> *pTVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((UStreamableRenderAsset *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_> *
                   )(plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  pTVar3 = EmplaceByHash<UStreamableRenderAsset_const_*_const_&>(this,param_1,param_2);
  return pTVar3;
}

// FindOrAddImpl<FObjectKey> @ 1487f9c80

TSharedPtr<FActiveSubtitle,1> * __thiscall
TMapBase<FObjectKey,TSharedPtr<FActiveSubtitle,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<FActiveSubtitle,1>,0>_>
::FindOrAddImpl<FObjectKey>
          (TMapBase<FObjectKey,TSharedPtr<FActiveSubtitle,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<FActiveSubtitle,1>,0>_>
           *this,uint param_1,FObjectKey *param_2)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FObjectKey *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        piVar1 = (int *)((longlong)iVar2 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((*piVar1 == param_2->ObjectIndex) && (piVar1[1] == param_2->ObjectSerialNumber)) {
          if ((iVar2 != -1) && (piVar1 != (int *)0x0)) {
            return (TSharedPtr<FActiveSubtitle,1> *)(piVar1 + 2);
          }
          break;
        }
        iVar2 = piVar1[6];
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FObjectKey,TSharedPtr<FActiveSubtitle,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<FActiveSubtitle,1>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FObjectKey_&&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FObjectKey_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TSharedPtr<FActiveSubtitle,1> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// Find @ 148839550

FRegisteredSyncPointData * __thiscall
TMapBase<int,UE::Tick::FTaskSyncManager::FRegisteredSyncPointData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Tick::FTaskSyncManager::FRegisteredSyncPointData,0>_>
::Find(TMapBase<int,UE::Tick::FTaskSyncManager::FRegisteredSyncPointData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Tick::FTaskSyncManager::FRegisteredSyncPointData,0>_>
       *this,int param_1)

{
  int iVar1;
  int *piVar2;
  FRegisteredSyncPointData *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x40 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == param_1) {
          pFVar3 = (FRegisteredSyncPointData *)0x0;
          if (piVar2 != (int *)0x0) {
            pFVar3 = (FRegisteredSyncPointData *)(piVar2 + 2);
          }
          return pFVar3;
        }
        iVar1 = piVar2[0xe];
      } while (iVar1 != -1);
    }
  }
  return (FRegisteredSyncPointData *)0x0;
}

// Find @ 1488395b0

TSharedRef<UE::Tick::FActiveSyncPoint,1> * __thiscall
TMapBase<int,TSharedRef<UE::Tick::FActiveSyncPoint,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedRef<UE::Tick::FActiveSyncPoint,1>,0>_>
::Find(TMapBase<int,TSharedRef<UE::Tick::FActiveSyncPoint,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedRef<UE::Tick::FActiveSyncPoint,1>,0>_>
       *this,int param_1)

{
  int iVar1;
  int *piVar2;
  TSharedRef<UE::Tick::FActiveSyncPoint,1> *pTVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == param_1) {
          pTVar3 = (TSharedRef<UE::Tick::FActiveSyncPoint,1> *)0x0;
          if (piVar2 != (int *)0x0) {
            pTVar3 = (TSharedRef<UE::Tick::FActiveSyncPoint,1> *)(piVar2 + 2);
          }
          return pTVar3;
        }
        iVar1 = piVar2[6];
      } while (iVar1 != -1);
    }
  }
  return (TSharedRef<UE::Tick::FActiveSyncPoint,1> *)0x0;
}

// Find @ 148839610

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int * __thiscall
TMapBase<UPrimitiveComponent_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,int,0>_>
::Find(TMapBase<UPrimitiveComponent_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,int,0>_>
       *this,UPrimitiveComponent *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  int *piVar5;
  uint uVar6;
  
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(UPrimitiveComponent **)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          piVar5 = (int *)0x0;
          if (lVar1 != 0) {
            piVar5 = (int *)(lVar1 + 8);
          }
          return piVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (int *)0x0;
}

// Find @ 1488396c0

FRenderAssetDesc * __thiscall
TMapBase<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,0>_>
::Find(TMapBase<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,0>_>
       *this,UStreamableRenderAsset *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  FRenderAssetDesc *pFVar5;
  uint uVar6;
  
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(UStreamableRenderAsset **)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          pFVar5 = (FRenderAssetDesc *)0x0;
          if (lVar1 != 0) {
            pFVar5 = (FRenderAssetDesc *)(lVar1 + 8);
          }
          return pFVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (FRenderAssetDesc *)0x0;
}

// Find @ 148839770

int * __thiscall
TMapBase<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,0>_>::Find
          (TMapBase<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,0>_> *this,
          FGuid *param_1)

{
  uint uVar1;
  ulong64 uVar2;
  uint *puVar3;
  uint *puVar4;
  ForElementType<FSetElementId> FVar5;
  
  uVar2 = CityHash64((char *)param_1,0x10);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar5 +
                     ((ulonglong)((this->Pairs).HashSize - 1) & uVar2 & 0xffffffff) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar3 = (uint *)((longlong)(int)uVar1 * 0x1c + *(longlong *)&(this->Pairs).Elements);
        if (((param_1->D == puVar3[3] && param_1->C == puVar3[2]) && param_1->B == puVar3[1]) &&
            param_1->A == *puVar3) {
          puVar4 = (uint *)0x0;
          if (puVar3 != (uint *)0x0) {
            puVar4 = puVar3 + 4;
          }
          return (int *)puVar4;
        }
        uVar1 = puVar3[5];
      } while (uVar1 != 0xffffffff);
    }
  }
  return (int *)0x0;
}

// Find @ 148839830

FModeRecord * __thiscall
TMapBase<FName,FSubstrateVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSubstrateVisualizationData::FModeRecord,1>_>
::Find(TMapBase<FName,FSubstrateVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSubstrateVisualizationData::FModeRecord,1>_>
       *this,FName param_1)

{
  uint uVar1;
  FModeRecord *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pFVar2 = (FModeRecord *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pFVar2 = (FModeRecord *)(pFVar4 + 1);
          }
          return pFVar2;
        }
        uVar1 = pFVar4[0xb].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FModeRecord *)0x0;
}

// Find @ 1488398d0

FTestConsoleVariable * __thiscall
TMapBase<FString,FTestConsoleVariable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTestConsoleVariable,0>_>
::Find(TMapBase<FString,FTestConsoleVariable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTestConsoleVariable,0>_>
       *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  FTestConsoleVariable *pFVar6;
  
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
  iVar2 = TSet<TTuple<FString,FTestConsoleVariable>,TDefaultMapHashableKeyFuncs<FString,FTestConsoleVariable,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x40 + *(longlong *)&(this->Pairs).Elements;
    pFVar6 = (FTestConsoleVariable *)0x0;
    if (lVar4 != 0) {
      pFVar6 = (FTestConsoleVariable *)(lVar4 + 0x10);
    }
    return pFVar6;
  }
  return (FTestConsoleVariable *)0x0;
}

// Find @ 148839960

FActiveSubtitle * __thiscall
TMapBase<__int64,FActiveSubtitle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FActiveSubtitle,0>_>
::Find(TMapBase<__int64,FActiveSubtitle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FActiveSubtitle,0>_>
       *this,long64 param_1)

{
  int iVar1;
  FActiveSubtitle *pFVar2;
  longlong *plVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U &
                    (int)((ulonglong)param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar3 = (longlong *)((longlong)iVar1 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*plVar3 == param_1) {
          pFVar2 = (FActiveSubtitle *)0x0;
          if (plVar3 != (longlong *)0x0) {
            pFVar2 = (FActiveSubtitle *)(plVar3 + 1);
          }
          return pFVar2;
        }
        iVar1 = (int)plVar3[5];
      } while (iVar1 != -1);
    }
  }
  return (FActiveSubtitle *)0x0;
}

// FindRef @ 14883a640

TObjectPtr<USubsystem> __thiscall
TMapBase<TObjectPtr<UClass>,TObjectPtr<USubsystem>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>_>
::FindRef(TMapBase<TObjectPtr<UClass>,TObjectPtr<USubsystem>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>_>
          *this,TObjectPtr<UClass_const_> param_1)

{
  UObject *pUVar1;
  TTuple<TObjectPtr<UClass>,TObjectPtr<USubsystem>_> *pTVar2;
  undefined8 *in_R8;
  UObject *local_res8;
  
  pUVar1 = (UObject *)*in_R8;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  pTVar2 = TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<USubsystem>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>,FDefaultSetAllocator>
           ::Find(&this->Pairs,(TObjectPtr<UClass_const_>)&local_res8);
  if (pTVar2 == (TTuple<TObjectPtr<UClass>,TObjectPtr<USubsystem>_> *)0x0) {
    *(undefined8 *)param_1.field0_0x0 = 0;
  }
  else {
    pUVar1 = *(UObject **)&pTVar2->field_0x8;
    *(UObject **)param_1.field0_0x0 = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
      return (TObjectPtr<USubsystem>)param_1.field0_0x0.DebugPtr;
    }
  }
  return (TObjectPtr<USubsystem>)param_1.field0_0x0.DebugPtr;
}

// FindOrAddImpl<void_const_*_const_&> @ 1488a9a20

TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator> * __thiscall
TMapBase<void_const_*,TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>,0>_>
::FindOrAddImpl<void_const_*_const_&>
          (TMapBase<void_const_*,TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>,0>_>
           *this,uint param_1,void **param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  void **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if ((void *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator> *)
                   (plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[0xb];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<void_const_*,TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<void_const_*,TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<void_const_*_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<void_const_*_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x60);
}

// FindOrAddImpl<FString> @ 1488a9ba0

FTimerSourceEntry * __thiscall
TMapBase<FString,FTimerSourceEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTimerSourceEntry,0>_>
::FindOrAddImpl<FString>
          (TMapBase<FString,FTimerSourceEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTimerSourceEntry,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FString *local_res20;
  
  iVar1 = TSet<TTuple<FString,FTimerSourceEntry>,TDefaultMapHashableKeyFuncs<FString,FTimerSourceEntry,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x38 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (FTimerSourceEntry *)(lVar2 + 0x10);
  }
  local_res20 = param_2;
  TSet<TTuple<FString,FTimerSourceEntry>,TDefaultMapHashableKeyFuncs<FString,FTimerSourceEntry,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FString_&&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FString_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FTimerSourceEntry *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x38 + 0x10);
}

// GenerateKeyArray<TSizedDefaultAllocator<32>_> @ 1488aa030

void __thiscall
TMapBase<UObjectBase_const_*,FTraceFilterObjectAnnotation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FTraceFilterObjectAnnotation,0>_>
::GenerateKeyArray<TSizedDefaultAllocator<32>_>
          (TMapBase<UObjectBase_const_*,FTraceFilterObjectAnnotation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FTraceFilterObjectAnnotation,0>_>
           *this,TArray<UObjectBase_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &param_1->ArrayMax;
  iVar10 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar11,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar4 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar11 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar4 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar5 = *puVar13;
    while (uVar5 == 0) {
      lVar9 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1488aa103;
      uVar5 = puVar13[lVar9 + 1];
    }
    uVar11 = -uVar5 & uVar5;
    uVar3 = (ulonglong)uVar11 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar9 + -1 + iVar12;
    if (iVar4 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar4;
    }
  }
LAB_1488aa103:
  TStack_40._padding_ = CONCAT44(uVar11,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar2 = (FScriptContainerElement *)
               (*(longlong *)&(this->Pairs).Elements + (longlong)TStack_40.CurrentBitIndex * 0x18);
      pFVar6 = (param_1->AllocatorInstance).Data;
      if (((pFVar6 <= pFVar2) && (pFVar2 < pFVar6 + (longlong)*piVar1 * 8)) &&
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
      iVar10 = param_1->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar10 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8) =
           *(undefined8 *)pFVar2;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// Find @ 1488bfb20

FTraceFilterObjectAnnotation * __thiscall
TMapBase<UObjectBase_const_*,FTraceFilterObjectAnnotation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FTraceFilterObjectAnnotation,0>_>
::Find(TMapBase<UObjectBase_const_*,FTraceFilterObjectAnnotation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FTraceFilterObjectAnnotation,0>_>
       *this,UObjectBase *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  FTraceFilterObjectAnnotation *pFVar5;
  uint uVar6;
  
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(UObjectBase **)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          pFVar5 = (FTraceFilterObjectAnnotation *)0x0;
          if (lVar1 != 0) {
            pFVar5 = (FTraceFilterObjectAnnotation *)(lVar1 + 8);
          }
          return pFVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (FTraceFilterObjectAnnotation *)0x0;
}

// Find @ 1488bfbd0

TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator> * __thiscall
TMapBase<void_const_*,TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>,0>_>
::Find(TMapBase<void_const_*,TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>,0>_>
       *this,void *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator> *pTVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if ((void *)*plVar2 == param_1) {
          pTVar4 = (TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator> *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator> *)
                     (plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[0xb];
      } while (iVar1 != -1);
    }
  }
  return (TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator> *)0x0;
}

// Emplace<FKey_const_&> @ 1488f4450

FKeyState * __thiscall
TMapBase<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_>::
Emplace<FKey_const_&>
          (TMapBase<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_>
           *this,FKey *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  TKeyInitializer<FKey_const_&> local_res8;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  local_res8.Key = param_1;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x110,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x110 + 4 + lVar7);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x110 + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<272,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<272,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FKey,FKeyState>_> *)0x0) {
    TKeyInitializer<FKey_const_&>::operator<FKey,FKeyState>_TTuple<FKey,FKeyState>
              (&local_res8,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x108) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)local_18.Pointer;
  local_res8.Key._0_4_ = local_18.Index;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar6 = uVar6 + (int)((ulonglong)uVar3 >> 0x20);
  bVar4 = TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,local_18.Pointer,(int *)&local_res8,(bool *)0x0);
  lVar7 = (longlong)(int)local_res8.Key;
  if (!bVar4) {
    TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,local_18.Pointer,(int)local_res8.Key);
  }
  return (FKeyState *)(*(longlong *)&(this->Pairs).Elements + lVar7 * 0x110 + 0x18);
}

// EmplaceByHash<FKey_const_&> @ 1488f5e70

FKeyState * __thiscall
TMapBase<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_>::
EmplaceByHash<FKey_const_&>
          (TMapBase<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_>
           *this,uint param_1,FKey *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  TKeyInitializer<FKey_const_&> local_res8;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  local_res8.Key = param_2;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x110,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x110 + 4 + lVar3);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x110 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<272,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<272,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FKey,FKeyState>_> *)0x0) {
    TKeyInitializer<FKey_const_&>::operator<FKey,FKeyState>_TTuple<FKey,FKeyState>
              (&local_res8,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x108) = 0xffffffff;
  }
  local_res8.Key._0_4_ = local_18.Index;
  bVar4 = TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,(int *)&local_res8,(bool *)0x0)
  ;
  if (!bVar4) {
    TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,(int)local_res8.Key);
  }
  return (FKeyState *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)(int)local_res8.Key * 0x110 + 0x18);
}

// FindOrAddImpl<FKey_const_&> @ 1488fa210

FKeyState * __thiscall
TMapBase<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_>::
FindOrAddImpl<FKey_const_&>
          (TMapBase<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_>
           *this,uint param_1,FKey *param_2)

{
  uint uVar1;
  FName *pFVar2;
  FKeyState *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x110 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == param_2->KeyName) {
          if (pFVar2 != (FName *)0x0) {
            return (FKeyState *)(pFVar2 + 3);
          }
          break;
        }
        uVar1 = pFVar2[0x21].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  pFVar3 = EmplaceByHash<FKey_const_&>(this,param_1,param_2);
  return pFVar3;
}

// FindOrAddImpl<FName_const_&> @ 1488fa290

FActionKeyDetails * __thiscall
TMapBase<FName,UPlayerInput::FActionKeyDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FActionKeyDetails,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,UPlayerInput::FActionKeyDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FActionKeyDetails,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x40 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (FActionKeyDetails *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[7].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,UPlayerInput::FActionKeyDetails>,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FActionKeyDetails,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FActionKeyDetails *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x40 + 8);
}

// FindOrAddImpl<FName_const_&> @ 1488fa340

FAxisKeyDetails * __thiscall
TMapBase<FName,UPlayerInput::FAxisKeyDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FAxisKeyDetails,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,UPlayerInput::FAxisKeyDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FAxisKeyDetails,0>_>
           *this,uint param_1,FName *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x28;
        if (*(FName *)(lVar1 + (longlong)iVar2 * 0x28) == *param_2) {
          if (lVar3 != 0) goto LAB_1488fa3d2;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x20);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,UPlayerInput::FAxisKeyDetails>,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FAxisKeyDetails,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
LAB_1488fa3d2:
  return (FAxisKeyDetails *)(lVar3 + 8);
}

// Find @ 148943f50

TArray<UObject_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<UObject_*,TArray<UObject_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TArray<UObject_*,TSizedDefaultAllocator<32>_>,0>_>
::Find(TMapBase<UObject_*,TArray<UObject_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TArray<UObject_*,TSizedDefaultAllocator<32>_>,0>_>
       *this,UObject *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((UObject *)*plVar2 == param_1) {
          pTVar4 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)(plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)0x0;
}

// Find @ 148943ff0

TSharedPtr<FRTInfo,1> * __thiscall
TMapBase<ITableRow_const_*,TSharedPtr<FRTInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<FRTInfo,1>,0>_>
::Find(TMapBase<ITableRow_const_*,TSharedPtr<FRTInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<FRTInfo,1>,0>_>
       *this,ITableRow *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TSharedPtr<FRTInfo,1> *pTVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((ITableRow *)*plVar2 == param_1) {
          pTVar4 = (TSharedPtr<FRTInfo,1> *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TSharedPtr<FRTInfo,1> *)(plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TSharedPtr<FRTInfo,1> *)0x0;
}

// Find @ 148944090

FInputAxisProperties * __thiscall
TMapBase<FKey,FInputAxisProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FInputAxisProperties,0>_>
::Find(TMapBase<FKey,FInputAxisProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FInputAxisProperties,0>_>
       *this,FKey *param_1)

{
  FName FVar1;
  uint uVar2;
  FInputAxisProperties *pFVar3;
  ForElementType<FSetElementId> FVar4;
  FName *pFVar5;
  
  FVar1 = param_1->KeyName;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar2 = *(uint *)((longlong)FVar4 +
                     (ulonglong)((this->Pairs).HashSize - 1U & FVar1.Number + uVar2) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        pFVar5 = (FName *)((longlong)(int)uVar2 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar5 == param_1->KeyName) {
          pFVar3 = (FInputAxisProperties *)0x0;
          if (pFVar5 != (FName *)0x0) {
            pFVar3 = (FInputAxisProperties *)(pFVar5 + 3);
          }
          return pFVar3;
        }
        uVar2 = pFVar5[5].ComparisonIndex.Value;
      } while (uVar2 != 0xffffffff);
    }
  }
  return (FInputAxisProperties *)0x0;
}

// Find @ 148944140

TSharedRef<ITableRow,1> * __thiscall
TMapBase<TSharedPtr<FRTInfo,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FRTInfo,1>,TSharedRef<ITableRow,1>,0>_>
::Find(TMapBase<TSharedPtr<FRTInfo,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FRTInfo,1>,TSharedRef<ITableRow,1>,0>_>
       *this,TSharedPtr<FRTInfo_const_,1> *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<FRTInfo_const_,1> local_18;
  
  local_18.Object = param_1->Object;
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar3 = ((uint)((ulonglong)local_18.Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)local_18.Object >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  local_18.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  iVar2 = TSet<TTuple<TSharedPtr<FRTInfo,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FRTInfo,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TSharedPtr<FRTInfo_const_,1>_>
                    (&this->Pairs,uVar3 >> 0x10 ^ uVar3,&local_18);
  if (iVar2 == -1) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  }
  else {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar2 * 0x28;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
    if (lVar1 != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return (TSharedRef<ITableRow,1> *)(lVar1 + 0x10);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TSharedRef<ITableRow,1> *)0x0;
}

// Find @ 148944210

FAxisKeyDetails * __thiscall
TMapBase<FName,UPlayerInput::FAxisKeyDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FAxisKeyDetails,0>_>
::Find(TMapBase<FName,UPlayerInput::FAxisKeyDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FAxisKeyDetails,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  FAxisKeyDetails *pFVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar4 * 0x28;
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x28) == param_1) {
          pFVar5 = (FAxisKeyDetails *)0x0;
          if (lVar1 != 0) {
            pFVar5 = (FAxisKeyDetails *)(lVar1 + 8);
          }
          return pFVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x20);
      } while (iVar4 != -1);
    }
  }
  return (FAxisKeyDetails *)0x0;
}

// Find @ 1489442b0

FText * __thiscall
TMapBase<FName,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FText,0>_>::Find
          (TMapBase<FName,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FText,0>_>
           *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FText *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == param_1) {
          pFVar4 = (FText *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pFVar4 = (FText *)(pFVar2 + 1);
          }
          return pFVar4;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FText *)0x0;
}

// FindOrAddImpl<double_const_&> @ 1489ab630

int * __thiscall
TMapBase<double,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<double,int,0>_>::
FindOrAddImpl<double_const_&>
          (TMapBase<double,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<double,int,0>_>
           *this,uint param_1,double *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  double *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x18;
        if (*param_2 == *(double *)(lVar1 + (longlong)iVar2 * 0x18)) {
          if (lVar3 != 0) goto LAB_1489ab6c3;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<double,int>,TDefaultMapHashableKeyFuncs<double,int,0>,FDefaultSetAllocator>::
  EmplaceByHash<TKeyInitializer<double_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<double_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
LAB_1489ab6c3:
  return (int *)(lVar3 + 8);
}

// FindOrAddImpl<FUniqueNetIdWrapper_const_&> @ 1489ab6e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UVOIPTalker ** __thiscall
TMapBase<FUniqueNetIdWrapper,UVOIPTalker_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,UVOIPTalker_*,0>_>
::FindOrAddImpl<FUniqueNetIdWrapper_const_&>
          (TMapBase<FUniqueNetIdWrapper,UVOIPTalker_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,UVOIPTalker_*,0>_>
           *this,uint param_1,FUniqueNetIdWrapper *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FUniqueNetIdWrapper *local_res20;
  
  iVar1 = TSet<TTuple<FUniqueNetIdWrapper,UVOIPTalker_*>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,UVOIPTalker_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FUniqueNetIdWrapper>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x30 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (UVOIPTalker **)(lVar2 + 0x20);
  }
  local_res20 = param_2;
  TSet<TTuple<FUniqueNetIdWrapper,UVOIPTalker_*>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,UVOIPTalker_*,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FUniqueNetIdWrapper_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FUniqueNetIdWrapper_const_&> *)(ulonglong)param_1,(bool *)&local_res20
            );
  return (UVOIPTalker **)
         (*(longlong *)&(this->Pairs).Elements + 0x20 + (longlong)local_res8[0] * 0x30);
}

// FindOrAddImpl<FObjectKey> @ 1489ab780

TWeakObjectPtr<UObject_const_,FWeakObjectPtr> * __thiscall
TMapBase<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>_>
::FindOrAddImpl<FObjectKey>
          (TMapBase<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>_>
           *this,uint param_1,FObjectKey *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [2];
  FObjectKey *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if ((*(int *)(lVar2 + (longlong)iVar3 * 0x18) == param_2->ObjectIndex) &&
           (*(int *)(lVar1 + 4) == param_2->ObjectSerialNumber)) {
          if ((iVar3 != -1) && (lVar1 != 0)) {
            return (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)(lVar1 + 8);
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FObjectKey_&&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FObjectKey_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18 + 8);
}

// FindOrAddImpl<FString> @ 1489ab850

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<FString>
          (TMapBase<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FString *local_res20;
  
  iVar1 = TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,param_1,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x28, lVar2 == 0)) {
    local_res20 = param_2;
    TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FString_&&>_>
              (&this->Pairs,(uint)local_res8,(TKeyInitializer<FString_&&> *)(ulonglong)param_1,
               (bool *)&local_res20);
    lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
  }
  return (TArray<FString,TSizedDefaultAllocator<32>_> *)(lVar2 + 0x10);
}

// Find @ 1489e17f0

TWeakObjectPtr<UObject_const_,FWeakObjectPtr> * __thiscall
TMapBase<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>_>
::Find(TMapBase<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>_>
       *this,FObjectKey *param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  ForElementType<FSetElementId> FVar5;
  TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *pTVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  uVar2 = param_1->ObjectSerialNumber;
  uVar8 = param_1->ObjectIndex - uVar2 ^ uVar2 >> 0xd;
  uVar4 = (-0x61c88647 - uVar8) - uVar2 ^ uVar8 << 8;
  uVar7 = (uVar2 - uVar8) - uVar4 ^ uVar4 >> 0xd;
  uVar8 = (uVar8 - uVar7) - uVar4 ^ uVar7 >> 0xc;
  uVar4 = (uVar4 - uVar8) - uVar7 ^ uVar8 << 0x10;
  uVar7 = (uVar7 - uVar4) - uVar8 ^ uVar4 >> 5;
  uVar8 = (uVar8 - uVar7) - uVar4 ^ uVar7 >> 3;
  uVar4 = (uVar4 - uVar8) - uVar7 ^ uVar8 << 10;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar9 = *(int *)((longlong)FVar5 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & ((uVar7 - uVar4) - uVar8 ^ uVar4 >> 0xf)) * 4);
    if (iVar9 != -1) {
      lVar3 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar3 + (longlong)iVar9 * 0x18;
        if ((*(int *)(lVar3 + (longlong)iVar9 * 0x18) == param_1->ObjectIndex) &&
           (*(uint *)(lVar1 + 4) == uVar2)) {
          if (iVar9 == -1) {
            return (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)0x0;
          }
          pTVar6 = (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)0x0;
          if (lVar1 != 0) {
            pTVar6 = (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)(lVar1 + 8);
          }
          return pTVar6;
        }
        iVar9 = *(int *)(lVar1 + 0x10);
      } while (iVar9 != -1);
    }
  }
  return (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)0x0;
}

// Find @ 1489e1900

TWeakObjectPtr<UWorld_const_,FWeakObjectPtr> * __thiscall
TMapBase<FObjectKey,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,0>_>
::Find(TMapBase<FObjectKey,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,0>_>
       *this,FObjectKey *param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  ForElementType<FSetElementId> FVar5;
  TWeakObjectPtr<UWorld_const_,FWeakObjectPtr> *pTVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  uVar2 = param_1->ObjectSerialNumber;
  uVar8 = param_1->ObjectIndex - uVar2 ^ uVar2 >> 0xd;
  uVar4 = (-0x61c88647 - uVar8) - uVar2 ^ uVar8 << 8;
  uVar7 = (uVar2 - uVar8) - uVar4 ^ uVar4 >> 0xd;
  uVar8 = (uVar8 - uVar7) - uVar4 ^ uVar7 >> 0xc;
  uVar4 = (uVar4 - uVar8) - uVar7 ^ uVar8 << 0x10;
  uVar7 = (uVar7 - uVar4) - uVar8 ^ uVar4 >> 5;
  uVar8 = (uVar8 - uVar7) - uVar4 ^ uVar7 >> 3;
  uVar4 = (uVar4 - uVar8) - uVar7 ^ uVar8 << 10;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar9 = *(int *)((longlong)FVar5 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & ((uVar7 - uVar4) - uVar8 ^ uVar4 >> 0xf)) * 4);
    if (iVar9 != -1) {
      lVar3 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar3 + (longlong)iVar9 * 0x18;
        if ((*(int *)(lVar3 + (longlong)iVar9 * 0x18) == param_1->ObjectIndex) &&
           (*(uint *)(lVar1 + 4) == uVar2)) {
          if (iVar9 == -1) {
            return (TWeakObjectPtr<UWorld_const_,FWeakObjectPtr> *)0x0;
          }
          pTVar6 = (TWeakObjectPtr<UWorld_const_,FWeakObjectPtr> *)0x0;
          if (lVar1 != 0) {
            pTVar6 = (TWeakObjectPtr<UWorld_const_,FWeakObjectPtr> *)(lVar1 + 8);
          }
          return pTVar6;
        }
        iVar9 = *(int *)(lVar1 + 0x10);
      } while (iVar9 != -1);
    }
  }
  return (TWeakObjectPtr<UWorld_const_,FWeakObjectPtr> *)0x0;
}

// Find @ 1489e1a10

FVisualLogEntry * __thiscall
TMapBase<FObjectKey,FVisualLogEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,FVisualLogEntry,0>_>
::Find(TMapBase<FObjectKey,FVisualLogEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,FVisualLogEntry,0>_>
       *this,FObjectKey *param_1)

{
  int iVar1;
  FVisualLogEntry *pFVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = param_1->ObjectSerialNumber;
  uVar6 = param_1->ObjectIndex - uVar4 ^ uVar4 >> 0xd;
  uVar5 = (-0x61c88647 - uVar6) - uVar4 ^ uVar6 << 8;
  uVar4 = (uVar4 - uVar5) - uVar6 ^ uVar5 >> 0xd;
  uVar6 = (uVar6 - uVar4) - uVar5 ^ uVar4 >> 0xc;
  uVar5 = (uVar5 - uVar6) - uVar4 ^ uVar6 << 0x10;
  uVar4 = (uVar4 - uVar5) - uVar6 ^ uVar5 >> 5;
  uVar6 = (uVar6 - uVar4) - uVar5 ^ uVar4 >> 3;
  uVar5 = (uVar5 - uVar6) - uVar4 ^ uVar6 << 10;
  iVar1 = TSet<TTuple<FObjectKey,FVisualLogEntry>,TDefaultMapHashableKeyFuncs<FObjectKey,FVisualLogEntry,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FObjectKey>(&this->Pairs,(uVar4 - uVar5) - uVar6 ^ uVar5 >> 0xf,param_1)
  ;
  if (iVar1 != -1) {
    lVar3 = (longlong)iVar1 * 0xa0 + *(longlong *)&(this->Pairs).Elements;
    pFVar2 = (FVisualLogEntry *)0x0;
    if (lVar3 != 0) {
      pFVar2 = (FVisualLogEntry *)(lVar3 + 8);
    }
    return pFVar2;
  }
  return (FVisualLogEntry *)0x0;
}

// Find @ 1489e1ae0

TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
::Find(TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
       *this,FObjectKey *param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  ForElementType<FSetElementId> FVar4;
  TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  uVar1 = param_1->ObjectSerialNumber;
  uVar7 = param_1->ObjectIndex - uVar1 ^ uVar1 >> 0xd;
  uVar3 = (-0x61c88647 - uVar7) - uVar1 ^ uVar7 << 8;
  uVar6 = (uVar1 - uVar7) - uVar3 ^ uVar3 >> 0xd;
  uVar7 = (uVar7 - uVar6) - uVar3 ^ uVar6 >> 0xc;
  uVar3 = (uVar3 - uVar7) - uVar6 ^ uVar7 << 0x10;
  uVar6 = (uVar6 - uVar3) - uVar7 ^ uVar3 >> 5;
  uVar7 = (uVar7 - uVar6) - uVar3 ^ uVar6 >> 3;
  uVar3 = (uVar3 - uVar7) - uVar6 ^ uVar7 << 10;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar8 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & ((uVar6 - uVar3) - uVar7 ^ uVar3 >> 0xf)) * 4);
    if (iVar8 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar8 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((*piVar2 == param_1->ObjectIndex) && (piVar2[1] == uVar1)) {
          if (iVar8 == -1) {
            return (TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                    *)0x0;
          }
          pTVar5 = (TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                    *)0x0;
          if (piVar2 != (int *)0x0) {
            pTVar5 = (TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                      *)(piVar2 + 2);
          }
          return pTVar5;
        }
        iVar8 = piVar2[6];
      } while (iVar8 != -1);
    }
  }
  return (TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)0x0;
}

// Find @ 1489e1bf0

FModeRecord * __thiscall
TMapBase<FName,FVirtualShadowMapVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVirtualShadowMapVisualizationData::FModeRecord,0>_>
::Find(TMapBase<FName,FVirtualShadowMapVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVirtualShadowMapVisualizationData::FModeRecord,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FModeRecord *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0x58 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pFVar2 = (FModeRecord *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pFVar2 = (FModeRecord *)(pFVar4 + 1);
          }
          return pFVar2;
        }
        uVar1 = pFVar4[10].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FModeRecord *)0x0;
}

// FindChecked @ 1489e1d50

FObjectNames * __thiscall
TMapBase<FObjectKey,FVisualLogger::FObjectNames,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,FVisualLogger::FObjectNames,0>_>
::FindChecked(TMapBase<FObjectKey,FVisualLogger::FObjectNames,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,FVisualLogger::FObjectNames,0>_>
              *this,FObjectKey *param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FObjectNames *pFVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  uVar2 = param_1->ObjectSerialNumber;
  uVar10 = param_1->ObjectIndex - uVar2 ^ uVar2 >> 0xd;
  uVar7 = (-0x61c88647 - uVar10) - uVar2 ^ uVar10 << 8;
  uVar9 = (uVar2 - uVar10) - uVar7 ^ uVar7 >> 0xd;
  uVar10 = (uVar10 - uVar9) - uVar7 ^ uVar9 >> 0xc;
  uVar7 = (uVar7 - uVar10) - uVar9 ^ uVar10 << 0x10;
  uVar9 = (uVar9 - uVar7) - uVar10 ^ uVar7 >> 5;
  uVar10 = (uVar10 - uVar9) - uVar7 ^ uVar9 >> 3;
  uVar7 = (uVar7 - uVar10) - uVar9 ^ uVar10 << 10;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar8 = (this->Pairs).Hash.SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar11 = *(int *)((longlong)FVar8 +
                     (ulonglong)
                     ((this->Pairs).HashSize - 1U & ((uVar9 - uVar7) - uVar10 ^ uVar7 >> 0xf)) * 4);
    if (iVar11 != -1) {
      lVar3 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar3 + (longlong)iVar11 * 0x28;
        if ((*(int *)(lVar3 + (longlong)iVar11 * 0x28) == param_1->ObjectIndex) &&
           (*(uint *)(lVar1 + 4) == uVar2)) {
          if ((iVar11 != -1) && (lVar1 != 0)) {
            return (FObjectNames *)(lVar1 + 8);
          }
          break;
        }
        iVar11 = *(int *)(lVar1 + 0x20);
      } while (iVar11 != -1);
    }
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar5) {
    return (FObjectNames *)&DAT_00000008;
  }
  pcVar4 = (code *)swi(3);
  pFVar6 = (FObjectNames *)(*pcVar4)();
  return pFVar6;
}

// FindOrAddImpl<int_const_&> @ 148a33710

FFastArraySerializerGuidReferences * __thiscall
TMapBase<int,FFastArraySerializerGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int,FFastArraySerializerGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>_>
           *this,uint param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  int *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 200 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == *param_2) {
          if (piVar2 != (int *)0x0) {
            return (FFastArraySerializerGuidReferences *)(piVar2 + 2);
          }
          break;
        }
        iVar1 = piVar2[0x30];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int,FFastArraySerializerGuidReferences>,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FFastArraySerializerGuidReferences *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 200 + 8);
}

// Find @ 148a525e0

FActorInstanceGuid * __thiscall
TMapBase<UObjectBase_const_*,FActorInstanceGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FActorInstanceGuid,0>_>
::Find(TMapBase<UObjectBase_const_*,FActorInstanceGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FActorInstanceGuid,0>_>
       *this,UObjectBase *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  FActorInstanceGuid *pFVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if ((UObjectBase *)*plVar2 == param_1) {
          pFVar4 = (FActorInstanceGuid *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pFVar4 = (FActorInstanceGuid *)(plVar2 + 1);
          }
          return pFVar4;
        }
        iVar1 = (int)plVar2[5];
      } while (iVar1 != -1);
    }
  }
  return (FActorInstanceGuid *)0x0;
}

// Find @ 148a52690

FLevelInstanceGuid * __thiscall
TMapBase<UObjectBase_const_*,FLevelInstanceGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLevelInstanceGuid,0>_>
::Find(TMapBase<UObjectBase_const_*,FLevelInstanceGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLevelInstanceGuid,0>_>
       *this,UObjectBase *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  FLevelInstanceGuid *pFVar5;
  uint uVar6;
  
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x48;
        if (*(UObjectBase **)(lVar2 + (longlong)iVar3 * 0x48) == param_1) {
          pFVar5 = (FLevelInstanceGuid *)0x0;
          if (lVar1 != 0) {
            pFVar5 = (FLevelInstanceGuid *)(lVar1 + 8);
          }
          return pFVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x40);
      } while (iVar3 != -1);
    }
  }
  return (FLevelInstanceGuid *)0x0;
}

// Find @ 148a52740

TObjectPtr<URuntimeHashExternalStreamingObjectBase> * __thiscall
TMapBase<TObjectPtr<UExternalDataLayerAsset_const_>,TObjectPtr<URuntimeHashExternalStreamingObjectBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UExternalDataLayerAsset_const_>,TObjectPtr<URuntimeHashExternalStreamingObjectBase>,0>_>
::Find(TMapBase<TObjectPtr<UExternalDataLayerAsset_const_>,TObjectPtr<URuntimeHashExternalStreamingObjectBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UExternalDataLayerAsset_const_>,TObjectPtr<URuntimeHashExternalStreamingObjectBase>,0>_>
       *this,TObjectPtr<UExternalDataLayerAsset_const_> param_1)

{
  longlong lVar1;
  TObjectPtr<UExternalDataLayerAsset_const_>_u_0 TVar2;
  int iVar3;
  TObjectPtr<URuntimeHashExternalStreamingObjectBase> *pTVar4;
  uint uVar5;
  TObjectPtr<UExternalDataLayerAsset_const_>_u_0 local_res8;
  
                    /* WARNING: Load size is inaccurate */
  TVar2.DebugPtr = *param_1.field0_0x0;
  local_res8 = TVar2;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (TVar2.DebugPtr != (UExternalDataLayerAsset *)0x0) {
      UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar2.DebugPtr != (UExternalDataLayerAsset *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
    }
  }
  uVar5 = ((uint)((ulonglong)TVar2.DebugPtr >> 0x14) & 0xffff ^
          (uint)((ulonglong)TVar2.DebugPtr >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  iVar3 = TSet<TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,TObjectPtr<URuntimeHashExternalStreamingObjectBase>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UExternalDataLayerAsset_const_>,TObjectPtr<URuntimeHashExternalStreamingObjectBase>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectPtr<UExternalDataLayerAsset_const_>_>
                    (&this->Pairs,uVar5 >> 0x10 ^ uVar5,
                     (TObjectPtr<UExternalDataLayerAsset_const_> *)&local_res8.ObjectPtr);
  if (iVar3 != -1) {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar3 * 0x18;
    pTVar4 = (TObjectPtr<URuntimeHashExternalStreamingObjectBase> *)0x0;
    if (lVar1 != 0) {
      pTVar4 = (TObjectPtr<URuntimeHashExternalStreamingObjectBase> *)(lVar1 + 8);
    }
    return pTVar4;
  }
  return (TObjectPtr<URuntimeHashExternalStreamingObjectBase> *)0x0;
}

// Find @ 148a52800

UDataLayerInstance ** __thiscall
TMapBase<FName,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UDataLayerInstance_const_*,0>_>
::Find(TMapBase<FName,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UDataLayerInstance_const_*,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  UDataLayerInstance **ppUVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar4 * 0x18;
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x18) == param_1) {
          ppUVar5 = (UDataLayerInstance **)0x0;
          if (lVar1 != 0) {
            ppUVar5 = (UDataLayerInstance **)(lVar1 + 8);
          }
          return ppUVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return (UDataLayerInstance **)0x0;
}

// Find @ 148a528a0

TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr> * __thiscall
TMapBase<FName,TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr>,0>_>
::Find(TMapBase<FName,TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr>,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr> *pTVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar4 * 0x18;
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x18) == param_1) {
          pTVar5 = (TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr> *)0x0;
          if (lVar1 != 0) {
            pTVar5 = (TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr> *)(lVar1 + 8);
          }
          return pTVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return (TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr> *)0x0;
}

// Find @ 148a52940

UDataLayerInstance ** __thiscall
TMapBase<FString,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UDataLayerInstance_const_*,0>_>
::Find(TMapBase<FString,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UDataLayerInstance_const_*,0>_>
       *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  UDataLayerInstance **ppUVar6;
  
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
  iVar2 = TSet<TTuple<FString,UDataLayerInstance_const_*>,TDefaultMapHashableKeyFuncs<FString,UDataLayerInstance_const_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x20 + *(longlong *)&(this->Pairs).Elements;
    ppUVar6 = (UDataLayerInstance **)0x0;
    if (lVar4 != 0) {
      ppUVar6 = (UDataLayerInstance **)(lVar4 + 0x10);
    }
    return ppUVar6;
  }
  return (UDataLayerInstance **)0x0;
}

// FindChecked @ 148a52a70

FRegisteredExternalDataLayers * __thiscall
TMapBase<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers,0>_>
::FindChecked(TMapBase<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers,0>_>
              *this,TObjectPtr<UExternalDataLayerAsset_const_> param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>
  *pTVar3;
  FRegisteredExternalDataLayers *pFVar4;
  UObject *local_res8 [4];
  
  local_res8[0] = *(UObject **)param_1.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8[0]);
  }
  pTVar3 = TSet<TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>,TDefaultMapHashableKeyFuncs<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers,0>,FDefaultSetAllocator>
           ::Find(&this->Pairs,(TObjectPtr<UExternalDataLayerAsset_const_>)local_res8);
  if (pTVar3 == (TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>
                 *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRegisteredExternalDataLayers *)(*pcVar1)();
      return pFVar4;
    }
    return (FRegisteredExternalDataLayers *)&DAT_00000008;
  }
  return (FRegisteredExternalDataLayers *)&pTVar3->field_0x8;
}

// Remove @ 148a64450

int __thiscall
TMapBase<int,FFastArraySerializerGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>_>
::Remove(TMapBase<int,FFastArraySerializerGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>_>
         *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 +
                    ((longlong)(this->Pairs).HashSize - 1U & (longlong)param_1) * 4);
    iVar4 = 0;
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      while (*(int *)((longlong)iVar2 * 200 + lVar1) != param_1) {
        iVar2 = *(int *)((longlong)iVar2 * 200 + 0xc0 + lVar1);
        if (iVar2 == -1) {
          return 0;
        }
      }
      TSet<TTuple<int,FFastArraySerializerGuidReferences>,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>,FDefaultSetAllocator>
      ::RemoveByIndex(&this->Pairs,iVar2);
      iVar4 = 1;
    }
  }
  return iVar4;
}

// FindOrAddImpl<IWorldPartitionHLODObject_*_const_&> @ 148a79790

FWorldPartitionHLODWarmupState * __thiscall
TMapBase<IWorldPartitionHLODObject_*,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODWarmupState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IWorldPartitionHLODObject_*,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODWarmupState,0>_>
::FindOrAddImpl<IWorldPartitionHLODObject_*_const_&>
          (TMapBase<IWorldPartitionHLODObject_*,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODWarmupState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IWorldPartitionHLODObject_*,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODWarmupState,0>_>
           *this,uint param_1,IWorldPartitionHLODObject **param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  IWorldPartitionHLODObject **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x50 + *(longlong *)&(this->Pairs).Elements);
        if ((IWorldPartitionHLODObject *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (FWorldPartitionHLODWarmupState *)(plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[9];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<IWorldPartitionHLODObject_*,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODWarmupState>,TDefaultMapHashableKeyFuncs<IWorldPartitionHLODObject_*,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODWarmupState,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<IWorldPartitionHLODObject_*_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<IWorldPartitionHLODObject_*_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FWorldPartitionHLODWarmupState *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x50);
}

// FindOrAddImpl<FGuid_const_&> @ 148a79840

TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>
* __thiscall
TMapBase<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>,0>_>
::FindOrAddImpl<FGuid_const_&>
          (TMapBase<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>,0>_>
           *this,uint param_1,FGuid *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FGuid *local_res20;
  
  iVar1 = TSet<TTuple<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x68 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>
            *)(lVar2 + 0x10);
  }
  local_res20 = param_2;
  TSet<TTuple<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FGuid_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FGuid_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>
          *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x68 + 0x10);
}

// FindOrAddImpl<FName_const_&> @ 148a798d0

TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_> *)
                   (pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// GenerateKeyArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> @ 148a79a60

void __thiscall
TMapBase<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>,0>_>
::GenerateKeyArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          (TMapBase<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>,0>_>
           *this,TArray<FName,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  ForElementType<FName> FVar5;
  code *pcVar6;
  bool bVar7;
  ForElementType<FName> FVar8;
  longlong lVar9;
  int iVar10;
  ForElementType<FName> FVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar12 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  piVar1 = &param_1->ArrayMax;
  iVar10 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar12) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
              (8,4,uVar12,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar12 = 1;
  iVar13 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)TStack_40.Array;
    }
    uVar4 = *puVar14;
    while (uVar4 == 0) {
      lVar9 = (longlong)iVar10;
      iVar13 = iVar13 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_148a79b42;
      uVar4 = puVar14[lVar9 + 1];
    }
    uVar12 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar12 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = iVar13 + -1 + (int)lVar9;
    if (iVar3 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar3;
    }
  }
LAB_148a79b42:
  TStack_40._padding_ = CONCAT44(uVar12,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar13;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      FVar5 = (param_1->AllocatorInstance).SecondaryData;
      FVar11 = (ForElementType<FName>)
               ((longlong)TStack_40.CurrentBitIndex * 0x20 + *(longlong *)&(this->Pairs).Elements);
      FVar8 = (ForElementType<FName>)param_1;
      if (FVar5 != (ForElementType<FName>)0x0) {
        FVar8 = FVar5;
      }
      if ((ulonglong)FVar8 <= (ulonglong)FVar11) {
        FVar8 = (ForElementType<FName>)param_1;
        if (FVar5 != (ForElementType<FName>)0x0) {
          FVar8 = FVar5;
        }
        if (((ulonglong)FVar11 < (ulonglong)((longlong)FVar8 + (longlong)*piVar1 * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar10 = param_1->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                           (0x408,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar10 + 1;
      FVar5 = (param_1->AllocatorInstance).SecondaryData;
      FVar8 = (ForElementType<FName>)param_1;
      if (FVar5 != (ForElementType<FName>)0x0) {
        FVar8 = FVar5;
      }
      *(undefined8 *)((longlong)FVar8 + (longlong)iVar10 * 8) = *(undefined8 *)FVar11;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// Find @ 148a8ff60

FGuid * __thiscall
TMapBase<FGuid,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>_>::Find
          (TMapBase<FGuid,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>_>
           *this,FGuid *param_1)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  ulong64 uVar4;
  FGuid *pFVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar4 = CityHash64((char *)param_1,0x10);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar3 = *(uint *)((longlong)FVar6 +
                     ((ulonglong)((this->Pairs).HashSize - 1) & uVar4 & 0xffffffff) * 4);
    if (uVar3 != 0xffffffff) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        puVar1 = (uint *)(lVar2 + (longlong)(int)uVar3 * 0x28);
        if (((param_1->D == *(uint *)(lVar2 + 0xc + (longlong)(int)uVar3 * 0x28) &&
             param_1->C == puVar1[2]) && param_1->B == puVar1[1]) && param_1->A == *puVar1) {
          pFVar5 = (FGuid *)0x0;
          if (puVar1 != (uint *)0x0) {
            pFVar5 = (FGuid *)(puVar1 + 4);
          }
          return pFVar5;
        }
        uVar3 = puVar1[8];
      } while (uVar3 != 0xffffffff);
    }
  }
  return (FGuid *)0x0;
}

// Find @ 148a90020

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TObjectPtr<UWorldPartition> * __thiscall
TMapBase<FGuid,TObjectPtr<UWorldPartition>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<UWorldPartition>,0>_>
::Find(TMapBase<FGuid,TObjectPtr<UWorldPartition>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<UWorldPartition>,0>_>
       *this,FGuid *param_1)

{
  int iVar1;
  ulong64 uVar2;
  TObjectPtr<UWorldPartition> *pTVar3;
  longlong lVar4;
  
  uVar2 = CityHash64((char *)param_1,0x10);
  iVar1 = TSet<TTuple<FGuid,TObjectPtr<UWorldPartition>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<UWorldPartition>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,(uint)uVar2,param_1);
  if (iVar1 != -1) {
    lVar4 = (longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements;
    pTVar3 = (TObjectPtr<UWorldPartition> *)0x0;
    if (lVar4 != 0) {
      pTVar3 = (TObjectPtr<UWorldPartition> *)(lVar4 + 0x10);
    }
    return pTVar3;
  }
  return (TObjectPtr<UWorldPartition> *)0x0;
}

// Find @ 148a90090

FCellData * __thiscall
TMapBase<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData,0>_>
::Find(TMapBase<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData,0>_>
       *this,FGuid *param_1)

{
  int iVar1;
  ulong64 uVar2;
  FCellData *pFVar3;
  longlong lVar4;
  
  uVar2 = CityHash64((char *)param_1,0x10);
  iVar1 = TSet<TTuple<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData>,TDefaultMapHashableKeyFuncs<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,(uint)uVar2,param_1);
  if (iVar1 != -1) {
    lVar4 = (longlong)iVar1 * 0x30 + *(longlong *)&(this->Pairs).Elements;
    pFVar3 = (FCellData *)0x0;
    if (lVar4 != 0) {
      pFVar3 = (FCellData *)(lVar4 + 0x10);
    }
    return pFVar3;
  }
  return (FCellData *)0x0;
}

// Find @ 148a90100

TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>
* __thiscall
TMapBase<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>,0>_>
::Find(TMapBase<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>,0>_>
       *this,FGuid *param_1)

{
  int iVar1;
  ulong64 uVar2;
  TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>
  *pTVar3;
  longlong lVar4;
  
  uVar2 = CityHash64((char *)param_1,0x10);
  iVar1 = TSet<TTuple<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,(uint)uVar2,param_1);
  if (iVar1 != -1) {
    lVar4 = (longlong)iVar1 * 0x68 + *(longlong *)&(this->Pairs).Elements;
    pTVar3 = (TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>
              *)0x0;
    if (lVar4 != 0) {
      pTVar3 = (TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>
                *)(lVar4 + 0x10);
    }
    return pTVar3;
  }
  return (TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>
          *)0x0;
}

// Find @ 148a90160

TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>,0>_>
::Find(TMapBase<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_> *pTVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == param_1) {
          pTVar4 = (TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_> *)0x0
          ;
          if (pFVar2 != (FName *)0x0) {
            pTVar4 = (TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_> *)
                     (pFVar2 + 1);
          }
          return pTVar4;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_> *)0x0;
}

// EmplaceByHash<UE::Math::TIntVector3<__int64>_const_&> @ 148aadb40

TArray<_public:_void___cdecl_FSpatialHashStreamingGrid::GetCells(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,bool,FWorldPartitionStreamingContext_const_&)const_::_2_::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>
* __thiscall
TMapBase<UE::Math::TIntVector3<__int64>,TArray<`FSpatialHashStreamingGrid::GetCells'::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<__int64>,TArray<`FSpatialHashStreamingGrid::GetCells'::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,0>_>
::EmplaceByHash<UE::Math::TIntVector3<__int64>_const_&>
          (void *this,uint param_1,TIntVector3<__int64> *param_2)

{
  int iVar1;
  int iVar2;
  long64 lVar3;
  bool bVar4;
  int iVar5;
  TSparseSetElement<TTuple<UE::Math::TIntVector3<__int64>,TArray<_public:_void___cdecl_FSpatialHashStreamingGrid::GetCells(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,bool,FWorldPartitionStreamingContext_const_&)const_::_2_::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>_>_>
  *pTVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar5 = *(int *)((longlong)this + 0x30);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    iVar2 = *(int *)(*(longlong *)this + 4 + (longlong)iVar5 * 0x30);
    *(int *)((longlong)this + 0x30) = iVar2;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*(longlong *)this + (longlong)iVar2 * 0x30) = 0xffffffff;
    }
  }
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_18,iVar5);
  pTVar6 = (TSparseSetElement<TTuple<UE::Math::TIntVector3<__int64>,TArray<_public:_void___cdecl_FSpatialHashStreamingGrid::GetCells(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,bool,FWorldPartitionStreamingContext_const_&)const_::_2_::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>_>_>
            *)0x0;
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<UE::Math::TIntVector3<__int64>,TArray<_public:_void___cdecl_FSpatialHashStreamingGrid::GetCells(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,bool,FWorldPartitionStreamingContext_const_&)const_::_2_::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>_>_>
       *)0x0) {
    lVar3 = (param_2->field0_0x0)._s_0.Y;
    *(long64 *)local_18.Pointer = (param_2->field0_0x0)._s_0.X;
    *(long64 *)((longlong)local_18.Pointer + 8) = lVar3;
    *(long64 *)((longlong)local_18.Pointer + 0x10) = (param_2->field0_0x0)._s_0.Z;
    *(undefined8 *)((longlong)local_18.Pointer + 0x18) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x20) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x28) = 0xffffffff;
    pTVar6 = local_18.Pointer;
  }
  local_res8[0] = local_18.Index;
  bVar4 = TSet<TTuple<UE::Math::TIntVector3<__int64>,TArray<`FSpatialHashStreamingGrid::GetCells'::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<__int64>,TArray<`FSpatialHashStreamingGrid::GetCells'::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(this,param_1,pTVar6,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<UE::Math::TIntVector3<__int64>,TArray<`FSpatialHashStreamingGrid::GetCells'::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<__int64>,TArray<`FSpatialHashStreamingGrid::GetCells'::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(this,param_1,pTVar6,local_res8[0]);
  }
  return (TArray<_public:_void___cdecl_FSpatialHashStreamingGrid::GetCells(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,bool,FWorldPartitionStreamingContext_const_&)const_::_2_::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>
          *)(*(longlong *)this + 0x18 + lVar7 * 0x30);
}

// Find @ 148ac9950

double * __thiscall
TMapBase<UWorldPartitionRuntimeCell_const_*,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorldPartitionRuntimeCell_const_*,double,0>_>
::Find(TMapBase<UWorldPartitionRuntimeCell_const_*,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorldPartitionRuntimeCell_const_*,double,0>_>
       *this,UWorldPartitionRuntimeCell *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  double *pdVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(UWorldPartitionRuntimeCell **)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          pdVar4 = (double *)0x0;
          if (lVar1 != 0) {
            pdVar4 = (double *)(lVar1 + 8);
          }
          return pdVar4;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (double *)0x0;
}

// Find @ 148ac99f0

FSpatialHashStreamingGrid ** __thiscall
TMapBase<FName,FSpatialHashStreamingGrid_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSpatialHashStreamingGrid_const_*,0>_>
::Find(TMapBase<FName,FSpatialHashStreamingGrid_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSpatialHashStreamingGrid_const_*,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  FSpatialHashStreamingGrid **ppFVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar4 * 0x18;
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x18) == param_1) {
          ppFVar5 = (FSpatialHashStreamingGrid **)0x0;
          if (lVar1 != 0) {
            ppFVar5 = (FSpatialHashStreamingGrid **)(lVar1 + 8);
          }
          return ppFVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return (FSpatialHashStreamingGrid **)0x0;
}

// Find @ 148ac9a90

TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr> * __thiscall
TMapBase<FName,TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>,0>_>
::Find(TMapBase<FName,TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr> *pTVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar4 * 0x18;
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x18) == param_1) {
          pTVar5 = (TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr> *)0x0;
          if (lVar1 != 0) {
            pTVar5 = (TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr> *)
                     (lVar1 + 8);
          }
          return pTVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return (TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr> *)0x0;
}

// Find @ 148ac9b30

FWorldPartitionRuntimeContainerInstance * __thiscall
TMapBase<FName,FWorldPartitionRuntimeContainerInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FWorldPartitionRuntimeContainerInstance,0>_>
::Find(TMapBase<FName,FWorldPartitionRuntimeContainerInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FWorldPartitionRuntimeContainerInstance,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  FWorldPartitionRuntimeContainerInstance *pFVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar4 * 0x28;
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x28) == param_1) {
          pFVar5 = (FWorldPartitionRuntimeContainerInstance *)0x0;
          if (lVar1 != 0) {
            pFVar5 = (FWorldPartitionRuntimeContainerInstance *)(lVar1 + 8);
          }
          return pFVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x20);
      } while (iVar4 != -1);
    }
  }
  return (FWorldPartitionRuntimeContainerInstance *)0x0;
}

// FindChecked @ 148ac9f40

FColor * __thiscall
TMapBase<FName,FColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FColor,0>_>::
FindChecked(TMapBase<FName,FColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FColor,0>_>
            *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FColor *pFVar7;
  ForElementType<FSetElementId> FVar8;
  
  uVar5 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar8 = (this->Pairs).Hash.SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar6 = *(int *)((longlong)FVar8 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar5) * 4);
    if (iVar6 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar6 * 0x14;
        if (*(FName *)(lVar2 + (longlong)iVar6 * 0x14) == param_1) {
          if (lVar1 != 0) {
            return (FColor *)(lVar1 + 8);
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0xc);
      } while (iVar6 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (FColor *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pFVar7 = (FColor *)(*pcVar3)();
  return pFVar7;
}

// FindOrAddImpl<FName_const_&,FStreamingSourceVelocity> @ 148ae6de0

FStreamingSourceVelocity * __thiscall
TMapBase<FName,FStreamingSourceVelocity,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStreamingSourceVelocity,0>_>
::FindOrAddImpl<FName_const_&,FStreamingSourceVelocity>
          (TMapBase<FName,FStreamingSourceVelocity,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStreamingSourceVelocity,0>_>
           *this,uint param_1,FName *param_2,FStreamingSourceVelocity *param_3)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [2];
  FName *local_18;
  FStreamingSourceVelocity *local_10;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x58 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (FStreamingSourceVelocity *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[10].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_18 = param_2;
  local_10 = param_3;
  TSet<TTuple<FName,FStreamingSourceVelocity>,TDefaultMapHashableKeyFuncs<FName,FStreamingSourceVelocity,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TPairInitializer<FName_const_&,FStreamingSourceVelocity_&&>_>
            (&this->Pairs,(uint)local_res8,
             (TPairInitializer<FName_const_&,FStreamingSourceVelocity_&&> *)(ulonglong)param_1,
             (bool *)&local_18);
  return (FStreamingSourceVelocity *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x58 + 8);
}

// FindOrAddImpl<FSoftObjectPath> @ 148ae6ea0

TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>
* __thiscall
TMapBase<FSoftObjectPath,TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>,0>_>
::FindOrAddImpl<FSoftObjectPath>
          (TMapBase<FSoftObjectPath,TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>,0>_>
           *this,uint param_1,FSoftObjectPath *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FSoftObjectPath *local_res20;
  
  iVar1 = TSet<TTuple<FSoftObjectPath,TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FSoftObjectPath>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x78 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>
            *)(lVar2 + 0x20);
  }
  local_res20 = param_2;
  TSet<TTuple<FSoftObjectPath,TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FSoftObjectPath_&&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FSoftObjectPath_&&> *)(ulonglong)param_1
             ,(bool *)&local_res20);
  return (TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x78 + 0x20);
}

// Find @ 148af0010

TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>
* __thiscall
TMapBase<FSoftObjectPath,TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>,0>_>
::Find(TMapBase<FSoftObjectPath,TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>,0>_>
       *this,FSoftObjectPath *param_1)

{
  uint uVar1;
  int iVar2;
  TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTVar3;
  longlong lVar4;
  
  uVar1 = ::GetTypeHash(param_1);
  iVar2 = TSet<TTuple<FSoftObjectPath,TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FSoftObjectPath>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x78 + *(longlong *)&(this->Pairs).Elements;
    pTVar3 = (TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              *)0x0;
    if (lVar4 != 0) {
      pTVar3 = (TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                *)(lVar4 + 0x20);
    }
    return pTVar3;
  }
  return (TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          *)0x0;
}

// EmplaceByHash<UObject_*_const_&> @ 148b0b060

FHierarchyNode * __thiscall
TMapBase<UObject_*,FHierarchyNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FHierarchyNode,0>_>
::EmplaceByHash<UObject_*_const_&>
          (TMapBase<UObject_*,FHierarchyNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FHierarchyNode,0>_>
           *this,uint param_1,UObject **param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  TKeyInitializer<UObject_*_const_&> local_res8;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  local_res8.Key = param_2;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xd8,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0xd8 + 4 + lVar3);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0xd8 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<216,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<216,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer != (TSparseSetElement<TTuple<UObject_*,FHierarchyNode>_> *)0x0) {
    TKeyInitializer<UObject_*_const_&>::
    operator<UObject_*,FHierarchyNode>_TTuple<UObject_*,FHierarchyNode>
              (&local_res8,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0xd0) = 0xffffffff;
  }
  local_res8.Key._0_4_ = local_18.Index;
  bVar4 = TSet<TTuple<UObject_*,FHierarchyNode>,TDefaultMapHashableKeyFuncs<UObject_*,FHierarchyNode,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,(int *)&local_res8,(bool *)0x0)
  ;
  if (!bVar4) {
    TSet<TTuple<UObject_*,FHierarchyNode>,TDefaultMapHashableKeyFuncs<UObject_*,FHierarchyNode,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,(int)local_res8.Key);
  }
  return (FHierarchyNode *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)(int)local_res8.Key * 0xd8 + 8);
}

// EmplaceByHash<UObject_*> @ 148b0b190

FHierarchyNode * __thiscall
TMapBase<UObject_*,FHierarchyNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FHierarchyNode,0>_>
::EmplaceByHash<UObject_*>
          (TMapBase<UObject_*,FHierarchyNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FHierarchyNode,0>_>
           *this,uint param_1,UObject **param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  TKeyInitializer<UObject_*_&&> local_res8;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  local_res8.Key = param_2;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xd8,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0xd8 + 4 + lVar3);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0xd8 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<216,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<216,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer != (TSparseSetElement<TTuple<UObject_*,FHierarchyNode>_> *)0x0) {
    TKeyInitializer<UObject_*_&&>::
    operator<UObject_*,FHierarchyNode>_TTuple<UObject_*,FHierarchyNode>
              (&local_res8,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0xd0) = 0xffffffff;
  }
  local_res8.Key._0_4_ = local_18.Index;
  bVar4 = TSet<TTuple<UObject_*,FHierarchyNode>,TDefaultMapHashableKeyFuncs<UObject_*,FHierarchyNode,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,(int *)&local_res8,(bool *)0x0)
  ;
  if (!bVar4) {
    TSet<TTuple<UObject_*,FHierarchyNode>,TDefaultMapHashableKeyFuncs<UObject_*,FHierarchyNode,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,(int)local_res8.Key);
  }
  return (FHierarchyNode *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)(int)local_res8.Key * 0xd8 + 8);
}

// FindOrAddImpl<UClass_*_const_&> @ 148b0f4b0

FItem * __thiscall
TMapBase<UClass_*,UE::FItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,UE::FItem,0>_>
::FindOrAddImpl<UClass_*_const_&>
          (TMapBase<UClass_*,UE::FItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,UE::FItem,0>_>
           *this,uint param_1,UClass **param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  UClass **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x128 + *(longlong *)&(this->Pairs).Elements);
        if ((UClass *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (FItem *)(plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[0x24];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<UClass_*,UE::FItem>,TDefaultMapHashableKeyFuncs<UClass_*,UE::FItem,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UClass_*_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<UClass_*_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FItem *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x128 + 8);
}

// FindOrAddImpl<UObject_*_const_&> @ 148b0f560

FHierarchyNode * __thiscall
TMapBase<UObject_*,FHierarchyNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FHierarchyNode,0>_>
::FindOrAddImpl<UObject_*_const_&>
          (TMapBase<UObject_*,FHierarchyNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FHierarchyNode,0>_>
           *this,uint param_1,UObject **param_2)

{
  int iVar1;
  longlong *plVar2;
  FHierarchyNode *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0xd8 + *(longlong *)&(this->Pairs).Elements);
        if ((UObject *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (FHierarchyNode *)(plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[0x1a];
      } while (iVar1 != -1);
    }
  }
  pFVar3 = EmplaceByHash<UObject_*_const_&>(this,param_1,param_2);
  return pFVar3;
}

// GenerateValueArray<TSizedDefaultAllocator<32>_> @ 148b0f6f0

void __thiscall
TMapBase<UClass_*,UE::FItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,UE::FItem,0>_>
::GenerateValueArray<TSizedDefaultAllocator<32>_>
          (TMapBase<UClass_*,UE::FItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,UE::FItem,0>_>
           *this,TArray<UE::FItem,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar9 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  DestructItems<UE::FItem,int>((FItem *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  iVar10 = 0;
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x118,8,uVar9,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar9 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar4 = *puVar13;
    iVar12 = 0;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_148b0f7d0;
      uVar4 = puVar13[lVar7 + 1];
    }
    uVar9 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar9 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar7 + -1 + iVar12;
    if (iVar3 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar3;
    }
  }
LAB_148b0f7d0:
  TStack_40._padding_ = CONCAT44(uVar9,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < iVar3) {
    do {
      pFVar8 = (param_1->AllocatorInstance).Data;
      pFVar11 = (FScriptContainerElement *)
                (*(longlong *)&(this->Pairs).Elements + 8 +
                (longlong)TStack_40.CurrentBitIndex * 0x128);
      if (((pFVar8 <= pFVar11) && (pFVar11 < pFVar8 + (longlong)*piVar1 * 0x118)) &&
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
      iVar10 = param_1->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x118,8,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar10 + 1;
      pFVar8 = (param_1->AllocatorInstance).Data + (longlong)iVar10 * 0x118;
      *(undefined8 *)pFVar8 = *(undefined8 *)pFVar11;
      *(undefined4 *)(pFVar8 + 8) = *(undefined4 *)(pFVar11 + 8);
      *(undefined8 *)(pFVar8 + 0x10) = *(undefined8 *)(pFVar11 + 0x10);
      *(undefined8 *)(pFVar8 + 0x18) = *(undefined8 *)(pFVar11 + 0x18);
      FResourceSizeEx::FResourceSizeEx
                ((FResourceSizeEx *)(pFVar8 + 0x20),(FResourceSizeEx *)(pFVar11 + 0x20));
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// Find @ 148b3c110

FScreenMessageString * __thiscall
TMapBase<int,FScreenMessageString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FScreenMessageString,0>_>
::Find(TMapBase<int,FScreenMessageString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FScreenMessageString,0>_>
       *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  FScreenMessageString *pFVar4;
  ForElementType<FSetElementId> FVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x48;
        if (*(int *)(lVar2 + (longlong)iVar3 * 0x48) == param_1) {
          pFVar4 = (FScreenMessageString *)0x0;
          if (lVar1 != 0) {
            pFVar4 = (FScreenMessageString *)(lVar1 + 8);
          }
          return pFVar4;
        }
        iVar3 = *(int *)(lVar1 + 0x40);
      } while (iVar3 != -1);
    }
  }
  return (FScreenMessageString *)0x0;
}

// FindChecked @ 148b3d130

FHierarchyNode * __thiscall
TMapBase<UObject_*,FHierarchyNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FHierarchyNode,0>_>
::FindChecked(TMapBase<UObject_*,FHierarchyNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FHierarchyNode,0>_>
              *this,UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FHierarchyNode *pFVar4;
  ForElementType<FSetElementId> FVar5;
  longlong *plVar6;
  uint uVar7;
  
  uVar7 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
    if (iVar3 != -1) {
      do {
        plVar6 = (longlong *)((longlong)iVar3 * 0xd8 + *(longlong *)&(this->Pairs).Elements);
        if ((UObject *)*plVar6 == param_1) {
          if (plVar6 != (longlong *)0x0) {
            return (FHierarchyNode *)(plVar6 + 1);
          }
          break;
        }
        iVar3 = (int)plVar6[0x1a];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FHierarchyNode *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FHierarchyNode *)(*pcVar1)();
  return pFVar4;
}

