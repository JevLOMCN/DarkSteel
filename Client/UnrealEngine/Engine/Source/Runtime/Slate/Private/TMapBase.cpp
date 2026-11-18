// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 46

// Emplace<FKey_const_&,enum_EUINavigation_const_&> @ 14269e020

EUINavigation * __thiscall
TMapBase<FKey,enum_EUINavigation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,enum_EUINavigation,0>_>
::Emplace<FKey_const_&,enum_EUINavigation_const_&>(void *this,FKey *param_1,EUINavigation *param_2)

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
  
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar6 = *(int *)((longlong)this + 0x30);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    iVar2 = *(int *)(*(longlong *)this + 4 + (longlong)iVar6 * 0x28);
    *(int *)((longlong)this + 0x30) = iVar2;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*(longlong *)this + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_28,iVar6);
  if (local_28.Pointer != (TSparseSetElement<TTuple<FKey,EUINavigation>_> *)0x0) {
    *(FName *)local_28.Pointer = param_1->KeyName;
    *(FKeyDetails **)((longlong)local_28.Pointer + 8) = (param_1->KeyDetails).Object;
    pTVar3 = (param_1->KeyDetails).SharedReferenceCount.ReferenceController;
    *(TReferenceControllerBase<1> **)((longlong)local_28.Pointer + 0x10) = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(EUINavigation *)((longlong)local_28.Pointer + 0x18) = *param_2;
    *(undefined4 *)((longlong)local_28.Pointer + 0x20) = 0xffffffff;
  }
  uVar4 = *(undefined8 *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
  uVar7 = uVar7 + (int)((ulonglong)uVar4 >> 0x20);
  bVar5 = TSet<TTuple<FKey,enum_EUINavigation>,TDefaultMapHashableKeyFuncs<FKey,enum_EUINavigation,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(this,uVar7,local_28.Pointer,local_res8,(bool *)0x0);
  lVar8 = (longlong)local_res8[0];
  if (!bVar5) {
    TSet<TTuple<FKey,enum_EUINavigation>,TDefaultMapHashableKeyFuncs<FKey,enum_EUINavigation,0>,FDefaultSetAllocator>
    ::RehashOrLink(this,uVar7,local_28.Pointer,local_res8[0]);
  }
  return (EUINavigation *)(*(longlong *)this + lVar8 * 0x28 + 0x18);
}

// Emplace<FKey_const_&,enum_EUINavigation> @ 14269e170

EUINavigation * __thiscall
TMapBase<FKey,enum_EUINavigation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,enum_EUINavigation,0>_>
::Emplace<FKey_const_&,enum_EUINavigation>(void *this,FKey *param_1,EUINavigation *param_2)

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
  
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar6 = *(int *)((longlong)this + 0x30);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    iVar2 = *(int *)(*(longlong *)this + 4 + (longlong)iVar6 * 0x28);
    *(int *)((longlong)this + 0x30) = iVar2;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*(longlong *)this + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_28,iVar6);
  if (local_28.Pointer != (TSparseSetElement<TTuple<FKey,EUINavigation>_> *)0x0) {
    *(FName *)local_28.Pointer = param_1->KeyName;
    *(FKeyDetails **)((longlong)local_28.Pointer + 8) = (param_1->KeyDetails).Object;
    pTVar3 = (param_1->KeyDetails).SharedReferenceCount.ReferenceController;
    *(TReferenceControllerBase<1> **)((longlong)local_28.Pointer + 0x10) = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(EUINavigation *)((longlong)local_28.Pointer + 0x18) = *param_2;
    *(undefined4 *)((longlong)local_28.Pointer + 0x20) = 0xffffffff;
  }
  uVar4 = *(undefined8 *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
  uVar7 = uVar7 + (int)((ulonglong)uVar4 >> 0x20);
  bVar5 = TSet<TTuple<FKey,enum_EUINavigation>,TDefaultMapHashableKeyFuncs<FKey,enum_EUINavigation,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(this,uVar7,local_28.Pointer,local_res8,(bool *)0x0);
  lVar8 = (longlong)local_res8[0];
  if (!bVar5) {
    TSet<TTuple<FKey,enum_EUINavigation>,TDefaultMapHashableKeyFuncs<FKey,enum_EUINavigation,0>,FDefaultSetAllocator>
    ::RehashOrLink(this,uVar7,local_28.Pointer,local_res8[0]);
  }
  return (EUINavigation *)(*(longlong *)this + lVar8 * 0x28 + 0x18);
}

// Emplace<FKey_const_&,enum_EUINavigationAction> @ 14269e2c0

EUINavigationAction * __thiscall
TMapBase<FKey,enum_EUINavigationAction,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,enum_EUINavigationAction,0>_>
::Emplace<FKey_const_&,enum_EUINavigationAction>
          (void *this,FKey *param_1,EUINavigationAction *param_2)

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
  
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar6 = *(int *)((longlong)this + 0x30);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    iVar2 = *(int *)(*(longlong *)this + 4 + (longlong)iVar6 * 0x28);
    *(int *)((longlong)this + 0x30) = iVar2;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*(longlong *)this + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_28,iVar6);
  if (local_28.Pointer != (TSparseSetElement<TTuple<FKey,EUINavigationAction>_> *)0x0) {
    *(FName *)local_28.Pointer = param_1->KeyName;
    *(FKeyDetails **)((longlong)local_28.Pointer + 8) = (param_1->KeyDetails).Object;
    pTVar3 = (param_1->KeyDetails).SharedReferenceCount.ReferenceController;
    *(TReferenceControllerBase<1> **)((longlong)local_28.Pointer + 0x10) = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(EUINavigationAction *)((longlong)local_28.Pointer + 0x18) = *param_2;
    *(undefined4 *)((longlong)local_28.Pointer + 0x20) = 0xffffffff;
  }
  uVar4 = *(undefined8 *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
  uVar7 = uVar7 + (int)((ulonglong)uVar4 >> 0x20);
  bVar5 = TSet<TTuple<FKey,enum_EUINavigationAction>,TDefaultMapHashableKeyFuncs<FKey,enum_EUINavigationAction,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(this,uVar7,local_28.Pointer,local_res8,(bool *)0x0);
  lVar8 = (longlong)local_res8[0];
  if (!bVar5) {
    TSet<TTuple<FKey,enum_EUINavigationAction>,TDefaultMapHashableKeyFuncs<FKey,enum_EUINavigationAction,0>,FDefaultSetAllocator>
    ::RehashOrLink(this,uVar7,local_28.Pointer,local_res8[0]);
  }
  return (EUINavigationAction *)(*(longlong *)this + lVar8 * 0x28 + 0x18);
}

// Emplace<SWidget_const_*,SWidget_const_*_const_&> @ 14269e410

SWidget ** __thiscall
TMapBase<SWidget_const_*,SWidget_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<SWidget_const_*,SWidget_const_*,0>_>
::Emplace<SWidget_const_*,SWidget_const_*_const_&>
          (TMapBase<SWidget_const_*,SWidget_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<SWidget_const_*,SWidget_const_*,0>_>
           *this,SWidget **param_1,SWidget **param_2)

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
  if (local_28.Pointer != (TSparseSetElement<TTuple<SWidget_const_*,SWidget_const_*>_> *)0x0) {
    *(SWidget **)local_28.Pointer = *param_1;
    *(SWidget **)((longlong)local_28.Pointer + 8) = *param_2;
    *(undefined4 *)((longlong)local_28.Pointer + 0x10) = 0xffffffff;
  }
  local_res8[0] = local_28.Index;
  uVar5 = ((uint)(*(ulonglong *)local_28.Pointer >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)local_28.Pointer >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  bVar3 = TSet<TTuple<SWidget_const_*,SWidget_const_*>,TDefaultMapHashableKeyFuncs<SWidget_const_*,SWidget_const_*,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar5,local_28.Pointer,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<SWidget_const_*,SWidget_const_*>,TDefaultMapHashableKeyFuncs<SWidget_const_*,SWidget_const_*,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar5,local_28.Pointer,local_res8[0]);
  }
  return (SWidget **)(*(longlong *)&(this->Pairs).Elements + lVar6 * 0x18 + 8);
}

// Emplace<FAnalogNavigationKey,FAnalogNavigationState> @ 14269e560

FAnalogNavigationState * __thiscall
TMapBase<FAnalogNavigationKey,FAnalogNavigationState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAnalogNavigationKey,FAnalogNavigationState,0>_>
::Emplace<FAnalogNavigationKey,FAnalogNavigationState>
          (TMapBase<FAnalogNavigationKey,FAnalogNavigationState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAnalogNavigationKey,FAnalogNavigationState,0>_>
           *this,FAnalogNavigationKey *param_1,FAnalogNavigationState *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar6 * 0x38 + 4 + lVar3);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x38 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar6);
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<FAnalogNavigationKey,FAnalogNavigationState>_> *)0x0) {
    *(FName *)local_18.Pointer = (param_1->AnalogKey).KeyName;
    *(FKeyDetails **)((longlong)local_18.Pointer + 8) = (param_1->AnalogKey).KeyDetails.Object;
    *(TReferenceControllerBase<1> **)((longlong)local_18.Pointer + 0x10) =
         (param_1->AnalogKey).KeyDetails.SharedReferenceCount.ReferenceController;
    (param_1->AnalogKey).KeyDetails.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (param_1->AnalogKey).KeyDetails.Object = (FKeyDetails *)0x0;
    *(EUINavigation *)((longlong)local_18.Pointer + 0x18) = param_1->NavigationDir;
    uVar4 = *(undefined8 *)&param_2->Repeats;
    *(double *)((longlong)local_18.Pointer + 0x20) = param_2->LastNavigationTime;
    *(undefined8 *)((longlong)local_18.Pointer + 0x28) = uVar4;
    *(undefined4 *)((longlong)local_18.Pointer + 0x30) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  uVar7 = ::GetTypeHash(local_18.Pointer);
  bVar5 = TSet<TTuple<FAnalogNavigationKey,FAnalogNavigationState>,TDefaultMapHashableKeyFuncs<FAnalogNavigationKey,FAnalogNavigationState,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar7,local_18.Pointer,local_res8,(bool *)0x0);
  if (!bVar5) {
    TSet<TTuple<FAnalogNavigationKey,FAnalogNavigationState>,TDefaultMapHashableKeyFuncs<FAnalogNavigationKey,FAnalogNavigationState,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar7,local_18.Pointer,local_res8[0]);
  }
  return (FAnalogNavigationState *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x38 + 0x20);
}

// Emplace<FKey,enum_EUINavigationAction> @ 14269e820

EUINavigationAction * __thiscall
TMapBase<FKey,enum_EUINavigationAction,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,enum_EUINavigationAction,0>_>
::Emplace<FKey,enum_EUINavigationAction>(void *this,FKey *param_1,EUINavigationAction *param_2)

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
  
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar5 = *(int *)((longlong)this + 0x30);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    iVar2 = *(int *)(*(longlong *)this + 4 + (longlong)iVar5 * 0x28);
    *(int *)((longlong)this + 0x30) = iVar2;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*(longlong *)this + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_18,iVar5);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FKey,EUINavigationAction>_> *)0x0) {
    *(FName *)local_18.Pointer = param_1->KeyName;
    *(FKeyDetails **)((longlong)local_18.Pointer + 8) = (param_1->KeyDetails).Object;
    *(TReferenceControllerBase<1> **)((longlong)local_18.Pointer + 0x10) =
         (param_1->KeyDetails).SharedReferenceCount.ReferenceController;
    (param_1->KeyDetails).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (param_1->KeyDetails).Object = (FKeyDetails *)0x0;
    *(EUINavigationAction *)((longlong)local_18.Pointer + 0x18) = *param_2;
    *(undefined4 *)((longlong)local_18.Pointer + 0x20) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)local_18.Pointer;
  local_res8[0] = local_18.Index;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar6 = uVar6 + (int)((ulonglong)uVar3 >> 0x20);
  bVar4 = TSet<TTuple<FKey,enum_EUINavigationAction>,TDefaultMapHashableKeyFuncs<FKey,enum_EUINavigationAction,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(this,uVar6,local_18.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FKey,enum_EUINavigationAction>,TDefaultMapHashableKeyFuncs<FKey,enum_EUINavigationAction,0>,FDefaultSetAllocator>
    ::RehashOrLink(this,uVar6,local_18.Pointer,local_res8[0]);
  }
  return (EUINavigationAction *)(*(longlong *)this + lVar7 * 0x28 + 0x18);
}

// EmplaceByHash<FAnalogNavigationKey> @ 14269ec00

FAnalogNavigationState * __thiscall
TMapBase<FAnalogNavigationKey,FAnalogNavigationState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAnalogNavigationKey,FAnalogNavigationState,0>_>
::EmplaceByHash<FAnalogNavigationKey>
          (TMapBase<FAnalogNavigationKey,FAnalogNavigationState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAnalogNavigationKey,FAnalogNavigationState,0>_>
           *this,uint param_1,FAnalogNavigationKey *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  TSparseSetElement<TTuple<FAnalogNavigationKey,FAnalogNavigationState>_> *pTVar5;
  longlong lVar6;
  int local_res8 [2];
  uint uStack_1c;
  FSparseArrayAllocationInfo local_18;
  
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
                   *)this,&local_18,iVar4);
  pTVar5 = (TSparseSetElement<TTuple<FAnalogNavigationKey,FAnalogNavigationState>_> *)0x0;
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<FAnalogNavigationKey,FAnalogNavigationState>_> *)0x0) {
    *(FName *)local_18.Pointer = (param_2->AnalogKey).KeyName;
    *(FKeyDetails **)((longlong)local_18.Pointer + 8) = (param_2->AnalogKey).KeyDetails.Object;
    *(TReferenceControllerBase<1> **)((longlong)local_18.Pointer + 0x10) =
         (param_2->AnalogKey).KeyDetails.SharedReferenceCount.ReferenceController;
    (param_2->AnalogKey).KeyDetails.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (param_2->AnalogKey).KeyDetails.Object = (FKeyDetails *)0x0;
    *(EUINavigation *)((longlong)local_18.Pointer + 0x18) = param_2->NavigationDir;
    *(undefined8 *)((longlong)local_18.Pointer + 0x20) = 0;
    *(ulonglong *)((longlong)local_18.Pointer + 0x28) = (ulonglong)uStack_1c << 0x20;
    *(undefined4 *)((longlong)local_18.Pointer + 0x30) = 0xffffffff;
    pTVar5 = local_18.Pointer;
  }
  local_res8[0] = local_18.Index;
  bVar3 = TSet<TTuple<FAnalogNavigationKey,FAnalogNavigationState>,TDefaultMapHashableKeyFuncs<FAnalogNavigationKey,FAnalogNavigationState,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,pTVar5,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<FAnalogNavigationKey,FAnalogNavigationState>,TDefaultMapHashableKeyFuncs<FAnalogNavigationKey,FAnalogNavigationState,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,pTVar5,local_res8[0]);
  }
  return (FAnalogNavigationState *)(*(longlong *)&(this->Pairs).Elements + lVar6 * 0x38 + 0x20);
}

// FindOrAddImpl<int> @ 14269f140

FUserNavigationState * __thiscall
TMapBase<int,FUserNavigationState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FUserNavigationState,0>_>
::FindOrAddImpl<int>
          (TMapBase<int,FUserNavigationState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FUserNavigationState,0>_>
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
        piVar2 = (int *)((longlong)iVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == *param_2) {
          if (piVar2 != (int *)0x0) {
            return (FUserNavigationState *)(piVar2 + 2);
          }
          break;
        }
        iVar1 = piVar2[0x16];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int,FUserNavigationState>,TDefaultMapHashableKeyFuncs<int,FUserNavigationState,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_&&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FUserNavigationState *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x60);
}

// FindOrAddImpl<FAnalogNavigationKey> @ 14269f1f0

FAnalogNavigationState * __thiscall
TMapBase<FAnalogNavigationKey,FAnalogNavigationState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAnalogNavigationKey,FAnalogNavigationState,0>_>
::FindOrAddImpl<FAnalogNavigationKey>
          (TMapBase<FAnalogNavigationKey,FAnalogNavigationState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAnalogNavigationKey,FAnalogNavigationState,0>_>
           *this,uint param_1,FAnalogNavigationKey *param_2)

{
  FAnalogNavigationState *pFVar1;
  FName *pFVar2;
  uint uVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar3 = *(uint *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar3 * 0x38 + *(longlong *)&(this->Pairs).Elements);
        if ((*pFVar2 == (param_2->AnalogKey).KeyName) &&
           ((EUINavigation)pFVar2[3].ComparisonIndex.Value == param_2->NavigationDir)) {
          if ((uVar3 != 0xffffffff) && (pFVar2 != (FName *)0x0)) {
            return (FAnalogNavigationState *)(pFVar2 + 4);
          }
          break;
        }
        uVar3 = pFVar2[6].ComparisonIndex.Value;
      } while (uVar3 != 0xffffffff);
    }
  }
  pFVar1 = EmplaceByHash<FAnalogNavigationKey>(this,param_1,param_2);
  return pFVar1;
}

// Find @ 1426ba6d0

EUINavigation * __thiscall
TMapBase<FKey,enum_EUINavigation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,enum_EUINavigation,0>_>
::Find(void *this,FKey *param_1)

{
  FName FVar1;
  uint uVar2;
  int iVar3;
  EUINavigation *pEVar4;
  longlong lVar5;
  
  FVar1 = param_1->KeyName;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)((longlong)this + 0x48) - 1U & FVar1.Number + uVar2) * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0x28;
        if (*(FName *)(*(longlong *)this + (longlong)iVar3 * 0x28) == param_1->KeyName) {
          pEVar4 = (EUINavigation *)0x0;
          if (lVar5 != 0) {
            pEVar4 = (EUINavigation *)(lVar5 + 0x18);
          }
          return pEVar4;
        }
        iVar3 = *(int *)(lVar5 + 0x20);
      } while (iVar3 != -1);
    }
  }
  return (EUINavigation *)0x0;
}

// Find @ 1426ba780

EUINavigationAction * __thiscall
TMapBase<FKey,enum_EUINavigationAction,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,enum_EUINavigationAction,0>_>
::Find(void *this,FKey *param_1)

{
  FName FVar1;
  uint uVar2;
  int iVar3;
  EUINavigationAction *pEVar4;
  longlong lVar5;
  
  FVar1 = param_1->KeyName;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)((longlong)this + 0x48) - 1U & FVar1.Number + uVar2) * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0x28;
        if (*(FName *)(*(longlong *)this + (longlong)iVar3 * 0x28) == param_1->KeyName) {
          pEVar4 = (EUINavigationAction *)0x0;
          if (lVar5 != 0) {
            pEVar4 = (EUINavigationAction *)(lVar5 + 0x18);
          }
          return pEVar4;
        }
        iVar3 = *(int *)(lVar5 + 0x20);
      } while (iVar3 != -1);
    }
  }
  return (EUINavigationAction *)0x0;
}

// Find @ 1426ba830

TSharedPtr<FMenuBase,1> * __thiscall
TMapBase<TSharedPtr<SWidget_const_,1>,TSharedPtr<FMenuBase,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget_const_,1>,TSharedPtr<FMenuBase,1>,0>_>
::Find(TMapBase<TSharedPtr<SWidget_const_,1>,TSharedPtr<FMenuBase,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget_const_,1>,TSharedPtr<FMenuBase,1>,0>_>
       *this,TSharedPtr<SWidget_const_,1> *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<SWidget_const_,1> local_18;
  
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
  iVar2 = TSet<TTuple<TSharedPtr<SWidget_const_,1>,TSharedPtr<FMenuBase,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget_const_,1>,TSharedPtr<FMenuBase,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TSharedPtr<SWidget_const_,1>_>
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
      return (TSharedPtr<FMenuBase,1> *)(lVar1 + 0x10);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TSharedPtr<FMenuBase,1> *)0x0;
}

// Emplace<unsigned_int_const_&,FWeakWidgetPath_const_&> @ 1426ec4f0

/* WARNING: Enum "Type": Some values do not have unique names */

FWeakWidgetPath * __thiscall
TMapBase<unsigned_int,FWeakWidgetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FWeakWidgetPath,0>_>
::Emplace<unsigned_int_const_&,FWeakWidgetPath_const_&>
          (TMapBase<unsigned_int,FWeakWidgetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FWeakWidgetPath,0>_>
           *this,uint *param_1,FWeakWidgetPath *param_2)

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
                      (0x30,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar6 + 4 + (longlong)iVar5 * 0x30);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar6 + (longlong)iVar2 * 0x30) = 0xffffffff;
    }
  }
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  if (local_28.Pointer != (TSparseSetElement<TTuple<unsigned_int,FWeakWidgetPath>_> *)0x0) {
    *(uint *)local_28.Pointer = *param_1;
    FWeakWidgetPath::FWeakWidgetPath((FWeakWidgetPath *)((longlong)local_28.Pointer + 8),param_2);
    *(undefined4 *)((longlong)local_28.Pointer + 0x28) = 0xffffffff;
  }
  uVar3 = *(uint *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  bVar4 = TSet<TTuple<unsigned_int,FWeakWidgetPath>,TDefaultMapHashableKeyFuncs<unsigned_int,FWeakWidgetPath,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar3,local_28.Pointer,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<unsigned_int,FWeakWidgetPath>,TDefaultMapHashableKeyFuncs<unsigned_int,FWeakWidgetPath,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar3,local_28.Pointer,local_res8[0]);
  }
  return (FWeakWidgetPath *)(*(longlong *)&(this->Pairs).Elements + 8 + lVar6 * 0x30);
}

// Emplace<unsigned_int_const_&,FWeakWidgetPath> @ 1426ec620

/* WARNING: Enum "Type": Some values do not have unique names */

FWeakWidgetPath * __thiscall
TMapBase<unsigned_int,FWeakWidgetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FWeakWidgetPath,0>_>
::Emplace<unsigned_int_const_&,FWeakWidgetPath>
          (TMapBase<unsigned_int,FWeakWidgetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FWeakWidgetPath,0>_>
           *this,uint *param_1,FWeakWidgetPath *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  TSparseSetElement<TTuple<unsigned_int,FWeakWidgetPath>_> *pTVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar7 + 4 + (longlong)iVar5 * 0x30);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar7 + (longlong)iVar2 * 0x30) = 0xffffffff;
    }
  }
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  pTVar6 = (TSparseSetElement<TTuple<unsigned_int,FWeakWidgetPath>_> *)0x0;
  if (local_28.Pointer != (TSparseSetElement<TTuple<unsigned_int,FWeakWidgetPath>_> *)0x0) {
    uVar3 = *param_1;
    *(undefined8 *)((longlong)local_28.Pointer + 8) = 0;
    *(uint *)local_28.Pointer = uVar3;
    *(FScriptContainerElement **)((longlong)local_28.Pointer + 8) =
         (param_2->Widgets).AllocatorInstance.Data;
    (param_2->Widgets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)local_28.Pointer + 0x10) = (param_2->Widgets).ArrayNum;
    *(int *)((longlong)local_28.Pointer + 0x14) = (param_2->Widgets).ArrayMax;
    (param_2->Widgets).ArrayNum = 0;
    (param_2->Widgets).ArrayMax = 0;
    *(SWindow **)((longlong)local_28.Pointer + 0x18) = (param_2->Window).Object;
    *(TReferenceControllerBase<1> **)((longlong)local_28.Pointer + 0x20) =
         (param_2->Window).WeakReferenceCount.ReferenceController;
    (param_2->Window).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    (param_2->Window).Object = (SWindow *)0x0;
    *(undefined4 *)((longlong)local_28.Pointer + 0x28) = 0xffffffff;
    pTVar6 = local_28.Pointer;
  }
  uVar3 = *(uint *)pTVar6;
  local_res8[0] = local_28.Index;
  bVar4 = TSet<TTuple<unsigned_int,FWeakWidgetPath>,TDefaultMapHashableKeyFuncs<unsigned_int,FWeakWidgetPath,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar3,pTVar6,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<unsigned_int,FWeakWidgetPath>,TDefaultMapHashableKeyFuncs<unsigned_int,FWeakWidgetPath,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar3,pTVar6,local_res8[0]);
  }
  return (FWeakWidgetPath *)(*(longlong *)&(this->Pairs).Elements + 8 + lVar7 * 0x30);
}

// Emplace<FTabId_const_&,TSharedRef<SDockTab,1>_> @ 1426ec9b0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockTab,1> * __thiscall
TMapBase<FTabId,TSharedRef<SDockTab,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedRef<SDockTab,1>,0>_>
::Emplace<FTabId_const_&,TSharedRef<SDockTab,1>_>
          (TMapBase<FTabId,TSharedRef<SDockTab,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedRef<SDockTab,1>,0>_>
           *this,FTabId *param_1,TSharedRef<SDockTab,1> *param_2)

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
  if (local_28.Pointer != (TSparseSetElement<TTuple<FTabId,TSharedRef<SDockTab,1>_>_> *)0x0) {
    uVar4 = *(undefined8 *)&param_1->InstanceId;
    *(FName *)local_28.Pointer = param_1->TabType;
    *(undefined8 *)((longlong)local_28.Pointer + 8) = uVar4;
    *(SDockTab **)((longlong)local_28.Pointer + 0x10) = param_2->Object;
    pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)((longlong)local_28.Pointer + 0x18) = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(undefined4 *)((longlong)local_28.Pointer + 0x20) = 0xffffffff;
  }
  uVar4 = *(undefined8 *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
  uVar7 = uVar7 + (int)((ulonglong)uVar4 >> 0x20) ^ *(uint *)((longlong)local_28.Pointer + 8);
  bVar5 = TSet<TTuple<FTabId,TSharedRef<SDockTab,1>_>,TDefaultMapHashableKeyFuncs<FTabId,TSharedRef<SDockTab,1>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar7,local_28.Pointer,local_res8,(bool *)0x0);
  lVar8 = (longlong)local_res8[0];
  if (!bVar5) {
    TSet<TTuple<FTabId,TSharedRef<SDockTab,1>_>,TDefaultMapHashableKeyFuncs<FTabId,TSharedRef<SDockTab,1>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar7,local_28.Pointer,local_res8[0]);
  }
  return (TSharedRef<SDockTab,1> *)(*(longlong *)&(this->Pairs).Elements + lVar8 * 0x28 + 0x10);
}

// Emplace<unsigned_int,FWeakWidgetPath> @ 1426ecd50

/* WARNING: Enum "Type": Some values do not have unique names */

FWeakWidgetPath * __thiscall
TMapBase<unsigned_int,FWeakWidgetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FWeakWidgetPath,0>_>
::Emplace<unsigned_int,FWeakWidgetPath>
          (TMapBase<unsigned_int,FWeakWidgetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FWeakWidgetPath,0>_>
           *this,uint *param_1,FWeakWidgetPath *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  TSparseSetElement<TTuple<unsigned_int,FWeakWidgetPath>_> *pTVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar7 + 4 + (longlong)iVar5 * 0x30);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar7 + (longlong)iVar2 * 0x30) = 0xffffffff;
    }
  }
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  pTVar6 = (TSparseSetElement<TTuple<unsigned_int,FWeakWidgetPath>_> *)0x0;
  if (local_28.Pointer != (TSparseSetElement<TTuple<unsigned_int,FWeakWidgetPath>_> *)0x0) {
    uVar3 = *param_1;
    *(undefined8 *)((longlong)local_28.Pointer + 8) = 0;
    *(uint *)local_28.Pointer = uVar3;
    *(FScriptContainerElement **)((longlong)local_28.Pointer + 8) =
         (param_2->Widgets).AllocatorInstance.Data;
    (param_2->Widgets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)local_28.Pointer + 0x10) = (param_2->Widgets).ArrayNum;
    *(int *)((longlong)local_28.Pointer + 0x14) = (param_2->Widgets).ArrayMax;
    (param_2->Widgets).ArrayNum = 0;
    (param_2->Widgets).ArrayMax = 0;
    *(SWindow **)((longlong)local_28.Pointer + 0x18) = (param_2->Window).Object;
    *(TReferenceControllerBase<1> **)((longlong)local_28.Pointer + 0x20) =
         (param_2->Window).WeakReferenceCount.ReferenceController;
    (param_2->Window).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    (param_2->Window).Object = (SWindow *)0x0;
    *(undefined4 *)((longlong)local_28.Pointer + 0x28) = 0xffffffff;
    pTVar6 = local_28.Pointer;
  }
  uVar3 = *(uint *)pTVar6;
  local_res8[0] = local_28.Index;
  bVar4 = TSet<TTuple<unsigned_int,FWeakWidgetPath>,TDefaultMapHashableKeyFuncs<unsigned_int,FWeakWidgetPath,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar3,pTVar6,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<unsigned_int,FWeakWidgetPath>,TDefaultMapHashableKeyFuncs<unsigned_int,FWeakWidgetPath,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar3,pTVar6,local_res8[0]);
  }
  return (FWeakWidgetPath *)(*(longlong *)&(this->Pairs).Elements + 8 + lVar7 * 0x30);
}

// Emplace<FTabId,TSharedRef<SDockTab,1>_> @ 1426eceb0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockTab,1> * __thiscall
TMapBase<FTabId,TSharedRef<SDockTab,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedRef<SDockTab,1>,0>_>
::Emplace<FTabId,TSharedRef<SDockTab,1>_>
          (TMapBase<FTabId,TSharedRef<SDockTab,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedRef<SDockTab,1>,0>_>
           *this,FTabId *param_1,TSharedRef<SDockTab,1> *param_2)

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
  if (local_28.Pointer != (TSparseSetElement<TTuple<FTabId,TSharedRef<SDockTab,1>_>_> *)0x0) {
    uVar4 = *(undefined8 *)&param_1->InstanceId;
    *(FName *)local_28.Pointer = param_1->TabType;
    *(undefined8 *)((longlong)local_28.Pointer + 8) = uVar4;
    *(SDockTab **)((longlong)local_28.Pointer + 0x10) = param_2->Object;
    pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)((longlong)local_28.Pointer + 0x18) = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(undefined4 *)((longlong)local_28.Pointer + 0x20) = 0xffffffff;
  }
  uVar4 = *(undefined8 *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
  uVar7 = uVar7 + (int)((ulonglong)uVar4 >> 0x20) ^ *(uint *)((longlong)local_28.Pointer + 8);
  bVar5 = TSet<TTuple<FTabId,TSharedRef<SDockTab,1>_>,TDefaultMapHashableKeyFuncs<FTabId,TSharedRef<SDockTab,1>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar7,local_28.Pointer,local_res8,(bool *)0x0);
  lVar8 = (longlong)local_res8[0];
  if (!bVar5) {
    TSet<TTuple<FTabId,TSharedRef<SDockTab,1>_>,TDefaultMapHashableKeyFuncs<FTabId,TSharedRef<SDockTab,1>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar7,local_28.Pointer,local_res8[0]);
  }
  return (TSharedRef<SDockTab,1> *)(*(longlong *)&(this->Pairs).Elements + lVar8 * 0x28 + 0x10);
}

// EmplaceByHash<FUserDefinedChordKey_const_&> @ 1426ef050

FInputChord * __thiscall
TMapBase<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
::EmplaceByHash<FUserDefinedChordKey_const_&>
          (TMapBase<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
           *this,uint param_1,FUserDefinedChordKey *param_2)

{
  int iVar1;
  int iVar2;
  FName FVar3;
  FName FVar4;
  FKeyDetails *pFVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar8 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar9 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar8 * 0x40 + 4 + lVar9);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x40 + lVar9) = 0xffffffff;
    }
  }
  TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar8);
  FVar6 = EKeys::Invalid.KeyDetails.SharedReferenceCount;
  pFVar5 = EKeys::Invalid.KeyDetails.Object;
  FVar4 = EKeys::Invalid.KeyName;
  if (local_18.Pointer != (TSparseSetElement<TTuple<FUserDefinedChordKey,FInputChord>_> *)0x0) {
    if (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    FVar3 = param_2->CommandName;
    *(FName *)local_18.Pointer = param_2->BindingContext;
    *(FName *)((longlong)local_18.Pointer + 8) = FVar3;
    *(undefined4 *)((longlong)local_18.Pointer + 0x10) = *(undefined4 *)&param_2->ChordIndex;
    *(FName *)((longlong)local_18.Pointer + 0x18) = FVar4;
    *(TReferenceControllerBase<1> **)((longlong)local_18.Pointer + 0x28) = FVar6.ReferenceController
    ;
    *(FKeyDetails **)((longlong)local_18.Pointer + 0x20) = pFVar5;
    *(uint *)((longlong)local_18.Pointer + 0x30) =
         *(uint *)((longlong)local_18.Pointer + 0x30) & 0xfffffff0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    *(undefined4 *)((longlong)local_18.Pointer + 0x38) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  bVar7 = TSet<TTuple<FUserDefinedChordKey,FInputChord>,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,local_res8,(bool *)0x0);
  lVar9 = (longlong)local_res8[0];
  if (!bVar7) {
    TSet<TTuple<FUserDefinedChordKey,FInputChord>,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,local_res8[0]);
  }
  return (FInputChord *)(*(longlong *)&(this->Pairs).Elements + 0x18 + lVar9 * 0x40);
}

// EmplaceByHash<FUserDefinedChordKey_const_&,FInputChord> @ 1426ef1b0

FInputChord * __thiscall
TMapBase<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
::EmplaceByHash<FUserDefinedChordKey_const_&,FInputChord>
          (TMapBase<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
           *this,uint param_1,FUserDefinedChordKey *param_2,FInputChord *param_3)

{
  int iVar1;
  int iVar2;
  FName FVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  TSparseSetElement<TTuple<FUserDefinedChordKey,FInputChord>_> *pTVar7;
  longlong lVar8;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
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
    lVar8 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x40 + 4 + lVar8);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x40 + lVar8) = 0xffffffff;
    }
  }
  TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  pTVar7 = (TSparseSetElement<TTuple<FUserDefinedChordKey,FInputChord>_> *)0x0;
  if (local_28.Pointer != (TSparseSetElement<TTuple<FUserDefinedChordKey,FInputChord>_> *)0x0) {
    FVar3 = param_2->CommandName;
    *(FName *)local_28.Pointer = param_2->BindingContext;
    *(FName *)((longlong)local_28.Pointer + 8) = FVar3;
    *(undefined4 *)((longlong)local_28.Pointer + 0x10) = *(undefined4 *)&param_2->ChordIndex;
    *(FName *)((longlong)local_28.Pointer + 0x18) = (param_3->Key).KeyName;
    *(FKeyDetails **)((longlong)local_28.Pointer + 0x20) = (param_3->Key).KeyDetails.Object;
    *(TReferenceControllerBase<1> **)((longlong)local_28.Pointer + 0x28) =
         (param_3->Key).KeyDetails.SharedReferenceCount.ReferenceController;
    (param_3->Key).KeyDetails.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (param_3->Key).KeyDetails.Object = (FKeyDetails *)0x0;
    uVar6 = (*(uint *)((longlong)local_28.Pointer + 0x30) ^ param_3->bShift) & 1 ^
            *(uint *)((longlong)local_28.Pointer + 0x30);
    *(uint *)((longlong)local_28.Pointer + 0x30) = uVar6;
    uVar6 = (uVar6 ^ *(uint *)&param_3->field_0x18) & 2 ^ uVar6;
    *(uint *)((longlong)local_28.Pointer + 0x30) = uVar6;
    uVar6 = (uVar6 ^ *(uint *)&param_3->field_0x18) & 4 ^ uVar6;
    *(uint *)((longlong)local_28.Pointer + 0x30) = uVar6;
    *(uint *)((longlong)local_28.Pointer + 0x30) =
         (uVar6 ^ *(uint *)&param_3->field_0x18) & 8 ^ uVar6;
    *(undefined4 *)((longlong)local_28.Pointer + 0x38) = 0xffffffff;
    pTVar7 = local_28.Pointer;
  }
  local_res8[0] = local_28.Index;
  bVar4 = TSet<TTuple<FUserDefinedChordKey,FInputChord>,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,pTVar7,local_res8,(bool *)0x0);
  lVar8 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FUserDefinedChordKey,FInputChord>,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,pTVar7,local_res8[0]);
  }
  return (FInputChord *)(*(longlong *)&(this->Pairs).Elements + 0x18 + lVar8 * 0x40);
}

// FindOrAddImpl<unsigned_int_const_&> @ 1426f0690

TVector2<float> * __thiscall
TMapBase<unsigned_int,UE::Math::TVector2<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector2<float>,0>_>
::FindOrAddImpl<unsigned_int_const_&>
          (TMapBase<unsigned_int,UE::Math::TVector2<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector2<float>,0>_>
           *this,uint param_1,uint *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  uint *local_res20;
  
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
        if (*(uint *)(lVar1 + (longlong)iVar2 * 0x14) == *param_2) {
          if (lVar3 != 0) goto LAB_1426f0722;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0xc);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned_int,UE::Math::TVector2<float>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector2<float>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x14;
LAB_1426f0722:
  return (TVector2<float> *)(lVar3 + 4);
}

// FindOrAddImpl<FName_const_&> @ 1426f0740

FCommandFilterForContext * __thiscall
TMapBase<FName,FInputBindingManager::FCommandFilterForContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FCommandFilterForContext,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,FInputBindingManager::FCommandFilterForContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FCommandFilterForContext,0>_>
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
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0xb0 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (FCommandFilterForContext *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[0x15].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,FInputBindingManager::FCommandFilterForContext>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FCommandFilterForContext,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FCommandFilterForContext *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0xb0 + 8);
}

// FindOrAddImpl<FName_const_&> @ 1426f07f0

FCommandFilterOwners * __thiscall
TMapBase<FName,FInputBindingManager::FCommandFilterOwners,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FCommandFilterOwners,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,FInputBindingManager::FCommandFilterOwners,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FCommandFilterOwners,0>_>
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
            return (FCommandFilterOwners *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,FInputBindingManager::FCommandFilterOwners>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FCommandFilterOwners,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FCommandFilterOwners *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// FindOrAddImpl<FName_const_&> @ 1426f08a0

FContextEntry * __thiscall
TMapBase<FName,FInputBindingManager::FContextEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FContextEntry,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,FInputBindingManager::FContextEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FContextEntry,0>_>
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
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x80 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (FContextEntry *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[0xf].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,FInputBindingManager::FContextEntry>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FContextEntry,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FContextEntry *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x80 + 8);
}

// GenerateKeyArray<TSizedDefaultAllocator<32>_> @ 1426f0dc0

void __thiscall
TMapBase<unsigned_int,FWeakWidgetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FWeakWidgetPath,0>_>
::GenerateKeyArray<TSizedDefaultAllocator<32>_>
          (TMapBase<unsigned_int,FWeakWidgetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FWeakWidgetPath,0>_>
           *this,TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_1)

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
              (4,4,uVar11,&param_1->AllocatorInstance,0,piVar1);
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_1426f0e93;
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
LAB_1426f0e93:
  TStack_40._padding_ = CONCAT44(uVar11,iVar9);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar5 = (param_1->AllocatorInstance).Data;
      pFVar10 = (FScriptContainerElement *)
                ((longlong)TStack_40.CurrentBitIndex * 0x30 + *(longlong *)&(this->Pairs).Elements);
      if (((pFVar5 <= pFVar10) && (pFVar10 < pFVar5 + (longlong)*piVar1 * 4)) &&
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
                          (0x404,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar9 + 1;
      *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 4) =
           *(undefined4 *)pFVar10;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// GenerateValueArray<TSizedDefaultAllocator<32>_> @ 1426f1000

void __thiscall
TMapBase<FName,TSharedPtr<FUICommandInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FUICommandInfo,1>,0>_>
::GenerateValueArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FName,TSharedPtr<FUICommandInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FUICommandInfo,1>,0>_>
           *this,TArray<TSharedPtr<FUICommandInfo,1>,TSizedDefaultAllocator<32>_> *param_1)

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
  DestructItems<TSharedPtr<FUICommandInfo,1>,int>
            ((TSharedPtr<FUICommandInfo,1> *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  iVar10 = 0;
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar9,&param_1->AllocatorInstance,0,piVar1);
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
      lVar7 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1426f10e0;
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
LAB_1426f10e0:
  TStack_40._padding_ = CONCAT44(uVar9,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < iVar3) {
    do {
      pFVar8 = (param_1->AllocatorInstance).Data;
      pFVar11 = (FScriptContainerElement *)
                (*(longlong *)&(this->Pairs).Elements + 8 +
                (longlong)TStack_40.CurrentBitIndex * 0x20);
      if (((pFVar8 <= pFVar11) && (pFVar11 < pFVar8 + (longlong)*piVar1 * 0x10)) &&
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
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar10 + 1;
      pFVar8 = (param_1->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
      *(undefined8 *)pFVar8 = *(undefined8 *)pFVar11;
      lVar7 = *(longlong *)(pFVar11 + 8);
      *(longlong *)(pFVar8 + 8) = lVar7;
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
        UNLOCK();
      }
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// Find @ 1427348b0

FUIAction * __thiscall
TMapBase<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIAction,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIAction,0>_>
::Find(TMapBase<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIAction,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIAction,0>_>
       *this,TSharedPtr<FUICommandInfo_const_,1> *param_1)

{
  FUICommandInfo *pFVar1;
  int iVar2;
  ulonglong *puVar3;
  uint uVar4;
  ForElementType<FSetElementId> FVar5;
  FUIAction *pFVar6;
  
  pFVar1 = param_1->Object;
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
        puVar3 = (ulonglong *)((longlong)iVar2 * 0x80 + *(longlong *)&(this->Pairs).Elements);
        if ((FUICommandInfo *)*puVar3 == pFVar1) {
          pFVar6 = (FUIAction *)0x0;
          if (puVar3 != (ulonglong *)0x0) {
            pFVar6 = (FUIAction *)(puVar3 + 2);
          }
          return pFVar6;
        }
        iVar2 = (int)puVar3[0xf];
      } while (iVar2 != -1);
    }
  }
  return (FUIAction *)0x0;
}

// Find @ 142734950

FUIActionContext * __thiscall
TMapBase<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIActionContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIActionContext,0>_>
::Find(TMapBase<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIActionContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIActionContext,0>_>
       *this,TSharedPtr<FUICommandInfo_const_,1> *param_1)

{
  longlong lVar1;
  FUICommandInfo *pFVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ForElementType<FSetElementId> FVar6;
  FUIActionContext *pFVar7;
  
  pFVar2 = param_1->Object;
  uVar5 = ((uint)((ulonglong)pFVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar2 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar4 != -1) {
      lVar3 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar3 + (longlong)iVar4 * 0x28;
        if (*(FUICommandInfo **)(lVar3 + (longlong)iVar4 * 0x28) == pFVar2) {
          pFVar7 = (FUIActionContext *)0x0;
          if (lVar1 != 0) {
            pFVar7 = (FUIActionContext *)(lVar1 + 0x10);
          }
          return pFVar7;
        }
        iVar4 = *(int *)(lVar1 + 0x20);
      } while (iVar4 != -1);
    }
  }
  return (FUIActionContext *)0x0;
}

// Find @ 142734a00

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::Slate::Private::FPanelDrawerData,1> * __thiscall
TMapBase<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,0>_>
::Find(TMapBase<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,0>_>
       *this,FTabId *param_1)

{
  longlong lVar1;
  FName FVar2;
  uint uVar3;
  int iVar4;
  TSharedPtr<UE::Slate::Private::FPanelDrawerData,1> *pTVar5;
  
  FVar2 = param_1->TabType;
  uVar3 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  iVar4 = TSet<TTuple<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>_>,TDefaultMapHashableKeyFuncs<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FTabId>(&this->Pairs,uVar3 + FVar2.Number ^ param_1->InstanceId,param_1)
  ;
  if (iVar4 != -1) {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar4 * 0x28;
    pTVar5 = (TSharedPtr<UE::Slate::Private::FPanelDrawerData,1> *)0x0;
    if (lVar1 != 0) {
      pTVar5 = (TSharedPtr<UE::Slate::Private::FPanelDrawerData,1> *)(lVar1 + 0x10);
    }
    return pTVar5;
  }
  return (TSharedPtr<UE::Slate::Private::FPanelDrawerData,1> *)0x0;
}

// Find @ 142734a80

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockTab,1> * __thiscall
TMapBase<FTabId,TSharedRef<SDockTab,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedRef<SDockTab,1>,0>_>
::Find(TMapBase<FTabId,TSharedRef<SDockTab,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedRef<SDockTab,1>,0>_>
       *this,FTabId *param_1)

{
  longlong lVar1;
  FName FVar2;
  uint uVar3;
  int iVar4;
  TSharedRef<SDockTab,1> *pTVar5;
  
  FVar2 = param_1->TabType;
  uVar3 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  iVar4 = TSet<TTuple<FTabId,TSharedRef<SDockTab,1>_>,TDefaultMapHashableKeyFuncs<FTabId,TSharedRef<SDockTab,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FTabId>(&this->Pairs,uVar3 + FVar2.Number ^ param_1->InstanceId,param_1)
  ;
  if (iVar4 != -1) {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar4 * 0x28;
    pTVar5 = (TSharedRef<SDockTab,1> *)0x0;
    if (lVar1 != 0) {
      pTVar5 = (TSharedRef<SDockTab,1> *)(lVar1 + 0x10);
    }
    return pTVar5;
  }
  return (TSharedRef<SDockTab,1> *)0x0;
}

// Find @ 142734b00

FCommandFilterForContext * __thiscall
TMapBase<FName,FInputBindingManager::FCommandFilterForContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FCommandFilterForContext,0>_>
::Find(TMapBase<FName,FInputBindingManager::FCommandFilterForContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FCommandFilterForContext,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FCommandFilterForContext *pFVar2;
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
          pFVar2 = (FCommandFilterForContext *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pFVar2 = (FCommandFilterForContext *)(pFVar4 + 1);
          }
          return pFVar2;
        }
        uVar1 = pFVar4[0x15].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FCommandFilterForContext *)0x0;
}

// Find @ 142734ba0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FTabSpawnerEntry,1> * __thiscall
TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
::Find(TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  TSharedRef<FTabSpawnerEntry,1> *pTVar4;
  
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
          pTVar4 = (TSharedRef<FTabSpawnerEntry,1> *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pTVar4 = (TSharedRef<FTabSpawnerEntry,1> *)(pFVar2 + 1);
          }
          return pTVar4;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (TSharedRef<FTabSpawnerEntry,1> *)0x0;
}

// FindRef @ 142735f90

FContextEntry * __thiscall
TMapBase<FName,FInputBindingManager::FContextEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FContextEntry,0>_>
::FindRef(TMapBase<FName,FInputBindingManager::FContextEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FContextEntry,0>_>
          *this,FContextEntry *__return_storage_ptr__,FName param_1)

{
  undefined1 *puVar1;
  TArray<TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  int *piVar3;
  int iVar4;
  TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>
  *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TTuple<FName,FInputBindingManager::FContextEntry> *pTVar7;
  
  pTVar7 = TSet<TTuple<FName,FInputBindingManager::FContextEntry>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FContextEntry,0>,FDefaultSetAllocator>
           ::Find(&this->Pairs,param_1);
  if (pTVar7 == (TTuple<FName,FInputBindingManager::FContextEntry> *)0x0) {
    FInputBindingManager::FContextEntry::FContextEntry(__return_storage_ptr__);
  }
  else {
    puVar1 = &(__return_storage_ptr__->CommandInfoMap).field_0x48;
    *(undefined8 *)&__return_storage_ptr__->CommandInfoMap = 0;
    *(undefined8 *)&(__return_storage_ptr__->CommandInfoMap).field_0x8 = 0;
    *(undefined8 *)&(__return_storage_ptr__->CommandInfoMap).field_0x20 = 0;
    *(undefined4 *)&(__return_storage_ptr__->CommandInfoMap).field_0x28 = 0;
    *(undefined4 *)&(__return_storage_ptr__->CommandInfoMap).field_0x2c = 0x80;
    *(undefined4 *)&(__return_storage_ptr__->CommandInfoMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(__return_storage_ptr__->CommandInfoMap).field_0x34 = 0;
    *(undefined8 *)&(__return_storage_ptr__->CommandInfoMap).field_0x40 = 0;
    *(undefined4 *)puVar1 = 0;
    if (__return_storage_ptr__ != (FContextEntry *)&pTVar7->field_0x8) {
      UE::Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                ((ForElementType<FSetElementId> *)
                 &(__return_storage_ptr__->CommandInfoMap).field_0x38,(int *)puVar1,
                 (ForElementType<FSetElementId> *)&pTVar7->field_0x40,*(int *)&pTVar7->field_0x50);
      TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FUICommandInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FUICommandInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)__return_storage_ptr__,
                  (TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FUICommandInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)&pTVar7->field_0x8);
    }
    pTVar2 = &__return_storage_ptr__->ChordToCommandInfoMaps;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    piVar3 = &(__return_storage_ptr__->ChordToCommandInfoMaps).ArrayMax;
    iVar4 = *(int *)&pTVar7->field_0x60;
    pTVar5 = *(TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>
               **)&pTVar7->field_0x58;
    (__return_storage_ptr__->ChordToCommandInfoMaps).ArrayNum = iVar4;
    if (iVar4 == 0) {
      *piVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,iVar4,0,&pTVar2->AllocatorInstance,iVar4,piVar3);
      ConstructItems<TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>,TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>,int>
                ((pTVar2->AllocatorInstance).Data,pTVar5,iVar4);
    }
    (__return_storage_ptr__->BindingContext).Object = *(FBindingContext **)&pTVar7->field_0x68;
    pTVar6 = *(TReferenceControllerBase<1> **)&pTVar7->field_0x70;
    (__return_storage_ptr__->BindingContext).SharedReferenceCount.ReferenceController = pTVar6;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// Remove @ 14277acc0

int __thiscall
TMapBase<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,0>_>
::Remove(TMapBase<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,0>_>
         *this,FTabId *param_1)

{
  uint uVar1;
  FName FVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar2 = param_1->TabType;
    uVar4 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
    FVar7 = (this->Pairs).Hash.SecondaryData;
    uVar1 = param_1->InstanceId;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar6 = *(int *)((longlong)FVar7 +
                    ((longlong)(int)(uVar1 ^ uVar4 + FVar2.Number) &
                    (longlong)(this->Pairs).HashSize - 1U) * 4);
    if (iVar6 != -1) {
      lVar3 = *(longlong *)&(this->Pairs).Elements;
      while ((lVar5 = (longlong)iVar6, *(FName *)(lVar3 + lVar5 * 0x28) != param_1->TabType ||
             (((uVar4 = *(uint *)(lVar3 + 8 + lVar5 * 0x28), uVar4 != 0xffffffff &&
               (uVar1 != 0xffffffff)) && (uVar4 != uVar1))))) {
        iVar6 = *(int *)(lVar3 + 0x20 + lVar5 * 0x28);
        if (iVar6 == -1) {
          return 0;
        }
      }
      TSet<TTuple<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>_>,TDefaultMapHashableKeyFuncs<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,0>,FDefaultSetAllocator>
      ::RemoveByIndex(&this->Pairs,iVar6);
      return 1;
    }
  }
  return 0;
}

// Emplace<TSharedPtr<SWidget,1>,TSharedPtr<FMultiBlock_const_,1>_> @ 14279def0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedPtr<FMultiBlock_const_,1> * __thiscall
TMapBase<TSharedPtr<SWidget,1>,TSharedPtr<FMultiBlock_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TSharedPtr<FMultiBlock_const_,1>,0>_>
::Emplace<TSharedPtr<SWidget,1>,TSharedPtr<FMultiBlock_const_,1>_>
          (TMapBase<TSharedPtr<SWidget,1>,TSharedPtr<FMultiBlock_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TSharedPtr<FMultiBlock_const_,1>,0>_>
           *this,TSharedPtr<SWidget,1> *param_1,TSharedPtr<FMultiBlock_const_,1> *param_2)

{
  TPairInitializer<TSharedPtr<SWidget,1>_&&,TSharedPtr<FMultiBlock_const_,1>_&&> local_res8 [2];
  TSharedPtr<SWidget,1> *local_18;
  TSharedPtr<FMultiBlock_const_,1> *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  TSet<TTuple<TSharedPtr<SWidget,1>,TSharedPtr<FMultiBlock_const_,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TSharedPtr<FMultiBlock_const_,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<TSharedPtr<SWidget,1>_&&,TSharedPtr<FMultiBlock_const_,1>_&&>_>
            (&this->Pairs,local_res8,(bool *)&local_18);
  return (TSharedPtr<FMultiBlock_const_,1> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)(int)local_res8[0].Key * 0x28 + 0x10);
}

// FindOrAddImpl<FName_const_&> @ 14279e980

FCustomizedToolMenuEntry * __thiscall
TMapBase<FName,FCustomizedToolMenuEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuEntry,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,FCustomizedToolMenuEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuEntry,0>_>
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
          if (lVar3 != 0) goto LAB_14279ea12;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0xc);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,FCustomizedToolMenuEntry>,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuEntry,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x14;
LAB_14279ea12:
  return (FCustomizedToolMenuEntry *)(lVar3 + 8);
}

// FindOrAddImpl<FName_const_&> @ 14279ea30

FCustomizedToolMenuSection * __thiscall
TMapBase<FName,FCustomizedToolMenuSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuSection,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,FCustomizedToolMenuSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuSection,0>_>
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
          if (lVar3 != 0) goto LAB_14279eac2;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0xc);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,FCustomizedToolMenuSection>,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuSection,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x14;
LAB_14279eac2:
  return (FCustomizedToolMenuSection *)(lVar3 + 8);
}

// Find @ 1428092c0

TSharedPtr<SWidget,1> * __thiscall
TMapBase<ITableRow_const_*,TSharedPtr<SWidget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<SWidget,1>,0>_>
::Find(TMapBase<ITableRow_const_*,TSharedPtr<SWidget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<SWidget,1>,0>_>
       *this,ITableRow *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TSharedPtr<SWidget,1> *pTVar4;
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
          pTVar4 = (TSharedPtr<SWidget,1> *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TSharedPtr<SWidget,1> *)(plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TSharedPtr<SWidget,1> *)0x0;
}

// Find @ 142809360

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1> * __thiscall
TMapBase<TSharedPtr<FMultiBlock_const_,1>,TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FMultiBlock_const_,1>,TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>,0>_>
::Find(TMapBase<TSharedPtr<FMultiBlock_const_,1>,TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FMultiBlock_const_,1>,TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>,0>_>
       *this,TSharedPtr<FMultiBlock_const_,1> *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<FMultiBlock_const_,1> local_18;
  
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
  iVar2 = TSet<TTuple<TSharedPtr<FMultiBlock_const_,1>,TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FMultiBlock_const_,1>,TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TSharedPtr<FMultiBlock_const_,1>_>
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
      return (TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1> *)(lVar1 + 0x10);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1> *)0x0;
}

// Find @ 142809430

TSharedRef<ITableRow,1> * __thiscall
TMapBase<TSharedPtr<SWidget,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TSharedRef<ITableRow,1>,0>_>
::Find(TMapBase<TSharedPtr<SWidget,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TSharedRef<ITableRow,1>,0>_>
       *this,TSharedPtr<SWidget_const_,1> *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<SWidget_const_,1> local_18;
  
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
  iVar2 = TSet<TTuple<TSharedPtr<SWidget,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TSharedPtr<SWidget_const_,1>_>
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

// Find @ 142809500

FCustomizedToolMenuEntry * __thiscall
TMapBase<FName,FCustomizedToolMenuEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuEntry,0>_>
::Find(TMapBase<FName,FCustomizedToolMenuEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuEntry,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  FCustomizedToolMenuEntry *pFVar5;
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
          pFVar5 = (FCustomizedToolMenuEntry *)0x0;
          if (lVar1 != 0) {
            pFVar5 = (FCustomizedToolMenuEntry *)(lVar1 + 8);
          }
          return pFVar5;
        }
        iVar4 = *(int *)(lVar1 + 0xc);
      } while (iVar4 != -1);
    }
  }
  return (FCustomizedToolMenuEntry *)0x0;
}

// Find @ 1428095a0

FCustomizedToolMenuSection * __thiscall
TMapBase<FName,FCustomizedToolMenuSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuSection,0>_>
::Find(TMapBase<FName,FCustomizedToolMenuSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuSection,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  FCustomizedToolMenuSection *pFVar5;
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
          pFVar5 = (FCustomizedToolMenuSection *)0x0;
          if (lVar1 != 0) {
            pFVar5 = (FCustomizedToolMenuSection *)(lVar1 + 8);
          }
          return pFVar5;
        }
        iVar4 = *(int *)(lVar1 + 0xc);
      } while (iVar4 != -1);
    }
  }
  return (FCustomizedToolMenuSection *)0x0;
}

// Find @ 142871980

FTextRange * __thiscall
TMapBase<FString,FTextRange,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>_>
::Find(TMapBase<FString,FTextRange,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>_>
       *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  FTextRange *pFVar6;
  
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
  iVar2 = TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x20 + *(longlong *)&(this->Pairs).Elements;
    pFVar6 = (FTextRange *)0x0;
    if (lVar4 != 0) {
      pFVar6 = (FTextRange *)(lVar4 + 0x10);
    }
    return pFVar6;
  }
  return (FTextRange *)0x0;
}

// Find @ 142935010

TSharedPtr<FString,1> * __thiscall
TMapBase<ITableRow_const_*,TSharedPtr<FString,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<FString,1>,0>_>
::Find(TMapBase<ITableRow_const_*,TSharedPtr<FString,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<FString,1>,0>_>
       *this,ITableRow *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TSharedPtr<FString,1> *pTVar4;
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
          pTVar4 = (TSharedPtr<FString,1> *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TSharedPtr<FString,1> *)(plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TSharedPtr<FString,1> *)0x0;
}

// Find @ 1429350b0

TSharedRef<ITableRow,1> * __thiscall
TMapBase<TSharedPtr<FString,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,TSharedRef<ITableRow,1>,0>_>
::Find(TMapBase<TSharedPtr<FString,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,TSharedRef<ITableRow,1>,0>_>
       *this,TSharedPtr<FString_const_,1> *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<FString_const_,1> local_18;
  
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
  iVar2 = TSet<TTuple<TSharedPtr<FString,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TSharedPtr<FString_const_,1>_>
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

// Find @ 142935180

FArrangedWidget * __thiscall
TMapBase<TSharedRef<SWidget,1>,FArrangedWidget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedRef<SWidget,1>,FArrangedWidget,0>_>
::Find(TMapBase<TSharedRef<SWidget,1>,FArrangedWidget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedRef<SWidget,1>,FArrangedWidget,0>_>
       *this,TSharedRef<SWidget_const_,1> *param_1)

{
  int iVar1;
  SWidget *pSVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  SWidget *pSVar5;
  uint uVar6;
  TReferenceControllerBase<1> *pTVar7;
  ForElementType<FSetElementId> FVar8;
  longlong lVar9;
  
  pTVar7 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = param_1->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar6 = ((uint)((ulonglong)pSVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pSVar2 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar8 = (this->Pairs).Hash.SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar8 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    while (iVar1 != -1) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      lVar3 = *(longlong *)&(this->Pairs).Elements;
      lVar9 = (longlong)iVar1 * 0x60;
      pTVar4 = *(TReferenceControllerBase<1> **)(lVar9 + 8 + lVar3);
      pSVar5 = *(SWidget **)(lVar9 + lVar3);
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      if (pSVar5 == pSVar2) {
        if (iVar1 != -1) {
          lVar9 = lVar9 + *(longlong *)&(this->Pairs).Elements;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar7);
          pTVar7 = (param_1->SharedReferenceCount).ReferenceController;
          if (lVar9 != 0) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar7);
            return (FArrangedWidget *)(lVar9 + 0x10);
          }
          goto LAB_142935268;
        }
        break;
      }
      iVar1 = *(int *)(lVar9 + 0x58 + *(longlong *)&(this->Pairs).Elements);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  pTVar7 = (param_1->SharedReferenceCount).ReferenceController;
LAB_142935268:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return (FArrangedWidget *)0x0;
}

// FindChecked @ 1429e8450

FArrangementData * __thiscall
TMapBase<int,SWrapBox::FChildArranger::FArrangementData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,SWrapBox::FChildArranger::FArrangementData,0>_>
::FindChecked(TMapBase<int,SWrapBox::FChildArranger::FArrangementData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,SWrapBox::FChildArranger::FArrangementData,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FArrangementData *pFVar4;
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
        piVar5 = (int *)((longlong)iVar3 * 0x40 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (FArrangementData *)(piVar5 + 2);
          }
          break;
        }
        iVar3 = piVar5[0xe];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FArrangementData *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FArrangementData *)(*pcVar1)();
  return pFVar4;
}

