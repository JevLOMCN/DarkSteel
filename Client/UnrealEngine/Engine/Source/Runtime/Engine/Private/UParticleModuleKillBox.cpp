// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticClass @ 1472f7de0

UClass * __cdecl UParticleModuleKillBox::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleKillBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleKillBox",
               &Z_Registration_Info_UClass_UParticleModuleKillBox.InnerSingleton,
               StaticRegisterNativesUParticleModuleKillBox,0xf8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UParticleModuleKillBox>,
               InternalVTableHelperCtorCaller<UParticleModuleKillBox>,local_res8,
               UParticleModuleKillBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleKillBox.InnerSingleton;
}

// UParticleModuleKillBox @ 1472fd2e0

UParticleModuleKillBox * __thiscall
UParticleModuleKillBox::UParticleModuleKillBox(UParticleModuleKillBox *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleKillBox__6B_;
  (this->LowerLeftCorner)._padding_ = 0;
  (this->LowerLeftCorner)._padding_ = 0;
  (this->LowerLeftCorner)._padding_ = 0;
  *(undefined4 *)&(this->LowerLeftCorner)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->LowerLeftCorner)._padding_ + 4) = 0;
  (this->LowerLeftCorner).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LowerLeftCorner).MaxValue = 0.0;
  (this->LowerLeftCorner).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LowerLeftCorner).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->LowerLeftCorner).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LowerLeftCorner).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LowerLeftCorner).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->LowerLeftCorner).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->LowerLeftCorner).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  (this->UpperRightCorner)._padding_ = 0;
  (this->UpperRightCorner)._padding_ = 0;
  (this->UpperRightCorner)._padding_ = 0;
  *(undefined4 *)&(this->UpperRightCorner)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->UpperRightCorner)._padding_ + 4) = 0;
  (this->UpperRightCorner).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->UpperRightCorner).MaxValue = 0.0;
  (this->UpperRightCorner).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->UpperRightCorner).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->UpperRightCorner).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->UpperRightCorner).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->UpperRightCorner).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->UpperRightCorner).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->UpperRightCorner).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  return this;
}

// ~UParticleModuleKillBox @ 1472fdef0

void __thiscall UParticleModuleKillBox::~UParticleModuleKillBox(UParticleModuleKillBox *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleKillBox__6B_;
  pvVar1 = (void *)(this->UpperRightCorner)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->LowerLeftCorner)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModule__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1473011f0

UClass * __cdecl UParticleModuleKillBox::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleKillBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleKillBox",
               &Z_Registration_Info_UClass_UParticleModuleKillBox.InnerSingleton,
               StaticRegisterNativesUParticleModuleKillBox,0xf8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UParticleModuleKillBox>,
               InternalVTableHelperCtorCaller<UParticleModuleKillBox>,local_res8,
               UParticleModuleKillBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleKillBox.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleKillBox @ 147301920

void __cdecl UParticleModuleKillBox::StaticRegisterNativesUParticleModuleKillBox(void)

{
  return;
}

// UParticleModuleKillBox @ 14815c3c0

UParticleModuleKillBox * __thiscall
UParticleModuleKillBox::UParticleModuleKillBox
          (UParticleModuleKillBox *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  *(byte *)((longlong)&this->_padding_ + 1) = *(byte *)((longlong)&this->_padding_ + 1) & 0xf3 | 3;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x17 | 0x80;
  this->_padding_ = (longlong)&___7UParticleModuleKillBox__6B_;
  (this->LowerLeftCorner)._padding_ = 0;
  (this->LowerLeftCorner)._padding_ = 0;
  (this->LowerLeftCorner)._padding_ = 0;
  *(undefined4 *)&(this->LowerLeftCorner)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->LowerLeftCorner)._padding_ + 4) = 0;
  (this->LowerLeftCorner).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LowerLeftCorner).MaxValue = 0.0;
  (this->LowerLeftCorner).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LowerLeftCorner).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->LowerLeftCorner).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LowerLeftCorner).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LowerLeftCorner).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->LowerLeftCorner).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->LowerLeftCorner).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  (this->UpperRightCorner)._padding_ = 0;
  (this->UpperRightCorner)._padding_ = 0;
  (this->UpperRightCorner)._padding_ = 0;
  *(undefined4 *)&(this->UpperRightCorner)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->UpperRightCorner)._padding_ + 4) = 0;
  (this->UpperRightCorner).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->UpperRightCorner).MaxValue = 0.0;
  (this->UpperRightCorner).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->UpperRightCorner).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->UpperRightCorner).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->UpperRightCorner).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->UpperRightCorner).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->UpperRightCorner).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->UpperRightCorner).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 0x42;
  this->bAxisAlignedAndFixedSize = 1;
  return this;
}

// InitializeDefaults @ 1481838b0

void __thiscall UParticleModuleKillBox::InitializeDefaults(UParticleModuleKillBox *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionVectorConstant *pUVar3;
  FName local_res8;
  
  bVar1 = FRawDistributionVector::IsCreated(&this->LowerLeftCorner);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionLowerLeftCorner");
    pUVar3 = NewObject<UDistributionVectorConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDistributionVectorConstant *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->LowerLeftCorner).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
  }
  bVar1 = FRawDistributionVector::IsCreated(&this->UpperRightCorner);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionUpperRightCorner");
    pUVar3 = NewObject<UDistributionVectorConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDistributionVectorConstant *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->UpperRightCorner).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
  }
  return;
}

// PostInitProperties @ 14818a1c0

void __thiscall UParticleModuleKillBox::PostInitProperties(UParticleModuleKillBox *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionVectorConstant *pUVar3;
  FName local_res8;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    bVar1 = FRawDistributionVector::IsCreated(&this->LowerLeftCorner);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"DistributionLowerLeftCorner");
      pUVar3 = NewObject<UDistributionVectorConstant>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UDistributionVectorConstant *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->LowerLeftCorner).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
    }
    bVar1 = FRawDistributionVector::IsCreated(&this->UpperRightCorner);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"DistributionUpperRightCorner");
      pUVar3 = NewObject<UDistributionVectorConstant>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UDistributionVectorConstant *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->UpperRightCorner).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
    }
  }
  return;
}

// Render3DPreview @ 14818fda0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UParticleModuleKillBox::Render3DPreview(UParticleModuleKillBox *this,FPreviewContext *param_1)

{
  return;
}

// Update @ 1481ace40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UParticleModuleKillBox::Update(UParticleModuleKillBox *this,FUpdateContext *param_1)

{
  int iVar1;
  FParticleEmitterInstance *pFVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  UParticleLODLevel *pUVar10;
  UObject *pUVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 (*pauVar14) [16];
  double *pdVar15;
  uint uVar16;
  int iVar17;
  ushort *puVar18;
  longlong lVar19;
  longlong lVar20;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined4 uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar46;
  double dVar50;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined4 uVar51;
  undefined4 uVar55;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  double dVar56;
  undefined1 auVar57 [16];
  double dVar60;
  double dVar61;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  double dVar62;
  undefined1 auVar63 [16];
  double dVar64;
  undefined4 uVar65;
  undefined8 uVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  double local_158;
  double local_148;
  double local_140;
  double local_138;
  double dStack_120;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_f0 [4];
  
  pFVar2 = (FParticleEmitterInstance *)param_1->_padding_;
  pUVar10 = UParticleEmitter::GetCurrentLODLevel(pFVar2->SpriteTemplate,pFVar2);
  pUVar11 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
  FRawDistributionVector::GetValue
            (&this->LowerLeftCorner,(TVector<double> *)&local_108._s_0,pFVar2->EmitterTime,pUVar11,0
             ,(FRandomStream *)0x0);
  pUVar11 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
  FRawDistributionVector::GetValue
            (&this->UpperRightCorner,(TVector<double> *)&local_f0[0]._s_0,pFVar2->EmitterTime,
             pUVar11,0,(FRandomStream *)0x0);
  uVar71 = (undefined4)((ulonglong)local_108._16_8_ >> 0x20);
  uVar51 = SUB84(local_108._s_0.Y,0);
  uVar55 = (undefined4)((ulonglong)local_108._8_8_ >> 0x20);
  uVar70 = (undefined4)((ulonglong)local_f0[0]._16_8_ >> 0x20);
  uVar41 = SUB84(local_108._s_0.Z,0);
  uVar65 = uVar71;
  if ((double)local_f0[0]._16_8_ <= local_108._s_0.Z) {
    uVar41 = (int)local_f0[0]._s_0.Z;
    uVar65 = uVar70;
  }
  if ((double)local_f0[0]._8_8_ <= local_108._s_0.Y) {
    uVar51 = (undefined4)local_f0[0]._s_0.Y;
    uVar55 = (undefined4)((ulonglong)local_f0[0]._8_8_ >> 0x20);
  }
  local_158 = local_108._s_0.Y;
  if (local_108._s_0.Y <= (double)local_f0[0]._8_8_) {
    local_158 = (double)local_f0[0]._8_8_;
  }
  auVar22._8_8_ = 0;
  auVar22._0_8_ = local_158;
  uVar72 = SUB84(local_108._s_0.Z,0);
  if (local_108._s_0.Z <= (double)local_f0[0]._16_8_) {
    uVar72 = (int)local_f0[0]._s_0.Z;
    uVar71 = uVar70;
  }
  dVar6 = (double)CONCAT44(uVar71,uVar72);
  local_138 = local_108._s_0.X;
  if ((double)local_f0[0]._0_8_ <= local_108._s_0.X) {
    local_138 = (double)local_f0[0]._0_8_;
  }
  uVar66 = local_108._s_0.X;
  if (local_108._s_0.X <= (double)local_f0[0]._0_8_) {
    uVar66 = local_f0[0]._s_0.X;
  }
  local_148 = (double)CONCAT44(uVar65,uVar41);
  local_140 = (double)CONCAT44(uVar55,uVar51);
  if (this->bAbsolute == 0) {
    lVar12 = (**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 0x10))();
    auVar22 = *(undefined1 (*) [16])(lVar12 + 0x20);
    local_148 = *(double *)(lVar12 + 0x30);
    lVar12 = (**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 0x10))();
    auVar7._4_8_ = extraout_XMM0_Qb;
    auVar7._0_4_ = auVar22._4_4_;
    auVar40._0_8_ = auVar7._0_8_ << 0x20;
    auVar40._8_4_ = auVar22._8_4_;
    auVar40._12_4_ = auVar22._12_4_;
    local_148 = local_148 + (double)CONCAT44(uVar65,uVar41);
    local_140 = auVar40._8_8_ + (double)CONCAT44(uVar55,uVar51);
    auVar40 = *(undefined1 (*) [16])(lVar12 + 0x20);
    local_138 = auVar22._0_8_ + local_138;
    uVar66 = (double)uVar66 + auVar40._0_8_;
    dVar6 = (double)CONCAT44(uVar71,uVar72) + SUB168(*(undefined1 (*) [16])(lVar12 + 0x30),0);
    auVar8._4_8_ = auVar22._8_8_;
    auVar8._0_4_ = auVar40._4_4_;
    auVar36._0_8_ = auVar8._0_8_ << 0x20;
    auVar36._8_4_ = auVar40._8_4_;
    auVar36._12_4_ = auVar40._12_4_;
    local_158 = auVar36._8_8_ + local_158;
    auVar22._8_4_ = auVar40._8_4_;
    auVar22._0_8_ = local_158;
    auVar22._12_4_ = auVar40._12_4_;
  }
  lVar12 = param_1->_padding_;
  iVar17 = *(int *)(lVar12 + 0x18c) + -1;
  lVar3 = *(longlong *)(lVar12 + 0x168);
  iVar1 = *(int *)(lVar12 + 0x188);
  if (-1 < iVar17) {
    puVar18 = (ushort *)(*(longlong *)(lVar12 + 0x170) + (longlong)iVar17 * 2);
    do {
      uVar13 = (ulonglong)((uint)*puVar18 * iVar1);
      if ((*(uint *)(uVar13 + 0x6c + lVar3) & 0x4000000) == 0) {
        pdVar15 = (double *)(uVar13 + 0x18 + lVar3);
        dVar62 = (pFVar2->PositionOffsetThisTick).field0_0x0._s_0.Z +
                 *(double *)(uVar13 + 0x28 + lVar3);
        dVar46 = (pFVar2->PositionOffsetThisTick).field0_0x0._s_0.X + *pdVar15;
        dVar50 = (pFVar2->PositionOffsetThisTick).field0_0x0._s_0.Y + pdVar15[1];
        auVar33._8_4_ = SUB84(dVar50,0);
        auVar33._0_8_ = dVar46;
        auVar33._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
        if (((pUVar10->RequiredModule).field0_0x0.DebugPtr)->bUseLocalSpace == 0) {
          if ((this->bAxisAlignedAndFixedSize == 0) && (this->bAbsolute == 0)) {
            pdVar15 = (double *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 0x10))();
            dVar62 = dVar62 - pdVar15[6];
            dVar46 = dVar46 - pdVar15[4];
            dVar50 = dVar50 - pdVar15[5];
            uVar65 = SUB84(dVar50,0);
            uVar71 = (undefined4)((ulonglong)dVar50 >> 0x20);
            dVar61 = *pdVar15 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
            dVar56 = pdVar15[1] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
            auVar67._8_4_ = uVar65;
            auVar67._0_8_ = dVar46;
            auVar67._12_4_ = uVar71;
            auVar45._0_8_ =
                 pdVar15[2] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
            auVar45._8_8_ =
                 pdVar15[3] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
            auVar34._8_4_ = SUB84(dVar56,0);
            auVar34._0_8_ = dVar61;
            uVar41 = (undefined4)((ulonglong)dVar56 >> 0x20);
            auVar34._12_4_ = uVar41;
            auVar25._8_4_ = uVar65;
            auVar25._0_8_ = dVar46;
            auVar25._12_4_ = uVar71;
            auVar37._8_4_ = SUB84(dVar56,0);
            auVar37._0_8_ = dVar61;
            auVar37._12_4_ = uVar41;
            auVar31._8_4_ = uVar65;
            auVar31._0_8_ = dVar46;
            auVar31._12_4_ = uVar71;
            auVar68._0_8_ = auVar67._8_8_ * dVar61 - dVar46 * auVar34._8_8_;
            auVar68._8_8_ = dVar62 * dVar56 - auVar25._8_8_ * auVar45._0_8_;
            auVar40 = blendpd(auVar37,auVar45,2);
            auVar5._8_8_ = 0;
            auVar5._0_8_ = dVar62;
            auVar22 = blendpd(auVar31,auVar5,2);
            auVar63._8_4_ = SUB84(auVar68._8_8_,0);
            auVar63._0_8_ = auVar68._0_8_;
            auVar63._12_4_ = (int)((ulonglong)auVar68._8_8_ >> 0x20);
            auVar32._0_8_ = auVar22._0_8_ * auVar45._0_8_ - dVar62 * auVar40._0_8_;
            auVar32._8_8_ = auVar22._8_8_ * auVar45._8_8_ - auVar40._8_8_ * 0.0;
            dVar60 = auVar63._8_8_ + auVar63._8_8_;
            dVar64 = auVar32._0_8_ + auVar32._0_8_;
            auVar22 = blendpd(auVar68,auVar32,2);
            auVar69._0_8_ = auVar22._0_8_ + auVar22._0_8_;
            auVar69._8_8_ = auVar22._8_8_ + auVar22._8_8_;
            uVar41 = SUB84(dVar64,0);
            auVar58._8_4_ = uVar41;
            auVar58._0_8_ = dVar60;
            uVar65 = (undefined4)((ulonglong)dVar64 >> 0x20);
            auVar58._12_4_ = uVar65;
            auVar26._8_4_ = uVar41;
            auVar26._0_8_ = dVar60;
            auVar26._12_4_ = uVar65;
            auVar53._8_4_ = uVar41;
            auVar53._0_8_ = dVar60;
            auVar53._12_4_ = uVar65;
            auVar22 = blendpd(auVar53,auVar69,2);
            auVar48._0_8_ =
                 (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                  *(uint *)((longlong)pdVar15 + 0x44),
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                  *(uint *)(pdVar15 + 8));
            auVar48._8_4_ = _UNK_15061cc88 & *(uint *)(pdVar15 + 9);
            auVar48._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)pdVar15 + 0x4c);
            auVar59._0_8_ = auVar58._8_8_ * dVar61 - dVar60 * auVar34._8_8_;
            auVar59._8_8_ = auVar69._0_8_ * dVar56 - auVar26._8_8_ * auVar45._0_8_;
            auVar27._8_4_ = SUB84(auVar69._8_8_,0);
            auVar27._0_8_ = auVar69._0_8_;
            auVar27._12_4_ = (int)((ulonglong)auVar69._8_8_ >> 0x20);
            auVar54._0_8_ = auVar22._0_8_ * auVar45._0_8_ - auVar69._0_8_ * auVar40._0_8_;
            auVar54._8_8_ = auVar22._8_8_ * auVar45._8_8_ - auVar27._8_8_ * auVar40._8_8_;
            auVar22 = *(undefined1 (*) [16])(pdVar15 + 10);
            lVar19 = -(ulonglong)
                      ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar22._4_4_
                                        ,(uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                         auVar22._0_4_) <=
                      (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
            auVar35._8_4_ = SUB84(auVar45._8_8_,0);
            auVar35._0_8_ = auVar45._8_8_;
            auVar35._12_4_ = (int)((ulonglong)auVar45._8_8_ >> 0x20);
            auVar40 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                            *(undefined1 (*) [16])(pdVar15 + 8));
            lVar12 = -(ulonglong)
                      (auVar48._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
            lVar20 = -(ulonglong)
                      (auVar48._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
            auVar28._8_4_ = SUB84(auVar59._8_8_,0);
            auVar28._0_8_ = auVar59._0_8_;
            auVar28._12_4_ = (int)((ulonglong)auVar59._8_8_ >> 0x20);
            auVar49._0_8_ =
                 (double)CONCAT44(~(uint)((ulonglong)lVar12 >> 0x20) & auVar40._4_4_,
                                  ~(uint)lVar12 & auVar40._0_4_);
            auVar49._8_4_ = ~(uint)lVar20 & auVar40._8_4_;
            auVar49._12_4_ = ~(uint)((ulonglong)lVar20 >> 0x20) & auVar40._12_4_;
            auVar4._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
            auVar4._0_8_ = auVar22._0_8_;
            auVar4._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
            auVar40 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar4);
            auVar36 = blendpd(auVar59,auVar54,2);
            lVar12 = (**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 0x10))();
            auVar22._8_8_ = 0;
            auVar22._0_8_ = local_158;
            dVar46 = auVar49._0_8_ * (auVar45._8_8_ * dVar60 + dVar46 + auVar28._8_8_) +
                     *(double *)(lVar12 + 0x20);
            dVar62 = (double)CONCAT44(~(uint)((ulonglong)lVar19 >> 0x20) & auVar40._4_4_,
                                      ~(uint)lVar19 & auVar40._0_4_) *
                     (auVar45._8_8_ * auVar69._0_8_ + dVar62 + auVar36._0_8_) +
                     SUB168(*(undefined1 (*) [16])(lVar12 + 0x30),0);
            dStack_120 = auVar49._8_8_ * (auVar35._8_8_ * dVar64 + dVar50 + auVar54._0_8_) +
                         *(double *)(lVar12 + 0x28);
          }
          else {
            dStack_120 = auVar33._8_8_;
          }
        }
        else {
          pauVar14 = (undefined1 (*) [16])
                     (**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 0x10))();
          auVar40 = pauVar14[1];
          dVar61 = auVar40._0_8_;
          auVar52._0_8_ = dVar62 * *(double *)pauVar14[5];
          auVar52._8_8_ = *(double *)(pauVar14[5] + 8) * 0.0;
          auVar22 = *pauVar14;
          auVar36 = *pauVar14;
          dVar62 = *(double *)(pauVar14[1] + 8);
          dVar46 = *(double *)pauVar14[4] * dVar46;
          dVar50 = *(double *)(pauVar14[4] + 8) * dVar50;
          auVar33 = blendpd(auVar22,auVar40,2);
          auVar42._8_4_ = SUB84(dVar50,0);
          auVar42._0_8_ = dVar46;
          uVar41 = (undefined4)((ulonglong)dVar50 >> 0x20);
          auVar42._12_4_ = uVar41;
          auVar43._0_8_ = auVar42._8_8_ * auVar22._0_8_ - auVar22._8_8_ * dVar46;
          auVar43._8_8_ = auVar52._0_8_ * auVar22._8_8_ - dVar61 * dVar50;
          auVar21._8_4_ = SUB84(dVar50,0);
          auVar21._0_8_ = dVar46;
          auVar21._12_4_ = uVar41;
          auVar22 = blendpd(auVar21,auVar52,2);
          auVar57._8_4_ = SUB84(auVar43._8_8_,0);
          auVar57._0_8_ = auVar43._0_8_;
          auVar57._12_4_ = (int)((ulonglong)auVar43._8_8_ >> 0x20);
          auVar23._0_8_ = auVar22._0_8_ * dVar61 - auVar33._0_8_ * auVar52._0_8_;
          auVar23._8_8_ = auVar22._8_8_ * auVar40._8_8_ - auVar33._8_8_ * auVar52._8_8_;
          auVar22 = blendpd(auVar43,auVar23,2);
          dVar56 = auVar57._8_8_ + auVar57._8_8_;
          dVar60 = auVar23._0_8_ + auVar23._0_8_;
          auVar44._0_8_ = auVar22._0_8_ + auVar22._0_8_;
          auVar44._8_8_ = auVar22._8_8_ + auVar22._8_8_;
          auVar38._8_4_ = SUB84(dVar60,0);
          auVar38._0_8_ = dVar56;
          uVar41 = (undefined4)((ulonglong)dVar60 >> 0x20);
          auVar38._12_4_ = uVar41;
          auVar29._8_4_ = SUB84(dVar60,0);
          auVar29._0_8_ = dVar56;
          auVar29._12_4_ = uVar41;
          auVar33 = blendpd(auVar29,auVar44,2);
          auVar39._0_8_ = auVar38._8_8_ * auVar36._0_8_ - auVar36._8_8_ * dVar56;
          auVar39._8_8_ = auVar44._0_8_ * auVar36._8_8_ - dVar61 * dVar60;
          auVar24._8_4_ = SUB84(auVar39._8_8_,0);
          auVar24._0_8_ = auVar39._0_8_;
          auVar24._12_4_ = (int)((ulonglong)auVar39._8_8_ >> 0x20);
          auVar36 = blendpd(auVar36,auVar40,2);
          auVar22._8_8_ = 0;
          auVar22._0_8_ = local_158;
          auVar30._0_8_ = auVar33._0_8_ * dVar61 - auVar36._0_8_ * auVar44._0_8_;
          auVar30._8_8_ = auVar33._8_8_ * auVar40._8_8_ - auVar36._8_8_ * auVar44._8_8_;
          dVar46 = dVar56 * dVar62 + dVar46 + auVar24._8_8_;
          dVar61 = dVar60 * dVar62 + dVar50 + auVar30._0_8_;
          auVar40 = blendpd(auVar39,auVar30,2);
          dVar62 = auVar44._0_8_ * dVar62 + auVar52._0_8_ + auVar40._0_8_;
          auVar9._4_8_ = dVar50;
          auVar9._0_4_ = (int)((ulonglong)dVar46 >> 0x20);
          auVar47._0_8_ = auVar9._0_8_ << 0x20;
          auVar47._8_4_ = SUB84(dVar61,0);
          auVar47._12_4_ = (int)((ulonglong)dVar61 >> 0x20);
          dStack_120 = auVar47._8_8_;
        }
        if ((((dVar46 <= local_138) || ((double)uVar66 <= dVar46)) || (dStack_120 <= local_140)) ||
           (((auVar22._0_8_ <= dStack_120 || (dVar62 <= local_148)) || (dVar6 <= dVar62)))) {
          uVar16 = 0;
        }
        else {
          uVar16 = 1;
        }
        if (this->bKillInside == uVar16) {
          (**(code **)(pFVar2->_padding_ + 0xe8))(pFVar2,iVar17);
        }
      }
      puVar18 = puVar18 + -1;
      iVar17 = iVar17 + -1;
    } while (-1 < iVar17);
  }
  return;
}

