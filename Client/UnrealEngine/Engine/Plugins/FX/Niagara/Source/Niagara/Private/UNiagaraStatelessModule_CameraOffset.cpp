// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 9

// StaticClass @ 1494119b0

UClass * __cdecl UNiagaraStatelessModule_CameraOffset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_CameraOffset.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_CameraOffset",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_CameraOffset.InnerSingleton,
               StaticRegisterNativesUNiagaraStatelessModule_CameraOffset,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraStatelessModule_CameraOffset>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_CameraOffset>,local_res8,
               UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_CameraOffset.InnerSingleton;
}

// UNiagaraStatelessModule_CameraOffset @ 149428fa0

UNiagaraStatelessModule_CameraOffset * __thiscall
UNiagaraStatelessModule_CameraOffset::UNiagaraStatelessModule_CameraOffset
          (UNiagaraStatelessModule_CameraOffset *this,FVTableHelper *param_1)

{
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_CameraOffset__6B_;
  FNiagaraDistributionFloat::FNiagaraDistributionFloat(&this->CameraOffsetDistribution,0.0);
  return this;
}

// UNiagaraStatelessModule_CameraOffset @ 149428fe0

UNiagaraStatelessModule_CameraOffset * __thiscall
UNiagaraStatelessModule_CameraOffset::UNiagaraStatelessModule_CameraOffset
          (UNiagaraStatelessModule_CameraOffset *this)

{
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_CameraOffset__6B_;
  FNiagaraDistributionFloat::FNiagaraDistributionFloat(&this->CameraOffsetDistribution,0.0);
  return this;
}

// ~UNiagaraStatelessModule_CameraOffset @ 14942c730

void __thiscall
UNiagaraStatelessModule_CameraOffset::~UNiagaraStatelessModule_CameraOffset
          (UNiagaraStatelessModule_CameraOffset *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_CameraOffset__6B_;
  pFVar1 = (this->CameraOffsetDistribution).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&(this->CameraOffsetDistribution)._padding_);
  UNiagaraStatelessModule::~UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  return;
}

// BuildEmitterData @ 149432070

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
UNiagaraStatelessModule_CameraOffset::BuildEmitterData
          (UNiagaraStatelessModule_CameraOffset *this,
          FNiagaraStatelessEmitterDataBuildContext *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  TIntVector3<unsigned_int> *pTVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  TIntVector3<unsigned_int> local_48;
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  pTVar1 = param_1->BuiltData;
  uVar7 = pTVar1->ArrayNum + 3U & 0xfffffffc;
  iVar6 = (uVar7 - pTVar1->ArrayNum) + 0x14;
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar6,&pTVar1->AllocatorInstance,&pTVar1->ArrayNum,&pTVar1->ArrayMax);
  memset((pTVar1->AllocatorInstance).Data + iVar4,0,(longlong)iVar6);
  pFVar8 = (param_1->BuiltData->AllocatorInstance).Data + (int)uVar7;
  *(undefined8 *)pFVar8 = 0;
  *(undefined8 *)(pFVar8 + 8) = 0;
  *(undefined4 *)(pFVar8 + 0x10) = 0;
  *(undefined8 *)pFVar8 = UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._0_8_;
  *(uint *)(pFVar8 + 8) = UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Z;
  *(undefined8 *)(pFVar8 + 0xc) = 0xffffffffffffffff;
  iVar4 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                    (param_1,&NiagaraStatelessCommon::GGlobals.CameraOffsetVariable);
  *(int *)(pFVar8 + 0xc) = iVar4;
  iVar4 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                    (param_1,&NiagaraStatelessCommon::GGlobals.PreviousCameraOffsetVariable);
  *(int *)(pFVar8 + 0x10) = iVar4;
  if ((*(int *)(pFVar8 + 0xc) == -1) && (iVar4 == -1)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  bVar3 = UNiagaraStatelessModule::IsModuleEnabled((UNiagaraStatelessModule *)this);
  if ((bVar3) && (bVar2)) {
    pTVar5 = FNiagaraStatelessEmitterDataBuildContext::AddDistribution<FNiagaraDistributionFloat>
                       (param_1,&local_48,&this->CameraOffsetDistribution);
    local_10 = 0;
    *(undefined8 *)pFVar8 = *(undefined8 *)&pTVar5->field0_0x0;
    *(uint *)(pFVar8 + 8) = (pTVar5->field0_0x0)._s_0.Z;
    local_28 = &
               ___7__TFunction_OwnedObject_P6AXAEBVFParticleSimulationContext_NiagaraStateless___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_20 = NSMCameraOffsetPrivate::ParticleSimulate;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<void_(__cdecl*)(NiagaraStateless::FParticleSimulationContext_const_&),void,NiagaraStateless::FParticleSimulationContext_const_&>
                  ::Call;
    FNiagaraStatelessEmitterDataBuildContext::AddParticleSimulationExecSimulate
              (param_1,(TFunction<void___cdecl(NiagaraStateless::FParticleSimulationContext_const_&)>
                        *)local_38);
  }
  return;
}

// BuildShaderParameters @ 14943a730

void __thiscall
UNiagaraStatelessModule_CameraOffset::BuildShaderParameters
          (UNiagaraStatelessModule_CameraOffset *this,
          FNiagaraStatelessShaderParametersBuilder *param_1)

{
  int iVar1;
  FShaderParametersMetadataBuilder *this_00;
  FShaderParametersMetadata *pFVar2;
  
  iVar1 = param_1->ParameterOffset;
  this_00 = param_1->MetadataBuilder;
  if (this_00 != (FShaderParametersMetadataBuilder *)0x0) {
    pFVar2 = TShaderParameterStructTypeInfo<NiagaraStateless::FCameraOffsetModule_ShaderParameters>
             ::GetStructMetadata();
    FShaderParametersMetadataBuilder::AddIncludedStruct(this_00,pFVar2,Float);
  }
  pFVar2 = TShaderParameterStructTypeInfo<NiagaraStateless::FCameraOffsetModule_ShaderParameters>::
           GetStructMetadata();
  param_1->ParameterOffset = pFVar2->Size + (iVar1 + 0xfU & 0xfffffff0);
  return;
}

// GetPrivateStaticClass @ 14944b5f0

UClass * __cdecl UNiagaraStatelessModule_CameraOffset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_CameraOffset.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_CameraOffset",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_CameraOffset.InnerSingleton,
               StaticRegisterNativesUNiagaraStatelessModule_CameraOffset,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraStatelessModule_CameraOffset>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_CameraOffset>,local_res8,
               UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_CameraOffset.InnerSingleton;
}

// SetShaderParameters @ 1494658c0

void __thiscall
UNiagaraStatelessModule_CameraOffset::SetShaderParameters
          (UNiagaraStatelessModule_CameraOffset *this,
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
  iVar1 = uVar6 + 0x14;
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
  pFVar5 = TShaderParameterStructTypeInfo<NiagaraStateless::FCameraOffsetModule_ShaderParameters>::
           GetStructMetadata();
  FNiagaraStatelessSetShaderParameterContext::ValidateIncludeStructType(param_1,uVar6,pFVar5);
  pFVar5 = TShaderParameterStructTypeInfo<NiagaraStateless::FCameraOffsetModule_ShaderParameters>::
           GetStructMetadata();
  puVar2 = param_1->ShaderParametersBase;
  param_1->ParameterOffset = pFVar5->Size + uVar6;
  *(undefined8 *)(puVar2 + uVar6) = *(undefined8 *)puVar7;
  *(undefined4 *)(puVar2 + (ulonglong)uVar6 + 8) = *(undefined4 *)(puVar7 + 8);
  return;
}

// StaticRegisterNativesUNiagaraStatelessModule_CameraOffset @ 149469c10

void __cdecl
UNiagaraStatelessModule_CameraOffset::StaticRegisterNativesUNiagaraStatelessModule_CameraOffset
          (void)

{
  return;
}

