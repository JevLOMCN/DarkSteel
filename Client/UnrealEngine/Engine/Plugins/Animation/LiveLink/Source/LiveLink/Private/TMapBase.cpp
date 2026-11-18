// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 16

// Emplace<FGuid_const_&> @ 14cffd3e0

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FGuid,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
::Emplace<FGuid_const_&>
          (TMapBase<FGuid,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
           *this,FGuid *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  ulong64 uVar6;
  TSparseSetElement<TTuple<FGuid,TArray<FName,TSizedDefaultAllocator<32>_>_>_> *pTVar7;
  longlong lVar8;
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
                   *)this,&local_18,iVar5);
  if (local_18.Pointer ==
      (TSparseSetElement<TTuple<FGuid,TArray<FName,TSizedDefaultAllocator<32>_>_>_> *)0x0) {
    pTVar7 = (TSparseSetElement<TTuple<FGuid,TArray<FName,TSizedDefaultAllocator<32>_>_>_> *)0x0;
  }
  else {
    uVar3 = *(undefined8 *)&param_1->C;
    *(undefined8 *)local_18.Pointer = *(undefined8 *)param_1;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = uVar3;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x18) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x20) = 0xffffffff;
    pTVar7 = local_18.Pointer;
  }
  local_res8[0] = local_18.Index;
  uVar6 = CityHash64((char *)pTVar7,0x10);
  bVar4 = TSet<TTuple<FGuid,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,(uint)uVar6,pTVar7,local_res8,(bool *)0x0);
  lVar8 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FGuid,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,(uint)uVar6,pTVar7,local_res8[0]);
  }
  return (TArray<FName,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + lVar8 * 0x28 + 0x10);
}

// Emplace<FName,FString> @ 14cffed90

FString * __thiscall
TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>::
Emplace<FName,FString>
          (TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           *this,FName *param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  TSparseSetElement<TTuple<FName,FString>_> *pTVar8;
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
  pTVar8 = (TSparseSetElement<TTuple<FName,FString>_> *)0x0;
  if (local_28.Pointer != (TSparseSetElement<TTuple<FName,FString>_> *)0x0) {
    *(FName *)local_28.Pointer = *param_1;
    *(undefined8 *)((longlong)local_28.Pointer + 8) = 0;
    *(FScriptContainerElement **)((longlong)local_28.Pointer + 8) =
         (param_2->Data).AllocatorInstance.Data;
    (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)local_28.Pointer + 0x10) = (param_2->Data).ArrayNum;
    *(int *)((longlong)local_28.Pointer + 0x14) = (param_2->Data).ArrayMax;
    (param_2->Data).ArrayNum = 0;
    (param_2->Data).ArrayMax = 0;
    *(undefined4 *)((longlong)local_28.Pointer + 0x18) = 0xffffffff;
    pTVar8 = local_28.Pointer;
  }
  uVar3 = *(undefined8 *)pTVar8;
  local_res8[0] = local_28.Index;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar6 = uVar6 + (int)((ulonglong)uVar3 >> 0x20);
  bVar4 = TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,pTVar8,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
    RehashOrLink(&this->Pairs,uVar6,pTVar8,local_res8[0]);
  }
  return (FString *)(*(longlong *)&(this->Pairs).Elements + 8 + lVar7 * 0x20);
}

// EmplaceByHash<FGuid_const_&> @ 14cffeee0

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FGuid,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
::EmplaceByHash<FGuid_const_&>
          (TMapBase<FGuid,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FGuid *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  TSparseSetElement<TTuple<FGuid,TArray<FName,TSizedDefaultAllocator<32>_>_>_> *pTVar6;
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
  pTVar6 = (TSparseSetElement<TTuple<FGuid,TArray<FName,TSizedDefaultAllocator<32>_>_>_> *)0x0;
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<FGuid,TArray<FName,TSizedDefaultAllocator<32>_>_>_> *)0x0) {
    uVar3 = *(undefined8 *)&param_2->C;
    *(undefined8 *)local_18.Pointer = *(undefined8 *)param_2;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = uVar3;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x18) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x20) = 0xffffffff;
    pTVar6 = local_18.Pointer;
  }
  local_res8[0] = local_18.Index;
  bVar4 = TSet<TTuple<FGuid,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,pTVar6,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FGuid,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,pTVar6,local_res8[0]);
  }
  return (TArray<FName,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + lVar7 * 0x28 + 0x10);
}

// EmplaceByHash<FLiveLinkSubjectName_const_&> @ 14cfff000

FSubjectFramesAddedHandles * __thiscall
TMapBase<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles,0>_>
::EmplaceByHash<FLiveLinkSubjectName_const_&>
          (TMapBase<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles,0>_>
           *this,uint param_1,FLiveLinkSubjectName *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  TKeyInitializer<FLiveLinkSubjectName_const_&> local_res8;
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
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles>_>
       *)0x0) {
    TKeyInitializer<FLiveLinkSubjectName_const_&>::
    operator<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles>_TTuple<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles>
              (&local_res8,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x108) = 0xffffffff;
  }
  local_res8.Key._0_4_ = local_18.Index;
  bVar4 = TSet<TTuple<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles>,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,(int *)&local_res8,(bool *)0x0)
  ;
  if (!bVar4) {
    TSet<TTuple<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles>,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,(int)local_res8.Key);
  }
  return (FSubjectFramesAddedHandles *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)(int)local_res8.Key * 0x110 + 8);
}

// EmplaceByHash<FLiveLinkSubjectName> @ 14cfff130

FSubjectFramesAddedHandles * __thiscall
TMapBase<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles,0>_>
::EmplaceByHash<FLiveLinkSubjectName>
          (TMapBase<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles,0>_>
           *this,uint param_1,FLiveLinkSubjectName *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  TKeyInitializer<FLiveLinkSubjectName_&&> local_res8;
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
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles>_>
       *)0x0) {
    TKeyInitializer<FLiveLinkSubjectName_&&>::
    operator<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles>_TTuple<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles>
              (&local_res8,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x108) = 0xffffffff;
  }
  local_res8.Key._0_4_ = local_18.Index;
  bVar4 = TSet<TTuple<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles>,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,(int *)&local_res8,(bool *)0x0)
  ;
  if (!bVar4) {
    TSet<TTuple<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles>,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,(int)local_res8.Key);
  }
  return (FSubjectFramesAddedHandles *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)(int)local_res8.Key * 0x110 + 8);
}

// FindOrAddImpl<FLiveLinkSubjectKey_const_&> @ 14d000560

FSubjectFramesReceivedHandles * __thiscall
TMapBase<FLiveLinkSubjectKey,FLiveLinkClient::FSubjectFramesReceivedHandles,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectKey,FLiveLinkClient::FSubjectFramesReceivedHandles,0>_>
::FindOrAddImpl<FLiveLinkSubjectKey_const_&>
          (TMapBase<FLiveLinkSubjectKey,FLiveLinkClient::FSubjectFramesReceivedHandles,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectKey,FLiveLinkClient::FSubjectFramesReceivedHandles,0>_>
           *this,uint param_1,FLiveLinkSubjectKey *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FLiveLinkSubjectKey *local_res20;
  
  iVar1 = TSet<TTuple<FLiveLinkSubjectKey,FLiveLinkClient::FSubjectFramesReceivedHandles>,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectKey,FLiveLinkClient::FSubjectFramesReceivedHandles,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FLiveLinkSubjectKey>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0xa0 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (FSubjectFramesReceivedHandles *)(lVar2 + 0x18);
  }
  local_res20 = param_2;
  TSet<TTuple<FLiveLinkSubjectKey,FLiveLinkClient::FSubjectFramesReceivedHandles>,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectKey,FLiveLinkClient::FSubjectFramesReceivedHandles,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FLiveLinkSubjectKey_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FLiveLinkSubjectKey_const_&> *)(ulonglong)param_1,(bool *)&local_res20
            );
  return (FSubjectFramesReceivedHandles *)
         (*(longlong *)&(this->Pairs).Elements + 0x18 + (longlong)local_res8[0] * 0xa0);
}

// FindOrAddImpl<FDelegateHandle_const_&> @ 14d000600

TDelegate<bool___cdecl(UClass_*,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy> *
__thiscall
TMapBase<FDelegateHandle,TDelegate<bool___cdecl(UClass_*,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDelegateHandle,TDelegate<bool___cdecl(UClass_*,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>,0>_>
::FindOrAddImpl<FDelegateHandle_const_&>
          (TMapBase<FDelegateHandle,TDelegate<bool___cdecl(UClass_*,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDelegateHandle,TDelegate<bool___cdecl(UClass_*,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>,0>_>
           *this,uint param_1,FDelegateHandle *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  FDelegateHandle *local_res20;
  
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
        if (*(ulong64 *)(lVar1 + (longlong)iVar2 * 0x28) == param_2->ID) {
          if (lVar3 != 0) goto LAB_14d000692;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x20);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FDelegateHandle,TDelegate<bool___cdecl(UClass_*,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FDelegateHandle,TDelegate<bool___cdecl(UClass_*,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FDelegateHandle_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FDelegateHandle_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
LAB_14d000692:
  return (TDelegate<bool___cdecl(UClass_*,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>
          *)(lVar3 + 8);
}

// FindOrAddImpl<TTuple<FName,FName>_> @ 14d0006b0

int * __thiscall
TMapBase<TTuple<FName,FName>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,int,0>_>
::FindOrAddImpl<TTuple<FName,FName>_>
          (TMapBase<TTuple<FName,FName>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,int,0>_>
           *this,uint param_1,TTuple<FName,FName> *param_2)

{
  longlong *plVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [2];
  TTuple<FName,FName> *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        plVar1 = (longlong *)((longlong)iVar2 * 0x1c + *(longlong *)&(this->Pairs).Elements);
        if ((*plVar1 == *(longlong *)param_2) && (plVar1[1] == *(longlong *)&param_2->field_0x8)) {
          if ((iVar2 != -1) && (plVar1 != (longlong *)0x0)) {
            return (int *)(plVar1 + 2);
          }
          break;
        }
        iVar2 = *(int *)((longlong)plVar1 + 0x14);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<TTuple<FName,FName>,int>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,int,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TTuple<FName,FName>_&&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<TTuple<FName,FName>_&&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (int *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x1c + 0x10);
}

// GenerateKeyArray<TSizedDefaultAllocator<32>_> @ 14d0028c0

void __thiscall
TMapBase<FGuid,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
::GenerateKeyArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FGuid,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
           *this,TArray<FGuid,TSizedDefaultAllocator<32>_> *param_1)

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
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14d0029a2;
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
LAB_14d0029a2:
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

// Find @ 14d040b50

TSharedPtr<FLiveLinkDebugUIEntry,1> * __thiscall
TMapBase<ITableRow_const_*,TSharedPtr<FLiveLinkDebugUIEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<FLiveLinkDebugUIEntry,1>,0>_>
::Find(TMapBase<ITableRow_const_*,TSharedPtr<FLiveLinkDebugUIEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<FLiveLinkDebugUIEntry,1>,0>_>
       *this,ITableRow *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TSharedPtr<FLiveLinkDebugUIEntry,1> *pTVar4;
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
          pTVar4 = (TSharedPtr<FLiveLinkDebugUIEntry,1> *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TSharedPtr<FLiveLinkDebugUIEntry,1> *)(plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TSharedPtr<FLiveLinkDebugUIEntry,1> *)0x0;
}

// Find @ 14d040bf0

TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1> * __thiscall
TMapBase<ITableRow_const_*,TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,0>_>
::Find(TMapBase<ITableRow_const_*,TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,0>_>
       *this,ITableRow *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1> *pTVar4;
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
          pTVar4 = (TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1> *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1> *)(plVar2 + 1)
            ;
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1> *)0x0;
}

// Find @ 14d040c90

FSubjectFramesReceivedHandles * __thiscall
TMapBase<FLiveLinkSubjectKey,FLiveLinkClient::FSubjectFramesReceivedHandles,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectKey,FLiveLinkClient::FSubjectFramesReceivedHandles,0>_>
::Find(TMapBase<FLiveLinkSubjectKey,FLiveLinkClient::FSubjectFramesReceivedHandles,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectKey,FLiveLinkClient::FSubjectFramesReceivedHandles,0>_>
       *this,FLiveLinkSubjectKey *param_1)

{
  FName FVar1;
  uint uVar2;
  int iVar3;
  ulong64 uVar4;
  FSubjectFramesReceivedHandles *pFVar5;
  longlong lVar6;
  
  uVar4 = CityHash64((char *)param_1,0x10);
  FVar1 = (param_1->SubjectName).Name;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  iVar3 = TSet<TTuple<FLiveLinkSubjectKey,FLiveLinkClient::FSubjectFramesReceivedHandles>,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectKey,FLiveLinkClient::FSubjectFramesReceivedHandles,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FLiveLinkSubjectKey>
                    (&this->Pairs,(uVar2 + FVar1.Number) * 0xd + (int)uVar4,param_1);
  if (iVar3 == -1) {
    pFVar5 = (FSubjectFramesReceivedHandles *)0x0;
  }
  else {
    lVar6 = (longlong)iVar3 * 0xa0 + *(longlong *)&(this->Pairs).Elements;
    pFVar5 = (FSubjectFramesReceivedHandles *)0x0;
    if (lVar6 != 0) {
      pFVar5 = (FSubjectFramesReceivedHandles *)(lVar6 + 0x18);
    }
  }
  return pFVar5;
}

// Find @ 14d040d20

FLiveLinkSubjectKey * __thiscall
TMapBase<FLiveLinkSubjectName,FLiveLinkSubjectKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkSubjectKey,0>_>
::Find(TMapBase<FLiveLinkSubjectName,FLiveLinkSubjectKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkSubjectKey,0>_>
       *this,FLiveLinkSubjectName *param_1)

{
  longlong lVar1;
  FName FVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  FLiveLinkSubjectKey *pFVar6;
  ForElementType<FSetElementId> FVar7;
  
  FVar2 = param_1->Name;
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
        if (*(FName *)(lVar3 + (longlong)iVar5 * 0x28) == param_1->Name) {
          pFVar6 = (FLiveLinkSubjectKey *)0x0;
          if (lVar1 != 0) {
            pFVar6 = (FLiveLinkSubjectKey *)(lVar1 + 8);
          }
          return pFVar6;
        }
        iVar5 = *(int *)(lVar1 + 0x20);
      } while (iVar5 != -1);
    }
  }
  return (FLiveLinkSubjectKey *)0x0;
}

// Find @ 14d040dd0

FSubjectFramesAddedHandles * __thiscall
TMapBase<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles,0>_>
::Find(TMapBase<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles,0>_>
       *this,FLiveLinkSubjectName *param_1)

{
  FName FVar1;
  uint uVar2;
  FSubjectFramesAddedHandles *pFVar3;
  ForElementType<FSetElementId> FVar4;
  FName *pFVar5;
  
  FVar1 = param_1->Name;
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
        pFVar5 = (FName *)((longlong)(int)uVar2 * 0x110 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar5 == param_1->Name) {
          pFVar3 = (FSubjectFramesAddedHandles *)0x0;
          if (pFVar5 != (FName *)0x0) {
            pFVar3 = (FSubjectFramesAddedHandles *)(pFVar5 + 1);
          }
          return pFVar3;
        }
        uVar2 = pFVar5[0x21].ComparisonIndex.Value;
      } while (uVar2 != 0xffffffff);
    }
  }
  return (FSubjectFramesAddedHandles *)0x0;
}

// Find @ 14d040e90

TSharedRef<ITableRow,1> * __thiscall
TMapBase<TSharedPtr<FLiveLinkDebugUIEntry,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FLiveLinkDebugUIEntry,1>,TSharedRef<ITableRow,1>,0>_>
::Find(TMapBase<TSharedPtr<FLiveLinkDebugUIEntry,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FLiveLinkDebugUIEntry,1>,TSharedRef<ITableRow,1>,0>_>
       *this,TSharedPtr<FLiveLinkDebugUIEntry_const_,1> *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<FLiveLinkDebugUIEntry_const_,1> local_18;
  
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
  iVar2 = TSet<TTuple<TSharedPtr<FLiveLinkDebugUIEntry,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FLiveLinkDebugUIEntry,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TSharedPtr<FLiveLinkDebugUIEntry_const_,1>_>
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

// Find @ 14d040f60

TSharedRef<ITableRow,1> * __thiscall
TMapBase<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,TSharedRef<ITableRow,1>,0>_>
::Find(TMapBase<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,TSharedRef<ITableRow,1>,0>_>
       *this,TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource_const_,1> *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource_const_,1> local_18;
  
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
  iVar2 = TSet<TTuple<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource_const_,1>_>
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

