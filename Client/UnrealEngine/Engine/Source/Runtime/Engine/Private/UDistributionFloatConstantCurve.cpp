// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 23

// StaticClass @ 147265db0

UClass * __cdecl UDistributionFloatConstantCurve::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDistributionFloatConstantCurve.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DistributionFloatConstantCurve",
               &Z_Registration_Info_UClass_UDistributionFloatConstantCurve.InnerSingleton,
               StaticRegisterNativesUDistributionFloatConstantCurve,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDistributionFloatConstantCurve>,
               InternalVTableHelperCtorCaller<UDistributionFloatConstantCurve>,local_res8,
               UDistributionFloat::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDistributionFloatConstantCurve.InnerSingleton;
}

// UDistributionFloatConstantCurve @ 14726ce80

UDistributionFloatConstantCurve * __thiscall
UDistributionFloatConstantCurve::UDistributionFloatConstantCurve
          (UDistributionFloatConstantCurve *this,FVTableHelper *param_1)

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

// ~UDistributionFloatConstantCurve @ 14726d5b0

void __thiscall
UDistributionFloatConstantCurve::~UDistributionFloatConstantCurve
          (UDistributionFloatConstantCurve *this)

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

// GetPrivateStaticClass @ 14726fa20

UClass * __cdecl UDistributionFloatConstantCurve::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDistributionFloatConstantCurve.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DistributionFloatConstantCurve",
               &Z_Registration_Info_UClass_UDistributionFloatConstantCurve.InnerSingleton,
               StaticRegisterNativesUDistributionFloatConstantCurve,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDistributionFloatConstantCurve>,
               InternalVTableHelperCtorCaller<UDistributionFloatConstantCurve>,local_res8,
               UDistributionFloat::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDistributionFloatConstantCurve.InnerSingleton;
}

// StaticRegisterNativesUDistributionFloatConstantCurve @ 147270a80

void __cdecl
UDistributionFloatConstantCurve::StaticRegisterNativesUDistributionFloatConstantCurve(void)

{
  return;
}

// UDistributionFloatConstantCurve @ 147b3aac0

UDistributionFloatConstantCurve * __thiscall
UDistributionFloatConstantCurve::UDistributionFloatConstantCurve
          (UDistributionFloatConstantCurve *this,FObjectInitializer *param_1)

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

// CreateNewKey @ 147b4dff0

int __thiscall
UDistributionFloatConstantCurve::CreateNewKey(UDistributionFloatConstantCurve *this,float param_1)

{
  int iVar1;
  float local_res8 [2];
  
  local_res8[0] = 0.0;
  local_res8[0] =
       FInterpCurve<float>::Eval((FInterpCurve<float> *)&this->_padding_,param_1,local_res8);
  iVar1 = FInterpCurve<float>::AddPoint((FInterpCurve<float> *)&this->_padding_,param_1,local_res8);
  FInterpCurve<float>::AutoSetTangents((FInterpCurve<float> *)&this->_padding_,0.0,true);
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 2;
  return iVar1;
}

// DeleteKey @ 147b4fe80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UDistributionFloatConstantCurve::DeleteKey(UDistributionFloatConstantCurve *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_1 < 0) || ((int)this->_padding_ <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex >= 0 && KeyIndex < ConstantCurve.Points.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x7a2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<FInterpCurvePoint<float>,TSizedDefaultAllocator<32>_>::RemoveAt
            ((TArray<FInterpCurvePoint<float>,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             param_1,Default);
  FInterpCurve<float>::AutoSetTangents((FInterpCurve<float> *)&this->_padding_,0.0,true);
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 2;
  return;
}

// EvalSub @ 147b5ff80

float __thiscall
UDistributionFloatConstantCurve::EvalSub
          (UDistributionFloatConstantCurve *this,int param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  float local_res10 [6];
  
  if (param_1 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SubIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x791,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  local_res10[0] = 0.0;
  fVar3 = FInterpCurve<float>::Eval((FInterpCurve<float> *)&this->_padding_,param_2,local_res10);
  return fVar3;
}

// GetInRange @ 147b65b70

void __thiscall
UDistributionFloatConstantCurve::GetInRange
          (UDistributionFloatConstantCurve *this,float *param_1,float *param_2)

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
      lVar5 = lVar5 + 0x14;
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

// GetKeyColor @ 147b668d0

FColor __thiscall
UDistributionFloatConstantCurve::GetKeyColor
          (UDistributionFloatConstantCurve *this,int param_1,int param_2,FColor *param_3)

{
  code *pcVar1;
  bool bVar2;
  FColor_u_0 FVar3;
  undefined4 in_register_00000014;
  
  if (param_2 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SubIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x758,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3.Bits = (*pcVar1)();
      return (FColor_u_0)(FColor_u_0)FVar3._s_0;
    }
  }
  if (((int)param_3 < 0) || ((int)this->_padding_ <= (int)param_3)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex >= 0 && KeyIndex < ConstantCurve.Points.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x75a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3.Bits = (*pcVar1)();
      return (FColor_u_0)(FColor_u_0)FVar3._s_0;
    }
  }
  ((FColor_u_0 *)CONCAT44(in_register_00000014,param_1))->_s_0 =
       (FColor_u_0_s_0)FColor::Red.field0_0x0;
  return (FColor)(FColor_u_0)param_1;
}

// GetKeyIn @ 147b66e70

float __thiscall
UDistributionFloatConstantCurve::GetKeyIn(UDistributionFloatConstantCurve *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  
  if ((param_1 < 0) || ((int)this->_padding_ <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex >= 0 && KeyIndex < ConstantCurve.Points.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x74a,L"");
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
  return *(float *)(this->_padding_ + (longlong)param_1 * 0x14);
}

// GetKeyInterpMode @ 147b67230

EInterpCurveMode __thiscall
UDistributionFloatConstantCurve::GetKeyInterpMode(UDistributionFloatConstantCurve *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  EInterpCurveMode EVar3;
  uint uVar4;
  
  if ((param_1 < 0) || ((int)this->_padding_ <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex >= 0 && KeyIndex < ConstantCurve.Points.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x783,L"");
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
  return (EInterpCurveMode)*(byte *)(this->_padding_ + 0x10 + (longlong)param_1 * 0x14);
}

// GetKeyOut @ 147b67630

float __thiscall
UDistributionFloatConstantCurve::GetKeyOut
          (UDistributionFloatConstantCurve *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  
  if (param_1 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SubIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x750,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
  if ((param_2 < 0) || ((int)this->_padding_ <= param_2)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex >= 0 && KeyIndex < ConstantCurve.Points.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x751,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
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
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
  return *(float *)(this->_padding_ + 4 + (longlong)param_2 * 0x14);
}

// GetNumKeys @ 147b694f0

int __thiscall UDistributionFloatConstantCurve::GetNumKeys(UDistributionFloatConstantCurve *this)

{
  return (int)this->_padding_;
}

// GetNumSubCurves @ 147b69570

int __thiscall
UDistributionFloatConstantCurve::GetNumSubCurves(UDistributionFloatConstantCurve *this)

{
  return 1;
}

// GetOutRange @ 147b69b00

void __thiscall
UDistributionFloatConstantCurve::GetOutRange
          (UDistributionFloatConstantCurve *this,float *param_1,float *param_2)

{
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  FInterpCurve<float>::CalcBounds
            ((FInterpCurve<float> *)&this->_padding_,param_1,param_2,local_res8);
  return;
}

// GetTangents @ 147b701c0

void __thiscall
UDistributionFloatConstantCurve::GetTangents
          (UDistributionFloatConstantCurve *this,int param_1,int param_2,float *param_3,
          float *param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (param_1 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SubIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x789,L"");
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
                       ,0x78a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
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
  *param_3 = *(float *)(this->_padding_ + 8 + (longlong)param_2 * 0x14);
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
  *param_4 = *(float *)(this->_padding_ + 0xc + (longlong)param_2 * 0x14);
  return;
}

// GetValue @ 147b71bc0

float __thiscall
UDistributionFloatConstantCurve::GetValue
          (UDistributionFloatConstantCurve *this,float param_1,UObject *param_2,
          FRandomStream *param_3)

{
  float fVar1;
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  fVar1 = FInterpCurve<float>::Eval((FInterpCurve<float> *)&this->ConstantCurve,param_1,local_res8);
  return fVar1;
}

// SetKeyIn @ 147b8af90

int __thiscall
UDistributionFloatConstantCurve::SetKeyIn
          (UDistributionFloatConstantCurve *this,int param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if ((param_1 < 0) || ((int)this->_padding_ <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex >= 0 && KeyIndex < ConstantCurve.Points.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x7ab,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = FInterpCurve<float>::MovePoint((FInterpCurve<float> *)&this->_padding_,param_1,param_2);
  FInterpCurve<float>::AutoSetTangents((FInterpCurve<float> *)&this->_padding_,0.0,true);
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 2;
  return iVar3;
}

// SetKeyInterpMode @ 147b8b2d0

void __thiscall
UDistributionFloatConstantCurve::SetKeyInterpMode
          (UDistributionFloatConstantCurve *this,int param_1,EInterpCurveMode param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if ((param_1 < 0) || ((int)this->_padding_ <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex >= 0 && KeyIndex < ConstantCurve.Points.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x7c0,L"");
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
  *(char *)(this->_padding_ + 0x10 + (longlong)param_1 * 0x14) = (char)param_2;
  FInterpCurve<float>::AutoSetTangents((FInterpCurve<float> *)&this->_padding_,0.0,true);
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 2;
  return;
}

// SetKeyOut @ 147b8b770

void __thiscall
UDistributionFloatConstantCurve::SetKeyOut
          (UDistributionFloatConstantCurve *this,int param_1,int param_2,float param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (param_1 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SubIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x7b6,L"");
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
                       ,0x7b7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
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
  *(float *)(this->_padding_ + 4 + (longlong)param_2 * 0x14) = param_3;
  FInterpCurve<float>::AutoSetTangents((FInterpCurve<float> *)&this->_padding_,0.0,true);
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 2;
  return;
}

// SetTangents @ 147b8cfd0

void __thiscall
UDistributionFloatConstantCurve::SetTangents
          (UDistributionFloatConstantCurve *this,int param_1,int param_2,float param_3,float param_4
          )

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (param_1 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SubIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x7c9,L"");
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
                       ,0x7ca,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
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
  *(float *)(this->_padding_ + 8 + (longlong)param_2 * 0x14) = param_3;
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
  *(float *)(this->_padding_ + 0xc + (longlong)param_2 * 0x14) = param_4;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 2;
  return;
}

