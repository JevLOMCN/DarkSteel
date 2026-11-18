// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 1

// AddGrouping<UE::MovieScene::FControlRigDataGroupingPolicy,UE::MovieScene::FControlRigSourceData,FName> @ 14a38bda0

FEntityGroupingPolicyKey __thiscall
UMovieSceneEntityGroupingSystem::
AddGrouping<UE::MovieScene::FControlRigDataGroupingPolicy,UE::MovieScene::FControlRigSourceData,FName>
          (UMovieSceneEntityGroupingSystem *this,FControlRigDataGroupingPolicy *param_1,
          FEntityComponentFilter *param_2,
          TComponentTypeID<UE::MovieScene::FControlRigSourceData> param_3,
          TComponentTypeID<FName> param_4)

{
  TSparseArray<UMovieSceneEntityGroupingSystem::FEntityGroupingHandlerInfo,FDefaultSparseArrayAllocator>
  *this_00;
  TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8> *this_01;
  uchar *puVar1;
  int iVar2;
  int iVar3;
  void *_Src;
  longlong lVar4;
  int iVar5;
  undefined6 in_register_0000008a;
  TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8> *_Src_00;
  TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8> *this_02;
  TComponentTypeID<FName> TStack000000000000002a;
  TComponentTypeID<FName> in_stack_00000030;
  TComponentTypeID<FName> *local_38;
  FComponentTypeID *local_30;
  
  _Src_00 = (TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8> *)
            CONCAT62(in_register_0000008a,param_3);
  this_00 = &this->GroupHandlers;
  iVar2 = *(int *)&(this->GroupHandlers).field_0x34;
  if (iVar2 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x188,8,1,(ForAnyElementType *)this_00,
                       (int *)&(this->GroupHandlers).field_0x8,
                       (int *)&(this->GroupHandlers).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->GroupHandlers).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->GroupHandlers).field_0x30;
    iVar2 = iVar2 + -1;
    iVar3 = *(int *)((longlong)iVar5 * 0x188 + 4 + *(longlong *)&this_00->field_0x0);
    *(int *)&(this->GroupHandlers).field_0x30 = iVar3;
    *(int *)&(this->GroupHandlers).field_0x34 = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x188 + *(longlong *)&this_00->field_0x0) = 0xffffffff;
    }
  }
  TSparseArrayBase<392,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<392,8,FDefaultSparseArrayAllocator> *)this_00,
             (FSparseArrayAllocationInfo *)&local_38,iVar5);
  if (local_30 != (FComponentTypeID *)0x0) {
    memset(local_30,0,0x188);
    *(byte *)&local_30[0x80].Value = (byte)local_30[0x80].Value & 0xfe;
    *(byte *)&local_30[0x80].Value = (byte)local_30[0x80].Value | 2;
    *(undefined4 *)(local_30 + 0x9c) = 0;
    *(undefined4 *)(local_30 + 0x9e) = 0x180;
    *(undefined4 *)(local_30 + 0xb8) = 0;
    *(undefined4 *)(local_30 + 0xba) = 0x180;
    *(undefined8 *)(local_30 + 0xbc) = 0;
    *(undefined8 *)(local_30 + 0xc0) = 0;
  }
  iVar2 = (int)local_38;
  this_02 = (TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8> *)
            ((longlong)(int)local_38 * 0x188 + *(longlong *)&this_00->field_0x0);
  TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8>::
  Emplace<UE::MovieScene::TEntityGroupingHandler<UE::MovieScene::FControlRigDataGroupingPolicy,UE::MovieScene::FControlRigSourceData,FName>,UE::MovieScene::FControlRigDataGroupingPolicy,UE::MovieScene::TComponentTypeID<UE::MovieScene::FControlRigSourceData>_&,UE::MovieScene::TComponentTypeID<FName>_&>
            (this_02,(FControlRigDataGroupingPolicy *)param_2,
             (TComponentTypeID<UE::MovieScene::FControlRigSourceData> *)&param_4,&stack0x00000030);
  this_01 = this_02 + 1;
  if (this_01 != _Src_00) {
    memmove(this_01,_Src_00,0x30);
    *(int *)(this_02[1].Data.Pad + 0x30) =
         *(int *)((ForElementType<unsigned_int> *)(_Src_00->Data).Pad + 1);
    *(int *)(this_02[1].Data.Pad + 0x34) =
         *(int *)((longlong)((ForElementType<unsigned_int> *)(_Src_00->Data).Pad + 1) + 4);
    *(undefined8 *)((ForElementType<unsigned_int> *)(_Src_00->Data).Pad + 1) = 0;
  }
  _Src = (void *)((longlong)((ForElementType<unsigned_int> *)(_Src_00->Data).Pad + 1) + 8);
  puVar1 = this_02[1].Data.Pad + 0x38;
  if (puVar1 != _Src) {
    memmove(puVar1,_Src,0x30);
    *(undefined4 *)(this_02[1].Data.Pad + 0x68) =
         *(undefined4 *)((longlong)((ForElementType<unsigned_int> *)(_Src_00->Data).Pad + 2) + 8);
    *(undefined4 *)(this_02[1].Data.Pad + 0x6c) =
         *(undefined4 *)((longlong)((ForElementType<unsigned_int> *)(_Src_00->Data).Pad + 2) + 0xc);
    *(undefined8 *)((longlong)((ForElementType<unsigned_int> *)(_Src_00->Data).Pad + 2) + 8) = 0;
  }
  lVar4 = (longlong)((ForElementType<unsigned_int> *)(_Src_00->Data).Pad + 2) + 0x10;
  puVar1 = this_02[1].Data.Pad + 0x70;
  if (puVar1 != (uchar *)lVar4) {
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(undefined8 *)puVar1 = *(undefined8 *)lVar4;
    *(undefined8 *)lVar4 = 0;
    *(undefined4 *)(this_02[1].Data.Pad + 0x78) =
         *(undefined4 *)((longlong)((ForElementType<unsigned_int> *)(_Src_00->Data).Pad + 2) + 0x18)
    ;
    *(undefined4 *)(this_02[1].Data.Pad + 0x7c) =
         *(undefined4 *)((longlong)((ForElementType<unsigned_int> *)(_Src_00->Data).Pad + 2) + 0x1c)
    ;
    *(undefined8 *)((longlong)((ForElementType<unsigned_int> *)(_Src_00->Data).Pad + 2) + 0x18) = 0;
  }
  TStack000000000000002a = in_stack_00000030;
  local_38 = &param_4;
  local_30 = (FComponentTypeID *)&stack0x0000002c;
  UE::MovieScene::FComponentMask::SetAll
            ((FComponentMask *)this_01,
             (initializer_list<UE::MovieScene::FComponentTypeID> *)&local_38);
  *(int *)param_1 = iVar2;
  return (FEntityGroupingPolicyKey)(int)param_1;
}

