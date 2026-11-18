// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 31

// StaticClass @ 1472686c0

UClass * __cdecl UDistributionVectorUniformCurve::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDistributionVectorUniformCurve.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DistributionVectorUniformCurve",
               &Z_Registration_Info_UClass_UDistributionVectorUniformCurve.InnerSingleton,
               StaticRegisterNativesUDistributionVectorUniformCurve,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDistributionVectorUniformCurve>,
               InternalVTableHelperCtorCaller<UDistributionVectorUniformCurve>,local_res8,
               UDistributionVector::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDistributionVectorUniformCurve.InnerSingleton;
}

// UDistributionVectorUniformCurve @ 14726d170

UDistributionVectorUniformCurve * __thiscall
UDistributionVectorUniformCurve::UDistributionVectorUniformCurve
          (UDistributionVectorUniformCurve *this,FVTableHelper *param_1)

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

// ~UDistributionVectorUniformCurve @ 14726d7d0

void __thiscall
UDistributionVectorUniformCurve::~UDistributionVectorUniformCurve
          (UDistributionVectorUniformCurve *this)

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

// GetPrivateStaticClass @ 147270260

UClass * __cdecl UDistributionVectorUniformCurve::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDistributionVectorUniformCurve.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DistributionVectorUniformCurve",
               &Z_Registration_Info_UClass_UDistributionVectorUniformCurve.InnerSingleton,
               StaticRegisterNativesUDistributionVectorUniformCurve,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDistributionVectorUniformCurve>,
               InternalVTableHelperCtorCaller<UDistributionVectorUniformCurve>,local_res8,
               UDistributionVector::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDistributionVectorUniformCurve.InnerSingleton;
}

// StaticRegisterNativesUDistributionVectorUniformCurve @ 147270b30

void __cdecl
UDistributionVectorUniformCurve::StaticRegisterNativesUDistributionVectorUniformCurve(void)

{
  return;
}

// UDistributionVectorUniformCurve @ 147b3ad40

UDistributionVectorUniformCurve * __thiscall
UDistributionVectorUniformCurve::UDistributionVectorUniformCurve
          (UDistributionVectorUniformCurve *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  
  UObject::UObject((UObject *)this,param_1);
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 3;
  this->bLockAxes1 = 0;
  this->bLockAxes2 = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FCurveEdInterface__;
  *(undefined8 *)&this->ConstantCurve = 0;
  *(undefined8 *)&(this->ConstantCurve).field_0x8 = 0;
  (this->ConstantCurve).field_0x10 = 0;
  *(undefined4 *)&(this->ConstantCurve).field_0x14 = 0;
  this->LockedAxes[0] = '\0';
  this->LockedAxes[1] = '\0';
  this->MirrorFlags[0] = '\x01';
  this->MirrorFlags[1] = '\x01';
  this->MirrorFlags[2].Value = '\x01';
  this->bUseExtremes = 0;
  return this;
}

// CreateNewKey @ 147b4e1a0

int __thiscall
UDistributionVectorUniformCurve::CreateNewKey(UDistributionVectorUniformCurve *this,float param_1)

{
  int iVar1;
  TVector<double>_u_0 local_78;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  FTwoVectors local_48;
  
  local_78._s_0.Z = 0.0;
  uStack_60 = 0;
  local_78._s_0.X = 0.0;
  local_78._s_0.Y = 0.0;
  local_58 = 0;
  uStack_50 = 0;
  FInterpCurve<FTwoVectors>::Eval
            ((FInterpCurve<FTwoVectors> *)&this->_padding_,&local_48,param_1,
             (FTwoVectors *)&local_78._s_0);
  iVar1 = FInterpCurve<FTwoVectors>::AddPoint
                    ((FInterpCurve<FTwoVectors> *)&this->_padding_,param_1,&local_48);
  FInterpCurve<FTwoVectors>::AutoSetTangents((FInterpCurve<FTwoVectors> *)&this->_padding_,0.0,true)
  ;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 2;
  return iVar1;
}

// DeleteKey @ 147b500c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UDistributionVectorUniformCurve::DeleteKey(UDistributionVectorUniformCurve *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_1 < 0) || ((int)this->_padding_ <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(KeyIndex >= 0) && (KeyIndex < ConstantCurve.Points.Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0xfd7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<FInterpCurvePoint<FTwoVectors>,TSizedDefaultAllocator<32>_>::RemoveAt
            ((TArray<FInterpCurvePoint<FTwoVectors>,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             param_1,Default);
  FInterpCurve<FTwoVectors>::AutoSetTangents((FInterpCurve<FTwoVectors> *)&this->_padding_,0.0,true)
  ;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 2;
  return;
}

// EvalSub @ 147b601f0

float __thiscall
UDistributionVectorUniformCurve::EvalSub
          (UDistributionVectorUniformCurve *this,int param_1,float param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  TVector<double>_u_0 local_78;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  FTwoVectors local_48;
  
  if (5 < (uint)param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(SubIndex >= 0) && (SubIndex < 6)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0xfbb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar5 = (float)(*pcVar2)();
      return fVar5;
    }
  }
  local_78._s_0.X = 0.0;
  local_78._s_0.Y = 0.0;
  local_78._s_0.Z = 0.0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FInterpCurve<FTwoVectors>::Eval
            ((FInterpCurve<FTwoVectors> *)&this->_padding_,&local_48,param_2,
             (FTwoVectors *)&local_78._s_0);
  (**(code **)(*(longlong *)&this[-1].ConstantCurve + 0x300))(&this[-1].ConstantCurve,&local_48);
  uVar4 = param_1 / 2;
  if ((param_1 & 1U) == 0) {
    if (2 < uVar4) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x7a2,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        fVar5 = (float)(*pcVar2)();
        return fVar5;
      }
    }
    uVar1 = *(undefined8 *)((longlong)&local_48.v1.field0_0x0 + (longlong)(int)uVar4 * 8);
    uVar6 = (undefined4)uVar1;
    uVar7 = (undefined4)((ulonglong)uVar1 >> 0x20);
  }
  else {
    if (2 < uVar4) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x7a2,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        fVar5 = (float)(*pcVar2)();
        return fVar5;
      }
    }
    uVar1 = *(undefined8 *)((longlong)&local_48.v2.field0_0x0 + (longlong)(int)uVar4 * 8);
    uVar6 = (undefined4)uVar1;
    uVar7 = (undefined4)((ulonglong)uVar1 >> 0x20);
  }
  return (float)(double)CONCAT44(uVar7,uVar6);
}

// GetInRange @ 147b65f10

void __thiscall
UDistributionVectorUniformCurve::GetInRange
          (UDistributionVectorUniformCurve *this,float *param_1,float *param_2)

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
      lVar5 = lVar5 + 0xa0;
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

// GetKeyColor @ 147b66d40

FColor __thiscall
UDistributionVectorUniformCurve::GetKeyColor
          (UDistributionVectorUniformCurve *this,int param_1,int param_2,FColor *param_3)

{
  code *pcVar1;
  bool bVar2;
  FColor_u_0 FVar3;
  undefined4 in_register_00000014;
  FColor_u_0 *pFVar4;
  
  pFVar4 = (FColor_u_0 *)CONCAT44(in_register_00000014,param_1);
  if (5 < (uint)param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(SubIndex >= 0) && (SubIndex < 6)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0xf44,L"");
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
                       ,0xf45,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3.Bits = (*pcVar1)();
      return (FColor_u_0)(FColor_u_0)FVar3._s_0;
    }
  }
  if (param_2 == 0) {
    pFVar4->_s_0 = (FColor_u_0_s_0)FColor::Red.field0_0x0;
  }
  else if (param_2 == 1) {
    pFVar4->Bits = 0xff800000;
  }
  else if (param_2 == 2) {
    pFVar4->_s_0 = (FColor_u_0_s_0)FColor::Green.field0_0x0;
  }
  else if (param_2 == 3) {
    pFVar4->Bits = 0xff008000;
  }
  else if (param_2 == 4) {
    pFVar4->_s_0 = (FColor_u_0_s_0)FColor::Blue.field0_0x0;
  }
  else {
    pFVar4->Bits = 0xff000080;
  }
  return (FColor)(FColor_u_0)param_1;
}

// GetKeyIn @ 147b67140

float __thiscall
UDistributionVectorUniformCurve::GetKeyIn(UDistributionVectorUniformCurve *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  
  if ((param_1 < 0) || ((int)this->_padding_ <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex >= 0 && KeyIndex < ConstantCurve.Points.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0xf2c,L"");
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
  return *(float *)((longlong)param_1 * 0xa0 + this->_padding_);
}

// GetKeyInterpMode @ 147b67500

EInterpCurveMode __thiscall
UDistributionVectorUniformCurve::GetKeyInterpMode(UDistributionVectorUniformCurve *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  EInterpCurveMode EVar3;
  uint uVar4;
  
  if ((param_1 < 0) || ((int)this->_padding_ <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(KeyIndex >= 0) && (KeyIndex < ConstantCurve.Points.Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0xf8b,L"");
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
  return (EInterpCurveMode)*(byte *)((longlong)param_1 * 0xa0 + 0x98 + this->_padding_);
}

// GetKeyOut @ 147b67d50

float __thiscall
UDistributionVectorUniformCurve::GetKeyOut
          (UDistributionVectorUniformCurve *this,int param_1,int param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  undefined8 *puVar8;
  float fVar9;
  double local_d8 [2];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  double dStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if ((5 < (uint)param_1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(SubIndex >= 0) && (SubIndex < 6)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                         ,0xf32,L""), bVar6)) {
    pcVar1 = (code *)swi(3);
    fVar9 = (float)(*pcVar1)();
    return fVar9;
  }
  if (((param_2 < 0) || ((int)this->_padding_ <= param_2)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(KeyIndex >= 0) && (KeyIndex < ConstantCurve.Points.Num())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                         ,0xf33,L""), bVar6)) {
    pcVar1 = (code *)swi(3);
    fVar9 = (float)(*pcVar1)();
    return fVar9;
  }
  uVar7 = 0;
  if (param_2 < (int)this->_padding_) {
    uVar7 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar1 = (code *)swi(3);
    fVar9 = (float)(*pcVar1)();
    return fVar9;
  }
  puVar8 = (undefined8 *)((longlong)param_2 * 0xa0 + this->_padding_);
  local_a8 = *puVar8;
  local_d8[0] = (double)puVar8[1];
  local_d8[1] = (double)puVar8[2];
  uVar2 = puVar8[3];
  uVar3 = puVar8[4];
  uVar4 = puVar8[5];
  uVar5 = puVar8[6];
  uStack_70 = puVar8[7];
  local_68 = puVar8[8];
  uStack_60 = puVar8[9];
  local_58 = puVar8[10];
  uStack_50 = puVar8[0xb];
  local_48 = puVar8[0xc];
  uStack_40 = puVar8[0xd];
  local_28 = puVar8[0x10];
  uStack_20 = puVar8[0x11];
  local_38 = puVar8[0xe];
  uStack_30 = puVar8[0xf];
  local_18 = puVar8[0x12];
  uStack_10 = puVar8[0x13];
  uStack_90._0_4_ = (undefined4)uVar2;
  uStack_90._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_88._0_4_ = (undefined4)uVar3;
  local_88._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  uStack_80._0_4_ = (undefined4)uVar4;
  uStack_80._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_78._0_4_ = (undefined4)uVar5;
  local_78._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  local_c8 = (undefined4)uStack_90;
  uStack_c4 = uStack_90._4_4_;
  uStack_c0 = (undefined4)local_88;
  uStack_bc = local_88._4_4_;
  local_b8 = (undefined4)uStack_80;
  uStack_b4 = uStack_80._4_4_;
  uStack_b0 = (undefined4)local_78;
  uStack_ac = local_78._4_4_;
  dStack_a0 = local_d8[0];
  local_98 = local_d8[1];
  uStack_90 = uVar2;
  local_88 = uVar3;
  uStack_80 = uVar4;
  local_78 = uVar5;
  (**(code **)(*(longlong *)&this[-1].ConstantCurve + 0x300))(&this[-1].ConstantCurve,local_d8);
  uVar7 = param_1 / 2;
  if ((param_1 & 1U) == 0) {
    if ((2 < uVar7) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x7a2,L""), bVar6)) {
      pcVar1 = (code *)swi(3);
      fVar9 = (float)(*pcVar1)();
      return fVar9;
    }
    return (float)local_d8[(int)uVar7];
  }
  if ((2 < uVar7) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x7a2,L""), bVar6)) {
    pcVar1 = (code *)swi(3);
    fVar9 = (float)(*pcVar1)();
    return fVar9;
  }
  return (float)*(double *)(&uStack_c0 + (longlong)(int)uVar7 * 2);
}

// GetMaxValue @ 147b68080

TVector<double> * __thiscall
UDistributionVectorUniformCurve::GetMaxValue
          (UDistributionVectorUniformCurve *this,TVector<double> *__return_storage_ptr__)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  TVector<double> *pTVar4;
  
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("!L\"Don\'t call me!\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                     ,0xec9,L"");
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TVector<double> *)(*pcVar1)();
    return pTVar4;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetMinMaxValue @ 147b691d0

FTwoVectors * __thiscall
UDistributionVectorUniformCurve::GetMinMaxValue
          (UDistributionVectorUniformCurve *this,FTwoVectors *__return_storage_ptr__,float param_1,
          UObject *param_2)

{
  TVector<double>_u_0 local_38;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_38._s_0.X = 0.0;
  local_38._s_0.Y = 0.0;
  local_38._s_0.Z = 0.0;
  uStack_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  FInterpCurve<FTwoVectors>::Eval
            ((FInterpCurve<FTwoVectors> *)&this->ConstantCurve,__return_storage_ptr__,param_1,
             (FTwoVectors *)&local_38._s_0);
  return __return_storage_ptr__;
}

// GetMinValue @ 147b69340

TVector<double> * __thiscall
UDistributionVectorUniformCurve::GetMinValue
          (UDistributionVectorUniformCurve *this,TVector<double> *__return_storage_ptr__)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  TVector<double> *pTVar4;
  
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("!L\"Don\'t call me!\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                     ,0xec1,L"");
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TVector<double> *)(*pcVar1)();
    return pTVar4;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetNumKeys @ 147b69550

int __thiscall UDistributionVectorUniformCurve::GetNumKeys(UDistributionVectorUniformCurve *this)

{
  return (int)this->_padding_;
}

// GetNumSubCurves @ 147b69630

int __thiscall
UDistributionVectorUniformCurve::GetNumSubCurves(UDistributionVectorUniformCurve *this)

{
  return 6;
}

// GetOperation @ 147b69a00

ERawDistributionOperation __thiscall
UDistributionVectorUniformCurve::GetOperation(UDistributionVectorUniformCurve *this)

{
  longlong lVar1;
  
  if ((((*(int *)&(this->ConstantCurve).field_0x8 == 1) &&
       (lVar1 = *(longlong *)&this->ConstantCurve,
       *(double *)(lVar1 + 0x20) == *(double *)(lVar1 + 8))) &&
      (*(double *)(lVar1 + 0x28) == *(double *)(lVar1 + 0x10))) &&
     (*(double *)(lVar1 + 0x30) == *(double *)(lVar1 + 0x18))) {
    return RDO_None;
  }
  return this->bUseExtremes + RDO_Random;
}

// GetOutRange @ 147b69e80

void __thiscall
UDistributionVectorUniformCurve::GetOutRange
          (UDistributionVectorUniformCurve *this,float *param_1,float *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  TVector<double>_u_0 local_128;
  double dStack_110;
  double local_108;
  double dStack_100;
  TVector<double>_u_0 local_f8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  TVector<double>_u_0 local_c8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  
  local_128._s_0.X = 0.0;
  local_128._s_0.Y = 0.0;
  local_128._s_0.Z = 0.0;
  dStack_110 = 0.0;
  local_108 = 0.0;
  dStack_100 = 0.0;
  local_f8._s_0.X = 0.0;
  local_f8._s_0.Y = 0.0;
  local_f8._s_0.Z = 0.0;
  dStack_e0 = 0.0;
  local_d8 = 0.0;
  dStack_d0 = 0.0;
  local_c8._s_0.X = 0.0;
  local_c8._s_0.Y = 0.0;
  local_c8._s_0.Z = 0.0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  FInterpCurve<FTwoVectors>::CalcBounds
            ((FInterpCurve<FTwoVectors> *)&this->_padding_,(FTwoVectors *)&local_128._s_0,
             (FTwoVectors *)&local_f8._s_0,(FTwoVectors *)&local_c8._s_0);
  (**(code **)(*(longlong *)&this[-1].ConstantCurve + 0x300))(&this[-1].ConstantCurve,&local_128);
  (**(code **)(*(longlong *)&this[-1].ConstantCurve + 0x300))(&this[-1].ConstantCurve,&local_f8);
  uVar16 = (undefined4)((ulonglong)local_128._0_8_ >> 0x20);
  uVar7 = (undefined4)((ulonglong)local_128._8_8_ >> 0x20);
  uVar4 = (undefined4)((ulonglong)local_108 >> 0x20);
  uVar13 = (undefined4)((ulonglong)dStack_100 >> 0x20);
  uVar14 = (undefined4)((ulonglong)local_f8._0_8_ >> 0x20);
  uVar2 = (undefined4)((ulonglong)local_f8._8_8_ >> 0x20);
  uVar5 = (undefined4)((ulonglong)local_d8 >> 0x20);
  uVar3 = (undefined4)((ulonglong)dStack_d0 >> 0x20);
  uVar18 = (undefined4)((ulonglong)dStack_110 >> 0x20);
  uVar9 = (undefined4)((ulonglong)local_128._16_8_ >> 0x20);
  uVar11 = (undefined4)((ulonglong)dStack_e0 >> 0x20);
  uVar1 = (undefined4)((ulonglong)local_f8._16_8_ >> 0x20);
  uVar8 = SUB84(dStack_110,0);
  uVar10 = uVar18;
  if (local_108 <= dStack_110) {
    uVar8 = SUB84(local_108,0);
    uVar10 = uVar4;
  }
  uVar17 = SUB84(dStack_110,0);
  if (dStack_110 <= local_108) {
    uVar17 = SUB84(local_108,0);
    uVar18 = uVar4;
  }
  uVar4 = SUB84(local_128._s_0.X,0);
  uVar6 = uVar16;
  if (local_128._s_0.Y <= local_128._s_0.X) {
    uVar4 = SUB84(local_128._s_0.Y,0);
    uVar6 = uVar7;
  }
  uVar15 = SUB84(local_128._s_0.X,0);
  if (local_128._s_0.X <= local_128._s_0.Y) {
    uVar15 = SUB84(local_128._s_0.Y,0);
    uVar16 = uVar7;
  }
  if (dStack_100 <= (double)CONCAT44(uVar10,uVar8)) {
    uVar8 = SUB84(dStack_100,0);
    uVar10 = uVar13;
  }
  if (local_128._s_0.Z <= (double)CONCAT44(uVar6,uVar4)) {
    uVar4 = SUB84(local_128._s_0.Z,0);
    uVar6 = uVar9;
  }
  if ((double)CONCAT44(uVar18,uVar17) <= dStack_100) {
    uVar17 = SUB84(dStack_100,0);
    uVar18 = uVar13;
  }
  if ((double)CONCAT44(uVar16,uVar15) <= local_128._s_0.Z) {
    uVar15 = SUB84(local_128._s_0.Z,0);
    uVar16 = uVar9;
  }
  if ((double)CONCAT44(uVar6,uVar4) <= (double)CONCAT44(uVar10,uVar8)) {
    uVar8 = uVar4;
    uVar10 = uVar6;
  }
  if ((double)CONCAT44(uVar18,uVar17) <= (double)CONCAT44(uVar16,uVar15)) {
    uVar17 = uVar15;
    uVar18 = uVar16;
  }
  uVar16 = SUB84(dStack_e0,0);
  uVar4 = uVar11;
  if (dStack_e0 <= local_d8) {
    uVar16 = SUB84(local_d8,0);
    uVar4 = uVar5;
  }
  dVar12 = (double)(float)(double)CONCAT44(uVar10,uVar8);
  uVar9 = SUB84(dStack_e0,0);
  if (local_d8 <= dStack_e0) {
    uVar9 = SUB84(local_d8,0);
    uVar11 = uVar5;
  }
  uVar5 = SUB84(local_f8._s_0.X,0);
  uVar7 = uVar14;
  if (local_f8._s_0.Y <= local_f8._s_0.X) {
    uVar5 = SUB84(local_f8._s_0.Y,0);
    uVar7 = uVar2;
  }
  if ((double)CONCAT44(uVar4,uVar16) <= dStack_d0) {
    uVar16 = SUB84(dStack_d0,0);
    uVar4 = uVar3;
  }
  uVar13 = SUB84(local_f8._s_0.X,0);
  if (local_f8._s_0.X <= local_f8._s_0.Y) {
    uVar13 = SUB84(local_f8._s_0.Y,0);
    uVar14 = uVar2;
  }
  if (dStack_d0 <= (double)CONCAT44(uVar11,uVar9)) {
    uVar9 = SUB84(dStack_d0,0);
    uVar11 = uVar3;
  }
  if (local_f8._s_0.Z <= (double)CONCAT44(uVar7,uVar5)) {
    uVar5 = SUB84(local_f8._s_0.Z,0);
    uVar7 = uVar1;
  }
  if ((double)CONCAT44(uVar7,uVar5) <= (double)CONCAT44(uVar11,uVar9)) {
    uVar9 = uVar5;
    uVar11 = uVar7;
  }
  if ((double)CONCAT44(uVar11,uVar9) <= dVar12) {
    dVar12 = (double)CONCAT44(uVar11,uVar9);
  }
  *param_1 = (float)dVar12;
  if ((double)CONCAT44(uVar14,uVar13) <= local_f8._s_0.Z) {
    uVar13 = SUB84(local_f8._s_0.Z,0);
    uVar14 = uVar1;
  }
  if ((double)CONCAT44(uVar4,uVar16) <= (double)CONCAT44(uVar14,uVar13)) {
    uVar16 = uVar13;
    uVar4 = uVar14;
  }
  dVar12 = (double)(float)(double)CONCAT44(uVar18,uVar17);
  if ((double)(float)(double)CONCAT44(uVar18,uVar17) <= (double)CONCAT44(uVar4,uVar16)) {
    dVar12 = (double)CONCAT44(uVar4,uVar16);
  }
  *param_2 = (float)dVar12;
  return;
}

// GetRange @ 147b6d0b0

void __thiscall
UDistributionVectorUniformCurve::GetRange
          (UDistributionVectorUniformCurve *this,TVector<double> *param_1,TVector<double> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  TVector<double>_u_0 local_98;
  double dStack_80;
  double local_78;
  double dStack_70;
  TVector<double>_u_0 local_68;
  double dStack_50;
  double local_48;
  double dStack_40;
  TVector<double>_u_0 local_38;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_98._s_0.X = 0.0;
  local_98._s_0.Y = 0.0;
  local_98._s_0.Z = 0.0;
  dStack_80 = 0.0;
  local_78 = 0.0;
  dStack_70 = 0.0;
  local_68._s_0.X = 0.0;
  local_68._s_0.Y = 0.0;
  local_68._s_0.Z = 0.0;
  dStack_50 = 0.0;
  local_48 = 0.0;
  dStack_40 = 0.0;
  local_38._s_0.X = 0.0;
  local_38._s_0.Y = 0.0;
  local_38._s_0.Z = 0.0;
  uStack_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  FInterpCurve<FTwoVectors>::CalcBounds
            ((FInterpCurve<FTwoVectors> *)&this->ConstantCurve,(FTwoVectors *)&local_68._s_0,
             (FTwoVectors *)&local_98._s_0,(FTwoVectors *)&local_38._s_0);
  (**(code **)(this->_padding_ + 0x300))(this,&local_68);
  (**(code **)(this->_padding_ + 0x300))(this,&local_98);
  uVar1 = SUB84(local_98._s_0.X,0);
  uVar2 = (int)((ulonglong)local_98._0_8_ >> 0x20);
  if (local_68._s_0.X <= local_98._s_0.X) {
    uVar1 = SUB84(local_68._s_0.X,0);
    uVar2 = (int)((ulonglong)local_68._0_8_ >> 0x20);
  }
  if (local_68._s_0.Y <= local_98._s_0.Y) {
    local_98._s_0.Y = local_68._s_0.Y;
  }
  (param_1->field0_0x0)._s_0.X = (double)CONCAT44(uVar2,uVar1);
  uVar1 = SUB84(local_98._s_0.Z,0);
  uVar2 = (int)((ulonglong)local_98._16_8_ >> 0x20);
  if (local_68._s_0.Z <= local_98._s_0.Z) {
    uVar1 = SUB84(local_68._s_0.Z,0);
    uVar2 = (int)((ulonglong)local_68._16_8_ >> 0x20);
  }
  (param_1->field0_0x0)._s_0.Y = local_98._s_0.Y;
  (param_1->field0_0x0)._s_0.Z = (double)CONCAT44(uVar2,uVar1);
  if (dStack_80 <= dStack_50) {
    dStack_80 = dStack_50;
  }
  uVar1 = SUB84(local_78,0);
  uVar2 = (int)((ulonglong)local_78 >> 0x20);
  if (local_78 <= local_48) {
    uVar1 = SUB84(local_48,0);
    uVar2 = (int)((ulonglong)local_48 >> 0x20);
  }
  if (dStack_70 <= dStack_40) {
    dStack_70 = dStack_40;
  }
  (param_2->field0_0x0)._s_0.X = dStack_80;
  (param_2->field0_0x0)._s_0.Y = (double)CONCAT44(uVar2,uVar1);
  (param_2->field0_0x0)._s_0.Z = dStack_70;
  return;
}

// GetSubCurveButtonColor @ 147b6ffa0

FColor __thiscall
UDistributionVectorUniformCurve::GetSubCurveButtonColor
          (UDistributionVectorUniformCurve *this,int param_1,bool param_2)

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
                         ,0xef1,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar4.Bits = (*pcVar1)();
    return (FColor_u_0)(FColor_u_0)FVar4._s_0;
  }
  if ((iVar3 <= iVar9) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SubCurveIndex < SubCurves",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                         ,0xef2,L""), bVar2)) {
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
                       ,0xf23,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar4.Bits = (*pcVar1)();
      return (FColor_u_0)(FColor_u_0)FVar4._s_0;
    }
  }
  return (FColor)(FColor_u_0)param_1;
}

// GetTangents @ 147b70980

void __thiscall
UDistributionVectorUniformCurve::GetTangents
          (UDistributionVectorUniformCurve *this,int param_1,int param_2,float *param_3,
          float *param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  double dVar5;
  
  lVar4 = (longlong)param_2;
  if ((5 < (uint)param_1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(SubIndex >= 0) && (SubIndex < 6)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                         ,0xf91,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((param_2 < 0) || ((int)this->_padding_ <= param_2)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(KeyIndex >= 0) && (KeyIndex < ConstantCurve.Points.Num())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                         ,0xf92,L""), bVar2)) {
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
    *param_3 = (float)*(double *)(this->_padding_ + 0x38 + lVar4 * 0xa0);
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
    dVar5 = *(double *)(this->_padding_ + 0x68 + lVar4 * 0xa0);
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
    *param_3 = (float)*(double *)(this->_padding_ + 0x50 + lVar4 * 0xa0);
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
    dVar5 = *(double *)(this->_padding_ + 0x80 + lVar4 * 0xa0);
  }
  else if (param_1 == 2) {
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
    *param_3 = (float)*(double *)(this->_padding_ + 0x40 + lVar4 * 0xa0);
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
    dVar5 = *(double *)(this->_padding_ + 0x70 + lVar4 * 0xa0);
  }
  else if (param_1 == 3) {
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
    *param_3 = (float)*(double *)(this->_padding_ + 0x58 + lVar4 * 0xa0);
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
    dVar5 = *(double *)(this->_padding_ + 0x88 + lVar4 * 0xa0);
  }
  else if (param_1 == 4) {
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
    *param_3 = (float)*(double *)(this->_padding_ + 0x48 + lVar4 * 0xa0);
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
    dVar5 = *(double *)(this->_padding_ + 0x78 + lVar4 * 0xa0);
  }
  else {
    if (param_1 != 5) {
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
    *param_3 = (float)*(double *)(this->_padding_ + 0x60 + lVar4 * 0xa0);
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
    dVar5 = *(double *)(this->_padding_ + 0x90 + lVar4 * 0xa0);
  }
  *param_4 = (float)dVar5;
  return;
}

// GetValue @ 147b72750

TVector<double> * __thiscall
UDistributionVectorUniformCurve::GetValue
          (UDistributionVectorUniformCurve *this,TVector<double> *__return_storage_ptr__,
          float param_1,UObject *param_2,int param_3,FRandomStream *param_4)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  TVector<double>_u_0 local_98;
  double local_80;
  double dStack_78;
  double local_70;
  TVector<double>_u_0 local_68;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_68._s_0.X = 0.0;
  local_68._s_0.Y = 0.0;
  local_68._s_0.Z = 0.0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FInterpCurve<FTwoVectors>::Eval
            ((FInterpCurve<FTwoVectors> *)&this->ConstantCurve,(FTwoVectors *)&local_98._s_0,param_1
             ,(FTwoVectors *)&local_68._s_0);
  fVar8 = __real_3f800000;
  bVar3 = true;
  if (this->bUseExtremes != 0) {
    if (param_3 == 0) {
      if (param_4 == (FRandomStream *)0x0) {
        fVar7 = FGenericPlatformMath::SRand();
      }
      else {
        uVar4 = param_4->Seed * 0xbb38435 + 0x3619636b;
        param_4->Seed = uVar4;
        fVar7 = (float)(uVar4 >> 9 | 0x3f800000) - fVar8;
      }
      if (__real_3f000000 < fVar7) {
        bVar3 = false;
      }
    }
    else {
      bVar3 = true;
      if (param_3 < 0) {
        bVar3 = false;
      }
    }
  }
  (**(code **)(this->_padding_ + 0x300))(this,&local_98);
  if (this->bUseExtremes == 0) {
    if (param_4 == (FRandomStream *)0x0) {
      fVar8 = FGenericPlatformMath::SRand();
      dVar2 = (local_70 - local_98._s_0.Z) * (double)fVar8 + local_98._s_0.Z;
      fVar8 = FGenericPlatformMath::SRand();
      dVar1 = (dStack_78 - local_98._s_0.Y) * (double)fVar8 + local_98._s_0.Y;
      fVar7 = FGenericPlatformMath::SRand();
    }
    else {
      uVar4 = param_4->Seed * 0xbb38435 + 0x3619636b;
      param_4->Seed = uVar4;
      uVar5 = param_4->Seed * 0xbb38435 + 0x3619636b;
      param_4->Seed = uVar5;
      uVar6 = param_4->Seed * 0xbb38435 + 0x3619636b;
      param_4->Seed = uVar6;
      dVar2 = (double)((float)(uVar4 >> 9 | 0x3f800000) - fVar8) * (local_70 - local_98._s_0.Z) +
              local_98._s_0.Z;
      fVar7 = (float)(uVar6 >> 9 | 0x3f800000) - fVar8;
      dVar1 = (double)((float)(uVar5 >> 9 | 0x3f800000) - fVar8) * (dStack_78 - local_98._s_0.Y) +
              local_98._s_0.Y;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (local_80 - local_98._s_0.X) * (double)fVar7 + local_98._s_0.X;
  }
  else if (bVar3) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = local_80;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_78;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = local_70;
  }
  else {
    (__return_storage_ptr__->field0_0x0)._s_0.X = local_98._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = local_98._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = local_98._s_0.Z;
  }
  return __return_storage_ptr__;
}

// InitializeRawEntry @ 147b77680

uint __thiscall
UDistributionVectorUniformCurve::InitializeRawEntry
          (UDistributionVectorUniformCurve *this,float param_1,float *param_2)

{
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  (**(code **)(this->_padding_ + 0x2f8))(this,&local_38,param_1,0);
  (**(code **)(this->_padding_ + 0x300))(this,&local_38);
  *param_2 = (float)local_38;
  param_2[1] = (float)local_30;
  param_2[2] = (float)local_28;
  param_2[3] = (float)local_20;
  param_2[4] = (float)local_18;
  param_2[5] = (float)local_10;
  return 6;
}

// LockAndMirror @ 147b78aa0

void __thiscall
UDistributionVectorUniformCurve::LockAndMirror
          (UDistributionVectorUniformCurve *this,FTwoVectors *param_1)

{
  undefined8 uVar1;
  uchar uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = this->MirrorFlags[0].Value;
  uVar5 = (uint)__xmm_80000000000000008000000000000000;
  uVar6 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  if (uVar2 == '\0') {
    (param_1->v2).field0_0x0._s_0.X = (param_1->v1).field0_0x0._s_0.X;
  }
  else if (uVar2 == '\x02') {
    uVar1 = *(undefined8 *)&(param_1->v1).field0_0x0;
    (param_1->v2).field0_0x0._s_0.X =
         (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar6,(uint)uVar1 ^ uVar5);
  }
  uVar2 = this->MirrorFlags[1].Value;
  if (uVar2 == '\0') {
    (param_1->v2).field0_0x0._s_0.Y = (param_1->v1).field0_0x0._s_0.Y;
  }
  else if (uVar2 == '\x02') {
    uVar1 = *(undefined8 *)((longlong)&(param_1->v1).field0_0x0 + 8);
    (param_1->v2).field0_0x0._s_0.Y =
         (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar6,(uint)uVar1 ^ uVar5);
  }
  uVar2 = this->MirrorFlags[2].Value;
  if (uVar2 == '\0') {
    (param_1->v2).field0_0x0._s_0.Z = (param_1->v1).field0_0x0._s_0.Z;
  }
  else if (uVar2 == '\x02') {
    uVar1 = *(undefined8 *)((longlong)&(param_1->v1).field0_0x0 + 0x10);
    (param_1->v2).field0_0x0._s_0.Z =
         (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar6,(uint)uVar1 ^ uVar5);
  }
  uVar2 = this->LockedAxes[0].Value;
  if (uVar2 == '\x01') {
    (param_1->v1).field0_0x0._s_0.Y = (param_1->v1).field0_0x0._s_0.X;
  }
  else if (uVar2 == '\x02') {
    (param_1->v1).field0_0x0._s_0.Z = (param_1->v1).field0_0x0._s_0.X;
  }
  else if (uVar2 == '\x03') {
    (param_1->v1).field0_0x0._s_0.Z = (param_1->v1).field0_0x0._s_0.Y;
  }
  else if (uVar2 == '\x04') {
    uVar3 = *(undefined4 *)&(param_1->v1).field0_0x0;
    uVar4 = *(undefined4 *)((longlong)&(param_1->v1).field0_0x0 + 4);
    *(undefined4 *)((longlong)&(param_1->v1).field0_0x0 + 8) = uVar3;
    *(undefined4 *)((longlong)&(param_1->v1).field0_0x0 + 0xc) = uVar4;
    *(undefined4 *)((longlong)&(param_1->v1).field0_0x0 + 0x10) = uVar3;
    *(undefined4 *)((longlong)&(param_1->v1).field0_0x0 + 0x14) = uVar4;
  }
  uVar2 = this->LockedAxes[0].Value;
  if (uVar2 == '\x01') {
    (param_1->v2).field0_0x0._s_0.Y = (param_1->v2).field0_0x0._s_0.X;
  }
  else {
    if (uVar2 == '\x02') {
      (param_1->v2).field0_0x0._s_0.Z = (param_1->v2).field0_0x0._s_0.X;
      return;
    }
    if (uVar2 == '\x03') {
      (param_1->v2).field0_0x0._s_0.Z = (param_1->v2).field0_0x0._s_0.Y;
      return;
    }
    if (uVar2 == '\x04') {
      uVar3 = *(undefined4 *)&(param_1->v2).field0_0x0;
      uVar4 = *(undefined4 *)((longlong)&(param_1->v2).field0_0x0 + 4);
      *(undefined4 *)((longlong)&(param_1->v2).field0_0x0 + 8) = uVar3;
      *(undefined4 *)((longlong)&(param_1->v2).field0_0x0 + 0xc) = uVar4;
      *(undefined4 *)((longlong)&(param_1->v2).field0_0x0 + 0x10) = uVar3;
      *(undefined4 *)((longlong)&(param_1->v2).field0_0x0 + 0x14) = uVar4;
      return;
    }
  }
  return;
}

// SetKeyIn @ 147b8b200

int __thiscall
UDistributionVectorUniformCurve::SetKeyIn
          (UDistributionVectorUniformCurve *this,int param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if ((param_1 < 0) || ((int)this->_padding_ <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(KeyIndex >= 0) && (KeyIndex < ConstantCurve.Points.Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0xfe0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = FInterpCurve<FTwoVectors>::MovePoint
                    ((FInterpCurve<FTwoVectors> *)&this->_padding_,param_1,param_2);
  FInterpCurve<FTwoVectors>::AutoSetTangents((FInterpCurve<FTwoVectors> *)&this->_padding_,0.0,true)
  ;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 2;
  return iVar3;
}

// SetKeyInterpMode @ 147b8b600

void __thiscall
UDistributionVectorUniformCurve::SetKeyInterpMode
          (UDistributionVectorUniformCurve *this,int param_1,EInterpCurveMode param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if ((param_1 < 0) || ((int)this->_padding_ <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(KeyIndex >= 0) && (KeyIndex < ConstantCurve.Points.Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x101e,L"");
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
  *(char *)((longlong)param_1 * 0xa0 + 0x98 + this->_padding_) = (char)param_2;
  FInterpCurve<FTwoVectors>::AutoSetTangents((FInterpCurve<FTwoVectors> *)&this->_padding_,0.0,true)
  ;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 2;
  return;
}

// SetKeyOut @ 147b8be40

void __thiscall
UDistributionVectorUniformCurve::SetKeyOut
          (UDistributionVectorUniformCurve *this,int param_1,int param_2,float param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  double dVar5;
  
  if (5 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(SubIndex >= 0) && (SubIndex < 6)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0xfeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_2 < 0) || ((int)this->_padding_ <= param_2)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(KeyIndex >= 0) && (KeyIndex < ConstantCurve.Points.Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0xfec,L"");
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
  lVar4 = (longlong)param_2 * 0xa0 + this->_padding_;
  if (lVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Point",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0xff1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1 == 0) {
    dVar5 = *(double *)(lVar4 + 0x20);
    if (*(double *)(lVar4 + 0x20) <= (double)param_3) {
      dVar5 = (double)param_3;
    }
    *(double *)(lVar4 + 8) = (double)(float)dVar5;
  }
  else if (param_1 == 1) {
    dVar5 = *(double *)(lVar4 + 8);
    if ((double)param_3 <= *(double *)(lVar4 + 8)) {
      dVar5 = (double)param_3;
    }
    *(double *)(lVar4 + 0x20) = (double)(float)dVar5;
  }
  else if (param_1 == 2) {
    dVar5 = *(double *)(lVar4 + 0x28);
    if (*(double *)(lVar4 + 0x28) <= (double)param_3) {
      dVar5 = (double)param_3;
    }
    *(double *)(lVar4 + 0x10) = (double)(float)dVar5;
  }
  else if (param_1 == 3) {
    dVar5 = *(double *)(lVar4 + 0x10);
    if ((double)param_3 <= *(double *)(lVar4 + 0x10)) {
      dVar5 = (double)param_3;
    }
    *(double *)(lVar4 + 0x28) = (double)(float)dVar5;
  }
  else if (param_1 == 4) {
    dVar5 = *(double *)(lVar4 + 0x30);
    if (*(double *)(lVar4 + 0x30) <= (double)param_3) {
      dVar5 = (double)param_3;
    }
    *(double *)(lVar4 + 0x18) = (double)(float)dVar5;
  }
  else if (param_1 == 5) {
    dVar5 = *(double *)(lVar4 + 0x18);
    if ((double)param_3 <= *(double *)(lVar4 + 0x18)) {
      dVar5 = (double)param_3;
    }
    *(double *)(lVar4 + 0x30) = (double)(float)dVar5;
  }
  FInterpCurve<FTwoVectors>::AutoSetTangents((FInterpCurve<FTwoVectors> *)&this->_padding_,0.0,true)
  ;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 2;
  return;
}

// SetTangents @ 147b8d770

void __thiscall
UDistributionVectorUniformCurve::SetTangents
          (UDistributionVectorUniformCurve *this,int param_1,int param_2,float param_3,float param_4
          )

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  
  lVar4 = (longlong)param_2;
  if (5 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(SubIndex >= 0) && (SubIndex < 6)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x1028,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_2 < 0) || ((int)this->_padding_ <= param_2)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(KeyIndex >= 0) && (KeyIndex < ConstantCurve.Points.Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x1029,L"");
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
    *(double *)(this->_padding_ + 0x38 + lVar4 * 0xa0) = (double)param_3;
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
    *(double *)(lVar4 * 0xa0 + 0x68 + this->_padding_) = (double)param_4;
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
    *(double *)(lVar4 * 0xa0 + 0x50 + this->_padding_) = (double)param_3;
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
    *(double *)(lVar4 * 0xa0 + 0x80 + this->_padding_) = (double)param_4;
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
    *(double *)(this->_padding_ + 0x40 + lVar4 * 0xa0) = (double)param_3;
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
    *(double *)(lVar4 * 0xa0 + 0x70 + this->_padding_) = (double)param_4;
  }
  else if (param_1 == 3) {
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
    *(double *)(lVar4 * 0xa0 + 0x58 + this->_padding_) = (double)param_3;
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
    *(double *)(lVar4 * 0xa0 + 0x88 + this->_padding_) = (double)param_4;
  }
  else if (param_1 == 4) {
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
    *(double *)(this->_padding_ + 0x48 + lVar4 * 0xa0) = (double)param_3;
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
    *(double *)(lVar4 * 0xa0 + 0x78 + this->_padding_) = (double)param_4;
  }
  else if (param_1 == 5) {
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
    *(double *)(this->_padding_ + 0x60 + lVar4 * 0xa0) = (double)param_3;
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
    *(double *)(this->_padding_ + 0x90 + lVar4 * 0xa0) = (double)param_4;
  }
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 2;
  return;
}

