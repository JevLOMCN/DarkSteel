// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 9

// StaticClass @ 14940cf80

UClass * __cdecl UNiagaraStatelessModule_SpriteRotationRate::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_SpriteRotationRate.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_SpriteRotationRate",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_SpriteRotationRate.InnerSingleton
               ,StaticRegisterNativesUNiagaraStatelessModule_SpriteRotationRate,0xa8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraStatelessModule_SpriteRotationRate>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_SpriteRotationRate>,local_res8
               ,UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_SpriteRotationRate.InnerSingleton;
}

// UNiagaraStatelessModule_SpriteRotationRate @ 14942a7a0

UNiagaraStatelessModule_SpriteRotationRate * __thiscall
UNiagaraStatelessModule_SpriteRotationRate::UNiagaraStatelessModule_SpriteRotationRate
          (UNiagaraStatelessModule_SpriteRotationRate *this,FVTableHelper *param_1)

{
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this,param_1);
  this->bUseRateScale = false;
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_SpriteRotationRate__6B_;
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
            (&this->RotationRateDistribution,0.0);
  FNiagaraDistributionCurveFloat::FNiagaraDistributionCurveFloat
            (&this->RateScaleDistribution,Accumulate);
  return this;
}

// UNiagaraStatelessModule_SpriteRotationRate @ 14942a7f0

UNiagaraStatelessModule_SpriteRotationRate * __thiscall
UNiagaraStatelessModule_SpriteRotationRate::UNiagaraStatelessModule_SpriteRotationRate
          (UNiagaraStatelessModule_SpriteRotationRate *this)

{
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  this->bUseRateScale = false;
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_SpriteRotationRate__6B_;
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
            (&this->RotationRateDistribution,0.0);
  FNiagaraDistributionCurveFloat::FNiagaraDistributionCurveFloat
            (&this->RateScaleDistribution,Accumulate);
  return this;
}

// ~UNiagaraStatelessModule_SpriteRotationRate @ 14942cec0

void __thiscall
UNiagaraStatelessModule_SpriteRotationRate::~UNiagaraStatelessModule_SpriteRotationRate
          (UNiagaraStatelessModule_SpriteRotationRate *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_SpriteRotationRate__6B_;
  pFVar1 = (this->RateScaleDistribution).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&(this->RateScaleDistribution)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->RotationRateDistribution)._padding_);
  UNiagaraStatelessModule::~UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  return;
}

// BuildEmitterData @ 149436b40

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
UNiagaraStatelessModule_SpriteRotationRate::BuildEmitterData
          (UNiagaraStatelessModule_SpriteRotationRate *this,
          FNiagaraStatelessEmitterDataBuildContext *param_1)

{
  char cVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TIntVector3<unsigned_int> *pTVar7;
  int iVar8;
  uint uVar9;
  ENiagaraDistributionMode EVar10;
  TArrayView<float_const_,int> *pTVar11;
  float fVar12;
  float fVar13;
  float local_res18 [2];
  FNiagaraTypeDefinitionHandle local_e4;
  FInstancedStruct local_e0;
  ForAnyElementType local_d0;
  uint local_c8;
  int local_c4;
  undefined1 auStack_c0 [8];
  TIntVector3<unsigned_int>_u_0 local_b8;
  undefined4 uStack_ac;
  TIntVector3<unsigned_int>_u_0 local_a8;
  TArrayView<float_const_,int> local_98;
  TArrayView<float_const_,int> local_88;
  code *local_78 [2];
  undefined **local_68;
  code *local_60;
  undefined8 local_50;
  
  pTVar2 = param_1->BuiltData;
  uVar9 = pTVar2->ArrayNum + 3U & 0xfffffffc;
  iVar8 = (uVar9 - pTVar2->ArrayNum) + 0x24;
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar8,&pTVar2->AllocatorInstance,&pTVar2->ArrayNum,&pTVar2->ArrayMax);
  memset((pTVar2->AllocatorInstance).Data + iVar6,0,(longlong)iVar8);
  iVar6 = -1;
  pFVar3 = (param_1->BuiltData->AllocatorInstance).Data;
  *(undefined8 *)(pFVar3 + (longlong)(int)uVar9 + 0x10) = 0;
  *(undefined8 *)(pFVar3 + (longlong)(int)uVar9 + 0x18) = 0;
  *(undefined4 *)(pFVar3 + (longlong)(int)uVar9 + 0x20) = 0;
  *(undefined4 *)(pFVar3 + (longlong)(int)uVar9 + 4) = 0xffffffff;
  *(undefined8 *)(pFVar3 + (longlong)(int)uVar9 + 8) = 0;
  *(undefined4 *)(pFVar3 + (int)uVar9) = 0;
  *(undefined8 *)(pFVar3 + (longlong)(int)uVar9 + 0x10) =
       UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._0_8_;
  *(uint *)(pFVar3 + (longlong)(int)uVar9 + 0x18) =
       UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Z;
  *(undefined8 *)(pFVar3 + (longlong)(int)uVar9 + 0x1c) = 0xffffffffffffffff;
  bVar5 = UNiagaraStatelessModule::IsModuleEnabled((UNiagaraStatelessModule *)this);
  if (bVar5) {
    iVar8 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                      (param_1,&NiagaraStatelessCommon::GGlobals.SpriteRotationVariable);
    *(int *)(pFVar3 + (longlong)(int)uVar9 + 0x1c) = iVar8;
    iVar8 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                      (param_1,&NiagaraStatelessCommon::GGlobals.PreviousSpriteRotationVariable);
    *(int *)(pFVar3 + (longlong)(int)uVar9 + 0x20) = iVar8;
    if ((*(int *)(pFVar3 + (longlong)(int)uVar9 + 0x1c) != -1) || (iVar8 != -1)) {
      fVar12 = 0.0;
      *(undefined4 *)(pFVar3 + (int)uVar9) = 1;
      cVar1 = (char)(this->RotationRateDistribution)._padding_;
      if (cVar1 == '\x01') {
        iVar6 = FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
                          (param_1,(FNiagaraVariableBase *)
                                   ((longlong)&(this->RotationRateDistribution)._padding_ + 4));
        fVar13 = 0.0;
      }
      else if (cVar1 == '\x02') {
        iVar6 = FNiagaraStatelessEmitterDataBuildContext::AddExpression
                          (param_1,(FInstancedStruct *)&(this->RotationRateDistribution)._padding_);
        fVar13 = 0.0;
      }
      else {
        fVar12 = (this->RotationRateDistribution).Min;
        fVar13 = fVar12;
        if (cVar1 != '\x03') {
          fVar13 = (this->RotationRateDistribution).Max;
        }
      }
      *(int *)(pFVar3 + (longlong)(int)uVar9 + 4) = iVar6;
      *(float *)(pFVar3 + (longlong)(int)uVar9 + 8) = fVar12;
      *(float *)(pFVar3 + (longlong)(int)uVar9 + 0xc) = fVar13;
      if (this->bUseRateScale == false) {
        local_e4.RegisteredTypeIndex =
             FNiagaraTypeDefinitionHandle::Register(&local_e4,&FNiagaraTypeDefinition::Vec4Def);
        FInstancedStruct::FInstancedStruct(&local_e0);
        fVar12 = __real_3f800000;
        local_d0.Data = (FScriptContainerElement *)0x0;
        _local_c4 = 0;
        auStack_c0._4_4_ = 1.0;
        local_c8 = 2;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,2,0,&local_d0,2,&local_c4);
        *(undefined8 *)local_d0.Data = 0x3f80000000000000;
        EVar10 = UniformCurve;
        if ((int)local_c8 < 2) {
          bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_6501674703311077182>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessEmitterDataBuildContext.h"
                             ,0xc2,
                             "(Distribution.IsCurve() || Distribution.IsGradient()) && Distribution.Values.Num() > 1"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_b8._0_8_ = local_res18;
          local_b8._s_0.Z = 2;
          pTVar11 = &local_88;
          local_88._12_4_ = uStack_ac;
          local_88.ArrayNum = 2;
          EVar10 = NonUniformCurve;
          local_res18[0] = 1.0;
          local_res18[1] = 1.0;
          local_88.DataPtr = (float *)local_b8._0_8_;
        }
        else {
          pTVar11 = &local_98;
          local_b8._0_8_ = local_d0.Data;
          local_b8._s_0.Z = local_c8;
          local_98._12_4_ = uStack_ac;
          local_98.ArrayNum = local_c8;
          local_98.DataPtr = (float *)local_d0.Data;
        }
        FNiagaraStatelessEmitterDataBuildContext::InternalAddDistribution<float>
                  (param_1,(TIntVector3<unsigned_int> *)&local_a8._s_0,EVar10,pTVar11,
                   (TVector2<float> *)auStack_c0,'\0',fVar12);
        *(undefined8 *)(pFVar3 + (longlong)(int)uVar9 + 0x10) = local_a8._0_8_;
        *(uint *)(pFVar3 + (longlong)(int)uVar9 + 0x18) = local_a8._s_0.Z;
        if (local_d0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.Data);
        }
        FInstancedStruct::Reset(&local_e0);
      }
      else {
        pTVar7 = FNiagaraStatelessEmitterDataBuildContext::
                 AddDistributionAsCurve<FNiagaraDistributionCurveFloat,float>
                           (param_1,(TIntVector3<unsigned_int> *)&local_b8._s_0,
                            &this->RateScaleDistribution,__real_3f800000);
        *(undefined8 *)(pFVar3 + (longlong)(int)uVar9 + 0x10) = *(undefined8 *)&pTVar7->field0_0x0;
        *(uint *)(pFVar3 + (longlong)(int)uVar9 + 0x18) = (pTVar7->field0_0x0)._s_0.Z;
      }
      local_50 = 0;
      local_68 = &
                 ___7__TFunction_OwnedObject_P6AXAEBVFParticleSimulationContext_NiagaraStateless___Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      local_60 = NSMSpriteRotationRatePrivate::ParticleSimulate;
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<void_(__cdecl*)(NiagaraStateless::FParticleSimulationContext_const_&),void,NiagaraStateless::FParticleSimulationContext_const_&>
                    ::Call;
      FNiagaraStatelessEmitterDataBuildContext::AddParticleSimulationExecSimulate
                (param_1,(TFunction<void___cdecl(NiagaraStateless::FParticleSimulationContext_const_&)>
                          *)local_78);
    }
  }
  return;
}

// BuildShaderParameters @ 14943ad30

void __thiscall
UNiagaraStatelessModule_SpriteRotationRate::BuildShaderParameters
          (UNiagaraStatelessModule_SpriteRotationRate *this,
          FNiagaraStatelessShaderParametersBuilder *param_1)

{
  int iVar1;
  FShaderParametersMetadataBuilder *this_00;
  FShaderParametersMetadata *pFVar2;
  
  iVar1 = param_1->ParameterOffset;
  this_00 = param_1->MetadataBuilder;
  if (this_00 != (FShaderParametersMetadataBuilder *)0x0) {
    pFVar2 = TShaderParameterStructTypeInfo<NiagaraStateless::FSpriteRotationRateModule_ShaderParameters>
             ::GetStructMetadata();
    FShaderParametersMetadataBuilder::AddIncludedStruct(this_00,pFVar2,Float);
  }
  pFVar2 = TShaderParameterStructTypeInfo<NiagaraStateless::FSpriteRotationRateModule_ShaderParameters>
           ::GetStructMetadata();
  param_1->ParameterOffset = pFVar2->Size + (iVar1 + 0xfU & 0xfffffff0);
  return;
}

// GetPrivateStaticClass @ 14944c5b0

UClass * __cdecl UNiagaraStatelessModule_SpriteRotationRate::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_SpriteRotationRate.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_SpriteRotationRate",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_SpriteRotationRate.InnerSingleton
               ,StaticRegisterNativesUNiagaraStatelessModule_SpriteRotationRate,0xa8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraStatelessModule_SpriteRotationRate>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_SpriteRotationRate>,local_res8
               ,UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_SpriteRotationRate.InnerSingleton;
}

// SetShaderParameters @ 1494681d0

void __thiscall
UNiagaraStatelessModule_SpriteRotationRate::SetShaderParameters
          (UNiagaraStatelessModule_SpriteRotationRate *this,
          FNiagaraStatelessSetShaderParameterContext *param_1)

{
  uchar *puVar1;
  code *pcVar2;
  bool bVar3;
  FShaderParametersMetadata *pFVar4;
  uint uVar5;
  uint uVar6;
  uchar *puVar7;
  float fVar8;
  
  uVar6 = param_1->ParameterOffset + 0xf & 0xfffffff0;
  pFVar4 = TShaderParameterStructTypeInfo<NiagaraStateless::FSpriteRotationRateModule_ShaderParameters>
           ::GetStructMetadata();
  FNiagaraStatelessSetShaderParameterContext::ValidateIncludeStructType(param_1,uVar6,pFVar4);
  pFVar4 = TShaderParameterStructTypeInfo<NiagaraStateless::FSpriteRotationRateModule_ShaderParameters>
           ::GetStructMetadata();
  uVar5 = param_1->BuiltDataOffset + 3U & 0xfffffffc;
  puVar7 = param_1->ShaderParametersBase + uVar6;
  param_1->ParameterOffset = pFVar4->Size + uVar6;
  param_1->BuiltDataOffset = uVar5 + 0x24;
  if ((param_1->BuiltData).ArrayNum < (int)(uVar5 + 0x24)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("BuiltDataOffset <= BuiltData.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessSetShaderParameterContext.h"
                       ,0x22,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar1 = (param_1->BuiltData).DataPtr;
  *(undefined4 *)puVar7 = *(undefined4 *)(puVar1 + (int)uVar5);
  fVar8 = FNiagaraStatelessSetShaderParameterContext::GetRendererParameterValue<float>
                    (param_1,*(int *)(puVar1 + (longlong)(int)uVar5 + 4),
                     (float *)(puVar1 + (longlong)(int)uVar5 + 8));
  *(float *)(puVar7 + 8) = fVar8;
  if (*(int *)(puVar1 + (longlong)(int)uVar5 + 4) == -1) {
    fVar8 = *(float *)(puVar1 + (longlong)(int)uVar5 + 0xc) -
            *(float *)(puVar1 + (longlong)(int)uVar5 + 8);
  }
  else {
    fVar8 = 0.0;
  }
  *(float *)(puVar7 + 4) = fVar8;
  *(undefined8 *)(puVar7 + 0x10) = *(undefined8 *)(puVar1 + (longlong)(int)uVar5 + 0x10);
  *(undefined4 *)(puVar7 + 0x18) = *(undefined4 *)(puVar1 + (longlong)(int)uVar5 + 0x18);
  return;
}

// StaticRegisterNativesUNiagaraStatelessModule_SpriteRotationRate @ 149469e50

void __cdecl
UNiagaraStatelessModule_SpriteRotationRate::
StaticRegisterNativesUNiagaraStatelessModule_SpriteRotationRate(void)

{
  return;
}

