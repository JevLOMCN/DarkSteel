// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 27

// StaticClass @ 1472667a0

UClass * __cdecl UDistributionFloatUniformCurve::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDistributionFloatUniformCurve.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DistributionFloatUniformCurve",
               &Z_Registration_Info_UClass_UDistributionFloatUniformCurve.InnerSingleton,
               StaticRegisterNativesUDistributionFloatUniformCurve,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDistributionFloatUniformCurve>,
               InternalVTableHelperCtorCaller<UDistributionFloatUniformCurve>,local_res8,
               UDistributionFloat::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDistributionFloatUniformCurve.InnerSingleton;
}

// UDistributionFloatUniformCurve @ 14726cf90

UDistributionFloatUniformCurve * __thiscall
UDistributionFloatUniformCurve::UDistributionFloatUniformCurve
          (UDistributionFloatUniformCurve *this,FVTableHelper *param_1)

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

// ~UDistributionFloatUniformCurve @ 14726d670

void __thiscall
UDistributionFloatUniformCurve::~UDistributionFloatUniformCurve
          (UDistributionFloatUniformCurve *this)

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

// GetPrivateStaticClass @ 14726fd20

UClass * __cdecl UDistributionFloatUniformCurve::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDistributionFloatUniformCurve.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DistributionFloatUniformCurve",
               &Z_Registration_Info_UClass_UDistributionFloatUniformCurve.InnerSingleton,
               StaticRegisterNativesUDistributionFloatUniformCurve,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDistributionFloatUniformCurve>,
               InternalVTableHelperCtorCaller<UDistributionFloatUniformCurve>,local_res8,
               UDistributionFloat::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDistributionFloatUniformCurve.InnerSingleton;
}

// StaticRegisterNativesUDistributionFloatUniformCurve @ 147270ac0

void __cdecl
UDistributionFloatUniformCurve::StaticRegisterNativesUDistributionFloatUniformCurve(void)

{
  return;
}

// UDistributionFloatUniformCurve @ 147b3aba0

UDistributionFloatUniformCurve * __thiscall
UDistributionFloatUniformCurve::UDistributionFloatUniformCurve
          (UDistributionFloatUniformCurve *this,FObjectInitializer *param_1)

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

// CreateNewKey @ 147b4e080

int __thiscall
UDistributionFloatUniformCurve::CreateNewKey(UDistributionFloatUniformCurve *this,float param_1)

{
  int iVar1;
  TVector2<double> local_28 [2];
  
  FInterpCurve<UE::Math::TVector2<double>_>::Eval
            ((FInterpCurve<UE::Math::TVector2<double>_> *)&this->_padding_,local_28,param_1,
             &UE::Math::TVector2<double>::ZeroVector);
  iVar1 = FInterpCurve<UE::Math::TVector2<double>_>::AddPoint
                    ((FInterpCurve<UE::Math::TVector2<double>_> *)&this->_padding_,param_1,local_28)
  ;
  FInterpCurve<UE::Math::TVector2<double>_>::AutoSetTangents
            ((FInterpCurve<UE::Math::TVector2<double>_> *)&this->_padding_,0.0,true);
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 2;
  return iVar1;
}

// DeleteKey @ 147b4ff40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UDistributionFloatUniformCurve::DeleteKey(UDistributionFloatUniformCurve *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_1 < 0) || ((int)this->_padding_ <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(KeyIndex >= 0) && (KeyIndex < ConstantCurve.Points.Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x966,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<FInterpCurvePoint<UE::Math::TVector2<double>_>,TSizedDefaultAllocator<32>_>::RemoveAt
            ((TArray<FInterpCurvePoint<UE::Math::TVector2<double>_>,TSizedDefaultAllocator<32>_> *)
             &this->_padding_,param_1,Default);
  FInterpCurve<UE::Math::TVector2<double>_>::AutoSetTangents
            ((FInterpCurve<UE::Math::TVector2<double>_> *)&this->_padding_,0.0,true);
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 2;
  return;
}

// EvalSub @ 147b60050

float __thiscall
UDistributionFloatUniformCurve::EvalSub
          (UDistributionFloatUniformCurve *this,int param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  TVector2<double>_u_0 local_28 [2];
  
  if ((1 < (uint)param_1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(SubIndex >= 0) && (SubIndex < 2)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                         ,0x94b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    fVar3 = (float)(*pcVar1)();
    return fVar3;
  }
  FInterpCurve<UE::Math::TVector2<double>_>::Eval
            ((FInterpCurve<UE::Math::TVector2<double>_> *)&this->_padding_,
             (TVector2<double> *)&local_28[0]._s_0,param_2,&UE::Math::TVector2<double>::ZeroVector);
  if (param_1 == 0) {
    local_28[0]._s_0.Y = local_28[0]._s_0.X;
  }
  return (float)(double)local_28[0]._8_8_;
}

// GetInRange @ 147b65ca0

void __thiscall
UDistributionFloatUniformCurve::GetInRange
          (UDistributionFloatUniformCurve *this,float *param_1,float *param_2)

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
      lVar5 = lVar5 + 0x40;
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

// GetKeyColor @ 147b66a10

FColor __thiscall
UDistributionFloatUniformCurve::GetKeyColor
          (UDistributionFloatUniformCurve *this,int param_1,int param_2,FColor *param_3)

{
  code *pcVar1;
  bool bVar2;
  FColor_u_0 FVar3;
  undefined4 in_register_00000014;
  
  if (1 < (uint)param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(SubIndex >= 0) && (SubIndex < 2)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x901,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3.Bits = (*pcVar1)();
      return (FColor_u_0)(FColor_u_0)FVar3._s_0;
    }
  }
  if (((int)param_3 < 0) || ((int)this->_padding_ <= (int)param_3)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(KeyIndex >= 0) && (KeyIndex < ConstantCurve.Points.Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x902,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3.Bits = (*pcVar1)();
      return (FColor_u_0)(FColor_u_0)FVar3._s_0;
    }
  }
  FVar3 = FColor::Red.field0_0x0;
  if (param_2 != 0) {
    FVar3 = FColor::Green.field0_0x0;
  }
  ((FColor_u_0 *)CONCAT44(in_register_00000014,param_1))->_s_0 = (FColor_u_0_s_0)FVar3;
  return (FColor)(FColor_u_0)param_1;
}

// GetKeyIn @ 147b66f60

float __thiscall
UDistributionFloatUniformCurve::GetKeyIn(UDistributionFloatUniformCurve *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  
  if ((param_1 < 0) || ((int)this->_padding_ <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(KeyIndex >= 0) && (KeyIndex < ConstantCurve.Points.Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x8ec,L"");
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
  return *(float *)((longlong)param_1 * 0x40 + this->_padding_);
}

// GetKeyInterpMode @ 147b67320

EInterpCurveMode __thiscall
UDistributionFloatUniformCurve::GetKeyInterpMode(UDistributionFloatUniformCurve *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  EInterpCurveMode EVar3;
  uint uVar4;
  
  if ((param_1 < 0) || ((int)this->_padding_ <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(KeyIndex >= 0) && (KeyIndex < ConstantCurve.Points.Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x934,L"");
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
  return (EInterpCurveMode)*(byte *)((longlong)param_1 * 0x40 + 0x38 + this->_padding_);
}

// GetKeyOut @ 147b677a0

float __thiscall
UDistributionFloatUniformCurve::GetKeyOut
          (UDistributionFloatUniformCurve *this,int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  float fVar5;
  double dVar6;
  
  if (1 < (uint)param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(SubIndex >= 0) && (SubIndex < 2)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x8f2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar5 = (float)(*pcVar2)();
      return fVar5;
    }
  }
  if ((param_2 < 0) || ((int)this->_padding_ <= param_2)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(KeyIndex >= 0) && (KeyIndex < ConstantCurve.Points.Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x8f3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar5 = (float)(*pcVar2)();
      return fVar5;
    }
  }
  iVar1 = (int)this->_padding_;
  if (param_1 == 0) {
    uVar4 = 0;
    if (param_2 < iVar1) {
      uVar4 = (uint)~param_2 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        fVar5 = (float)(*pcVar2)();
        return fVar5;
      }
    }
    dVar6 = *(double *)((longlong)param_2 * 0x40 + 8 + this->_padding_);
  }
  else {
    uVar4 = 0;
    if (param_2 < iVar1) {
      uVar4 = (uint)~param_2 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        fVar5 = (float)(*pcVar2)();
        return fVar5;
      }
    }
    dVar6 = *(double *)((longlong)param_2 * 0x40 + 0x10 + this->_padding_);
  }
  return (float)dVar6;
}

// GetMinMaxValue @ 147b691a0

TVector2<double> * __thiscall
UDistributionFloatUniformCurve::GetMinMaxValue
          (UDistributionFloatUniformCurve *this,TVector2<double> *__return_storage_ptr__,
          float param_1,UObject *param_2)

{
  TVector2<double>_u_0 local_18;
  
  local_18._s_0.X = 0.0;
  local_18._s_0.Y = 0.0;
  FInterpCurve<UE::Math::TVector2<double>_>::Eval
            ((FInterpCurve<UE::Math::TVector2<double>_> *)&this->ConstantCurve,
             __return_storage_ptr__,param_1,(TVector2<double> *)&local_18._s_0);
  return __return_storage_ptr__;
}

// GetNumKeys @ 147b69510

int __thiscall UDistributionFloatUniformCurve::GetNumKeys(UDistributionFloatUniformCurve *this)

{
  return (int)this->_padding_;
}

// GetNumSubCurves @ 147b69590

int __thiscall UDistributionFloatUniformCurve::GetNumSubCurves(UDistributionFloatUniformCurve *this)

{
  return 2;
}

// GetOperation @ 147b69990

ERawDistributionOperation __thiscall
UDistributionFloatUniformCurve::GetOperation(UDistributionFloatUniformCurve *this)

{
  ERawDistributionOperation EVar1;
  
  if ((*(int *)&(this->ConstantCurve).field_0x8 != 1) ||
     (EVar1 = RDO_None,
     *(double *)(*(longlong *)&this->ConstantCurve + 0x10) !=
     *(double *)(*(longlong *)&this->ConstantCurve + 8))) {
    EVar1 = RDO_Random;
  }
  return EVar1;
}

// GetOutRange @ 147b69b50

void __thiscall
UDistributionFloatUniformCurve::GetOutRange
          (UDistributionFloatUniformCurve *this,float *param_1,float *param_2)

{
  TVector2<double>_u_0 local_28;
  TVector2<double>_u_0 local_18;
  
  FInterpCurve<UE::Math::TVector2<double>_>::CalcBounds
            ((FInterpCurve<UE::Math::TVector2<double>_> *)&this->_padding_,
             (TVector2<double> *)&local_28._s_0,(TVector2<double> *)&local_18._s_0,
             &UE::Math::TVector2<double>::ZeroVector);
  if (local_28._s_0.Y <= local_28._s_0.X) {
    local_28._s_0.X = local_28._s_0.Y;
  }
  if (local_18._s_0.X <= local_18._s_0.Y) {
    local_18._s_0.X = local_18._s_0.Y;
  }
  *param_1 = (float)local_28._s_0.X;
  *param_2 = (float)local_18._s_0.X;
  return;
}

// GetSubCurveButtonColor @ 147b6faf0

FColor __thiscall
UDistributionFloatUniformCurve::GetSubCurveButtonColor
          (UDistributionFloatUniformCurve *this,int param_1,bool param_2)

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
                         ,0x8d2,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar3.Bits = (*pcVar1)();
    return (FColor_u_0)(FColor_u_0)FVar3._s_0;
  }
  iVar4 = (**(code **)(this->_padding_ + 8))(this);
  if ((iVar4 <= iVar6) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SubCurveIndex < GetNumSubCurves()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                         ,0x8d3,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar3.Bits = (*pcVar1)();
    return (FColor_u_0)(FColor_u_0)FVar3._s_0;
  }
  if (iVar6 == 0) {
    FVar5.Bits = 0xff200000;
    FVar3 = FColor::Red.field0_0x0;
  }
  else {
    if (iVar6 != 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                         ,0x8e3,L"");
      if (!bVar2) {
        return (FColor)(FColor_u_0)param_1;
      }
      pcVar1 = (code *)swi(3);
      FVar3.Bits = (*pcVar1)();
      return (FColor_u_0)(FColor_u_0)FVar3._s_0;
    }
    FVar5.Bits = 0xff002000;
    FVar3 = FColor::Green.field0_0x0;
  }
  if (in_R9B != '\0') {
    FVar3 = FVar5;
  }
  ((FColor_u_0 *)CONCAT44(in_register_00000014,param_1))->_s_0 = (FColor_u_0_s_0)FVar3;
  return (FColor)(FColor_u_0)param_1;
}

// GetTangents @ 147b70390

void __thiscall
UDistributionFloatUniformCurve::GetTangents
          (UDistributionFloatUniformCurve *this,int param_1,int param_2,float *param_3,
          float *param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  double dVar7;
  
  if (1 < (uint)param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(SubIndex >= 0) && (SubIndex < 2)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x93a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((param_2 < 0) || ((int)this->_padding_ <= param_2)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(KeyIndex >= 0) && (KeyIndex < ConstantCurve.Points.Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x93b,L"");
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
    lVar6 = (longlong)param_2 * 0x40;
    *param_3 = (float)*(double *)(this->_padding_ + 0x18 + lVar6);
    uVar4 = 0;
    if (param_2 < (int)this->_padding_) {
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
    dVar7 = *(double *)(lVar6 + 0x28 + this->_padding_);
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
    lVar6 = (longlong)param_2 * 0x40;
    *param_3 = (float)*(double *)(this->_padding_ + 0x20 + lVar6);
    uVar4 = 0;
    if (param_2 < (int)this->_padding_) {
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
    dVar7 = *(double *)(this->_padding_ + 0x30 + lVar6);
  }
  *param_4 = (float)dVar7;
  return;
}

// GetValue @ 147b71d00

float __thiscall
UDistributionFloatUniformCurve::GetValue
          (UDistributionFloatUniformCurve *this,float param_1,UObject *param_2,
          FRandomStream *param_3)

{
  uint uVar1;
  float fVar2;
  TVector2<double>_u_0 local_28;
  TVector2<double>_u_0 local_18;
  
  local_18._s_0.X = 0.0;
  local_18._s_0.Y = 0.0;
  FInterpCurve<UE::Math::TVector2<double>_>::Eval
            ((FInterpCurve<UE::Math::TVector2<double>_> *)&this->ConstantCurve,
             (TVector2<double> *)&local_28._s_0,param_1,(TVector2<double> *)&local_18._s_0);
  if (param_3 == (FRandomStream *)0x0) {
    fVar2 = FGenericPlatformMath::SRand();
  }
  else {
    uVar1 = param_3->Seed * 0xbb38435 + 0x3619636b;
    param_3->Seed = uVar1;
    fVar2 = (float)(uVar1 >> 9 | 0x3f800000) - __real_3f800000;
  }
  return (float)((local_28._s_0.Y - local_28._s_0.X) * (double)fVar2 + local_28._s_0.X);
}

// InitializeRawEntry @ 147b77520

uint __thiscall
UDistributionFloatUniformCurve::InitializeRawEntry
          (UDistributionFloatUniformCurve *this,float param_1,float *param_2)

{
  double local_18;
  double local_10;
  
  (**(code **)(this->_padding_ + 0x2e0))(this,&local_18,param_1,0);
  *param_2 = (float)local_18;
  param_2[1] = (float)local_10;
  return 2;
}

// SetKeyIn @ 147b8b060

int __thiscall
UDistributionFloatUniformCurve::SetKeyIn
          (UDistributionFloatUniformCurve *this,int param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if ((param_1 < 0) || ((int)this->_padding_ <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(KeyIndex >= 0) && (KeyIndex < ConstantCurve.Points.Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x96f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = FInterpCurve<UE::Math::TVector2<double>_>::MovePoint
                    ((FInterpCurve<UE::Math::TVector2<double>_> *)&this->_padding_,param_1,param_2);
  FInterpCurve<UE::Math::TVector2<double>_>::AutoSetTangents
            ((FInterpCurve<UE::Math::TVector2<double>_> *)&this->_padding_,0.0,true);
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 2;
  return iVar3;
}

// SetKeyInterpMode @ 147b8b3e0

void __thiscall
UDistributionFloatUniformCurve::SetKeyInterpMode
          (UDistributionFloatUniformCurve *this,int param_1,EInterpCurveMode param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if ((param_1 < 0) || ((int)this->_padding_ <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(KeyIndex >= 0) && (KeyIndex < ConstantCurve.Points.Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x98d,L"");
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
  *(char *)((longlong)param_1 * 0x40 + 0x38 + this->_padding_) = (char)param_2;
  FInterpCurve<UE::Math::TVector2<double>_>::AutoSetTangents
            ((FInterpCurve<UE::Math::TVector2<double>_> *)&this->_padding_,0.0,true);
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 2;
  return;
}

// SetKeyOut @ 147b8b930

void __thiscall
UDistributionFloatUniformCurve::SetKeyOut
          (UDistributionFloatUniformCurve *this,int param_1,int param_2,float param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  if (1 < (uint)param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(SubIndex >= 0) && (SubIndex < 2)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x97a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((param_2 < 0) || ((int)this->_padding_ <= param_2)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(KeyIndex >= 0) && (KeyIndex < ConstantCurve.Points.Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x97b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = (int)this->_padding_;
  if (param_1 == 0) {
    uVar4 = 0;
    if (param_2 < iVar1) {
      uVar4 = (uint)~param_2 >> 0x1f;
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
    *(double *)((longlong)param_2 * 0x40 + 8 + this->_padding_) = (double)param_3;
  }
  else {
    uVar4 = 0;
    if (param_2 < iVar1) {
      uVar4 = (uint)~param_2 >> 0x1f;
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
    *(double *)((longlong)param_2 * 0x40 + 0x10 + this->_padding_) = (double)param_3;
  }
  FInterpCurve<UE::Math::TVector2<double>_>::AutoSetTangents
            ((FInterpCurve<UE::Math::TVector2<double>_> *)&this->_padding_,0.0,true);
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 2;
  return;
}

// SetTangents @ 147b8d1a0

void __thiscall
UDistributionFloatUniformCurve::SetTangents
          (UDistributionFloatUniformCurve *this,int param_1,int param_2,float param_3,float param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  if (1 < (uint)param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(SubIndex >= 0) && (SubIndex < 2)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x996,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((param_2 < 0) || ((int)this->_padding_ <= param_2)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(KeyIndex >= 0) && (KeyIndex < ConstantCurve.Points.Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x997,L"");
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
    lVar6 = (longlong)param_2 * 0x40;
    *(double *)(lVar6 + 0x18 + this->_padding_) = (double)param_3;
    uVar4 = 0;
    if (param_2 < (int)this->_padding_) {
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
    *(double *)(this->_padding_ + 0x28 + lVar6) = (double)param_4;
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
    lVar6 = (longlong)param_2 * 0x40;
    *(double *)(lVar6 + 0x20 + this->_padding_) = (double)param_3;
    uVar4 = 0;
    if (param_2 < (int)this->_padding_) {
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
    *(double *)(this->_padding_ + 0x30 + lVar6) = (double)param_4;
  }
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 2;
  return;
}

