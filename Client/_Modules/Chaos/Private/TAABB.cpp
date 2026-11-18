// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// FromPoints<Chaos::TVector<double,3>,Chaos::TVector<double,3>,Chaos::TVector<double,3>_> @ 143aba7b0

TAABB<double,3> * __cdecl
Chaos::TAABB<double,3>::
FromPoints<Chaos::TVector<double,3>,Chaos::TVector<double,3>,Chaos::TVector<double,3>_>
          (TAABB<double,3> *__return_storage_ptr__,TVector<double,3> *param_1,
          TVector<double,3> *param_2,TVector<double,3> *param_3,TVector<double,3> *param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)&__return_storage_ptr__->MMin = *(undefined8 *)param_1;
  *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x8 = uVar1;
  *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x10 = *(undefined8 *)&param_1->field_0x10;
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)&__return_storage_ptr__->MMax = *(undefined8 *)param_1;
  *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x8 = uVar1;
  *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x10 = *(undefined8 *)&param_1->field_0x10;
  dVar6 = *(double *)&__return_storage_ptr__->MMin;
  uVar2 = SUB84(dVar6,0);
  uVar3 = (undefined4)((ulonglong)dVar6 >> 0x20);
  dVar4 = *(double *)param_2;
  if (dVar4 <= dVar6) {
    uVar2 = SUB84(dVar4,0);
    uVar3 = (undefined4)((ulonglong)dVar4 >> 0x20);
  }
  dVar6 = *(double *)&(__return_storage_ptr__->MMin).field_0x8;
  dVar4 = *(double *)&param_2->field_0x8;
  if (dVar6 <= *(double *)&param_2->field_0x8) {
    dVar4 = dVar6;
  }
  dVar6 = *(double *)&(__return_storage_ptr__->MMin).field_0x10;
  dVar5 = *(double *)&param_2->field_0x10;
  if (dVar6 <= *(double *)&param_2->field_0x10) {
    dVar5 = dVar6;
  }
  *(ulonglong *)&__return_storage_ptr__->MMin = CONCAT44(uVar3,uVar2);
  *(double *)&(__return_storage_ptr__->MMin).field_0x8 = dVar4;
  *(double *)&(__return_storage_ptr__->MMin).field_0x10 = dVar5;
  dVar6 = *(double *)&__return_storage_ptr__->MMax;
  uVar2 = SUB84(dVar6,0);
  uVar3 = (undefined4)((ulonglong)dVar6 >> 0x20);
  dVar4 = *(double *)param_2;
  if (dVar6 <= dVar4) {
    uVar2 = SUB84(dVar4,0);
    uVar3 = (undefined4)((ulonglong)dVar4 >> 0x20);
  }
  dVar6 = *(double *)&(__return_storage_ptr__->MMax).field_0x8;
  dVar4 = *(double *)&param_2->field_0x8;
  if (*(double *)&param_2->field_0x8 <= dVar6) {
    dVar4 = dVar6;
  }
  dVar6 = *(double *)&(__return_storage_ptr__->MMax).field_0x10;
  dVar5 = *(double *)&param_2->field_0x10;
  if (*(double *)&param_2->field_0x10 <= dVar6) {
    dVar5 = dVar6;
  }
  *(ulonglong *)&__return_storage_ptr__->MMax = CONCAT44(uVar3,uVar2);
  *(double *)&(__return_storage_ptr__->MMax).field_0x8 = dVar4;
  *(double *)&(__return_storage_ptr__->MMax).field_0x10 = dVar5;
  dVar6 = *(double *)&__return_storage_ptr__->MMin;
  uVar2 = SUB84(dVar6,0);
  uVar3 = (undefined4)((ulonglong)dVar6 >> 0x20);
  dVar4 = *(double *)param_3;
  if (dVar4 <= dVar6) {
    uVar2 = SUB84(dVar4,0);
    uVar3 = (undefined4)((ulonglong)dVar4 >> 0x20);
  }
  dVar6 = *(double *)&(__return_storage_ptr__->MMin).field_0x8;
  dVar4 = *(double *)&param_3->field_0x8;
  if (dVar6 <= *(double *)&param_3->field_0x8) {
    dVar4 = dVar6;
  }
  dVar6 = *(double *)&(__return_storage_ptr__->MMin).field_0x10;
  if (*(double *)&param_3->field_0x10 <= dVar6) {
    dVar6 = *(double *)&param_3->field_0x10;
  }
  *(ulonglong *)&__return_storage_ptr__->MMin = CONCAT44(uVar3,uVar2);
  *(double *)&(__return_storage_ptr__->MMin).field_0x8 = dVar4;
  *(double *)&(__return_storage_ptr__->MMin).field_0x10 = dVar6;
  dVar6 = *(double *)&__return_storage_ptr__->MMax;
  uVar2 = SUB84(dVar6,0);
  uVar3 = (undefined4)((ulonglong)dVar6 >> 0x20);
  dVar4 = *(double *)param_3;
  if (dVar6 <= dVar4) {
    uVar2 = SUB84(dVar4,0);
    uVar3 = (undefined4)((ulonglong)dVar4 >> 0x20);
  }
  dVar6 = *(double *)&(__return_storage_ptr__->MMax).field_0x8;
  dVar4 = *(double *)&param_3->field_0x8;
  if (*(double *)&param_3->field_0x8 <= dVar6) {
    dVar4 = dVar6;
  }
  dVar6 = *(double *)&(__return_storage_ptr__->MMax).field_0x10;
  dVar5 = *(double *)&param_3->field_0x10;
  if (*(double *)&param_3->field_0x10 <= dVar6) {
    dVar5 = dVar6;
  }
  *(ulonglong *)&__return_storage_ptr__->MMax = CONCAT44(uVar3,uVar2);
  *(double *)&(__return_storage_ptr__->MMax).field_0x8 = dVar4;
  *(double *)&(__return_storage_ptr__->MMax).field_0x10 = dVar5;
  dVar6 = *(double *)&__return_storage_ptr__->MMin;
  uVar2 = SUB84(dVar6,0);
  uVar3 = (undefined4)((ulonglong)dVar6 >> 0x20);
  dVar4 = *(double *)param_4;
  if (dVar4 <= dVar6) {
    uVar2 = SUB84(dVar4,0);
    uVar3 = (undefined4)((ulonglong)dVar4 >> 0x20);
  }
  dVar6 = *(double *)&(__return_storage_ptr__->MMin).field_0x10;
  if (*(double *)&param_4->field_0x10 <= dVar6) {
    dVar6 = *(double *)&param_4->field_0x10;
  }
  dVar4 = *(double *)&(__return_storage_ptr__->MMin).field_0x8;
  dVar5 = *(double *)&param_4->field_0x8;
  if (dVar4 <= *(double *)&param_4->field_0x8) {
    dVar5 = dVar4;
  }
  *(ulonglong *)&__return_storage_ptr__->MMin = CONCAT44(uVar3,uVar2);
  *(double *)&(__return_storage_ptr__->MMin).field_0x8 = dVar5;
  *(double *)&(__return_storage_ptr__->MMin).field_0x10 = dVar6;
  dVar6 = *(double *)&__return_storage_ptr__->MMax;
  uVar2 = SUB84(dVar6,0);
  uVar3 = (undefined4)((ulonglong)dVar6 >> 0x20);
  dVar4 = *(double *)param_4;
  if (dVar6 <= dVar4) {
    uVar2 = SUB84(dVar4,0);
    uVar3 = (undefined4)((ulonglong)dVar4 >> 0x20);
  }
  dVar6 = *(double *)&(__return_storage_ptr__->MMax).field_0x10;
  if (dVar6 <= *(double *)&param_4->field_0x10) {
    dVar6 = *(double *)&param_4->field_0x10;
  }
  dVar4 = *(double *)&(__return_storage_ptr__->MMax).field_0x8;
  dVar5 = *(double *)&param_4->field_0x8;
  if (*(double *)&param_4->field_0x8 <= dVar4) {
    dVar5 = dVar4;
  }
  *(ulonglong *)&__return_storage_ptr__->MMax = CONCAT44(uVar3,uVar2);
  *(double *)&(__return_storage_ptr__->MMax).field_0x8 = dVar5;
  *(double *)&(__return_storage_ptr__->MMax).field_0x10 = dVar6;
  return __return_storage_ptr__;
}

