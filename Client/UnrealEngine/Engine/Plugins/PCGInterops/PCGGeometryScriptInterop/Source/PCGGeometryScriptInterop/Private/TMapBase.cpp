// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCGGeometryScriptInterop
// Functions: 1

// FindOrAddImpl<FSoftObjectPath_const_&> @ 14cedfc40

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FSoftObjectPath,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<FSoftObjectPath_const_&>
          (TMapBase<FSoftObjectPath,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FSoftObjectPath *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FSoftObjectPath *local_res20;
  
  iVar1 = TSet<TTuple<FSoftObjectPath,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FSoftObjectPath>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x38 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (TArray<int,TSizedDefaultAllocator<32>_> *)(lVar2 + 0x20);
  }
  local_res20 = param_2;
  TSet<TTuple<FSoftObjectPath,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FSoftObjectPath_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FSoftObjectPath_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (TArray<int,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x38 + 0x20);
}

