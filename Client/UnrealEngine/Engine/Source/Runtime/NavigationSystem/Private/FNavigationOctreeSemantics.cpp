// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 1

// SetElementId @ 146db8a40

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __cdecl
FNavigationOctreeSemantics::SetElementId
          (TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics> *param_1,
          FNavigationOctreeElement *param_2,FOctreeElementId2 param_3)

{
  FNavigationElementHandle *pFVar1;
  TSet<TTuple<FNavigationElementHandle,FOctreeElementId2>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>,FDefaultSetAllocator>
  *this;
  TPairInitializer<FNavigationElementHandle_const_&,FOctreeElementId2_const_&> local_res8;
  FWeakObjectPtr *local_38;
  FOctreeElementId2 **local_30;
  FWeakObjectPtr local_28;
  ulong64 uStack_20;
  FNavigationElementHandle local_18;
  
  pFVar1 = FNavigationElement::GetHandle((((param_2->Data).Object)->SourceElement).Object,&local_18)
  ;
  this = (TSet<TTuple<FNavigationElementHandle,FOctreeElementId2>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>,FDefaultSetAllocator>
          *)((longlong)&param_1[1].RootNodeContext.Bounds.Extent.field0_0x0 + 0x18);
  local_28 = (pFVar1->OwnerUObject).WeakPtr;
  uStack_20 = pFVar1->SubElementId;
  local_38 = &local_28;
  local_30 = &local_res8.Value;
  if (param_1 == (TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics> *)0x0) {
    this = (TSet<TTuple<FNavigationElementHandle,FOctreeElementId2>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>,FDefaultSetAllocator>
            *)&DAT_000000f8;
  }
  local_res8.Value = (FOctreeElementId2 *)param_3;
  TSet<TTuple<FNavigationElementHandle,FOctreeElementId2>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FNavigationElementHandle_const_&,FOctreeElementId2_const_&>_>
            (this,&local_res8,(bool *)&local_38);
  return;
}

