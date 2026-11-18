// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 11

// StaticClass @ 149411d20

UClass * __cdecl UNiagaraStatelessModule_ScaleMeshSize::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleMeshSize.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_ScaleMeshSize",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleMeshSize.InnerSingleton,
               StaticRegisterNativesUNiagaraStatelessModule_ScaleMeshSize,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraStatelessModule_ScaleMeshSize>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_ScaleMeshSize>,local_res8,
               UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleMeshSize.InnerSingleton;
}

// UNiagaraStatelessModule_ScaleMeshSize @ 149429da0

UNiagaraStatelessModule_ScaleMeshSize * __thiscall
UNiagaraStatelessModule_ScaleMeshSize::UNiagaraStatelessModule_ScaleMeshSize
          (UNiagaraStatelessModule_ScaleMeshSize *this,FVTableHelper *param_1)

{
  int iVar1;
  
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_ScaleMeshSize__6B_;
  FNiagaraDistributionVector3::FNiagaraDistributionVector3
            (&this->ScaleDistribution,&UE::Math::TVector<float>::OneVector);
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

// UNiagaraStatelessModule_ScaleMeshSize @ 149429e20

UNiagaraStatelessModule_ScaleMeshSize * __thiscall
UNiagaraStatelessModule_ScaleMeshSize::UNiagaraStatelessModule_ScaleMeshSize
          (UNiagaraStatelessModule_ScaleMeshSize *this)

{
  int iVar1;
  
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_ScaleMeshSize__6B_;
  FNiagaraDistributionVector3::FNiagaraDistributionVector3
            (&this->ScaleDistribution,&UE::Math::TVector<float>::OneVector);
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

// ~UNiagaraStatelessModule_ScaleMeshSize @ 14942cbc0

void __thiscall
UNiagaraStatelessModule_ScaleMeshSize::~UNiagaraStatelessModule_ScaleMeshSize
          (UNiagaraStatelessModule_ScaleMeshSize *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_ScaleMeshSize__6B_;
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

// BuildEmitterData @ 149434ce0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
UNiagaraStatelessModule_ScaleMeshSize::BuildEmitterData
          (UNiagaraStatelessModule_ScaleMeshSize *this,
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
  FScriptContainerElement *pFVar9;
  uint uVar10;
  TIntVector3<unsigned_int> local_48;
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  pTVar2 = param_1->BuiltData;
  uVar10 = pTVar2->ArrayNum + 3U & 0xfffffffc;
  iVar8 = (uVar10 - pTVar2->ArrayNum) + 0x24;
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar8,&pTVar2->AllocatorInstance,&pTVar2->ArrayNum,&pTVar2->ArrayMax);
  memset((pTVar2->AllocatorInstance).Data + iVar6,0,(longlong)iVar8);
  pFVar9 = (param_1->BuiltData->AllocatorInstance).Data + (int)uVar10;
  *(undefined8 *)pFVar9 = 0;
  *(undefined8 *)(pFVar9 + 8) = 0;
  *(undefined8 *)(pFVar9 + 0x10) = 0;
  *(undefined8 *)(pFVar9 + 0x18) = 0;
  *(undefined4 *)(pFVar9 + 0x20) = 0;
  *(undefined8 *)pFVar9 = UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._0_8_;
  *(uint *)(pFVar9 + 8) = UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Z;
  *(undefined8 *)(pFVar9 + 0xc) = UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
  *(float *)(pFVar9 + 0x14) = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  *(undefined8 *)(pFVar9 + 0x18) = 0xffffffffffffffff;
  *(undefined4 *)(pFVar9 + 0x20) = 0xffffffff;
  bVar5 = UNiagaraStatelessModule::IsModuleEnabled((UNiagaraStatelessModule *)this);
  if (bVar5) {
    iVar6 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                      (param_1,&NiagaraStatelessCommon::GGlobals.ScaleVariable);
    *(int *)(pFVar9 + 0x1c) = iVar6;
    iVar6 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                      (param_1,&NiagaraStatelessCommon::GGlobals.PreviousScaleVariable);
    *(int *)(pFVar9 + 0x20) = iVar6;
    if ((*(int *)(pFVar9 + 0x1c) != -1) || (iVar6 != -1)) {
      pTVar7 = FNiagaraStatelessEmitterDataBuildContext::
               AddDistribution<FNiagaraDistributionVector3>
                         (param_1,&local_48,&this->ScaleDistribution);
      *(undefined8 *)pFVar9 = *(undefined8 *)&pTVar7->field0_0x0;
      *(uint *)(pFVar9 + 8) = (pTVar7->field0_0x0)._s_0.Z;
      cVar1 = (char)(this->ScaleDistribution)._padding_;
      if ((cVar1 == '\a') || (cVar1 == '\b')) {
        iVar6 = FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
                          (param_1,(FNiagaraVariableBase *)&this->ScaleCurveRange);
        *(int *)(pFVar9 + 0x18) = iVar6;
        if ((this->ScaleCurveRange).DefaultValue.ArrayNum != 0xc) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("DefaultValue.Num() == sizeof(T)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterBinding.h"
                             ,0x8a,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        pFVar3 = (this->ScaleCurveRange).DefaultValue.AllocatorInstance.Data;
        *(undefined8 *)(pFVar9 + 0xc) = *(undefined8 *)pFVar3;
        *(undefined4 *)(pFVar9 + 0x14) = *(undefined4 *)(pFVar3 + 8);
      }
      local_10 = 0;
      local_28 = &
                 ___7__TFunction_OwnedObject_P6AXAEBVFParticleSimulationContext_NiagaraStateless___Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      local_20 = NSMScaleMeshSizePrivate::ParticleSimulate;
      local_38[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<void_(__cdecl*)(NiagaraStateless::FParticleSimulationContext_const_&),void,NiagaraStateless::FParticleSimulationContext_const_&>
                    ::Call;
      FNiagaraStatelessEmitterDataBuildContext::AddParticleSimulationExecSimulate
                (param_1,(TFunction<void___cdecl(NiagaraStateless::FParticleSimulationContext_const_&)>
                          *)local_38);
    }
  }
  return;
}

// BuildShaderParameters @ 14943aa30

void __thiscall
UNiagaraStatelessModule_ScaleMeshSize::BuildShaderParameters
          (UNiagaraStatelessModule_ScaleMeshSize *this,
          FNiagaraStatelessShaderParametersBuilder *param_1)

{
  int iVar1;
  FShaderParametersMetadataBuilder *this_00;
  FShaderParametersMetadata *pFVar2;
  
  iVar1 = param_1->ParameterOffset;
  this_00 = param_1->MetadataBuilder;
  if (this_00 != (FShaderParametersMetadataBuilder *)0x0) {
    pFVar2 = TShaderParameterStructTypeInfo<NiagaraStateless::FScaleMeshSizeModule_ShaderParameters>
             ::GetStructMetadata();
    FShaderParametersMetadataBuilder::AddIncludedStruct(this_00,pFVar2,Float);
  }
  pFVar2 = TShaderParameterStructTypeInfo<NiagaraStateless::FScaleMeshSizeModule_ShaderParameters>::
           GetStructMetadata();
  param_1->ParameterOffset = pFVar2->Size + (iVar1 + 0xfU & 0xfffffff0);
  return;
}

// GetPrivateStaticClass @ 14944bfb0

UClass * __cdecl UNiagaraStatelessModule_ScaleMeshSize::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleMeshSize.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_ScaleMeshSize",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleMeshSize.InnerSingleton,
               StaticRegisterNativesUNiagaraStatelessModule_ScaleMeshSize,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraStatelessModule_ScaleMeshSize>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_ScaleMeshSize>,local_res8,
               UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleMeshSize.InnerSingleton;
}

// PostInitProperties @ 1494600a0

void __thiscall
UNiagaraStatelessModule_ScaleMeshSize::PostInitProperties
          (UNiagaraStatelessModule_ScaleMeshSize *this)

{
  FTlsAutoCleanup FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  UNiagaraStatelessModule_ScaleMeshSize *pUStack_28;
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
      (UNiagaraStatelessModule_ScaleMeshSize **)
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
  *(UNiagaraStatelessModule_ScaleMeshSize **)((longlong)FVar7 + (longlong)iVar4 * 8) = pUStack_28;
  (**(code **)(*(longlong *)this->_padding_ + 0x3a8))((longlong *)this->_padding_,this,1,0,0);
  if (FOverridableManager::OverridableManager != (FOverridableManager *)0x0) {
    FOverridableManager::ClearOverrides
              (FOverridableManager::OverridableManager,(TNotNull<UObject_*>)this);
  }
  return;
}

// SetShaderParameters @ 1494662a0

void __thiscall
UNiagaraStatelessModule_ScaleMeshSize::SetShaderParameters
          (UNiagaraStatelessModule_ScaleMeshSize *this,
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
  iVar1 = uVar6 + 0x24;
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
  puVar7 = (param_1->BuiltData).DataPtr + (int)uVar6;
  uVar6 = param_1->ParameterOffset + 0xf & 0xfffffff0;
  pFVar4 = TShaderParameterStructTypeInfo<NiagaraStateless::FScaleMeshSizeModule_ShaderParameters>::
           GetStructMetadata();
  FNiagaraStatelessSetShaderParameterContext::ValidateIncludeStructType(param_1,uVar6,pFVar4);
  pFVar4 = TShaderParameterStructTypeInfo<NiagaraStateless::FScaleMeshSizeModule_ShaderParameters>::
           GetStructMetadata();
  param_1->ParameterOffset = pFVar4->Size + uVar6;
  puVar5 = param_1->ShaderParametersBase + uVar6;
  *(undefined8 *)puVar5 = *(undefined8 *)puVar7;
  *(undefined4 *)(puVar5 + 8) = *(undefined4 *)(puVar7 + 8);
  *(undefined8 *)(puVar5 + 0x10) = *(undefined8 *)(puVar7 + 0xc);
  *(undefined4 *)(puVar5 + 0x18) = *(undefined4 *)(puVar7 + 0x14);
  *(undefined4 *)(puVar5 + 0x1c) = *(undefined4 *)(puVar7 + 0x18);
  return;
}

// StaticRegisterNativesUNiagaraStatelessModule_ScaleMeshSize @ 149469d40

void __cdecl
UNiagaraStatelessModule_ScaleMeshSize::StaticRegisterNativesUNiagaraStatelessModule_ScaleMeshSize
          (void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSize_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execUseScaleCurveRange @ 149472310

void __cdecl
UNiagaraStatelessModule_ScaleMeshSize::execUseScaleCurveRange
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

