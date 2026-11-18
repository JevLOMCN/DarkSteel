// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// RestoreState @ 1466e3530

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FParticleParameterPreAnimatedToken::RestoreState
          (FParticleParameterPreAnimatedToken *this,UObject *param_1,FRestoreStateParams *param_2)

{
  int iVar1;
  UParticleSystemComponent *pUVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  pUVar2 = CastChecked<UParticleSystemComponent,UObject>(param_1);
  iVar1 = (this->ScalarValues).ArrayNum;
  pFVar3 = (this->ScalarValues).AllocatorInstance.Data;
  pFVar5 = pFVar3 + (longlong)iVar1 * 0xc;
  while( true ) {
    if ((this->ScalarValues).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TNameAndValue<float>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar5) break;
    (**(code **)(*(longlong *)pUVar2 + 0xaa0))
              (pUVar2,*(undefined8 *)pFVar3,*(undefined4 *)(pFVar3 + 8));
    pFVar3 = pFVar3 + 0xc;
  }
  pFVar3 = (this->VectorValues).AllocatorInstance.Data;
  iVar1 = (this->VectorValues).ArrayNum;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x20;
  pFVar5 = pFVar3 + 8;
  while( true ) {
    if ((this->VectorValues).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TNameAndValue<UE::Math::TVector<double>_>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    local_38 = *(undefined4 *)pFVar5;
    uStack_34 = *(undefined4 *)(pFVar5 + 4);
    uStack_30 = *(undefined4 *)(pFVar5 + 8);
    uStack_2c = *(undefined4 *)(pFVar5 + 0xc);
    local_28 = *(undefined8 *)(pFVar5 + 0x10);
    (**(code **)(*(longlong *)pUVar2 + 0xaa8))(pUVar2,*(undefined8 *)pFVar3,&local_38);
    pFVar3 = pFVar3 + 0x20;
    pFVar5 = pFVar5 + 0x20;
  }
  pFVar4 = (this->ColorValues).AllocatorInstance.Data;
  iVar1 = (this->ColorValues).ArrayNum;
  pFVar5 = pFVar4 + 8;
  pFVar3 = pFVar4 + (longlong)iVar1 * 0x18;
  while( true ) {
    if ((this->ColorValues).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TNameAndValue<FLinearColor>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar3) break;
    local_38 = *(undefined4 *)pFVar5;
    uStack_34 = *(undefined4 *)(pFVar5 + 4);
    uStack_30 = *(undefined4 *)(pFVar5 + 8);
    uStack_2c = *(undefined4 *)(pFVar5 + 0xc);
    (**(code **)(*(longlong *)pUVar2 + 0xab0))(pUVar2,*(undefined8 *)pFVar4,&local_38);
    pFVar4 = pFVar4 + 0x18;
    pFVar5 = pFVar5 + 0x18;
  }
  return;
}

