// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 14

// CompareLinkers @ 1420aba10

FLinkerDiff * __cdecl
FLinkerDiff::CompareLinkers(FLinkerDiff *__return_storage_ptr__,FLinker *param_1,FLinker *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FLinkerDiff *pFVar4;
  FName local_res8;
  ForAnyElementType local_18;
  int local_10;
  int iStack_c;
  
  (__return_storage_ptr__->PackageName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->PackageName).Data.ArrayNum = 0;
  (__return_storage_ptr__->PackageName).Data.ArrayMax = 0;
  (__return_storage_ptr__->SummaryDiffs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->SummaryDiffs).ArrayNum = 0;
  (__return_storage_ptr__->SummaryDiffs).ArrayMax = 0;
  (__return_storage_ptr__->NameMapDiffs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->NameMapDiffs).ArrayNum = 0;
  (__return_storage_ptr__->NameMapDiffs).ArrayMax = 0;
  (__return_storage_ptr__->GatherableTextDataDiffs).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->GatherableTextDataDiffs).ArrayNum = 0;
  (__return_storage_ptr__->GatherableTextDataDiffs).ArrayMax = 0;
  (__return_storage_ptr__->ImportDiffs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ImportDiffs).ArrayNum = 0;
  (__return_storage_ptr__->ImportDiffs).ArrayMax = 0;
  (__return_storage_ptr__->ExportDiffs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ExportDiffs).ArrayNum = 0;
  (__return_storage_ptr__->ExportDiffs).ArrayMax = 0;
  (__return_storage_ptr__->SoftPackageReferenceDiffs).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->SoftPackageReferenceDiffs).ArrayNum = 0;
  (__return_storage_ptr__->SoftPackageReferenceDiffs).ArrayMax = 0;
  (__return_storage_ptr__->SearchableNameDiffs).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->SearchableNameDiffs).ArrayNum = 0;
  (__return_storage_ptr__->SearchableNameDiffs).ArrayMax = 0;
  if ((param_1->LinkerRoot != param_2->LinkerRoot) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LHSLinker->LinkerRoot == RHSLinker->LinkerRoot",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerDiff.cpp"
                         ,0x5b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FLinkerDiff *)(*pcVar2)();
    return pFVar4;
  }
  local_res8 = (FName)param_1->LinkerRoot->_padding_;
  ::FName::ToString(&stack0x00000008,(FString *)&stack0xffffffffffffffe8);
  if (__return_storage_ptr__ != (FLinkerDiff *)&stack0xffffffffffffffe8) {
    pFVar1 = (__return_storage_ptr__->PackageName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->PackageName).Data.AllocatorInstance.Data = local_18.Data;
    (__return_storage_ptr__->PackageName).Data.ArrayNum = local_10;
    (__return_storage_ptr__->PackageName).Data.ArrayMax = iStack_c;
    local_10 = 0;
    iStack_c = 0;
    local_18.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  GenerateSummaryDiff(__return_storage_ptr__,param_1,param_2);
  GenerateNameMapDiff(__return_storage_ptr__,param_1,param_2);
  GenerateGatherableTextDataMapDiff(__return_storage_ptr__,param_1,param_2);
  GenerateImportMapDiff(__return_storage_ptr__,param_1,param_2);
  GenerateExportAndDependsMapDiff(__return_storage_ptr__,param_1,param_2);
  GenerateSofPackageReferenceDiff(__return_storage_ptr__,param_1,param_2);
  GenerateSearchableNameMapDiff(__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// Generate @ 1420b92a0

void __thiscall FLinkerDiff::Generate(FLinkerDiff *this,FLinker *param_1,FLinker *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8;
  ForAnyElementType local_18;
  int local_10;
  int iStack_c;
  
  if ((param_1->LinkerRoot != param_2->LinkerRoot) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LHSLinker->LinkerRoot == RHSLinker->LinkerRoot",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerDiff.cpp"
                         ,0x5b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_res8 = (FName)param_1->LinkerRoot->_padding_;
  ::FName::ToString(&stack0x00000008,(FString *)&stack0xffffffffffffffe8);
  if (this != (FLinkerDiff *)&stack0xffffffffffffffe8) {
    pFVar1 = (this->PackageName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->PackageName).Data.AllocatorInstance.Data = local_18.Data;
    (this->PackageName).Data.ArrayNum = local_10;
    (this->PackageName).Data.ArrayMax = iStack_c;
    local_10 = 0;
    iStack_c = 0;
    local_18.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  GenerateSummaryDiff(this,param_1,param_2);
  GenerateNameMapDiff(this,param_1,param_2);
  GenerateGatherableTextDataMapDiff(this,param_1,param_2);
  GenerateImportMapDiff(this,param_1,param_2);
  GenerateExportAndDependsMapDiff(this,param_1,param_2);
  GenerateSofPackageReferenceDiff(this,param_1,param_2);
  GenerateSearchableNameMapDiff(this,param_1,param_2);
  return;
}

// GenerateDependsArrayDiff @ 1420b93d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001420bc9e4) */
/* WARNING: Removing unreachable block (ram,0x0001420bb931) */
/* WARNING: Removing unreachable block (ram,0x0001420baf01) */
/* WARNING: Removing unreachable block (ram,0x0001420ba4be) */
/* WARNING: Removing unreachable block (ram,0x0001420b9b7a) */
/* WARNING: Removing unreachable block (ram,0x0001420b9598) */
/* WARNING: Removing unreachable block (ram,0x0001420b9eb6) */
/* WARNING: Removing unreachable block (ram,0x0001420ba8d2) */
/* WARNING: Removing unreachable block (ram,0x0001420bb322) */
/* WARNING: Removing unreachable block (ram,0x0001420bbda7) */
/* WARNING: Removing unreachable block (ram,0x0001420bcbd2) */
/* WARNING: Removing unreachable block (ram,0x0001420bc47a) */
/* WARNING: Removing unreachable block (ram,0x0001420bb78f) */
/* WARNING: Removing unreachable block (ram,0x0001420bb79b) */
/* WARNING: Removing unreachable block (ram,0x0001420ba71a) */
/* WARNING: Removing unreachable block (ram,0x0001420ba724) */
/* WARNING: Removing unreachable block (ram,0x0001420ba2fd) */
/* WARNING: Removing unreachable block (ram,0x0001420ba30a) */
/* WARNING: Removing unreachable block (ram,0x0001420bad40) */
/* WARNING: Removing unreachable block (ram,0x0001420bad4d) */
/* WARNING: Removing unreachable block (ram,0x0001420bc243) */
/* WARNING: Removing unreachable block (ram,0x0001420bc24f) */
/* WARNING: Removing unreachable block (ram,0x0001420bc7b2) */
/* WARNING: Removing unreachable block (ram,0x0001420bc7be) */
/* WARNING: Removing unreachable block (ram,0x0001420bb16a) */
/* WARNING: Removing unreachable block (ram,0x0001420bb174) */
/* WARNING: Removing unreachable block (ram,0x0001420bbb6e) */
/* WARNING: Removing unreachable block (ram,0x0001420bbb7a) */

void __thiscall
FLinkerDiff::GenerateDependsArrayDiff
          (FLinkerDiff *this,FLinker *param_1,int param_2,FLinker *param_3,int param_4)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  FSetElementId FVar5;
  code *pcVar6;
  TBitArray<FDefaultBitArrayAllocator> *pTVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  uint uVar12;
  FPackageIndex FVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined4 extraout_var;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar17;
  void *pvVar19;
  FString *pFVar20;
  FObjectExport *pFVar21;
  size_t sVar22;
  byte bVar23;
  FScriptContainerElement *pFVar24;
  ForElementType<unsigned_int> FVar25;
  ForElementType<FSetElementId> FVar26;
  wchar_t *pwVar27;
  FScriptContainerElement *pFVar28;
  uint uVar29;
  int *piVar30;
  uint uVar31;
  undefined8 *puVar32;
  longlong lVar33;
  int iVar34;
  ulong64 uVar35;
  uint uVar36;
  longlong lVar37;
  ForAnyElementType FVar38;
  undefined1 auStackY_60d8 [32];
  undefined1 local_6068;
  undefined1 local_6067;
  undefined1 local_6066;
  undefined1 local_6065;
  undefined1 local_6064 [4];
  longlong *local_6060;
  undefined8 uStack_6058;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_6050;
  undefined8 uStack_6048;
  undefined8 uStack_6040;
  int local_6038;
  undefined4 uStack_6034;
  FString local_6030;
  longlong local_6020;
  longlong local_6018;
  ForAnyElementType local_6010;
  undefined8 local_6008;
  longlong local_6000;
  FString local_5ff8;
  FString local_5fe8;
  undefined8 local_5fd8;
  undefined8 local_5fd0;
  FString local_5fc8;
  FString local_5fb8;
  FString local_5fa8;
  FString local_5f98;
  FString local_5f88;
  FString local_5f78;
  FString local_5f68;
  FString local_5f58;
  FString local_5f48;
  FString local_5f38;
  FString local_5f28;
  FString local_5f18;
  FString local_5f08;
  FString local_5ef8;
  FString local_5ee8;
  FString local_5ed8;
  FString local_5ec8;
  undefined1 local_5eb8 [8];
  undefined1 local_5eb0 [8];
  longlong local_5ea8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_5ea0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_5e80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_5e60;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_5e40;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_5e20;
  undefined1 local_5e00 [8];
  undefined1 local_5df8 [4];
  FPackageIndex local_5df4;
  FPackageIndex local_5df0;
  FPackageIndex local_5dec;
  FPackageIndex local_5de8;
  int local_5de4;
  int local_5de0;
  undefined1 local_5dd8 [12];
  uint uStack_5dcc;
  TBitArray<FDefaultBitArrayAllocator> *local_5dc8;
  undefined8 uStack_5dc0;
  longlong local_5db8;
  undefined8 uStack_5db0;
  undefined1 local_5da8 [12];
  uint uStack_5d9c;
  TBitArray<FDefaultBitArrayAllocator> *local_5d98;
  undefined8 uStack_5d90;
  longlong local_5d88;
  undefined8 uStack_5d80;
  undefined1 local_5d78 [12];
  uint uStack_5d6c;
  TBitArray<FDefaultBitArrayAllocator> *local_5d68;
  undefined8 uStack_5d60;
  longlong local_5d58;
  undefined8 uStack_5d50;
  undefined1 local_5d48 [12];
  uint uStack_5d3c;
  TBitArray<FDefaultBitArrayAllocator> *local_5d38;
  undefined8 uStack_5d30;
  longlong local_5d28;
  undefined8 uStack_5d20;
  longlong *local_5d18;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_5d10;
  undefined8 uStack_5cf0;
  longlong *local_5ce8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_5ce0;
  undefined8 uStack_5cc0;
  FString local_5cb8;
  FString local_5ca8;
  FString local_5c98;
  FString local_5c88;
  FString local_5c78;
  FString local_5c68;
  FString local_5c58;
  FString local_5c48;
  FString local_5c38;
  TRangedForIterator local_5c28;
  TRangedForIterator local_5bf8;
  TRangedForIterator local_5bc8;
  TRangedForIterator local_5b98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_5b68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_5b48;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_5b28;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_5b08;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_5ae8;
  undefined4 local_5aac;
  undefined1 local_5aa8 [32];
  ForElementType<unsigned_int> local_5a88;
  uint local_5a80;
  int local_5a7c;
  int local_5a78;
  int local_5a74;
  undefined1 local_5a70 [8];
  ForElementType<FSetElementId> local_5a68;
  int local_5a60;
  undefined1 local_5a58 [32];
  ForElementType<unsigned_int> local_5a38;
  int local_5a30;
  int local_5a2c;
  int local_5a28;
  int local_5a24;
  undefined1 local_5a20 [8];
  ForElementType<FSetElementId> local_5a18;
  int local_5a10;
  undefined1 local_5a08 [32];
  undefined8 local_59e8;
  int local_59e0;
  undefined4 local_59dc;
  undefined4 local_59d8;
  int local_59d4;
  ForElementType<FSetElementId> local_59c8;
  int local_59c0;
  TStringBuilderBase<wchar_t> local_59b8;
  wchar_t local_5998 [1024];
  TStringBuilderBase<wchar_t> local_5198;
  wchar_t local_5178 [1024];
  TStringBuilderBase<wchar_t> local_4978;
  wchar_t local_4958 [1024];
  TStringBuilderBase<wchar_t> local_4158;
  wchar_t local_4138 [1024];
  TStringBuilderBase<wchar_t> local_3938;
  wchar_t local_3918 [1024];
  TStringBuilderBase<wchar_t> local_3118;
  wchar_t local_30f8 [1024];
  TStringBuilderBase<wchar_t> local_28f8;
  wchar_t local_28d8 [1024];
  TStringBuilderBase<wchar_t> local_20d8;
  wchar_t local_20b8 [1024];
  TStringBuilderBase<wchar_t> local_18b8;
  wchar_t local_1898 [1024];
  TStringBuilderBase<wchar_t> local_1098;
  wchar_t local_1078 [1024];
  TStringBuilderBase<wchar_t> local_878;
  wchar_t local_858 [1024];
  ulonglong local_58 [2];
  undefined8 uStack_48;
  FObjectImport *pFVar18;
  
  uStack_48 = 0x1420b93ef;
  local_58[0] = __security_cookie.value ^ (ulonglong)auStackY_60d8;
  pTVar1 = &this->ExportDiffs;
  local_6010.Data = (FScriptContainerElement *)0x0;
  local_6008 = 0;
  uVar12 = 0;
  if (param_2 < (int)param_1->_padding_) {
    uVar12 = (uint)~param_2 >> 0x1f;
  }
  local_6020 = CONCAT44(local_6020._4_4_,(uint)~param_2 >> 0x1f);
  if ((uVar12 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  puVar32 = (undefined8 *)((longlong)param_2 * 0x10 + param_1->_padding_);
  piVar30 = (int *)*puVar32;
  iVar34 = *(int *)(puVar32 + 1);
  piVar3 = piVar30 + iVar34;
  local_5ea8 = (longlong)param_2;
  while( true ) {
    if (*(int *)(puVar32 + 1) != iVar34) {
      local_6068 = 0;
      `TCheckedPointerIterator<FPackageIndex_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_6068);
    }
    if (piVar30 == piVar3) break;
    FLinker::GetPathName(param_1,&local_5f78,(FPackageIndex)*piVar30);
    if (((local_6010.Data <= (FScriptContainerElement *)&local_5f78) &&
        ((FScriptContainerElement *)&local_5f78 <
         local_6010.Data + (longlong)local_6008._4_4_ * 0x10)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar11 = (int)local_6008;
    if ((int)local_6008 == local_6008._4_4_) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_6010,(int *)((longlong)&local_6008 + 4));
    }
    local_6008 = CONCAT44(local_6008._4_4_,iVar11 + 1);
    pFVar24 = local_6010.Data + (longlong)iVar11 * 0x10;
    *(undefined8 *)pFVar24 = 0;
    *(FScriptContainerElement **)pFVar24 = local_5f78.Data.AllocatorInstance.Data;
    local_5f78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar24 + 8) = local_5f78.Data.ArrayNum;
    *(int *)(pFVar24 + 0xc) = local_5f78.Data.ArrayMax;
    local_5f78.Data.ArrayNum = 0;
    local_5f78.Data.ArrayMax = 0;
    piVar30 = piVar30 + 1;
  }
  local_5a58._0_8_ = (FScriptContainerElement *)0x0;
  local_5a58._8_8_ = 0;
  local_5a38 = (ForElementType<unsigned_int>)0x0;
  local_5a30 = 0;
  uVar12 = 0;
  if (param_4 < (int)param_3->_padding_) {
    uVar12 = (uint)~param_4 >> 0x1f;
  }
  local_5a2c = 0x80;
  local_5a28 = -1;
  local_5a24 = 0;
  local_5a18 = (ForElementType<FSetElementId>)0x0;
  local_5a10 = 0;
  local_6000 = CONCAT44(local_6000._4_4_,(uint)~param_4 >> 0x1f);
  if ((uVar12 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  puVar32 = (undefined8 *)((longlong)param_4 * 0x10 + param_3->_padding_);
  piVar30 = (int *)*puVar32;
  iVar34 = *(int *)(puVar32 + 1);
  piVar3 = piVar30 + iVar34;
  local_6018 = (longlong)param_4;
  while( true ) {
    if (*(int *)(puVar32 + 1) != iVar34) {
      local_6067 = 0;
      `TCheckedPointerIterator<FPackageIndex_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_6067);
    }
    if (piVar30 == piVar3) break;
    FLinker::GetPathName(param_3,&local_5cb8,(FPackageIndex)*piVar30);
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_5a58,
               (FString *)local_5e00,(bool *)&local_5cb8);
    if (local_5cb8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5cb8.Data.AllocatorInstance.Data);
    }
    piVar30 = piVar30 + 1;
  }
  iVar34 = (int)local_6008;
  uVar16 = (ulonglong)(int)local_6008;
  local_5a08._0_8_ = 0;
  pFVar24 = local_6010.Data + uVar16 * 0x10;
  local_5a08._8_8_ = 0;
  local_59e8 = 0;
  local_59e0 = 0;
  local_59d4 = 0;
  local_59c8 = (ForElementType<FSetElementId>)0x0;
  local_59c0 = 0;
  local_59dc = 0x80;
  local_59d8 = 0xffffffff;
  FVar38.Data = local_6010.Data;
LAB_1420b9710:
  while( true ) {
    if ((int)uVar16 != iVar34) {
      local_6066 = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_6066);
    }
    if (FVar38.Data == pFVar24) break;
    if (*(int *)(FVar38.Data + 8) == 0) {
      pwVar27 = L"";
      iVar11 = 0;
    }
    else {
      pwVar27 = *(wchar_t **)FVar38.Data;
      iVar11 = *(int *)(FVar38.Data + 8) + -1;
    }
    uVar12 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,pwVar27);
    iVar11 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                       ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_5a58,
                        uVar12,(FString *)FVar38.Data);
    if (iVar11 != -1) {
      bVar9 = TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::IsValidIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              *)local_5a58,iVar11);
      if ((!bVar9) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Elements.IsValidIndex(ElementIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                             ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex")
         , bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar8 = local_5a58._0_8_;
      FVar26 = (ForElementType<FSetElementId>)local_5a20;
      if (local_5a18 != (ForElementType<FSetElementId>)0x0) {
        FVar26 = local_5a18;
      }
      pFVar28 = (FScriptContainerElement *)
                ((longlong)FVar26 +
                (longlong)*(int *)(local_5a58._0_8_ + (longlong)iVar11 * 0x18 + 0x14) * 4);
      do {
        iVar4 = *(int *)pFVar28;
        if (iVar4 == -1) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("NextElementIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                             ,0x2b5,L"Corrupt hash");
          if (bVar9) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        else if (iVar4 == iVar11) goto LAB_1420b9819;
        pFVar28 = (FScriptContainerElement *)(local_5a58._0_8_ + (longlong)iVar4 * 0x18 + 0x10);
      } while( true );
    }
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_5a08,
               (FString *)(local_5e00 + 4),(bool *)FVar38.Data);
    uVar16 = local_6008 & 0xffffffff;
    FVar38.Data = FVar38.Data + 0x10;
  }
  FVar13 = FPackageIndex::FromExport((int)local_5df8);
  FLinker::GetPathName
            (param_3,&local_6030,(FPackageIndex)*(int *)CONCAT44(extraout_var,FVar13.Index));
  local_5e60.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_5a08 + 0x10);
  local_5e60._padding_._0_4_ = 0;
  local_5e60._padding_._4_4_ = 1;
  local_5e60.UnvisitedBitMask = 0xffffffff;
  local_5e60.CurrentBitIndex = 0;
  local_5e60.BaseBitIndex = 0;
  if (local_59e0 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_5e60);
  }
  uStack_6058 = CONCAT44(local_5e60._padding_._4_4_,(undefined4)local_5e60._padding_);
  local_6060 = (longlong *)local_5a08;
  uStack_6048 = CONCAT44(local_5e60.CurrentBitIndex,local_5e60.UnvisitedBitMask);
  uStack_6040 = CONCAT44(local_5e60._28_4_,local_5e60.BaseBitIndex);
  local_6038 = local_5a08._8_4_ - local_59d4;
  pTStack_6050 = local_5e60.Array;
  uStack_5d80._4_4_ = uStack_6034;
  uStack_5d80._0_4_ = local_6038;
  local_5d98 = local_5e60.Array;
  local_5da8._0_8_ = local_6060;
  unique0x1000463e = uStack_6058;
  uStack_5d90 = uStack_6048;
  local_5d88 = uStack_6040;
  pTVar17 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_5b68,(TBitArray<FDefaultBitArrayAllocator> *)(local_5a08 + 0x10),
                       local_59e0);
  local_6060 = (longlong *)local_5a08;
  uStack_6058 = pTVar17->_padding_;
  pTStack_6050 = pTVar17->Array;
  uStack_6048._0_4_ = pTVar17->UnvisitedBitMask;
  uStack_6048._4_4_ = pTVar17->CurrentBitIndex;
  uStack_6040 = *(longlong *)&pTVar17->BaseBitIndex;
  local_6038 = local_5a08._8_4_ - local_59d4;
  local_5bc8._44_4_ = uStack_6034;
  local_5bc8.InitialNum = local_6038;
  local_5bc8._padding_ = (longlong)local_6060;
  local_5bc8._padding_ = uStack_6058;
  local_5bc8._padding_ = (longlong)pTStack_6050;
  local_5bc8._padding_ = uStack_6048;
  local_5bc8._padding_ = uStack_6040;
  bVar9 = TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!=((TRangedForIterator *)local_5da8,&local_5bc8);
  if (bVar9) {
    do {
      local_4158.bIsDynamic = false;
      local_4158.bIsExternal = false;
      local_4158.Base = local_4138;
      local_4158.CurPos = local_4138;
      local_4158.End = (wchar_t *)&local_3938;
      puVar32 = (undefined8 *)(*(longlong *)local_5da8._0_8_ + (longlong)uStack_5d90._4_4_ * 0x18);
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_4158,L"Missing RHS Dependency ",0x17);
      iVar11 = *(int *)(puVar32 + 1);
      iVar34 = iVar11 + -1;
      if (iVar11 == 0) {
        iVar34 = 0;
      }
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_4158,(wchar_t *)*puVar32,iVar34);
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_4158,L" for resource ",0xe);
      iVar34 = local_6030.Data.ArrayNum + -1;
      if (local_6030.Data.ArrayNum == 0) {
        iVar34 = 0;
      }
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                (&local_4158,(wchar_t *)local_6030.Data.AllocatorInstance.Data,iVar34);
      if (local_4158.End < (TStringBuilderBase<wchar_t> *)(local_4158.CurPos + 1)) {
        TStringBuilderBase<wchar_t>::Extend(&local_4158,1);
      }
      *local_4158.CurPos = L'\0';
      ::FString::FString(&local_5f68,local_4158.Base);
      pFVar24 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar24 <= (FScriptContainerElement *)&local_5f68) &&
          ((FScriptContainerElement *)&local_5f68 <
           pFVar24 + (longlong)(this->ExportDiffs).ArrayMax * 0x10)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar34 = (this->ExportDiffs).ArrayNum;
      if (iVar34 == (this->ExportDiffs).ArrayMax) {
        iVar34 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar1->AllocatorInstance,&(this->ExportDiffs).ArrayMax);
      }
      (this->ExportDiffs).ArrayNum = iVar34 + 1;
      pFVar24 = (pTVar1->AllocatorInstance).Data + (longlong)iVar34 * 0x10;
      *(undefined8 *)pFVar24 = 0;
      *(FScriptContainerElement **)pFVar24 = local_5f68.Data.AllocatorInstance.Data;
      *(int *)(pFVar24 + 8) = local_5f68.Data.ArrayNum;
      *(int *)(pFVar24 + 0xc) = local_5f68.Data.ArrayMax;
      local_5f68.Data.ArrayNum = 0;
      local_5f68.Data.ArrayMax = 0;
      local_5f68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_4158);
      uStack_5d90 = CONCAT44(uStack_5d90._4_4_,(uint)uStack_5d90 & ~uStack_5d9c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_5da8 + 8));
      bVar9 = TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!=((TRangedForIterator *)local_5da8,&local_5bc8);
    } while (bVar9);
  }
  local_5e40.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_5a58 + 0x10);
  local_5e40._padding_._0_4_ = 0;
  local_5e40._padding_._4_4_ = 1;
  local_5e40.UnvisitedBitMask = 0xffffffff;
  local_5e40.CurrentBitIndex = 0;
  local_5e40.BaseBitIndex = 0;
  if (local_5a30 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_5e40);
  }
  uStack_6058 = CONCAT44(local_5e40._padding_._4_4_,(undefined4)local_5e40._padding_);
  local_6060 = (longlong *)local_5a58;
  uStack_6048 = CONCAT44(local_5e40.CurrentBitIndex,local_5e40.UnvisitedBitMask);
  uStack_6040 = CONCAT44(local_5e40._28_4_,local_5e40.BaseBitIndex);
  local_6038 = local_5a58._8_4_ - local_5a24;
  pTStack_6050 = local_5e40.Array;
  uStack_5d50._4_4_ = uStack_6034;
  uStack_5d50._0_4_ = local_6038;
  local_5d68 = local_5e40.Array;
  local_5d78._0_8_ = local_6060;
  unique0x1000465e = uStack_6058;
  uStack_5d60 = uStack_6048;
  local_5d58 = uStack_6040;
  pTVar17 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_5b48,(TBitArray<FDefaultBitArrayAllocator> *)(local_5a58 + 0x10),
                       local_5a30);
  local_6060 = (longlong *)local_5a58;
  uStack_6058 = pTVar17->_padding_;
  pTStack_6050 = pTVar17->Array;
  uStack_6048._0_4_ = pTVar17->UnvisitedBitMask;
  uStack_6048._4_4_ = pTVar17->CurrentBitIndex;
  uStack_6040 = *(longlong *)&pTVar17->BaseBitIndex;
  local_6038 = local_5a58._8_4_ - local_5a24;
  local_5b98._44_4_ = uStack_6034;
  local_5b98.InitialNum = local_6038;
  local_5b98._padding_ = (longlong)local_6060;
  local_5b98._padding_ = uStack_6058;
  local_5b98._padding_ = (longlong)pTStack_6050;
  local_5b98._padding_ = uStack_6048;
  local_5b98._padding_ = uStack_6040;
  bVar9 = TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!=((TRangedForIterator *)local_5d78,&local_5b98);
  if (bVar9) {
    do {
      local_3938.bIsDynamic = false;
      local_3938.bIsExternal = false;
      local_3938.Base = local_3918;
      local_3938.CurPos = local_3918;
      local_3938.End = (wchar_t *)&local_3118;
      puVar32 = (undefined8 *)(*(longlong *)local_5d78._0_8_ + (longlong)uStack_5d60._4_4_ * 0x18);
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_3938,L"New RHS Dependency ",0x13);
      iVar11 = *(int *)(puVar32 + 1);
      iVar34 = iVar11 + -1;
      if (iVar11 == 0) {
        iVar34 = 0;
      }
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_3938,(wchar_t *)*puVar32,iVar34);
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_3938,L" for resource ",0xe);
      iVar34 = local_6030.Data.ArrayNum + -1;
      if (local_6030.Data.ArrayNum == 0) {
        iVar34 = 0;
      }
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                (&local_3938,(wchar_t *)local_6030.Data.AllocatorInstance.Data,iVar34);
      if (local_3938.End < (TStringBuilderBase<wchar_t> *)(local_3938.CurPos + 1)) {
        TStringBuilderBase<wchar_t>::Extend(&local_3938,1);
      }
      *local_3938.CurPos = L'\0';
      ::FString::FString(&local_5f58,local_3938.Base);
      pFVar24 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar24 <= (FScriptContainerElement *)&local_5f58) &&
          ((FScriptContainerElement *)&local_5f58 <
           pFVar24 + (longlong)(this->ExportDiffs).ArrayMax * 0x10)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar34 = (this->ExportDiffs).ArrayNum;
      if (iVar34 == (this->ExportDiffs).ArrayMax) {
        iVar34 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar1->AllocatorInstance,&(this->ExportDiffs).ArrayMax);
      }
      (this->ExportDiffs).ArrayNum = iVar34 + 1;
      pFVar24 = (pTVar1->AllocatorInstance).Data + (longlong)iVar34 * 0x10;
      *(undefined8 *)pFVar24 = 0;
      *(FScriptContainerElement **)pFVar24 = local_5f58.Data.AllocatorInstance.Data;
      *(int *)(pFVar24 + 8) = local_5f58.Data.ArrayNum;
      *(int *)(pFVar24 + 0xc) = local_5f58.Data.ArrayMax;
      local_5f58.Data.ArrayNum = 0;
      local_5f58.Data.ArrayMax = 0;
      local_5f58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_3938);
      uStack_5d60 = CONCAT44(uStack_5d60._4_4_,(uint)uStack_5d60 & ~uStack_5d6c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_5d78 + 8));
      bVar9 = TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!=((TRangedForIterator *)local_5d78,&local_5b98);
    } while (bVar9);
  }
  lVar33 = local_5ea8;
  iVar34 = 0;
  if (param_2 < (int)param_1->_padding_) {
    iVar34 = (int)local_6020;
  }
  if ((iVar34 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar37 = local_6018;
  lVar33 = lVar33 * 0x68 + param_1->_padding_;
  iVar34 = 0;
  if (param_4 < (int)param_3->_padding_) {
    iVar34 = (int)local_6000;
  }
  local_6020 = lVar33;
  if ((iVar34 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar12 = *(uint *)(lVar33 + 0x54);
  lVar37 = lVar37 * 0x68 + param_3->_padding_;
  local_6000 = lVar37;
  if ((uVar12 == 0xffffffff) || (uVar36 = *(uint *)(lVar37 + 0x54), uVar36 == 0xffffffff)) {
    if (uVar12 != *(uint *)(lVar37 + 0x54)) {
      local_878.bIsDynamic = false;
      local_878.bIsExternal = false;
      local_878.Base = local_858;
      pwVar27 = L"New RHS Cooked Preload Dependencies for resource";
      local_878.CurPos = local_858;
      local_878.End = (wchar_t *)local_58;
      if (*(uint *)(lVar37 + 0x54) == 0xffffffff) {
        pwVar27 = L"Missing RHS Cooked Preload Dependencies for resource";
      }
      sVar22 = wcslen(pwVar27);
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_878,pwVar27,(int)sVar22);
      iVar34 = local_6030.Data.ArrayNum + -1;
      if (local_6030.Data.ArrayNum == 0) {
        iVar34 = 0;
      }
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                (&local_878,(wchar_t *)local_6030.Data.AllocatorInstance.Data,iVar34);
      if (local_878.End < local_878.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_878,1);
      }
      *local_878.CurPos = L'\0';
      ::FString::FString((FString *)&local_5fd8,local_878.Base);
      pFVar24 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar24 <= (FScriptContainerElement *)&local_5fd8) &&
          ((FScriptContainerElement *)&local_5fd8 <
           pFVar24 + (longlong)(this->ExportDiffs).ArrayMax * 0x10)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar34 = (this->ExportDiffs).ArrayNum;
      piVar3 = &(this->ExportDiffs).ArrayMax;
      if (iVar34 == *piVar3) {
        iVar34 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar1->AllocatorInstance,piVar3);
      }
      (this->ExportDiffs).ArrayNum = iVar34 + 1;
      pFVar24 = (pTVar1->AllocatorInstance).Data + (longlong)iVar34 * 0x10;
      *(undefined8 *)pFVar24 = 0;
      *(undefined8 *)pFVar24 = local_5fd8;
      *(undefined4 *)(pFVar24 + 8) = (undefined4)local_5fd0;
      *(undefined4 *)(pFVar24 + 0xc) = local_5fd0._4_4_;
      local_5fd0 = 0;
      local_5fd8 = 0;
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_878);
    }
    goto LAB_1420bcbe8;
  }
  local_5aa8._0_8_ = (FScriptContainerElement *)0x0;
  local_5aa8._8_8_ = 0;
  local_5a88 = (ForElementType<unsigned_int>)0x0;
  local_5a80 = 0;
  local_5a7c = 0x80;
  local_5a78 = -1;
  local_5a74 = 0;
  local_5a68 = (ForElementType<FSetElementId>)0x0;
  local_5a60 = 0;
  if (*(int *)(lVar33 + 0x58) != *(int *)(lVar37 + 0x58)) {
    uVar29 = uVar36;
    if (0 < *(int *)(lVar37 + 0x58)) {
      do {
        uVar15 = 0;
        if ((int)uVar29 < (int)param_3[1]._padding_) {
          uVar15 = ~uVar29 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        TSet<FPackageIndex,DefaultKeyFuncs<FPackageIndex,0>,FDefaultSetAllocator>::
        Emplace<FPackageIndex_const_&>
                  ((TSet<FPackageIndex,DefaultKeyFuncs<FPackageIndex,0>,FDefaultSetAllocator> *)
                   local_5aa8,&local_5df4,(bool *)(param_3[1]._padding_ + (longlong)(int)uVar29 * 4)
                  );
        uVar29 = uVar29 + 1;
      } while ((int)(uVar29 - uVar36) < *(int *)(lVar37 + 0x58));
    }
    if (0 < *(int *)(lVar33 + 0x58)) {
      lVar33 = (longlong)(int)uVar12 << 2;
      plVar2 = &param_1->_padding_;
      uVar29 = uVar12;
      do {
        uVar15 = 0;
        if ((int)uVar29 < (int)param_1[1]._padding_) {
          uVar15 = ~uVar29 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar13.Index = *(int *)(lVar33 + param_1[1]._padding_);
        if ((FVar13.Index == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("!Index.IsNull()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Linker.h"
                               ,0x59,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (FVar13.Index < 0) {
          pFVar18 = FLinkerTables::Imp((FLinkerTables *)plVar2,FVar13);
          uVar10 = SUB81(pFVar18,0);
        }
        else {
          pFVar21 = FLinkerTables::Exp((FLinkerTables *)plVar2,FVar13);
          uVar10 = SUB81(pFVar21,0);
        }
        FindResourcePackageIndex
                  ((FObjectResource *)local_5eb8,(bool)uVar10,
                   (FLinker *)(ulonglong)((uint)FVar13.Index >> 0x1f),param_1);
        if (local_5aa8._8_4_ != local_5a74) {
          FVar26 = (ForElementType<FSetElementId>)local_5a70;
          if (local_5a68 != (ForElementType<FSetElementId>)0x0) {
            FVar26 = local_5a68;
          }
          for (FVar5.Index = *(int *)((longlong)FVar26 +
                                     (ulonglong)(local_5a60 - 1U & local_5eb8._0_4_) * 4);
              FVar5.Index != -1;
              FVar5.Index = *(int *)(local_5aa8._0_8_ + (longlong)FVar5.Index * 0xc + 4)) {
            if (*(uint *)(local_5aa8._0_8_ + (longlong)FVar5.Index * 0xc) == local_5eb8._0_4_) {
              if (FVar5.Index != -1) {
                TSet<FPackageIndex,DefaultKeyFuncs<FPackageIndex,0>,FDefaultSetAllocator>::Remove
                          ((TSet<FPackageIndex,DefaultKeyFuncs<FPackageIndex,0>,FDefaultSetAllocator>
                            *)local_5aa8,FVar5);
                goto LAB_1420ba4cf;
              }
              break;
            }
          }
        }
        local_3118.Base = local_30f8;
        local_3118.bIsDynamic = false;
        local_3118.bIsExternal = false;
        local_3118.CurPos = local_30f8;
        local_3118.End = (wchar_t *)&local_28f8;
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                  (&local_3118,
                   L"Missing RHS SerializationBeforeSerializationDependencies Preload Dependencies "
                   ,0x4e);
        if (FVar13.Index < 0) {
          FLinkerTables::GetImportPathName((FLinkerTables *)plVar2,&local_5ee8,-1 - FVar13.Index);
        }
        else if (FVar13.Index < 1) {
          local_5ee8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_5ee8.Data.ArrayNum = 0;
          local_5ee8.Data.ArrayMax = 0;
        }
        else {
          pFVar20 = UObjectBaseUtility::GetPathName
                              ((UObjectBaseUtility *)param_1->LinkerRoot,&local_5ca8,(UObject *)0x0)
          ;
          FLinkerTables::GetExportPathName
                    ((FLinkerTables *)plVar2,&local_5ee8,pFVar20,FVar13.Index + -1,false);
          if (local_5ca8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_5ca8.Data.AllocatorInstance.Data);
          }
        }
        iVar34 = local_5ee8.Data.ArrayNum + -1;
        if (local_5ee8.Data.ArrayNum == 0) {
          iVar34 = 0;
        }
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                  (&local_3118,(wchar_t *)local_5ee8.Data.AllocatorInstance.Data,iVar34);
        if (local_5ee8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5ee8.Data.AllocatorInstance.Data);
        }
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_3118,L" for resource ",0xe);
        iVar34 = local_6030.Data.ArrayNum + -1;
        if (local_6030.Data.ArrayNum == 0) {
          iVar34 = 0;
        }
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                  (&local_3118,(wchar_t *)local_6030.Data.AllocatorInstance.Data,iVar34);
        if (local_3118.End < (TStringBuilderBase<wchar_t> *)(local_3118.CurPos + 1)) {
          TStringBuilderBase<wchar_t>::Extend(&local_3118,1);
        }
        *local_3118.CurPos = L'\0';
        ::FString::FString(&local_5f48,local_3118.Base);
        pFVar24 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar24 <= (FScriptContainerElement *)&local_5f48) &&
            ((FScriptContainerElement *)&local_5f48 <
             pFVar24 + (longlong)(this->ExportDiffs).ArrayMax * 0x10)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar34 = (this->ExportDiffs).ArrayNum;
        piVar3 = &(this->ExportDiffs).ArrayMax;
        if (iVar34 == *piVar3) {
          iVar34 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar1->AllocatorInstance,piVar3);
        }
        (this->ExportDiffs).ArrayNum = iVar34 + 1;
        pFVar24 = (pTVar1->AllocatorInstance).Data + (longlong)iVar34 * 0x10;
        *(undefined8 *)pFVar24 = 0;
        *(FScriptContainerElement **)pFVar24 = local_5f48.Data.AllocatorInstance.Data;
        *(int *)(pFVar24 + 8) = local_5f48.Data.ArrayNum;
        *(int *)(pFVar24 + 0xc) = local_5f48.Data.ArrayMax;
        local_5f48.Data.ArrayNum = 0;
        local_5f48.Data.ArrayMax = 0;
        local_5f48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_3118);
LAB_1420ba4cf:
        uVar29 = uVar29 + 1;
        lVar33 = lVar33 + 4;
        lVar37 = local_6000;
      } while ((int)(uVar29 - uVar12) < *(int *)(local_6020 + 0x58));
    }
    local_5e20._padding_._0_4_ = 0;
    local_5e20.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_5aa8 + 0x10);
    local_5e20._padding_._4_4_ = 1;
    local_5e20.UnvisitedBitMask = 0xffffffff;
    local_5e20.CurrentBitIndex = 0;
    local_5e20.BaseBitIndex = 0;
    if (local_5a80 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_5e20);
    }
    uStack_6058 = CONCAT44(local_5e20._padding_._4_4_,(undefined4)local_5e20._padding_);
    local_6060 = (longlong *)local_5aa8;
    uStack_6048 = CONCAT44(local_5e20.CurrentBitIndex,local_5e20.UnvisitedBitMask);
    uStack_6040 = CONCAT44(local_5e20._28_4_,local_5e20.BaseBitIndex);
    local_6038 = local_5aa8._8_4_ - local_5a74;
    pTStack_6050 = local_5e20.Array;
    uStack_5d20._4_4_ = uStack_6034;
    uStack_5d20._0_4_ = local_6038;
    local_5d38 = local_5e20.Array;
    local_5d48._0_8_ = local_6060;
    unique0x1000467e = uStack_6058;
    uStack_5d30 = uStack_6048;
    local_5d28 = uStack_6040;
    pTVar17 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (&local_5b28,(TBitArray<FDefaultBitArrayAllocator> *)(local_5aa8 + 0x10),
                         local_5a80);
    local_6060 = (longlong *)local_5aa8;
    uStack_6058 = pTVar17->_padding_;
    pTStack_6050 = pTVar17->Array;
    uStack_6048._0_4_ = pTVar17->UnvisitedBitMask;
    uStack_6048._4_4_ = pTVar17->CurrentBitIndex;
    uStack_6040 = *(longlong *)&pTVar17->BaseBitIndex;
    local_6038 = local_5aa8._8_4_ - local_5a74;
    local_5c28._44_4_ = uStack_6034;
    local_5c28.InitialNum = local_6038;
    local_5c28._padding_ = (longlong)local_6060;
    local_5c28._padding_ = uStack_6058;
    local_5c28._padding_ = (longlong)pTStack_6050;
    local_5c28._padding_ = uStack_6048;
    local_5c28._padding_ = uStack_6040;
    bVar9 = TSparseArray<TSparseSetElement<FPackageIndex>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!=((TRangedForIterator *)local_5d48,&local_5c28);
    if (bVar9) {
      do {
        local_28f8.bIsDynamic = false;
        local_28f8.bIsExternal = false;
        local_28f8.Base = local_28d8;
        local_28f8.CurPos = local_28d8;
        local_28f8.End = (wchar_t *)&local_20d8;
        iVar34 = *(int *)(*(longlong *)local_5d48._0_8_ + (longlong)uStack_5d30._4_4_ * 0xc);
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                  (&local_28f8,
                   L"New RHS SerializationBeforeSerializationDependencies Preload Dependencies ",
                   0x4a);
        if (iVar34 < 0) {
          FLinkerTables::GetImportPathName
                    ((FLinkerTables *)&param_3->_padding_,&local_5ed8,-1 - iVar34);
        }
        else if (iVar34 < 1) {
          local_5ed8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_5ed8.Data.ArrayNum = 0;
          local_5ed8.Data.ArrayMax = 0;
        }
        else {
          pFVar20 = UObjectBaseUtility::GetPathName
                              ((UObjectBaseUtility *)param_3->LinkerRoot,&local_5c98,(UObject *)0x0)
          ;
          FLinkerTables::GetExportPathName
                    ((FLinkerTables *)&param_3->_padding_,&local_5ed8,pFVar20,iVar34 + -1,false);
          if (local_5c98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_5c98.Data.AllocatorInstance.Data);
          }
        }
        iVar34 = local_5ed8.Data.ArrayNum + -1;
        if (local_5ed8.Data.ArrayNum == 0) {
          iVar34 = 0;
        }
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                  (&local_28f8,(wchar_t *)local_5ed8.Data.AllocatorInstance.Data,iVar34);
        if (local_5ed8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5ed8.Data.AllocatorInstance.Data);
        }
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_28f8,L" for resource ",0xe);
        iVar34 = local_6030.Data.ArrayNum + -1;
        if (local_6030.Data.ArrayNum == 0) {
          iVar34 = 0;
        }
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                  (&local_28f8,(wchar_t *)local_6030.Data.AllocatorInstance.Data,iVar34);
        if (local_28f8.End < (TStringBuilderBase<wchar_t> *)(local_28f8.CurPos + 1)) {
          TStringBuilderBase<wchar_t>::Extend(&local_28f8,1);
        }
        *local_28f8.CurPos = L'\0';
        ::FString::FString(&local_5f38,local_28f8.Base);
        pFVar24 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar24 <= (FScriptContainerElement *)&local_5f38) &&
            ((FScriptContainerElement *)&local_5f38 <
             pFVar24 + (longlong)(this->ExportDiffs).ArrayMax * 0x10)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar34 = (this->ExportDiffs).ArrayNum;
        if (iVar34 == (this->ExportDiffs).ArrayMax) {
          iVar34 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar1->AllocatorInstance,&(this->ExportDiffs).ArrayMax);
        }
        (this->ExportDiffs).ArrayNum = iVar34 + 1;
        pFVar24 = (pTVar1->AllocatorInstance).Data + (longlong)iVar34 * 0x10;
        *(undefined8 *)pFVar24 = 0;
        *(FScriptContainerElement **)pFVar24 = local_5f38.Data.AllocatorInstance.Data;
        *(int *)(pFVar24 + 8) = local_5f38.Data.ArrayNum;
        *(int *)(pFVar24 + 0xc) = local_5f38.Data.ArrayMax;
        local_5f38.Data.ArrayNum = 0;
        local_5f38.Data.ArrayMax = 0;
        local_5f38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_28f8);
        uStack_5d30 = CONCAT44(uStack_5d30._4_4_,(uint)uStack_5d30 & ~uStack_5d3c);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_5d48 + 8));
        bVar9 = TSparseArray<TSparseSetElement<FPackageIndex>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForIterator::operator!=((TRangedForIterator *)local_5d48,&local_5c28);
        lVar37 = local_6000;
      } while (bVar9);
    }
  }
  lVar33 = local_6020;
  uVar36 = uVar36 + *(int *)(lVar37 + 0x58);
  uVar12 = uVar12 + *(int *)(local_6020 + 0x58);
  if (*(int *)(local_6020 + 0x5c) == *(int *)(lVar37 + 0x5c)) goto LAB_1420bb38c;
  TSet<FPackageIndex,DefaultKeyFuncs<FPackageIndex,0>,FDefaultSetAllocator>::Reset
            ((TSet<FPackageIndex,DefaultKeyFuncs<FPackageIndex,0>,FDefaultSetAllocator> *)local_5aa8
            );
  uVar29 = uVar36;
  if (0 < *(int *)(lVar37 + 0x5c)) {
    do {
      uVar15 = 0;
      if ((int)uVar29 < (int)param_3[1]._padding_) {
        uVar15 = ~uVar29 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      TSet<FPackageIndex,DefaultKeyFuncs<FPackageIndex,0>,FDefaultSetAllocator>::
      Emplace<FPackageIndex_const_&>
                ((TSet<FPackageIndex,DefaultKeyFuncs<FPackageIndex,0>,FDefaultSetAllocator> *)
                 local_5aa8,&local_5df0,(bool *)(param_3[1]._padding_ + (longlong)(int)uVar29 * 4));
      uVar29 = uVar29 + 1;
    } while ((int)(uVar29 - uVar36) < *(int *)(lVar37 + 0x5c));
  }
  if (*(int *)(lVar33 + 0x5c) < 1) goto LAB_1420baf47;
  lVar33 = (longlong)(int)uVar12 << 2;
  plVar2 = &param_1->_padding_;
  uVar29 = uVar12;
LAB_1420baa40:
  uVar15 = 0;
  if ((int)uVar29 < (int)param_1[1]._padding_) {
    uVar15 = ~uVar29 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FVar13.Index = *(int *)(param_1[1]._padding_ + lVar33);
  if ((FVar13.Index == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Index.IsNull()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Linker.h"
                         ,0x59,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (FVar13.Index < 0) {
    pFVar18 = FLinkerTables::Imp((FLinkerTables *)plVar2,FVar13);
    uVar10 = SUB81(pFVar18,0);
  }
  else {
    pFVar21 = FLinkerTables::Exp((FLinkerTables *)plVar2,FVar13);
    uVar10 = SUB81(pFVar21,0);
  }
  FindResourcePackageIndex
            ((FObjectResource *)(local_5eb0 + 4),(bool)uVar10,
             (FLinker *)(ulonglong)((uint)FVar13.Index >> 0x1f),param_1);
  if (local_5aa8._8_4_ != local_5a74) {
    FVar26 = (ForElementType<FSetElementId>)local_5a70;
    if (local_5a68 != (ForElementType<FSetElementId>)0x0) {
      FVar26 = local_5a68;
    }
    for (uVar15 = *(uint *)((longlong)FVar26 + (ulonglong)(local_5a60 - 1U & local_5eb0._4_4_) * 4);
        uVar15 != 0xffffffff; uVar15 = *(uint *)(local_5aa8._0_8_ + (longlong)(int)uVar15 * 0xc + 4)
        ) {
      if (*(uint *)(local_5aa8._0_8_ + (longlong)(int)uVar15 * 0xc) == local_5eb0._4_4_) {
        if (((int)uVar15 < 0) || ((int)local_5a80 <= (int)uVar15)) {
LAB_1420bac22:
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Elements.IsValidIndex(ElementIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                             ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex")
          ;
          if (bVar9) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        else {
          FVar25 = (ForElementType<unsigned_int>)((longlong)local_5aa8 + 0x10);
          if (local_5a88 != (ForElementType<unsigned_int>)0x0) {
            FVar25 = local_5a88;
          }
          uVar14 = uVar15;
          if ((int)uVar15 < 0) {
            uVar14 = uVar15 + 0x1f;
          }
          if ((*(uint *)((longlong)FVar25 + (longlong)((int)uVar14 >> 5) * 4) >> (uVar15 & 0x1f) & 1
              ) == 0) goto LAB_1420bac22;
        }
        uVar8 = local_5aa8._0_8_;
        FVar26 = (ForElementType<FSetElementId>)local_5a70;
        if (local_5a68 != (ForElementType<FSetElementId>)0x0) {
          FVar26 = local_5a68;
        }
        pFVar24 = (FScriptContainerElement *)
                  ((longlong)FVar26 +
                  (longlong)*(int *)(local_5aa8._0_8_ + (longlong)(int)uVar15 * 0xc + 8) * 4);
        goto LAB_1420bac78;
      }
    }
  }
  local_20d8.Base = local_20b8;
  local_20d8.bIsDynamic = false;
  local_20d8.bIsExternal = false;
  local_20d8.CurPos = local_20b8;
  local_20d8.End = (wchar_t *)&local_18b8;
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            (&local_20d8,L"Missing RHS CreateBeforeSerializationDependencies Preload Dependencies ",
             0x47);
  if (FVar13.Index < 0) {
    FLinkerTables::GetImportPathName((FLinkerTables *)plVar2,&local_5f08,-1 - FVar13.Index);
  }
  else if (FVar13.Index < 1) {
    local_5f08.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_5f08.Data.ArrayNum = 0;
    local_5f08.Data.ArrayMax = 0;
  }
  else {
    pFVar20 = UObjectBaseUtility::GetPathName
                        ((UObjectBaseUtility *)param_1->LinkerRoot,&local_5c88,(UObject *)0x0);
    FLinkerTables::GetExportPathName
              ((FLinkerTables *)plVar2,&local_5f08,pFVar20,FVar13.Index + -1,false);
    if (local_5c88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5c88.Data.AllocatorInstance.Data);
    }
  }
  iVar34 = local_5f08.Data.ArrayNum + -1;
  if (local_5f08.Data.ArrayNum == 0) {
    iVar34 = 0;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            (&local_20d8,(wchar_t *)local_5f08.Data.AllocatorInstance.Data,iVar34);
  if (local_5f08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5f08.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_20d8,L" for resource ",0xe);
  iVar34 = local_6030.Data.ArrayNum + -1;
  if (local_6030.Data.ArrayNum == 0) {
    iVar34 = 0;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            (&local_20d8,(wchar_t *)local_6030.Data.AllocatorInstance.Data,iVar34);
  if (local_20d8.End < (TStringBuilderBase<wchar_t> *)(local_20d8.CurPos + 1)) {
    TStringBuilderBase<wchar_t>::Extend(&local_20d8,1);
  }
  *local_20d8.CurPos = L'\0';
  ::FString::FString(&local_5f28,local_20d8.Base);
  pFVar24 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar24 <= (FScriptContainerElement *)&local_5f28) &&
      ((FScriptContainerElement *)&local_5f28 <
       pFVar24 + (longlong)(this->ExportDiffs).ArrayMax * 0x10)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar34 = (this->ExportDiffs).ArrayNum;
  piVar3 = &(this->ExportDiffs).ArrayMax;
  if (iVar34 == *piVar3) {
    iVar34 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&pTVar1->AllocatorInstance,piVar3);
  }
  (this->ExportDiffs).ArrayNum = iVar34 + 1;
  pFVar24 = (pTVar1->AllocatorInstance).Data + (longlong)iVar34 * 0x10;
  *(undefined8 *)pFVar24 = 0;
  *(FScriptContainerElement **)pFVar24 = local_5f28.Data.AllocatorInstance.Data;
  *(int *)(pFVar24 + 8) = local_5f28.Data.ArrayNum;
  *(int *)(pFVar24 + 0xc) = local_5f28.Data.ArrayMax;
  local_5f28.Data.ArrayNum = 0;
  local_5f28.Data.ArrayMax = 0;
  local_5f28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_20d8);
  goto LAB_1420baf12;
LAB_1420bac78:
  uVar14 = *(uint *)pFVar24;
  if (uVar14 == 0xffffffff) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("NextElementIndex != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                       ,0x2b5,L"Corrupt hash");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else if (uVar14 == uVar15) goto LAB_1420bacc4;
  pFVar24 = (FScriptContainerElement *)(local_5aa8._0_8_ + ((longlong)(int)uVar14 * 3 + 1) * 4);
  goto LAB_1420bac78;
LAB_1420bacc4:
  *(uint *)pFVar24 = *(uint *)(uVar8 + (longlong)(int)uVar15 * 0xc + 4);
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_5aa8,uVar15,1);
LAB_1420baf12:
  uVar29 = uVar29 + 1;
  lVar33 = lVar33 + 4;
  lVar37 = local_6000;
  if (*(int *)(local_6020 + 0x5c) <= (int)(uVar29 - uVar12)) goto LAB_1420baf47;
  goto LAB_1420baa40;
LAB_1420bb6c8:
  uVar14 = *(uint *)pFVar24;
  if (uVar14 == 0xffffffff) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("NextElementIndex != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                       ,0x2b5,L"Corrupt hash");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else if (uVar14 == uVar15) goto LAB_1420bb714;
  pFVar24 = (FScriptContainerElement *)(local_5aa8._0_8_ + ((longlong)(int)uVar14 * 3 + 1) * 4);
  goto LAB_1420bb6c8;
LAB_1420bb714:
  *(uint *)pFVar24 = *(uint *)(uVar8 + (longlong)(int)uVar15 * 0xc + 4);
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_5aa8,uVar15,1);
LAB_1420bb942:
  uVar29 = uVar29 + 1;
  lVar33 = lVar33 + 4;
  if (*(int *)(local_6020 + 0x60) <= (int)(uVar29 - uVar12)) goto LAB_1420bb96d;
  goto LAB_1420bb480;
LAB_1420bc180:
  uVar15 = *(uint *)pFVar24;
  if (uVar15 == 0xffffffff) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("NextElementIndex != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                       ,0x2b5,L"Corrupt hash");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else if (uVar15 == uVar29) goto LAB_1420bc1cc;
  pFVar24 = (FScriptContainerElement *)(local_5aa8._0_8_ + ((longlong)(int)uVar15 * 3 + 1) * 4);
  goto LAB_1420bc180;
LAB_1420bc1cc:
  *(uint *)pFVar24 = *(uint *)(uVar8 + (longlong)(int)uVar29 * 0xc + 4);
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_5aa8,uVar29,1);
LAB_1420bc48b:
  uVar36 = uVar36 + 1;
  lVar33 = lVar33 + 4;
  if (*(int *)(local_6020 + 100) <= (int)(uVar36 - uVar12)) goto LAB_1420bc4bc;
  goto LAB_1420bbf40;
LAB_1420b9819:
  *(int *)pFVar28 = *(int *)(uVar8 + (longlong)iVar11 * 0x18 + 0x10);
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_5a58,iVar11,1);
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_5a58,iVar11,1);
  uVar16 = local_6008 & 0xffffffff;
  FVar38.Data = FVar38.Data + 0x10;
  goto LAB_1420b9710;
LAB_1420baf47:
  local_5ea0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_5aa8 + 0x10);
  local_5ea0._padding_._4_4_ = 1;
  local_5ea0._padding_._0_4_ = 0;
  local_5ea0.UnvisitedBitMask = 0xffffffff;
  local_5ea0.CurrentBitIndex = 0;
  local_5ea0.BaseBitIndex = 0;
  if (local_5a80 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_5ea0);
  }
  uStack_6058 = CONCAT44(local_5ea0._padding_._4_4_,(undefined4)local_5ea0._padding_);
  local_6060 = (longlong *)local_5aa8;
  uStack_6048 = CONCAT44(local_5ea0.CurrentBitIndex,local_5ea0.UnvisitedBitMask);
  uStack_6040 = CONCAT44(local_5ea0._28_4_,local_5ea0.BaseBitIndex);
  local_6038 = local_5aa8._8_4_ - local_5a74;
  pTStack_6050 = local_5ea0.Array;
  uStack_5db0._4_4_ = uStack_6034;
  uStack_5db0._0_4_ = local_6038;
  local_5dc8 = local_5ea0.Array;
  local_5dd8._0_8_ = local_6060;
  unique0x1000461e = uStack_6058;
  uStack_5dc0 = uStack_6048;
  local_5db8 = uStack_6040;
  pTVar17 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_5ae8,(TBitArray<FDefaultBitArrayAllocator> *)(local_5aa8 + 0x10),
                       local_5a80);
  local_6060 = (longlong *)local_5aa8;
  uStack_6058 = pTVar17->_padding_;
  pTStack_6050 = pTVar17->Array;
  uStack_6048._0_4_ = pTVar17->UnvisitedBitMask;
  uStack_6048._4_4_ = pTVar17->CurrentBitIndex;
  uStack_6040 = *(longlong *)&pTVar17->BaseBitIndex;
  local_6038 = local_5aa8._8_4_ - local_5a74;
  local_5bf8._44_4_ = uStack_6034;
  local_5bf8.InitialNum = local_6038;
  local_5bf8._padding_ = (longlong)local_6060;
  local_5bf8._padding_ = uStack_6058;
  local_5bf8._padding_ = (longlong)pTStack_6050;
  local_5bf8._padding_ = uStack_6048;
  local_5bf8._padding_ = uStack_6040;
  bVar9 = TSparseArray<TSparseSetElement<FPackageIndex>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!=((TRangedForIterator *)local_5dd8,&local_5bf8);
  if (bVar9) {
    do {
      local_18b8.bIsDynamic = false;
      local_18b8.bIsExternal = false;
      local_18b8.Base = local_1898;
      local_18b8.CurPos = local_1898;
      local_18b8.End = (wchar_t *)&local_1098;
      iVar34 = *(int *)(*(longlong *)local_5dd8._0_8_ + (longlong)uStack_5dc0._4_4_ * 0xc);
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                (&local_18b8,L"New RHS CreateBeforeSerializationDependencies Preload Dependencies ",
                 0x43);
      if (iVar34 < 0) {
        FLinkerTables::GetImportPathName
                  ((FLinkerTables *)&param_3->_padding_,&local_5ef8,-1 - iVar34);
      }
      else if (iVar34 < 1) {
        local_5ef8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_5ef8.Data.ArrayNum = 0;
        local_5ef8.Data.ArrayMax = 0;
      }
      else {
        pFVar20 = UObjectBaseUtility::GetPathName
                            ((UObjectBaseUtility *)param_3->LinkerRoot,&local_5c78,(UObject *)0x0);
        FLinkerTables::GetExportPathName
                  ((FLinkerTables *)&param_3->_padding_,&local_5ef8,pFVar20,iVar34 + -1,false);
        if (local_5c78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5c78.Data.AllocatorInstance.Data);
        }
      }
      iVar34 = local_5ef8.Data.ArrayNum + -1;
      if (local_5ef8.Data.ArrayNum == 0) {
        iVar34 = 0;
      }
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                (&local_18b8,(wchar_t *)local_5ef8.Data.AllocatorInstance.Data,iVar34);
      if (local_5ef8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5ef8.Data.AllocatorInstance.Data);
      }
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_18b8,L" for resource ",0xe);
      iVar34 = local_6030.Data.ArrayNum + -1;
      if (local_6030.Data.ArrayNum == 0) {
        iVar34 = 0;
      }
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                (&local_18b8,(wchar_t *)local_6030.Data.AllocatorInstance.Data,iVar34);
      if (local_18b8.End < (TStringBuilderBase<wchar_t> *)(local_18b8.CurPos + 1)) {
        TStringBuilderBase<wchar_t>::Extend(&local_18b8,1);
      }
      *local_18b8.CurPos = L'\0';
      ::FString::FString(&local_5f18,local_18b8.Base);
      pFVar24 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar24 <= (FScriptContainerElement *)&local_5f18) &&
          ((FScriptContainerElement *)&local_5f18 <
           pFVar24 + (longlong)(this->ExportDiffs).ArrayMax * 0x10)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar34 = (this->ExportDiffs).ArrayNum;
      if (iVar34 == (this->ExportDiffs).ArrayMax) {
        iVar34 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar1->AllocatorInstance,&(this->ExportDiffs).ArrayMax);
      }
      (this->ExportDiffs).ArrayNum = iVar34 + 1;
      pFVar24 = (pTVar1->AllocatorInstance).Data + (longlong)iVar34 * 0x10;
      *(undefined8 *)pFVar24 = 0;
      *(FScriptContainerElement **)pFVar24 = local_5f18.Data.AllocatorInstance.Data;
      *(int *)(pFVar24 + 8) = local_5f18.Data.ArrayNum;
      *(int *)(pFVar24 + 0xc) = local_5f18.Data.ArrayMax;
      local_5f18.Data.ArrayNum = 0;
      local_5f18.Data.ArrayMax = 0;
      local_5f18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_18b8);
      uStack_5dc0 = CONCAT44(uStack_5dc0._4_4_,(uint)uStack_5dc0 & ~uStack_5dcc);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_5dd8 + 8));
      bVar9 = TSparseArray<TSparseSetElement<FPackageIndex>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!=((TRangedForIterator *)local_5dd8,&local_5bf8);
      lVar37 = local_6000;
    } while (bVar9);
  }
LAB_1420bb38c:
  lVar33 = local_6020;
  uVar36 = uVar36 + *(int *)(lVar37 + 0x5c);
  uVar12 = uVar12 + *(int *)(local_6020 + 0x5c);
  if (*(int *)(local_6020 + 0x60) != *(int *)(lVar37 + 0x60)) {
    TSet<FPackageIndex,DefaultKeyFuncs<FPackageIndex,0>,FDefaultSetAllocator>::Reset
              ((TSet<FPackageIndex,DefaultKeyFuncs<FPackageIndex,0>,FDefaultSetAllocator> *)
               local_5aa8);
    uVar29 = uVar36;
    if (0 < *(int *)(lVar37 + 0x60)) {
      do {
        uVar15 = 0;
        if ((int)uVar29 < (int)param_3[1]._padding_) {
          uVar15 = ~uVar29 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        TSet<FPackageIndex,DefaultKeyFuncs<FPackageIndex,0>,FDefaultSetAllocator>::
        Emplace<FPackageIndex_const_&>
                  ((TSet<FPackageIndex,DefaultKeyFuncs<FPackageIndex,0>,FDefaultSetAllocator> *)
                   local_5aa8,&local_5dec,(bool *)(param_3[1]._padding_ + (longlong)(int)uVar29 * 4)
                  );
        uVar29 = uVar29 + 1;
        lVar33 = local_6020;
      } while ((int)(uVar29 - uVar36) < *(int *)(lVar37 + 0x60));
    }
    if (0 < *(int *)(lVar33 + 0x60)) {
      lVar33 = (longlong)(int)uVar12 << 2;
      plVar2 = &param_1->_padding_;
      uVar29 = uVar12;
LAB_1420bb480:
      uVar15 = 0;
      if ((int)uVar29 < (int)param_1[1]._padding_) {
        uVar15 = ~uVar29 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar13.Index = *(int *)(param_1[1]._padding_ + lVar33);
      if ((FVar13.Index == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("!Index.IsNull()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Linker.h"
                             ,0x59,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (FVar13.Index < 0) {
        pFVar18 = FLinkerTables::Imp((FLinkerTables *)plVar2,FVar13);
        uVar10 = SUB81(pFVar18,0);
      }
      else {
        pFVar21 = FLinkerTables::Exp((FLinkerTables *)plVar2,FVar13);
        uVar10 = SUB81(pFVar21,0);
      }
      FindResourcePackageIndex
                ((FObjectResource *)(local_5eb8 + 4),(bool)uVar10,
                 (FLinker *)(ulonglong)((uint)FVar13.Index >> 0x1f),param_1);
      if (local_5aa8._8_4_ != local_5a74) {
        FVar26 = (ForElementType<FSetElementId>)local_5a70;
        if (local_5a68 != (ForElementType<FSetElementId>)0x0) {
          FVar26 = local_5a68;
        }
        for (uVar15 = *(uint *)((longlong)FVar26 +
                               (ulonglong)(local_5a60 - 1U & local_5eb8._4_4_) * 4);
            uVar15 != 0xffffffff;
            uVar15 = *(uint *)(local_5aa8._0_8_ + (longlong)(int)uVar15 * 0xc + 4)) {
          if (*(uint *)(local_5aa8._0_8_ + (longlong)(int)uVar15 * 0xc) == local_5eb8._4_4_) {
            if (((int)uVar15 < 0) || ((int)local_5a80 <= (int)uVar15)) {
LAB_1420bb672:
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Elements.IsValidIndex(ElementIndex)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                 ,0x2ab,
                                 L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
              if (bVar9) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            else {
              FVar25 = (ForElementType<unsigned_int>)((longlong)local_5aa8 + 0x10);
              if (local_5a88 != (ForElementType<unsigned_int>)0x0) {
                FVar25 = local_5a88;
              }
              uVar14 = uVar15;
              if ((int)uVar15 < 0) {
                uVar14 = uVar15 + 0x1f;
              }
              if ((*(uint *)((longlong)FVar25 + (longlong)((int)uVar14 >> 5) * 4) >> (uVar15 & 0x1f)
                  & 1) == 0) goto LAB_1420bb672;
            }
            uVar8 = local_5aa8._0_8_;
            FVar26 = (ForElementType<FSetElementId>)local_5a70;
            if (local_5a68 != (ForElementType<FSetElementId>)0x0) {
              FVar26 = local_5a68;
            }
            pFVar24 = (FScriptContainerElement *)
                      ((longlong)FVar26 +
                      (longlong)*(int *)(local_5aa8._0_8_ + (longlong)(int)uVar15 * 0xc + 8) * 4);
            goto LAB_1420bb6c8;
          }
        }
      }
      local_1098.Base = local_1078;
      local_1098.bIsDynamic = false;
      local_1098.bIsExternal = false;
      local_1098.CurPos = local_1078;
      local_1098.End = (wchar_t *)&local_878;
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                (&local_1098,
                 L"Missing RHS SerializationBeforeCreateDependencies Preload Dependencies ",0x47);
      if (FVar13.Index < 0) {
        FLinkerTables::GetImportPathName((FLinkerTables *)plVar2,&local_5ec8,-1 - FVar13.Index);
      }
      else if (FVar13.Index < 1) {
        local_5ec8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_5ec8.Data.ArrayNum = 0;
        local_5ec8.Data.ArrayMax = 0;
      }
      else {
        pFVar20 = UObjectBaseUtility::GetPathName
                            ((UObjectBaseUtility *)param_1->LinkerRoot,&local_5c68,(UObject *)0x0);
        FLinkerTables::GetExportPathName
                  ((FLinkerTables *)plVar2,&local_5ec8,pFVar20,FVar13.Index + -1,false);
        if (local_5c68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5c68.Data.AllocatorInstance.Data);
        }
      }
      iVar34 = local_5ec8.Data.ArrayNum + -1;
      if (local_5ec8.Data.ArrayNum == 0) {
        iVar34 = 0;
      }
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                (&local_1098,(wchar_t *)local_5ec8.Data.AllocatorInstance.Data,iVar34);
      if (local_5ec8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5ec8.Data.AllocatorInstance.Data);
      }
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_1098,L" for resource ",0xe);
      iVar34 = local_6030.Data.ArrayNum + -1;
      if (local_6030.Data.ArrayNum == 0) {
        iVar34 = 0;
      }
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                (&local_1098,(wchar_t *)local_6030.Data.AllocatorInstance.Data,iVar34);
      if (local_1098.End < (TStringBuilderBase<wchar_t> *)(local_1098.CurPos + 1)) {
        TStringBuilderBase<wchar_t>::Extend(&local_1098,1);
      }
      *local_1098.CurPos = L'\0';
      ::FString::FString(&local_5fc8,local_1098.Base);
      pFVar24 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar24 <= (FScriptContainerElement *)&local_5fc8) &&
          ((FScriptContainerElement *)&local_5fc8 <
           pFVar24 + (longlong)(this->ExportDiffs).ArrayMax * 0x10)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar34 = (this->ExportDiffs).ArrayNum;
      piVar3 = &(this->ExportDiffs).ArrayMax;
      if (iVar34 == *piVar3) {
        iVar34 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar1->AllocatorInstance,piVar3);
      }
      (this->ExportDiffs).ArrayNum = iVar34 + 1;
      pFVar24 = (pTVar1->AllocatorInstance).Data + (longlong)iVar34 * 0x10;
      *(undefined8 *)pFVar24 = 0;
      *(FScriptContainerElement **)pFVar24 = local_5fc8.Data.AllocatorInstance.Data;
      *(int *)(pFVar24 + 8) = local_5fc8.Data.ArrayNum;
      *(int *)(pFVar24 + 0xc) = local_5fc8.Data.ArrayMax;
      local_5fc8.Data.ArrayNum = 0;
      local_5fc8.Data.ArrayMax = 0;
      local_5fc8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1098);
      goto LAB_1420bb942;
    }
LAB_1420bb96d:
    local_5e80.UnvisitedBitMask = 0xffffffff;
    local_5e80._padding_._0_4_ = 0;
    local_5e80.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_5aa8 + 0x10);
    local_5e80._padding_._4_4_ = 1;
    local_5e80.CurrentBitIndex = 0;
    local_5e80.BaseBitIndex = 0;
    if (local_5a80 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_5e80);
    }
    uStack_6058 = CONCAT44(local_5e80._padding_._4_4_,(undefined4)local_5e80._padding_);
    local_6060 = (longlong *)local_5aa8;
    uStack_6048._4_4_ = local_5e80.CurrentBitIndex;
    uStack_6048._0_4_ = local_5e80.UnvisitedBitMask;
    uStack_6040._4_4_ = local_5e80._28_4_;
    uStack_6040._0_4_ = local_5e80.BaseBitIndex;
    local_6038 = local_5aa8._8_4_ - local_5a74;
    pTStack_6050 = local_5e80.Array;
    uStack_5cf0 = CONCAT44(uStack_6034,local_6038);
    TStack_5d10.Array = local_5e80.Array;
    local_5d18 = local_6060;
    TStack_5d10._padding_ = uStack_6058;
    TStack_5d10._16_8_ = uStack_6048;
    TStack_5d10._24_8_ = uStack_6040;
    pTVar17 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (&local_5b08,(TBitArray<FDefaultBitArrayAllocator> *)(local_5aa8 + 0x10),
                         local_5a80);
    uStack_6058 = pTVar17->_padding_;
    pTVar7 = pTVar17->Array;
    lVar33._0_4_ = pTVar17->UnvisitedBitMask;
    lVar33._4_4_ = pTVar17->CurrentBitIndex;
    uStack_6040 = *(longlong *)&pTVar17->BaseBitIndex;
    pTStack_6050 = pTVar7;
    uStack_6048 = lVar33;
    while( true ) {
      plVar2 = local_5d18;
      if ((int)local_5d18[1] - *(int *)((longlong)local_5d18 + 0x34) != (int)uStack_5cf0) {
        local_6065 = 0;
        `TSparseArray<TSparseSetElement<FPackageIndex>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_6065);
      }
      if (((TStack_5d10.CurrentBitIndex == lVar33._4_4_) && (TStack_5d10.Array == pTVar7)) &&
         (lVar37 = local_6000, plVar2 == (longlong *)local_5aa8)) break;
      local_59b8.Base = local_5998;
      local_59b8.bIsDynamic = false;
      local_59b8.bIsExternal = false;
      local_59b8.CurPos = local_5998;
      iVar34 = *(int *)(*plVar2 + (longlong)TStack_5d10.CurrentBitIndex * 0xc);
      local_59b8.End = (wchar_t *)&local_5198;
      pvVar19 = FGenericPlatformString::Memcpy
                          (local_5998,
                           L"New RHS SerializationBeforeCreateDependencies Preload Dependencies ",
                           0x86);
      local_59b8.CurPos = (wchar_t *)((longlong)pvVar19 + 0x86);
      if (iVar34 < 0) {
        FLinkerTables::GetImportPathName
                  ((FLinkerTables *)&param_3->_padding_,&local_5fb8,-1 - iVar34);
      }
      else if (iVar34 < 1) {
        local_5fb8.Data.ArrayMax = 0;
        local_5fb8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_5fb8.Data.ArrayNum = 0;
      }
      else {
        pFVar20 = UObjectBaseUtility::GetPathName
                            ((UObjectBaseUtility *)param_3->LinkerRoot,&local_5c58,(UObject *)0x0);
        FLinkerTables::GetExportPathName
                  ((FLinkerTables *)&param_3->_padding_,&local_5fb8,pFVar20,iVar34 + -1,false);
        if (local_5c58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5c58.Data.AllocatorInstance.Data);
        }
      }
      FVar38.Data = local_5fb8.Data.AllocatorInstance.Data;
      iVar34 = local_5fb8.Data.ArrayNum + -1;
      if (local_5fb8.Data.ArrayNum == 0) {
        iVar34 = 0;
      }
      uVar35 = (ulong64)iVar34;
      if (local_59b8.End < (TStringBuilderBase<wchar_t> *)(local_59b8.CurPos + uVar35)) {
        TStringBuilderBase<wchar_t>::Extend(&local_59b8,uVar35);
      }
      if (iVar34 != 0) {
        pvVar19 = FGenericPlatformString::Memcpy(local_59b8.CurPos,FVar38.Data,uVar35 * 2);
        local_59b8.CurPos = (wchar_t *)((longlong)pvVar19 + uVar35 * 2);
      }
      if (local_5fb8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5fb8.Data.AllocatorInstance.Data);
      }
      if (local_59b8.End < (TStringBuilderBase<wchar_t> *)(local_59b8.CurPos + 0xe)) {
        TStringBuilderBase<wchar_t>::Extend(&local_59b8,0xe);
      }
      pvVar19 = FGenericPlatformString::Memcpy(local_59b8.CurPos,L" for resource ",0x1c);
      FVar38.Data = local_6030.Data.AllocatorInstance.Data;
      local_59b8.CurPos = (wchar_t *)((longlong)pvVar19 + 0x1c);
      iVar34 = local_6030.Data.ArrayNum + -1;
      if (local_6030.Data.ArrayNum == 0) {
        iVar34 = 0;
      }
      uVar35 = (ulong64)iVar34;
      if (local_59b8.End < (TStringBuilderBase<wchar_t> *)(local_59b8.CurPos + uVar35)) {
        TStringBuilderBase<wchar_t>::Extend(&local_59b8,uVar35);
      }
      if (iVar34 != 0) {
        pvVar19 = FGenericPlatformString::Memcpy(local_59b8.CurPos,FVar38.Data,uVar35 * 2);
        local_59b8.CurPos = (wchar_t *)(uVar35 * 2 + (longlong)pvVar19);
      }
      if (local_59b8.End < (TStringBuilderBase<wchar_t> *)(local_59b8.CurPos + 1)) {
        TStringBuilderBase<wchar_t>::Extend(&local_59b8,1);
      }
      *local_59b8.CurPos = L'\0';
      ::FString::FString(&local_5fa8,local_59b8.Base);
      pFVar24 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar24 <= (FScriptContainerElement *)&local_5fa8) &&
          ((FScriptContainerElement *)&local_5fa8 <
           pFVar24 + (longlong)(this->ExportDiffs).ArrayMax * 0x10)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar34 = (this->ExportDiffs).ArrayNum;
      piVar3 = &(this->ExportDiffs).ArrayMax;
      if (iVar34 == *piVar3) {
        iVar34 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar1->AllocatorInstance,piVar3);
      }
      (this->ExportDiffs).ArrayNum = iVar34 + 1;
      pFVar24 = (pTVar1->AllocatorInstance).Data + (longlong)iVar34 * 0x10;
      *(undefined8 *)pFVar24 = 0;
      *(FScriptContainerElement **)pFVar24 = local_5fa8.Data.AllocatorInstance.Data;
      *(int *)(pFVar24 + 8) = local_5fa8.Data.ArrayNum;
      *(int *)(pFVar24 + 0xc) = local_5fa8.Data.ArrayMax;
      local_5fa8.Data.ArrayNum = 0;
      local_5fa8.Data.ArrayMax = 0;
      local_5fa8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_59b8);
      TStack_5d10.UnvisitedBitMask = TStack_5d10.UnvisitedBitMask & ~TStack_5d10._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_5d10);
    }
  }
  lVar33 = local_6020;
  uVar12 = uVar12 + *(int *)(local_6020 + 0x60);
  uVar36 = uVar36 + *(int *)(lVar37 + 0x60);
  if (*(int *)(local_6020 + 100) != *(int *)(lVar37 + 100)) {
    if (local_5aa8._8_4_ != local_5a74) {
      TSet<FPackageIndex,DefaultKeyFuncs<FPackageIndex,0>,FDefaultSetAllocator>::UnhashElements
                ((TSet<FPackageIndex,DefaultKeyFuncs<FPackageIndex,0>,FDefaultSetAllocator> *)
                 local_5aa8);
      uVar8 = local_5aa8._8_8_;
      local_5aa8._8_8_ = local_5aa8._8_8_ & 0xffffffff00000000;
      if ((longlong)uVar8 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)local_5aa8,0,(int *)(local_5aa8 + 0xc));
      }
      local_5a78 = -1;
      local_5a74 = 0;
      local_5a80 = 0;
    }
    uVar29 = uVar36;
    if (0 < *(int *)(lVar37 + 100)) {
      do {
        uVar15 = 0;
        if ((int)uVar29 < (int)param_3[1]._padding_) {
          uVar15 = ~uVar29 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        TSet<FPackageIndex,DefaultKeyFuncs<FPackageIndex,0>,FDefaultSetAllocator>::
        Emplace<FPackageIndex_const_&>
                  ((TSet<FPackageIndex,DefaultKeyFuncs<FPackageIndex,0>,FDefaultSetAllocator> *)
                   local_5aa8,&local_5de8,(bool *)(param_3[1]._padding_ + (longlong)(int)uVar29 * 4)
                  );
        uVar29 = uVar29 + 1;
      } while ((int)(uVar29 - uVar36) < *(int *)(lVar37 + 100));
    }
    if (0 < *(int *)(lVar33 + 100)) {
      lVar33 = (longlong)(int)uVar12 << 2;
      plVar2 = &param_1->_padding_;
      uVar36 = uVar12;
LAB_1420bbf40:
      uVar29 = 0;
      if ((int)uVar36 < (int)param_1[1]._padding_) {
        uVar29 = ~uVar36 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar13.Index = *(int *)(param_1[1]._padding_ + lVar33);
      if ((FVar13.Index == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("!Index.IsNull()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Linker.h"
                             ,0x59,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (FVar13.Index < 0) {
        pFVar18 = FLinkerTables::Imp((FLinkerTables *)plVar2,FVar13);
        uVar10 = SUB81(pFVar18,0);
      }
      else {
        pFVar21 = FLinkerTables::Exp((FLinkerTables *)plVar2,FVar13);
        uVar10 = SUB81(pFVar21,0);
      }
      FindResourcePackageIndex
                ((FObjectResource *)local_5eb0,(bool)uVar10,
                 (FLinker *)(ulonglong)((uint)FVar13.Index >> 0x1f),param_1);
      if (local_5aa8._8_4_ != local_5a74) {
        FVar26 = (ForElementType<FSetElementId>)local_5a70;
        if (local_5a68 != (ForElementType<FSetElementId>)0x0) {
          FVar26 = local_5a68;
        }
        for (uVar29 = *(uint *)((longlong)FVar26 +
                               (ulonglong)(local_5a60 - 1U & local_5eb0._0_4_) * 4);
            uVar29 != 0xffffffff;
            uVar29 = *(uint *)(local_5aa8._0_8_ + (longlong)(int)uVar29 * 0xc + 4)) {
          if (*(uint *)(local_5aa8._0_8_ + (longlong)(int)uVar29 * 0xc) == local_5eb0._0_4_) {
            if (((int)uVar29 < 0) || ((int)local_5a80 <= (int)uVar29)) {
LAB_1420bc124:
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Elements.IsValidIndex(ElementIndex)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                 ,0x2ab,
                                 L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
              if (bVar9) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            else {
              FVar25 = (ForElementType<unsigned_int>)((longlong)local_5aa8 + 0x10);
              if (local_5a88 != (ForElementType<unsigned_int>)0x0) {
                FVar25 = local_5a88;
              }
              uVar15 = uVar29;
              if ((int)uVar29 < 0) {
                uVar15 = uVar29 + 0x1f;
              }
              if ((*(uint *)((longlong)FVar25 + (longlong)((int)uVar15 >> 5) * 4) >> (uVar29 & 0x1f)
                  & 1) == 0) goto LAB_1420bc124;
            }
            uVar8 = local_5aa8._0_8_;
            FVar26 = (ForElementType<FSetElementId>)local_5a70;
            if (local_5a68 != (ForElementType<FSetElementId>)0x0) {
              FVar26 = local_5a68;
            }
            pFVar24 = (FScriptContainerElement *)
                      ((longlong)FVar26 +
                      (longlong)*(int *)(local_5aa8._0_8_ + (longlong)(int)uVar29 * 0xc + 8) * 4);
            goto LAB_1420bc180;
          }
        }
      }
      local_5198.Base = local_5178;
      local_5198.bIsDynamic = false;
      local_5198.bIsExternal = false;
      local_5198.CurPos = local_5178;
      local_5198.End = (wchar_t *)&local_4978;
      pvVar19 = FGenericPlatformString::Memcpy
                          (local_5178,
                           L"Missing RHS CreateBeforeCreateDependencies Preload Dependencies ",0x80)
      ;
      local_5198.CurPos = (wchar_t *)((longlong)pvVar19 + 0x80);
      if (FVar13.Index < 0) {
        FLinkerTables::GetImportPathName((FLinkerTables *)plVar2,&local_5f98,-1 - FVar13.Index);
        iVar34 = local_5f98.Data.ArrayNum;
      }
      else if (FVar13.Index < 1) {
        iVar34 = 0;
        local_5f98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_5f98.Data.ArrayNum = 0;
        local_5f98.Data.ArrayMax = 0;
      }
      else {
        pFVar20 = UObjectBaseUtility::GetPathName
                            ((UObjectBaseUtility *)param_1->LinkerRoot,&local_5c48,(UObject *)0x0);
        FLinkerTables::GetExportPathName
                  ((FLinkerTables *)plVar2,&local_5f98,pFVar20,FVar13.Index + -1,false);
        if (local_5c48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5c48.Data.AllocatorInstance.Data);
        }
        iVar34 = local_5f98.Data.ArrayNum;
      }
      FVar38.Data = local_5f98.Data.AllocatorInstance.Data;
      iVar11 = iVar34 + -1;
      if (iVar34 == 0) {
        iVar11 = 0;
      }
      uVar35 = (ulong64)iVar11;
      if (local_5198.End < (TStringBuilderBase<wchar_t> *)(local_5198.CurPos + uVar35)) {
        TStringBuilderBase<wchar_t>::Extend(&local_5198,uVar35);
      }
      if (iVar11 != 0) {
        pvVar19 = FGenericPlatformString::Memcpy(local_5198.CurPos,FVar38.Data,uVar35 * 2);
        local_5198.CurPos = (wchar_t *)((longlong)pvVar19 + uVar35 * 2);
      }
      if (local_5f98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5f98.Data.AllocatorInstance.Data);
      }
      if (local_5198.End < (TStringBuilderBase<wchar_t> *)(local_5198.CurPos + 0xe)) {
        TStringBuilderBase<wchar_t>::Extend(&local_5198,0xe);
      }
      pvVar19 = FGenericPlatformString::Memcpy(local_5198.CurPos,L" for resource ",0x1c);
      FVar38.Data = local_6030.Data.AllocatorInstance.Data;
      local_5198.CurPos = (wchar_t *)((longlong)pvVar19 + 0x1c);
      iVar34 = local_6030.Data.ArrayNum + -1;
      if (local_6030.Data.ArrayNum == 0) {
        iVar34 = 0;
      }
      uVar35 = (ulong64)iVar34;
      if (local_5198.End < (TStringBuilderBase<wchar_t> *)(local_5198.CurPos + uVar35)) {
        TStringBuilderBase<wchar_t>::Extend(&local_5198,uVar35);
      }
      if (iVar34 != 0) {
        pvVar19 = FGenericPlatformString::Memcpy(local_5198.CurPos,FVar38.Data,uVar35 * 2);
        local_5198.CurPos = (wchar_t *)(uVar35 * 2 + (longlong)pvVar19);
      }
      if (local_5198.End < (TStringBuilderBase<wchar_t> *)(local_5198.CurPos + 1)) {
        TStringBuilderBase<wchar_t>::Extend(&local_5198,1);
      }
      *local_5198.CurPos = L'\0';
      ::FString::FString(&local_5f88,local_5198.Base);
      pFVar24 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar24 <= (FScriptContainerElement *)&local_5f88) &&
          ((FScriptContainerElement *)&local_5f88 <
           pFVar24 + (longlong)(this->ExportDiffs).ArrayMax * 0x10)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar34 = (this->ExportDiffs).ArrayNum;
      piVar3 = &(this->ExportDiffs).ArrayMax;
      if (iVar34 == *piVar3) {
        iVar34 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar1->AllocatorInstance,piVar3);
      }
      (this->ExportDiffs).ArrayNum = iVar34 + 1;
      pFVar24 = (pTVar1->AllocatorInstance).Data + (longlong)iVar34 * 0x10;
      *(undefined8 *)pFVar24 = 0;
      *(FScriptContainerElement **)pFVar24 = local_5f88.Data.AllocatorInstance.Data;
      *(int *)(pFVar24 + 8) = local_5f88.Data.ArrayNum;
      *(int *)(pFVar24 + 0xc) = local_5f88.Data.ArrayMax;
      local_5f88.Data.ArrayNum = 0;
      local_5f88.Data.ArrayMax = 0;
      local_5f88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_5198);
      goto LAB_1420bc48b;
    }
LAB_1420bc4bc:
    uVar29 = local_5a80;
    uVar14 = 0;
    uVar15 = 1;
    uVar36 = 0;
    TStack_5ce0.CurrentBitIndex = uVar36;
    uVar12 = uVar36;
    if (local_5a80 != 0) {
      FVar25 = (ForElementType<unsigned_int>)((longlong)local_5aa8 + 0x10);
      if (local_5a88 != (ForElementType<unsigned_int>)0x0) {
        FVar25 = local_5a88;
      }
      uVar31 = *(uint *)FVar25;
      uVar12 = uVar14;
      uVar36 = uVar14;
      while (uVar31 == 0) {
        lVar33 = (longlong)(int)uVar36;
        uVar12 = uVar12 + 0x20;
        uVar36 = uVar36 + 1;
        TStack_5ce0.CurrentBitIndex = local_5a80;
        if ((int)((local_5a80 - 1) + ((int)(local_5a80 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar36)
        goto LAB_1420bc543;
        uVar31 = ((uint *)((longlong)FVar25 + 4))[lVar33];
      }
      uVar15 = -uVar31 & uVar31;
      uVar16 = (ulonglong)uVar15 * 2 + 1;
      lVar33 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar33 == 0; lVar33 = lVar33 + -1) {
        }
      }
      local_5de4 = (int)lVar33;
      TStack_5ce0.CurrentBitIndex = (uVar12 - 1) + local_5de4;
      if ((int)local_5a80 < TStack_5ce0.CurrentBitIndex) {
        TStack_5ce0.CurrentBitIndex = local_5a80;
      }
    }
LAB_1420bc543:
    local_6060 = (longlong *)local_5aa8;
    uVar31 = local_5a80 & 0xffffffe0;
    pTStack_6050 = (TBitArray<FDefaultBitArrayAllocator> *)(local_5aa8 + 0x10);
    local_6038 = local_5aa8._8_4_ - local_5a74;
    uStack_6048 = CONCAT44(TStack_5ce0.CurrentBitIndex,0xffffffff);
    uStack_6058 = CONCAT44(uVar15,uVar36);
    uStack_6040 = CONCAT44(local_5aac,uVar12);
    TStack_5ce0._padding_ = uStack_6058;
    iVar34 = (int)local_5a80 >> 5;
    uStack_5cc0 = CONCAT44(uStack_6034,local_6038);
    bVar23 = (byte)local_5a80;
    TStack_5ce0.UnvisitedBitMask = 0xffffffff;
    TStack_5ce0._24_8_ = uStack_6040;
    local_5ce8 = local_6060;
    TStack_5ce0.Array = pTStack_6050;
    if (((int)local_5a80 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (uVar29 != local_5a80) {
      FVar25 = (ForElementType<unsigned_int>)((longlong)local_5aa8 + 0x10);
      if (local_5a88 != (ForElementType<unsigned_int>)0x0) {
        FVar25 = local_5a88;
      }
      uVar12 = -1 << (bVar23 & 0x1f) & *(uint *)((longlong)FVar25 + (longlong)iVar34 * 4);
      while (uVar12 == 0) {
        lVar33 = (longlong)iVar34;
        uVar31 = uVar31 + 0x20;
        iVar34 = iVar34 + 1;
        uVar29 = local_5a80;
        if ((int)((local_5a80 - 1) + ((int)(local_5a80 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar34)
        goto LAB_1420bc670;
        uVar12 = ((uint *)((longlong)FVar25 + 4))[lVar33];
      }
      uVar16 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar33 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar33 == 0; lVar33 = lVar33 + -1) {
        }
      }
      local_5de0 = (int)lVar33;
      uVar29 = local_5de0 + -1 + uVar31;
      if ((int)local_5a80 < (int)uVar29) {
        uVar29 = local_5a80;
      }
    }
LAB_1420bc670:
    while( true ) {
      plVar2 = local_5ce8;
      if ((int)local_5ce8[1] - *(int *)((longlong)local_5ce8 + 0x34) != (int)uStack_5cc0) {
        local_6064[0] = 0;
        `TSparseArray<TSparseSetElement<FPackageIndex>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_6064);
      }
      if (((TStack_5ce0.CurrentBitIndex == uVar29) &&
          (TStack_5ce0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_5aa8 + 0x10))) &&
         (plVar2 == (longlong *)local_5aa8)) break;
      local_4978.Base = local_4958;
      local_4978.bIsDynamic = false;
      local_4978.bIsExternal = false;
      local_4978.CurPos = local_4958;
      iVar34 = *(int *)(*plVar2 + (longlong)TStack_5ce0.CurrentBitIndex * 0xc);
      local_4978.End = (wchar_t *)&local_4158;
      pvVar19 = FGenericPlatformString::Memcpy
                          (local_4958,
                           L"New RHS CreateBeforeCreateDependencies Preload Dependencies ",0x78);
      local_4978.CurPos = (wchar_t *)((longlong)pvVar19 + 0x78);
      if (iVar34 < 0) {
        FLinkerTables::GetImportPathName
                  ((FLinkerTables *)&param_3->_padding_,&local_5ff8,-1 - iVar34);
      }
      else if (iVar34 < 1) {
        local_5ff8.Data.ArrayMax = 0;
        local_5ff8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_5ff8.Data.ArrayNum = 0;
      }
      else {
        pFVar20 = UObjectBaseUtility::GetPathName
                            ((UObjectBaseUtility *)param_3->LinkerRoot,&local_5c38,(UObject *)0x0);
        FLinkerTables::GetExportPathName
                  ((FLinkerTables *)&param_3->_padding_,&local_5ff8,pFVar20,iVar34 + -1,false);
        if (local_5c38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5c38.Data.AllocatorInstance.Data);
        }
      }
      FVar38.Data = local_5ff8.Data.AllocatorInstance.Data;
      uVar12 = local_5ff8.Data.ArrayNum - 1;
      if (local_5ff8.Data.ArrayNum == 0) {
        uVar12 = uVar14;
      }
      uVar35 = (ulong64)(int)uVar12;
      if (local_4978.End < (TStringBuilderBase<wchar_t> *)(local_4978.CurPos + uVar35)) {
        TStringBuilderBase<wchar_t>::Extend(&local_4978,uVar35);
      }
      if (uVar12 != 0) {
        pvVar19 = FGenericPlatformString::Memcpy(local_4978.CurPos,FVar38.Data,uVar35 * 2);
        local_4978.CurPos = (wchar_t *)((longlong)pvVar19 + uVar35 * 2);
      }
      if (local_5ff8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5ff8.Data.AllocatorInstance.Data);
      }
      if (local_4978.End < (TStringBuilderBase<wchar_t> *)(local_4978.CurPos + 0xe)) {
        TStringBuilderBase<wchar_t>::Extend(&local_4978,0xe);
      }
      pvVar19 = FGenericPlatformString::Memcpy(local_4978.CurPos,L" for resource ",0x1c);
      FVar38.Data = local_6030.Data.AllocatorInstance.Data;
      local_4978.CurPos = (wchar_t *)((longlong)pvVar19 + 0x1c);
      uVar12 = local_6030.Data.ArrayNum - 1;
      if (local_6030.Data.ArrayNum == 0) {
        uVar12 = uVar14;
      }
      uVar35 = (ulong64)(int)uVar12;
      if (local_4978.End < (TStringBuilderBase<wchar_t> *)(local_4978.CurPos + uVar35)) {
        TStringBuilderBase<wchar_t>::Extend(&local_4978,uVar35);
      }
      if (uVar12 != 0) {
        pvVar19 = FGenericPlatformString::Memcpy(local_4978.CurPos,FVar38.Data,uVar35 * 2);
        local_4978.CurPos = (wchar_t *)(uVar35 * 2 + (longlong)pvVar19);
      }
      if (local_4978.End < (TStringBuilderBase<wchar_t> *)(local_4978.CurPos + 1)) {
        TStringBuilderBase<wchar_t>::Extend(&local_4978,1);
      }
      *local_4978.CurPos = L'\0';
      ::FString::FString(&local_5fe8,local_4978.Base);
      pFVar24 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar24 <= (FScriptContainerElement *)&local_5fe8) &&
          ((FScriptContainerElement *)&local_5fe8 <
           pFVar24 + (longlong)(this->ExportDiffs).ArrayMax * 0x10)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar34 = (this->ExportDiffs).ArrayNum;
      piVar3 = &(this->ExportDiffs).ArrayMax;
      if (iVar34 == *piVar3) {
        iVar34 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar1->AllocatorInstance,piVar3);
      }
      (this->ExportDiffs).ArrayNum = iVar34 + 1;
      pFVar24 = (pTVar1->AllocatorInstance).Data + (longlong)iVar34 * 0x10;
      *(undefined8 *)pFVar24 = 0;
      *(FScriptContainerElement **)pFVar24 = local_5fe8.Data.AllocatorInstance.Data;
      *(int *)(pFVar24 + 8) = local_5fe8.Data.ArrayNum;
      *(int *)(pFVar24 + 0xc) = local_5fe8.Data.ArrayMax;
      local_5fe8.Data.ArrayNum = 0;
      local_5fe8.Data.ArrayMax = 0;
      local_5fe8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_4978);
      TStack_5ce0.UnvisitedBitMask = TStack_5ce0.UnvisitedBitMask & ~TStack_5ce0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_5ce0);
    }
  }
  local_5a60 = 0;
  if (local_5a68 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_5a68);
  }
  TSparseArray<TSparseSetElement<FPackageIndex>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FPackageIndex>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FPackageIndex>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_5aa8);
LAB_1420bcbe8:
  if (local_6030.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6030.Data.AllocatorInstance.Data);
  }
  local_59c0 = 0;
  if (local_59c8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_59c8);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_5a08);
  local_5a10 = 0;
  if (local_5a18 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_5a18);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_5a58);
  DestructItems<FString,int>((FString *)local_6010.Data,(int)local_6008);
  if (local_6010.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6010.Data);
  }
  return;
}

// GenerateExportAndDependsMapDiff @ 1420bcc90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001420bd37a) */
/* WARNING: Removing unreachable block (ram,0x0001420bd914) */

void __thiscall
FLinkerDiff::GenerateExportAndDependsMapDiff(FLinkerDiff *this,FLinker *param_1,FLinker *param_2)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  FLinker *pFVar7;
  FLinkerDiff *pFVar8;
  undefined8 uVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  void *pvVar13;
  FString *pFVar14;
  byte bVar15;
  ForElementType<unsigned_int> FVar16;
  ForElementType<FSetElementId> FVar17;
  ulong64 uVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  longlong lVar21;
  FObjectExport *this_00;
  longlong *plVar22;
  uint uVar23;
  undefined1 auStackY_12a8 [32];
  undefined1 local_1258 [4];
  uint local_1254;
  FString local_1250;
  FString local_1240;
  FString local_1230;
  FString local_1220;
  FLinker *local_1210;
  FLinkerDiff *local_1208;
  longlong local_1200;
  undefined1 local_11f8 [24];
  uint uStack_11e0;
  uint uStack_11dc;
  TBitArray<FDefaultBitArrayAllocator> *local_11d8;
  undefined4 uStack_11d0;
  uint uStack_11cc;
  uint local_11c8;
  undefined4 uStack_11c4;
  int iStack_11c0;
  undefined4 uStack_11bc;
  longlong *local_11b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_11b0;
  undefined8 uStack_1190;
  FLinkerExportObject local_1188;
  longlong local_1170;
  FLinker *local_1168;
  uint local_1160;
  FLinkerExportObject local_1158;
  FString local_1140;
  FString local_1130;
  FString local_1120;
  FString local_1110 [2];
  undefined4 local_10e4;
  undefined1 local_10d8 [32];
  ForElementType<unsigned_int> local_10b8;
  uint local_10b0;
  int local_10ac;
  int local_10a8;
  int local_10a4;
  undefined1 local_10a0 [8];
  ForElementType<FSetElementId> local_1098;
  int local_1090;
  TStringBuilderBase<wchar_t> local_1088;
  wchar_t local_1068 [1024];
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1024];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x1420bccb2;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_12a8;
  uVar23 = 0;
  pTVar1 = &this->ExportDiffs;
  local_1254 = 0;
  local_10d8._0_8_ = (FScriptContainerElement *)0x0;
  local_10d8._8_8_ = 0;
  local_10b8 = (ForElementType<unsigned_int>)0x0;
  local_10b0 = 0;
  local_10ac = 0x80;
  local_10a8 = -1;
  local_10a4 = 0;
  local_1098 = (ForElementType<FSetElementId>)0x0;
  local_1090 = 0;
  local_1210 = param_2;
  local_1208 = this;
  uVar20 = uVar23;
  if (0 < (int)param_2->_padding_) {
    do {
      uVar11 = 0;
      if ((int)uVar20 < (int)param_2->_padding_) {
        uVar11 = ~uVar20 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_1170 = (longlong)(int)uVar20 * 0x68 + param_2->_padding_;
      local_1168 = param_2;
      local_1160 = uVar20;
      TSet<FLinkerExportObject,DefaultKeyFuncs<FLinkerExportObject,0>,FDefaultSetAllocator>::
      Emplace<FLinkerExportObject>
                ((TSet<FLinkerExportObject,DefaultKeyFuncs<FLinkerExportObject,0>,FDefaultSetAllocator>
                  *)local_10d8,(FLinkerExportObject *)local_11f8,(bool *)&local_1170);
      uVar20 = uVar20 + 1;
    } while ((int)uVar20 < (int)param_2->_padding_);
  }
  if (0 < (int)param_1->_padding_) {
    local_1200 = 0;
LAB_1420bcdf0:
    lVar21 = local_1200;
    uVar20 = 0;
    if ((int)uVar23 < (int)param_1->_padding_) {
      uVar20 = ~uVar23 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    this_00 = (FObjectExport *)(param_1->_padding_ + lVar21);
    local_1188.Export = this_00;
    local_1188.Linker = param_1;
    local_1188.ExportIndex = uVar23;
    uVar20 = ::GetTypeHash(&local_1188);
    if (local_10d8._8_4_ != local_10a4) {
      FVar17 = (ForElementType<FSetElementId>)local_10a0;
      if (local_1098 != (ForElementType<FSetElementId>)0x0) {
        FVar17 = local_1098;
      }
      uVar20 = *(uint *)((longlong)FVar17 + (ulonglong)(local_1090 - 1U & uVar20) * 4);
      while (uVar20 != 0xffffffff) {
        lVar21 = (longlong)(int)uVar20 * 0x20;
        bVar10 = ::operator==((FLinkerExportObject *)(local_10d8._0_8_ + lVar21),&local_1188);
        if (bVar10) {
          if (uVar20 != 0xffffffff) {
            local_1158.Export = this_00;
            local_1158.Linker = param_1;
            local_1158.ExportIndex = uVar23;
            GenerateExportDiff(local_1208,param_1,&local_1158,
                               (FLinkerExportObject *)(local_10d8._0_8_ + lVar21));
            GenerateDependsArrayDiff
                      (local_1208,param_1,uVar23,param_2,*(int *)(local_10d8._0_8_ + lVar21 + 0x10))
            ;
            if (((int)uVar20 < 0) || ((int)local_10b0 <= (int)uVar20)) {
LAB_1420bd0ad:
              bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Elements.IsValidIndex(ElementIndex)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                  ,0x2ab,
                                  L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
              if (bVar10) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            else {
              FVar16 = (ForElementType<unsigned_int>)((longlong)local_10d8 + 0x10);
              if (local_10b8 != (ForElementType<unsigned_int>)0x0) {
                FVar16 = local_10b8;
              }
              uVar11 = uVar20;
              if ((int)uVar20 < 0) {
                uVar11 = uVar20 + 0x1f;
              }
              if ((*(uint *)((longlong)FVar16 + (longlong)((int)uVar11 >> 5) * 4) >> (uVar20 & 0x1f)
                  & 1) == 0) goto LAB_1420bd0ad;
            }
            uVar9 = local_10d8._0_8_;
            FVar17 = (ForElementType<FSetElementId>)local_10a0;
            if (local_1098 != (ForElementType<FSetElementId>)0x0) {
              FVar17 = local_1098;
            }
            pFVar19 = (FScriptContainerElement *)
                      ((longlong)FVar17 + (longlong)*(int *)(local_10d8._0_8_ + lVar21 + 0x1c) * 4);
            goto LAB_1420bd100;
          }
          break;
        }
        uVar20 = *(uint *)(local_10d8._0_8_ + lVar21 + 0x18);
      }
    }
    local_1088.Base = local_1068;
    local_1088.bIsDynamic = false;
    local_1088.bIsExternal = false;
    local_1088.CurPos = local_1068;
    local_1088.End = (wchar_t *)&local_868;
    pvVar13 = FGenericPlatformString::Memcpy(local_1068,L"Missing or different RHS Export: ",0x42);
    local_1088.CurPos = (wchar_t *)((longlong)pvVar13 + 0x42);
    pFVar14 = ::FName::ToString((FName *)this_00,&local_1140);
    iVar4 = (pFVar14->Data).ArrayNum;
    pFVar19 = (pFVar14->Data).AllocatorInstance.Data;
    iVar12 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar12 = 0;
    }
    uVar18 = (ulong64)iVar12;
    if (local_1088.End < (TStringBuilderBase<wchar_t> *)(local_1088.CurPos + uVar18)) {
      TStringBuilderBase<wchar_t>::Extend(&local_1088,uVar18);
    }
    if (iVar12 != 0) {
      pvVar13 = FGenericPlatformString::Memcpy(local_1088.CurPos,pFVar19,uVar18 * 2);
      local_1088.CurPos = (wchar_t *)((longlong)pvVar13 + uVar18 * 2);
    }
    if (local_1140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1140.Data.AllocatorInstance.Data);
    }
    if (local_1088.End < (TStringBuilderBase<wchar_t> *)(local_1088.CurPos + 0xe)) {
      TStringBuilderBase<wchar_t>::Extend(&local_1088,0xe);
    }
    pvVar13 = FGenericPlatformString::Memcpy(local_1088.CurPos,L", Outer Path: ",0x1c);
    iVar12 = this_00->_padding_;
    local_1088.CurPos = (wchar_t *)((longlong)pvVar13 + 0x1c);
    if (iVar12 < 0) {
      FLinkerTables::GetImportPathName((FLinkerTables *)&param_1->_padding_,&local_1250,-1 - iVar12)
      ;
    }
    else if (iVar12 < 1) {
      local_1250.Data.ArrayMax = 0;
      local_1250.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1250.Data.ArrayNum = 0;
    }
    else {
      pFVar14 = UObjectBaseUtility::GetPathName
                          ((UObjectBaseUtility *)param_1->LinkerRoot,&local_1130,(UObject *)0x0);
      FLinkerTables::GetExportPathName
                ((FLinkerTables *)&param_1->_padding_,&local_1250,pFVar14,iVar12 + -1,false);
      uVar20 = local_1254;
      local_1254 = local_1254 & 0xfffffff7;
      if (local_1130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1130.Data.AllocatorInstance.Data);
      }
      if (((uVar20 & 4) != 0) &&
         (local_1254 = uVar20 & 0xfffffff3, local_1208 != (FLinkerDiff *)0x0)) {
        FMemory::Free(local_1208);
      }
    }
    FVar6.Data = local_1250.Data.AllocatorInstance.Data;
    iVar12 = local_1250.Data.ArrayNum + -1;
    if (local_1250.Data.ArrayNum == 0) {
      iVar12 = 0;
    }
    uVar18 = (ulong64)iVar12;
    if (local_1088.End < (TStringBuilderBase<wchar_t> *)(local_1088.CurPos + uVar18)) {
      TStringBuilderBase<wchar_t>::Extend(&local_1088,uVar18);
    }
    if (iVar12 != 0) {
      pvVar13 = FGenericPlatformString::Memcpy(local_1088.CurPos,FVar6.Data,uVar18 * 2);
      local_1088.CurPos = (wchar_t *)((longlong)pvVar13 + uVar18 * 2);
    }
    if (local_1250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1250.Data.AllocatorInstance.Data);
    }
    if (local_1088.End < (TStringBuilderBase<wchar_t> *)(local_1088.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_1088,1);
    }
    *local_1088.CurPos = L'\0';
    ::FString::FString(&local_1240,local_1088.Base);
    pFVar19 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar19 <= (FScriptContainerElement *)&local_1240) &&
        ((FScriptContainerElement *)&local_1240 <
         pFVar19 + (longlong)(this->ExportDiffs).ArrayMax * 0x10)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar12 = (this->ExportDiffs).ArrayNum;
    piVar2 = &(this->ExportDiffs).ArrayMax;
    if (iVar12 == *piVar2) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->ExportDiffs).ArrayNum = iVar12 + 1;
    pFVar19 = (pTVar1->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
    *(undefined8 *)pFVar19 = 0;
    *(FScriptContainerElement **)pFVar19 = local_1240.Data.AllocatorInstance.Data;
    *(int *)(pFVar19 + 8) = local_1240.Data.ArrayNum;
    *(int *)(pFVar19 + 0xc) = local_1240.Data.ArrayMax;
    local_1240.Data.ArrayNum = 0;
    local_1240.Data.ArrayMax = 0;
    local_1240.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1088);
    goto LAB_1420bd38b;
  }
LAB_1420bd3b7:
  uVar20 = local_10b0;
  uStack_11e0 = 0;
  uStack_11dc = 1;
  local_11c8 = 0;
  uStack_11cc = uStack_11e0;
  if (local_10b0 != 0) {
    FVar16 = (ForElementType<unsigned_int>)((longlong)local_10d8 + 0x10);
    if (local_10b8 != (ForElementType<unsigned_int>)0x0) {
      FVar16 = local_10b8;
    }
    uVar23 = *(uint *)FVar16;
    local_11c8 = 0;
    uStack_11e0 = 0;
    while (uVar23 == 0) {
      lVar21 = (longlong)(int)uStack_11e0;
      local_11c8 = local_11c8 + 0x20;
      uStack_11e0 = uStack_11e0 + 1;
      uStack_11cc = local_10b0;
      if ((int)((local_10b0 - 1) + ((int)(local_10b0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_11e0)
      goto LAB_1420bd42f;
      uVar23 = ((uint *)((longlong)FVar16 + 4))[lVar21];
    }
    uStack_11dc = -uVar23 & uVar23;
    uVar3 = (ulonglong)uStack_11dc * 2 + 1;
    lVar21 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_11f8._4_4_ = (undefined4)lVar21;
    uStack_11cc = (local_11c8 - 1) + local_11f8._4_4_;
    if ((int)local_10b0 < (int)uStack_11cc) {
      uStack_11cc = local_10b0;
    }
  }
LAB_1420bd42f:
  local_11f8._16_8_ = local_10d8;
  uStack_11c4 = local_10e4;
  local_11d8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_10d8 + 0x10);
  uVar23 = local_10b0 & 0xffffffe0;
  iStack_11c0 = local_10d8._8_4_ - local_10a4;
  uStack_11d0 = 0xffffffff;
  TStack_11b0.CurrentBitIndex = uStack_11cc;
  TStack_11b0.UnvisitedBitMask = 0xffffffff;
  TStack_11b0._padding_ = CONCAT44(uStack_11dc,uStack_11e0);
  iVar12 = (int)local_10b0 >> 5;
  TStack_11b0._28_4_ = local_10e4;
  TStack_11b0.BaseBitIndex = local_11c8;
  uStack_1190 = CONCAT44(uStack_11bc,iStack_11c0);
  bVar15 = (byte)local_10b0;
  local_11b8 = (longlong *)local_11f8._16_8_;
  TStack_11b0.Array = local_11d8;
  if (((int)local_10b0 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar8 = local_1208;
  if (uVar20 != local_10b0) {
    FVar16 = (ForElementType<unsigned_int>)((longlong)local_10d8 + 0x10);
    if (local_10b8 != (ForElementType<unsigned_int>)0x0) {
      FVar16 = local_10b8;
    }
    uVar20 = -1 << (bVar15 & 0x1f) & *(uint *)((longlong)FVar16 + (longlong)iVar12 * 4);
    while (uVar20 == 0) {
      lVar21 = (longlong)iVar12;
      uVar23 = uVar23 + 0x20;
      iVar12 = iVar12 + 1;
      uVar20 = local_10b0;
      if ((int)((local_10b0 - 1) + ((int)(local_10b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_1420bd550;
      uVar20 = ((uint *)((longlong)FVar16 + 4))[lVar21];
    }
    uVar3 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar21 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_11f8._8_4_ = (undefined4)lVar21;
    uVar20 = (uVar23 - 1) + local_11f8._8_4_;
    if ((int)local_10b0 < (int)uVar20) {
      uVar20 = local_10b0;
    }
  }
LAB_1420bd550:
  while( true ) {
    plVar22 = local_11b8;
    if ((int)local_11b8[1] - *(int *)((longlong)local_11b8 + 0x34) != (int)uStack_1190) {
      local_1258[0] = 0;
      `TSparseArray<TSparseSetElement<FLinkerExportObject>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1258);
    }
    if (((TStack_11b0.CurrentBitIndex == uVar20) &&
        (TStack_11b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_10d8 + 0x10))) &&
       (plVar22 == (longlong *)local_10d8)) {
      local_1090 = 0;
      if (local_1098 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_1098);
      }
      TSparseArray<TSparseSetElement<FLinkerExportObject>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FLinkerExportObject>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FLinkerExportObject>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_10d8);
      return;
    }
    local_868.bIsDynamic = false;
    local_868.bIsExternal = false;
    local_868.Base = local_848;
    plVar22 = (longlong *)((longlong)TStack_11b0.CurrentBitIndex * 0x20 + *plVar22);
    local_868.CurPos = local_848;
    local_868.End = (wchar_t *)&local_48;
    pvVar13 = FGenericPlatformString::Memcpy(local_848,L"New or different RHS Export: ",0x3a);
    local_868.CurPos = (wchar_t *)((longlong)pvVar13 + 0x3a);
    pFVar14 = ::FName::ToString((FName *)*plVar22,&local_1120);
    iVar4 = (pFVar14->Data).ArrayNum;
    pFVar19 = (pFVar14->Data).AllocatorInstance.Data;
    iVar12 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar12 = 0;
    }
    uVar18 = (ulong64)iVar12;
    if (local_868.End < local_868.CurPos + uVar18) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,uVar18);
    }
    if (iVar12 != 0) {
      pvVar13 = FGenericPlatformString::Memcpy(local_868.CurPos,pFVar19,uVar18 * 2);
      local_868.CurPos = (wchar_t *)((longlong)pvVar13 + uVar18 * 2);
    }
    if (local_1120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1120.Data.AllocatorInstance.Data);
    }
    if (local_868.End < local_868.CurPos + 0xe) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,0xe);
    }
    pvVar13 = FGenericPlatformString::Memcpy(local_868.CurPos,L", Outer Path: ",0x1c);
    pFVar7 = local_1210;
    local_868.CurPos = (wchar_t *)((longlong)pvVar13 + 0x1c);
    iVar12 = *(int *)(*plVar22 + 8);
    if (iVar12 < 0) {
      FLinkerTables::GetImportPathName
                ((FLinkerTables *)&local_1210->_padding_,&local_1230,-1 - iVar12);
    }
    else if (iVar12 < 1) {
      local_1230.Data.ArrayMax = 0;
      local_1230.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1230.Data.ArrayNum = 0;
    }
    else {
      pFVar14 = UObjectBaseUtility::GetPathName
                          ((UObjectBaseUtility *)local_1210->LinkerRoot,local_1110,(UObject *)0x0);
      FLinkerTables::GetExportPathName
                ((FLinkerTables *)&pFVar7->_padding_,&local_1230,pFVar14,iVar12 + -1,false);
      uVar23 = local_1254;
      local_1254 = local_1254 & 0xfffffffd;
      if (local_1110[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1110[0].Data.AllocatorInstance.Data);
      }
      if (((uVar23 & 1) != 0) && (local_1254 = uVar23 & 0xfffffffc, pFVar8 != (FLinkerDiff *)0x0)) {
        FMemory::Free(pFVar8);
      }
    }
    FVar6.Data = local_1230.Data.AllocatorInstance.Data;
    iVar12 = local_1230.Data.ArrayNum + -1;
    if (local_1230.Data.ArrayNum == 0) {
      iVar12 = 0;
    }
    uVar18 = (ulong64)iVar12;
    if (local_868.End < local_868.CurPos + uVar18) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,uVar18);
    }
    if (iVar12 != 0) {
      pvVar13 = FGenericPlatformString::Memcpy(local_868.CurPos,FVar6.Data,uVar18 * 2);
      local_868.CurPos = (wchar_t *)((longlong)pvVar13 + uVar18 * 2);
    }
    if (local_1230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1230.Data.AllocatorInstance.Data);
    }
    if (local_868.End < local_868.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,1);
    }
    *local_868.CurPos = L'\0';
    ::FString::FString(&local_1220,local_868.Base);
    pFVar19 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar19 <= (FScriptContainerElement *)&local_1220) &&
        ((FScriptContainerElement *)&local_1220 <
         pFVar19 + (longlong)(this->ExportDiffs).ArrayMax * 0x10)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) break;
    iVar12 = (this->ExportDiffs).ArrayNum;
    piVar2 = &(this->ExportDiffs).ArrayMax;
    if (iVar12 == *piVar2) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->ExportDiffs).ArrayNum = iVar12 + 1;
    pFVar19 = (pTVar1->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
    *(undefined8 *)pFVar19 = 0;
    *(FScriptContainerElement **)pFVar19 = local_1220.Data.AllocatorInstance.Data;
    *(int *)(pFVar19 + 8) = local_1220.Data.ArrayNum;
    *(int *)(pFVar19 + 0xc) = local_1220.Data.ArrayMax;
    local_1220.Data.ArrayNum = 0;
    local_1220.Data.ArrayMax = 0;
    local_1220.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
    TStack_11b0.UnvisitedBitMask = TStack_11b0.UnvisitedBitMask & ~TStack_11b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_11b0);
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
LAB_1420bd100:
  uVar11 = *(uint *)pFVar19;
  if (uVar11 == 0xffffffff) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("NextElementIndex != INDEX_NONE",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                        ,0x2b5,L"Corrupt hash");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (uVar11 == uVar20) goto LAB_1420bd14b;
  pFVar19 = (FScriptContainerElement *)(local_10d8._0_8_ + (longlong)(int)uVar11 * 0x20 + 0x18);
  goto LAB_1420bd100;
LAB_1420bd14b:
  *(uint *)pFVar19 = *(uint *)(uVar9 + lVar21 + 0x18);
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_10d8,uVar20,1);
LAB_1420bd38b:
  uVar23 = uVar23 + 1;
  local_1200 = local_1200 + 0x68;
  param_2 = local_1210;
  if ((int)param_1->_padding_ <= (int)uVar23) goto LAB_1420bd3b7;
  goto LAB_1420bcdf0;
}

// GenerateExportDiff @ 1420bd990

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001420befc8) */
/* WARNING: Removing unreachable block (ram,0x0001420be9ce) */
/* WARNING: Removing unreachable block (ram,0x0001420be378) */
/* WARNING: Removing unreachable block (ram,0x0001420bdd10) */
/* WARNING: Removing unreachable block (ram,0x0001420be04a) */
/* WARNING: Removing unreachable block (ram,0x0001420be6a3) */
/* WARNING: Removing unreachable block (ram,0x0001420becf9) */
/* WARNING: Removing unreachable block (ram,0x0001420bf10c) */

void __thiscall
FLinkerDiff::GenerateExportDiff
          (FLinkerDiff *this,FLinker *param_1,FLinkerExportObject *param_2,
          FLinkerExportObject *param_3)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  int iVar8;
  void *pvVar9;
  FString *pFVar10;
  FScriptContainerElement *pFVar11;
  ulong64 uVar12;
  longlong lVar13;
  undefined1 auStackY_1118 [32];
  ForAnyElementType local_10c8;
  undefined8 local_10c0;
  FString local_10b8;
  FString local_10a8;
  FString local_1098;
  FString local_1088;
  FString local_1078;
  FString local_1068;
  FString local_1058;
  FString local_1048;
  FString local_1038;
  FString local_1028;
  FString local_1018;
  FString local_1008;
  FString local_ff8;
  FString local_fe8;
  FString local_fd8;
  FString local_fc8;
  FString local_fb8;
  FString local_fa8;
  FString local_f98;
  FString local_f88;
  FString local_f78;
  FString local_f68;
  FString local_f58;
  FString local_f48;
  TStringBuilderBase<wchar_t> local_f38;
  wchar_t local_f18 [256];
  TStringBuilderBase<wchar_t> local_d18;
  wchar_t local_cf8 [256];
  TStringBuilderBase<wchar_t> local_af8;
  wchar_t local_ad8 [256];
  TStringBuilderBase<wchar_t> local_8d8;
  wchar_t local_8b8 [256];
  TStringBuilderBase<wchar_t> local_6b8;
  wchar_t local_698 [256];
  TStringBuilderBase<wchar_t> local_498;
  wchar_t local_478 [256];
  TStringBuilderBase<wchar_t> local_278;
  wchar_t local_258 [256];
  ulonglong local_58 [3];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStackY_1118;
  local_10c8.Data = (FScriptContainerElement *)0x0;
  local_10c0 = 0;
  if (param_2->Export->ObjectFlags != param_3->Export->ObjectFlags) {
    local_f38.Base = local_f18;
    local_f38.bIsDynamic = false;
    local_f38.bIsExternal = false;
    local_f38.CurPos = local_f18;
    local_f38.End = (wchar_t *)&local_d18;
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_f38,L"ObjectFlags",0xb);
    if (local_f38.End < (TStringBuilderBase<wchar_t> *)(local_f38.CurPos + 2)) {
      TStringBuilderBase<wchar_t>::Extend(&local_f38,2);
    }
    pvVar9 = FGenericPlatformString::Memcpy(local_f38.CurPos,&u___,4);
    local_f38.CurPos = (wchar_t *)((longlong)pvVar9 + 4);
    pFVar10 = ::LexToString(&local_f78,param_2->Export->ObjectFlags);
    iVar4 = (pFVar10->Data).ArrayNum;
    pFVar11 = (pFVar10->Data).AllocatorInstance.Data;
    iVar8 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar8 = 0;
    }
    uVar12 = (ulong64)iVar8;
    if (local_f38.End < (TStringBuilderBase<wchar_t> *)(local_f38.CurPos + uVar12)) {
      TStringBuilderBase<wchar_t>::Extend(&local_f38,uVar12);
    }
    if (iVar8 != 0) {
      pvVar9 = FGenericPlatformString::Memcpy(local_f38.CurPos,pFVar11,uVar12 * 2);
      local_f38.CurPos = (wchar_t *)(uVar12 * 2 + (longlong)pvVar9);
    }
    if (local_f78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f78.Data.AllocatorInstance.Data);
    }
    if (local_f38.End < (TStringBuilderBase<wchar_t> *)(local_f38.CurPos + 4)) {
      TStringBuilderBase<wchar_t>::Extend(&local_f38,4);
    }
    pvVar9 = FGenericPlatformString::Memcpy(local_f38.CurPos,L" vs ",8);
    local_f38.CurPos = (wchar_t *)((longlong)pvVar9 + 8);
    pFVar10 = ::LexToString(&local_f68,param_3->Export->ObjectFlags);
    iVar4 = (pFVar10->Data).ArrayNum;
    pFVar11 = (pFVar10->Data).AllocatorInstance.Data;
    iVar8 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar8 = 0;
    }
    uVar12 = (ulong64)iVar8;
    if (local_f38.End < (TStringBuilderBase<wchar_t> *)(local_f38.CurPos + uVar12)) {
      TStringBuilderBase<wchar_t>::Extend(&local_f38,uVar12);
    }
    if (iVar8 != 0) {
      pvVar9 = FGenericPlatformString::Memcpy(local_f38.CurPos,pFVar11,uVar12 * 2);
      local_f38.CurPos = (wchar_t *)(uVar12 * 2 + (longlong)pvVar9);
    }
    if (local_f68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f68.Data.AllocatorInstance.Data);
    }
    if (local_f38.End < (TStringBuilderBase<wchar_t> *)(local_f38.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_f38,1);
    }
    *local_f38.CurPos = L'\0';
    ::FString::FString(&local_10b8,local_f38.Base);
    if (((local_10c8.Data <= (FScriptContainerElement *)&local_10b8) &&
        ((FScriptContainerElement *)&local_10b8 <
         local_10c8.Data + (longlong)local_10c0._4_4_ * 0x10)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = (int)local_10c0;
    if ((int)local_10c0 == local_10c0._4_4_) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_10c8,(int *)((longlong)&local_10c0 + 4));
    }
    local_10c0 = CONCAT44(local_10c0._4_4_,iVar8 + 1);
    pFVar11 = local_10c8.Data + (longlong)iVar8 * 0x10;
    *(undefined8 *)pFVar11 = 0;
    *(FScriptContainerElement **)pFVar11 = local_10b8.Data.AllocatorInstance.Data;
    *(int *)(pFVar11 + 8) = local_10b8.Data.ArrayNum;
    *(int *)(pFVar11 + 0xc) = local_10b8.Data.ArrayMax;
    local_10b8.Data.ArrayNum = 0;
    local_10b8.Data.ArrayMax = 0;
    local_10b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_f38);
  }
  if (param_2->Export->SerialSize != param_3->Export->SerialSize) {
    local_d18.Base = local_cf8;
    local_d18.bIsDynamic = false;
    local_d18.bIsExternal = false;
    local_d18.CurPos = local_cf8;
    local_d18.End = (wchar_t *)&local_af8;
    pvVar9 = FGenericPlatformString::Memcpy(local_cf8,L"SerialSize",0x14);
    local_d18.CurPos = (wchar_t *)((longlong)pvVar9 + 0x14);
    if (local_d18.End < (TStringBuilderBase<wchar_t> *)((longlong)pvVar9 + 0x18)) {
      TStringBuilderBase<wchar_t>::Extend(&local_d18,2);
    }
    pvVar9 = FGenericPlatformString::Memcpy(local_d18.CurPos,&u___,4);
    local_d18.CurPos = (wchar_t *)((longlong)pvVar9 + 4);
    ::FString::PrintfImpl(&local_1038,L"%lld");
    FVar6.Data = local_1038.Data.AllocatorInstance.Data;
    iVar8 = local_1038.Data.ArrayNum + -1;
    if (local_1038.Data.ArrayNum == 0) {
      iVar8 = 0;
    }
    uVar12 = (ulong64)iVar8;
    if (local_d18.End < (TStringBuilderBase<wchar_t> *)(local_d18.CurPos + uVar12)) {
      TStringBuilderBase<wchar_t>::Extend(&local_d18,uVar12);
    }
    if (iVar8 != 0) {
      pvVar9 = FGenericPlatformString::Memcpy(local_d18.CurPos,FVar6.Data,uVar12 * 2);
      local_d18.CurPos = (wchar_t *)(uVar12 * 2 + (longlong)pvVar9);
    }
    if (local_1038.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1038.Data.AllocatorInstance.Data);
    }
    if (local_d18.End < (TStringBuilderBase<wchar_t> *)(local_d18.CurPos + 4)) {
      TStringBuilderBase<wchar_t>::Extend(&local_d18,4);
    }
    pvVar9 = FGenericPlatformString::Memcpy(local_d18.CurPos,L" vs ",8);
    local_d18.CurPos = (wchar_t *)((longlong)pvVar9 + 8);
    ::FString::PrintfImpl(&local_1028,L"%lld");
    FVar6.Data = local_1028.Data.AllocatorInstance.Data;
    iVar8 = local_1028.Data.ArrayNum + -1;
    if (local_1028.Data.ArrayNum == 0) {
      iVar8 = 0;
    }
    uVar12 = (ulong64)iVar8;
    if (local_d18.End < (TStringBuilderBase<wchar_t> *)(local_d18.CurPos + uVar12)) {
      TStringBuilderBase<wchar_t>::Extend(&local_d18,uVar12);
    }
    if (iVar8 != 0) {
      pvVar9 = FGenericPlatformString::Memcpy(local_d18.CurPos,FVar6.Data,uVar12 * 2);
      local_d18.CurPos = (wchar_t *)(uVar12 * 2 + (longlong)pvVar9);
    }
    if (local_1028.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1028.Data.AllocatorInstance.Data);
    }
    if (local_d18.End < (TStringBuilderBase<wchar_t> *)(local_d18.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_d18,1);
    }
    *local_d18.CurPos = L'\0';
    ::FString::FString(&local_10a8,local_d18.Base);
    if (((local_10c8.Data <= (FScriptContainerElement *)&local_10a8) &&
        ((FScriptContainerElement *)&local_10a8 <
         local_10c8.Data + (longlong)local_10c0._4_4_ * 0x10)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = (int)local_10c0;
    if ((int)local_10c0 == local_10c0._4_4_) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_10c8,(int *)((longlong)&local_10c0 + 4));
    }
    local_10c0 = CONCAT44(local_10c0._4_4_,iVar8 + 1);
    pFVar11 = local_10c8.Data + (longlong)iVar8 * 0x10;
    *(undefined8 *)pFVar11 = 0;
    *(FScriptContainerElement **)pFVar11 = local_10a8.Data.AllocatorInstance.Data;
    *(int *)(pFVar11 + 8) = local_10a8.Data.ArrayNum;
    *(int *)(pFVar11 + 0xc) = local_10a8.Data.ArrayMax;
    local_10a8.Data.ArrayNum = 0;
    local_10a8.Data.ArrayMax = 0;
    local_10a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_d18);
  }
  if (param_2->Export->PackageFlags != param_3->Export->PackageFlags) {
    local_af8.Base = local_ad8;
    local_af8.bIsDynamic = false;
    local_af8.bIsExternal = false;
    local_af8.CurPos = local_ad8;
    local_af8.End = (wchar_t *)&local_8d8;
    pvVar9 = FGenericPlatformString::Memcpy(local_ad8,L"PackageFlags",0x18);
    local_af8.CurPos = (wchar_t *)((longlong)pvVar9 + 0x18);
    if (local_af8.End < (TStringBuilderBase<wchar_t> *)((longlong)pvVar9 + 0x1c)) {
      TStringBuilderBase<wchar_t>::Extend(&local_af8,2);
    }
    pvVar9 = FGenericPlatformString::Memcpy(local_af8.CurPos,&u___,4);
    local_af8.CurPos = (wchar_t *)((longlong)pvVar9 + 4);
    ::FString::PrintfImpl(&local_1018,L"%u");
    FVar6.Data = local_1018.Data.AllocatorInstance.Data;
    iVar8 = local_1018.Data.ArrayNum + -1;
    if (local_1018.Data.ArrayNum == 0) {
      iVar8 = 0;
    }
    uVar12 = (ulong64)iVar8;
    if (local_af8.End < (TStringBuilderBase<wchar_t> *)(local_af8.CurPos + uVar12)) {
      TStringBuilderBase<wchar_t>::Extend(&local_af8,uVar12);
    }
    if (iVar8 != 0) {
      pvVar9 = FGenericPlatformString::Memcpy(local_af8.CurPos,FVar6.Data,uVar12 * 2);
      local_af8.CurPos = (wchar_t *)(uVar12 * 2 + (longlong)pvVar9);
    }
    if (local_1018.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1018.Data.AllocatorInstance.Data);
    }
    if (local_af8.End < (TStringBuilderBase<wchar_t> *)(local_af8.CurPos + 4)) {
      TStringBuilderBase<wchar_t>::Extend(&local_af8,4);
    }
    pvVar9 = FGenericPlatformString::Memcpy(local_af8.CurPos,L" vs ",8);
    local_af8.CurPos = (wchar_t *)((longlong)pvVar9 + 8);
    ::FString::PrintfImpl(&local_1008,L"%u");
    FVar6.Data = local_1008.Data.AllocatorInstance.Data;
    iVar8 = local_1008.Data.ArrayNum + -1;
    if (local_1008.Data.ArrayNum == 0) {
      iVar8 = 0;
    }
    uVar12 = (ulong64)iVar8;
    if (local_af8.End < (TStringBuilderBase<wchar_t> *)(local_af8.CurPos + uVar12)) {
      TStringBuilderBase<wchar_t>::Extend(&local_af8,uVar12);
    }
    if (iVar8 != 0) {
      pvVar9 = FGenericPlatformString::Memcpy(local_af8.CurPos,FVar6.Data,uVar12 * 2);
      local_af8.CurPos = (wchar_t *)(uVar12 * 2 + (longlong)pvVar9);
    }
    if (local_1008.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1008.Data.AllocatorInstance.Data);
    }
    if (local_af8.End < (TStringBuilderBase<wchar_t> *)(local_af8.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_af8,1);
    }
    *local_af8.CurPos = L'\0';
    ::FString::FString(&local_1098,local_af8.Base);
    if (((local_10c8.Data <= (FScriptContainerElement *)&local_1098) &&
        ((FScriptContainerElement *)&local_1098 <
         local_10c8.Data + (longlong)local_10c0._4_4_ * 0x10)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = (int)local_10c0;
    if ((int)local_10c0 == local_10c0._4_4_) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_10c8,(int *)((longlong)&local_10c0 + 4));
    }
    local_10c0 = CONCAT44(local_10c0._4_4_,iVar8 + 1);
    pFVar11 = local_10c8.Data + (longlong)iVar8 * 0x10;
    *(undefined8 *)pFVar11 = 0;
    *(FScriptContainerElement **)pFVar11 = local_1098.Data.AllocatorInstance.Data;
    *(int *)(pFVar11 + 8) = local_1098.Data.ArrayNum;
    *(int *)(pFVar11 + 0xc) = local_1098.Data.ArrayMax;
    local_1098.Data.ArrayNum = 0;
    local_1098.Data.ArrayMax = 0;
    local_1098.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_af8);
  }
  if (param_2->Export->SerializationBeforeSerializationDependencies !=
      param_3->Export->SerializationBeforeSerializationDependencies) {
    local_8d8.Base = local_8b8;
    local_8d8.bIsDynamic = false;
    local_8d8.bIsExternal = false;
    local_8d8.CurPos = local_8b8;
    local_8d8.End = (wchar_t *)&local_6b8;
    pvVar9 = FGenericPlatformString::Memcpy
                       (local_8b8,L"SerializationBeforeSerializationDependencies",0x58);
    local_8d8.CurPos = (wchar_t *)((longlong)pvVar9 + 0x58);
    if (local_8d8.End < (TStringBuilderBase<wchar_t> *)((longlong)pvVar9 + 0x5c)) {
      TStringBuilderBase<wchar_t>::Extend(&local_8d8,2);
    }
    pvVar9 = FGenericPlatformString::Memcpy(local_8d8.CurPos,&u___,4);
    local_8d8.CurPos = (wchar_t *)((longlong)pvVar9 + 4);
    ::FString::PrintfImpl(&local_ff8,L"%d");
    FVar6.Data = local_ff8.Data.AllocatorInstance.Data;
    iVar8 = local_ff8.Data.ArrayNum + -1;
    if (local_ff8.Data.ArrayNum == 0) {
      iVar8 = 0;
    }
    uVar12 = (ulong64)iVar8;
    if (local_8d8.End < (TStringBuilderBase<wchar_t> *)(local_8d8.CurPos + uVar12)) {
      TStringBuilderBase<wchar_t>::Extend(&local_8d8,uVar12);
    }
    if (iVar8 != 0) {
      pvVar9 = FGenericPlatformString::Memcpy(local_8d8.CurPos,FVar6.Data,uVar12 * 2);
      local_8d8.CurPos = (wchar_t *)(uVar12 * 2 + (longlong)pvVar9);
    }
    if (local_ff8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ff8.Data.AllocatorInstance.Data);
    }
    if (local_8d8.End < (TStringBuilderBase<wchar_t> *)(local_8d8.CurPos + 4)) {
      TStringBuilderBase<wchar_t>::Extend(&local_8d8,4);
    }
    pvVar9 = FGenericPlatformString::Memcpy(local_8d8.CurPos,L" vs ",8);
    local_8d8.CurPos = (wchar_t *)((longlong)pvVar9 + 8);
    ::FString::PrintfImpl(&local_fe8,L"%d");
    FVar6.Data = local_fe8.Data.AllocatorInstance.Data;
    iVar8 = local_fe8.Data.ArrayNum + -1;
    if (local_fe8.Data.ArrayNum == 0) {
      iVar8 = 0;
    }
    uVar12 = (ulong64)iVar8;
    if (local_8d8.End < (TStringBuilderBase<wchar_t> *)(local_8d8.CurPos + uVar12)) {
      TStringBuilderBase<wchar_t>::Extend(&local_8d8,uVar12);
    }
    if (iVar8 != 0) {
      pvVar9 = FGenericPlatformString::Memcpy(local_8d8.CurPos,FVar6.Data,uVar12 * 2);
      local_8d8.CurPos = (wchar_t *)(uVar12 * 2 + (longlong)pvVar9);
    }
    if (local_fe8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_fe8.Data.AllocatorInstance.Data);
    }
    if (local_8d8.End < (TStringBuilderBase<wchar_t> *)(local_8d8.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_8d8,1);
    }
    *local_8d8.CurPos = L'\0';
    ::FString::FString(&local_1088,local_8d8.Base);
    if (((local_10c8.Data <= (FScriptContainerElement *)&local_1088) &&
        ((FScriptContainerElement *)&local_1088 <
         local_10c8.Data + (longlong)local_10c0._4_4_ * 0x10)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = (int)local_10c0;
    if ((int)local_10c0 == local_10c0._4_4_) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_10c8,(int *)((longlong)&local_10c0 + 4));
    }
    local_10c0 = CONCAT44(local_10c0._4_4_,iVar8 + 1);
    pFVar11 = local_10c8.Data + (longlong)iVar8 * 0x10;
    *(undefined8 *)pFVar11 = 0;
    *(FScriptContainerElement **)pFVar11 = local_1088.Data.AllocatorInstance.Data;
    *(int *)(pFVar11 + 8) = local_1088.Data.ArrayNum;
    *(int *)(pFVar11 + 0xc) = local_1088.Data.ArrayMax;
    local_1088.Data.ArrayNum = 0;
    local_1088.Data.ArrayMax = 0;
    local_1088.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_8d8);
  }
  if (param_2->Export->CreateBeforeSerializationDependencies !=
      param_3->Export->CreateBeforeSerializationDependencies) {
    local_6b8.Base = local_698;
    local_6b8.bIsDynamic = false;
    local_6b8.bIsExternal = false;
    local_6b8.CurPos = local_698;
    local_6b8.End = (wchar_t *)&local_498;
    pvVar9 = FGenericPlatformString::Memcpy(local_698,L"CreateBeforeSerializationDependencies",0x4a)
    ;
    local_6b8.CurPos = (wchar_t *)((longlong)pvVar9 + 0x4a);
    if (local_6b8.End < (TStringBuilderBase<wchar_t> *)((longlong)pvVar9 + 0x4e)) {
      TStringBuilderBase<wchar_t>::Extend(&local_6b8,2);
    }
    pvVar9 = FGenericPlatformString::Memcpy(local_6b8.CurPos,&u___,4);
    local_6b8.CurPos = (wchar_t *)((longlong)pvVar9 + 4);
    ::FString::PrintfImpl(&local_fd8,L"%d");
    FVar6.Data = local_fd8.Data.AllocatorInstance.Data;
    iVar8 = local_fd8.Data.ArrayNum + -1;
    if (local_fd8.Data.ArrayNum == 0) {
      iVar8 = 0;
    }
    uVar12 = (ulong64)iVar8;
    if (local_6b8.End < (TStringBuilderBase<wchar_t> *)(local_6b8.CurPos + uVar12)) {
      TStringBuilderBase<wchar_t>::Extend(&local_6b8,uVar12);
    }
    if (iVar8 != 0) {
      pvVar9 = FGenericPlatformString::Memcpy(local_6b8.CurPos,FVar6.Data,uVar12 * 2);
      local_6b8.CurPos = (wchar_t *)(uVar12 * 2 + (longlong)pvVar9);
    }
    if (local_fd8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_fd8.Data.AllocatorInstance.Data);
    }
    if (local_6b8.End < (TStringBuilderBase<wchar_t> *)(local_6b8.CurPos + 4)) {
      TStringBuilderBase<wchar_t>::Extend(&local_6b8,4);
    }
    pvVar9 = FGenericPlatformString::Memcpy(local_6b8.CurPos,L" vs ",8);
    local_6b8.CurPos = (wchar_t *)((longlong)pvVar9 + 8);
    ::FString::PrintfImpl(&local_fc8,L"%d");
    FVar6.Data = local_fc8.Data.AllocatorInstance.Data;
    iVar8 = local_fc8.Data.ArrayNum + -1;
    if (local_fc8.Data.ArrayNum == 0) {
      iVar8 = 0;
    }
    uVar12 = (ulong64)iVar8;
    if (local_6b8.End < (TStringBuilderBase<wchar_t> *)(local_6b8.CurPos + uVar12)) {
      TStringBuilderBase<wchar_t>::Extend(&local_6b8,uVar12);
    }
    if (iVar8 != 0) {
      pvVar9 = FGenericPlatformString::Memcpy(local_6b8.CurPos,FVar6.Data,uVar12 * 2);
      local_6b8.CurPos = (wchar_t *)(uVar12 * 2 + (longlong)pvVar9);
    }
    if (local_fc8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_fc8.Data.AllocatorInstance.Data);
    }
    if (local_6b8.End < (TStringBuilderBase<wchar_t> *)(local_6b8.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_6b8,1);
    }
    *local_6b8.CurPos = L'\0';
    ::FString::FString(&local_1078,local_6b8.Base);
    if (((local_10c8.Data <= (FScriptContainerElement *)&local_1078) &&
        ((FScriptContainerElement *)&local_1078 <
         local_10c8.Data + (longlong)local_10c0._4_4_ * 0x10)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = (int)local_10c0;
    if ((int)local_10c0 == local_10c0._4_4_) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_10c8,(int *)((longlong)&local_10c0 + 4));
    }
    local_10c0 = CONCAT44(local_10c0._4_4_,iVar8 + 1);
    pFVar11 = local_10c8.Data + (longlong)iVar8 * 0x10;
    *(undefined8 *)pFVar11 = 0;
    *(FScriptContainerElement **)pFVar11 = local_1078.Data.AllocatorInstance.Data;
    *(int *)(pFVar11 + 8) = local_1078.Data.ArrayNum;
    *(int *)(pFVar11 + 0xc) = local_1078.Data.ArrayMax;
    local_1078.Data.ArrayNum = 0;
    local_1078.Data.ArrayMax = 0;
    local_1078.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_6b8);
  }
  if (param_2->Export->SerializationBeforeCreateDependencies !=
      param_3->Export->SerializationBeforeCreateDependencies) {
    local_498.Base = local_478;
    local_498.bIsDynamic = false;
    local_498.bIsExternal = false;
    local_498.CurPos = local_478;
    local_498.End = (wchar_t *)&local_278;
    pvVar9 = FGenericPlatformString::Memcpy(local_478,L"SerializationBeforeCreateDependencies",0x4a)
    ;
    local_498.CurPos = (wchar_t *)((longlong)pvVar9 + 0x4a);
    if (local_498.End < (TStringBuilderBase<wchar_t> *)((longlong)pvVar9 + 0x4e)) {
      TStringBuilderBase<wchar_t>::Extend(&local_498,2);
    }
    pvVar9 = FGenericPlatformString::Memcpy(local_498.CurPos,&u___,4);
    local_498.CurPos = (wchar_t *)((longlong)pvVar9 + 4);
    ::FString::PrintfImpl(&local_fb8,L"%d");
    FVar6.Data = local_fb8.Data.AllocatorInstance.Data;
    iVar8 = local_fb8.Data.ArrayNum + -1;
    if (local_fb8.Data.ArrayNum == 0) {
      iVar8 = 0;
    }
    uVar12 = (ulong64)iVar8;
    if (local_498.End < (TStringBuilderBase<wchar_t> *)(local_498.CurPos + uVar12)) {
      TStringBuilderBase<wchar_t>::Extend(&local_498,uVar12);
    }
    if (iVar8 != 0) {
      pvVar9 = FGenericPlatformString::Memcpy(local_498.CurPos,FVar6.Data,uVar12 * 2);
      local_498.CurPos = (wchar_t *)(uVar12 * 2 + (longlong)pvVar9);
    }
    if (local_fb8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_fb8.Data.AllocatorInstance.Data);
    }
    if (local_498.End < (TStringBuilderBase<wchar_t> *)(local_498.CurPos + 4)) {
      TStringBuilderBase<wchar_t>::Extend(&local_498,4);
    }
    pvVar9 = FGenericPlatformString::Memcpy(local_498.CurPos,L" vs ",8);
    local_498.CurPos = (wchar_t *)((longlong)pvVar9 + 8);
    ::FString::PrintfImpl(&local_fa8,L"%d");
    FVar6.Data = local_fa8.Data.AllocatorInstance.Data;
    iVar8 = local_fa8.Data.ArrayNum + -1;
    if (local_fa8.Data.ArrayNum == 0) {
      iVar8 = 0;
    }
    uVar12 = (ulong64)iVar8;
    if (local_498.End < (TStringBuilderBase<wchar_t> *)(local_498.CurPos + uVar12)) {
      TStringBuilderBase<wchar_t>::Extend(&local_498,uVar12);
    }
    if (iVar8 != 0) {
      pvVar9 = FGenericPlatformString::Memcpy(local_498.CurPos,FVar6.Data,uVar12 * 2);
      local_498.CurPos = (wchar_t *)(uVar12 * 2 + (longlong)pvVar9);
    }
    if (local_fa8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_fa8.Data.AllocatorInstance.Data);
    }
    if (local_498.End < (TStringBuilderBase<wchar_t> *)(local_498.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_498,1);
    }
    *local_498.CurPos = L'\0';
    ::FString::FString(&local_1068,local_498.Base);
    if (((local_10c8.Data <= (FScriptContainerElement *)&local_1068) &&
        ((FScriptContainerElement *)&local_1068 <
         local_10c8.Data + (longlong)local_10c0._4_4_ * 0x10)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = (int)local_10c0;
    if ((int)local_10c0 == local_10c0._4_4_) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_10c8,(int *)((longlong)&local_10c0 + 4));
    }
    local_10c0 = CONCAT44(local_10c0._4_4_,iVar8 + 1);
    pFVar11 = local_10c8.Data + (longlong)iVar8 * 0x10;
    *(undefined8 *)pFVar11 = 0;
    *(FScriptContainerElement **)pFVar11 = local_1068.Data.AllocatorInstance.Data;
    *(int *)(pFVar11 + 8) = local_1068.Data.ArrayNum;
    *(int *)(pFVar11 + 0xc) = local_1068.Data.ArrayMax;
    local_1068.Data.ArrayNum = 0;
    local_1068.Data.ArrayMax = 0;
    local_1068.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_498);
  }
  if (param_2->Export->CreateBeforeCreateDependencies !=
      param_3->Export->CreateBeforeCreateDependencies) {
    local_278.Base = local_258;
    local_278.bIsDynamic = false;
    local_278.bIsExternal = false;
    local_278.CurPos = local_258;
    local_278.End = (wchar_t *)local_58;
    pvVar9 = FGenericPlatformString::Memcpy(local_258,L"CreateBeforeCreateDependencies",0x3c);
    local_278.CurPos = (wchar_t *)((longlong)pvVar9 + 0x3c);
    if (local_278.End < (wchar_t *)((longlong)pvVar9 + 0x40)) {
      TStringBuilderBase<wchar_t>::Extend(&local_278,2);
    }
    pvVar9 = FGenericPlatformString::Memcpy(local_278.CurPos,&u___,4);
    local_278.CurPos = (wchar_t *)((longlong)pvVar9 + 4);
    ::FString::PrintfImpl(&local_f98,L"%d");
    FVar6.Data = local_f98.Data.AllocatorInstance.Data;
    iVar8 = local_f98.Data.ArrayNum + -1;
    if (local_f98.Data.ArrayNum == 0) {
      iVar8 = 0;
    }
    uVar12 = (ulong64)iVar8;
    if (local_278.End < local_278.CurPos + uVar12) {
      TStringBuilderBase<wchar_t>::Extend(&local_278,uVar12);
    }
    if (iVar8 != 0) {
      pvVar9 = FGenericPlatformString::Memcpy(local_278.CurPos,FVar6.Data,uVar12 * 2);
      local_278.CurPos = (wchar_t *)((longlong)pvVar9 + uVar12 * 2);
    }
    if (local_f98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f98.Data.AllocatorInstance.Data);
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_278,L" vs ",4);
    ::FString::PrintfImpl(&local_f88,L"%d");
    iVar8 = local_f88.Data.ArrayNum + -1;
    if (local_f88.Data.ArrayNum == 0) {
      iVar8 = 0;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              (&local_278,(wchar_t *)local_f88.Data.AllocatorInstance.Data,iVar8);
    if (local_f88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f88.Data.AllocatorInstance.Data);
    }
    if (local_278.End < local_278.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_278,1);
    }
    *local_278.CurPos = L'\0';
    ::FString::FString(&local_1058,local_278.Base);
    if (((local_10c8.Data <= (FScriptContainerElement *)&local_1058) &&
        ((FScriptContainerElement *)&local_1058 <
         local_10c8.Data + (longlong)local_10c0._4_4_ * 0x10)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = (int)local_10c0;
    if ((int)local_10c0 == local_10c0._4_4_) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_10c8,(int *)((longlong)&local_10c0 + 4));
    }
    local_10c0 = CONCAT44(local_10c0._4_4_,iVar8 + 1);
    pFVar11 = local_10c8.Data + (longlong)iVar8 * 0x10;
    *(undefined8 *)pFVar11 = 0;
    *(FScriptContainerElement **)pFVar11 = local_1058.Data.AllocatorInstance.Data;
    *(int *)(pFVar11 + 8) = local_1058.Data.ArrayNum;
    *(int *)(pFVar11 + 0xc) = local_1058.Data.ArrayMax;
    local_1058.Data.ArrayNum = 0;
    local_1058.Data.ArrayMax = 0;
    local_1058.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_278);
  }
  if (0 < (int)local_10c0) {
    pTVar1 = &this->ExportDiffs;
    FLinker::GetPathName(param_1,&local_f48,(FPackageIndex)param_2->Export->_padding_);
    ::FName::ToString((FName *)param_2->Export,&local_f58);
    ::FString::PrintfImpl(&local_1048,L"Export Diffs for resource: %s, Outer: %s");
    pFVar11 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar11 <= (FScriptContainerElement *)&local_1048) &&
        ((FScriptContainerElement *)&local_1048 <
         pFVar11 + (longlong)(this->ExportDiffs).ArrayMax * 0x10)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = (this->ExportDiffs).ArrayNum;
    piVar2 = &(this->ExportDiffs).ArrayNum;
    piVar3 = &(this->ExportDiffs).ArrayMax;
    if (iVar8 == (this->ExportDiffs).ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar1->AllocatorInstance,piVar3);
    }
    *piVar2 = iVar8 + 1;
    pFVar11 = (pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
    *(undefined8 *)pFVar11 = 0;
    *(FScriptContainerElement **)pFVar11 = local_1048.Data.AllocatorInstance.Data;
    *(int *)(pFVar11 + 8) = local_1048.Data.ArrayNum;
    *(int *)(pFVar11 + 0xc) = local_1048.Data.ArrayMax;
    local_1048.Data.ArrayNum = 0;
    local_1048.Data.ArrayMax = 0;
    local_1048.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_f58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f58.Data.AllocatorInstance.Data);
    }
    if (local_f48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f48.Data.AllocatorInstance.Data);
    }
    if ((pTVar1 == (TArray<FString,TSizedDefaultAllocator<32>_> *)&local_10c8) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x986,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar13 = (longlong)(int)local_10c0;
    if ((int)local_10c0 != 0) {
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,(int)local_10c0,&pTVar1->AllocatorInstance,piVar2,piVar3);
      memmove((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 0x10,local_10c8.Data,lVar13 << 4)
      ;
      local_10c0 = local_10c0 & 0xffffffff00000000;
    }
  }
  DestructItems<FString,int>((FString *)local_10c8.Data,(int)local_10c0);
  if (local_10c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_10c8.Data);
  }
  return;
}

// GenerateGatherableTextDataMapDiff @ 1420bf220

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001420bf83e) */
/* WARNING: Removing unreachable block (ram,0x0001420bfd02) */

void __thiscall
FLinkerDiff::GenerateGatherableTextDataMapDiff(FLinkerDiff *this,FLinker *param_1,FLinker *param_2)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  longlong *plVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  void *pvVar12;
  ulonglong uVar13;
  ForElementType<unsigned_int> FVar14;
  ForAnyElementType FVar15;
  wchar_t *pwVar16;
  ulong64 uVar17;
  int iVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  FScriptContainerElement *pFVar23;
  uint uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  FGatherableTextData *pFVar27;
  FGatherableTextData *pFVar28;
  undefined1 auStack_1228 [32];
  FString *local_1208;
  FScriptContainerElement *local_1200;
  longlong local_11f8;
  longlong local_11f0;
  undefined8 local_11e8;
  undefined1 local_11d8;
  undefined1 local_11d7 [7];
  FString local_11d0;
  FString local_11c0;
  FLinker *local_11b0;
  uint local_11a8;
  uint uStack_11a4;
  undefined1 *puStack_11a0;
  undefined4 local_1198;
  uint uStack_1194;
  uint uStack_1190;
  undefined4 uStack_118c;
  undefined4 local_1188;
  int local_1184;
  undefined1 local_1180 [28];
  uint uStack_1164;
  undefined1 *puStack_1160;
  uint local_1158;
  uint uStack_1154;
  undefined8 uStack_1150;
  longlong *local_1148;
  uint uStack_1140;
  uint uStack_113c;
  TBitArray<FDefaultBitArrayAllocator> *local_1138;
  undefined4 uStack_1130;
  uint uStack_112c;
  uint local_1128;
  undefined4 uStack_1124;
  int iStack_1120;
  undefined4 uStack_111c;
  longlong *local_1118;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1110;
  undefined8 uStack_10f0;
  undefined4 local_10cc;
  undefined1 local_10c8 [32];
  ForElementType<unsigned_int> local_10a8;
  uint local_10a0;
  int local_109c;
  int local_1098;
  int local_1094;
  FScriptContainerElement local_1090 [8];
  ForAnyElementType local_1088;
  uint local_1080;
  TStringBuilderBase<wchar_t> local_1078;
  wchar_t local_1058 [1024];
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1024];
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x1420bf245;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1228;
  uVar9 = (param_2->GatherableTextDataMap).ArrayNum;
  pTVar1 = &this->GatherableTextDataDiffs;
  pFVar19 = (param_2->GatherableTextDataMap).AllocatorInstance.Data;
  local_11b0 = param_1;
  if (((int)uVar9 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar13 = 0;
  local_10c8._0_8_ = (FScriptContainerElement *)0x0;
  local_10c8._8_8_ = 0;
  local_10a8 = (ForElementType<unsigned_int>)0x0;
  local_10a0 = 0;
  local_109c = 0x80;
  local_1098 = -1;
  local_1094 = 0;
  local_1088.Data = (FScriptContainerElement *)0x0;
  local_1080 = 0;
  uVar25 = uVar13;
  if (uVar9 == 0) goto LAB_1420bf566;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar9);
  }
  TSparseArrayBase<136,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<136,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_10c8,uVar9);
  uVar20 = 1;
  if (3 < uVar9) {
    uVar25 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
    lVar22 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    local_1188 = (undefined4)lVar22;
    uVar20 = 1 << ((byte)lVar22 & 0x1f);
  }
  if ((local_1080 == 0) || ((int)local_1080 < (int)uVar20)) {
    local_1080 = uVar20;
    if (local_1088.Data != (FScriptContainerElement *)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1088,0,0,4);
    }
    if (uVar20 != 0) {
      uVar21 = uVar20;
      if (uVar20 < 2) {
        if (local_1088.Data != (FScriptContainerElement *)0x0) {
          uVar21 = 0;
          goto LAB_1420bf388;
        }
      }
      else {
LAB_1420bf388:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1088,0,uVar21,4)
        ;
      }
      if (0 < (int)uVar20) {
        uVar26 = (ulonglong)uVar20;
        uVar25 = uVar13;
        do {
          FVar15.Data = local_1090;
          if (local_1088.Data != (FScriptContainerElement *)0x0) {
            FVar15.Data = local_1088.Data;
          }
          uVar11 = uVar25 & (longlong)(int)uVar20 - 1U;
          uVar25 = uVar25 + 1;
          *(undefined4 *)(FVar15.Data + uVar11 * 4) = 0xffffffff;
          uVar26 = uVar26 - 1;
        } while (uVar26 != 0);
      }
    }
    if (local_1080 != 0) {
      uVar25 = (ulonglong)local_10a0;
      puStack_11a0 = local_10c8 + 0x10;
      local_11a8 = 0;
      uStack_11a4 = 1;
      uStack_1194 = 0;
      uStack_1190 = 0;
      if (local_10a0 != 0) {
        FVar14 = (ForElementType<unsigned_int>)((longlong)local_10c8 + 0x10);
        if (local_10a8 != (ForElementType<unsigned_int>)0x0) {
          FVar14 = local_10a8;
        }
        uVar20 = *(uint *)FVar14;
        uVar26 = uVar13;
        while (uVar20 == 0) {
          uStack_1190 = (int)uVar26 + 0x20;
          uVar26 = (ulonglong)uStack_1190;
          iVar18 = (int)uVar13;
          local_11a8 = iVar18 + 1;
          uVar13 = (ulonglong)local_11a8;
          if ((int)((local_10a0 - 1) + ((int)(local_10a0 - 1) >> 0x1f & 0x1fU)) >> 5 <
              (int)local_11a8) goto LAB_1420bf498;
          uVar20 = ((uint *)((longlong)FVar14 + 4))[iVar18];
        }
        uStack_11a4 = -uVar20 & uVar20;
        uVar13 = (ulonglong)uStack_11a4 * 2 + 1;
        lVar22 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar22 == 0; lVar22 = lVar22 + -1) {
          }
        }
        local_1184 = (int)lVar22;
        uStack_1194 = local_1184 + -1 + uStack_1190;
        uVar13 = (ulonglong)uStack_1194;
        if ((int)local_10a0 < (int)uStack_1194) {
LAB_1420bf498:
          uVar13 = (ulonglong)local_10a0;
          uStack_1194 = local_10a0;
        }
      }
      local_1198 = 0xffffffff;
      local_1180._16_8_ = local_10c8;
      uStack_1164 = uStack_11a4;
      local_1180._24_4_ = local_11a8;
      uStack_1154 = uStack_1194;
      local_1158 = 0xffffffff;
      uStack_1150._4_4_ = uStack_118c;
      uStack_1150._0_4_ = uStack_1190;
      param_1 = local_11b0;
      puStack_1160 = puStack_11a0;
      if ((int)local_10a0 <= (int)uVar13) goto LAB_1420bf566;
      do {
        lVar22 = (longlong)(int)uVar13 * 0x88 + *(longlong *)local_1180._16_8_;
        if (*(int *)(lVar22 + 0x18) == 0) {
          pwVar16 = L"";
          iVar18 = 0;
        }
        else {
          pwVar16 = *(wchar_t **)(lVar22 + 0x10);
          iVar18 = *(int *)(lVar22 + 0x18) + -1;
        }
        uVar20 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar18,pwVar16);
        uVar20 = local_1080 - 1 & uVar20;
        *(uint *)(lVar22 + 0x84) = uVar20;
        FVar15.Data = local_1090;
        if (local_1088.Data != (FScriptContainerElement *)0x0) {
          FVar15.Data = local_1088.Data;
        }
        uVar25 = (longlong)(int)local_1080 - 1U & (longlong)(int)uVar20;
        *(undefined4 *)(lVar22 + 0x80) = *(undefined4 *)(FVar15.Data + uVar25 * 4);
        *(int *)(FVar15.Data + uVar25 * 4) = (int)uVar13;
        local_1158 = local_1158 & ~uStack_1164;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_1180 + 0x18));
        uVar13 = (ulonglong)uStack_1154;
        param_1 = local_11b0;
      } while ((int)uStack_1154 < *(int *)(puStack_1160 + 0x18));
    }
  }
  uVar25 = (ulonglong)local_10a0;
LAB_1420bf566:
  pFVar23 = pFVar19 + (longlong)(int)uVar9 * 0x80;
  if (pFVar19 != pFVar23) {
    do {
      TSet<FGatherableTextData,DefaultKeyFuncs<FGatherableTextData,0>,FDefaultSetAllocator>::
      Emplace<FGatherableTextData_const_&>
                ((TSet<FGatherableTextData,DefaultKeyFuncs<FGatherableTextData,0>,FDefaultSetAllocator>
                  *)local_10c8,(FGatherableTextData *)local_1180,(bool *)pFVar19);
      pFVar19 = pFVar19 + 0x80;
    } while (pFVar19 != pFVar23);
    uVar25 = (ulonglong)local_10a0;
  }
  iVar18 = (param_1->GatherableTextDataMap).ArrayNum;
  pFVar28 = (FGatherableTextData *)(param_1->GatherableTextDataMap).AllocatorInstance.Data;
  pFVar27 = pFVar28 + iVar18;
LAB_1420bf5c0:
  while( true ) {
    if ((param_1->GatherableTextDataMap).ArrayNum != iVar18) {
      local_11d8 = 0;
      `TCheckedPointerIterator<FGatherableTextData_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_11d8);
      uVar25 = (ulonglong)local_10a0;
    }
    uVar9 = (uint)uVar25;
    if (pFVar28 == pFVar27) break;
    iVar3 = (pFVar28->SourceData).SourceString.Data.ArrayNum;
    iVar10 = iVar3 + -1;
    if (iVar3 == 0) {
      pwVar16 = L"";
      iVar10 = 0;
    }
    else {
      pwVar16 = (wchar_t *)(pFVar28->SourceData).SourceString.Data.AllocatorInstance.Data;
    }
    uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar16);
    if (local_10c8._8_4_ != local_1094) {
      FVar15.Data = local_1090;
      if (local_1088.Data != (FScriptContainerElement *)0x0) {
        FVar15.Data = local_1088.Data;
      }
      uVar9 = *(uint *)(FVar15.Data + (ulonglong)(local_1080 - 1 & uVar9) * 4);
      while (uVar9 != 0xffffffff) {
        lVar22 = (longlong)(int)uVar9 * 0x88;
        bVar8 = ::operator==((FGatherableTextData *)(local_10c8._0_8_ + lVar22),pFVar28);
        if (bVar8) {
          if (((int)uVar9 < 0) || ((int)local_10a0 <= (int)uVar9)) {
LAB_1420bf89d:
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Elements.IsValidIndex(ElementIndex)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                               ,0x2ab,
                               L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
            if (bVar8) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          else {
            FVar14 = (ForElementType<unsigned_int>)((longlong)local_10c8 + 0x10);
            if (local_10a8 != (ForElementType<unsigned_int>)0x0) {
              FVar14 = local_10a8;
            }
            uVar20 = uVar9;
            if ((int)uVar9 < 0) {
              uVar20 = uVar9 + 0x1f;
            }
            if ((*(uint *)((longlong)FVar14 + (longlong)((int)uVar20 >> 5) * 4) >> (uVar9 & 0x1f) &
                1) == 0) goto LAB_1420bf89d;
          }
          uVar7 = local_10c8._0_8_;
          FVar15.Data = local_1090;
          if (local_1088.Data != (FScriptContainerElement *)0x0) {
            FVar15.Data = local_1088.Data;
          }
          pFVar19 = FVar15.Data + (longlong)*(int *)(local_10c8._0_8_ + lVar22 + 0x84) * 4;
          goto LAB_1420bf8f0;
        }
        uVar9 = *(uint *)(local_10c8._0_8_ + lVar22 + 0x80);
      }
    }
    local_1078.Base = local_1058;
    local_1078.bIsDynamic = false;
    local_1078.bIsExternal = false;
    local_1078.CurPos = local_1058;
    local_1078.End = (wchar_t *)&local_858;
    pvVar12 = FGenericPlatformString::Memcpy(local_1058,L"Missing RHS Gatherable Text: ",0x3a);
    pFVar19 = (pFVar28->SourceData).SourceString.Data.AllocatorInstance.Data;
    local_1078.CurPos = (wchar_t *)((longlong)pvVar12 + 0x3a);
    iVar3 = (pFVar28->SourceData).SourceString.Data.ArrayNum;
    iVar10 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar10 = 0;
    }
    uVar17 = (ulong64)iVar10;
    if (local_1078.End < (TStringBuilderBase<wchar_t> *)(local_1078.CurPos + uVar17)) {
      TStringBuilderBase<wchar_t>::Extend(&local_1078,uVar17);
    }
    if (iVar10 != 0) {
      pvVar12 = FGenericPlatformString::Memcpy(local_1078.CurPos,pFVar19,uVar17 * 2);
      local_1078.CurPos = (wchar_t *)((longlong)pvVar12 + uVar17 * 2);
    }
    if (local_1078.End < (TStringBuilderBase<wchar_t> *)(local_1078.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_1078,1);
    }
    *local_1078.CurPos = L'\0';
    ::FString::FString(&local_11d0,local_1078.Base);
    pFVar19 = (pTVar1->AllocatorInstance).Data;
    if ((pFVar19 <= (FScriptContainerElement *)&local_11d0) &&
       (lVar22 = (longlong)(this->GatherableTextDataDiffs).ArrayMax,
       (FScriptContainerElement *)&local_11d0 < pFVar19 + lVar22 * 0x10)) {
      local_11f0 = (longlong)(this->GatherableTextDataDiffs).ArrayNum;
      local_11e8 = 0x10;
      local_1208 = &local_11d0;
      local_1200 = pFVar19;
      local_11f8 = lVar22;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar10 = (this->GatherableTextDataDiffs).ArrayNum;
    piVar2 = &(this->GatherableTextDataDiffs).ArrayMax;
    if (iVar10 == *piVar2) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->GatherableTextDataDiffs).ArrayNum = iVar10 + 1;
    pFVar19 = (pTVar1->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
    *(undefined8 *)pFVar19 = 0;
    *(FScriptContainerElement **)pFVar19 = local_11d0.Data.AllocatorInstance.Data;
    *(int *)(pFVar19 + 8) = local_11d0.Data.ArrayNum;
    *(int *)(pFVar19 + 0xc) = local_11d0.Data.ArrayMax;
    local_11d0.Data.ArrayNum = 0;
    local_11d0.Data.ArrayMax = 0;
    local_11d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1078);
    uVar25 = (ulonglong)local_10a0;
    pFVar28 = pFVar28 + 1;
    param_1 = local_11b0;
  }
  uStack_113c = 1;
  uVar20 = 0;
  uStack_112c = uVar20;
  uStack_1140 = uVar20;
  local_1128 = uVar20;
  if (uVar9 == 0) goto LAB_1420bfa00;
  FVar14 = (ForElementType<unsigned_int>)((longlong)local_10c8 + 0x10);
  if (local_10a8 != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_10a8;
  }
  uVar21 = *(uint *)FVar14;
  local_1128 = 0;
  uStack_1140 = 0;
joined_r0x0001420bf9b7:
  if (uVar21 != 0) goto LAB_1420bf9dc;
  lVar22 = (longlong)(int)uStack_1140;
  local_1128 = local_1128 + 0x20;
  uStack_1140 = uStack_1140 + 1;
  uStack_112c = uVar9;
  if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_1140)
  goto LAB_1420bfa00;
  uVar21 = ((uint *)((longlong)FVar14 + 4))[lVar22];
  goto joined_r0x0001420bf9b7;
LAB_1420bf8f0:
  uVar20 = *(uint *)pFVar19;
  if (uVar20 == 0xffffffff) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("NextElementIndex != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                       ,0x2b5,L"Corrupt hash");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (uVar20 == uVar9) goto LAB_1420bf938;
  pFVar19 = (FScriptContainerElement *)(local_10c8._0_8_ + (longlong)(int)uVar20 * 0x88 + 0x80);
  goto LAB_1420bf8f0;
LAB_1420bf938:
  *(uint *)pFVar19 = *(uint *)(uVar7 + lVar22 + 0x80);
  TSparseArray<TSparseSetElement<FGatherableTextData>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FGatherableTextData>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_10c8,uVar9,1);
  TSparseArrayBase<136,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<136,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_10c8,uVar9,1);
  uVar25 = (ulonglong)local_10a0;
  pFVar28 = pFVar28 + 1;
  param_1 = local_11b0;
  goto LAB_1420bf5c0;
LAB_1420bf9dc:
  uStack_113c = -uVar21 & uVar21;
  uVar13 = (ulonglong)uStack_113c * 2 + 1;
  lVar22 = 0x3f;
  if (uVar13 != 0) {
    for (; uVar13 >> lVar22 == 0; lVar22 = lVar22 + -1) {
    }
  }
  local_1180._4_4_ = (undefined4)lVar22;
  uStack_112c = (local_1128 - 1) + local_1180._4_4_;
  if ((int)uVar9 < (int)uStack_112c) {
    uStack_112c = uVar9;
  }
LAB_1420bfa00:
  local_1148 = (longlong *)local_10c8;
  uStack_1124 = local_10cc;
  local_1138 = (TBitArray<FDefaultBitArrayAllocator> *)(local_10c8 + 0x10);
  uVar21 = uVar9 & 0xffffffe0;
  iStack_1120 = local_10c8._8_4_ - local_1094;
  uStack_1130 = 0xffffffff;
  TStack_1110.CurrentBitIndex = uStack_112c;
  TStack_1110.UnvisitedBitMask = 0xffffffff;
  TStack_1110._padding_ = CONCAT44(uStack_113c,uStack_1140);
  iVar18 = (int)uVar9 >> 5;
  TStack_1110._28_4_ = local_10cc;
  TStack_1110.BaseBitIndex = local_1128;
  uStack_10f0 = CONCAT44(uStack_111c,iStack_1120);
  uVar24 = uVar9;
  local_1118 = local_1148;
  TStack_1110.Array = local_1138;
  if (((int)uVar9 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), uVar24 = local_10a0, bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (uVar9 != uVar24) {
    FVar14 = (ForElementType<unsigned_int>)((longlong)local_10c8 + 0x10);
    if (local_10a8 != (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_10a8;
    }
    uVar9 = -1 << ((byte)uVar25 & 0x1f) & *(uint *)((longlong)FVar14 + (longlong)iVar18 * 4);
    while (uVar9 == 0) {
      lVar22 = (longlong)iVar18;
      uVar21 = uVar21 + 0x20;
      iVar18 = iVar18 + 1;
      if ((int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) {
        uVar25 = (ulonglong)uVar24;
        goto LAB_1420bfb10;
      }
      uVar9 = ((uint *)((longlong)FVar14 + 4))[lVar22];
    }
    uVar13 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar22 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    local_1180._8_4_ = (undefined4)lVar22;
    uVar9 = (uVar21 - 1) + local_1180._8_4_;
    if ((int)uVar24 < (int)uVar9) {
      uVar9 = uVar24;
    }
    uVar25 = (ulonglong)uVar9;
  }
LAB_1420bfb10:
  while( true ) {
    plVar6 = local_1118;
    if ((int)local_1118[1] - *(int *)((longlong)local_1118 + 0x34) != (int)uStack_10f0) {
      local_11d7[0] = 0;
      `TSparseArray<TSparseSetElement<FGatherableTextData>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_11d7);
    }
    lVar22 = (longlong)TStack_1110.CurrentBitIndex;
    if (((TStack_1110.CurrentBitIndex == (int)uVar25) &&
        (TStack_1110.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_10c8 + 0x10))) &&
       (plVar6 == (longlong *)local_10c8)) break;
    lVar4 = *plVar6;
    local_858.Base = local_838;
    local_858.CurPos = local_838;
    local_858.bIsDynamic = false;
    local_858.bIsExternal = false;
    local_858.End = (wchar_t *)&local_38;
    pvVar12 = FGenericPlatformString::Memcpy(local_838,L"New RHS Text Data: ",0x26);
    local_858.CurPos = (wchar_t *)((longlong)pvVar12 + 0x26);
    iVar18 = *(int *)(lVar22 * 0x88 + 0x18 + lVar4);
    pvVar12 = *(void **)(lVar22 * 0x88 + 0x10 + lVar4);
    uVar9 = iVar18 - 1;
    if (iVar18 == 0) {
      uVar9 = uVar20;
    }
    uVar17 = (ulong64)(int)uVar9;
    if (local_858.End < local_858.CurPos + uVar17) {
      TStringBuilderBase<wchar_t>::Extend(&local_858,uVar17);
    }
    if (uVar9 != 0) {
      pvVar12 = FGenericPlatformString::Memcpy(local_858.CurPos,pvVar12,uVar17 * 2);
      local_858.CurPos = (wchar_t *)((longlong)pvVar12 + uVar17 * 2);
    }
    if (local_858.End < local_858.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_858,1);
    }
    *local_858.CurPos = L'\0';
    ::FString::FString(&local_11c0,local_858.Base);
    pFVar19 = (pTVar1->AllocatorInstance).Data;
    if ((pFVar19 <= (FScriptContainerElement *)&local_11c0) &&
       (lVar22 = (longlong)(this->GatherableTextDataDiffs).ArrayMax,
       (FScriptContainerElement *)&local_11c0 < pFVar19 + lVar22 * 0x10)) {
      local_11f0 = (longlong)(this->GatherableTextDataDiffs).ArrayNum;
      local_11e8 = 0x10;
      local_1208 = &local_11c0;
      local_1200 = pFVar19;
      local_11f8 = lVar22;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar18 = (this->GatherableTextDataDiffs).ArrayNum;
    piVar2 = &(this->GatherableTextDataDiffs).ArrayMax;
    if (iVar18 == *piVar2) {
      iVar18 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->GatherableTextDataDiffs).ArrayNum = iVar18 + 1;
    pFVar19 = (pTVar1->AllocatorInstance).Data + (longlong)iVar18 * 0x10;
    *(undefined8 *)pFVar19 = 0;
    *(FScriptContainerElement **)pFVar19 = local_11c0.Data.AllocatorInstance.Data;
    *(int *)(pFVar19 + 8) = local_11c0.Data.ArrayNum;
    *(int *)(pFVar19 + 0xc) = local_11c0.Data.ArrayMax;
    local_11c0.Data.ArrayNum = 0;
    local_11c0.Data.ArrayMax = 0;
    local_11c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
    TStack_1110.UnvisitedBitMask = TStack_1110.UnvisitedBitMask & ~TStack_1110._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1110);
  }
  local_1080 = 0;
  if (local_1088.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1088.Data);
  }
  TSparseArray<TSparseSetElement<FGatherableTextData>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGatherableTextData>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FGatherableTextData>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_10c8);
  return;
}

// GenerateImportMapDiff @ 1420bfdb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001420c03ae) */
/* WARNING: Removing unreachable block (ram,0x0001420c0933) */

void __thiscall
FLinkerDiff::GenerateImportMapDiff(FLinkerDiff *this,FLinker *param_1,FLinker *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  FLinker *pFVar4;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  void *pvVar10;
  FString *pFVar11;
  byte bVar12;
  ulonglong uVar13;
  ForElementType<unsigned_int> FVar14;
  ForElementType<FSetElementId> FVar15;
  ulong64 uVar16;
  FScriptContainerElement *pFVar17;
  int iVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  FLinker *pFVar23;
  undefined1 auStack_1288 [32];
  undefined1 local_1238;
  undefined1 local_1237;
  undefined1 local_1236 [2];
  uint local_1234;
  FString local_1230;
  FString local_1220;
  FString local_1210;
  FString local_1200;
  uint local_11f0;
  FLinker *local_11e8;
  FLinker *local_11e0;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_11d8;
  FLinker *local_11d0;
  undefined1 local_11c8 [16];
  FLinker *local_11b8;
  longlong *local_11b0;
  int iStack_11a8;
  uint uStack_11a4;
  TBitArray<FDefaultBitArrayAllocator> *local_11a0;
  undefined4 uStack_1198;
  uint uStack_1194;
  int local_1190;
  undefined4 uStack_118c;
  int iStack_1188;
  undefined4 uStack_1184;
  longlong *local_1180;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1178;
  undefined8 uStack_1158;
  longlong local_1150;
  FLinker *local_1148;
  FString local_1140;
  FString local_1130;
  FString local_1120;
  FString local_1110 [2];
  undefined4 local_10e4;
  undefined1 local_10d8 [32];
  ForElementType<unsigned_int> local_10b8;
  uint local_10b0;
  int local_10ac;
  int local_10a8;
  int local_10a4;
  undefined1 local_10a0 [8];
  ForElementType<FSetElementId> local_1098;
  int local_1090;
  TStringBuilderBase<wchar_t> local_1088;
  wchar_t local_1068 [1024];
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1024];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x1420bfdd2;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1288;
  iVar9 = (int)param_2->_padding_;
  local_11d8 = &this->ImportDiffs;
  lVar19 = param_2->_padding_;
  plVar1 = &param_1->_padding_;
  lVar22 = (longlong)iVar9 * 0x38 + lVar19;
  local_1234 = 0;
  local_10d8._0_8_ = (FScriptContainerElement *)0x0;
  local_10d8._8_8_ = 0;
  local_10b8 = (ForElementType<unsigned_int>)0x0;
  local_10b0 = 0;
  local_10ac = 0x80;
  local_10a8 = -1;
  local_10a4 = 0;
  local_1098 = (ForElementType<FSetElementId>)0x0;
  local_1090 = 0;
  local_11e8 = param_2;
  local_11d0 = param_1;
  while( true ) {
    if ((int)param_2->_padding_ != iVar9) {
      local_1238 = 0;
      `TCheckedPointerIterator<FObjectImport,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_1238);
    }
    pTVar5 = local_11d8;
    if (lVar19 == lVar22) break;
    local_1150 = lVar19;
    local_1148 = param_2;
    TSet<FLinkerImportObject,DefaultKeyFuncs<FLinkerImportObject,0>,FDefaultSetAllocator>::
    Emplace<FLinkerImportObject>
              ((TSet<FLinkerImportObject,DefaultKeyFuncs<FLinkerImportObject,0>,FDefaultSetAllocator>
                *)local_10d8,(FLinkerImportObject *)local_11c8,(bool *)&local_1150);
    lVar19 = lVar19 + 0x38;
  }
  local_11f0 = (uint)param_1->_padding_;
  uVar13 = (ulonglong)(int)local_11f0;
  pFVar23 = (FLinker *)*plVar1;
  local_11e0 = (FLinker *)((FNameEntryId *)&pFVar23->_padding_ + uVar13 * 0xe);
  uVar21 = local_1234;
LAB_1420bfeb6:
  while( true ) {
    pFVar4 = local_11e0;
    if ((int)param_1->_padding_ != (int)uVar13) {
      local_1237 = 0;
      `TCheckedPointerIterator<FObjectImport,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_1237);
    }
    uVar8 = local_10b0;
    if (pFVar23 == pFVar4) break;
    local_11b8 = local_11d0;
    local_11c8._8_8_ = pFVar23;
    uVar8 = ::GetTypeHash((FLinkerImportObject *)(local_11c8 + 8));
    if (local_10d8._8_4_ != local_10a4) {
      FVar15 = (ForElementType<FSetElementId>)local_10a0;
      if (local_1098 != (ForElementType<FSetElementId>)0x0) {
        FVar15 = local_1098;
      }
      uVar8 = *(uint *)((longlong)FVar15 + (ulonglong)(local_1090 - 1U & uVar8) * 4);
      while (uVar8 != 0xffffffff) {
        lVar19 = (longlong)(int)uVar8 * 0x18;
        bVar7 = ::operator==((FLinkerImportObject *)(local_10d8._0_8_ + lVar19),
                             (FLinkerImportObject *)(local_11c8 + 8));
        if (bVar7) {
          if (((int)uVar8 < 0) || ((int)local_10b0 <= (int)uVar8)) {
LAB_1420c00f0:
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Elements.IsValidIndex(ElementIndex)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                               ,0x2ab,
                               L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
            if (bVar7) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          else {
            FVar14 = (ForElementType<unsigned_int>)((longlong)local_10d8 + 0x10);
            if (local_10b8 != (ForElementType<unsigned_int>)0x0) {
              FVar14 = local_10b8;
            }
            uVar20 = uVar8;
            if ((int)uVar8 < 0) {
              uVar20 = uVar8 + 0x1f;
            }
            if ((*(uint *)((longlong)FVar14 + (longlong)((int)uVar20 >> 5) * 4) >> (uVar8 & 0x1f) &
                1) == 0) goto LAB_1420c00f0;
          }
          uVar6 = local_10d8._0_8_;
          FVar15 = (ForElementType<FSetElementId>)local_10a0;
          if (local_1098 != (ForElementType<FSetElementId>)0x0) {
            FVar15 = local_1098;
          }
          pFVar17 = (FScriptContainerElement *)
                    ((longlong)FVar15 + (longlong)*(int *)(local_10d8._0_8_ + lVar19 + 0x14) * 4);
          goto LAB_1420c0140;
        }
        uVar8 = *(uint *)(local_10d8._0_8_ + lVar19 + 0x10);
      }
    }
    local_1088.Base = local_1068;
    local_1088.bIsDynamic = false;
    local_1088.bIsExternal = false;
    local_1088.CurPos = local_1068;
    local_1088.End = (wchar_t *)&local_868;
    pvVar10 = FGenericPlatformString::Memcpy(local_1068,L"Missing or different RHS Import: ",0x42);
    local_1088.CurPos = (wchar_t *)((longlong)pvVar10 + 0x42);
    pFVar11 = ::FName::ToString((FName *)pFVar23,&local_1140);
    iVar18 = (pFVar11->Data).ArrayNum;
    pFVar17 = (pFVar11->Data).AllocatorInstance.Data;
    iVar9 = iVar18 + -1;
    if (iVar18 == 0) {
      iVar9 = 0;
    }
    uVar16 = (ulong64)iVar9;
    if (local_1088.End < (TStringBuilderBase<wchar_t> *)(local_1088.CurPos + uVar16)) {
      TStringBuilderBase<wchar_t>::Extend(&local_1088,uVar16);
    }
    if (iVar9 != 0) {
      pvVar10 = FGenericPlatformString::Memcpy(local_1088.CurPos,pFVar17,uVar16 * 2);
      local_1088.CurPos = (wchar_t *)((longlong)pvVar10 + uVar16 * 2);
    }
    if (local_1140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1140.Data.AllocatorInstance.Data);
    }
    if (local_1088.End < (TStringBuilderBase<wchar_t> *)(local_1088.CurPos + 0xe)) {
      TStringBuilderBase<wchar_t>::Extend(&local_1088,0xe);
    }
    pvVar10 = FGenericPlatformString::Memcpy(local_1088.CurPos,L", Outer Path: ",0x1c);
    iVar9 = (int)pFVar23->_padding_;
    local_1088.CurPos = (wchar_t *)((longlong)pvVar10 + 0x1c);
    if (iVar9 < 0) {
      FLinkerTables::GetImportPathName((FLinkerTables *)plVar1,&local_1230,-1 - iVar9);
      iVar9 = local_1230.Data.ArrayNum;
    }
    else if (iVar9 < 1) {
      iVar9 = 0;
      local_1230.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1230.Data.ArrayNum = 0;
      local_1230.Data.ArrayMax = 0;
    }
    else {
      pFVar11 = UObjectBaseUtility::GetPathName
                          ((UObjectBaseUtility *)local_11d0->LinkerRoot,&local_1130,(UObject *)0x0);
      FLinkerTables::GetExportPathName((FLinkerTables *)plVar1,&local_1230,pFVar11,iVar9 + -1,false)
      ;
      if (local_1130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1130.Data.AllocatorInstance.Data);
      }
      uVar8 = uVar21 & 0xfffffff7;
      if (((uVar21 & 4) != 0) && (uVar8 = uVar21 & 0xfffffff3, local_11e0 != (FLinker *)0x0)) {
        FMemory::Free(local_11e0);
      }
      uVar21 = uVar8;
      iVar9 = local_1230.Data.ArrayNum;
    }
    FVar3.Data = local_1230.Data.AllocatorInstance.Data;
    iVar18 = iVar9 + -1;
    if (iVar9 == 0) {
      iVar18 = 0;
    }
    uVar16 = (ulong64)iVar18;
    if (local_1088.End < (TStringBuilderBase<wchar_t> *)(local_1088.CurPos + uVar16)) {
      TStringBuilderBase<wchar_t>::Extend(&local_1088,uVar16);
    }
    if (iVar18 != 0) {
      pvVar10 = FGenericPlatformString::Memcpy(local_1088.CurPos,FVar3.Data,uVar16 * 2);
      local_1088.CurPos = (wchar_t *)((longlong)pvVar10 + uVar16 * 2);
    }
    if (local_1230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1230.Data.AllocatorInstance.Data);
    }
    if (local_1088.End < (TStringBuilderBase<wchar_t> *)(local_1088.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_1088,1);
    }
    *local_1088.CurPos = L'\0';
    ::FString::FString(&local_1220,local_1088.Base);
    pFVar17 = (pTVar5->AllocatorInstance).Data;
    if (((pFVar17 <= (FScriptContainerElement *)&local_1220) &&
        ((FScriptContainerElement *)&local_1220 < pFVar17 + (longlong)pTVar5->ArrayMax * 0x10)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar9 = pTVar5->ArrayNum;
    if (iVar9 == pTVar5->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
    }
    pTVar5->ArrayNum = iVar9 + 1;
    pFVar17 = (pTVar5->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
    *(undefined8 *)pFVar17 = 0;
    *(FScriptContainerElement **)pFVar17 = local_1220.Data.AllocatorInstance.Data;
    *(int *)(pFVar17 + 8) = local_1220.Data.ArrayNum;
    *(int *)(pFVar17 + 0xc) = local_1220.Data.ArrayMax;
    local_1220.Data.ArrayNum = 0;
    local_1220.Data.ArrayMax = 0;
    local_1220.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1088);
    uVar13 = (ulonglong)local_11f0;
    pFVar23 = (FLinker *)&pFVar23->_padding_;
  }
  iStack_11a8 = 0;
  uStack_11a4 = 1;
  local_1190 = 0;
  uStack_1194 = 0;
  if (local_10b0 == 0) goto LAB_1420c0460;
  FVar14 = (ForElementType<unsigned_int>)((longlong)local_10d8 + 0x10);
  if (local_10b8 != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_10b8;
  }
  uVar20 = *(uint *)FVar14;
  local_1190 = 0;
joined_r0x0001420c041b:
  if (uVar20 != 0) goto LAB_1420c043c;
  lVar19 = (longlong)iStack_11a8;
  local_1190 = local_1190 + 0x20;
  iStack_11a8 = iStack_11a8 + 1;
  uStack_1194 = local_10b0;
  if ((int)((local_10b0 - 1) + ((int)(local_10b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_11a8)
  goto LAB_1420c0460;
  uVar20 = ((uint *)((longlong)FVar14 + 4))[lVar19];
  goto joined_r0x0001420c041b;
LAB_1420c0140:
  uVar20 = *(uint *)pFVar17;
  if (uVar20 == 0xffffffff) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("NextElementIndex != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                       ,0x2b5,L"Corrupt hash");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (uVar20 == uVar8) goto LAB_1420c0189;
  pFVar17 = (FScriptContainerElement *)(local_10d8._0_8_ + (longlong)(int)uVar20 * 0x18 + 0x10);
  goto LAB_1420c0140;
LAB_1420c0189:
  *(uint *)pFVar17 = *(uint *)(uVar6 + lVar19 + 0x10);
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_10d8,uVar8,1);
  uVar13 = (ulonglong)local_11f0;
  pFVar23 = (FLinker *)&pFVar23->_padding_;
  goto LAB_1420bfeb6;
LAB_1420c043c:
  uStack_11a4 = -uVar20 & uVar20;
  uVar13 = (ulonglong)uStack_11a4 * 2 + 1;
  lVar19 = 0x3f;
  if (uVar13 != 0) {
    for (; uVar13 >> lVar19 == 0; lVar19 = lVar19 + -1) {
    }
  }
  local_11c8._4_4_ = (undefined4)lVar19;
  uStack_1194 = local_1190 + -1 + local_11c8._4_4_;
  if ((int)local_10b0 < (int)uStack_1194) {
    uStack_1194 = local_10b0;
  }
LAB_1420c0460:
  local_11b0 = (longlong *)local_10d8;
  uStack_118c = local_10e4;
  local_11a0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_10d8 + 0x10);
  uVar20 = local_10b0 & 0xffffffe0;
  iStack_1188 = local_10d8._8_4_ - local_10a4;
  uStack_1198 = 0xffffffff;
  TStack_1178.CurrentBitIndex = uStack_1194;
  TStack_1178.UnvisitedBitMask = 0xffffffff;
  TStack_1178._padding_ = CONCAT44(uStack_11a4,iStack_11a8);
  iVar9 = (int)local_10b0 >> 5;
  TStack_1178._28_4_ = local_10e4;
  TStack_1178.BaseBitIndex = local_1190;
  uStack_1158 = CONCAT44(uStack_1184,iStack_1188);
  bVar12 = (byte)local_10b0;
  local_1234 = uVar21;
  local_1180 = local_11b0;
  TStack_1178.Array = local_11a0;
  if (((int)local_10b0 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar23 = local_11e0;
  if (uVar8 != local_10b0) {
    FVar14 = (ForElementType<unsigned_int>)((longlong)local_10d8 + 0x10);
    if (local_10b8 != (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_10b8;
    }
    uVar21 = -1 << (bVar12 & 0x1f) & *(uint *)((longlong)FVar14 + (longlong)iVar9 * 4);
    while (uVar21 == 0) {
      lVar19 = (longlong)iVar9;
      uVar20 = uVar20 + 0x20;
      iVar9 = iVar9 + 1;
      uVar8 = local_10b0;
      if ((int)((local_10b0 - 1) + ((int)(local_10b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
      goto LAB_1420c0580;
      uVar21 = ((uint *)((longlong)FVar14 + 4))[lVar19];
    }
    uVar13 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    uVar8 = (uVar20 - 1) + (int)lVar19;
    local_11d8 = (TArray<FString,TSizedDefaultAllocator<32>_> *)
                 CONCAT44(local_11d8._4_4_,(int)lVar19);
    if ((int)local_10b0 < (int)uVar8) {
      uVar8 = local_10b0;
    }
  }
LAB_1420c0580:
  while( true ) {
    plVar1 = local_1180;
    if ((int)local_1180[1] - *(int *)((longlong)local_1180 + 0x34) != (int)uStack_1158) {
      local_1236[0] = 0;
      `TSparseArray<TSparseSetElement<FLinkerImportObject>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1236);
    }
    if (((TStack_1178.CurrentBitIndex == uVar8) &&
        (TStack_1178.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_10d8 + 0x10))) &&
       (plVar1 == (longlong *)local_10d8)) {
      local_1090 = 0;
      if (local_1098 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_1098);
      }
      TSparseArray<TSparseSetElement<FLinkerImportObject>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FLinkerImportObject>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FLinkerImportObject>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_10d8);
      return;
    }
    local_868.bIsDynamic = false;
    local_868.bIsExternal = false;
    plVar1 = (longlong *)(*plVar1 + (longlong)TStack_1178.CurrentBitIndex * 0x18);
    local_868.Base = local_848;
    local_868.CurPos = local_848;
    local_868.End = (wchar_t *)&local_48;
    pvVar10 = FGenericPlatformString::Memcpy(local_848,L"New or different RHS Import: ",0x3a);
    local_868.CurPos = (wchar_t *)((longlong)pvVar10 + 0x3a);
    pFVar11 = ::FName::ToString((FName *)*plVar1,&local_1120);
    iVar18 = (pFVar11->Data).ArrayNum;
    pFVar17 = (pFVar11->Data).AllocatorInstance.Data;
    iVar9 = iVar18 + -1;
    if (iVar18 == 0) {
      iVar9 = 0;
    }
    uVar16 = (ulong64)iVar9;
    if (local_868.End < local_868.CurPos + uVar16) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,uVar16);
    }
    if (iVar9 != 0) {
      pvVar10 = FGenericPlatformString::Memcpy(local_868.CurPos,pFVar17,uVar16 * 2);
      local_868.CurPos = (wchar_t *)((longlong)pvVar10 + uVar16 * 2);
    }
    if (local_1120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1120.Data.AllocatorInstance.Data);
    }
    if (local_868.End < local_868.CurPos + 0xe) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,0xe);
    }
    pvVar10 = FGenericPlatformString::Memcpy(local_868.CurPos,L", Outer Path: ",0x1c);
    pFVar4 = local_11e8;
    local_868.CurPos = (wchar_t *)((longlong)pvVar10 + 0x1c);
    iVar9 = *(int *)(*plVar1 + 8);
    if (iVar9 < 0) {
      FLinkerTables::GetImportPathName
                ((FLinkerTables *)&local_11e8->_padding_,&local_1210,-1 - iVar9);
    }
    else if (iVar9 < 1) {
      local_1210.Data.ArrayMax = 0;
      local_1210.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1210.Data.ArrayNum = 0;
    }
    else {
      pFVar11 = UObjectBaseUtility::GetPathName
                          ((UObjectBaseUtility *)local_11e8->LinkerRoot,local_1110,(UObject *)0x0);
      FLinkerTables::GetExportPathName
                ((FLinkerTables *)&pFVar4->_padding_,&local_1210,pFVar11,iVar9 + -1,false);
      uVar21 = local_1234;
      local_1234 = local_1234 & 0xfffffffd;
      if (local_1110[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1110[0].Data.AllocatorInstance.Data);
      }
      if (((uVar21 & 1) != 0) && (local_1234 = uVar21 & 0xfffffffc, pFVar23 != (FLinker *)0x0)) {
        FMemory::Free(pFVar23);
      }
    }
    FVar3.Data = local_1210.Data.AllocatorInstance.Data;
    iVar9 = local_1210.Data.ArrayNum + -1;
    if (local_1210.Data.ArrayNum == 0) {
      iVar9 = 0;
    }
    uVar16 = (ulong64)iVar9;
    if (local_868.End < local_868.CurPos + uVar16) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,uVar16);
    }
    if (iVar9 != 0) {
      pvVar10 = FGenericPlatformString::Memcpy(local_868.CurPos,FVar3.Data,uVar16 * 2);
      local_868.CurPos = (wchar_t *)((longlong)pvVar10 + uVar16 * 2);
    }
    if (local_1210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1210.Data.AllocatorInstance.Data);
    }
    if (local_868.End < local_868.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,1);
    }
    *local_868.CurPos = L'\0';
    ::FString::FString(&local_1200,local_868.Base);
    pFVar17 = (pTVar5->AllocatorInstance).Data;
    if (((pFVar17 <= (FScriptContainerElement *)&local_1200) &&
        ((FScriptContainerElement *)&local_1200 < pFVar17 + (longlong)pTVar5->ArrayMax * 0x10)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) break;
    iVar9 = pTVar5->ArrayNum;
    if (iVar9 == pTVar5->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
    }
    pTVar5->ArrayNum = iVar9 + 1;
    pFVar17 = (pTVar5->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
    *(undefined8 *)pFVar17 = 0;
    *(FScriptContainerElement **)pFVar17 = local_1200.Data.AllocatorInstance.Data;
    *(int *)(pFVar17 + 8) = local_1200.Data.ArrayNum;
    *(int *)(pFVar17 + 0xc) = local_1200.Data.ArrayMax;
    local_1200.Data.ArrayNum = 0;
    local_1200.Data.ArrayMax = 0;
    local_1200.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
    TStack_1178.UnvisitedBitMask = TStack_1178.UnvisitedBitMask & ~TStack_1178._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1178);
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// GenerateNameMapDiff @ 1420c09b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001420c1381) */
/* WARNING: Removing unreachable block (ram,0x0001420c1893) */

void __thiscall
FLinkerDiff::GenerateNameMapDiff(FLinkerDiff *this,FLinker *param_1,FLinker *param_2)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  uint *puVar2;
  int iVar3;
  code *pcVar4;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  void *pvVar11;
  FString *pFVar12;
  byte bVar13;
  ForAnyElementType FVar14;
  ForElementType<unsigned_int> FVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  longlong lVar18;
  ulong64 uVar19;
  FScriptContainerElement *pFVar20;
  FScriptContainerElement *pFVar21;
  int iVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  FScriptContainerElement *pFVar25;
  undefined1 auStackY_12c8 [32];
  undefined1 local_1278;
  undefined1 local_1277 [7];
  FString local_1270;
  FString local_1260;
  int local_1250;
  uint uStack_124c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1248;
  undefined4 local_1240;
  uint uStack_123c;
  int iStack_1238;
  undefined4 uStack_1234;
  FName local_1228;
  FLinker *local_1220;
  FName local_1218;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1210;
  undefined4 local_11f0;
  int local_11ec;
  undefined4 local_11e8;
  int local_11e4;
  int local_11e0;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_11d8;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_11d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_11c8;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_11a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_11a0;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_1180;
  int iStack_1178;
  uint uStack_1174;
  TBitArray<FDefaultBitArrayAllocator> *local_1170;
  undefined4 uStack_1168;
  uint uStack_1164;
  uint local_1160;
  undefined4 uStack_115c;
  int iStack_1158;
  undefined4 uStack_1154;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_1150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1148;
  undefined8 uStack_1128;
  FSparseArrayAllocationInfo local_1120;
  FString local_1110;
  FString local_1100 [2];
  undefined4 local_10d4;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_10c8;
  FScriptContainerElement local_1090 [8];
  ForAnyElementType local_1088;
  uint local_1080;
  TStringBuilderBase<wchar_t> local_1078;
  wchar_t local_1058 [1024];
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1024];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x1420c09cf;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_12c8;
  uVar8 = (param_2->NameMap).ArrayNum;
  pTVar1 = &this->NameMapDiffs;
  pFVar21 = (param_2->NameMap).AllocatorInstance.Data;
  local_1220 = param_1;
  local_11d8 = pTVar1;
  if (((int)uVar8 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_10c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_10c8.Data.ArrayNum = 0;
  local_10c8.Data.ArrayMax = 0;
  local_10c8.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_10c8.AllocationFlags.NumBits = 0;
  local_10c8.AllocationFlags.MaxBits = 0x80;
  local_10c8.FirstFreeIndex = -1;
  local_10c8.NumFreeIndices = 0;
  local_1088.Data = (FScriptContainerElement *)0x0;
  local_1080 = 0;
  if (uVar8 == 0) goto LAB_1420c0ce1;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar8);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve(&local_10c8,uVar8);
  uVar23 = 1;
  if (3 < uVar8) {
    uVar23 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
    lVar18 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_11f0 = (undefined4)lVar18;
    uVar23 = (ulonglong)(uint)(1 << ((byte)lVar18 & 0x1f));
  }
  uVar17 = (uint)uVar23;
  if ((local_1080 != 0) && ((int)uVar17 <= (int)local_1080)) goto LAB_1420c0ce1;
  local_1080 = uVar17;
  if (local_1088.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1088,0,0,4);
  }
  if (uVar17 != 0) {
    uVar7 = uVar17;
    if (uVar17 < 2) {
      if (local_1088.Data != (FScriptContainerElement *)0x0) {
        uVar7 = 0;
        goto LAB_1420c0b12;
      }
    }
    else {
LAB_1420c0b12:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1088,0,uVar7,4);
    }
    if (0 < (int)uVar17) {
      uVar24 = 0;
      do {
        FVar14.Data = local_1090;
        if (local_1088.Data != (FScriptContainerElement *)0x0) {
          FVar14.Data = local_1088.Data;
        }
        uVar10 = uVar24 & (longlong)(int)uVar17 - 1U;
        uVar24 = uVar24 + 1;
        *(undefined4 *)(FVar14.Data + uVar10 * 4) = 0xffffffff;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
  }
  if (local_1080 != 0) {
    pTStack_1248 = &local_10c8.AllocationFlags;
    uStack_124c = 1;
    local_1250 = 0;
    uStack_123c = 0;
    iStack_1238 = 0;
    if (local_10c8.AllocationFlags.NumBits != 0) {
      FVar15 = (ForElementType<unsigned_int>)&local_10c8.AllocationFlags;
      if (local_10c8.AllocationFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar15 = local_10c8.AllocationFlags.AllocatorInstance.SecondaryData;
      }
      uVar17 = *(uint *)FVar15;
      iStack_1238 = 0;
      local_1250 = 0;
      while (uVar17 == 0) {
        iStack_1238 = iStack_1238 + 0x20;
        lVar18 = (longlong)local_1250;
        local_1250 = local_1250 + 1;
        if ((int)((local_10c8.AllocationFlags.NumBits - 1U) +
                 ((int)(local_10c8.AllocationFlags.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 < local_1250
           ) goto LAB_1420c0c2a;
        uVar17 = *(uint *)((uchar *)((longlong)FVar15 + 4) + lVar18 * 4);
      }
      uStack_124c = -uVar17 & uVar17;
      uVar23 = (ulonglong)uStack_124c * 2 + 1;
      lVar18 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_11ec = (int)lVar18;
      uStack_123c = iStack_1238 + -1 + local_11ec;
      if (local_10c8.AllocationFlags.NumBits < (int)uStack_123c) {
LAB_1420c0c2a:
        uStack_123c = local_10c8.AllocationFlags.NumBits;
      }
    }
    local_1240 = 0xffffffff;
    local_11d0 = &local_10c8;
    local_11c8._padding_ = CONCAT44(uStack_124c,local_1250);
    local_11c8.CurrentBitIndex = uStack_123c;
    local_11c8.UnvisitedBitMask = 0xffffffff;
    local_11c8._28_4_ = uStack_1234;
    local_11c8.BaseBitIndex = iStack_1238;
    uVar17 = uStack_123c;
    local_11c8.Array = pTStack_1248;
    if ((int)uStack_123c < local_10c8.AllocationFlags.NumBits) {
      do {
        lVar18 = (longlong)(int)uVar17;
        pFVar25 = (local_11d0->Data).AllocatorInstance.Data;
        uVar7 = ::GetTypeHash((FNameEntryId)*(uint *)(pFVar25 + lVar18 * 0xc));
        uVar7 = local_1080 - 1 & uVar7;
        *(uint *)(pFVar25 + lVar18 * 0xc + 8) = uVar7;
        FVar14.Data = local_1090;
        if (local_1088.Data != (FScriptContainerElement *)0x0) {
          FVar14.Data = local_1088.Data;
        }
        uVar23 = (longlong)(int)local_1080 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(pFVar25 + lVar18 * 0xc + 4) = *(undefined4 *)(FVar14.Data + uVar23 * 4);
        *(uint *)(FVar14.Data + uVar23 * 4) = uVar17;
        local_11c8.UnvisitedBitMask = local_11c8.UnvisitedBitMask & ~local_11c8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_11c8);
        uVar17 = local_11c8.CurrentBitIndex;
      } while (local_11c8.CurrentBitIndex < (local_11c8.Array)->NumBits);
    }
  }
LAB_1420c0ce1:
  pFVar25 = pFVar21 + (longlong)(int)uVar8 * 4;
  iVar22 = local_10c8.FirstFreeIndex;
  for (; local_10c8.FirstFreeIndex = iVar22, pFVar21 != pFVar25; pFVar21 = pFVar21 + 4) {
    if (local_10c8.NumFreeIndices == 0) {
      iVar22 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0xc,4,1,(ForAnyElementType *)&local_10c8,&local_10c8.Data.ArrayNum,
                          &local_10c8.Data.ArrayMax);
      iVar9 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_10c8.AllocationFlags,1);
      FVar15 = (ForElementType<unsigned_int>)&local_10c8.AllocationFlags;
      if (local_10c8.AllocationFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar15 = local_10c8.AllocationFlags.AllocatorInstance.SecondaryData;
      }
      bVar13 = (byte)iVar9 & 0x1f;
      if (iVar9 < 0) {
        iVar9 = iVar9 + 0x1f;
        bVar13 = bVar13 - 0x20;
      }
      puVar2 = (uint *)((longlong)FVar15 + (longlong)(iVar9 >> 5) * 4);
      *puVar2 = *puVar2 & ~(1 << (bVar13 & 0x1f));
    }
    else {
      local_10c8.FirstFreeIndex =
           *(int *)(local_10c8.Data.AllocatorInstance.Data + (longlong)iVar22 * 0xc + 4);
      local_10c8.NumFreeIndices = local_10c8.NumFreeIndices + -1;
      if (local_10c8.NumFreeIndices != 0) {
        *(undefined4 *)
         (local_10c8.Data.AllocatorInstance.Data + (longlong)local_10c8.FirstFreeIndex * 0xc) =
             0xffffffff;
      }
    }
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex(&local_10c8,&local_1120,iVar22);
    pvVar11 = local_1120.Pointer;
    iVar22 = local_1120.Index;
    if (local_1120.Pointer != (uint *)0x0) {
      *(uint *)local_1120.Pointer = *(uint *)pFVar21;
      *(uint *)((longlong)local_1120.Pointer + 4) = 0xffffffff;
    }
    uVar8 = ::GetTypeHash((FNameEntryId)*(uint *)local_1120.Pointer);
    if ((local_10c8.Data.ArrayNum - local_10c8.NumFreeIndices != 1) &&
       (local_10c8.Data.ArrayNum != local_10c8.NumFreeIndices)) {
      FVar14.Data = local_1090;
      if (local_1088.Data != (FScriptContainerElement *)0x0) {
        FVar14.Data = local_1088.Data;
      }
      iVar9 = *(int *)(FVar14.Data + (ulonglong)(local_1080 - 1 & uVar8) * 4);
      if (iVar9 != -1) {
        do {
          if (*(uint *)(local_10c8.Data.AllocatorInstance.Data + (longlong)iVar9 * 0xc) ==
              *(uint *)pvVar11) {
            if (iVar9 != -1) {
              *(uint *)(local_10c8.Data.AllocatorInstance.Data + (longlong)iVar9 * 0xc) =
                   *(uint *)pvVar11;
              TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized(&local_10c8,iVar22,1);
              goto LAB_1420c10d1;
            }
            break;
          }
          iVar9 = *(int *)(local_10c8.Data.AllocatorInstance.Data + (longlong)iVar9 * 0xc + 4);
        } while (iVar9 != -1);
      }
    }
    uVar23 = 1;
    uVar17 = local_10c8.Data.ArrayNum - local_10c8.NumFreeIndices;
    if (3 < uVar17) {
      uVar23 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
      lVar18 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_11e8 = (undefined4)lVar18;
      uVar23 = (ulonglong)(uint)(1 << ((byte)lVar18 & 0x1f));
    }
    if (((int)uVar17 < 1) || (uVar17 = (uint)uVar23, (int)uVar17 <= (int)local_1080)) {
      uVar8 = local_1080 - 1 & uVar8;
      *(uint *)((longlong)pvVar11 + 8) = uVar8;
      FVar14.Data = local_1090;
      if (local_1088.Data != (FScriptContainerElement *)0x0) {
        FVar14.Data = local_1088.Data;
      }
      uVar23 = (longlong)(int)local_1080 - 1U & (longlong)(int)uVar8;
      *(uint *)((longlong)pvVar11 + 4) = *(uint *)(FVar14.Data + uVar23 * 4);
      *(int *)(FVar14.Data + uVar23 * 4) = iVar22;
    }
    else {
      local_1080 = uVar17;
      if (local_1088.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1088,0,0,4);
      }
      if (uVar17 != 0) {
        uVar8 = uVar17;
        if (uVar17 < 2) {
          if (local_1088.Data != (FScriptContainerElement *)0x0) {
            uVar8 = 0;
            goto LAB_1420c0f2e;
          }
        }
        else {
LAB_1420c0f2e:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_1088,0,uVar8,4);
        }
        if (0 < (int)uVar17) {
          uVar24 = 0;
          do {
            FVar14.Data = local_1090;
            if (local_1088.Data != (FScriptContainerElement *)0x0) {
              FVar14.Data = local_1088.Data;
            }
            uVar10 = uVar24 & (longlong)(int)uVar17 - 1U;
            uVar24 = uVar24 + 1;
            *(undefined4 *)(FVar14.Data + uVar10 * 4) = 0xffffffff;
            uVar23 = uVar23 - 1;
          } while (uVar23 != 0);
        }
      }
      if (local_1080 != 0) {
        local_1210.Array = &local_10c8.AllocationFlags;
        local_1210._padding_._4_4_ = 1;
        local_1210._padding_._0_4_ = 0;
        local_1210.UnvisitedBitMask = 0xffffffff;
        local_1210.CurrentBitIndex = 0;
        local_1210.BaseBitIndex = 0;
        if (local_10c8.AllocationFlags.NumBits != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1210);
        }
        local_11a8 = &local_10c8;
        local_11a0._padding_ = CONCAT44(local_1210._padding_._4_4_,(undefined4)local_1210._padding_)
        ;
        local_11a0.Array = local_1210.Array;
        local_11a0.UnvisitedBitMask = local_1210.UnvisitedBitMask;
        local_11a0.CurrentBitIndex = local_1210.CurrentBitIndex;
        local_11a0.BaseBitIndex = local_1210.BaseBitIndex;
        local_11a0._28_4_ = local_1210._28_4_;
        if (local_1210.CurrentBitIndex < (local_1210.Array)->NumBits) {
          do {
            iVar22 = local_11a0.CurrentBitIndex;
            lVar18 = (longlong)local_11a0.CurrentBitIndex;
            pFVar20 = (local_11a8->Data).AllocatorInstance.Data;
            uVar8 = ::GetTypeHash((FNameEntryId)*(uint *)(pFVar20 + lVar18 * 0xc));
            uVar8 = local_1080 - 1 & uVar8;
            *(uint *)(pFVar20 + lVar18 * 0xc + 8) = uVar8;
            FVar14.Data = local_1090;
            if (local_1088.Data != (FScriptContainerElement *)0x0) {
              FVar14.Data = local_1088.Data;
            }
            uVar23 = (longlong)(int)local_1080 - 1U & (longlong)(int)uVar8;
            *(undefined4 *)(pFVar20 + lVar18 * 0xc + 4) = *(undefined4 *)(FVar14.Data + uVar23 * 4);
            *(int *)(FVar14.Data + uVar23 * 4) = iVar22;
            local_11a0.UnvisitedBitMask = local_11a0.UnvisitedBitMask & ~local_11a0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_11a0);
          } while (local_11a0.CurrentBitIndex < (local_11a0.Array)->NumBits);
        }
      }
    }
LAB_1420c10d1:
    pTVar1 = local_11d8;
    iVar22 = local_10c8.FirstFreeIndex;
  }
  pFVar25 = (local_1220->NameMap).AllocatorInstance.Data;
  iVar22 = (local_1220->NameMap).ArrayNum;
  pFVar21 = pFVar25 + (longlong)iVar22 * 4;
LAB_1420c1100:
  while( true ) {
    iVar9 = 0;
    if ((local_1220->NameMap).ArrayNum != iVar22) {
      local_1278 = 0;
      `TCheckedPointerIterator<FNameEntryId_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_1278);
    }
    uVar8 = local_10c8.AllocationFlags.NumBits;
    if (pFVar25 == pFVar21) break;
    uVar8 = ::GetTypeHash((FNameEntryId)*(uint *)pFVar25);
    if (local_10c8.Data.ArrayNum != local_10c8.NumFreeIndices) {
      FVar14.Data = local_1090;
      if (local_1088.Data != (FScriptContainerElement *)0x0) {
        FVar14.Data = local_1088.Data;
      }
      uVar8 = *(uint *)(FVar14.Data + (ulonglong)(local_1080 - 1 & uVar8) * 4);
      if (uVar8 != 0xffffffff) {
        do {
          lVar18 = (longlong)(int)uVar8 * 0xc;
          if (*(uint *)(local_10c8.Data.AllocatorInstance.Data + lVar18) == *(uint *)pFVar25) {
            if (((int)uVar8 < 0) || (local_10c8.AllocationFlags.NumBits <= (int)uVar8)) {
LAB_1420c13e2:
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Elements.IsValidIndex(ElementIndex)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                 ,0x2ab,
                                 L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
              if (bVar6) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            else {
              FVar15 = (ForElementType<unsigned_int>)&local_10c8.AllocationFlags;
              if (local_10c8.AllocationFlags.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar15 = local_10c8.AllocationFlags.AllocatorInstance.SecondaryData;
              }
              uVar17 = uVar8;
              if ((int)uVar8 < 0) {
                uVar17 = uVar8 + 0x1f;
              }
              if ((*(uint *)((longlong)FVar15 + (longlong)((int)uVar17 >> 5) * 4) >> (uVar8 & 0x1f)
                  & 1) == 0) goto LAB_1420c13e2;
            }
            FVar14.Data = local_10c8.Data.AllocatorInstance.Data;
            FVar16.Data = local_1090;
            if (local_1088.Data != (FScriptContainerElement *)0x0) {
              FVar16.Data = local_1088.Data;
            }
            pFVar20 = FVar16.Data +
                      (longlong)*(int *)(local_10c8.Data.AllocatorInstance.Data + lVar18 + 8) * 4;
            goto LAB_1420c1430;
          }
          uVar8 = *(uint *)(local_10c8.Data.AllocatorInstance.Data + lVar18 + 4);
        } while (uVar8 != 0xffffffff);
      }
    }
    local_1078.Base = local_1058;
    local_1078.bIsDynamic = false;
    local_1078.bIsExternal = false;
    local_1078.CurPos = local_1058;
    local_1078.End = (wchar_t *)&local_858;
    pvVar11 = FGenericPlatformString::Memcpy(local_1058,L"Missing RHS Name: ",0x24);
    local_1078.CurPos = (wchar_t *)((longlong)pvVar11 + 0x24);
    local_1228.ComparisonIndex.Value = *(uint *)pFVar25;
    local_1228.Number = 0;
    pFVar12 = ::FName::ToString(&local_1228,&local_1110);
    iVar3 = (pFVar12->Data).ArrayNum;
    pFVar20 = (pFVar12->Data).AllocatorInstance.Data;
    iVar9 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar9 = 0;
    }
    uVar19 = (ulong64)iVar9;
    if (local_1078.End < (TStringBuilderBase<wchar_t> *)(local_1078.CurPos + uVar19)) {
      TStringBuilderBase<wchar_t>::Extend(&local_1078,uVar19);
    }
    if (iVar9 != 0) {
      pvVar11 = FGenericPlatformString::Memcpy(local_1078.CurPos,pFVar20,uVar19 * 2);
      local_1078.CurPos = (wchar_t *)((longlong)pvVar11 + uVar19 * 2);
    }
    if (local_1110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1110.Data.AllocatorInstance.Data);
    }
    if (local_1078.End < (TStringBuilderBase<wchar_t> *)(local_1078.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_1078,1);
    }
    *local_1078.CurPos = L'\0';
    ::FString::FString(&local_1270,local_1078.Base);
    pFVar20 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar20 <= (FScriptContainerElement *)&local_1270) &&
        ((FScriptContainerElement *)&local_1270 < pFVar20 + (longlong)pTVar1->ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar9 = pTVar1->ArrayNum;
    if (iVar9 == pTVar1->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
    }
    pTVar1->ArrayNum = iVar9 + 1;
    pFVar20 = (pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
    *(undefined8 *)pFVar20 = 0;
    *(FScriptContainerElement **)pFVar20 = local_1270.Data.AllocatorInstance.Data;
    *(int *)(pFVar20 + 8) = local_1270.Data.ArrayNum;
    *(int *)(pFVar20 + 0xc) = local_1270.Data.ArrayMax;
    local_1270.Data.ArrayNum = 0;
    local_1270.Data.ArrayMax = 0;
    local_1270.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1078);
    pFVar25 = pFVar25 + 4;
  }
  uStack_1174 = 1;
  uVar17 = 0;
  uStack_1164 = uVar17;
  local_1160 = uVar17;
  if (local_10c8.AllocationFlags.NumBits == 0) goto LAB_1420c1530;
  FVar15 = (ForElementType<unsigned_int>)&local_10c8.AllocationFlags;
  if (local_10c8.AllocationFlags.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FVar15 = local_10c8.AllocationFlags.AllocatorInstance.SecondaryData;
  }
  uVar7 = *(uint *)FVar15;
  local_1160 = 0;
joined_r0x0001420c14ee:
  if (uVar7 != 0) goto LAB_1420c150c;
  lVar18 = (longlong)iVar9;
  local_1160 = local_1160 + 0x20;
  iVar9 = iVar9 + 1;
  uStack_1164 = local_10c8.AllocationFlags.NumBits;
  if ((int)((local_10c8.AllocationFlags.NumBits - 1U) +
           ((int)(local_10c8.AllocationFlags.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 < iVar9)
  goto LAB_1420c1530;
  uVar7 = *(uint *)((uchar *)((longlong)FVar15 + 4) + lVar18 * 4);
  goto joined_r0x0001420c14ee;
LAB_1420c1430:
  uVar17 = *(uint *)pFVar20;
  if (uVar17 == 0xffffffff) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NextElementIndex != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                       ,0x2b5,L"Corrupt hash");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (uVar17 == uVar8) goto LAB_1420c147c;
  pFVar20 = local_10c8.Data.AllocatorInstance.Data + ((longlong)(int)uVar17 * 3 + 1) * 4;
  goto LAB_1420c1430;
LAB_1420c147c:
  *(uint *)pFVar20 = *(uint *)(FVar14.Data + lVar18 + 4);
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(&local_10c8,uVar8,1);
  pFVar25 = pFVar25 + 4;
  goto LAB_1420c1100;
LAB_1420c150c:
  uStack_1174 = -uVar7 & uVar7;
  uVar23 = (ulonglong)uStack_1174 * 2 + 1;
  lVar18 = 0x3f;
  if (uVar23 != 0) {
    for (; uVar23 >> lVar18 == 0; lVar18 = lVar18 + -1) {
    }
  }
  local_11e4 = (int)lVar18;
  uStack_1164 = (local_1160 - 1) + local_11e4;
  if (local_10c8.AllocationFlags.NumBits < (int)uStack_1164) {
    uStack_1164 = local_10c8.AllocationFlags.NumBits;
  }
LAB_1420c1530:
  local_1180 = &local_10c8;
  uStack_115c = local_10d4;
  local_1170 = &local_10c8.AllocationFlags;
  uVar7 = local_10c8.AllocationFlags.NumBits & 0xffffffe0;
  iStack_1158 = local_10c8.Data.ArrayNum - local_10c8.NumFreeIndices;
  uStack_1168 = 0xffffffff;
  TStack_1148.CurrentBitIndex = uStack_1164;
  TStack_1148.UnvisitedBitMask = 0xffffffff;
  TStack_1148._padding_ = CONCAT44(uStack_1174,iVar9);
  iVar22 = local_10c8.AllocationFlags.NumBits >> 5;
  TStack_1148._28_4_ = local_10d4;
  TStack_1148.BaseBitIndex = local_1160;
  uStack_1128 = CONCAT44(uStack_1154,iStack_1158);
  bVar13 = (byte)local_10c8.AllocationFlags.NumBits;
  iStack_1178 = iVar9;
  local_1150 = local_1180;
  TStack_1148.Array = local_1170;
  if ((local_10c8.AllocationFlags.NumBits < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (uVar8 != local_10c8.AllocationFlags.NumBits) {
    FVar15 = (ForElementType<unsigned_int>)&local_10c8.AllocationFlags;
    if (local_10c8.AllocationFlags.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FVar15 = local_10c8.AllocationFlags.AllocatorInstance.SecondaryData;
    }
    uVar8 = -1 << (bVar13 & 0x1f) & *(uint *)((longlong)FVar15 + (longlong)iVar22 * 4);
    while (uVar8 == 0) {
      lVar18 = (longlong)iVar22;
      uVar7 = uVar7 + 0x20;
      iVar22 = iVar22 + 1;
      uVar8 = local_10c8.AllocationFlags.NumBits;
      if ((int)((local_10c8.AllocationFlags.NumBits - 1U) +
               ((int)(local_10c8.AllocationFlags.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 < iVar22)
      goto LAB_1420c1660;
      uVar8 = *(uint *)((uchar *)((longlong)FVar15 + 4) + lVar18 * 4);
    }
    uVar23 = (ulonglong)(-uVar8 & uVar8) * 2 + 1;
    lVar18 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_11e0 = (int)lVar18;
    uVar8 = local_11e0 + -1 + uVar7;
    if (local_10c8.AllocationFlags.NumBits < (int)uVar8) {
      uVar8 = local_10c8.AllocationFlags.NumBits;
    }
  }
LAB_1420c1660:
  while( true ) {
    pTVar5 = local_1150;
    if ((local_1150->Data).ArrayNum - local_1150->NumFreeIndices != (int)uStack_1128) {
      local_1277[0] = 0;
      `TSparseArray<TSparseSetElement<FNameEntryId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1277);
    }
    lVar18 = (longlong)TStack_1148.CurrentBitIndex;
    if (((TStack_1148.CurrentBitIndex == uVar8) &&
        (TStack_1148.Array == &local_10c8.AllocationFlags)) && (pTVar5 == &local_10c8)) {
      local_1080 = 0;
      if (local_1088.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1088.Data);
      }
      TSparseArray<TSparseSetElement<FNameEntryId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FNameEntryId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FNameEntryId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&local_10c8);
      return;
    }
    pFVar21 = (pTVar5->Data).AllocatorInstance.Data;
    local_858.Base = local_838;
    local_858.CurPos = local_838;
    local_858.bIsDynamic = false;
    local_858.bIsExternal = false;
    local_858.End = (wchar_t *)&local_38;
    pvVar11 = FGenericPlatformString::Memcpy(local_838,L"New RHS Name: ",0x1c);
    local_858.CurPos = (wchar_t *)((longlong)pvVar11 + 0x1c);
    local_1218.Number = 0;
    local_1218.ComparisonIndex.Value = *(uint *)(pFVar21 + lVar18 * 0xc);
    pFVar12 = ::FName::ToString(&local_1218,local_1100);
    iVar22 = (pFVar12->Data).ArrayNum;
    pFVar21 = (pFVar12->Data).AllocatorInstance.Data;
    uVar7 = iVar22 - 1;
    if (iVar22 == 0) {
      uVar7 = uVar17;
    }
    uVar19 = (ulong64)(int)uVar7;
    if (local_858.End < local_858.CurPos + uVar19) {
      TStringBuilderBase<wchar_t>::Extend(&local_858,uVar19);
    }
    if (uVar7 != 0) {
      pvVar11 = FGenericPlatformString::Memcpy(local_858.CurPos,pFVar21,uVar19 * 2);
      local_858.CurPos = (wchar_t *)((longlong)pvVar11 + uVar19 * 2);
    }
    if (local_1100[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1100[0].Data.AllocatorInstance.Data);
    }
    if (local_858.End < local_858.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_858,1);
    }
    *local_858.CurPos = L'\0';
    ::FString::FString(&local_1260,local_858.Base);
    pFVar21 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar21 <= (FScriptContainerElement *)&local_1260) &&
        ((FScriptContainerElement *)&local_1260 < pFVar21 + (longlong)pTVar1->ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) break;
    iVar22 = pTVar1->ArrayNum;
    if (iVar22 == pTVar1->ArrayMax) {
      iVar22 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
    }
    pTVar1->ArrayNum = iVar22 + 1;
    pFVar21 = (pTVar1->AllocatorInstance).Data + (longlong)iVar22 * 0x10;
    *(undefined8 *)pFVar21 = 0;
    *(FScriptContainerElement **)pFVar21 = local_1260.Data.AllocatorInstance.Data;
    *(int *)(pFVar21 + 8) = local_1260.Data.ArrayNum;
    *(int *)(pFVar21 + 0xc) = local_1260.Data.ArrayMax;
    local_1260.Data.ArrayNum = 0;
    local_1260.Data.ArrayMax = 0;
    local_1260.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
    TStack_1148.UnvisitedBitMask = TStack_1148.UnvisitedBitMask & ~TStack_1148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1148);
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// GenerateSearchableNameArrayDiff @ 1420c1940

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001420c1f2b) */
/* WARNING: Removing unreachable block (ram,0x0001420c241a) */

void __thiscall
FLinkerDiff::GenerateSearchableNameArrayDiff
          (FLinkerDiff *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  FName *pFVar4;
  int iVar5;
  undefined8 uVar6;
  FName FVar7;
  longlong lVar8;
  code *pcVar9;
  longlong *plVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  void *pvVar15;
  FString *pFVar16;
  ulonglong uVar17;
  ForElementType<unsigned_int> FVar18;
  ForAnyElementType FVar19;
  ulong64 uVar20;
  uint uVar21;
  int iVar22;
  FScriptContainerElement *pFVar23;
  undefined8 *puVar24;
  longlong lVar25;
  uint uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  FName *this_00;
  undefined1 auStack_1248 [32];
  FString *local_1228;
  FScriptContainerElement *local_1220;
  longlong local_1218;
  longlong local_1210;
  undefined8 local_1208;
  undefined1 local_11f8;
  undefined1 local_11f7 [7];
  FString local_11f0;
  FString local_11e0;
  uint local_11d0;
  uint uStack_11cc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_11c8;
  undefined4 local_11c0;
  uint uStack_11bc;
  uint uStack_11b8;
  undefined4 uStack_11b4;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_11b0;
  undefined4 local_11a8;
  int local_11a4;
  FName local_11a0;
  int local_1198;
  longlong *local_1190;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1188;
  longlong *local_1168;
  uint uStack_1160;
  uint uStack_115c;
  TBitArray<FDefaultBitArrayAllocator> *local_1158;
  undefined4 uStack_1150;
  uint uStack_114c;
  uint local_1148;
  undefined4 uStack_1144;
  int iStack_1140;
  undefined4 uStack_113c;
  longlong *local_1138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1130;
  undefined8 uStack_1110;
  FString local_1108;
  FString local_10f8 [2];
  undefined4 local_10cc;
  undefined1 local_10c8 [32];
  ForElementType<unsigned_int> local_10a8;
  uint local_10a0;
  int local_109c;
  int local_1098;
  int local_1094;
  FScriptContainerElement local_1090 [8];
  ForAnyElementType local_1088;
  uint local_1080;
  TStringBuilderBase<wchar_t> local_1078;
  wchar_t local_1058 [1024];
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1024];
  ulonglong local_38 [2];
  
  local_38[1] = 0x1420c1965;
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_1248;
  uVar12 = param_2->ArrayNum;
  pTVar1 = &this->SearchableNameDiffs;
  pFVar23 = (param_2->AllocatorInstance).Data;
  local_11b0 = param_1;
  if (((int)uVar12 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar17 = 0;
  local_10c8._0_8_ = (FScriptContainerElement *)0x0;
  local_10c8._8_8_ = 0;
  local_10a8 = (ForElementType<unsigned_int>)0x0;
  local_10a0 = 0;
  local_109c = 0x80;
  local_1098 = -1;
  local_1094 = 0;
  local_1088.Data = (FScriptContainerElement *)0x0;
  local_1080 = 0;
  uVar27 = uVar17;
  if (uVar12 == 0) goto LAB_1420c1c7b;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar12);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_10c8,uVar12);
  uVar21 = 1;
  if (3 < uVar12) {
    uVar27 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
    lVar25 = 0x3f;
    if (uVar27 != 0) {
      for (; uVar27 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_11a8 = (undefined4)lVar25;
    uVar21 = 1 << ((byte)lVar25 & 0x1f);
  }
  if ((local_1080 == 0) || ((int)local_1080 < (int)uVar21)) {
    local_1080 = uVar21;
    if (local_1088.Data != (FScriptContainerElement *)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1088,0,0,4);
    }
    if (uVar21 != 0) {
      uVar26 = uVar21;
      if (uVar21 < 2) {
        if (local_1088.Data != (FScriptContainerElement *)0x0) {
          uVar26 = 0;
          goto LAB_1420c1aa9;
        }
      }
      else {
LAB_1420c1aa9:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1088,0,uVar26,4)
        ;
      }
      if (0 < (int)uVar21) {
        uVar28 = (ulonglong)uVar21;
        uVar27 = uVar17;
        do {
          FVar19.Data = local_1090;
          if (local_1088.Data != (FScriptContainerElement *)0x0) {
            FVar19.Data = local_1088.Data;
          }
          uVar14 = uVar27 & (longlong)(int)uVar21 - 1U;
          uVar27 = uVar27 + 1;
          *(undefined4 *)(FVar19.Data + uVar14 * 4) = 0xffffffff;
          uVar28 = uVar28 - 1;
        } while (uVar28 != 0);
      }
    }
    if (local_1080 != 0) {
      uVar27 = (ulonglong)local_10a0;
      pTStack_11c8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_10c8 + 0x10);
      local_11d0 = 0;
      uStack_11cc = 1;
      uStack_11bc = 0;
      uStack_11b8 = 0;
      if (local_10a0 != 0) {
        FVar18 = (ForElementType<unsigned_int>)((longlong)local_10c8 + 0x10);
        if (local_10a8 != (ForElementType<unsigned_int>)0x0) {
          FVar18 = local_10a8;
        }
        uVar21 = *(uint *)FVar18;
        uVar28 = uVar17;
        while (uVar21 == 0) {
          uStack_11b8 = (int)uVar28 + 0x20;
          uVar28 = (ulonglong)uStack_11b8;
          iVar22 = (int)uVar17;
          local_11d0 = iVar22 + 1;
          uVar17 = (ulonglong)local_11d0;
          if ((int)((local_10a0 - 1) + ((int)(local_10a0 - 1) >> 0x1f & 0x1fU)) >> 5 <
              (int)local_11d0) goto LAB_1420c1bbd;
          uVar21 = ((uint *)((longlong)FVar18 + 4))[iVar22];
        }
        uStack_11cc = -uVar21 & uVar21;
        uVar17 = (ulonglong)uStack_11cc * 2 + 1;
        lVar25 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        local_11a4 = (int)lVar25;
        uStack_11bc = (uStack_11b8 - 1) + local_11a4;
        uVar17 = (ulonglong)uStack_11bc;
        if ((int)local_10a0 < (int)uStack_11bc) {
LAB_1420c1bbd:
          uVar17 = (ulonglong)local_10a0;
          uStack_11bc = local_10a0;
        }
      }
      local_11c0 = 0xffffffff;
      local_1190 = (longlong *)local_10c8;
      local_1188._padding_ = CONCAT44(uStack_11cc,local_11d0);
      local_1188.CurrentBitIndex = uStack_11bc;
      local_1188.UnvisitedBitMask = 0xffffffff;
      local_1188._28_4_ = uStack_11b4;
      local_1188.BaseBitIndex = uStack_11b8;
      local_1188.Array = pTStack_11c8;
      if ((int)local_10a0 <= (int)uVar17) goto LAB_1420c1c7b;
      do {
        puVar24 = (undefined8 *)((longlong)(int)uVar17 * 0x10 + *local_1190);
        uVar6 = *puVar24;
        uVar21 = ::GetTypeHash((FNameEntryId)(uint)uVar6);
        uVar21 = local_1080 - 1 & uVar21 + (int)((ulonglong)uVar6 >> 0x20);
        *(uint *)((longlong)puVar24 + 0xc) = uVar21;
        FVar19.Data = local_1090;
        if (local_1088.Data != (FScriptContainerElement *)0x0) {
          FVar19.Data = local_1088.Data;
        }
        uVar27 = (longlong)(int)local_1080 - 1U & (longlong)(int)uVar21;
        *(undefined4 *)(puVar24 + 1) = *(undefined4 *)(FVar19.Data + uVar27 * 4);
        *(int *)(FVar19.Data + uVar27 * 4) = (int)uVar17;
        local_1188.UnvisitedBitMask = local_1188.UnvisitedBitMask & ~local_1188._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1188);
        uVar17 = (ulonglong)(uint)local_1188.CurrentBitIndex;
        param_1 = local_11b0;
      } while (local_1188.CurrentBitIndex < (local_1188.Array)->NumBits);
    }
  }
  uVar27 = (ulonglong)local_10a0;
LAB_1420c1c7b:
  pFVar3 = pFVar23 + (longlong)(int)uVar12 * 8;
  if (pFVar23 != pFVar3) {
    do {
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_10c8,&local_11a0
                 ,(bool *)pFVar23);
      pFVar23 = pFVar23 + 8;
    } while (pFVar23 != pFVar3);
    uVar27 = (ulonglong)local_10a0;
  }
  this_00 = (FName *)(param_1->AllocatorInstance).Data;
  iVar22 = param_1->ArrayNum;
  pFVar4 = this_00 + iVar22;
LAB_1420c1cb5:
  while( true ) {
    if (param_1->ArrayNum != iVar22) {
      local_11f8 = 0;
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_11f8);
      uVar27 = (ulonglong)local_10a0;
    }
    uVar12 = (uint)uVar27;
    if (this_00 == pFVar4) break;
    FVar7 = *this_00;
    uVar12 = ::GetTypeHash(FVar7.ComparisonIndex.Value);
    if (local_10c8._8_4_ != local_1094) {
      FVar19.Data = local_1090;
      if (local_1088.Data != (FScriptContainerElement *)0x0) {
        FVar19.Data = local_1088.Data;
      }
      uVar12 = *(uint *)(FVar19.Data + (ulonglong)(local_1080 - 1 & FVar7.Number + uVar12) * 4);
      while (uVar12 != 0xffffffff) {
        lVar25 = (longlong)(int)uVar12 * 0x10;
        if (*(FName *)(local_10c8._0_8_ + lVar25) == FVar7) {
          if (((int)uVar12 < 0) || ((int)local_10a0 <= (int)uVar12)) {
LAB_1420c1f8c:
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Elements.IsValidIndex(ElementIndex)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                ,0x2ab,
                                L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
            if (bVar11) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          else {
            FVar18 = (ForElementType<unsigned_int>)((longlong)local_10c8 + 0x10);
            if (local_10a8 != (ForElementType<unsigned_int>)0x0) {
              FVar18 = local_10a8;
            }
            uVar21 = uVar12;
            if ((int)uVar12 < 0) {
              uVar21 = uVar12 + 0x1f;
            }
            if ((*(uint *)((longlong)FVar18 + (longlong)((int)uVar21 >> 5) * 4) >> (uVar12 & 0x1f) &
                1) == 0) goto LAB_1420c1f8c;
          }
          uVar6 = local_10c8._0_8_;
          FVar19.Data = local_1090;
          if (local_1088.Data != (FScriptContainerElement *)0x0) {
            FVar19.Data = local_1088.Data;
          }
          pFVar23 = FVar19.Data + (longlong)*(int *)(local_10c8._0_8_ + lVar25 + 0xc) * 4;
          goto LAB_1420c1fe0;
        }
        uVar12 = *(uint *)(local_10c8._0_8_ + lVar25 + 8);
      }
    }
    local_1078.Base = local_1058;
    local_1078.bIsDynamic = false;
    local_1078.bIsExternal = false;
    local_1078.CurPos = local_1058;
    local_1078.End = (wchar_t *)&local_858;
    pvVar15 = FGenericPlatformString::Memcpy(local_1058,L"Missing RHS searchable name: ",0x3a);
    local_1078.CurPos = (wchar_t *)((longlong)pvVar15 + 0x3a);
    pFVar16 = ::FName::ToString(this_00,&local_1108);
    iVar5 = (pFVar16->Data).ArrayNum;
    pFVar23 = (pFVar16->Data).AllocatorInstance.Data;
    iVar13 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar13 = 0;
    }
    uVar20 = (ulong64)iVar13;
    if (local_1078.End < (TStringBuilderBase<wchar_t> *)(local_1078.CurPos + uVar20)) {
      TStringBuilderBase<wchar_t>::Extend(&local_1078,uVar20);
    }
    if (iVar13 != 0) {
      pvVar15 = FGenericPlatformString::Memcpy(local_1078.CurPos,pFVar23,uVar20 * 2);
      local_1078.CurPos = (wchar_t *)((longlong)pvVar15 + uVar20 * 2);
    }
    if (local_1108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1108.Data.AllocatorInstance.Data);
    }
    if (local_1078.End < (TStringBuilderBase<wchar_t> *)(local_1078.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_1078,1);
    }
    *local_1078.CurPos = L'\0';
    ::FString::FString(&local_11f0,local_1078.Base);
    pFVar23 = (pTVar1->AllocatorInstance).Data;
    if ((pFVar23 <= (FScriptContainerElement *)&local_11f0) &&
       (lVar25 = (longlong)(this->SearchableNameDiffs).ArrayMax,
       (FScriptContainerElement *)&local_11f0 < pFVar23 + lVar25 * 0x10)) {
      local_1210 = (longlong)(this->SearchableNameDiffs).ArrayNum;
      local_1208 = 0x10;
      local_1228 = &local_11f0;
      local_1220 = pFVar23;
      local_1218 = lVar25;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar11) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    iVar13 = (this->SearchableNameDiffs).ArrayNum;
    piVar2 = &(this->SearchableNameDiffs).ArrayMax;
    if (iVar13 == *piVar2) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->SearchableNameDiffs).ArrayNum = iVar13 + 1;
    pFVar23 = (pTVar1->AllocatorInstance).Data + (longlong)iVar13 * 0x10;
    *(undefined8 *)pFVar23 = 0;
    *(FScriptContainerElement **)pFVar23 = local_11f0.Data.AllocatorInstance.Data;
    *(int *)(pFVar23 + 8) = local_11f0.Data.ArrayNum;
    *(int *)(pFVar23 + 0xc) = local_11f0.Data.ArrayMax;
    local_11f0.Data.ArrayNum = 0;
    local_11f0.Data.ArrayMax = 0;
    local_11f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1078);
    uVar27 = (ulonglong)local_10a0;
    this_00 = this_00 + 1;
    param_1 = local_11b0;
  }
  uStack_1160 = 0;
  uStack_115c = 1;
  uStack_114c = uStack_1160;
  local_1148 = uStack_1160;
  if (uVar12 == 0) goto LAB_1420c20e0;
  FVar18 = (ForElementType<unsigned_int>)((longlong)local_10c8 + 0x10);
  if (local_10a8 != (ForElementType<unsigned_int>)0x0) {
    FVar18 = local_10a8;
  }
  uVar21 = *(uint *)FVar18;
  local_1148 = 0;
  uStack_1160 = 0;
joined_r0x0001420c209b:
  if (uVar21 != 0) goto LAB_1420c20bc;
  lVar25 = (longlong)(int)uStack_1160;
  local_1148 = local_1148 + 0x20;
  uStack_1160 = uStack_1160 + 1;
  uStack_114c = uVar12;
  if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_1160)
  goto LAB_1420c20e0;
  uVar21 = ((uint *)((longlong)FVar18 + 4))[lVar25];
  goto joined_r0x0001420c209b;
LAB_1420c1fe0:
  uVar21 = *(uint *)pFVar23;
  if (uVar21 == 0xffffffff) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("NextElementIndex != INDEX_NONE",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                        ,0x2b5,L"Corrupt hash");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  else if (uVar21 == uVar12) goto LAB_1420c202b;
  pFVar23 = (FScriptContainerElement *)(local_10c8._0_8_ + (longlong)(int)uVar21 * 0x10 + 8);
  goto LAB_1420c1fe0;
LAB_1420c202b:
  *(uint *)pFVar23 = *(uint *)(uVar6 + lVar25 + 8);
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_10c8,uVar12,1);
  uVar27 = (ulonglong)local_10a0;
  this_00 = this_00 + 1;
  param_1 = local_11b0;
  goto LAB_1420c1cb5;
LAB_1420c20bc:
  uStack_115c = -uVar21 & uVar21;
  uVar17 = (ulonglong)uStack_115c * 2 + 1;
  lVar25 = 0x3f;
  if (uVar17 != 0) {
    for (; uVar17 >> lVar25 == 0; lVar25 = lVar25 + -1) {
    }
  }
  local_11a0.Number = (uint)lVar25;
  uStack_114c = (local_1148 - 1) + local_11a0.Number;
  if ((int)uVar12 < (int)uStack_114c) {
    uStack_114c = uVar12;
  }
LAB_1420c20e0:
  local_1168 = (longlong *)local_10c8;
  uStack_1144 = local_10cc;
  local_1158 = (TBitArray<FDefaultBitArrayAllocator> *)(local_10c8 + 0x10);
  uVar21 = uVar12 & 0xffffffe0;
  iStack_1140 = local_10c8._8_4_ - local_1094;
  uStack_1150 = 0xffffffff;
  TStack_1130.CurrentBitIndex = uStack_114c;
  TStack_1130.UnvisitedBitMask = 0xffffffff;
  TStack_1130._padding_ = CONCAT44(uStack_115c,uStack_1160);
  iVar22 = (int)uVar12 >> 5;
  TStack_1130._28_4_ = local_10cc;
  TStack_1130.BaseBitIndex = local_1148;
  uStack_1110 = CONCAT44(uStack_113c,iStack_1140);
  uVar26 = uVar12;
  local_1138 = local_1168;
  TStack_1130.Array = local_1158;
  if (((int)uVar12 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), uVar26 = local_10a0, bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (uVar12 != uVar26) {
    FVar18 = (ForElementType<unsigned_int>)((longlong)local_10c8 + 0x10);
    if (local_10a8 != (ForElementType<unsigned_int>)0x0) {
      FVar18 = local_10a8;
    }
    uVar12 = -1 << ((byte)uVar27 & 0x1f) & *(uint *)((longlong)FVar18 + (longlong)iVar22 * 4);
    while (uVar12 == 0) {
      lVar25 = (longlong)iVar22;
      uVar21 = uVar21 + 0x20;
      iVar22 = iVar22 + 1;
      if ((int)((uVar26 - 1) + ((int)(uVar26 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22) {
        uVar27 = (ulonglong)uVar26;
        goto LAB_1420c2200;
      }
      uVar12 = ((uint *)((longlong)FVar18 + 4))[lVar25];
    }
    uVar17 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar25 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_1198 = (int)lVar25;
    uVar12 = (uVar21 - 1) + local_1198;
    if ((int)uVar26 < (int)uVar12) {
      uVar12 = uVar26;
    }
    uVar27 = (ulonglong)uVar12;
  }
LAB_1420c2200:
  while( true ) {
    plVar10 = local_1138;
    if ((int)local_1138[1] - *(int *)((longlong)local_1138 + 0x34) != (int)uStack_1110) {
      local_11f7[0] = 0;
      `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_11f7);
    }
    lVar25 = (longlong)TStack_1130.CurrentBitIndex;
    if (((TStack_1130.CurrentBitIndex == (int)uVar27) &&
        (TStack_1130.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_10c8 + 0x10))) &&
       (plVar10 == (longlong *)local_10c8)) break;
    lVar8 = *plVar10;
    local_858.Base = local_838;
    local_858.CurPos = local_838;
    local_858.bIsDynamic = false;
    local_858.bIsExternal = false;
    local_858.End = (wchar_t *)local_38;
    pvVar15 = FGenericPlatformString::Memcpy(local_838,L"New RHS searchable name: ",0x32);
    local_858.CurPos = (wchar_t *)((longlong)pvVar15 + 0x32);
    pFVar16 = ::FName::ToString((FName *)(lVar25 * 0x10 + lVar8),local_10f8);
    iVar13 = (pFVar16->Data).ArrayNum;
    pFVar23 = (pFVar16->Data).AllocatorInstance.Data;
    iVar22 = iVar13 + -1;
    if (iVar13 == 0) {
      iVar22 = 0;
    }
    uVar20 = (ulong64)iVar22;
    if (local_858.End < local_858.CurPos + uVar20) {
      TStringBuilderBase<wchar_t>::Extend(&local_858,uVar20);
    }
    if (iVar22 != 0) {
      pvVar15 = FGenericPlatformString::Memcpy(local_858.CurPos,pFVar23,uVar20 * 2);
      local_858.CurPos = (wchar_t *)((longlong)pvVar15 + uVar20 * 2);
    }
    if (local_10f8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_10f8[0].Data.AllocatorInstance.Data);
    }
    if (local_858.End < local_858.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_858,1);
    }
    *local_858.CurPos = L'\0';
    ::FString::FString(&local_11e0,local_858.Base);
    pFVar23 = (pTVar1->AllocatorInstance).Data;
    if ((pFVar23 <= (FScriptContainerElement *)&local_11e0) &&
       (lVar25 = (longlong)(this->SearchableNameDiffs).ArrayMax,
       (FScriptContainerElement *)&local_11e0 < pFVar23 + lVar25 * 0x10)) {
      local_1210 = (longlong)(this->SearchableNameDiffs).ArrayNum;
      local_1208 = 0x10;
      local_1228 = &local_11e0;
      local_1220 = pFVar23;
      local_1218 = lVar25;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar11) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    iVar22 = (this->SearchableNameDiffs).ArrayNum;
    piVar2 = &(this->SearchableNameDiffs).ArrayMax;
    if (iVar22 == *piVar2) {
      iVar22 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->SearchableNameDiffs).ArrayNum = iVar22 + 1;
    pFVar23 = (pTVar1->AllocatorInstance).Data + (longlong)iVar22 * 0x10;
    *(undefined8 *)pFVar23 = 0;
    *(FScriptContainerElement **)pFVar23 = local_11e0.Data.AllocatorInstance.Data;
    *(int *)(pFVar23 + 8) = local_11e0.Data.ArrayNum;
    *(int *)(pFVar23 + 0xc) = local_11e0.Data.ArrayMax;
    local_11e0.Data.ArrayNum = 0;
    local_11e0.Data.ArrayMax = 0;
    local_11e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
    TStack_1130.UnvisitedBitMask = TStack_1130.UnvisitedBitMask & ~TStack_1130._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1130);
  }
  local_1080 = 0;
  if (local_1088.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1088.Data);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_10c8);
  return;
}

// GenerateSearchableNameMapDiff @ 1420c24c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001420c307e) */
/* WARNING: Removing unreachable block (ram,0x0001420c2b55) */

void __thiscall
FLinkerDiff::GenerateSearchableNameMapDiff(FLinkerDiff *this,FLinker *param_1,FLinker *param_2)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  ulonglong uVar2;
  FPackageIndex FVar3;
  longlong lVar4;
  code *pcVar5;
  FLinker *pFVar6;
  ForAnyElementType FVar7;
  FLinkerDiff *pFVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  uint uVar12;
  FObjectExport *pFVar14;
  void *pvVar15;
  FString *pFVar16;
  byte bVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  uint *puVar20;
  uint uVar21;
  FLinker *pFVar22;
  uint uVar23;
  uint uVar24;
  longlong *plVar25;
  ulong64 uVar26;
  longlong *plVar27;
  longlong *plVar28;
  longlong *plVar29;
  int iVar30;
  int *piVar31;
  undefined1 auStack_1288 [32];
  undefined1 local_1238;
  undefined1 local_1237 [3];
  uint local_1234;
  FLinker *local_1230;
  TBitArray<FDefaultBitArrayAllocator> *local_1228;
  FLinker *local_1220;
  FString local_1218;
  FString local_1208;
  FString local_11f8;
  FString local_11e8;
  longlong *local_11d8;
  undefined1 local_11d0 [8];
  FPackageIndex local_11c8;
  uint uStack_11c4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_11c0;
  uint local_11b8;
  uint uStack_11b4;
  uint uStack_11b0;
  undefined4 uStack_11ac;
  FLinkerDiff *local_11a8;
  longlong *local_11a0;
  undefined8 uStack_1198;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1190;
  undefined8 uStack_1188;
  undefined8 uStack_1180;
  int local_1178;
  undefined4 uStack_1174;
  longlong *local_1170;
  int iStack_1168;
  uint uStack_1164;
  longlong *local_1160;
  undefined4 uStack_1158;
  int iStack_1154;
  int local_1150;
  int iStack_1148;
  undefined4 uStack_1144;
  int local_1140;
  int local_113c;
  int local_1138;
  int local_1134;
  longlong *local_1130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1128;
  undefined8 uStack_1108;
  longlong *local_1100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_10f8;
  undefined8 uStack_10d8;
  FString local_10d0;
  FString local_10c0 [2];
  undefined4 local_1094;
  TStringBuilderBase<wchar_t> local_1088;
  wchar_t local_1068 [1024];
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1024];
  ulonglong local_48 [2];
  FObjectImport *pFVar13;
  
  local_48[1] = 0x1420c24e2;
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_1288;
  local_11d8 = &param_2->_padding_;
  plVar28 = &param_1->_padding_;
  iVar11 = (int)param_1->_padding_;
  pTVar1 = &this->SearchableNameDiffs;
  local_1234 = 0;
  local_1170 = &param_1->_padding_;
  iStack_1168 = 0;
  uStack_1164 = 1;
  local_1150 = 0;
  iStack_1154 = 0;
  if (iVar11 != 0) {
    plVar29 = (longlong *)param_1->_padding_;
    if ((longlong *)param_1->_padding_ == (longlong *)0x0) {
      plVar29 = plVar28;
    }
    uVar12 = (uint)*plVar29;
    while (uVar12 == 0) {
      lVar18 = (longlong)iStack_1168;
      local_1150 = local_1150 + 0x20;
      iStack_1168 = iStack_1168 + 1;
      iStack_1154 = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1168) goto LAB_1420c259d;
      uVar12 = *(uint *)((longlong)plVar29 + lVar18 * 4 + 4);
    }
    uStack_1164 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uStack_1164 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_1140 = (int)lVar18;
    iStack_1154 = local_1150 + -1 + local_1140;
    if (iVar11 < iStack_1154) {
      iStack_1154 = iVar11;
    }
  }
LAB_1420c259d:
  iStack_1148 = (int)param_1->_padding_ - *(int *)((longlong)&param_1->_padding_ + 4);
  uVar12 = (uint)param_1->_padding_;
  bVar17 = (byte)uVar12 & 0x1f;
  iVar30 = (int)uVar12 >> 5;
  uStack_11c4 = 1 << bVar17;
  uVar23 = uVar12 & 0xffffffe0;
  uVar21 = -1 << bVar17;
  uStack_1158 = 0xffffffff;
  TStack_1128._padding_ = CONCAT44(uStack_1164,iStack_1168);
  TStack_1128.CurrentBitIndex = iStack_1154;
  TStack_1128.UnvisitedBitMask = 0xffffffff;
  TStack_1128._28_4_ = local_1094;
  TStack_1128.BaseBitIndex = local_1150;
  uStack_1108 = CONCAT44(uStack_1144,iStack_1148);
  local_1230 = param_1;
  local_1220 = param_2;
  local_11c8.Index = iVar30;
  pTStack_11c0 = (TBitArray<FDefaultBitArrayAllocator> *)plVar28;
  local_11b8 = uVar21;
  uStack_11b4 = uVar12;
  uStack_11b0 = uVar23;
  local_11a8 = this;
  local_1160 = plVar28;
  local_1130 = local_1170;
  TStack_1128.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar28;
  if ((((int)uVar12 < 0) || (iVar11 < (int)uVar12)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  plVar29 = local_11d8;
  uVar24 = (uint)param_1->_padding_;
  if (uVar12 != uVar24) {
    plVar25 = (longlong *)param_1->_padding_;
    if ((longlong *)param_1->_padding_ == (longlong *)0x0) {
      plVar25 = plVar28;
    }
    uVar21 = uVar21 & *(uint *)((longlong)plVar25 + (longlong)iVar30 * 4);
    while (uVar21 == 0) {
      uStack_11b0 = uVar23 + 0x20;
      local_11c8.Index = iVar30 + 1;
      if ((int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 < local_11c8.Index)
      goto LAB_1420c26d5;
      uVar21 = *(uint *)((longlong)plVar25 + (longlong)iVar30 * 4 + 4);
      local_11b8 = 0xffffffff;
      iVar30 = local_11c8.Index;
      uVar23 = uStack_11b0;
    }
    uStack_11c4 = -uVar21 & uVar21;
    uVar2 = (ulonglong)uStack_11c4 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_113c = (int)lVar18;
    uStack_11b4 = local_113c + -1 + uVar23;
    if ((int)uVar24 < (int)uStack_11b4) {
LAB_1420c26d5:
      uStack_11b4 = uVar24;
    }
  }
  uVar12 = uStack_11b4;
  uStack_1198 = CONCAT44(uStack_11c4,local_11c8.Index);
  uStack_1188 = CONCAT44(uStack_11b4,local_11b8);
  uStack_1180 = CONCAT44(uStack_11ac,uStack_11b0);
  pTStack_1190 = pTStack_11c0;
  local_1228 = pTStack_11c0;
LAB_1420c2700:
  plVar28 = local_1130;
  if ((int)local_1130[1] - *(int *)((longlong)local_1130 + 0x34) != (int)uStack_1108) {
    local_1238 = 0;
    `TSparseArray<TSparseSetElement<TTuple<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1238);
  }
  pFVar22 = local_1220;
  pFVar6 = local_1230;
  if (((TStack_1128.CurrentBitIndex != uVar12) || (TStack_1128.Array != local_1228)) ||
     (plVar28 != &local_1230->_padding_)) {
    piVar31 = (int *)((longlong)TStack_1128.CurrentBitIndex * 0x20 + *plVar28);
    if ((*piVar31 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("!SearchableNamePair.Key.IsNull()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerDiff.cpp"
                           ,0x1b7,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar3.Index = *piVar31;
    plVar28 = &pFVar6->_padding_;
    if ((FVar3.Index == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Index.IsNull()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Linker.h"
                           ,0x59,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (FVar3.Index < 0) {
      pFVar13 = FLinkerTables::Imp((FLinkerTables *)plVar28,FVar3);
      uVar10 = SUB81(pFVar13,0);
    }
    else {
      pFVar14 = FLinkerTables::Exp((FLinkerTables *)plVar28,FVar3);
      uVar10 = SUB81(pFVar14,0);
    }
    pFVar6 = local_1220;
    FindResourcePackageIndex
              ((FObjectResource *)local_11d0,(bool)uVar10,
               (FLinker *)(ulonglong)((uint)FVar3.Index >> 0x1f),local_1230);
    if ((local_11d0._0_4_ != 0) && ((int)pFVar6->_padding_ != *(int *)((longlong)local_11d8 + 0x34))
       ) {
      plVar25 = (longlong *)local_11d8[8];
      plVar27 = local_11d8 + 7;
      if (plVar25 != (longlong *)0x0) {
        plVar27 = plVar25;
      }
      lVar18 = (ulonglong)((int)local_11d8[9] - 1U & local_11d0._0_4_) * 4;
      iVar11 = *(int *)((longlong)plVar27 + lVar18);
      if (iVar11 != -1) {
        lVar4 = *local_11d8;
        do {
          if (*(uint *)((longlong)iVar11 * 0x20 + lVar4) == local_11d0._0_4_) {
            plVar28 = local_11d8 + 7;
            if (plVar25 != (longlong *)0x0) {
              plVar28 = plVar25;
            }
            uVar21 = *(uint *)(lVar18 + (longlong)plVar28);
            goto joined_r0x0001420c28e8;
          }
          iVar11 = *(int *)((longlong)iVar11 * 0x20 + 0x18 + lVar4);
        } while (iVar11 != -1);
      }
    }
    local_1088.Base = local_1068;
    local_1088.bIsDynamic = false;
    local_1088.bIsExternal = false;
    local_1088.CurPos = local_1068;
    local_1088.End = (wchar_t *)&local_868;
    pvVar15 = FGenericPlatformString::Memcpy
                        (local_1068,L"Missing RHS Searchable Name Map entry for: ",0x56);
    iVar11 = *piVar31;
    local_1088.CurPos = (wchar_t *)((longlong)pvVar15 + 0x56);
    if (iVar11 < 0) {
      FLinkerTables::GetImportPathName((FLinkerTables *)plVar28,&local_1218,-1 - iVar11);
    }
    else if (iVar11 < 1) {
      local_1218.Data.ArrayMax = 0;
      local_1218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1218.Data.ArrayNum = 0;
    }
    else {
      pFVar16 = UObjectBaseUtility::GetPathName
                          ((UObjectBaseUtility *)local_1230->LinkerRoot,&local_10d0,(UObject *)0x0);
      FLinkerTables::GetExportPathName
                ((FLinkerTables *)plVar28,&local_1218,pFVar16,iVar11 + -1,false);
      uVar21 = local_1234;
      local_1234 = local_1234 & 0xfffffff7;
      if (local_10d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_10d0.Data.AllocatorInstance.Data);
      }
      if (((uVar21 & 4) != 0) && (local_1234 = uVar21 & 0xfffffff3, plVar29 != (longlong *)0x0)) {
        FMemory::Free(plVar29);
      }
    }
    FVar7.Data = local_1218.Data.AllocatorInstance.Data;
    iVar11 = local_1218.Data.ArrayNum + -1;
    if (local_1218.Data.ArrayNum == 0) {
      iVar11 = 0;
    }
    uVar26 = (ulong64)iVar11;
    if (local_1088.End < (TStringBuilderBase<wchar_t> *)(local_1088.CurPos + uVar26)) {
      TStringBuilderBase<wchar_t>::Extend(&local_1088,uVar26);
    }
    if (iVar11 != 0) {
      pvVar15 = FGenericPlatformString::Memcpy(local_1088.CurPos,FVar7.Data,uVar26 * 2);
      local_1088.CurPos = (wchar_t *)((longlong)pvVar15 + uVar26 * 2);
    }
    if (local_1218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1218.Data.AllocatorInstance.Data);
    }
    if (local_1088.End < (TStringBuilderBase<wchar_t> *)(local_1088.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_1088,1);
    }
    *local_1088.CurPos = L'\0';
    ::FString::FString(&local_1208,local_1088.Base);
    pFVar19 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar19 <= (FScriptContainerElement *)&local_1208) &&
        ((FScriptContainerElement *)&local_1208 <
         pFVar19 + (longlong)(this->SearchableNameDiffs).ArrayMax * 0x10)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar11 = (this->SearchableNameDiffs).ArrayNum;
    piVar31 = &(this->SearchableNameDiffs).ArrayMax;
    if (iVar11 == *piVar31) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar1->AllocatorInstance,piVar31);
    }
    (this->SearchableNameDiffs).ArrayNum = iVar11 + 1;
    pFVar19 = (pTVar1->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
    *(undefined8 *)pFVar19 = 0;
    *(FScriptContainerElement **)pFVar19 = local_1208.Data.AllocatorInstance.Data;
    *(int *)(pFVar19 + 8) = local_1208.Data.ArrayNum;
    *(int *)(pFVar19 + 0xc) = local_1208.Data.ArrayMax;
    local_1208.Data.ArrayNum = 0;
    local_1208.Data.ArrayMax = 0;
    local_1208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1088);
    goto LAB_1420c2b66;
  }
  iVar30 = 0;
  uVar12 = 1;
  plVar28 = &local_1220->_padding_;
  iVar11 = (int)local_1220->_padding_;
  uStack_1188._4_4_ = iVar30;
  uStack_1180._0_4_ = iVar30;
  if (iVar11 == 0) goto LAB_1420c2c0d;
  plVar29 = (longlong *)local_1220->_padding_;
  if ((longlong *)local_1220->_padding_ == (longlong *)0x0) {
    plVar29 = plVar28;
  }
  uVar21 = (uint)*plVar29;
  goto joined_r0x0001420c2bc2;
joined_r0x0001420c28e8:
  if (uVar21 == 0xffffffff) goto LAB_1420c2906;
  puVar20 = (uint *)((longlong)(int)uVar21 * 0x20 + lVar4);
  if (*puVar20 == local_11d0._0_4_) {
    if (puVar20 != (uint *)0x0) goto LAB_1420c2930;
    goto LAB_1420c290a;
  }
  uVar21 = puVar20[6];
  goto joined_r0x0001420c28e8;
LAB_1420c2906:
  puVar20 = (uint *)0x0;
LAB_1420c290a:
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar9) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1420c2930:
  GenerateSearchableNameArrayDiff
            (local_11a8,(TArray<FName,TSizedDefaultAllocator<32>_> *)(piVar31 + 2),
             (TArray<FName,TSizedDefaultAllocator<32>_> *)(puVar20 + 2));
LAB_1420c2b66:
  TStack_1128.UnvisitedBitMask = TStack_1128.UnvisitedBitMask & ~TStack_1128._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1128);
  goto LAB_1420c2700;
joined_r0x0001420c2bc2:
  if (uVar21 != 0) goto LAB_1420c2be8;
  lVar18 = (longlong)iVar30;
  uStack_1180._0_4_ = (int)uStack_1180 + 0x20;
  iVar30 = iVar30 + 1;
  uStack_1188._4_4_ = iVar11;
  if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar30) goto LAB_1420c2c0d;
  uVar21 = *(uint *)((longlong)plVar29 + lVar18 * 4 + 4);
  goto joined_r0x0001420c2bc2;
LAB_1420c2be8:
  uVar12 = -uVar21 & uVar21;
  uVar2 = (ulonglong)uVar12 * 2 + 1;
  lVar18 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
    }
  }
  local_1138 = (int)lVar18;
  uStack_1188._4_4_ = (int)uStack_1180 + -1 + local_1138;
  if (iVar11 < uStack_1188._4_4_) {
    uStack_1188._4_4_ = iVar11;
  }
LAB_1420c2c0d:
  uVar21 = (uint)local_1220->_padding_;
  plVar29 = &local_1220->_padding_;
  uVar24 = uVar21 & 0xffffffe0;
  local_1178 = (int)local_1220->_padding_ - *(int *)((longlong)&local_1220->_padding_ + 4);
  uStack_1188._0_4_ = 0xffffffff;
  uVar23 = -1 << ((byte)uVar21 & 0x1f);
  uStack_1198 = CONCAT44(uVar12,iVar30);
  uStack_1180._4_4_ = iStack_1154;
  TStack_10f8._padding_ = uStack_1198;
  uStack_10d8 = CONCAT44(uStack_1174,local_1178);
  iVar11 = (int)uVar21 >> 5;
  local_1228 = (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(local_1228._4_4_,uVar23);
  TStack_10f8.BaseBitIndex = (int)uStack_1180;
  TStack_10f8._28_4_ = iStack_1154;
  TStack_10f8.UnvisitedBitMask = 0xffffffff;
  TStack_10f8.CurrentBitIndex = uStack_1188._4_4_;
  local_11a0 = plVar29;
  pTStack_1190 = (TBitArray<FDefaultBitArrayAllocator> *)plVar28;
  local_1100 = plVar29;
  TStack_10f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar28;
  if ((int)uVar21 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar23 = (uint)local_1228;
  }
  plVar25 = local_11d8;
  uVar12 = (uint)pFVar22->_padding_;
  if (uVar21 != uVar12) {
    plVar27 = (longlong *)pFVar22->_padding_;
    if ((longlong *)pFVar22->_padding_ == (longlong *)0x0) {
      plVar27 = plVar28;
    }
    uVar23 = uVar23 & *(uint *)((longlong)plVar27 + (longlong)iVar11 * 4);
    while (uVar23 == 0) {
      lVar18 = (longlong)iVar11;
      uVar24 = uVar24 + 0x20;
      iVar11 = iVar11 + 1;
      uVar21 = uVar12;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
      goto LAB_1420c2d30;
      uVar23 = *(uint *)((longlong)plVar27 + lVar18 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
    lVar18 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_1134 = (int)lVar18;
    uVar21 = (uVar24 - 1) + local_1134;
    if ((int)uVar12 < (int)uVar21) {
      uVar21 = uVar12;
    }
  }
LAB_1420c2d30:
  do {
    plVar27 = local_1100;
    if ((int)local_1100[1] - *(int *)((longlong)local_1100 + 0x34) != (int)uStack_10d8) {
      local_1237[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1237);
    }
    if (((TStack_10f8.CurrentBitIndex == uVar21) &&
        (TStack_10f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)plVar28)) &&
       (plVar27 == plVar29)) {
      return;
    }
    plVar29 = &pFVar22->_padding_;
    piVar31 = (int *)((longlong)TStack_10f8.CurrentBitIndex * 0x20 + *plVar27);
    FVar3.Index = *piVar31;
    if ((FVar3.Index == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Index.IsNull()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Linker.h"
                           ,0x59,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (FVar3.Index < 0) {
      pFVar13 = FLinkerTables::Imp((FLinkerTables *)plVar29,FVar3);
      uVar10 = SUB81(pFVar13,0);
    }
    else {
      pFVar14 = FLinkerTables::Exp((FLinkerTables *)plVar29,FVar3);
      uVar10 = SUB81(pFVar14,0);
    }
    FindResourcePackageIndex
              ((FObjectResource *)(local_11d0 + 4),(bool)uVar10,
               (FLinker *)(ulonglong)((uint)FVar3.Index >> 0x1f),local_1220);
    if (local_11d0._4_4_ == 0) {
      local_868.Base = local_848;
      local_868.bIsDynamic = false;
      local_868.bIsExternal = false;
      local_868.CurPos = local_848;
      local_868.End = (wchar_t *)local_48;
      pvVar15 = FGenericPlatformString::Memcpy
                          (local_848,L"New RHS Searchable Name Map entry for: ",0x4e);
      iVar11 = *piVar31;
      local_868.CurPos = (wchar_t *)((longlong)pvVar15 + 0x4e);
      if (iVar11 < 0) {
        FLinkerTables::GetImportPathName((FLinkerTables *)plVar29,&local_11f8,-1 - iVar11);
      }
      else if (iVar11 < 1) {
        local_11f8.Data.ArrayMax = 0;
        local_11f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_11f8.Data.ArrayNum = 0;
      }
      else {
        pFVar16 = UObjectBaseUtility::GetPathName
                            ((UObjectBaseUtility *)local_1220->LinkerRoot,local_10c0,(UObject *)0x0)
        ;
        FLinkerTables::GetExportPathName
                  ((FLinkerTables *)plVar29,&local_11f8,pFVar16,iVar11 + -1,false);
        uVar12 = local_1234;
        local_1234 = local_1234 & 0xfffffffd;
        if (local_10c0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_10c0[0].Data.AllocatorInstance.Data);
        }
        if (((uVar12 & 1) != 0) && (local_1234 = uVar12 & 0xfffffffc, plVar25 != (longlong *)0x0)) {
          FMemory::Free(plVar25);
        }
      }
      FVar7.Data = local_11f8.Data.AllocatorInstance.Data;
      iVar11 = local_11f8.Data.ArrayNum + -1;
      if (local_11f8.Data.ArrayNum == 0) {
        iVar11 = 0;
      }
      uVar26 = (ulong64)iVar11;
      if (local_868.End < local_868.CurPos + uVar26) {
        TStringBuilderBase<wchar_t>::Extend(&local_868,uVar26);
      }
      if (iVar11 != 0) {
        pvVar15 = FGenericPlatformString::Memcpy(local_868.CurPos,FVar7.Data,uVar26 * 2);
        local_868.CurPos = (wchar_t *)((longlong)pvVar15 + uVar26 * 2);
      }
      if (local_11f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_11f8.Data.AllocatorInstance.Data);
      }
      if (local_868.End < local_868.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_868,1);
      }
      *local_868.CurPos = L'\0';
      ::FString::FString(&local_11e8,local_868.Base);
      pFVar8 = local_11a8;
      pFVar19 = (local_11a8->SearchableNameDiffs).AllocatorInstance.Data;
      if (((pFVar19 <= (FScriptContainerElement *)&local_11e8) &&
          ((FScriptContainerElement *)&local_11e8 <
           pFVar19 + (longlong)(local_11a8->SearchableNameDiffs).ArrayMax * 0x10)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar11 = (pFVar8->SearchableNameDiffs).ArrayNum;
      piVar31 = &(pFVar8->SearchableNameDiffs).ArrayMax;
      if (iVar11 == *piVar31) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&(pFVar8->SearchableNameDiffs).AllocatorInstance,piVar31);
      }
      (pFVar8->SearchableNameDiffs).ArrayNum = iVar11 + 1;
      pFVar19 = (pFVar8->SearchableNameDiffs).AllocatorInstance.Data + (longlong)iVar11 * 0x10;
      *(undefined8 *)pFVar19 = 0;
      *(FScriptContainerElement **)pFVar19 = local_11e8.Data.AllocatorInstance.Data;
      *(int *)(pFVar19 + 8) = local_11e8.Data.ArrayNum;
      *(int *)(pFVar19 + 0xc) = local_11e8.Data.ArrayMax;
      local_11e8.Data.ArrayNum = 0;
      local_11e8.Data.ArrayMax = 0;
      local_11e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
    }
    TStack_10f8.UnvisitedBitMask = TStack_10f8.UnvisitedBitMask & ~TStack_10f8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_10f8);
    pFVar22 = local_1220;
    plVar29 = local_11d8;
  } while( true );
}

// GenerateSofPackageReferenceDiff @ 1420c30f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001420c36db) */
/* WARNING: Removing unreachable block (ram,0x0001420c3bca) */

void __thiscall
FLinkerDiff::GenerateSofPackageReferenceDiff(FLinkerDiff *this,FLinker *param_1,FLinker *param_2)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  bool *pbVar3;
  FName *pFVar4;
  int iVar5;
  undefined8 uVar6;
  FName FVar7;
  longlong lVar8;
  code *pcVar9;
  longlong *plVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  void *pvVar15;
  FString *pFVar16;
  ulonglong uVar17;
  ForElementType<unsigned_int> FVar18;
  ForAnyElementType FVar19;
  ulong64 uVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  int iVar23;
  bool *pbVar24;
  undefined8 *puVar25;
  longlong lVar26;
  uint uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  FName *this_00;
  undefined1 auStack_1248 [32];
  FString *local_1228;
  FScriptContainerElement *local_1220;
  longlong local_1218;
  longlong local_1210;
  undefined8 local_1208;
  undefined1 local_11f8;
  undefined1 local_11f7 [7];
  FString local_11f0;
  FString local_11e0;
  uint local_11d0;
  uint uStack_11cc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_11c8;
  undefined4 local_11c0;
  uint uStack_11bc;
  uint uStack_11b8;
  undefined4 uStack_11b4;
  FLinker *local_11b0;
  undefined4 local_11a8;
  int local_11a4;
  FName local_11a0;
  int local_1198;
  longlong *local_1190;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1188;
  longlong *local_1168;
  uint uStack_1160;
  uint uStack_115c;
  TBitArray<FDefaultBitArrayAllocator> *local_1158;
  undefined4 uStack_1150;
  uint uStack_114c;
  uint local_1148;
  undefined4 uStack_1144;
  int iStack_1140;
  undefined4 uStack_113c;
  longlong *local_1138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1130;
  undefined8 uStack_1110;
  FString local_1108;
  FString local_10f8 [2];
  undefined4 local_10cc;
  undefined1 local_10c8 [32];
  ForElementType<unsigned_int> local_10a8;
  uint local_10a0;
  int local_109c;
  int local_1098;
  int local_1094;
  FScriptContainerElement local_1090 [8];
  ForAnyElementType local_1088;
  uint local_1080;
  TStringBuilderBase<wchar_t> local_1078;
  wchar_t local_1058 [1024];
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1024];
  ulonglong local_38 [2];
  
  local_38[1] = 0x1420c3115;
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_1248;
  uVar12 = (uint)param_2->_padding_;
  pTVar1 = &this->SoftPackageReferenceDiffs;
  pbVar24 = (bool *)param_2->_padding_;
  local_11b0 = param_1;
  if (((int)uVar12 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar17 = 0;
  local_10c8._0_8_ = (FScriptContainerElement *)0x0;
  local_10c8._8_8_ = 0;
  local_10a8 = (ForElementType<unsigned_int>)0x0;
  local_10a0 = 0;
  local_109c = 0x80;
  local_1098 = -1;
  local_1094 = 0;
  local_1088.Data = (FScriptContainerElement *)0x0;
  local_1080 = 0;
  uVar28 = uVar17;
  if (uVar12 == 0) goto LAB_1420c342b;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar12);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_10c8,uVar12);
  uVar22 = 1;
  if (3 < uVar12) {
    uVar28 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
    lVar26 = 0x3f;
    if (uVar28 != 0) {
      for (; uVar28 >> lVar26 == 0; lVar26 = lVar26 + -1) {
      }
    }
    local_11a8 = (undefined4)lVar26;
    uVar22 = 1 << ((byte)lVar26 & 0x1f);
  }
  if ((local_1080 == 0) || ((int)local_1080 < (int)uVar22)) {
    local_1080 = uVar22;
    if (local_1088.Data != (FScriptContainerElement *)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1088,0,0,4);
    }
    if (uVar22 != 0) {
      uVar27 = uVar22;
      if (uVar22 < 2) {
        if (local_1088.Data != (FScriptContainerElement *)0x0) {
          uVar27 = 0;
          goto LAB_1420c325a;
        }
      }
      else {
LAB_1420c325a:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1088,0,uVar27,4)
        ;
      }
      if (0 < (int)uVar22) {
        uVar29 = (ulonglong)uVar22;
        uVar28 = uVar17;
        do {
          FVar19.Data = local_1090;
          if (local_1088.Data != (FScriptContainerElement *)0x0) {
            FVar19.Data = local_1088.Data;
          }
          uVar14 = uVar28 & (longlong)(int)uVar22 - 1U;
          uVar28 = uVar28 + 1;
          *(undefined4 *)(FVar19.Data + uVar14 * 4) = 0xffffffff;
          uVar29 = uVar29 - 1;
        } while (uVar29 != 0);
      }
    }
    if (local_1080 != 0) {
      uVar28 = (ulonglong)local_10a0;
      pTStack_11c8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_10c8 + 0x10);
      local_11d0 = 0;
      uStack_11cc = 1;
      uStack_11bc = 0;
      uStack_11b8 = 0;
      if (local_10a0 != 0) {
        FVar18 = (ForElementType<unsigned_int>)((longlong)local_10c8 + 0x10);
        if (local_10a8 != (ForElementType<unsigned_int>)0x0) {
          FVar18 = local_10a8;
        }
        uVar22 = *(uint *)FVar18;
        uVar29 = uVar17;
        while (uVar22 == 0) {
          uStack_11b8 = (int)uVar29 + 0x20;
          uVar29 = (ulonglong)uStack_11b8;
          iVar23 = (int)uVar17;
          local_11d0 = iVar23 + 1;
          uVar17 = (ulonglong)local_11d0;
          if ((int)((local_10a0 - 1) + ((int)(local_10a0 - 1) >> 0x1f & 0x1fU)) >> 5 <
              (int)local_11d0) goto LAB_1420c336d;
          uVar22 = ((uint *)((longlong)FVar18 + 4))[iVar23];
        }
        uStack_11cc = -uVar22 & uVar22;
        uVar17 = (ulonglong)uStack_11cc * 2 + 1;
        lVar26 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        local_11a4 = (int)lVar26;
        uStack_11bc = local_11a4 + -1 + uStack_11b8;
        uVar17 = (ulonglong)uStack_11bc;
        if ((int)local_10a0 < (int)uStack_11bc) {
LAB_1420c336d:
          uVar17 = (ulonglong)local_10a0;
          uStack_11bc = local_10a0;
        }
      }
      local_11c0 = 0xffffffff;
      local_1190 = (longlong *)local_10c8;
      local_1188._padding_ = CONCAT44(uStack_11cc,local_11d0);
      local_1188.CurrentBitIndex = uStack_11bc;
      local_1188.UnvisitedBitMask = 0xffffffff;
      local_1188._28_4_ = uStack_11b4;
      local_1188.BaseBitIndex = uStack_11b8;
      local_1188.Array = pTStack_11c8;
      if ((int)local_10a0 <= (int)uVar17) goto LAB_1420c342b;
      do {
        puVar25 = (undefined8 *)((longlong)(int)uVar17 * 0x10 + *local_1190);
        uVar6 = *puVar25;
        uVar22 = ::GetTypeHash((FNameEntryId)(uint)uVar6);
        uVar22 = local_1080 - 1 & uVar22 + (int)((ulonglong)uVar6 >> 0x20);
        *(uint *)((longlong)puVar25 + 0xc) = uVar22;
        FVar19.Data = local_1090;
        if (local_1088.Data != (FScriptContainerElement *)0x0) {
          FVar19.Data = local_1088.Data;
        }
        uVar28 = (longlong)(int)local_1080 - 1U & (longlong)(int)uVar22;
        *(undefined4 *)(puVar25 + 1) = *(undefined4 *)(FVar19.Data + uVar28 * 4);
        *(int *)(FVar19.Data + uVar28 * 4) = (int)uVar17;
        local_1188.UnvisitedBitMask = local_1188.UnvisitedBitMask & ~local_1188._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1188);
        uVar17 = (ulonglong)(uint)local_1188.CurrentBitIndex;
        param_1 = local_11b0;
      } while (local_1188.CurrentBitIndex < (local_1188.Array)->NumBits);
    }
  }
  uVar28 = (ulonglong)local_10a0;
LAB_1420c342b:
  pbVar3 = pbVar24 + (longlong)(int)uVar12 * 8;
  if (pbVar24 != pbVar3) {
    do {
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_10c8,&local_11a0
                 ,pbVar24);
      pbVar24 = pbVar24 + 8;
    } while (pbVar24 != pbVar3);
    uVar28 = (ulonglong)local_10a0;
  }
  this_00 = (FName *)param_1->_padding_;
  iVar23 = (int)param_1->_padding_;
  pFVar4 = this_00 + iVar23;
LAB_1420c3466:
  while( true ) {
    if ((int)param_1->_padding_ != iVar23) {
      local_11f8 = 0;
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_11f8);
      uVar28 = (ulonglong)local_10a0;
    }
    uVar12 = (uint)uVar28;
    if (this_00 == pFVar4) break;
    FVar7 = *this_00;
    uVar12 = ::GetTypeHash(FVar7.ComparisonIndex.Value);
    if (local_10c8._8_4_ != local_1094) {
      FVar19.Data = local_1090;
      if (local_1088.Data != (FScriptContainerElement *)0x0) {
        FVar19.Data = local_1088.Data;
      }
      uVar12 = *(uint *)(FVar19.Data + (ulonglong)(local_1080 - 1 & FVar7.Number + uVar12) * 4);
      while (uVar12 != 0xffffffff) {
        lVar26 = (longlong)(int)uVar12 * 0x10;
        if (*(FName *)(local_10c8._0_8_ + lVar26) == FVar7) {
          if (((int)uVar12 < 0) || ((int)local_10a0 <= (int)uVar12)) {
LAB_1420c373c:
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Elements.IsValidIndex(ElementIndex)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                ,0x2ab,
                                L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
            if (bVar11) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          else {
            FVar18 = (ForElementType<unsigned_int>)((longlong)local_10c8 + 0x10);
            if (local_10a8 != (ForElementType<unsigned_int>)0x0) {
              FVar18 = local_10a8;
            }
            uVar22 = uVar12;
            if ((int)uVar12 < 0) {
              uVar22 = uVar12 + 0x1f;
            }
            if ((*(uint *)((longlong)FVar18 + (longlong)((int)uVar22 >> 5) * 4) >> (uVar12 & 0x1f) &
                1) == 0) goto LAB_1420c373c;
          }
          uVar6 = local_10c8._0_8_;
          FVar19.Data = local_1090;
          if (local_1088.Data != (FScriptContainerElement *)0x0) {
            FVar19.Data = local_1088.Data;
          }
          pFVar21 = FVar19.Data + (longlong)*(int *)(local_10c8._0_8_ + lVar26 + 0xc) * 4;
          goto LAB_1420c3790;
        }
        uVar12 = *(uint *)(local_10c8._0_8_ + lVar26 + 8);
      }
    }
    local_1078.Base = local_1058;
    local_1078.bIsDynamic = false;
    local_1078.bIsExternal = false;
    local_1078.CurPos = local_1058;
    local_1078.End = (wchar_t *)&local_858;
    pvVar15 = FGenericPlatformString::Memcpy
                        (local_1058,L"Missing RHS Soft Package Reference: ",0x48);
    local_1078.CurPos = (wchar_t *)((longlong)pvVar15 + 0x48);
    pFVar16 = ::FName::ToString(this_00,&local_1108);
    iVar5 = (pFVar16->Data).ArrayNum;
    pFVar21 = (pFVar16->Data).AllocatorInstance.Data;
    iVar13 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar13 = 0;
    }
    uVar20 = (ulong64)iVar13;
    if (local_1078.End < (TStringBuilderBase<wchar_t> *)(local_1078.CurPos + uVar20)) {
      TStringBuilderBase<wchar_t>::Extend(&local_1078,uVar20);
    }
    if (iVar13 != 0) {
      pvVar15 = FGenericPlatformString::Memcpy(local_1078.CurPos,pFVar21,uVar20 * 2);
      local_1078.CurPos = (wchar_t *)((longlong)pvVar15 + uVar20 * 2);
    }
    if (local_1108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1108.Data.AllocatorInstance.Data);
    }
    if (local_1078.End < (TStringBuilderBase<wchar_t> *)(local_1078.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_1078,1);
    }
    *local_1078.CurPos = L'\0';
    ::FString::FString(&local_11f0,local_1078.Base);
    pFVar21 = (pTVar1->AllocatorInstance).Data;
    if ((pFVar21 <= (FScriptContainerElement *)&local_11f0) &&
       (lVar26 = (longlong)(this->SoftPackageReferenceDiffs).ArrayMax,
       (FScriptContainerElement *)&local_11f0 < pFVar21 + lVar26 * 0x10)) {
      local_1210 = (longlong)(this->SoftPackageReferenceDiffs).ArrayNum;
      local_1208 = 0x10;
      local_1228 = &local_11f0;
      local_1220 = pFVar21;
      local_1218 = lVar26;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar11) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    iVar13 = (this->SoftPackageReferenceDiffs).ArrayNum;
    piVar2 = &(this->SoftPackageReferenceDiffs).ArrayMax;
    if (iVar13 == *piVar2) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->SoftPackageReferenceDiffs).ArrayNum = iVar13 + 1;
    pFVar21 = (pTVar1->AllocatorInstance).Data + (longlong)iVar13 * 0x10;
    *(undefined8 *)pFVar21 = 0;
    *(FScriptContainerElement **)pFVar21 = local_11f0.Data.AllocatorInstance.Data;
    *(int *)(pFVar21 + 8) = local_11f0.Data.ArrayNum;
    *(int *)(pFVar21 + 0xc) = local_11f0.Data.ArrayMax;
    local_11f0.Data.ArrayNum = 0;
    local_11f0.Data.ArrayMax = 0;
    local_11f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1078);
    uVar28 = (ulonglong)local_10a0;
    this_00 = this_00 + 1;
    param_1 = local_11b0;
  }
  uStack_1160 = 0;
  uStack_115c = 1;
  uStack_114c = uStack_1160;
  local_1148 = uStack_1160;
  if (uVar12 == 0) goto LAB_1420c3890;
  FVar18 = (ForElementType<unsigned_int>)((longlong)local_10c8 + 0x10);
  if (local_10a8 != (ForElementType<unsigned_int>)0x0) {
    FVar18 = local_10a8;
  }
  uVar22 = *(uint *)FVar18;
  local_1148 = 0;
  uStack_1160 = 0;
joined_r0x0001420c384b:
  if (uVar22 != 0) goto LAB_1420c386c;
  lVar26 = (longlong)(int)uStack_1160;
  local_1148 = local_1148 + 0x20;
  uStack_1160 = uStack_1160 + 1;
  uStack_114c = uVar12;
  if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_1160)
  goto LAB_1420c3890;
  uVar22 = ((uint *)((longlong)FVar18 + 4))[lVar26];
  goto joined_r0x0001420c384b;
LAB_1420c3790:
  uVar22 = *(uint *)pFVar21;
  if (uVar22 == 0xffffffff) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("NextElementIndex != INDEX_NONE",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                        ,0x2b5,L"Corrupt hash");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  else if (uVar22 == uVar12) goto LAB_1420c37db;
  pFVar21 = (FScriptContainerElement *)(local_10c8._0_8_ + (longlong)(int)uVar22 * 0x10 + 8);
  goto LAB_1420c3790;
LAB_1420c37db:
  *(uint *)pFVar21 = *(uint *)(uVar6 + lVar26 + 8);
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_10c8,uVar12,1);
  uVar28 = (ulonglong)local_10a0;
  this_00 = this_00 + 1;
  param_1 = local_11b0;
  goto LAB_1420c3466;
LAB_1420c386c:
  uStack_115c = -uVar22 & uVar22;
  uVar17 = (ulonglong)uStack_115c * 2 + 1;
  lVar26 = 0x3f;
  if (uVar17 != 0) {
    for (; uVar17 >> lVar26 == 0; lVar26 = lVar26 + -1) {
    }
  }
  local_11a0.Number = (uint)lVar26;
  uStack_114c = (local_1148 - 1) + local_11a0.Number;
  if ((int)uVar12 < (int)uStack_114c) {
    uStack_114c = uVar12;
  }
LAB_1420c3890:
  local_1168 = (longlong *)local_10c8;
  uStack_1144 = local_10cc;
  local_1158 = (TBitArray<FDefaultBitArrayAllocator> *)(local_10c8 + 0x10);
  uVar22 = uVar12 & 0xffffffe0;
  iStack_1140 = local_10c8._8_4_ - local_1094;
  uStack_1150 = 0xffffffff;
  TStack_1130.CurrentBitIndex = uStack_114c;
  TStack_1130.UnvisitedBitMask = 0xffffffff;
  TStack_1130._padding_ = CONCAT44(uStack_115c,uStack_1160);
  iVar23 = (int)uVar12 >> 5;
  TStack_1130._28_4_ = local_10cc;
  TStack_1130.BaseBitIndex = local_1148;
  uStack_1110 = CONCAT44(uStack_113c,iStack_1140);
  uVar27 = uVar12;
  local_1138 = local_1168;
  TStack_1130.Array = local_1158;
  if (((int)uVar12 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), uVar27 = local_10a0, bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (uVar12 != uVar27) {
    FVar18 = (ForElementType<unsigned_int>)((longlong)local_10c8 + 0x10);
    if (local_10a8 != (ForElementType<unsigned_int>)0x0) {
      FVar18 = local_10a8;
    }
    uVar12 = -1 << ((byte)uVar28 & 0x1f) & *(uint *)((longlong)FVar18 + (longlong)iVar23 * 4);
    while (uVar12 == 0) {
      lVar26 = (longlong)iVar23;
      uVar22 = uVar22 + 0x20;
      iVar23 = iVar23 + 1;
      if ((int)((uVar27 - 1) + ((int)(uVar27 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23) {
        uVar28 = (ulonglong)uVar27;
        goto LAB_1420c39b0;
      }
      uVar12 = ((uint *)((longlong)FVar18 + 4))[lVar26];
    }
    uVar17 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar26 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar26 == 0; lVar26 = lVar26 + -1) {
      }
    }
    local_1198 = (int)lVar26;
    uVar12 = (uVar22 - 1) + local_1198;
    if ((int)uVar27 < (int)uVar12) {
      uVar12 = uVar27;
    }
    uVar28 = (ulonglong)uVar12;
  }
LAB_1420c39b0:
  while( true ) {
    plVar10 = local_1138;
    if ((int)local_1138[1] - *(int *)((longlong)local_1138 + 0x34) != (int)uStack_1110) {
      local_11f7[0] = 0;
      `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_11f7);
    }
    lVar26 = (longlong)TStack_1130.CurrentBitIndex;
    if (((TStack_1130.CurrentBitIndex == (int)uVar28) &&
        (TStack_1130.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_10c8 + 0x10))) &&
       (plVar10 == (longlong *)local_10c8)) break;
    lVar8 = *plVar10;
    local_858.Base = local_838;
    local_858.CurPos = local_838;
    local_858.bIsDynamic = false;
    local_858.bIsExternal = false;
    local_858.End = (wchar_t *)local_38;
    pvVar15 = FGenericPlatformString::Memcpy(local_838,L"New RHS Soft Package Reference: ",0x40);
    local_858.CurPos = (wchar_t *)((longlong)pvVar15 + 0x40);
    pFVar16 = ::FName::ToString((FName *)(lVar26 * 0x10 + lVar8),local_10f8);
    iVar13 = (pFVar16->Data).ArrayNum;
    pFVar21 = (pFVar16->Data).AllocatorInstance.Data;
    iVar23 = iVar13 + -1;
    if (iVar13 == 0) {
      iVar23 = 0;
    }
    uVar20 = (ulong64)iVar23;
    if (local_858.End < local_858.CurPos + uVar20) {
      TStringBuilderBase<wchar_t>::Extend(&local_858,uVar20);
    }
    if (iVar23 != 0) {
      pvVar15 = FGenericPlatformString::Memcpy(local_858.CurPos,pFVar21,uVar20 * 2);
      local_858.CurPos = (wchar_t *)((longlong)pvVar15 + uVar20 * 2);
    }
    if (local_10f8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_10f8[0].Data.AllocatorInstance.Data);
    }
    if (local_858.End < local_858.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_858,1);
    }
    *local_858.CurPos = L'\0';
    ::FString::FString(&local_11e0,local_858.Base);
    pFVar21 = (pTVar1->AllocatorInstance).Data;
    if ((pFVar21 <= (FScriptContainerElement *)&local_11e0) &&
       (lVar26 = (longlong)(this->SoftPackageReferenceDiffs).ArrayMax,
       (FScriptContainerElement *)&local_11e0 < pFVar21 + lVar26 * 0x10)) {
      local_1210 = (longlong)(this->SoftPackageReferenceDiffs).ArrayNum;
      local_1208 = 0x10;
      local_1228 = &local_11e0;
      local_1220 = pFVar21;
      local_1218 = lVar26;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar11) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    iVar23 = (this->SoftPackageReferenceDiffs).ArrayNum;
    piVar2 = &(this->SoftPackageReferenceDiffs).ArrayMax;
    if (iVar23 == *piVar2) {
      iVar23 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->SoftPackageReferenceDiffs).ArrayNum = iVar23 + 1;
    pFVar21 = (pTVar1->AllocatorInstance).Data + (longlong)iVar23 * 0x10;
    *(undefined8 *)pFVar21 = 0;
    *(FScriptContainerElement **)pFVar21 = local_11e0.Data.AllocatorInstance.Data;
    *(int *)(pFVar21 + 8) = local_11e0.Data.ArrayNum;
    *(int *)(pFVar21 + 0xc) = local_11e0.Data.ArrayMax;
    local_11e0.Data.ArrayNum = 0;
    local_11e0.Data.ArrayMax = 0;
    local_11e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
    TStack_1130.UnvisitedBitMask = TStack_1130.UnvisitedBitMask & ~TStack_1130._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1130);
  }
  local_1080 = 0;
  if (local_1088.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1088.Data);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_10c8);
  return;
}

// GenerateSummaryDiff @ 1420c3c70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001420c5948) */
/* WARNING: Removing unreachable block (ram,0x0001420c54bd) */
/* WARNING: Removing unreachable block (ram,0x0001420c5039) */
/* WARNING: Removing unreachable block (ram,0x0001420c49d5) */
/* WARNING: Removing unreachable block (ram,0x0001420c42e7) */
/* WARNING: Removing unreachable block (ram,0x0001420c3fc9) */
/* WARNING: Removing unreachable block (ram,0x0001420c4605) */
/* WARNING: Removing unreachable block (ram,0x0001420c4d07) */
/* WARNING: Removing unreachable block (ram,0x0001420c527f) */
/* WARNING: Removing unreachable block (ram,0x0001420c56fb) */
/* WARNING: Removing unreachable block (ram,0x0001420c5b8e) */

void __thiscall
FLinkerDiff::GenerateSummaryDiff(FLinkerDiff *this,FLinker *param_1,FLinker *param_2)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  void *pvVar10;
  ulong64 uVar11;
  FScriptContainerElement *pFVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  wchar_t *pwVar15;
  undefined1 auStackY_1a08 [32];
  FString local_19b8;
  FString local_19a8;
  FString local_1998;
  FString local_1988;
  FString local_1978;
  FString local_1968;
  FString local_1958;
  FString local_1948;
  FString local_1938;
  FString local_1928;
  FString local_1918;
  ForAnyElementType local_1908;
  int local_1900;
  int local_18fc;
  ForAnyElementType local_18f8;
  int local_18f0;
  int local_18ec;
  FString local_18e8;
  FString local_18d8;
  FString local_18c8;
  FString local_18b8;
  FString local_18a8;
  FString local_1898;
  FString local_1888;
  FString local_1878;
  FString local_1868;
  FString local_1858;
  FString local_1848;
  FString local_1838;
  FString local_1828;
  FString local_1818;
  FString local_1808;
  FString local_17f8;
  FString local_17e8;
  FString local_17d8;
  FString local_17c8;
  FString local_17b8;
  TStringBuilderBase<wchar_t> local_17a8;
  wchar_t local_1788 [256];
  TStringBuilderBase<wchar_t> local_1588;
  wchar_t local_1568 [256];
  TStringBuilderBase<wchar_t> local_1368;
  wchar_t local_1348 [256];
  TStringBuilderBase<wchar_t> local_1148;
  wchar_t local_1128 [256];
  TStringBuilderBase<wchar_t> local_f28;
  wchar_t local_f08 [256];
  TStringBuilderBase<wchar_t> local_d08;
  wchar_t local_ce8 [256];
  TStringBuilderBase<wchar_t> local_ae8;
  wchar_t local_ac8 [256];
  TStringBuilderBase<wchar_t> local_8c8;
  wchar_t local_8a8 [256];
  TStringBuilderBase<wchar_t> local_6a8;
  wchar_t local_688 [256];
  TStringBuilderBase<wchar_t> local_488;
  wchar_t local_468 [256];
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_1a08;
  pTVar1 = &this->SummaryDiffs;
  iVar9 = 0;
  if ((param_1->Summary).Tag != (param_2->Summary).Tag) {
    local_17a8.Base = local_1788;
    local_17a8.bIsDynamic = false;
    local_17a8.bIsExternal = false;
    local_17a8.CurPos = local_1788;
    local_17a8.End = (wchar_t *)&local_1588;
    pvVar10 = FGenericPlatformString::Memcpy(local_1788,L"Tag",6);
    local_17a8.CurPos = (wchar_t *)((longlong)pvVar10 + 6);
    if (local_17a8.End < (TStringBuilderBase<wchar_t> *)((longlong)pvVar10 + 10)) {
      TStringBuilderBase<wchar_t>::Extend(&local_17a8,2);
    }
    pvVar10 = FGenericPlatformString::Memcpy(local_17a8.CurPos,&u___,4);
    local_17a8.CurPos = (wchar_t *)((longlong)pvVar10 + 4);
    ::FString::PrintfImpl(&local_18e8,L"%d");
    FVar5.Data = local_18e8.Data.AllocatorInstance.Data;
    iVar7 = local_18e8.Data.ArrayNum + -1;
    if (local_18e8.Data.ArrayNum == 0) {
      iVar7 = iVar9;
    }
    uVar11 = (ulong64)iVar7;
    if (local_17a8.End < (TStringBuilderBase<wchar_t> *)(local_17a8.CurPos + uVar11)) {
      TStringBuilderBase<wchar_t>::Extend(&local_17a8,uVar11);
    }
    if (iVar7 != 0) {
      pvVar10 = FGenericPlatformString::Memcpy(local_17a8.CurPos,FVar5.Data,uVar11 * 2);
      local_17a8.CurPos = (wchar_t *)(uVar11 * 2 + (longlong)pvVar10);
    }
    if (local_18e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18e8.Data.AllocatorInstance.Data);
    }
    if (local_17a8.End < (TStringBuilderBase<wchar_t> *)(local_17a8.CurPos + 4)) {
      TStringBuilderBase<wchar_t>::Extend(&local_17a8,4);
    }
    pvVar10 = FGenericPlatformString::Memcpy(local_17a8.CurPos,L" vs ",8);
    local_17a8.CurPos = (wchar_t *)((longlong)pvVar10 + 8);
    ::FString::PrintfImpl(&local_18d8,L"%d");
    FVar5.Data = local_18d8.Data.AllocatorInstance.Data;
    iVar7 = local_18d8.Data.ArrayNum + -1;
    if (local_18d8.Data.ArrayNum == 0) {
      iVar7 = iVar9;
    }
    uVar11 = (ulong64)iVar7;
    if (local_17a8.End < (TStringBuilderBase<wchar_t> *)(local_17a8.CurPos + uVar11)) {
      TStringBuilderBase<wchar_t>::Extend(&local_17a8,uVar11);
    }
    if (iVar7 != 0) {
      pvVar10 = FGenericPlatformString::Memcpy(local_17a8.CurPos,FVar5.Data,uVar11 * 2);
      local_17a8.CurPos = (wchar_t *)(uVar11 * 2 + (longlong)pvVar10);
    }
    if (local_18d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18d8.Data.AllocatorInstance.Data);
    }
    if (local_17a8.End < (TStringBuilderBase<wchar_t> *)(local_17a8.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_17a8,1);
    }
    *local_17a8.CurPos = L'\0';
    ::FString::FString(&local_19b8,local_17a8.Base);
    pFVar12 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar12 <= (FScriptContainerElement *)&local_19b8) &&
        ((FScriptContainerElement *)&local_19b8 <
         pFVar12 + (longlong)(this->SummaryDiffs).ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = (this->SummaryDiffs).ArrayNum;
    piVar2 = &(this->SummaryDiffs).ArrayMax;
    if (iVar7 == *piVar2) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->SummaryDiffs).ArrayNum = iVar7 + 1;
    pFVar12 = (pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
    *(undefined8 *)pFVar12 = 0;
    *(FScriptContainerElement **)pFVar12 = local_19b8.Data.AllocatorInstance.Data;
    *(int *)(pFVar12 + 8) = local_19b8.Data.ArrayNum;
    *(int *)(pFVar12 + 0xc) = local_19b8.Data.ArrayMax;
    local_19b8.Data.ArrayNum = 0;
    local_19b8.Data.ArrayMax = 0;
    local_19b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_17a8);
  }
  if ((param_1->Summary).PackageFlags != (param_2->Summary).PackageFlags) {
    local_1588.Base = local_1568;
    local_1588.bIsDynamic = false;
    local_1588.bIsExternal = false;
    local_1588.CurPos = local_1568;
    local_1588.End = (wchar_t *)&local_1368;
    pvVar10 = FGenericPlatformString::Memcpy(local_1568,L"GetPackageFlags()",0x22);
    local_1588.CurPos = (wchar_t *)((longlong)pvVar10 + 0x22);
    if (local_1588.End < (TStringBuilderBase<wchar_t> *)((longlong)pvVar10 + 0x26)) {
      TStringBuilderBase<wchar_t>::Extend(&local_1588,2);
    }
    pvVar10 = FGenericPlatformString::Memcpy(local_1588.CurPos,&u___,4);
    local_1588.CurPos = (wchar_t *)((longlong)pvVar10 + 4);
    ::FString::PrintfImpl(&local_18c8,L"%u");
    FVar5.Data = local_18c8.Data.AllocatorInstance.Data;
    iVar7 = local_18c8.Data.ArrayNum + -1;
    if (local_18c8.Data.ArrayNum == 0) {
      iVar7 = iVar9;
    }
    uVar11 = (ulong64)iVar7;
    if (local_1588.End < (TStringBuilderBase<wchar_t> *)(local_1588.CurPos + uVar11)) {
      TStringBuilderBase<wchar_t>::Extend(&local_1588,uVar11);
    }
    if (iVar7 != 0) {
      pvVar10 = FGenericPlatformString::Memcpy(local_1588.CurPos,FVar5.Data,uVar11 * 2);
      local_1588.CurPos = (wchar_t *)(uVar11 * 2 + (longlong)pvVar10);
    }
    if (local_18c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18c8.Data.AllocatorInstance.Data);
    }
    if (local_1588.End < (TStringBuilderBase<wchar_t> *)(local_1588.CurPos + 4)) {
      TStringBuilderBase<wchar_t>::Extend(&local_1588,4);
    }
    pvVar10 = FGenericPlatformString::Memcpy(local_1588.CurPos,L" vs ",8);
    local_1588.CurPos = (wchar_t *)((longlong)pvVar10 + 8);
    ::FString::PrintfImpl(&local_18b8,L"%u");
    FVar5.Data = local_18b8.Data.AllocatorInstance.Data;
    iVar7 = local_18b8.Data.ArrayNum + -1;
    if (local_18b8.Data.ArrayNum == 0) {
      iVar7 = iVar9;
    }
    uVar11 = (ulong64)iVar7;
    if (local_1588.End < (TStringBuilderBase<wchar_t> *)(local_1588.CurPos + uVar11)) {
      TStringBuilderBase<wchar_t>::Extend(&local_1588,uVar11);
    }
    if (iVar7 != 0) {
      pvVar10 = FGenericPlatformString::Memcpy(local_1588.CurPos,FVar5.Data,uVar11 * 2);
      local_1588.CurPos = (wchar_t *)(uVar11 * 2 + (longlong)pvVar10);
    }
    if (local_18b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18b8.Data.AllocatorInstance.Data);
    }
    if (local_1588.End < (TStringBuilderBase<wchar_t> *)(local_1588.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_1588,1);
    }
    *local_1588.CurPos = L'\0';
    ::FString::FString(&local_19a8,local_1588.Base);
    pFVar12 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar12 <= (FScriptContainerElement *)&local_19a8) &&
        ((FScriptContainerElement *)&local_19a8 <
         pFVar12 + (longlong)(this->SummaryDiffs).ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = (this->SummaryDiffs).ArrayNum;
    piVar2 = &(this->SummaryDiffs).ArrayMax;
    if (iVar7 == *piVar2) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->SummaryDiffs).ArrayNum = iVar7 + 1;
    pFVar12 = (pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
    *(undefined8 *)pFVar12 = 0;
    *(FScriptContainerElement **)pFVar12 = local_19a8.Data.AllocatorInstance.Data;
    *(int *)(pFVar12 + 8) = local_19a8.Data.ArrayNum;
    *(int *)(pFVar12 + 0xc) = local_19a8.Data.ArrayMax;
    local_19a8.Data.ArrayNum = 0;
    local_19a8.Data.ArrayMax = 0;
    local_19a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1588);
  }
  iVar7 = 0;
  if ((param_1->Summary).NameCount != (param_2->Summary).NameCount) {
    local_1368.Base = local_1348;
    local_1368.bIsDynamic = false;
    local_1368.bIsExternal = false;
    local_1368.CurPos = local_1348;
    local_1368.End = (wchar_t *)&local_1148;
    pvVar10 = FGenericPlatformString::Memcpy(local_1348,L"NameCount",0x12);
    local_1368.CurPos = (wchar_t *)((longlong)pvVar10 + 0x12);
    if (local_1368.End < (TStringBuilderBase<wchar_t> *)((longlong)pvVar10 + 0x16)) {
      TStringBuilderBase<wchar_t>::Extend(&local_1368,2);
    }
    pvVar10 = FGenericPlatformString::Memcpy(local_1368.CurPos,&u___,4);
    local_1368.CurPos = (wchar_t *)((longlong)pvVar10 + 4);
    ::FString::PrintfImpl(&local_18a8,L"%d");
    FVar5.Data = local_18a8.Data.AllocatorInstance.Data;
    iVar8 = local_18a8.Data.ArrayNum + -1;
    if (local_18a8.Data.ArrayNum == 0) {
      iVar8 = iVar9;
    }
    uVar11 = (ulong64)iVar8;
    if (local_1368.End < (TStringBuilderBase<wchar_t> *)(local_1368.CurPos + uVar11)) {
      TStringBuilderBase<wchar_t>::Extend(&local_1368,uVar11);
    }
    if (iVar8 != 0) {
      pvVar10 = FGenericPlatformString::Memcpy(local_1368.CurPos,FVar5.Data,uVar11 * 2);
      local_1368.CurPos = (wchar_t *)(uVar11 * 2 + (longlong)pvVar10);
    }
    if (local_18a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18a8.Data.AllocatorInstance.Data);
    }
    if (local_1368.End < (TStringBuilderBase<wchar_t> *)(local_1368.CurPos + 4)) {
      TStringBuilderBase<wchar_t>::Extend(&local_1368,4);
    }
    pvVar10 = FGenericPlatformString::Memcpy(local_1368.CurPos,L" vs ",8);
    local_1368.CurPos = (wchar_t *)((longlong)pvVar10 + 8);
    ::FString::PrintfImpl(&local_1898,L"%d");
    FVar5.Data = local_1898.Data.AllocatorInstance.Data;
    iVar8 = local_1898.Data.ArrayNum + -1;
    if (local_1898.Data.ArrayNum == 0) {
      iVar8 = iVar7;
    }
    uVar11 = (ulong64)iVar8;
    if (local_1368.End < (TStringBuilderBase<wchar_t> *)(local_1368.CurPos + uVar11)) {
      TStringBuilderBase<wchar_t>::Extend(&local_1368,uVar11);
    }
    if (iVar8 != 0) {
      pvVar10 = FGenericPlatformString::Memcpy(local_1368.CurPos,FVar5.Data,uVar11 * 2);
      local_1368.CurPos = (wchar_t *)(uVar11 * 2 + (longlong)pvVar10);
    }
    if (local_1898.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1898.Data.AllocatorInstance.Data);
    }
    if (local_1368.End < (TStringBuilderBase<wchar_t> *)(local_1368.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_1368,1);
    }
    *local_1368.CurPos = L'\0';
    ::FString::FString(&local_1998,local_1368.Base);
    pFVar12 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar12 <= (FScriptContainerElement *)&local_1998) &&
        ((FScriptContainerElement *)&local_1998 <
         pFVar12 + (longlong)(this->SummaryDiffs).ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = (this->SummaryDiffs).ArrayNum;
    piVar2 = &(this->SummaryDiffs).ArrayMax;
    if (iVar8 == *piVar2) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->SummaryDiffs).ArrayNum = iVar8 + 1;
    pFVar12 = (pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
    *(undefined8 *)pFVar12 = 0;
    *(FScriptContainerElement **)pFVar12 = local_1998.Data.AllocatorInstance.Data;
    *(int *)(pFVar12 + 8) = local_1998.Data.ArrayNum;
    *(int *)(pFVar12 + 0xc) = local_1998.Data.ArrayMax;
    local_1998.Data.ArrayNum = 0;
    local_1998.Data.ArrayMax = 0;
    local_1998.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1368);
  }
  iVar8 = (param_1->Summary).LocalizationId.Data.ArrayNum;
  iVar3 = (param_2->Summary).LocalizationId.Data.ArrayNum;
  if (iVar8 == iVar3) {
    if (iVar8 < 2) goto LAB_1420c49e6;
    iVar8 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_1->Summary).LocalizationId.Data.AllocatorInstance.Data,
                       (wchar_t *)(param_2->Summary).LocalizationId.Data.AllocatorInstance.Data);
    bVar6 = iVar8 == 0;
  }
  else {
    bVar6 = iVar8 + iVar3 == 1;
  }
  if (!bVar6) {
    local_1148.Base = local_1128;
    local_1148.bIsDynamic = false;
    local_1148.bIsExternal = false;
    local_1148.CurPos = local_1128;
    local_1148.End = (wchar_t *)&local_f28;
    pvVar10 = FGenericPlatformString::Memcpy(local_1128,L"LocalizationId",0x1c);
    local_1148.CurPos = (wchar_t *)((longlong)pvVar10 + 0x1c);
    if (local_1148.End < (TStringBuilderBase<wchar_t> *)((longlong)pvVar10 + 0x20)) {
      TStringBuilderBase<wchar_t>::Extend(&local_1148,2);
    }
    pvVar10 = FGenericPlatformString::Memcpy(local_1148.CurPos,&u___,4);
    local_1900 = (param_1->Summary).LocalizationId.Data.ArrayNum;
    lVar14 = (longlong)local_1900;
    pFVar12 = (param_1->Summary).LocalizationId.Data.AllocatorInstance.Data;
    local_1908.Data = (FScriptContainerElement *)0x0;
    local_1148.CurPos = (wchar_t *)((longlong)pvVar10 + 4);
    if (local_1900 == 0) {
      local_18fc = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_1900,0,&local_1908,local_1900,&local_18fc);
      memcpy(local_1908.Data,pFVar12,lVar14 * 2);
    }
    FVar5.Data = local_1908.Data;
    iVar8 = local_1900 + -1;
    if (local_1900 == 0) {
      iVar8 = iVar7;
    }
    uVar11 = (ulong64)iVar8;
    if (local_1148.End < (TStringBuilderBase<wchar_t> *)(local_1148.CurPos + uVar11)) {
      TStringBuilderBase<wchar_t>::Extend(&local_1148,uVar11);
    }
    if (iVar8 != 0) {
      pvVar10 = FGenericPlatformString::Memcpy(local_1148.CurPos,FVar5.Data,uVar11 * 2);
      local_1148.CurPos = (wchar_t *)(uVar11 * 2 + (longlong)pvVar10);
    }
    if (local_1908.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1908.Data);
    }
    if (local_1148.End < (TStringBuilderBase<wchar_t> *)(local_1148.CurPos + 4)) {
      TStringBuilderBase<wchar_t>::Extend(&local_1148,4);
    }
    pvVar10 = FGenericPlatformString::Memcpy(local_1148.CurPos,L" vs ",8);
    local_18f0 = (param_2->Summary).LocalizationId.Data.ArrayNum;
    lVar14 = (longlong)local_18f0;
    pFVar12 = (param_2->Summary).LocalizationId.Data.AllocatorInstance.Data;
    local_18f8.Data = (FScriptContainerElement *)0x0;
    local_1148.CurPos = (wchar_t *)((longlong)pvVar10 + 8);
    if (local_18f0 == 0) {
      local_18ec = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_18f0,0,&local_18f8,local_18f0,&local_18ec);
      memcpy(local_18f8.Data,pFVar12,lVar14 * 2);
    }
    FVar5.Data = local_18f8.Data;
    iVar8 = local_18f0 + -1;
    if (local_18f0 == 0) {
      iVar8 = iVar7;
    }
    uVar11 = (ulong64)iVar8;
    if (local_1148.End < (TStringBuilderBase<wchar_t> *)(local_1148.CurPos + uVar11)) {
      TStringBuilderBase<wchar_t>::Extend(&local_1148,uVar11);
    }
    if (iVar8 != 0) {
      pvVar10 = FGenericPlatformString::Memcpy(local_1148.CurPos,FVar5.Data,uVar11 * 2);
      local_1148.CurPos = (wchar_t *)(uVar11 * 2 + (longlong)pvVar10);
    }
    if (local_18f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18f8.Data);
    }
    if (local_1148.End < (TStringBuilderBase<wchar_t> *)(local_1148.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_1148,1);
    }
    *local_1148.CurPos = L'\0';
    ::FString::FString(&local_1988,local_1148.Base);
    pFVar12 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar12 <= (FScriptContainerElement *)&local_1988) &&
        ((FScriptContainerElement *)&local_1988 <
         pFVar12 + (longlong)(this->SummaryDiffs).ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = (this->SummaryDiffs).ArrayNum;
    piVar2 = &(this->SummaryDiffs).ArrayMax;
    if (iVar8 == *piVar2) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->SummaryDiffs).ArrayNum = iVar8 + 1;
    pFVar12 = (pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
    *(undefined8 *)pFVar12 = 0;
    *(FScriptContainerElement **)pFVar12 = local_1988.Data.AllocatorInstance.Data;
    *(int *)(pFVar12 + 8) = local_1988.Data.ArrayNum;
    *(int *)(pFVar12 + 0xc) = local_1988.Data.ArrayMax;
    local_1988.Data.ArrayNum = 0;
    local_1988.Data.ArrayMax = 0;
    local_1988.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1148);
  }
LAB_1420c49e6:
  if ((param_1->Summary).GatherableTextDataCount != (param_2->Summary).GatherableTextDataCount) {
    local_f28.Base = local_f08;
    local_f28.bIsDynamic = false;
    local_f28.bIsExternal = false;
    local_f28.CurPos = local_f08;
    local_f28.End = (wchar_t *)&local_d08;
    pvVar10 = FGenericPlatformString::Memcpy(local_f08,L"GatherableTextDataCount",0x2e);
    local_f28.CurPos = (wchar_t *)((longlong)pvVar10 + 0x2e);
    if (local_f28.End < (TStringBuilderBase<wchar_t> *)((longlong)pvVar10 + 0x32)) {
      TStringBuilderBase<wchar_t>::Extend(&local_f28,2);
    }
    pvVar10 = FGenericPlatformString::Memcpy(local_f28.CurPos,&u___,4);
    local_f28.CurPos = (wchar_t *)((longlong)pvVar10 + 4);
    ::FString::PrintfImpl(&local_1888,L"%d");
    FVar5.Data = local_1888.Data.AllocatorInstance.Data;
    iVar8 = local_1888.Data.ArrayNum + -1;
    if (local_1888.Data.ArrayNum == 0) {
      iVar8 = iVar7;
    }
    uVar11 = (ulong64)iVar8;
    if (local_f28.End < (TStringBuilderBase<wchar_t> *)(local_f28.CurPos + uVar11)) {
      TStringBuilderBase<wchar_t>::Extend(&local_f28,uVar11);
    }
    if (iVar8 != 0) {
      pvVar10 = FGenericPlatformString::Memcpy(local_f28.CurPos,FVar5.Data,uVar11 * 2);
      local_f28.CurPos = (wchar_t *)(uVar11 * 2 + (longlong)pvVar10);
    }
    if (local_1888.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1888.Data.AllocatorInstance.Data);
    }
    if (local_f28.End < (TStringBuilderBase<wchar_t> *)(local_f28.CurPos + 4)) {
      TStringBuilderBase<wchar_t>::Extend(&local_f28,4);
    }
    pvVar10 = FGenericPlatformString::Memcpy(local_f28.CurPos,L" vs ",8);
    local_f28.CurPos = (wchar_t *)((longlong)pvVar10 + 8);
    ::FString::PrintfImpl(&local_1878,L"%d");
    FVar5.Data = local_1878.Data.AllocatorInstance.Data;
    iVar8 = local_1878.Data.ArrayNum + -1;
    if (local_1878.Data.ArrayNum == 0) {
      iVar8 = iVar9;
    }
    uVar11 = (ulong64)iVar8;
    if (local_f28.End < (TStringBuilderBase<wchar_t> *)(local_f28.CurPos + uVar11)) {
      TStringBuilderBase<wchar_t>::Extend(&local_f28,uVar11);
    }
    if (iVar8 != 0) {
      pvVar10 = FGenericPlatformString::Memcpy(local_f28.CurPos,FVar5.Data,uVar11 * 2);
      local_f28.CurPos = (wchar_t *)(uVar11 * 2 + (longlong)pvVar10);
    }
    if (local_1878.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1878.Data.AllocatorInstance.Data);
    }
    if (local_f28.End < (TStringBuilderBase<wchar_t> *)(local_f28.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_f28,1);
    }
    *local_f28.CurPos = L'\0';
    ::FString::FString(&local_1978,local_f28.Base);
    pFVar12 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar12 <= (FScriptContainerElement *)&local_1978) &&
        ((FScriptContainerElement *)&local_1978 <
         pFVar12 + (longlong)(this->SummaryDiffs).ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar9 = (this->SummaryDiffs).ArrayNum;
    piVar2 = &(this->SummaryDiffs).ArrayMax;
    if (iVar9 == *piVar2) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->SummaryDiffs).ArrayNum = iVar9 + 1;
    pFVar12 = (pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
    *(undefined8 *)pFVar12 = 0;
    *(FScriptContainerElement **)pFVar12 = local_1978.Data.AllocatorInstance.Data;
    *(int *)(pFVar12 + 8) = local_1978.Data.ArrayNum;
    *(int *)(pFVar12 + 0xc) = local_1978.Data.ArrayMax;
    local_1978.Data.ArrayNum = 0;
    local_1978.Data.ArrayMax = 0;
    local_1978.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_f28);
  }
  if ((param_1->Summary).ExportCount != (param_2->Summary).ExportCount) {
    local_d08.Base = local_ce8;
    local_d08.bIsDynamic = false;
    local_d08.bIsExternal = false;
    local_d08.CurPos = local_ce8;
    local_d08.End = (wchar_t *)&local_ae8;
    pvVar10 = FGenericPlatformString::Memcpy(local_ce8,L"ExportCount",0x16);
    local_d08.CurPos = (wchar_t *)((longlong)pvVar10 + 0x16);
    if (local_d08.End < (TStringBuilderBase<wchar_t> *)((longlong)pvVar10 + 0x1a)) {
      TStringBuilderBase<wchar_t>::Extend(&local_d08,2);
    }
    pvVar10 = FGenericPlatformString::Memcpy(local_d08.CurPos,&u___,4);
    local_d08.CurPos = (wchar_t *)((longlong)pvVar10 + 4);
    ::FString::PrintfImpl(&local_1868,L"%d");
    FVar5.Data = local_1868.Data.AllocatorInstance.Data;
    iVar9 = local_1868.Data.ArrayNum + -1;
    if (local_1868.Data.ArrayNum == 0) {
      iVar9 = iVar7;
    }
    uVar11 = (ulong64)iVar9;
    if (local_d08.End < (TStringBuilderBase<wchar_t> *)(local_d08.CurPos + uVar11)) {
      TStringBuilderBase<wchar_t>::Extend(&local_d08,uVar11);
    }
    if (iVar9 != 0) {
      pvVar10 = FGenericPlatformString::Memcpy(local_d08.CurPos,FVar5.Data,uVar11 * 2);
      local_d08.CurPos = (wchar_t *)(uVar11 * 2 + (longlong)pvVar10);
    }
    if (local_1868.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1868.Data.AllocatorInstance.Data);
    }
    if (local_d08.End < (TStringBuilderBase<wchar_t> *)(local_d08.CurPos + 4)) {
      TStringBuilderBase<wchar_t>::Extend(&local_d08,4);
    }
    pvVar10 = FGenericPlatformString::Memcpy(local_d08.CurPos,L" vs ",8);
    local_d08.CurPos = (wchar_t *)((longlong)pvVar10 + 8);
    ::FString::PrintfImpl(&local_1858,L"%d");
    FVar5.Data = local_1858.Data.AllocatorInstance.Data;
    iVar9 = local_1858.Data.ArrayNum + -1;
    if (local_1858.Data.ArrayNum == 0) {
      iVar9 = iVar7;
    }
    uVar11 = (ulong64)iVar9;
    if (local_d08.End < (TStringBuilderBase<wchar_t> *)(local_d08.CurPos + uVar11)) {
      TStringBuilderBase<wchar_t>::Extend(&local_d08,uVar11);
    }
    if (iVar9 != 0) {
      pvVar10 = FGenericPlatformString::Memcpy(local_d08.CurPos,FVar5.Data,uVar11 * 2);
      local_d08.CurPos = (wchar_t *)(uVar11 * 2 + (longlong)pvVar10);
    }
    if (local_1858.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1858.Data.AllocatorInstance.Data);
    }
    if (local_d08.End < (TStringBuilderBase<wchar_t> *)(local_d08.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_d08,1);
    }
    *local_d08.CurPos = L'\0';
    ::FString::FString(&local_1968,local_d08.Base);
    pFVar12 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar12 <= (FScriptContainerElement *)&local_1968) &&
        ((FScriptContainerElement *)&local_1968 <
         pFVar12 + (longlong)(this->SummaryDiffs).ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar9 = (this->SummaryDiffs).ArrayNum;
    piVar2 = &(this->SummaryDiffs).ArrayMax;
    if (iVar9 == *piVar2) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->SummaryDiffs).ArrayNum = iVar9 + 1;
    pFVar12 = (pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
    *(undefined8 *)pFVar12 = 0;
    *(FScriptContainerElement **)pFVar12 = local_1968.Data.AllocatorInstance.Data;
    *(int *)(pFVar12 + 8) = local_1968.Data.ArrayNum;
    *(int *)(pFVar12 + 0xc) = local_1968.Data.ArrayMax;
    local_1968.Data.ArrayNum = 0;
    local_1968.Data.ArrayMax = 0;
    local_1968.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_d08);
  }
  if ((param_1->Summary).ImportCount != (param_2->Summary).ImportCount) {
    local_ae8.Base = local_ac8;
    local_ae8.bIsDynamic = false;
    local_ae8.bIsExternal = false;
    local_ae8.CurPos = local_ac8;
    local_ae8.End = (wchar_t *)&local_8c8;
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_ae8,L"ImportCount",0xb);
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_ae8,L": ",2);
    ::FString::PrintfImpl(&local_1848,L"%d");
    iVar9 = local_1848.Data.ArrayNum + -1;
    if (local_1848.Data.ArrayNum == 0) {
      iVar9 = iVar7;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              (&local_ae8,(wchar_t *)local_1848.Data.AllocatorInstance.Data,iVar9);
    if (local_1848.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1848.Data.AllocatorInstance.Data);
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_ae8,L" vs ",4);
    ::FString::PrintfImpl(&local_1838,L"%d");
    iVar9 = local_1838.Data.ArrayNum + -1;
    if (local_1838.Data.ArrayNum == 0) {
      iVar9 = iVar7;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              (&local_ae8,(wchar_t *)local_1838.Data.AllocatorInstance.Data,iVar9);
    if (local_1838.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1838.Data.AllocatorInstance.Data);
    }
    if (local_ae8.End < (TStringBuilderBase<wchar_t> *)(local_ae8.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_ae8,1);
    }
    *local_ae8.CurPos = L'\0';
    ::FString::FString(&local_1958,local_ae8.Base);
    pFVar12 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar12 <= (FScriptContainerElement *)&local_1958) &&
        ((FScriptContainerElement *)&local_1958 <
         pFVar12 + (longlong)(this->SummaryDiffs).ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar9 = (this->SummaryDiffs).ArrayNum;
    piVar2 = &(this->SummaryDiffs).ArrayMax;
    if (iVar9 == *piVar2) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->SummaryDiffs).ArrayNum = iVar9 + 1;
    pFVar12 = (pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
    *(undefined8 *)pFVar12 = 0;
    *(FScriptContainerElement **)pFVar12 = local_1958.Data.AllocatorInstance.Data;
    *(int *)(pFVar12 + 8) = local_1958.Data.ArrayNum;
    *(int *)(pFVar12 + 0xc) = local_1958.Data.ArrayMax;
    local_1958.Data.ArrayNum = 0;
    local_1958.Data.ArrayMax = 0;
    local_1958.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_ae8);
  }
  if ((param_1->Summary).SoftPackageReferencesCount != (param_2->Summary).SoftPackageReferencesCount
     ) {
    local_8c8.Base = local_8a8;
    local_8c8.bIsDynamic = false;
    local_8c8.bIsExternal = false;
    local_8c8.CurPos = local_8a8;
    local_8c8.End = (wchar_t *)&local_6a8;
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_8c8,L"SoftPackageReferencesCount",0x1a);
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_8c8,L": ",2);
    ::FString::PrintfImpl(&local_1828,L"%d");
    iVar9 = local_1828.Data.ArrayNum + -1;
    if (local_1828.Data.ArrayNum == 0) {
      iVar9 = iVar7;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              (&local_8c8,(wchar_t *)local_1828.Data.AllocatorInstance.Data,iVar9);
    if (local_1828.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1828.Data.AllocatorInstance.Data);
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_8c8,L" vs ",4);
    ::FString::PrintfImpl(&local_1818,L"%d");
    iVar9 = local_1818.Data.ArrayNum + -1;
    if (local_1818.Data.ArrayNum == 0) {
      iVar9 = iVar7;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              (&local_8c8,(wchar_t *)local_1818.Data.AllocatorInstance.Data,iVar9);
    if (local_1818.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1818.Data.AllocatorInstance.Data);
    }
    if (local_8c8.End < (TStringBuilderBase<wchar_t> *)(local_8c8.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_8c8,1);
    }
    *local_8c8.CurPos = L'\0';
    ::FString::FString(&local_1948,local_8c8.Base);
    pFVar12 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar12 <= (FScriptContainerElement *)&local_1948) &&
        ((FScriptContainerElement *)&local_1948 <
         pFVar12 + (longlong)(this->SummaryDiffs).ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar9 = (this->SummaryDiffs).ArrayNum;
    piVar2 = &(this->SummaryDiffs).ArrayMax;
    if (iVar9 == *piVar2) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->SummaryDiffs).ArrayNum = iVar9 + 1;
    pFVar12 = (pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
    *(undefined8 *)pFVar12 = 0;
    *(FScriptContainerElement **)pFVar12 = local_1948.Data.AllocatorInstance.Data;
    *(int *)(pFVar12 + 8) = local_1948.Data.ArrayNum;
    *(int *)(pFVar12 + 0xc) = local_1948.Data.ArrayMax;
    local_1948.Data.ArrayNum = 0;
    local_1948.Data.ArrayMax = 0;
    local_1948.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_8c8);
  }
  if ((param_1->Summary).CompressionFlags != (param_2->Summary).CompressionFlags) {
    local_6a8.Base = local_688;
    local_6a8.bIsDynamic = false;
    local_6a8.bIsExternal = false;
    local_6a8.CurPos = local_688;
    local_6a8.End = (wchar_t *)&local_488;
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_6a8,L"CompressionFlags",0x10);
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_6a8,L": ",2);
    ::FString::PrintfImpl(&local_1808,L"%u");
    iVar9 = local_1808.Data.ArrayNum + -1;
    if (local_1808.Data.ArrayNum == 0) {
      iVar9 = iVar7;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              (&local_6a8,(wchar_t *)local_1808.Data.AllocatorInstance.Data,iVar9);
    if (local_1808.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1808.Data.AllocatorInstance.Data);
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_6a8,L" vs ",4);
    ::FString::PrintfImpl(&local_17f8,L"%u");
    iVar9 = local_17f8.Data.ArrayNum + -1;
    if (local_17f8.Data.ArrayNum == 0) {
      iVar9 = iVar7;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              (&local_6a8,(wchar_t *)local_17f8.Data.AllocatorInstance.Data,iVar9);
    if (local_17f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_17f8.Data.AllocatorInstance.Data);
    }
    if (local_6a8.End < (TStringBuilderBase<wchar_t> *)(local_6a8.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_6a8,1);
    }
    *local_6a8.CurPos = L'\0';
    ::FString::FString(&local_1938,local_6a8.Base);
    pFVar12 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar12 <= (FScriptContainerElement *)&local_1938) &&
        ((FScriptContainerElement *)&local_1938 <
         pFVar12 + (longlong)(this->SummaryDiffs).ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar9 = (this->SummaryDiffs).ArrayNum;
    piVar2 = &(this->SummaryDiffs).ArrayMax;
    if (iVar9 == *piVar2) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->SummaryDiffs).ArrayNum = iVar9 + 1;
    pFVar12 = (pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
    *(undefined8 *)pFVar12 = 0;
    *(FScriptContainerElement **)pFVar12 = local_1938.Data.AllocatorInstance.Data;
    *(int *)(pFVar12 + 8) = local_1938.Data.ArrayNum;
    *(int *)(pFVar12 + 0xc) = local_1938.Data.ArrayMax;
    local_1938.Data.ArrayNum = 0;
    local_1938.Data.ArrayMax = 0;
    local_1938.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_6a8);
  }
  if ((param_1->Summary).bUnversioned != (param_2->Summary).bUnversioned) {
    local_488.Base = local_468;
    local_488.bIsDynamic = false;
    local_488.bIsExternal = false;
    local_488.CurPos = local_468;
    local_488.End = (wchar_t *)&local_268;
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_488,L"bUnversioned",0xc);
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_488,L": ",2);
    pwVar15 = L"true";
    pwVar13 = L"true";
    if ((param_1->Summary).bUnversioned == false) {
      pwVar13 = L"false";
    }
    ::FString::FString(&local_17e8,pwVar13);
    iVar9 = local_17e8.Data.ArrayNum + -1;
    if (local_17e8.Data.ArrayNum == 0) {
      iVar9 = iVar7;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              (&local_488,(wchar_t *)local_17e8.Data.AllocatorInstance.Data,iVar9);
    if (local_17e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_17e8.Data.AllocatorInstance.Data);
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_488,L" vs ",4);
    if ((param_2->Summary).bUnversioned == false) {
      pwVar15 = L"false";
    }
    ::FString::FString(&local_17d8,pwVar15);
    iVar9 = local_17d8.Data.ArrayNum + -1;
    if (local_17d8.Data.ArrayNum == 0) {
      iVar9 = 0;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              (&local_488,(wchar_t *)local_17d8.Data.AllocatorInstance.Data,iVar9);
    if (local_17d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_17d8.Data.AllocatorInstance.Data);
    }
    if (local_488.End < (TStringBuilderBase<wchar_t> *)(local_488.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_488,1);
    }
    *local_488.CurPos = L'\0';
    ::FString::FString(&local_1928,local_488.Base);
    pFVar12 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar12 <= (FScriptContainerElement *)&local_1928) &&
        ((FScriptContainerElement *)&local_1928 <
         pFVar12 + (longlong)(this->SummaryDiffs).ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar9 = (this->SummaryDiffs).ArrayNum;
    piVar2 = &(this->SummaryDiffs).ArrayMax;
    if (iVar9 == *piVar2) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->SummaryDiffs).ArrayNum = iVar9 + 1;
    pFVar12 = (pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
    *(undefined8 *)pFVar12 = 0;
    *(FScriptContainerElement **)pFVar12 = local_1928.Data.AllocatorInstance.Data;
    *(int *)(pFVar12 + 8) = local_1928.Data.ArrayNum;
    *(int *)(pFVar12 + 0xc) = local_1928.Data.ArrayMax;
    local_1928.Data.ArrayNum = 0;
    local_1928.Data.ArrayMax = 0;
    local_1928.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_488);
  }
  if ((param_1->Summary).PreloadDependencyCount != (param_2->Summary).PreloadDependencyCount) {
    local_268.Base = local_248;
    local_268.bIsDynamic = false;
    local_268.bIsExternal = false;
    local_268.CurPos = local_248;
    local_268.End = (wchar_t *)local_48;
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_268,L"PreloadDependencyCount",0x16);
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_268,L": ",2);
    ::FString::PrintfImpl(&local_17c8,L"%d");
    iVar9 = local_17c8.Data.ArrayNum + -1;
    if (local_17c8.Data.ArrayNum == 0) {
      iVar9 = 0;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              (&local_268,(wchar_t *)local_17c8.Data.AllocatorInstance.Data,iVar9);
    if (local_17c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_17c8.Data.AllocatorInstance.Data);
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_268,L" vs ",4);
    ::FString::PrintfImpl(&local_17b8,L"%d");
    iVar9 = local_17b8.Data.ArrayNum + -1;
    if (local_17b8.Data.ArrayNum == 0) {
      iVar9 = iVar7;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              (&local_268,(wchar_t *)local_17b8.Data.AllocatorInstance.Data,iVar9);
    if (local_17b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_17b8.Data.AllocatorInstance.Data);
    }
    if (local_268.End < local_268.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_268,1);
    }
    *local_268.CurPos = L'\0';
    ::FString::FString(&local_1918,local_268.Base);
    pFVar12 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar12 <= (FScriptContainerElement *)&local_1918) &&
        ((FScriptContainerElement *)&local_1918 <
         pFVar12 + (longlong)(this->SummaryDiffs).ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar9 = (this->SummaryDiffs).ArrayNum;
    piVar2 = &(this->SummaryDiffs).ArrayMax;
    if (iVar9 == *piVar2) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->SummaryDiffs).ArrayNum = iVar9 + 1;
    pFVar12 = (pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
    *(undefined8 *)pFVar12 = 0;
    *(FScriptContainerElement **)pFVar12 = local_1918.Data.AllocatorInstance.Data;
    *(int *)(pFVar12 + 8) = local_1918.Data.ArrayNum;
    *(int *)(pFVar12 + 0xc) = local_1918.Data.ArrayMax;
    local_1918.Data.ArrayNum = 0;
    local_1918.Data.ArrayMax = 0;
    local_1918.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  }
  return;
}

// HasDiffs @ 1420c8c90

bool __thiscall FLinkerDiff::HasDiffs(FLinkerDiff *this)

{
  if (((((this->SummaryDiffs).ArrayNum < 1) && ((this->NameMapDiffs).ArrayNum < 1)) &&
      ((this->GatherableTextDataDiffs).ArrayNum < 1)) &&
     ((((this->ImportDiffs).ArrayNum < 1 && ((this->ExportDiffs).ArrayNum < 1)) &&
      (((this->SoftPackageReferenceDiffs).ArrayNum < 1 && ((this->SearchableNameDiffs).ArrayNum < 1)
       ))))) {
    return false;
  }
  return true;
}

// PrintDiff @ 1420cd500

void __thiscall FLinkerDiff::PrintDiff(FLinkerDiff *this,FOutputDevice *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  FString local_28;
  
  if ((((0 < (this->SummaryDiffs).ArrayNum) || (0 < (this->NameMapDiffs).ArrayNum)) ||
      (0 < (this->GatherableTextDataDiffs).ArrayNum)) ||
     (((0 < (this->ImportDiffs).ArrayNum || (0 < (this->ExportDiffs).ArrayNum)) ||
      ((0 < (this->SoftPackageReferenceDiffs).ArrayNum || (0 < (this->SearchableNameDiffs).ArrayNum)
       ))))) {
    FOutputDevice::LogfImpl(param_1,L"Save (Old vs New) Linker Comparison for: %s");
    ::FString::FString(&local_28,L"Summary Diff");
    if (0 < (this->SummaryDiffs).ArrayNum) {
      FOutputDevice::LogfImpl(param_1,L"%s: %d");
      iVar1 = (this->SummaryDiffs).ArrayNum;
      pFVar2 = (this->SummaryDiffs).AllocatorInstance.Data;
      pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
      while( true ) {
        if ((this->SummaryDiffs).ArrayNum != iVar1) {
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pFVar2 == pFVar3) break;
        FOutputDevice::LogfImpl(param_1,L"\t%s");
        pFVar2 = pFVar2 + 0x10;
      }
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_28,L"NameMap Diff");
    if (0 < (this->NameMapDiffs).ArrayNum) {
      FOutputDevice::LogfImpl(param_1,L"%s: %d");
      iVar1 = (this->NameMapDiffs).ArrayNum;
      pFVar2 = (this->NameMapDiffs).AllocatorInstance.Data;
      pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
      while( true ) {
        if ((this->NameMapDiffs).ArrayNum != iVar1) {
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pFVar2 == pFVar3) break;
        FOutputDevice::LogfImpl(param_1,L"\t%s");
        pFVar2 = pFVar2 + 0x10;
      }
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_28,L"GatherableTextData Diff");
    if (0 < (this->GatherableTextDataDiffs).ArrayNum) {
      FOutputDevice::LogfImpl(param_1,L"%s: %d");
      iVar1 = (this->GatherableTextDataDiffs).ArrayNum;
      pFVar2 = (this->GatherableTextDataDiffs).AllocatorInstance.Data;
      pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
      while( true ) {
        if ((this->GatherableTextDataDiffs).ArrayNum != iVar1) {
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pFVar2 == pFVar3) break;
        FOutputDevice::LogfImpl(param_1,L"\t%s");
        pFVar2 = pFVar2 + 0x10;
      }
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_28,L"ImportMap Diff");
    if (0 < (this->ImportDiffs).ArrayNum) {
      FOutputDevice::LogfImpl(param_1,L"%s: %d");
      iVar1 = (this->ImportDiffs).ArrayNum;
      pFVar2 = (this->ImportDiffs).AllocatorInstance.Data;
      pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
      while( true ) {
        if ((this->ImportDiffs).ArrayNum != iVar1) {
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pFVar2 == pFVar3) break;
        FOutputDevice::LogfImpl(param_1,L"\t%s");
        pFVar2 = pFVar2 + 0x10;
      }
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_28,L"ExportMap and DependsMap Diffs Diff");
    if (0 < (this->ExportDiffs).ArrayNum) {
      FOutputDevice::LogfImpl(param_1,L"%s: %d");
      iVar1 = (this->ExportDiffs).ArrayNum;
      pFVar2 = (this->ExportDiffs).AllocatorInstance.Data;
      pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
      while( true ) {
        if ((this->ExportDiffs).ArrayNum != iVar1) {
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pFVar2 == pFVar3) break;
        FOutputDevice::LogfImpl(param_1,L"\t%s");
        pFVar2 = pFVar2 + 0x10;
      }
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_28,L"SoftPackageReference Diff");
    if (0 < (this->SoftPackageReferenceDiffs).ArrayNum) {
      FOutputDevice::LogfImpl(param_1,L"%s: %d");
      iVar1 = (this->SoftPackageReferenceDiffs).ArrayNum;
      pFVar2 = (this->SoftPackageReferenceDiffs).AllocatorInstance.Data;
      pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
      while( true ) {
        if ((this->SoftPackageReferenceDiffs).ArrayNum != iVar1) {
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pFVar2 == pFVar3) break;
        FOutputDevice::LogfImpl(param_1,L"\t%s");
        pFVar2 = pFVar2 + 0x10;
      }
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_28,L"SearchableNames Diff");
    if (0 < (this->SearchableNameDiffs).ArrayNum) {
      FOutputDevice::LogfImpl(param_1,L"%s: %d");
      iVar1 = (this->SearchableNameDiffs).ArrayNum;
      pFVar2 = (this->SearchableNameDiffs).AllocatorInstance.Data;
      pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
      while( true ) {
        if ((this->SearchableNameDiffs).ArrayNum != iVar1) {
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pFVar2 == pFVar3) break;
        FOutputDevice::LogfImpl(param_1,L"\t%s");
        pFVar2 = pFVar2 + 0x10;
      }
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

