// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 1

// TImplicitObjectTransformed<double,3,1> @ 145f01a60

TImplicitObjectTransformed<double,3,1> * __thiscall
Chaos::TImplicitObjectTransformed<double,3,1>::TImplicitObjectTransformed<double,3,1>
          (TImplicitObjectTransformed<double,3,1> *this,
          TRefCountPtr<Chaos::FImplicitObject> *param_1,TRigidTransform<double,3> *param_2)

{
  FImplicitObject *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  TAABB<double,3> *pTVar6;
  undefined1 local_68 [48];
  TAABB<double,3> local_38;
  
  FImplicitObject::FImplicitObject((FImplicitObject *)this,2,'\x04');
  this->_padding_ = (longlong)&___7__TImplicitObjectTransformed_N_02_00_Chaos__6B_;
  (this->MObject).Reference = (FImplicitObject *)0x0;
  pFVar1 = param_1->Reference;
  (this->MObject).Reference = pFVar1;
  if (pFVar1 != (FImplicitObject *)0x0) {
    LOCK();
    *(int *)&pFVar1->_padding_ = (int)pFVar1->_padding_ + 1;
    UNLOCK();
  }
  uVar5 = *(undefined8 *)&param_2->field_0x8;
  *(undefined8 *)&this->MTransform = *(undefined8 *)param_2;
  *(undefined8 *)&(this->MTransform).field_0x8 = uVar5;
  uVar5 = *(undefined8 *)&param_2->field_0x18;
  *(undefined8 *)&(this->MTransform).field_0x10 = *(undefined8 *)&param_2->field_0x10;
  *(undefined8 *)&(this->MTransform).field_0x18 = uVar5;
  uVar5 = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&(this->MTransform).field_0x20 = *(undefined8 *)&param_2->field_0x20;
  *(undefined8 *)&(this->MTransform).field_0x28 = uVar5;
  uVar5 = *(undefined8 *)&param_2->field_0x38;
  *(undefined8 *)&(this->MTransform).field_0x30 = *(undefined8 *)&param_2->field_0x30;
  *(undefined8 *)&(this->MTransform).field_0x38 = uVar5;
  uVar2 = *(undefined4 *)&param_2->field_0x44;
  uVar3 = *(undefined4 *)&param_2->field_0x48;
  uVar4 = *(undefined4 *)&param_2->field_0x4c;
  *(undefined4 *)&(this->MTransform).field_0x40 = *(undefined4 *)&param_2->field_0x40;
  *(undefined4 *)&(this->MTransform).field_0x44 = uVar2;
  *(undefined4 *)&(this->MTransform).field_0x48 = uVar3;
  *(undefined4 *)&(this->MTransform).field_0x4c = uVar4;
  uVar2 = *(undefined4 *)&param_2->field_0x54;
  uVar3 = *(undefined4 *)&param_2->field_0x58;
  uVar4 = *(undefined4 *)&param_2->field_0x5c;
  *(undefined4 *)&(this->MTransform).field_0x50 = *(undefined4 *)&param_2->field_0x50;
  *(undefined4 *)&(this->MTransform).field_0x54 = uVar2;
  *(undefined4 *)&(this->MTransform).field_0x58 = uVar3;
  *(undefined4 *)&(this->MTransform).field_0x5c = uVar4;
  *(undefined8 *)&(this->MLocalBoundingBox).MMin = 0x7fefffffffffffff;
  *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x8 = 0x7fefffffffffffff;
  *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x10 = 0x7fefffffffffffff;
  *(undefined8 *)&(this->MLocalBoundingBox).MMax = 0xffefffffffffffff;
  *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x8 = 0xffefffffffffffff;
  *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x10 = 0xffefffffffffffff;
  pFVar1 = (this->MObject).Reference;
  pTVar6 = (TAABB<double,3> *)(**(code **)(pFVar1->_padding_ + 0x90))(pFVar1,local_68);
  pTVar6 = TAABB<double,3>::TransformedAABB(pTVar6,&local_38,param_2);
  uVar5 = *(undefined8 *)&(pTVar6->MMin).field_0x8;
  *(undefined8 *)&(this->MLocalBoundingBox).MMin = *(undefined8 *)&pTVar6->MMin;
  *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x8 = uVar5;
  *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x10 =
       *(undefined8 *)&(pTVar6->MMin).field_0x10;
  uVar5 = *(undefined8 *)&(pTVar6->MMax).field_0x8;
  *(undefined8 *)&(this->MLocalBoundingBox).MMax = *(undefined8 *)&pTVar6->MMax;
  *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x8 = uVar5;
  *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x10 =
       *(undefined8 *)&(pTVar6->MMax).field_0x10;
  pFVar1 = (this->MObject).Reference;
  *(bool *)((longlong)&this->_padding_ + 4) = pFVar1->bIsConvex;
  *(bool *)((longlong)&this->_padding_ + 5) = pFVar1->bDoCollide;
  return this;
}

