// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UIParticle
// Functions: 59

// Construct<FSize_Vector2DCurve> @ 14ac8a590

void __cdecl UE::CoreUObject::Private::Construct<FSize_Vector2DCurve>(void *param_1)

{
  memset(param_1,0,0x1000);
  FUIParticleProperty::FUIParticleProperty(param_1);
  FUIParticleProperty::FUIParticleProperty((FUIParticleProperty *)((longlong)param_1 + 0x800));
  return;
}

// ConstructForTests<FSize_Vector2DCurve> @ 14ac8a5d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSize_Vector2DCurve>(void *param_1)

{
  FUIParticleProperty::FUIParticleProperty(param_1);
  FUIParticleProperty::FUIParticleProperty((FUIParticleProperty *)((longlong)param_1 + 0x800));
  return;
}

// Destruct<FSize_Vector2DCurve> @ 14ac8a600

void __cdecl UE::CoreUObject::Private::Destruct<FSize_Vector2DCurve>(void *param_1)

{
  FUIParticleProperty::~FUIParticleProperty((FUIParticleProperty *)((longlong)param_1 + 0x800));
  FUIParticleProperty::~FUIParticleProperty(param_1);
  return;
}

// Copy<FSize_Vector2DCurve> @ 14ac8a630

bool __cdecl
UE::CoreUObject::Private::Copy<FSize_Vector2DCurve>(void *param_1,void *param_2,int param_3)

{
  FUIParticleProperty *pFVar1;
  FUIParticleProperty *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FUIParticleProperty *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FUIParticleProperty::operator=(this,pFVar1);
      FUIParticleProperty::operator=(this + 1,pFVar1 + 1);
      param_3 = param_3 + -1;
      this = this + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPosotion_Vector2DCurve> @ 14ac8a6c0

void __cdecl UE::CoreUObject::Private::Construct<FPosotion_Vector2DCurve>(void *param_1)

{
  memset(param_1,0,0x1000);
  FUIParticleProperty::FUIParticleProperty(param_1);
  FUIParticleProperty::FUIParticleProperty((FUIParticleProperty *)((longlong)param_1 + 0x800));
  return;
}

// ConstructForTests<FPosotion_Vector2DCurve> @ 14ac8a700

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPosotion_Vector2DCurve>(void *param_1)

{
  FUIParticleProperty::FUIParticleProperty(param_1);
  FUIParticleProperty::FUIParticleProperty((FUIParticleProperty *)((longlong)param_1 + 0x800));
  return;
}

// Destruct<FPosotion_Vector2DCurve> @ 14ac8a730

void __cdecl UE::CoreUObject::Private::Destruct<FPosotion_Vector2DCurve>(void *param_1)

{
  FUIParticleProperty::~FUIParticleProperty((FUIParticleProperty *)((longlong)param_1 + 0x800));
  FUIParticleProperty::~FUIParticleProperty(param_1);
  return;
}

// Copy<FPosotion_Vector2DCurve> @ 14ac8a760

bool __cdecl
UE::CoreUObject::Private::Copy<FPosotion_Vector2DCurve>(void *param_1,void *param_2,int param_3)

{
  FUIParticleProperty *pFVar1;
  FUIParticleProperty *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FUIParticleProperty *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FUIParticleProperty::operator=(this,pFVar1);
      FUIParticleProperty::operator=(this + 1,pFVar1 + 1);
      param_3 = param_3 + -1;
      this = this + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FUIParticleProperty> @ 14ac8a7f0

void __cdecl UE::CoreUObject::Private::Construct<FUIParticleProperty>(void *param_1)

{
  float fVar1;
  float fVar2;
  TVector2<double> TVar3;
  FRichCurve *pFVar4;
  undefined1 in_R9B;
  float fVar5;
  FKeyHandle aFStackX_8 [4];
  uint in_stack_ffffffffffffff98;
  FKeyHandle FVar6;
  
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x7c) = 0x404;
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FRichCurve__6B_;
  *(undefined2 *)((longlong)param_1 + 0x90) = 0;
  FRange_FloatCurve::FRange_FloatCurve((FRange_FloatCurve *)((longlong)param_1 + 0x98));
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0x1b8))->_s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar3 = UE::Math::TVector2<double>::ZeroVector;
  fVar5 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_4_;
  *(undefined1 *)((longlong)param_1 + 0x1d8) = 0;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0x1c8))->_s_0 =
       (TVector2<double>_u_0_s_0)TVar3.field0_0x0;
  FUIParticleLinearColorCurve::FUIParticleLinearColorCurve
            ((FUIParticleLinearColorCurve *)((longlong)param_1 + 0x1e0));
  FUIParticleLinearColorCurve::FUIParticleLinearColorCurve
            ((FUIParticleLinearColorCurve *)((longlong)param_1 + 1000));
  FUIParticleLinearColorCurve::FUIParticleLinearColorCurve
            ((FUIParticleLinearColorCurve *)((longlong)param_1 + 0x5f0));
  *(undefined4 *)((longlong)param_1 + 0x7f8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x7fc) = 0;
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x41a00000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x42480000;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0x41200000;
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar6.Index = in_stack_ffffffffffffff98 & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x10),fVar5,0.0,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(aFStackX_8);
  fVar1 = __real_3f800000;
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x10),fVar5,__real_3f800000,(bool)in_R9B,
                     FVar6);
  *(undefined4 *)((longlong)param_1 + 0x100) = 0x41200000;
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x98),fVar5,0.0,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x98),fVar5,fVar1,(bool)in_R9B,FVar6);
  *(undefined4 *)((longlong)param_1 + 0x188) = 0x41a00000;
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x120),fVar5,0.0,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x120),fVar5,fVar1,(bool)in_R9B,FVar6);
  *(undefined8 *)((longlong)param_1 + 0x1a8) = 0x4024000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1b0) = 0x4024000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1b8) = 0x4024000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1c0) = 0x4024000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1c8) = 0x4034000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1d0) = 0x4034000000000000;
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 1000),fVar5,0.0,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x468),fVar5,0.0,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x4e8),fVar5,0.0,(bool)in_R9B,FVar6);
  pFVar4 = (FRichCurve *)((longlong)param_1 + 0x568);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey(pFVar4,fVar5,0.0,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(aFStackX_8);
  fVar2 = __real_3f000000;
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey(pFVar4,fVar5,__real_3f000000,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey(pFVar4,fVar5,fVar1,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x5f0),fVar5,0.0,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x670),fVar5,0.0,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x6f0),fVar5,0.0,(bool)in_R9B,FVar6);
  pFVar4 = (FRichCurve *)((longlong)param_1 + 0x770);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey(pFVar4,fVar5,0.0,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey(pFVar4,fVar5,fVar2,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey(pFVar4,fVar5,fVar1,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x1e0),fVar5,0.0,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x260),fVar5,0.0,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x2e0),fVar5,0.0,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x360),fVar5,0.0,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x360),fVar5,fVar2,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x360),fVar5,fVar1,(bool)in_R9B,
                     (FKeyHandle)(FVar6.Index & 0xffffff00));
  *(undefined4 *)((longlong)param_1 + 0x450) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x658) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x248) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x4d0) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x6d8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2c8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x550) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x758) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x348) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x5d0) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x7d8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x3c8) = 0x3f800000;
  return;
}

// ConstructForTests<FUIParticleProperty> @ 14ac8a800

void __cdecl UE::CoreUObject::Private::ConstructForTests<FUIParticleProperty>(void *param_1)

{
  float fVar1;
  float fVar2;
  TVector2<double> TVar3;
  FRichCurve *pFVar4;
  undefined1 in_R9B;
  float fVar5;
  FKeyHandle aFStackX_8 [4];
  uint in_stack_ffffffffffffff98;
  FKeyHandle FVar6;
  
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x7c) = 0x404;
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FRichCurve__6B_;
  *(undefined2 *)((longlong)param_1 + 0x90) = 0;
  FRange_FloatCurve::FRange_FloatCurve((FRange_FloatCurve *)((longlong)param_1 + 0x98));
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0x1b8))->_s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar3 = UE::Math::TVector2<double>::ZeroVector;
  fVar5 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_4_;
  *(undefined1 *)((longlong)param_1 + 0x1d8) = 0;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0x1c8))->_s_0 =
       (TVector2<double>_u_0_s_0)TVar3.field0_0x0;
  FUIParticleLinearColorCurve::FUIParticleLinearColorCurve
            ((FUIParticleLinearColorCurve *)((longlong)param_1 + 0x1e0));
  FUIParticleLinearColorCurve::FUIParticleLinearColorCurve
            ((FUIParticleLinearColorCurve *)((longlong)param_1 + 1000));
  FUIParticleLinearColorCurve::FUIParticleLinearColorCurve
            ((FUIParticleLinearColorCurve *)((longlong)param_1 + 0x5f0));
  *(undefined4 *)((longlong)param_1 + 0x7f8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x7fc) = 0;
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x41a00000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x42480000;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0x41200000;
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar6.Index = in_stack_ffffffffffffff98 & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x10),fVar5,0.0,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(aFStackX_8);
  fVar1 = __real_3f800000;
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x10),fVar5,__real_3f800000,(bool)in_R9B,
                     FVar6);
  *(undefined4 *)((longlong)param_1 + 0x100) = 0x41200000;
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x98),fVar5,0.0,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x98),fVar5,fVar1,(bool)in_R9B,FVar6);
  *(undefined4 *)((longlong)param_1 + 0x188) = 0x41a00000;
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x120),fVar5,0.0,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x120),fVar5,fVar1,(bool)in_R9B,FVar6);
  *(undefined8 *)((longlong)param_1 + 0x1a8) = 0x4024000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1b0) = 0x4024000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1b8) = 0x4024000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1c0) = 0x4024000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1c8) = 0x4034000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1d0) = 0x4034000000000000;
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 1000),fVar5,0.0,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x468),fVar5,0.0,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x4e8),fVar5,0.0,(bool)in_R9B,FVar6);
  pFVar4 = (FRichCurve *)((longlong)param_1 + 0x568);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey(pFVar4,fVar5,0.0,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(aFStackX_8);
  fVar2 = __real_3f000000;
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey(pFVar4,fVar5,__real_3f000000,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey(pFVar4,fVar5,fVar1,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x5f0),fVar5,0.0,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x670),fVar5,0.0,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x6f0),fVar5,0.0,(bool)in_R9B,FVar6);
  pFVar4 = (FRichCurve *)((longlong)param_1 + 0x770);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey(pFVar4,fVar5,0.0,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey(pFVar4,fVar5,fVar2,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey(pFVar4,fVar5,fVar1,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x1e0),fVar5,0.0,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x260),fVar5,0.0,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x2e0),fVar5,0.0,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x360),fVar5,0.0,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x360),fVar5,fVar2,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x360),fVar5,fVar1,(bool)in_R9B,
                     (FKeyHandle)(FVar6.Index & 0xffffff00));
  *(undefined4 *)((longlong)param_1 + 0x450) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x658) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x248) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x4d0) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x6d8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2c8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x550) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x758) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x348) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x5d0) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x7d8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x3c8) = 0x3f800000;
  return;
}

// Destruct<FUIParticleProperty> @ 14ac8a810

void __cdecl UE::CoreUObject::Private::Destruct<FUIParticleProperty>(void *param_1)

{
  FUIParticleLinearColorCurve::~FUIParticleLinearColorCurve
            ((FUIParticleLinearColorCurve *)((longlong)param_1 + 0x5f0));
  FUIParticleLinearColorCurve::~FUIParticleLinearColorCurve
            ((FUIParticleLinearColorCurve *)((longlong)param_1 + 1000));
  FUIParticleLinearColorCurve::~FUIParticleLinearColorCurve
            ((FUIParticleLinearColorCurve *)((longlong)param_1 + 0x1e0));
  FRange_FloatCurve::~FRange_FloatCurve((FRange_FloatCurve *)((longlong)param_1 + 0x98));
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
  }
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x18));
  return;
}

// Copy<FUIParticleProperty> @ 14ac8a820

bool __cdecl
UE::CoreUObject::Private::Copy<FUIParticleProperty>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar2);
      *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_2 + 4);
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
      FRichCurve::operator=
                ((FRichCurve *)((longlong)param_1 + 0x10),(FRichCurve *)((longlong)param_2 + 0x10));
      *(undefined1 *)((longlong)param_1 + 0x90) = *(undefined1 *)((longlong)param_2 + 0x90);
      *(undefined1 *)((longlong)param_1 + 0x91) = *(undefined1 *)((longlong)param_2 + 0x91);
      FRange_FloatCurve::operator=
                ((FRange_FloatCurve *)((longlong)param_1 + 0x98),
                 (FRange_FloatCurve *)((longlong)param_2 + 0x98));
      uVar1 = *(undefined8 *)((longlong)param_2 + 0x1b0);
      *(undefined8 *)((longlong)param_1 + 0x1a8) = *(undefined8 *)((longlong)param_2 + 0x1a8);
      *(undefined8 *)((longlong)param_1 + 0x1b0) = uVar1;
      uVar1 = *(undefined8 *)((longlong)param_2 + 0x1c0);
      *(undefined8 *)((longlong)param_1 + 0x1b8) = *(undefined8 *)((longlong)param_2 + 0x1b8);
      *(undefined8 *)((longlong)param_1 + 0x1c0) = uVar1;
      uVar1 = *(undefined8 *)((longlong)param_2 + 0x1d0);
      *(undefined8 *)((longlong)param_1 + 0x1c8) = *(undefined8 *)((longlong)param_2 + 0x1c8);
      *(undefined8 *)((longlong)param_1 + 0x1d0) = uVar1;
      *(undefined8 *)((longlong)param_1 + 0x1d8) = *(undefined8 *)((longlong)param_2 + 0x1d8);
      FUIParticleLinearColorCurve::operator=
                ((FUIParticleLinearColorCurve *)((longlong)param_1 + 0x1e0),
                 (FUIParticleLinearColorCurve *)((longlong)param_2 + 0x1e0));
      FRange_LinearColorCurve::operator=
                ((FRange_LinearColorCurve *)((longlong)param_1 + 1000),
                 (FRange_LinearColorCurve *)((longlong)param_2 + 1000));
      param_2 = (void *)((longlong)param_2 + 0x800);
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x800);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FRange_Vector2D> @ 14ac8ab30

void __cdecl UE::CoreUObject::Private::Construct<FRange_Vector2D>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(TVector2<double>_u_0 *)param_1 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0x10))->_s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  return;
}

// ConstructForTests<FRange_Vector2D> @ 14ac8ab60

void __cdecl UE::CoreUObject::Private::ConstructForTests<FRange_Vector2D>(void *param_1)

{
  TVector2<double> TVar1;
  
  *(TVector2<double>_u_0 *)param_1 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0x10))->_s_0 =
       (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  return;
}

// Destruct<FRange_Vector2D> @ 14ac8ab80

void __cdecl UE::CoreUObject::Private::Destruct<FRange_Vector2D>(void *param_1)

{
  return;
}

// Copy<FRange_Vector2D> @ 14ac8ab90

bool __cdecl
UE::CoreUObject::Private::Copy<FRange_Vector2D>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar6 + 0x20 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar6 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar6 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x28);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FScalarParamFloat> @ 14ac8abd0

void __cdecl UE::CoreUObject::Private::Construct<FScalarParamFloat>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FScalarParamFloat> @ 14ac8abe0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FScalarParamFloat>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FScalarParamFloat> @ 14ac8abf0

void __cdecl UE::CoreUObject::Private::Destruct<FScalarParamFloat>(void *param_1)

{
  return;
}

// Copy<FScalarParamFloat> @ 14ac8ac00

bool __cdecl
UE::CoreUObject::Private::Copy<FScalarParamFloat>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FRange_Float> @ 14ac8ad40

void __cdecl UE::CoreUObject::Private::Construct<FRange_Float>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FRange_Float> @ 14ac8ad50

void __cdecl UE::CoreUObject::Private::ConstructForTests<FRange_Float>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FRange_Float> @ 14ac8ad60

void __cdecl UE::CoreUObject::Private::Destruct<FRange_Float>(void *param_1)

{
  return;
}

// Copy<FRange_Float> @ 14ac8adb0

bool __cdecl UE::CoreUObject::Private::Copy<FRange_Float>(void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      uVar1 = *(undefined4 *)((longlong)param_2 + 4);
      *(undefined4 *)(lVar2 + (longlong)param_2) = *(undefined4 *)param_2;
      *(undefined4 *)(lVar2 + 4 + (longlong)param_2) = uVar1;
      param_2 = (void *)((longlong)param_2 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FRange_LinearColorCurve> @ 14ac8ae90

void __cdecl UE::CoreUObject::Private::Construct<FRange_LinearColorCurve>(void *param_1)

{
  memset(param_1,0,0x418);
  FUIParticleLinearColorCurve::FUIParticleLinearColorCurve(param_1);
  FUIParticleLinearColorCurve::FUIParticleLinearColorCurve
            ((FUIParticleLinearColorCurve *)((longlong)param_1 + 0x208));
  *(undefined4 *)((longlong)param_1 + 0x410) = 0;
  *(undefined2 *)((longlong)param_1 + 0x414) = 0;
  return;
}

// ConstructForTests<FRange_LinearColorCurve> @ 14ac8aee0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FRange_LinearColorCurve>(void *param_1)

{
  FUIParticleLinearColorCurve::FUIParticleLinearColorCurve(param_1);
  FUIParticleLinearColorCurve::FUIParticleLinearColorCurve
            ((FUIParticleLinearColorCurve *)((longlong)param_1 + 0x208));
  *(undefined4 *)((longlong)param_1 + 0x410) = 0;
  *(undefined2 *)((longlong)param_1 + 0x414) = 0;
  return;
}

// Destruct<FRange_LinearColorCurve> @ 14ac8af20

void __cdecl UE::CoreUObject::Private::Destruct<FRange_LinearColorCurve>(void *param_1)

{
  FUIParticleLinearColorCurve::~FUIParticleLinearColorCurve
            ((FUIParticleLinearColorCurve *)((longlong)param_1 + 0x208));
  FUIParticleLinearColorCurve::~FUIParticleLinearColorCurve(param_1);
  return;
}

// Copy<FRange_LinearColorCurve> @ 14ac8af50

bool __cdecl
UE::CoreUObject::Private::Copy<FRange_LinearColorCurve>(void *param_1,void *param_2,int param_3)

{
  FUIParticleLinearColorCurve *pFVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUIParticleLinearColorCurve::operator=(param_1,param_2);
    FUIParticleLinearColorCurve::operator=
              ((FUIParticleLinearColorCurve *)((longlong)param_1 + 0x208),
               (FUIParticleLinearColorCurve *)((longlong)param_2 + 0x208));
    *(char *)&((FUIParticleLinearColorCurve *)((longlong)param_1 + 0x410))->ColorCurves[0]._padding_
         = (char)((FUIParticleLinearColorCurve *)((longlong)param_2 + 0x410))->ColorCurves[0].
                 _padding_;
    *(undefined1 *)
     ((longlong)
      &((FUIParticleLinearColorCurve *)((longlong)param_1 + 0x410))->ColorCurves[0]._padding_ + 1) =
         *(undefined1 *)
          ((longlong)
           &((FUIParticleLinearColorCurve *)((longlong)param_2 + 0x410))->ColorCurves[0]._padding_ +
          1);
    *(undefined1 *)
     ((longlong)
      &((FUIParticleLinearColorCurve *)((longlong)param_1 + 0x410))->ColorCurves[0]._padding_ + 2) =
         *(undefined1 *)
          ((longlong)
           &((FUIParticleLinearColorCurve *)((longlong)param_2 + 0x410))->ColorCurves[0]._padding_ +
          2);
    *(undefined1 *)
     ((longlong)
      &((FUIParticleLinearColorCurve *)((longlong)param_1 + 0x410))->ColorCurves[0]._padding_ + 3) =
         *(undefined1 *)
          ((longlong)
           &((FUIParticleLinearColorCurve *)((longlong)param_2 + 0x410))->ColorCurves[0]._padding_ +
          3);
    *(undefined1 *)
     ((longlong)
      &((FUIParticleLinearColorCurve *)((longlong)param_1 + 0x410))->ColorCurves[0]._padding_ + 4) =
         *(undefined1 *)
          ((longlong)
           &((FUIParticleLinearColorCurve *)((longlong)param_2 + 0x410))->ColorCurves[0]._padding_ +
          4);
    pFVar1 = (FUIParticleLinearColorCurve *)((longlong)param_2 + 0x410);
    param_2 = &((FUIParticleLinearColorCurve *)((longlong)param_2 + 0x410))->ColorCurves[0].
               _padding_;
    *(undefined1 *)
     ((longlong)
      &((FUIParticleLinearColorCurve *)((longlong)param_1 + 0x410))->ColorCurves[0]._padding_ + 5) =
         *(undefined1 *)((longlong)&pFVar1->ColorCurves[0]._padding_ + 5);
    param_1 = &((FUIParticleLinearColorCurve *)((longlong)param_1 + 0x410))->ColorCurves[0].
               _padding_;
  }
  return true;
}

// Construct<FUIParticleLinearColorCurve> @ 14ac8b180

void __cdecl UE::CoreUObject::Private::Construct<FUIParticleLinearColorCurve>(void *param_1)

{
  memset(param_1,0,0x208);
  FUIParticleLinearColorCurve::FUIParticleLinearColorCurve(param_1);
  return;
}

// ConstructForTests<FUIParticleLinearColorCurve> @ 14ac8b1b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FUIParticleLinearColorCurve>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined ***)param_1 = &___7FRichCurve__6B_;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x6c) = 0x404;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xb8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe8) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0xec) = 0x404;
  *(undefined ***)((longlong)param_1 + 0x80) = &___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  *(undefined4 *)((longlong)param_1 + 0x130) = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x138) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined4 *)((longlong)param_1 + 0x150) = 0;
  *(undefined8 *)((longlong)param_1 + 0x158) = 0;
  *(undefined8 *)((longlong)param_1 + 0x160) = 0;
  *(undefined4 *)((longlong)param_1 + 0x168) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x16c) = 0x404;
  *(undefined ***)((longlong)param_1 + 0x100) = &___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 0x170) = 0;
  *(undefined8 *)((longlong)param_1 + 0x178) = 0;
  *(undefined8 *)((longlong)param_1 + 0x188) = 0;
  *(undefined8 *)((longlong)param_1 + 400) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x1b8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1e8) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x1ec) = 0x404;
  *(undefined ***)((longlong)param_1 + 0x180) = &___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 0x1f0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1f8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x200) = 0;
  return;
}

// Destruct<FUIParticleLinearColorCurve> @ 14ac8b1c0

void __cdecl UE::CoreUObject::Private::Destruct<FUIParticleLinearColorCurve>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x1f0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1f0));
  }
  *(undefined ***)((longlong)param_1 + 0x180) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x1d8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1d8));
  }
  *(undefined4 *)((longlong)param_1 + 0x1d0) = 0;
  if (*(void **)((longlong)param_1 + 0x1c8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1c8));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x188));
  if (*(void **)((longlong)param_1 + 0x170) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x170));
  }
  *(undefined ***)((longlong)param_1 + 0x100) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x158) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x158));
  }
  *(undefined4 *)((longlong)param_1 + 0x150) = 0;
  if (*(void **)((longlong)param_1 + 0x148) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x148));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x108));
  if (*(void **)((longlong)param_1 + 0xf0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xf0));
  }
  *(undefined ***)((longlong)param_1 + 0x80) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0xd8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xd8));
  }
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0;
  if (*(void **)((longlong)param_1 + 200) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 200));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x88));
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  *(undefined ***)param_1 = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 8));
  return;
}

// Copy<FUIParticleLinearColorCurve> @ 14ac8b1d0

bool __cdecl
UE::CoreUObject::Private::Copy<FUIParticleLinearColorCurve>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  void *pvVar5;
  void *pvVar6;
  ForAnyElementType *pFVar7;
  
  pvVar5 = param_1;
  pvVar6 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    pFVar7 = (ForAnyElementType *)((longlong)pvVar5 + 0x70);
    *(undefined4 *)((longlong)pvVar5 + 0x68) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0x68 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar5 + 0x6c) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0x6c - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar5 + 0x6d) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0x6d - (longlong)param_1));
    pFVar1 = (ForAnyElementType *)
             ((longlong)pvVar5 + (longlong)param_2 + (0x70 - (longlong)param_1));
    if (pFVar7 != pFVar1) {
      iVar3 = *(int *)((longlong)pvVar5 + (longlong)param_2 + (0x78 - (longlong)param_1));
      piVar2 = (int *)((longlong)pvVar5 + 0x7c);
      pFVar4 = pFVar1->Data;
      *(int *)((longlong)pvVar5 + 0x78) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1c,4,iVar3,*piVar2,pFVar7,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy(pFVar7->Data,pFVar4,(longlong)iVar3 * 0x1c);
        }
      }
    }
    *(undefined4 *)((longlong)pvVar5 + 0xe8) = *(undefined4 *)((longlong)pvVar6 + 0xe8);
    pFVar1 = (ForAnyElementType *)((longlong)pvVar5 + 0xf0);
    *(undefined1 *)((longlong)pvVar5 + 0xec) = *(undefined1 *)((longlong)pvVar6 + 0xec);
    *(undefined1 *)((longlong)pvVar5 + 0xed) = *(undefined1 *)((longlong)pvVar6 + 0xed);
    if (pFVar1 != (ForAnyElementType *)((longlong)pvVar6 + 0xf0)) {
      iVar3 = *(int *)((longlong)pvVar6 + 0xf8);
      piVar2 = (int *)((longlong)pvVar5 + 0xfc);
      pFVar4 = ((ForAnyElementType *)((longlong)pvVar6 + 0xf0))->Data;
      *(int *)((longlong)pvVar5 + 0xf8) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1c,4,iVar3,*piVar2,pFVar1,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy(pFVar1->Data,pFVar4,(longlong)iVar3 * 0x1c);
        }
      }
    }
    pFVar1 = (ForAnyElementType *)
             ((longlong)pvVar5 + (longlong)param_2 + (0x170 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar5 + 0x168) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0x168 - (longlong)param_1));
    pFVar7 = (ForAnyElementType *)((longlong)pvVar5 + 0x170);
    *(undefined1 *)((longlong)pvVar5 + 0x16c) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0x16c - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar5 + 0x16d) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0x16d - (longlong)param_1));
    if (pFVar7 != pFVar1) {
      iVar3 = *(int *)((longlong)pvVar5 + (longlong)param_2 + (0x178 - (longlong)param_1));
      piVar2 = (int *)((longlong)pvVar5 + 0x17c);
      pFVar4 = pFVar1->Data;
      *(int *)((longlong)pvVar5 + 0x178) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1c,4,iVar3,*piVar2,pFVar7,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy(pFVar7->Data,pFVar4,(longlong)iVar3 * 0x1c);
        }
      }
    }
    pFVar1 = (ForAnyElementType *)
             ((longlong)pvVar5 + (longlong)param_2 + (0x1f0 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar5 + 0x1e8) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0x1e8 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar5 + 0x1ec) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0x1ec - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar5 + 0x1ed) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0x1ed - (longlong)param_1));
    pFVar7 = (ForAnyElementType *)((longlong)pvVar5 + 0x1f0);
    if (pFVar7 != pFVar1) {
      iVar3 = *(int *)((longlong)pvVar5 + (longlong)param_2 + (0x1f8 - (longlong)param_1));
      piVar2 = (int *)((longlong)pvVar5 + 0x1fc);
      pFVar4 = pFVar1->Data;
      *(int *)((longlong)pvVar5 + 0x1f8) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1c,4,iVar3,*piVar2,pFVar7,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy(pFVar7->Data,pFVar4,(longlong)iVar3 * 0x1c);
        }
      }
    }
    *(undefined1 *)((longlong)pvVar5 + 0x200) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0x200 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar5 + 0x201) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0x201 - (longlong)param_1));
    pvVar5 = (void *)((longlong)pvVar5 + 0x208);
    pvVar6 = (void *)((longlong)pvVar6 + 0x208);
  }
  return true;
}

// Construct<FRange_FloatCurve> @ 14ac8b500

void __cdecl UE::CoreUObject::Private::Construct<FRange_FloatCurve>(void *param_1)

{
  memset(param_1,0,0x110);
  FRange_FloatCurve::FRange_FloatCurve(param_1);
  return;
}

// ConstructForTests<FRange_FloatCurve> @ 14ac8b530

void __cdecl UE::CoreUObject::Private::ConstructForTests<FRange_FloatCurve>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined ***)param_1 = &___7FRichCurve__6B_;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x6c) = 0x404;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined2 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xc0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined ***)((longlong)param_1 + 0x88) = &___7FRichCurve__6B_;
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0xf4) = 0x404;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined2 *)((longlong)param_1 + 0x108) = 0;
  return;
}

// Destruct<FRange_FloatCurve> @ 14ac8b540

void __cdecl UE::CoreUObject::Private::Destruct<FRange_FloatCurve>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0xf8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xf8));
  }
  *(undefined ***)((longlong)param_1 + 0x88) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0xe0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xe0));
  }
  *(undefined4 *)((longlong)param_1 + 0xd8) = 0;
  if (*(void **)((longlong)param_1 + 0xd0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xd0));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x90));
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  *(undefined ***)param_1 = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 8));
  return;
}

// Copy<FRange_FloatCurve> @ 14ac8b550

bool __cdecl
UE::CoreUObject::Private::Copy<FRange_FloatCurve>(void *param_1,void *param_2,int param_3)

{
  FRichCurve *pFVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FRichCurve::operator=(param_1,param_2);
    *(char *)&((FRichCurve *)((longlong)param_1 + 0x80))->_padding_ =
         (char)((FRichCurve *)((longlong)param_2 + 0x80))->_padding_;
    *(undefined1 *)((longlong)&((FRichCurve *)((longlong)param_1 + 0x80))->_padding_ + 1) =
         *(undefined1 *)((longlong)&((FRichCurve *)((longlong)param_2 + 0x80))->_padding_ + 1);
    FRichCurve::operator=
              ((FRichCurve *)&((FRichCurve *)((longlong)param_1 + 0x80))->_padding_,
               (FRichCurve *)&((FRichCurve *)((longlong)param_2 + 0x80))->_padding_);
    *(char *)&((FRichCurve *)((longlong)param_1 + 0x100))->_padding_ =
         (char)((FRichCurve *)((longlong)param_2 + 0x100))->_padding_;
    pFVar1 = (FRichCurve *)((longlong)param_2 + 0x100);
    param_2 = &((FRichCurve *)((longlong)param_2 + 0x100))->_padding_;
    *(undefined1 *)((longlong)&((FRichCurve *)((longlong)param_1 + 0x100))->_padding_ + 1) =
         *(undefined1 *)((longlong)&pFVar1->_padding_ + 1);
    param_1 = &((FRichCurve *)((longlong)param_1 + 0x100))->_padding_;
  }
  return true;
}

// Construct<FChildEmitter> @ 14ac8b6d0

void __cdecl UE::CoreUObject::Private::Construct<FChildEmitter>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FChildEmitter> @ 14ac8b6f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FChildEmitter>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FChildEmitter> @ 14ac8b710

void __cdecl UE::CoreUObject::Private::Destruct<FChildEmitter>(void *param_1)

{
  return;
}

// Copy<FChildEmitter> @ 14ac8b760

bool __cdecl UE::CoreUObject::Private::Copy<FChildEmitter>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      puVar4[2] = uVar2;
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FUIParticleFloatCurve> @ 14ac8bfd0

void __cdecl UE::CoreUObject::Private::Construct<FUIParticleFloatCurve>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x404;
  *(undefined4 *)((longlong)param_1 + 0x82) = 0;
  *(undefined2 *)((longlong)param_1 + 0x86) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x7f7fffff;
  *(undefined ***)param_1 = &___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined2 *)((longlong)param_1 + 0x80) = 0;
  return;
}

// ConstructForTests<FUIParticleFloatCurve> @ 14ac8c050

void __cdecl UE::CoreUObject::Private::ConstructForTests<FUIParticleFloatCurve>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x6c) = 0x404;
  *(undefined ***)param_1 = &___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined2 *)((longlong)param_1 + 0x80) = 0;
  return;
}

// Destruct<FUIParticleFloatCurve> @ 14ac8c0b0

void __cdecl UE::CoreUObject::Private::Destruct<FUIParticleFloatCurve>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  *(undefined ***)param_1 = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 8));
  return;
}

// Copy<FUIParticleFloatCurve> @ 14ac8c110

bool __cdecl
UE::CoreUObject::Private::Copy<FUIParticleFloatCurve>(void *param_1,void *param_2,int param_3)

{
  FRichCurve *pFVar1;
  FRichCurve *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FRichCurve *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FRichCurve::operator=(this,pFVar1);
      *(char *)&this[1]._padding_ = (char)pFVar1[1]._padding_;
      *(undefined1 *)((longlong)&this[1]._padding_ + 1) =
           *(undefined1 *)((longlong)&pFVar1[1]._padding_ + 1);
      param_3 = param_3 + -1;
      this = (FRichCurve *)&this[1]._padding_;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLerpKeyColor> @ 14ac8c290

void __cdecl UE::CoreUObject::Private::Construct<FLerpKeyColor>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FLerpKeyColor> @ 14ac8c2a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLerpKeyColor>(void *param_1)

{
  return;
}

// Construct<FLerpKeyVector2D> @ 14ac8c4a0

void __cdecl UE::CoreUObject::Private::Construct<FLerpKeyVector2D>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FLerpKeyVector2D> @ 14ac8c4b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLerpKeyVector2D>(void *param_1)

{
  return;
}

// Construct<FUIParticleEmitterInfo> @ 14ac8cd30

void __cdecl UE::CoreUObject::Private::Construct<FUIParticleEmitterInfo>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FUIParticleEmitterInfo> @ 14ac8cd50

void __cdecl UE::CoreUObject::Private::ConstructForTests<FUIParticleEmitterInfo>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FUIParticleEmitterInfo> @ 14ac8cdb0

void __cdecl UE::CoreUObject::Private::Destruct<FUIParticleEmitterInfo>(void *param_1)

{
  return;
}

// Copy<FUIParticleEmitterInfo> @ 14ac8cdc0

bool __cdecl
UE::CoreUObject::Private::Copy<FUIParticleEmitterInfo>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      puVar4[2] = uVar2;
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FScalarParamCurve> @ 14ac8d300

void __cdecl UE::CoreUObject::Private::Construct<FScalarParamCurve>(void *param_1)

{
  memset((void *)((longlong)param_1 + 8),0,0x800);
  *(undefined8 *)param_1 = 0;
  FUIParticleProperty::FUIParticleProperty((FUIParticleProperty *)((longlong)param_1 + 8));
  return;
}

// ConstructForTests<FScalarParamCurve> @ 14ac8d340

void __cdecl UE::CoreUObject::Private::ConstructForTests<FScalarParamCurve>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  FUIParticleProperty::FUIParticleProperty((FUIParticleProperty *)((longlong)param_1 + 8));
  return;
}

// Destruct<FScalarParamCurve> @ 14ac8d360

void __cdecl UE::CoreUObject::Private::Destruct<FScalarParamCurve>(void *param_1)

{
  FUIParticleProperty::~FUIParticleProperty((FUIParticleProperty *)((longlong)param_1 + 8));
  return;
}

// Copy<FScalarParamCurve> @ 14ac8d380

bool __cdecl
UE::CoreUObject::Private::Copy<FScalarParamCurve>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = param_1;
    do {
      *puVar1 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar1);
      FUIParticleProperty::operator=
                ((FUIParticleProperty *)(puVar1 + 1),
                 (FUIParticleProperty *)
                 ((longlong)puVar1 + ((longlong)param_2 - (longlong)param_1) + 8));
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 0x101;
    } while (param_3 != 0);
  }
  return true;
}

// DereferenceIfNecessary<FUIParticleModule,FUIParticleModule_*_&> @ 14ac8d820

FUIParticleModule * __cdecl
UE::Core::Private::DereferenceIfNecessary<FUIParticleModule,FUIParticleModule_*_&>
          (FUIParticleModule **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UUIParticle,UUIParticle_*_&> @ 14ac8d840

UUIParticle * __cdecl
UE::Core::Private::DereferenceIfNecessary<UUIParticle,UUIParticle_*_&>(UUIParticle **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UUIParticleEmitter,UUIParticleEmitter_*_&> @ 14ac8d860

UUIParticleEmitter * __cdecl
UE::Core::Private::DereferenceIfNecessary<UUIParticleEmitter,UUIParticleEmitter_*_&>
          (UUIParticleEmitter **param_1)

{
  return *param_1;
}

