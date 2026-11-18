// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// StaticClass @ 1473053d0

UClass * __cdecl UParticleModuleLocationEmitter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleLocationEmitter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleLocationEmitter",
               &Z_Registration_Info_UClass_UParticleModuleLocationEmitter.InnerSingleton,
               StaticRegisterNativesUParticleModuleLocationEmitter,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleLocationEmitter>,
               InternalVTableHelperCtorCaller<UParticleModuleLocationEmitter>,local_res8,
               UParticleModuleLocationBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleLocationEmitter.InnerSingleton;
}

// UParticleModuleLocationEmitter @ 14730a760

UParticleModuleLocationEmitter * __thiscall
UParticleModuleLocationEmitter::UParticleModuleLocationEmitter
          (UParticleModuleLocationEmitter *this,FVTableHelper *param_1)

{
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleLocationEmitter__6B_;
  (this->EmitterName).ComparisonIndex = 0;
  (this->EmitterName).Number = 0;
  return this;
}

// ~UParticleModuleLocationEmitter @ 14730b780

void __thiscall
UParticleModuleLocationEmitter::~UParticleModuleLocationEmitter
          (UParticleModuleLocationEmitter *this)

{
  this->_padding_ = (longlong)&___7UParticleModuleLocationBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14730dfa0

UClass * __cdecl UParticleModuleLocationEmitter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleLocationEmitter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleLocationEmitter",
               &Z_Registration_Info_UClass_UParticleModuleLocationEmitter.InnerSingleton,
               StaticRegisterNativesUParticleModuleLocationEmitter,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleLocationEmitter>,
               InternalVTableHelperCtorCaller<UParticleModuleLocationEmitter>,local_res8,
               UParticleModuleLocationBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleLocationEmitter.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleLocationEmitter @ 14730fda0

void __cdecl
UParticleModuleLocationEmitter::StaticRegisterNativesUParticleModuleLocationEmitter(void)

{
  return;
}

// UParticleModuleLocationEmitter @ 14815cce0

UParticleModuleLocationEmitter * __thiscall
UParticleModuleLocationEmitter::UParticleModuleLocationEmitter
          (UParticleModuleLocationEmitter *this,FObjectInitializer *param_1)

{
  FConstructorStatics FVar1;
  ulonglong uVar2;
  
  UObject::UObject((UObject *)this,param_1);
  uVar2 = (ulonglong)_tls_index;
  *(byte *)((longlong)&this->_padding_ + 1) = *(byte *)((longlong)&this->_padding_ + 1) & 0xf3 | 3;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x17 | 0x80;
  this->_padding_ = (longlong)&___7UParticleModuleLocationEmitter__6B_;
  (this->EmitterName).ComparisonIndex = 0;
  (this->EmitterName).Number = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar2 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::ConstructorStatics.NAME_None,L"None");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 1;
  (this->SelectionMethod).Value = '\0';
  FVar1 = ::ConstructorStatics;
  this->InheritSourceVelocity = 0;
  this->bInheritSourceRotation = 0;
  this->EmitterName = FVar1.NAME_None;
  this->InheritSourceVelocityScale = 1.0;
  this->InheritSourceRotationScale = 1.0;
  return this;
}

// RequiredBytesPerInstance @ 148191930

uint __thiscall
UParticleModuleLocationEmitter::RequiredBytesPerInstance(UParticleModuleLocationEmitter *this)

{
  return 4;
}

// Spawn @ 14819b3e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UParticleModuleLocationEmitter::Spawn(UParticleModuleLocationEmitter *this,FSpawnContext *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uchar uVar6;
  FParticleEmitterInstance *this_00;
  longlong *plVar7;
  FBaseParticle *pFVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  bool bVar19;
  byte bVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  FParticleRandomSeedInstancePayload *pFVar24;
  int *piVar25;
  longlong lVar26;
  undefined1 (*pauVar27) [16];
  double *pdVar28;
  uint uVar29;
  float *pfVar30;
  longlong lVar31;
  float *pfVar32;
  byte bVar33;
  longlong lVar34;
  longlong lVar35;
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  double dVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  double dVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  longlong local_160;
  int local_158;
  FSpawnContext *local_150;
  FSpawnContext *local_148;
  FSpawnContext *local_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined1 local_120 [16];
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined1 local_e8 [16];
  
  this_00 = (FParticleEmitterInstance *)param_1->_padding_;
  if (this->EmitterName != (FName)0x0) {
    (**(code **)((longlong)*this_00->Component + 0xe8))(this_00->Component,&local_160);
    uVar29 = 0;
    if (0 < local_158) {
      lVar31 = 0;
      iVar22 = local_158;
      do {
        uVar21 = 0;
        if ((int)uVar29 < iVar22) {
          uVar21 = ~uVar29 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), iVar22 = local_158, bVar19)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        plVar7 = *(longlong **)(lVar31 + local_160);
        if ((plVar7 != (longlong *)0x0) && (*(FName *)(plVar7[1] + 0x28) == this->EmitterName)) {
          if ((plVar7[3] == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("LocationEmitterInst->CurrentLODLevel",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules_Location.cpp"
                                  ,0x1a9,L""), bVar19)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if ((*(longlong *)(plVar7[3] + 0x30) == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("LocationEmitterInst->CurrentLODLevel->RequiredModule",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules_Location.cpp"
                                  ,0x1aa,L""), bVar19)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if ((this_00->CurrentLODLevel == (UParticleLODLevel *)0x0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Owner->CurrentLODLevel",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules_Location.cpp"
                                  ,0x1ab,L""), bVar19)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if (((this_00->CurrentLODLevel->RequiredModule).field0_0x0.DebugPtr ==
               (UParticleModuleRequired *)0x0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Owner->CurrentLODLevel->RequiredModule",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules_Location.cpp"
                                  ,0x1ac,L""), bVar19)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          bVar20 = *(byte *)(*(longlong *)(plVar7[3] + 0x30) + 0x71) & 1;
          bVar33 = ((this_00->CurrentLODLevel->RequiredModule).field0_0x0.DebugPtr)->bUseLocalSpace;
          pFVar24 = FParticleEmitterInstance::GetModuleRandomSeedInstanceData
                              ((FParticleEmitterInstance *)param_1->_padding_,
                               (UParticleModule *)this);
          if (pFVar24 == (FParticleRandomSeedInstancePayload *)0x0) {
            pFVar24 = (FParticleRandomSeedInstancePayload *)
                      (**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 0x120))();
          }
          uVar6 = (this->SelectionMethod).Value;
          pFVar8 = param_1->ParticleBase;
          if (uVar6 == '\0') {
            iVar22 = *(int *)((longlong)plVar7 + 0x18c);
            iVar23 = 0;
            if (0 < iVar22) {
              uVar29 = (pFVar24->RandomStream).Seed * 0xbb38435 + 0x3619636b;
              (pFVar24->RandomStream).Seed = uVar29;
              iVar23 = (int)(((float)(uVar29 >> 9 | 0x3f800000) - __real_3f800000) * (float)iVar22);
            }
          }
          else {
            iVar23 = 0;
            if ((uVar6 == '\x01') &&
               (piVar25 = (int *)FParticleEmitterInstance::GetModuleInstanceData
                                           (this_00,(UParticleModule *)this), iVar23 = 0,
               piVar25 != (int *)0x0)) {
              *piVar25 = *piVar25 + 1;
              iVar23 = *piVar25;
              if (*(int *)((longlong)plVar7 + 0x18c) <= *piVar25) {
                *piVar25 = 0;
                iVar23 = 0;
              }
            }
          }
          lVar31 = (**(code **)(*plVar7 + 0x108))(plVar7,iVar23);
          uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          if (lVar31 != 0) {
            if ((((*(float *)(lVar31 + 0x90) == 0.0) &&
                 (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X ==
                  *(double *)(lVar31 + 0x18))) &&
                (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y ==
                 *(double *)(lVar31 + 0x20))) &&
               (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z ==
                *(double *)(lVar31 + 0x28))) {
              if (bVar33 == 0) {
                lVar26 = (**(code **)(*(longlong *)plVar7[2] + 0x10))();
                local_138 = *(double *)(lVar26 + 0x20);
                dStack_130 = *(double *)(lVar26 + 0x28);
                local_128 = *(double *)(lVar26 + 0x30);
                (pFVar8->Location).field0_0x0._s_0.X = local_138;
                (pFVar8->Location).field0_0x0._s_0.Y = dStack_130;
                (pFVar8->Location).field0_0x0._s_0.Z = local_128;
              }
              else {
                (pFVar8->Location).field0_0x0._s_0.X =
                     UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                (pFVar8->Location).field0_0x0._s_0.Y = (double)uVar18;
                (pFVar8->Location).field0_0x0._s_0.Z =
                     UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              }
            }
            else if (bVar20 == bVar33) {
              dVar16 = *(double *)(lVar31 + 0x20);
              (pFVar8->Location).field0_0x0._s_0.X = *(double *)(lVar31 + 0x18);
              (pFVar8->Location).field0_0x0._s_0.Y = dVar16;
              (pFVar8->Location).field0_0x0._s_0.Z = *(double *)(lVar31 + 0x28);
            }
            else if ((bVar20 == 0) || (bVar33 != 0)) {
              pdVar28 = (double *)(**(code **)(*(longlong *)plVar7[2] + 0x10))();
              dVar36 = *(double *)(lVar31 + 0x28) - pdVar28[6];
              dVar15 = *(double *)(lVar31 + 0x18) - pdVar28[4];
              dVar17 = *(double *)(lVar31 + 0x20) - pdVar28[5];
              uVar61 = (undefined4)((ulonglong)dVar17 >> 0x20);
              dVar55 = *pdVar28 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
              dVar59 = pdVar28[1] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
              auVar69._8_4_ = SUB84(dVar17,0);
              auVar69._0_8_ = dVar15;
              auVar69._12_4_ = uVar61;
              dVar16 = pdVar28[2] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
              dVar11 = pdVar28[3] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
              auVar48._8_4_ = SUB84(dVar59,0);
              auVar48._0_8_ = dVar55;
              uVar60 = (undefined4)((ulonglong)dVar59 >> 0x20);
              auVar48._12_4_ = uVar60;
              auVar52._8_4_ = SUB84(dVar59,0);
              auVar52._0_8_ = dVar55;
              auVar52._12_4_ = uVar60;
              auVar58._8_4_ = SUB84(dVar11,0);
              auVar58._0_8_ = dVar16;
              auVar58._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
              auVar38 = blendpd(auVar52,auVar58,2);
              dVar49 = auVar48._8_8_;
              auVar45._8_4_ = SUB84(dVar17,0);
              auVar45._0_8_ = dVar15;
              auVar45._12_4_ = uVar61;
              auVar47._8_8_ = 0;
              auVar47._0_8_ = dVar36;
              auVar58 = blendpd(auVar45,auVar47,2);
              auVar41._8_4_ = SUB84(dVar16,0);
              auVar41._0_8_ = dVar49;
              auVar41._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
              auVar70._0_8_ = auVar69._8_8_ * dVar55 - dVar49 * dVar15;
              auVar70._8_8_ = dVar36 * dVar59 - auVar41._8_8_ * dVar17;
              auVar46._0_8_ = auVar58._0_8_ * dVar16 - dVar36 * auVar38._0_8_;
              auVar46._8_8_ = auVar58._8_8_ * dVar11 - auVar38._8_8_ * 0.0;
              dVar12 = auVar70._8_8_ + auVar70._8_8_;
              dVar13 = auVar46._0_8_ + auVar46._0_8_;
              uVar60 = SUB84(dVar13,0);
              uVar61 = (undefined4)((ulonglong)dVar13 >> 0x20);
              auVar58 = blendpd(auVar70,auVar46,2);
              auVar67._8_4_ = uVar60;
              auVar67._0_8_ = dVar12;
              auVar67._12_4_ = uVar61;
              auVar42._8_4_ = uVar60;
              auVar42._0_8_ = dVar12;
              auVar42._12_4_ = uVar61;
              auVar65._8_4_ = uVar60;
              auVar65._0_8_ = dVar12;
              auVar65._12_4_ = uVar61;
              auVar71._0_8_ = auVar58._0_8_ + auVar58._0_8_;
              auVar71._8_8_ = auVar58._8_8_ + auVar58._8_8_;
              auVar58 = blendpd(auVar65,auVar71,2);
              auVar68._0_8_ = auVar67._8_8_ * dVar55 - dVar12 * dVar49;
              auVar68._8_8_ = auVar71._0_8_ * dVar59 - auVar42._8_8_ * dVar16;
              auVar43._8_4_ = SUB84(auVar71._8_8_,0);
              auVar43._0_8_ = auVar71._0_8_;
              auVar43._12_4_ = (int)((ulonglong)auVar71._8_8_ >> 0x20);
              auVar66._0_8_ = auVar58._0_8_ * dVar16 - auVar71._0_8_ * auVar38._0_8_;
              auVar66._8_8_ = auVar58._8_8_ * dVar11 - auVar43._8_8_ * auVar38._8_8_;
              auVar58 = *(undefined1 (*) [16])(pdVar28 + 10);
              auVar53._0_8_ =
                   (double)CONCAT44(*(uint *)((longlong)pdVar28 + 0x44) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    *(uint *)(pdVar28 + 8) &
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff);
              auVar53._8_4_ = *(uint *)(pdVar28 + 9) & _UNK_15061cc88;
              auVar53._12_4_ = *(uint *)((longlong)pdVar28 + 0x4c) & _UNK_15061cc8c;
              lVar26 = -(ulonglong)
                        ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                          auVar58._4_4_,
                                          (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                          auVar58._0_4_) <=
                        (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
              auVar38 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                              *(undefined1 (*) [16])(pdVar28 + 8));
              lVar34 = -(ulonglong)
                        (auVar53._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
              lVar35 = -(ulonglong)
                        (auVar53._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
              auVar54._0_8_ =
                   (double)CONCAT44(~(uint)((ulonglong)lVar34 >> 0x20) & auVar38._4_4_,
                                    ~(uint)lVar34 & auVar38._0_4_);
              auVar54._8_4_ = ~(uint)lVar35 & auVar38._8_4_;
              auVar54._12_4_ = ~(uint)((ulonglong)lVar35 >> 0x20) & auVar38._12_4_;
              auVar44._8_4_ = SUB84(auVar68._8_8_,0);
              auVar44._0_8_ = auVar68._0_8_;
              auVar44._12_4_ = (int)((ulonglong)auVar68._8_8_ >> 0x20);
              local_108 = auVar54._0_8_ * (dVar12 * dVar11 + dVar15 + auVar44._8_8_);
              dStack_100 = auVar54._8_8_ * (dVar13 * dVar11 + dVar17 + auVar66._0_8_);
              auVar38._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
              auVar38._0_8_ = auVar58._0_8_;
              auVar38._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
              auVar58 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                              auVar38);
              auVar38 = blendpd(auVar68,auVar66,2);
              local_f8 = (double)CONCAT44(~(uint)((ulonglong)lVar26 >> 0x20) & auVar58._4_4_,
                                          ~(uint)lVar26 & auVar58._0_4_) *
                         (auVar71._0_8_ * dVar11 + dVar36 + auVar38._0_8_);
              (pFVar8->Location).field0_0x0._s_0.X = local_108;
              (pFVar8->Location).field0_0x0._s_0.Y = dStack_100;
              (pFVar8->Location).field0_0x0._s_0.Z = local_f8;
            }
            else {
              pauVar27 = (undefined1 (*) [16])(**(code **)(*(longlong *)plVar7[2] + 0x10))();
              auVar58 = pauVar27[1];
              dVar36 = auVar58._0_8_;
              dVar12 = *(double *)(lVar31 + 0x18) * *(double *)pauVar27[4];
              dVar13 = *(double *)(lVar31 + 0x20) * *(double *)(pauVar27[4] + 8);
              uVar60 = (undefined4)((ulonglong)dVar13 >> 0x20);
              dVar15 = *(double *)(lVar31 + 0x28) * *(double *)pauVar27[5];
              dVar16 = *(double *)(pauVar27[5] + 8) * 0.0;
              local_e8 = *pauVar27;
              auVar62._8_4_ = SUB84(dVar13,0);
              auVar62._0_8_ = dVar12;
              auVar62._12_4_ = uVar60;
              dVar17 = *(double *)(pauVar27[1] + 8);
              auVar47 = blendpd(local_e8,auVar58,2);
              auVar63._0_8_ = auVar62._8_8_ * local_e8._0_8_ - local_e8._8_8_ * dVar12;
              auVar63._8_8_ = dVar15 * local_e8._8_8_ - dVar36 * dVar13;
              auVar37._8_4_ = SUB84(dVar13,0);
              auVar37._0_8_ = dVar12;
              auVar37._12_4_ = uVar60;
              auVar14._8_4_ = SUB84(dVar16,0);
              auVar14._0_8_ = dVar15;
              auVar14._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
              auVar38 = blendpd(auVar37,auVar14,2);
              auVar39._0_8_ = auVar38._0_8_ * dVar36 - auVar47._0_8_ * dVar15;
              auVar39._8_8_ = auVar38._8_8_ * auVar58._8_8_ - auVar47._8_8_ * dVar16;
              auVar38 = *pauVar27;
              auVar47 = blendpd(auVar63,auVar39,2);
              dVar16 = auVar63._8_8_ + auVar63._8_8_;
              dVar11 = auVar39._0_8_ + auVar39._0_8_;
              uVar60 = (undefined4)((ulonglong)dVar11 >> 0x20);
              auVar64._0_8_ = auVar47._0_8_ + auVar47._0_8_;
              auVar64._8_8_ = auVar47._8_8_ + auVar47._8_8_;
              auVar56._8_4_ = SUB84(dVar11,0);
              auVar56._0_8_ = dVar16;
              auVar56._12_4_ = uVar60;
              auVar50._8_4_ = SUB84(dVar11,0);
              auVar50._0_8_ = dVar16;
              auVar50._12_4_ = uVar60;
              auVar47 = blendpd(auVar50,auVar64,2);
              auVar57._0_8_ = auVar56._8_8_ * auVar38._0_8_ - auVar38._8_8_ * dVar16;
              auVar57._8_8_ = auVar64._0_8_ * auVar38._8_8_ - dVar36 * dVar11;
              auVar40._8_4_ = SUB84(auVar57._8_8_,0);
              auVar40._0_8_ = auVar57._0_8_;
              auVar40._12_4_ = (int)((ulonglong)auVar57._8_8_ >> 0x20);
              auVar38 = blendpd(auVar38,auVar58,2);
              auVar51._0_8_ = auVar47._0_8_ * dVar36 - auVar38._0_8_ * auVar64._0_8_;
              auVar51._8_8_ = auVar47._8_8_ * auVar58._8_8_ - auVar38._8_8_ * auVar64._8_8_;
              auVar58 = blendpd(auVar57,auVar51,2);
              dVar16 = dVar16 * dVar17 + dVar12 + auVar40._8_8_ + *(double *)pauVar27[2];
              dVar11 = dVar11 * dVar17 + dVar13 + auVar51._0_8_ + *(double *)(pauVar27[2] + 8);
              uVar60 = SUB84(dVar11,0);
              uVar61 = (undefined4)((ulonglong)dVar11 >> 0x20);
              local_120._8_4_ = uVar60;
              local_120._0_8_ = dVar16;
              local_120._12_4_ = uVar61;
              local_110 = auVar64._0_8_ * dVar17 + dVar15 + auVar58._0_8_ + *(double *)pauVar27[3];
              auVar10._8_4_ = uVar60;
              auVar10._0_8_ = dVar16;
              auVar10._12_4_ = uVar61;
              *(undefined1 (*) [16])&(pFVar8->Location).field0_0x0 = auVar10;
              (pFVar8->Location).field0_0x0._s_0.Z = local_110;
            }
            if (this->InheritSourceVelocity != 0) {
              fVar1 = this->InheritSourceVelocityScale;
              fVar2 = *(float *)(lVar31 + 0x48);
              fVar3 = *(float *)(lVar31 + 0x40);
              fVar4 = (pFVar8->BaseVelocity).field0_0x0._s_0.Z;
              fVar5 = (pFVar8->BaseVelocity).field0_0x0._s_0.X;
              (pFVar8->BaseVelocity).field0_0x0._s_0.Y =
                   fVar1 * *(float *)(lVar31 + 0x44) + (pFVar8->BaseVelocity).field0_0x0._s_0.Y;
              (pFVar8->BaseVelocity).field0_0x0._s_0.Z = fVar1 * fVar2 + fVar4;
              (pFVar8->BaseVelocity).field0_0x0._s_0.X = fVar1 * fVar3 + fVar5;
              fVar1 = this->InheritSourceVelocityScale;
              fVar2 = *(float *)(lVar31 + 0x48);
              fVar3 = *(float *)(lVar31 + 0x40);
              fVar4 = (pFVar8->Velocity).field0_0x0._s_0.Z;
              fVar5 = (pFVar8->Velocity).field0_0x0._s_0.X;
              (pFVar8->Velocity).field0_0x0._s_0.Y =
                   fVar1 * *(float *)(lVar31 + 0x44) + (pFVar8->Velocity).field0_0x0._s_0.Y;
              (pFVar8->Velocity).field0_0x0._s_0.Z = fVar1 * fVar2 + fVar4;
              (pFVar8->Velocity).field0_0x0._s_0.X = fVar1 * fVar3 + fVar5;
            }
            if (this->bInheritSourceRotation != 0) {
              pFVar8->Rotation =
                   this->InheritSourceRotationScale * *(float *)(lVar31 + 0x3c) + pFVar8->Rotation;
              iVar22 = (**(code **)(this_00->_padding_ + 0x150))(this_00);
              iVar23 = (**(code **)(*plVar7 + 0x150))(plVar7);
              if ((iVar22 != 0) && (iVar23 != 0)) {
                pfVar30 = (float *)(iVar23 + lVar31);
                pfVar32 = (float *)((longlong)&(pFVar8->OldLocation).field0_0x0 + (longlong)iVar22);
                if (((pfVar32 == (float *)0x0) || (pfVar30 == (float *)0x0)) &&
                   (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                                       (&bGEnsureHasExecuted<7003914095707554314>,false,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules_Location.cpp"
                                        ,0x20a,
                                        "DestPayloadData != nullptr && SrcPayloadData != nullptr"),
                   bVar19)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pfVar32[6] = pfVar32[6] + pfVar30[6];
                pfVar32[7] = pfVar30[7] + pfVar32[7];
                pfVar32[8] = pfVar30[8] + pfVar32[8];
                *pfVar32 = *pfVar32 + *pfVar30;
                pfVar32[1] = pfVar30[1] + pfVar32[1];
                pfVar32[2] = pfVar30[2] + pfVar32[2];
              }
            }
          }
          iVar22 = _finite((pFVar8->Location).field0_0x0._s_0.X);
          if (((iVar22 == 0) ||
              (iVar22 = _finite((pFVar8->Location).field0_0x0._s_0.Y), iVar22 == 0)) ||
             (iVar22 = _finite((pFVar8->Location).field0_0x0._s_0.Z), iVar22 == 0)) {
            local_150 = param_1;
            `UParticleModuleLocationEmitter::Spawn'::__l2::<lambda_1>::operator()(&local_150);
          }
          iVar22 = _finite((double)(pFVar8->Velocity).field0_0x0._s_0.X);
          if (((iVar22 == 0) ||
              (iVar22 = _finite((double)(pFVar8->Velocity).field0_0x0._s_0.Y), iVar22 == 0)) ||
             (iVar22 = _finite((double)(pFVar8->Velocity).field0_0x0._s_0.Z), iVar22 == 0)) {
            local_148 = param_1;
            `UParticleModuleLocationEmitter::Spawn'::__l2::<lambda_2>::operator()(&local_148);
          }
          iVar22 = _finite((double)(pFVar8->BaseVelocity).field0_0x0._s_0.X);
          if (((iVar22 != 0) &&
              (iVar22 = _finite((double)(pFVar8->BaseVelocity).field0_0x0._s_0.Y), iVar22 != 0)) &&
             (iVar22 = _finite((double)(pFVar8->BaseVelocity).field0_0x0._s_0.Z), iVar22 != 0)) {
            return;
          }
          local_140 = param_1;
          `UParticleModuleLocationEmitter::Spawn'::__l2::<lambda_3>::operator()(&local_140);
          return;
        }
        uVar29 = uVar29 + 1;
        lVar31 = lVar31 + 8;
      } while ((int)uVar29 < iVar22);
    }
  }
  return;
}

// operator() @ 1505259d0

bool __thiscall `UParticleModuleLocationEmitter::Spawn'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  FName local_res10;
  FString local_28;
  void *local_18 [2];
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7003914095707554322>);
  if (bVar4) {
    (**(code **)(**(longlong **)(**(longlong **)this + 0x10) + 0x90))
              (*(longlong **)(**(longlong **)this + 0x10),local_18);
    lVar6 = (**(code **)(**(longlong **)(**(longlong **)this + 0x10) + 0xd8))();
    if (lVar6 == 0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res10 = *(FName *)(lVar6 + 0x18);
      ::FName::ToString(&local_res10,&local_28);
    }
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7003914095707554322>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150525aaf;
    }
  }
  bVar4 = false;
LAB_150525aaf:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18[0] != (void *)0x0)) {
    FMemory::Free(local_18[0]);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150526ad0

bool __thiscall `UParticleModuleLocationEmitter::Spawn'::__l2::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  FName local_res10;
  FString local_28;
  void *local_18 [2];
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7003914095707554323>);
  if (bVar4) {
    (**(code **)(**(longlong **)(**(longlong **)this + 0x10) + 0x90))
              (*(longlong **)(**(longlong **)this + 0x10),local_18);
    lVar6 = (**(code **)(**(longlong **)(**(longlong **)this + 0x10) + 0xd8))();
    if (lVar6 == 0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res10 = *(FName *)(lVar6 + 0x18);
      ::FName::ToString(&local_res10,&local_28);
    }
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7003914095707554323>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150526baf;
    }
  }
  bVar4 = false;
LAB_150526baf:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18[0] != (void *)0x0)) {
    FMemory::Free(local_18[0]);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1505273c0

bool __thiscall `UParticleModuleLocationEmitter::Spawn'::__l2::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  FName local_res10;
  FString local_28;
  void *local_18 [2];
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7003914095707554324>);
  if (bVar4) {
    (**(code **)(**(longlong **)(**(longlong **)this + 0x10) + 0x90))
              (*(longlong **)(**(longlong **)this + 0x10),local_18);
    lVar6 = (**(code **)(**(longlong **)(**(longlong **)this + 0x10) + 0xd8))();
    if (lVar6 == 0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res10 = *(FName *)(lVar6 + 0x18);
      ::FName::ToString(&local_res10,&local_28);
    }
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7003914095707554324>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15052749f;
    }
  }
  bVar4 = false;
LAB_15052749f:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18[0] != (void *)0x0)) {
    FMemory::Free(local_18[0]);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

