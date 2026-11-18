// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 9

// StaticClass @ 149415830

UClass * __cdecl UNiagaraStatelessModule_ScaleSpriteSizeBySpeed::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_ScaleSpriteSizeBySpeed",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed.
                InnerSingleton,StaticRegisterNativesUNiagaraStatelessModule_ScaleSpriteSizeBySpeed,
               0x118,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraStatelessModule_ScaleSpriteSizeBySpeed>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_ScaleSpriteSizeBySpeed>,
               local_res8,UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed.InnerSingleton;
}

// UNiagaraStatelessModule_ScaleSpriteSizeBySpeed @ 14942a240

UNiagaraStatelessModule_ScaleSpriteSizeBySpeed * __thiscall
UNiagaraStatelessModule_ScaleSpriteSizeBySpeed::UNiagaraStatelessModule_ScaleSpriteSizeBySpeed
          (UNiagaraStatelessModule_ScaleSpriteSizeBySpeed *this,FVTableHelper *param_1)

{
  float fVar1;
  TVector2<float>_u_0 local_res8;
  float local_res10 [6];
  initializer_list<float> local_18;
  
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this,param_1);
  fVar1 = __real_447a0000;
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_ScaleSpriteSizeBySpeed__6B_;
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat(&this->VelocityThreshold,fVar1);
  local_res8._s_0.X = 1.0;
  local_res8._s_0.Y = 1.0;
  FNiagaraDistributionRangeVector2::FNiagaraDistributionRangeVector2
            (&this->MinScaleFactor,(TVector2<float> *)&local_res8._s_0);
  local_res8._s_0.X = 2.0;
  local_res8._s_0.Y = 2.0;
  FNiagaraDistributionRangeVector2::FNiagaraDistributionRangeVector2
            (&this->MaxScaleFactor,(TVector2<float> *)&local_res8._s_0);
  local_18._First = (float *)&local_res8;
  this->bSampleScaleFactorByCurve = false;
  local_18._Last = local_res10;
  local_res8._s_0.X = 0.0;
  local_res8._s_0.Y = 1.0;
  FNiagaraDistributionFloat::FNiagaraDistributionFloat(&this->SampleFactorCurve,&local_18);
  return this;
}

// UNiagaraStatelessModule_ScaleSpriteSizeBySpeed @ 14942a300

UNiagaraStatelessModule_ScaleSpriteSizeBySpeed * __thiscall
UNiagaraStatelessModule_ScaleSpriteSizeBySpeed::UNiagaraStatelessModule_ScaleSpriteSizeBySpeed
          (UNiagaraStatelessModule_ScaleSpriteSizeBySpeed *this)

{
  float fVar1;
  TVector2<float>_u_0 local_res8;
  float local_res10 [6];
  initializer_list<float> local_18;
  
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  fVar1 = __real_447a0000;
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_ScaleSpriteSizeBySpeed__6B_;
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat(&this->VelocityThreshold,fVar1);
  local_res8._s_0.X = 1.0;
  local_res8._s_0.Y = 1.0;
  FNiagaraDistributionRangeVector2::FNiagaraDistributionRangeVector2
            (&this->MinScaleFactor,(TVector2<float> *)&local_res8._s_0);
  local_res8._s_0.X = 2.0;
  local_res8._s_0.Y = 2.0;
  FNiagaraDistributionRangeVector2::FNiagaraDistributionRangeVector2
            (&this->MaxScaleFactor,(TVector2<float> *)&local_res8._s_0);
  local_18._First = (float *)&local_res8;
  this->bSampleScaleFactorByCurve = false;
  local_18._Last = local_res10;
  local_res8._s_0.X = 0.0;
  local_res8._s_0.Y = 1.0;
  FNiagaraDistributionFloat::FNiagaraDistributionFloat(&this->SampleFactorCurve,&local_18);
  return this;
}

// ~UNiagaraStatelessModule_ScaleSpriteSizeBySpeed @ 14942cd20

void __thiscall
UNiagaraStatelessModule_ScaleSpriteSizeBySpeed::~UNiagaraStatelessModule_ScaleSpriteSizeBySpeed
          (UNiagaraStatelessModule_ScaleSpriteSizeBySpeed *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_ScaleSpriteSizeBySpeed__6B_;
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

// BuildEmitterData @ 1494356e0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
UNiagaraStatelessModule_ScaleSpriteSizeBySpeed::BuildEmitterData
          (UNiagaraStatelessModule_ScaleSpriteSizeBySpeed *this,
          FNiagaraStatelessEmitterDataBuildContext *param_1)

{
  char cVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  TVector2<float> TVar4;
  bool bVar5;
  int iVar6;
  TIntVector3<unsigned_int> *pTVar7;
  int iVar8;
  uint uVar9;
  TVector2<float>_u_0 TVar10;
  TVector2<float>_u_0 TVar11;
  float fVar12;
  float fVar13;
  undefined4 local_res10;
  undefined4 local_res14;
  undefined1 local_98 [16];
  undefined1 local_88 [40];
  ForAnyElementType local_60;
  
  pTVar2 = param_1->BuiltData;
  uVar9 = pTVar2->ArrayNum + 3U & 0xfffffffc;
  iVar8 = (uVar9 - pTVar2->ArrayNum) + 0x50;
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar8,&pTVar2->AllocatorInstance,&pTVar2->ArrayNum,&pTVar2->ArrayMax);
  memset((pTVar2->AllocatorInstance).Data + iVar6,0,(longlong)iVar8);
  iVar6 = -1;
  pFVar3 = (param_1->BuiltData->AllocatorInstance).Data;
  *(undefined8 *)(pFVar3 + (int)uVar9) = 0;
  *(undefined8 *)(pFVar3 + (int)uVar9 + 8) = 0;
  *(undefined8 *)(pFVar3 + (longlong)(int)uVar9 + 0x10) = 0;
  *(undefined8 *)(pFVar3 + (longlong)(int)uVar9 + 0x10 + 8) = 0;
  *(undefined8 *)(pFVar3 + (longlong)(int)uVar9 + 0x20) = 0;
  *(undefined8 *)(pFVar3 + (longlong)(int)uVar9 + 0x20 + 8) = 0;
  *(undefined8 *)(pFVar3 + (longlong)(int)uVar9 + 0x30) = 0;
  *(undefined8 *)(pFVar3 + (longlong)(int)uVar9 + 0x30 + 8) = 0;
  *(undefined8 *)(pFVar3 + (longlong)(int)uVar9 + 0x40) = 0;
  *(undefined8 *)(pFVar3 + (longlong)(int)uVar9 + 0x40 + 8) = 0;
  TVar4 = UE::Math::TVector2<float>::UnitVector;
  ((TVector2<float>_u_0 *)(pFVar3 + (longlong)(int)uVar9 + 4))->_s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::UnitVector.field0_0x0;
  ((TVector2<float>_u_0 *)(pFVar3 + (longlong)(int)uVar9 + 0xc))->_s_0 =
       (TVector2<float>_u_0_s_0)TVar4.field0_0x0;
  *(undefined4 *)(pFVar3 + (int)uVar9) = 0xffffffff;
  TVar4 = UE::Math::TVector2<float>::UnitVector;
  ((TVector2<float>_u_0 *)(pFVar3 + (longlong)(int)uVar9 + 0x18))->_s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::UnitVector.field0_0x0;
  ((TVector2<float>_u_0 *)(pFVar3 + (longlong)(int)uVar9 + 0x20))->_s_0 =
       (TVector2<float>_u_0_s_0)TVar4.field0_0x0;
  *(undefined4 *)(pFVar3 + (longlong)(int)uVar9 + 0x14) = 0xffffffff;
  *(undefined4 *)(pFVar3 + (longlong)(int)uVar9 + 0x28) = 0xffffffff;
  *(undefined8 *)(pFVar3 + (longlong)(int)uVar9 + 0x2c) = 0;
  *(undefined8 *)(pFVar3 + (longlong)(int)uVar9 + 0x34) =
       UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._0_8_;
  *(uint *)(pFVar3 + (longlong)(int)uVar9 + 0x3c) =
       UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Z;
  *(undefined8 *)(pFVar3 + (longlong)(int)uVar9 + 0x40) = 0xffffffffffffffff;
  *(undefined8 *)(pFVar3 + (longlong)(int)uVar9 + 0x48) = 0xffffffffffffffff;
  bVar5 = UNiagaraStatelessModule::IsModuleEnabled((UNiagaraStatelessModule *)this);
  if (bVar5) {
    iVar8 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                      (param_1,&NiagaraStatelessCommon::GGlobals.PositionVariable);
    *(int *)(pFVar3 + (longlong)(int)uVar9 + 0x40) = iVar8;
    iVar8 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                      (param_1,&NiagaraStatelessCommon::GGlobals.PreviousPositionVariable);
    *(int *)(pFVar3 + (longlong)(int)uVar9 + 0x44) = iVar8;
    iVar8 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                      (param_1,&NiagaraStatelessCommon::GGlobals.SpriteSizeVariable);
    *(int *)(pFVar3 + (longlong)(int)uVar9 + 0x48) = iVar8;
    iVar8 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                      (param_1,&NiagaraStatelessCommon::GGlobals.PreviousSpriteSizeVariable);
    *(int *)(pFVar3 + (longlong)(int)uVar9 + 0x4c) = iVar8;
    fVar12 = __real_447a0000;
    if ((*(int *)(pFVar3 + (longlong)(int)uVar9 + 0x48) != -1) || (iVar8 != -1)) {
      cVar1 = (char)(this->VelocityThreshold)._padding_;
      fVar13 = fVar12;
      if (cVar1 == '\x01') {
        iVar8 = FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
                          (param_1,(FNiagaraVariableBase *)
                                   ((longlong)&(this->VelocityThreshold)._padding_ + 4));
      }
      else if (cVar1 == '\x02') {
        iVar8 = FNiagaraStatelessEmitterDataBuildContext::AddExpression
                          (param_1,(FInstancedStruct *)&(this->VelocityThreshold)._padding_);
      }
      else {
        fVar13 = (this->VelocityThreshold).Min;
        fVar12 = fVar13;
        if (cVar1 != '\x03') {
          fVar12 = (this->VelocityThreshold).Max;
        }
        iVar8 = -1;
      }
      *(int *)(pFVar3 + (longlong)(int)uVar9 + 0x28) = iVar8;
      *(float *)(pFVar3 + (longlong)(int)uVar9 + 0x2c) = fVar13;
      *(float *)(pFVar3 + (longlong)(int)uVar9 + 0x30) = fVar12;
      TVar10 = UE::Math::TVector2<float>::UnitVector.field0_0x0;
      cVar1 = (char)(this->MinScaleFactor)._padding_;
      TVar11 = TVar10;
      if (cVar1 == '\x01') {
        iVar8 = FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
                          (param_1,(FNiagaraVariableBase *)
                                   ((longlong)&(this->MinScaleFactor)._padding_ + 4));
      }
      else if (cVar1 == '\x02') {
        iVar8 = FNiagaraStatelessEmitterDataBuildContext::AddExpression
                          (param_1,(FInstancedStruct *)&(this->MinScaleFactor)._padding_);
      }
      else {
        TVar10 = (this->MinScaleFactor).Min.field0_0x0;
        TVar11 = TVar10;
        if (cVar1 != '\x03') {
          TVar11 = (this->MinScaleFactor).Max.field0_0x0;
        }
        iVar8 = -1;
      }
      *(int *)(pFVar3 + (int)uVar9) = iVar8;
      ((TVector2<float>_u_0 *)(pFVar3 + (longlong)(int)uVar9 + 4))->_s_0 =
           (TVector2<float>_u_0_s_0)TVar10;
      ((TVector2<float>_u_0 *)(pFVar3 + (longlong)(int)uVar9 + 0xc))->_s_0 =
           (TVector2<float>_u_0_s_0)TVar11;
      TVar10 = UE::Math::TVector2<float>::UnitVector.field0_0x0;
      cVar1 = (char)(this->MaxScaleFactor)._padding_;
      TVar11 = TVar10;
      if (cVar1 == '\x01') {
        iVar6 = FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
                          (param_1,(FNiagaraVariableBase *)
                                   ((longlong)&(this->MaxScaleFactor)._padding_ + 4));
      }
      else if (cVar1 == '\x02') {
        iVar6 = FNiagaraStatelessEmitterDataBuildContext::AddExpression
                          (param_1,(FInstancedStruct *)&(this->MaxScaleFactor)._padding_);
      }
      else {
        TVar10 = (this->MaxScaleFactor).Min.field0_0x0;
        TVar11 = TVar10;
        if (cVar1 != '\x03') {
          TVar11 = (this->MaxScaleFactor).Max.field0_0x0;
        }
      }
      *(int *)(pFVar3 + (longlong)(int)uVar9 + 0x14) = iVar6;
      ((TVector2<float>_u_0 *)(pFVar3 + (longlong)(int)uVar9 + 0x18))->_s_0 =
           (TVector2<float>_u_0_s_0)TVar10;
      ((TVector2<float>_u_0 *)(pFVar3 + (longlong)(int)uVar9 + 0x20))->_s_0 =
           (TVector2<float>_u_0_s_0)TVar11;
      if (this->bSampleScaleFactorByCurve == false) {
        local_98._0_8_ = &local_res10;
        local_res10 = 0;
        local_98._8_8_ = &stack0x00000018;
        local_res14 = 0x3f800000;
        FNiagaraDistributionFloat::FNiagaraDistributionFloat
                  ((FNiagaraDistributionFloat *)local_88,(initializer_list<float> *)local_98);
        pTVar7 = FNiagaraStatelessEmitterDataBuildContext::
                 AddDistribution<FNiagaraDistributionFloat>
                           (param_1,(TIntVector3<unsigned_int> *)local_98,
                            (FNiagaraDistributionFloat *)local_88);
        *(undefined8 *)(pFVar3 + (longlong)(int)uVar9 + 0x34) = *(undefined8 *)&pTVar7->field0_0x0;
        *(uint *)(pFVar3 + (longlong)(int)uVar9 + 0x3c) = (pTVar7->field0_0x0)._s_0.Z;
        if (local_60.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data);
        }
        FInstancedStruct::Reset((FInstancedStruct *)(local_88 + 0x18));
      }
      else {
        pTVar7 = FNiagaraStatelessEmitterDataBuildContext::
                 AddDistribution<FNiagaraDistributionFloat>
                           (param_1,(TIntVector3<unsigned_int> *)local_98,&this->SampleFactorCurve);
        *(undefined8 *)(pFVar3 + (longlong)(int)uVar9 + 0x34) = *(undefined8 *)&pTVar7->field0_0x0;
        *(uint *)(pFVar3 + (longlong)(int)uVar9 + 0x3c) = (pTVar7->field0_0x0)._s_0.Z;
      }
      local_60.Data = (FScriptContainerElement *)0x0;
      local_88._16_8_ =
           &
           ___7__TFunction_OwnedObject_P6AXAEBVFParticleSimulationContext_NiagaraStateless___Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      local_88._24_8_ = NSMScaleSpriteSizeBySpeedPrivate::ParticleSimulate;
      local_88._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<void_(__cdecl*)(NiagaraStateless::FParticleSimulationContext_const_&),void,NiagaraStateless::FParticleSimulationContext_const_&>
           ::Call;
      FNiagaraStatelessEmitterDataBuildContext::AddParticleSimulationExecSimulate
                (param_1,(TFunction<void___cdecl(NiagaraStateless::FParticleSimulationContext_const_&)>
                          *)local_88);
    }
  }
  return;
}

// BuildShaderParameters @ 14943abb0

void __thiscall
UNiagaraStatelessModule_ScaleSpriteSizeBySpeed::BuildShaderParameters
          (UNiagaraStatelessModule_ScaleSpriteSizeBySpeed *this,
          FNiagaraStatelessShaderParametersBuilder *param_1)

{
  int iVar1;
  FShaderParametersMetadataBuilder *this_00;
  FShaderParametersMetadata *pFVar2;
  
  iVar1 = param_1->ParameterOffset;
  this_00 = param_1->MetadataBuilder;
  if (this_00 != (FShaderParametersMetadataBuilder *)0x0) {
    pFVar2 = TShaderParameterStructTypeInfo<NiagaraStateless::FScaleSpriteSizeBySpeedModule_ShaderParameters>
             ::GetStructMetadata();
    FShaderParametersMetadataBuilder::AddIncludedStruct(this_00,pFVar2,Float);
  }
  pFVar2 = TShaderParameterStructTypeInfo<NiagaraStateless::FScaleSpriteSizeBySpeedModule_ShaderParameters>
           ::GetStructMetadata();
  param_1->ParameterOffset = pFVar2->Size + (iVar1 + 0xfU & 0xfffffff0);
  return;
}

// GetPrivateStaticClass @ 14944c2b0

UClass * __cdecl UNiagaraStatelessModule_ScaleSpriteSizeBySpeed::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_ScaleSpriteSizeBySpeed",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed.
                InnerSingleton,StaticRegisterNativesUNiagaraStatelessModule_ScaleSpriteSizeBySpeed,
               0x118,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraStatelessModule_ScaleSpriteSizeBySpeed>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_ScaleSpriteSizeBySpeed>,
               local_res8,UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed.InnerSingleton;
}

// SetShaderParameters @ 1494667a0

void __thiscall
UNiagaraStatelessModule_ScaleSpriteSizeBySpeed::SetShaderParameters
          (UNiagaraStatelessModule_ScaleSpriteSizeBySpeed *this,
          FNiagaraStatelessSetShaderParameterContext *param_1)

{
  int *piVar1;
  int iVar2;
  uchar *puVar3;
  uchar *puVar4;
  code *pcVar5;
  bool bVar6;
  FShaderParametersMetadata *pFVar7;
  uint uVar8;
  undefined8 uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  undefined8 local_res10;
  float local_res18;
  float fStackX_1c;
  
  uVar8 = param_1->BuiltDataOffset + 3U & 0xfffffffc;
  param_1->BuiltDataOffset = uVar8 + 0x50;
  if (((param_1->BuiltData).ArrayNum < (int)(uVar8 + 0x50)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("BuiltDataOffset <= BuiltData.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessSetShaderParameterContext.h"
                         ,0x22,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar3 = (param_1->BuiltData).DataPtr;
  fVar11 = FNiagaraStatelessSetShaderParameterContext::GetRendererParameterValue<float>
                     (param_1,*(int *)(puVar3 + (longlong)(int)uVar8 + 0x28),
                      (float *)(puVar3 + (longlong)(int)uVar8 + 0x2c));
  piVar1 = &(param_1->RendererParameterData).ArrayNum;
  if (*(int *)(puVar3 + (int)uVar8) == -1) {
    uVar9 = *(undefined8 *)(puVar3 + (longlong)(int)uVar8 + 4);
  }
  else {
    iVar2 = *(int *)(puVar3 + (int)uVar8) * 4;
    if (((iVar2 < 0) || ((ulonglong)(longlong)*piVar1 < (longlong)iVar2 + 8U)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Offset >= 0 && Offset + sizeof(TValueType) <= RendererParameterData.Num()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessSetShaderParameterContext.h"
                           ,0x2d,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar9 = *(undefined8 *)((param_1->RendererParameterData).DataPtr + iVar2);
  }
  if (*(int *)(puVar3 + (longlong)(int)uVar8 + 0x14) == -1) {
    local_res10 = *(undefined8 *)(puVar3 + (longlong)(int)uVar8 + 0x18);
  }
  else {
    iVar2 = *(int *)(puVar3 + (longlong)(int)uVar8 + 0x14) * 4;
    if (((iVar2 < 0) || ((ulonglong)(longlong)*piVar1 < (longlong)iVar2 + 8U)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Offset >= 0 && Offset + sizeof(TValueType) <= RendererParameterData.Num()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessSetShaderParameterContext.h"
                           ,0x2d,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_res10 = *(undefined8 *)((param_1->RendererParameterData).DataPtr + iVar2);
  }
  uVar10 = param_1->ParameterOffset + 0xf & 0xfffffff0;
  pFVar7 = TShaderParameterStructTypeInfo<NiagaraStateless::FScaleSpriteSizeBySpeedModule_ShaderParameters>
           ::GetStructMetadata();
  FNiagaraStatelessSetShaderParameterContext::ValidateIncludeStructType(param_1,uVar10,pFVar7);
  pFVar7 = TShaderParameterStructTypeInfo<NiagaraStateless::FScaleSpriteSizeBySpeedModule_ShaderParameters>
           ::GetStructMetadata();
  puVar4 = param_1->ShaderParametersBase;
  local_res18 = (float)uVar9;
  fStackX_1c = (float)((ulonglong)uVar9 >> 0x20);
  param_1->ParameterOffset = pFVar7->Size + uVar10;
  fVar12 = 0.0;
  *(undefined8 *)(puVar4 + uVar10) = uVar9;
  *(ulonglong *)(puVar4 + (ulonglong)uVar10 + 8) =
       CONCAT44(local_res10._4_4_ - fStackX_1c,(float)local_res10 - local_res18);
  if (0.0 < fVar11) {
    fVar12 = __real_3f800000 / (fVar11 * fVar11);
  }
  *(float *)(puVar4 + (ulonglong)uVar10 + 0x1c) = fVar12;
  *(undefined8 *)(puVar4 + (ulonglong)uVar10 + 0x10) =
       *(undefined8 *)(puVar3 + (longlong)(int)uVar8 + 0x34);
  *(undefined4 *)(puVar4 + (ulonglong)uVar10 + 0x18) =
       *(undefined4 *)(puVar3 + (longlong)(int)uVar8 + 0x3c);
  return;
}

// StaticRegisterNativesUNiagaraStatelessModule_ScaleSpriteSizeBySpeed @ 149469e10

void __cdecl
UNiagaraStatelessModule_ScaleSpriteSizeBySpeed::
StaticRegisterNativesUNiagaraStatelessModule_ScaleSpriteSizeBySpeed(void)

{
  return;
}

