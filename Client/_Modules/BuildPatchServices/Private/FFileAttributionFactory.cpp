// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// Create @ 1432c9010

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

IFileAttribution * __cdecl
BuildPatchServices::FFileAttributionFactory::Create
          (IFileSystem *param_1,IBuildManifestSet *param_2,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_3,FString *param_4,
          FString *param_5,FBuildPatchProgress *param_6)

{
  int iVar1;
  IFileAttribution IVar2;
  ForElementType<FSetElementId> FVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  IFileAttribution *pIVar7;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0 [32];
  void *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ForElementType<FSetElementId> local_60;
  int local_58;
  IFileAttribution local_50;
  FString *local_48;
  
  local_50 = (IFileAttribution)param_1;
  local_48 = param_4;
  if (param_6 == (FBuildPatchProgress *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("BuildProgress != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\FileAttribution.cpp"
                       ,0xbf,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pIVar7 = (IFileAttribution *)(*pcVar4)();
      return pIVar7;
    }
  }
  pIVar7 = ::operator_new(0xa0);
  if (pIVar7 == (IFileAttribution *)0x0) {
    pIVar7 = (IFileAttribution *)0x0;
  }
  else {
    iVar1 = (param_5->Data).ArrayNum;
    local_78 = ___xmm_00000000ffffffff0000008000000000;
    uStack_70 = _UNK_150631d98;
    local_a0._0_8_ = (FScriptContainerElement *)0x0;
    local_a0._8_8_ = 0;
    local_80 = (void *)0x0;
    local_60 = (ForElementType<FSetElementId>)0x0;
    local_58 = 0;
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
    Move<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_a0,param_3);
    pIVar7[2] = (IFileAttribution)param_2;
    *(undefined8 *)
     &((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(pIVar7 + 3))->Elements = 0;
    *pIVar7 = (IFileAttribution)&___7FFileAttribution_BuildPatchServices__6B_;
    pIVar7[1] = local_50;
    pIVar7[4] = (IFileAttribution)0x0;
    pIVar7[7] = (IFileAttribution)0x0;
    *(undefined4 *)(pIVar7 + 8) = 0;
    *(undefined4 *)&pIVar7[8].field_0x4 = 0x80;
    *(undefined4 *)(pIVar7 + 9) = 0xffffffff;
    *(undefined4 *)&pIVar7[9].field_0x4 = 0;
    pIVar7[0xb] = (IFileAttribution)0x0;
    *(undefined4 *)(pIVar7 + 0xc) = 0;
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
    Move<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(pIVar7 + 3),
               (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_a0);
    ::FString::FString((FString *)(pIVar7 + 0xd),local_48);
    ::FString::FString((FString *)(pIVar7 + 0xf),param_5);
    pIVar7[0x12] = (IFileAttribution)param_6;
    IVar2 = pIVar7[0x12];
    *(bool *)(pIVar7 + 0x11) = 1 < iVar1;
    *(undefined4 *)(pIVar7 + 0x13) = 0;
    *(undefined4 *)&pIVar7[0x13].field_0x4 = 0;
    local_a8 = 0;
    local_a4 = 6;
    (**(code **)(*(longlong *)IVar2 + 0x18))(IVar2,&local_a4,&local_a8);
    local_58 = 0;
    if (local_60 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_60);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_a0,0,local_a0._8_4_);
    iVar1 = SUB84(local_a0._8_8_,4);
    local_a0._8_8_ = local_a0._8_8_ & 0xffffffff00000000;
    if (iVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)local_a0,0,(int *)(local_a0 + 0xc));
    }
    uVar5 = local_78._4_4_;
    uStack_70 = 0xffffffff;
    local_78 = (ulonglong)local_78._4_4_ << 0x20;
    if (0x80 < uVar5) {
      local_78 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_a0 + 0x10),0);
    }
    if (local_80 != (void *)0x0) {
      FMemory::Free(local_80);
    }
    if ((FScriptContainerElement *)local_a0._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_a0._0_8_);
    }
  }
  param_3->HashSize = 0;
  FVar3 = (param_3->Hash).SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&param_3->Elements);
  return pIVar7;
}

