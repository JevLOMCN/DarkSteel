// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// OnLoaded @ 147db8630

void __thiscall
`UKismetSystemLibrary::LoadAssetClass'::__l2::FLoadAssetClassAction::OnLoaded(void *this)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UObject *local_res8;
  
  pUVar3 = FSoftObjectPath::ResolveObject((FSoftObjectPath *)((longlong)this + 8));
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_147db8673;
  }
  pUVar3 = (UObject *)0x0;
LAB_147db8673:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  bVar2 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)((longlong)this + 0x138));
  if (bVar2) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar3 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
    }
    local_res8 = pUVar3;
    TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>
              ((TScriptDelegate<FNotThreadSafeDelegateMode> *)((longlong)this + 0x138),&local_res8);
  }
  return;
}

