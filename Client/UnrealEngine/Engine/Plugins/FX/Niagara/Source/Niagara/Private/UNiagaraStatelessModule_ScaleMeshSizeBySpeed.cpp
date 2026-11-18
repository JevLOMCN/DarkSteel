// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 9

// StaticClass @ 1494126a0

UClass * __cdecl UNiagaraStatelessModule_ScaleMeshSizeBySpeed::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_ScaleMeshSizeBySpeed",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed.
                InnerSingleton,StaticRegisterNativesUNiagaraStatelessModule_ScaleMeshSizeBySpeed,
               0x128,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraStatelessModule_ScaleMeshSizeBySpeed>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_ScaleMeshSizeBySpeed>,
               local_res8,UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed.InnerSingleton;
}

// UNiagaraStatelessModule_ScaleMeshSizeBySpeed @ 149429ea0

UNiagaraStatelessModule_ScaleMeshSizeBySpeed * __thiscall
UNiagaraStatelessModule_ScaleMeshSizeBySpeed::UNiagaraStatelessModule_ScaleMeshSizeBySpeed
          (UNiagaraStatelessModule_ScaleMeshSizeBySpeed *this,FVTableHelper *param_1)

{
  float fVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  float local_res10 [6];
  undefined1 local_18 [16];
  
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this,param_1);
  fVar1 = __real_447a0000;
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_ScaleMeshSizeBySpeed__6B_;
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat(&this->VelocityThreshold,fVar1);
  local_18._0_8_ = 0x3f8000003f800000;
  local_18._8_4_ = 1.0;
  FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
            (&this->MinScaleFactor,(TVector<float> *)local_18);
  local_18._0_8_ = 0x4000000040000000;
  local_18._8_4_ = 0x40000000;
  FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
            (&this->MaxScaleFactor,(TVector<float> *)local_18);
  local_18._0_8_ = &local_res8;
  this->bSampleScaleFactorByCurve = false;
  local_18._8_8_ = local_res10;
  local_res8 = 0;
  local_resc = 0x3f800000;
  FNiagaraDistributionFloat::FNiagaraDistributionFloat
            (&this->SampleFactorCurve,(initializer_list<float> *)local_18);
  return this;
}

// UNiagaraStatelessModule_ScaleMeshSizeBySpeed @ 149429f70

UNiagaraStatelessModule_ScaleMeshSizeBySpeed * __thiscall
UNiagaraStatelessModule_ScaleMeshSizeBySpeed::UNiagaraStatelessModule_ScaleMeshSizeBySpeed
          (UNiagaraStatelessModule_ScaleMeshSizeBySpeed *this)

{
  float fVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  float local_res10 [6];
  undefined1 local_18 [16];
  
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  fVar1 = __real_447a0000;
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_ScaleMeshSizeBySpeed__6B_;
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat(&this->VelocityThreshold,fVar1);
  local_18._0_8_ = 0x3f8000003f800000;
  local_18._8_4_ = 1.0;
  FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
            (&this->MinScaleFactor,(TVector<float> *)local_18);
  local_18._0_8_ = 0x4000000040000000;
  local_18._8_4_ = 0x40000000;
  FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
            (&this->MaxScaleFactor,(TVector<float> *)local_18);
  local_18._0_8_ = &local_res8;
  this->bSampleScaleFactorByCurve = false;
  local_18._8_8_ = local_res10;
  local_res8 = 0;
  local_resc = 0x3f800000;
  FNiagaraDistributionFloat::FNiagaraDistributionFloat
            (&this->SampleFactorCurve,(initializer_list<float> *)local_18);
  return this;
}

// ~UNiagaraStatelessModule_ScaleMeshSizeBySpeed @ 14942cc10

void __thiscall
UNiagaraStatelessModule_ScaleMeshSizeBySpeed::~UNiagaraStatelessModule_ScaleMeshSizeBySpeed
          (UNiagaraStatelessModule_ScaleMeshSizeBySpeed *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_ScaleMeshSizeBySpeed__6B_;
  pFVar1 = (this->SampleFactorCurve).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&(this->SampleFactorCurve)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->MaxScaleFactor)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->MinScaleFactor)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->VelocityThreshold)._padding_);
  UNiagaraStatelessModule::~UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  return;
}

// BuildEmitterData @ 149434ec0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
UNiagaraStatelessModule_ScaleMeshSizeBySpeed::BuildEmitterData
          (UNiagaraStatelessModule_ScaleMeshSizeBySpeed *this,
          FNiagaraStatelessEmitterDataBuildContext *param_1)

{
  undefined8 uVar1;
  char cVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  int iVar6;
  TIntVector3<unsigned_int> *pTVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  undefined4 local_res10;
  undefined4 local_res14;
  undefined1 local_a8 [12];
  float fStack_9c;
  undefined **local_98;
  code *local_90;
  undefined8 local_80;
  undefined1 local_78 [40];
  ForAnyElementType local_50;
  
  pTVar3 = param_1->BuiltData;
  uVar9 = pTVar3->ArrayNum + 3U & 0xfffffffc;
  iVar8 = (uVar9 - pTVar3->ArrayNum) + 0x60;
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar8,&pTVar3->AllocatorInstance,&pTVar3->ArrayNum,&pTVar3->ArrayMax);
  memset((pTVar3->AllocatorInstance).Data + iVar6,0,(longlong)iVar8);
  pFVar4 = (param_1->BuiltData->AllocatorInstance).Data;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar9 + 4) = 0;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar9 + 4 + 8) = 0;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar9 + 0x14) = 0;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar9 + 0x14 + 8) = 0;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar9 + 0x24) = 0;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar9 + 0x24 + 8) = 0;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar9 + 0x34) = 0;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar9 + 0x34 + 8) = 0;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar9 + 0x44) = 0;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar9 + 0x44 + 8) = 0;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar9 + 0x54) = 0;
  *(undefined4 *)(pFVar4 + (longlong)(int)uVar9 + 0x5c) = 0;
  *(undefined4 *)(pFVar4 + (int)uVar9) = 0xffffffff;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar9 + 4) =
       UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
  *(float *)(pFVar4 + (longlong)(int)uVar9 + 0xc) =
       UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar9 + 0x10) =
       UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
  *(float *)(pFVar4 + (longlong)(int)uVar9 + 0x18) =
       UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  *(undefined4 *)(pFVar4 + (longlong)(int)uVar9 + 0x1c) = 0xffffffff;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar9 + 0x20) =
       UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
  *(float *)(pFVar4 + (longlong)(int)uVar9 + 0x28) =
       UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar9 + 0x2c) =
       UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
  *(float *)(pFVar4 + (longlong)(int)uVar9 + 0x34) =
       UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  *(undefined4 *)(pFVar4 + (longlong)(int)uVar9 + 0x38) = 0xffffffff;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar9 + 0x3c) = 0;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar9 + 0x44) =
       UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._0_8_;
  *(uint *)(pFVar4 + (longlong)(int)uVar9 + 0x4c) =
       UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Z;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar9 + 0x50) = 0xffffffffffffffff;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar9 + 0x58) = 0xffffffffffffffff;
  bVar5 = UNiagaraStatelessModule::IsModuleEnabled((UNiagaraStatelessModule *)this);
  if (bVar5) {
    iVar6 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                      (param_1,&NiagaraStatelessCommon::GGlobals.PositionVariable);
    *(int *)(pFVar4 + (longlong)(int)uVar9 + 0x50) = iVar6;
    iVar6 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                      (param_1,&NiagaraStatelessCommon::GGlobals.PreviousPositionVariable);
    *(int *)(pFVar4 + (longlong)(int)uVar9 + 0x54) = iVar6;
    iVar6 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                      (param_1,&NiagaraStatelessCommon::GGlobals.ScaleVariable);
    *(int *)(pFVar4 + (longlong)(int)uVar9 + 0x58) = iVar6;
    iVar6 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                      (param_1,&NiagaraStatelessCommon::GGlobals.PreviousScaleVariable);
    *(int *)(pFVar4 + (longlong)(int)uVar9 + 0x5c) = iVar6;
    fVar13 = __real_447a0000;
    if ((*(int *)(pFVar4 + (longlong)(int)uVar9 + 0x58) != -1) || (iVar6 != -1)) {
      cVar2 = (char)(this->VelocityThreshold)._padding_;
      fVar14 = fVar13;
      if (cVar2 == '\x01') {
        iVar6 = FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
                          (param_1,(FNiagaraVariableBase *)
                                   ((longlong)&(this->VelocityThreshold)._padding_ + 4));
      }
      else if (cVar2 == '\x02') {
        iVar6 = FNiagaraStatelessEmitterDataBuildContext::AddExpression
                          (param_1,(FInstancedStruct *)&(this->VelocityThreshold)._padding_);
      }
      else {
        fVar14 = (this->VelocityThreshold).Min;
        fVar13 = fVar14;
        if (cVar2 != '\x03') {
          fVar13 = (this->VelocityThreshold).Max;
        }
        iVar6 = -1;
      }
      *(int *)(pFVar4 + (longlong)(int)uVar9 + 0x38) = iVar6;
      *(float *)(pFVar4 + (longlong)(int)uVar9 + 0x3c) = fVar14;
      *(float *)(pFVar4 + (longlong)(int)uVar9 + 0x40) = fVar13;
      uVar10 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
      uVar11 = (uint)UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
      uVar12 = (uint)((ulonglong)UE::Math::TVector<float>::OneVector.field0_0x0._0_8_ >> 0x20);
      cVar2 = (char)(this->MinScaleFactor)._padding_;
      fStack_9c = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
      local_a8._4_4_ = uVar11;
      local_a8._8_4_ = uVar12;
      if (cVar2 == '\x01') {
        local_a8._0_4_ =
             FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
                       (param_1,(FNiagaraVariableBase *)
                                ((longlong)&(this->MinScaleFactor)._padding_ + 4));
      }
      else if (cVar2 == '\x02') {
        local_a8._0_4_ =
             FNiagaraStatelessEmitterDataBuildContext::AddExpression
                       (param_1,(FInstancedStruct *)&(this->MinScaleFactor)._padding_);
      }
      else {
        uVar1 = *(undefined8 *)&(this->MinScaleFactor).Min.field0_0x0;
        local_a8._4_4_ = (undefined4)uVar1;
        local_a8._8_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
        fStack_9c = (this->MinScaleFactor).Min.field0_0x0._s_0.Z;
        local_a8._0_4_ = 0xffffffff;
        uVar11 = local_a8._4_4_;
        uVar12 = local_a8._8_4_;
        uVar10 = fStack_9c;
        if (cVar2 != '\x03') {
          uVar1 = *(undefined8 *)&(this->MinScaleFactor).Max.field0_0x0;
          uVar11 = (uint)uVar1;
          uVar12 = (uint)((ulonglong)uVar1 >> 0x20);
          uVar10 = (this->MinScaleFactor).Max.field0_0x0._s_0.Z;
        }
      }
      *(ulonglong *)(pFVar4 + (int)uVar9) = CONCAT44(local_a8._4_4_,local_a8._0_4_);
      *(ulonglong *)(pFVar4 + (int)uVar9 + 8) = CONCAT44(fStack_9c,local_a8._8_4_);
      *(ulonglong *)(pFVar4 + (longlong)(int)uVar9 + 0x10) = CONCAT44(uVar12,uVar11);
      *(undefined4 *)(pFVar4 + (longlong)(int)uVar9 + 0x18) = uVar10;
      uVar10 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
      uVar11 = (uint)UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
      uVar12 = (uint)((ulonglong)UE::Math::TVector<float>::OneVector.field0_0x0._0_8_ >> 0x20);
      cVar2 = (char)(this->MaxScaleFactor)._padding_;
      fStack_9c = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
      local_a8._4_4_ = uVar11;
      local_a8._8_4_ = uVar12;
      if (cVar2 == '\x01') {
        local_a8._0_4_ =
             FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
                       (param_1,(FNiagaraVariableBase *)
                                ((longlong)&(this->MaxScaleFactor)._padding_ + 4));
      }
      else if (cVar2 == '\x02') {
        local_a8._0_4_ =
             FNiagaraStatelessEmitterDataBuildContext::AddExpression
                       (param_1,(FInstancedStruct *)&(this->MaxScaleFactor)._padding_);
      }
      else {
        uVar1 = *(undefined8 *)&(this->MaxScaleFactor).Min.field0_0x0;
        local_a8._4_4_ = (undefined4)uVar1;
        local_a8._8_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
        fStack_9c = (this->MaxScaleFactor).Min.field0_0x0._s_0.Z;
        local_a8._0_4_ = 0xffffffff;
        uVar11 = local_a8._4_4_;
        uVar12 = local_a8._8_4_;
        uVar10 = fStack_9c;
        if (cVar2 != '\x03') {
          uVar1 = *(undefined8 *)&(this->MaxScaleFactor).Max.field0_0x0;
          uVar11 = (uint)uVar1;
          uVar12 = (uint)((ulonglong)uVar1 >> 0x20);
          uVar10 = (this->MaxScaleFactor).Max.field0_0x0._s_0.Z;
        }
      }
      *(ulonglong *)(pFVar4 + (longlong)(int)uVar9 + 0x1c) = CONCAT44(local_a8._4_4_,local_a8._0_4_)
      ;
      *(ulonglong *)(pFVar4 + (longlong)(int)uVar9 + 0x1c + 8) = CONCAT44(fStack_9c,local_a8._8_4_);
      *(ulonglong *)(pFVar4 + (longlong)(int)uVar9 + 0x2c) = CONCAT44(uVar12,uVar11);
      *(undefined4 *)(pFVar4 + (longlong)(int)uVar9 + 0x34) = uVar10;
      if (this->bSampleScaleFactorByCurve == false) {
        local_a8._0_8_ = &local_res10;
        local_res10 = 0;
        unique0x00008e00 = (float *)&stack0x00000018;
        local_res14 = 0x3f800000;
        FNiagaraDistributionFloat::FNiagaraDistributionFloat
                  ((FNiagaraDistributionFloat *)local_78,(initializer_list<float> *)local_a8);
        pTVar7 = FNiagaraStatelessEmitterDataBuildContext::
                 AddDistribution<FNiagaraDistributionFloat>
                           (param_1,(TIntVector3<unsigned_int> *)local_a8,
                            (FNiagaraDistributionFloat *)local_78);
        *(undefined8 *)(pFVar4 + (longlong)(int)uVar9 + 0x44) = *(undefined8 *)&pTVar7->field0_0x0;
        *(uint *)(pFVar4 + (longlong)(int)uVar9 + 0x4c) = (pTVar7->field0_0x0)._s_0.Z;
        if (local_50.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data);
        }
        FInstancedStruct::Reset((FInstancedStruct *)(local_78 + 0x18));
      }
      else {
        pTVar7 = FNiagaraStatelessEmitterDataBuildContext::
                 AddDistribution<FNiagaraDistributionFloat>
                           (param_1,(TIntVector3<unsigned_int> *)local_a8,&this->SampleFactorCurve);
        *(undefined8 *)(pFVar4 + (longlong)(int)uVar9 + 0x44) = *(undefined8 *)&pTVar7->field0_0x0;
        *(uint *)(pFVar4 + (longlong)(int)uVar9 + 0x4c) = (pTVar7->field0_0x0)._s_0.Z;
      }
      local_80 = 0;
      local_98 = &
                 ___7__TFunction_OwnedObject_P6AXAEBVFParticleSimulationContext_NiagaraStateless___Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      local_90 = NSMScaleMeshSizeBySpeedPrivate::ParticleSimulate;
      local_a8._0_4_ = 0x4943dba0;
      local_a8._4_4_ = 1;
      FNiagaraStatelessEmitterDataBuildContext::AddParticleSimulationExecSimulate
                (param_1,(TFunction<void___cdecl(NiagaraStateless::FParticleSimulationContext_const_&)>
                          *)local_a8);
    }
  }
  return;
}

// BuildShaderParameters @ 14943aa90

void __thiscall
UNiagaraStatelessModule_ScaleMeshSizeBySpeed::BuildShaderParameters
          (UNiagaraStatelessModule_ScaleMeshSizeBySpeed *this,
          FNiagaraStatelessShaderParametersBuilder *param_1)

{
  int iVar1;
  FShaderParametersMetadataBuilder *this_00;
  FShaderParametersMetadata *pFVar2;
  
  iVar1 = param_1->ParameterOffset;
  this_00 = param_1->MetadataBuilder;
  if (this_00 != (FShaderParametersMetadataBuilder *)0x0) {
    pFVar2 = TShaderParameterStructTypeInfo<NiagaraStateless::FScaleMeshSizeBySpeedModule_ShaderParameters>
             ::GetStructMetadata();
    FShaderParametersMetadataBuilder::AddIncludedStruct(this_00,pFVar2,Float);
  }
  pFVar2 = TShaderParameterStructTypeInfo<NiagaraStateless::FScaleMeshSizeBySpeedModule_ShaderParameters>
           ::GetStructMetadata();
  param_1->ParameterOffset = pFVar2->Size + (iVar1 + 0xfU & 0xfffffff0);
  return;
}

// GetPrivateStaticClass @ 14944c070

UClass * __cdecl UNiagaraStatelessModule_ScaleMeshSizeBySpeed::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_ScaleMeshSizeBySpeed",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed.
                InnerSingleton,StaticRegisterNativesUNiagaraStatelessModule_ScaleMeshSizeBySpeed,
               0x128,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraStatelessModule_ScaleMeshSizeBySpeed>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_ScaleMeshSizeBySpeed>,
               local_res8,UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed.InnerSingleton;
}

// SetShaderParameters @ 149466360

void __thiscall
UNiagaraStatelessModule_ScaleMeshSizeBySpeed::SetShaderParameters
          (UNiagaraStatelessModule_ScaleMeshSizeBySpeed *this,
          FNiagaraStatelessSetShaderParameterContext *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  uchar *puVar4;
  uchar *puVar5;
  code *pcVar6;
  bool bVar7;
  FShaderParametersMetadata *pFVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_58;
  float fStack_54;
  
  uVar10 = param_1->BuiltDataOffset + 3U & 0xfffffffc;
  param_1->BuiltDataOffset = uVar10 + 0x60;
  if (((param_1->BuiltData).ArrayNum < (int)(uVar10 + 0x60)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("BuiltDataOffset <= BuiltData.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessSetShaderParameterContext.h"
                         ,0x22,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  puVar4 = (param_1->BuiltData).DataPtr;
  fVar14 = FNiagaraStatelessSetShaderParameterContext::GetRendererParameterValue<float>
                     (param_1,*(int *)(puVar4 + (longlong)(int)uVar10 + 0x38),
                      (float *)(puVar4 + (longlong)(int)uVar10 + 0x3c));
  piVar1 = &(param_1->RendererParameterData).ArrayNum;
  if (*(int *)(puVar4 + (int)uVar10) == -1) {
    fVar15 = (float)*(undefined8 *)(puVar4 + (longlong)(int)uVar10 + 4);
    fVar16 = (float)((ulonglong)*(undefined8 *)(puVar4 + (longlong)(int)uVar10 + 4) >> 0x20);
    fVar11 = *(float *)(puVar4 + (longlong)(int)uVar10 + 0xc);
  }
  else {
    iVar2 = *(int *)(puVar4 + (int)uVar10) * 4;
    lVar13 = (longlong)iVar2;
    if (((iVar2 < 0) || ((ulonglong)(longlong)*piVar1 < lVar13 + 0xcU)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Offset >= 0 && Offset + sizeof(TValueType) <= RendererParameterData.Num()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessSetShaderParameterContext.h"
                           ,0x2d,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    puVar5 = (param_1->RendererParameterData).DataPtr;
    uVar3 = *(undefined8 *)(puVar5 + lVar13);
    fVar15 = (float)uVar3;
    fVar16 = (float)((ulonglong)uVar3 >> 0x20);
    fVar11 = *(float *)(puVar5 + lVar13 + 8);
  }
  if (*(int *)(puVar4 + (longlong)(int)uVar10 + 0x1c) == -1) {
    uVar3 = *(undefined8 *)(puVar4 + (longlong)(int)uVar10 + 0x20);
    fVar12 = *(float *)(puVar4 + (longlong)(int)uVar10 + 0x28);
  }
  else {
    iVar2 = *(int *)(puVar4 + (longlong)(int)uVar10 + 0x1c) * 4;
    lVar13 = (longlong)iVar2;
    if (((iVar2 < 0) || ((ulonglong)(longlong)*piVar1 < lVar13 + 0xcU)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Offset >= 0 && Offset + sizeof(TValueType) <= RendererParameterData.Num()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessSetShaderParameterContext.h"
                           ,0x2d,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    puVar5 = (param_1->RendererParameterData).DataPtr;
    uVar3 = *(undefined8 *)(puVar5 + lVar13);
    fVar12 = *(float *)(puVar5 + lVar13 + 8);
  }
  uVar9 = param_1->ParameterOffset + 0xf & 0xfffffff0;
  pFVar8 = TShaderParameterStructTypeInfo<NiagaraStateless::FScaleMeshSizeBySpeedModule_ShaderParameters>
           ::GetStructMetadata();
  FNiagaraStatelessSetShaderParameterContext::ValidateIncludeStructType(param_1,uVar9,pFVar8);
  pFVar8 = TShaderParameterStructTypeInfo<NiagaraStateless::FScaleMeshSizeBySpeedModule_ShaderParameters>
           ::GetStructMetadata();
  puVar5 = param_1->ShaderParametersBase;
  local_58 = (float)uVar3;
  param_1->ParameterOffset = pFVar8->Size + uVar9;
  *(ulonglong *)(puVar5 + uVar9) = CONCAT44(fVar16,fVar15);
  *(float *)(puVar5 + (ulonglong)uVar9 + 8) = fVar11;
  *(float *)(puVar5 + (ulonglong)uVar9 + 0x10) = local_58 - fVar15;
  fStack_54 = (float)((ulonglong)uVar3 >> 0x20);
  fVar15 = 0.0;
  *(float *)(puVar5 + (ulonglong)uVar9 + 0x14) = fStack_54 - fVar16;
  *(float *)(puVar5 + (ulonglong)uVar9 + 0x18) = fVar12 - fVar11;
  if (0.0 < fVar14) {
    fVar15 = __real_3f800000 / (fVar14 * fVar14);
  }
  *(float *)(puVar5 + (ulonglong)uVar9 + 0x2c) = fVar15;
  *(undefined8 *)(puVar5 + (ulonglong)uVar9 + 0x20) =
       *(undefined8 *)(puVar4 + (longlong)(int)uVar10 + 0x44);
  *(undefined4 *)(puVar5 + (ulonglong)uVar9 + 0x28) =
       *(undefined4 *)(puVar4 + (longlong)(int)uVar10 + 0x4c);
  return;
}

// StaticRegisterNativesUNiagaraStatelessModule_ScaleMeshSizeBySpeed @ 149469d80

void __cdecl
UNiagaraStatelessModule_ScaleMeshSizeBySpeed::
StaticRegisterNativesUNiagaraStatelessModule_ScaleMeshSizeBySpeed(void)

{
  return;
}

