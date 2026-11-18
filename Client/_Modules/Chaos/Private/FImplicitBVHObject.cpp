// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 3

// FImplicitBVHObject @ 143b56630

FImplicitBVHObject * __thiscall
Chaos::Private::FImplicitBVHObject::FImplicitBVHObject
          (FImplicitBVHObject *this,TSerializablePtr<Chaos::FImplicitObject> *param_1,
          TVector<double,3> *param_2,TRotation<double,3> *param_3,TAABB<double,3> *param_4,
          int param_5,int param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  this->R[0] = (float)*(double *)param_3;
  this->R[1] = (float)*(double *)&param_3->field_0x8;
  this->R[2] = (float)*(double *)&param_3->field_0x10;
  this->R[3] = (float)*(double *)&param_3->field_0x18;
  dVar1 = *(double *)&param_2->field_0x8;
  dVar2 = *(double *)param_2;
  *(float *)&(this->X).field_0x8 = (float)*(double *)&param_2->field_0x10;
  *(float *)&(this->X).field_0x4 = (float)dVar1;
  *(float *)&this->X = (float)dVar2;
  dVar1 = *(double *)&(param_4->MMin).field_0x8;
  dVar2 = *(double *)&param_4->MMin;
  *(float *)&(this->Bounds).MMin.field_0x8 = (float)*(double *)&(param_4->MMin).field_0x10;
  *(float *)&(this->Bounds).MMin.field_0x4 = (float)dVar1;
  *(float *)&(this->Bounds).MMin = (float)dVar2;
  dVar1 = *(double *)&(param_4->MMax).field_0x10;
  dVar2 = *(double *)&(param_4->MMax).field_0x8;
  dVar3 = *(double *)&param_4->MMax;
  this->RootObjectIndex = param_5;
  *(float *)&(this->Bounds).MMax.field_0x8 = (float)dVar1;
  *(float *)&(this->Bounds).MMax.field_0x4 = (float)dVar2;
  *(float *)&(this->Bounds).MMax = (float)dVar3;
  (this->Geometry).Ptr = param_1->Ptr;
  this->ObjectIndex = param_6;
  return this;
}

// FImplicitBVHObject @ 143b56710

FImplicitBVHObject * __thiscall
Chaos::Private::FImplicitBVHObject::FImplicitBVHObject(FImplicitBVHObject *this)

{
  *(undefined4 *)&(this->Bounds).MMin = 0x7f7fffff;
  *(undefined4 *)&(this->Bounds).MMin.field_0x4 = 0x7f7fffff;
  *(undefined4 *)&(this->Bounds).MMin.field_0x8 = 0x7f7fffff;
  *(undefined4 *)&(this->Bounds).MMax = 0xff7fffff;
  *(undefined4 *)&(this->Bounds).MMax.field_0x4 = 0xff7fffff;
  *(undefined4 *)&(this->Bounds).MMax.field_0x8 = 0xff7fffff;
  (this->Geometry).Ptr = (FImplicitObject *)0x0;
  return this;
}

// Serialize @ 143b76dc0

FChaosArchive * __thiscall
Chaos::Private::FImplicitBVHObject::Serialize(FImplicitBVHObject *this,FChaosArchive *param_1)

{
  int *piVar1;
  byte *pbVar2;
  float *pfVar3;
  float *pfVar4;
  int *piVar5;
  
  FChaosArchive::SerializePtr<Chaos::FImplicitObject>(param_1,&this->Geometry);
  operator<<<3>((FArchive *)param_1,&this->X);
  pfVar3 = *(float **)param_1->_padding_;
  if ((float *)((undefined8 *)param_1->_padding_)[1] < pfVar3 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,this,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)this);
    }
  }
  else {
    this->R[0] = *pfVar3;
    *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
  }
  pfVar3 = this->R + 1;
  pbVar2 = (byte *)((longlong)&param_1->_padding_ + 2);
  pfVar4 = *(float **)param_1->_padding_;
  if ((float *)((undefined8 *)param_1->_padding_)[1] < pfVar4 + 1) {
    if ((*pbVar2 & 1) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,pfVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)pfVar3);
    }
  }
  else {
    *pfVar3 = *pfVar4;
    *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
  }
  pfVar3 = this->R + 2;
  pfVar4 = *(float **)param_1->_padding_;
  if ((float *)((undefined8 *)param_1->_padding_)[1] < pfVar4 + 1) {
    if ((*pbVar2 & 1) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,pfVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)pfVar3);
    }
  }
  else {
    *pfVar3 = *pfVar4;
    *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
  }
  pfVar3 = this->R + 3;
  pfVar4 = *(float **)param_1->_padding_;
  if ((float *)((undefined8 *)param_1->_padding_)[1] < pfVar4 + 1) {
    if ((*pbVar2 & 1) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,pfVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)pfVar3);
    }
  }
  else {
    *pfVar3 = *pfVar4;
    *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
  }
  piVar1 = &this->RootObjectIndex;
  piVar5 = *(int **)param_1->_padding_;
  if (piVar5 + 1 <= (int *)((undefined8 *)param_1->_padding_)[1]) {
    *piVar1 = *piVar5;
    *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
    return param_1;
  }
  if ((*pbVar2 & 1) == 0) {
    (**(code **)(param_1->_padding_ + 0x188))(param_1,piVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)piVar1);
  return param_1;
}

