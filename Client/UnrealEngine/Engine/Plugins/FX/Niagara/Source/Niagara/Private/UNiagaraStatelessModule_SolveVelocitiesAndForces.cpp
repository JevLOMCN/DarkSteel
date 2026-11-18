// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 9

// StaticClass @ 14940ad30

UClass * __cdecl UNiagaraStatelessModule_SolveVelocitiesAndForces::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_SolveVelocitiesAndForces.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_SolveVelocitiesAndForces",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_SolveVelocitiesAndForces.
                InnerSingleton,StaticRegisterNativesUNiagaraStatelessModule_SolveVelocitiesAndForces
               ,0x30,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraStatelessModule_SolveVelocitiesAndForces>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_SolveVelocitiesAndForces>,
               local_res8,UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_SolveVelocitiesAndForces.InnerSingleton;
}

// UNiagaraStatelessModule_SolveVelocitiesAndForces @ 14942a6a0

UNiagaraStatelessModule_SolveVelocitiesAndForces * __thiscall
UNiagaraStatelessModule_SolveVelocitiesAndForces::UNiagaraStatelessModule_SolveVelocitiesAndForces
          (UNiagaraStatelessModule_SolveVelocitiesAndForces *this,FVTableHelper *param_1)

{
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this,param_1);
  *(undefined ***)this = &___7UNiagaraStatelessModule_SolveVelocitiesAndForces__6B_;
  return this;
}

// UNiagaraStatelessModule_SolveVelocitiesAndForces @ 14942a6d0

UNiagaraStatelessModule_SolveVelocitiesAndForces * __thiscall
UNiagaraStatelessModule_SolveVelocitiesAndForces::UNiagaraStatelessModule_SolveVelocitiesAndForces
          (UNiagaraStatelessModule_SolveVelocitiesAndForces *this)

{
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  *(undefined ***)this = &___7UNiagaraStatelessModule_SolveVelocitiesAndForces__6B_;
  return this;
}

// ~UNiagaraStatelessModule_SolveVelocitiesAndForces @ 14942ce60

void __thiscall
UNiagaraStatelessModule_SolveVelocitiesAndForces::~UNiagaraStatelessModule_SolveVelocitiesAndForces
          (UNiagaraStatelessModule_SolveVelocitiesAndForces *this)

{
  *(undefined ***)this = &___7UNiagaraStatelessModule_SolveVelocitiesAndForces__6B_;
  UNiagaraStatelessModule::~UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  return;
}

// BuildEmitterData @ 1494365f0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
UNiagaraStatelessModule_SolveVelocitiesAndForces::BuildEmitterData
          (UNiagaraStatelessModule_SolveVelocitiesAndForces *this,
          FNiagaraStatelessEmitterDataBuildContext *param_1)

{
  FPhysicsBuildData *pFVar1;
  float *pfVar2;
  float *pfVar3;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar4;
  undefined8 uVar5;
  ENiagaraCoordinateSpace EVar6;
  FPhysicsBuildData *pFVar7;
  int iVar8;
  float fVar9;
  FPhysicsBuildData *pFVar10;
  longlong lVar11;
  int iVar12;
  FPhysicsBuildData *this_00;
  FPhysicsBuildData *pFVar13;
  FPhysicsBuildData *pFVar14;
  uint uVar15;
  code *local_48 [2];
  undefined **local_38;
  code *local_30;
  undefined8 local_20;
  
  pFVar10 = FNiagaraStatelessEmitterDataBuildContext::
            GetTransientBuildData<NiagaraStateless::FPhysicsBuildData>(param_1);
  pTVar4 = param_1->BuiltData;
  uVar15 = pTVar4->ArrayNum + 0xfU & 0xfffffff0;
  iVar12 = (uVar15 - pTVar4->ArrayNum) + 0x120;
  iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar12,&pTVar4->AllocatorInstance,&pTVar4->ArrayNum,&pTVar4->ArrayMax);
  memset((pTVar4->AllocatorInstance).Data + iVar8,0,(longlong)iVar12);
  this_00 = (FPhysicsBuildData *)((param_1->BuiltData->AllocatorInstance).Data + (int)uVar15);
  memset(this_00,0,0x120);
  NiagaraStateless::FPhysicsBuildData::FPhysicsBuildData(this_00);
  pFVar1 = this_00 + 1;
  lVar11 = 2;
  pfVar2 = &this_00[1].MassRange.Min;
  (pFVar1->MassRange).ParameterOffset = -1;
  pfVar3 = &this_00[1].MassRange.Max;
  *pfVar2 = -NAN;
  *pfVar3 = -NAN;
  this_00[1].DragRange.ParameterOffset = -1;
  pFVar7 = this_00;
  do {
    pFVar14 = pFVar10;
    pFVar13 = pFVar7;
    pFVar7 = (FPhysicsBuildData *)((pFVar13->AccelerationRange).Max.field0_0x0.XYZ + 2);
    fVar9 = (pFVar14->MassRange).Min;
    uVar5 = *(undefined8 *)&(pFVar14->MassRange).Max;
    pFVar10 = (FPhysicsBuildData *)((pFVar14->AccelerationRange).Max.field0_0x0.XYZ + 2);
    (pFVar13->MassRange).ParameterOffset = (pFVar14->MassRange).ParameterOffset;
    (pFVar13->MassRange).Min = fVar9;
    *(undefined8 *)&(pFVar13->MassRange).Max = uVar5;
    fVar9 = (pFVar14->DragRange).Max;
    EVar6 = pFVar14->VelocityCoordinateSpace;
    iVar8 = (pFVar14->VelocityRange).ParameterOffset;
    (pFVar13->DragRange).Min = (pFVar14->DragRange).Min;
    (pFVar13->DragRange).Max = fVar9;
    pFVar13->VelocityCoordinateSpace = EVar6;
    (pFVar13->VelocityRange).ParameterOffset = iVar8;
    uVar5 = *(undefined8 *)((longlong)&(pFVar14->VelocityRange).Min.field0_0x0 + 8);
    *(undefined8 *)&(pFVar13->VelocityRange).Min.field0_0x0 =
         *(undefined8 *)&(pFVar14->VelocityRange).Min.field0_0x0;
    *(undefined8 *)((longlong)&(pFVar13->VelocityRange).Min.field0_0x0 + 8) = uVar5;
    iVar8 = (pFVar14->LinearVelocityScale).ParameterOffset;
    fVar9 = (pFVar14->LinearVelocityScale).Min;
    *(undefined8 *)((longlong)&(pFVar13->VelocityRange).Max.field0_0x0 + 4) =
         *(undefined8 *)((longlong)&(pFVar14->VelocityRange).Max.field0_0x0 + 4);
    (pFVar13->LinearVelocityScale).ParameterOffset = iVar8;
    (pFVar13->LinearVelocityScale).Min = fVar9;
    uVar5 = *(undefined8 *)&pFVar14->WindRange;
    *(undefined8 *)&(pFVar13->LinearVelocityScale).Max =
         *(undefined8 *)&(pFVar14->LinearVelocityScale).Max;
    *(undefined8 *)&pFVar13->WindRange = uVar5;
    uVar5 = *(undefined8 *)&(pFVar14->WindRange).Max.field0_0x0;
    *(undefined8 *)((longlong)&(pFVar13->WindRange).Min.field0_0x0 + 4) =
         *(undefined8 *)((longlong)&(pFVar14->WindRange).Min.field0_0x0 + 4);
    *(undefined8 *)&(pFVar13->WindRange).Max.field0_0x0 = uVar5;
    uVar5 = *(undefined8 *)&pFVar14->AccelerationRange;
    *(undefined8 *)((longlong)&(pFVar13->WindRange).Max.field0_0x0 + 8) =
         *(undefined8 *)((longlong)&(pFVar14->WindRange).Max.field0_0x0 + 8);
    *(undefined8 *)&pFVar13->AccelerationRange = uVar5;
    uVar5 = *(undefined8 *)&(pFVar14->AccelerationRange).Max.field0_0x0;
    *(undefined8 *)((longlong)&(pFVar13->AccelerationRange).Min.field0_0x0 + 4) =
         *(undefined8 *)((longlong)&(pFVar14->AccelerationRange).Min.field0_0x0 + 4);
    *(undefined8 *)&(pFVar13->AccelerationRange).Max.field0_0x0 = uVar5;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  fVar9 = (pFVar10->MassRange).Min;
  uVar5 = *(undefined8 *)&(pFVar14->GravityRange).Min.field0_0x0;
  (pFVar7->MassRange).ParameterOffset = (pFVar10->MassRange).ParameterOffset;
  (pFVar7->MassRange).Min = fVar9;
  *(undefined8 *)&(pFVar13->GravityRange).Min.field0_0x0 = uVar5;
  iVar8 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                    (param_1,&NiagaraStatelessCommon::GGlobals.PositionVariable);
  (pFVar1->MassRange).ParameterOffset = iVar8;
  fVar9 = (float)FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                           (param_1,&NiagaraStatelessCommon::GGlobals.VelocityVariable);
  *pfVar2 = fVar9;
  fVar9 = (float)FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                           (param_1,&NiagaraStatelessCommon::GGlobals.PreviousPositionVariable);
  *pfVar3 = fVar9;
  iVar8 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                    (param_1,&NiagaraStatelessCommon::GGlobals.PreviousVelocityVariable);
  this_00[1].DragRange.ParameterOffset = iVar8;
  if (((((pFVar1->MassRange).ParameterOffset != -1) || (*pfVar2 != -NAN)) || (*pfVar3 != -NAN)) ||
     (iVar8 != -1)) {
    local_20 = 0;
    local_38 = &
               ___7__TFunction_OwnedObject_P6AXAEBVFParticleSimulationContext_NiagaraStateless___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_30 = NiagaraStatelessModuleSolveVelocitiesAndForcesPrivate::ParticleSimulate;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<void_(__cdecl*)(NiagaraStateless::FParticleSimulationContext_const_&),void,NiagaraStateless::FParticleSimulationContext_const_&>
                  ::Call;
    FNiagaraStatelessEmitterDataBuildContext::AddParticleSimulationExecSimulate
              (param_1,(TFunction<void___cdecl(NiagaraStateless::FParticleSimulationContext_const_&)>
                        *)local_48);
  }
  return;
}

// BuildShaderParameters @ 14943ac70

void __thiscall
UNiagaraStatelessModule_SolveVelocitiesAndForces::BuildShaderParameters
          (UNiagaraStatelessModule_SolveVelocitiesAndForces *this,
          FNiagaraStatelessShaderParametersBuilder *param_1)

{
  int iVar1;
  FShaderParametersMetadataBuilder *this_00;
  FShaderParametersMetadata *pFVar2;
  
  iVar1 = param_1->ParameterOffset;
  this_00 = param_1->MetadataBuilder;
  if (this_00 != (FShaderParametersMetadataBuilder *)0x0) {
    pFVar2 = TShaderParameterStructTypeInfo<NiagaraStateless::FSolveVelocitiesAndForcesModule_ShaderParameters>
             ::GetStructMetadata();
    FShaderParametersMetadataBuilder::AddIncludedStruct(this_00,pFVar2,Float);
  }
  pFVar2 = TShaderParameterStructTypeInfo<NiagaraStateless::FSolveVelocitiesAndForcesModule_ShaderParameters>
           ::GetStructMetadata();
  param_1->ParameterOffset = pFVar2->Size + (iVar1 + 0xfU & 0xfffffff0);
  return;
}

// GetPrivateStaticClass @ 14944c430

UClass * __cdecl UNiagaraStatelessModule_SolveVelocitiesAndForces::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_SolveVelocitiesAndForces.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_SolveVelocitiesAndForces",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_SolveVelocitiesAndForces.
                InnerSingleton,StaticRegisterNativesUNiagaraStatelessModule_SolveVelocitiesAndForces
               ,0x30,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraStatelessModule_SolveVelocitiesAndForces>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_SolveVelocitiesAndForces>,
               local_res8,UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_SolveVelocitiesAndForces.InnerSingleton;
}

// SetShaderParameters @ 1494677f0

void __thiscall
UNiagaraStatelessModule_SolveVelocitiesAndForces::SetShaderParameters
          (UNiagaraStatelessModule_SolveVelocitiesAndForces *this,
          FNiagaraStatelessSetShaderParameterContext *param_1)

{
  TTransform<float> *pTVar1;
  __m128 *p_Var2;
  float *pfVar3;
  char cVar4;
  int iVar5;
  FNiagaraStatelessSpaceTransforms *this_00;
  uchar *puVar6;
  uchar *puVar7;
  code *pcVar8;
  bool bVar9;
  FShaderParametersMetadata *pFVar10;
  FNoiseLUT *pFVar11;
  uint uVar12;
  TVector<float> *pTVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  TVector<float>_u_0 local_e8;
  TVector<float>_u_0 local_d8;
  TVector<float>_u_0 local_c8;
  undefined8 local_b8;
  float local_b0;
  TVector<float>_u_0 local_a8;
  undefined8 local_98;
  float local_90;
  undefined8 local_8c;
  float local_84;
  undefined8 local_80;
  float local_78;
  TVector<float>_u_0 local_68;
  TVector<float>_u_0 local_58 [4];
  
  uVar12 = param_1->BuiltDataOffset + 0xfU & 0xfffffff0;
  param_1->BuiltDataOffset = uVar12 + 0x120;
  if (((param_1->BuiltData).ArrayNum < (int)(uVar12 + 0x120)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("BuiltDataOffset <= BuiltData.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessSetShaderParameterContext.h"
                         ,0x22,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  this_00 = param_1->SpaceTransforms;
  puVar6 = (param_1->BuiltData).DataPtr;
  uVar14 = param_1->ParameterOffset + 0xf & 0xfffffff0;
  pFVar10 = TShaderParameterStructTypeInfo<NiagaraStateless::FSolveVelocitiesAndForcesModule_ShaderParameters>
            ::GetStructMetadata();
  FNiagaraStatelessSetShaderParameterContext::ValidateIncludeStructType(param_1,uVar14,pFVar10);
  pFVar10 = TShaderParameterStructTypeInfo<NiagaraStateless::FSolveVelocitiesAndForcesModule_ShaderParameters>
            ::GetStructMetadata();
  puVar7 = param_1->ShaderParametersBase;
  param_1->ParameterOffset = pFVar10->Size + uVar14;
  fVar15 = FNiagaraStatelessSetShaderParameterContext::GetRendererParameterValue<float>
                     (param_1,*(int *)(puVar6 + (int)uVar12),
                      (float *)(puVar6 + (longlong)(int)uVar12 + 4));
  *(float *)(puVar7 + (ulonglong)uVar14 + 4) = fVar15;
  fVar15 = 0.0;
  if (*(int *)(puVar6 + (int)uVar12) == -1) {
    fVar16 = *(float *)(puVar6 + (longlong)(int)uVar12 + 8) -
             *(float *)(puVar6 + (longlong)(int)uVar12 + 4);
  }
  else {
    fVar16 = 0.0;
  }
  *(float *)(puVar7 + uVar14) = fVar16;
  fVar16 = FNiagaraStatelessSetShaderParameterContext::GetRendererParameterValue<float>
                     (param_1,*(int *)(puVar6 + (longlong)(int)uVar12 + 0xc),
                      (float *)(puVar6 + (longlong)(int)uVar12 + 0x10));
  *(float *)(puVar7 + (ulonglong)uVar14 + 0xc) = fVar16;
  if (*(int *)(puVar6 + (longlong)(int)uVar12 + 0xc) == -1) {
    fVar16 = *(float *)(puVar6 + (longlong)(int)uVar12 + 0x14) -
             *(float *)(puVar6 + (longlong)(int)uVar12 + 0x10);
  }
  else {
    fVar16 = 0.0;
  }
  *(float *)(puVar7 + (ulonglong)uVar14 + 8) = fVar16;
  pTVar13 = (TVector<float> *)(puVar7 + (ulonglong)uVar14 + 0x20);
  FNiagaraStatelessSetShaderParameterContext::TransformVectorRangeToScaleBias
            (param_1,(FNiagaraStatelessRange<UE::Math::TVector<float>_> *)
                     (puVar6 + (longlong)(int)uVar12 + 0x1c),
             *(ENiagaraCoordinateSpace *)(puVar6 + (longlong)(int)uVar12 + 0x18),
             (TVector<float> *)(puVar7 + (ulonglong)uVar14 + 0x10),pTVar13);
  fVar16 = FNiagaraStatelessSetShaderParameterContext::GetRendererParameterValue<float>
                     (param_1,*(int *)(puVar6 + (longlong)(int)uVar12 + 0x38),
                      (float *)(puVar6 + (longlong)(int)uVar12 + 0x3c));
  *(float *)(puVar7 + (ulonglong)uVar14 + 0x10) =
       fVar16 * *(float *)(puVar7 + (ulonglong)uVar14 + 0x10);
  *(float *)(puVar7 + (ulonglong)uVar14 + 0x14) =
       fVar16 * *(float *)(puVar7 + (ulonglong)uVar14 + 0x14);
  *(float *)(puVar7 + (ulonglong)uVar14 + 0x18) =
       fVar16 * *(float *)(puVar7 + (ulonglong)uVar14 + 0x18);
  (pTVar13->field0_0x0)._s_0.X = fVar16 * (pTVar13->field0_0x0)._s_0.X;
  (pTVar13->field0_0x0)._s_0.Y = fVar16 * (pTVar13->field0_0x0)._s_0.Y;
  (pTVar13->field0_0x0)._s_0.Z = fVar16 * (pTVar13->field0_0x0)._s_0.Z;
  FNiagaraStatelessSetShaderParameterContext::TransformVectorRangeToScaleBias
            (param_1,(FNiagaraStatelessRange<UE::Math::TVector<float>_> *)
                     (puVar6 + (longlong)(int)uVar12 + 0x48),
             *(ENiagaraCoordinateSpace *)(puVar6 + (longlong)(int)uVar12 + 0x44),
             (TVector<float> *)(puVar7 + (ulonglong)uVar14 + 0x30),
             (TVector<float> *)(puVar7 + (ulonglong)uVar14 + 0x40));
  FNiagaraStatelessSetShaderParameterContext::ConvertRangeToScaleBias<UE::Math::TVector<float>_>
            (param_1,(FNiagaraStatelessRange<UE::Math::TVector<float>_> *)
                     (puVar6 + (longlong)(int)uVar12 + 0x68),(TVector<float> *)&local_c8._s_0,
             (TVector<float> *)&local_a8._s_0);
  FNiagaraStatelessSetShaderParameterContext::ConvertRangeToScaleBias<UE::Math::TVector<float>_>
            (param_1,(FNiagaraStatelessRange<UE::Math::TVector<float>_> *)
                     (puVar6 + (longlong)(int)uVar12 + 0x84),(TVector<float> *)&local_e8._s_0,
             (TVector<float> *)&local_d8._s_0);
  iVar5 = *(int *)(puVar6 + (longlong)(int)uVar12 + 100);
  if (((iVar5 < 0) || (2 < iVar5)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("int(SourceSpace) >= 0 && int(SourceSpace) < TransformRemapSize && int(DestinationSpace) >= 0 && int(DestinationSpace) < TransformRemapSize"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\NiagaraStatelessCommon.cpp"
                         ,0x45,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  cVar4 = this_00->TransformRemap[iVar5][0];
  if (cVar4 != -1) {
    pTVar1 = this_00->Transforms + cVar4;
    fVar16 = (pTVar1->Rotation).m128_f32[0];
    fVar27 = (pTVar1->Rotation).m128_f32[1];
    fVar28 = (pTVar1->Rotation).m128_f32[2];
    fVar29 = (pTVar1->Rotation).m128_f32[3];
    p_Var2 = &this_00->Transforms[cVar4].Scale3D;
    fVar26 = (float)local_c8._0_8_ * p_Var2->m128_f32[0];
    fVar17 = (float)((ulonglong)local_c8._0_8_ >> 0x20) * p_Var2->m128_f32[1];
    fVar18 = local_c8._s_0.Z * p_Var2->m128_f32[2];
    fVar21 = fVar17 * fVar16 - fVar26 * fVar27;
    fVar22 = fVar18 * fVar27 - fVar17 * fVar28;
    fVar24 = fVar26 * fVar28 - fVar18 * fVar16;
    fVar22 = fVar22 + fVar22;
    fVar24 = fVar24 + fVar24;
    fVar21 = fVar21 + fVar21;
    local_c8._s_0.Z = fVar29 * fVar21 + fVar18 + (fVar24 * fVar16 - fVar22 * fVar27);
    local_c8._0_8_ =
         CONCAT44(fVar29 * fVar24 + fVar17 + (fVar22 * fVar28 - fVar21 * fVar16),
                  fVar29 * fVar22 + fVar26 + (fVar21 * fVar27 - fVar24 * fVar28));
    local_b8 = local_c8._0_8_;
    local_b0 = local_c8._s_0.Z;
  }
  *(undefined8 *)(puVar7 + (ulonglong)uVar14 + 0x50) = local_c8._0_8_;
  *(undefined4 *)(puVar7 + (ulonglong)uVar14 + 0x58) = local_c8._s_0.Z;
  iVar5 = *(int *)(puVar6 + (longlong)(int)uVar12 + 100);
  if (((iVar5 < 0) || (2 < iVar5)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("int(SourceSpace) >= 0 && int(SourceSpace) < TransformRemapSize && int(DestinationSpace) >= 0 && int(DestinationSpace) < TransformRemapSize"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\NiagaraStatelessCommon.cpp"
                         ,0x45,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  cVar4 = this_00->TransformRemap[iVar5][0];
  if (cVar4 != -1) {
    pTVar1 = this_00->Transforms + cVar4;
    fVar16 = (pTVar1->Rotation).m128_f32[0];
    fVar27 = (pTVar1->Rotation).m128_f32[1];
    fVar28 = (pTVar1->Rotation).m128_f32[2];
    fVar29 = (pTVar1->Rotation).m128_f32[3];
    p_Var2 = &this_00->Transforms[cVar4].Scale3D;
    fVar26 = (float)local_a8._0_8_ * p_Var2->m128_f32[0];
    fVar17 = (float)((ulonglong)local_a8._0_8_ >> 0x20) * p_Var2->m128_f32[1];
    fVar18 = local_a8._s_0.Z * p_Var2->m128_f32[2];
    fVar21 = fVar17 * fVar16 - fVar26 * fVar27;
    fVar22 = fVar18 * fVar27 - fVar17 * fVar28;
    fVar24 = fVar26 * fVar28 - fVar18 * fVar16;
    fVar22 = fVar22 + fVar22;
    fVar24 = fVar24 + fVar24;
    fVar21 = fVar21 + fVar21;
    local_a8._s_0.Z = fVar29 * fVar21 + fVar18 + (fVar24 * fVar16 - fVar22 * fVar27);
    local_a8._0_8_ =
         CONCAT44(fVar29 * fVar24 + fVar17 + (fVar22 * fVar28 - fVar21 * fVar16),
                  fVar29 * fVar22 + fVar26 + (fVar21 * fVar27 - fVar24 * fVar28));
    local_98 = local_a8._0_8_;
    local_90 = local_a8._s_0.Z;
  }
  *(undefined8 *)(puVar7 + (ulonglong)uVar14 + 0x60) = local_a8._0_8_;
  *(undefined4 *)(puVar7 + (ulonglong)uVar14 + 0x68) = local_a8._s_0.Z;
  cVar4 = this_00->TransformRemap[1][0];
  if (cVar4 != -1) {
    pTVar1 = this_00->Transforms + cVar4;
    fVar16 = (pTVar1->Rotation).m128_f32[0];
    fVar27 = (pTVar1->Rotation).m128_f32[1];
    fVar28 = (pTVar1->Rotation).m128_f32[2];
    fVar29 = (pTVar1->Rotation).m128_f32[3];
    p_Var2 = &this_00->Transforms[cVar4].Scale3D;
    fVar26 = (float)local_e8._0_8_ * p_Var2->m128_f32[0];
    fVar17 = (float)((ulonglong)local_e8._0_8_ >> 0x20) * p_Var2->m128_f32[1];
    fVar18 = local_e8._s_0.Z * p_Var2->m128_f32[2];
    fVar21 = fVar17 * fVar16 - fVar26 * fVar27;
    fVar22 = fVar18 * fVar27 - fVar17 * fVar28;
    fVar24 = fVar26 * fVar28 - fVar18 * fVar16;
    fVar22 = fVar22 + fVar22;
    fVar24 = fVar24 + fVar24;
    fVar21 = fVar21 + fVar21;
    local_e8._s_0.Z = fVar29 * fVar21 + fVar18 + (fVar24 * fVar16 - fVar22 * fVar27);
    local_e8._0_8_ =
         CONCAT44(fVar29 * fVar24 + fVar17 + (fVar22 * fVar28 - fVar21 * fVar16),
                  fVar29 * fVar22 + fVar26 + (fVar21 * fVar27 - fVar24 * fVar28));
    local_8c = local_e8._0_8_;
    local_84 = local_e8._s_0.Z;
  }
  *(undefined8 *)(puVar7 + (ulonglong)uVar14 + 0x70) = local_e8._0_8_;
  *(undefined4 *)(puVar7 + (ulonglong)uVar14 + 0x78) = local_e8._s_0.Z;
  cVar4 = this_00->TransformRemap[1][0];
  if (cVar4 != -1) {
    pTVar1 = this_00->Transforms + cVar4;
    fVar16 = (pTVar1->Rotation).m128_f32[0];
    fVar27 = (pTVar1->Rotation).m128_f32[1];
    fVar28 = (pTVar1->Rotation).m128_f32[2];
    fVar29 = (pTVar1->Rotation).m128_f32[3];
    p_Var2 = &this_00->Transforms[cVar4].Scale3D;
    fVar26 = (float)local_d8._0_8_ * p_Var2->m128_f32[0];
    fVar17 = (float)((ulonglong)local_d8._0_8_ >> 0x20) * p_Var2->m128_f32[1];
    fVar18 = local_d8._s_0.Z * p_Var2->m128_f32[2];
    fVar21 = fVar17 * fVar16 - fVar26 * fVar27;
    fVar22 = fVar18 * fVar27 - fVar17 * fVar28;
    fVar24 = fVar26 * fVar28 - fVar18 * fVar16;
    fVar22 = fVar22 + fVar22;
    fVar24 = fVar24 + fVar24;
    fVar21 = fVar21 + fVar21;
    local_d8._s_0.Z = fVar29 * fVar21 + fVar18 + (fVar24 * fVar16 - fVar22 * fVar27);
    local_d8._0_8_ =
         CONCAT44(fVar29 * fVar24 + fVar17 + (fVar22 * fVar28 - fVar21 * fVar16),
                  fVar29 * fVar22 + fVar26 + (fVar21 * fVar27 - fVar24 * fVar28));
    local_80 = local_d8._0_8_;
    local_78 = local_d8._s_0.Z;
  }
  *(undefined8 *)(puVar7 + (ulonglong)uVar14 + 0x80) = local_d8._0_8_;
  *(undefined4 *)(puVar7 + (ulonglong)uVar14 + 0x88) = local_d8._s_0.Z;
  *(uint *)(puVar7 + (ulonglong)uVar14 + 0x8c) =
       (uint)(puVar6[(longlong)(int)uVar12 + 0xa0] != '\0');
  iVar5 = *(int *)(puVar6 + (longlong)(int)uVar12 + 0xa4);
  pfVar3 = (float *)(puVar6 + (longlong)(int)uVar12 + 0xb0);
  fVar16 = *pfVar3;
  fVar27 = pfVar3[1];
  fVar28 = pfVar3[2];
  fVar29 = pfVar3[3];
  if (((iVar5 < 0) || (2 < iVar5)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("int(SourceSpace) >= 0 && int(SourceSpace) < TransformRemapSize && int(DestinationSpace) >= 0 && int(DestinationSpace) < TransformRemapSize"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\NiagaraStatelessCommon.cpp"
                         ,0x37,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  cVar4 = this_00->TransformRemap[iVar5][0];
  if (cVar4 != -1) {
    pTVar1 = this_00->Transforms + cVar4;
    fVar21 = (pTVar1->Rotation).m128_f32[0];
    fVar22 = (pTVar1->Rotation).m128_f32[1];
    fVar24 = (pTVar1->Rotation).m128_f32[2];
    fVar26 = (pTVar1->Rotation).m128_f32[3];
    fVar19 = fVar21 * fVar27;
    fVar20 = fVar21 * fVar16;
    fVar23 = fVar24 * fVar16;
    fVar25 = fVar24 * fVar28;
    fVar17 = fVar22 * fVar16;
    fVar18 = fVar22 * fVar27;
    fVar16 = fVar21 * fVar29 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0] +
             fVar26 * fVar16 +
             fVar22 * fVar28 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0] +
             fVar24 * fVar27 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
    fVar27 = fVar21 * fVar28 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1] +
             fVar26 * fVar27 +
             fVar22 * fVar29 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1] +
             fVar23 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
    fVar28 = fVar19 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2] + fVar26 * fVar28 +
             fVar17 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2] +
             fVar24 * fVar29 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
    fVar29 = fVar20 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3] + fVar26 * fVar29 +
             fVar18 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3] +
             fVar25 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
  }
  pfVar3 = (float *)(puVar7 + (ulonglong)uVar14 + 0x90);
  *pfVar3 = fVar16;
  pfVar3[1] = fVar27;
  pfVar3[2] = fVar28;
  pfVar3[3] = fVar29;
  fVar16 = FNiagaraStatelessSetShaderParameterContext::GetRendererParameterValue<float>
                     (param_1,*(int *)(puVar6 + (longlong)(int)uVar12 + 0xc0),
                      (float *)(puVar6 + (longlong)(int)uVar12 + 0xc4));
  *(float *)(puVar7 + (ulonglong)uVar14 + 0xa4) = fVar16;
  if (*(int *)(puVar6 + (longlong)(int)uVar12 + 0xc0) == -1) {
    fVar16 = *(float *)(puVar6 + (longlong)(int)uVar12 + 200) -
             *(float *)(puVar6 + (longlong)(int)uVar12 + 0xc4);
  }
  else {
    fVar16 = 0.0;
  }
  *(float *)(puVar7 + (ulonglong)uVar14 + 0xa0) = fVar16;
  *(float *)(puVar7 + (ulonglong)uVar14 + 0xa8) =
       (*(float *)(puVar6 + (longlong)(int)uVar12 + 0xcc) -
       *(float *)(puVar6 + (longlong)(int)uVar12 + 0xd0)) * __real_3c0efa35;
  *(float *)(puVar7 + (ulonglong)uVar14 + 0xac) =
       *(float *)(puVar6 + (longlong)(int)uVar12 + 0xd0) * __real_3c0efa35;
  *(undefined4 *)(puVar7 + (ulonglong)uVar14 + 0xb0) =
       *(undefined4 *)(puVar6 + (longlong)(int)uVar12 + 0xd4);
  *(uint *)(puVar7 + (ulonglong)uVar14 + 0xb4) =
       (uint)(puVar6[(longlong)(int)uVar12 + 0xd8] != '\0');
  fVar16 = FNiagaraStatelessSetShaderParameterContext::GetRendererParameterValue<float>
                     (param_1,*(int *)(puVar6 + (longlong)(int)uVar12 + 0xe0),
                      (float *)(puVar6 + (longlong)(int)uVar12 + 0xe4));
  *(float *)(puVar7 + (ulonglong)uVar14 + 0xbc) = fVar16;
  if (*(int *)(puVar6 + (longlong)(int)uVar12 + 0xe0) == -1) {
    fVar15 = *(float *)(puVar6 + (longlong)(int)uVar12 + 0xe8) -
             *(float *)(puVar6 + (longlong)(int)uVar12 + 0xe4);
  }
  *(float *)(puVar7 + (ulonglong)uVar14 + 0xb8) = fVar15;
  local_68._s_0.Z = (float)*(undefined4 *)(puVar6 + (longlong)(int)uVar12 + 0xf8);
  local_68._0_8_ = *(undefined8 *)(puVar6 + (longlong)(int)uVar12 + 0xf0);
  FNiagaraStatelessSpaceTransforms::TransformPosition
            (this_00,(TVector<float> *)&local_58[0]._s_0,
             *(ENiagaraCoordinateSpace *)(puVar6 + (longlong)(int)uVar12 + 0xdc),Simulation,
             (TVector<float> *)&local_68._s_0);
  *(undefined8 *)(puVar7 + (ulonglong)uVar14 + 0xc0) = local_58[0]._0_8_;
  *(undefined4 *)(puVar7 + (ulonglong)uVar14 + 200) = local_58[0]._s_0.Z;
  pFVar11 = NiagaraStateless::FNoiseLUT::GetGlobalLUT();
  if (((pFVar11->LUTRows & pFVar11->LUTRows - 1) != 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("FMath::IsPowerOfTwo(NoiseLUT.GetNumRows())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\Modules\\NiagaraStatelessModule_SolveVelocitiesAndForces.cpp"
                         ,0xe8,L"Noise LUT must be PoT"), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  *(uint *)(puVar7 + (ulonglong)uVar14 + 0xcc) =
       (uint)(puVar6[(longlong)(int)uVar12 + 0xfc] != '\0');
  *(undefined4 *)(puVar7 + (ulonglong)uVar14 + 0xd0) =
       *(undefined4 *)(puVar6 + (longlong)(int)uVar12 + 0x100);
  *(float *)(puVar7 + (ulonglong)uVar14 + 0xd4) =
       *(float *)(puVar6 + (longlong)(int)uVar12 + 0x104) /
       NiagaraStatelessModuleSolveVelocitiesAndForcesPrivate::GFrequencyNormalize;
  *(float *)(puVar7 + (ulonglong)uVar14 + 0xd8) =
       (*(float *)(puVar6 + (longlong)(int)uVar12 + 0x104) /
       NiagaraStatelessModuleSolveVelocitiesAndForcesPrivate::GFrequencyNormalize) *
       NiagaraStatelessModuleSolveVelocitiesAndForcesPrivate::GFrequencyLUTNormalize;
  *(uint *)(puVar7 + (ulonglong)uVar14 + 0xdc) = pFVar11->LUTRows - 1;
  *(uint *)(puVar7 + (ulonglong)uVar14 + 0xe0) = pFVar11->LUTRowWidth;
  *(FRHIShaderResourceView **)(puVar7 + (ulonglong)uVar14 + 0xe8) = (pFVar11->GpuData).SRV.Reference
  ;
  return;
}

// StaticRegisterNativesUNiagaraStatelessModule_SolveVelocitiesAndForces @ 149469e30

void __cdecl
UNiagaraStatelessModule_SolveVelocitiesAndForces::
StaticRegisterNativesUNiagaraStatelessModule_SolveVelocitiesAndForces(void)

{
  return;
}

