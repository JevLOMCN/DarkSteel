// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// FNDIPhysicsAssetArrays @ 148ea3490

FNDIPhysicsAssetArrays * __thiscall
FNDIPhysicsAssetArrays::FNDIPhysicsAssetArrays(FNDIPhysicsAssetArrays *this)

{
  FNDIPhysicsAssetArrays *pFVar1;
  TStaticArray<UE::Math::TVector4<float>,900,4294967295> *pTVar2;
  TStaticArray<UE::Math::TVector4<float>,300,4294967295> *pTVar3;
  TStaticArray<UE::Math::TVector4<float>,100,4294967295> *pTVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = 900;
  (this->ElementOffsets).BoxOffset = 0;
  (this->ElementOffsets).SphereOffset = 0;
  (this->ElementOffsets).CapsuleOffset = 0;
  (this->ElementOffsets).NumElements = 0;
  lVar6 = 900;
  pFVar1 = this;
  do {
    *(undefined8 *)&(pFVar1->WorldTransform).Elements[0].field0_0x0 = 0;
    (pFVar1->WorldTransform).Elements[0].field0_0x0._s_0.Z = 0.0;
    (pFVar1->WorldTransform).Elements[0].field0_0x0._s_0.W = 1.0;
    lVar6 = lVar6 + -1;
    pFVar1 = (FNDIPhysicsAssetArrays *)&pFVar1->WorldTransform;
  } while (lVar6 != 0);
  pTVar2 = &this->InverseTransform;
  do {
    *(undefined8 *)&pTVar2->Elements[0].field0_0x0 = 0;
    pTVar2->Elements[0].field0_0x0._s_0.Z = 0.0;
    pTVar2->Elements[0].field0_0x0._s_0.W = 1.0;
    pTVar2 = (TStaticArray<UE::Math::TVector4<float>,900,4294967295> *)(pTVar2->Elements + 1);
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  pTVar3 = &this->CurrentTransform;
  lVar5 = 300;
  lVar6 = 300;
  do {
    *(undefined8 *)&pTVar3->Elements[0].field0_0x0 = 0;
    pTVar3->Elements[0].field0_0x0._s_0.Z = 0.0;
    pTVar3->Elements[0].field0_0x0._s_0.W = 1.0;
    pTVar3 = (TStaticArray<UE::Math::TVector4<float>,300,4294967295> *)(pTVar3->Elements + 1);
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  pTVar3 = &this->CurrentInverse;
  lVar6 = 300;
  do {
    *(undefined8 *)&pTVar3->Elements[0].field0_0x0 = 0;
    pTVar3->Elements[0].field0_0x0._s_0.Z = 0.0;
    pTVar3->Elements[0].field0_0x0._s_0.W = 1.0;
    pTVar3 = (TStaticArray<UE::Math::TVector4<float>,300,4294967295> *)(pTVar3->Elements + 1);
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  pTVar3 = &this->PreviousTransform;
  lVar6 = 300;
  do {
    *(undefined8 *)&pTVar3->Elements[0].field0_0x0 = 0;
    pTVar3->Elements[0].field0_0x0._s_0.Z = 0.0;
    pTVar3->Elements[0].field0_0x0._s_0.W = 1.0;
    pTVar3 = (TStaticArray<UE::Math::TVector4<float>,300,4294967295> *)(pTVar3->Elements + 1);
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  pTVar3 = &this->PreviousInverse;
  lVar6 = 300;
  do {
    *(undefined8 *)&pTVar3->Elements[0].field0_0x0 = 0;
    pTVar3->Elements[0].field0_0x0._s_0.Z = 0.0;
    pTVar3->Elements[0].field0_0x0._s_0.W = 1.0;
    pTVar3 = (TStaticArray<UE::Math::TVector4<float>,300,4294967295> *)(pTVar3->Elements + 1);
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  pTVar3 = &this->RestTransform;
  lVar6 = 300;
  do {
    *(undefined8 *)&pTVar3->Elements[0].field0_0x0 = 0;
    pTVar3->Elements[0].field0_0x0._s_0.Z = 0.0;
    pTVar3->Elements[0].field0_0x0._s_0.W = 1.0;
    pTVar3 = (TStaticArray<UE::Math::TVector4<float>,300,4294967295> *)(pTVar3->Elements + 1);
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  pTVar3 = &this->RestInverse;
  do {
    *(undefined8 *)&pTVar3->Elements[0].field0_0x0 = 0;
    pTVar3->Elements[0].field0_0x0._s_0.Z = 0.0;
    pTVar3->Elements[0].field0_0x0._s_0.W = 1.0;
    pTVar3 = (TStaticArray<UE::Math::TVector4<float>,300,4294967295> *)(pTVar3->Elements + 1);
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  pTVar4 = &this->ElementExtent;
  lVar5 = 100;
  do {
    *(undefined8 *)&pTVar4->Elements[0].field0_0x0 = 0;
    pTVar4->Elements[0].field0_0x0._s_0.Z = 0.0;
    pTVar4->Elements[0].field0_0x0._s_0.W = 1.0;
    pTVar4 = (TStaticArray<UE::Math::TVector4<float>,100,4294967295> *)(pTVar4->Elements + 1);
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return this;
}

