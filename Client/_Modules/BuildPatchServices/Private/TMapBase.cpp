// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 94

// Emplace<FString,TSharedRef<FBuildPatchAppManifest,1>_const_&> @ 1431b05c0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TSharedRef<FBuildPatchAppManifest,1> * __thiscall
TMapBase<FString,TSharedRef<FBuildPatchAppManifest,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,1>_>
::Emplace<FString,TSharedRef<FBuildPatchAppManifest,1>_const_&>
          (TMapBase<FString,TSharedRef<FBuildPatchAppManifest,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,1>_>
           *this,FString *param_1,TSharedRef<FBuildPatchAppManifest,1> *param_2)

{
  int iVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  TSparseSetElement<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>_> *pTVar7;
  wchar_t *pwVar8;
  FSparseArrayAllocationInfo local_18;
  
  iVar6 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar6 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar6 = iVar6 + -1;
    lVar2 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x28);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  pTVar7 = (TSparseSetElement<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>_> *)0x0;
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>_> *)0x0) {
    *(undefined8 *)local_18.Pointer = 0;
    *(FScriptContainerElement **)local_18.Pointer = (param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)local_18.Pointer + 8) = (param_1->Data).ArrayNum;
    *(int *)((longlong)local_18.Pointer + 0xc) = (param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
    *(FBuildPatchAppManifest **)((longlong)local_18.Pointer + 0x10) = param_2->Object;
    pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)((longlong)local_18.Pointer + 0x18) = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(undefined4 *)((longlong)local_18.Pointer + 0x20) = 0xffffffff;
    pTVar7 = local_18.Pointer;
  }
  iVar6 = *(int *)&pTVar7->field_0x8 + -1;
  if (*(int *)&pTVar7->field_0x8 == 0) {
    pwVar8 = L"";
    iVar6 = 0;
  }
  else {
    pwVar8 = *(wchar_t **)pTVar7;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar8);
  TSet<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,1>,FDefaultSetAllocator>
  ::RehashOrLink(&this->Pairs,uVar5,pTVar7,local_18.Index);
  return (TSharedRef<FBuildPatchAppManifest,1> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_18.Index * 0x28 + 0x10);
}

// Emplace<FString,TSharedRef<FBuildPatchAppManifest,1>_> @ 1431b0710

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TSharedRef<FBuildPatchAppManifest,1> * __thiscall
TMapBase<FString,TSharedRef<FBuildPatchAppManifest,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,1>_>
::Emplace<FString,TSharedRef<FBuildPatchAppManifest,1>_>
          (TMapBase<FString,TSharedRef<FBuildPatchAppManifest,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,1>_>
           *this,FString *param_1,TSharedRef<FBuildPatchAppManifest,1> *param_2)

{
  int iVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  TSparseSetElement<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>_> *pTVar7;
  wchar_t *pwVar8;
  FSparseArrayAllocationInfo local_18;
  
  iVar6 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar6 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar6 = iVar6 + -1;
    lVar2 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x28);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  pTVar7 = (TSparseSetElement<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>_> *)0x0;
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>_> *)0x0) {
    *(undefined8 *)local_18.Pointer = 0;
    *(FScriptContainerElement **)local_18.Pointer = (param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)local_18.Pointer + 8) = (param_1->Data).ArrayNum;
    *(int *)((longlong)local_18.Pointer + 0xc) = (param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
    *(FBuildPatchAppManifest **)((longlong)local_18.Pointer + 0x10) = param_2->Object;
    pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)((longlong)local_18.Pointer + 0x18) = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(undefined4 *)((longlong)local_18.Pointer + 0x20) = 0xffffffff;
    pTVar7 = local_18.Pointer;
  }
  iVar6 = *(int *)&pTVar7->field_0x8 + -1;
  if (*(int *)&pTVar7->field_0x8 == 0) {
    pwVar8 = L"";
    iVar6 = 0;
  }
  else {
    pwVar8 = *(wchar_t **)pTVar7;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar8);
  TSet<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,1>,FDefaultSetAllocator>
  ::RehashOrLink(&this->Pairs,uVar5,pTVar7,local_18.Index);
  return (TSharedRef<FBuildPatchAppManifest,1> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_18.Index * 0x28 + 0x10);
}

// EmplaceByHash<int_const_&> @ 1431b0860

TBlockData<unsigned_char> * __thiscall
TMapBase<int,BuildPatchServices::TBlockData<unsigned_char>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::TBlockData<unsigned_char>,0>_>
::EmplaceByHash<int_const_&>
          (TMapBase<int,BuildPatchServices::TBlockData<unsigned_char>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::TBlockData<unsigned_char>,0>_>
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
                      (0x30,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar5 * 0x30);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x30) = 0xffffffff;
    }
  }
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<int,BuildPatchServices::TBlockData<unsigned_char>_>_> *)0x0) {
    TKeyInitializer<int_const_&>::
    operator<int,BuildPatchServices::TBlockData<unsigned_char>_>_TTuple<int,BuildPatchServices::TBlockData<unsigned_char>_>
              (&local_res8,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x28) = 0xffffffff;
  }
  local_res8.Key._0_4_ = local_18.Index;
  bVar4 = TSet<TTuple<int,BuildPatchServices::TBlockData<unsigned_char>_>,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::TBlockData<unsigned_char>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,(int *)&local_res8,(bool *)0x0)
  ;
  if (!bVar4) {
    TSet<TTuple<int,BuildPatchServices::TBlockData<unsigned_char>_>,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::TBlockData<unsigned_char>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,(int)local_res8.Key);
  }
  return (TBlockData<unsigned_char> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)(int)local_res8.Key * 0x30);
}

// EmplaceByHash<int_const_&> @ 1431b0980

FBlockStructure * __thiscall
TMapBase<int,BuildPatchServices::FBlockStructure,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FBlockStructure,0>_>
::EmplaceByHash<int_const_&>
          (TMapBase<int,BuildPatchServices::FBlockStructure,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FBlockStructure,0>_>
           *this,uint param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  FBlockStructure *pFVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  FBlockStructure local_18;
  
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
                   *)this,&local_28,iVar4);
  if (local_28.Pointer != (TSparseSetElement<TTuple<int,BuildPatchServices::FBlockStructure>_> *)0x0
     ) {
    pFVar5 = BuildPatchServices::FBlockStructure::FBlockStructure(&local_18);
    *(int *)local_28.Pointer = *param_2;
    BuildPatchServices::FBlockStructure::FBlockStructure
              ((FBlockStructure *)((longlong)local_28.Pointer + 8),pFVar5);
    BuildPatchServices::FBlockStructure::~FBlockStructure(&local_18);
    *(undefined4 *)((longlong)local_28.Pointer + 0x18) = 0xffffffff;
  }
  local_res8[0] = local_28.Index;
  bVar3 = TSet<TTuple<int,BuildPatchServices::FBlockStructure>,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FBlockStructure,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_28.Pointer,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<int,BuildPatchServices::FBlockStructure>,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FBlockStructure,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_28.Pointer,local_res8[0]);
  }
  return (FBlockStructure *)(*(longlong *)&(this->Pairs).Elements + 8 + lVar6 * 0x20);
}

// EmplaceByHash<int> @ 1431b0ac0

TBlockData<unsigned_char> * __thiscall
TMapBase<int,BuildPatchServices::TBlockData<unsigned_char>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::TBlockData<unsigned_char>,0>_>
::EmplaceByHash<int>
          (TMapBase<int,BuildPatchServices::TBlockData<unsigned_char>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::TBlockData<unsigned_char>,0>_>
           *this,uint param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  TKeyInitializer<int_&&> local_res8;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  local_res8.Key = param_2;
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
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar5 * 0x30);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x30) = 0xffffffff;
    }
  }
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<int,BuildPatchServices::TBlockData<unsigned_char>_>_> *)0x0) {
    TKeyInitializer<int_&&>::
    operator<int,BuildPatchServices::TBlockData<unsigned_char>_>_TTuple<int,BuildPatchServices::TBlockData<unsigned_char>_>
              (&local_res8,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x28) = 0xffffffff;
  }
  local_res8.Key._0_4_ = local_18.Index;
  bVar4 = TSet<TTuple<int,BuildPatchServices::TBlockData<unsigned_char>_>,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::TBlockData<unsigned_char>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,(int *)&local_res8,(bool *)0x0)
  ;
  if (!bVar4) {
    TSet<TTuple<int,BuildPatchServices::TBlockData<unsigned_char>_>,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::TBlockData<unsigned_char>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,(int)local_res8.Key);
  }
  return (TBlockData<unsigned_char> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)(int)local_res8.Key * 0x30);
}

// EmplaceByHash<int> @ 1431b0be0

FBlockStructure * __thiscall
TMapBase<int,BuildPatchServices::FBlockStructure,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FBlockStructure,0>_>
::EmplaceByHash<int>
          (TMapBase<int,BuildPatchServices::FBlockStructure,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FBlockStructure,0>_>
           *this,uint param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  FBlockStructure *pFVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  FBlockStructure local_18;
  
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
                   *)this,&local_28,iVar4);
  if (local_28.Pointer != (TSparseSetElement<TTuple<int,BuildPatchServices::FBlockStructure>_> *)0x0
     ) {
    pFVar5 = BuildPatchServices::FBlockStructure::FBlockStructure(&local_18);
    *(int *)local_28.Pointer = *param_2;
    BuildPatchServices::FBlockStructure::FBlockStructure
              ((FBlockStructure *)((longlong)local_28.Pointer + 8),pFVar5);
    BuildPatchServices::FBlockStructure::~FBlockStructure(&local_18);
    *(undefined4 *)((longlong)local_28.Pointer + 0x18) = 0xffffffff;
  }
  local_res8[0] = local_28.Index;
  bVar3 = TSet<TTuple<int,BuildPatchServices::FBlockStructure>,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FBlockStructure,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_28.Pointer,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<int,BuildPatchServices::FBlockStructure>,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FBlockStructure,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_28.Pointer,local_res8[0]);
  }
  return (FBlockStructure *)(*(longlong *)&(this->Pairs).Elements + 8 + lVar6 * 0x20);
}

// FindOrAddImpl<int_const_&> @ 1431b2fc0

TBlockData<unsigned_char> * __thiscall
TMapBase<int,BuildPatchServices::TBlockData<unsigned_char>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::TBlockData<unsigned_char>,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int,BuildPatchServices::TBlockData<unsigned_char>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::TBlockData<unsigned_char>,0>_>
           *this,uint param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  TBlockData<unsigned_char> *pTVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == *param_2) {
          if (piVar2 != (int *)0x0) {
            return (TBlockData<unsigned_char> *)(piVar2 + 2);
          }
          break;
        }
        iVar1 = piVar2[10];
      } while (iVar1 != -1);
    }
  }
  pTVar3 = EmplaceByHash<int_const_&>(this,param_1,param_2);
  return pTVar3;
}

// FindOrAddImpl<int_const_&> @ 1431b3040

FBlockStructure * __thiscall
TMapBase<int,BuildPatchServices::FBlockStructure,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FBlockStructure,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int,BuildPatchServices::FBlockStructure,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FBlockStructure,0>_>
           *this,uint param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  FBlockStructure *pFVar3;
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
        if (*piVar2 == *param_2) {
          if (piVar2 != (int *)0x0) {
            return (FBlockStructure *)(piVar2 + 2);
          }
          break;
        }
        iVar1 = piVar2[6];
      } while (iVar1 != -1);
    }
  }
  pFVar3 = EmplaceByHash<int_const_&>(this,param_1,param_2);
  return pFVar3;
}

// FindOrAddImpl<int_const_&> @ 1431b30b0

ulong64 * __thiscall
TMapBase<int,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>_>
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
          if (lVar3 != 0) goto LAB_1431b3142;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
LAB_1431b3142:
  return (ulong64 *)(lVar3 + 8);
}

// FindOrAddImpl<FGuid_const_&> @ 1431b3160

FBackingStoreUsedSpan * __thiscall
TMapBase<FGuid,FChunkBackingStore::FBackingStoreUsedSpan,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FBackingStoreUsedSpan,0>_>
::FindOrAddImpl<FGuid_const_&>
          (TMapBase<FGuid,FChunkBackingStore::FBackingStoreUsedSpan,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FBackingStoreUsedSpan,0>_>
           *this,uint param_1,FGuid *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FGuid *local_res20;
  
  iVar1 = TSet<TTuple<FGuid,FChunkBackingStore::FBackingStoreUsedSpan>,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FBackingStoreUsedSpan,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x30 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (FBackingStoreUsedSpan *)(lVar2 + 0x10);
  }
  local_res20 = param_2;
  TSet<TTuple<FGuid,FChunkBackingStore::FBackingStoreUsedSpan>,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FBackingStoreUsedSpan,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FGuid_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FGuid_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FBackingStoreUsedSpan *)
         (*(longlong *)&(this->Pairs).Elements + 0x10 + (longlong)local_res8[0] * 0x30);
}

// FindOrAddImpl<FGuid_const_&> @ 1431b3200

FChunkInfo * __thiscall
TMapBase<FGuid,BuildPatchServices::FChunkInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo,0>_>
::FindOrAddImpl<FGuid_const_&>
          (TMapBase<FGuid,BuildPatchServices::FChunkInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo,0>_>
           *this,uint param_1,FGuid *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FGuid *local_res20;
  
  iVar1 = TSet<TTuple<FGuid,BuildPatchServices::FChunkInfo>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x58 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (FChunkInfo *)(lVar2 + 0x10);
  }
  local_res20 = param_2;
  TSet<TTuple<FGuid,BuildPatchServices::FChunkInfo>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FGuid_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FGuid_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FChunkInfo *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x58 + 0x10);
}

// FindOrAddImpl<FGuid_const_&> @ 1431b3290

FRequestInfo * __thiscall
TMapBase<FGuid,FRequestInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FRequestInfo,0>_>
::FindOrAddImpl<FGuid_const_&>
          (TMapBase<FGuid,FRequestInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FRequestInfo,0>_>
           *this,uint param_1,FGuid *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FGuid *local_res20;
  
  iVar1 = TSet<TTuple<FGuid,FRequestInfo>,TDefaultMapHashableKeyFuncs<FGuid,FRequestInfo,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x90 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (FRequestInfo *)(lVar2 + 0x10);
  }
  local_res20 = param_2;
  TSet<TTuple<FGuid,FRequestInfo>,TDefaultMapHashableKeyFuncs<FGuid,FRequestInfo,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FGuid_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FGuid_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FRequestInfo *)
         (*(longlong *)&(this->Pairs).Elements + 0x10 + (longlong)local_res8[0] * 0x90);
}

// FindOrAddImpl<FGuid_const_&> @ 1431b3330

FStoredChunk * __thiscall
TMapBase<FGuid,FChunkBackingStore::FStoredChunk,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FStoredChunk,0>_>
::FindOrAddImpl<FGuid_const_&>
          (TMapBase<FGuid,FChunkBackingStore::FStoredChunk,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FStoredChunk,0>_>
           *this,uint param_1,FGuid *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FGuid *local_res20;
  
  iVar1 = TSet<TTuple<FGuid,FChunkBackingStore::FStoredChunk>,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FStoredChunk,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x38 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (FStoredChunk *)(lVar2 + 0x10);
  }
  local_res20 = param_2;
  TSet<TTuple<FGuid,FChunkBackingStore::FStoredChunk>,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FStoredChunk,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FGuid_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FGuid_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FStoredChunk *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x38 + 0x10);
}

// FindOrAddImpl<FString_const_&> @ 1431b33c0

TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<FString_const_&>
          (TMapBase<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FString *local_res20;
  
  iVar1 = TSet<TTuple<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,param_1,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x28, lVar2 == 0)) {
    local_res20 = param_2;
    TSet<TTuple<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
              (&this->Pairs,(uint)local_res8,(TKeyInitializer<FString_const_&> *)(ulonglong)param_1,
               (bool *)&local_res20);
    lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
  }
  return (TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_> *)
         (lVar2 + 0x10);
}

// FindOrAddImpl<unsigned___int64_const_&> @ 1431b3440

TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> * __thiscall
TMapBase<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>_>
::FindOrAddImpl<unsigned___int64_const_&>
          (TMapBase<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>_>
           *this,uint param_1,ulong64 *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  ulong64 *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (ulong64 *)0x0) {
            return (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)(puVar2 + 1);
          }
          break;
        }
        iVar1 = (int)puVar2[0xb];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned___int64_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned___int64_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x60);
}

// FindOrAddImpl<int> @ 1431b34f0

ulong64 * __thiscall
TMapBase<int,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>_>
::FindOrAddImpl<int>
          (TMapBase<int,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>_>
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
          if (lVar3 != 0) goto LAB_1431b3582;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_&&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
LAB_1431b3582:
  return (ulong64 *)(lVar3 + 8);
}

// GenerateValueArray<TSizedDefaultAllocator<32>_> @ 1431b36a0

void __thiscall
TMapBase<FGuid,BuildPatchServices::FChunkInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo,0>_>
::GenerateValueArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FGuid,BuildPatchServices::FChunkInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo,0>_>
           *this,TArray<BuildPatchServices::FChunkInfo,TSizedDefaultAllocator<32>_> *param_1)

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
              (0x40,8,uVar12,&param_1->AllocatorInstance,0,piVar1);
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1431b3782;
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
LAB_1431b3782:
  TStack_40._padding_ = CONCAT44(uVar12,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar13;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar5 = (param_1->AllocatorInstance).Data;
      pFVar11 = (FScriptContainerElement *)
                (*(longlong *)&(this->Pairs).Elements + 0x10 +
                (longlong)TStack_40.CurrentBitIndex * 0x58);
      if (((pFVar5 <= pFVar11) && (pFVar11 < pFVar5 + (longlong)*piVar1 * 0x40)) &&
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
                           (0x840,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar10 + 1;
      uVar7 = *(undefined8 *)(pFVar11 + 8);
      pFVar5 = (param_1->AllocatorInstance).Data;
      lVar9 = (longlong)iVar10 * 0x40;
      *(undefined8 *)(pFVar5 + lVar9) = *(undefined8 *)pFVar11;
      *(undefined8 *)(pFVar5 + lVar9 + 8) = uVar7;
      uVar7 = *(undefined8 *)(pFVar11 + 0x18);
      *(undefined8 *)(pFVar5 + lVar9 + 0x10) = *(undefined8 *)(pFVar11 + 0x10);
      *(undefined8 *)(pFVar5 + lVar9 + 0x10 + 8) = uVar7;
      uVar7 = *(undefined8 *)(pFVar11 + 0x28);
      *(undefined8 *)(pFVar5 + lVar9 + 0x20) = *(undefined8 *)(pFVar11 + 0x20);
      *(undefined8 *)(pFVar5 + lVar9 + 0x20 + 8) = uVar7;
      uVar7 = *(undefined8 *)(pFVar11 + 0x38);
      *(undefined8 *)(pFVar5 + lVar9 + 0x30) = *(undefined8 *)(pFVar11 + 0x30);
      *(undefined8 *)(pFVar5 + lVar9 + 0x30 + 8) = uVar7;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// Find @ 1431dbc60

TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>
* __thiscall
TMapBase<FString,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>,0>_>
::Find(TMapBase<FString,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>,0>_>
       *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>
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
  iVar2 = TSet<TTuple<FString,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x30 + *(longlong *)&(this->Pairs).Elements;
    pTVar6 = (TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>
              *)0x0;
    if (lVar4 != 0) {
      pTVar6 = (TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>
                *)(lVar4 + 0x10);
    }
    return pTVar6;
  }
  return (TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>
          *)0x0;
}

// Find @ 1431dbcf0

TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,0>_>
::Find(TMapBase<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,0>_>
       *this,FString *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_> *pTVar6;
  
  iVar3 = (param_1->Data).ArrayNum;
  if (iVar3 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar4 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar4 = 0;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  iVar3 = TSet<TTuple<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar2,param_1);
  if (iVar3 != -1) {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar3 * 0x28;
    pTVar6 = (TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_> *)0x0;
    if (lVar1 != 0) {
      pTVar6 = (TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_> *)
               (lVar1 + 0x10);
    }
    return pTVar6;
  }
  return (TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_> *)0x0;
}

// FindChecked @ 1431dbd80

ulong64 * __thiscall
TMapBase<int,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>_>
::FindChecked(TMapBase<int,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>_>
              *this,int param_1)

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
        if (*(int *)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
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

// FindChecked @ 1431dbe20

uint * __thiscall
TMapBase<FGuid,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>_>
::FindChecked(TMapBase<FGuid,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>_>
              *this,FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ulong64 uVar4;
  uint *puVar5;
  longlong lVar6;
  
  uVar4 = CityHash64((char *)param_1,0x10);
  iVar3 = TSet<TTuple<FGuid,unsigned_int>,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,(uint)uVar4,param_1);
  if ((iVar3 != -1) &&
     (lVar6 = (longlong)iVar3 * 0x1c + *(longlong *)&(this->Pairs).Elements, lVar6 != 0)) {
    return (uint *)(lVar6 + 0x10);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (uint *)&DAT_00000010;
  }
  pcVar1 = (code *)swi(3);
  puVar5 = (uint *)(*pcVar1)();
  return puVar5;
}

// FindChecked @ 1431dbeb0

FChunkInfo ** __thiscall
TMapBase<FGuid,BuildPatchServices::FChunkInfo_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo_*,0>_>
::FindChecked(TMapBase<FGuid,BuildPatchServices::FChunkInfo_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo_*,0>_>
              *this,FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ulong64 uVar4;
  FChunkInfo **ppFVar5;
  longlong lVar6;
  
  uVar4 = CityHash64((char *)param_1,0x10);
  iVar3 = TSet<TTuple<FGuid,BuildPatchServices::FChunkInfo_*>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,(uint)uVar4,param_1);
  if ((iVar3 != -1) &&
     (lVar6 = (longlong)iVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements, lVar6 != 0)) {
    return (FChunkInfo **)(lVar6 + 0x10);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FChunkInfo **)&DAT_00000010;
  }
  pcVar1 = (code *)swi(3);
  ppFVar5 = (FChunkInfo **)(*pcVar1)();
  return ppFVar5;
}

// FindChecked @ 1431dbf40

FChunkInfo ** __thiscall
TMapBase<FGuid,BuildPatchServices::FChunkInfo_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo_const_*,0>_>
::FindChecked(TMapBase<FGuid,BuildPatchServices::FChunkInfo_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo_const_*,0>_>
              *this,FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ulong64 uVar4;
  FChunkInfo **ppFVar5;
  longlong lVar6;
  
  uVar4 = CityHash64((char *)param_1,0x10);
  iVar3 = TSet<TTuple<FGuid,BuildPatchServices::FChunkInfo_const_*>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo_const_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,(uint)uVar4,param_1);
  if ((iVar3 != -1) &&
     (lVar6 = (longlong)iVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements, lVar6 != 0)) {
    return (FChunkInfo **)(lVar6 + 0x10);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (FChunkInfo **)&DAT_00000010;
  }
  pcVar1 = (code *)swi(3);
  ppFVar5 = (FChunkInfo **)(*pcVar1)();
  return ppFVar5;
}

// FindChecked @ 1431dbfd0

FString ** __thiscall
TMapBase<FGuid,FString_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FString_const_*,0>_>
::FindChecked(TMapBase<FGuid,FString_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FString_const_*,0>_>
              *this,FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ulong64 uVar4;
  FString **ppFVar5;
  longlong lVar6;
  
  uVar4 = CityHash64((char *)param_1,0x10);
  iVar3 = TSet<TTuple<FGuid,FString_const_*>,TDefaultMapHashableKeyFuncs<FGuid,FString_const_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,(uint)uVar4,param_1);
  if ((iVar3 != -1) &&
     (lVar6 = (longlong)iVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements, lVar6 != 0)) {
    return (FString **)(lVar6 + 0x10);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (FString **)&DAT_00000010;
  }
  pcVar1 = (code *)swi(3);
  ppFVar5 = (FString **)(*pcVar1)();
  return ppFVar5;
}

// FindChecked @ 1431dc060

FBackingStoreUsedSpan * __thiscall
TMapBase<FGuid,FChunkBackingStore::FBackingStoreUsedSpan,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FBackingStoreUsedSpan,0>_>
::FindChecked(TMapBase<FGuid,FChunkBackingStore::FBackingStoreUsedSpan,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FBackingStoreUsedSpan,0>_>
              *this,FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ulong64 uVar4;
  FBackingStoreUsedSpan *pFVar5;
  longlong lVar6;
  
  uVar4 = CityHash64((char *)param_1,0x10);
  iVar3 = TSet<TTuple<FGuid,FChunkBackingStore::FBackingStoreUsedSpan>,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FBackingStoreUsedSpan,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,(uint)uVar4,param_1);
  if ((iVar3 != -1) &&
     (lVar6 = (longlong)iVar3 * 0x30 + *(longlong *)&(this->Pairs).Elements, lVar6 != 0)) {
    return (FBackingStoreUsedSpan *)(lVar6 + 0x10);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FBackingStoreUsedSpan *)&DAT_00000010;
  }
  pcVar1 = (code *)swi(3);
  pFVar5 = (FBackingStoreUsedSpan *)(*pcVar1)();
  return pFVar5;
}

// FindChecked @ 1431dc0f0

FStoredChunk * __thiscall
TMapBase<FGuid,FChunkBackingStore::FStoredChunk,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FStoredChunk,0>_>
::FindChecked(TMapBase<FGuid,FChunkBackingStore::FStoredChunk,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FStoredChunk,0>_>
              *this,FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ulong64 uVar4;
  FStoredChunk *pFVar5;
  longlong lVar6;
  
  uVar4 = CityHash64((char *)param_1,0x10);
  iVar3 = TSet<TTuple<FGuid,FChunkBackingStore::FStoredChunk>,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FStoredChunk,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,(uint)uVar4,param_1);
  if ((iVar3 != -1) &&
     (lVar6 = (longlong)iVar3 * 0x38 + *(longlong *)&(this->Pairs).Elements, lVar6 != 0)) {
    return (FStoredChunk *)(lVar6 + 0x10);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FStoredChunk *)&DAT_00000010;
  }
  pcVar1 = (code *)swi(3);
  pFVar5 = (FStoredChunk *)(*pcVar1)();
  return pFVar5;
}

// FindChecked @ 1431dc180

FSHAHash * __thiscall
TMapBase<FGuid,FSHAHash,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FSHAHash,0>_>::
FindChecked(TMapBase<FGuid,FSHAHash,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FSHAHash,0>_>
            *this,FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ulong64 uVar4;
  FSHAHash *pFVar5;
  longlong lVar6;
  
  uVar4 = CityHash64((char *)param_1,0x10);
  iVar3 = TSet<TTuple<FGuid,FSHAHash>,TDefaultMapHashableKeyFuncs<FGuid,FSHAHash,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,(uint)uVar4,param_1);
  if ((iVar3 != -1) &&
     (lVar6 = (longlong)iVar3 * 0x2c + *(longlong *)&(this->Pairs).Elements, lVar6 != 0)) {
    return (FSHAHash *)(lVar6 + 0x10);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FSHAHash *)&DAT_00000010;
  }
  pcVar1 = (code *)swi(3);
  pFVar5 = (FSHAHash *)(*pcVar1)();
  return pFVar5;
}

// FindChecked @ 1431dc210

EConstructorChunkLocation * __thiscall
TMapBase<FGuid,enum_BuildPatchServices::EConstructorChunkLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,enum_BuildPatchServices::EConstructorChunkLocation,0>_>
::FindChecked(void *this,FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ulong64 uVar4;
  EConstructorChunkLocation *pEVar5;
  longlong lVar6;
  
  uVar4 = CityHash64((char *)param_1,0x10);
  iVar3 = TSet<TTuple<FGuid,enum_BuildPatchServices::EConstructorChunkLocation>,TDefaultMapHashableKeyFuncs<FGuid,enum_BuildPatchServices::EConstructorChunkLocation,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(this,(uint)uVar4,param_1);
  if ((iVar3 != -1) && (lVar6 = (longlong)iVar3 * 0x1c + *(longlong *)this, lVar6 != 0)) {
    return (EConstructorChunkLocation *)(lVar6 + 0x10);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return &DAT_00000010;
  }
  pcVar1 = (code *)swi(3);
  pEVar5 = (EConstructorChunkLocation *)(*pcVar1)();
  return pEVar5;
}

// FindChecked @ 1431dc2a0

long64 * __thiscall
TMapBase<FGuid,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,__int64,0>_>::
FindChecked(TMapBase<FGuid,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,__int64,0>_>
            *this,FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ulong64 uVar4;
  long64 *plVar5;
  longlong lVar6;
  
  uVar4 = CityHash64((char *)param_1,0x10);
  iVar3 = TSet<TTuple<FGuid,__int64>,TDefaultMapHashableKeyFuncs<FGuid,__int64,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,(uint)uVar4,param_1);
  if ((iVar3 != -1) &&
     (lVar6 = (longlong)iVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements, lVar6 != 0)) {
    return (long64 *)(lVar6 + 0x10);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (long64 *)&DAT_00000010;
  }
  pcVar1 = (code *)swi(3);
  plVar5 = (long64 *)(*pcVar1)();
  return plVar5;
}

// FindChecked @ 1431dc330

TArray<unsigned_char,TSizedDefaultAllocator<64>_> * __thiscall
TMapBase<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>_>
::FindChecked(TMapBase<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>_>
              *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> *pTVar5;
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
  iVar4 = TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar3,param_1);
  if ((iVar4 == -1) ||
     (lVar8 = (longlong)iVar4 * 0x30 + *(longlong *)&(this->Pairs).Elements, lVar8 == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  return (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)(lVar8 + 0x10);
}

// Remove @ 1431f0130

int __thiscall
TMapBase<FGuid,FChunkBackingStore::FStoredChunk,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FStoredChunk,0>_>
::Remove(TMapBase<FGuid,FChunkBackingStore::FStoredChunk,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FStoredChunk,0>_>
         *this,FGuid *param_1)

{
  int iVar1;
  ulong64 uVar2;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    uVar2 = CityHash64((char *)param_1,0x10);
    iVar1 = TSet<TTuple<FGuid,FChunkBackingStore::FStoredChunk>,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FStoredChunk,0>,FDefaultSetAllocator>
            ::RemoveImpl<FGuid>(&this->Pairs,(uint)uVar2,param_1);
    return iVar1;
  }
  return 0;
}

// Emplace<FGuid_const_&,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>_const_&> @ 143216020

TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>
* __thiscall
TMapBase<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>,0>_>
::
Emplace<FGuid_const_&,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>_const_&>
          (TMapBase<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>,0>_>
           *this,FGuid *param_1,
          TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>
          *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  ulong64 uVar6;
  int local_res8 [2];
  TPairInitializer<FGuid_const_&,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>_const_&>
  local_28;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  local_28.Key = param_1;
  local_28.Value = param_2;
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
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>_>_>
       *)0x0) {
    TPairInitializer<FGuid_const_&,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>_const_&>
    ::
    operator<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>_>_TTuple<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>_>
              (&local_28,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x80) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  uVar6 = CityHash64(local_18.Pointer,0x10);
  bVar4 = TSet<TTuple<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>_>,TDefaultMapHashableKeyFuncs<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,(uint)uVar6,local_18.Pointer,local_res8,(bool *)0x0);
  if (!bVar4) {
    TSet<TTuple<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>_>,TDefaultMapHashableKeyFuncs<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,(uint)uVar6,local_18.Pointer,local_res8[0]);
  }
  return (TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>
          *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x88 + 0x10);
}

// Emplace<FGuid_const_&,FSHAHash_const_&> @ 143216160

FSHAHash * __thiscall
TMapBase<FGuid,FSHAHash,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FSHAHash,0>_>::
Emplace<FGuid_const_&,FSHAHash_const_&>
          (TMapBase<FGuid,FSHAHash,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FSHAHash,0>_>
           *this,FGuid *param_1,FSHAHash *param_2)

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
                      (0x2c,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x2c + 4 + lVar7);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x2c + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<44,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<44,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FGuid,FSHAHash>_> *)0x0) {
    uVar3 = *(undefined8 *)&param_1->C;
    *(undefined8 *)local_18.Pointer = *(undefined8 *)param_1;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = uVar3;
    uVar3 = *(undefined8 *)(param_2->Hash + 8);
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = *(undefined8 *)param_2->Hash;
    *(undefined8 *)((longlong)local_18.Pointer + 0x18) = uVar3;
    *(undefined4 *)((longlong)local_18.Pointer + 0x20) = *(undefined4 *)(param_2->Hash + 0x10);
    *(undefined4 *)((longlong)local_18.Pointer + 0x24) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  uVar6 = CityHash64(local_18.Pointer,0x10);
  bVar4 = TSet<TTuple<FGuid,FSHAHash>,TDefaultMapHashableKeyFuncs<FGuid,FSHAHash,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,(uint)uVar6,local_18.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FGuid,FSHAHash>,TDefaultMapHashableKeyFuncs<FGuid,FSHAHash,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,(uint)uVar6,local_18.Pointer,local_res8[0]);
  }
  return (FSHAHash *)(*(longlong *)&(this->Pairs).Elements + lVar7 * 0x2c + 0x10);
}

// Emplace<FGuid_const_&,FSetElementId_const_&> @ 1432162a0

FSetElementId * __thiscall
TMapBase<FGuid,FSetElementId,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FSetElementId,0>_>
::Emplace<FGuid_const_&,FSetElementId_const_&>
          (TMapBase<FGuid,FSetElementId,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FSetElementId,0>_>
           *this,FGuid *param_1,FSetElementId *param_2)

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
                      (0x1c,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x1c + 4 + lVar7);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x1c + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FGuid,FSetElementId>_> *)0x0) {
    uVar3 = *(undefined8 *)&param_1->C;
    *(undefined8 *)local_18.Pointer = *(undefined8 *)param_1;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = uVar3;
    *(int *)((longlong)local_18.Pointer + 0x10) = param_2->Index;
    *(undefined4 *)((longlong)local_18.Pointer + 0x14) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  uVar6 = CityHash64(local_18.Pointer,0x10);
  bVar4 = TSet<TTuple<FGuid,FSetElementId>,TDefaultMapHashableKeyFuncs<FGuid,FSetElementId,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,(uint)uVar6,local_18.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FGuid,FSetElementId>,TDefaultMapHashableKeyFuncs<FGuid,FSetElementId,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,(uint)uVar6,local_18.Pointer,local_res8[0]);
  }
  return (FSetElementId *)(*(longlong *)&(this->Pairs).Elements + lVar7 * 0x1c + 0x10);
}

// Emplace<FGuid_const_&,FSetElementId> @ 1432163d0

FSetElementId * __thiscall
TMapBase<FGuid,FSetElementId,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FSetElementId,0>_>
::Emplace<FGuid_const_&,FSetElementId>
          (TMapBase<FGuid,FSetElementId,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FSetElementId,0>_>
           *this,FGuid *param_1,FSetElementId *param_2)

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
                      (0x1c,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x1c + 4 + lVar7);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x1c + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FGuid,FSetElementId>_> *)0x0) {
    uVar3 = *(undefined8 *)&param_1->C;
    *(undefined8 *)local_18.Pointer = *(undefined8 *)param_1;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = uVar3;
    *(int *)((longlong)local_18.Pointer + 0x10) = param_2->Index;
    *(undefined4 *)((longlong)local_18.Pointer + 0x14) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  uVar6 = CityHash64(local_18.Pointer,0x10);
  bVar4 = TSet<TTuple<FGuid,FSetElementId>,TDefaultMapHashableKeyFuncs<FGuid,FSetElementId,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,(uint)uVar6,local_18.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FGuid,FSetElementId>,TDefaultMapHashableKeyFuncs<FGuid,FSetElementId,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,(uint)uVar6,local_18.Pointer,local_res8[0]);
  }
  return (FSetElementId *)(*(longlong *)&(this->Pairs).Elements + lVar7 * 0x1c + 0x10);
}

// EmplaceByHash<FGuid_const_&> @ 143217f20

TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>
* __thiscall
TMapBase<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>,0>_>
::EmplaceByHash<FGuid_const_&>
          (TMapBase<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>,0>_>
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
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>_>_>
       *)0x0) {
    TKeyInitializer<FGuid_const_&>::
    operator<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>_>_TTuple<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>_>
              (&local_res8,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x80) = 0xffffffff;
  }
  local_res8.Key._0_4_ = local_18.Index;
  bVar4 = TSet<TTuple<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>_>,TDefaultMapHashableKeyFuncs<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,(int *)&local_res8,(bool *)0x0)
  ;
  if (!bVar4) {
    TSet<TTuple<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>_>,TDefaultMapHashableKeyFuncs<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,(int)local_res8.Key);
  }
  return (TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>
          *)(*(longlong *)&(this->Pairs).Elements + (longlong)(int)local_res8.Key * 0x88 + 0x10);
}

// EmplaceByHash<FGuid_const_&> @ 143218050

FSHAHash * __thiscall
TMapBase<FGuid,FSHAHash,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FSHAHash,0>_>::
EmplaceByHash<FGuid_const_&>
          (TMapBase<FGuid,FSHAHash,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FSHAHash,0>_>
           *this,uint param_1,FGuid *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  int local_38 [2];
  FSparseArrayAllocationInfo local_30;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x2c,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x2c + 4 + lVar6);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x2c + lVar6) = 0xffffffff;
    }
  }
  TSparseArrayBase<44,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<44,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_30,iVar5);
  if (local_30.Pointer != (TSparseSetElement<TTuple<FGuid,FSHAHash>_> *)0x0) {
    uVar3 = *(undefined8 *)&param_2->C;
    *(undefined8 *)local_30.Pointer = *(undefined8 *)param_2;
    *(undefined8 *)((longlong)local_30.Pointer + 8) = uVar3;
    *(undefined8 *)((longlong)local_30.Pointer + 0x10) = 0;
    *(undefined8 *)((longlong)local_30.Pointer + 0x18) = 0;
    *(undefined4 *)((longlong)local_30.Pointer + 0x20) = 0;
    *(undefined4 *)((longlong)local_30.Pointer + 0x24) = 0xffffffff;
  }
  local_38[0] = local_30.Index;
  bVar4 = TSet<TTuple<FGuid,FSHAHash>,TDefaultMapHashableKeyFuncs<FGuid,FSHAHash,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_30.Pointer,local_38,(bool *)0x0);
  lVar6 = (longlong)local_38[0];
  if (!bVar4) {
    TSet<TTuple<FGuid,FSHAHash>,TDefaultMapHashableKeyFuncs<FGuid,FSHAHash,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_30.Pointer,local_38[0]);
  }
  return (FSHAHash *)(*(longlong *)&(this->Pairs).Elements + lVar6 * 0x2c + 0x10);
}

// FindOrAddImpl<unsigned_int_const_&> @ 143219c40

TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> * __thiscall
TMapBase<unsigned_int,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>_>
::FindOrAddImpl<unsigned_int_const_&>
          (TMapBase<unsigned_int,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>_>
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
            return (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)(puVar2 + 2);
          }
          break;
        }
        uVar1 = puVar2[0x16];
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned_int,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x60);
}

// FindOrAddImpl<FGuid_const_&> @ 143219cf0

TArray<BuildPatchServices::FBlockStructure,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FGuid,TArray<BuildPatchServices::FBlockStructure,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<BuildPatchServices::FBlockStructure,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<FGuid_const_&>
          (TMapBase<FGuid,TArray<BuildPatchServices::FBlockStructure,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<BuildPatchServices::FBlockStructure,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FGuid *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FGuid *local_res20;
  
  iVar1 = TSet<TTuple<FGuid,TArray<BuildPatchServices::FBlockStructure,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TArray<BuildPatchServices::FBlockStructure,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,param_1,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x28, lVar2 == 0)) {
    local_res20 = param_2;
    TSet<TTuple<FGuid,TArray<BuildPatchServices::FBlockStructure,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TArray<BuildPatchServices::FBlockStructure,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FGuid_const_&>_>
              (&this->Pairs,(uint)local_res8,(TKeyInitializer<FGuid_const_&> *)(ulonglong)param_1,
               (bool *)&local_res20);
    lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
  }
  return (TArray<BuildPatchServices::FBlockStructure,TSizedDefaultAllocator<32>_> *)(lVar2 + 0x10);
}

// FindOrAddImpl<FSHAHash_const_&> @ 143219d70

TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> * __thiscall
TMapBase<FSHAHash,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSHAHash,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>_>
::FindOrAddImpl<FSHAHash_const_&>
          (TMapBase<FSHAHash,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSHAHash,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>_>
           *this,uint param_1,FSHAHash *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FSHAHash *local_res20;
  
  iVar1 = TSet<TTuple<FSHAHash,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FSHAHash,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FSHAHash>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x70 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)(lVar2 + 0x18);
  }
  local_res20 = param_2;
  TSet<TTuple<FSHAHash,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FSHAHash,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FSHAHash_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FSHAHash_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x70 + 0x18);
}

// FindOrAddImpl<FSetElementId_const_&> @ 143219e00

TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> * __thiscall
TMapBase<FSetElementId,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSetElementId,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>_>
::FindOrAddImpl<FSetElementId_const_&>
          (TMapBase<FSetElementId,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSetElementId,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>_>
           *this,uint param_1,FSetElementId *param_2)

{
  int iVar1;
  int *piVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FSetElementId *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == param_2->Index) {
          if (piVar2 != (int *)0x0) {
            return (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)(piVar2 + 2);
          }
          break;
        }
        iVar1 = piVar2[0x16];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FSetElementId,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FSetElementId,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FSetElementId_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FSetElementId_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x60);
}

// FindOrAddImpl<FString> @ 143219eb0

long64 * __thiscall
TMapBase<FString,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,__int64,0>_>::
FindOrAddImpl<FString>
          (TMapBase<FString,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,__int64,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FString *local_res20;
  
  iVar1 = TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (long64 *)(lVar2 + 0x10);
  }
  local_res20 = param_2;
  TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FString_&&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FString_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (long64 *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 0x10);
}

// GenerateValueArray<TSizedDefaultAllocator<32>_> @ 143219f40

void __thiscall
TMapBase<unsigned___int64,BuildPatchServices::FFileSpan,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,BuildPatchServices::FFileSpan,0>_>
::GenerateValueArray<TSizedDefaultAllocator<32>_>
          (TMapBase<unsigned___int64,BuildPatchServices::FFileSpan,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,BuildPatchServices::FFileSpan,0>_>
           *this,TArray<BuildPatchServices::FFileSpan,TSizedDefaultAllocator<32>_> *param_1)

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
  uint uVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  uint *puVar14;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  DestructItems<BuildPatchServices::FFileSpan,int>
            ((FFileSpan *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  iVar10 = 0;
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,uVar11,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar11 = 1;
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14321a020;
      uVar4 = puVar14[lVar9 + 1];
    }
    uVar11 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar11 * 2 + 1;
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
LAB_14321a020:
  TStack_40._padding_ = CONCAT44(uVar11,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar13;
  if (TStack_40.CurrentBitIndex < iVar3) {
    do {
      pFVar5 = (param_1->AllocatorInstance).Data;
      pFVar12 = (FScriptContainerElement *)
                (*(longlong *)&(this->Pairs).Elements + 8 +
                (longlong)TStack_40.CurrentBitIndex * 0x58);
      if (((pFVar5 <= pFVar12) && (pFVar12 < pFVar5 + (longlong)*piVar1 * 0x48)) &&
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
                           (0x848,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar10 + 1;
      pFVar5 = (param_1->AllocatorInstance).Data + (longlong)iVar10 * 0x48;
      ::FString::FString((FString *)pFVar5,(FString *)pFVar12);
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar5[0x10].field_0x0)->AllocatorInstance).
      Data = *(FScriptContainerElement **)&pFVar12[0x10].field_0x0;
      *(undefined8 *)&pFVar5[0x18].field_0x0 = *(undefined8 *)(pFVar12 + 0x18);
      uVar7 = *(undefined8 *)(pFVar12 + 0x28);
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar5[0x20].field_0x0)->AllocatorInstance).
      Data = *(FScriptContainerElement **)&pFVar12[0x20].field_0x0;
      *(undefined8 *)&pFVar5[0x28].field_0x0 = uVar7;
      *(undefined4 *)
       &(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar5[0x30].field_0x0)->AllocatorInstance
        ).Data = *(undefined4 *)&pFVar12[0x30].field_0x0;
      pFVar5[0x34].field_0x0 = pFVar12[0x34];
      ::FString::FString((FString *)(pFVar5 + 0x38),(FString *)(pFVar12 + 0x38));
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// FindChecked @ 143251610

int * __thiscall
TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::FindChecked
          (TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *this,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  ForElementType<FSetElementId> FVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar4 = (int *)((longlong)iVar3 * 0x10 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar4 == param_1) {
          if (piVar4 != (int *)0x0) {
            return piVar4 + 1;
          }
          break;
        }
        iVar3 = piVar4[2];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (int *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  piVar4 = (int *)(*pcVar1)();
  return piVar4;
}

// FindChecked @ 1432516b0

TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<int,TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_>,0>_>
::FindChecked(TMapBase<int,TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_>,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_> *pTVar4;
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
        piVar5 = (int *)((longlong)iVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_> *)
                   (piVar5 + 2);
          }
          break;
        }
        iVar3 = piVar5[6];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 143251750

FName * __thiscall
TMapBase<int,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FName,0>_>::FindChecked
          (TMapBase<int,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FName,0>_> *this,
          int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
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
        lVar1 = lVar2 + (longlong)iVar5 * 0x14;
        if (*(int *)(lVar2 + (longlong)iVar5 * 0x14) == param_1) {
          if (lVar1 != 0) {
            return (FName *)(lVar1 + 4);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0xc);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (FName *)&DAT_00000004;
  }
  pcVar3 = (code *)swi(3);
  pFVar6 = (FName *)(*pcVar3)();
  return pFVar6;
}

// FindChecked @ 1432517f0

FString * __thiscall
TMapBase<__int64_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64_*,FString,0>_>::
FindChecked(TMapBase<__int64_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64_*,FString,0>_>
            *this,long64 *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
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
        if ((long64 *)*plVar6 == param_1) {
          if (plVar6 != (longlong *)0x0) {
            return (FString *)(plVar6 + 1);
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
    return (FString *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FString *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 1432518c0

EStatFormat * __thiscall
TMapBase<__int64_*,enum_BuildPatchServices::EStatFormat,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64_*,enum_BuildPatchServices::EStatFormat,0>_>
::FindChecked(void *this,long64 *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  EStatFormat *pEVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)((longlong)this + 0x48) - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0x18;
        if (*(long64 **)(*(longlong *)this + (longlong)iVar3 * 0x18) == param_1) {
          if (lVar5 != 0) {
            return (EStatFormat *)(lVar5 + 8);
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
                     ,0x288,L"");
  if (!bVar2) {
    return &DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pEVar4 = (EStatFormat *)(*pcVar1)();
  return pEVar4;
}

// FindChecked @ 143251990

TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>
* __thiscall
TMapBase<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>,0>_>
::FindChecked(TMapBase<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>,0>_>
              *this,FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ulong64 uVar4;
  TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>
  *pTVar5;
  longlong lVar6;
  
  uVar4 = CityHash64((char *)param_1,0x10);
  iVar3 = TSet<TTuple<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>_>,TDefaultMapHashableKeyFuncs<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,(uint)uVar4,param_1);
  if ((iVar3 != -1) &&
     (lVar6 = (longlong)iVar3 * 0x88 + *(longlong *)&(this->Pairs).Elements, lVar6 != 0)) {
    return (TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>
            *)(lVar6 + 0x10);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>
            *)&DAT_00000010;
  }
  pcVar1 = (code *)swi(3);
  pTVar5 = (TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>
            *)(*pcVar1)();
  return pTVar5;
}

// FindChecked @ 143251a20

FSHAHash * __thiscall
TMapBase<FGuid,FSHAHash,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FSHAHash,0>_>::
FindChecked(TMapBase<FGuid,FSHAHash,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FSHAHash,0>_>
            *this,FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ulong64 uVar4;
  FSHAHash *pFVar5;
  longlong lVar6;
  
  uVar4 = CityHash64((char *)param_1,0x10);
  iVar3 = TSet<TTuple<FGuid,FSHAHash>,TDefaultMapHashableKeyFuncs<FGuid,FSHAHash,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,(uint)uVar4,param_1);
  if ((iVar3 != -1) &&
     (lVar6 = (longlong)iVar3 * 0x2c + *(longlong *)&(this->Pairs).Elements, lVar6 != 0)) {
    return (FSHAHash *)(lVar6 + 0x10);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (FSHAHash *)&DAT_00000010;
  }
  pcVar1 = (code *)swi(3);
  pFVar5 = (FSHAHash *)(*pcVar1)();
  return pFVar5;
}

// FindChecked @ 143251ab0

FSetElementId * __thiscall
TMapBase<FGuid,FSetElementId,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FSetElementId,0>_>
::FindChecked(TMapBase<FGuid,FSetElementId,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FSetElementId,0>_>
              *this,FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ulong64 uVar4;
  FSetElementId *pFVar5;
  longlong lVar6;
  
  uVar4 = CityHash64((char *)param_1,0x10);
  iVar3 = TSet<TTuple<FGuid,FSetElementId>,TDefaultMapHashableKeyFuncs<FGuid,FSetElementId,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,(uint)uVar4,param_1);
  if ((iVar3 != -1) &&
     (lVar6 = (longlong)iVar3 * 0x1c + *(longlong *)&(this->Pairs).Elements, lVar6 != 0)) {
    return (FSetElementId *)(lVar6 + 0x10);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (FSetElementId *)&DAT_00000010;
  }
  pcVar1 = (code *)swi(3);
  pFVar5 = (FSetElementId *)(*pcVar1)();
  return pFVar5;
}

// FindChecked @ 143251b40

ulong64 * __thiscall
TMapBase<FGuid,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,unsigned___int64,0>_>
::FindChecked(TMapBase<FGuid,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,unsigned___int64,0>_>
              *this,FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ulong64 uVar4;
  ulong64 *puVar5;
  longlong lVar6;
  
  uVar4 = CityHash64((char *)param_1,0x10);
  iVar3 = TSet<TTuple<FGuid,unsigned___int64>,TDefaultMapHashableKeyFuncs<FGuid,unsigned___int64,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,(uint)uVar4,param_1);
  if ((iVar3 != -1) &&
     (lVar6 = (longlong)iVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements, lVar6 != 0)) {
    return (ulong64 *)(lVar6 + 0x10);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (ulong64 *)&DAT_00000010;
  }
  pcVar1 = (code *)swi(3);
  puVar5 = (ulong64 *)(*pcVar1)();
  return puVar5;
}

// FindChecked @ 143251bd0

ulong64 * __thiscall
TMapBase<FGuid,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,unsigned___int64,0>_>
::FindChecked(TMapBase<FGuid,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,unsigned___int64,0>_>
              *this,FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ulong64 uVar4;
  ulong64 *puVar5;
  longlong lVar6;
  
  uVar4 = CityHash64((char *)param_1,0x10);
  iVar3 = TSet<TTuple<FGuid,unsigned___int64>,TDefaultMapHashableKeyFuncs<FGuid,unsigned___int64,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,(uint)uVar4,param_1);
  if ((iVar3 != -1) &&
     (lVar6 = (longlong)iVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements, lVar6 != 0)) {
    return (ulong64 *)(lVar6 + 0x10);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (ulong64 *)&DAT_00000010;
  }
  pcVar1 = (code *)swi(3);
  puVar5 = (ulong64 *)(*pcVar1)();
  return puVar5;
}

// FindChecked @ 143251c60

FFileManifest ** __thiscall
TMapBase<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*,0>_>
::FindChecked(TMapBase<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*,0>_>
              *this,TStringView<wchar_t> *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FFileManifest **ppFVar7;
  longlong lVar8;
  int iVar9;
  ForElementType<FSetElementId> FVar10;
  longlong lVar11;
  
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>((int)*(undefined8 *)&param_1->Size,param_1->DataPtr);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar10 = (this->Pairs).Hash.SecondaryData;
    if (FVar10 == (ForElementType<FSetElementId>)0x0) {
      FVar10 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar10 + (ulonglong)((this->Pairs).HashSize - 1U & uVar5) * 4);
    while (iVar1 != -1) {
      lVar8 = *(longlong *)&(this->Pairs).Elements;
      lVar11 = (longlong)iVar1 * 0x20;
      iVar2 = *(int *)(lVar8 + 8 + lVar11);
      iVar9 = (int)*(undefined8 *)&param_1->Size;
      if (iVar2 == iVar9) {
        if ((iVar2 != 0) && (iVar9 != 0)) {
          iVar6 = iVar9;
          if (iVar2 < iVar9) {
            iVar6 = iVar2;
          }
          iVar6 = FGenericPlatformStricmp::Strnicmp
                            (*(wchar_t **)(lVar8 + lVar11),param_1->DataPtr,(longlong)iVar6);
          if (iVar6 != 0) goto LAB_143251d10;
        }
        if (iVar2 == iVar9) {
          if (iVar1 != -1) {
            lVar8 = (longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements;
            if (lVar8 != 0) goto LAB_143251d45;
            goto LAB_143251d1f;
          }
          break;
        }
      }
LAB_143251d10:
      iVar1 = *(int *)(lVar11 + 0x18 + *(longlong *)&(this->Pairs).Elements);
    }
  }
  lVar8 = 0;
LAB_143251d1f:
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    ppFVar7 = (FFileManifest **)(*pcVar3)();
    return ppFVar7;
  }
LAB_143251d45:
  return (FFileManifest **)(lVar8 + 0x10);
}

// FindChecked @ 143251d80

TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> * __thiscall
TMapBase<FSHAHash,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSHAHash,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>_>
::FindChecked(TMapBase<FSHAHash,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSHAHash,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>_>
              *this,FSHAHash *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *pTVar4;
  longlong lVar5;
  
  iVar3 = TSet<TTuple<FSHAHash,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FSHAHash,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FSHAHash>(&this->Pairs,*(uint *)param_1->Hash,param_1);
  if ((iVar3 != -1) &&
     (lVar5 = (longlong)iVar3 * 0x70 + *(longlong *)&(this->Pairs).Elements, lVar5 != 0)) {
    return (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)(lVar5 + 0x18);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)&DAT_00000018;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 143251e00

TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> * __thiscall
TMapBase<FSetElementId,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSetElementId,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>_>
::FindChecked(TMapBase<FSetElementId,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSetElementId,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>_>
              *this,FSetElementId *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *pTVar4;
  ForElementType<FSetElementId> FVar5;
  uint *puVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar3 = *(uint *)((longlong)FVar5 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1->Index) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar6 = (uint *)((longlong)(int)uVar3 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar6 == param_1->Index) {
          if (puVar6 != (uint *)0x0) {
            return (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)(puVar6 + 2);
          }
          break;
        }
        uVar3 = puVar6[0x16];
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 143251eb0

long64 ** __thiscall
TMapBase<FString,__int64_volatile_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,__int64_volatile_*,0>_>
::FindChecked(TMapBase<FString,__int64_volatile_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,__int64_volatile_*,0>_>
              *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  long64 **pplVar5;
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
  iVar4 = TSet<TTuple<FString,__int64_volatile_*>,TDefaultMapHashableKeyFuncs<FString,__int64_volatile_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar3,param_1);
  if ((iVar4 == -1) ||
     (lVar8 = (longlong)iVar4 * 0x20 + *(longlong *)&(this->Pairs).Elements, lVar8 == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pplVar5 = (long64 **)(*pcVar1)();
      return pplVar5;
    }
  }
  return (long64 **)(lVar8 + 0x10);
}

// FindChecked @ 143251f50

long64 * __thiscall
TMapBase<FString,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,__int64,0>_>::
FindChecked(TMapBase<FString,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,__int64,0>_>
            *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  long64 *plVar5;
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
  iVar4 = TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar3,param_1);
  if ((iVar4 == -1) ||
     (lVar8 = (longlong)iVar4 * 0x20 + *(longlong *)&(this->Pairs).Elements, lVar8 == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      plVar5 = (long64 *)(*pcVar1)();
      return plVar5;
    }
  }
  return (long64 *)(lVar8 + 0x10);
}

// FindChecked @ 143251ff0

FFileSpan * __thiscall
TMapBase<unsigned___int64,BuildPatchServices::FFileSpan,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,BuildPatchServices::FFileSpan,0>_>
::FindChecked(TMapBase<unsigned___int64,BuildPatchServices::FFileSpan,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,BuildPatchServices::FFileSpan,0>_>
              *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FFileSpan *pFVar4;
  ulong64 *puVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar3 != -1) {
      do {
        puVar5 = (ulong64 *)((longlong)iVar3 * 0x58 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar5 == param_1) {
          if (puVar5 != (ulong64 *)0x0) {
            return (FFileSpan *)(puVar5 + 1);
          }
          break;
        }
        iVar3 = (int)puVar5[10];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FFileSpan *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FFileSpan *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 1432520a0

FFileSpan * __thiscall
TMapBase<unsigned___int64,BuildPatchServices::FFileSpan,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,BuildPatchServices::FFileSpan,0>_>
::FindChecked(TMapBase<unsigned___int64,BuildPatchServices::FFileSpan,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,BuildPatchServices::FFileSpan,0>_>
              *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FFileSpan *pFVar4;
  ulong64 *puVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar3 != -1) {
      do {
        puVar5 = (ulong64 *)((longlong)iVar3 * 0x58 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar5 == param_1) {
          if (puVar5 != (ulong64 *)0x0) {
            return (FFileSpan *)(puVar5 + 1);
          }
          break;
        }
        iVar3 = (int)puVar5[10];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (FFileSpan *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FFileSpan *)(*pcVar1)();
  return pFVar4;
}

// Emplace<int_const_&,TTuple<double,bool,enum_EHttpResponseCodes::Type,BuildPatchServices::FChunkHeader>_const_&> @ 143273d20

TTuple<double,bool,EHttpResponseCodes::Type,BuildPatchServices::FChunkHeader> * __thiscall
TMapBase<int,TTuple<double,bool,enum_EHttpResponseCodes::Type,BuildPatchServices::FChunkHeader>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<double,bool,enum_EHttpResponseCodes::Type,BuildPatchServices::FChunkHeader>,0>_>
::
Emplace<int_const_&,TTuple<double,bool,enum_EHttpResponseCodes::Type,BuildPatchServices::FChunkHeader>_const_&>
          (void *this,int *param_1,
          TTuple<double,bool,EHttpResponseCodes::Type,BuildPatchServices::FChunkHeader> *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x68,8,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar6 = *(int *)((longlong)this + 0x30);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    iVar2 = *(int *)((longlong)iVar6 * 0x68 + 4 + *(longlong *)this);
    *(int *)((longlong)this + 0x30) = iVar2;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x68 + *(longlong *)this) = 0xffffffff;
    }
  }
  TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_28,iVar6);
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<int,TTuple<double,bool,EHttpResponseCodes::Type,BuildPatchServices::FChunkHeader>_>_>
       *)0x0) {
    *(int *)local_28.Pointer = *param_1;
    uVar4 = *(undefined8 *)&param_2->field_0x8;
    *(undefined8 *)((longlong)local_28.Pointer + 8) = *(undefined8 *)param_2;
    *(undefined8 *)((longlong)local_28.Pointer + 0x10) = uVar4;
    uVar4 = *(undefined8 *)&param_2->field_0x18;
    *(undefined8 *)((longlong)local_28.Pointer + 0x18) = *(undefined8 *)&param_2->field_0x10;
    *(undefined8 *)((longlong)local_28.Pointer + 0x20) = uVar4;
    uVar4 = *(undefined8 *)&param_2->field_0x28;
    *(undefined8 *)((longlong)local_28.Pointer + 0x28) = *(undefined8 *)&param_2->field_0x20;
    *(undefined8 *)((longlong)local_28.Pointer + 0x30) = uVar4;
    uVar4 = *(undefined8 *)&param_2->field_0x38;
    *(undefined8 *)((longlong)local_28.Pointer + 0x38) = *(undefined8 *)&param_2->field_0x30;
    *(undefined8 *)((longlong)local_28.Pointer + 0x40) = uVar4;
    uVar4 = *(undefined8 *)&param_2->field_0x48;
    *(undefined8 *)((longlong)local_28.Pointer + 0x48) = *(undefined8 *)&param_2->field_0x40;
    *(undefined8 *)((longlong)local_28.Pointer + 0x50) = uVar4;
    *(undefined8 *)((longlong)local_28.Pointer + 0x58) = *(undefined8 *)&param_2->field_0x50;
    *(undefined4 *)((longlong)local_28.Pointer + 0x60) = 0xffffffff;
  }
  uVar3 = *(uint *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  bVar5 = TSet<TTuple<int,TTuple<double,bool,enum_EHttpResponseCodes::Type,BuildPatchServices::FChunkHeader>_>,TDefaultMapHashableKeyFuncs<int,TTuple<double,bool,enum_EHttpResponseCodes::Type,BuildPatchServices::FChunkHeader>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(this,uVar3,local_28.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar5) {
    TSet<TTuple<int,TTuple<double,bool,enum_EHttpResponseCodes::Type,BuildPatchServices::FChunkHeader>_>,TDefaultMapHashableKeyFuncs<int,TTuple<double,bool,enum_EHttpResponseCodes::Type,BuildPatchServices::FChunkHeader>,0>,FDefaultSetAllocator>
    ::RehashOrLink(this,uVar3,local_28.Pointer,local_res8[0]);
  }
  return (TTuple<double,bool,EHttpResponseCodes::Type,BuildPatchServices::FChunkHeader> *)
         (*(longlong *)this + lVar7 * 0x68 + 8);
}

// Emplace<int_const_&,TTuple<double,bool,enum_EHttpResponseCodes::Type,BuildPatchServices::FChunkHeader>_> @ 143273e70

TTuple<double,bool,EHttpResponseCodes::Type,BuildPatchServices::FChunkHeader> * __thiscall
TMapBase<int,TTuple<double,bool,enum_EHttpResponseCodes::Type,BuildPatchServices::FChunkHeader>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<double,bool,enum_EHttpResponseCodes::Type,BuildPatchServices::FChunkHeader>,0>_>
::
Emplace<int_const_&,TTuple<double,bool,enum_EHttpResponseCodes::Type,BuildPatchServices::FChunkHeader>_>
          (void *this,int *param_1,
          TTuple<double,bool,EHttpResponseCodes::Type,BuildPatchServices::FChunkHeader> *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x68,8,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar6 = *(int *)((longlong)this + 0x30);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    iVar2 = *(int *)((longlong)iVar6 * 0x68 + 4 + *(longlong *)this);
    *(int *)((longlong)this + 0x30) = iVar2;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x68 + *(longlong *)this) = 0xffffffff;
    }
  }
  TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_28,iVar6);
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<int,TTuple<double,bool,EHttpResponseCodes::Type,BuildPatchServices::FChunkHeader>_>_>
       *)0x0) {
    *(int *)local_28.Pointer = *param_1;
    uVar4 = *(undefined8 *)&param_2->field_0x8;
    *(undefined8 *)((longlong)local_28.Pointer + 8) = *(undefined8 *)param_2;
    *(undefined8 *)((longlong)local_28.Pointer + 0x10) = uVar4;
    uVar4 = *(undefined8 *)&param_2->field_0x18;
    *(undefined8 *)((longlong)local_28.Pointer + 0x18) = *(undefined8 *)&param_2->field_0x10;
    *(undefined8 *)((longlong)local_28.Pointer + 0x20) = uVar4;
    uVar4 = *(undefined8 *)&param_2->field_0x28;
    *(undefined8 *)((longlong)local_28.Pointer + 0x28) = *(undefined8 *)&param_2->field_0x20;
    *(undefined8 *)((longlong)local_28.Pointer + 0x30) = uVar4;
    uVar4 = *(undefined8 *)&param_2->field_0x38;
    *(undefined8 *)((longlong)local_28.Pointer + 0x38) = *(undefined8 *)&param_2->field_0x30;
    *(undefined8 *)((longlong)local_28.Pointer + 0x40) = uVar4;
    uVar4 = *(undefined8 *)&param_2->field_0x48;
    *(undefined8 *)((longlong)local_28.Pointer + 0x48) = *(undefined8 *)&param_2->field_0x40;
    *(undefined8 *)((longlong)local_28.Pointer + 0x50) = uVar4;
    *(undefined8 *)((longlong)local_28.Pointer + 0x58) = *(undefined8 *)&param_2->field_0x50;
    *(undefined4 *)((longlong)local_28.Pointer + 0x60) = 0xffffffff;
  }
  uVar3 = *(uint *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  bVar5 = TSet<TTuple<int,TTuple<double,bool,enum_EHttpResponseCodes::Type,BuildPatchServices::FChunkHeader>_>,TDefaultMapHashableKeyFuncs<int,TTuple<double,bool,enum_EHttpResponseCodes::Type,BuildPatchServices::FChunkHeader>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(this,uVar3,local_28.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar5) {
    TSet<TTuple<int,TTuple<double,bool,enum_EHttpResponseCodes::Type,BuildPatchServices::FChunkHeader>_>,TDefaultMapHashableKeyFuncs<int,TTuple<double,bool,enum_EHttpResponseCodes::Type,BuildPatchServices::FChunkHeader>,0>,FDefaultSetAllocator>
    ::RehashOrLink(this,uVar3,local_28.Pointer,local_res8[0]);
  }
  return (TTuple<double,bool,EHttpResponseCodes::Type,BuildPatchServices::FChunkHeader> *)
         (*(longlong *)this + lVar7 * 0x68 + 8);
}

// Emplace<FGuid_const_&,int_const_&> @ 143274170

int * __thiscall
TMapBase<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,0>_>::
Emplace<FGuid_const_&,int_const_&>
          (TMapBase<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,0>_> *this,
          FGuid *param_1,int *param_2)

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
                      (0x1c,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x1c + 4 + lVar7);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x1c + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FGuid,int>_> *)0x0) {
    uVar3 = *(undefined8 *)&param_1->C;
    *(undefined8 *)local_18.Pointer = *(undefined8 *)param_1;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = uVar3;
    *(int *)((longlong)local_18.Pointer + 0x10) = *param_2;
    *(undefined4 *)((longlong)local_18.Pointer + 0x14) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  uVar6 = CityHash64(local_18.Pointer,0x10);
  bVar4 = TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,0>,FDefaultSetAllocator>::
          TryReplaceExisting(&this->Pairs,(uint)uVar6,local_18.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,0>,FDefaultSetAllocator>::
    RehashOrLink(&this->Pairs,(uint)uVar6,local_18.Pointer,local_res8[0]);
  }
  return (int *)(*(longlong *)&(this->Pairs).Elements + lVar7 * 0x1c + 0x10);
}

// Emplace<FGuid_const_&,int> @ 1432742a0

int * __thiscall
TMapBase<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,0>_>::
Emplace<FGuid_const_&,int>
          (TMapBase<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,0>_> *this,
          FGuid *param_1,int *param_2)

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
                      (0x1c,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x1c + 4 + lVar7);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x1c + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FGuid,int>_> *)0x0) {
    uVar3 = *(undefined8 *)&param_1->C;
    *(undefined8 *)local_18.Pointer = *(undefined8 *)param_1;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = uVar3;
    *(int *)((longlong)local_18.Pointer + 0x10) = *param_2;
    *(undefined4 *)((longlong)local_18.Pointer + 0x14) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  uVar6 = CityHash64(local_18.Pointer,0x10);
  bVar4 = TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,0>,FDefaultSetAllocator>::
          TryReplaceExisting(&this->Pairs,(uint)uVar6,local_18.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,0>,FDefaultSetAllocator>::
    RehashOrLink(&this->Pairs,(uint)uVar6,local_18.Pointer,local_res8[0]);
  }
  return (int *)(*(longlong *)&(this->Pairs).Elements + lVar7 * 0x1c + 0x10);
}

// EmplaceByHash<FGuid_const_&> @ 143276ac0

int * __thiscall
TMapBase<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,0>_>::
EmplaceByHash<FGuid_const_&>
          (TMapBase<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,0>_> *this,
          uint param_1,FGuid *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  int local_res8 [2];
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
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x1c + 4 + lVar6);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x1c + lVar6) = 0xffffffff;
    }
  }
  TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FGuid,int>_> *)0x0) {
    uVar3 = *(undefined8 *)&param_2->C;
    *(undefined8 *)local_18.Pointer = *(undefined8 *)param_2;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = uVar3;
    *(undefined4 *)((longlong)local_18.Pointer + 0x10) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x14) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  bVar4 = TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,0>,FDefaultSetAllocator>::
          TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,0>,FDefaultSetAllocator>::
    RehashOrLink(&this->Pairs,param_1,local_18.Pointer,local_res8[0]);
  }
  return (int *)(*(longlong *)&(this->Pairs).Elements + lVar6 * 0x1c + 0x10);
}

// FindOrAddImpl<int_const_&> @ 143278c50

TTuple<FString,unsigned___int64> * __thiscall
TMapBase<int,TTuple<FString,unsigned___int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<FString,unsigned___int64>,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int,TTuple<FString,unsigned___int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<FString,unsigned___int64>,0>_>
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
        lVar3 = lVar1 + (longlong)iVar2 * 0x28;
        if (*(int *)(lVar1 + (longlong)iVar2 * 0x28) == *param_2) {
          if (lVar3 != 0) goto LAB_143278ce2;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x20);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int,TTuple<FString,unsigned___int64>_>,TDefaultMapHashableKeyFuncs<int,TTuple<FString,unsigned___int64>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
LAB_143278ce2:
  return (TTuple<FString,unsigned___int64> *)(lVar3 + 8);
}

// FindOrAddImpl<FGuid_const_&> @ 143278d00

FTaskInfo * __thiscall
TMapBase<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo,0>_>
::FindOrAddImpl<FGuid_const_&>
          (TMapBase<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo,0>_>
           *this,uint param_1,FGuid *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FGuid *local_res20;
  
  iVar1 = TSet<TTuple<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,param_1,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x48, lVar2 == 0)) {
    local_res20 = param_2;
    TSet<TTuple<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FGuid_const_&>_>
              (&this->Pairs,(uint)local_res8,(TKeyInitializer<FGuid_const_&> *)(ulonglong)param_1,
               (bool *)&local_res20);
    lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x48;
  }
  return (FTaskInfo *)(lVar2 + 0x10);
}

// FindOrAddImpl<FGuid_const_&> @ 143278d80

TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FGuid,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<FGuid_const_&>
          (TMapBase<FGuid,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FGuid *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FGuid *local_res20;
  
  iVar1 = TSet<TTuple<FGuid,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,param_1,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x28, lVar2 == 0)) {
    local_res20 = param_2;
    TSet<TTuple<FGuid,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FGuid_const_&>_>
              (&this->Pairs,(uint)local_res8,(TKeyInitializer<FGuid_const_&> *)(ulonglong)param_1,
               (bool *)&local_res20);
    lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
  }
  return (TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_> *)(lVar2 + 0x10);
}

// FindOrAddImpl<FGuid_const_&> @ 143278e00

TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_> *
__thiscall
TMapBase<FGuid,TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<FGuid_const_&>
          (TMapBase<FGuid,TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FGuid *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FGuid *local_res20;
  
  iVar1 = TSet<TTuple<FGuid,TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,param_1,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x28, lVar2 == 0)) {
    local_res20 = param_2;
    TSet<TTuple<FGuid,TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FGuid_const_&>_>
              (&this->Pairs,(uint)local_res8,(TKeyInitializer<FGuid_const_&> *)(ulonglong)param_1,
               (bool *)&local_res20);
    lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
  }
  return (TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>
          *)(lVar2 + 0x10);
}

// FindOrAddImpl<FString_const_&> @ 143278e80

TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<FString_const_&>
          (TMapBase<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FString *local_res20;
  
  iVar1 = TSet<TTuple<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,param_1,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x28, lVar2 == 0)) {
    local_res20 = param_2;
    TSet<TTuple<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
              (&this->Pairs,(uint)local_res8,(TKeyInitializer<FString_const_&> *)(ulonglong)param_1,
               (bool *)&local_res20);
    lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
  }
  return (TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_> *)(lVar2 + 0x10);
}

// FindOrAddImpl<FString_const_&> @ 143278f00

FMockManifestField * __thiscall
TMapBase<FString,BuildPatchServices::FMockManifestField,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FMockManifestField,0>_>
::FindOrAddImpl<FString_const_&>
          (TMapBase<FString,BuildPatchServices::FMockManifestField,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FMockManifestField,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FString *local_res20;
  
  iVar1 = TSet<TTuple<FString,BuildPatchServices::FMockManifestField>,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FMockManifestField,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x40 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (FMockManifestField *)(lVar2 + 0x10);
  }
  local_res20 = param_2;
  TSet<TTuple<FString,BuildPatchServices::FMockManifestField>,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FMockManifestField,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FString_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FMockManifestField *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x40 + 0x10);
}

// GenerateValueArray<TSizedDefaultAllocator<32>_> @ 143278f90

void __thiscall
TMapBase<int,TFunction<void___cdecl(void)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TFunction<void___cdecl(void)>,0>_>
::GenerateValueArray<TSizedDefaultAllocator<32>_>
          (TMapBase<int,TFunction<void___cdecl(void)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TFunction<void___cdecl(void)>,0>_>
           *this,TArray<TFunction<void___cdecl(void)>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  uVar8 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  DestructItems<TFunction<void___cdecl(void)>,int>
            ((TFunction<void___cdecl(void)> *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  piVar1 = &param_1->ArrayMax;
  iVar10 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,0x10,uVar8,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar8 = 1;
  iVar12 = 0;
  TStack_50.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_50.Array;
    }
    uVar4 = *puVar13;
    iVar12 = 0;
    iVar10 = 0;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_50.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_143279084;
      uVar4 = puVar13[lVar7 + 1];
    }
    uVar8 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    TStack_50.CurrentBitIndex = (int)lVar7 + -1 + iVar12;
    if (iVar3 < TStack_50.CurrentBitIndex) {
      TStack_50.CurrentBitIndex = iVar3;
    }
  }
LAB_143279084:
  TStack_50._padding_ = CONCAT44(uVar8,iVar10);
  TStack_50.UnvisitedBitMask = 0xffffffff;
  TStack_50._28_4_ = TStack_50.CurrentBitIndex;
  TStack_50.BaseBitIndex = iVar12;
  if (TStack_50.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar9 = (FScriptContainerElement *)
               (*(longlong *)&(this->Pairs).Elements + 0x10 +
               (longlong)TStack_50.CurrentBitIndex * 0x50);
      pFVar11 = (param_1->AllocatorInstance).Data;
      if (((pFVar11 <= pFVar9) && (pFVar9 < pFVar11 + (longlong)*piVar1 * 0x30)) &&
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
                           (0x1030,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar10 + 1;
      pFVar11 = (param_1->AllocatorInstance).Data + (longlong)iVar10 * 0x30;
      *(longlong *)pFVar11 = *(longlong *)pFVar9;
      *(longlong *)(pFVar11 + 0x28) = 0;
      if (*(longlong *)pFVar11 != 0) {
        pFVar11 = pFVar9 + 0x10;
        if (*(FScriptContainerElement **)(pFVar9 + 0x28) != (FScriptContainerElement *)0x0) {
          pFVar11 = *(FScriptContainerElement **)(pFVar9 + 0x28);
        }
        (*(code *)**(undefined8 **)pFVar11)();
      }
      TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
    } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
  }
  return;
}

// GetKeys<TSizedDefaultAllocator<32>_> @ 143279230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>_>
::GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>_>
           *this,TArray<FGuid,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  char *pcVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  ulong64 uVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  ForElementType<unsigned_int> FVar21;
  uint *puVar22;
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
  TMapBase<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>_>
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
  ulonglong uVar20;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  piVar1 = &param_1->ArrayMax;
  uVar20 = 0;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&param_1->AllocatorInstance,0,piVar1);
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
  uVar18 = 0;
  if (uVar13 == 0) goto LAB_1432794f1;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar13);
  }
  TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar13);
  uVar14 = 1;
  if (3 < uVar13) {
    uVar12 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_120 = (undefined4)lVar17;
    uVar14 = 1 << ((byte)lVar17 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar14 <= (int)local_50)) goto LAB_1432794f1;
  local_50 = uVar14;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar14 != 0) {
    uVar13 = uVar14;
    if (uVar14 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar13 = 0;
        goto LAB_14327934c;
      }
    }
    else {
LAB_14327934c:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar13,4);
    }
    if (0 < (int)uVar14) {
      uVar19 = (ulonglong)uVar14;
      uVar12 = uVar20;
      do {
        FVar11.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar11.Data = local_58.Data;
        }
        uVar8 = uVar12 & (longlong)(int)uVar14 - 1U;
        uVar12 = uVar12 + 1;
        *(undefined4 *)(FVar11.Data + uVar8 * 4) = 0xffffffff;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
  }
  if (local_50 != 0) {
    local_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_168 = 0;
    uStack_164 = 1;
    uStack_154 = 0;
    uStack_150 = 0;
    uVar12 = uVar20;
    if (local_70 != 0) {
      FVar21 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar21 = local_78;
      }
      uVar13 = *(uint *)FVar21;
      uVar19 = uVar20;
      while (uVar13 == 0) {
        uStack_150 = (int)uVar19 + 0x20;
        uVar19 = (ulonglong)uStack_150;
        iVar7 = (int)uVar12;
        local_168 = iVar7 + 1;
        uVar12 = (ulonglong)local_168;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_168)
        goto LAB_143279450;
        uVar13 = ((uint *)((longlong)FVar21 + 4))[iVar7];
      }
      uStack_164 = -uVar13 & uVar13;
      uVar12 = (ulonglong)uStack_164 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_11c = (int)lVar17;
      uStack_154 = local_11c + -1 + uStack_150;
      uVar12 = (ulonglong)uStack_154;
      if ((int)local_70 < (int)uStack_154) {
LAB_143279450:
        uVar12 = (ulonglong)local_70;
        uStack_154 = local_70;
      }
    }
    local_114._4_8_ = local_98;
    local_108._padding_ = CONCAT44(uStack_164,local_168);
    local_108.CurrentBitIndex = uStack_154;
    local_108.UnvisitedBitMask = 0xffffffff;
    local_108._28_4_ = uStack_14c;
    local_108.BaseBitIndex = uStack_150;
    if ((int)uVar12 < (int)local_70) {
      do {
        pcVar2 = (char *)(*(longlong *)local_114._4_8_ + (longlong)(int)uVar12 * 0x18);
        uVar9 = CityHash64(pcVar2,0x10);
        uVar13 = local_50 - 1 & (uint)uVar9;
        *(uint *)(pcVar2 + 0x14) = uVar13;
        FVar11.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar11.Data = local_58.Data;
        }
        uVar19 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar13;
        *(undefined4 *)(pcVar2 + 0x10) = *(undefined4 *)(FVar11.Data + uVar19 * 4);
        *(int *)(FVar11.Data + uVar19 * 4) = (int)uVar12;
        local_108.UnvisitedBitMask = local_108.UnvisitedBitMask & ~local_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_108);
        uVar12 = (ulonglong)(uint)local_108.CurrentBitIndex;
      } while (local_108.CurrentBitIndex < (local_108.Array)->NumBits);
    }
  }
LAB_1432794f1:
  uVar13 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  if (*piVar1 < (int)uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,uVar13,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar13 = *(uint *)&(this->Pairs).Elements.field_0x28;
  TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar12 = uVar20;
  local_c8 = uVar18;
  uStack_dc = 1;
  if (uVar13 != 0) {
    puVar22 = *(uint **)&(this->Pairs).Elements.field_0x20;
    uVar12 = (ulonglong)uVar13;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)TStack_140.Array;
    }
    uVar14 = *puVar22;
    uVar19 = uVar20;
    local_c8 = 0;
    uVar18 = 0;
    while (uVar14 == 0) {
      iVar7 = (int)uVar20;
      local_c8 = (int)uVar19 + 0x20;
      uVar19 = (ulonglong)local_c8;
      uVar18 = iVar7 + 1;
      uVar20 = (ulonglong)uVar18;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar18)
      goto LAB_14327959e;
      uVar14 = puVar22[(longlong)iVar7 + 1];
    }
    uStack_dc = -uVar14 & uVar14;
    uVar20 = (ulonglong)uStack_dc * 2 + 1;
    lVar17 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_118 = (int)lVar17;
    uVar14 = (local_c8 - 1) + local_118;
    if ((int)uVar13 < (int)uVar14) {
      uVar14 = uVar13;
    }
    uVar12 = (ulonglong)uVar14;
  }
LAB_14327959e:
  uStack_d0 = 0xffffffff;
  uStack_cc = (uint)uVar12;
  uStack_c4 = local_9c;
  TStack_140._padding_ = CONCAT44(uStack_dc,uVar18);
  TStack_140.UnvisitedBitMask = 0xffffffff;
  TStack_140._28_4_ = local_9c;
  TStack_140.BaseBitIndex = local_c8;
  local_e8 = this;
  uStack_e0 = uVar18;
  local_d8 = (undefined1 *)TStack_140.Array;
  TStack_140.CurrentBitIndex = uStack_cc;
  if ((int)uStack_cc < (int)uVar13) {
    do {
      lVar17 = (longlong)(int)uVar12 * 0x20;
      piVar15 = (int *)(*(longlong *)&(this->Pairs).Elements + lVar17);
      uVar9 = CityHash64((char *)piVar15,0x10);
      if (local_98._8_4_ != local_64) {
        FVar11.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar11.Data = local_58.Data;
        }
        iVar7 = *(int *)(FVar11.Data + ((ulonglong)(local_50 - 1) & uVar9 & 0xffffffff) * 4);
        if (iVar7 != -1) {
          do {
            lVar10 = (longlong)iVar7;
            if (((piVar15[3] == *(int *)(local_98._0_8_ + lVar10 * 0x18 + 0xc) &&
                 piVar15[2] == *(int *)(local_98._0_8_ + lVar10 * 0x18 + 8)) &&
                piVar15[1] == *(int *)(local_98._0_8_ + lVar10 * 0x18 + 4)) &&
                *piVar15 == *(int *)(local_98._0_8_ + lVar10 * 0x18)) goto LAB_14327973b;
            iVar7 = *(int *)(local_98._0_8_ + lVar10 * 0x18 + 0x10);
          } while (iVar7 != -1);
        }
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      pFVar16 = (FScriptContainerElement *)(*(longlong *)&(this->Pairs).Elements + lVar17);
      if (((pFVar3 <= pFVar16) && (pFVar16 < pFVar3 + (longlong)*piVar1 * 0x10)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      iVar7 = param_1->ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x410,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar7 + 1;
      uVar5 = *(undefined8 *)(pFVar16 + 8);
      pFVar3 = (param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
      *(undefined8 *)pFVar3 = *(undefined8 *)pFVar16;
      *(undefined8 *)(pFVar3 + 8) = uVar5;
      TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)local_98,
                 (FGuid *)local_114,
                 (bool *)((longlong)TStack_140.CurrentBitIndex * 0x20 +
                         *(longlong *)&(this->Pairs).Elements));
LAB_14327973b:
      TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
      uVar12 = (ulonglong)(uint)TStack_140.CurrentBitIndex;
    } while (TStack_140.CurrentBitIndex < (TStack_140.Array)->NumBits);
  }
  iVar7 = param_1->ArrayNum;
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return iVar7;
}

// Find @ 1432d0620

TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_> *
__thiscall
TMapBase<FGuid,TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>,0>_>
::Find(TMapBase<FGuid,TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>,0>_>
       *this,FGuid *param_1)

{
  longlong lVar1;
  int iVar2;
  ulong64 uVar3;
  TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>
  *pTVar4;
  
  uVar3 = CityHash64((char *)param_1,0x10);
  iVar2 = TSet<TTuple<FGuid,TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,(uint)uVar3,param_1);
  if (iVar2 != -1) {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar2 * 0x28;
    pTVar4 = (TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>
              *)0x0;
    if (lVar1 != 0) {
      pTVar4 = (TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>
                *)(lVar1 + 0x10);
    }
    return pTVar4;
  }
  return (TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>
          *)0x0;
}

// Find @ 1432d0690

FFileManifest * __thiscall
TMapBase<FString,BuildPatchServices::FFileManifest,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FFileManifest,0>_>
::Find(TMapBase<FString,BuildPatchServices::FFileManifest,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FFileManifest,0>_>
       *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  FFileManifest *pFVar6;
  
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
  iVar2 = TSet<TTuple<FString,BuildPatchServices::FFileManifest>,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FFileManifest,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x78 + *(longlong *)&(this->Pairs).Elements;
    pFVar6 = (FFileManifest *)0x0;
    if (lVar4 != 0) {
      pFVar6 = (FFileManifest *)(lVar4 + 0x10);
    }
    return pFVar6;
  }
  return (FFileManifest *)0x0;
}

// Find @ 1432d0720

TUniquePtr<BuildPatchServices::FInstallChunkSource::FOpenedFile,TDefaultDelete<BuildPatchServices::FInstallChunkSource::FOpenedFile>_>
* __thiscall
TMapBase<FString,TUniquePtr<BuildPatchServices::FInstallChunkSource::FOpenedFile,TDefaultDelete<BuildPatchServices::FInstallChunkSource::FOpenedFile>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<BuildPatchServices::FInstallChunkSource::FOpenedFile,TDefaultDelete<BuildPatchServices::FInstallChunkSource::FOpenedFile>_>,0>_>
::Find(TMapBase<FString,TUniquePtr<BuildPatchServices::FInstallChunkSource::FOpenedFile,TDefaultDelete<BuildPatchServices::FInstallChunkSource::FOpenedFile>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<BuildPatchServices::FInstallChunkSource::FOpenedFile,TDefaultDelete<BuildPatchServices::FInstallChunkSource::FOpenedFile>_>,0>_>
       *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  TUniquePtr<BuildPatchServices::FInstallChunkSource::FOpenedFile,TDefaultDelete<BuildPatchServices::FInstallChunkSource::FOpenedFile>_>
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
  iVar2 = TSet<TTuple<FString,TUniquePtr<BuildPatchServices::FInstallChunkSource::FOpenedFile,TDefaultDelete<BuildPatchServices::FInstallChunkSource::FOpenedFile>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<BuildPatchServices::FInstallChunkSource::FOpenedFile,TDefaultDelete<BuildPatchServices::FInstallChunkSource::FOpenedFile>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x20 + *(longlong *)&(this->Pairs).Elements;
    pTVar6 = (TUniquePtr<BuildPatchServices::FInstallChunkSource::FOpenedFile,TDefaultDelete<BuildPatchServices::FInstallChunkSource::FOpenedFile>_>
              *)0x0;
    if (lVar4 != 0) {
      pTVar6 = (TUniquePtr<BuildPatchServices::FInstallChunkSource::FOpenedFile,TDefaultDelete<BuildPatchServices::FInstallChunkSource::FOpenedFile>_>
                *)(lVar4 + 0x10);
    }
    return pTVar6;
  }
  return (TUniquePtr<BuildPatchServices::FInstallChunkSource::FOpenedFile,TDefaultDelete<BuildPatchServices::FInstallChunkSource::FOpenedFile>_>
          *)0x0;
}

// FindChecked @ 1432d0910

TTuple<double,bool,EHttpResponseCodes::Type,BuildPatchServices::FChunkHeader> * __thiscall
TMapBase<int,TTuple<double,bool,enum_EHttpResponseCodes::Type,BuildPatchServices::FChunkHeader>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<double,bool,enum_EHttpResponseCodes::Type,BuildPatchServices::FChunkHeader>,0>_>
::FindChecked(void *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TTuple<double,bool,EHttpResponseCodes::Type,BuildPatchServices::FChunkHeader> *pTVar4;
  int *piVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar6 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x68 + *(longlong *)this);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (TTuple<double,bool,EHttpResponseCodes::Type,BuildPatchServices::FChunkHeader> *)
                   (piVar5 + 2);
          }
          break;
        }
        iVar3 = piVar5[0x18];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TTuple<double,bool,EHttpResponseCodes::Type,BuildPatchServices::FChunkHeader> *)
           &DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TTuple<double,bool,EHttpResponseCodes::Type,BuildPatchServices::FChunkHeader> *)
           (*pcVar1)();
  return pTVar4;
}

// FindChecked @ 1432d09b0

FGuid * __thiscall
TMapBase<int,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuid,0>_>::FindChecked
          (TMapBase<int,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuid,0>_> *this,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FGuid *pFVar4;
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
        piVar5 = (int *)((longlong)iVar3 * 0x1c + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (FGuid *)(piVar5 + 1);
          }
          break;
        }
        iVar3 = piVar5[5];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FGuid *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FGuid *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 1432d0a50

int * __thiscall
TMapBase<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,0>_>::FindChecked
          (TMapBase<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,0>_> *this,
          FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ulong64 uVar4;
  int *piVar5;
  longlong lVar6;
  
  uVar4 = CityHash64((char *)param_1,0x10);
  iVar3 = TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,0>,FDefaultSetAllocator>::
          FindIndexByHash<FGuid>(&this->Pairs,(uint)uVar4,param_1);
  if ((iVar3 != -1) &&
     (lVar6 = (longlong)iVar3 * 0x1c + *(longlong *)&(this->Pairs).Elements, lVar6 != 0)) {
    return (int *)(lVar6 + 0x10);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (int *)&DAT_00000010;
  }
  pcVar1 = (code *)swi(3);
  piVar5 = (int *)(*pcVar1)();
  return piVar5;
}

// FindChecked @ 1432d0ae0

FChunkInfo * __thiscall
TMapBase<FGuid,BuildPatchServices::FChunkInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo,0>_>
::FindChecked(TMapBase<FGuid,BuildPatchServices::FChunkInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo,0>_>
              *this,FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ulong64 uVar4;
  FChunkInfo *pFVar5;
  longlong lVar6;
  
  uVar4 = CityHash64((char *)param_1,0x10);
  iVar3 = TSet<TTuple<FGuid,BuildPatchServices::FChunkInfo>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,(uint)uVar4,param_1);
  if ((iVar3 != -1) &&
     (lVar6 = (longlong)iVar3 * 0x58 + *(longlong *)&(this->Pairs).Elements, lVar6 != 0)) {
    return (FChunkInfo *)(lVar6 + 0x10);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (FChunkInfo *)&DAT_00000010;
  }
  pcVar1 = (code *)swi(3);
  pFVar5 = (FChunkInfo *)(*pcVar1)();
  return pFVar5;
}

// FindChecked @ 1432d0b70

FTaskInfo * __thiscall
TMapBase<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo,0>_>
::FindChecked(TMapBase<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo,0>_>
              *this,FGuid *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ulong64 uVar5;
  FTaskInfo *pFVar6;
  
  uVar5 = CityHash64((char *)param_1,0x10);
  iVar4 = TSet<TTuple<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,(uint)uVar5,param_1);
  if ((iVar4 != -1) &&
     (lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar4 * 0x48, lVar1 != 0)) {
    return (FTaskInfo *)(lVar1 + 0x10);
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar3) {
    return (FTaskInfo *)&DAT_00000010;
  }
  pcVar2 = (code *)swi(3);
  pFVar6 = (FTaskInfo *)(*pcVar2)();
  return pFVar6;
}

// FindChecked @ 1432d0c00

TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FGuid,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,0>_>
::FindChecked(TMapBase<FGuid,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,0>_>
              *this,FGuid *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ulong64 uVar5;
  TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_> *pTVar6;
  
  uVar5 = CityHash64((char *)param_1,0x10);
  iVar4 = TSet<TTuple<FGuid,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,(uint)uVar5,param_1);
  if ((iVar4 != -1) &&
     (lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar4 * 0x28, lVar1 != 0)) {
    return (TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_> *)
           (lVar1 + 0x10);
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar3) {
    return (TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_> *)&DAT_00000010
    ;
  }
  pcVar2 = (code *)swi(3);
  pTVar6 = (TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
  return pTVar6;
}

// FindChecked @ 1432d0c90

TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>
* __thiscall
TMapBase<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>_>
::FindChecked(TMapBase<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>_>
              *this,FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ulong64 uVar4;
  TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>
  *pTVar5;
  longlong lVar6;
  
  uVar4 = CityHash64((char *)param_1,0x10);
  iVar3 = TSet<TTuple<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,(uint)uVar4,param_1);
  if ((iVar3 != -1) &&
     (lVar6 = (longlong)iVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements, lVar6 != 0)) {
    return (TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>
            *)(lVar6 + 0x10);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>
            *)&DAT_00000010;
  }
  pcVar1 = (code *)swi(3);
  pTVar5 = (TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>
            *)(*pcVar1)();
  return pTVar5;
}

// FindChecked @ 1432d0d20

FFileManifest * __thiscall
TMapBase<FString,BuildPatchServices::FFileManifest,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FFileManifest,0>_>
::FindChecked(TMapBase<FString,BuildPatchServices::FFileManifest,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FFileManifest,0>_>
              *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FFileManifest *pFVar5;
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
  iVar4 = TSet<TTuple<FString,BuildPatchServices::FFileManifest>,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FFileManifest,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar3,param_1);
  if ((iVar4 == -1) ||
     (lVar8 = (longlong)iVar4 * 0x78 + *(longlong *)&(this->Pairs).Elements, lVar8 == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FFileManifest *)(*pcVar1)();
      return pFVar5;
    }
  }
  return (FFileManifest *)(lVar8 + 0x10);
}

// FindChecked @ 1432d0dc0

TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,0>_>
::FindChecked(TMapBase<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,0>_>
              *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_> *pTVar5;
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
  iVar4 = TSet<TTuple<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar3,param_1);
  if ((iVar4 == -1) ||
     (lVar8 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar4 * 0x28, lVar8 == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_> *)
               (*pcVar1)();
      return pTVar5;
    }
  }
  return (TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_> *)(lVar8 + 0x10);
}

// FindChecked @ 1432d0e60

FMockManifestField * __thiscall
TMapBase<FString,BuildPatchServices::FMockManifestField,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FMockManifestField,0>_>
::FindChecked(TMapBase<FString,BuildPatchServices::FMockManifestField,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FMockManifestField,0>_>
              *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FMockManifestField *pFVar5;
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
  iVar4 = TSet<TTuple<FString,BuildPatchServices::FMockManifestField>,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FMockManifestField,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar3,param_1);
  if ((iVar4 == -1) ||
     (lVar8 = (longlong)iVar4 * 0x40 + *(longlong *)&(this->Pairs).Elements, lVar8 == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FMockManifestField *)(*pcVar1)();
      return pFVar5;
    }
  }
  return (FMockManifestField *)(lVar8 + 0x10);
}

// FindChecked @ 1432d0f00

FThreadSafeCounter64 * __thiscall
TMapBase<enum_BuildPatchServices::EVerifyError,FThreadSafeCounter64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_BuildPatchServices::EVerifyError,FThreadSafeCounter64,0>_>
::FindChecked(void *this,EVerifyError param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FThreadSafeCounter64 *pFVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)(*(int *)((longlong)this + 0x48) - OpenFileFailed & param_1)
                             * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0x18;
        if (*(EVerifyError *)(*(longlong *)this + (longlong)iVar3 * 0x18) == param_1) {
          if (lVar5 != 0) {
            return (FThreadSafeCounter64 *)(lVar5 + 8);
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
                     ,0x288,L"");
  if (!bVar2) {
    return (FThreadSafeCounter64 *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FThreadSafeCounter64 *)(*pcVar1)();
  return pFVar4;
}

// Emplace<FString_const_&,BuildPatchServices::FFileManifest_const_&> @ 1432f8f50

FFileManifest * __thiscall
TMapBase<FString,BuildPatchServices::FFileManifest,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FFileManifest,0>_>
::Emplace<FString_const_&,BuildPatchServices::FFileManifest_const_&>
          (TMapBase<FString,BuildPatchServices::FFileManifest,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FFileManifest,0>_>
           *this,FString *param_1,FFileManifest *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  TSparseSetElement<TTuple<FString,BuildPatchServices::FFileManifest>_> *pTVar8;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar5 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar5 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x78,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar5 = iVar5 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)((longlong)iVar3 * 0x78 + 4 + lVar7);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x78 + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<120,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<120,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar3);
  pTVar8 = (TSparseSetElement<TTuple<FString,BuildPatchServices::FFileManifest>_> *)0x0;
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<FString,BuildPatchServices::FFileManifest>_> *)0x0) {
    ::FString::FString(local_28.Pointer,param_1);
    BuildPatchServices::FFileManifest::FFileManifest
              ((FFileManifest *)((longlong)local_28.Pointer + 0x10),param_2);
    *(undefined4 *)((longlong)local_28.Pointer + 0x70) = 0xffffffff;
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
  bVar2 = TSet<TTuple<FString,BuildPatchServices::FFileManifest>,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FFileManifest,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar4,pTVar8,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar2) {
    TSet<TTuple<FString,BuildPatchServices::FFileManifest>,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FFileManifest,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar4,pTVar8,local_res8[0]);
  }
  return (FFileManifest *)(*(longlong *)&(this->Pairs).Elements + lVar7 * 0x78 + 0x10);
}

// Emplace<FString_const_&,BuildPatchServices::FFileManifest> @ 1432f90a0

FFileManifest * __thiscall
TMapBase<FString,BuildPatchServices::FFileManifest,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FFileManifest,0>_>
::Emplace<FString_const_&,BuildPatchServices::FFileManifest>
          (TMapBase<FString,BuildPatchServices::FFileManifest,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FFileManifest,0>_>
           *this,FString *param_1,FFileManifest *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  TSparseSetElement<TTuple<FString,BuildPatchServices::FFileManifest>_> *pTVar7;
  longlong lVar8;
  int local_res8 [2];
  TPairInitializer<FString_const_&,BuildPatchServices::FFileManifest_&&> local_28;
  FSparseArrayAllocationInfo local_18;
  
  iVar5 = *(int *)&(this->Pairs).Elements.field_0x34;
  local_28.Key = param_1;
  local_28.Value = param_2;
  if (iVar5 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x78,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar5 = iVar5 + -1;
    lVar8 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)((longlong)iVar3 * 0x78 + 4 + lVar8);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x78 + lVar8) = 0xffffffff;
    }
  }
  TSparseArrayBase<120,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<120,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar3);
  pTVar7 = (TSparseSetElement<TTuple<FString,BuildPatchServices::FFileManifest>_> *)0x0;
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<FString,BuildPatchServices::FFileManifest>_> *)0x0) {
    TPairInitializer<FString_const_&,BuildPatchServices::FFileManifest_&&>::
    operator<FString,BuildPatchServices::FFileManifest>_TTuple<FString,BuildPatchServices::FFileManifest>
              (&local_28,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x70) = 0xffffffff;
    pTVar7 = local_18.Pointer;
  }
  local_res8[0] = local_18.Index;
  iVar5 = *(int *)&pTVar7->field_0x8 + -1;
  if (*(int *)&pTVar7->field_0x8 == 0) {
    pwVar6 = L"";
    iVar5 = 0;
  }
  else {
    pwVar6 = *(wchar_t **)pTVar7;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar6);
  bVar2 = TSet<TTuple<FString,BuildPatchServices::FFileManifest>,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FFileManifest,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar4,pTVar7,local_res8,(bool *)0x0);
  lVar8 = (longlong)local_res8[0];
  if (!bVar2) {
    TSet<TTuple<FString,BuildPatchServices::FFileManifest>,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FFileManifest,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar4,pTVar7,local_res8[0]);
  }
  return (FFileManifest *)(*(longlong *)&(this->Pairs).Elements + lVar8 * 0x78 + 0x10);
}

// FindOrAddImpl<FString_const_&> @ 1432fa3d0

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<FString_const_&>
          (TMapBase<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FString *local_res20;
  
  iVar1 = TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,param_1,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x28, lVar2 == 0)) {
    local_res20 = param_2;
    TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
              (&this->Pairs,(uint)local_res8,(TKeyInitializer<FString_const_&> *)(ulonglong)param_1,
               (bool *)&local_res20);
    lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
  }
  return (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(lVar2 + 0x10);
}

// FindOrAddImpl<FString> @ 1432fa450

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<FString>
          (TMapBase<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FString *local_res20;
  
  iVar1 = TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,param_1,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x28, lVar2 == 0)) {
    local_res20 = param_2;
    TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FString_&&>_>
              (&this->Pairs,(uint)local_res8,(TKeyInitializer<FString_&&> *)(ulonglong)param_1,
               (bool *)&local_res20);
    lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
  }
  return (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(lVar2 + 0x10);
}

// FindChecked @ 14331ee60

FChunkInfo * __thiscall
TMapBase<FGuid,BuildPatchServices::FChunkInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo,0>_>
::FindChecked(TMapBase<FGuid,BuildPatchServices::FChunkInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo,0>_>
              *this,FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ulong64 uVar4;
  FChunkInfo *pFVar5;
  longlong lVar6;
  
  uVar4 = CityHash64((char *)param_1,0x10);
  iVar3 = TSet<TTuple<FGuid,BuildPatchServices::FChunkInfo>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,(uint)uVar4,param_1);
  if ((iVar3 != -1) &&
     (lVar6 = (longlong)iVar3 * 0x58 + *(longlong *)&(this->Pairs).Elements, lVar6 != 0)) {
    return (FChunkInfo *)(lVar6 + 0x10);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FChunkInfo *)&DAT_00000010;
  }
  pcVar1 = (code *)swi(3);
  pFVar5 = (FChunkInfo *)(*pcVar1)();
  return pFVar5;
}

// FindChecked @ 14331eef0

FString * __thiscall
TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
FindChecked(TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
            *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FString *pFVar5;
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
  iVar4 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar3,param_1);
  if ((iVar4 == -1) ||
     (lVar8 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar4 * 0x28, lVar8 == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar1)();
      return pFVar5;
    }
  }
  return (FString *)(lVar8 + 0x10);
}

// FindChecked @ 14331ef90

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>
::FindChecked(TMapBase<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>
              *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar5;
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
  iVar4 = TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar3,param_1);
  if ((iVar4 == -1) ||
     (lVar8 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar4 * 0x28, lVar8 == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  return (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(lVar8 + 0x10);
}

