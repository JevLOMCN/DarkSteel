// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 28

// StaticClass @ 147266490

UClass * __cdecl UDistributionFloatUniform::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDistributionFloatUniform.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DistributionFloatUniform",
               &Z_Registration_Info_UClass_UDistributionFloatUniform.InnerSingleton,
               StaticRegisterNativesUDistributionFloatUniform,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDistributionFloatUniform>,
               InternalVTableHelperCtorCaller<UDistributionFloatUniform>,local_res8,
               UDistributionFloat::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDistributionFloatUniform.InnerSingleton;
}

// UDistributionFloatUniform @ 14726cf50

UDistributionFloatUniform * __thiscall
UDistributionFloatUniform::UDistributionFloatUniform
          (UDistributionFloatUniform *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FCurveEdInterface__;
  return this;
}

// ~UDistributionFloatUniform @ 14726d650

void __thiscall
UDistributionFloatUniform::~UDistributionFloatUniform(UDistributionFloatUniform *this)

{
  this->_padding_ = (longlong)&UDistribution::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UDistribution::_vftable__for__FCurveEdInterface__;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14726fc60

UClass * __cdecl UDistributionFloatUniform::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDistributionFloatUniform.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DistributionFloatUniform",
               &Z_Registration_Info_UClass_UDistributionFloatUniform.InnerSingleton,
               StaticRegisterNativesUDistributionFloatUniform,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDistributionFloatUniform>,
               InternalVTableHelperCtorCaller<UDistributionFloatUniform>,local_res8,
               UDistributionFloat::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDistributionFloatUniform.InnerSingleton;
}

// StaticRegisterNativesUDistributionFloatUniform @ 147270ab0

void __cdecl UDistributionFloatUniform::StaticRegisterNativesUDistributionFloatUniform(void)

{
  return;
}

// UDistributionFloatUniform @ 147b3ab60

UDistributionFloatUniform * __thiscall
UDistributionFloatUniform::UDistributionFloatUniform
          (UDistributionFloatUniform *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 3;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FCurveEdInterface__;
  return this;
}

// CreateNewKey @ 147b4e070

int __thiscall
UDistributionFloatUniform::CreateNewKey(UDistributionFloatUniform *this,float param_1)

{
  return 0;
}

// DeleteKey @ 147b4ff00

void __thiscall UDistributionFloatUniform::DeleteKey(UDistributionFloatUniform *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x876,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// EvalSub @ 147b5fff0

float __thiscall
UDistributionFloatUniform::EvalSub(UDistributionFloatUniform *this,int param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (param_1 == 0) {
    return *(float *)&this->_padding_;
  }
  if (param_1 != 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SubIndex == 0 || SubIndex == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x86b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  return *(float *)((longlong)&this->_padding_ + 4);
}

// GetInRange @ 147b65c90

void __thiscall
UDistributionFloatUniform::GetInRange(UDistributionFloatUniform *this,float *param_1,float *param_2)

{
  *param_1 = 0.0;
  *param_2 = 0.0;
  return;
}

// GetKeyColor @ 147b66970

FColor __thiscall
UDistributionFloatUniform::GetKeyColor
          (UDistributionFloatUniform *this,int param_1,int param_2,FColor *param_3)

{
  code *pcVar1;
  bool bVar2;
  FColor_u_0 FVar3;
  undefined4 in_register_00000014;
  
  if (1 < (uint)param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SubIndex == 0 || SubIndex == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x83d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3.Bits = (*pcVar1)();
      return (FColor_u_0)(FColor_u_0)FVar3._s_0;
    }
  }
  if ((int)param_3 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x83f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3.Bits = (*pcVar1)();
      return (FColor_u_0)(FColor_u_0)FVar3._s_0;
    }
  }
  FVar3 = FColor::Green.field0_0x0;
  if (param_2 == 0) {
    FVar3 = FColor::Red.field0_0x0;
  }
  ((FColor_u_0 *)CONCAT44(in_register_00000014,param_1))->_s_0 = (FColor_u_0_s_0)FVar3;
  return (FColor)(FColor_u_0)param_1;
}

// GetKeyIn @ 147b66f20

float __thiscall UDistributionFloatUniform::GetKeyIn(UDistributionFloatUniform *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (param_1 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x82f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  return 0.0;
}

// GetKeyInterpMode @ 147b672e0

EInterpCurveMode __thiscall
UDistributionFloatUniform::GetKeyInterpMode(UDistributionFloatUniform *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  EInterpCurveMode EVar3;
  
  if (param_1 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x85d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  return CIM_Constant;
}

// GetKeyOut @ 147b67700

float __thiscall
UDistributionFloatUniform::GetKeyOut(UDistributionFloatUniform *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (1 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SubIndex == 0 || SubIndex == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x835,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  if (param_2 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x836,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  if (param_1 == 0) {
    return *(float *)&this->_padding_;
  }
  return *(float *)((longlong)&this->_padding_ + 4);
}

// GetNumKeys @ 147b69500

int __thiscall UDistributionFloatUniform::GetNumKeys(UDistributionFloatUniform *this)

{
  return 1;
}

// GetNumSubCurves @ 147b69580

int __thiscall UDistributionFloatUniform::GetNumSubCurves(UDistributionFloatUniform *this)

{
  return 2;
}

// GetOperation @ 147b69970

ERawDistributionOperation __thiscall
UDistributionFloatUniform::GetOperation(UDistributionFloatUniform *this)

{
  ERawDistributionOperation EVar1;
  
  EVar1 = RDO_None;
  if (this->Max != this->Min) {
    EVar1 = RDO_Random;
  }
  return EVar1;
}

// GetOutRange @ 147b69b30

void __thiscall
UDistributionFloatUniform::GetOutRange
          (UDistributionFloatUniform *this,float *param_1,float *param_2)

{
  *param_1 = *(float *)&this->_padding_;
  *param_2 = *(float *)((longlong)&this->_padding_ + 4);
  return;
}

// GetSubCurveButtonColor @ 147b6fa00

FColor __thiscall
UDistributionFloatUniform::GetSubCurveButtonColor
          (UDistributionFloatUniform *this,int param_1,bool param_2)

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
                         ,0x815,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar3.Bits = (*pcVar1)();
    return (FColor_u_0)(FColor_u_0)FVar3._s_0;
  }
  iVar4 = (**(code **)(this->_padding_ + 8))(this);
  if ((iVar4 <= iVar6) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SubCurveIndex < GetNumSubCurves()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                         ,0x816,L""), bVar2)) {
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
                         ,0x826,L"");
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

// GetTangents @ 147b70300

void __thiscall
UDistributionFloatUniform::GetTangents
          (UDistributionFloatUniform *this,int param_1,int param_2,float *param_3,float *param_4)

{
  code *pcVar1;
  bool bVar2;
  
  if (1 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SubIndex == 0 || SubIndex == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x863,L"");
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
                       ,0x864,L"");
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

// GetValue @ 147b71ca0

float __thiscall
UDistributionFloatUniform::GetValue
          (UDistributionFloatUniform *this,float param_1,UObject *param_2,FRandomStream *param_3)

{
  uint uVar1;
  float fVar2;
  
  if (param_3 == (FRandomStream *)0x0) {
    fVar2 = FGenericPlatformMath::SRand();
  }
  else {
    uVar1 = param_3->Seed * 0xbb38435 + 0x3619636b;
    param_3->Seed = uVar1;
    fVar2 = (float)(uVar1 >> 9 | 0x3f800000) - __real_3f800000;
  }
  return (this->Min - this->Max) * fVar2 + this->Max;
}

// InitializeRawEntry @ 147b77500

uint __thiscall
UDistributionFloatUniform::InitializeRawEntry
          (UDistributionFloatUniform *this,float param_1,float *param_2)

{
  *param_2 = this->Min;
  param_2[1] = this->Max;
  return 2;
}

// PostInitProperties @ 147b7d900

void __thiscall UDistributionFloatUniform::PostInitProperties(UDistributionFloatUniform *this)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  UObject::PostInitProperties((UObject *)this);
  if (((uint)this->_padding_ >> 10 & 1) != 0) {
    lVar2 = this->_padding_;
    pUVar3 = Z_Construct_UClass_UParticleModule_NoRegister();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) {
      lVar2 = this->_padding_;
      pUVar3 = Z_Construct_UClass_USoundNode_NoRegister();
      lVar2 = *(longlong *)(lVar2 + 0x10);
      iVar1 = (int)pUVar3->_padding_;
      if (*(int *)(lVar2 + 0x38) < iVar1) {
        return;
      }
      if ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_) {
        return;
      }
    }
    this->Min = 1.2345e-20;
    this->Max = 1.2345e-20;
  }
  return;
}

// PostLoad @ 147b7db00

void __thiscall UDistributionFloatUniform::PostLoad(UDistributionFloatUniform *this)

{
  float fVar1;
  
  UObject::PostLoad((UObject *)this);
  fVar1 = __real_1e6930c2;
  if (__real_1e6930c2 == this->Min) {
    this->Min = 0.0;
  }
  if (fVar1 == this->Max) {
    this->Max = 0.0;
  }
  return;
}

// SetKeyIn @ 147b8b020

int __thiscall
UDistributionFloatUniform::SetKeyIn(UDistributionFloatUniform *this,int param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x87b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return 0;
}

// SetKeyInterpMode @ 147b8b3a0

void __thiscall
UDistributionFloatUniform::SetKeyInterpMode
          (UDistributionFloatUniform *this,int param_1,EInterpCurveMode param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x893,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// SetKeyOut @ 147b8b870

void __thiscall
UDistributionFloatUniform::SetKeyOut
          (UDistributionFloatUniform *this,int param_1,int param_2,float param_3)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (1 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SubIndex == 0 || SubIndex == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x881,L"");
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
                       ,0x882,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 2;
  if (param_1 == 0) {
    fVar3 = *(float *)((longlong)&this->_padding_ + 4);
    if (param_3 <= fVar3) {
      fVar3 = param_3;
    }
    *(float *)&this->_padding_ = fVar3;
  }
  else {
    fVar3 = *(float *)&this->_padding_;
    if (*(float *)&this->_padding_ <= param_3) {
      fVar3 = param_3;
    }
    *(float *)((longlong)&this->_padding_ + 4) = fVar3;
  }
  return;
}

// SetTangents @ 147b8d130

void __thiscall
UDistributionFloatUniform::SetTangents
          (UDistributionFloatUniform *this,int param_1,int param_2,float param_3,float param_4)

{
  code *pcVar1;
  bool bVar2;
  
  if (1 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SubIndex == 0 || SubIndex == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x898,L"");
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
                       ,0x899,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

