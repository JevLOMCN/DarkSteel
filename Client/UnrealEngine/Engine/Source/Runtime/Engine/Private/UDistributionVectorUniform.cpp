// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 32

// StaticClass @ 147268480

UClass * __cdecl UDistributionVectorUniform::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDistributionVectorUniform.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DistributionVectorUniform",
               &Z_Registration_Info_UClass_UDistributionVectorUniform.InnerSingleton,
               StaticRegisterNativesUDistributionVectorUniform,0x78,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDistributionVectorUniform>,
               InternalVTableHelperCtorCaller<UDistributionVectorUniform>,local_res8,
               UDistributionVector::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDistributionVectorUniform.InnerSingleton;
}

// UDistributionVectorUniform @ 14726d130

UDistributionVectorUniform * __thiscall
UDistributionVectorUniform::UDistributionVectorUniform
          (UDistributionVectorUniform *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FCurveEdInterface__;
  return this;
}

// ~UDistributionVectorUniform @ 14726d7b0

void __thiscall
UDistributionVectorUniform::~UDistributionVectorUniform(UDistributionVectorUniform *this)

{
  this->_padding_ = (longlong)&UDistribution::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UDistribution::_vftable__for__FCurveEdInterface__;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1472701a0

UClass * __cdecl UDistributionVectorUniform::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDistributionVectorUniform.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DistributionVectorUniform",
               &Z_Registration_Info_UClass_UDistributionVectorUniform.InnerSingleton,
               StaticRegisterNativesUDistributionVectorUniform,0x78,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDistributionVectorUniform>,
               InternalVTableHelperCtorCaller<UDistributionVectorUniform>,local_res8,
               UDistributionVector::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDistributionVectorUniform.InnerSingleton;
}

// StaticRegisterNativesUDistributionVectorUniform @ 147270b20

void __cdecl UDistributionVectorUniform::StaticRegisterNativesUDistributionVectorUniform(void)

{
  return;
}

// UDistributionVectorUniform @ 147b3acf0

UDistributionVectorUniform * __thiscall
UDistributionVectorUniform::UDistributionVectorUniform
          (UDistributionVectorUniform *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 3;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FCurveEdInterface__;
  this->MirrorFlags[0] = '\x01';
  this->MirrorFlags[1] = '\x01';
  this->MirrorFlags[2].Value = '\x01';
  this->bUseExtremes = 0;
  return this;
}

// CreateNewKey @ 147b4e190

int __thiscall
UDistributionVectorUniform::CreateNewKey(UDistributionVectorUniform *this,float param_1)

{
  return 0;
}

// DeleteKey @ 147b50080

void __thiscall UDistributionVectorUniform::DeleteKey(UDistributionVectorUniform *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0xe33,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// EvalSub @ 147b601e0

float __thiscall
UDistributionVectorUniform::EvalSub(UDistributionVectorUniform *this,int param_1,float param_2)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147b601e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)(this->_padding_ + 0x20))(this,param_1,0);
  return fVar1;
}

// GetInRange @ 147b65f00

void __thiscall
UDistributionVectorUniform::GetInRange
          (UDistributionVectorUniform *this,float *param_1,float *param_2)

{
  *param_1 = 0.0;
  *param_2 = 0.0;
  return;
}

// GetKeyColor @ 147b66c30

FColor __thiscall
UDistributionVectorUniform::GetKeyColor
          (UDistributionVectorUniform *this,int param_1,int param_2,FColor *param_3)

{
  code *pcVar1;
  bool bVar2;
  FColor_u_0 FVar3;
  undefined4 in_register_00000014;
  FColor_u_0 *pFVar4;
  
  pFVar4 = (FColor_u_0 *)CONCAT44(in_register_00000014,param_1);
  if ((5 < (uint)param_2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SubIndex >= 0 && SubIndex < 6",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                         ,0xdc8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar3.Bits = (*pcVar1)();
    return (FColor_u_0)(FColor_u_0)FVar3._s_0;
  }
  if (((int)param_3 != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("KeyIndex == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                         ,0xdc9,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar3.Bits = (*pcVar1)();
    return (FColor_u_0)(FColor_u_0)FVar3._s_0;
  }
  if (param_2 == 0) {
    pFVar4->Bits = 0xff800000;
    return (FColor)(FColor_u_0)param_1;
  }
  FVar3 = FColor::Red.field0_0x0;
  if (param_2 != 1) {
    if (param_2 == 2) {
      pFVar4->Bits = 0xff008000;
      return (FColor)(FColor_u_0)param_1;
    }
    FVar3 = FColor::Green.field0_0x0;
    if ((param_2 != 3) && (FVar3 = FColor::Blue.field0_0x0, param_2 == 4)) {
      pFVar4->Bits = 0xff000080;
      return (FColor)(FColor_u_0)param_1;
    }
  }
  pFVar4->_s_0 = (FColor_u_0_s_0)FVar3;
  return (FColor)(FColor_u_0)param_1;
}

// GetKeyIn @ 147b67100

float __thiscall UDistributionVectorUniform::GetKeyIn(UDistributionVectorUniform *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (param_1 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0xd92,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  return 0.0;
}

// GetKeyInterpMode @ 147b674c0

EInterpCurveMode __thiscall
UDistributionVectorUniform::GetKeyInterpMode(UDistributionVectorUniform *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  EInterpCurveMode EVar3;
  
  if (param_1 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0xe1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  return CIM_Constant;
}

// GetKeyOut @ 147b67b70

float __thiscall
UDistributionVectorUniform::GetKeyOut(UDistributionVectorUniform *this,int param_1,int param_2)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  code *pcVar5;
  bool bVar6;
  float fVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dStack_18;
  
  if ((5 < (uint)param_1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SubIndex >= 0 && SubIndex < 6",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                         ,0xd98,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    fVar7 = (float)(*pcVar5)();
    return fVar7;
  }
  if ((param_2 != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("KeyIndex == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                         ,0xd99,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    fVar7 = (float)(*pcVar5)();
    return fVar7;
  }
  dVar1 = (double)this->_padding_;
  uVar2 = this->_padding_;
  uVar3 = this->_padding_;
  cVar4 = *(char *)((longlong)&(this->Max).field0_0x0 + 0xd);
  dVar8 = (double)uVar2;
  if ((cVar4 != '\0') && (dVar8 = (double)this->_padding_, cVar4 == '\x02')) {
    dVar8 = (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) ^
                             __xmm_80000000000000008000000000000000._4_4_,
                             (uint)uVar2 ^ (uint)__xmm_80000000000000008000000000000000);
  }
  cVar4 = *(char *)((longlong)&(this->Max).field0_0x0 + 0xe);
  uVar9 = (uint)uVar3;
  uVar10 = (uint)((ulonglong)uVar3 >> 0x20);
  if (cVar4 != '\0') {
    if (cVar4 == '\x02') {
      uVar9 = uVar9 ^ (uint)__xmm_80000000000000008000000000000000;
      uVar10 = uVar10 ^ __xmm_80000000000000008000000000000000._4_4_;
    }
    else {
      uVar9 = (uint)this->_padding_;
      uVar10 = (uint)((ulonglong)this->_padding_ >> 0x20);
    }
  }
  cVar4 = *(char *)((longlong)&(this->Max).field0_0x0 + 0xf);
  dVar11 = dVar1;
  if ((cVar4 != '\0') && (dVar11 = (this->Max).field0_0x0._s_0.X, cVar4 == '\x02')) {
    dVar11 = (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^
                              __xmm_80000000000000008000000000000000._4_4_,
                              SUB84(dVar1,0) ^ (uint)__xmm_80000000000000008000000000000000);
  }
  cVar4 = *(char *)((longlong)&(this->Max).field0_0x0 + 0xc);
  dVar12 = dVar11;
  if (cVar4 != '\x01') {
    dVar13 = dVar8;
    if (cVar4 == '\x02') goto LAB_147b67c97;
    if (cVar4 == '\x03') {
      dVar13 = (double)CONCAT44(uVar10,uVar9);
      goto LAB_147b67c97;
    }
    dVar12 = dVar8;
    dVar13 = dVar11;
    if (cVar4 != '\x04') goto LAB_147b67c97;
  }
  uVar9 = SUB84(dVar8,0);
  uVar10 = (uint)((ulonglong)dVar8 >> 0x20);
  dVar13 = dVar12;
LAB_147b67c97:
  if (param_1 == 0) {
    return (float)dVar8;
  }
  if (param_1 == 1) {
    return (float)(double)uVar2;
  }
  if (param_1 == 2) {
    return (float)(double)CONCAT44(uVar10,uVar9);
  }
  if (param_1 == 3) {
    return (float)(double)uVar3;
  }
  if (param_1 == 4) {
    return (float)dVar13;
  }
  return (float)dVar1;
}

// GetLockFlag @ 147b67fb0

uchar __thiscall UDistributionVectorUniform::GetLockFlag(UDistributionVectorUniform *this)

{
  return (this->LockedAxes).Value;
}

// GetMaxValue @ 147b67fc0

TVector<double> * __thiscall
UDistributionVectorUniform::GetMaxValue
          (UDistributionVectorUniform *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  uchar uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  
  uVar2 = (this->LockedAxes).Value;
  dVar1 = (this->Max).field0_0x0._s_0.Z;
  dVar4 = (this->Max).field0_0x0._s_0.X;
  dVar5 = (this->Max).field0_0x0._s_0.Y;
  dVar3 = dVar1;
  if (uVar2 != '\0') {
    if (uVar2 == '\x01') {
      fVar6 = (float)dVar4;
      fVar7 = (float)dVar1;
      goto LAB_147b68059;
    }
    dVar3 = dVar4;
    if (uVar2 != '\x02') {
      if (uVar2 == '\x03') {
        fVar6 = (float)dVar5;
        fVar7 = fVar6;
        goto LAB_147b68059;
      }
      dVar3 = dVar1;
      if (uVar2 == '\x04') {
        fVar6 = (float)dVar4;
        fVar7 = fVar6;
        goto LAB_147b68059;
      }
    }
  }
  fVar6 = (float)dVar5;
  fVar7 = (float)dVar3;
LAB_147b68059:
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(float)dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)fVar7;
  return __return_storage_ptr__;
}

// GetMinValue @ 147b69210

TVector<double> * __thiscall
UDistributionVectorUniform::GetMinValue
          (UDistributionVectorUniform *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  undefined1 auVar2 [16];
  uchar uVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  
  dVar1 = (this->Max).field0_0x0._s_0.Z;
  dVar6 = (this->Min).field0_0x0._s_0.X;
  uVar3 = this->MirrorFlags[0].Value;
  auVar2 = *(undefined1 (*) [16])&(this->Max).field0_0x0;
  uVar7 = (uint)__xmm_80000000000000008000000000000000;
  uVar8 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  if (uVar3 == '\0') {
    dVar6 = auVar2._0_8_;
  }
  else if (uVar3 == '\x02') {
    dVar6 = (double)CONCAT44(auVar2._4_4_ ^ uVar8,auVar2._0_4_ ^ uVar7);
  }
  uVar3 = this->MirrorFlags[1].Value;
  dVar9 = auVar2._8_8_;
  if ((uVar3 != '\0') && (dVar9 = (this->Min).field0_0x0._s_0.Y, uVar3 == '\x02')) {
    dVar9 = (double)CONCAT44(auVar2._12_4_ ^ uVar8,auVar2._8_4_ ^ uVar7);
  }
  uVar3 = this->MirrorFlags[2].Value;
  dVar10 = dVar1;
  if ((uVar3 != '\0') && (dVar10 = (this->Min).field0_0x0._s_0.Z, uVar3 == '\x02')) {
    dVar10 = (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^ uVar8,SUB84(dVar1,0) ^ uVar7);
  }
  uVar3 = (this->LockedAxes).Value;
  dVar1 = dVar10;
  if (uVar3 != '\0') {
    if (uVar3 == '\x01') {
      fVar4 = (float)dVar6;
      fVar5 = (float)dVar10;
      goto LAB_147b69308;
    }
    if (uVar3 == '\x02') {
      fVar5 = (float)dVar6;
      fVar4 = (float)dVar9;
      goto LAB_147b69308;
    }
    dVar1 = dVar9;
    if ((uVar3 != '\x03') && (dVar1 = dVar10, uVar3 == '\x04')) {
      fVar4 = (float)dVar6;
      fVar5 = fVar4;
      goto LAB_147b69308;
    }
  }
  fVar5 = (float)dVar1;
  fVar4 = (float)dVar9;
LAB_147b69308:
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(float)dVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)fVar5;
  return __return_storage_ptr__;
}

// GetNumKeys @ 147b69540

int __thiscall UDistributionVectorUniform::GetNumKeys(UDistributionVectorUniform *this)

{
  return 1;
}

// GetNumSubCurves @ 147b69600

int __thiscall UDistributionVectorUniform::GetNumSubCurves(UDistributionVectorUniform *this)

{
  char cVar1;
  
  cVar1 = *(char *)((longlong)&(this->Max).field0_0x0 + 0xc);
  if (((cVar1 != '\x01') && (cVar1 != '\x02')) && (cVar1 != '\x03')) {
    if (cVar1 != '\x04') {
      return 6;
    }
    return 2;
  }
  return 4;
}

// GetOperation @ 147b699c0

ERawDistributionOperation __thiscall
UDistributionVectorUniform::GetOperation(UDistributionVectorUniform *this)

{
  if ((((this->Max).field0_0x0._s_0.X == (this->Min).field0_0x0._s_0.X) &&
      ((this->Max).field0_0x0._s_0.Y == (this->Min).field0_0x0._s_0.Y)) &&
     ((this->Max).field0_0x0._s_0.Z == (this->Min).field0_0x0._s_0.Z)) {
    return RDO_None;
  }
  return this->bUseExtremes + RDO_Random;
}

// GetOutRange @ 147b69d70

void __thiscall
UDistributionVectorUniform::GetOutRange
          (UDistributionVectorUniform *this,float *param_1,float *param_2)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  char cVar5;
  uint uVar6;
  double dVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dStack_18;
  
  dVar1 = (double)this->_padding_;
  uVar3 = this->_padding_;
  dVar4 = (double)this->_padding_;
  cVar5 = *(char *)((longlong)&(this->Max).field0_0x0 + 0xd);
  uVar2 = *(undefined8 *)&(this->Max).field0_0x0;
  dVar15 = (double)uVar3;
  if ((cVar5 != '\0') && (dVar15 = (double)this->_padding_, cVar5 == '\x02')) {
    dVar15 = (double)CONCAT44((uint)((ulonglong)uVar3 >> 0x20) ^
                              __xmm_80000000000000008000000000000000._4_4_,
                              (uint)uVar3 ^ (uint)__xmm_80000000000000008000000000000000);
  }
  cVar5 = *(char *)((longlong)&(this->Max).field0_0x0 + 0xe);
  dVar7 = dVar4;
  if ((cVar5 != '\0') && (dVar7 = (double)this->_padding_, cVar5 == '\x02')) {
    dVar7 = (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) ^
                             __xmm_80000000000000008000000000000000._4_4_,
                             SUB84(dVar4,0) ^ (uint)__xmm_80000000000000008000000000000000);
  }
  cVar5 = *(char *)((longlong)&(this->Max).field0_0x0 + 0xf);
  uVar9 = SUB84(dVar1,0);
  uVar11 = (uint)((ulonglong)dVar1 >> 0x20);
  if (cVar5 != '\0') {
    if (cVar5 == '\x02') {
      uVar9 = uVar9 ^ (uint)__xmm_80000000000000008000000000000000;
      uVar11 = uVar11 ^ __xmm_80000000000000008000000000000000._4_4_;
    }
    else {
      uVar9 = (uint)uVar2;
      uVar11 = (uint)((ulonglong)uVar2 >> 0x20);
    }
  }
  cVar5 = *(char *)((longlong)&(this->Max).field0_0x0 + 0xc);
  uVar6 = uVar9;
  uVar8 = uVar11;
  dVar14 = dVar1;
  if (cVar5 == '\0') goto LAB_147b69e37;
  uVar6 = SUB84(dVar15,0);
  uVar8 = (uint)((ulonglong)dVar15 >> 0x20);
  uVar10 = uVar9;
  uVar12 = uVar11;
  dVar13 = dVar1;
  if (cVar5 != '\x01') {
    dVar14 = (double)uVar3;
    if (cVar5 == '\x02') goto LAB_147b69e37;
    if (cVar5 == '\x03') {
      uVar6 = SUB84(dVar7,0);
      uVar8 = (uint)((ulonglong)dVar7 >> 0x20);
      dVar14 = dVar4;
      goto LAB_147b69e37;
    }
    uVar10 = uVar6;
    uVar6 = uVar9;
    uVar12 = uVar8;
    uVar8 = uVar11;
    dVar13 = (double)uVar3;
    dVar14 = dVar1;
    if (cVar5 != '\x04') goto LAB_147b69e37;
  }
  dVar7 = dVar15;
  uVar6 = uVar10;
  uVar8 = uVar12;
  dVar4 = (double)uVar3;
  dVar14 = dVar13;
LAB_147b69e37:
  if (dVar15 <= dVar7) {
    dVar7 = dVar15;
  }
  if (dVar4 <= (double)uVar3) {
    dVar4 = (double)uVar3;
  }
  if ((double)CONCAT44(uVar8,uVar6) <= dVar7) {
    dVar7 = (double)CONCAT44(uVar8,uVar6);
  }
  if (dVar4 <= dVar14) {
    dVar4 = dVar14;
  }
  *param_1 = (float)dVar7;
  *param_2 = (float)dVar4;
  return;
}

// GetRange @ 147b6d080

void __thiscall
UDistributionVectorUniform::GetRange
          (UDistributionVectorUniform *this,TVector<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  
  dVar1 = (this->Min).field0_0x0._s_0.Y;
  (param_1->field0_0x0)._s_0.X = (this->Min).field0_0x0._s_0.X;
  (param_1->field0_0x0)._s_0.Y = dVar1;
  (param_1->field0_0x0)._s_0.Z = (this->Min).field0_0x0._s_0.Z;
  dVar1 = (this->Max).field0_0x0._s_0.Y;
  (param_2->field0_0x0)._s_0.X = (this->Max).field0_0x0._s_0.X;
  (param_2->field0_0x0)._s_0.Y = dVar1;
  (param_2->field0_0x0)._s_0.Z = (this->Max).field0_0x0._s_0.Z;
  return;
}

// GetSubCurveButtonColor @ 147b6fe00

FColor __thiscall
UDistributionVectorUniform::GetSubCurveButtonColor
          (UDistributionVectorUniform *this,int param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FColor_u_0 FVar4;
  uint uVar5;
  FColor_u_0 FVar6;
  FColor_u_0 FVar7;
  undefined4 in_register_00000014;
  FColor_u_0 *pFVar8;
  int iVar9;
  undefined7 in_register_00000081;
  char in_R9B;
  
  pFVar8 = (FColor_u_0 *)CONCAT44(in_register_00000014,param_1);
  iVar9 = (int)CONCAT71(in_register_00000081,param_2);
  iVar3 = (**(code **)(this->_padding_ + 8))();
  if ((iVar9 < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SubCurveIndex >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                         ,0xd57,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar4.Bits = (*pcVar1)();
    return (FColor_u_0)(FColor_u_0)FVar4._s_0;
  }
  if ((iVar3 <= iVar9) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SubCurveIndex < SubCurves",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                         ,0xd58,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar4.Bits = (*pcVar1)();
    return (FColor_u_0)(FColor_u_0)FVar4._s_0;
  }
  bVar2 = (iVar3 - 4U & 0xfffffffd) != 0;
  switch(iVar9) {
  case 0:
    FVar4 = FColor::Red.field0_0x0;
    if (in_R9B != '\0') {
      FVar4.Bits = 0xff200000;
    }
    pFVar8->_s_0 = (FColor_u_0_s_0)FVar4;
    break;
  case 1:
    if (bVar2) {
      FVar6 = FColor::Green.field0_0x0;
      if (in_R9B != '\0') {
        FVar6._0_1_ = '\0';
        FVar6._1_1_ = ' ';
        FVar6._2_1_ = '\0';
        FVar6._3_1_ = 0xff;
      }
      pFVar8->_s_0 = (FColor_u_0_s_0)FVar6;
    }
    else {
      uVar5 = 0xff1c0000;
      if (in_R9B == '\0') {
        uVar5 = 0xffc40000;
      }
      pFVar8->Bits = uVar5;
    }
    break;
  case 2:
    if (!bVar2) {
      FVar4 = FColor::Green.field0_0x0;
      if (in_R9B != '\0') {
        FVar4._0_1_ = '\0';
        FVar4._1_1_ = ' ';
        FVar4._2_1_ = '\0';
        FVar4._3_1_ = 0xff;
      }
      pFVar8->_s_0 = (FColor_u_0_s_0)FVar4;
      return (FColor)(FColor_u_0)param_1;
    }
  case 4:
    FVar7 = FColor::Blue.field0_0x0;
    if (in_R9B != '\0') {
      FVar7._0_1_ = ' ';
      FVar7._1_1_ = '\0';
      FVar7._2_1_ = '\0';
      FVar7._3_1_ = 0xff;
    }
    pFVar8->_s_0 = (FColor_u_0_s_0)FVar7;
    break;
  case 3:
    uVar5 = 0xff001c00;
    if (in_R9B == '\0') {
      uVar5 = 0xff00c400;
    }
    pFVar8->Bits = uVar5;
    break;
  case 5:
    uVar5 = 0xff00001c;
    if (in_R9B == '\0') {
      uVar5 = 0xff0000c4;
    }
    pFVar8->Bits = uVar5;
    break;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0xd89,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar4.Bits = (*pcVar1)();
      return (FColor_u_0)(FColor_u_0)FVar4._s_0;
    }
  }
  return (FColor)(FColor_u_0)param_1;
}

// GetTangents @ 147b708f0

void __thiscall
UDistributionVectorUniform::GetTangents
          (UDistributionVectorUniform *this,int param_1,int param_2,float *param_3,float *param_4)

{
  code *pcVar1;
  bool bVar2;
  
  if (5 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SubIndex >= 0 && SubIndex < 6",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0xe21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0xe22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *param_3 = 0.0;
  *param_4 = 0.0;
  return;
}

// GetValue @ 147b72180

TVector<double> * __thiscall
UDistributionVectorUniform::GetValue
          (UDistributionVectorUniform *this,TVector<double> *__return_storage_ptr__,float param_1,
          UObject *param_2,int param_3,FRandomStream *param_4)

{
  double dVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  uchar uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  float fVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  double dStack_88;
  
  fVar15 = __real_3f800000;
  dVar1 = (this->Max).field0_0x0._s_0.Z;
  uVar9 = *(undefined8 *)&(this->Min).field0_0x0;
  uVar10 = *(undefined8 *)((longlong)&(this->Min).field0_0x0 + 8);
  auVar3 = *(undefined1 (*) [16])&(this->Max).field0_0x0;
  uVar16 = auVar3._0_4_;
  uVar18 = auVar3._4_4_;
  uVar2 = *(undefined8 *)((longlong)&(this->Min).field0_0x0 + 0x10);
  uVar4 = this->MirrorFlags[0].Value;
  uVar12 = (uint)__xmm_80000000000000008000000000000000;
  uVar13 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  if (uVar4 == '\x01') {
    uVar16 = (uint)uVar9;
    uVar18 = (uint)((ulonglong)uVar9 >> 0x20);
  }
  else if (uVar4 == '\x02') {
    uVar16 = uVar16 ^ uVar12;
    uVar18 = uVar18 ^ uVar13;
  }
  dVar5 = (double)CONCAT44(uVar18,uVar16);
  uVar4 = this->MirrorFlags[1].Value;
  dStack_88 = auVar3._8_8_;
  uVar19 = auVar3._8_4_;
  uVar20 = auVar3._12_4_;
  if (uVar4 == '\x01') {
    uVar19 = (uint)uVar10;
    uVar20 = (uint)((ulonglong)uVar10 >> 0x20);
  }
  else if (uVar4 == '\x02') {
    uVar19 = uVar19 ^ uVar12;
    uVar20 = uVar20 ^ uVar13;
  }
  uVar4 = this->MirrorFlags[2].Value;
  uVar21 = SUB84(dVar1,0);
  uVar22 = (uint)((ulonglong)dVar1 >> 0x20);
  if (uVar4 == '\x01') {
    uVar21 = (uint)uVar2;
    uVar22 = (uint)((ulonglong)uVar2 >> 0x20);
  }
  else if (uVar4 == '\x02') {
    uVar21 = uVar21 ^ uVar12;
    uVar22 = uVar22 ^ uVar13;
  }
  dVar7 = (double)CONCAT44(uVar22,uVar21);
  bVar11 = true;
  if (this->bUseExtremes != 0) {
    if (param_3 == 0) {
      if (param_4 == (FRandomStream *)0x0) {
        fVar14 = FGenericPlatformMath::SRand();
      }
      else {
        uVar12 = param_4->Seed * 0xbb38435 + 0x3619636b;
        param_4->Seed = uVar12;
        fVar14 = (float)(uVar12 >> 9 | 0x3f800000) - fVar15;
      }
      if (__real_3f000000 < fVar14) {
        bVar11 = false;
      }
    }
    else {
      bVar11 = true;
      if (0 < param_3) {
        bVar11 = false;
      }
    }
  }
  uVar4 = (this->LockedAxes).Value;
  dVar8 = auVar3._0_8_;
  if (uVar4 != '\0') {
    if (uVar4 == '\x01') {
      if (this->bUseExtremes == 0) {
        if (param_4 == (FRandomStream *)0x0) {
          fVar15 = FGenericPlatformMath::SRand();
          dVar5 = ((double)CONCAT44(uVar18,uVar16) - dVar8) * (double)fVar15;
          fVar15 = FGenericPlatformMath::SRand();
        }
        else {
          uVar12 = param_4->Seed * 0xbb38435 + 0x3619636b;
          param_4->Seed = uVar12;
          uVar13 = param_4->Seed * 0xbb38435 + 0x3619636b;
          param_4->Seed = uVar13;
          dVar5 = (double)((float)(uVar12 >> 9 | 0x3f800000) - fVar15) *
                  ((double)CONCAT44(uVar18,uVar16) - dVar8);
          fVar15 = (float)(uVar13 >> 9 | 0x3f800000) - fVar15;
        }
        fVar14 = (float)(dVar5 + dVar8);
        fVar17 = (float)(((double)CONCAT44(uVar22,uVar21) - dVar1) * (double)fVar15 + dVar1);
        fVar15 = fVar14;
      }
      else if (bVar11) {
        fVar14 = (float)(double)CONCAT44(uVar18,uVar16);
        fVar17 = (float)(double)CONCAT44(uVar22,uVar21);
        fVar15 = fVar14;
      }
      else {
        fVar14 = (float)dVar8;
        fVar17 = (float)dVar1;
        fVar15 = fVar14;
      }
      goto LAB_147b726d4;
    }
    if (uVar4 == '\x02') {
      if (this->bUseExtremes == 0) {
        if (param_4 == (FRandomStream *)0x0) {
          fVar15 = FGenericPlatformMath::SRand();
          dVar1 = ((double)CONCAT44(uVar18,uVar16) - dVar8) * (double)fVar15;
          fVar15 = FGenericPlatformMath::SRand();
        }
        else {
          uVar12 = param_4->Seed * 0xbb38435 + 0x3619636b;
          param_4->Seed = uVar12;
          uVar13 = param_4->Seed * 0xbb38435 + 0x3619636b;
          param_4->Seed = uVar13;
          dVar1 = (double)((float)(uVar12 >> 9 | 0x3f800000) - fVar15) *
                  ((double)CONCAT44(uVar18,uVar16) - dVar8);
          fVar15 = (float)(uVar13 >> 9 | 0x3f800000) - fVar15;
        }
        fVar17 = (float)(dVar1 + dVar8);
        fVar14 = fVar17;
        fVar15 = (float)(((double)CONCAT44(uVar20,uVar19) - dStack_88) * (double)fVar15 + dStack_88)
        ;
      }
      else if (bVar11) {
        fVar17 = (float)(double)CONCAT44(uVar18,uVar16);
        fVar14 = fVar17;
        fVar15 = (float)(double)CONCAT44(uVar20,uVar19);
      }
      else {
        fVar17 = (float)dVar8;
        fVar14 = fVar17;
        fVar15 = (float)dStack_88;
      }
      goto LAB_147b726d4;
    }
    if (uVar4 == '\x03') {
      if (this->bUseExtremes == 0) {
        if (param_4 == (FRandomStream *)0x0) {
          fVar15 = FGenericPlatformMath::SRand();
          dVar1 = ((double)CONCAT44(uVar18,uVar16) - dVar8) * (double)fVar15;
          fVar15 = FGenericPlatformMath::SRand();
        }
        else {
          uVar12 = param_4->Seed * 0xbb38435 + 0x3619636b;
          param_4->Seed = uVar12;
          uVar13 = param_4->Seed * 0xbb38435 + 0x3619636b;
          param_4->Seed = uVar13;
          dVar1 = (double)((float)(uVar12 >> 9 | 0x3f800000) - fVar15) *
                  ((double)CONCAT44(uVar18,uVar16) - dVar8);
          fVar15 = (float)(uVar13 >> 9 | 0x3f800000) - fVar15;
        }
        fVar17 = (float)(((double)CONCAT44(uVar20,uVar19) - dStack_88) * (double)fVar15 + dStack_88)
        ;
        fVar14 = (float)(dVar1 + dVar8);
        fVar15 = fVar17;
      }
      else if (bVar11) {
        fVar17 = (float)(double)CONCAT44(uVar20,uVar19);
        fVar14 = (float)(double)CONCAT44(uVar18,uVar16);
        fVar15 = fVar17;
      }
      else {
        fVar17 = (float)dStack_88;
        fVar14 = (float)dVar8;
        fVar15 = fVar17;
      }
      goto LAB_147b726d4;
    }
    if (uVar4 == '\x04') {
      if (this->bUseExtremes == 0) {
        if (param_4 == (FRandomStream *)0x0) {
          fVar15 = FGenericPlatformMath::SRand();
        }
        else {
          uVar12 = param_4->Seed * 0xbb38435 + 0x3619636b;
          param_4->Seed = uVar12;
          fVar15 = (float)(uVar12 >> 9 | 0x3f800000) - fVar15;
        }
        dVar5 = ((double)CONCAT44(uVar18,uVar16) - dVar8) * (double)fVar15 + dVar8;
      }
      else if (!bVar11) {
        fVar17 = (float)dVar8;
        fVar14 = fVar17;
        fVar15 = fVar17;
        goto LAB_147b726d4;
      }
      fVar17 = (float)dVar5;
      fVar14 = fVar17;
      fVar15 = fVar17;
      goto LAB_147b726d4;
    }
  }
  if (this->bUseExtremes == 0) {
    if (param_4 == (FRandomStream *)0x0) {
      fVar15 = FGenericPlatformMath::SRand();
      dVar5 = ((double)CONCAT44(uVar18,uVar16) - dVar8) * (double)fVar15;
      fVar15 = FGenericPlatformMath::SRand();
      dVar6 = ((double)CONCAT44(uVar20,uVar19) - dStack_88) * (double)fVar15;
      fVar15 = FGenericPlatformMath::SRand();
    }
    else {
      uVar12 = param_4->Seed * 0xbb38435 + 0x3619636b;
      param_4->Seed = uVar12;
      uVar13 = param_4->Seed * 0xbb38435 + 0x3619636b;
      param_4->Seed = uVar13;
      dVar5 = (double)((float)(uVar12 >> 9 | 0x3f800000) - fVar15) *
              ((double)CONCAT44(uVar18,uVar16) - dVar8);
      uVar16 = param_4->Seed * 0xbb38435 + 0x3619636b;
      param_4->Seed = uVar16;
      dVar6 = (double)((float)(uVar13 >> 9 | 0x3f800000) - fVar15) *
              ((double)CONCAT44(uVar20,uVar19) - dStack_88);
      fVar15 = (float)(uVar16 >> 9 | 0x3f800000) - fVar15;
    }
    dVar5 = dVar5 + dVar8;
    dVar6 = dVar6 + dStack_88;
    dVar7 = ((double)CONCAT44(uVar22,uVar21) - dVar1) * (double)fVar15 + dVar1;
  }
  else {
    if (!bVar11) {
      fVar17 = (float)dVar1;
      fVar14 = (float)dVar8;
      fVar15 = (float)dStack_88;
      goto LAB_147b726d4;
    }
    dVar5 = (double)CONCAT44(uVar18,uVar16);
    dVar6 = (double)CONCAT44(uVar20,uVar19);
  }
  fVar17 = (float)dVar7;
  fVar14 = (float)dVar5;
  fVar15 = (float)dVar6;
LAB_147b726d4:
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)fVar14;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar15;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)fVar17;
  return __return_storage_ptr__;
}

// InitializeRawEntry @ 147b775e0

uint __thiscall
UDistributionVectorUniform::InitializeRawEntry
          (UDistributionVectorUniform *this,float param_1,float *param_2)

{
  undefined4 in_XMM1_Db;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  (**(code **)(this->_padding_ + 0x2e8))(this,CONCAT44(in_XMM1_Db,param_1));
  (**(code **)(this->_padding_ + 0x2f0))(this,&local_20);
  *param_2 = (float)local_38;
  param_2[1] = (float)local_30;
  param_2[2] = (float)local_28;
  param_2[3] = (float)local_20;
  param_2[4] = (float)local_18;
  param_2[5] = (float)local_10;
  return 6;
}

// PostInitProperties @ 147b7da30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UDistributionVectorUniform::PostInitProperties(UDistributionVectorUniform *this)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  UClass *pUVar6;
  
  UObject::PostInitProperties((UObject *)this);
  if (((uint)this->_padding_ >> 10 & 1) != 0) {
    lVar2 = this->_padding_;
    pUVar6 = Z_Construct_UClass_UParticleModule_NoRegister();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) {
      lVar2 = this->_padding_;
      pUVar6 = Z_Construct_UClass_USoundNode_NoRegister();
      lVar2 = *(longlong *)(lVar2 + 0x10);
      iVar1 = (int)pUVar6->_padding_;
      if (*(int *)(lVar2 + 0x38) < iVar1) {
        return;
      }
      if ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_) {
        return;
      }
    }
    dVar5 = _UNK_151874048;
    dVar4 = ___xmm_3bcd2618400000003bcd261840000000;
    dVar3 = __real_3bcd261840000000;
    (this->Min).field0_0x0._s_0.X = ___xmm_3bcd2618400000003bcd261840000000;
    (this->Min).field0_0x0._s_0.Y = dVar5;
    (this->Max).field0_0x0._s_0.X = dVar4;
    (this->Max).field0_0x0._s_0.Y = dVar5;
    (this->Min).field0_0x0._s_0.Z = dVar3;
    (this->Max).field0_0x0._s_0.Z = dVar3;
  }
  return;
}

// PostLoad @ 147b7db90

void __thiscall UDistributionVectorUniform::PostLoad(UDistributionVectorUniform *this)

{
  double dVar1;
  undefined8 uVar2;
  
  UObject::PostLoad((UObject *)this);
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dVar1 = __real_3bcd261840000000;
  if (((__real_3bcd261840000000 == (this->Min).field0_0x0._s_0.X) &&
      (__real_3bcd261840000000 == (this->Min).field0_0x0._s_0.Y)) &&
     (__real_3bcd261840000000 == (this->Min).field0_0x0._s_0.Z)) {
    (this->Min).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (this->Min).field0_0x0._s_0.Y = (double)uVar2;
    (this->Min).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (((dVar1 == (this->Max).field0_0x0._s_0.X) && (dVar1 == (this->Max).field0_0x0._s_0.Y)) &&
     (dVar1 == (this->Max).field0_0x0._s_0.Z)) {
    (this->Max).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (this->Max).field0_0x0._s_0.Y = (double)uVar2;
    (this->Max).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  return;
}

// SetKeyIn @ 147b8b1c0

int __thiscall
UDistributionVectorUniform::SetKeyIn(UDistributionVectorUniform *this,int param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0xe38,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return 0;
}

// SetKeyInterpMode @ 147b8b5c0

void __thiscall
UDistributionVectorUniform::SetKeyInterpMode
          (UDistributionVectorUniform *this,int param_1,EInterpCurveMode param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0xe53,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// SetKeyOut @ 147b8bd30

void __thiscall
UDistributionVectorUniform::SetKeyOut
          (UDistributionVectorUniform *this,int param_1,int param_2,float param_3)

{
  code *pcVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  
  if (5 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SubIndex >= 0 && SubIndex < 6",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0xe3e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0xe3f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  dVar4 = (double)param_3;
  if (param_1 == 0) {
    dVar3 = (double)this->_padding_;
    if (dVar4 <= (double)this->_padding_) {
      dVar3 = dVar4;
    }
    this->_padding_ = (longlong)dVar3;
  }
  else if (param_1 == 1) {
    dVar3 = (double)this->_padding_;
    if ((double)this->_padding_ <= dVar4) {
      dVar3 = dVar4;
    }
    this->_padding_ = (longlong)dVar3;
  }
  else if (param_1 == 2) {
    dVar3 = (double)this->_padding_;
    if (dVar4 <= (double)this->_padding_) {
      dVar3 = dVar4;
    }
    this->_padding_ = (longlong)dVar3;
  }
  else if (param_1 == 3) {
    dVar3 = (double)this->_padding_;
    if ((double)this->_padding_ <= dVar4) {
      dVar3 = dVar4;
    }
    this->_padding_ = (longlong)dVar3;
  }
  else if (param_1 == 4) {
    dVar3 = (double)this->_padding_;
    if (dVar4 <= (double)this->_padding_) {
      dVar3 = dVar4;
    }
    (this->Max).field0_0x0._s_0.X = dVar3;
  }
  else {
    dVar3 = (this->Max).field0_0x0._s_0.X;
    if (dVar3 <= dVar4) {
      dVar3 = dVar4;
    }
    this->_padding_ = (longlong)dVar3;
  }
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 2;
  return;
}

// SetTangents @ 147b8d700

void __thiscall
UDistributionVectorUniform::SetTangents
          (UDistributionVectorUniform *this,int param_1,int param_2,float param_3,float param_4)

{
  code *pcVar1;
  bool bVar2;
  
  if (5 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SubIndex >= 0 && SubIndex < 6",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0xe58,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0xe59,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

