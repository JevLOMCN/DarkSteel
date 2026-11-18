// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraUIRenderer
// Functions: 1

// Find @ 14d2975a0

TObjectPtr<UMaterialInterface> * __thiscall
TMapBase<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,0>_>
::Find(TMapBase<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,0>_>
       *this,TObjectPtr<UMaterialInterface_const_> param_1)

{
  longlong lVar1;
  TObjectPtr<UMaterialInterface_const_>_u_0 TVar2;
  int iVar3;
  TObjectPtr<UMaterialInterface> *pTVar4;
  uint uVar5;
  TObjectPtr<UMaterialInterface_const_>_u_0 local_res8;
  
                    /* WARNING: Load size is inaccurate */
  TVar2.DebugPtr = *param_1.field0_0x0;
  local_res8 = TVar2;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (TVar2.DebugPtr != (UMaterialInterface *)0x0) {
      UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar2.DebugPtr != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
    }
  }
  uVar5 = ((uint)((ulonglong)TVar2.DebugPtr >> 0x14) & 0xffff ^
          (uint)((ulonglong)TVar2.DebugPtr >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  iVar3 = TSet<TTuple<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectPtr<UMaterialInterface_const_>_>
                    (&this->Pairs,uVar5 >> 0x10 ^ uVar5,
                     (TObjectPtr<UMaterialInterface_const_> *)&local_res8.ObjectPtr);
  if (iVar3 != -1) {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar3 * 0x18;
    pTVar4 = (TObjectPtr<UMaterialInterface> *)0x0;
    if (lVar1 != 0) {
      pTVar4 = (TObjectPtr<UMaterialInterface> *)(lVar1 + 8);
    }
    return pTVar4;
  }
  return (TObjectPtr<UMaterialInterface> *)0x0;
}

