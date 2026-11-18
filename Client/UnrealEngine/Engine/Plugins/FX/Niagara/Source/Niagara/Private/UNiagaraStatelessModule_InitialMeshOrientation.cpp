// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 9

// StaticClass @ 14940b5a0

UClass * __cdecl UNiagaraStatelessModule_InitialMeshOrientation::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_InitialMeshOrientation.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_InitialMeshOrientation",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_InitialMeshOrientation.
                InnerSingleton,StaticRegisterNativesUNiagaraStatelessModule_InitialMeshOrientation,
               0xf8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraStatelessModule_InitialMeshOrientation>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_InitialMeshOrientation>,
               local_res8,UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_InitialMeshOrientation.InnerSingleton;
}

// UNiagaraStatelessModule_InitialMeshOrientation @ 149429560

UNiagaraStatelessModule_InitialMeshOrientation * __thiscall
UNiagaraStatelessModule_InitialMeshOrientation::UNiagaraStatelessModule_InitialMeshOrientation
          (UNiagaraStatelessModule_InitialMeshOrientation *this,FVTableHelper *param_1)

{
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this,param_1);
  this->MeshOrientationMode = None;
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_InitialMeshOrientation__6B_;
  FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
            (&this->OrientationVector,&UE::Math::TVector<float>::XAxisVector);
  FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
            (&this->MeshAxisToOrient,&UE::Math::TVector<float>::XAxisVector);
  FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
            (&this->Rotation,&UE::Math::TVector<float>::ZeroVector);
  return this;
}

// UNiagaraStatelessModule_InitialMeshOrientation @ 1494295d0

UNiagaraStatelessModule_InitialMeshOrientation * __thiscall
UNiagaraStatelessModule_InitialMeshOrientation::UNiagaraStatelessModule_InitialMeshOrientation
          (UNiagaraStatelessModule_InitialMeshOrientation *this)

{
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  this->MeshOrientationMode = None;
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_InitialMeshOrientation__6B_;
  FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
            (&this->OrientationVector,&UE::Math::TVector<float>::XAxisVector);
  FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
            (&this->MeshAxisToOrient,&UE::Math::TVector<float>::XAxisVector);
  FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
            (&this->Rotation,&UE::Math::TVector<float>::ZeroVector);
  return this;
}

// ~UNiagaraStatelessModule_InitialMeshOrientation @ 14942c8d0

void __thiscall
UNiagaraStatelessModule_InitialMeshOrientation::~UNiagaraStatelessModule_InitialMeshOrientation
          (UNiagaraStatelessModule_InitialMeshOrientation *this)

{
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_InitialMeshOrientation__6B_;
  FInstancedStruct::Reset((FInstancedStruct *)&(this->Rotation)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->MeshAxisToOrient)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->OrientationVector)._padding_);
  UNiagaraStatelessModule::~UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  return;
}

// BuildEmitterData @ 149433310

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
UNiagaraStatelessModule_InitialMeshOrientation::BuildEmitterData
          (UNiagaraStatelessModule_InitialMeshOrientation *this,
          FNiagaraStatelessEmitterDataBuildContext *param_1)

{
  char cVar1;
  ENSMInitialMeshOrientationMode EVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined1 local_58 [16];
  undefined **local_48;
  code *local_40;
  undefined8 local_30;
  
  pTVar3 = param_1->BuiltData;
  uVar8 = pTVar3->ArrayNum + 3U & 0xfffffffc;
  iVar7 = (uVar8 - pTVar3->ArrayNum) + 0x60;
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar7,&pTVar3->AllocatorInstance,&pTVar3->ArrayNum,&pTVar3->ArrayMax);
  memset((pTVar3->AllocatorInstance).Data + iVar6,0,(longlong)iVar7);
  pFVar4 = (param_1->BuiltData->AllocatorInstance).Data;
  *(undefined4 *)(pFVar4 + (int)uVar8) = 0;
  *(undefined4 *)(pFVar4 + (longlong)(int)uVar8 + 4) = 0xffffffff;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar8 + 8) = 0;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar8 + 0x10) = 0;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar8 + 0x18) = 0;
  *(undefined4 *)(pFVar4 + (longlong)(int)uVar8 + 0x20) = 0xffffffff;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar8 + 0x24) = 0;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar8 + 0x2c) = 0;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar8 + 0x34) = 0;
  *(undefined4 *)(pFVar4 + (longlong)(int)uVar8 + 0x3c) = 0xffffffff;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar8 + 0x40) = 0;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar8 + 0x48) = 0;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar8 + 0x50) = 0;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar8 + 0x58) = 0xffffffffffffffff;
  iVar6 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                    (param_1,&NiagaraStatelessCommon::GGlobals.MeshOrientationVariable);
  *(int *)(pFVar4 + (longlong)(int)uVar8 + 0x58) = iVar6;
  iVar6 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                    (param_1,&NiagaraStatelessCommon::GGlobals.PreviousMeshOrientationVariable);
  *(int *)(pFVar4 + (longlong)(int)uVar8 + 0x5c) = iVar6;
  bVar5 = UNiagaraStatelessModule::IsModuleEnabled((UNiagaraStatelessModule *)this);
  uVar10 = local_58._8_4_;
  if (bVar5) {
    *(ENSMInitialMeshOrientationMode *)(pFVar4 + (int)uVar8) = this->MeshOrientationMode;
    uVar9 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    uVar11 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    EVar2 = this->MeshOrientationMode;
    local_58._4_4_ = (undefined4)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    local_58._8_4_ =
         (undefined4)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
    if (EVar2 == None) {
      cVar1 = (char)(this->Rotation)._padding_;
      local_58._12_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      if (cVar1 == '\x01') {
        local_58._0_4_ =
             FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
                       (param_1,(FNiagaraVariableBase *)((longlong)&(this->Rotation)._padding_ + 4))
        ;
      }
      else if (cVar1 == '\x02') {
        local_58._0_4_ =
             FNiagaraStatelessEmitterDataBuildContext::AddExpression
                       (param_1,(FInstancedStruct *)&(this->Rotation)._padding_);
      }
      else {
        uVar11 = *(undefined8 *)&(this->Rotation).Min.field0_0x0;
        local_58._12_4_ = (this->Rotation).Min.field0_0x0._s_0.Z;
        local_58._4_4_ = (undefined4)uVar11;
        local_58._8_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
        local_58._0_4_ = -1;
        uVar9 = local_58._12_4_;
        if (cVar1 != '\x03') {
          uVar11 = *(undefined8 *)&(this->Rotation).Max.field0_0x0;
          uVar9 = (this->Rotation).Max.field0_0x0._s_0.Z;
        }
      }
      *(ulonglong *)(pFVar4 + (longlong)(int)uVar8 + 0x3c) = CONCAT44(local_58._4_4_,local_58._0_4_)
      ;
      *(ulonglong *)(pFVar4 + (longlong)(int)uVar8 + 0x3c + 8) =
           CONCAT44(local_58._12_4_,local_58._8_4_);
      *(undefined8 *)(pFVar4 + (longlong)(int)uVar8 + 0x4c) = uVar11;
      *(undefined4 *)(pFVar4 + (longlong)(int)uVar8 + 0x54) = uVar9;
      uVar10 = local_58._8_4_;
    }
    else if (EVar2 == Random) {
      *(undefined8 *)(pFVar4 + (longlong)(int)uVar8 + 0x40) =
           UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      *(float *)(pFVar4 + (longlong)(int)uVar8 + 0x48) =
           UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      *(undefined4 *)(pFVar4 + (longlong)(int)uVar8 + 0x4c) = 0x43b40000;
      *(undefined4 *)(pFVar4 + (longlong)(int)uVar8 + 0x50) = 0x43b40000;
      *(undefined4 *)(pFVar4 + (longlong)(int)uVar8 + 0x54) = 0x43b40000;
    }
    else if (EVar2 == OrientToAxis) {
      cVar1 = (char)(this->Rotation)._padding_;
      local_58._12_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      if (cVar1 == '\x01') {
        local_58._0_4_ =
             FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
                       (param_1,(FNiagaraVariableBase *)((longlong)&(this->Rotation)._padding_ + 4))
        ;
      }
      else if (cVar1 == '\x02') {
        local_58._0_4_ =
             FNiagaraStatelessEmitterDataBuildContext::AddExpression
                       (param_1,(FInstancedStruct *)&(this->Rotation)._padding_);
      }
      else {
        uVar11 = *(undefined8 *)&(this->Rotation).Min.field0_0x0;
        local_58._12_4_ = (this->Rotation).Min.field0_0x0._s_0.Z;
        local_58._4_4_ = (undefined4)uVar11;
        local_58._8_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
        local_58._0_4_ = -1;
        uVar9 = local_58._12_4_;
        if (cVar1 != '\x03') {
          uVar11 = *(undefined8 *)&(this->Rotation).Max.field0_0x0;
          uVar9 = (this->Rotation).Max.field0_0x0._s_0.Z;
        }
      }
      *(ulonglong *)(pFVar4 + (longlong)(int)uVar8 + 0x3c) = CONCAT44(local_58._4_4_,local_58._0_4_)
      ;
      *(ulonglong *)(pFVar4 + (longlong)(int)uVar8 + 0x3c + 8) =
           CONCAT44(local_58._12_4_,local_58._8_4_);
      *(undefined8 *)(pFVar4 + (longlong)(int)uVar8 + 0x4c) = uVar11;
      *(undefined4 *)(pFVar4 + (longlong)(int)uVar8 + 0x54) = uVar9;
      uVar10 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      uVar11 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      cVar1 = (char)(this->OrientationVector)._padding_;
      local_58._4_4_ = (undefined4)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_58._8_4_ =
           (undefined4)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
      local_58._12_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      if (cVar1 == '\x01') {
        local_58._0_4_ =
             FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
                       (param_1,(FNiagaraVariableBase *)
                                ((longlong)&(this->OrientationVector)._padding_ + 4));
      }
      else if (cVar1 == '\x02') {
        local_58._0_4_ =
             FNiagaraStatelessEmitterDataBuildContext::AddExpression
                       (param_1,(FInstancedStruct *)&(this->OrientationVector)._padding_);
      }
      else {
        uVar11 = *(undefined8 *)&(this->OrientationVector).Min.field0_0x0;
        local_58._12_4_ = (this->OrientationVector).Min.field0_0x0._s_0.Z;
        local_58._4_4_ = (undefined4)uVar11;
        local_58._8_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
        local_58._0_4_ = -1;
        uVar10 = local_58._12_4_;
        if (cVar1 != '\x03') {
          uVar11 = *(undefined8 *)&(this->OrientationVector).Max.field0_0x0;
          uVar10 = (this->OrientationVector).Max.field0_0x0._s_0.Z;
        }
      }
      *(ulonglong *)(pFVar4 + (longlong)(int)uVar8 + 4) = CONCAT44(local_58._4_4_,local_58._0_4_);
      *(ulonglong *)(pFVar4 + (longlong)(int)uVar8 + 4 + 8) =
           CONCAT44(local_58._12_4_,local_58._8_4_);
      *(undefined8 *)(pFVar4 + (longlong)(int)uVar8 + 0x14) = uVar11;
      *(undefined4 *)(pFVar4 + (longlong)(int)uVar8 + 0x1c) = uVar10;
      uVar10 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      uVar11 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      cVar1 = (char)(this->MeshAxisToOrient)._padding_;
      local_58._4_4_ = (undefined4)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_58._8_4_ =
           (undefined4)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
      local_58._12_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      if (cVar1 == '\x01') {
        local_58._0_4_ =
             FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
                       (param_1,(FNiagaraVariableBase *)
                                ((longlong)&(this->MeshAxisToOrient)._padding_ + 4));
      }
      else if (cVar1 == '\x02') {
        local_58._0_4_ =
             FNiagaraStatelessEmitterDataBuildContext::AddExpression
                       (param_1,(FInstancedStruct *)&(this->MeshAxisToOrient)._padding_);
      }
      else {
        uVar11 = *(undefined8 *)&(this->MeshAxisToOrient).Min.field0_0x0;
        local_58._12_4_ = (this->MeshAxisToOrient).Min.field0_0x0._s_0.Z;
        local_58._4_4_ = (undefined4)uVar11;
        local_58._8_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
        local_58._0_4_ = -1;
        uVar10 = local_58._12_4_;
        if (cVar1 != '\x03') {
          uVar11 = *(undefined8 *)&(this->MeshAxisToOrient).Max.field0_0x0;
          uVar10 = (this->MeshAxisToOrient).Max.field0_0x0._s_0.Z;
        }
      }
      *(ulonglong *)(pFVar4 + (longlong)(int)uVar8 + 0x20) = CONCAT44(local_58._4_4_,local_58._0_4_)
      ;
      *(ulonglong *)(pFVar4 + (longlong)(int)uVar8 + 0x20 + 8) =
           CONCAT44(local_58._12_4_,local_58._8_4_);
      *(undefined8 *)(pFVar4 + (longlong)(int)uVar8 + 0x30) = uVar11;
      *(undefined4 *)(pFVar4 + (longlong)(int)uVar8 + 0x38) = uVar10;
      uVar10 = local_58._8_4_;
    }
  }
  local_58._8_4_ = uVar10;
  if ((*(int *)(pFVar4 + (longlong)(int)uVar8 + 0x58) != -1) ||
     (*(int *)(pFVar4 + (longlong)(int)uVar8 + 0x5c) != -1)) {
    local_30 = 0;
    local_48 = &
               ___7__TFunction_OwnedObject_P6AXAEBVFParticleSimulationContext_NiagaraStateless___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_40 = NSMInitialMeshOrientationPrivate::ParticleSimulate;
    local_58._0_4_ = 0x4943dba0;
    local_58._4_4_ = 1;
    FNiagaraStatelessEmitterDataBuildContext::AddParticleSimulationExecSimulate
              (param_1,(TFunction<void___cdecl(NiagaraStateless::FParticleSimulationContext_const_&)>
                        *)local_58);
  }
  return;
}

// BuildShaderParameters @ 14943a7f0

void __thiscall
UNiagaraStatelessModule_InitialMeshOrientation::BuildShaderParameters
          (UNiagaraStatelessModule_InitialMeshOrientation *this,
          FNiagaraStatelessShaderParametersBuilder *param_1)

{
  int iVar1;
  FShaderParametersMetadataBuilder *this_00;
  FShaderParametersMetadata *pFVar2;
  
  iVar1 = param_1->ParameterOffset;
  this_00 = param_1->MetadataBuilder;
  if (this_00 != (FShaderParametersMetadataBuilder *)0x0) {
    pFVar2 = TShaderParameterStructTypeInfo<NiagaraStateless::FInitialMeshOrientationModule_ShaderParameters>
             ::GetStructMetadata();
    FShaderParametersMetadataBuilder::AddIncludedStruct(this_00,pFVar2,Float);
  }
  pFVar2 = TShaderParameterStructTypeInfo<NiagaraStateless::FInitialMeshOrientationModule_ShaderParameters>
           ::GetStructMetadata();
  param_1->ParameterOffset = pFVar2->Size + (iVar1 + 0xfU & 0xfffffff0);
  return;
}

// GetPrivateStaticClass @ 14944ba70

UClass * __cdecl UNiagaraStatelessModule_InitialMeshOrientation::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_InitialMeshOrientation.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_InitialMeshOrientation",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_InitialMeshOrientation.
                InnerSingleton,StaticRegisterNativesUNiagaraStatelessModule_InitialMeshOrientation,
               0xf8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraStatelessModule_InitialMeshOrientation>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_InitialMeshOrientation>,
               local_res8,UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_InitialMeshOrientation.InnerSingleton;
}

// SetShaderParameters @ 149465bc0

void __thiscall
UNiagaraStatelessModule_InitialMeshOrientation::SetShaderParameters
          (UNiagaraStatelessModule_InitialMeshOrientation *this,
          FNiagaraStatelessSetShaderParameterContext *param_1)

{
  int iVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  FShaderParametersMetadata *pFVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = param_1->ParameterOffset + 0xf & 0xfffffff0;
  pFVar5 = TShaderParameterStructTypeInfo<NiagaraStateless::FInitialMeshOrientationModule_ShaderParameters>
           ::GetStructMetadata();
  FNiagaraStatelessSetShaderParameterContext::ValidateIncludeStructType(param_1,uVar7,pFVar5);
  pFVar5 = TShaderParameterStructTypeInfo<NiagaraStateless::FInitialMeshOrientationModule_ShaderParameters>
           ::GetStructMetadata();
  uVar6 = param_1->BuiltDataOffset + 3U & 0xfffffffc;
  puVar2 = param_1->ShaderParametersBase;
  param_1->ParameterOffset = pFVar5->Size + uVar7;
  iVar1 = uVar6 + 0x60;
  param_1->BuiltDataOffset = iVar1;
  if ((param_1->BuiltData).ArrayNum < iVar1) {
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
  NSMInitialMeshOrientationPrivate::
  ResolveRotationScaleBias<FNiagaraStatelessSetShaderParameterContext>
            (param_1,(FModuleBuiltData *)((param_1->BuiltData).DataPtr + (int)uVar6),
             (TVector<float> *)(puVar2 + uVar7),
             (TVector<float> *)((longlong)&((TVector<float> *)(puVar2 + uVar7))[1].field0_0x0 + 4));
  return;
}

// StaticRegisterNativesUNiagaraStatelessModule_InitialMeshOrientation @ 149469ca0

void __cdecl
UNiagaraStatelessModule_InitialMeshOrientation::
StaticRegisterNativesUNiagaraStatelessModule_InitialMeshOrientation(void)

{
  return;
}

