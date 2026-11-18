// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// Serialize @ 143b77500

void __thiscall ChaosInterface::FLocationHit::Serialize(FLocationHit *this,FChaosArchive *param_1)

{
  longlong *plVar1;
  FHitFlags *pFVar2;
  float *pfVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  EHitFlags *pEVar6;
  float *pfVar7;
  TSerializablePtr<Chaos::FPerShapeData> local_res8;
  
  Chaos::FChaosArchive::SerializePtr<Chaos::TGeometryParticle<double,3>_>
            (param_1,(TSerializablePtr<Chaos::TGeometryParticle<double,3>_> *)this);
  local_res8.Ptr = (FPerShapeData *)this->_padding_;
  Chaos::FChaosArchive::SerializePtr<Chaos::FPerShapeData>(param_1,&local_res8);
  plVar1 = &this->_padding_;
  this->_padding_ = (longlong)local_res8.Ptr;
  puVar5 = *(undefined4 **)param_1->_padding_;
  if ((undefined4 *)((undefined8 *)param_1->_padding_)[1] < puVar5 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,plVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)plVar1);
    }
  }
  else {
    *(undefined4 *)plVar1 = *puVar5;
    *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
  }
  pFVar2 = &this->Flags;
  pbVar4 = (byte *)((longlong)&param_1->_padding_ + 2);
  pEVar6 = *(EHitFlags **)param_1->_padding_;
  if ((EHitFlags *)((undefined8 *)param_1->_padding_)[1] < pEVar6 + 1) {
    if ((*pbVar4 & 1) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,pFVar2,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,&pFVar2->HitFlags);
    }
  }
  else {
    pFVar2->HitFlags = *pEVar6;
    *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 2;
  }
  UE::Math::operator<<((FArchive *)param_1,&this->WorldPosition);
  UE::Math::operator<<((FArchive *)param_1,&this->WorldNormal);
  pfVar3 = &this->Distance;
  pfVar7 = *(float **)param_1->_padding_;
  if (pfVar7 + 1 <= (float *)((undefined8 *)param_1->_padding_)[1]) {
    *pfVar3 = *pfVar7;
    *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
    return;
  }
  if ((*pbVar4 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143b7763c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1->_padding_ + 0x188))(param_1,pfVar3,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)pfVar3);
  return;
}

