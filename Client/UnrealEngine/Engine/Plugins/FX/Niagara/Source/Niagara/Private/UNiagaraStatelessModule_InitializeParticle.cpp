// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 9

// StaticClass @ 14940ac70

UClass * __cdecl UNiagaraStatelessModule_InitializeParticle::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_InitializeParticle.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_InitializeParticle",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_InitializeParticle.InnerSingleton
               ,StaticRegisterNativesUNiagaraStatelessModule_InitializeParticle,0x1f0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraStatelessModule_InitializeParticle>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_InitializeParticle>,local_res8
               ,UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_InitializeParticle.InnerSingleton;
}

// UNiagaraStatelessModule_InitializeParticle @ 149429640

UNiagaraStatelessModule_InitializeParticle * __thiscall
UNiagaraStatelessModule_InitializeParticle::UNiagaraStatelessModule_InitializeParticle
          (UNiagaraStatelessModule_InitializeParticle *this,FVTableHelper *param_1)

{
  byte *pbVar1;
  float fVar2;
  int iVar3;
  FLinearColor_u_0 local_18;
  
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this,param_1);
  fVar2 = __real_3f800000;
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_InitializeParticle__6B_;
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat(&this->LifetimeDistribution,fVar2);
  local_18 = FLinearColor::White.field0_0x0;
  FNiagaraDistributionColor::FNiagaraDistributionColor
            (&this->ColorDistribution,(FLinearColor *)&local_18._s_0);
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
            (&this->MassDistribution,__real_3f800000);
  pbVar1 = (byte *)((longlong)&(this->SpriteSizeDistribution)._padding_ + 1);
  *pbVar1 = *pbVar1 & 0xfc;
  (this->SpriteSizeDistribution)._padding_ = (longlong)&___7FNiagaraDistributionBase__6B_;
  *(undefined1 *)&(this->SpriteSizeDistribution)._padding_ = 3;
  *(undefined1 *)((longlong)&(this->SpriteSizeDistribution)._padding_ + 2) = 0;
  *(undefined8 *)((longlong)&(this->SpriteSizeDistribution)._padding_ + 4) = 0;
  iVar3 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)
                     ((longlong)&(this->SpriteSizeDistribution)._padding_ + 4),
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)((longlong)&(this->SpriteSizeDistribution)._padding_ + 4) = iVar3;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&(this->SpriteSizeDistribution)._padding_);
  *(undefined1 *)&(this->SpriteSizeDistribution)._padding_ = 4;
  (this->SpriteSizeDistribution)._padding_ = (longlong)&___7FNiagaraDistributionRangeVector2__6B_;
  (this->SpriteSizeDistribution).Min.field0_0x0 = (TVector2<float>_u_0)0x4120000041200000;
  (this->SpriteSizeDistribution).Max.field0_0x0 = (TVector2<float>_u_0)0x4120000041200000;
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
            (&this->SpriteRotationDistribution,0.0);
  local_18._s_0.B = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  local_18._0_8_ = UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
  FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
            (&this->MeshScaleDistribution,(TVector<float> *)&local_18._s_0);
  fVar2 = __real_41200000;
  this->bWriteRibbonWidth = false;
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
            (&this->RibbonWidthDistribution,fVar2);
  FNiagaraDistributionVector3::FNiagaraDistributionVector3
            ((FNiagaraDistributionVector3 *)&this->InitialPositionDistribution);
  *(undefined ***)&this->InitialPositionDistribution = &___7FNiagaraDistributionPosition__6B_;
  FNiagaraDistributionVector3::InitConstant
            ((FNiagaraDistributionVector3 *)&this->InitialPositionDistribution,
             &UE::Math::TVector<float>::ZeroVector);
  return this;
}

// UNiagaraStatelessModule_InitializeParticle @ 1494297c0

UNiagaraStatelessModule_InitializeParticle * __thiscall
UNiagaraStatelessModule_InitializeParticle::UNiagaraStatelessModule_InitializeParticle
          (UNiagaraStatelessModule_InitializeParticle *this)

{
  byte *pbVar1;
  float fVar2;
  int iVar3;
  FLinearColor_u_0 local_18;
  
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  fVar2 = __real_3f800000;
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_InitializeParticle__6B_;
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat(&this->LifetimeDistribution,fVar2);
  local_18 = FLinearColor::White.field0_0x0;
  FNiagaraDistributionColor::FNiagaraDistributionColor
            (&this->ColorDistribution,(FLinearColor *)&local_18._s_0);
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
            (&this->MassDistribution,__real_3f800000);
  pbVar1 = (byte *)((longlong)&(this->SpriteSizeDistribution)._padding_ + 1);
  *pbVar1 = *pbVar1 & 0xfc;
  (this->SpriteSizeDistribution)._padding_ = (longlong)&___7FNiagaraDistributionBase__6B_;
  *(undefined1 *)&(this->SpriteSizeDistribution)._padding_ = 3;
  *(undefined1 *)((longlong)&(this->SpriteSizeDistribution)._padding_ + 2) = 0;
  *(undefined8 *)((longlong)&(this->SpriteSizeDistribution)._padding_ + 4) = 0;
  iVar3 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)
                     ((longlong)&(this->SpriteSizeDistribution)._padding_ + 4),
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)((longlong)&(this->SpriteSizeDistribution)._padding_ + 4) = iVar3;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&(this->SpriteSizeDistribution)._padding_);
  *(undefined1 *)&(this->SpriteSizeDistribution)._padding_ = 4;
  (this->SpriteSizeDistribution)._padding_ = (longlong)&___7FNiagaraDistributionRangeVector2__6B_;
  (this->SpriteSizeDistribution).Min.field0_0x0 = (TVector2<float>_u_0)0x4120000041200000;
  (this->SpriteSizeDistribution).Max.field0_0x0 = (TVector2<float>_u_0)0x4120000041200000;
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
            (&this->SpriteRotationDistribution,0.0);
  local_18._s_0.B = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  local_18._0_8_ = UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
  FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
            (&this->MeshScaleDistribution,(TVector<float> *)&local_18._s_0);
  fVar2 = __real_41200000;
  this->bWriteRibbonWidth = false;
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
            (&this->RibbonWidthDistribution,fVar2);
  FNiagaraDistributionVector3::FNiagaraDistributionVector3
            ((FNiagaraDistributionVector3 *)&this->InitialPositionDistribution);
  *(undefined ***)&this->InitialPositionDistribution = &___7FNiagaraDistributionPosition__6B_;
  FNiagaraDistributionVector3::InitConstant
            ((FNiagaraDistributionVector3 *)&this->InitialPositionDistribution,
             &UE::Math::TVector<float>::ZeroVector);
  return this;
}

// ~UNiagaraStatelessModule_InitializeParticle @ 14942c920

void __thiscall
UNiagaraStatelessModule_InitializeParticle::~UNiagaraStatelessModule_InitializeParticle
          (UNiagaraStatelessModule_InitializeParticle *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_InitializeParticle__6B_;
  pvVar1 = *(void **)&(this->InitialPositionDistribution).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&(this->InitialPositionDistribution).field_0x18);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->RibbonWidthDistribution)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->MeshScaleDistribution)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->SpriteRotationDistribution)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->SpriteSizeDistribution)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->MassDistribution)._padding_);
  pFVar2 = (this->ColorDistribution).Values.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&(this->ColorDistribution)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->LifetimeDistribution)._padding_);
  UNiagaraStatelessModule::~UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  return;
}

// BuildEmitterData @ 149433760

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
UNiagaraStatelessModule_InitializeParticle::BuildEmitterData
          (UNiagaraStatelessModule_InitializeParticle *this,
          FNiagaraStatelessEmitterDataBuildContext *param_1)

{
  undefined8 uVar1;
  char cVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  TIntVector3<unsigned_int> *pTVar6;
  TVector2<float>_u_0 TVar7;
  FPhysicsBuildData *pFVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  TVector2<float>_u_0 TVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  TIntVector3<unsigned_int> local_98;
  undefined1 local_88 [16];
  undefined **local_78;
  code *local_70;
  undefined8 local_60;
  
  local_60 = 0;
  local_78 = &
             ___7__TFunction_OwnedObject_P6AXAEBVFParticleSimulationContext_NiagaraStateless___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_70 = NSMInitializeParticlePrivate::ParticleSimulate;
  local_88._0_4_ = 0x4943dba0;
  local_88._4_4_ = 1;
  FNiagaraStatelessEmitterDataBuildContext::AddParticleSimulationExecSimulate
            (param_1,(TFunction<void___cdecl(NiagaraStateless::FParticleSimulationContext_const_&)>
                      *)local_88);
  pTVar3 = param_1->BuiltData;
  uVar11 = pTVar3->ArrayNum + 3U & 0xfffffffc;
  iVar10 = (uVar11 - pTVar3->ArrayNum) + 0xa8;
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar10,&pTVar3->AllocatorInstance,&pTVar3->ArrayNum,&pTVar3->ArrayMax);
  memset((pTVar3->AllocatorInstance).Data + iVar5,0,(longlong)iVar10);
  pFVar4 = (param_1->BuiltData->AllocatorInstance).Data;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar11 + 0x10) = 0;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar11 + 0x10 + 8) = 0;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar11 + 0x20) = 0;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar11 + 0x20 + 8) = 0;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar11 + 0x30) = 0;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar11 + 0x30 + 8) = 0;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar11 + 0x40) = 0;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar11 + 0x40 + 8) = 0;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar11 + 0x50) = 0;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar11 + 0x50 + 8) = 0;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar11 + 0x60) = 0;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar11 + 0x60 + 8) = 0;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar11 + 0x70) = 0;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar11 + 0x70 + 8) = 0;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar11 + 0x80) = 0;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar11 + 0x80 + 8) = 0;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar11 + 0x90) = 0;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar11 + 0x90 + 8) = 0;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar11 + 0xa0) = 0;
  *(undefined4 *)(pFVar4 + (longlong)(int)uVar11 + 4) = 0xffffffff;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar11 + 8) = 0;
  uVar14 = 0;
  *(undefined4 *)(pFVar4 + (int)uVar11) = 0;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar11 + 0x10) =
       UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._0_8_;
  *(uint *)(pFVar4 + (longlong)(int)uVar11 + 0x18) =
       UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Z;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar11 + 0x1c) =
       UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._0_8_;
  *(uint *)(pFVar4 + (longlong)(int)uVar11 + 0x24) =
       UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Z;
  *(undefined4 *)(pFVar4 + (longlong)(int)uVar11 + 0x28) = 0xffffffff;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar11 + 0x2c) = 0;
  *(undefined4 *)(pFVar4 + (longlong)(int)uVar11 + 0x34) = 0xffffffff;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar11 + 0x38) = 0;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar11 + 0x40) = 0;
  *(undefined4 *)(pFVar4 + (longlong)(int)uVar11 + 0x48) = 0xffffffff;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar11 + 0x4c) = 0;
  *(undefined4 *)(pFVar4 + (longlong)(int)uVar11 + 0x54) = 0xffffffff;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar11 + 0x58) = 0;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar11 + 0x60) = 0;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar11 + 0x68) = 0;
  *(undefined4 *)(pFVar4 + (longlong)(int)uVar11 + 0x70) = 0xffffffff;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar11 + 0x74) = 0;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar11 + 0x7c) = 0xffffffffffffffff;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar11 + 0x84) = 0xffffffffffffffff;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar11 + 0x8c) = 0xffffffffffffffff;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar11 + 0x94) = 0xffffffffffffffff;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar11 + 0x9c) = 0xffffffffffffffff;
  *(undefined4 *)(pFVar4 + (longlong)(int)uVar11 + 0xa4) = 0xffffffff;
  cVar2 = (char)(this->SpriteSizeDistribution)._padding_;
  uVar13 = 1;
  if ((cVar2 != '\x03') && (cVar2 != '\x05')) {
    uVar13 = uVar14;
  }
  *(uint *)(pFVar4 + (int)uVar11) = uVar13;
  cVar2 = (char)(this->MeshScaleDistribution)._padding_;
  if ((cVar2 == '\x03') || (cVar2 == '\x05')) {
    uVar14 = 2;
  }
  *(uint *)(pFVar4 + (int)uVar11) = uVar14 | uVar13;
  fVar18 = (this->LifetimeDistribution).Min;
  fVar19 = fVar18;
  if ((char)(this->LifetimeDistribution)._padding_ != '\x03') {
    fVar19 = (this->LifetimeDistribution).Max;
  }
  *(undefined4 *)(pFVar4 + (longlong)(int)uVar11 + 4) = 0xffffffff;
  *(float *)(pFVar4 + (longlong)(int)uVar11 + 8) = fVar18;
  *(float *)(pFVar4 + (longlong)(int)uVar11 + 0xc) = fVar19;
  pTVar6 = FNiagaraStatelessEmitterDataBuildContext::AddDistribution<FNiagaraDistributionPosition>
                     (param_1,&local_98,&this->InitialPositionDistribution);
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar11 + 0x10) = *(undefined8 *)&pTVar6->field0_0x0;
  *(uint *)(pFVar4 + (longlong)(int)uVar11 + 0x18) = (pTVar6->field0_0x0)._s_0.Z;
  pTVar6 = FNiagaraStatelessEmitterDataBuildContext::AddDistribution<FNiagaraDistributionColor>
                     (param_1,&local_98,&this->ColorDistribution);
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar11 + 0x1c) = *(undefined8 *)&pTVar6->field0_0x0;
  *(uint *)(pFVar4 + (longlong)(int)uVar11 + 0x24) = (pTVar6->field0_0x0)._s_0.Z;
  fVar19 = __real_3f800000;
  cVar2 = (char)(this->MassDistribution)._padding_;
  fVar18 = fVar19;
  if (cVar2 == '\x01') {
    iVar5 = FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
                      (param_1,(FNiagaraVariableBase *)
                               ((longlong)&(this->MassDistribution)._padding_ + 4));
  }
  else if (cVar2 == '\x02') {
    iVar5 = FNiagaraStatelessEmitterDataBuildContext::AddExpression
                      (param_1,(FInstancedStruct *)&(this->MassDistribution)._padding_);
  }
  else {
    fVar18 = (this->MassDistribution).Min;
    fVar19 = fVar18;
    if (cVar2 != '\x03') {
      fVar19 = (this->MassDistribution).Max;
    }
    iVar5 = -1;
  }
  *(int *)(pFVar4 + (longlong)(int)uVar11 + 0x28) = iVar5;
  *(float *)(pFVar4 + (longlong)(int)uVar11 + 0x2c) = fVar18;
  *(float *)(pFVar4 + (longlong)(int)uVar11 + 0x30) = fVar19;
  fVar18 = __real_41200000;
  cVar2 = (char)(this->SpriteSizeDistribution)._padding_;
  if (cVar2 == '\x01') {
    TVar7 = (TVector2<float>_u_0)0x4120000041200000;
    iVar5 = FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
                      (param_1,(FNiagaraVariableBase *)
                               ((longlong)&(this->SpriteSizeDistribution)._padding_ + 4));
    TVar12 = TVar7;
  }
  else if (cVar2 == '\x02') {
    TVar7 = (TVector2<float>_u_0)0x4120000041200000;
    iVar5 = FNiagaraStatelessEmitterDataBuildContext::AddExpression
                      (param_1,(FInstancedStruct *)&(this->SpriteSizeDistribution)._padding_);
    TVar12 = TVar7;
  }
  else {
    iVar5 = -1;
    lVar9 = 0xf8;
    if (cVar2 != '\x03') {
      lVar9 = 0x100;
    }
    TVar12 = *(TVector2<float>_u_0 *)((longlong)&this->_padding_ + lVar9);
    TVar7 = (this->SpriteSizeDistribution).Min.field0_0x0;
  }
  *(int *)(pFVar4 + (longlong)(int)uVar11 + 0x34) = iVar5;
  *(TVector2<float>_u_0 *)(pFVar4 + (longlong)(int)uVar11 + 0x38) = TVar7;
  *(TVector2<float>_u_0 *)(pFVar4 + (longlong)(int)uVar11 + 0x40) = TVar12;
  cVar2 = (char)(this->SpriteRotationDistribution)._padding_;
  if (cVar2 == '\x01') {
    uVar17 = 0;
    fVar19 = 0.0;
    iVar5 = FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
                      (param_1,(FNiagaraVariableBase *)
                               ((longlong)&(this->SpriteRotationDistribution)._padding_ + 4));
  }
  else if (cVar2 == '\x02') {
    uVar17 = 0;
    fVar19 = 0.0;
    iVar5 = FNiagaraStatelessEmitterDataBuildContext::AddExpression
                      (param_1,(FInstancedStruct *)&(this->SpriteRotationDistribution)._padding_);
  }
  else {
    fVar19 = (this->SpriteRotationDistribution).Min;
    lVar9 = 0x130;
    if (cVar2 != '\x03') {
      lVar9 = 0x134;
    }
    iVar5 = -1;
    uVar17 = *(undefined4 *)((longlong)&this->_padding_ + lVar9);
  }
  *(int *)(pFVar4 + (longlong)(int)uVar11 + 0x48) = iVar5;
  *(float *)(pFVar4 + (longlong)(int)uVar11 + 0x4c) = fVar19;
  *(undefined4 *)(pFVar4 + (longlong)(int)uVar11 + 0x50) = uVar17;
  uVar17 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  uVar15 = (undefined4)UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
  uVar16 = (undefined4)((ulonglong)UE::Math::TVector<float>::OneVector.field0_0x0._0_8_ >> 0x20);
  cVar2 = (char)(this->MeshScaleDistribution)._padding_;
  local_88._12_4_ = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  local_88._4_4_ = uVar15;
  local_88._8_4_ = uVar16;
  if (cVar2 == '\x01') {
    local_88._0_4_ =
         FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
                   (param_1,(FNiagaraVariableBase *)
                            ((longlong)&(this->MeshScaleDistribution)._padding_ + 4));
  }
  else if (cVar2 == '\x02') {
    local_88._0_4_ =
         FNiagaraStatelessEmitterDataBuildContext::AddExpression
                   (param_1,(FInstancedStruct *)&(this->MeshScaleDistribution)._padding_);
  }
  else {
    uVar1 = *(undefined8 *)&(this->MeshScaleDistribution).Min.field0_0x0;
    local_88._4_4_ = (undefined4)uVar1;
    local_88._8_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
    local_88._12_4_ = (this->MeshScaleDistribution).Min.field0_0x0._s_0.Z;
    local_88._0_4_ = -1;
    uVar15 = local_88._4_4_;
    uVar16 = local_88._8_4_;
    uVar17 = local_88._12_4_;
    if (cVar2 != '\x03') {
      uVar1 = *(undefined8 *)&(this->MeshScaleDistribution).Max.field0_0x0;
      uVar15 = (int)uVar1;
      uVar16 = (int)((ulonglong)uVar1 >> 0x20);
      uVar17 = (this->MeshScaleDistribution).Max.field0_0x0._s_0.Z;
    }
  }
  *(ulonglong *)(pFVar4 + (longlong)(int)uVar11 + 0x54) = CONCAT44(local_88._4_4_,local_88._0_4_);
  *(ulonglong *)(pFVar4 + (longlong)(int)uVar11 + 0x54 + 8) =
       CONCAT44(local_88._12_4_,local_88._8_4_);
  *(ulonglong *)(pFVar4 + (longlong)(int)uVar11 + 100) = CONCAT44(uVar16,uVar15);
  *(undefined4 *)(pFVar4 + (longlong)(int)uVar11 + 0x6c) = uVar17;
  cVar2 = (char)(this->RibbonWidthDistribution)._padding_;
  fVar19 = fVar18;
  if (cVar2 == '\x01') {
    iVar5 = FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
                      (param_1,(FNiagaraVariableBase *)
                               ((longlong)&(this->RibbonWidthDistribution)._padding_ + 4));
  }
  else if (cVar2 == '\x02') {
    iVar5 = FNiagaraStatelessEmitterDataBuildContext::AddExpression
                      (param_1,(FInstancedStruct *)&(this->RibbonWidthDistribution)._padding_);
  }
  else {
    fVar19 = (this->RibbonWidthDistribution).Min;
    lVar9 = 0x1a8;
    if (cVar2 != '\x03') {
      lVar9 = 0x1ac;
    }
    iVar5 = -1;
    fVar18 = *(float *)((longlong)&this->_padding_ + lVar9);
  }
  *(int *)(pFVar4 + (longlong)(int)uVar11 + 0x70) = iVar5;
  *(float *)(pFVar4 + (longlong)(int)uVar11 + 0x74) = fVar19;
  *(float *)(pFVar4 + (longlong)(int)uVar11 + 0x78) = fVar18;
  iVar5 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                    (param_1,&NiagaraStatelessCommon::GGlobals.PositionVariable);
  *(int *)(pFVar4 + (longlong)(int)uVar11 + 0x7c) = iVar5;
  iVar5 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                    (param_1,&NiagaraStatelessCommon::GGlobals.ColorVariable);
  *(int *)(pFVar4 + (longlong)(int)uVar11 + 0x80) = iVar5;
  iVar5 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                    (param_1,&NiagaraStatelessCommon::GGlobals.RibbonWidthVariable);
  *(int *)(pFVar4 + (longlong)(int)uVar11 + 0x84) = iVar5;
  iVar5 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                    (param_1,&NiagaraStatelessCommon::GGlobals.SpriteSizeVariable);
  *(int *)(pFVar4 + (longlong)(int)uVar11 + 0x88) = iVar5;
  iVar5 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                    (param_1,&NiagaraStatelessCommon::GGlobals.SpriteRotationVariable);
  *(int *)(pFVar4 + (longlong)(int)uVar11 + 0x8c) = iVar5;
  iVar5 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                    (param_1,&NiagaraStatelessCommon::GGlobals.ScaleVariable);
  *(int *)(pFVar4 + (longlong)(int)uVar11 + 0x90) = iVar5;
  iVar5 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                    (param_1,&NiagaraStatelessCommon::GGlobals.PreviousPositionVariable);
  *(int *)(pFVar4 + (longlong)(int)uVar11 + 0x94) = iVar5;
  iVar5 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                    (param_1,&NiagaraStatelessCommon::GGlobals.PreviousRibbonWidthVariable);
  *(int *)(pFVar4 + (longlong)(int)uVar11 + 0x98) = iVar5;
  iVar5 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                    (param_1,&NiagaraStatelessCommon::GGlobals.PreviousSpriteSizeVariable);
  *(int *)(pFVar4 + (longlong)(int)uVar11 + 0x9c) = iVar5;
  iVar5 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                    (param_1,&NiagaraStatelessCommon::GGlobals.PreviousSpriteRotationVariable);
  *(int *)(pFVar4 + (longlong)(int)uVar11 + 0xa0) = iVar5;
  iVar5 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                    (param_1,&NiagaraStatelessCommon::GGlobals.PreviousScaleVariable);
  *(int *)(pFVar4 + (longlong)(int)uVar11 + 0xa4) = iVar5;
  pFVar8 = FNiagaraStatelessEmitterDataBuildContext::
           GetTransientBuildData<NiagaraStateless::FPhysicsBuildData>(param_1);
  fVar18 = (this->MassDistribution).Min;
  lVar9 = 200;
  if ((char)(this->MassDistribution)._padding_ != '\x03') {
    lVar9 = 0xcc;
  }
  fVar19 = *(float *)((longlong)&this->_padding_ + lVar9);
  (pFVar8->MassRange).ParameterOffset = -1;
  (pFVar8->MassRange).Min = fVar18;
  (pFVar8->MassRange).Max = fVar19;
  return;
}

// BuildShaderParameters @ 14943a850

void __thiscall
UNiagaraStatelessModule_InitializeParticle::BuildShaderParameters
          (UNiagaraStatelessModule_InitializeParticle *this,
          FNiagaraStatelessShaderParametersBuilder *param_1)

{
  int iVar1;
  FShaderParametersMetadataBuilder *this_00;
  FShaderParametersMetadata *pFVar2;
  
  iVar1 = param_1->ParameterOffset;
  this_00 = param_1->MetadataBuilder;
  if (this_00 != (FShaderParametersMetadataBuilder *)0x0) {
    pFVar2 = TShaderParameterStructTypeInfo<NiagaraStateless::FInitializeParticleModule_ShaderParameters>
             ::GetStructMetadata();
    FShaderParametersMetadataBuilder::AddIncludedStruct(this_00,pFVar2,Float);
  }
  pFVar2 = TShaderParameterStructTypeInfo<NiagaraStateless::FInitializeParticleModule_ShaderParameters>
           ::GetStructMetadata();
  param_1->ParameterOffset = pFVar2->Size + (iVar1 + 0xfU & 0xfffffff0);
  return;
}

// GetPrivateStaticClass @ 14944bb30

UClass * __cdecl UNiagaraStatelessModule_InitializeParticle::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_InitializeParticle.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_InitializeParticle",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_InitializeParticle.InnerSingleton
               ,StaticRegisterNativesUNiagaraStatelessModule_InitializeParticle,0x1f0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraStatelessModule_InitializeParticle>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_InitializeParticle>,local_res8
               ,UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_InitializeParticle.InnerSingleton;
}

// SetShaderParameters @ 149465c70

void __thiscall
UNiagaraStatelessModule_InitializeParticle::SetShaderParameters
          (UNiagaraStatelessModule_InitializeParticle *this,
          FNiagaraStatelessSetShaderParameterContext *param_1)

{
  int iVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  FShaderParametersMetadata *pFVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uchar *puVar9;
  float fVar10;
  
  uVar8 = param_1->ParameterOffset + 0xf & 0xfffffff0;
  pFVar5 = TShaderParameterStructTypeInfo<NiagaraStateless::FInitializeParticleModule_ShaderParameters>
           ::GetStructMetadata();
  FNiagaraStatelessSetShaderParameterContext::ValidateIncludeStructType(param_1,uVar8,pFVar5);
  pFVar5 = TShaderParameterStructTypeInfo<NiagaraStateless::FInitializeParticleModule_ShaderParameters>
           ::GetStructMetadata();
  uVar7 = param_1->BuiltDataOffset + 3U & 0xfffffffc;
  puVar9 = param_1->ShaderParametersBase + uVar8;
  param_1->ParameterOffset = pFVar5->Size + uVar8;
  param_1->BuiltDataOffset = uVar7 + 0xa8;
  if ((param_1->BuiltData).ArrayNum < (int)(uVar7 + 0xa8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("BuiltDataOffset <= BuiltData.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessSetShaderParameterContext.h"
                       ,0x22,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  puVar2 = (param_1->BuiltData).DataPtr;
  *(undefined4 *)puVar9 = *(undefined4 *)(puVar2 + (int)uVar7);
  *(undefined8 *)(puVar9 + 0x10) = *(undefined8 *)(puVar2 + (longlong)(int)uVar7 + 0x10);
  *(undefined4 *)(puVar9 + 0x18) = *(undefined4 *)(puVar2 + (longlong)(int)uVar7 + 0x18);
  *(undefined8 *)(puVar9 + 0x20) = *(undefined8 *)(puVar2 + (longlong)(int)uVar7 + 0x1c);
  *(undefined4 *)(puVar9 + 0x28) = *(undefined4 *)(puVar2 + (longlong)(int)uVar7 + 0x24);
  if (*(int *)(puVar2 + (longlong)(int)uVar7 + 0x34) == -1) {
    uVar6 = *(undefined8 *)(puVar2 + (longlong)(int)uVar7 + 0x38);
  }
  else {
    iVar1 = *(int *)(puVar2 + (longlong)(int)uVar7 + 0x34) * 4;
    if ((iVar1 < 0) ||
       ((ulonglong)(longlong)(param_1->RendererParameterData).ArrayNum < (longlong)iVar1 + 8U)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset >= 0 && Offset + sizeof(TValueType) <= RendererParameterData.Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessSetShaderParameterContext.h"
                         ,0x2d,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar6 = *(undefined8 *)((param_1->RendererParameterData).DataPtr + iVar1);
  }
  *(undefined8 *)(puVar9 + 0x38) = uVar6;
  if (*(int *)(puVar2 + (longlong)(int)uVar7 + 0x34) == -1) {
    uVar6 = CONCAT44(*(float *)(puVar2 + (longlong)(int)uVar7 + 0x44) -
                     *(float *)(puVar2 + (longlong)(int)uVar7 + 0x3c),
                     *(float *)(puVar2 + (longlong)(int)uVar7 + 0x40) -
                     *(float *)(puVar2 + (longlong)(int)uVar7 + 0x38));
  }
  else {
    uVar6 = 0;
  }
  *(undefined8 *)(puVar9 + 0x30) = uVar6;
  fVar10 = FNiagaraStatelessSetShaderParameterContext::GetRendererParameterValue<float>
                     (param_1,*(int *)(puVar2 + (longlong)(int)uVar7 + 0x48),
                      (float *)(puVar2 + (longlong)(int)uVar7 + 0x4c));
  *(float *)(puVar9 + 0x44) = fVar10;
  if (*(int *)(puVar2 + (longlong)(int)uVar7 + 0x48) == -1) {
    fVar10 = *(float *)(puVar2 + (longlong)(int)uVar7 + 0x50) -
             *(float *)(puVar2 + (longlong)(int)uVar7 + 0x4c);
  }
  else {
    fVar10 = 0.0;
  }
  *(float *)(puVar9 + 0x40) = fVar10;
  FNiagaraStatelessSetShaderParameterContext::ConvertRangeToScaleBias<UE::Math::TVector<float>_>
            (param_1,(FNiagaraStatelessRange<UE::Math::TVector<float>_> *)
                     (puVar2 + (longlong)(int)uVar7 + 0x54),(TVector<float> *)(puVar9 + 0x50),
             (TVector<float> *)(puVar9 + 0x60));
  fVar10 = FNiagaraStatelessSetShaderParameterContext::GetRendererParameterValue<float>
                     (param_1,*(int *)(puVar2 + (longlong)(int)uVar7 + 0x70),
                      (float *)(puVar2 + (longlong)(int)uVar7 + 0x74));
  *(float *)(puVar9 + 0x70) = fVar10;
  if (*(int *)(puVar2 + (longlong)(int)uVar7 + 0x70) == -1) {
    *(float *)(puVar9 + 0x6c) =
         *(float *)(puVar2 + (longlong)(int)uVar7 + 0x78) -
         *(float *)(puVar2 + (longlong)(int)uVar7 + 0x74);
  }
  else {
    puVar9[0x6c] = '\0';
    puVar9[0x6d] = '\0';
    puVar9[0x6e] = '\0';
    puVar9[0x6f] = '\0';
  }
  return;
}

// StaticRegisterNativesUNiagaraStatelessModule_InitializeParticle @ 149469cb0

void __cdecl
UNiagaraStatelessModule_InitializeParticle::
StaticRegisterNativesUNiagaraStatelessModule_InitializeParticle(void)

{
  return;
}

