// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 88

// Emplace<UObject_*_const_&,UObject_*_const_&> @ 141e6ecb0

UObject ** __thiscall
TMapBase<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>_>
::Emplace<UObject_*_const_&,UObject_*_const_&>
          (TMapBase<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>_>
           *this,UObject **param_1,UObject **param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  FSparseArrayAllocationInfo local_18;
  
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
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar4 * 0x18);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  if (local_18.Pointer != (TSparseSetElement<TTuple<UObject_*,UObject_*>_> *)0x0) {
    *(UObject **)local_18.Pointer = *param_1;
    *(UObject **)((longlong)local_18.Pointer + 8) = *param_2;
    *(undefined4 *)((longlong)local_18.Pointer + 0x10) = 0xffffffff;
  }
  uVar5 = ((uint)(*(ulonglong *)local_18.Pointer >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)local_18.Pointer >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>,FDefaultSetAllocator>
  ::RehashOrLink(&this->Pairs,uVar5 >> 0x10 ^ uVar5,local_18.Pointer,local_18.Index);
  return (UObject **)(*(longlong *)&(this->Pairs).Elements + (longlong)local_18.Index * 0x18 + 8);
}

// FindOrAddImpl<FLinkerLoad_*_const_&> @ 141e72ab0

TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> * __thiscall
TMapBase<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
::FindOrAddImpl<FLinkerLoad_*_const_&>
          (TMapBase<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
           *this,uint param_1,FLinkerLoad **param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FLinkerLoad **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if ((FLinkerLoad *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[0xb];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FLinkerLoad_*_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FLinkerLoad_*_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x60);
}

// FindOrAddImpl<UClass_*_const_&> @ 141e72b60

TArray<ULinkerPlaceholderExportObject_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<UClass_*,TArray<ULinkerPlaceholderExportObject_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<ULinkerPlaceholderExportObject_*,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<UClass_*_const_&>
          (TMapBase<UClass_*,TArray<ULinkerPlaceholderExportObject_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<ULinkerPlaceholderExportObject_*,TSizedDefaultAllocator<32>_>,0>_>
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
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((UClass *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (TArray<ULinkerPlaceholderExportObject_*,TSizedDefaultAllocator<32>_> *)
                   (plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<UClass_*,TArray<ULinkerPlaceholderExportObject_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TArray<ULinkerPlaceholderExportObject_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UClass_*_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<UClass_*_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TArray<ULinkerPlaceholderExportObject_*,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// FindOrAddImpl<FString_const_&> @ 141e72c10

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<FString_const_&>
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
    ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
              (&this->Pairs,(uint)local_res8,(TKeyInitializer<FString_const_&> *)(ulonglong)param_1,
               (bool *)&local_res20);
    lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
  }
  return (TArray<FString,TSizedDefaultAllocator<32>_> *)(lVar2 + 0x10);
}

// GenerateValueArray<TSizedDefaultAllocator<32>_> @ 141e75bd0

void __thiscall
TMapBase<FName,FExclusiveLoadPackageTimeTracker::FLoadTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FExclusiveLoadPackageTimeTracker::FLoadTime,0>_>
::GenerateValueArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FName,FExclusiveLoadPackageTimeTracker::FLoadTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FExclusiveLoadPackageTimeTracker::FLoadTime,0>_>
           *this,TArray<FExclusiveLoadPackageTimeTracker::FLoadTime,TSizedDefaultAllocator<32>_>
                 *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
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
  iVar10 = 0;
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,uVar12,&param_1->AllocatorInstance,0,piVar1);
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_141e75cb2;
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
LAB_141e75cb2:
  TStack_40._padding_ = CONCAT44(uVar12,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar13;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar11 = (FScriptContainerElement *)
                (*(longlong *)&(this->Pairs).Elements + 8 +
                (longlong)TStack_40.CurrentBitIndex * 0x40);
      pFVar5 = (param_1->AllocatorInstance).Data;
      if (((pFVar5 <= pFVar11) && (pFVar11 < pFVar5 + (longlong)*piVar1 * 0x30)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar10 = param_1->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,&param_1->AllocatorInstance,piVar1);
      }
      lVar9 = (longlong)iVar10;
      param_1->ArrayNum = iVar10 + 1;
      uVar7 = *(undefined8 *)(pFVar11 + 8);
      pFVar5 = (param_1->AllocatorInstance).Data;
      *(undefined8 *)(pFVar5 + lVar9 * 0x30) = *(undefined8 *)pFVar11;
      *(undefined8 *)(pFVar5 + lVar9 * 0x30 + 8) = uVar7;
      uVar7 = *(undefined8 *)(pFVar11 + 0x18);
      *(undefined8 *)(pFVar5 + lVar9 * 0x30 + 0x10) = *(undefined8 *)(pFVar11 + 0x10);
      *(undefined8 *)(pFVar5 + lVar9 * 0x30 + 0x10 + 8) = uVar7;
      uVar7 = *(undefined8 *)(pFVar11 + 0x28);
      *(undefined8 *)(pFVar5 + lVar9 * 0x30 + 0x20) = *(undefined8 *)(pFVar11 + 0x20);
      *(undefined8 *)(pFVar5 + lVar9 * 0x30 + 0x20 + 8) = uVar7;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// GenerateValueArray<TSizedDefaultAllocator<32>_> @ 141e75e50

void __thiscall
TMapBase<FName,`FExclusiveLoadPackageTimeTracker::InternalDumpReport'::__l2::FTimeCount,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,`FExclusiveLoadPackageTimeTracker::InternalDumpReport'::__l2::FTimeCount,0>_>
::GenerateValueArray<TSizedDefaultAllocator<32>_>
          (void *this,
          TArray<_private:_void___cdecl_FExclusiveLoadPackageTimeTracker::InternalDumpReport(TArray<FString,TSizedDefaultAllocator<32>_>_const_&)const_::_2_::FTimeCount,TSizedDefaultAllocator<32>_>
          *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  bool bVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  TBitArray<FDefaultBitArrayAllocator> *pTVar15;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar13 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  piVar1 = &param_1->ArrayMax;
  iVar12 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar13,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar4 = *(int *)((longlong)this + 0x28);
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
  uVar13 = 1;
  iVar14 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar4 != 0) {
    pTVar15 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar15 = TStack_40.Array;
    }
    uVar5 = *(uint *)(pTVar15->AllocatorInstance).InlineData;
    while (uVar5 == 0) {
      lVar11 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      TStack_40.CurrentBitIndex = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_141e75f32;
      uVar5 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar11 * 4 + 4);
    }
    uVar13 = -uVar5 & uVar5;
    uVar3 = (ulonglong)uVar13 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar11 + -1 + iVar14;
    if (iVar4 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar4;
    }
  }
LAB_141e75f32:
  TStack_40._padding_ = CONCAT44(uVar13,iVar12);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar14;
  if (TStack_40.CurrentBitIndex < *(int *)((longlong)this + 0x28)) {
    do {
      pFVar6 = (param_1->AllocatorInstance).Data;
      pFVar2 = (FScriptContainerElement *)
               (*(longlong *)this + ((longlong)TStack_40.CurrentBitIndex * 5 + 1) * 8);
      if (((pFVar6 <= pFVar2) && (pFVar2 < pFVar6 + (longlong)*piVar1 * 0x18)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar12 = param_1->ArrayNum;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar12 + 1;
      uVar9 = *(undefined8 *)(pFVar2 + 8);
      pFVar7 = (param_1->AllocatorInstance).Data;
      pFVar6 = pFVar7 + (longlong)iVar12 * 0x18;
      *(undefined8 *)pFVar6 = *(undefined8 *)pFVar2;
      *(undefined8 *)(pFVar6 + 8) = uVar9;
      *(undefined8 *)(pFVar7 + (longlong)iVar12 * 0x18 + 0x10) = *(undefined8 *)(pFVar2 + 0x10);
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// Find @ 141e9a710

TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> * __thiscall
TMapBase<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
::Find(TMapBase<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
       *this,FLinkerLoad *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar4;
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
        if ((FLinkerLoad *)*plVar2 == param_1) {
          pTVar4 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[0xb];
      } while (iVar1 != -1);
    }
  }
  return (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0;
}

// Find @ 141e9a7c0

FObjectInitializer * __thiscall
TMapBase<UObject_*,FObjectInitializer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FObjectInitializer,0>_>
::Find(TMapBase<UObject_*,FObjectInitializer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FObjectInitializer,0>_>
       *this,UObject *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  FObjectInitializer *pFVar4;
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
        plVar2 = (longlong *)((longlong)iVar1 * 0x280 + *(longlong *)&(this->Pairs).Elements);
        if ((UObject *)*plVar2 == param_1) {
          pFVar4 = (FObjectInitializer *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pFVar4 = (FObjectInitializer *)(plVar2 + 2);
          }
          return pFVar4;
        }
        iVar1 = (int)plVar2[0x4e];
      } while (iVar1 != -1);
    }
  }
  return (FObjectInitializer *)0x0;
}

// Find @ 141e9a870

FLoadTime * __thiscall
TMapBase<FName,FExclusiveLoadPackageTimeTracker::FLoadTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FExclusiveLoadPackageTimeTracker::FLoadTime,0>_>
::Find(TMapBase<FName,FExclusiveLoadPackageTimeTracker::FLoadTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FExclusiveLoadPackageTimeTracker::FLoadTime,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FLoadTime *pFVar4;
  
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
          pFVar4 = (FLoadTime *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pFVar4 = (FLoadTime *)(pFVar2 + 1);
          }
          return pFVar4;
        }
        uVar1 = pFVar2[7].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FLoadTime *)0x0;
}

// FindOrAddImpl<FName_const_&> @ 141ecd670

FArchiveDiffStats * __thiscall
TMapBase<FName,FArchiveDiffStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FArchiveDiffStats,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,FArchiveDiffStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FArchiveDiffStats,0>_>
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
            return (FArchiveDiffStats *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[5].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,FArchiveDiffStats>,TDefaultMapHashableKeyFuncs<FName,FArchiveDiffStats,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FArchiveDiffStats *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x30);
}

// Find @ 141ef2ad0

FPackageIndex * __thiscall
TMapBase<TTuple<FName,FPackageIndex>,FPackageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FPackageIndex>,FPackageIndex,0>_>
::Find(TMapBase<TTuple<FName,FPackageIndex>,FPackageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FPackageIndex>,FPackageIndex,0>_>
       *this,TTuple<FName,FPackageIndex> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  ForElementType<FSetElementId> FVar5;
  FPackageIndex *pFVar6;
  int iVar7;
  
  uVar2 = *(undefined8 *)param_1;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
  uVar4 = uVar4 + (int)((ulonglong)uVar2 >> 0x20);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar7 = *(int *)((longlong)FVar5 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U &
                    (uVar4 * 0x40 + -0x61c88647 + *(int *)&param_1->field_0x8 + (uVar4 >> 2) ^ uVar4
                    )) * 4);
    if (iVar7 != -1) {
      lVar3 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar3 + (longlong)iVar7 * 0x18;
        if ((*(longlong *)(lVar3 + (longlong)iVar7 * 0x18) == *(longlong *)param_1) &&
           (*(int *)(lVar1 + 8) == *(int *)&param_1->field_0x8)) {
          if (iVar7 == -1) {
            return (FPackageIndex *)0x0;
          }
          pFVar6 = (FPackageIndex *)0x0;
          if (lVar1 != 0) {
            pFVar6 = (FPackageIndex *)(lVar1 + 0xc);
          }
          return pFVar6;
        }
        iVar7 = *(int *)(lVar1 + 0x10);
      } while (iVar7 != -1);
    }
  }
  return (FPackageIndex *)0x0;
}

// Find @ 141ef2bb0

FEDLBootObjectState * __thiscall
TMapBase<FName,FEDLBootObjectState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FEDLBootObjectState,0>_>
::Find(TMapBase<FName,FEDLBootObjectState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FEDLBootObjectState,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  FEDLBootObjectState *pFVar5;
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
          pFVar5 = (FEDLBootObjectState *)0x0;
          if (lVar1 != 0) {
            pFVar5 = (FEDLBootObjectState *)(lVar1 + 8);
          }
          return pFVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x20);
      } while (iVar4 != -1);
    }
  }
  return (FEDLBootObjectState *)0x0;
}

// FindChecked @ 141ef2d60

FCallstackData * __thiscall
TMapBase<unsigned_int,FArchiveCallstacks::FCallstackData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FArchiveCallstacks::FCallstackData,0>_>
::FindChecked(TMapBase<unsigned_int,FArchiveCallstacks::FCallstackData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FArchiveCallstacks::FCallstackData,0>_>
              *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FCallstackData *pFVar4;
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
            return (FCallstackData *)(puVar5 + 2);
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
    return (FCallstackData *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FCallstackData *)(*pcVar1)();
  return pFVar4;
}

// Emplace<UObject_*_const_&,FProperty_*_const_&> @ 141f1c9b0

FProperty ** __thiscall
TMapBase<UObject_*,FProperty_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FProperty_*,1>_>
::Emplace<UObject_*_const_&,FProperty_*_const_&>
          (TMapBase<UObject_*,FProperty_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FProperty_*,1>_>
           *this,UObject **param_1,FProperty **param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  FSparseArrayAllocationInfo local_18;
  
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
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar4 * 0x18);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  if (local_18.Pointer != (TSparseSetElement<TTuple<UObject_*,FProperty_*>_> *)0x0) {
    *(UObject **)local_18.Pointer = *param_1;
    *(FProperty **)((longlong)local_18.Pointer + 8) = *param_2;
    *(undefined4 *)((longlong)local_18.Pointer + 0x10) = 0xffffffff;
  }
  uVar5 = ((uint)(*(ulonglong *)local_18.Pointer >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)local_18.Pointer >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  TSet<TTuple<UObject_*,FProperty_*>,TDefaultMapHashableKeyFuncs<UObject_*,FProperty_*,1>,FDefaultSetAllocator>
  ::RehashOrLink(&this->Pairs,uVar5 >> 0x10 ^ uVar5,local_18.Pointer,local_18.Index);
  return (FProperty **)(*(longlong *)&(this->Pairs).Elements + (longlong)local_18.Index * 0x18 + 8);
}

// Emplace<UObject_*_const_&,FProperty_*> @ 141f1cad0

FProperty ** __thiscall
TMapBase<UObject_*,FProperty_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FProperty_*,1>_>
::Emplace<UObject_*_const_&,FProperty_*>
          (TMapBase<UObject_*,FProperty_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FProperty_*,1>_>
           *this,UObject **param_1,FProperty **param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  FSparseArrayAllocationInfo local_18;
  
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
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar4 * 0x18);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  if (local_18.Pointer != (TSparseSetElement<TTuple<UObject_*,FProperty_*>_> *)0x0) {
    *(UObject **)local_18.Pointer = *param_1;
    *(FProperty **)((longlong)local_18.Pointer + 8) = *param_2;
    *(undefined4 *)((longlong)local_18.Pointer + 0x10) = 0xffffffff;
  }
  uVar5 = ((uint)(*(ulonglong *)local_18.Pointer >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)local_18.Pointer >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  TSet<TTuple<UObject_*,FProperty_*>,TDefaultMapHashableKeyFuncs<UObject_*,FProperty_*,1>,FDefaultSetAllocator>
  ::RehashOrLink(&this->Pairs,uVar5 >> 0x10 ^ uVar5,local_18.Pointer,local_18.Index);
  return (FProperty **)(*(longlong *)&(this->Pairs).Elements + (longlong)local_18.Index * 0x18 + 8);
}

// FindOrAddImpl<FName_const_&> @ 141f1f130

TUniquePtr<FPackageWriterRecords::FPackage,TDefaultDelete<FPackageWriterRecords::FPackage>_> *
__thiscall
TMapBase<FName,TUniquePtr<FPackageWriterRecords::FPackage,TDefaultDelete<FPackageWriterRecords::FPackage>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FPackageWriterRecords::FPackage,TDefaultDelete<FPackageWriterRecords::FPackage>_>,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,TUniquePtr<FPackageWriterRecords::FPackage,TDefaultDelete<FPackageWriterRecords::FPackage>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FPackageWriterRecords::FPackage,TDefaultDelete<FPackageWriterRecords::FPackage>_>,0>_>
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
          if (lVar3 != 0) goto LAB_141f1f1c2;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,TUniquePtr<FPackageWriterRecords::FPackage,TDefaultDelete<FPackageWriterRecords::FPackage>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FPackageWriterRecords::FPackage,TDefaultDelete<FPackageWriterRecords::FPackage>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
LAB_141f1f1c2:
  return (TUniquePtr<FPackageWriterRecords::FPackage,TDefaultDelete<FPackageWriterRecords::FPackage>_>
          *)(lVar3 + 8);
}

// FindOrAddImpl<FString_const_&> @ 141f1f1e0

FMapPayload * __thiscall
TMapBase<FString,FTransactionallySafeAsyncPackageLoader::FMapPayload,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTransactionallySafeAsyncPackageLoader::FMapPayload,0>_>
::FindOrAddImpl<FString_const_&>
          (TMapBase<FString,FTransactionallySafeAsyncPackageLoader::FMapPayload,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTransactionallySafeAsyncPackageLoader::FMapPayload,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FString *local_res20;
  
  iVar1 = TSet<TTuple<FString,FTransactionallySafeAsyncPackageLoader::FMapPayload>,TDefaultMapHashableKeyFuncs<FString,FTransactionallySafeAsyncPackageLoader::FMapPayload,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x30 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (FMapPayload *)(lVar2 + 0x10);
  }
  local_res20 = param_2;
  TSet<TTuple<FString,FTransactionallySafeAsyncPackageLoader::FMapPayload>,TDefaultMapHashableKeyFuncs<FString,FTransactionallySafeAsyncPackageLoader::FMapPayload,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FString_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FMapPayload *)
         (*(longlong *)&(this->Pairs).Elements + 0x10 + (longlong)local_res8[0] * 0x30);
}

// Find @ 141f2e970

FDuplicatedObject * __thiscall
TMapBase<UObjectBase_const_*,FDuplicatedObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FDuplicatedObject,0>_>
::Find(TMapBase<UObjectBase_const_*,FDuplicatedObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FDuplicatedObject,0>_>
       *this,UObjectBase *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  FDuplicatedObject *pFVar4;
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
        if ((UObjectBase *)*plVar2 == param_1) {
          pFVar4 = (FDuplicatedObject *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pFVar4 = (FDuplicatedObject *)(plVar2 + 1);
          }
          return pFVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (FDuplicatedObject *)0x0;
}

// Find @ 141f2ea10

TUniquePtr<FPackageWriterRecords::FPackage,TDefaultDelete<FPackageWriterRecords::FPackage>_> *
__thiscall
TMapBase<FName,TUniquePtr<FPackageWriterRecords::FPackage,TDefaultDelete<FPackageWriterRecords::FPackage>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FPackageWriterRecords::FPackage,TDefaultDelete<FPackageWriterRecords::FPackage>_>,0>_>
::Find(TMapBase<FName,TUniquePtr<FPackageWriterRecords::FPackage,TDefaultDelete<FPackageWriterRecords::FPackage>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FPackageWriterRecords::FPackage,TDefaultDelete<FPackageWriterRecords::FPackage>_>,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  TUniquePtr<FPackageWriterRecords::FPackage,TDefaultDelete<FPackageWriterRecords::FPackage>_>
  *pTVar5;
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
          pTVar5 = (TUniquePtr<FPackageWriterRecords::FPackage,TDefaultDelete<FPackageWriterRecords::FPackage>_>
                    *)0x0;
          if (lVar1 != 0) {
            pTVar5 = (TUniquePtr<FPackageWriterRecords::FPackage,TDefaultDelete<FPackageWriterRecords::FPackage>_>
                      *)(lVar1 + 8);
          }
          return pTVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return (TUniquePtr<FPackageWriterRecords::FPackage,TDefaultDelete<FPackageWriterRecords::FPackage>_>
          *)0x0;
}

// Find @ 141f2eab0

FMapPayload * __thiscall
TMapBase<FString,FTransactionallySafeAsyncPackageLoader::FMapPayload,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTransactionallySafeAsyncPackageLoader::FMapPayload,0>_>
::Find(TMapBase<FString,FTransactionallySafeAsyncPackageLoader::FMapPayload,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTransactionallySafeAsyncPackageLoader::FMapPayload,0>_>
       *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  FMapPayload *pFVar6;
  
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
  iVar2 = TSet<TTuple<FString,FTransactionallySafeAsyncPackageLoader::FMapPayload>,TDefaultMapHashableKeyFuncs<FString,FTransactionallySafeAsyncPackageLoader::FMapPayload,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x30 + *(longlong *)&(this->Pairs).Elements;
    pFVar6 = (FMapPayload *)0x0;
    if (lVar4 != 0) {
      pFVar6 = (FMapPayload *)(lVar4 + 0x10);
    }
    return pFVar6;
  }
  return (FMapPayload *)0x0;
}

// FindOrAddImpl<FName_const_&> @ 141f579a0

FAssetRegistryTag * __thiscall
TMapBase<FName,UObject::FAssetRegistryTag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObject::FAssetRegistryTag,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,UObject::FAssetRegistryTag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObject::FAssetRegistryTag,0>_>
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
            return (FAssetRegistryTag *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[5].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,UObject::FAssetRegistryTag>,TDefaultMapHashableKeyFuncs<FName,UObject::FAssetRegistryTag,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FAssetRegistryTag *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x30);
}

// Find @ 141f7ac50

UClass ** __thiscall
TMapBase<UClass_*,UClass_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,UClass_*,0>_>::
Find(TMapBase<UClass_*,UClass_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,UClass_*,0>_>
     *this,UClass *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  UClass **ppUVar5;
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
        if (*(UClass **)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          ppUVar5 = (UClass **)0x0;
          if (lVar1 != 0) {
            ppUVar5 = (UClass **)(lVar1 + 8);
          }
          return ppUVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (UClass **)0x0;
}

// Emplace<FString_const_&,FString_const_&> @ 141fb7880

FString * __thiscall
TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
Emplace<FString_const_&,FString_const_&>
          (TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
           *this,FString *param_1,FString *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  TSparseSetElement<TTuple<FString,FString>_> *pTVar8;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar5 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar5 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar5 = iVar5 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)(lVar7 + 4 + (longlong)iVar3 * 0x28);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(lVar7 + (longlong)iVar1 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar3);
  pTVar8 = (TSparseSetElement<TTuple<FString,FString>_> *)0x0;
  if (local_28.Pointer != (TSparseSetElement<TTuple<FString,FString>_> *)0x0) {
    ::FString::FString(local_28.Pointer,param_1);
    ::FString::FString((FString *)((longlong)local_28.Pointer + 0x10),param_2);
    *(undefined4 *)((longlong)local_28.Pointer + 0x20) = 0xffffffff;
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
  bVar2 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar4,pTVar8,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar2) {
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar4,pTVar8,local_res8[0]);
  }
  return (FString *)(*(longlong *)&(this->Pairs).Elements + lVar7 * 0x28 + 0x10);
}

// FindOrAddImpl<FName_const_&> @ 141fb9450

TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_> * __thiscall
TMapBase<FName,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>,0>_>
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
            return (TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>
                    *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[0xb].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x60);
}

// FindOrAddImpl<enum_ECoreRedirectFlags_const_&> @ 141fb9500

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

FRedirectNameMap ** __thiscall
TMapBase<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap_*,0>_>
::FindOrAddImpl<enum_ECoreRedirectFlags_const_&>
          (void *this,uint param_1,ECoreRedirectFlags *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [6];
  ECoreRedirectFlags *local_res20;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar2 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar2 = (longlong)this + 0x38;
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *(longlong *)this + (longlong)iVar1 * 0x18;
        if (*(ECoreRedirectFlags *)(*(longlong *)this + (longlong)iVar1 * 0x18) == *param_2) {
          if (lVar2 != 0) goto LAB_141fb9592;
          break;
        }
        iVar1 = *(int *)(lVar2 + 0x10);
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap_*>,TDefaultMapHashableKeyFuncs<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap_*,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<enum_ECoreRedirectFlags_const_&>_>
            (this,(uint)local_res8,(TKeyInitializer<ECoreRedirectFlags_const_&> *)(ulonglong)param_1
             ,(bool *)&local_res20);
  lVar2 = *(longlong *)this + (longlong)local_res8[0] * 0x18;
LAB_141fb9592:
  return (FRedirectNameMap **)(lVar2 + 8);
}

// FindOrAddImpl<FName> @ 141fb95b0

TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<FName>
          (TMapBase<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>,0>_>
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
            return (TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_&&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// Find @ 141fcb690

FFieldCookedMetaDataStore * __thiscall
TMapBase<FName,FFieldCookedMetaDataStore,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FFieldCookedMetaDataStore,0>_>
::Find(TMapBase<FName,FFieldCookedMetaDataStore,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FFieldCookedMetaDataStore,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FFieldCookedMetaDataStore *pFVar2;
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
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0xb0 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pFVar2 = (FFieldCookedMetaDataStore *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pFVar2 = (FFieldCookedMetaDataStore *)(pFVar4 + 1);
          }
          return pFVar2;
        }
        uVar1 = pFVar4[0x15].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FFieldCookedMetaDataStore *)0x0;
}

// Find @ 141fcb730

FStructCookedMetaDataStore * __thiscall
TMapBase<FName,FStructCookedMetaDataStore,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStructCookedMetaDataStore,0>_>
::Find(TMapBase<FName,FStructCookedMetaDataStore,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStructCookedMetaDataStore,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FStructCookedMetaDataStore *pFVar2;
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
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0xb0 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pFVar2 = (FStructCookedMetaDataStore *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pFVar2 = (FStructCookedMetaDataStore *)(pFVar4 + 1);
          }
          return pFVar2;
        }
        uVar1 = pFVar4[0x15].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FStructCookedMetaDataStore *)0x0;
}

// Find @ 141fcb7d0

TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>,0>_>
::Find(TMapBase<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> *pTVar4;
  
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
          pTVar4 = (TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pTVar4 = (TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> *)(pFVar2 + 1);
          }
          return pTVar4;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> *)0x0;
}

// Find @ 141fcb870

TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_> * __thiscall
TMapBase<FName,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>,0>_>
::Find(TMapBase<FName,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>,0>_>
       *this,FName param_1)

{
  uint uVar1;
  TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_> *pTVar2;
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
          pTVar2 = (TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>
                    *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pTVar2 = (TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>
                      *)(pFVar4 + 1);
          }
          return pTVar2;
        }
        uVar1 = pFVar4[0xb].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_> *)
         0x0;
}

// OrderIndependentCompareEqual @ 141fd89a0

bool __thiscall
TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
OrderIndependentCompareEqual
          (TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
           *this,TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                 *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  FString *pFVar6;
  longlong lVar7;
  uint *puVar8;
  bool bVar9;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_40;
  int iStack_38;
  uint uStack_34;
  undefined1 *local_30;
  undefined4 uStack_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34 ==
      *(int *)&(param_1->Pairs).Elements.field_0x8 - *(int *)&(param_1->Pairs).Elements.field_0x34)
  {
    iStack_38 = 0;
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x28;
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
    uStack_34 = 1;
    local_20 = 0;
    iStack_24 = 0;
    if (iVar5 != 0) {
      puVar8 = *(uint **)&(this->Pairs).Elements.field_0x20;
      if (puVar8 == (uint *)0x0) {
        puVar8 = (uint *)TStack_60.Array;
      }
      uVar2 = *puVar8;
      while (uVar2 == 0) {
        lVar7 = (longlong)iStack_38;
        local_20 = local_20 + 0x20;
        iStack_38 = iStack_38 + 1;
        iStack_24 = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_38) goto LAB_141fd8a5b;
        uVar2 = puVar8[lVar7 + 1];
      }
      uStack_34 = -uVar2 & uVar2;
      uVar1 = (ulonglong)uStack_34 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_24 = local_20 + -1 + (int)lVar7;
      if (iVar5 < iStack_24) {
        iStack_24 = iVar5;
      }
    }
LAB_141fd8a5b:
    TStack_60._padding_ = CONCAT44(uStack_34,iStack_38);
    uStack_28 = 0xffffffff;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iStack_1c = TStack_60.CurrentBitIndex;
    TStack_60._28_4_ = TStack_60.CurrentBitIndex;
    TStack_60.BaseBitIndex = local_20;
    local_40 = this;
    local_30 = (undefined1 *)TStack_60.Array;
    TStack_60.CurrentBitIndex = iStack_24;
    if (iStack_24 < *(int *)&(this->Pairs).Elements.field_0x28) {
      do {
        lVar7 = (longlong)TStack_60.CurrentBitIndex * 0x28;
        pFVar6 = Find(param_1,(FString *)(*(longlong *)&(this->Pairs).Elements + lVar7));
        if (pFVar6 == (FString *)0x0) goto LAB_141fd8b41;
        lVar4 = *(longlong *)&(this->Pairs).Elements;
        iVar5 = (pFVar6->Data).ArrayNum;
        iVar3 = *(int *)(lVar4 + 0x18 + lVar7);
        if (iVar5 == iVar3) {
          if (1 < iVar5) {
            iVar5 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,
                               *(wchar_t **)(lVar4 + 0x10 + lVar7));
            bVar9 = iVar5 == 0;
            goto LAB_141fd8b12;
          }
        }
        else {
          bVar9 = iVar3 + iVar5 == 1;
LAB_141fd8b12:
          if (!bVar9) goto LAB_141fd8b41;
        }
        TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
    }
    bVar9 = true;
  }
  else {
LAB_141fd8b41:
    bVar9 = false;
  }
  return bVar9;
}

// EmplaceByHash<void_const_*> @ 141fef740

FSchemaStats * __thiscall
TMapBase<void_const_*,UE::GC::FSchemaStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,UE::GC::FSchemaStats,0>_>
::EmplaceByHash<void_const_*>
          (TMapBase<void_const_*,UE::GC::FSchemaStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,UE::GC::FSchemaStats,0>_>
           *this,uint param_1,void **param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  TSparseSetElement<TTuple<void_const_*,UE::GC::FSchemaStats>_> *pTVar5;
  longlong lVar6;
  int local_98 [2];
  FSparseArrayAllocationInfo local_90 [7];
  
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
                   *)this,local_90,iVar4);
  pTVar5 = (TSparseSetElement<TTuple<void_const_*,UE::GC::FSchemaStats>_> *)0x0;
  if (local_90[0].Pointer != (TSparseSetElement<TTuple<void_const_*,UE::GC::FSchemaStats>_> *)0x0) {
    *(void **)local_90[0].Pointer = *param_2;
    *(undefined8 *)((longlong)local_90[0].Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_90[0].Pointer + 0x10) = 0;
    *(undefined8 *)((longlong)local_90[0].Pointer + 0x48) = 0;
    *(undefined8 *)((longlong)local_90[0].Pointer + 0x18) = 0;
    *(undefined8 *)((longlong)local_90[0].Pointer + 0x20) = 0;
    *(undefined8 *)((longlong)local_90[0].Pointer + 0x28) = 0;
    *(undefined8 *)((longlong)local_90[0].Pointer + 0x30) = 0;
    *(undefined8 *)((longlong)local_90[0].Pointer + 0x38) = 0;
    *(undefined8 *)((longlong)local_90[0].Pointer + 0x40) = 0;
    *(undefined8 *)((longlong)local_90[0].Pointer + 0x50) = 0;
    *(undefined8 *)((longlong)local_90[0].Pointer + 0x58) = 0;
    *(undefined4 *)((longlong)local_90[0].Pointer + 0x60) = 0xffffffff;
    pTVar5 = local_90[0].Pointer;
  }
  local_98[0] = local_90[0].Index;
  bVar3 = TSet<TTuple<void_const_*,UE::GC::FSchemaStats>,TDefaultMapHashableKeyFuncs<void_const_*,UE::GC::FSchemaStats,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,pTVar5,local_98,(bool *)0x0);
  lVar6 = (longlong)local_98[0];
  if (!bVar3) {
    TSet<TTuple<void_const_*,UE::GC::FSchemaStats>,TDefaultMapHashableKeyFuncs<void_const_*,UE::GC::FSchemaStats,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,pTVar5,local_98[0]);
  }
  return (FSchemaStats *)(*(longlong *)&(this->Pairs).Elements + lVar6 * 0x68 + 8);
}

// FindOrAddImpl<FReferenceToken_const_&> @ 141fefce0

TArray<FGCDirectReference,TSizedDefaultAllocator<32>_> ** __thiscall
TMapBase<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,0>_>
::FindOrAddImpl<FReferenceToken_const_&>
          (TMapBase<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,0>_>
           *this,uint param_1,FReferenceToken *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  FReferenceToken *local_res20;
  
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
        if (*(ulong64 *)(lVar1 + (longlong)iVar2 * 0x18) == param_2->EncodedBits) {
          if (lVar3 != 0) goto LAB_141fefd72;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FReferenceToken_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FReferenceToken_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
LAB_141fefd72:
  return (TArray<FGCDirectReference,TSizedDefaultAllocator<32>_> **)(lVar3 + 8);
}

// Find @ 14203ec40

NodeInfo * __thiscall
TMapBase<UObject_*,FFindStronglyConnected::NodeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FFindStronglyConnected::NodeInfo,0>_>
::Find(TMapBase<UObject_*,FFindStronglyConnected::NodeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FFindStronglyConnected::NodeInfo,0>_>
       *this,UObject *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  NodeInfo *pNVar4;
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
          pNVar4 = (NodeInfo *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pNVar4 = (NodeInfo *)(plVar2 + 1);
          }
          return pNVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (NodeInfo *)0x0;
}

// Emplace<FString,FString> @ 14209e050

FString * __thiscall
TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
Emplace<FString,FString>
          (TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
           *this,FString *param_1,FString *param_2)

{
  TPairInitializer<FString_&&,FString_&&> local_res8 [2];
  FString *local_18;
  FString *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>(&this->Pairs,local_res8,(bool *)&local_18);
  return (FString *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)(int)local_res8[0].Key * 0x28 + 0x10);
}

// FindOrAddImpl<void_*_const_&> @ 14209e8d0

TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>
* __thiscall
TMapBase<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>_>
::FindOrAddImpl<void_*_const_&>
          (TMapBase<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>_>
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
            return (TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>
                    *)(plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[0xb];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<void_*_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<void_*_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>
          *)(*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x60);
}

// FindOrAddImpl<FGuid_const_&> @ 14209e980

FGuid * __thiscall
TMapBase<FGuid,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>_>::
FindOrAddImpl<FGuid_const_&>
          (TMapBase<FGuid,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>_>
           *this,uint param_1,FGuid *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FGuid *local_res20;
  
  iVar1 = TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,param_1,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x28, lVar2 == 0)) {
    local_res20 = param_2;
    TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>::
    EmplaceByHash<TKeyInitializer<FGuid_const_&>_>
              (&this->Pairs,(uint)local_res8,(TKeyInitializer<FGuid_const_&> *)(ulonglong)param_1,
               (bool *)&local_res20);
    lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
  }
  return (FGuid *)(lVar2 + 0x10);
}

// FindOrAddImpl<TWeakObjectPtr<UObject,FWeakObjectPtr>_> @ 14209ea00

TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>
* __thiscall
TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>_>
::FindOrAddImpl<TWeakObjectPtr<UObject,FWeakObjectPtr>_>
          (TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>_>
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
                     ((longlong)iVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
      bVar2 = TWeakObjectPtr<UObject_const_,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                        ((TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_res20,
                         (TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_res8);
      lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x60;
      if (bVar2) {
        if (lVar3 != 0) {
          return (TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>
                  *)(lVar3 + 8);
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0x58);
    }
  }
  local_res20 = (FWeakObjectPtr)param_2;
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_&&>_>
            (&this->Pairs,(uint)&local_res8,
             (TKeyInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>
          *)(*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8.ObjectIndex * 0x60);
}

// Find @ 1420b5420

FUniqueObjectGuid * __thiscall
TMapBase<UObjectBase_const_*,FUniqueObjectGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FUniqueObjectGuid,0>_>
::Find(TMapBase<UObjectBase_const_*,FUniqueObjectGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FUniqueObjectGuid,0>_>
       *this,UObjectBase *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  FUniqueObjectGuid *pFVar4;
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
        if ((UObjectBase *)*plVar2 == param_1) {
          pFVar4 = (FUniqueObjectGuid *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pFVar4 = (FUniqueObjectGuid *)(plVar2 + 1);
          }
          return pFVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (FUniqueObjectGuid *)0x0;
}

// Find @ 1420b54c0

FTopLevelAssetPath * __thiscall
TMapBase<FTopLevelAssetPath,FTopLevelAssetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>_>
::Find(TMapBase<FTopLevelAssetPath,FTopLevelAssetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>_>
       *this,FTopLevelAssetPath *param_1)

{
  longlong lVar1;
  FName FVar2;
  FName FVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  
  FVar2 = param_1->AssetName;
  uVar5 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  FVar3 = param_1->PackageName;
  uVar6 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  uVar6 = uVar6 + FVar3.Number;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U &
                    (uVar6 * 0x40 + uVar5 + FVar2.Number + -0x61c88647 + (uVar6 >> 2) ^ uVar6)) * 4)
    ;
    if (iVar8 != -1) {
      lVar4 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar4 + (longlong)iVar8 * 0x28;
        if ((*(FName *)(lVar4 + (longlong)iVar8 * 0x28) == param_1->PackageName) &&
           (*(FName *)(lVar1 + 8) == param_1->AssetName)) {
          if (iVar8 == -1) {
            return (FTopLevelAssetPath *)0x0;
          }
          if (lVar1 != 0) {
            return (FTopLevelAssetPath *)(lVar1 + 0x10);
          }
          return (FTopLevelAssetPath *)0x0;
        }
        iVar8 = *(int *)(lVar1 + 0x20);
      } while (iVar8 != -1);
    }
  }
  return (FTopLevelAssetPath *)0x0;
}

// Find @ 1420b55b0

FName * __thiscall
TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>::Find
          (TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
           *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  FName *pFVar5;
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
          pFVar5 = (FName *)0x0;
          if (lVar1 != 0) {
            pFVar5 = (FName *)(lVar1 + 8);
          }
          return pFVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return (FName *)0x0;
}

// FindOrAddImpl<FBulkDataCookedIndex_const_&> @ 1420e4520

TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>
* __thiscall
TMapBase<FBulkDataCookedIndex,TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBulkDataCookedIndex,TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>,0>_>
::FindOrAddImpl<FBulkDataCookedIndex_const_&>
          (TMapBase<FBulkDataCookedIndex,TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBulkDataCookedIndex,TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>,0>_>
           *this,uint param_1,FBulkDataCookedIndex *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  FBulkDataCookedIndex *local_res20;
  
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
        if (*(uchar *)(lVar1 + (longlong)iVar2 * 0x18) == param_2->Value) {
          if (lVar3 != 0) goto LAB_1420e45b2;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FBulkDataCookedIndex,TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>_>,TDefaultMapHashableKeyFuncs<FBulkDataCookedIndex,TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FBulkDataCookedIndex_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FBulkDataCookedIndex_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
LAB_1420e45b2:
  return (TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>
          *)(lVar3 + 8);
}

// Find @ 1420f6c60

UObject ** __thiscall
TMapBase<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
::Find(TMapBase<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
       *this,UObject *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  UObject **ppUVar5;
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
        if (*(UObject **)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          ppUVar5 = (UObject **)0x0;
          if (lVar1 != 0) {
            ppUVar5 = (UObject **)(lVar1 + 8);
          }
          return ppUVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (UObject **)0x0;
}

// Find @ 1420f6d10

TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator> * __thiscall
TMapBase<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>,0>_>
::Find(TMapBase<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>,0>_>
       *this,UObject *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator> *pTVar4;
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
        if ((UObject *)*plVar2 == param_1) {
          pTVar4 = (TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator> *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator> *)
                     (plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[0xb];
      } while (iVar1 != -1);
    }
  }
  return (TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator> *)0x0;
}

// Find @ 1420f6dc0

FBoolAnnotation * __thiscall
TMapBase<UObjectBase_const_*,FBoolAnnotation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FBoolAnnotation,0>_>
::Find(TMapBase<UObjectBase_const_*,FBoolAnnotation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FBoolAnnotation,0>_>
       *this,UObjectBase *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  FBoolAnnotation *pFVar5;
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
          pFVar5 = (FBoolAnnotation *)0x0;
          if (lVar1 != 0) {
            pFVar5 = (FBoolAnnotation *)(lVar1 + 8);
          }
          return pFVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (FBoolAnnotation *)0x0;
}

// Find @ 1420f6e70

TUniquePtr<UE::SavePackageUtilities::FObjectStatus,TDefaultDelete<UE::SavePackageUtilities::FObjectStatus>_>
* __thiscall
TMapBase<TObjectPtr<UObject>,TUniquePtr<UE::SavePackageUtilities::FObjectStatus,TDefaultDelete<UE::SavePackageUtilities::FObjectStatus>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TUniquePtr<UE::SavePackageUtilities::FObjectStatus,TDefaultDelete<UE::SavePackageUtilities::FObjectStatus>_>,0>_>
::Find(TMapBase<TObjectPtr<UObject>,TUniquePtr<UE::SavePackageUtilities::FObjectStatus,TDefaultDelete<UE::SavePackageUtilities::FObjectStatus>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TUniquePtr<UE::SavePackageUtilities::FObjectStatus,TDefaultDelete<UE::SavePackageUtilities::FObjectStatus>_>,0>_>
       *this,TObjectPtr<UObject_const_> param_1)

{
  longlong lVar1;
  TObjectPtr<UObject_const_>_u_0 TVar2;
  int iVar3;
  TUniquePtr<UE::SavePackageUtilities::FObjectStatus,TDefaultDelete<UE::SavePackageUtilities::FObjectStatus>_>
  *pTVar4;
  uint uVar5;
  TObjectPtr<UObject_const_>_u_0 local_res8;
  
                    /* WARNING: Load size is inaccurate */
  TVar2.DebugPtr = *param_1.field0_0x0;
  local_res8 = TVar2;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (TVar2.DebugPtr != (UObject *)0x0) {
      UE::GC::MarkAsReachable(TVar2.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar2.DebugPtr != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(TVar2.DebugPtr);
    }
  }
  uVar5 = ((uint)((ulonglong)TVar2.DebugPtr >> 0x14) & 0xffff ^
          (uint)((ulonglong)TVar2.DebugPtr >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  iVar3 = TSet<TTuple<TObjectPtr<UObject>,TUniquePtr<UE::SavePackageUtilities::FObjectStatus,TDefaultDelete<UE::SavePackageUtilities::FObjectStatus>_>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TUniquePtr<UE::SavePackageUtilities::FObjectStatus,TDefaultDelete<UE::SavePackageUtilities::FObjectStatus>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectPtr<UObject_const_>_>
                    (&this->Pairs,uVar5 >> 0x10 ^ uVar5,
                     (TObjectPtr<UObject_const_> *)&local_res8.ObjectPtr);
  if (iVar3 != -1) {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar3 * 0x18;
    pTVar4 = (TUniquePtr<UE::SavePackageUtilities::FObjectStatus,TDefaultDelete<UE::SavePackageUtilities::FObjectStatus>_>
              *)0x0;
    if (lVar1 != 0) {
      pTVar4 = (TUniquePtr<UE::SavePackageUtilities::FObjectStatus,TDefaultDelete<UE::SavePackageUtilities::FObjectStatus>_>
                *)(lVar1 + 8);
    }
    return pTVar4;
  }
  return (TUniquePtr<UE::SavePackageUtilities::FObjectStatus,TDefaultDelete<UE::SavePackageUtilities::FObjectStatus>_>
          *)0x0;
}

// Find @ 1420f6f30

int * __thiscall
TMapBase<FNameEntryId,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNameEntryId,int,0>_>::
Find(TMapBase<FNameEntryId,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNameEntryId,int,0>_>
     *this,FNameEntryId *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  ForElementType<FSetElementId> FVar4;
  
  uVar1 = ::GetTypeHash((FNameEntryId)param_1->Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x10 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == param_1->Value) {
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

// Find @ 1420f6fd0

int * __thiscall
TMapBase<FSoftObjectPath,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,int,0>_>
::Find(TMapBase<FSoftObjectPath,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,int,0>_>
       *this,FSoftObjectPath *param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  longlong lVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar3 = ::GetTypeHash(param_1);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      bVar2 = FSoftObjectPath::operator==
                        ((FSoftObjectPath *)
                         (*(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x30),param_1);
      lVar5 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x30;
      if (bVar2) {
        piVar4 = (int *)0x0;
        if (lVar5 != 0) {
          piVar4 = (int *)(lVar5 + 0x20);
        }
        return piVar4;
      }
      iVar1 = *(int *)(lVar5 + 0x28);
    }
  }
  return (int *)0x0;
}

// EmplaceByHash<FIoHash_const_&,UE::FPackageTrailerBuilder::VirtualizedEntry> @ 142126740

VirtualizedEntry * __thiscall
TMapBase<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry,0>_>
::EmplaceByHash<FIoHash_const_&,UE::FPackageTrailerBuilder::VirtualizedEntry>
          (TMapBase<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry,0>_>
           *this,uint param_1,FIoHash *param_2,VirtualizedEntry *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
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
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar6 + 4 + (longlong)iVar5 * 0x28);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar6 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry>_> *)0x0) {
    uVar3 = *(undefined8 *)(param_2->Hash + 8);
    *(undefined8 *)local_28.Pointer = *(undefined8 *)param_2->Hash;
    *(undefined8 *)((longlong)local_28.Pointer + 8) = uVar3;
    *(undefined4 *)((longlong)local_28.Pointer + 0x10) = *(undefined4 *)(param_2->Hash + 0x10);
    *(long64 *)((longlong)local_28.Pointer + 0x18) = param_3->RawSize;
    *(undefined4 *)((longlong)local_28.Pointer + 0x20) = 0xffffffff;
  }
  local_res8[0] = local_28.Index;
  bVar4 = TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_28.Pointer,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_28.Pointer,local_res8[0]);
  }
  return (VirtualizedEntry *)(*(longlong *)&(this->Pairs).Elements + lVar6 * 0x28 + 0x18);
}

// Find @ 142139650

FHandles * __thiscall
TMapBase<FIoRequestImpl_*,UE::FPackageResourceIoBackend::FPendingRequests::FHandles,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoRequestImpl_*,UE::FPackageResourceIoBackend::FPendingRequests::FHandles,0>_>
::Find(TMapBase<FIoRequestImpl_*,UE::FPackageResourceIoBackend::FPendingRequests::FHandles,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoRequestImpl_*,UE::FPackageResourceIoBackend::FPendingRequests::FHandles,0>_>
       *this,FIoRequestImpl *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  FHandles *pFVar4;
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
        if ((FIoRequestImpl *)*plVar2 == param_1) {
          pFVar4 = (FHandles *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pFVar4 = (FHandles *)(plVar2 + 1);
          }
          return pFVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (FHandles *)0x0;
}

// Find @ 1421396f0

FObjectAndPackageIndex * __thiscall
TMapBase<UObject_*,PackageReloadInternal::FObjectAndPackageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,PackageReloadInternal::FObjectAndPackageIndex,0>_>
::Find(TMapBase<UObject_*,PackageReloadInternal::FObjectAndPackageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,PackageReloadInternal::FObjectAndPackageIndex,0>_>
       *this,UObject *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  FObjectAndPackageIndex *pFVar4;
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
          pFVar4 = (FObjectAndPackageIndex *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pFVar4 = (FObjectAndPackageIndex *)(plVar2 + 1);
          }
          return pFVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (FObjectAndPackageIndex *)0x0;
}

// GetKeys<TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> @ 1421564a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue,0>_>
::GetKeys<TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
          (TMapBase<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue,0>_>
           *this,TArray<UE::FPropertyPathNameTree::FKey,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                 *param_1)

{
  int *piVar1;
  ForElementType<UE::FPropertyPathNameTree::FKey> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  ForElementType<UE::FPropertyPathNameTree::FKey> FVar7;
  ForAnyElementType FVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  uint uVar14;
  ForElementType<UE::FPropertyPathNameTree::FKey> FVar15;
  FKey *pFVar16;
  int iVar17;
  ulonglong uVar18;
  ForElementType<unsigned_int> FVar19;
  uint *puVar20;
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
  FKey local_114;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_108;
  TMapBase<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue,0>_>
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
  uVar9 = 0;
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::FPropertyPathNameTree::FKey>_>
              (0xc,4,0,&param_1->AllocatorInstance,0,piVar1);
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
  if (uVar13 == 0) goto LAB_14215674e;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar13);
  }
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar13);
  uVar14 = 1;
  if (3 < uVar13) {
    uVar11 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_120 = (undefined4)lVar10;
    uVar14 = 1 << ((byte)lVar10 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar14 <= (int)local_50)) goto LAB_14215674e;
  local_50 = uVar14;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar14 != 0) {
    uVar13 = uVar14;
    if (uVar14 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar13 = 0;
        goto LAB_1421565b2;
      }
    }
    else {
LAB_1421565b2:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar13,4);
    }
    if (0 < (int)uVar14) {
      uVar18 = (ulonglong)uVar14;
      uVar11 = uVar9;
      do {
        FVar8.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar6 = uVar11 & (longlong)(int)uVar14 - 1U;
        uVar11 = uVar11 + 1;
        *(undefined4 *)(FVar8.Data + uVar6 * 4) = 0xffffffff;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
  }
  if (local_50 != 0) {
    local_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_168 = 0;
    uStack_164 = 1;
    uStack_154 = 0;
    uStack_150 = 0;
    if (local_70 != 0) {
      FVar19 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar19 = local_78;
      }
      uVar13 = *(uint *)FVar19;
      uVar11 = uVar9;
      while (uVar13 == 0) {
        uStack_150 = (int)uVar11 + 0x20;
        uVar11 = (ulonglong)uStack_150;
        iVar17 = (int)uVar9;
        local_168 = iVar17 + 1;
        uVar9 = (ulonglong)local_168;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_168)
        goto LAB_1421566b0;
        uVar13 = ((uint *)((longlong)FVar19 + 4))[iVar17];
      }
      uStack_164 = -uVar13 & uVar13;
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
LAB_1421566b0:
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
        pFVar16 = (FKey *)(*(longlong *)local_114._4_8_ + (longlong)(int)uVar9 * 0x14);
        uVar13 = UE::GetTypeHash(pFVar16);
        uVar13 = local_50 - 1 & uVar13;
        pFVar16[1].Name.Number = uVar13;
        FVar8.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar11 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar13;
        pFVar16[1].Name.ComparisonIndex.Value = *(uint *)(FVar8.Data + uVar11 * 4);
        *(int *)(FVar8.Data + uVar11 * 4) = (int)uVar9;
        local_108.UnvisitedBitMask = local_108.UnvisitedBitMask & ~local_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_108);
        uVar9 = (ulonglong)(uint)local_108.CurrentBitIndex;
      } while (local_108.CurrentBitIndex < (local_108.Array)->NumBits);
    }
  }
LAB_14215674e:
  iVar17 = 0;
  uVar13 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  if (*piVar1 < (int)uVar13) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::FPropertyPathNameTree::FKey>_>
              (0xc,4,uVar13,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  iVar5 = *(int *)&(this->Pairs).Elements.field_0x28;
  local_c8 = iVar17;
  iStack_cc = 0;
  uStack_dc = 1;
  if (iVar5 != 0) {
    puVar20 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)TStack_140.Array;
    }
    uVar13 = *puVar20;
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar17;
      local_c8 = local_c8 + 0x20;
      iVar17 = iVar17 + 1;
      iStack_cc = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_1421567fe;
      uVar13 = puVar20[lVar10 + 1];
    }
    uStack_dc = -uVar13 & uVar13;
    uVar9 = (ulonglong)uStack_dc * 2 + 1;
    lVar10 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_118 = (int)lVar10;
    iStack_cc = local_c8 + -1 + local_118;
    if (iVar5 < iStack_cc) {
      iStack_cc = iVar5;
    }
  }
LAB_1421567fe:
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
  if (iStack_cc < iVar5) {
    do {
      iVar17 = TStack_140.CurrentBitIndex;
      pFVar16 = (FKey *)((longlong)TStack_140.CurrentBitIndex * 0x98 +
                        *(longlong *)&(this->Pairs).Elements);
      uVar13 = UE::GetTypeHash(pFVar16);
      if (local_98._8_4_ != local_64) {
        FVar8.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar8.Data = local_58.Data;
        }
        iVar5 = *(int *)(FVar8.Data + (ulonglong)(local_50 - 1 & uVar13) * 4);
        pFVar12 = (FScriptContainerElement *)local_98._0_8_;
        while (iVar5 != -1) {
          lVar10 = (longlong)iVar5 * 0x14;
          if ((*(FName *)(pFVar12 + lVar10) == pFVar16->Name) &&
             (bVar4 = UE::operator==((FPropertyTypeName *)(pFVar12 + lVar10 + 8),&pFVar16->Type),
             pFVar12 = (FScriptContainerElement *)local_98._0_8_, bVar4)) {
            if (iVar5 != -1) goto LAB_1421569fd;
            break;
          }
          iVar5 = *(int *)(pFVar12 + lVar10 + 0xc);
        }
      }
      FVar2 = (param_1->AllocatorInstance).SecondaryData;
      FVar15 = (ForElementType<UE::FPropertyPathNameTree::FKey>)
               ((longlong)iVar17 * 0x98 + *(longlong *)&(this->Pairs).Elements);
      FVar7 = (ForElementType<UE::FPropertyPathNameTree::FKey>)param_1;
      if (FVar2 != (ForElementType<UE::FPropertyPathNameTree::FKey>)0x0) {
        FVar7 = FVar2;
      }
      if ((ulonglong)FVar7 <= (ulonglong)FVar15) {
        FVar7 = (ForElementType<UE::FPropertyPathNameTree::FKey>)param_1;
        if (FVar2 != (ForElementType<UE::FPropertyPathNameTree::FKey>)0x0) {
          FVar7 = FVar2;
        }
        if (((ulonglong)FVar15 < (ulonglong)((longlong)FVar7 + (longlong)*piVar1 * 0xc)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar17 = (*pcVar3)();
          return iVar17;
        }
      }
      iVar5 = param_1->ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::FPropertyPathNameTree::FKey>_>
                          (0x40c,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar5 + 1;
      FVar2 = (param_1->AllocatorInstance).SecondaryData;
      FVar7 = (ForElementType<UE::FPropertyPathNameTree::FKey>)param_1;
      if (FVar2 != (ForElementType<UE::FPropertyPathNameTree::FKey>)0x0) {
        FVar7 = FVar2;
      }
      *(undefined8 *)((longlong)FVar7 + (longlong)iVar5 * 0xc) = *(undefined8 *)FVar15;
      *(undefined4 *)((uchar *)((longlong)FVar7 + 8) + (longlong)iVar5 * 0xc) =
           *(undefined4 *)((longlong)FVar15 + 8);
      TSet<UE::FPropertyPathNameTree::FKey,DefaultKeyFuncs<UE::FPropertyPathNameTree::FKey,0>,FDefaultSetAllocator>
      ::Emplace<UE::FPropertyPathNameTree::FKey_const_&>
                ((TSet<UE::FPropertyPathNameTree::FKey,DefaultKeyFuncs<UE::FPropertyPathNameTree::FKey,0>,FDefaultSetAllocator>
                  *)local_98,&local_114,
                 (bool *)((longlong)iVar17 * 0x98 + *(longlong *)&(this->Pairs).Elements));
LAB_1421569fd:
      TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
    } while (TStack_140.CurrentBitIndex < (TStack_140.Array)->NumBits);
  }
  iVar17 = param_1->ArrayNum;
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<UE::FPropertyPathNameTree::FKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UE::FPropertyPathNameTree::FKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<UE::FPropertyPathNameTree::FKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return iVar17;
}

// Emplace<TTuple<int,int>_const_&,UE::ReferenceChainSearch::FGraphPath_*> @ 14219df90

FGraphPath ** __thiscall
TMapBase<TTuple<int,int>,UE::ReferenceChainSearch::FGraphPath_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,UE::ReferenceChainSearch::FGraphPath_*,0>_>
::Emplace<TTuple<int,int>_const_&,UE::ReferenceChainSearch::FGraphPath_*>
          (TMapBase<TTuple<int,int>,UE::ReferenceChainSearch::FGraphPath_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,UE::ReferenceChainSearch::FGraphPath_*,0>_>
           *this,TTuple<int,int> *param_1,FGraphPath **param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  int iVar8;
  FSparseArrayAllocationInfo local_28;
  
  iVar8 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar8 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar8 = iVar8 + -1;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)(lVar3 + 4 + (longlong)iVar4 * 0x18);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar4);
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<TTuple<int,int>,UE::ReferenceChainSearch::FGraphPath_*>_> *)0x0) {
    *(TTuple<int,int> *)local_28.Pointer = *param_1;
    *(FGraphPath **)((longlong)local_28.Pointer + 8) = *param_2;
    *(undefined4 *)((longlong)local_28.Pointer + 0x10) = 0xffffffff;
  }
  uVar2 = *(uint *)local_28.Pointer;
  iVar8 = *(int *)&(this->Pairs).Elements.field_0x8;
  iVar4 = *(int *)&(this->Pairs).Elements.field_0x34;
  uVar7 = uVar2 * 0x40 + -0x61c88647 + *(int *)((longlong)local_28.Pointer + 4) + (uVar2 >> 2) ^
          uVar2;
  if ((iVar8 - iVar4 != 1) && (iVar8 != iVar4)) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar8 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & uVar7) * 4);
    if (iVar8 != -1) {
      lVar3 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar5 = (longlong)iVar8;
        if ((*(uint *)(lVar3 + lVar5 * 0x18) == uVar2) &&
           (*(int *)(lVar3 + 4 + lVar5 * 0x18) == *(int *)((longlong)local_28.Pointer + 4))) {
          if (iVar8 != -1) {
            memmove((void *)(lVar3 + (longlong)iVar8 * 0x18),local_28.Pointer,0x10);
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_28.Index,1);
            goto LAB_14219e12b;
          }
          break;
        }
        iVar8 = *(int *)(lVar3 + 0x10 + lVar5 * 0x18);
      } while (iVar8 != -1);
    }
  }
  TSet<TTuple<TTuple<int,int>,UE::ReferenceChainSearch::FGraphPath_*>,TDefaultMapHashableKeyFuncs<TTuple<int,int>,UE::ReferenceChainSearch::FGraphPath_*,0>,FDefaultSetAllocator>
  ::RehashOrLink(&this->Pairs,uVar7,local_28.Pointer,local_28.Index);
  iVar8 = local_28.Index;
LAB_14219e12b:
  return (FGraphPath **)(*(longlong *)&(this->Pairs).Elements + (longlong)iVar8 * 0x18 + 8);
}

// FindOrAddImpl<int_const_&> @ 1421a17d0

int * __thiscall
TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
FindOrAddImpl<int_const_&>
          (TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *this,
          uint param_1,int *param_2)

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
        piVar2 = (int *)((longlong)iVar1 * 0x10 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == *param_2) {
          if (piVar2 != (int *)0x0) {
            return piVar2 + 1;
          }
          break;
        }
        iVar1 = piVar2[2];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
  EmplaceByHash<TKeyInitializer<int_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (int *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x10 + 4);
}

// FindOrAddImpl<TObjectPtr<UObject>_const_&> @ 1421a1880

TUniquePtr<UE::SavePackageUtilities::FObjectStatus,TDefaultDelete<UE::SavePackageUtilities::FObjectStatus>_>
* __thiscall
TMapBase<TObjectPtr<UObject>,TUniquePtr<UE::SavePackageUtilities::FObjectStatus,TDefaultDelete<UE::SavePackageUtilities::FObjectStatus>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TUniquePtr<UE::SavePackageUtilities::FObjectStatus,TDefaultDelete<UE::SavePackageUtilities::FObjectStatus>_>,0>_>
::FindOrAddImpl<TObjectPtr<UObject>_const_&>
          (TMapBase<TObjectPtr<UObject>,TUniquePtr<UE::SavePackageUtilities::FObjectStatus,TDefaultDelete<UE::SavePackageUtilities::FObjectStatus>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TUniquePtr<UE::SavePackageUtilities::FObjectStatus,TDefaultDelete<UE::SavePackageUtilities::FObjectStatus>_>,0>_>
           *this,uint param_1,TObjectPtr<UObject> *param_2)

{
  int iVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  longlong lVar4;
  ForElementType<FSetElementId> FVar5;
  int local_res8 [2];
  TObjectPtr<UObject> *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar5 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    while (iVar1 != -1) {
      pUVar2 = (param_2->field0_0x0).DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      lVar4 = (longlong)iVar1 * 0x18;
      pUVar3 = *(UObject **)(lVar4 + *(longlong *)&(this->Pairs).Elements);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      if (pUVar3 == pUVar2) {
        if ((iVar1 != -1) && (lVar4 = *(longlong *)&(this->Pairs).Elements + lVar4, lVar4 != 0))
        goto LAB_1421a196a;
        break;
      }
      iVar1 = *(int *)(lVar4 + 0x10 + *(longlong *)&(this->Pairs).Elements);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<TObjectPtr<UObject>,TUniquePtr<UE::SavePackageUtilities::FObjectStatus,TDefaultDelete<UE::SavePackageUtilities::FObjectStatus>_>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TUniquePtr<UE::SavePackageUtilities::FObjectStatus,TDefaultDelete<UE::SavePackageUtilities::FObjectStatus>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TObjectPtr<UObject>_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<TObjectPtr<UObject>_const_&> *)(ulonglong)param_1,(bool *)&local_res20
            );
  lVar4 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
LAB_1421a196a:
  return (TUniquePtr<UE::SavePackageUtilities::FObjectStatus,TDefaultDelete<UE::SavePackageUtilities::FObjectStatus>_>
          *)(lVar4 + 8);
}

// FindOrAddImpl<unsigned___int64_const_&,FString> @ 1421a1990

FString * __thiscall
TMapBase<unsigned___int64,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FString,0>_>
::FindOrAddImpl<unsigned___int64_const_&,FString>
          (TMapBase<unsigned___int64,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FString,0>_>
           *this,uint param_1,ulong64 *param_2,FString *param_3)

{
  int iVar1;
  ulong64 *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [8];
  ulong64 *local_18;
  FString *local_10;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (ulong64 *)0x0) {
            return (FString *)(puVar2 + 1);
          }
          break;
        }
        iVar1 = (int)puVar2[3];
      } while (iVar1 != -1);
    }
  }
  local_18 = param_2;
  local_10 = param_3;
  TSet<TTuple<unsigned___int64,FString>,TDefaultMapHashableKeyFuncs<unsigned___int64,FString,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TPairInitializer<unsigned___int64_const_&,FString_&&>_>
            (&this->Pairs,(uint)local_res8,
             (TPairInitializer<unsigned___int64_const_&,FString_&&> *)(ulonglong)param_1,
             (bool *)&local_18);
  return (FString *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// Find @ 1421c9f70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

int * __thiscall
TMapBase<FGCObjectInfo_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGCObjectInfo_*,int,0>_>
::Find(TMapBase<FGCObjectInfo_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGCObjectInfo_*,int,0>_>
       *this,FGCObjectInfo *param_1)

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
        if (*(FGCObjectInfo **)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
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

// Find @ 1421ca020

UObject ** __thiscall
TMapBase<UObject_const_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,UObject_*,0>_>
::Find(TMapBase<UObject_const_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,UObject_*,0>_>
       *this,UObject *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  UObject **ppUVar5;
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
        if (*(UObject **)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          ppUVar5 = (UObject **)0x0;
          if (lVar1 != 0) {
            ppUVar5 = (UObject **)(lVar1 + 8);
          }
          return ppUVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (UObject **)0x0;
}

// FindChecked @ 1421cb840

TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator> * __thiscall
TMapBase<Verse::VCell_*,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Verse::VCell_*,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>,0>_>
::FindChecked(TMapBase<Verse::VCell_*,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Verse::VCell_*,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>,0>_>
              *this,VCell *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<Verse::VCell_*,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>_>
  *pTVar3;
  TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator> *pTVar4;
  
  pTVar3 = TSet<TTuple<Verse::VCell_*,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<Verse::VCell_*,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
           ::Find(&this->Pairs,param_1);
  if (pTVar3 != (TTuple<Verse::VCell_*,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>_>
                 *)0x0) {
    return (TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator> *)
           &pTVar3->field_0x8;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator> *)
             (*pcVar1)();
    return pTVar4;
  }
  return (TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator> *)
         &DAT_00000008;
}

// FindChecked @ 1421cb8a0

TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> * __thiscall
TMapBase<Verse::VCell_*,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Verse::VCell_*,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,0>_>
::FindChecked(TMapBase<Verse::VCell_*,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Verse::VCell_*,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,0>_>
              *this,VCell *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<Verse::VCell_*,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>
  *pTVar3;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *pTVar4;
  
  pTVar3 = TSet<TTuple<Verse::VCell_*,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<Verse::VCell_*,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
           ::Find(&this->Pairs,param_1);
  if (pTVar3 != (TTuple<Verse::VCell_*,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>
                 *)0x0) {
    return (TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *)
           &pTVar3->field_0x8;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
              *)(*pcVar1)();
    return pTVar4;
  }
  return (TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *)
         &DAT_00000008;
}

// FindChecked @ 1421cb900

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FGraphNode ** __thiscall
TMapBase<FGCObjectInfo_*,FReferenceChainSearch::FGraphNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGCObjectInfo_*,FReferenceChainSearch::FGraphNode_*,0>_>
::FindChecked(TMapBase<FGCObjectInfo_*,FReferenceChainSearch::FGraphNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGCObjectInfo_*,FReferenceChainSearch::FGraphNode_*,0>_>
              *this,FGCObjectInfo *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FGraphNode **ppFVar6;
  ForElementType<FSetElementId> FVar7;
  uint uVar8;
  
  uVar8 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(FGCObjectInfo **)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (FGraphNode **)(lVar1 + 8);
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
    return (FGraphNode **)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  ppFVar6 = (FGraphNode **)(*pcVar3)();
  return ppFVar6;
}

// FindChecked @ 1421cb9d0

TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator> * __thiscall
TMapBase<TObjectPtr<UObject>,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>,0>_>
::FindChecked(TMapBase<TObjectPtr<UObject>,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>,0>_>
              *this,TObjectPtr<UObject_const_> param_1)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  TTuple<TObjectPtr<UObject>,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>_>
  *pTVar4;
  TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator> *pTVar5;
  UObject *local_res8;
  
  pUVar1 = *(UObject **)param_1.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  pTVar4 = TSet<TTuple<TObjectPtr<UObject>,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
           ::Find(&this->Pairs,(TObjectPtr<UObject_const_>)&local_res8);
  if (pTVar4 == (TTuple<TObjectPtr<UObject>,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>_>
                 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator> *)
               (*pcVar2)();
      return pTVar5;
    }
    return (TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator> *)
           &DAT_00000008;
  }
  return (TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator> *)
         &pTVar4->field_0x8;
}

// FindChecked @ 1421cba80

TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> * __thiscall
TMapBase<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,0>_>
::FindChecked(TMapBase<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,0>_>
              *this,TObjectPtr<UObject_const_> param_1)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  TTuple<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>
  *pTVar4;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *pTVar5;
  UObject *local_res8;
  
  pUVar1 = *(UObject **)param_1.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  pTVar4 = TSet<TTuple<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
           ::Find(&this->Pairs,(TObjectPtr<UObject_const_>)&local_res8);
  if (pTVar4 == (TTuple<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>
                 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                *)(*pcVar2)();
      return pTVar5;
    }
    return (TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *)
           &DAT_00000008;
  }
  return (TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *)
         &pTVar4->field_0x8;
}

// Emplace<TObjectPtr<UObject>,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>_> @ 1421f52c0

TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator> * __thiscall
TMapBase<TObjectPtr<UObject>,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>,0>_>
::
Emplace<TObjectPtr<UObject>,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>_>
          (TMapBase<TObjectPtr<UObject>,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>,0>_>
           *this,TObjectPtr<UObject> *param_1,
          TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator> *param_2)

{
  UObject *pUVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  longlong lVar9;
  int local_res8 [2];
  TPairInitializer<TObjectPtr<UObject>_&&,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>_&&>
  local_28;
  FSparseArrayAllocationInfo local_18;
  
  local_28.Key = param_1;
  local_28.Value = param_2;
  TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AddUninitialized((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)this,&local_18);
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<TObjectPtr<UObject>,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>_>_>
       *)0x0) {
    TPairInitializer<TObjectPtr<UObject>_&&,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>_&&>
    ::
    operator<TObjectPtr<UObject>,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>_>_TTuple<TObjectPtr<UObject>,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>_>
              (&local_28,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x58) = 0xffffffff;
  }
  pUVar1 = *(UObject **)local_18.Pointer;
  local_res8[0] = local_18.Index;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  uVar5 = ((uint)((ulonglong)pUVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  bVar3 = TSet<TTuple<TObjectPtr<UObject>,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar5,local_18.Pointer,local_res8,(bool *)0x0);
  lVar9 = (longlong)local_res8[0];
  if (!bVar3) {
    uVar7 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
    if (uVar7 < 4) {
      iVar4 = 1;
    }
    else {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar4 <= (this->Pairs).HashSize)) {
      uVar5 = (this->Pairs).HashSize - 1U & uVar5;
      *(uint *)((longlong)local_18.Pointer + 0x5c) = uVar5;
      FVar8 = (this->Pairs).Hash.SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
      }
      uVar6 = (longlong)(this->Pairs).HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)((longlong)local_18.Pointer + 0x58) =
           *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_res8[0];
    }
    else {
      (this->Pairs).HashSize = iVar4;
      TSet<TTuple<TObjectPtr<UObject>,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
      ::Rehash(&this->Pairs);
    }
  }
  return (TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + lVar9 * 0x60);
}

// FindOrAddImpl<TObjectPtr<UObject>_const_&> @ 1421f7760

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<TObjectPtr<UObject>,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<TObjectPtr<UObject>_const_&>
          (TMapBase<TObjectPtr<UObject>,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,TObjectPtr<UObject> *param_2)

{
  int iVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  longlong lVar4;
  ForElementType<FSetElementId> FVar5;
  int local_res8 [2];
  TObjectPtr<UObject> *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar5 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    while (iVar1 != -1) {
      pUVar2 = (param_2->field0_0x0).DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      lVar4 = (longlong)iVar1 * 0x20;
      pUVar3 = *(UObject **)(lVar4 + *(longlong *)&(this->Pairs).Elements);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      if (pUVar3 == pUVar2) {
        if ((iVar1 != -1) && (lVar4 = *(longlong *)&(this->Pairs).Elements + lVar4, lVar4 != 0)) {
          return (TArray<FName,TSizedDefaultAllocator<32>_> *)(lVar4 + 8);
        }
        break;
      }
      iVar1 = *(int *)(lVar4 + 0x18 + *(longlong *)&(this->Pairs).Elements);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<TObjectPtr<UObject>,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TObjectPtr<UObject>_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<TObjectPtr<UObject>_const_&> *)(ulonglong)param_1,(bool *)&local_res20
            );
  return (TArray<FName,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// FindOrAddImpl<FName_const_&> @ 1421f7870

TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> * __thiscall
TMapBase<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
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
            return (TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *)
                   (pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// Find @ 14220bcd0

FString * __thiscall
TMapBase<UObject_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FString,0>_>::
Find(TMapBase<UObject_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FString,0>_>
     *this,UObject *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  FString *pFVar4;
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
          pFVar4 = (FString *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pFVar4 = (FString *)(plVar2 + 1);
          }
          return pFVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (FString *)0x0;
}

// Find @ 14220bd70

TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
* __thiscall
TMapBase<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,0>_>
::Find(TMapBase<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,0>_>
       *this,UObjectBase *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
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
        if ((UObjectBase *)*plVar2 == param_1) {
          pTVar4 = (TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
                    *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
                      *)(plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[0xb];
      } while (iVar1 != -1);
    }
  }
  return (TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
          *)0x0;
}

// Find @ 14220be20

FString * __thiscall
TMapBase<TObjectPtr<UObject>,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,FString,0>_>
::Find(TMapBase<TObjectPtr<UObject>,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,FString,0>_>
       *this,TObjectPtr<UObject_const_> param_1)

{
  TObjectPtr<UObject_const_>_u_0 TVar1;
  int iVar2;
  FString *pFVar3;
  uint uVar4;
  longlong lVar5;
  TObjectPtr<UObject_const_>_u_0 local_res8;
  
                    /* WARNING: Load size is inaccurate */
  TVar1.DebugPtr = *param_1.field0_0x0;
  local_res8 = TVar1;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (TVar1.DebugPtr != (UObject *)0x0) {
      UE::GC::MarkAsReachable(TVar1.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar1.DebugPtr != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(TVar1.DebugPtr);
    }
  }
  uVar4 = ((uint)((ulonglong)TVar1.DebugPtr >> 0x14) & 0xffff ^
          (uint)((ulonglong)TVar1.DebugPtr >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar2 = TSet<TTuple<TObjectPtr<UObject>,FString>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,FString,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectPtr<UObject_const_>_>
                    (&this->Pairs,uVar4 >> 0x10 ^ uVar4,
                     (TObjectPtr<UObject_const_> *)&local_res8.ObjectPtr);
  if (iVar2 != -1) {
    lVar5 = (longlong)iVar2 * 0x20 + *(longlong *)&(this->Pairs).Elements;
    pFVar3 = (FString *)0x0;
    if (lVar5 != 0) {
      pFVar3 = (FString *)(lVar5 + 8);
    }
    return pFVar3;
  }
  return (FString *)0x0;
}

// Find @ 14220bed0

ulong64 * __thiscall
TMapBase<TTuple<FName,FName>,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,unsigned___int64,0>_>
::Find(TMapBase<TTuple<FName,FName>,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,unsigned___int64,0>_>
       *this,TTuple<FName,FName> *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  ForElementType<FSetElementId> FVar5;
  int iVar6;
  
  uVar1 = *(undefined8 *)param_1;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  uVar2 = uVar2 + (int)((ulonglong)uVar1 >> 0x20);
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar6 = *(int *)((longlong)FVar5 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U &
                    (uVar2 * 0x40 + (int)((ulonglong)uVar1 >> 0x20) + (uVar2 >> 2) +
                     uVar3 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar6 != -1) {
      do {
        plVar4 = (longlong *)((longlong)iVar6 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((*plVar4 == *(longlong *)param_1) && (plVar4[1] == *(longlong *)&param_1->field_0x8)) {
          if (iVar6 == -1) {
            return (ulong64 *)0x0;
          }
          if (plVar4 != (longlong *)0x0) {
            return (ulong64 *)(plVar4 + 2);
          }
          return (ulong64 *)0x0;
        }
        iVar6 = (int)plVar4[3];
      } while (iVar6 != -1);
    }
  }
  return (ulong64 *)0x0;
}

// Find @ 14220bfc0

TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> * __thiscall
TMapBase<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
::Find(TMapBase<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar4;
  
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
          pTVar4 = (TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pTVar4 = (TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *)
                     (pFVar2 + 1);
          }
          return pTVar4;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *)0x0;
}

// Remove @ 14221a870

int __thiscall
TMapBase<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
::Remove(TMapBase<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
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
    iVar2 = TSet<TTuple<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>,FDefaultSetAllocator>
            ::RemoveImpl<FName>(&this->Pairs,local_res10.Number + uVar1,&local_res8);
    return iVar2;
  }
  return 0;
}

// FindOrAddImpl<UClass_const_*_const_&> @ 14224bb60

int * __thiscall
TMapBase<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>
::FindOrAddImpl<UClass_const_*_const_&>
          (TMapBase<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>
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
          if (lVar3 != 0) goto LAB_14224bbf2;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<UClass_const_*,int>,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UClass_const_*_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<UClass_const_*_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
LAB_14224bbf2:
  return (int *)(lVar3 + 8);
}

// GenerateValueArray<TSizedDefaultAllocator<32>_> @ 14224bc10

void __thiscall
TMapBase<UClass_*,`FUObjectArray::DumpUObjectCountsToLog'::__l2::FClassEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,`FUObjectArray::DumpUObjectCountsToLog'::__l2::FClassEntry,0>_>
::GenerateValueArray<TSizedDefaultAllocator<32>_>
          (void *this,
          TArray<_public:_void___cdecl_FUObjectArray::DumpUObjectCountsToLog(void)const_::_2_::FClassEntry,TSizedDefaultAllocator<32>_>
          *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  int iVar13;
  TBitArray<FDefaultBitArrayAllocator> *pTVar14;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar12 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  piVar1 = &param_1->ArrayMax;
  iVar10 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar12,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)((longlong)this + 0x28);
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
  uVar12 = 1;
  iVar13 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    pTVar14 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar14 = TStack_40.Array;
    }
    uVar4 = *(uint *)(pTVar14->AllocatorInstance).InlineData;
    while (uVar4 == 0) {
      lVar9 = (longlong)iVar10;
      iVar13 = iVar13 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14224bcf2;
      uVar4 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar9 * 4 + 4);
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
LAB_14224bcf2:
  TStack_40._padding_ = CONCAT44(uVar12,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar13;
  if (TStack_40.CurrentBitIndex < *(int *)((longlong)this + 0x28)) {
    do {
      pFVar5 = (param_1->AllocatorInstance).Data;
      pFVar11 = (FScriptContainerElement *)
                (*(longlong *)this + 8 + (longlong)TStack_40.CurrentBitIndex * 0x20);
      if (((pFVar5 <= pFVar11) && (pFVar11 < pFVar5 + (longlong)*piVar1 * 0x10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar10 = param_1->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar10 + 1;
      uVar7 = *(undefined8 *)(pFVar11 + 8);
      pFVar5 = (param_1->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
      *(undefined8 *)pFVar5 = *(undefined8 *)pFVar11;
      *(undefined8 *)(pFVar5 + 8) = uVar7;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// FindOrAddImpl<int_const_&> @ 142290f00

FSetHashBucket * __thiscall
TMapBase<int,FSetHashBucket,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FSetHashBucket,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int,FSetHashBucket,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FSetHashBucket,0>_>
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
        piVar2 = (int *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == *param_2) {
          if (piVar2 != (int *)0x0) {
            return (FSetHashBucket *)(piVar2 + 2);
          }
          break;
        }
        iVar1 = piVar2[6];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int,FSetHashBucket>,TDefaultMapHashableKeyFuncs<int,FSetHashBucket,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FSetHashBucket *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// FindOrAddImpl<UClass_*_const_&> @ 142290fb0

TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator> * __thiscall
TMapBase<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,0>_>
::FindOrAddImpl<UClass_*_const_&>
          (TMapBase<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,0>_>
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
        plVar2 = (longlong *)((longlong)iVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if ((UClass *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator> *)(plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[0xb];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UClass_*_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<UClass_*_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x60);
}

// FindOrAddImpl<UObjectBase_*_const_&> @ 142291060

UPackage ** __thiscall
TMapBase<UObjectBase_*,UPackage_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_*,UPackage_*,0>_>
::FindOrAddImpl<UObjectBase_*_const_&>
          (TMapBase<UObjectBase_*,UPackage_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_*,UPackage_*,0>_>
           *this,uint param_1,UObjectBase **param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  UObjectBase **local_res20;
  
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
        if (*(UObjectBase **)(lVar1 + (longlong)iVar2 * 0x18) == *param_2) {
          if (lVar3 != 0) goto LAB_1422910f2;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<UObjectBase_*,UPackage_*>,TDefaultMapHashableKeyFuncs<UObjectBase_*,UPackage_*,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UObjectBase_*_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<UObjectBase_*_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
LAB_1422910f2:
  return (UPackage **)(lVar3 + 8);
}

// FindOrAddImpl<UPackage_*_const_&> @ 142291110

FSetHashBucket * __thiscall
TMapBase<UPackage_*,FSetHashBucket,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPackage_*,FSetHashBucket,0>_>
::FindOrAddImpl<UPackage_*_const_&>
          (TMapBase<UPackage_*,FSetHashBucket,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPackage_*,FSetHashBucket,0>_>
           *this,uint param_1,UPackage **param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  UPackage **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((UPackage *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (FSetHashBucket *)(plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<UPackage_*,FSetHashBucket>,TDefaultMapHashableKeyFuncs<UPackage_*,FSetHashBucket,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UPackage_*_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<UPackage_*_const_&> *)(ulonglong)param_1
             ,(bool *)&local_res20);
  return (FSetHashBucket *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// GetKeys<TSizedDefaultAllocator<32>_> @ 1422911c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,unsigned_int,1>_>::
GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,unsigned_int,1>_>
           *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

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
  uint *puVar13;
  ulonglong uVar14;
  uint uVar15;
  ForElementType<unsigned_int> FVar16;
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
  int local_114;
  longlong *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_108;
  TMapBase<int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,unsigned_int,1>_>
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
  ulonglong uVar17;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  piVar1 = &param_1->ArrayMax;
  uVar17 = 0;
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
  uVar15 = 0;
  if (uVar11 == 0) goto LAB_14229147d;
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
  if ((local_50 != 0) && ((int)uVar12 <= (int)local_50)) goto LAB_14229147d;
  local_50 = uVar12;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar12 != 0) {
    uVar11 = uVar12;
    if (uVar12 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar11 = 0;
        goto LAB_1422912da;
      }
    }
    else {
LAB_1422912da:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar11,4);
    }
    if (0 < (int)uVar12) {
      uVar14 = (ulonglong)uVar12;
      uVar10 = uVar17;
      do {
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        uVar8 = (longlong)(int)uVar12 - 1U & uVar10;
        uVar10 = uVar10 + 1;
        *(undefined4 *)(FVar9.Data + uVar8 * 4) = 0xffffffff;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
  }
  if (local_50 != 0) {
    local_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_168 = 0;
    uStack_164 = 1;
    uStack_154 = 0;
    uStack_150 = 0;
    uVar10 = uVar17;
    if (local_70 != 0) {
      FVar16 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar16 = local_78;
      }
      uVar11 = *(uint *)FVar16;
      uVar14 = uVar17;
      while (uVar11 == 0) {
        uStack_150 = (int)uVar14 + 0x20;
        uVar14 = (ulonglong)uStack_150;
        iVar7 = (int)uVar10;
        local_168 = iVar7 + 1;
        uVar10 = (ulonglong)local_168;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_168)
        goto LAB_1422913e2;
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
LAB_1422913e2:
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
LAB_14229147d:
  TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar11 = *(uint *)&(this->Pairs).Elements.field_0x28;
  uVar10 = uVar17;
  local_c8 = uVar15;
  uStack_dc = 1;
  if (uVar11 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    uVar10 = (ulonglong)uVar11;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_140.Array;
    }
    uVar12 = *puVar13;
    uVar14 = uVar17;
    local_c8 = 0;
    uVar15 = 0;
    while (uVar12 == 0) {
      iVar7 = (int)uVar17;
      local_c8 = (int)uVar14 + 0x20;
      uVar14 = (ulonglong)local_c8;
      uVar15 = iVar7 + 1;
      uVar17 = (ulonglong)uVar15;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar15)
      goto LAB_1422914ff;
      uVar12 = puVar13[(longlong)iVar7 + 1];
    }
    uStack_dc = -uVar12 & uVar12;
    uVar17 = (ulonglong)uStack_dc * 2 + 1;
    lVar4 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_118 = (int)lVar4;
    uVar12 = (local_c8 - 1) + local_118;
    if ((int)uVar11 < (int)uVar12) {
      uVar12 = uVar11;
    }
    uVar10 = (ulonglong)uVar12;
  }
LAB_1422914ff:
  uStack_d0 = 0xffffffff;
  uStack_cc = (uint)uVar10;
  uStack_c4 = local_9c;
  TStack_140._padding_ = CONCAT44(uStack_dc,uVar15);
  TStack_140.UnvisitedBitMask = 0xffffffff;
  TStack_140._28_4_ = local_9c;
  TStack_140.BaseBitIndex = local_c8;
  local_e8 = this;
  uStack_e0 = uVar15;
  local_d8 = (undefined1 *)TStack_140.Array;
  TStack_140.CurrentBitIndex = uStack_cc;
  if ((int)uStack_cc < (int)uVar11) {
    do {
      lVar4 = *(longlong *)&(this->Pairs).Elements;
      uVar15 = *(uint *)(lVar4 + (longlong)(int)uVar10 * 0x10);
      if (local_98._8_4_ != local_64) {
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        for (iVar7 = *(int *)(FVar9.Data + (ulonglong)(local_50 - 1 & uVar15) * 4); iVar7 != -1;
            iVar7 = *(int *)(local_98._0_8_ + (longlong)iVar7 * 0xc + 4)) {
          if (*(uint *)(local_98._0_8_ + (longlong)iVar7 * 0xc) == uVar15) goto LAB_14229165a;
        }
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      pFVar2 = (FScriptContainerElement *)(lVar4 + (longlong)(int)uVar10 * 0x10);
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
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98,&local_114,
                 (bool *)((longlong)TStack_140.CurrentBitIndex * 0x10 +
                         *(longlong *)&(this->Pairs).Elements));
LAB_14229165a:
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
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return iVar7;
}

// Find @ 14229a9d0

TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator> * __thiscall
TMapBase<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,0>_>
::Find(TMapBase<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,0>_>
       *this,UClass *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator> *pTVar4;
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
        if ((UClass *)*plVar2 == param_1) {
          pTVar4 = (TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator> *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator> *)(plVar2 + 1)
            ;
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[0xb];
      } while (iVar1 != -1);
    }
  }
  return (TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator> *)0x0;
}

// Find @ 14229aa80

FSetHashBucket * __thiscall
TMapBase<UObjectBase_*,FSetHashBucket,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_*,FSetHashBucket,0>_>
::Find(TMapBase<UObjectBase_*,FSetHashBucket,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_*,FSetHashBucket,0>_>
       *this,UObjectBase *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  FSetHashBucket *pFVar4;
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
        if ((UObjectBase *)*plVar2 == param_1) {
          pFVar4 = (FSetHashBucket *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pFVar4 = (FSetHashBucket *)(plVar2 + 1);
          }
          return pFVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (FSetHashBucket *)0x0;
}

// Find @ 14229ab20

FSetHashBucket * __thiscall
TMapBase<UPackage_*,FSetHashBucket,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPackage_*,FSetHashBucket,0>_>
::Find(TMapBase<UPackage_*,FSetHashBucket,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPackage_*,FSetHashBucket,0>_>
       *this,UPackage *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  FSetHashBucket *pFVar4;
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
        if ((UPackage *)*plVar2 == param_1) {
          pFVar4 = (FSetHashBucket *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pFVar4 = (FSetHashBucket *)(plVar2 + 1);
          }
          return pFVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (FSetHashBucket *)0x0;
}

// Remove @ 1422a5400

int __thiscall
TMapBase<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,0>_>
::Remove(TMapBase<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,0>_>
         *this,UClass *param_1)

{
  int iVar1;
  uint uVar2;
  UClass *local_res8 [4];
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    uVar2 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    local_res8[0] = param_1;
    iVar1 = TSet<TTuple<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
            ::RemoveImpl<UClass_const_*>(&this->Pairs,uVar2 >> 0x10 ^ uVar2,local_res8);
    return iVar1;
  }
  return 0;
}

// ~TMapBase<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue,0>_> @ 1422d0ea0

void __thiscall
TMapBase<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue,0>_>
::
~TMapBase<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue,0>_>
          (TMapBase<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue,0>_>
           *this)

{
  ForElementType<FSetElementId> FVar1;
  
  (this->Pairs).HashSize = 0;
  FVar1 = (this->Pairs).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// FindByHash<FPackageId> @ 142304950

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FAsyncPackage2 ** __thiscall
TMapBase<FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>_>
::FindByHash<FPackageId>
          (TMapBase<FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>_>
           *this,uint param_1,FPackageId *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  FAsyncPackage2 **ppFVar4;
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
        if (*(ulong64 *)(lVar2 + (longlong)iVar3 * 0x18) == param_2->Id) {
          ppFVar4 = (FAsyncPackage2 **)0x0;
          if (lVar1 != 0) {
            ppFVar4 = (FAsyncPackage2 **)(lVar1 + 8);
          }
          return ppFVar4;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (FAsyncPackage2 **)0x0;
}

// FindOrAddImpl<FPackageId_const_&> @ 1423049d0

FLoadedPackageRef * __thiscall
TMapBase<FPackageId,FLoadedPackageRef,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FLoadedPackageRef,0>_>
::FindOrAddImpl<FPackageId_const_&>
          (TMapBase<FPackageId,FLoadedPackageRef,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FLoadedPackageRef,0>_>
           *this,uint param_1,FPackageId *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  FPackageId *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x48;
        if (*(ulong64 *)(lVar1 + (longlong)iVar2 * 0x48) == param_2->Id) {
          if (lVar3 != 0) goto LAB_142304a62;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x40);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FPackageId,FLoadedPackageRef>,TDefaultMapHashableKeyFuncs<FPackageId,FLoadedPackageRef,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FPackageId_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FPackageId_const_&> *)(ulonglong)param_1
             ,(bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x48;
LAB_142304a62:
  return (FLoadedPackageRef *)(lVar3 + 8);
}

// Find @ 1423227f0

TTuple<FMinimalName,FPackageObjectIndex> * __thiscall
TMapBase<FPackageObjectIndex,TTuple<FMinimalName,FPackageObjectIndex>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageObjectIndex,TTuple<FMinimalName,FPackageObjectIndex>,0>_>
::Find(TMapBase<FPackageObjectIndex,TTuple<FMinimalName,FPackageObjectIndex>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageObjectIndex,TTuple<FMinimalName,FPackageObjectIndex>,0>_>
       *this,FPackageObjectIndex *param_1)

{
  int iVar1;
  ulong64 *puVar2;
  TTuple<FMinimalName,FPackageObjectIndex> *pTVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uint)param_1->TypeAndId) * 4);
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == param_1->TypeAndId) {
          pTVar3 = (TTuple<FMinimalName,FPackageObjectIndex> *)0x0;
          if (puVar2 != (ulong64 *)0x0) {
            pTVar3 = (TTuple<FMinimalName,FPackageObjectIndex> *)(puVar2 + 1);
          }
          return pTVar3;
        }
        iVar1 = (int)puVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TTuple<FMinimalName,FPackageObjectIndex> *)0x0;
}

// Remove @ 142338eb0

int __thiscall
TMapBase<int,FPublicExportKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPublicExportKey,0>_>
::Remove(TMapBase<int,FPublicExportKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPublicExportKey,0>_>
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
      while (*(int *)((longlong)iVar2 * 0x1c + lVar1) != param_1) {
        iVar2 = *(int *)((longlong)iVar2 * 0x1c + 0x14 + lVar1);
        if (iVar2 == -1) {
          return 0;
        }
      }
      TSet<TTuple<int,FPublicExportKey>,TDefaultMapHashableKeyFuncs<int,FPublicExportKey,0>,FDefaultSetAllocator>
      ::RemoveByIndex(&this->Pairs,iVar2);
      iVar4 = 1;
    }
  }
  return iVar4;
}

