// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 25

// StaticClass @ 147265c50

UClass * __cdecl UDistributionFloatConstant::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDistributionFloatConstant.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DistributionFloatConstant",
               &Z_Registration_Info_UClass_UDistributionFloatConstant.InnerSingleton,
               StaticRegisterNativesUDistributionFloatConstant,0x40,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDistributionFloatConstant>,
               InternalVTableHelperCtorCaller<UDistributionFloatConstant>,local_res8,
               UDistributionFloat::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDistributionFloatConstant.InnerSingleton;
}

// UDistributionFloatConstant @ 14726ce40

UDistributionFloatConstant * __thiscall
UDistributionFloatConstant::UDistributionFloatConstant
          (UDistributionFloatConstant *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FCurveEdInterface__;
  return this;
}

// ~UDistributionFloatConstant @ 14726d590

void __thiscall
UDistributionFloatConstant::~UDistributionFloatConstant(UDistributionFloatConstant *this)

{
  this->_padding_ = (longlong)&UDistribution::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UDistribution::_vftable__for__FCurveEdInterface__;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14726f960

UClass * __cdecl UDistributionFloatConstant::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDistributionFloatConstant.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DistributionFloatConstant",
               &Z_Registration_Info_UClass_UDistributionFloatConstant.InnerSingleton,
               StaticRegisterNativesUDistributionFloatConstant,0x40,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDistributionFloatConstant>,
               InternalVTableHelperCtorCaller<UDistributionFloatConstant>,local_res8,
               UDistributionFloat::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDistributionFloatConstant.InnerSingleton;
}

// StaticRegisterNativesUDistributionFloatConstant @ 147270a70

void __cdecl UDistributionFloatConstant::StaticRegisterNativesUDistributionFloatConstant(void)

{
  return;
}

// UDistributionFloatConstant @ 147b3aa80

UDistributionFloatConstant * __thiscall
UDistributionFloatConstant::UDistributionFloatConstant
          (UDistributionFloatConstant *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 3;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FCurveEdInterface__;
  return this;
}

// CreateNewKey @ 147b4dfe0

int __thiscall
UDistributionFloatConstant::CreateNewKey(UDistributionFloatConstant *this,float param_1)

{
  return 0;
}

// DeleteKey @ 147b4fe40

void __thiscall UDistributionFloatConstant::DeleteKey(UDistributionFloatConstant *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x716,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// EvalSub @ 147b5ff30

float __thiscall
UDistributionFloatConstant::EvalSub(UDistributionFloatConstant *this,int param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (param_1 == 0) {
    return *(float *)&this->_padding_;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("SubIndex == 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                     ,0x70b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    fVar3 = (float)(*pcVar1)();
    return fVar3;
  }
  return *(float *)&this->_padding_;
}

// GetInRange @ 147b65b60

void __thiscall
UDistributionFloatConstant::GetInRange
          (UDistributionFloatConstant *this,float *param_1,float *param_2)

{
  *param_1 = 0.0;
  *param_2 = 0.0;
  return;
}

// GetKeyColor @ 147b66840

FColor __thiscall
UDistributionFloatConstant::GetKeyColor
          (UDistributionFloatConstant *this,int param_1,int param_2,FColor *param_3)

{
  code *pcVar1;
  bool bVar2;
  FColor_u_0 FVar3;
  undefined4 in_register_00000014;
  
  if (param_2 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SubIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x6e7,L"");
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
                       ,0x6e9,L"");
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

// GetKeyIn @ 147b66e30

float __thiscall UDistributionFloatConstant::GetKeyIn(UDistributionFloatConstant *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (param_1 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x6d9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  return 0.0;
}

// GetKeyInterpMode @ 147b671f0

EInterpCurveMode __thiscall
UDistributionFloatConstant::GetKeyInterpMode(UDistributionFloatConstant *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  EInterpCurveMode EVar3;
  
  if (param_1 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x6fd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  return CIM_Constant;
}

// GetKeyOut @ 147b675b0

float __thiscall
UDistributionFloatConstant::GetKeyOut(UDistributionFloatConstant *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (param_1 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SubIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x6df,L"");
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
                       ,0x6e0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  return *(float *)&this->_padding_;
}

// GetNumKeys @ 147b694e0

int __thiscall UDistributionFloatConstant::GetNumKeys(UDistributionFloatConstant *this)

{
  return 1;
}

// GetNumSubCurves @ 147b69560

int __thiscall UDistributionFloatConstant::GetNumSubCurves(UDistributionFloatConstant *this)

{
  return 1;
}

// GetOutRange @ 147b69ae0

void __thiscall
UDistributionFloatConstant::GetOutRange
          (UDistributionFloatConstant *this,float *param_1,float *param_2)

{
  *param_1 = *(float *)&this->_padding_;
  *param_2 = *(float *)&this->_padding_;
  return;
}

// GetTangents @ 147b70140

void __thiscall
UDistributionFloatConstant::GetTangents
          (UDistributionFloatConstant *this,int param_1,int param_2,float *param_3,float *param_4)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SubIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x703,L"");
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
                       ,0x704,L"");
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

// GetValue @ 147b71bb0

float __thiscall
UDistributionFloatConstant::GetValue
          (UDistributionFloatConstant *this,float param_1,UObject *param_2,FRandomStream *param_3)

{
  return this->Constant;
}

// PostInitProperties @ 147b7d870

void __thiscall UDistributionFloatConstant::PostInitProperties(UDistributionFloatConstant *this)

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
    this->Constant = 1.2345e-20;
  }
  return;
}

// PostLoad @ 147b7dad0

void __thiscall UDistributionFloatConstant::PostLoad(UDistributionFloatConstant *this)

{
  UObject::PostLoad((UObject *)this);
  if (__real_1e6930c2 == this->Constant) {
    this->Constant = 0.0;
  }
  return;
}

// SetKeyIn @ 147b8af50

int __thiscall
UDistributionFloatConstant::SetKeyIn(UDistributionFloatConstant *this,int param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x71b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return 0;
}

// SetKeyInterpMode @ 147b8b290

void __thiscall
UDistributionFloatConstant::SetKeyInterpMode
          (UDistributionFloatConstant *this,int param_1,EInterpCurveMode param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x72a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// SetKeyOut @ 147b8b6e0

void __thiscall
UDistributionFloatConstant::SetKeyOut
          (UDistributionFloatConstant *this,int param_1,int param_2,float param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SubIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x721,L"");
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
                       ,0x722,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 2;
  *(float *)&this->_padding_ = param_3;
  return;
}

// SetTangents @ 147b8cf60

void __thiscall
UDistributionFloatConstant::SetTangents
          (UDistributionFloatConstant *this,int param_1,int param_2,float param_3,float param_4)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SubIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x72f,L"");
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
                       ,0x730,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

