// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 11

// StaticClass @ 149414530

UClass * __cdecl UNiagaraStatelessModule_ScaleSpriteSize::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleSpriteSize.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_ScaleSpriteSize",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleSpriteSize.InnerSingleton,
               StaticRegisterNativesUNiagaraStatelessModule_ScaleSpriteSize,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraStatelessModule_ScaleSpriteSize>
               ,InternalVTableHelperCtorCaller<UNiagaraStatelessModule_ScaleSpriteSize>,local_res8,
               UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleSpriteSize.InnerSingleton;
}

// UNiagaraStatelessModule_ScaleSpriteSize @ 14942a140

UNiagaraStatelessModule_ScaleSpriteSize * __thiscall
UNiagaraStatelessModule_ScaleSpriteSize::UNiagaraStatelessModule_ScaleSpriteSize
          (UNiagaraStatelessModule_ScaleSpriteSize *this,FVTableHelper *param_1)

{
  int iVar1;
  TVector2<float>_u_0 local_res8;
  
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_ScaleSpriteSize__6B_;
  local_res8 = UE::Math::TVector2<float>::UnitVector.field0_0x0;
  FNiagaraDistributionVector2::FNiagaraDistributionVector2
            (&this->ScaleDistribution,(TVector2<float> *)&local_res8._s_0);
  (this->ScaleCurveRange)._padding_ = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&(this->ScaleCurveRange)._padding_,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&(this->ScaleCurveRange)._padding_ = iVar1;
  (this->ScaleCurveRange).DefaultValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScaleCurveRange).DefaultValue.ArrayNum = 0;
  (this->ScaleCurveRange).DefaultValue.ArrayMax = 0;
  return this;
}

// UNiagaraStatelessModule_ScaleSpriteSize @ 14942a1c0

UNiagaraStatelessModule_ScaleSpriteSize * __thiscall
UNiagaraStatelessModule_ScaleSpriteSize::UNiagaraStatelessModule_ScaleSpriteSize
          (UNiagaraStatelessModule_ScaleSpriteSize *this)

{
  int iVar1;
  TVector2<float>_u_0 local_res8;
  
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_ScaleSpriteSize__6B_;
  local_res8 = UE::Math::TVector2<float>::UnitVector.field0_0x0;
  FNiagaraDistributionVector2::FNiagaraDistributionVector2
            (&this->ScaleDistribution,(TVector2<float> *)&local_res8._s_0);
  (this->ScaleCurveRange)._padding_ = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&(this->ScaleCurveRange)._padding_,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&(this->ScaleCurveRange)._padding_ = iVar1;
  (this->ScaleCurveRange).DefaultValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScaleCurveRange).DefaultValue.ArrayNum = 0;
  (this->ScaleCurveRange).DefaultValue.ArrayMax = 0;
  return this;
}

// ~UNiagaraStatelessModule_ScaleSpriteSize @ 14942ccd0

void __thiscall
UNiagaraStatelessModule_ScaleSpriteSize::~UNiagaraStatelessModule_ScaleSpriteSize
          (UNiagaraStatelessModule_ScaleSpriteSize *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_ScaleSpriteSize__6B_;
  pFVar1 = (this->ScaleCurveRange).DefaultValue.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ScaleDistribution).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&(this->ScaleDistribution)._padding_);
  UNiagaraStatelessModule::~UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  return;
}

// BuildEmitterData @ 149435510

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
UNiagaraStatelessModule_ScaleSpriteSize::BuildEmitterData
          (UNiagaraStatelessModule_ScaleSpriteSize *this,
          FNiagaraStatelessEmitterDataBuildContext *param_1)

{
  char cVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  TIntVector3<unsigned_int> *pTVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  TIntVector3<unsigned_int> local_48;
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  pTVar2 = param_1->BuiltData;
  uVar10 = pTVar2->ArrayNum + 3U & 0xfffffffc;
  iVar8 = (uVar10 - pTVar2->ArrayNum) + 0x20;
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar8,&pTVar2->AllocatorInstance,&pTVar2->ArrayNum,&pTVar2->ArrayMax);
  memset((pTVar2->AllocatorInstance).Data + iVar6,0,(longlong)iVar8);
  pFVar9 = (param_1->BuiltData->AllocatorInstance).Data + (int)uVar10;
  *(undefined8 *)pFVar9 = 0;
  *(undefined8 *)(pFVar9 + 8) = 0;
  *(undefined8 *)(pFVar9 + 0x10) = 0;
  *(undefined8 *)(pFVar9 + 0x18) = 0;
  *(undefined8 *)pFVar9 = UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._0_8_;
  *(uint *)(pFVar9 + 8) = UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Z;
  ((TVector2<float>_u_0 *)(pFVar9 + 0xc))->_s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::UnitVector.field0_0x0;
  *(undefined8 *)(pFVar9 + 0x14) = 0xffffffffffffffff;
  *(undefined4 *)(pFVar9 + 0x1c) = 0xffffffff;
  iVar6 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                    (param_1,&NiagaraStatelessCommon::GGlobals.SpriteSizeVariable);
  *(int *)(pFVar9 + 0x18) = iVar6;
  iVar6 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                    (param_1,&NiagaraStatelessCommon::GGlobals.PreviousSpriteSizeVariable);
  *(int *)(pFVar9 + 0x1c) = iVar6;
  if ((*(int *)(pFVar9 + 0x18) == -1) && (iVar6 == -1)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  bVar4 = UNiagaraStatelessModule::IsModuleEnabled((UNiagaraStatelessModule *)this);
  if ((bVar4) && (bVar5)) {
    pTVar7 = FNiagaraStatelessEmitterDataBuildContext::AddDistribution<FNiagaraDistributionVector2>
                       (param_1,&local_48,&this->ScaleDistribution);
    *(undefined8 *)pFVar9 = *(undefined8 *)&pTVar7->field0_0x0;
    *(uint *)(pFVar9 + 8) = (pTVar7->field0_0x0)._s_0.Z;
    cVar1 = (char)(this->ScaleDistribution)._padding_;
    if ((cVar1 == '\a') || (cVar1 == '\b')) {
      iVar6 = FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
                        (param_1,(FNiagaraVariableBase *)&this->ScaleCurveRange);
      *(int *)(pFVar9 + 0x14) = iVar6;
      if ((this->ScaleCurveRange).DefaultValue.ArrayNum != 8) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("DefaultValue.Num() == sizeof(T)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterBinding.h"
                           ,0x8a,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(undefined8 *)(pFVar9 + 0xc) =
           *(undefined8 *)(this->ScaleCurveRange).DefaultValue.AllocatorInstance.Data;
    }
    local_10 = 0;
    local_28 = &
               ___7__TFunction_OwnedObject_P6AXAEBVFParticleSimulationContext_NiagaraStateless___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_20 = NSMScaleSpriteSizePrivate::ParticleSimulate;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<void_(__cdecl*)(NiagaraStateless::FParticleSimulationContext_const_&),void,NiagaraStateless::FParticleSimulationContext_const_&>
                  ::Call;
    FNiagaraStatelessEmitterDataBuildContext::AddParticleSimulationExecSimulate
              (param_1,(TFunction<void___cdecl(NiagaraStateless::FParticleSimulationContext_const_&)>
                        *)local_38);
  }
  return;
}

// BuildShaderParameters @ 14943ab50

void __thiscall
UNiagaraStatelessModule_ScaleSpriteSize::BuildShaderParameters
          (UNiagaraStatelessModule_ScaleSpriteSize *this,
          FNiagaraStatelessShaderParametersBuilder *param_1)

{
  int iVar1;
  FShaderParametersMetadataBuilder *this_00;
  FShaderParametersMetadata *pFVar2;
  
  iVar1 = param_1->ParameterOffset;
  this_00 = param_1->MetadataBuilder;
  if (this_00 != (FShaderParametersMetadataBuilder *)0x0) {
    pFVar2 = TShaderParameterStructTypeInfo<NiagaraStateless::FScaleSpriteSizeModule_ShaderParameters>
             ::GetStructMetadata();
    FShaderParametersMetadataBuilder::AddIncludedStruct(this_00,pFVar2,Float);
  }
  pFVar2 = TShaderParameterStructTypeInfo<NiagaraStateless::FScaleSpriteSizeModule_ShaderParameters>
           ::GetStructMetadata();
  param_1->ParameterOffset = pFVar2->Size + (iVar1 + 0xfU & 0xfffffff0);
  return;
}

// GetPrivateStaticClass @ 14944c1f0

UClass * __cdecl UNiagaraStatelessModule_ScaleSpriteSize::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleSpriteSize.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_ScaleSpriteSize",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleSpriteSize.InnerSingleton,
               StaticRegisterNativesUNiagaraStatelessModule_ScaleSpriteSize,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraStatelessModule_ScaleSpriteSize>
               ,InternalVTableHelperCtorCaller<UNiagaraStatelessModule_ScaleSpriteSize>,local_res8,
               UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleSpriteSize.InnerSingleton;
}

// PostInitProperties @ 1494600c0

void __thiscall
UNiagaraStatelessModule_ScaleSpriteSize::PostInitProperties
          (UNiagaraStatelessModule_ScaleSpriteSize *this)

{
  FTlsAutoCleanup FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  UNiagaraStatelessModule_ScaleSpriteSize *pUStack_28;
  code *pcStack_20;
  undefined1 *puStack_18;
  
  puVar5 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_18 = auStackX_8;
  pcStack_20 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_20,puVar5);
  FVar1 = (FTlsAutoCleanup)(pFVar6 + 0xb);
  FVar7 = pFVar6[0x1b];
  if (pFVar6[0x1b] == (FTlsAutoCleanup)0x0) {
    FVar7 = FVar1;
  }
  pUStack_28 = this;
  if (((ulonglong)FVar7 <= &pUStack_28) &&
     (&pUStack_28 <
      (UNiagaraStatelessModule_ScaleSpriteSize **)
      ((longlong)FVar7 + (longlong)*(int *)&pFVar6[0x1c].field_0x4 * 8))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = *(int *)(pFVar6 + 0x1c);
  if (iVar4 == *(int *)&pFVar6[0x1c].field_0x4) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_*>_>
                      (0x808,(ForElementType<UObject_*> *)FVar1,(int *)&pFVar6[0x1c].field_0x4);
  }
  *(int *)(pFVar6 + 0x1c) = iVar4 + 1;
  FVar7 = pFVar6[0x1b];
  if (pFVar6[0x1b] == (FTlsAutoCleanup)0x0) {
    FVar7 = FVar1;
  }
  *(UNiagaraStatelessModule_ScaleSpriteSize **)((longlong)FVar7 + (longlong)iVar4 * 8) = pUStack_28;
  (**(code **)(*(longlong *)this->_padding_ + 0x3a8))((longlong *)this->_padding_,this,1,0,0);
  if (FOverridableManager::OverridableManager != (FOverridableManager *)0x0) {
    FOverridableManager::ClearOverrides
              (FOverridableManager::OverridableManager,(TNotNull<UObject_*>)this);
  }
  return;
}

// SetShaderParameters @ 149466680

void __thiscall
UNiagaraStatelessModule_ScaleSpriteSize::SetShaderParameters
          (UNiagaraStatelessModule_ScaleSpriteSize *this,
          FNiagaraStatelessSetShaderParameterContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FShaderParametersMetadata *pFVar4;
  uchar *puVar5;
  uint uVar6;
  uchar *puVar7;
  
  uVar6 = param_1->BuiltDataOffset + 3U & 0xfffffffc;
  iVar1 = uVar6 + 0x20;
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
  puVar5 = (param_1->BuiltData).DataPtr + (int)uVar6;
  uVar6 = param_1->ParameterOffset + 0xf & 0xfffffff0;
  pFVar4 = TShaderParameterStructTypeInfo<NiagaraStateless::FScaleSpriteSizeModule_ShaderParameters>
           ::GetStructMetadata();
  FNiagaraStatelessSetShaderParameterContext::ValidateIncludeStructType(param_1,uVar6,pFVar4);
  pFVar4 = TShaderParameterStructTypeInfo<NiagaraStateless::FScaleSpriteSizeModule_ShaderParameters>
           ::GetStructMetadata();
  puVar7 = param_1->ShaderParametersBase + uVar6;
  param_1->ParameterOffset = pFVar4->Size + uVar6;
  *(undefined8 *)puVar7 = *(undefined8 *)puVar5;
  *(undefined4 *)(puVar7 + 8) = *(undefined4 *)(puVar5 + 8);
  if (*(int *)(puVar5 + 0x14) != -1) {
    iVar1 = *(int *)(puVar5 + 0x14) * 4;
    if ((iVar1 < 0) ||
       ((ulonglong)(longlong)(param_1->RendererParameterData).ArrayNum < (longlong)iVar1 + 8U)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset >= 0 && Offset + sizeof(TValueType) <= RendererParameterData.Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessSetShaderParameterContext.h"
                         ,0x2d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(undefined8 *)(puVar7 + 0x10) =
         *(undefined8 *)((param_1->RendererParameterData).DataPtr + iVar1);
    return;
  }
  *(undefined8 *)(puVar7 + 0x10) = *(undefined8 *)(puVar5 + 0xc);
  return;
}

// StaticRegisterNativesUNiagaraStatelessModule_ScaleSpriteSize @ 149469dd0

void __cdecl
UNiagaraStatelessModule_ScaleSpriteSize::
StaticRegisterNativesUNiagaraStatelessModule_ScaleSpriteSize(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSize_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execUseScaleCurveRange @ 149472390

void __cdecl
UNiagaraStatelessModule_ScaleSpriteSize::execUseScaleCurveRange
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((param_1[1].field_0x10 != '\a') && (param_1[1].field_0x10 != '\b')) {
    *(undefined1 *)param_3 = 0;
    return;
  }
  *(undefined1 *)param_3 = 1;
  return;
}

