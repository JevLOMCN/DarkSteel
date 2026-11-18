// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionTracks
// Functions: 1

// RestoreState @ 14e7feba0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FPreAnimatedGeometryCollectionTokenProducer::CacheExistingState'::__l2::FToken::RestoreState
          (void *this,UObject *param_1,FRestoreStateParams *param_2)

{
  UGeometryCollectionCache *pUVar1;
  UGeometryCollectionComponent *pUVar2;
  
  pUVar2 = CastChecked<UGeometryCollectionComponent,UObject>(param_1);
  pUVar1 = *(UGeometryCollectionCache **)((longlong)this + 0x10);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UGeometryCollectionCache *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (pUVar2->CacheParameters).TargetCache.field0_0x0.DebugPtr = pUVar1;
  pUVar2->ObjectType = *(EObjectStateTypeEnum *)((longlong)this + 8);
  (pUVar2->CacheParameters).CacheMode = *(EGeometryCollectionCacheType *)((longlong)this + 0x19);
  pUVar2->DesiredCacheTime = -1.0;
  pUVar2->CachePlayback = true;
  return;
}

