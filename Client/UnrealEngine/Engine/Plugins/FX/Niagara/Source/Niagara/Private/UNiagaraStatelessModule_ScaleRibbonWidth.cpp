// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 11

// StaticClass @ 1494133c0

UClass * __cdecl UNiagaraStatelessModule_ScaleRibbonWidth::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleRibbonWidth.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_ScaleRibbonWidth",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleRibbonWidth.InnerSingleton,
               StaticRegisterNativesUNiagaraStatelessModule_ScaleRibbonWidth,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraStatelessModule_ScaleRibbonWidth>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_ScaleRibbonWidth>,local_res8,
               UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleRibbonWidth.InnerSingleton;
}

// UNiagaraStatelessModule_ScaleRibbonWidth @ 14942a040

UNiagaraStatelessModule_ScaleRibbonWidth * __thiscall
UNiagaraStatelessModule_ScaleRibbonWidth::UNiagaraStatelessModule_ScaleRibbonWidth
          (UNiagaraStatelessModule_ScaleRibbonWidth *this,FVTableHelper *param_1)

{
  float fVar1;
  int iVar2;
  
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this,param_1);
  fVar1 = __real_3f800000;
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_ScaleRibbonWidth__6B_;
  FNiagaraDistributionFloat::FNiagaraDistributionFloat(&this->ScaleDistribution,fVar1);
  (this->ScaleCurveRange)._padding_ = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&(this->ScaleCurveRange)._padding_,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&(this->ScaleCurveRange)._padding_ = iVar2;
  (this->ScaleCurveRange).DefaultValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScaleCurveRange).DefaultValue.ArrayNum = 0;
  (this->ScaleCurveRange).DefaultValue.ArrayMax = 0;
  return this;
}

// UNiagaraStatelessModule_ScaleRibbonWidth @ 14942a0c0

UNiagaraStatelessModule_ScaleRibbonWidth * __thiscall
UNiagaraStatelessModule_ScaleRibbonWidth::UNiagaraStatelessModule_ScaleRibbonWidth
          (UNiagaraStatelessModule_ScaleRibbonWidth *this)

{
  float fVar1;
  int iVar2;
  
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  fVar1 = __real_3f800000;
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_ScaleRibbonWidth__6B_;
  FNiagaraDistributionFloat::FNiagaraDistributionFloat(&this->ScaleDistribution,fVar1);
  (this->ScaleCurveRange)._padding_ = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&(this->ScaleCurveRange)._padding_,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&(this->ScaleCurveRange)._padding_ = iVar2;
  (this->ScaleCurveRange).DefaultValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScaleCurveRange).DefaultValue.ArrayNum = 0;
  (this->ScaleCurveRange).DefaultValue.ArrayMax = 0;
  return this;
}

// ~UNiagaraStatelessModule_ScaleRibbonWidth @ 14942cc80

void __thiscall
UNiagaraStatelessModule_ScaleRibbonWidth::~UNiagaraStatelessModule_ScaleRibbonWidth
          (UNiagaraStatelessModule_ScaleRibbonWidth *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_ScaleRibbonWidth__6B_;
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

// BuildEmitterData @ 149435320

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
UNiagaraStatelessModule_ScaleRibbonWidth::BuildEmitterData
          (UNiagaraStatelessModule_ScaleRibbonWidth *this,
          FNiagaraStatelessEmitterDataBuildContext *param_1)

{
  char cVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  TIntVector3<unsigned_int> *pTVar8;
  int iVar9;
  uint uVar10;
  TIntVector3<unsigned_int> local_48;
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  pTVar2 = param_1->BuiltData;
  uVar10 = pTVar2->ArrayNum + 3U & 0xfffffffc;
  iVar9 = (uVar10 - pTVar2->ArrayNum) + 0x1c;
  iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar9,&pTVar2->AllocatorInstance,&pTVar2->ArrayNum,&pTVar2->ArrayMax);
  memset((pTVar2->AllocatorInstance).Data + iVar7,0,(longlong)iVar9);
  pFVar3 = (param_1->BuiltData->AllocatorInstance).Data;
  *(undefined8 *)(pFVar3 + (int)uVar10) = 0;
  *(undefined8 *)(pFVar3 + (int)uVar10 + 8) = 0;
  *(undefined8 *)(pFVar3 + (longlong)(int)uVar10 + 0x10) = 0;
  *(undefined4 *)(pFVar3 + (longlong)(int)uVar10 + 0x18) = 0;
  *(undefined8 *)(pFVar3 + (int)uVar10) =
       UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._0_8_;
  *(uint *)(pFVar3 + (longlong)(int)uVar10 + 8) =
       UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Z;
  *(undefined4 *)(pFVar3 + (longlong)(int)uVar10 + 0xc) = 0x3f800000;
  *(undefined8 *)(pFVar3 + (longlong)(int)uVar10 + 0x10) = 0xffffffffffffffff;
  *(undefined4 *)(pFVar3 + (longlong)(int)uVar10 + 0x18) = 0xffffffff;
  iVar7 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                    (param_1,&NiagaraStatelessCommon::GGlobals.RibbonWidthVariable);
  *(int *)(pFVar3 + (longlong)(int)uVar10 + 0x14) = iVar7;
  iVar7 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                    (param_1,&NiagaraStatelessCommon::GGlobals.PreviousRibbonWidthVariable);
  *(int *)(pFVar3 + (longlong)(int)uVar10 + 0x18) = iVar7;
  if ((*(int *)(pFVar3 + (longlong)(int)uVar10 + 0x14) == -1) && (iVar7 == -1)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  bVar5 = UNiagaraStatelessModule::IsModuleEnabled((UNiagaraStatelessModule *)this);
  if ((bVar5) && (bVar6)) {
    pTVar8 = FNiagaraStatelessEmitterDataBuildContext::AddDistribution<FNiagaraDistributionFloat>
                       (param_1,&local_48,&this->ScaleDistribution);
    *(undefined8 *)(pFVar3 + (int)uVar10) = *(undefined8 *)&pTVar8->field0_0x0;
    *(uint *)(pFVar3 + (longlong)(int)uVar10 + 8) = (pTVar8->field0_0x0)._s_0.Z;
    cVar1 = (char)(this->ScaleDistribution)._padding_;
    if ((cVar1 == '\a') || (cVar1 == '\b')) {
      iVar7 = FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
                        (param_1,(FNiagaraVariableBase *)&this->ScaleCurveRange);
      *(int *)(pFVar3 + (longlong)(int)uVar10 + 0x10) = iVar7;
      if ((this->ScaleCurveRange).DefaultValue.ArrayNum != 4) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("DefaultValue.Num() == sizeof(T)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterBinding.h"
                           ,0x8a,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      *(undefined4 *)(pFVar3 + (longlong)(int)uVar10 + 0xc) =
           *(undefined4 *)(this->ScaleCurveRange).DefaultValue.AllocatorInstance.Data;
    }
    local_10 = 0;
    local_28 = &
               ___7__TFunction_OwnedObject_P6AXAEBVFParticleSimulationContext_NiagaraStateless___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_20 = NSMScaleRibbonWidthPrivate::ParticleSimulate;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<void_(__cdecl*)(NiagaraStateless::FParticleSimulationContext_const_&),void,NiagaraStateless::FParticleSimulationContext_const_&>
                  ::Call;
    FNiagaraStatelessEmitterDataBuildContext::AddParticleSimulationExecSimulate
              (param_1,(TFunction<void___cdecl(NiagaraStateless::FParticleSimulationContext_const_&)>
                        *)local_38);
  }
  return;
}

// BuildShaderParameters @ 14943aaf0

void __thiscall
UNiagaraStatelessModule_ScaleRibbonWidth::BuildShaderParameters
          (UNiagaraStatelessModule_ScaleRibbonWidth *this,
          FNiagaraStatelessShaderParametersBuilder *param_1)

{
  int iVar1;
  FShaderParametersMetadataBuilder *this_00;
  FShaderParametersMetadata *pFVar2;
  
  iVar1 = param_1->ParameterOffset;
  this_00 = param_1->MetadataBuilder;
  if (this_00 != (FShaderParametersMetadataBuilder *)0x0) {
    pFVar2 = TShaderParameterStructTypeInfo<NiagaraStateless::FScaleRibbonWidthModule_ShaderParameters>
             ::GetStructMetadata();
    FShaderParametersMetadataBuilder::AddIncludedStruct(this_00,pFVar2,Float);
  }
  pFVar2 = TShaderParameterStructTypeInfo<NiagaraStateless::FScaleRibbonWidthModule_ShaderParameters>
           ::GetStructMetadata();
  param_1->ParameterOffset = pFVar2->Size + (iVar1 + 0xfU & 0xfffffff0);
  return;
}

// GetPrivateStaticClass @ 14944c130

UClass * __cdecl UNiagaraStatelessModule_ScaleRibbonWidth::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleRibbonWidth.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_ScaleRibbonWidth",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleRibbonWidth.InnerSingleton,
               StaticRegisterNativesUNiagaraStatelessModule_ScaleRibbonWidth,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraStatelessModule_ScaleRibbonWidth>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_ScaleRibbonWidth>,local_res8,
               UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleRibbonWidth.InnerSingleton;
}

// PostInitProperties @ 1494600b0

void __thiscall
UNiagaraStatelessModule_ScaleRibbonWidth::PostInitProperties
          (UNiagaraStatelessModule_ScaleRibbonWidth *this)

{
  FTlsAutoCleanup FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  UNiagaraStatelessModule_ScaleRibbonWidth *pUStack_28;
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
      (UNiagaraStatelessModule_ScaleRibbonWidth **)
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
  *(UNiagaraStatelessModule_ScaleRibbonWidth **)((longlong)FVar7 + (longlong)iVar4 * 8) = pUStack_28
  ;
  (**(code **)(*(longlong *)this->_padding_ + 0x3a8))((longlong *)this->_padding_,this,1,0,0);
  if (FOverridableManager::OverridableManager != (FOverridableManager *)0x0) {
    FOverridableManager::ClearOverrides
              (FOverridableManager::OverridableManager,(TNotNull<UObject_*>)this);
  }
  return;
}

// SetShaderParameters @ 1494665a0

void __thiscall
UNiagaraStatelessModule_ScaleRibbonWidth::SetShaderParameters
          (UNiagaraStatelessModule_ScaleRibbonWidth *this,
          FNiagaraStatelessSetShaderParameterContext *param_1)

{
  uchar *puVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  FShaderParametersMetadata *pFVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  
  uVar6 = param_1->BuiltDataOffset + 3U & 0xfffffffc;
  param_1->BuiltDataOffset = uVar6 + 0x1c;
  if ((param_1->BuiltData).ArrayNum < (int)(uVar6 + 0x1c)) {
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
  puVar1 = (param_1->BuiltData).DataPtr;
  uVar7 = param_1->ParameterOffset + 0xf & 0xfffffff0;
  pFVar5 = TShaderParameterStructTypeInfo<NiagaraStateless::FScaleRibbonWidthModule_ShaderParameters>
           ::GetStructMetadata();
  FNiagaraStatelessSetShaderParameterContext::ValidateIncludeStructType(param_1,uVar7,pFVar5);
  pFVar5 = TShaderParameterStructTypeInfo<NiagaraStateless::FScaleRibbonWidthModule_ShaderParameters>
           ::GetStructMetadata();
  puVar2 = param_1->ShaderParametersBase;
  param_1->ParameterOffset = pFVar5->Size + uVar7;
  *(undefined8 *)(puVar2 + uVar7) = *(undefined8 *)(puVar1 + (int)uVar6);
  *(undefined4 *)(puVar2 + (ulonglong)uVar7 + 8) =
       *(undefined4 *)(puVar1 + (longlong)(int)uVar6 + 8);
  fVar8 = FNiagaraStatelessSetShaderParameterContext::GetRendererParameterValue<float>
                    (param_1,*(int *)(puVar1 + (longlong)(int)uVar6 + 0x10),
                     (float *)(puVar1 + (longlong)(int)uVar6 + 0xc));
  *(float *)(puVar2 + (ulonglong)uVar7 + 0xc) = fVar8;
  return;
}

// StaticRegisterNativesUNiagaraStatelessModule_ScaleRibbonWidth @ 149469d90

void __cdecl
UNiagaraStatelessModule_ScaleRibbonWidth::
StaticRegisterNativesUNiagaraStatelessModule_ScaleRibbonWidth(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UNiagaraStatelessModule_ScaleRibbonWidth_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execUseScaleCurveRange @ 149472350

void __cdecl
UNiagaraStatelessModule_ScaleRibbonWidth::execUseScaleCurveRange
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

