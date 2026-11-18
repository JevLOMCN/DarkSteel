// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// TContactPoint<float><double> @ 1437c1a50

TContactPoint<float> * __thiscall
Chaos::TContactPoint<float>::TContactPoint<float><double>
          (TContactPoint<float> *this,TContactPoint<double> *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = *(double *)&param_1->ShapeContactPoints[0].field_0x10;
  dVar2 = *(double *)&param_1->ShapeContactPoints[0].field_0x8;
  *(float *)this->ShapeContactPoints = (float)*(double *)param_1->ShapeContactPoints;
  *(float *)&this->ShapeContactPoints[0].field_0x8 = (float)dVar1;
  *(float *)&this->ShapeContactPoints[0].field_0x4 = (float)dVar2;
  dVar1 = *(double *)&param_1->ShapeContactPoints[1].field_0x10;
  dVar2 = *(double *)&param_1->ShapeContactPoints[1].field_0x8;
  *(float *)(this->ShapeContactPoints + 1) = (float)*(double *)(param_1->ShapeContactPoints + 1);
  *(float *)&this->ShapeContactPoints[1].field_0x8 = (float)dVar1;
  *(float *)&this->ShapeContactPoints[1].field_0x4 = (float)dVar2;
  dVar1 = *(double *)&(param_1->ShapeContactNormal).field_0x10;
  dVar2 = *(double *)&(param_1->ShapeContactNormal).field_0x8;
  *(float *)&this->ShapeContactNormal = (float)*(double *)&param_1->ShapeContactNormal;
  *(float *)&(this->ShapeContactNormal).field_0x8 = (float)dVar1;
  *(float *)&(this->ShapeContactNormal).field_0x4 = (float)dVar2;
  this->Phi = (float)param_1->Phi;
  this->FaceIndex = param_1->FaceIndex;
  this->ContactType = param_1->ContactType;
  return this;
}

// TContactPoint<double> @ 1439575f0

TContactPoint<double> * __thiscall
Chaos::TContactPoint<double>::TContactPoint<double>(TContactPoint<double> *this)

{
  this->FaceIndex = -1;
  this->Phi = 1.7976931348623157e+308;
  this->ContactType = Unknown;
  return this;
}

