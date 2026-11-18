// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 16

// ~TPlane<float,3> @ 14373e0f0

void __thiscall Chaos::TPlane<float,3>::~TPlane<float,3>(TPlane<float,3> *this)

{
  this->_padding_ = (longlong)&___7__TPlane_M_02_Chaos__6B_;
  FImplicitObject::~FImplicitObject((FImplicitObject *)this);
  return;
}

// FindClosestIntersectionImp @ 14377b420

Pair<Chaos::TVector<double,3>,bool> * __thiscall
Chaos::TPlane<float,3>::FindClosestIntersectionImp
          (TPlane<float,3> *this,Pair<Chaos::TVector<double,3>,bool> *__return_storage_ptr__,
          TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3)

{
  TCorePlane<float,3>::FindClosestIntersection
            (&this->MPlaneConcrete,__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// GetRadius @ 143792a20

double __thiscall Chaos::TPlane<float,3>::GetRadius(TPlane<float,3> *this)

{
  return 0.0;
}

// GetTypeHash @ 143793260

uint __thiscall Chaos::TPlane<float,3>::GetTypeHash(TPlane<float,3> *this)

{
  uint uVar1;
  
  uVar1 = TCorePlane<float,3>::GetTypeHash(&this->MPlaneConcrete);
  return uVar1;
}

// PhiWithNormal @ 14379bd30

double __thiscall
Chaos::TPlane<float,3>::PhiWithNormal
          (TPlane<float,3> *this,TVector<double,3> *param_1,TVector<double,3> *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)&(this->MPlaneConcrete).MNormal.field_0x4;
  fVar2 = *(float *)&(this->MPlaneConcrete).MNormal.field_0x8;
  *(double *)param_2 = (double)*(float *)&(this->MPlaneConcrete).MNormal;
  *(double *)&param_2->field_0x8 = (double)fVar1;
  *(double *)&param_2->field_0x10 = (double)fVar2;
  return (double)*(float *)&(this->MPlaneConcrete).MNormal.field_0x4 *
         (*(double *)&param_1->field_0x8 - (double)*(float *)&(this->MPlaneConcrete).MX.field_0x4) +
         (*(double *)param_1 - (double)*(float *)&(this->MPlaneConcrete).MX) *
         (double)*(float *)&(this->MPlaneConcrete).MNormal +
         (*(double *)&param_1->field_0x10 - (double)*(float *)&(this->MPlaneConcrete).MX.field_0x8)
         * (double)*(float *)&(this->MPlaneConcrete).MNormal.field_0x8;
}

// Raycast @ 1437a07d0

bool __thiscall
Chaos::TPlane<float,3>::Raycast
          (TPlane<float,3> *this,TVector<double,3> *param_1,TVector<double,3> *param_2,
          double param_3,double param_4,double *param_5,TVector<double,3> *param_6,
          TVector<double,3> *param_7,int *param_8)

{
  bool bVar1;
  
  bVar1 = TCorePlane<float,3>::Raycast
                    (&this->MPlaneConcrete,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
  return bVar1;
}

// Serialize @ 1437ab300

void __thiscall Chaos::TPlane<float,3>::Serialize(TPlane<float,3> *this,FArchive *param_1)

{
  FArchive *pFVar1;
  
  FImplicitObject::SerializeImp((FImplicitObject *)this,param_1);
  pFVar1 = operator<<<3>(param_1,&(this->MPlaneConcrete).MX);
  operator<<<3>(pFVar1,&(this->MPlaneConcrete).MNormal);
  return;
}

// Serialize @ 1437ab340

void __thiscall Chaos::TPlane<float,3>::Serialize(TPlane<float,3> *this,FChaosArchive *param_1)

{
  FArchive *pFVar1;
  undefined1 local_res8 [8];
  
  (**(code **)(this->_padding_ + 0x118))(this,local_res8);
  FImplicitObject::SerializeImp((FImplicitObject *)this,(FArchive *)param_1);
  pFVar1 = operator<<<3>((FArchive *)param_1,&(this->MPlaneConcrete).MX);
  operator<<<3>(pFVar1,&(this->MPlaneConcrete).MNormal);
  return;
}

// PhiWithNormal @ 143962690

double __thiscall
Chaos::TPlane<double,3>::PhiWithNormal
          (TPlane<double,3> *this,TVector<double,3> *param_1,TVector<double,3> *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(this->MPlaneConcrete).MNormal.field_0x8;
  *(undefined8 *)param_2 = *(undefined8 *)&(this->MPlaneConcrete).MNormal;
  *(undefined8 *)&param_2->field_0x8 = uVar1;
  *(undefined8 *)&param_2->field_0x10 = *(undefined8 *)&(this->MPlaneConcrete).MNormal.field_0x10;
  return *(double *)&(this->MPlaneConcrete).MNormal.field_0x8 *
         (*(double *)&param_1->field_0x8 - *(double *)&(this->MPlaneConcrete).MX.field_0x8) +
         (*(double *)param_1 - *(double *)&(this->MPlaneConcrete).MX) *
         *(double *)&(this->MPlaneConcrete).MNormal +
         (*(double *)&param_1->field_0x10 - *(double *)&(this->MPlaneConcrete).MX.field_0x10) *
         *(double *)&(this->MPlaneConcrete).MNormal.field_0x10;
}

// ~TPlane<double,3> @ 143a39a10

void __thiscall Chaos::TPlane<double,3>::~TPlane<double,3>(TPlane<double,3> *this)

{
  this->_padding_ = (longlong)&___7__TPlane_N_02_Chaos__6B_;
  FImplicitObject::~FImplicitObject((FImplicitObject *)this);
  return;
}

// FindClosestIntersectionImp @ 143a67340

Pair<Chaos::TVector<double,3>,bool> * __thiscall
Chaos::TPlane<double,3>::FindClosestIntersectionImp
          (TPlane<double,3> *this,Pair<Chaos::TVector<double,3>,bool> *__return_storage_ptr__,
          TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3)

{
  TCorePlane<double,3>::FindClosestIntersection
            (&this->MPlaneConcrete,__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// GetRadius @ 143a6f640

double __thiscall Chaos::TPlane<double,3>::GetRadius(TPlane<double,3> *this)

{
  return 0.0;
}

// GetTypeHash @ 143a70570

uint __thiscall Chaos::TPlane<double,3>::GetTypeHash(TPlane<double,3> *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = FCrc::MemCrc_DEPRECATED(&(this->MPlaneConcrete).MNormal,0x18,0);
  uVar2 = FCrc::MemCrc_DEPRECATED(&this->MPlaneConcrete,0x18,0);
  uVar4 = uVar2 - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar4) - uVar1 ^ uVar4 << 8;
  uVar3 = (uVar1 - uVar2) - uVar4 ^ uVar2 >> 0xd;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xc;
  uVar1 = (uVar2 - uVar4) - uVar3 ^ uVar4 << 0x10;
  uVar2 = (uVar3 - uVar1) - uVar4 ^ uVar1 >> 5;
  uVar3 = (uVar4 - uVar2) - uVar1 ^ uVar2 >> 3;
  uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar3 << 10;
  return (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xf;
}

// Raycast @ 143a8a0a0

bool __thiscall
Chaos::TPlane<double,3>::Raycast
          (TPlane<double,3> *this,TVector<double,3> *param_1,TVector<double,3> *param_2,
          double param_3,double param_4,double *param_5,TVector<double,3> *param_6,
          TVector<double,3> *param_7,int *param_8)

{
  bool bVar1;
  
  bVar1 = TCorePlane<double,3>::Raycast
                    (&this->MPlaneConcrete,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
  return bVar1;
}

// Serialize @ 143a914b0

void __thiscall Chaos::TPlane<double,3>::Serialize(TPlane<double,3> *this,FArchive *param_1)

{
  FArchive *pFVar1;
  
  FImplicitObject::SerializeImp((FImplicitObject *)this,param_1);
  pFVar1 = SerializeReal<double,3>(param_1,&(this->MPlaneConcrete).MX);
  SerializeReal<double,3>(pFVar1,&(this->MPlaneConcrete).MNormal);
  return;
}

// Serialize @ 143a914f0

void __thiscall Chaos::TPlane<double,3>::Serialize(TPlane<double,3> *this,FChaosArchive *param_1)

{
  FArchive *pFVar1;
  undefined1 local_res8 [8];
  
  (**(code **)(this->_padding_ + 0x118))(this,local_res8);
  FImplicitObject::SerializeImp((FImplicitObject *)this,(FArchive *)param_1);
  pFVar1 = SerializeReal<double,3>((FArchive *)param_1,&(this->MPlaneConcrete).MX);
  SerializeReal<double,3>(pFVar1,&(this->MPlaneConcrete).MNormal);
  return;
}

