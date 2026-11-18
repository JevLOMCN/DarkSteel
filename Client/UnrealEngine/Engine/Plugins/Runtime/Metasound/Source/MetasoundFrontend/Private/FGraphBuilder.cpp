// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 9

// CreateGraph @ 14ae2b0a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TUniquePtr<Metasound::FFrontendGraph,TDefaultDelete<Metasound::FFrontendGraph>_> __cdecl
Metasound::Frontend::FGraphBuilder::CreateGraph
          (FMetasoundFrontendDocument *param_1,FTopLevelAssetPath *param_2,
          TArrayView<FGuid_const_,int> *param_3)

{
  uint uVar1;
  undefined8 *in_R9;
  undefined1 auStackY_f8 [32];
  TArrayView<FGuid_const_,int> local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [8];
  FName local_90;
  TBitArray<FDefaultBitArrayAllocator> local_88;
  undefined4 local_68;
  undefined4 local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_b8.DataPtr = (FGuid *)*in_R9;
  local_b8._8_8_ = in_R9[1];
  local_88.MaxBits = 0x80;
  local_98._0_4_ = 0;
  local_98._4_4_ = 0;
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  local_88.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_88.NumBits = 0;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  FProxyDataCache::CreateAndCacheProxies
            ((FProxyDataCache *)local_98,(FMetasoundFrontendDocument *)param_2,&local_b8);
  LOCK();
  UNLOCK();
  local_a8 = *in_R9;
  uStack_a0 = in_R9[1];
  local_b8._12_4_ = DocumentIDGeneratorPrivate::GlobalAtomicMetasoundIdCounter._0_4_;
  local_b8.ArrayNum = DocumentIDGeneratorPrivate::GlobalAtomicMetasoundIdCounter._4_4_;
  local_b8.DataPtr = (FGuid *)0x0;
  DocumentIDGeneratorPrivate::GlobalAtomicMetasoundIdCounter =
       (atomic<unsigned___int64>)
       ((longlong)DocumentIDGeneratorPrivate::GlobalAtomicMetasoundIdCounter + 1);
  CreateGraph((FMetasoundFrontendGraphClass *)param_1,
              (TArray<FMetasoundFrontendGraphClass,TSizedDefaultAllocator<32>_> *)(param_2 + 7),
              (TArray<FMetasoundFrontendClass,TSizedDefaultAllocator<32>_> *)
              &param_2[0x16].AssetName,(FProxyDataCache *)&param_2[0x17].AssetName,
              (FTopLevelAssetPath *)local_98,(FGuid *)param_3,&local_b8);
  local_50 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  TSparseArray<TSparseSetElement<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,0,local_90.ComparisonIndex.Value);
  uVar1 = local_90.Number;
  local_90 = (FName)((ulonglong)local_90 & 0xffffffff00000000);
  if (uVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_98,0,(int *)&local_90.Number);
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_88.NumBits = 0;
  if (0x80 < (uint)local_88.MaxBits) {
    local_88.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_88,0);
  }
  if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
  }
  if ((FName)local_98 != (FName)0x0) {
    FMemory::Free((void *)local_98);
  }
  return (TUniquePtr<Metasound::FFrontendGraph,TDefaultDelete<Metasound::FFrontendGraph>_>)
         (FFrontendGraph *)param_1;
}

// CreateGraph @ 14ae2b230

TUniquePtr<Metasound::FFrontendGraph,TDefaultDelete<Metasound::FFrontendGraph>_> __cdecl
Metasound::Frontend::FGraphBuilder::CreateGraph
          (FMetasoundFrontendDocument *param_1,FProxyDataCache *param_2,FTopLevelAssetPath *param_3,
          FGuid *param_4,TArrayView<FGuid_const_,int> *param_5)

{
  TArrayView<FGuid_const_,int> local_18;
  
  local_18.DataPtr = param_5->DataPtr;
  local_18.ArrayNum = param_5->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_5->field_0xc;
  CreateGraph((FMetasoundFrontendGraphClass *)param_1,
              (TArray<FMetasoundFrontendGraphClass,TSizedDefaultAllocator<32>_> *)
              &param_2[1].ProxyCache.field_0x20,
              (TArray<FMetasoundFrontendClass,TSizedDefaultAllocator<32>_> *)
              &param_2[4].ProxyCache.field_0x28,(FProxyDataCache *)&param_2[4].ProxyCache.field_0x38
              ,param_3,param_4,&local_18);
  return (TUniquePtr<Metasound::FFrontendGraph,TDefaultDelete<Metasound::FFrontendGraph>_>)
         (FFrontendGraph *)param_1;
}

// CreateGraph @ 14ae2b2b0

TUniquePtr<Metasound::FFrontendGraph,TDefaultDelete<Metasound::FFrontendGraph>_> __cdecl
Metasound::Frontend::FGraphBuilder::CreateGraph
          (FMetasoundFrontendDocument *param_1,FProxyDataCache *param_2,FString *param_3,
          FGuid *param_4,TArrayView<FGuid_const_,int> *param_5)

{
  int iVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  FName local_res8;
  FName local_res10;
  undefined8 *in_stack_00000030;
  FName local_48;
  FName local_40;
  TArrayView<FGuid_const_,int> local_38;
  FString local_28;
  
  if (param_4->C == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = *(wchar_t **)param_4;
  }
  ::FName::FName(&local_res8,pwVar3);
  local_res10 = local_res8;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  local_40.ComparisonIndex.Value = 0;
  local_40.Number = 0;
  pFVar2 = ::FName::ToString(&local_res10,&local_28);
  local_38.DataPtr = (FGuid *)(pFVar2->Data).AllocatorInstance.Data;
  iVar1 = (pFVar2->Data).ArrayNum;
  local_38.ArrayNum = iVar1 + -1;
  if (iVar1 == 0) {
    local_38.ArrayNum = 0;
  }
  FTopLevelAssetPath::TrySetPath((FTopLevelAssetPath *)&local_48,(TStringView<wchar_t> *)&local_38);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)*in_stack_00000030;
  local_28.Data._8_8_ = in_stack_00000030[1];
  local_38.DataPtr = param_5->DataPtr;
  local_38.ArrayNum = param_5->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_5->field_0xc;
  CreateGraph((FMetasoundFrontendGraphClass *)param_1,
              (TArray<FMetasoundFrontendGraphClass,TSizedDefaultAllocator<32>_> *)
              &param_2[1].ProxyCache.field_0x20,
              (TArray<FMetasoundFrontendClass,TSizedDefaultAllocator<32>_> *)
              &param_2[4].ProxyCache.field_0x28,(FProxyDataCache *)&param_2[4].ProxyCache.field_0x38
              ,(FTopLevelAssetPath *)param_3,(FGuid *)&local_48,&local_38);
  return (TUniquePtr<Metasound::FFrontendGraph,TDefaultDelete<Metasound::FFrontendGraph>_>)
         (FFrontendGraph *)param_1;
}

// CreateGraph @ 14ae2b3d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TUniquePtr<Metasound::FFrontendGraph,TDefaultDelete<Metasound::FFrontendGraph>_> __cdecl
Metasound::Frontend::FGraphBuilder::CreateGraph
          (FMetasoundFrontendDocument *param_1,FString *param_2,
          TArrayView<FGuid_const_,int> *param_3)

{
  int iVar1;
  uint uVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  undefined8 *in_R9;
  undefined1 auStackY_118 [32];
  TArrayView<FGuid_const_,int> local_d8;
  FName local_c8;
  FName local_c0;
  TArrayView<FGuid_const_,int> local_b8;
  TStringView<wchar_t> local_a8;
  FName local_98 [2];
  undefined1 local_88 [8];
  FName local_80;
  TBitArray<FDefaultBitArrayAllocator> local_78;
  undefined4 local_58;
  undefined4 local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  if (param_3->ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)param_3->DataPtr;
  }
  ::FName::FName(local_98,pwVar4);
  local_d8.DataPtr = (FGuid *)local_98[0];
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  local_c0.ComparisonIndex.Value = 0;
  local_c0.Number = 0;
  pFVar3 = ::FName::ToString((FName *)&local_d8,(FString *)&local_b8);
  local_a8.DataPtr = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  iVar1 = (pFVar3->Data).ArrayNum;
  local_a8.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_a8.Size = 0;
  }
  FTopLevelAssetPath::TrySetPath((FTopLevelAssetPath *)&local_c8,&local_a8);
  if (local_b8.DataPtr != (FGuid *)0x0) {
    FMemory::Free(local_b8.DataPtr);
  }
  local_b8.DataPtr = (FGuid *)*in_R9;
  local_b8._8_8_ = in_R9[1];
  local_88._0_4_ = 0;
  local_88._4_4_ = 0;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  local_78.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_78.NumBits = 0;
  local_78.MaxBits = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  FProxyDataCache::CreateAndCacheProxies
            ((FProxyDataCache *)local_88,(FMetasoundFrontendDocument *)param_2,&local_b8);
  LOCK();
  UNLOCK();
  local_b8.DataPtr = (FGuid *)*in_R9;
  local_b8._8_8_ = in_R9[1];
  local_d8._12_4_ = DocumentIDGeneratorPrivate::GlobalAtomicMetasoundIdCounter._0_4_;
  local_d8.ArrayNum = DocumentIDGeneratorPrivate::GlobalAtomicMetasoundIdCounter._4_4_;
  local_d8.DataPtr = (FGuid *)0x0;
  DocumentIDGeneratorPrivate::GlobalAtomicMetasoundIdCounter =
       (atomic<unsigned___int64>)
       ((longlong)DocumentIDGeneratorPrivate::GlobalAtomicMetasoundIdCounter + 1);
  CreateGraph((FMetasoundFrontendGraphClass *)param_1,
              (TArray<FMetasoundFrontendGraphClass,TSizedDefaultAllocator<32>_> *)(param_2 + 7),
              (TArray<FMetasoundFrontendClass,TSizedDefaultAllocator<32>_> *)
              &param_2[0x16].Data.ArrayNum,(FProxyDataCache *)&param_2[0x17].Data.ArrayNum,
              (FTopLevelAssetPath *)local_88,(FGuid *)&local_c8,&local_d8);
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_88,0,local_80.ComparisonIndex.Value);
  uVar2 = local_80.Number;
  local_80 = (FName)((ulonglong)local_80 & 0xffffffff00000000);
  if (uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_88,0,(int *)&local_80.Number);
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  local_78.NumBits = 0;
  if (0x80 < (uint)local_78.MaxBits) {
    local_78.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_78,0);
  }
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
  }
  if ((FName)local_88 != (FName)0x0) {
    FMemory::Free((void *)local_88);
  }
  return (TUniquePtr<Metasound::FFrontendGraph,TDefaultDelete<Metasound::FFrontendGraph>_>)
         (FFrontendGraph *)param_1;
}

// CreateGraph @ 14ae2b5d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TUniquePtr<Metasound::FFrontendGraph,TDefaultDelete<Metasound::FFrontendGraph>_> __cdecl
Metasound::Frontend::FGraphBuilder::CreateGraph
          (FMetasoundFrontendGraphClass *param_1,
          TArray<FMetasoundFrontendGraphClass,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FMetasoundFrontendClass,TSizedDefaultAllocator<32>_> *param_3,
          FTopLevelAssetPath *param_4,TArrayView<FGuid_const_,int> *param_5)

{
  int iVar1;
  uint uVar2;
  FMetasoundFrontendGraphClass *pFVar3;
  FName FVar4;
  FMetasoundFrontendGraphClass *pFVar5;
  FName FVar6;
  undefined8 *in_stack_00000030;
  undefined1 auStackY_128 [32];
  undefined1 local_e8 [16];
  TArrayView<FGuid_const_,int> local_d8;
  FGuid *local_c8;
  TArray<FMetasoundFrontendGraphClass,TSizedDefaultAllocator<32>_> *local_c0;
  FGuid *local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [8];
  FName local_a0;
  TBitArray<FDefaultBitArrayAllocator> local_98;
  undefined4 local_78;
  undefined4 local_74;
  void *local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_c8 = (FGuid *)param_5;
  local_d8.DataPtr = (FGuid *)*in_stack_00000030;
  local_d8._8_8_ = in_stack_00000030[1];
  local_a8._0_4_ = 0;
  local_a8._4_4_ = 0;
  local_a0.ComparisonIndex.Value = 0;
  local_a0.Number = 0;
  local_98.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_98.NumBits = 0;
  local_74 = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_98.MaxBits = 0x80;
  local_78 = 0xffffffff;
  local_c0 = param_2;
  FProxyDataCache::CreateAndCacheProxies
            ((FProxyDataCache *)local_a8,(FMetasoundFrontendGraphClass *)param_2,&local_d8);
  iVar1 = param_3->ArrayNum;
  pFVar3 = (FMetasoundFrontendGraphClass *)(param_3->AllocatorInstance).Data;
  pFVar5 = pFVar3 + iVar1;
  while( true ) {
    if (param_3->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FMetasoundFrontendGraphClass_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_e8);
    }
    if (pFVar3 == pFVar5) break;
    local_d8.DataPtr = (FGuid *)*in_stack_00000030;
    local_d8._8_8_ = in_stack_00000030[1];
    FProxyDataCache::CreateAndCacheProxies((FProxyDataCache *)local_a8,pFVar3,&local_d8);
    pFVar3 = pFVar3 + 1;
  }
  uVar2 = (param_4->AssetName).ComparisonIndex.Value;
  FVar4 = param_4->PackageName;
  FVar6 = (FName)((longlong)FVar4 + (longlong)(int)uVar2 * 0x90);
  while( true ) {
    if ((param_4->AssetName).ComparisonIndex.Value != uVar2) {
      `TCheckedPointerIterator<FMetasoundFrontendClass_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_e8);
    }
    local_b8 = (FGuid *)*in_stack_00000030;
    uStack_b0 = in_stack_00000030[1];
    if (FVar4 == FVar6) break;
    local_d8.DataPtr = local_b8;
    local_d8._8_8_ = uStack_b0;
    FProxyDataCache::CreateAndCacheProxies
              ((FProxyDataCache *)local_a8,(FMetasoundFrontendClass *)FVar4,&local_d8);
    FVar4 = (FName)((longlong)FVar4 + 0x90);
  }
  LOCK();
  UNLOCK();
  local_d8._12_4_ = DocumentIDGeneratorPrivate::GlobalAtomicMetasoundIdCounter._0_4_;
  local_d8.ArrayNum = DocumentIDGeneratorPrivate::GlobalAtomicMetasoundIdCounter._4_4_;
  local_d8.DataPtr = (FGuid *)0x0;
  DocumentIDGeneratorPrivate::GlobalAtomicMetasoundIdCounter =
       (atomic<unsigned___int64>)
       ((longlong)DocumentIDGeneratorPrivate::GlobalAtomicMetasoundIdCounter + 1);
  CreateGraph(param_1,local_c0,param_3,(FProxyDataCache *)param_4,(FTopLevelAssetPath *)local_a8,
              local_c8,&local_d8);
  local_60 = 0;
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  TSparseArray<TSparseSetElement<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_a8,0,local_a0.ComparisonIndex.Value);
  uVar2 = local_a0.Number;
  local_a0 = (FName)((ulonglong)local_a0 & 0xffffffff00000000);
  if (uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_a8,0,(int *)&local_a0.Number);
  }
  local_78 = 0xffffffff;
  local_74 = 0;
  local_98.NumBits = 0;
  if (0x80 < (uint)local_98.MaxBits) {
    local_98.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_98,0);
  }
  if (local_98.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_98.AllocatorInstance.SecondaryData);
  }
  if ((FName)local_a8 != (FName)0x0) {
    FMemory::Free((void *)local_a8);
  }
  return (TUniquePtr<Metasound::FFrontendGraph,TDefaultDelete<Metasound::FFrontendGraph>_>)
         (FFrontendGraph *)param_1;
}

// CreateGraph @ 14ae2b800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::FFrontendGraph,TDefaultDelete<Metasound::FFrontendGraph>_> __cdecl
Metasound::Frontend::FGraphBuilder::CreateGraph
          (FMetasoundFrontendGraphClass *param_1,
          TArray<FMetasoundFrontendGraphClass,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FMetasoundFrontendClass,TSizedDefaultAllocator<32>_> *param_3,
          FProxyDataCache *param_4,FTopLevelAssetPath *param_5,FGuid *param_6,
          TArrayView<FGuid_const_,int> *param_7)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  TUniquePtr<Metasound::FFrontendGraph,TDefaultDelete<Metasound::FFrontendGraph>_> TVar6;
  TSparseArray<TSparseSetElement<TTuple<FMetasoundFrontendGraphClass_const_*,FMetasoundFrontendGraphClass_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
  FSubgraphDependencyLookup *pFVar7;
  ulonglong uVar8;
  TSharedPtr<Metasound::IGraph_const_,1> *pTVar9;
  FScriptContainerElement *pFVar10;
  FFrontendGraph *pFVar11;
  FGuid *pFVar12;
  TSharedPtr<Metasound::IGraph_const_,1> *pTVar13;
  FScriptContainerElement *pFVar14;
  FGuid *pFVar15;
  ForAnyElementType FVar16;
  undefined8 *in_stack_00000040;
  undefined1 auStack_308 [32];
  TArrayView<FGuid_const_,int> *local_2e8;
  FScriptContainerElement *local_2e0;
  longlong local_2d8;
  longlong local_2d0;
  undefined8 local_2c8;
  undefined1 local_2b8;
  undefined1 local_2b7;
  undefined1 local_2b6 [6];
  TArray<FMetasoundFrontendGraphClass_const_*,TSizedDefaultAllocator<32>_> local_2b0;
  undefined1 local_2a0 [8];
  undefined1 local_298 [16];
  longlong local_288;
  TReferenceControllerBase<1> *local_280;
  undefined1 local_278 [8];
  TPairInitializer<FGuid_const_&,TSharedPtr<Metasound::IGraph_const_,1>_const_&> local_270;
  FScriptContainerElement *local_260;
  undefined1 local_258 [32];
  FSharedReferencer<1> *local_238;
  TSharedPtr<Metasound::IGraph_const_,1> **local_230;
  FScriptContainerElement *local_228;
  FScriptContainerElement **local_220;
  FScriptContainerElement *local_218;
  uint uStack_210;
  undefined4 uStack_20c;
  TArrayView<FGuid_const_,int> *local_208;
  longlong *local_200;
  FGuid *local_1f8;
  IDataTypeRegistry *local_1f0;
  FTopLevelAssetPath *local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  TArrayView<FMetasoundFrontendGraphClass_const_*,int> local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  undefined1 local_188 [80];
  undefined1 local_138 [80];
  undefined1 local_e8 [80];
  TSet<TTuple<FGuid,TSharedPtr<Metasound::IGraph_const_,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<Metasound::IGraph_const_,1>,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_308;
  local_258._8_8_ = param_6;
  local_258._16_8_ = param_7;
  local_1f8 = param_6;
  local_298._8_8_ = param_1;
  local_258._24_8_ = param_2;
  local_1f0 = IDataTypeRegistry::Get();
  local_1e0 = *in_stack_00000040;
  uStack_1d8 = in_stack_00000040[1];
  iVar1 = *(int *)&(param_4->ProxyCache).field_0x8;
  pTVar9 = *(TSharedPtr<Metasound::IGraph_const_,1> **)&param_4->ProxyCache;
  local_1e8 = param_5;
  local_e8._0_8_ = 0;
  pTVar13 = pTVar9 + (longlong)iVar1 * 9;
  local_e8._8_8_ = 0;
  local_e8._32_8_ = 0;
  local_e8._40_4_ = 0;
  local_e8._44_4_ = 0x80;
  local_e8._48_4_ = 0xffffffff;
  local_e8._52_4_ = 0;
  local_e8._64_8_ = (ForElementType<FSetElementId>)0x0;
  local_e8._72_4_ = 0;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  while( true ) {
    if (*(int *)&(param_4->ProxyCache).field_0x8 != iVar1) {
      local_2b8 = 0;
      `TCheckedPointerIterator<FMetasoundFrontendClass_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_2b8);
    }
    if (pTVar9 == pTVar13) break;
    local_238 = &pTVar9->SharedReferenceCount;
    local_230 = &local_270.Value;
    local_270.Value = pTVar9;
    TSet<TTuple<FGuid,FMetasoundFrontendClass_const_*>,TDefaultMapHashableKeyFuncs<FGuid,FMetasoundFrontendClass_const_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGuid_const_&,FMetasoundFrontendClass_const_*_&&>_>
              ((TSet<TTuple<FGuid,FMetasoundFrontendClass_const_*>,TDefaultMapHashableKeyFuncs<FGuid,FMetasoundFrontendClass_const_*,0>,FDefaultSetAllocator>
                *)local_e8,
               (TPairInitializer<FGuid_const_&,FMetasoundFrontendClass_const_*_&&> *)local_278,
               (bool *)&local_238);
    pTVar9 = pTVar9 + 9;
  }
  iVar1 = param_3->ArrayNum;
  pFVar10 = (param_3->AllocatorInstance).Data;
  pFVar14 = pFVar10 + (longlong)iVar1 * 0xf8;
  while( true ) {
    if (param_3->ArrayNum != iVar1) {
      local_2b7 = 0;
      `TCheckedPointerIterator<FMetasoundFrontendGraphClass_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_2b7);
    }
    if (pFVar10 == pFVar14) break;
    local_228 = pFVar10 + 8;
    local_220 = &local_260;
    local_260 = pFVar10;
    TSet<TTuple<FGuid,FMetasoundFrontendClass_const_*>,TDefaultMapHashableKeyFuncs<FGuid,FMetasoundFrontendClass_const_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGuid_const_&,FMetasoundFrontendClass_const_*_&&>_>
              ((TSet<TTuple<FGuid,FMetasoundFrontendClass_const_*>,TDefaultMapHashableKeyFuncs<FGuid,FMetasoundFrontendClass_const_*,0>,FDefaultSetAllocator>
                *)local_e8,
               (TPairInitializer<FGuid_const_&,FMetasoundFrontendClass_const_*_&&> *)(local_278 + 4)
               ,(bool *)&local_228);
    pFVar10 = pFVar10 + 0xf8;
  }
  iVar1 = param_3->ArrayNum;
  pFVar15 = (FGuid *)(param_3->AllocatorInstance).Data;
  local_2b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar12 = (FGuid *)((longlong)pFVar15 + (longlong)iVar1 * 0xf8);
  local_2b0.ArrayNum = 0;
  local_2b0.ArrayMax = 0;
  while( true ) {
    if (param_3->ArrayNum != iVar1) {
      local_2b6[0] = 0;
      `TCheckedPointerIterator<FMetasoundFrontendGraphClass_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_2b6);
    }
    iVar4 = local_2b0.ArrayNum;
    if (pFVar15 == pFVar12) break;
    local_298._0_8_ = pFVar15;
    if ((local_2b0.AllocatorInstance.Data <= (FScriptContainerElement *)local_298) &&
       ((FScriptContainerElement *)local_298 <
        local_2b0.AllocatorInstance.Data + (longlong)local_2b0.ArrayMax * 8)) {
      local_2c8 = 8;
      local_2d0 = (longlong)local_2b0.ArrayNum;
      local_2e8 = (TArrayView<FGuid_const_,int> *)local_298;
      local_2e0 = local_2b0.AllocatorInstance.Data;
      local_2d8 = (longlong)local_2b0.ArrayMax;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        TVar6.Ptr = (FFrontendGraph *)(*pcVar3)();
        return (TUniquePtr<Metasound::FFrontendGraph,TDefaultDelete<Metasound::FFrontendGraph>_>)
               TVar6.Ptr;
      }
    }
    if (local_2b0.ArrayNum == local_2b0.ArrayMax) {
      local_2b0.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&local_2b0.AllocatorInstance,&local_2b0.ArrayMax);
    }
    pFVar15 = (FGuid *)&pFVar15[0xf].C;
    *(undefined8 *)(local_2b0.AllocatorInstance.Data + (longlong)local_2b0.ArrayNum * 8) =
         local_298._0_8_;
    local_2b0.ArrayNum = local_2b0.ArrayNum + 1;
  }
  local_218 = local_2b0.AllocatorInstance.Data;
  if ((local_2b0.ArrayNum < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    TVar6.Ptr = (FFrontendGraph *)(*pcVar3)();
    return (TUniquePtr<Metasound::FFrontendGraph,TDefaultDelete<Metasound::FFrontendGraph>_>)
           TVar6.Ptr;
  }
  local_1c8._12_4_ = uStack_20c;
  local_1c8.ArrayNum = iVar4;
  local_1c8.DataPtr = (FMetasoundFrontendGraphClass **)local_218;
  uStack_210 = iVar4;
  this = (TSparseArray<TSparseSetElement<TTuple<FMetasoundFrontendGraphClass_const_*,FMetasoundFrontendGraphClass_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *)`Metasound::Frontend::GraphBuilderPrivate::SortSubgraphDependencies'::__l2::
            FSubgraphDependencyLookup::FSubgraphDependencyLookup(local_188,&local_1c8);
  pFVar7 = `Metasound::Frontend::GraphBuilderPrivate::SortSubgraphDependencies'::__l2::
           FSubgraphDependencyLookup::FSubgraphDependencyLookup
                     (local_138,(FSubgraphDependencyLookup *)this);
  bVar5 = Algo::
          KahnTopologicalSort<TArray<FMetasoundFrontendGraphClass_const_*,TSizedDefaultAllocator<32>_>_&,_Metasound::Frontend::GraphBuilderPrivate::SortSubgraphDependencies_::__l2::FSubgraphDependencyLookup>
                    (&local_2b0,pFVar7,None);
  *(undefined4 *)&this[1].field_0x10 = 0;
  if (*(void **)&this[1].field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this[1].field_0x8);
  }
  TSparseArray<TSparseSetElement<TTuple<FMetasoundFrontendGraphClass_const_*,FMetasoundFrontendGraphClass_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMetasoundFrontendGraphClass_const_*,FMetasoundFrontendGraphClass_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (this);
  iVar1 = local_2b0.ArrayNum;
  if (bVar5) {
    uVar8 = (ulonglong)local_2b0.ArrayNum;
    pFVar10 = local_2b0.AllocatorInstance.Data + uVar8 * 8;
    FVar16.Data = local_2b0.AllocatorInstance.Data;
    while( true ) {
      if ((uint)uVar8 != iVar1) {
        `TCheckedPointerIterator<FMetasoundFrontendGraphClass_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_2a0);
      }
      pFVar11 = (FFrontendGraph *)local_298._8_8_;
      if (FVar16.Data == pFVar10) break;
      pFVar15 = *(FGuid **)FVar16.Data;
      local_2e8 = (TArrayView<FGuid_const_,int> *)&pFVar15->C;
      TVar6 = GraphBuilderPrivate::CreateGraphInternal
                        ((FBuildContext *)local_258,(FBuildDocumentContext *)&local_1f8,
                         (FMetasoundFrontendGraphClass *)local_e8,pFVar15);
      lVar2 = (TVar6.Ptr)->_padding_;
      (TVar6.Ptr)->_padding_ = 0;
      local_288 = lVar2;
      local_280 = ::operator_new(0x18);
      if (local_280 != (TReferenceControllerBase<1> *)0x0) {
        local_280->SharedReferenceCount = (atomic<int>)0x1;
        local_280->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_VFFrontendGraph_Metasound__U__DefaultDeleter_VFFrontendGraph_Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
        ;
        local_280->WeakReferenceCount = (atomic<int>)0x1;
        local_280[1]._padding_ = lVar2;
      }
      if ((FTopLevelAssetPath *)local_258._0_8_ != (FTopLevelAssetPath *)0x0) {
        (**(code **)*(FName *)local_258._0_8_)(local_258._0_8_,1);
      }
      if (local_288 == 0) {
        if (2 < (byte)LogMetaSound._0_1_) {
          FTopLevelAssetPath::ToString((FTopLevelAssetPath *)local_258._8_8_,&local_198);
          FMetasoundFrontendClassName::ToString
                    ((FMetasoundFrontendClassName *)&pFVar15[1].C,&local_1a8);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
          }
          if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_198.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        local_200 = &local_288;
        local_208 = (TArrayView<FGuid_const_,int> *)&pFVar15->C;
        TSet<TTuple<FGuid,TSharedPtr<Metasound::IGraph_const_,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<Metasound::IGraph_const_,1>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FGuid_const_&,TSharedPtr<Metasound::IGraph_const_,1>_const_&>_>
                  ((TSet<TTuple<FGuid,TSharedPtr<Metasound::IGraph_const_,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<Metasound::IGraph_const_,1>,0>,FDefaultSetAllocator>
                    *)(local_e8 + 0x50),&local_270,(bool *)&local_208);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_280)
      ;
      uVar8 = (ulonglong)(uint)local_2b0.ArrayNum;
      FVar16.Data = FVar16.Data + 8;
    }
    local_2e8 = (TArrayView<FGuid_const_,int> *)local_258._16_8_;
    GraphBuilderPrivate::CreateGraphInternal
              ((FBuildContext *)local_298._8_8_,(FBuildDocumentContext *)&local_1f8,
               (FMetasoundFrontendGraphClass *)local_e8,(FGuid *)local_258._24_8_);
    if (local_2b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b0.AllocatorInstance.Data);
    }
    local_98.HashSize = 0;
    if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FGuid,TSharedPtr<Metasound::IGraph_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FGuid,TSharedPtr<Metasound::IGraph_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FGuid,TSharedPtr<Metasound::IGraph_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_e8 + 0x50));
  }
  else {
    if ((1 < (byte)LogMetaSound._0_1_) &&
       (UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound),
       1 < (byte)LogMetaSound._0_1_)) {
      FTopLevelAssetPath::ToString((FTopLevelAssetPath *)param_6,&local_1b8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
      }
    }
    pFVar11 = (FFrontendGraph *)local_298._8_8_;
    *(longlong *)local_298._8_8_ = 0;
    if (local_2b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b0.AllocatorInstance.Data);
    }
    local_98.HashSize = 0;
    if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FGuid,TSharedPtr<Metasound::IGraph_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FGuid,TSharedPtr<Metasound::IGraph_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FGuid,TSharedPtr<Metasound::IGraph_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_e8 + 0x50));
  }
  local_e8._72_4_ = 0;
  if ((ForElementType<FSetElementId>)local_e8._64_8_ != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_e8._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FMetasoundFrontendClass_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FMetasoundFrontendClass_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FMetasoundFrontendClass_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_e8);
  return (TUniquePtr<Metasound::FFrontendGraph,TDefaultDelete<Metasound::FFrontendGraph>_>)pFVar11;
}

// CreateGraph @ 14ae2be10

TUniquePtr<Metasound::FFrontendGraph,TDefaultDelete<Metasound::FFrontendGraph>_> __cdecl
Metasound::Frontend::FGraphBuilder::CreateGraph
          (FMetasoundFrontendGraphClass *param_1,
          TArray<FMetasoundFrontendGraphClass,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FMetasoundFrontendClass,TSizedDefaultAllocator<32>_> *param_3,
          FProxyDataCache *param_4,FString *param_5,FGuid *param_6,
          TArrayView<FGuid_const_,int> *param_7)

{
  int iVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  FName local_res8;
  undefined8 *in_stack_00000040;
  FName local_48;
  FName local_40;
  TArrayView<FGuid_const_,int> local_38;
  FString local_28;
  
  if (param_6->C == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = *(wchar_t **)param_6;
  }
  ::FName::FName((FName *)&param_6,pwVar3);
  local_res8 = (FName)param_6;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  local_40.ComparisonIndex.Value = 0;
  local_40.Number = 0;
  pFVar2 = ::FName::ToString(&local_res8,&local_28);
  local_38.DataPtr = (FGuid *)(pFVar2->Data).AllocatorInstance.Data;
  iVar1 = (pFVar2->Data).ArrayNum;
  local_38.ArrayNum = iVar1 + -1;
  if (iVar1 == 0) {
    local_38.ArrayNum = 0;
  }
  FTopLevelAssetPath::TrySetPath((FTopLevelAssetPath *)&local_48,(TStringView<wchar_t> *)&local_38);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)*in_stack_00000040;
  local_28.Data._8_8_ = in_stack_00000040[1];
  local_38.DataPtr = param_7->DataPtr;
  local_38.ArrayNum = param_7->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_7->field_0xc;
  CreateGraph(param_1,param_2,param_3,param_4,(FTopLevelAssetPath *)param_5,(FGuid *)&local_48,
              &local_38);
  return (TUniquePtr<Metasound::FFrontendGraph,TDefaultDelete<Metasound::FFrontendGraph>_>)
         (FFrontendGraph *)param_1;
}

// CreateGraph @ 14ae2bf40

TUniquePtr<Metasound::FFrontendGraph,TDefaultDelete<Metasound::FFrontendGraph>_> __cdecl
Metasound::Frontend::FGraphBuilder::CreateGraph
          (FMetasoundFrontendGraphClass *param_1,
          TArray<FMetasoundFrontendGraphClass,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FMetasoundFrontendClass,TSizedDefaultAllocator<32>_> *param_3,FString *param_4,
          TArrayView<FGuid_const_,int> *param_5)

{
  int iVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  FName local_res8;
  undefined8 *in_stack_00000030;
  undefined1 local_48 [16];
  TStringView<wchar_t> local_38;
  FString local_28;
  
  if (param_5->ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)param_5->DataPtr;
  }
  ::FName::FName((FName *)&param_5,pwVar3);
  local_res8 = (FName)param_5;
  local_48._0_4_ = 0;
  local_48._4_4_ = 0;
  local_48._8_4_ = 0;
  local_48._12_4_ = 0;
  pFVar2 = ::FName::ToString(&local_res8,&local_28);
  local_38.DataPtr = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  iVar1 = (pFVar2->Data).ArrayNum;
  local_38.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_38.Size = 0;
  }
  FTopLevelAssetPath::TrySetPath((FTopLevelAssetPath *)local_48,&local_38);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)*in_stack_00000030;
  local_28.Data._8_8_ = in_stack_00000030[1];
  CreateGraph(param_1,param_2,param_3,(FTopLevelAssetPath *)param_4,
              (TArrayView<FGuid_const_,int> *)local_48);
  return (TUniquePtr<Metasound::FFrontendGraph,TDefaultDelete<Metasound::FFrontendGraph>_>)
         (FFrontendGraph *)param_1;
}

// CreateNode @ 14ae2d540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __cdecl
Metasound::Frontend::FGraphBuilder::CreateNode(FCreateNodeParams *param_1)

{
  int *piVar1;
  TSet<TTuple<FGuid,TSharedPtr<Metasound::IGraph_const_,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<Metasound::IGraph_const_,1>,0>,FDefaultSetAllocator>
  *this;
  undefined4 *puVar2;
  longlong lVar3;
  FMetasoundFrontendClass *pFVar4;
  FMetasoundFrontendNode *pFVar5;
  code *pcVar6;
  bool bVar7;
  EMetasoundFrontendClassType EVar8;
  int iVar9;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar10;
  FMetasoundFrontendClassInput *pFVar11;
  FMetasoundFrontendClassInterface *pFVar12;
  ulong64 uVar13;
  FGraphNode *this_00;
  FGraphNode *pFVar14;
  FCreateNodeParams *pFVar15;
  INodeClassRegistry *pIVar16;
  FNodeData *pFVar17;
  longlong *in_RDX;
  FScriptContainerElement *pFVar18;
  FGraphNode *pFVar19;
  FScriptContainerElement *pFVar20;
  undefined1 auStackY_428 [32];
  undefined1 local_3e8 [16];
  FMetasoundFrontendGraph *local_3d8;
  undefined1 local_3d0 [16];
  undefined1 local_3c0 [16];
  FString local_3b0;
  FString local_3a0;
  FString local_390;
  FString local_380;
  FString local_370;
  undefined1 local_360 [8];
  undefined1 local_358 [16];
  FGuid *local_348;
  FGuid *local_340;
  FName FStack_338;
  undefined1 local_330 [32];
  TSharedRef<Metasound::IGraph_const_,1> local_310;
  FString local_300;
  FString local_2f0;
  FString local_2e0;
  FString local_2d0;
  FString local_2c0;
  FString local_2b0;
  FString local_2a0;
  FString local_290;
  FString local_280;
  FString local_270;
  FString local_260;
  FString local_250;
  FString local_240;
  FString local_230;
  FString local_220;
  undefined1 local_210 [48];
  FNodeData local_1e0;
  FNodeData local_168;
  FNodeData local_f0;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 local_60 [16];
  byte local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_428;
  pFVar14 = (FGraphNode *)0x0;
  if (((in_RDX[4] == 0) && (bVar7 = IsInGameThread(), !bVar7)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InParams.ProxyDataCache != nullptr || IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphBuilder.cpp"
                         ,0x32f,
                         L"An FProxyDataCache must be used if creating nodes on a thread other than the game thread"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    TVar10.Ptr = (INode *)(*pcVar6)();
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar10.Ptr;
  }
  param_1->FrontendNode = (FMetasoundFrontendNode *)0x0;
  pFVar11 = (FMetasoundFrontendClassInput *)
            FMetasoundFrontendClass::GetInterfaceForNode
                      ((FMetasoundFrontendClass *)in_RDX[1],(FMetasoundFrontendNode *)*in_RDX);
  if ((int)pFVar11->_padding_ == *(int *)(*in_RDX + 0x30)) {
    if ((int)pFVar11->_padding_ == *(int *)(*in_RDX + 0x40)) {
      local_358._0_8_ = in_RDX[9];
      local_358._8_8_ = in_RDX[5];
      if ((IDataTypeRegistry *)local_358._8_8_ == (IDataTypeRegistry *)0x0) {
        local_358._8_8_ = IDataTypeRegistry::Get();
      }
      local_340 = (FGuid *)in_RDX[7];
      FStack_338 = *(FName *)(in_RDX + 8);
      local_348 = (FGuid *)in_RDX[4];
      EVar8 = FMetasoundFrontendClassMetadata::GetType
                        ((FMetasoundFrontendClassMetadata *)(in_RDX[1] + 0x18));
      switch(EVar8) {
      default:
        pFVar4 = (FMetasoundFrontendClass *)in_RDX[1];
        pFVar5 = (FMetasoundFrontendNode *)*in_RDX;
        if (((((pFVar5->ClassID).D != (pFVar4->ID).D || (pFVar5->ClassID).C != (pFVar4->ID).C) ||
             (pFVar5->ClassID).B != (pFVar4->ID).B) || (pFVar5->ClassID).A != (pFVar4->ID).A) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InNode.ClassID == InClass.ID",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphBuilder.cpp"
                               ,0x20b,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          TVar10.Ptr = (INode *)(*pcVar6)();
          return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar10.Ptr;
        }
        if ((((int)pFVar11->_padding_ != (pFVar5->Interface).Inputs.ArrayNum) ||
            ((int)pFVar11->_padding_ != (pFVar5->Interface).Outputs.ArrayNum)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InterfacesHaveEqualSize(InClassInterface, InNode.Interface)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphBuilder.cpp"
                               ,0x20c,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          TVar10.Ptr = (INode *)(*pcVar6)();
          return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar10.Ptr;
        }
        FNodeClassRegistryKey::FNodeClassRegistryKey
                  ((FNodeClassRegistryKey *)(local_210 + 8),&pFVar4->Metadata);
        pIVar16 = INodeClassRegistry::Get();
        pcVar6 = *(code **)((longlong)*pIVar16 + 0xc0);
        pFVar17 = GraphBuilderPrivate::CreateNodeData
                            (&local_f0,(FBuildContext *)local_358,pFVar5,pFVar4,
                             (FMetasoundFrontendClassInterface *)pFVar11,
                             (FMetasoundFrontendClassInput *)0x0,
                             (FMetasoundFrontendClassOutput *)0x0);
        (*pcVar6)(pIVar16,local_3e8,local_210 + 8,pFVar17);
        if (param_1 != (FCreateNodeParams *)local_3e8) {
          pFVar5 = param_1->FrontendNode;
          param_1->FrontendNode = (FMetasoundFrontendNode *)local_3e8._0_8_;
          local_3e8._0_8_ = (FMetasoundFrontendNode *)0x0;
          if (pFVar5 != (FMetasoundFrontendNode *)0x0) {
            (*(code *)**(undefined8 **)&pFVar5->ID)(pFVar5,1);
          }
        }
        if ((FMetasoundFrontendNode *)local_3e8._0_8_ != (FMetasoundFrontendNode *)0x0) {
          (*(code *)**(undefined8 **)(FGuid *)local_3e8._0_8_)(local_3e8._0_8_,1);
        }
        break;
      case Graph:
        this = (TSet<TTuple<FGuid,TSharedPtr<Metasound::IGraph_const_,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<Metasound::IGraph_const_,1>,0>,FDefaultSetAllocator>
                *)in_RDX[6];
        if (this == (TSet<TTuple<FGuid,TSharedPtr<Metasound::IGraph_const_,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<Metasound::IGraph_const_,1>,0>,FDefaultSetAllocator>
                     *)0x0) {
          if (1 < (byte)LogMetaSound._0_1_) {
            local_390.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_390.Data.ArrayNum = 0;
            local_390.Data.ArrayMax = 0;
            FGuid::AppendString((FGuid *)(*in_RDX + 0x10),&local_390,Digits);
            ::FName::ToString((FName *)(*in_RDX + 0x20),&local_250);
            local_3a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_3a0.Data.ArrayNum = 0;
            local_3a0.Data.ArrayMax = 0;
            FGuid::AppendString((FGuid *)*in_RDX,&local_3a0,Digits);
            FTopLevelAssetPath::ToString((FTopLevelAssetPath *)in_RDX[9],&local_260);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
            if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_260.Data.AllocatorInstance.Data);
            }
            if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3a0.Data.AllocatorInstance.Data);
            }
            if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_250.Data.AllocatorInstance.Data);
            }
            if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_390.Data.AllocatorInstance.Data);
            }
          }
        }
        else {
          lVar3 = *in_RDX;
          uVar13 = CityHash64((char *)(lVar3 + 0x10),0x10);
          iVar9 = TSet<TTuple<FGuid,TSharedPtr<Metasound::IGraph_const_,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<Metasound::IGraph_const_,1>,0>,FDefaultSetAllocator>
                  ::FindIndexByHash<FGuid>(this,(uint)uVar13,(FGuid *)(lVar3 + 0x10));
          pFVar19 = pFVar14;
          if ((iVar9 != -1) &&
             (lVar3 = *(longlong *)&this->Elements + (longlong)iVar9 * 0x28, lVar3 != 0)) {
            local_330._8_8_ = *(longlong *)(lVar3 + 0x10);
            pFVar19 = *(FGraphNode **)(lVar3 + 0x18);
            if (pFVar19 != (FGraphNode *)0x0) {
              LOCK();
              (pFVar19->NodeData).Name.ComparisonIndex.Value =
                   (pFVar19->NodeData).Name.ComparisonIndex.Value + 1;
              UNLOCK();
            }
            if ((IDataTypeRegistry *)local_330._8_8_ != (IDataTypeRegistry *)0x0) {
              pFVar4 = (FMetasoundFrontendClass *)in_RDX[1];
              pFVar5 = (FMetasoundFrontendNode *)*in_RDX;
              if (pFVar19 != (FGraphNode *)0x0) {
                LOCK();
                (pFVar19->NodeData).Name.ComparisonIndex.Value =
                     (pFVar19->NodeData).Name.ComparisonIndex.Value + 1;
                UNLOCK();
              }
              if (((((pFVar5->ClassID).D != (pFVar4->ID).D || (pFVar5->ClassID).C != (pFVar4->ID).C)
                   || (pFVar5->ClassID).B != (pFVar4->ID).B) ||
                   (pFVar5->ClassID).A != (pFVar4->ID).A) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InNode.ClassID == InClass.ID",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphBuilder.cpp"
                                     ,0x216,L""), bVar7)) {
                pcVar6 = (code *)swi(3);
                TVar10.Ptr = (INode *)(*pcVar6)();
                return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar10.Ptr;
              }
              if ((((int)pFVar11->_padding_ != (pFVar5->Interface).Inputs.ArrayNum) ||
                  ((int)pFVar11->_padding_ != (pFVar5->Interface).Outputs.ArrayNum)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InterfacesHaveEqualSize(InClassInterface, InNode.Interface)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphBuilder.cpp"
                                     ,0x217,L""), bVar7)) {
                pcVar6 = (code *)swi(3);
                TVar10.Ptr = (INode *)(*pcVar6)();
                return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar10.Ptr;
              }
              pFVar17 = GraphBuilderPrivate::CreateNodeData
                                  (&local_1e0,(FBuildContext *)local_358,pFVar5,pFVar4,
                                   (FMetasoundFrontendClassInterface *)pFVar11,
                                   (FMetasoundFrontendClassInput *)0x0,
                                   (FMetasoundFrontendClassOutput *)0x0);
              this_00 = ::operator_new(0xa0);
              if (this_00 != (FGraphNode *)0x0) {
                local_310.Object = (IGraph *)local_330._8_8_;
                if (pFVar19 != (FGraphNode *)0x0) {
                  LOCK();
                  (pFVar19->NodeData).Name.ComparisonIndex.Value =
                       (pFVar19->NodeData).Name.ComparisonIndex.Value + 1;
                  UNLOCK();
                }
                local_310.SharedReferenceCount.ReferenceController =
                     (TReferenceControllerBase<1> *)pFVar19;
                pFVar17 = FNodeData::FNodeData(&local_168,pFVar17);
                pFVar14 = FGraphNode::FGraphNode(this_00,pFVar17,&local_310);
              }
              FNodeData::~FNodeData(&local_1e0);
              if (param_1 == (FCreateNodeParams *)local_210) {
                if (pFVar14 != (FGraphNode *)0x0) {
                  (**(code **)pFVar14->_padding_)(pFVar14,1);
                }
              }
              else {
                pFVar5 = param_1->FrontendNode;
                param_1->FrontendNode = (FMetasoundFrontendNode *)pFVar14;
                if (pFVar5 != (FMetasoundFrontendNode *)0x0) {
                  (*(code *)**(undefined8 **)&pFVar5->ID)(pFVar5,1);
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline((TReferenceControllerBase<1> *)pFVar19);
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline((TReferenceControllerBase<1> *)pFVar19);
                  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)
                         (INode *)param_1;
                }
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)pFVar19);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)pFVar19);
              return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)
                     (INode *)param_1;
            }
          }
          if (1 < (byte)LogMetaSound._0_1_) {
            local_370.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_370.Data.ArrayNum = 0;
            local_370.Data.ArrayMax = 0;
            FGuid::AppendString((FGuid *)(*in_RDX + 0x10),&local_370,Digits);
            ::FName::ToString((FName *)(*in_RDX + 0x20),&local_230);
            local_380.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_380.Data.ArrayNum = 0;
            local_380.Data.ArrayMax = 0;
            FGuid::AppendString((FGuid *)*in_RDX,&local_380,Digits);
            FTopLevelAssetPath::ToString((FTopLevelAssetPath *)in_RDX[9],&local_240);
            UE::Logging::Private::BasicLog<2>
                      ((FStaticBasicLogRecord *)&PTR_u_MetaSound___s___15233dba0,
                       (FLogCategoryBase *)&LogMetaSound);
            if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_240.Data.AllocatorInstance.Data);
            }
            if (local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_380.Data.AllocatorInstance.Data);
            }
            if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_230.Data.AllocatorInstance.Data);
            }
            if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_370.Data.AllocatorInstance.Data);
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)pFVar19);
        }
        break;
      case Input:
        piVar1 = (int *)*in_RDX;
        if (piVar1[0xc] == 1) {
          pFVar12 = FMetasoundFrontendClass::GetDefaultInterface
                              ((FMetasoundFrontendClass *)in_RDX[3]);
          pFVar20 = (pFVar12->Inputs).AllocatorInstance.Data;
          pFVar18 = pFVar20 + (longlong)(pFVar12->Inputs).ArrayNum * 0x48;
          if (pFVar20 != pFVar18) {
            do {
              if (((piVar1[3] == *(int *)(pFVar20 + 0x2c) && *piVar1 == *(int *)(pFVar20 + 0x20)) &&
                  piVar1[2] == *(int *)(pFVar20 + 0x28)) && piVar1[1] == *(int *)(pFVar20 + 0x24)) {
                if (pFVar20 != (FScriptContainerElement *)0x0) {
                  TVar10 = GraphBuilderPrivate::CreateInputNode
                                     ((FBuildContext *)local_360,(FMetasoundFrontendNode *)local_358
                                      ,(FMetasoundFrontendClass *)*in_RDX,
                                      (FMetasoundFrontendClassInterface *)in_RDX[1],pFVar11);
                  local_330._24_8_ = local_360;
                  if (param_1 != (FCreateNodeParams *)TVar10.Ptr) {
                    pFVar5 = param_1->FrontendNode;
                    param_1->FrontendNode = (FMetasoundFrontendNode *)*TVar10.Ptr;
                    *TVar10.Ptr = (INode)0x0;
                    if (pFVar5 != (FMetasoundFrontendNode *)0x0) {
                      (*(code *)**(undefined8 **)&pFVar5->ID)(pFVar5,1);
                      local_330._24_8_ = local_360;
                    }
                  }
                  goto LAB_14ae2e120;
                }
                break;
              }
              pFVar20 = pFVar20 + 0x48;
            } while (pFVar20 != pFVar18);
          }
        }
        else {
          bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_3983196478976818657>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphBuilder.cpp"
                             ,0x21f,"InInputNode.Interface.Inputs.Num() == 1");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            TVar10.Ptr = (INode *)(*pcVar6)();
            return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar10.Ptr;
          }
        }
        local_3d0._0_8_ = (FScriptContainerElement *)0x0;
        local_3d0._8_8_ = (FProxyDataCache *)0x0;
        FGuid::AppendString((FGuid *)(in_RDX[3] + 8),(FString *)local_3d0,Digits);
        if (1 < (byte)LogMetaSound._0_1_) {
          ::FName::ToString((FName *)(*in_RDX + 0x20),&local_290);
          local_3e8._8_8_ = (FMetasoundFrontendClass *)0x0;
          local_3d8 = (FMetasoundFrontendGraph *)0x0;
          FGuid::AppendString((FGuid *)*in_RDX,(FString *)(local_3e8 + 8),Digits);
          FTopLevelAssetPath::ToString((FTopLevelAssetPath *)in_RDX[9],&local_2a0);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
          }
          if ((FMetasoundFrontendClass *)local_3e8._8_8_ != (FMetasoundFrontendClass *)0x0) {
            FMemory::Free((void *)local_3e8._8_8_);
          }
          if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_290.Data.AllocatorInstance.Data);
          }
        }
        if ((FScriptContainerElement *)local_3d0._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_3d0._0_8_);
        }
        break;
      case Output:
        piVar1 = (int *)*in_RDX;
        if (piVar1[0x10] == 1) {
          pFVar12 = FMetasoundFrontendClass::GetDefaultInterface
                              ((FMetasoundFrontendClass *)in_RDX[3]);
          pFVar18 = (pFVar12->Outputs).AllocatorInstance.Data;
          pFVar20 = pFVar18 + (longlong)(pFVar12->Outputs).ArrayNum * 0x34;
          if (pFVar18 != pFVar20) {
            do {
              if (((piVar1[3] == *(int *)(pFVar18 + 0x2c) && *piVar1 == *(int *)(pFVar18 + 0x20)) &&
                  piVar1[2] == *(int *)(pFVar18 + 0x28)) && piVar1[1] == *(int *)(pFVar18 + 0x24)) {
                if (pFVar18 != (FScriptContainerElement *)0x0) {
                  TVar10 = GraphBuilderPrivate::CreateOutputNode
                                     ((FBuildContext *)local_330,(FMetasoundFrontendNode *)local_358
                                      ,(FMetasoundFrontendClass *)*in_RDX,
                                      (FMetasoundFrontendClassInterface *)in_RDX[1],
                                      (FMetasoundFrontendClassOutput *)pFVar11);
                  local_330._24_8_ = local_330._0_8_;
                  if (param_1 != (FCreateNodeParams *)TVar10.Ptr) {
                    pFVar5 = param_1->FrontendNode;
                    param_1->FrontendNode = (FMetasoundFrontendNode *)*TVar10.Ptr;
                    *TVar10.Ptr = (INode)0x0;
                    if (pFVar5 != (FMetasoundFrontendNode *)0x0) {
                      (*(code *)**(undefined8 **)&pFVar5->ID)(pFVar5,1);
                      local_330._24_8_ = local_330._0_8_;
                    }
                  }
                  goto LAB_14ae2e120;
                }
                break;
              }
              pFVar18 = pFVar18 + 0x34;
            } while (pFVar18 != pFVar20);
          }
        }
        else {
          bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_3983196478976818640>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphBuilder.cpp"
                             ,0x230,"InOutputNode.Interface.Outputs.Num() == 1");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            TVar10.Ptr = (INode *)(*pcVar6)();
            return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar10.Ptr;
          }
        }
        local_3b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3b0.Data.ArrayNum = 0;
        local_3b0.Data.ArrayMax = 0;
        FGuid::AppendString((FGuid *)(in_RDX[3] + 8),&local_3b0,Digits);
        if (1 < (byte)LogMetaSound._0_1_) {
          ::FName::ToString((FName *)(*in_RDX + 0x20),&local_270);
          local_3c0._0_8_ = (FScriptContainerElement *)0x0;
          local_3c0._8_8_ =
               (TMap<FGuid,TSharedPtr<Metasound::IGraph_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<Metasound::IGraph_const_,1>,0>_>
                *)0x0;
          FGuid::AppendString((FGuid *)*in_RDX,(FString *)local_3c0,Digits);
          FTopLevelAssetPath::ToString((FTopLevelAssetPath *)in_RDX[9],&local_280);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_280.Data.AllocatorInstance.Data);
          }
          if ((FScriptContainerElement *)local_3c0._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_3c0._0_8_);
          }
          if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_270.Data.AllocatorInstance.Data);
          }
        }
        if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
        }
        break;
      case Literal:
        if (2 < (byte)LogMetaSound._0_1_) {
          FTopLevelAssetPath::ToString((FTopLevelAssetPath *)in_RDX[9],&local_220);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_220.Data.AllocatorInstance.Data);
          }
        }
        puVar2 = (undefined4 *)*in_RDX;
        lVar3 = in_RDX[1];
        local_78 = *(undefined8 *)(puVar2 + 8);
        local_70 = *puVar2;
        uStack_6c = puVar2[1];
        uStack_68 = puVar2[2];
        uStack_64 = puVar2[3];
        (**(code **)((longlong)*(IDataTypeRegistry *)local_358._8_8_ + 0x80))
                  (local_358._8_8_,local_60,lVar3 + 0x20);
        pFVar15 = (FCreateNodeParams *)
                  (**(code **)((longlong)*(IDataTypeRegistry *)local_358._8_8_ + 0x160))
                            (local_358._8_8_,local_330 + 0x10,lVar3 + 0x20,&local_78);
        if (param_1 != pFVar15) {
          pFVar5 = param_1->FrontendNode;
          param_1->FrontendNode = pFVar15->FrontendNode;
          pFVar15->FrontendNode = (FMetasoundFrontendNode *)0x0;
          if (pFVar5 != (FMetasoundFrontendNode *)0x0) {
            (*(code *)**(undefined8 **)&pFVar5->ID)(pFVar5,1);
          }
        }
        if ((FScriptContainerElement *)local_330._16_8_ != (FScriptContainerElement *)0x0) {
          (*(code *)**(undefined8 **)local_330._16_8_)(local_330._16_8_,1);
        }
        if ((0xc < local_50) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          TVar10.Ptr = (INode *)(*pcVar6)();
          return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar10.Ptr;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[local_50])(local_60);
        break;
      case Variable:
        TVar10 = GraphBuilderPrivate::CreateVariableNode
                           ((FBuildContext *)(local_330 + 0x18),(FMetasoundFrontendNode *)local_358,
                            (FMetasoundFrontendClass *)*in_RDX,
                            (FMetasoundFrontendClassInterface *)in_RDX[1],
                            (FMetasoundFrontendGraph *)pFVar11);
        if (param_1 != (FCreateNodeParams *)TVar10.Ptr) {
          pFVar5 = param_1->FrontendNode;
          param_1->FrontendNode = (FMetasoundFrontendNode *)*TVar10.Ptr;
          *TVar10.Ptr = (INode)0x0;
          if (pFVar5 != (FMetasoundFrontendNode *)0x0) {
            (*(code *)**(undefined8 **)&pFVar5->ID)(pFVar5,1);
          }
        }
LAB_14ae2e120:
        if ((FGuid *)local_330._24_8_ != (FGuid *)0x0) {
          (*(code *)**(undefined8 **)local_330._24_8_)(local_330._24_8_,1);
        }
      }
    }
    else if (1 < (byte)LogMetaSound._0_1_) {
      FMetasoundFrontendClassName::ToString
                ((FMetasoundFrontendClassName *)(in_RDX[1] + 0x18),&local_2b0);
      ::FName::ToString((FName *)(*in_RDX + 0x20),&local_2c0);
      FTopLevelAssetPath::ToString((FTopLevelAssetPath *)in_RDX[9],&local_2d0);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
      }
      if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
      }
      if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
      }
    }
  }
  else if (1 < (byte)LogMetaSound._0_1_) {
    FMetasoundFrontendClassName::ToString
              ((FMetasoundFrontendClassName *)(in_RDX[1] + 0x18),&local_2e0);
    ::FName::ToString((FName *)(*in_RDX + 0x20),&local_2f0);
    FTopLevelAssetPath::ToString((FTopLevelAssetPath *)in_RDX[9],&local_300);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_300.Data.AllocatorInstance.Data);
    }
    if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
    }
    if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
    }
  }
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

