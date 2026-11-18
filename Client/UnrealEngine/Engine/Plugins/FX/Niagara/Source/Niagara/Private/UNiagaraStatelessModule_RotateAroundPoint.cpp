// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 9

// StaticClass @ 149410e50

UClass * __cdecl UNiagaraStatelessModule_RotateAroundPoint::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_RotateAroundPoint.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_RotateAroundPoint",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_RotateAroundPoint.InnerSingleton,
               StaticRegisterNativesUNiagaraStatelessModule_RotateAroundPoint,0x150,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraStatelessModule_RotateAroundPoint>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_RotateAroundPoint>,local_res8,
               UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_RotateAroundPoint.InnerSingleton;
}

// UNiagaraStatelessModule_RotateAroundPoint @ 149429be0

UNiagaraStatelessModule_RotateAroundPoint * __thiscall
UNiagaraStatelessModule_RotateAroundPoint::UNiagaraStatelessModule_RotateAroundPoint
          (UNiagaraStatelessModule_RotateAroundPoint *this,FVTableHelper *param_1)

{
  float fVar1;
  
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this,param_1);
  fVar1 = __real_43b40000;
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_RotateAroundPoint__6B_;
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat(&this->Rate,fVar1);
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat(&this->Radius,__real_42c80000);
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat(&this->InitialPhase,0.0);
  this->CenterCoordinateSpace = Simulation;
  FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
            (&this->Center,&UE::Math::TVector<float>::ZeroVector);
  this->RotationCoordinateSpace = Simulation;
  FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
            (&this->RotationAxis,&UE::Math::TVector<float>::ZeroVector);
  return this;
}

// UNiagaraStatelessModule_RotateAroundPoint @ 149429c80

UNiagaraStatelessModule_RotateAroundPoint * __thiscall
UNiagaraStatelessModule_RotateAroundPoint::UNiagaraStatelessModule_RotateAroundPoint
          (UNiagaraStatelessModule_RotateAroundPoint *this)

{
  float fVar1;
  
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  fVar1 = __real_43b40000;
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_RotateAroundPoint__6B_;
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat(&this->Rate,fVar1);
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat(&this->Radius,__real_42c80000);
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat(&this->InitialPhase,0.0);
  this->CenterCoordinateSpace = Simulation;
  FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
            (&this->Center,&UE::Math::TVector<float>::ZeroVector);
  this->RotationCoordinateSpace = Simulation;
  FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
            (&this->RotationAxis,&UE::Math::TVector<float>::ZeroVector);
  return this;
}

// ~UNiagaraStatelessModule_RotateAroundPoint @ 14942cb20

void __thiscall
UNiagaraStatelessModule_RotateAroundPoint::~UNiagaraStatelessModule_RotateAroundPoint
          (UNiagaraStatelessModule_RotateAroundPoint *this)

{
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_RotateAroundPoint__6B_;
  FInstancedStruct::Reset((FInstancedStruct *)&(this->RotationAxis)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->Center)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->InitialPhase)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->Radius)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->Rate)._padding_);
  UNiagaraStatelessModule::~UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  return;
}

// BuildEmitterData @ 149434890

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
UNiagaraStatelessModule_RotateAroundPoint::BuildEmitterData
          (UNiagaraStatelessModule_RotateAroundPoint *this,
          FNiagaraStatelessEmitterDataBuildContext *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  undefined8 uVar9;
  undefined1 local_38 [16];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  pTVar1 = param_1->BuiltData;
  uVar7 = pTVar1->ArrayNum + 3U & 0xfffffffc;
  iVar6 = (uVar7 - pTVar1->ArrayNum) + 0x6c;
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar6,&pTVar1->AllocatorInstance,&pTVar1->ArrayNum,&pTVar1->ArrayMax);
  memset((pTVar1->AllocatorInstance).Data + iVar4,0,(longlong)iVar6);
  pFVar2 = (param_1->BuiltData->AllocatorInstance).Data;
  *(undefined8 *)(pFVar2 + (longlong)(int)uVar7 + 0x2c) = 0;
  *(undefined8 *)(pFVar2 + (longlong)(int)uVar7 + 0x2c + 8) = 0;
  *(undefined8 *)(pFVar2 + (longlong)(int)uVar7 + 0x3c) = 0;
  *(undefined8 *)(pFVar2 + (longlong)(int)uVar7 + 0x3c + 8) = 0;
  *(undefined8 *)(pFVar2 + (longlong)(int)uVar7 + 0x4c) = 0;
  *(undefined8 *)(pFVar2 + (longlong)(int)uVar7 + 0x4c + 8) = 0;
  *(undefined8 *)(pFVar2 + (longlong)(int)uVar7 + 0x5c) = 0;
  *(undefined8 *)(pFVar2 + (longlong)(int)uVar7 + 0x5c + 8) = 0;
  *(undefined4 *)(pFVar2 + (int)uVar7) = 0xffffffff;
  *(undefined8 *)(pFVar2 + (longlong)(int)uVar7 + 4) = 0;
  *(undefined4 *)(pFVar2 + (longlong)(int)uVar7 + 0xc) = 0xffffffff;
  *(undefined8 *)(pFVar2 + (longlong)(int)uVar7 + 0x10) = 0;
  *(undefined4 *)(pFVar2 + (longlong)(int)uVar7 + 0x18) = 0xffffffff;
  *(undefined8 *)(pFVar2 + (longlong)(int)uVar7 + 0x1c) = 0;
  *(undefined4 *)(pFVar2 + (longlong)(int)uVar7 + 0x24) = 0;
  *(undefined4 *)(pFVar2 + (longlong)(int)uVar7 + 0x28) = 0xffffffff;
  *(undefined8 *)(pFVar2 + (longlong)(int)uVar7 + 0x2c) =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  *(float *)(pFVar2 + (longlong)(int)uVar7 + 0x34) =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)(pFVar2 + (longlong)(int)uVar7 + 0x38) =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  *(float *)(pFVar2 + (longlong)(int)uVar7 + 0x40) =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)(pFVar2 + (longlong)(int)uVar7 + 0x44) = 0;
  *(undefined4 *)(pFVar2 + (longlong)(int)uVar7 + 0x48) = 0xffffffff;
  *(undefined8 *)(pFVar2 + (longlong)(int)uVar7 + 0x4c) =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  *(float *)(pFVar2 + (longlong)(int)uVar7 + 0x54) =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)(pFVar2 + (longlong)(int)uVar7 + 0x58) =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  *(float *)(pFVar2 + (longlong)(int)uVar7 + 0x60) =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)(pFVar2 + (longlong)(int)uVar7 + 100) = 0xffffffffffffffff;
  bVar3 = UNiagaraStatelessModule::IsModuleEnabled((UNiagaraStatelessModule *)this);
  if (bVar3) {
    iVar4 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                      (param_1,&NiagaraStatelessCommon::GGlobals.PositionVariable);
    *(int *)(pFVar2 + (longlong)(int)uVar7 + 100) = iVar4;
    iVar4 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                      (param_1,&NiagaraStatelessCommon::GGlobals.PreviousPositionVariable);
    *(int *)(pFVar2 + (longlong)(int)uVar7 + 0x68) = iVar4;
    if ((*(int *)(pFVar2 + (longlong)(int)uVar7 + 100) != -1) || (iVar4 != -1)) {
      fVar5 = (this->Rate).Min;
      fVar8 = fVar5;
      if ((char)(this->Rate)._padding_ != '\x03') {
        fVar8 = (this->Rate).Max;
      }
      *(undefined4 *)(pFVar2 + (int)uVar7) = 0xffffffff;
      *(float *)(pFVar2 + (longlong)(int)uVar7 + 4) = fVar5;
      *(float *)(pFVar2 + (longlong)(int)uVar7 + 8) = fVar8;
      fVar5 = (this->Radius).Min;
      fVar8 = fVar5;
      if ((char)(this->Radius)._padding_ != '\x03') {
        fVar8 = (this->Radius).Max;
      }
      *(undefined4 *)(pFVar2 + (longlong)(int)uVar7 + 0xc) = 0xffffffff;
      *(float *)(pFVar2 + (longlong)(int)uVar7 + 0x10) = fVar5;
      *(float *)(pFVar2 + (longlong)(int)uVar7 + 0x14) = fVar8;
      fVar5 = (this->InitialPhase).Min;
      fVar8 = fVar5;
      if ((char)(this->InitialPhase)._padding_ != '\x03') {
        fVar8 = (this->InitialPhase).Max;
      }
      *(undefined4 *)(pFVar2 + (longlong)(int)uVar7 + 0x18) = 0xffffffff;
      *(float *)(pFVar2 + (longlong)(int)uVar7 + 0x1c) = fVar5;
      *(float *)(pFVar2 + (longlong)(int)uVar7 + 0x20) = fVar8;
      *(ENiagaraCoordinateSpace *)(pFVar2 + (longlong)(int)uVar7 + 0x24) =
           this->CenterCoordinateSpace;
      uVar9 = *(undefined8 *)&(this->Center).Min.field0_0x0;
      fVar5 = (this->Center).Min.field0_0x0._s_0.Z;
      local_38._4_4_ = (undefined4)uVar9;
      local_38._8_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
      fVar8 = fVar5;
      if ((char)(this->Center)._padding_ != '\x03') {
        uVar9 = *(undefined8 *)&(this->Center).Max.field0_0x0;
        fVar8 = (this->Center).Max.field0_0x0._s_0.Z;
      }
      *(ulonglong *)(pFVar2 + (longlong)(int)uVar7 + 0x28) = CONCAT44(local_38._4_4_,0xffffffff);
      *(ulonglong *)(pFVar2 + (longlong)(int)uVar7 + 0x28 + 8) = CONCAT44(fVar5,local_38._8_4_);
      *(undefined8 *)(pFVar2 + (longlong)(int)uVar7 + 0x38) = uVar9;
      *(float *)(pFVar2 + (longlong)(int)uVar7 + 0x40) = fVar8;
      *(ENiagaraCoordinateSpace *)(pFVar2 + (longlong)(int)uVar7 + 0x44) =
           this->RotationCoordinateSpace;
      uVar9 = *(undefined8 *)&(this->RotationAxis).Min.field0_0x0;
      local_38._12_4_ = (this->RotationAxis).Min.field0_0x0._s_0.Z;
      local_38._4_4_ = (undefined4)uVar9;
      local_38._8_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
      fVar5 = (float)local_38._12_4_;
      if ((char)(this->RotationAxis)._padding_ != '\x03') {
        uVar9 = *(undefined8 *)&(this->RotationAxis).Max.field0_0x0;
        fVar5 = (this->RotationAxis).Max.field0_0x0._s_0.Z;
      }
      local_10 = 0;
      *(ulonglong *)(pFVar2 + (longlong)(int)uVar7 + 0x48) = CONCAT44(local_38._4_4_,0xffffffff);
      *(ulonglong *)(pFVar2 + (longlong)(int)uVar7 + 0x48 + 8) =
           CONCAT44(local_38._12_4_,local_38._8_4_);
      *(undefined8 *)(pFVar2 + (longlong)(int)uVar7 + 0x58) = uVar9;
      *(float *)(pFVar2 + (longlong)(int)uVar7 + 0x60) = fVar5;
      local_28 = &
                 ___7__TFunction_OwnedObject_P6AXAEBVFParticleSimulationContext_NiagaraStateless___Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      local_20 = NSMRotateAroundPointPrivate::ParticleSimulate;
      local_38._0_4_ = 0x4943dba0;
      local_38._4_4_ = 1;
      FNiagaraStatelessEmitterDataBuildContext::AddParticleSimulationExecSimulate
                (param_1,(TFunction<void___cdecl(NiagaraStateless::FParticleSimulationContext_const_&)>
                          *)local_38);
    }
  }
  return;
}

// BuildShaderParameters @ 14943a970

void __thiscall
UNiagaraStatelessModule_RotateAroundPoint::BuildShaderParameters
          (UNiagaraStatelessModule_RotateAroundPoint *this,
          FNiagaraStatelessShaderParametersBuilder *param_1)

{
  int iVar1;
  FShaderParametersMetadataBuilder *this_00;
  FShaderParametersMetadata *pFVar2;
  
  iVar1 = param_1->ParameterOffset;
  this_00 = param_1->MetadataBuilder;
  if (this_00 != (FShaderParametersMetadataBuilder *)0x0) {
    pFVar2 = TShaderParameterStructTypeInfo<NiagaraStateless::FRotateAroundPointModule_ShaderParameters>
             ::GetStructMetadata();
    FShaderParametersMetadataBuilder::AddIncludedStruct(this_00,pFVar2,Float);
  }
  pFVar2 = TShaderParameterStructTypeInfo<NiagaraStateless::FRotateAroundPointModule_ShaderParameters>
           ::GetStructMetadata();
  param_1->ParameterOffset = pFVar2->Size + (iVar1 + 0xfU & 0xfffffff0);
  return;
}

// GetPrivateStaticClass @ 14944be30

UClass * __cdecl UNiagaraStatelessModule_RotateAroundPoint::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_RotateAroundPoint.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_RotateAroundPoint",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_RotateAroundPoint.InnerSingleton,
               StaticRegisterNativesUNiagaraStatelessModule_RotateAroundPoint,0x150,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraStatelessModule_RotateAroundPoint>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_RotateAroundPoint>,local_res8,
               UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_RotateAroundPoint.InnerSingleton;
}

// SetShaderParameters @ 149466040

void __thiscall
UNiagaraStatelessModule_RotateAroundPoint::SetShaderParameters
          (UNiagaraStatelessModule_RotateAroundPoint *this,
          FNiagaraStatelessSetShaderParameterContext *param_1)

{
  TVector<float> *pTVar1;
  uchar *puVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  FShaderParametersMetadata *pFVar6;
  uint uVar7;
  float *pfVar8;
  uint uVar9;
  float fVar10;
  
  uVar7 = param_1->ParameterOffset + 0xf & 0xfffffff0;
  pFVar6 = TShaderParameterStructTypeInfo<NiagaraStateless::FRotateAroundPointModule_ShaderParameters>
           ::GetStructMetadata();
  FNiagaraStatelessSetShaderParameterContext::ValidateIncludeStructType(param_1,uVar7,pFVar6);
  pFVar6 = TShaderParameterStructTypeInfo<NiagaraStateless::FRotateAroundPointModule_ShaderParameters>
           ::GetStructMetadata();
  uVar9 = param_1->BuiltDataOffset + 3U & 0xfffffffc;
  pfVar8 = (float *)(param_1->ShaderParametersBase + uVar7);
  param_1->ParameterOffset = pFVar6->Size + uVar7;
  param_1->BuiltDataOffset = uVar9 + 0x6c;
  if ((param_1->BuiltData).ArrayNum < (int)(uVar9 + 0x6c)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("BuiltDataOffset <= BuiltData.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessSetShaderParameterContext.h"
                       ,0x22,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  puVar2 = (param_1->BuiltData).DataPtr;
  *pfVar8 = (*(float *)(puVar2 + (longlong)(int)uVar9 + 8) -
            *(float *)(puVar2 + (longlong)(int)uVar9 + 4)) * __real_3c8efa35;
  pfVar8[1] = *(float *)(puVar2 + (longlong)(int)uVar9 + 4) * __real_3c8efa35;
  pfVar8[2] = *(float *)(puVar2 + (longlong)(int)uVar9 + 0x14) -
              *(float *)(puVar2 + (longlong)(int)uVar9 + 0x10);
  pfVar8[3] = *(float *)(puVar2 + (longlong)(int)uVar9 + 0x10);
  pfVar8[4] = *(float *)(puVar2 + (longlong)(int)uVar9 + 0x20) -
              *(float *)(puVar2 + (longlong)(int)uVar9 + 0x1c);
  pfVar8[5] = *(float *)(puVar2 + (longlong)(int)uVar9 + 0x1c);
  FNiagaraStatelessSetShaderParameterContext::TransformPositionRangeToScaleBias
            (param_1,(FNiagaraStatelessRange<UE::Math::TVector<float>_> *)
                     (puVar2 + (longlong)(int)uVar9 + 0x28),
             *(ENiagaraCoordinateSpace *)(puVar2 + (longlong)(int)uVar9 + 0x24),
             (TVector<float> *)(pfVar8 + 8),(TVector<float> *)(pfVar8 + 0xc));
  pTVar1 = (TVector<float> *)(pfVar8 + 0x14);
  FNiagaraStatelessSetShaderParameterContext::TransformRotationRangeToScaleBias
            (param_1,(FNiagaraStatelessRange<UE::Math::TVector<float>_> *)
                     (puVar2 + (longlong)(int)uVar9 + 0x48),
             *(ENiagaraCoordinateSpace *)(puVar2 + (longlong)(int)uVar9 + 0x44),
             (TVector<float> *)(pfVar8 + 0x10),pTVar1);
  fVar4 = __real_3b360b61;
  fVar10 = pfVar8[0x12] * __real_3b360b61;
  pfVar8[0x10] = pfVar8[0x10] * __real_3b360b61;
  pfVar8[0x12] = fVar10;
  pfVar8[0x11] = pfVar8[0x11] * fVar4;
  fVar10 = pfVar8[0x15];
  (pTVar1->field0_0x0)._s_0.X = (pTVar1->field0_0x0)._s_0.X * fVar4;
  pfVar8[0x15] = fVar10 * fVar4;
  pfVar8[0x16] = pfVar8[0x16] * fVar4;
  return;
}

// StaticRegisterNativesUNiagaraStatelessModule_RotateAroundPoint @ 149469d20

void __cdecl
UNiagaraStatelessModule_RotateAroundPoint::
StaticRegisterNativesUNiagaraStatelessModule_RotateAroundPoint(void)

{
  return;
}

