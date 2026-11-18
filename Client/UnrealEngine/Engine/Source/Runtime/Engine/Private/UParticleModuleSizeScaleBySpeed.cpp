// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 147312cf0

UClass * __cdecl UParticleModuleSizeScaleBySpeed::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleSizeScaleBySpeed.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleSizeScaleBySpeed",
               &Z_Registration_Info_UClass_UParticleModuleSizeScaleBySpeed.InnerSingleton,
               StaticRegisterNativesUParticleModuleSizeScaleBySpeed,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleSizeScaleBySpeed>,
               InternalVTableHelperCtorCaller<UParticleModuleSizeScaleBySpeed>,local_res8,
               UParticleModuleSizeBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleSizeScaleBySpeed.InnerSingleton;
}

// UParticleModuleSizeScaleBySpeed @ 147318950

UParticleModuleSizeScaleBySpeed * __thiscall
UParticleModuleSizeScaleBySpeed::UParticleModuleSizeScaleBySpeed
          (UParticleModuleSizeScaleBySpeed *this,FVTableHelper *param_1)

{
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleSizeScaleBySpeed__6B_;
  return this;
}

// ~UParticleModuleSizeScaleBySpeed @ 147319560

void __thiscall
UParticleModuleSizeScaleBySpeed::~UParticleModuleSizeScaleBySpeed
          (UParticleModuleSizeScaleBySpeed *this)

{
  this->_padding_ = (longlong)&___7UParticleModuleSizeBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14731b5f0

UClass * __cdecl UParticleModuleSizeScaleBySpeed::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleSizeScaleBySpeed.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleSizeScaleBySpeed",
               &Z_Registration_Info_UClass_UParticleModuleSizeScaleBySpeed.InnerSingleton,
               StaticRegisterNativesUParticleModuleSizeScaleBySpeed,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleSizeScaleBySpeed>,
               InternalVTableHelperCtorCaller<UParticleModuleSizeScaleBySpeed>,local_res8,
               UParticleModuleSizeBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleSizeScaleBySpeed.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleSizeScaleBySpeed @ 14731cf70

void __cdecl
UParticleModuleSizeScaleBySpeed::StaticRegisterNativesUParticleModuleSizeScaleBySpeed(void)

{
  return;
}

// UParticleModuleSizeScaleBySpeed @ 14815e340

UParticleModuleSizeScaleBySpeed * __thiscall
UParticleModuleSizeScaleBySpeed::UParticleModuleSizeScaleBySpeed
          (UParticleModuleSizeScaleBySpeed *this,FObjectInitializer *param_1)

{
  byte bVar1;
  
  UObject::UObject((UObject *)this,param_1);
  bVar1 = *(byte *)((longlong)&this->_padding_ + 1);
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x15;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 0x82;
  *(byte *)((longlong)&this->_padding_ + 1) = bVar1 & 0xf3 | 3;
  this->_padding_ = (longlong)&___7UParticleModuleSizeScaleBySpeed__6B_;
  (this->MaxScale).field0_0x0._s_0.X = 1.0;
  (this->MaxScale).field0_0x0._s_0.Y = 1.0;
  return this;
}

// CompileModule @ 148169fb0

void __thiscall
UParticleModuleSizeScaleBySpeed::CompileModule
          (UParticleModuleSizeScaleBySpeed *this,FParticleEmitterBuildInfo *param_1)

{
  double dVar1;
  
  dVar1 = (this->SpeedScale).field0_0x0._s_0.Y;
  (param_1->SizeScaleBySpeed).field0_0x0._s_0.X = (this->SpeedScale).field0_0x0._s_0.X;
  (param_1->SizeScaleBySpeed).field0_0x0._s_0.Y = dVar1;
  dVar1 = (this->MaxScale).field0_0x0._s_0.Y;
  (param_1->MaxSizeScaleBySpeed).field0_0x0._s_0.X = (this->MaxScale).field0_0x0._s_0.X;
  (param_1->MaxSizeScaleBySpeed).field0_0x0._s_0.Y = dVar1;
  return;
}

// Update @ 1481b1480

void __thiscall
UParticleModuleSizeScaleBySpeed::Update
          (UParticleModuleSizeScaleBySpeed *this,FUpdateContext *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  
  uVar12 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  dVar11 = __real_3ff0000000000000;
  lVar15 = param_1->_padding_;
  dVar4 = (this->SpeedScale).field0_0x0._s_0.X;
  lVar9 = *(longlong *)(lVar15 + 0x168);
  iVar8 = *(int *)(lVar15 + 0x188);
  lVar10 = *(longlong *)(lVar15 + 0x170);
  dVar5 = (this->SpeedScale).field0_0x0._s_0.Y;
  iVar13 = *(int *)(lVar15 + 0x18c) + -1;
  dVar6 = (this->MaxScale).field0_0x0._s_0.X;
  dVar7 = (this->MaxScale).field0_0x0._s_0.Y;
  lVar15 = (longlong)iVar13;
  if (-1 < iVar13) {
    do {
      uVar14 = (ulonglong)((uint)*(ushort *)(lVar10 + lVar15 * 2) * iVar8);
      if ((*(uint *)(uVar14 + 0x6c + lVar9) & 0x4000000) == 0) {
        fVar1 = *(float *)(uVar14 + 0x40 + lVar9);
        fVar2 = *(float *)(uVar14 + 0x44 + lVar9);
        fVar3 = *(float *)(uVar14 + 0x48 + lVar9);
        dVar16 = (double)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3);
        dVar17 = dVar16 * dVar5;
        dVar16 = dVar16 * dVar4;
        if (dVar17 <= dVar11) {
          dVar17 = dVar11;
        }
        if (dVar16 <= dVar11) {
          dVar16 = dVar11;
        }
        if (dVar7 <= dVar17) {
          dVar17 = dVar7;
        }
        if (dVar6 <= dVar16) {
          dVar16 = dVar6;
        }
        *(float *)(uVar14 + 0x60 + lVar9) =
             (float)(*(uint *)(uVar14 + 0x50 + lVar9) & uVar12) * (float)dVar16;
        *(float *)(uVar14 + 100 + lVar9) =
             (float)dVar17 * (float)(*(uint *)(uVar14 + 0x54 + lVar9) & uVar12);
        *(uint *)(uVar14 + 0x68 + lVar9) = *(uint *)(uVar14 + 0x58 + lVar9) & uVar12;
      }
      lVar15 = lVar15 + -1;
    } while (-1 < lVar15);
  }
  return;
}

