// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 52

// Emplace<int_const_&,FMovieSceneMuteSoloData_const_&> @ 146072da0

FMovieSceneMuteSoloData * __thiscall
TMapBase<int,FMovieSceneMuteSoloData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneMuteSoloData,0>_>
::Emplace<int_const_&,FMovieSceneMuteSoloData_const_&>
          (TMapBase<int,FMovieSceneMuteSoloData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneMuteSoloData,0>_>
           *this,int *param_1,FMovieSceneMuteSoloData *param_2)

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
  if (local_28.Pointer != (TSparseSetElement<TTuple<int,FMovieSceneMuteSoloData>_> *)0x0) {
    *(int *)local_28.Pointer = *param_1;
    *(FMovieSceneMuteSoloData *)((longlong)local_28.Pointer + 4) = *param_2;
    *(undefined4 *)((longlong)local_28.Pointer + 8) = 0xffffffff;
  }
  uVar3 = *(uint *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  bVar4 = TSet<TTuple<int,FMovieSceneMuteSoloData>,TDefaultMapHashableKeyFuncs<int,FMovieSceneMuteSoloData,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar3,local_28.Pointer,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<int,FMovieSceneMuteSoloData>,TDefaultMapHashableKeyFuncs<int,FMovieSceneMuteSoloData,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar3,local_28.Pointer,local_res8[0]);
  }
  return (FMovieSceneMuteSoloData *)(*(longlong *)&(this->Pairs).Elements + 4 + lVar6 * 0x10);
}

// Emplace<int_const_&,FMovieSceneMuteSoloData> @ 146072ec0

FMovieSceneMuteSoloData * __thiscall
TMapBase<int,FMovieSceneMuteSoloData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneMuteSoloData,0>_>
::Emplace<int_const_&,FMovieSceneMuteSoloData>
          (TMapBase<int,FMovieSceneMuteSoloData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneMuteSoloData,0>_>
           *this,int *param_1,FMovieSceneMuteSoloData *param_2)

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
  if (local_28.Pointer != (TSparseSetElement<TTuple<int,FMovieSceneMuteSoloData>_> *)0x0) {
    *(int *)local_28.Pointer = *param_1;
    *(FMovieSceneMuteSoloData *)((longlong)local_28.Pointer + 4) = *param_2;
    *(undefined4 *)((longlong)local_28.Pointer + 8) = 0xffffffff;
  }
  uVar3 = *(uint *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  bVar4 = TSet<TTuple<int,FMovieSceneMuteSoloData>,TDefaultMapHashableKeyFuncs<int,FMovieSceneMuteSoloData,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar3,local_28.Pointer,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<int,FMovieSceneMuteSoloData>,TDefaultMapHashableKeyFuncs<int,FMovieSceneMuteSoloData,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar3,local_28.Pointer,local_res8[0]);
  }
  return (FMovieSceneMuteSoloData *)(*(longlong *)&(this->Pairs).Elements + 4 + lVar6 * 0x10);
}

// Emplace<UE::MovieScene::FComponentTypeID_const_&,UE::MovieScene::FComponentTypeID_const_&> @ 146073420

FComponentTypeID * __thiscall
TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
::Emplace<UE::MovieScene::FComponentTypeID_const_&,UE::MovieScene::FComponentTypeID_const_&>
          (TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
           *this,FComponentTypeID *param_1,FComponentTypeID *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar4 * 0xc);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0xc) = 0xffffffff;
    }
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID>_>
       *)0x0) {
    *(ushort *)local_18.Pointer = param_1->Value;
    *(ushort *)((longlong)local_18.Pointer + 2) = param_2->Value;
    *(undefined4 *)((longlong)local_18.Pointer + 4) = 0xffffffff;
  }
  TSet<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>,FDefaultSetAllocator>
  ::RehashOrLink(&this->Pairs,(uint)*(ushort *)local_18.Pointer,local_18.Pointer,local_18.Index);
  return (FComponentTypeID *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_18.Index * 0xc + 2);
}

// Emplace<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID_const_&> @ 1460738b0

FComponentTypeID * __thiscall
TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
::Emplace<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID_const_&>
          (TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
           *this,FComponentTypeID *param_1,FComponentTypeID *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar4 * 0xc);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0xc) = 0xffffffff;
    }
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID>_>
       *)0x0) {
    *(ushort *)local_18.Pointer = param_1->Value;
    *(ushort *)((longlong)local_18.Pointer + 2) = param_2->Value;
    *(undefined4 *)((longlong)local_18.Pointer + 4) = 0xffffffff;
  }
  TSet<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>,FDefaultSetAllocator>
  ::RehashOrLink(&this->Pairs,(uint)*(ushort *)local_18.Pointer,local_18.Pointer,local_18.Index);
  return (FComponentTypeID *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_18.Index * 0xc + 2);
}

// EmplaceByHash<int_const_&> @ 1460755f0

FMovieSceneEntityComponentField * __thiscall
TMapBase<int,FMovieSceneEntityComponentField,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneEntityComponentField,0>_>
::EmplaceByHash<int_const_&>
          (TMapBase<int,FMovieSceneEntityComponentField,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneEntityComponentField,0>_>
           *this,uint param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  FMovieSceneEntityComponentField *pFVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_108;
  FMovieSceneEntityComponentField local_f8;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x100,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar4 * 0x100 + 4 + lVar6);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x100 + lVar6) = 0xffffffff;
    }
  }
  TSparseArrayBase<256,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<256,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_108,iVar4);
  if (local_108.Pointer != (TSparseSetElement<TTuple<int,FMovieSceneEntityComponentField>_> *)0x0) {
    memset(&local_f8,0,0xf0);
    pFVar5 = FMovieSceneEntityComponentField::FMovieSceneEntityComponentField(&local_f8);
    *(int *)local_108.Pointer = *param_2;
    FMovieSceneEntityComponentField::FMovieSceneEntityComponentField
              ((FMovieSceneEntityComponentField *)((longlong)local_108.Pointer + 8),pFVar5);
    FMovieSceneEntityComponentField::~FMovieSceneEntityComponentField(&local_f8);
    *(undefined4 *)((longlong)local_108.Pointer + 0xf8) = 0xffffffff;
  }
  local_res8[0] = local_108.Index;
  bVar3 = TSet<TTuple<int,FMovieSceneEntityComponentField>,TDefaultMapHashableKeyFuncs<int,FMovieSceneEntityComponentField,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_108.Pointer,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<int,FMovieSceneEntityComponentField>,TDefaultMapHashableKeyFuncs<int,FMovieSceneEntityComponentField,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_108.Pointer,local_res8[0]);
  }
  return (FMovieSceneEntityComponentField *)
         (*(longlong *)&(this->Pairs).Elements + 8 + lVar6 * 0x100);
}

// EmplaceByHash<int_const_&> @ 146075750

FMovieSceneEvaluationField * __thiscall
TMapBase<int,FMovieSceneEvaluationField,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneEvaluationField,0>_>
::EmplaceByHash<int_const_&>
          (TMapBase<int,FMovieSceneEvaluationField,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneEvaluationField,0>_>
           *this,uint param_1,int *param_2)

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
  if (local_18.Pointer == (TSparseSetElement<TTuple<int,FMovieSceneEvaluationField>_> *)0x0) {
    local_18.Pointer = (TSparseSetElement<TTuple<int,FMovieSceneEvaluationField>_> *)0x0;
  }
  else {
    *(int *)local_18.Pointer = *param_2;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x18) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x20) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x28) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x30) = 0;
    DestructItems<FMovieSceneEvaluationMetaData,int>((FMovieSceneEvaluationMetaData *)0x0,0);
    DestructItems<FMovieSceneEvaluationGroup,int>((FMovieSceneEvaluationGroup *)0x0,0);
    *(undefined4 *)((longlong)local_18.Pointer + 0x38) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  bVar3 = TSet<TTuple<int,FMovieSceneEvaluationField>,TDefaultMapHashableKeyFuncs<int,FMovieSceneEvaluationField,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,local_res8,(bool *)0x0);
  lVar5 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<int,FMovieSceneEvaluationField>,TDefaultMapHashableKeyFuncs<int,FMovieSceneEvaluationField,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,local_res8[0]);
  }
  return (FMovieSceneEvaluationField *)(*(longlong *)&(this->Pairs).Elements + 8 + lVar5 * 0x40);
}

// EmplaceByHash<int_const_&> @ 1460758a0

FMovieSceneEvaluationTemplate * __thiscall
TMapBase<int,FMovieSceneEvaluationTemplate,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneEvaluationTemplate,0>_>
::EmplaceByHash<int_const_&>
          (TMapBase<int,FMovieSceneEvaluationTemplate,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneEvaluationTemplate,0>_>
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
                      (0x170,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x170 + 4 + lVar3);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x170 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<368,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<368,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer != (TSparseSetElement<TTuple<int,FMovieSceneEvaluationTemplate>_> *)0x0) {
    TKeyInitializer<int_const_&>::
    operator<int,FMovieSceneEvaluationTemplate>_TTuple<int,FMovieSceneEvaluationTemplate>
              (&local_res8,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x168) = 0xffffffff;
  }
  local_res8.Key._0_4_ = local_18.Index;
  bVar4 = TSet<TTuple<int,FMovieSceneEvaluationTemplate>,TDefaultMapHashableKeyFuncs<int,FMovieSceneEvaluationTemplate,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,(int *)&local_res8,(bool *)0x0)
  ;
  if (!bVar4) {
    TSet<TTuple<int,FMovieSceneEvaluationTemplate>,TDefaultMapHashableKeyFuncs<int,FMovieSceneEvaluationTemplate,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,(int)local_res8.Key);
  }
  return (FMovieSceneEvaluationTemplate *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)(int)local_res8.Key * 0x170 + 8);
}

// EmplaceByHash<int_const_&> @ 1460759d0

FMovieSceneSequenceHierarchy * __thiscall
TMapBase<int,FMovieSceneSequenceHierarchy,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneSequenceHierarchy,0>_>
::EmplaceByHash<int_const_&>
          (TMapBase<int,FMovieSceneSequenceHierarchy,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneSequenceHierarchy,0>_>
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
                      (0x150,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x150 + 4 + lVar3);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x150 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<336,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<336,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer != (TSparseSetElement<TTuple<int,FMovieSceneSequenceHierarchy>_> *)0x0) {
    TKeyInitializer<int_const_&>::
    operator<int,FMovieSceneSequenceHierarchy>_TTuple<int,FMovieSceneSequenceHierarchy>
              (&local_res8,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x148) = 0xffffffff;
  }
  local_res8.Key._0_4_ = local_18.Index;
  bVar4 = TSet<TTuple<int,FMovieSceneSequenceHierarchy>,TDefaultMapHashableKeyFuncs<int,FMovieSceneSequenceHierarchy,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,(int *)&local_res8,(bool *)0x0)
  ;
  if (!bVar4) {
    TSet<TTuple<int,FMovieSceneSequenceHierarchy>,TDefaultMapHashableKeyFuncs<int,FMovieSceneSequenceHierarchy,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,(int)local_res8.Key);
  }
  return (FMovieSceneSequenceHierarchy *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)(int)local_res8.Key * 0x150 + 8);
}

// FindOrAddImpl<int_const_&> @ 146076260

FMovieSceneEvaluationField * __thiscall
TMapBase<int,FMovieSceneEvaluationField,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneEvaluationField,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int,FMovieSceneEvaluationField,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneEvaluationField,0>_>
           *this,uint param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  FMovieSceneEvaluationField *pFVar3;
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
        if (*piVar2 == *param_2) {
          if (piVar2 != (int *)0x0) {
            return (FMovieSceneEvaluationField *)(piVar2 + 2);
          }
          break;
        }
        iVar1 = piVar2[0xe];
      } while (iVar1 != -1);
    }
  }
  pFVar3 = EmplaceByHash<int_const_&>(this,param_1,param_2);
  return pFVar3;
}

// FindOrAddImpl<int_const_&> @ 1460762d0

FMovieSceneEvaluationTemplate * __thiscall
TMapBase<int,FMovieSceneEvaluationTemplate,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneEvaluationTemplate,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int,FMovieSceneEvaluationTemplate,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneEvaluationTemplate,0>_>
           *this,uint param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  FMovieSceneEvaluationTemplate *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x170 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == *param_2) {
          if (piVar2 != (int *)0x0) {
            return (FMovieSceneEvaluationTemplate *)(piVar2 + 2);
          }
          break;
        }
        iVar1 = piVar2[0x5a];
      } while (iVar1 != -1);
    }
  }
  pFVar3 = EmplaceByHash<int_const_&>(this,param_1,param_2);
  return pFVar3;
}

// FindOrAddImpl<FGuid_const_&> @ 146076350

FMovieSceneAnchorsScalingGroup * __thiscall
TMapBase<FGuid,FMovieSceneAnchorsScalingGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneAnchorsScalingGroup,0>_>
::FindOrAddImpl<FGuid_const_&>
          (TMapBase<FGuid,FMovieSceneAnchorsScalingGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneAnchorsScalingGroup,0>_>
           *this,uint param_1,FGuid *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FGuid *local_res20;
  
  iVar1 = TSet<TTuple<FGuid,FMovieSceneAnchorsScalingGroup>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneAnchorsScalingGroup,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x68 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (FMovieSceneAnchorsScalingGroup *)(lVar2 + 0x10);
  }
  local_res20 = param_2;
  TSet<TTuple<FGuid,FMovieSceneAnchorsScalingGroup>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneAnchorsScalingGroup,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FGuid_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FGuid_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FMovieSceneAnchorsScalingGroup *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x68 + 0x10);
}

// Find @ 1460c4ae0

FNavigationToolSerializedTreeNode * __thiscall
TMapBase<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode,0>_>
::Find(TMapBase<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode,0>_>
       *this,FNavigationToolSerializedItem *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  FNavigationToolSerializedTreeNode *pFVar6;
  
  iVar2 = (param_1->Id).Data.ArrayNum;
  if (iVar2 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Id).Data.AllocatorInstance.Data;
  }
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
  iVar2 = TSet<TTuple<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode>,TDefaultMapHashableKeyFuncs<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FNavigationToolSerializedItem>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x40 + *(longlong *)&(this->Pairs).Elements;
    pFVar6 = (FNavigationToolSerializedTreeNode *)0x0;
    if (lVar4 != 0) {
      pFVar6 = (FNavigationToolSerializedTreeNode *)(lVar4 + 0x10);
    }
    return pFVar6;
  }
  return (FNavigationToolSerializedTreeNode *)0x0;
}

// FindChecked @ 1460c4f10

FMovieSceneMuteSoloData * __thiscall
TMapBase<int,FMovieSceneMuteSoloData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneMuteSoloData,0>_>
::FindChecked(TMapBase<int,FMovieSceneMuteSoloData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneMuteSoloData,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FMovieSceneMuteSoloData *pFVar4;
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
            return (FMovieSceneMuteSoloData *)(piVar5 + 1);
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
    return (FMovieSceneMuteSoloData *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FMovieSceneMuteSoloData *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 1460c4fb0

FMovieSceneMuteSoloData * __thiscall
TMapBase<int,FMovieSceneMuteSoloData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneMuteSoloData,0>_>
::FindChecked(TMapBase<int,FMovieSceneMuteSoloData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneMuteSoloData,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FMovieSceneMuteSoloData *pFVar4;
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
            return (FMovieSceneMuteSoloData *)(piVar5 + 1);
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
                     ,0x27b,L"");
  if (!bVar2) {
    return (FMovieSceneMuteSoloData *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FMovieSceneMuteSoloData *)(*pcVar1)();
  return pFVar4;
}

// Remove @ 1460e77d0

int __thiscall
TMapBase<FObjectKey,FMovieSceneCompiledDataID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneCompiledDataID,0>_>
::Remove(TMapBase<FObjectKey,FMovieSceneCompiledDataID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneCompiledDataID,0>_>
         *this,FObjectKey *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    uVar3 = param_1->ObjectSerialNumber;
    uVar5 = param_1->ObjectIndex - uVar3 ^ uVar3 >> 0xd;
    uVar2 = (-0x61c88647 - uVar5) - uVar3 ^ uVar5 << 8;
    uVar4 = (uVar3 - uVar2) - uVar5 ^ uVar2 >> 0xd;
    uVar5 = (uVar5 - uVar4) - uVar2 ^ uVar4 >> 0xc;
    uVar3 = (uVar2 - uVar5) - uVar4 ^ uVar5 << 0x10;
    uVar2 = (uVar4 - uVar3) - uVar5 ^ uVar3 >> 5;
    uVar4 = (uVar5 - uVar2) - uVar3 ^ uVar2 >> 3;
    uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 << 10;
    iVar1 = TSet<TTuple<FObjectKey,FMovieSceneCompiledDataID>,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneCompiledDataID,0>,FDefaultSetAllocator>
            ::RemoveImpl<FObjectKey>(&this->Pairs,(uVar2 - uVar3) - uVar4 ^ uVar3 >> 0xf,param_1);
    return iVar1;
  }
  return 0;
}

// Emplace<int_const_&> @ 146105a60

FAllocationMask * __thiscall
TMapBase<int,UE::MovieScene::FFreeEntityOperation::FAllocationMask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MovieScene::FFreeEntityOperation::FAllocationMask,0>_>
::Emplace<int_const_&>
          (TMapBase<int,UE::MovieScene::FFreeEntityOperation::FAllocationMask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MovieScene::FFreeEntityOperation::FAllocationMask,0>_>
           *this,int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  TSparseSetElement<TTuple<int,UE::MovieScene::FFreeEntityOperation::FAllocationMask>_> *pTVar6;
  longlong lVar7;
  int local_48 [2];
  FSparseArrayAllocationInfo local_40 [3];
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
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
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x38 + 4 + lVar7);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x38 + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,local_40,iVar5);
  if (local_40[0].Pointer ==
      (TSparseSetElement<TTuple<int,UE::MovieScene::FFreeEntityOperation::FAllocationMask>_> *)0x0)
  {
    pTVar6 = (TSparseSetElement<TTuple<int,UE::MovieScene::FFreeEntityOperation::FAllocationMask>_>
              *)0x0;
  }
  else {
    *(int *)local_40[0].Pointer = *param_1;
    *(undefined8 *)((longlong)local_40[0].Pointer + 0x18) = 0;
    *(undefined8 *)((longlong)local_40[0].Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_40[0].Pointer + 0x10) = 0;
    if (*(void **)((longlong)local_40[0].Pointer + 0x18) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)local_40[0].Pointer + 0x18));
    }
    *(undefined8 *)((longlong)local_40[0].Pointer + 0x18) = 0;
    *(undefined4 *)((longlong)local_40[0].Pointer + 0x20) = 0;
    *(undefined4 *)((longlong)local_40[0].Pointer + 0x24) = 0x80;
    *(undefined1 *)((longlong)local_40[0].Pointer + 0x28) = 0;
    *(undefined4 *)((longlong)local_40[0].Pointer + 0x30) = 0xffffffff;
    pTVar6 = local_40[0].Pointer;
  }
  uVar3 = *(uint *)pTVar6;
  local_48[0] = local_40[0].Index;
  bVar4 = TSet<TTuple<int,UE::MovieScene::FFreeEntityOperation::FAllocationMask>,TDefaultMapHashableKeyFuncs<int,UE::MovieScene::FFreeEntityOperation::FAllocationMask,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar3,pTVar6,local_48,(bool *)0x0);
  lVar7 = (longlong)local_48[0];
  if (!bVar4) {
    TSet<TTuple<int,UE::MovieScene::FFreeEntityOperation::FAllocationMask>,TDefaultMapHashableKeyFuncs<int,UE::MovieScene::FFreeEntityOperation::FAllocationMask,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar3,pTVar6,local_48[0]);
  }
  return (FAllocationMask *)(*(longlong *)&(this->Pairs).Elements + lVar7 * 0x38 + 8);
}

// EmplaceByHash<int> @ 146107960

FAllocationMask * __thiscall
TMapBase<int,UE::MovieScene::FFreeEntityOperation::FAllocationMask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MovieScene::FFreeEntityOperation::FAllocationMask,0>_>
::EmplaceByHash<int>
          (TMapBase<int,UE::MovieScene::FFreeEntityOperation::FAllocationMask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MovieScene::FFreeEntityOperation::FAllocationMask,0>_>
           *this,uint param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  TSparseSetElement<TTuple<int,UE::MovieScene::FFreeEntityOperation::FAllocationMask>_> *pTVar5;
  longlong lVar6;
  int local_58 [2];
  FSparseArrayAllocationInfo local_50 [3];
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar4 * 0x38 + 4 + lVar6);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x38 + lVar6) = 0xffffffff;
    }
  }
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,local_50,iVar4);
  if (local_50[0].Pointer ==
      (TSparseSetElement<TTuple<int,UE::MovieScene::FFreeEntityOperation::FAllocationMask>_> *)0x0)
  {
    pTVar5 = (TSparseSetElement<TTuple<int,UE::MovieScene::FFreeEntityOperation::FAllocationMask>_>
              *)0x0;
  }
  else {
    *(int *)local_50[0].Pointer = *param_2;
    *(undefined8 *)((longlong)local_50[0].Pointer + 0x18) = 0;
    *(undefined8 *)((longlong)local_50[0].Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_50[0].Pointer + 0x10) = 0;
    if (*(void **)((longlong)local_50[0].Pointer + 0x18) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)local_50[0].Pointer + 0x18));
    }
    *(undefined8 *)((longlong)local_50[0].Pointer + 0x18) = 0;
    *(undefined4 *)((longlong)local_50[0].Pointer + 0x20) = 0;
    *(undefined4 *)((longlong)local_50[0].Pointer + 0x24) = 0x80;
    *(undefined1 *)((longlong)local_50[0].Pointer + 0x28) = 0;
    *(undefined4 *)((longlong)local_50[0].Pointer + 0x30) = 0xffffffff;
    pTVar5 = local_50[0].Pointer;
  }
  local_58[0] = local_50[0].Index;
  bVar3 = TSet<TTuple<int,UE::MovieScene::FFreeEntityOperation::FAllocationMask>,TDefaultMapHashableKeyFuncs<int,UE::MovieScene::FFreeEntityOperation::FAllocationMask,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,pTVar5,local_58,(bool *)0x0);
  lVar6 = (longlong)local_58[0];
  if (!bVar3) {
    TSet<TTuple<int,UE::MovieScene::FFreeEntityOperation::FAllocationMask>,TDefaultMapHashableKeyFuncs<int,UE::MovieScene::FFreeEntityOperation::FAllocationMask,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,pTVar5,local_58[0]);
  }
  return (FAllocationMask *)(*(longlong *)&(this->Pairs).Elements + lVar6 * 0x38 + 8);
}

// FindOrAddImpl<UE::MovieScene::FEntityGroupID_const_&> @ 14610b5b0

FEntityGroupInfo * __thiscall
TMapBase<UE::MovieScene::FEntityGroupID,UMovieSceneEntityGroupingSystem::FEntityGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FEntityGroupID,UMovieSceneEntityGroupingSystem::FEntityGroupInfo,0>_>
::FindOrAddImpl<UE::MovieScene::FEntityGroupID_const_&>
          (TMapBase<UE::MovieScene::FEntityGroupID,UMovieSceneEntityGroupingSystem::FEntityGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FEntityGroupID,UMovieSceneEntityGroupingSystem::FEntityGroupInfo,0>_>
           *this,uint param_1,FEntityGroupID *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [2];
  FEntityGroupID *local_res20;
  
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
        if ((*(int *)(lVar2 + (longlong)iVar3 * 0x18) == (param_2->PolicyKey).Index) &&
           (*(int *)(lVar1 + 4) == param_2->GroupIndex)) {
          if ((iVar3 != -1) && (lVar1 != 0)) {
            return (FEntityGroupInfo *)(lVar1 + 0xc);
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<UE::MovieScene::FEntityGroupID,UMovieSceneEntityGroupingSystem::FEntityGroupInfo>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FEntityGroupID,UMovieSceneEntityGroupingSystem::FEntityGroupInfo,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UE::MovieScene::FEntityGroupID_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<UE::MovieScene::FEntityGroupID_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FEntityGroupInfo *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18 + 0xc);
}

// FindOrAddImpl<FMovieSceneEvaluationFieldEntityKey_const_&> @ 14610b680

FImportedEntityData * __thiscall
TMapBase<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>_>
::FindOrAddImpl<FMovieSceneEvaluationFieldEntityKey_const_&>
          (TMapBase<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>_>
           *this,uint param_1,FMovieSceneEvaluationFieldEntityKey *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FMovieSceneEvaluationFieldEntityKey *local_res20;
  
  iVar1 = TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FMovieSceneEvaluationFieldEntityKey>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x1c + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (FImportedEntityData *)(lVar2 + 0xc);
  }
  local_res20 = param_2;
  TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FMovieSceneEvaluationFieldEntityKey_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FMovieSceneEvaluationFieldEntityKey_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FImportedEntityData *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x1c + 0xc);
}

// GetKeys<TSizedDefaultAllocator<32>_> @ 14610c9f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<UE::MovieScene::FEntityGroupID,UMovieSceneEntityGroupingSystem::FEntityGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FEntityGroupID,UMovieSceneEntityGroupingSystem::FEntityGroupInfo,0>_>
::GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<UE::MovieScene::FEntityGroupID,UMovieSceneEntityGroupingSystem::FEntityGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FEntityGroupID,UMovieSceneEntityGroupingSystem::FEntityGroupInfo,0>_>
           *this,TArray<UE::MovieScene::FEntityGroupID,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  code *pcVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  ForAnyElementType FVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  ForElementType<unsigned_int> FVar22;
  uint *puVar23;
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
  TMapBase<UE::MovieScene::FEntityGroupID,UMovieSceneEntityGroupingSystem::FEntityGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FEntityGroupID,UMovieSceneEntityGroupingSystem::FEntityGroupInfo,0>_>
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
  ulonglong uVar21;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  piVar1 = &param_1->ArrayMax;
  uVar21 = 0;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
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
  uVar16 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  uVar19 = 0;
  if (uVar16 == 0) goto LAB_14610cd26;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar16);
  }
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar16);
  uVar17 = 1;
  if (3 < uVar16) {
    uVar15 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_120 = (undefined4)lVar6;
    uVar17 = 1 << ((byte)lVar6 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar17 <= (int)local_50)) goto LAB_14610cd26;
  local_50 = uVar17;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar17 != 0) {
    uVar16 = uVar17;
    if (uVar17 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar16 = 0;
        goto LAB_14610cb01;
      }
    }
    else {
LAB_14610cb01:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar16,4);
    }
    if (0 < (int)uVar17) {
      uVar20 = (ulonglong)uVar17;
      uVar15 = uVar21;
      do {
        FVar13.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar13.Data = local_58.Data;
        }
        uVar11 = uVar15 & (longlong)(int)uVar17 - 1U;
        uVar15 = uVar15 + 1;
        *(undefined4 *)(FVar13.Data + uVar11 * 4) = 0xffffffff;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
  }
  if (local_50 != 0) {
    local_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_168 = 0;
    uStack_164 = 1;
    uStack_154 = 0;
    uStack_150 = 0;
    uVar15 = uVar21;
    if (local_70 != 0) {
      FVar22 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar22 = local_78;
      }
      uVar16 = *(uint *)FVar22;
      uVar20 = uVar21;
      while (uVar16 == 0) {
        uStack_150 = (int)uVar20 + 0x20;
        uVar20 = (ulonglong)uStack_150;
        iVar10 = (int)uVar15;
        local_168 = iVar10 + 1;
        uVar15 = (ulonglong)local_168;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_168)
        goto LAB_14610cc12;
        uVar16 = ((uint *)((longlong)FVar22 + 4))[iVar10];
      }
      uStack_164 = -uVar16 & uVar16;
      uVar15 = (ulonglong)uStack_164 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      local_11c = (int)lVar6;
      uStack_154 = local_11c + -1 + uStack_150;
      uVar15 = (ulonglong)uStack_154;
      if ((int)local_70 < (int)uStack_154) {
LAB_14610cc12:
        uVar15 = (ulonglong)local_70;
        uStack_154 = local_70;
      }
    }
    local_114._4_8_ = local_98;
    local_108._padding_ = CONCAT44(uStack_164,local_168);
    local_108.CurrentBitIndex = uStack_154;
    local_108.UnvisitedBitMask = 0xffffffff;
    local_108._28_4_ = uStack_14c;
    local_108.BaseBitIndex = uStack_150;
    if ((int)uVar15 < (int)local_70) {
      do {
        piVar2 = (int *)(*(longlong *)local_114._4_8_ + (longlong)(int)uVar15 * 0x14);
        uVar16 = piVar2[1];
        uVar14 = *piVar2 - uVar16 ^ uVar16 >> 0xd;
        uVar17 = (-0x61c88647 - uVar14) - uVar16 ^ uVar14 << 8;
        uVar18 = (uVar16 - uVar17) - uVar14 ^ uVar17 >> 0xd;
        uVar14 = (uVar14 - uVar18) - uVar17 ^ uVar18 >> 0xc;
        uVar16 = (uVar17 - uVar14) - uVar18 ^ uVar14 << 0x10;
        uVar18 = (uVar18 - uVar16) - uVar14 ^ uVar16 >> 5;
        uVar17 = (uVar14 - uVar18) - uVar16 ^ uVar18 >> 3;
        uVar16 = (uVar16 - uVar17) - uVar18 ^ uVar17 << 10;
        uVar16 = ((uVar18 - uVar16) - uVar17 ^ uVar16 >> 0xf) & local_50 - 1;
        piVar2[4] = uVar16;
        FVar13.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar13.Data = local_58.Data;
        }
        uVar20 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar16;
        piVar2[3] = *(int *)(FVar13.Data + uVar20 * 4);
        *(int *)(FVar13.Data + uVar20 * 4) = (int)uVar15;
        local_108.UnvisitedBitMask = local_108.UnvisitedBitMask & ~local_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_108);
        uVar15 = (ulonglong)(uint)local_108.CurrentBitIndex;
      } while (local_108.CurrentBitIndex < (local_108.Array)->NumBits);
    }
  }
LAB_14610cd26:
  uVar16 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  if (*piVar1 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar16,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar16 = *(uint *)&(this->Pairs).Elements.field_0x28;
  TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar15 = uVar21;
  local_c8 = uVar19;
  uStack_dc = 1;
  if (uVar16 != 0) {
    puVar23 = *(uint **)&(this->Pairs).Elements.field_0x20;
    uVar15 = (ulonglong)uVar16;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)TStack_140.Array;
    }
    uVar17 = *puVar23;
    uVar20 = uVar21;
    local_c8 = 0;
    uVar19 = 0;
    while (uVar17 == 0) {
      iVar10 = (int)uVar21;
      local_c8 = (int)uVar20 + 0x20;
      uVar20 = (ulonglong)local_c8;
      uVar19 = iVar10 + 1;
      uVar21 = (ulonglong)uVar19;
      if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar19)
      goto LAB_14610cde0;
      uVar17 = puVar23[(longlong)iVar10 + 1];
    }
    uStack_dc = -uVar17 & uVar17;
    uVar21 = (ulonglong)uStack_dc * 2 + 1;
    lVar6 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_118 = (int)lVar6;
    uVar17 = (local_c8 - 1) + local_118;
    if ((int)uVar16 < (int)uVar17) {
      uVar17 = uVar16;
    }
    uVar15 = (ulonglong)uVar17;
  }
LAB_14610cde0:
  uStack_d0 = 0xffffffff;
  uStack_cc = (uint)uVar15;
  uStack_c4 = local_9c;
  TStack_140._padding_ = CONCAT44(uStack_dc,uVar19);
  TStack_140.UnvisitedBitMask = 0xffffffff;
  TStack_140._28_4_ = local_9c;
  TStack_140.BaseBitIndex = local_c8;
  local_e8 = this;
  uStack_e0 = uVar19;
  local_d8 = (undefined1 *)TStack_140.Array;
  TStack_140.CurrentBitIndex = uStack_cc;
  if ((int)uStack_cc < (int)uVar16) {
    do {
      iVar8 = TStack_140.CurrentBitIndex;
      lVar6 = *(longlong *)&(this->Pairs).Elements;
      uVar19 = *(uint *)(lVar6 + 4 + (longlong)(int)uVar15 * 0x18);
      iVar10 = *(int *)(lVar6 + (longlong)(int)uVar15 * 0x18);
      uVar17 = iVar10 - uVar19 ^ uVar19 >> 0xd;
      uVar16 = (-0x61c88647 - uVar17) - uVar19 ^ uVar17 << 8;
      uVar14 = (uVar19 - uVar16) - uVar17 ^ uVar16 >> 0xd;
      uVar17 = (uVar17 - uVar14) - uVar16 ^ uVar14 >> 0xc;
      uVar16 = (uVar16 - uVar17) - uVar14 ^ uVar17 << 0x10;
      uVar14 = (uVar14 - uVar16) - uVar17 ^ uVar16 >> 5;
      uVar17 = (uVar17 - uVar14) - uVar16 ^ uVar14 >> 3;
      uVar16 = (uVar16 - uVar17) - uVar14 ^ uVar17 << 10;
      if (local_98._8_4_ != local_64) {
        FVar13.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar13.Data = local_58.Data;
        }
        iVar4 = *(int *)(FVar13.Data +
                        (ulonglong)(local_50 - 1 & ((uVar14 - uVar16) - uVar17 ^ uVar16 >> 0xf)) * 4
                        );
        while (iVar4 != -1) {
          lVar12 = (longlong)iVar4;
          if ((*(int *)(local_98._0_8_ + lVar12 * 0x14) == iVar10) &&
             (*(uint *)(local_98._0_8_ + lVar12 * 0x14 + 4) == uVar19)) {
            if (iVar4 != -1) goto LAB_14610cfe9;
            break;
          }
          iVar4 = *(int *)(local_98._0_8_ + lVar12 * 0x14 + 0xc);
        }
      }
      pFVar5 = (param_1->AllocatorInstance).Data;
      pFVar3 = (FScriptContainerElement *)(lVar6 + (longlong)TStack_140.CurrentBitIndex * 0x18);
      if (((pFVar5 <= pFVar3) && (pFVar3 < pFVar5 + (longlong)*piVar1 * 0xc)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        iVar10 = (*pcVar7)();
        return iVar10;
      }
      iVar10 = param_1->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar10 + 1;
      pFVar5 = (param_1->AllocatorInstance).Data;
      *(undefined8 *)(pFVar5 + (longlong)iVar10 * 0xc) = *(undefined8 *)pFVar3;
      *(undefined4 *)(pFVar5 + (longlong)iVar10 * 0xc + 8) = *(undefined4 *)(pFVar3 + 8);
      TSet<UE::MovieScene::FEntityGroupID,DefaultKeyFuncs<UE::MovieScene::FEntityGroupID,0>,FDefaultSetAllocator>
      ::Emplace<UE::MovieScene::FEntityGroupID_const_&>
                ((TSet<UE::MovieScene::FEntityGroupID,DefaultKeyFuncs<UE::MovieScene::FEntityGroupID,0>,FDefaultSetAllocator>
                  *)local_98,(FEntityGroupID *)local_114,
                 (bool *)(*(longlong *)&(this->Pairs).Elements + (longlong)iVar8 * 0x18));
LAB_14610cfe9:
      TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
      uVar15 = (ulonglong)(uint)TStack_140.CurrentBitIndex;
    } while (TStack_140.CurrentBitIndex < (TStack_140.Array)->NumBits);
  }
  iVar10 = param_1->ArrayNum;
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<UE::MovieScene::FEntityGroupID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UE::MovieScene::FEntityGroupID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<UE::MovieScene::FEntityGroupID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return iVar10;
}

// Find @ 146130d20

bool * __thiscall
TMapBase<unsigned_int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>_>::
Find(TMapBase<unsigned_int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>_>
     *this,uint param_1)

{
  uint uVar1;
  uint *puVar2;
  bool *pbVar3;
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
          pbVar3 = (bool *)0x0;
          if (puVar2 != (uint *)0x0) {
            pbVar3 = (bool *)(puVar2 + 1);
          }
          return pbVar3;
        }
        uVar1 = puVar2[2];
      } while (uVar1 != 0xffffffff);
    }
  }
  return (bool *)0x0;
}

// Find @ 146130d80

TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
* __thiscall
TMapBase<FMovieSceneSequenceID,TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>,0>_>
::Find(TMapBase<FMovieSceneSequenceID,TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>,0>_>
       *this,FMovieSceneSequenceID *param_1)

{
  uint uVar1;
  uint *puVar2;
  ForElementType<FSetElementId> FVar3;
  TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
  *pTVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1->Value) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == param_1->Value) {
          pTVar4 = (TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
                    *)0x0;
          if (puVar2 != (uint *)0x0) {
            pTVar4 = (TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
                      *)(puVar2 + 2);
          }
          return pTVar4;
        }
        uVar1 = puVar2[0x16];
      } while (uVar1 != 0xffffffff);
    }
  }
  return (TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
          *)0x0;
}

// FindChecked @ 1461310d0

ushort * __thiscall
TMapBase<unsigned_short,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>_>
::FindChecked(TMapBase<unsigned_short,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>_>
              *this,ushort param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ushort *puVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 +
                    ((ulonglong)((this->Pairs).HashSize - 1) & (ulonglong)param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0xc;
        if (*(ushort *)(lVar2 + (longlong)iVar5 * 0xc) == param_1) {
          if (lVar1 != 0) {
            return (ushort *)(lVar1 + 2);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 4);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (ushort *)&DAT_00000002;
  }
  pcVar3 = (code *)swi(3);
  puVar6 = (ushort *)(*pcVar3)();
  return puVar6;
}

// Emplace<FName_const_&> @ 14616bf00

FMovieSceneObjectBindingIDs * __thiscall
TMapBase<FName,FMovieSceneObjectBindingIDs,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneObjectBindingIDs,0>_>
::Emplace<FName_const_&>
          (TMapBase<FName,FMovieSceneObjectBindingIDs,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneObjectBindingIDs,0>_>
           *this,FName *param_1)

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
                   *)this,&local_18,iVar5);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FName,FMovieSceneObjectBindingIDs>_> *)0x0) {
    *(FName *)local_18.Pointer = *param_1;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x18) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)local_18.Pointer;
  local_res8[0] = local_18.Index;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar6 = uVar6 + (int)((ulonglong)uVar3 >> 0x20);
  bVar4 = TSet<TTuple<FName,FMovieSceneObjectBindingIDs>,TDefaultMapHashableKeyFuncs<FName,FMovieSceneObjectBindingIDs,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,local_18.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FName,FMovieSceneObjectBindingIDs>,TDefaultMapHashableKeyFuncs<FName,FMovieSceneObjectBindingIDs,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,local_18.Pointer,local_res8[0]);
  }
  return (FMovieSceneObjectBindingIDs *)(*(longlong *)&(this->Pairs).Elements + 8 + lVar7 * 0x20);
}

// EmplaceByHash<FName_const_&> @ 14616e030

FMovieSceneObjectBindingIDs * __thiscall
TMapBase<FName,FMovieSceneObjectBindingIDs,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneObjectBindingIDs,0>_>
::EmplaceByHash<FName_const_&>
          (TMapBase<FName,FMovieSceneObjectBindingIDs,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneObjectBindingIDs,0>_>
           *this,uint param_1,FName *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  TSparseSetElement<TTuple<FName,FMovieSceneObjectBindingIDs>_> *pTVar5;
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
  pTVar5 = (TSparseSetElement<TTuple<FName,FMovieSceneObjectBindingIDs>_> *)0x0;
  if (local_18.Pointer != (TSparseSetElement<TTuple<FName,FMovieSceneObjectBindingIDs>_> *)0x0) {
    *(FName *)local_18.Pointer = *param_2;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x18) = 0xffffffff;
    pTVar5 = local_18.Pointer;
  }
  local_res8[0] = local_18.Index;
  bVar3 = TSet<TTuple<FName,FMovieSceneObjectBindingIDs>,TDefaultMapHashableKeyFuncs<FName,FMovieSceneObjectBindingIDs,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,pTVar5,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<FName,FMovieSceneObjectBindingIDs>,TDefaultMapHashableKeyFuncs<FName,FMovieSceneObjectBindingIDs,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,pTVar5,local_res8[0]);
  }
  return (FMovieSceneObjectBindingIDs *)(*(longlong *)&(this->Pairs).Elements + 8 + lVar6 * 0x20);
}

// FindOrAddImpl<unsigned_short_const_&> @ 146170790

FTaskPrerequisiteCache * __thiscall
TMapBase<unsigned_short,UE::MovieScene::FTaskPrerequisiteCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FTaskPrerequisiteCache,0>_>
::FindOrAddImpl<unsigned_short_const_&>
          (TMapBase<unsigned_short,UE::MovieScene::FTaskPrerequisiteCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FTaskPrerequisiteCache,0>_>
           *this,uint param_1,ushort *param_2)

{
  int iVar1;
  ushort *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  ushort *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        puVar2 = (ushort *)((longlong)iVar1 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (ushort *)0x0) {
            return (FTaskPrerequisiteCache *)(puVar2 + 4);
          }
          break;
        }
        iVar1 = *(int *)(puVar2 + 0x14);
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned_short,UE::MovieScene::FTaskPrerequisiteCache>,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FTaskPrerequisiteCache,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_short_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned_short_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (FTaskPrerequisiteCache *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x30);
}

// FindOrAddImpl<FGuid_const_&> @ 146170930

FBoundObjects * __thiscall
TMapBase<FGuid,FMovieSceneObjectCache::FBoundObjects,FDefaultSetAllocator,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>_>
::FindOrAddImpl<FGuid_const_&>
          (TMapBase<FGuid,FMovieSceneObjectCache::FBoundObjects,FDefaultSetAllocator,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>_>
           *this,uint param_1,FGuid *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FGuid *local_res20;
  
  iVar1 = TSet<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x38 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (FBoundObjects *)(lVar2 + 0x10);
  }
  local_res20 = param_2;
  TSet<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FGuid_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FGuid_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FBoundObjects *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x38 + 0x10);
}

// FindOrAddImpl<FGuid_const_&> @ 1461709c0

TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> * __thiscall
TMapBase<FGuid,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,FMovieSceneObjectCache::TFastGuidKeyFuncs<TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>
::FindOrAddImpl<FGuid_const_&>
          (TMapBase<FGuid,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,FMovieSceneObjectCache::TFastGuidKeyFuncs<TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>
           *this,uint param_1,FGuid *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FGuid *local_res20;
  
  iVar1 = TSet<TTuple<FGuid,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,FMovieSceneObjectCache::TFastGuidKeyFuncs<TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x68 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)(lVar2 + 0x10);
  }
  local_res20 = param_2;
  TSet<TTuple<FGuid,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,FMovieSceneObjectCache::TFastGuidKeyFuncs<TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FGuid_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FGuid_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x68 + 0x10);
}

// FindOrAddImpl<UE::MovieScene::FMovieSceneEntityID_const_&> @ 146170a50

TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
* __thiscall
TMapBase<UE::MovieScene::FMovieSceneEntityID,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
::FindOrAddImpl<UE::MovieScene::FMovieSceneEntityID_const_&>
          (TMapBase<UE::MovieScene::FMovieSceneEntityID,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
           *this,uint param_1,FMovieSceneEntityID *param_2)

{
  int iVar1;
  ushort *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FMovieSceneEntityID *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        puVar2 = (ushort *)((longlong)iVar1 * 0x38 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == param_2->Value) {
          if (puVar2 != (ushort *)0x0) {
            return (TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                    *)(puVar2 + 4);
          }
          break;
        }
        iVar1 = *(int *)(puVar2 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UE::MovieScene::FMovieSceneEntityID_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<UE::MovieScene::FMovieSceneEntityID_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x38 + 8);
}

// FindOrAddImpl<FMovieSceneObjectBindingID_const_&> @ 146170b00

TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> * __thiscall
TMapBase<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
::FindOrAddImpl<FMovieSceneObjectBindingID_const_&>
          (TMapBase<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
           *this,uint param_1,FMovieSceneObjectBindingID *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FMovieSceneObjectBindingID *local_res20;
  
  iVar1 = TSet<TTuple<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FMovieSceneObjectBindingID>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x70 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)(lVar2 + 0x18);
  }
  local_res20 = param_2;
  TSet<TTuple<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FMovieSceneObjectBindingID_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FMovieSceneObjectBindingID_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x70 + 0x18);
}

// FindOrAddImpl<FMovieSceneTrackInstanceInput_const_&> @ 146170b90

TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
* __thiscall
TMapBase<FMovieSceneTrackInstanceInput,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneTrackInstanceInput,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
::FindOrAddImpl<FMovieSceneTrackInstanceInput_const_&>
          (TMapBase<FMovieSceneTrackInstanceInput,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneTrackInstanceInput,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
           *this,uint param_1,FMovieSceneTrackInstanceInput *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FMovieSceneTrackInstanceInput *local_res20;
  
  iVar1 = TSet<TTuple<FMovieSceneTrackInstanceInput,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneTrackInstanceInput,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FMovieSceneTrackInstanceInput>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x40 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            *)(lVar2 + 0x10);
  }
  local_res20 = param_2;
  TSet<TTuple<FMovieSceneTrackInstanceInput,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneTrackInstanceInput,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FMovieSceneTrackInstanceInput_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FMovieSceneTrackInstanceInput_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x40 + 0x10);
}

// FindOrAddImpl<FObjectKey_const_&> @ 146170c20

TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
* __thiscall
TMapBase<FObjectKey,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
::FindOrAddImpl<FObjectKey_const_&>
          (TMapBase<FObjectKey,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
           *this,uint param_1,FObjectKey *param_2)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [2];
  FObjectKey *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        piVar1 = (int *)((longlong)iVar2 * 0x38 + *(longlong *)&(this->Pairs).Elements);
        if ((*piVar1 == param_2->ObjectIndex) && (piVar1[1] == param_2->ObjectSerialNumber)) {
          if ((iVar2 != -1) && (piVar1 != (int *)0x0)) {
            return (TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                    *)(piVar1 + 2);
          }
          break;
        }
        iVar2 = piVar1[0xc];
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FObjectKey,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FObjectKey_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FObjectKey_const_&> *)(ulonglong)param_1
             ,(bool *)&local_res20);
  return (TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x38 + 8);
}

// FindOrAddImpl<UE::MovieScene::FPreAnimatedEvalHookKeyType_const_&> @ 146170cf0

TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
* __thiscall
TMapBase<UE::MovieScene::FPreAnimatedEvalHookKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedEvalHookKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
::FindOrAddImpl<UE::MovieScene::FPreAnimatedEvalHookKeyType_const_&>
          (TMapBase<UE::MovieScene::FPreAnimatedEvalHookKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedEvalHookKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
           *this,uint param_1,FPreAnimatedEvalHookKeyType *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FPreAnimatedEvalHookKeyType *local_res20;
  
  iVar1 = TSet<TTuple<UE::MovieScene::FPreAnimatedEvalHookKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedEvalHookKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<UE::MovieScene::FPreAnimatedEvalHookKeyType>
                    (&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x40 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            *)(lVar2 + 0x10);
  }
  local_res20 = param_2;
  TSet<TTuple<UE::MovieScene::FPreAnimatedEvalHookKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedEvalHookKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UE::MovieScene::FPreAnimatedEvalHookKeyType_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<UE::MovieScene::FPreAnimatedEvalHookKeyType_const_&> *)
             (ulonglong)param_1,(bool *)&local_res20);
  return (TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x40 + 0x10);
}

// FindOrAddImpl<UE::MovieScene::FPreAnimatedEvaluationKeyType_const_&> @ 146170d80

TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
* __thiscall
TMapBase<UE::MovieScene::FPreAnimatedEvaluationKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedEvaluationKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
::FindOrAddImpl<UE::MovieScene::FPreAnimatedEvaluationKeyType_const_&>
          (TMapBase<UE::MovieScene::FPreAnimatedEvaluationKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedEvaluationKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
           *this,uint param_1,FPreAnimatedEvaluationKeyType *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FPreAnimatedEvaluationKeyType *local_res20;
  
  iVar1 = TSet<TTuple<UE::MovieScene::FPreAnimatedEvaluationKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedEvaluationKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<UE::MovieScene::FPreAnimatedEvaluationKeyType>
                    (&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x40 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            *)(lVar2 + 0x10);
  }
  local_res20 = param_2;
  TSet<TTuple<UE::MovieScene::FPreAnimatedEvaluationKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedEvaluationKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UE::MovieScene::FPreAnimatedEvaluationKeyType_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<UE::MovieScene::FPreAnimatedEvaluationKeyType_const_&> *)
             (ulonglong)param_1,(bool *)&local_res20);
  return (TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x40 + 0x10);
}

// FindOrAddImpl<FName_const_&> @ 146170e10

FMovieSceneObjectBindingIDs * __thiscall
TMapBase<FName,FMovieSceneObjectBindingIDs,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneObjectBindingIDs,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,FMovieSceneObjectBindingIDs,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneObjectBindingIDs,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  FMovieSceneObjectBindingIDs *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (FMovieSceneObjectBindingIDs *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  pFVar3 = EmplaceByHash<FName_const_&>(this,param_1,param_2);
  return pFVar3;
}

// FindOrAddImpl<TTuple<int,UE::MovieScene::FComponentTypeID>_> @ 146170e90

FComponentDependencies * __thiscall
TMapBase<TTuple<int,UE::MovieScene::FComponentTypeID>,UE::MovieScene::FEntitySystemScheduler::FComponentDependencies,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,UE::MovieScene::FComponentTypeID>,UE::MovieScene::FEntitySystemScheduler::FComponentDependencies,0>_>
::FindOrAddImpl<TTuple<int,UE::MovieScene::FComponentTypeID>_>
          (TMapBase<TTuple<int,UE::MovieScene::FComponentTypeID>,UE::MovieScene::FEntitySystemScheduler::FComponentDependencies,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,UE::MovieScene::FComponentTypeID>,UE::MovieScene::FEntitySystemScheduler::FComponentDependencies,0>_>
           *this,uint param_1,TTuple<int,UE::MovieScene::FComponentTypeID> *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [2];
  TTuple<int,UE::MovieScene::FComponentTypeID> *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x28;
        if ((*(int *)(lVar2 + (longlong)iVar3 * 0x28) == *(int *)param_2) &&
           (*(short *)(lVar1 + 4) == *(short *)&param_2->field_0x4)) {
          if ((iVar3 != -1) && (lVar1 != 0)) {
            return (FComponentDependencies *)(lVar1 + 8);
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x20);
      } while (iVar3 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<TTuple<int,UE::MovieScene::FComponentTypeID>,UE::MovieScene::FEntitySystemScheduler::FComponentDependencies>,TDefaultMapHashableKeyFuncs<TTuple<int,UE::MovieScene::FComponentTypeID>,UE::MovieScene::FEntitySystemScheduler::FComponentDependencies,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TTuple<int,UE::MovieScene::FComponentTypeID>_&&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<TTuple<int,UE::MovieScene::FComponentTypeID>_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FComponentDependencies *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28 + 8);
}

// Find @ 1461a6dd0

FBoundObjects * __thiscall
TMapBase<FGuid,FMovieSceneObjectCache::FBoundObjects,FDefaultSetAllocator,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>_>
::Find(TMapBase<FGuid,FMovieSceneObjectCache::FBoundObjects,FDefaultSetAllocator,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>_>
       *this,FGuid *param_1)

{
  int iVar1;
  FBoundObjects *pFVar2;
  longlong lVar3;
  
  iVar1 = TSet<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    (&this->Pairs,param_1->D ^ param_1->C ^ param_1->B ^ param_1->A,param_1);
  if (iVar1 != -1) {
    lVar3 = (longlong)iVar1 * 0x38 + *(longlong *)&(this->Pairs).Elements;
    pFVar2 = (FBoundObjects *)0x0;
    if (lVar3 != 0) {
      pFVar2 = (FBoundObjects *)(lVar3 + 0x10);
    }
    return pFVar2;
  }
  return (FBoundObjects *)0x0;
}

// Find @ 1461a6e20

TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
* __thiscall
TMapBase<FObjectKey,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
::Find(TMapBase<FObjectKey,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
       *this,FObjectKey *param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  ForElementType<FSetElementId> FVar4;
  TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar5;
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
        piVar2 = (int *)((longlong)iVar8 * 0x38 + *(longlong *)&(this->Pairs).Elements);
        if ((*piVar2 == param_1->ObjectIndex) && (piVar2[1] == uVar1)) {
          if (iVar8 == -1) {
            return (TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                    *)0x0;
          }
          pTVar5 = (TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                    *)0x0;
          if (piVar2 != (int *)0x0) {
            pTVar5 = (TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                      *)(piVar2 + 2);
          }
          return pTVar5;
        }
        iVar8 = piVar2[0xc];
      } while (iVar8 != -1);
    }
  }
  return (TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *)0x0;
}

// Find @ 1461a6f30

TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
* __thiscall
TMapBase<UE::MovieScene::FPreAnimatedEvalHookKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedEvalHookKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
::Find(TMapBase<UE::MovieScene::FPreAnimatedEvalHookKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedEvalHookKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
       *this,FPreAnimatedEvalHookKeyType *param_1)

{
  int iVar1;
  TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (param_1->Hook).ObjectSerialNumber;
  uVar5 = (param_1->Hook).ObjectIndex - uVar4 ^ uVar4 >> 0xd;
  uVar6 = (-0x61c88647 - uVar5) - uVar4 ^ uVar5 << 8;
  uVar4 = (uVar4 - uVar6) - uVar5 ^ uVar6 >> 0xd;
  uVar5 = (uVar5 - uVar4) - uVar6 ^ uVar4 >> 0xc;
  uVar6 = (uVar6 - uVar5) - uVar4 ^ uVar5 << 0x10;
  uVar4 = (uVar4 - uVar6) - uVar5 ^ uVar6 >> 5;
  uVar5 = (uVar5 - uVar4) - uVar6 ^ uVar4 >> 3;
  uVar6 = (uVar6 - uVar5) - uVar4 ^ uVar5 << 10;
  iVar1 = TSet<TTuple<UE::MovieScene::FPreAnimatedEvalHookKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedEvalHookKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<UE::MovieScene::FPreAnimatedEvalHookKeyType>
                    (&this->Pairs,
                     (uVar4 - uVar6) - uVar5 ^ (uint)*(ushort *)&param_1->RootInstanceHandle ^
                     uVar6 >> 0xf ^ (param_1->SequenceID).Value,param_1);
  if (iVar1 != -1) {
    lVar3 = (longlong)iVar1 * 0x40 + *(longlong *)&(this->Pairs).Elements;
    pTVar2 = (TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
              *)0x0;
    if (lVar3 != 0) {
      pTVar2 = (TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                *)(lVar3 + 0x10);
    }
    return pTVar2;
  }
  return (TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *)0x0;
}

// Find @ 1461a7010

FAggregatePreAnimatedStateMetaData * __thiscall
TMapBase<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>_>
::Find(TMapBase<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,0>_>
       *this,FPreAnimatedStateCachedValueHandle *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ForElementType<FSetElementId> FVar5;
  FAggregatePreAnimatedStateMetaData *pFVar6;
  int iVar7;
  
  uVar2 = (param_1->TypeID).TypeID;
  uVar3 = (param_1->StorageIndex).Value;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar7 = *(int *)((longlong)FVar5 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar2 ^ uVar3)) * 4);
    if (iVar7 != -1) {
      lVar4 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar4 + (longlong)iVar7 * 0x24;
        if ((*(uint *)(lVar4 + (longlong)iVar7 * 0x24) == uVar2) && (*(uint *)(lVar1 + 4) == uVar3))
        {
          if (iVar7 == -1) {
            return (FAggregatePreAnimatedStateMetaData *)0x0;
          }
          pFVar6 = (FAggregatePreAnimatedStateMetaData *)0x0;
          if (lVar1 != 0) {
            pFVar6 = (FAggregatePreAnimatedStateMetaData *)(lVar1 + 8);
          }
          return pFVar6;
        }
        iVar7 = *(int *)(lVar1 + 0x1c);
      } while (iVar7 != -1);
    }
  }
  return (FAggregatePreAnimatedStateMetaData *)0x0;
}

// Remove @ 1461c8490

int __thiscall
TMapBase<TTuple<FObjectKey,FMovieSceneAnimTypeID>,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FMovieSceneAnimTypeID>,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
::Remove(TMapBase<TTuple<FObjectKey,FMovieSceneAnimTypeID>,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FMovieSceneAnimTypeID>,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
         *this,TTuple<FObjectKey,FMovieSceneAnimTypeID> *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    uVar3 = *(uint *)&param_1->field_0x4;
    uVar4 = *(int *)param_1 - uVar3 ^ uVar3 >> 0xd;
    uVar2 = (-0x61c88647 - uVar4) - uVar3 ^ uVar4 << 8;
    uVar5 = (uVar3 - uVar2) - uVar4 ^ uVar2 >> 0xd;
    uVar4 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 0xc;
    uVar3 = (uVar2 - uVar4) - uVar5 ^ uVar4 << 0x10;
    uVar5 = (uVar5 - uVar3) - uVar4 ^ uVar3 >> 5;
    uVar2 = (uVar4 - uVar5) - uVar3 ^ uVar5 >> 3;
    uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar2 << 10;
    uVar3 = (uVar5 - uVar3) - uVar2 ^ uVar3 >> 0xf;
    iVar1 = TSet<TTuple<TTuple<FObjectKey,FMovieSceneAnimTypeID>,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FMovieSceneAnimTypeID>,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
            ::RemoveImpl<TTuple<FObjectKey,FMovieSceneAnimTypeID>_>
                      (&this->Pairs,
                       (int)((ulonglong)*(undefined8 *)&param_1->field_0x8 >> 0x20) * 0x17 +
                       uVar3 * 0x40 + (int)*(undefined8 *)&param_1->field_0x8 +
                       (uVar3 >> 2) + 0x9e3779b9 ^ uVar3,param_1);
    return iVar1;
  }
  return 0;
}

// Remove @ 1461c8570

int __thiscall
TMapBase<UE::MovieScene::FMovieSceneEntityID,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
::Remove(TMapBase<UE::MovieScene::FMovieSceneEntityID,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
         *this,FMovieSceneEntityID *param_1)

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
                    ((longlong)(this->Pairs).HashSize - 1U & (ulonglong)param_1->Value) * 4);
    iVar4 = 0;
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      while (*(ushort *)((longlong)iVar2 * 0x38 + lVar1) != param_1->Value) {
        iVar2 = *(int *)((longlong)iVar2 * 0x38 + 0x30 + lVar1);
        if (iVar2 == -1) {
          return 0;
        }
      }
      TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
      ::RemoveByIndex(&this->Pairs,iVar2);
      iVar4 = 1;
    }
  }
  return iVar4;
}

// Remove @ 1461c85f0

int __thiscall
TMapBase<FObjectKey,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
::Remove(TMapBase<FObjectKey,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
         *this,FObjectKey *param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
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
  uVar3 = (uVar1 - uVar8) - uVar5 ^ uVar5 >> 0xd;
  uVar9 = (uVar8 - uVar3) - uVar5 ^ uVar3 >> 0xc;
  uVar8 = (uVar5 - uVar9) - uVar3 ^ uVar9 << 0x10;
  uVar5 = (uVar3 - uVar8) - uVar9 ^ uVar8 >> 5;
  uVar9 = (uVar9 - uVar5) - uVar8 ^ uVar5 >> 3;
  uVar3 = uVar9 << 10 ^ (uVar8 - uVar9) - uVar5;
  FVar7 = (this->Pairs).Hash.SecondaryData;
  if (FVar7 == (ForElementType<FSetElementId>)0x0) {
    FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
  }
  iVar6 = *(int *)((longlong)FVar7 +
                  (((longlong)(int)((uVar5 - uVar3) - uVar9) ^ (ulonglong)(uVar3 >> 0xf)) &
                  (longlong)(this->Pairs).HashSize - 1U) * 4);
  if (iVar6 != -1) {
    lVar2 = *(longlong *)&(this->Pairs).Elements;
    while ((lVar4 = (longlong)iVar6 * 0x38, *(int *)(lVar4 + lVar2) != param_1->ObjectIndex ||
           (*(uint *)(lVar4 + 4 + lVar2) != uVar1))) {
      iVar6 = *(int *)(lVar4 + 0x30 + lVar2);
      if (iVar6 == -1) {
        return 0;
      }
    }
    TSet<TTuple<FObjectKey,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
    ::RemoveByIndex(&this->Pairs,iVar6);
    iVar10 = 1;
  }
  return iVar10;
}

// Remove @ 1461c8720

int __thiscall
TMapBase<UE::MovieScene::FPreAnimatedEvaluationKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedEvaluationKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
::Remove(TMapBase<UE::MovieScene::FPreAnimatedEvaluationKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedEvaluationKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
         *this,FPreAnimatedEvaluationKeyType *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    uVar1 = (param_1->EvaluationKey).TrackIdentifier.Value;
    uVar2 = (param_1->EvaluationKey).SequenceID.Value;
    uVar3 = (param_1->EvaluationKey).SectionIndex;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 +
                    (((longlong)(int)(~uVar1 ^ uVar2 ^ uVar3) ^
                     (ulonglong)*(ushort *)&param_1->RootInstanceHandle) &
                    (longlong)(this->Pairs).HashSize - 1U) * 4);
    if (iVar8 != -1) {
      lVar5 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar6 = (longlong)iVar8 * 0x40;
        if (((*(uint *)(lVar6 + 4 + lVar5) == uVar1) && (*(uint *)(lVar6 + lVar5) == uVar2)) &&
           (*(uint *)(lVar6 + 8 + lVar5) == uVar3)) {
          uVar4 = *(undefined4 *)(lVar6 + 0xc + lVar5);
          if (((short)uVar4 == SUB42(param_1->RootInstanceHandle,0)) &&
             ((short)((uint)uVar4 >> 0x10) == SUB42(param_1->RootInstanceHandle,2))) {
            TSet<TTuple<UE::MovieScene::FPreAnimatedEvaluationKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedEvaluationKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
            ::RemoveByIndex(&this->Pairs,iVar8);
            return 1;
          }
        }
        iVar8 = *(int *)(lVar6 + 0x38 + lVar5);
      } while (iVar8 != -1);
    }
  }
  return 0;
}

// Emplace<FGuid_const_&,int_const_&> @ 1461f2870

int * __thiscall
TMapBase<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,1>_>::
Emplace<FGuid_const_&,int_const_&>
          (TMapBase<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,1>_> *this,
          FGuid *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  ulong64 uVar6;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1c,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x1c + 4 + lVar3);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x1c + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FGuid,int>_> *)0x0) {
    uVar4 = *(undefined8 *)&param_1->C;
    *(undefined8 *)local_18.Pointer = *(undefined8 *)param_1;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = uVar4;
    *(int *)((longlong)local_18.Pointer + 0x10) = *param_2;
    *(undefined4 *)((longlong)local_18.Pointer + 0x14) = 0xffffffff;
  }
  uVar6 = CityHash64(local_18.Pointer,0x10);
  TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,1>,FDefaultSetAllocator>::
  RehashOrLink(&this->Pairs,(uint)uVar6,local_18.Pointer,local_18.Index);
  return (int *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_18.Index * 0x1c + 0x10);
}

// Emplace<FGuid_const_&,int> @ 1461f2980

int * __thiscall
TMapBase<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,1>_>::
Emplace<FGuid_const_&,int>
          (TMapBase<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,1>_> *this,
          FGuid *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  ulong64 uVar6;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1c,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x1c + 4 + lVar3);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x1c + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FGuid,int>_> *)0x0) {
    uVar4 = *(undefined8 *)&param_1->C;
    *(undefined8 *)local_18.Pointer = *(undefined8 *)param_1;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = uVar4;
    *(int *)((longlong)local_18.Pointer + 0x10) = *param_2;
    *(undefined4 *)((longlong)local_18.Pointer + 0x14) = 0xffffffff;
  }
  uVar6 = CityHash64(local_18.Pointer,0x10);
  TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,1>,FDefaultSetAllocator>::
  RehashOrLink(&this->Pairs,(uint)uVar6,local_18.Pointer,local_18.Index);
  return (int *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_18.Index * 0x1c + 0x10);
}

// FindOrAddImpl<int_const_&> @ 1461f4aa0

FMovieSceneTrackRowMetadata * __thiscall
TMapBase<int,FMovieSceneTrackRowMetadata,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneTrackRowMetadata,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int,FMovieSceneTrackRowMetadata,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneTrackRowMetadata,0>_>
           *this,uint param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  int *local_res20;
  
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
        if (*(int *)(lVar1 + (longlong)iVar2 * 0x18) == *param_2) {
          if (lVar3 != 0) goto LAB_1461f4b32;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int,FMovieSceneTrackRowMetadata>,TDefaultMapHashableKeyFuncs<int,FMovieSceneTrackRowMetadata,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
LAB_1461f4b32:
  return (FMovieSceneTrackRowMetadata *)(lVar3 + 8);
}

// FindOrAddImpl<UE::MovieScene::FComplexInclusivityFilter_const_&> @ 1461f4b50

FIncludePair * __thiscall
TMapBase<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair,0>_>
::FindOrAddImpl<UE::MovieScene::FComplexInclusivityFilter_const_&>
          (TMapBase<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair,0>_>
           *this,uint param_1,FComplexInclusivityFilter *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FComplexInclusivityFilter *local_res20;
  
  iVar1 = TSet<TTuple<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair,0>,FDefaultSetAllocator>
          ::FindIndexByHash<UE::MovieScene::FComplexInclusivityFilter>(&this->Pairs,param_1,param_2)
  ;
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x98 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (FIncludePair *)(lVar2 + 0x40);
  }
  local_res20 = param_2;
  TSet<TTuple<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UE::MovieScene::FComplexInclusivityFilter_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<UE::MovieScene::FComplexInclusivityFilter_const_&> *)
             (ulonglong)param_1,(bool *)&local_res20);
  return (FIncludePair *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x98 + 0x40);
}

// FindOrAddImpl<UE::MovieScene::FComponentTypeID_const_&> @ 1461f4bf0

FIncludePair * __thiscall
TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FMutualInclusivityGraph::FIncludePair,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FMutualInclusivityGraph::FIncludePair,0>_>
::FindOrAddImpl<UE::MovieScene::FComponentTypeID_const_&>
          (TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FMutualInclusivityGraph::FIncludePair,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FMutualInclusivityGraph::FIncludePair,0>_>
           *this,uint param_1,FComponentTypeID *param_2)

{
  int iVar1;
  ushort *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FComponentTypeID *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        puVar2 = (ushort *)((longlong)iVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == param_2->Value) {
          if (puVar2 != (ushort *)0x0) {
            return (FIncludePair *)(puVar2 + 4);
          }
          break;
        }
        iVar1 = *(int *)(puVar2 + 0x2c);
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FMutualInclusivityGraph::FIncludePair,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UE::MovieScene::FComponentTypeID_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<UE::MovieScene::FComponentTypeID_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FIncludePair *)(*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x60)
  ;
}

// Find @ 146210af0

FIsSpawnable * __thiscall
TMapBase<UObjectBase_const_*,FIsSpawnable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FIsSpawnable,0>_>
::Find(TMapBase<UObjectBase_const_*,FIsSpawnable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FIsSpawnable,0>_>
       *this,UObjectBase *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  FIsSpawnable *pFVar5;
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
          pFVar5 = (FIsSpawnable *)0x0;
          if (lVar1 != 0) {
            pFVar5 = (FIsSpawnable *)(lVar1 + 8);
          }
          return pFVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (FIsSpawnable *)0x0;
}

// Find @ 146210ba0

FMovieSceneSpawnableAnnotation * __thiscall
TMapBase<UObjectBase_const_*,FMovieSceneSpawnableAnnotation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMovieSceneSpawnableAnnotation,0>_>
::Find(TMapBase<UObjectBase_const_*,FMovieSceneSpawnableAnnotation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMovieSceneSpawnableAnnotation,0>_>
       *this,UObjectBase *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  FMovieSceneSpawnableAnnotation *pFVar4;
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
          pFVar4 = (FMovieSceneSpawnableAnnotation *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pFVar4 = (FMovieSceneSpawnableAnnotation *)(plVar2 + 1);
          }
          return pFVar4;
        }
        iVar1 = (int)plVar2[5];
      } while (iVar1 != -1);
    }
  }
  return (FMovieSceneSpawnableAnnotation *)0x0;
}

// Find @ 146210c50

FMovieSceneObjectBindingIDs * __thiscall
TMapBase<FName,FMovieSceneObjectBindingIDs,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneObjectBindingIDs,0>_>
::Find(TMapBase<FName,FMovieSceneObjectBindingIDs,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneObjectBindingIDs,0>_>
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
          return (FMovieSceneObjectBindingIDs *)pFVar4;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FMovieSceneObjectBindingIDs *)0x0;
}

