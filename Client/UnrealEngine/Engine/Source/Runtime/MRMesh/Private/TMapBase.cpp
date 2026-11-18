// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MRMesh
// Functions: 3

// Emplace<unsigned___int64_const_&,TTuple<UE::Math::TBox<double>,bool>_const_&> @ 146c62e90

TTuple<UE::Math::TBox<double>,bool> * __thiscall
TMapBase<unsigned___int64,TTuple<UE::Math::TBox<double>,bool>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TTuple<UE::Math::TBox<double>,bool>,0>_>
::Emplace<unsigned___int64_const_&,TTuple<UE::Math::TBox<double>,bool>_const_&>
          (TMapBase<unsigned___int64,TTuple<UE::Math::TBox<double>,bool>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TTuple<UE::Math::TBox<double>,bool>,0>_>
           *this,ulong64 *param_1,TTuple<UE::Math::TBox<double>,bool> *param_2)

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
                   *)this,&local_28,iVar5);
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<unsigned___int64,TTuple<UE::Math::TBox<double>,bool>_>_> *)0x0) {
    *(ulong64 *)local_28.Pointer = *param_1;
    uVar3 = *(undefined8 *)&param_2->field_0x8;
    *(undefined8 *)((longlong)local_28.Pointer + 8) = *(undefined8 *)param_2;
    *(undefined8 *)((longlong)local_28.Pointer + 0x10) = uVar3;
    uVar3 = *(undefined8 *)&param_2->field_0x18;
    *(undefined8 *)((longlong)local_28.Pointer + 0x18) = *(undefined8 *)&param_2->field_0x10;
    *(undefined8 *)((longlong)local_28.Pointer + 0x20) = uVar3;
    uVar3 = *(undefined8 *)&param_2->field_0x28;
    *(undefined8 *)((longlong)local_28.Pointer + 0x28) = *(undefined8 *)&param_2->field_0x20;
    *(undefined8 *)((longlong)local_28.Pointer + 0x30) = uVar3;
    uVar3 = *(undefined8 *)&param_2->field_0x38;
    *(undefined8 *)((longlong)local_28.Pointer + 0x38) = *(undefined8 *)&param_2->field_0x30;
    *(undefined8 *)((longlong)local_28.Pointer + 0x40) = uVar3;
    *(undefined4 *)((longlong)local_28.Pointer + 0x48) = 0xffffffff;
  }
  local_res8[0] = local_28.Index;
  uVar6 = (int)((ulonglong)*(undefined8 *)local_28.Pointer >> 0x20) * 0x17 +
          (int)*(undefined8 *)local_28.Pointer;
  bVar4 = TSet<TTuple<unsigned___int64,TTuple<UE::Math::TBox<double>,bool>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TTuple<UE::Math::TBox<double>,bool>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,local_28.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<unsigned___int64,TTuple<UE::Math::TBox<double>,bool>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TTuple<UE::Math::TBox<double>,bool>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,local_28.Pointer,local_res8[0]);
  }
  return (TTuple<UE::Math::TBox<double>,bool> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + lVar7 * 0x50);
}

// Emplace<unsigned___int64_const_&,TTuple<UE::Math::TBox<double>,bool>_> @ 146c62fe0

TTuple<UE::Math::TBox<double>,bool> * __thiscall
TMapBase<unsigned___int64,TTuple<UE::Math::TBox<double>,bool>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TTuple<UE::Math::TBox<double>,bool>,0>_>
::Emplace<unsigned___int64_const_&,TTuple<UE::Math::TBox<double>,bool>_>
          (TMapBase<unsigned___int64,TTuple<UE::Math::TBox<double>,bool>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TTuple<UE::Math::TBox<double>,bool>,0>_>
           *this,ulong64 *param_1,TTuple<UE::Math::TBox<double>,bool> *param_2)

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
                   *)this,&local_28,iVar5);
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<unsigned___int64,TTuple<UE::Math::TBox<double>,bool>_>_> *)0x0) {
    *(ulong64 *)local_28.Pointer = *param_1;
    uVar3 = *(undefined8 *)&param_2->field_0x8;
    *(undefined8 *)((longlong)local_28.Pointer + 8) = *(undefined8 *)param_2;
    *(undefined8 *)((longlong)local_28.Pointer + 0x10) = uVar3;
    uVar3 = *(undefined8 *)&param_2->field_0x18;
    *(undefined8 *)((longlong)local_28.Pointer + 0x18) = *(undefined8 *)&param_2->field_0x10;
    *(undefined8 *)((longlong)local_28.Pointer + 0x20) = uVar3;
    uVar3 = *(undefined8 *)&param_2->field_0x28;
    *(undefined8 *)((longlong)local_28.Pointer + 0x28) = *(undefined8 *)&param_2->field_0x20;
    *(undefined8 *)((longlong)local_28.Pointer + 0x30) = uVar3;
    uVar3 = *(undefined8 *)&param_2->field_0x38;
    *(undefined8 *)((longlong)local_28.Pointer + 0x38) = *(undefined8 *)&param_2->field_0x30;
    *(undefined8 *)((longlong)local_28.Pointer + 0x40) = uVar3;
    *(undefined4 *)((longlong)local_28.Pointer + 0x48) = 0xffffffff;
  }
  local_res8[0] = local_28.Index;
  uVar6 = (int)((ulonglong)*(undefined8 *)local_28.Pointer >> 0x20) * 0x17 +
          (int)*(undefined8 *)local_28.Pointer;
  bVar4 = TSet<TTuple<unsigned___int64,TTuple<UE::Math::TBox<double>,bool>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TTuple<UE::Math::TBox<double>,bool>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,local_28.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<unsigned___int64,TTuple<UE::Math::TBox<double>,bool>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TTuple<UE::Math::TBox<double>,bool>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,local_28.Pointer,local_res8[0]);
  }
  return (TTuple<UE::Math::TBox<double>,bool> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + lVar7 * 0x50);
}

// FindChecked @ 146c6a140

ulong64 * __thiscall
TMapBase<unsigned_int,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned___int64,0>_>
::FindChecked(TMapBase<unsigned_int,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned___int64,0>_>
              *this,uint param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulong64 *puVar6;
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
            return (ulong64 *)(lVar1 + 8);
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
    return (ulong64 *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  puVar6 = (ulong64 *)(*pcVar3)();
  return puVar6;
}

