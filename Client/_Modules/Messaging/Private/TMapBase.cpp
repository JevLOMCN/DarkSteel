// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Messaging
// Functions: 13

// EmplaceByHash<FTopLevelAssetPath_const_&> @ 142d3a570

TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>,0>_>
::EmplaceByHash<FTopLevelAssetPath_const_&>
          (TMapBase<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FTopLevelAssetPath *param_2)

{
  int iVar1;
  int iVar2;
  FName FVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
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
                   *)this,&local_18,iVar5);
  if (local_18.Pointer ==
      (TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>_>_>
       *)0x0) {
    local_18.Pointer =
         (TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>_>_>
          *)0x0;
  }
  else {
    FVar3 = param_2->AssetName;
    *(FName *)local_18.Pointer = param_2->PackageName;
    *(FName *)((longlong)local_18.Pointer + 8) = FVar3;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x18) = 0;
    DestructItems<TSharedPtr<IMessageInterceptor,1>,int>((TSharedPtr<IMessageInterceptor,1> *)0x0,0)
    ;
    *(undefined4 *)((longlong)local_18.Pointer + 0x20) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  bVar4 = TSet<TTuple<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,local_res8[0]);
  }
  return (TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + lVar6 * 0x28 + 0x10);
}

// EmplaceByHash<FTopLevelAssetPath_const_&> @ 142d3a6a0

TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>,0>_>
::EmplaceByHash<FTopLevelAssetPath_const_&>
          (TMapBase<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FTopLevelAssetPath *param_2)

{
  int iVar1;
  int iVar2;
  FName FVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
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
                   *)this,&local_18,iVar5);
  if (local_18.Pointer ==
      (TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>_>_>
       *)0x0) {
    local_18.Pointer =
         (TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>_>_>
          *)0x0;
  }
  else {
    FVar3 = param_2->AssetName;
    *(FName *)local_18.Pointer = param_2->PackageName;
    *(FName *)((longlong)local_18.Pointer + 8) = FVar3;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x18) = 0;
    DestructItems<TSharedPtr<IMessageSubscription,1>,int>
              ((TSharedPtr<IMessageSubscription,1> *)0x0,0);
    *(undefined4 *)((longlong)local_18.Pointer + 0x20) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  bVar4 = TSet<TTuple<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,local_res8[0]);
  }
  return (TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + lVar6 * 0x28 + 0x10);
}

// EmplaceByHash<FTopLevelAssetPath> @ 142d3a7d0

TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>,0>_>
::EmplaceByHash<FTopLevelAssetPath>
          (TMapBase<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FTopLevelAssetPath *param_2)

{
  int iVar1;
  int iVar2;
  FName FVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
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
                   *)this,&local_18,iVar5);
  if (local_18.Pointer ==
      (TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>_>_>
       *)0x0) {
    local_18.Pointer =
         (TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>_>_>
          *)0x0;
  }
  else {
    FVar3 = param_2->AssetName;
    *(FName *)local_18.Pointer = param_2->PackageName;
    *(FName *)((longlong)local_18.Pointer + 8) = FVar3;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x18) = 0;
    DestructItems<TSharedPtr<IMessageInterceptor,1>,int>((TSharedPtr<IMessageInterceptor,1> *)0x0,0)
    ;
    *(undefined4 *)((longlong)local_18.Pointer + 0x20) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  bVar4 = TSet<TTuple<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,local_res8[0]);
  }
  return (TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + lVar6 * 0x28 + 0x10);
}

// EmplaceByHash<FTopLevelAssetPath> @ 142d3a900

TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>,0>_>
::EmplaceByHash<FTopLevelAssetPath>
          (TMapBase<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FTopLevelAssetPath *param_2)

{
  int iVar1;
  int iVar2;
  FName FVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
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
                   *)this,&local_18,iVar5);
  if (local_18.Pointer ==
      (TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>_>_>
       *)0x0) {
    local_18.Pointer =
         (TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>_>_>
          *)0x0;
  }
  else {
    FVar3 = param_2->AssetName;
    *(FName *)local_18.Pointer = param_2->PackageName;
    *(FName *)((longlong)local_18.Pointer + 8) = FVar3;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x18) = 0;
    DestructItems<TSharedPtr<IMessageSubscription,1>,int>
              ((TSharedPtr<IMessageSubscription,1> *)0x0,0);
    *(undefined4 *)((longlong)local_18.Pointer + 0x20) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  bVar4 = TSet<TTuple<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,local_res8[0]);
  }
  return (TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + lVar6 * 0x28 + 0x10);
}

// FindOrAddImpl<FGuid_const_&> @ 142d3bcb0

TSharedPtr<FMessageTracerEndpointInfo,1> * __thiscall
TMapBase<FGuid,TSharedPtr<FMessageTracerEndpointInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FMessageTracerEndpointInfo,1>,0>_>
::FindOrAddImpl<FGuid_const_&>
          (TMapBase<FGuid,TSharedPtr<FMessageTracerEndpointInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FMessageTracerEndpointInfo,1>,0>_>
           *this,uint param_1,FGuid *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FGuid *local_res20;
  
  iVar1 = TSet<TTuple<FGuid,TSharedPtr<FMessageTracerEndpointInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FMessageTracerEndpointInfo,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,param_1,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x28, lVar2 == 0)) {
    local_res20 = param_2;
    TSet<TTuple<FGuid,TSharedPtr<FMessageTracerEndpointInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FMessageTracerEndpointInfo,1>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FGuid_const_&>_>
              (&this->Pairs,(uint)local_res8,(TKeyInitializer<FGuid_const_&> *)(ulonglong)param_1,
               (bool *)&local_res20);
    lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
  }
  return (TSharedPtr<FMessageTracerEndpointInfo,1> *)(lVar2 + 0x10);
}

// FindOrAddImpl<FGuid_const_&> @ 142d3bd30

TSharedPtr<FMessageTracerInterceptorInfo,1> * __thiscall
TMapBase<FGuid,TSharedPtr<FMessageTracerInterceptorInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FMessageTracerInterceptorInfo,1>,0>_>
::FindOrAddImpl<FGuid_const_&>
          (TMapBase<FGuid,TSharedPtr<FMessageTracerInterceptorInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FMessageTracerInterceptorInfo,1>,0>_>
           *this,uint param_1,FGuid *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FGuid *local_res20;
  
  iVar1 = TSet<TTuple<FGuid,TSharedPtr<FMessageTracerInterceptorInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FMessageTracerInterceptorInfo,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,param_1,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x28, lVar2 == 0)) {
    local_res20 = param_2;
    TSet<TTuple<FGuid,TSharedPtr<FMessageTracerInterceptorInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FMessageTracerInterceptorInfo,1>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FGuid_const_&>_>
              (&this->Pairs,(uint)local_res8,(TKeyInitializer<FGuid_const_&> *)(ulonglong)param_1,
               (bool *)&local_res20);
    lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
  }
  return (TSharedPtr<FMessageTracerInterceptorInfo,1> *)(lVar2 + 0x10);
}

// FindOrAddImpl<FMessageAddress_const_&> @ 142d3bdb0

FGuid * __thiscall
TMapBase<FMessageAddress,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMessageAddress,FGuid,0>_>
::FindOrAddImpl<FMessageAddress_const_&>
          (TMapBase<FMessageAddress,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMessageAddress,FGuid,0>_>
           *this,uint param_1,FMessageAddress *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FMessageAddress *local_res20;
  
  iVar1 = TSet<TTuple<FMessageAddress,FGuid>,TDefaultMapHashableKeyFuncs<FMessageAddress,FGuid,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FMessageAddress>(&this->Pairs,param_1,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x28, lVar2 == 0)) {
    local_res20 = param_2;
    TSet<TTuple<FMessageAddress,FGuid>,TDefaultMapHashableKeyFuncs<FMessageAddress,FGuid,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FMessageAddress_const_&>_>
              (&this->Pairs,(uint)local_res8,
               (TKeyInitializer<FMessageAddress_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
    lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
  }
  return (FGuid *)(lVar2 + 0x10);
}

// FindOrAddImpl<FMessageAddress_const_&> @ 142d3be30

TWeakPtr<IMessageReceiver,1> * __thiscall
TMapBase<FMessageAddress,TWeakPtr<IMessageReceiver,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMessageAddress,TWeakPtr<IMessageReceiver,1>,0>_>
::FindOrAddImpl<FMessageAddress_const_&>
          (TMapBase<FMessageAddress,TWeakPtr<IMessageReceiver,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMessageAddress,TWeakPtr<IMessageReceiver,1>,0>_>
           *this,uint param_1,FMessageAddress *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FMessageAddress *local_res20;
  
  iVar1 = TSet<TTuple<FMessageAddress,TWeakPtr<IMessageReceiver,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TWeakPtr<IMessageReceiver,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FMessageAddress>(&this->Pairs,param_1,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x28, lVar2 == 0)) {
    local_res20 = param_2;
    TSet<TTuple<FMessageAddress,TWeakPtr<IMessageReceiver,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TWeakPtr<IMessageReceiver,1>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FMessageAddress_const_&>_>
              (&this->Pairs,(uint)local_res8,
               (TKeyInitializer<FMessageAddress_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
    lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
  }
  return (TWeakPtr<IMessageReceiver,1> *)(lVar2 + 0x10);
}

// FindOrAddImpl<FTopLevelAssetPath> @ 142d3beb0

TSharedPtr<FMessageTracerTypeInfo,1> * __thiscall
TMapBase<FTopLevelAssetPath,TSharedPtr<FMessageTracerTypeInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSharedPtr<FMessageTracerTypeInfo,1>,0>_>
::FindOrAddImpl<FTopLevelAssetPath>
          (TMapBase<FTopLevelAssetPath,TSharedPtr<FMessageTracerTypeInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSharedPtr<FMessageTracerTypeInfo,1>,0>_>
           *this,uint param_1,FTopLevelAssetPath *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [2];
  FTopLevelAssetPath *local_res20;
  
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
        if ((*(FName *)(lVar2 + (longlong)iVar3 * 0x28) == param_2->PackageName) &&
           (*(FName *)(lVar1 + 8) == param_2->AssetName)) {
          if ((iVar3 != -1) && (lVar1 != 0)) {
            return (TSharedPtr<FMessageTracerTypeInfo,1> *)(lVar1 + 0x10);
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x20);
      } while (iVar3 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FTopLevelAssetPath,TSharedPtr<FMessageTracerTypeInfo,1>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSharedPtr<FMessageTracerTypeInfo,1>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FTopLevelAssetPath_&&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FTopLevelAssetPath_&&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (TSharedPtr<FMessageTracerTypeInfo,1> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28 + 0x10);
}

// GenerateKeyArray<TSizedDefaultAllocator<32>_> @ 142d3bf80

void __thiscall
TMapBase<FMessageAddress,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMessageAddress,FGuid,0>_>
::GenerateKeyArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FMessageAddress,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMessageAddress,FGuid,0>_>
           *this,TArray<FMessageAddress,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  longlong lVar10;
  int iVar11;
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
  iVar11 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,uVar12,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar4 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar12 = 1;
  iVar13 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar4 != 0) {
    puVar14 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)TStack_40.Array;
    }
    uVar5 = *puVar14;
    while (uVar5 == 0) {
      lVar10 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      TStack_40.CurrentBitIndex = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_142d3c062;
      uVar5 = puVar14[lVar10 + 1];
    }
    uVar12 = -uVar5 & uVar5;
    uVar3 = (ulonglong)uVar12 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar10 + -1 + iVar13;
    if (iVar4 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar4;
    }
  }
LAB_142d3c062:
  TStack_40._padding_ = CONCAT44(uVar12,iVar11);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar13;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar2 = (FScriptContainerElement *)
               (*(longlong *)&(this->Pairs).Elements + (longlong)TStack_40.CurrentBitIndex * 0x28);
      pFVar6 = (param_1->AllocatorInstance).Data;
      if (((pFVar6 <= pFVar2) && (pFVar2 < pFVar6 + (longlong)*piVar1 * 0x10)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar11 = param_1->ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar11 + 1;
      uVar8 = *(undefined8 *)(pFVar2 + 8);
      pFVar6 = (param_1->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
      *(undefined8 *)pFVar6 = *(undefined8 *)pFVar2;
      *(undefined8 *)(pFVar6 + 8) = uVar8;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// GenerateValueArray<TSizedDefaultAllocator<32>_> @ 142d3c1f0

void __thiscall
TMapBase<FGuid,TSharedPtr<FMessageTracerEndpointInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FMessageTracerEndpointInfo,1>,0>_>
::GenerateValueArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FGuid,TSharedPtr<FMessageTracerEndpointInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FMessageTracerEndpointInfo,1>,0>_>
           *this,TArray<TSharedPtr<FMessageTracerEndpointInfo,1>,TSizedDefaultAllocator<32>_>
                 *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
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
  DestructItems<TSharedPtr<FMessageTracerEndpointInfo,1>,int>
            ((TSharedPtr<FMessageTracerEndpointInfo,1> *)(param_1->AllocatorInstance).Data,
             param_1->ArrayNum);
  iVar11 = 0;
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar10,&param_1->AllocatorInstance,0,piVar1);
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
      lVar8 = (longlong)iVar11;
      iVar12 = iVar12 + 0x20;
      iVar11 = iVar11 + 1;
      TStack_40.CurrentBitIndex = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_142d3c2d0;
      uVar5 = puVar13[lVar8 + 1];
    }
    uVar10 = -uVar5 & uVar5;
    uVar3 = (ulonglong)uVar10 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar8 + -1 + iVar12;
    if (iVar4 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar4;
    }
  }
LAB_142d3c2d0:
  TStack_40._padding_ = CONCAT44(uVar10,iVar11);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < iVar4) {
    do {
      pFVar2 = (FScriptContainerElement *)
               (*(longlong *)&(this->Pairs).Elements +
               ((longlong)TStack_40.CurrentBitIndex * 5 + 2) * 8);
      pFVar9 = (param_1->AllocatorInstance).Data;
      if (((pFVar9 <= pFVar2) && (pFVar2 < pFVar9 + (longlong)*piVar1 * 0x10)) &&
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
      iVar11 = param_1->ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar11 + 1;
      pFVar9 = (param_1->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
      *(undefined8 *)pFVar9 = *(undefined8 *)pFVar2;
      lVar8 = *(longlong *)(pFVar2 + 8);
      *(longlong *)(pFVar9 + 8) = lVar8;
      if (lVar8 != 0) {
        LOCK();
        *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
        UNLOCK();
      }
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// GenerateValueArray<TSizedDefaultAllocator<32>_> @ 142d3c460

void __thiscall
TMapBase<FTopLevelAssetPath,TSharedPtr<FMessageTracerTypeInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSharedPtr<FMessageTracerTypeInfo,1>,0>_>
::GenerateValueArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FTopLevelAssetPath,TSharedPtr<FMessageTracerTypeInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSharedPtr<FMessageTracerTypeInfo,1>,0>_>
           *this,TArray<TSharedPtr<FMessageTracerTypeInfo,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
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
  DestructItems<TSharedPtr<FMessageTracerTypeInfo,1>,int>
            ((TSharedPtr<FMessageTracerTypeInfo,1> *)(param_1->AllocatorInstance).Data,
             param_1->ArrayNum);
  iVar11 = 0;
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar10,&param_1->AllocatorInstance,0,piVar1);
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
      lVar8 = (longlong)iVar11;
      iVar12 = iVar12 + 0x20;
      iVar11 = iVar11 + 1;
      TStack_40.CurrentBitIndex = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_142d3c540;
      uVar5 = puVar13[lVar8 + 1];
    }
    uVar10 = -uVar5 & uVar5;
    uVar3 = (ulonglong)uVar10 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar8 + -1 + iVar12;
    if (iVar4 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar4;
    }
  }
LAB_142d3c540:
  TStack_40._padding_ = CONCAT44(uVar10,iVar11);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < iVar4) {
    do {
      pFVar2 = (FScriptContainerElement *)
               (*(longlong *)&(this->Pairs).Elements +
               ((longlong)TStack_40.CurrentBitIndex * 5 + 2) * 8);
      pFVar9 = (param_1->AllocatorInstance).Data;
      if (((pFVar9 <= pFVar2) && (pFVar2 < pFVar9 + (longlong)*piVar1 * 0x10)) &&
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
      iVar11 = param_1->ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar11 + 1;
      pFVar9 = (param_1->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
      *(undefined8 *)pFVar9 = *(undefined8 *)pFVar2;
      lVar8 = *(longlong *)(pFVar2 + 8);
      *(longlong *)(pFVar9 + 8) = lVar8;
      if (lVar8 != 0) {
        LOCK();
        *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
        UNLOCK();
      }
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// GenerateValueArray<TSizedDefaultAllocator<32>_> @ 142d3c6d0

void __thiscall
TMapBase<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>,0>_>
::GenerateValueArray<TSizedDefaultAllocator<32>_>
          (TMapBase<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>,0>_>
           *this,TArray<TSharedPtr<FMessageTracerMessageInfo,1>,TSizedDefaultAllocator<32>_>
                 *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
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
  DestructItems<TSharedPtr<FMessageTracerMessageInfo,1>,int>
            ((TSharedPtr<FMessageTracerMessageInfo,1> *)(param_1->AllocatorInstance).Data,
             param_1->ArrayNum);
  iVar11 = 0;
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar10,&param_1->AllocatorInstance,0,piVar1);
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
      lVar8 = (longlong)iVar11;
      iVar12 = iVar12 + 0x20;
      iVar11 = iVar11 + 1;
      TStack_40.CurrentBitIndex = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_142d3c7b0;
      uVar5 = puVar13[lVar8 + 1];
    }
    uVar10 = -uVar5 & uVar5;
    uVar3 = (ulonglong)uVar10 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar8 + -1 + iVar12;
    if (iVar4 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar4;
    }
  }
LAB_142d3c7b0:
  TStack_40._padding_ = CONCAT44(uVar10,iVar11);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < iVar4) {
    do {
      pFVar2 = (FScriptContainerElement *)
               (*(longlong *)&(this->Pairs).Elements +
               ((longlong)TStack_40.CurrentBitIndex * 5 + 2) * 8);
      pFVar9 = (param_1->AllocatorInstance).Data;
      if (((pFVar9 <= pFVar2) && (pFVar2 < pFVar9 + (longlong)*piVar1 * 0x10)) &&
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
      iVar11 = param_1->ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar11 + 1;
      pFVar9 = (param_1->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
      *(undefined8 *)pFVar9 = *(undefined8 *)pFVar2;
      lVar8 = *(longlong *)(pFVar2 + 8);
      *(longlong *)(pFVar9 + 8) = lVar8;
      if (lVar8 != 0) {
        LOCK();
        *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
        UNLOCK();
      }
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

