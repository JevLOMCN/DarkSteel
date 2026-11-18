// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 9

// StaticClass @ 14940d450

UClass * __cdecl UNiagaraStatelessModule_SubUVAnimation::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_SubUVAnimation.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_SubUVAnimation",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_SubUVAnimation.InnerSingleton,
               StaticRegisterNativesUNiagaraStatelessModule_SubUVAnimation,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraStatelessModule_SubUVAnimation>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_SubUVAnimation>,local_res8,
               UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_SubUVAnimation.InnerSingleton;
}

// UNiagaraStatelessModule_SubUVAnimation @ 14942a840

UNiagaraStatelessModule_SubUVAnimation * __thiscall
UNiagaraStatelessModule_SubUVAnimation::UNiagaraStatelessModule_SubUVAnimation
          (UNiagaraStatelessModule_SubUVAnimation *this,FVTableHelper *param_1)

{
  int iVar1;
  
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this,param_1);
  this->NumFrames = 0x10;
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_SubUVAnimation__6B_;
  (this->FrameIndex).Mode = UniformConstant;
  (this->FrameIndex).ParameterBinding.Name.ComparisonIndex = 0;
  (this->FrameIndex).ParameterBinding.Name.Number = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->FrameIndex).ParameterBinding.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->FrameIndex).ParameterBinding.TypeDefHandle.RegisteredTypeIndex = iVar1;
  FInstancedStruct::FInstancedStruct(&(this->FrameIndex).ParameterExpression);
  (this->FrameIndex).Min = 0;
  (this->FrameIndex).Max = 0;
  (this->FrameIndex).Mode = UniformConstant;
  this->bStartFrameRangeOverride_Enabled = false;
  this->bEndFrameRangeOverride_Enabled = false;
  this->StartFrameRangeOverride = 0;
  this->EndFrameRangeOverride = 0;
  this->AnimationMode = Linear;
  this->LoopsPerSecond = 1.0;
  this->RandomChangeInterval = 0.1;
  return this;
}

// UNiagaraStatelessModule_SubUVAnimation @ 14942a8d0

UNiagaraStatelessModule_SubUVAnimation * __thiscall
UNiagaraStatelessModule_SubUVAnimation::UNiagaraStatelessModule_SubUVAnimation
          (UNiagaraStatelessModule_SubUVAnimation *this)

{
  int iVar1;
  
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  this->NumFrames = 0x10;
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_SubUVAnimation__6B_;
  (this->FrameIndex).Mode = UniformConstant;
  (this->FrameIndex).ParameterBinding.Name.ComparisonIndex = 0;
  (this->FrameIndex).ParameterBinding.Name.Number = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->FrameIndex).ParameterBinding.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->FrameIndex).ParameterBinding.TypeDefHandle.RegisteredTypeIndex = iVar1;
  FInstancedStruct::FInstancedStruct(&(this->FrameIndex).ParameterExpression);
  (this->FrameIndex).Min = 0;
  (this->FrameIndex).Max = 0;
  (this->FrameIndex).Mode = UniformConstant;
  this->bStartFrameRangeOverride_Enabled = false;
  this->bEndFrameRangeOverride_Enabled = false;
  this->StartFrameRangeOverride = 0;
  this->EndFrameRangeOverride = 0;
  this->AnimationMode = Linear;
  this->LoopsPerSecond = 1.0;
  this->RandomChangeInterval = 0.1;
  return this;
}

// ~UNiagaraStatelessModule_SubUVAnimation @ 14942cf10

void __thiscall
UNiagaraStatelessModule_SubUVAnimation::~UNiagaraStatelessModule_SubUVAnimation
          (UNiagaraStatelessModule_SubUVAnimation *this)

{
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_SubUVAnimation__6B_;
  FInstancedStruct::Reset(&(this->FrameIndex).ParameterExpression);
  UNiagaraStatelessModule::~UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  return;
}

// BuildEmitterData @ 149436ef0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
UNiagaraStatelessModule_SubUVAnimation::BuildEmitterData
          (UNiagaraStatelessModule_SubUVAnimation *this,
          FNiagaraStatelessEmitterDataBuildContext *param_1)

{
  ENiagaraDistributionMode EVar1;
  ENSMSubUVAnimation_Mode EVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  float fVar12;
  code *local_58 [2];
  undefined **local_48;
  code *local_40;
  undefined8 local_30;
  
  pTVar3 = param_1->BuiltData;
  uVar10 = pTVar3->ArrayNum + 3U & 0xfffffffc;
  iVar9 = (uVar10 - pTVar3->ArrayNum) + 0x28;
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar9,&pTVar3->AllocatorInstance,&pTVar3->ArrayNum,&pTVar3->ArrayMax);
  memset((pTVar3->AllocatorInstance).Data + iVar6,0,(longlong)iVar9);
  iVar6 = 0;
  iVar9 = -1;
  pFVar4 = (param_1->BuiltData->AllocatorInstance).Data;
  *(undefined8 *)(pFVar4 + (int)uVar10) = 0;
  *(undefined4 *)(pFVar4 + (longlong)(int)uVar10 + 8) = 0xffffffff;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar10 + 0xc) = 0;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar10 + 0x14) = 0;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar10 + 0x1c) = 0;
  *(undefined4 *)(pFVar4 + (longlong)(int)uVar10 + 0x24) = 0xffffffff;
  bVar5 = UNiagaraStatelessModule::IsModuleEnabled((UNiagaraStatelessModule *)this);
  if (bVar5) {
    iVar7 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                      (param_1,&NiagaraStatelessCommon::GGlobals.SubImageIndexVariable);
    *(int *)(pFVar4 + (longlong)(int)uVar10 + 0x24) = iVar7;
    if ((iVar7 != -1) && (1 < this->NumFrames)) {
      iVar11 = this->NumFrames + -1;
      iVar7 = 0;
      if (this->bStartFrameRangeOverride_Enabled != false) {
        iVar8 = iVar11;
        if (this->StartFrameRangeOverride < iVar11) {
          iVar8 = this->StartFrameRangeOverride;
        }
        if (0 < iVar8) {
          iVar7 = iVar8;
        }
      }
      if (this->bEndFrameRangeOverride_Enabled != false) {
        iVar8 = iVar11;
        if (this->EndFrameRangeOverride < iVar11) {
          iVar8 = this->EndFrameRangeOverride;
        }
        iVar11 = iVar6;
        if (0 < iVar8) {
          iVar11 = iVar8;
        }
      }
      *(ENSMSubUVAnimation_Mode *)(pFVar4 + (int)uVar10) = this->AnimationMode;
      *(int *)(pFVar4 + (longlong)(int)uVar10 + 4) = (int)(float)this->NumFrames;
      EVar2 = this->AnimationMode;
      if (EVar2 == DirectSet) {
        EVar1 = (this->FrameIndex).Mode;
        iVar7 = iVar6;
        if (EVar1 == Binding) {
          iVar9 = FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
                            (param_1,&(this->FrameIndex).ParameterBinding);
        }
        else if (EVar1 == Expression) {
          iVar9 = FNiagaraStatelessEmitterDataBuildContext::AddExpression
                            (param_1,&(this->FrameIndex).ParameterExpression);
        }
        else {
          iVar6 = (this->FrameIndex).Min;
          iVar7 = iVar6;
          if (EVar1 != UniformConstant) {
            iVar7 = (this->FrameIndex).Max;
          }
        }
        *(int *)(pFVar4 + (longlong)(int)uVar10 + 8) = iVar9;
        *(int *)(pFVar4 + (longlong)(int)uVar10 + 0xc) = iVar6;
        *(int *)(pFVar4 + (longlong)(int)uVar10 + 0x10) = iVar7;
      }
      else if (EVar2 == InfiniteLoop) {
        *(int *)(pFVar4 + (longlong)(int)uVar10 + 0x18) = iVar7;
        *(int *)(pFVar4 + (longlong)(int)uVar10 + 0x1c) = iVar11 - iVar7;
        *(float *)(pFVar4 + (longlong)(int)uVar10 + 0x20) = this->LoopsPerSecond;
      }
      else if (EVar2 == Linear) {
        *(int *)(pFVar4 + (longlong)(int)uVar10 + 0x18) = iVar7;
        *(int *)(pFVar4 + (longlong)(int)uVar10 + 0x1c) = iVar11 - iVar7;
        *(undefined4 *)(pFVar4 + (longlong)(int)uVar10 + 0x20) = 0x3f800000;
      }
      else if (EVar2 == Random) {
        *(undefined4 *)(pFVar4 + (longlong)(int)uVar10 + 8) = 0xffffffff;
        fVar12 = 0.0;
        *(int *)(pFVar4 + (longlong)(int)uVar10 + 0xc) = iVar7;
        *(int *)(pFVar4 + (longlong)(int)uVar10 + 0x10) = iVar11;
        if (0.0 < this->RandomChangeInterval) {
          fVar12 = __real_3f800000 / this->RandomChangeInterval;
        }
        *(float *)(pFVar4 + (longlong)(int)uVar10 + 0x14) = fVar12;
      }
      local_30 = 0;
      local_48 = &
                 ___7__TFunction_OwnedObject_P6AXAEBVFParticleSimulationContext_NiagaraStateless___Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      local_40 = NSMSubUVAnimationPrivate::ParticleSimulate;
      local_58[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<void_(__cdecl*)(NiagaraStateless::FParticleSimulationContext_const_&),void,NiagaraStateless::FParticleSimulationContext_const_&>
                    ::Call;
      FNiagaraStatelessEmitterDataBuildContext::AddParticleSimulationExecSimulate
                (param_1,(TFunction<void___cdecl(NiagaraStateless::FParticleSimulationContext_const_&)>
                          *)local_58);
    }
  }
  return;
}

// BuildShaderParameters @ 14943ad90

void __thiscall
UNiagaraStatelessModule_SubUVAnimation::BuildShaderParameters
          (UNiagaraStatelessModule_SubUVAnimation *this,
          FNiagaraStatelessShaderParametersBuilder *param_1)

{
  int iVar1;
  FShaderParametersMetadataBuilder *this_00;
  FShaderParametersMetadata *pFVar2;
  
  iVar1 = param_1->ParameterOffset;
  this_00 = param_1->MetadataBuilder;
  if (this_00 != (FShaderParametersMetadataBuilder *)0x0) {
    pFVar2 = TShaderParameterStructTypeInfo<NiagaraStateless::FSubUVAnimationModule_ShaderParameters>
             ::GetStructMetadata();
    FShaderParametersMetadataBuilder::AddIncludedStruct(this_00,pFVar2,Float);
  }
  pFVar2 = TShaderParameterStructTypeInfo<NiagaraStateless::FSubUVAnimationModule_ShaderParameters>
           ::GetStructMetadata();
  param_1->ParameterOffset = pFVar2->Size + (iVar1 + 0xfU & 0xfffffff0);
  return;
}

// GetPrivateStaticClass @ 14944c670

UClass * __cdecl UNiagaraStatelessModule_SubUVAnimation::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_SubUVAnimation.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_SubUVAnimation",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_SubUVAnimation.InnerSingleton,
               StaticRegisterNativesUNiagaraStatelessModule_SubUVAnimation,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraStatelessModule_SubUVAnimation>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_SubUVAnimation>,local_res8,
               UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_SubUVAnimation.InnerSingleton;
}

// SetShaderParameters @ 1494682d0

void __thiscall
UNiagaraStatelessModule_SubUVAnimation::SetShaderParameters
          (UNiagaraStatelessModule_SubUVAnimation *this,
          FNiagaraStatelessSetShaderParameterContext *param_1)

{
  int iVar1;
  uchar *puVar2;
  uchar *puVar3;
  code *pcVar4;
  bool bVar5;
  FShaderParametersMetadata *pFVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  
  uVar9 = param_1->ParameterOffset + 0xf & 0xfffffff0;
  pFVar6 = TShaderParameterStructTypeInfo<NiagaraStateless::FSubUVAnimationModule_ShaderParameters>
           ::GetStructMetadata();
  FNiagaraStatelessSetShaderParameterContext::ValidateIncludeStructType(param_1,uVar9,pFVar6);
  pFVar6 = TShaderParameterStructTypeInfo<NiagaraStateless::FSubUVAnimationModule_ShaderParameters>
           ::GetStructMetadata();
  puVar2 = param_1->ShaderParametersBase;
  uVar10 = param_1->BuiltDataOffset + 3U & 0xfffffffc;
  param_1->ParameterOffset = pFVar6->Size + uVar9;
  param_1->BuiltDataOffset = uVar10 + 0x28;
  if ((param_1->BuiltData).ArrayNum < (int)(uVar10 + 0x28)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("BuiltDataOffset <= BuiltData.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessSetShaderParameterContext.h"
                       ,0x22,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  puVar3 = (param_1->BuiltData).DataPtr;
  iVar1 = *(int *)(puVar3 + (longlong)(int)uVar10 + 4);
  if (iVar1 < 2) {
    uVar12 = 0;
    puVar3 = puVar2 + uVar9;
    puVar3[0] = '\0';
    puVar3[1] = '\0';
    puVar3[2] = '\0';
    puVar3[3] = '\0';
    puVar3[4] = '\0';
    puVar3[5] = '\0';
    puVar3[6] = '\0';
    puVar3[7] = '\0';
    puVar3 = puVar2 + (ulonglong)uVar9 + 8;
    puVar3[0] = '\0';
    puVar3[1] = '\0';
    puVar3[2] = '\0';
    puVar3[3] = '\0';
    puVar3[4] = '\0';
    puVar3[5] = '\0';
    puVar3[6] = '\0';
    puVar3[7] = '\0';
    puVar3 = puVar2 + (ulonglong)uVar9 + 0x10;
    puVar3[0] = '\0';
    puVar3[1] = '\0';
    puVar3[2] = '\0';
    puVar3[3] = '\0';
    puVar3[4] = '\0';
    puVar3[5] = '\0';
    puVar3[6] = '\0';
    puVar3[7] = '\0';
    puVar3 = puVar2 + (ulonglong)uVar9 + 0x18;
    puVar3[0] = '\0';
    puVar3[1] = '\0';
    puVar3[2] = '\0';
    puVar3[3] = '\0';
  }
  else {
    if (*(int *)(puVar3 + (longlong)(int)uVar10 + 8) == -1) {
      iVar8 = *(int *)(puVar3 + (longlong)(int)uVar10 + 0xc);
    }
    else {
      iVar8 = *(int *)(puVar3 + (longlong)(int)uVar10 + 8) * 4;
      if ((iVar8 < 0) ||
         ((ulonglong)(longlong)(param_1->RendererParameterData).ArrayNum < (longlong)iVar8 + 4U)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Offset >= 0 && Offset + sizeof(TValueType) <= RendererParameterData.Num()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessSetShaderParameterContext.h"
                           ,0x2d,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar8 = *(int *)((param_1->RendererParameterData).DataPtr + iVar8);
    }
    fVar13 = __real_3f800000;
    if (*(int *)(puVar3 + (longlong)(int)uVar10 + 8) == -1) {
      iVar7 = *(int *)(puVar3 + (longlong)(int)uVar10 + 0x10) -
              *(int *)(puVar3 + (longlong)(int)uVar10 + 0xc);
    }
    else {
      iVar7 = 0;
    }
    *(undefined4 *)(puVar2 + uVar9) = *(undefined4 *)(puVar3 + (int)uVar10);
    fVar11 = (float)iVar1;
    fVar13 = fVar13 / fVar11;
    *(float *)(puVar2 + (ulonglong)uVar9 + 4) = fVar11;
    *(float *)(puVar2 + (ulonglong)uVar9 + 0xc) = (float)iVar8 * fVar13;
    *(float *)(puVar2 + (ulonglong)uVar9 + 8) = (float)iVar7 * fVar13;
    *(undefined4 *)(puVar2 + (ulonglong)uVar9 + 0x10) =
         *(undefined4 *)(puVar3 + (longlong)(int)uVar10 + 0x14);
    *(float *)(puVar2 + (ulonglong)uVar9 + 0x14) =
         (float)*(int *)(puVar3 + (longlong)(int)uVar10 + 0x18) * fVar13;
    *(float *)(puVar2 + (ulonglong)uVar9 + 0x18) =
         (float)*(int *)(puVar3 + (longlong)(int)uVar10 + 0x1c) * fVar13;
    uVar12 = *(undefined4 *)(puVar3 + (longlong)(int)uVar10 + 0x20);
  }
  *(undefined4 *)(puVar2 + (ulonglong)uVar9 + 0x1c) = uVar12;
  return;
}

// StaticRegisterNativesUNiagaraStatelessModule_SubUVAnimation @ 149469e60

void __cdecl
UNiagaraStatelessModule_SubUVAnimation::StaticRegisterNativesUNiagaraStatelessModule_SubUVAnimation
          (void)

{
  return;
}

