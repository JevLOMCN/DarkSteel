// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 1

// DoWork @ 145f8acc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FAsyncFetchTask::DoWork(FAsyncFetchTask *this)

{
  TSet<TTuple<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>_>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,0>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *pTVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  undefined1 local_70 [88];
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_98;
  if ((this->ActiveRender).Object == (FLandscapeGrassWeightExporter *)0x0) {
    `TNonNullPtr<FLandscapeGrassWeightExporter>::operator->'::__l2::<lambda_1>::operator()(local_78)
    ;
  }
  pTVar1 = (TSet<TTuple<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>_>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,0>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
            *)FLandscapeGrassWeightExporter::FetchResults
                        ((this->ActiveRender).Object,
                         (TMap<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,0>_>
                          *)local_70,false);
  if ((TSet<TTuple<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>_>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,0>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
       *)&this->Results != pTVar1) {
    TSet<TTuple<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>_>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,0>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
    ::
    Move<TSet<TTuple<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>_>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,0>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>_>
              ((TSet<TTuple<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>_>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,0>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                *)&this->Results,pTVar1);
  }
  local_18 = 0;
  if ((void *)local_70._80_8_ != (void *)0x0) {
    FMemory::Free((void *)local_70._80_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>_>_>,TInlineSparseArrayAllocator<1,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>_>_>,TInlineSparseArrayAllocator<1,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            ((TSparseArray<TSparseSetElement<TTuple<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>_>_>,TInlineSparseArrayAllocator<1,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
              *)local_70);
  return;
}

