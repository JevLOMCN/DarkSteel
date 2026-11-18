// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 9

// StaticClass @ 149410500

UClass * __cdecl UNiagaraStatelessModule_MeshRotationRate::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_MeshRotationRate.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_MeshRotationRate",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_MeshRotationRate.InnerSingleton,
               StaticRegisterNativesUNiagaraStatelessModule_MeshRotationRate,0xb8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraStatelessModule_MeshRotationRate>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_MeshRotationRate>,local_res8,
               UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_MeshRotationRate.InnerSingleton;
}

// UNiagaraStatelessModule_MeshRotationRate @ 149429b40

UNiagaraStatelessModule_MeshRotationRate * __thiscall
UNiagaraStatelessModule_MeshRotationRate::UNiagaraStatelessModule_MeshRotationRate
          (UNiagaraStatelessModule_MeshRotationRate *this,FVTableHelper *param_1)

{
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this,param_1);
  this->bUseRateScale = false;
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_MeshRotationRate__6B_;
  FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
            (&this->RotationRateDistribution,&UE::Math::TVector<float>::ZeroVector);
  FNiagaraDistributionCurveVector3::FNiagaraDistributionCurveVector3
            (&this->RateScaleDistribution,Accumulate);
  return this;
}

// UNiagaraStatelessModule_MeshRotationRate @ 149429b90

UNiagaraStatelessModule_MeshRotationRate * __thiscall
UNiagaraStatelessModule_MeshRotationRate::UNiagaraStatelessModule_MeshRotationRate
          (UNiagaraStatelessModule_MeshRotationRate *this)

{
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  this->bUseRateScale = false;
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_MeshRotationRate__6B_;
  FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
            (&this->RotationRateDistribution,&UE::Math::TVector<float>::ZeroVector);
  FNiagaraDistributionCurveVector3::FNiagaraDistributionCurveVector3
            (&this->RateScaleDistribution,Accumulate);
  return this;
}

// ~UNiagaraStatelessModule_MeshRotationRate @ 14942cad0

void __thiscall
UNiagaraStatelessModule_MeshRotationRate::~UNiagaraStatelessModule_MeshRotationRate
          (UNiagaraStatelessModule_MeshRotationRate *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_MeshRotationRate__6B_;
  pFVar1 = (this->RateScaleDistribution).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&(this->RateScaleDistribution)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->RotationRateDistribution)._padding_);
  UNiagaraStatelessModule::~UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  return;
}

// BuildEmitterData @ 149434570

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
UNiagaraStatelessModule_MeshRotationRate::BuildEmitterData
          (UNiagaraStatelessModule_MeshRotationRate *this,
          FNiagaraStatelessEmitterDataBuildContext *param_1)

{
  char cVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  TIntVector3<unsigned_int> *pTVar7;
  FNiagaraDistributionCurveVector3 *pFVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar14;
  undefined8 uVar13;
  TVector<float>_u_0 local_88;
  TIntVector3<unsigned_int> local_78;
  undefined1 local_68 [16];
  undefined **local_58;
  FInstancedStruct local_50;
  ForAnyElementType local_40;
  
  pTVar2 = param_1->BuiltData;
  uVar11 = pTVar2->ArrayNum + 3U & 0xfffffffc;
  iVar9 = (uVar11 - pTVar2->ArrayNum) + 0x34;
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar9,&pTVar2->AllocatorInstance,&pTVar2->ArrayNum,&pTVar2->ArrayMax);
  memset((pTVar2->AllocatorInstance).Data + iVar6,0,(longlong)iVar9);
  pFVar3 = (param_1->BuiltData->AllocatorInstance).Data;
  *(undefined2 *)(pFVar3 + (longlong)(int)uVar11 + 1) = 0;
  pFVar3[(longlong)(int)uVar11 + 3] = (FScriptContainerElement)0x0;
  *(undefined8 *)(pFVar3 + (longlong)(int)uVar11 + 0x20) = 0;
  *(undefined8 *)(pFVar3 + (longlong)(int)uVar11 + 0x28) = 0;
  *(undefined4 *)(pFVar3 + (longlong)(int)uVar11 + 0x30) = 0;
  *(undefined4 *)(pFVar3 + (longlong)(int)uVar11 + 4) = 0xffffffff;
  *(undefined8 *)(pFVar3 + (longlong)(int)uVar11 + 8) = 0;
  *(undefined8 *)(pFVar3 + (longlong)(int)uVar11 + 0x10) = 0;
  *(undefined8 *)(pFVar3 + (longlong)(int)uVar11 + 0x18) = 0;
  pFVar3[(int)uVar11] = (FScriptContainerElement)0x0;
  *(undefined8 *)(pFVar3 + (longlong)(int)uVar11 + 0x20) =
       UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._0_8_;
  *(uint *)(pFVar3 + (longlong)(int)uVar11 + 0x28) =
       UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Z;
  *(undefined8 *)(pFVar3 + (longlong)(int)uVar11 + 0x2c) = 0xffffffffffffffff;
  bVar5 = UNiagaraStatelessModule::IsModuleEnabled((UNiagaraStatelessModule *)this);
  if (bVar5) {
    iVar6 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                      (param_1,&NiagaraStatelessCommon::GGlobals.MeshOrientationVariable);
    *(int *)(pFVar3 + (longlong)(int)uVar11 + 0x2c) = iVar6;
    iVar6 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                      (param_1,&NiagaraStatelessCommon::GGlobals.PreviousMeshOrientationVariable);
    *(int *)(pFVar3 + (longlong)(int)uVar11 + 0x30) = iVar6;
    if ((*(int *)(pFVar3 + (longlong)(int)uVar11 + 0x2c) != -1) || (iVar6 != -1)) {
      pFVar3[(int)uVar11] = (FScriptContainerElement)0x1;
      uVar10 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      cVar1 = (char)(this->RotationRateDistribution)._padding_;
      uVar12 = (undefined4)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      uVar14 = (undefined4)
               ((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
      local_68._12_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_68._4_4_ = uVar12;
      local_68._8_4_ = uVar14;
      if (cVar1 == '\x01') {
        local_68._0_4_ =
             FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
                       (param_1,(FNiagaraVariableBase *)
                                ((longlong)&(this->RotationRateDistribution)._padding_ + 4));
      }
      else if (cVar1 == '\x02') {
        local_68._0_4_ =
             FNiagaraStatelessEmitterDataBuildContext::AddExpression
                       (param_1,(FInstancedStruct *)&(this->RotationRateDistribution)._padding_);
      }
      else {
        uVar13 = *(undefined8 *)&(this->RotationRateDistribution).Min.field0_0x0;
        local_68._12_4_ = (this->RotationRateDistribution).Min.field0_0x0._s_0.Z;
        local_68._4_4_ = (undefined4)uVar13;
        local_68._8_4_ = (undefined4)((ulonglong)uVar13 >> 0x20);
        local_68._0_4_ = -1;
        uVar10 = local_68._12_4_;
        if (cVar1 != '\x03') {
          uVar13 = *(undefined8 *)&(this->RotationRateDistribution).Max.field0_0x0;
          uVar10 = (this->RotationRateDistribution).Max.field0_0x0._s_0.Z;
        }
        uVar12 = (undefined4)uVar13;
        uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
      }
      fVar4 = __real_3b360b61;
      *(ulonglong *)(pFVar3 + (longlong)(int)uVar11 + 4) = CONCAT44(local_68._4_4_,local_68._0_4_);
      *(ulonglong *)(pFVar3 + (longlong)(int)uVar11 + 4 + 8) =
           CONCAT44(local_68._12_4_,local_68._8_4_);
      *(ulonglong *)(pFVar3 + (longlong)(int)uVar11 + 0x14) = CONCAT44(uVar14,uVar12);
      *(undefined4 *)(pFVar3 + (longlong)(int)uVar11 + 0x1c) = uVar10;
      *(float *)(pFVar3 + (longlong)(int)uVar11 + 8) =
           *(float *)(pFVar3 + (longlong)(int)uVar11 + 8) * fVar4;
      *(float *)(pFVar3 + (longlong)(int)uVar11 + 0x10) =
           *(float *)(pFVar3 + (longlong)(int)uVar11 + 0x10) * fVar4;
      *(float *)(pFVar3 + (longlong)(int)uVar11 + 0xc) =
           *(float *)(pFVar3 + (longlong)(int)uVar11 + 0xc) * fVar4;
      *(float *)(pFVar3 + (longlong)(int)uVar11 + 0x14) =
           *(float *)(pFVar3 + (longlong)(int)uVar11 + 0x14) * fVar4;
      *(float *)(pFVar3 + (longlong)(int)uVar11 + 0x18) =
           *(float *)(pFVar3 + (longlong)(int)uVar11 + 0x18) * fVar4;
      *(float *)(pFVar3 + (longlong)(int)uVar11 + 0x1c) =
           *(float *)(pFVar3 + (longlong)(int)uVar11 + 0x1c) * fVar4;
      uVar10 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
      uVar13 = UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
      if (this->bUseRateScale == false) {
        pFVar8 = FNiagaraDistributionCurveVector3::FNiagaraDistributionCurveVector3
                           ((FNiagaraDistributionCurveVector3 *)local_68,Accumulate);
        local_88._0_8_ = uVar13;
        local_88._s_0.Z = (float)uVar10;
        pTVar7 = FNiagaraStatelessEmitterDataBuildContext::
                 AddDistributionAsCurve<FNiagaraDistributionCurveVector3,UE::Math::TVector<float>_>
                           (param_1,&local_78,pFVar8,(TVector<float> *)&local_88._s_0);
        *(undefined8 *)(pFVar3 + (longlong)(int)uVar11 + 0x20) = *(undefined8 *)&pTVar7->field0_0x0;
        *(uint *)(pFVar3 + (longlong)(int)uVar11 + 0x28) = (pTVar7->field0_0x0)._s_0.Z;
        if (local_40.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_40.Data);
        }
        FInstancedStruct::Reset(&local_50);
      }
      else {
        local_88._0_8_ = UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
        local_88._s_0.Z = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
        pTVar7 = FNiagaraStatelessEmitterDataBuildContext::
                 AddDistributionAsCurve<FNiagaraDistributionCurveVector3,UE::Math::TVector<float>_>
                           (param_1,&local_78,&this->RateScaleDistribution,
                            (TVector<float> *)&local_88._s_0);
        *(undefined8 *)(pFVar3 + (longlong)(int)uVar11 + 0x20) = *(undefined8 *)&pTVar7->field0_0x0;
        *(uint *)(pFVar3 + (longlong)(int)uVar11 + 0x28) = (pTVar7->field0_0x0)._s_0.Z;
      }
      local_40.Data = (FScriptContainerElement *)0x0;
      local_58 = &
                 ___7__TFunction_OwnedObject_P6AXAEBVFParticleSimulationContext_NiagaraStateless___Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      local_50.ScriptStruct.field0_0x0 =
           (TObjectPtr<UScriptStruct_const_>_u_0)NSMMeshRotationRatePrivate::ParticleSimulate;
      local_68._0_4_ = 0x4943dba0;
      local_68._4_4_ = 1;
      FNiagaraStatelessEmitterDataBuildContext::AddParticleSimulationExecSimulate
                (param_1,(TFunction<void___cdecl(NiagaraStateless::FParticleSimulationContext_const_&)>
                          *)local_68);
    }
  }
  return;
}

// BuildShaderParameters @ 14943a910

void __thiscall
UNiagaraStatelessModule_MeshRotationRate::BuildShaderParameters
          (UNiagaraStatelessModule_MeshRotationRate *this,
          FNiagaraStatelessShaderParametersBuilder *param_1)

{
  int iVar1;
  FShaderParametersMetadataBuilder *this_00;
  FShaderParametersMetadata *pFVar2;
  
  iVar1 = param_1->ParameterOffset;
  this_00 = param_1->MetadataBuilder;
  if (this_00 != (FShaderParametersMetadataBuilder *)0x0) {
    pFVar2 = TShaderParameterStructTypeInfo<NiagaraStateless::FMeshRotationRateModule_ShaderParameters>
             ::GetStructMetadata();
    FShaderParametersMetadataBuilder::AddIncludedStruct(this_00,pFVar2,Float);
  }
  pFVar2 = TShaderParameterStructTypeInfo<NiagaraStateless::FMeshRotationRateModule_ShaderParameters>
           ::GetStructMetadata();
  param_1->ParameterOffset = pFVar2->Size + (iVar1 + 0xfU & 0xfffffff0);
  return;
}

// GetPrivateStaticClass @ 14944bd70

UClass * __cdecl UNiagaraStatelessModule_MeshRotationRate::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_MeshRotationRate.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_MeshRotationRate",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_MeshRotationRate.InnerSingleton,
               StaticRegisterNativesUNiagaraStatelessModule_MeshRotationRate,0xb8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraStatelessModule_MeshRotationRate>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_MeshRotationRate>,local_res8,
               UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_MeshRotationRate.InnerSingleton;
}

// SetShaderParameters @ 149465f70

void __thiscall
UNiagaraStatelessModule_MeshRotationRate::SetShaderParameters
          (UNiagaraStatelessModule_MeshRotationRate *this,
          FNiagaraStatelessSetShaderParameterContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FShaderParametersMetadata *pFVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  uint *puVar8;
  
  uVar7 = param_1->ParameterOffset + 0xf & 0xfffffff0;
  pFVar4 = TShaderParameterStructTypeInfo<NiagaraStateless::FMeshRotationRateModule_ShaderParameters>
           ::GetStructMetadata();
  FNiagaraStatelessSetShaderParameterContext::ValidateIncludeStructType(param_1,uVar7,pFVar4);
  pFVar4 = TShaderParameterStructTypeInfo<NiagaraStateless::FMeshRotationRateModule_ShaderParameters>
           ::GetStructMetadata();
  uVar5 = param_1->BuiltDataOffset + 3U & 0xfffffffc;
  puVar8 = (uint *)(param_1->ShaderParametersBase + uVar7);
  param_1->ParameterOffset = pFVar4->Size + uVar7;
  iVar1 = uVar5 + 0x34;
  param_1->BuiltDataOffset = iVar1;
  if ((param_1->BuiltData).ArrayNum < iVar1) {
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
  pbVar6 = (param_1->BuiltData).DataPtr + (int)uVar5;
  *puVar8 = (uint)*pbVar6;
  FNiagaraStatelessSetShaderParameterContext::ConvertRangeToScaleBias<UE::Math::TVector<float>_>
            (param_1,(FNiagaraStatelessRange<UE::Math::TVector<float>_> *)(pbVar6 + 4),
             (TVector<float> *)(puVar8 + 4),(TVector<float> *)(puVar8 + 8));
  *(undefined8 *)(puVar8 + 0xc) = *(undefined8 *)(pbVar6 + 0x20);
  puVar8[0xe] = *(uint *)(pbVar6 + 0x28);
  return;
}

// StaticRegisterNativesUNiagaraStatelessModule_MeshRotationRate @ 149469d10

void __cdecl
UNiagaraStatelessModule_MeshRotationRate::
StaticRegisterNativesUNiagaraStatelessModule_MeshRotationRate(void)

{
  return;
}

