// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 2

// Emplace<FAudioDevice_const_*_const_&,TSharedPtr<vraudio::ResonanceAudioApi,1>_const_&> @ 14f0424b0

TSharedPtr<vraudio::ResonanceAudioApi,1> * __thiscall
TMapBase<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>,0>_>
::Emplace<FAudioDevice_const_*_const_&,TSharedPtr<vraudio::ResonanceAudioApi,1>_const_&>
          (TMapBase<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>,0>_>
           *this,FAudioDevice **param_1,TSharedPtr<vraudio::ResonanceAudioApi,1> *param_2)

{
  int iVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
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
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>_>_> *)
      0x0) {
    *(FAudioDevice **)local_28.Pointer = *param_1;
    *(ResonanceAudioApi **)((longlong)local_28.Pointer + 8) = param_2->Object;
    pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)((longlong)local_28.Pointer + 0x10) = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(undefined4 *)((longlong)local_28.Pointer + 0x18) = 0xffffffff;
  }
  local_res8[0] = local_28.Index;
  uVar6 = ((uint)(*(ulonglong *)local_28.Pointer >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)local_28.Pointer >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  bVar4 = TSet<TTuple<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>_>,TDefaultMapHashableKeyFuncs<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,local_28.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>_>,TDefaultMapHashableKeyFuncs<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,local_28.Pointer,local_res8[0]);
  }
  return (TSharedPtr<vraudio::ResonanceAudioApi,1> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + lVar7 * 0x20);
}

// EmplaceByHash<FAudioDevice_const_*_const_&,TSharedPtr<vraudio::ResonanceAudioApi,1>_const_&> @ 14f042610

TSharedPtr<vraudio::ResonanceAudioApi,1> * __thiscall
TMapBase<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>,0>_>
::EmplaceByHash<FAudioDevice_const_*_const_&,TSharedPtr<vraudio::ResonanceAudioApi,1>_const_&>
          (TMapBase<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>,0>_>
           *this,uint param_1,FAudioDevice **param_2,
          TSharedPtr<vraudio::ResonanceAudioApi,1> *param_3)

{
  int iVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
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
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x20 + 4 + lVar6);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar6) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>_>_> *)
      0x0) {
    *(FAudioDevice **)local_28.Pointer = *param_2;
    *(ResonanceAudioApi **)((longlong)local_28.Pointer + 8) = param_3->Object;
    pTVar3 = (param_3->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)((longlong)local_28.Pointer + 0x10) = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(undefined4 *)((longlong)local_28.Pointer + 0x18) = 0xffffffff;
  }
  local_res8[0] = local_28.Index;
  bVar4 = TSet<TTuple<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>_>,TDefaultMapHashableKeyFuncs<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_28.Pointer,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>_>,TDefaultMapHashableKeyFuncs<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_28.Pointer,local_res8[0]);
  }
  return (TSharedPtr<vraudio::ResonanceAudioApi,1> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + lVar6 * 0x20);
}

