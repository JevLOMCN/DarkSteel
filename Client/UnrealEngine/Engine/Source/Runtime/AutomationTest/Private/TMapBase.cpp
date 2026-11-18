// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationTest
// Functions: 2

// EmplaceByHash<FName_const_&> @ 148bee630

TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * __thiscall
TMapBase<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
::EmplaceByHash<FName_const_&>
          (TMapBase<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
           *this,uint param_1,FName *param_2)

{
  bool bVar1;
  TKeyInitializer<FName_const_&> local_res8;
  FSparseArrayAllocationInfo local_18;
  
  local_res8.Key = param_2;
  TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AddUninitialized((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)this,&local_18);
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_>
       *)0x0) {
    TKeyInitializer<FName_const_&>::
    operator<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
              (&local_res8,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x58) = 0xffffffff;
  }
  local_res8.Key._0_4_ = local_18.Index;
  bVar1 = TSet<TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,(int *)&local_res8,(bool *)0x0)
  ;
  if (!bVar1) {
    TSet<TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,(int)local_res8.Key);
  }
  return (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)(int)local_res8.Key * 0x60);
}

// Find @ 148bf2dd0

TObjectPtr<UAutomationTestExcludelistConfig> * __thiscall
TMapBase<FName,TObjectPtr<UAutomationTestExcludelistConfig>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UAutomationTestExcludelistConfig>,0>_>
::Find(TMapBase<FName,TObjectPtr<UAutomationTestExcludelistConfig>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UAutomationTestExcludelistConfig>,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  TObjectPtr<UAutomationTestExcludelistConfig> *pTVar5;
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
        lVar1 = lVar2 + (longlong)iVar4 * 0x18;
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x18) == param_1) {
          pTVar5 = (TObjectPtr<UAutomationTestExcludelistConfig> *)0x0;
          if (lVar1 != 0) {
            pTVar5 = (TObjectPtr<UAutomationTestExcludelistConfig> *)(lVar1 + 8);
          }
          return pTVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return (TObjectPtr<UAutomationTestExcludelistConfig> *)0x0;
}

