// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 9

// StaticClass @ 149411620

UClass * __cdecl UNiagaraStatelessModule_ScaleColor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleColor.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_ScaleColor",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleColor.InnerSingleton,
               StaticRegisterNativesUNiagaraStatelessModule_ScaleColor,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraStatelessModule_ScaleColor>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_ScaleColor>,local_res8,
               UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleColor.InnerSingleton;
}

// UNiagaraStatelessModule_ScaleColor @ 149429d20

UNiagaraStatelessModule_ScaleColor * __thiscall
UNiagaraStatelessModule_ScaleColor::UNiagaraStatelessModule_ScaleColor
          (UNiagaraStatelessModule_ScaleColor *this,FVTableHelper *param_1)

{
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_ScaleColor__6B_;
  FNiagaraDistributionColor::FNiagaraDistributionColor
            (&this->ScaleDistribution,&FLinearColor::White);
  return this;
}

// UNiagaraStatelessModule_ScaleColor @ 149429d60

UNiagaraStatelessModule_ScaleColor * __thiscall
UNiagaraStatelessModule_ScaleColor::UNiagaraStatelessModule_ScaleColor
          (UNiagaraStatelessModule_ScaleColor *this)

{
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_ScaleColor__6B_;
  FNiagaraDistributionColor::FNiagaraDistributionColor
            (&this->ScaleDistribution,&FLinearColor::White);
  return this;
}

// ~UNiagaraStatelessModule_ScaleColor @ 14942cb80

void __thiscall
UNiagaraStatelessModule_ScaleColor::~UNiagaraStatelessModule_ScaleColor
          (UNiagaraStatelessModule_ScaleColor *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_ScaleColor__6B_;
  pFVar1 = (this->ScaleDistribution).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&(this->ScaleDistribution)._padding_);
  UNiagaraStatelessModule::~UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  return;
}

// BuildEmitterData @ 149434ba0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
UNiagaraStatelessModule_ScaleColor::BuildEmitterData
          (UNiagaraStatelessModule_ScaleColor *this,
          FNiagaraStatelessEmitterDataBuildContext *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  bool bVar2;
  int iVar3;
  TIntVector3<unsigned_int> *pTVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  TIntVector3<unsigned_int> local_48;
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  pTVar1 = param_1->BuiltData;
  uVar7 = pTVar1->ArrayNum + 3U & 0xfffffffc;
  iVar5 = (uVar7 - pTVar1->ArrayNum) + 0x10;
  iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar5,&pTVar1->AllocatorInstance,&pTVar1->ArrayNum,&pTVar1->ArrayMax);
  memset((pTVar1->AllocatorInstance).Data + iVar3,0,(longlong)iVar5);
  pFVar6 = (param_1->BuiltData->AllocatorInstance).Data + (int)uVar7;
  *(undefined8 *)pFVar6 = 0;
  *(undefined8 *)(pFVar6 + 8) = 0;
  *(undefined8 *)pFVar6 = UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._0_8_;
  *(uint *)(pFVar6 + 8) = UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Z;
  *(undefined4 *)(pFVar6 + 0xc) = 0xffffffff;
  bVar2 = UNiagaraStatelessModule::IsModuleEnabled((UNiagaraStatelessModule *)this);
  if (bVar2) {
    iVar3 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                      (param_1,&NiagaraStatelessCommon::GGlobals.ColorVariable);
    *(int *)(pFVar6 + 0xc) = iVar3;
    if (iVar3 != -1) {
      pTVar4 = FNiagaraStatelessEmitterDataBuildContext::AddDistribution<FNiagaraDistributionColor>
                         (param_1,&local_48,&this->ScaleDistribution);
      local_10 = 0;
      *(undefined8 *)pFVar6 = *(undefined8 *)&pTVar4->field0_0x0;
      *(uint *)(pFVar6 + 8) = (pTVar4->field0_0x0)._s_0.Z;
      local_28 = &
                 ___7__TFunction_OwnedObject_P6AXAEBVFParticleSimulationContext_NiagaraStateless___Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      local_20 = NSMScaleColorPrivate::ParticleSimulate;
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

// BuildShaderParameters @ 14943a9d0

void __thiscall
UNiagaraStatelessModule_ScaleColor::BuildShaderParameters
          (UNiagaraStatelessModule_ScaleColor *this,
          FNiagaraStatelessShaderParametersBuilder *param_1)

{
  int iVar1;
  FShaderParametersMetadataBuilder *this_00;
  FShaderParametersMetadata *pFVar2;
  
  iVar1 = param_1->ParameterOffset;
  this_00 = param_1->MetadataBuilder;
  if (this_00 != (FShaderParametersMetadataBuilder *)0x0) {
    pFVar2 = TShaderParameterStructTypeInfo<NiagaraStateless::FScaleColorModule_ShaderParameters>::
             GetStructMetadata();
    FShaderParametersMetadataBuilder::AddIncludedStruct(this_00,pFVar2,Float);
  }
  pFVar2 = TShaderParameterStructTypeInfo<NiagaraStateless::FScaleColorModule_ShaderParameters>::
           GetStructMetadata();
  param_1->ParameterOffset = pFVar2->Size + (iVar1 + 0xfU & 0xfffffff0);
  return;
}

// GetPrivateStaticClass @ 14944bef0

UClass * __cdecl UNiagaraStatelessModule_ScaleColor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleColor.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_ScaleColor",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleColor.InnerSingleton,
               StaticRegisterNativesUNiagaraStatelessModule_ScaleColor,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraStatelessModule_ScaleColor>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_ScaleColor>,local_res8,
               UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleColor.InnerSingleton;
}

// SetShaderParameters @ 1494661f0

void __thiscall
UNiagaraStatelessModule_ScaleColor::SetShaderParameters
          (UNiagaraStatelessModule_ScaleColor *this,
          FNiagaraStatelessSetShaderParameterContext *param_1)

{
  int iVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  FShaderParametersMetadata *pFVar5;
  uint uVar6;
  uchar *puVar7;
  
  uVar6 = param_1->BuiltDataOffset + 3U & 0xfffffffc;
  iVar1 = uVar6 + 0x10;
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
  puVar7 = (param_1->BuiltData).DataPtr + (int)uVar6;
  uVar6 = param_1->ParameterOffset + 0xf & 0xfffffff0;
  pFVar5 = TShaderParameterStructTypeInfo<NiagaraStateless::FScaleColorModule_ShaderParameters>::
           GetStructMetadata();
  FNiagaraStatelessSetShaderParameterContext::ValidateIncludeStructType(param_1,uVar6,pFVar5);
  pFVar5 = TShaderParameterStructTypeInfo<NiagaraStateless::FScaleColorModule_ShaderParameters>::
           GetStructMetadata();
  puVar2 = param_1->ShaderParametersBase;
  param_1->ParameterOffset = pFVar5->Size + uVar6;
  *(undefined8 *)(puVar2 + uVar6) = *(undefined8 *)puVar7;
  *(undefined4 *)(puVar2 + (ulonglong)uVar6 + 8) = *(undefined4 *)(puVar7 + 8);
  return;
}

// StaticRegisterNativesUNiagaraStatelessModule_ScaleColor @ 149469d30

void __cdecl
UNiagaraStatelessModule_ScaleColor::StaticRegisterNativesUNiagaraStatelessModule_ScaleColor(void)

{
  return;
}

