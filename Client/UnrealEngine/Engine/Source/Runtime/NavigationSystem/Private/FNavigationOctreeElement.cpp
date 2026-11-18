// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 1

// FNavigationOctreeElement @ 146d743b0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

FNavigationOctreeElement * __thiscall
FNavigationOctreeElement::FNavigationOctreeElement
          (FNavigationOctreeElement *this,TSharedRef<FNavigationElement_const_,1> *param_1)

{
  double dVar1;
  FNavigationElement *pFVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  TReferenceControllerBase<1> *pTVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  pFVar2 = param_1->Object;
  dVar1 = (pFVar2->Bounds).Min.field0_0x0._s_0.X;
  dVar5 = (pFVar2->Bounds).Min.field0_0x0._s_0.Y;
  dVar6 = (pFVar2->Bounds).Min.field0_0x0._s_0.Z;
  dVar4 = (pFVar2->Bounds).Max.field0_0x0._s_0.Z - dVar6;
  dVar3 = (pFVar2->Bounds).Max.field0_0x0._s_0.Y - dVar5;
  dVar10 = ((pFVar2->Bounds).Max.field0_0x0._s_0.X - dVar1) * __real_3fe0000000000000;
  dVar9 = dVar3 * __real_3fe0000000000000;
  dVar8 = dVar4 * __real_3fe0000000000000;
  (this->Bounds).Origin.field0_0x0._s_0.X = dVar10 + dVar1;
  (this->Bounds).Origin.field0_0x0._s_0.Y = dVar9 + dVar5;
  (this->Bounds).Origin.field0_0x0._s_0.Z = dVar8 + dVar6;
  (this->Bounds).BoxExtent.field0_0x0._s_0.X = dVar10;
  (this->Bounds).BoxExtent.field0_0x0._s_0.Y = dVar9;
  (this->Bounds).BoxExtent.field0_0x0._s_0.Z = dVar8;
  dVar1 = (this->Bounds).BoxExtent.field0_0x0._s_0.X;
  (this->Bounds).SphereRadius =
       SQRT((dVar4 * dVar4 + dVar3 * dVar3) * __real_3fd0000000000000 + dVar1 * dVar1);
  pTVar7 = ::operator_new(0x128);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFNavigationRelevantData___00_SharedPointerInternals__6B_
    ;
    FNavigationRelevantData::FNavigationRelevantData
              ((FNavigationRelevantData *)(pTVar7 + 1),param_1);
  }
  TSharedRef<FNavigationRelevantData,1>::TSharedRef<FNavigationRelevantData,1>
            (&this->Data,(FNavigationRelevantData *)(pTVar7 + 1),pTVar7);
  return this;
}

