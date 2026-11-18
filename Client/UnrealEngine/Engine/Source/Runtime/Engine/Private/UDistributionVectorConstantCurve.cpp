// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 25

// StaticClass @ 1472677e0

UClass * __cdecl UDistributionVectorConstantCurve::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDistributionVectorConstantCurve.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DistributionVectorConstantCurve",
               &Z_Registration_Info_UClass_UDistributionVectorConstantCurve.InnerSingleton,
               StaticRegisterNativesUDistributionVectorConstantCurve,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDistributionVectorConstantCurve>,
               InternalVTableHelperCtorCaller<UDistributionVectorConstantCurve>,local_res8,
               UDistributionVector::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDistributionVectorConstantCurve.InnerSingleton;
}

// UDistributionVectorConstantCurve @ 14726d060

UDistributionVectorConstantCurve * __thiscall
UDistributionVectorConstantCurve::UDistributionVectorConstantCurve
          (UDistributionVectorConstantCurve *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FCurveEdInterface__;
  *(undefined8 *)&this->ConstantCurve = 0;
  *(undefined8 *)&(this->ConstantCurve).field_0x8 = 0;
  (this->ConstantCurve).field_0x10 = 0;
  *(undefined4 *)&(this->ConstantCurve).field_0x14 = 0;
  return this;
}

// ~UDistributionVectorConstantCurve @ 14726d710

void __thiscall
UDistributionVectorConstantCurve::~UDistributionVectorConstantCurve
          (UDistributionVectorConstantCurve *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FCurveEdInterface__;
  if (*(void **)&this->ConstantCurve != (void *)0x0) {
    FMemory::Free(*(void **)&this->ConstantCurve);
  }
  this->_padding_ = (longlong)&UDistribution::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UDistribution::_vftable__for__FCurveEdInterface__;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14726ff60

UClass * __cdecl UDistributionVectorConstantCurve::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDistributionVectorConstantCurve.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DistributionVectorConstantCurve",
               &Z_Registration_Info_UClass_UDistributionVectorConstantCurve.InnerSingleton,
               StaticRegisterNativesUDistributionVectorConstantCurve,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDistributionVectorConstantCurve>,
               InternalVTableHelperCtorCaller<UDistributionVectorConstantCurve>,local_res8,
               UDistributionVector::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDistributionVectorConstantCurve.InnerSingleton;
}

// StaticRegisterNativesUDistributionVectorConstantCurve @ 147270af0

void __cdecl
UDistributionVectorConstantCurve::StaticRegisterNativesUDistributionVectorConstantCurve(void)

{
  return;
}

// UDistributionVectorConstantCurve @ 147b3ac30

UDistributionVectorConstantCurve * __thiscall
UDistributionVectorConstantCurve::UDistributionVectorConstantCurve
          (UDistributionVectorConstantCurve *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 3;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FCurveEdInterface__;
  *(undefined8 *)&this->ConstantCurve = 0;
  *(undefined8 *)&(this->ConstantCurve).field_0x8 = 0;
  (this->ConstantCurve).field_0x10 = 0;
  *(undefined4 *)&(this->ConstantCurve).field_0x14 = 0;
  return this;
}

// CreateNewKey @ 147b4e110

int __thiscall
UDistributionVectorConstantCurve::CreateNewKey(UDistributionVectorConstantCurve *this,float param_1)

{
  int iVar1;
  TVector<double> local_38 [2];
  
  FInterpCurve<UE::Math::TVector<double>_>::Eval
            ((FInterpCurve<UE::Math::TVector<double>_> *)&this->_padding_,local_38,param_1,
             &UE::Math::TVector<double>::ZeroVector);
  iVar1 = FInterpCurve<UE::Math::TVector<double>_>::AddPoint
                    ((FInterpCurve<UE::Math::TVector<double>_> *)&this->_padding_,param_1,local_38);
  FInterpCurve<UE::Math::TVector<double>_>::AutoSetTangents
            ((FInterpCurve<UE::Math::TVector<double>_> *)&this->_padding_,0.0,true);
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 2;
  return iVar1;
}

// DeleteKey @ 147b50000

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UDistributionVectorConstantCurve::DeleteKey(UDistributionVectorConstantCurve *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_1 < 0) || ((int)this->_padding_ <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex >= 0 && KeyIndex < ConstantCurve.Points.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0xba6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<FInterpCurvePoint<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>::RemoveAt
            ((TArray<FInterpCurvePoint<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_> *)
             &this->_padding_,param_1,Default);
  FInterpCurve<UE::Math::TVector<double>_>::AutoSetTangents
            ((FInterpCurve<UE::Math::TVector<double>_> *)&this->_padding_,0.0,true);
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 2;
  return;
}

// EvalSub @ 147b60140

float __thiscall
UDistributionVectorConstantCurve::EvalSub
          (UDistributionVectorConstantCurve *this,int param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  TVector<double>_u_0 local_38 [2];
  
  if ((2 < (uint)param_1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SubIndex >= 0 && SubIndex < 3",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                         ,0xb8d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    fVar3 = (float)(*pcVar1)();
    return fVar3;
  }
  FInterpCurve<UE::Math::TVector<double>_>::Eval
            ((FInterpCurve<UE::Math::TVector<double>_> *)&this->_padding_,
             (TVector<double> *)&local_38[0]._s_0,param_2,&UE::Math::TVector<double>::ZeroVector);
  if ((param_1 != 0) && (local_38[0]._s_0.X = local_38[0]._s_0.Z, param_1 == 1)) {
    local_38[0]._s_0.X = local_38[0]._s_0.Y;
  }
  return (float)(double)local_38[0]._0_8_;
}

// GetInRange @ 147b65de0

void __thiscall
UDistributionVectorConstantCurve::GetInRange
          (UDistributionVectorConstantCurve *this,float *param_1,float *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  iVar6 = (int)this->_padding_;
  if (iVar6 == 0) {
    *param_1 = 0.0;
    *param_2 = 0.0;
    return;
  }
  uVar4 = 0;
  fVar8 = __real_ff7fc99e;
  fVar7 = __real_7f7fc99e;
  if (0 < iVar6) {
    lVar5 = 0;
    fVar9 = __real_ff7fc99e;
    fVar10 = __real_7f7fc99e;
    do {
      uVar3 = 0;
      if ((int)uVar4 < iVar6) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar4 = uVar4 + 1;
      iVar6 = (int)this->_padding_;
      fVar7 = *(float *)(lVar5 + this->_padding_);
      lVar5 = lVar5 + 0x58;
      fVar8 = fVar7;
      if (fVar7 <= fVar9) {
        fVar8 = fVar9;
      }
      if (fVar10 <= fVar7) {
        fVar7 = fVar10;
      }
      fVar9 = fVar8;
      fVar10 = fVar7;
    } while ((int)uVar4 < iVar6);
  }
  *param_1 = fVar7;
  *param_2 = fVar8;
  return;
}

// GetKeyColor @ 147b66b70

FColor __thiscall
UDistributionVectorConstantCurve::GetKeyColor
          (UDistributionVectorConstantCurve *this,int param_1,int param_2,FColor *param_3)

{
  code *pcVar1;
  bool bVar2;
  FColor_u_0 FVar3;
  undefined4 in_register_00000014;
  
  if ((2 < (uint)param_2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SubIndex >= 0 && SubIndex < 3",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                         ,0xb20,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar3.Bits = (*pcVar1)();
    return (FColor_u_0)(FColor_u_0)FVar3._s_0;
  }
  if ((((int)param_3 < 0) || ((int)this->_padding_ <= (int)param_3)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("KeyIndex >= 0 && KeyIndex < ConstantCurve.Points.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                         ,0xb21,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar3.Bits = (*pcVar1)();
    return (FColor_u_0)(FColor_u_0)FVar3._s_0;
  }
  FVar3 = FColor::Red.field0_0x0;
  if ((param_2 != 0) && (FVar3 = FColor::Green.field0_0x0, param_2 != 1)) {
    FVar3 = FColor::Blue.field0_0x0;
  }
  ((FColor_u_0 *)CONCAT44(in_register_00000014,param_1))->_s_0 = (FColor_u_0_s_0)FVar3;
  return (FColor)(FColor_u_0)param_1;
}

// GetKeyIn @ 147b67050

float __thiscall
UDistributionVectorConstantCurve::GetKeyIn(UDistributionVectorConstantCurve *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  
  if ((param_1 < 0) || ((int)this->_padding_ <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex >= 0 && KeyIndex < ConstantCurve.Points.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0xaf7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
  uVar3 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
  return *(float *)((longlong)param_1 * 0x58 + this->_padding_);
}

// GetKeyInterpMode @ 147b67410

EInterpCurveMode __thiscall
UDistributionVectorConstantCurve::GetKeyInterpMode
          (UDistributionVectorConstantCurve *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  EInterpCurveMode EVar3;
  uint uVar4;
  
  if ((param_1 < 0) || ((int)this->_padding_ <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex >= 0 && KeyIndex < ConstantCurve.Points.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0xb71,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  uVar4 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  return (EInterpCurveMode)*(byte *)((longlong)param_1 * 0x58 + 0x50 + this->_padding_);
}

// GetKeyOut @ 147b679a0

float __thiscall
UDistributionVectorConstantCurve::GetKeyOut
          (UDistributionVectorConstantCurve *this,int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  float fVar7;
  double dVar8;
  
  lVar6 = (longlong)param_2;
  if ((2 < (uint)param_1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SubIndex >= 0 && SubIndex < 3",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                         ,0xafd,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    fVar7 = (float)(*pcVar3)();
    return fVar7;
  }
  if (((param_2 < 0) || ((int)this->_padding_ <= param_2)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("KeyIndex >= 0 && KeyIndex < ConstantCurve.Points.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                         ,0xafe,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    fVar7 = (float)(*pcVar3)();
    return fVar7;
  }
  if (param_1 == 0) {
LAB_147b67b00:
    uVar5 = 0;
    if (param_2 < (int)this->_padding_) {
      uVar5 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      fVar7 = (float)(*pcVar3)();
      return fVar7;
    }
    dVar8 = *(double *)(lVar6 * 0x58 + 8 + this->_padding_);
  }
  else {
    cVar1 = *(char *)((longlong)&this->_padding_ + 4);
    if (param_1 == 1) {
      if ((cVar1 == '\x01') || (cVar1 == '\x04')) goto LAB_147b67b00;
      uVar5 = 0;
      if (param_2 < (int)this->_padding_) {
        uVar5 = (uint)~param_2 >> 0x1f;
      }
    }
    else {
      if ((cVar1 == '\x02') || (cVar1 == '\x04')) goto LAB_147b67b00;
      iVar2 = (int)this->_padding_;
      if (cVar1 != '\x03') {
        uVar5 = 0;
        if (param_2 < iVar2) {
          uVar5 = (uint)~param_2 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          fVar7 = (float)(*pcVar3)();
          return fVar7;
        }
        dVar8 = *(double *)(lVar6 * 0x58 + 0x18 + this->_padding_);
        goto LAB_147b67b54;
      }
      uVar5 = 0;
      if (param_2 < iVar2) {
        uVar5 = (uint)~param_2 >> 0x1f;
      }
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      fVar7 = (float)(*pcVar3)();
      return fVar7;
    }
    dVar8 = *(double *)(lVar6 * 0x58 + 0x10 + this->_padding_);
  }
LAB_147b67b54:
  return (float)dVar8;
}

// GetNumKeys @ 147b69530

int __thiscall UDistributionVectorConstantCurve::GetNumKeys(UDistributionVectorConstantCurve *this)

{
  return (int)this->_padding_;
}

// GetNumSubCurves @ 147b695d0

int __thiscall
UDistributionVectorConstantCurve::GetNumSubCurves(UDistributionVectorConstantCurve *this)

{
  char cVar1;
  
  cVar1 = *(char *)((longlong)&this->_padding_ + 4);
  if (((cVar1 != '\x01') && (cVar1 != '\x02')) && (cVar1 != '\x03')) {
    if (cVar1 != '\x04') {
      return 3;
    }
    return 1;
  }
  return 2;
}

// GetOutRange @ 147b69c80

void __thiscall
UDistributionVectorConstantCurve::GetOutRange
          (UDistributionVectorConstantCurve *this,float *param_1,float *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  TVector<double>_u_0 local_38;
  TVector<double>_u_0 local_20;
  
  FInterpCurve<UE::Math::TVector<double>_>::CalcBounds
            ((FInterpCurve<UE::Math::TVector<double>_> *)&this->_padding_,
             (TVector<double> *)&local_20._s_0,(TVector<double> *)&local_38._s_0,
             &UE::Math::TVector<double>::ZeroVector);
  cVar1 = *(char *)((longlong)&this->_padding_ + 4);
  if ((cVar1 == '\x01') ||
     (((uVar2 = local_20._s_0.X, uVar3 = local_38._s_0.X, cVar1 != '\x02' &&
       (uVar2 = local_20._s_0.Y, uVar3 = local_38._s_0.Y, cVar1 != '\x03')) &&
      (uVar2 = local_20._s_0.Z, local_20._s_0.Z = local_20._s_0.X, uVar3 = local_38._s_0.Z,
      local_38._s_0.Z = local_38._s_0.X, cVar1 == '\x04')))) {
    local_20._s_0.Y = local_20._s_0.X;
    local_38._s_0.Y = local_38._s_0.X;
    uVar2 = local_20._s_0.Z;
    uVar3 = local_38._s_0.Z;
  }
  if (local_20._s_0.X <= local_20._s_0.Y) {
    local_20._s_0.Y = local_20._s_0.X;
  }
  if (local_38._s_0.Y <= local_38._s_0.X) {
    local_38._s_0.Y = local_38._s_0.X;
  }
  if ((double)uVar2 <= local_20._s_0.Y) {
    local_20._s_0.Y = (double)uVar2;
  }
  if (local_38._s_0.Y <= (double)uVar3) {
    local_38._s_0.Y = (double)uVar3;
  }
  *param_1 = (float)local_20._s_0.Y;
  *param_2 = (float)local_38._s_0.Y;
  return;
}

// GetRange @ 147b6cf90

void __thiscall
UDistributionVectorConstantCurve::GetRange
          (UDistributionVectorConstantCurve *this,TVector<double> *param_1,TVector<double> *param_2)

{
  uchar uVar1;
  undefined1 local_38 [16];
  undefined1 auStack_28 [8];
  undefined1 local_20 [16];
  double dStack_10;
  
  FInterpCurve<UE::Math::TVector<double>_>::CalcBounds
            ((FInterpCurve<UE::Math::TVector<double>_> *)&this->ConstantCurve,
             (TVector<double> *)local_38,(TVector<double> *)(auStack_28 + 8),
             &UE::Math::TVector<double>::ZeroVector);
  uVar1 = (this->LockedAxes).Value;
  if (uVar1 == '\x01') {
    local_38._8_8_ = CONCAT44(local_38._4_4_,local_38._0_4_);
    local_20._8_8_ = local_20._0_8_;
  }
  else if (uVar1 == '\x02') {
    auStack_28 = (undefined1  [8])CONCAT44(local_38._4_4_,local_38._0_4_);
    dStack_10 = (double)local_20._0_8_;
  }
  else if (uVar1 == '\x03') {
    auStack_28 = (undefined1  [8])local_38._8_8_;
    dStack_10 = (double)local_20._8_8_;
  }
  else if (uVar1 == '\x04') {
    local_38._12_4_ = local_38._4_4_;
    local_38._8_4_ = local_38._0_4_;
    auStack_28._4_4_ = local_38._4_4_;
    auStack_28._0_4_ = local_38._0_4_;
    local_20._8_8_ = local_20._0_8_;
    dStack_10 = (double)local_20._0_8_;
  }
  (param_1->field0_0x0)._s_0.X = (double)CONCAT44(local_38._4_4_,local_38._0_4_);
  (param_1->field0_0x0)._s_0.Y = (double)local_38._8_8_;
  (param_1->field0_0x0)._s_0.Z = (double)auStack_28;
  (param_2->field0_0x0)._s_0.X = (double)local_20._0_8_;
  (param_2->field0_0x0)._s_0.Y = (double)local_20._8_8_;
  (param_2->field0_0x0)._s_0.Z = dStack_10;
  return;
}

// GetSubCurveButtonColor @ 147b6fcf0

FColor __thiscall
UDistributionVectorConstantCurve::GetSubCurveButtonColor
          (UDistributionVectorConstantCurve *this,int param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  FColor_u_0 FVar3;
  int iVar4;
  FColor_u_0 FVar5;
  undefined4 in_register_00000014;
  int iVar6;
  undefined7 in_register_00000081;
  char in_R9B;
  
  iVar6 = (int)CONCAT71(in_register_00000081,param_2);
  if ((iVar6 < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SubCurveIndex >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                         ,0xad9,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar3.Bits = (*pcVar1)();
    return (FColor_u_0)(FColor_u_0)FVar3._s_0;
  }
  iVar4 = (**(code **)(this->_padding_ + 8))(this);
  if ((iVar4 <= iVar6) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SubCurveIndex < GetNumSubCurves()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                         ,0xada,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar3.Bits = (*pcVar1)();
    return (FColor_u_0)(FColor_u_0)FVar3._s_0;
  }
  if (iVar6 == 0) {
    FVar5.Bits = 0xff200000;
    FVar3 = FColor::Red.field0_0x0;
  }
  else if (iVar6 == 1) {
    FVar5.Bits = 0xff002000;
    FVar3 = FColor::Green.field0_0x0;
  }
  else {
    if (iVar6 != 2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                         ,0xaee,L"");
      if (!bVar2) {
        return (FColor)(FColor_u_0)param_1;
      }
      pcVar1 = (code *)swi(3);
      FVar3.Bits = (*pcVar1)();
      return (FColor_u_0)(FColor_u_0)FVar3._s_0;
    }
    FVar5.Bits = 0xff000020;
    FVar3 = FColor::Blue.field0_0x0;
  }
  if (in_R9B != '\0') {
    FVar3 = FVar5;
  }
  ((FColor_u_0 *)CONCAT44(in_register_00000014,param_1))->_s_0 = (FColor_u_0_s_0)FVar3;
  return (FColor)(FColor_u_0)param_1;
}

// GetTangents @ 147b70620

void __thiscall
UDistributionVectorConstantCurve::GetTangents
          (UDistributionVectorConstantCurve *this,int param_1,int param_2,float *param_3,
          float *param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  double dVar5;
  
  lVar4 = (longlong)param_2;
  if ((2 < (uint)param_1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SubIndex >= 0 && SubIndex < 3",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                         ,0xb77,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((param_2 < 0) || ((int)this->_padding_ <= param_2)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("KeyIndex >= 0 && KeyIndex < ConstantCurve.Points.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                         ,0xb78,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_1 == 0) {
    uVar3 = 0;
    if (param_2 < (int)this->_padding_) {
      uVar3 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *param_3 = (float)*(double *)(this->_padding_ + 0x20 + lVar4 * 0x58);
    uVar3 = 0;
    if (param_2 < (int)this->_padding_) {
      uVar3 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    dVar5 = *(double *)(this->_padding_ + 0x38 + lVar4 * 0x58);
  }
  else if (param_1 == 1) {
    uVar3 = 0;
    if (param_2 < (int)this->_padding_) {
      uVar3 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *param_3 = (float)*(double *)(this->_padding_ + 0x28 + lVar4 * 0x58);
    uVar3 = 0;
    if (param_2 < (int)this->_padding_) {
      uVar3 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    dVar5 = *(double *)(this->_padding_ + 0x40 + lVar4 * 0x58);
  }
  else {
    if (param_1 != 2) {
      return;
    }
    uVar3 = 0;
    if (param_2 < (int)this->_padding_) {
      uVar3 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *param_3 = (float)*(double *)(this->_padding_ + 0x30 + lVar4 * 0x58);
    uVar3 = 0;
    if (param_2 < (int)this->_padding_) {
      uVar3 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    dVar5 = *(double *)(this->_padding_ + 0x48 + lVar4 * 0x58);
  }
  *param_4 = (float)dVar5;
  return;
}

// GetValue @ 147b71e50

TVector<double> * __thiscall
UDistributionVectorConstantCurve::GetValue
          (UDistributionVectorConstantCurve *this,TVector<double> *__return_storage_ptr__,
          float param_1,UObject *param_2,int param_3,FRandomStream *param_4)

{
  uchar uVar1;
  TVector<double>_u_0 local_28;
  
  FInterpCurve<UE::Math::TVector<double>_>::Eval
            ((FInterpCurve<UE::Math::TVector<double>_> *)&this->ConstantCurve,
             (TVector<double> *)&local_28._s_0,param_1,&UE::Math::TVector<double>::ZeroVector);
  uVar1 = (this->LockedAxes).Value;
  if (uVar1 != '\0') {
    if (uVar1 == '\x01') {
      *(undefined4 *)&__return_storage_ptr__->field0_0x0 = local_28._0_4_;
      *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = local_28._4_4_;
      *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = local_28._0_4_;
      *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = local_28._4_4_;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = local_28._s_0.Z;
      return __return_storage_ptr__;
    }
    if (uVar1 == '\x02') {
      (__return_storage_ptr__->field0_0x0)._s_0.X = (double)CONCAT44(local_28._4_4_,local_28._0_4_);
      (__return_storage_ptr__->field0_0x0)._s_0.Y = local_28._s_0.Y;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)CONCAT44(local_28._4_4_,local_28._0_4_);
      return __return_storage_ptr__;
    }
    if (uVar1 == '\x03') {
      (__return_storage_ptr__->field0_0x0)._s_0.Y = local_28._s_0.Y;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = local_28._s_0.Y;
      (__return_storage_ptr__->field0_0x0)._s_0.X = (double)CONCAT44(local_28._4_4_,local_28._0_4_);
      return __return_storage_ptr__;
    }
    if (uVar1 == '\x04') {
      *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0x10) = local_28._0_4_;
      *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0x14) = local_28._4_4_;
      *(undefined4 *)&__return_storage_ptr__->field0_0x0 = local_28._0_4_;
      *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = local_28._4_4_;
      *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = local_28._0_4_;
      *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = local_28._4_4_;
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)CONCAT44(local_28._4_4_,local_28._0_4_);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = local_28._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// SetKeyIn @ 147b8b130

int __thiscall
UDistributionVectorConstantCurve::SetKeyIn
          (UDistributionVectorConstantCurve *this,int param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if ((param_1 < 0) || ((int)this->_padding_ <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex >= 0 && KeyIndex < ConstantCurve.Points.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0xbaf,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = FInterpCurve<UE::Math::TVector<double>_>::MovePoint
                    ((FInterpCurve<UE::Math::TVector<double>_> *)&this->_padding_,param_1,param_2);
  FInterpCurve<UE::Math::TVector<double>_>::AutoSetTangents
            ((FInterpCurve<UE::Math::TVector<double>_> *)&this->_padding_,0.0,true);
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 2;
  return iVar3;
}

// SetKeyInterpMode @ 147b8b4f0

void __thiscall
UDistributionVectorConstantCurve::SetKeyInterpMode
          (UDistributionVectorConstantCurve *this,int param_1,EInterpCurveMode param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if ((param_1 < 0) || ((int)this->_padding_ <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex >= 0 && KeyIndex < ConstantCurve.Points.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0xbcb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(char *)((longlong)param_1 * 0x58 + 0x50 + this->_padding_) = (char)param_2;
  FInterpCurve<UE::Math::TVector<double>_>::AutoSetTangents
            ((FInterpCurve<UE::Math::TVector<double>_> *)&this->_padding_,0.0,true);
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 2;
  return;
}

// SetKeyOut @ 147b8bb70

void __thiscall
UDistributionVectorConstantCurve::SetKeyOut
          (UDistributionVectorConstantCurve *this,int param_1,int param_2,float param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  lVar6 = (longlong)param_2;
  if (2 < (uint)param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SubIndex >= 0 && SubIndex < 3",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0xbba,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((param_2 < 0) || ((int)this->_padding_ <= param_2)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex >= 0 && KeyIndex < ConstantCurve.Points.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0xbbb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = (int)this->_padding_;
  uVar5 = (uint)~param_2 >> 0x1f;
  if (param_1 == 0) {
    uVar4 = 0;
    if (param_2 < iVar1) {
      uVar4 = uVar5;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(double *)(lVar6 * 0x58 + 8 + this->_padding_) = (double)param_3;
  }
  else if (param_1 == 1) {
    uVar4 = 0;
    if (param_2 < iVar1) {
      uVar4 = uVar5;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(double *)(lVar6 * 0x58 + 0x10 + this->_padding_) = (double)param_3;
  }
  else {
    uVar4 = 0;
    if (param_2 < iVar1) {
      uVar4 = uVar5;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(double *)(lVar6 * 0x58 + 0x18 + this->_padding_) = (double)param_3;
  }
  FInterpCurve<UE::Math::TVector<double>_>::AutoSetTangents
            ((FInterpCurve<UE::Math::TVector<double>_> *)&this->_padding_,0.0,true);
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 2;
  return;
}

// SetTangents @ 147b8d420

void __thiscall
UDistributionVectorConstantCurve::SetTangents
          (UDistributionVectorConstantCurve *this,int param_1,int param_2,float param_3,
          float param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  
  lVar4 = (longlong)param_2;
  if (2 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SubIndex >= 0 && SubIndex < 3",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0xbd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_2 < 0) || ((int)this->_padding_ <= param_2)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex >= 0 && KeyIndex < ConstantCurve.Points.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0xbd6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1 == 0) {
    uVar3 = 0;
    if (param_2 < (int)this->_padding_) {
      uVar3 = (uint)~param_2 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(double *)(lVar4 * 0x58 + 0x20 + this->_padding_) = (double)param_3;
    uVar3 = 0;
    if (param_2 < (int)this->_padding_) {
      uVar3 = (uint)~param_2 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(double *)(lVar4 * 0x58 + 0x38 + this->_padding_) = (double)param_4;
  }
  else if (param_1 == 1) {
    uVar3 = 0;
    if (param_2 < (int)this->_padding_) {
      uVar3 = (uint)~param_2 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(double *)(this->_padding_ + 0x28 + lVar4 * 0x58) = (double)param_3;
    uVar3 = 0;
    if (param_2 < (int)this->_padding_) {
      uVar3 = (uint)~param_2 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(double *)(this->_padding_ + 0x40 + lVar4 * 0x58) = (double)param_4;
  }
  else if (param_1 == 2) {
    uVar3 = 0;
    if (param_2 < (int)this->_padding_) {
      uVar3 = (uint)~param_2 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(double *)(this->_padding_ + 0x30 + lVar4 * 0x58) = (double)param_3;
    uVar3 = 0;
    if (param_2 < (int)this->_padding_) {
      uVar3 = (uint)~param_2 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(double *)(this->_padding_ + 0x48 + lVar4 * 0x58) = (double)param_4;
  }
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 2;
  return;
}

