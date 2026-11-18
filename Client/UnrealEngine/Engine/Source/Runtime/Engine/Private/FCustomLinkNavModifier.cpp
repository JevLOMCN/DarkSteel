// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Set @ 1473b4360

void __thiscall
FCustomLinkNavModifier::Set
          (FCustomLinkNavModifier *this,TSubclassOf<UNavLinkDefinition> param_1,
          TTransform<double> *param_2)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  bool bVar4;
  UClass *pUVar5;
  UNavLinkDefinition *this_00;
  UClass *this_01;
  UClass *local_res8;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  this_01 = (UClass *)0x0;
  local_res8 = this_01;
  if ((lVar2 != 0) &&
     (pUVar5 = Z_Construct_UClass_UNavLinkDefinition_NoRegister(), pUVar5 != (UClass *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      local_res8 = *(UClass **)param_1.Class.field0_0x0;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  FWeakObjectPtr::operator=(&(this->LinkDefinitionClassOb).WeakPtr,(FObjectPtr)&local_res8);
  dVar3 = (param_2->Rotation).XY.m128d_f64[1];
  (this->LocalToWorld).Rotation.XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
  (this->LocalToWorld).Rotation.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_2->Rotation).ZW.m128d_f64[1];
  (this->LocalToWorld).Rotation.ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
  (this->LocalToWorld).Rotation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (param_2->Translation).XY.m128d_f64[1];
  (this->LocalToWorld).Translation.XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
  (this->LocalToWorld).Translation.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_2->Translation).ZW.m128d_f64[1];
  (this->LocalToWorld).Translation.ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
  (this->LocalToWorld).Translation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (param_2->Scale3D).XY.m128d_f64[1];
  (this->LocalToWorld).Scale3D.XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
  (this->LocalToWorld).Scale3D.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_2->Scale3D).ZW.m128d_f64[1];
  (this->LocalToWorld).Scale3D.ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
  (this->LocalToWorld).Scale3D.ZW.m128d_f64[1] = dVar3;
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if ((lVar2 != 0) &&
     (pUVar5 = Z_Construct_UClass_UNavLinkDefinition_NoRegister(), pUVar5 != (UClass *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      this_01 = *(UClass **)param_1.Class.field0_0x0;
    }
  }
  this_00 = UClass::GetDefaultObject<UNavLinkDefinition>(this_01);
  if (this_00 == (UNavLinkDefinition *)0x0) {
    *(uint *)this = *(uint *)this & 0xfffffffe;
  }
  else {
    UNavLinkDefinition::InitializeAreaClass(this_00);
    bVar4 = UNavLinkDefinition::HasMetaAreaClass(this_00);
    *(uint *)this = *(uint *)this & 0xfffffffe;
    *(uint *)this = *(uint *)this | (uint)bVar4;
  }
  return;
}

