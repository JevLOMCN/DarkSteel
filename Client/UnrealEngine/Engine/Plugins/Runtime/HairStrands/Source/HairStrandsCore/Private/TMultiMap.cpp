// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 1

// Remove @ 14e025210

int __thiscall
TMultiMap<USkeletalMesh_*,UGroomBindingAsset_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USkeletalMesh_*,UGroomBindingAsset_*,1>_>
::Remove(TMultiMap<USkeletalMesh_*,UGroomBindingAsset_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USkeletalMesh_*,UGroomBindingAsset_*,1>_>
         *this,USkeletalMesh *param_1,UGroomBindingAsset *param_2)

{
  int iVar1;
  int iVar2;
  TBaseKeyIterator<0> local_28;
  
  iVar2 = 0;
  TSet<TTuple<USkeletalMesh_*,UGroomBindingAsset_*>,TDefaultMapHashableKeyFuncs<USkeletalMesh_*,UGroomBindingAsset_*,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
            (&local_28,
             (TSet<TTuple<USkeletalMesh_*,UGroomBindingAsset_*>,TDefaultMapHashableKeyFuncs<USkeletalMesh_*,UGroomBindingAsset_*,1>,FDefaultSetAllocator>
              *)this,param_1);
  if (local_28.Index == -1) {
    return 0;
  }
  do {
    if (*(UGroomBindingAsset **)
         (*(longlong *)&(local_28.Set)->Elements + 8 + (longlong)local_28.Index * 0x18) == param_2)
    {
      TSet<TTuple<USkeletalMesh_*,UGroomBindingAsset_*>,TDefaultMapHashableKeyFuncs<USkeletalMesh_*,UGroomBindingAsset_*,1>,FDefaultSetAllocator>
      ::RemoveByIndex(local_28.Set,local_28.Index);
      iVar2 = iVar2 + 1;
    }
    if (local_28.NextIndex == -1) {
      return iVar2;
    }
    do {
      iVar1 = *(int *)(*(longlong *)&(local_28.Set)->Elements + 0x10 +
                      (longlong)local_28.NextIndex * 0x18);
      local_28.Index = local_28.NextIndex;
      if (*(USkeletalMesh **)
           (*(longlong *)&(local_28.Set)->Elements + (longlong)local_28.NextIndex * 0x18) ==
          local_28.Key) break;
      local_28.Index = iVar1;
      local_28.NextIndex = iVar1;
    } while (iVar1 != -1);
    local_28.NextIndex = iVar1;
    if (local_28.Index == -1) {
      return iVar2;
    }
  } while( true );
}

