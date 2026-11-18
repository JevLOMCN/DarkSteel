// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 9

// StaticClass @ 14940c090

UClass * __cdecl UNiagaraStatelessModule_LightAttributes::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_LightAttributes.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_LightAttributes",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_LightAttributes.InnerSingleton,
               StaticRegisterNativesUNiagaraStatelessModule_LightAttributes,0x178,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraStatelessModule_LightAttributes>
               ,InternalVTableHelperCtorCaller<UNiagaraStatelessModule_LightAttributes>,local_res8,
               UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_LightAttributes.InnerSingleton;
}

// UNiagaraStatelessModule_LightAttributes @ 149429940

UNiagaraStatelessModule_LightAttributes * __thiscall
UNiagaraStatelessModule_LightAttributes::UNiagaraStatelessModule_LightAttributes
          (UNiagaraStatelessModule_LightAttributes *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  float fVar2;
  
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this,param_1);
  fVar2 = __real_42c80000;
  this->bApplyRadius = 0;
  this->bApplyVolumetricScattering = 0;
  this->bApplySpecularScale = 0;
  this->bApplyDiffuseScale = 0;
  this->bApplyFalloffExponent = 0;
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_LightAttributes__6B_;
  FNiagaraDistributionFloat::FNiagaraDistributionFloat(&this->Radius,fVar2);
  FNiagaraDistributionFloat::FNiagaraDistributionFloat(&this->FalloffExponent,__real_3f800000);
  FNiagaraDistributionFloat::FNiagaraDistributionFloat(&this->DiffuseScale,__real_3f800000);
  FNiagaraDistributionFloat::FNiagaraDistributionFloat(&this->SpecularScale,__real_3f800000);
  FNiagaraDistributionFloat::FNiagaraDistributionFloat(&this->VolumetricScattering,0.0);
  return this;
}

// UNiagaraStatelessModule_LightAttributes @ 1494299d0

UNiagaraStatelessModule_LightAttributes * __thiscall
UNiagaraStatelessModule_LightAttributes::UNiagaraStatelessModule_LightAttributes
          (UNiagaraStatelessModule_LightAttributes *this)

{
  undefined1 *puVar1;
  float fVar2;
  
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  fVar2 = __real_42c80000;
  this->bApplyRadius = 0;
  this->bApplyVolumetricScattering = 0;
  this->bApplySpecularScale = 0;
  this->bApplyDiffuseScale = 0;
  this->bApplyFalloffExponent = 0;
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_LightAttributes__6B_;
  FNiagaraDistributionFloat::FNiagaraDistributionFloat(&this->Radius,fVar2);
  FNiagaraDistributionFloat::FNiagaraDistributionFloat(&this->FalloffExponent,__real_3f800000);
  FNiagaraDistributionFloat::FNiagaraDistributionFloat(&this->DiffuseScale,__real_3f800000);
  FNiagaraDistributionFloat::FNiagaraDistributionFloat(&this->SpecularScale,__real_3f800000);
  FNiagaraDistributionFloat::FNiagaraDistributionFloat(&this->VolumetricScattering,0.0);
  return this;
}

// ~UNiagaraStatelessModule_LightAttributes @ 14942c9d0

void __thiscall
UNiagaraStatelessModule_LightAttributes::~UNiagaraStatelessModule_LightAttributes
          (UNiagaraStatelessModule_LightAttributes *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_LightAttributes__6B_;
  pFVar1 = (this->VolumetricScattering).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&(this->VolumetricScattering)._padding_);
  pFVar1 = (this->SpecularScale).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&(this->SpecularScale)._padding_);
  pFVar1 = (this->DiffuseScale).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&(this->DiffuseScale)._padding_);
  pFVar1 = (this->FalloffExponent).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&(this->FalloffExponent)._padding_);
  pFVar1 = (this->Radius).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&(this->Radius)._padding_);
  UNiagaraStatelessModule::~UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  return;
}

// BuildEmitterData @ 149433dd0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
UNiagaraStatelessModule_LightAttributes::BuildEmitterData
          (UNiagaraStatelessModule_LightAttributes *this,
          FNiagaraStatelessEmitterDataBuildContext *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  bool bVar2;
  int iVar3;
  FNiagaraVariableBase *pFVar4;
  TIntVector3<unsigned_int> *pTVar5;
  int iVar6;
  FNiagaraDistributionFloat *pFVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FNiagaraDistributionFloat *pFVar11;
  TIntVector3<unsigned_int> local_58;
  code *local_48 [2];
  undefined **local_38;
  code *local_30;
  undefined8 local_20;
  
  pTVar1 = param_1->BuiltData;
  uVar8 = pTVar1->ArrayNum + 3U & 0xfffffffc;
  iVar6 = (uVar8 - pTVar1->ArrayNum) + 0x50;
  iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar6,&pTVar1->AllocatorInstance,&pTVar1->ArrayNum,&pTVar1->ArrayMax);
  memset((pTVar1->AllocatorInstance).Data + iVar3,0,(longlong)iVar6);
  pFVar10 = (param_1->BuiltData->AllocatorInstance).Data + (int)uVar8;
  *(undefined8 *)pFVar10 = UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._0_8_;
  pFVar9 = pFVar10 + 0x3c;
  *(uint *)(pFVar10 + 8) = UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Z;
  *(int *)pFVar9 = -1;
  *(undefined8 *)(pFVar10 + 0xc) = UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._0_8_;
  *(uint *)(pFVar10 + 0x14) = UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Z;
  *(undefined4 *)(pFVar10 + 0x40) = 0xffffffff;
  *(undefined8 *)(pFVar10 + 0x18) = UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._0_8_;
  *(uint *)(pFVar10 + 0x20) = UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Z;
  *(undefined4 *)(pFVar10 + 0x44) = 0xffffffff;
  *(undefined8 *)(pFVar10 + 0x24) = UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._0_8_;
  *(uint *)(pFVar10 + 0x2c) = UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Z;
  *(undefined4 *)(pFVar10 + 0x48) = 0xffffffff;
  *(undefined8 *)(pFVar10 + 0x30) = UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._0_8_;
  *(uint *)(pFVar10 + 0x38) = UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Z;
  *(undefined4 *)(pFVar10 + 0x4c) = 0xffffffff;
  bVar2 = UNiagaraStatelessModule::IsModuleEnabled((UNiagaraStatelessModule *)this);
  if (bVar2) {
    bVar2 = false;
    pFVar4 = NSMLightAttributesPrivate::GetAttributeVariable(Radius,this,Used);
    if (pFVar4 != (FNiagaraVariableBase *)0x0) {
      iVar3 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex(param_1,pFVar4);
      bVar2 = iVar3 != -1;
      *(int *)pFVar9 = iVar3;
    }
    pFVar4 = NSMLightAttributesPrivate::GetAttributeVariable(Falloff,this,Used);
    if (pFVar4 != (FNiagaraVariableBase *)0x0) {
      iVar3 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex(param_1,pFVar4);
      *(int *)(pFVar10 + 0x40) = iVar3;
      if (iVar3 != -1) {
        bVar2 = true;
      }
    }
    pFVar4 = NSMLightAttributesPrivate::GetAttributeVariable(DiffuseScale,this,Used);
    if (pFVar4 != (FNiagaraVariableBase *)0x0) {
      iVar3 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex(param_1,pFVar4);
      *(int *)(pFVar10 + 0x44) = iVar3;
      bVar2 = (bool)(bVar2 | iVar3 != -1);
    }
    pFVar4 = NSMLightAttributesPrivate::GetAttributeVariable(SpecularScale,this,Used);
    if (pFVar4 != (FNiagaraVariableBase *)0x0) {
      iVar3 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex(param_1,pFVar4);
      *(int *)(pFVar10 + 0x48) = iVar3;
      bVar2 = (bool)(bVar2 | iVar3 != -1);
    }
    pFVar4 = NSMLightAttributesPrivate::GetAttributeVariable(VolumetricScale,this,Used);
    if (pFVar4 != (FNiagaraVariableBase *)0x0) {
      iVar3 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex(param_1,pFVar4);
      *(int *)(pFVar10 + 0x4c) = iVar3;
      bVar2 = (bool)(bVar2 | iVar3 != -1);
    }
    if (bVar2) {
      pFVar11 = (FNiagaraDistributionFloat *)0x0;
      pFVar7 = pFVar11;
      do {
        iVar3 = (int)pFVar7;
        if (*(int *)pFVar9 != -1) {
          if (iVar3 == 0) {
            pFVar7 = &this->Radius;
            if (this->bApplyRadius == 0) {
LAB_14943403e:
              pFVar7 = pFVar11;
            }
          }
          else if (iVar3 == 1) {
            pFVar7 = &this->FalloffExponent;
            if (this->bApplyFalloffExponent == 0) {
              pFVar7 = pFVar11;
            }
          }
          else if (iVar3 == 2) {
            pFVar7 = &this->DiffuseScale;
            if (this->bApplyDiffuseScale == 0) {
              pFVar7 = pFVar11;
            }
          }
          else if (iVar3 == 3) {
            pFVar7 = &this->SpecularScale;
            if (this->bApplySpecularScale == 0) {
              pFVar7 = pFVar11;
            }
          }
          else {
            if (iVar3 != 4) goto LAB_14943403e;
            pFVar7 = &this->VolumetricScattering;
            if (this->bApplyVolumetricScattering == 0) {
              pFVar7 = pFVar11;
            }
          }
          if (pFVar7 != (FNiagaraDistributionFloat *)0x0) {
            pTVar5 = FNiagaraStatelessEmitterDataBuildContext::
                     AddDistribution<FNiagaraDistributionFloat>(param_1,&local_58,pFVar7);
            *(undefined8 *)pFVar10 = *(undefined8 *)&pTVar5->field0_0x0;
            *(uint *)(pFVar10 + 8) = (pTVar5->field0_0x0)._s_0.Z;
          }
        }
        pFVar7 = (FNiagaraDistributionFloat *)(ulonglong)(iVar3 + 1U);
        pFVar9 = pFVar9 + 4;
        pFVar10 = pFVar10 + 0xc;
      } while ((int)(iVar3 + 1U) < 5);
      local_20 = 0;
      local_38 = &
                 ___7__TFunction_OwnedObject_P6AXAEBVFParticleSimulationContext_NiagaraStateless___Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      local_30 = NSMLightAttributesPrivate::ParticleSimulate;
      local_48[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<void_(__cdecl*)(NiagaraStateless::FParticleSimulationContext_const_&),void,NiagaraStateless::FParticleSimulationContext_const_&>
                    ::Call;
      FNiagaraStatelessEmitterDataBuildContext::AddParticleSimulationExecSimulate
                (param_1,(TFunction<void___cdecl(NiagaraStateless::FParticleSimulationContext_const_&)>
                          *)local_48);
    }
  }
  return;
}

// GetFeatureMask @ 149449c60

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

ENiagaraStatelessFeatureMask __thiscall
UNiagaraStatelessModule_LightAttributes::GetFeatureMask
          (UNiagaraStatelessModule_LightAttributes *this)

{
  return ExecuteCPU;
}

// GetPrivateStaticClass @ 14944bbf0

UClass * __cdecl UNiagaraStatelessModule_LightAttributes::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_LightAttributes.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_LightAttributes",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_LightAttributes.InnerSingleton,
               StaticRegisterNativesUNiagaraStatelessModule_LightAttributes,0x178,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraStatelessModule_LightAttributes>
               ,InternalVTableHelperCtorCaller<UNiagaraStatelessModule_LightAttributes>,local_res8,
               UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_LightAttributes.InnerSingleton;
}

// SetShaderParameters @ 149465e70

void __thiscall
UNiagaraStatelessModule_LightAttributes::SetShaderParameters
          (UNiagaraStatelessModule_LightAttributes *this,
          FNiagaraStatelessSetShaderParameterContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = (param_1->BuiltDataOffset + 3U & 0xfffffffc) + 0x50;
  param_1->BuiltDataOffset = iVar3;
  if ((param_1->BuiltData).ArrayNum < iVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("BuiltDataOffset <= BuiltData.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessSetShaderParameterContext.h"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// StaticRegisterNativesUNiagaraStatelessModule_LightAttributes @ 149469cc0

void __cdecl
UNiagaraStatelessModule_LightAttributes::
StaticRegisterNativesUNiagaraStatelessModule_LightAttributes(void)

{
  return;
}

