// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 10

// StaticClass @ 149412590

UClass * __cdecl UNiagaraStatelessModule_DecalAttributes::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_DecalAttributes.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_DecalAttributes",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_DecalAttributes.InnerSingleton,
               StaticRegisterNativesUNiagaraStatelessModule_DecalAttributes,0x100,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraStatelessModule_DecalAttributes>
               ,InternalVTableHelperCtorCaller<UNiagaraStatelessModule_DecalAttributes>,local_res8,
               UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_DecalAttributes.InnerSingleton;
}

// UNiagaraStatelessModule_DecalAttributes @ 1494290a0

UNiagaraStatelessModule_DecalAttributes * __thiscall
UNiagaraStatelessModule_DecalAttributes::UNiagaraStatelessModule_DecalAttributes
          (UNiagaraStatelessModule_DecalAttributes *this,FVTableHelper *param_1)

{
  TVector<float>_u_0 local_18;
  
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this,param_1);
  this->bApplyOrientation = false;
  this->bApplySize = false;
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_DecalAttributes__6B_;
  this->bApplyFade = false;
  FNiagaraDistributionVector3::FNiagaraDistributionVector3
            (&this->Orientation,&UE::Math::TVector<float>::ZeroVector);
  this->OrientationCoordinateSpace = Local;
  local_18._s_0.X = 50.0;
  local_18._s_0.Y = 50.0;
  local_18._s_0.Z = 50.0;
  FNiagaraDistributionVector3::FNiagaraDistributionVector3
            (&this->Size,(TVector<float> *)&local_18._s_0);
  FNiagaraDistributionFloat::FNiagaraDistributionFloat(&this->Fade,__real_3f800000);
  return this;
}

// UNiagaraStatelessModule_DecalAttributes @ 149429130

UNiagaraStatelessModule_DecalAttributes * __thiscall
UNiagaraStatelessModule_DecalAttributes::UNiagaraStatelessModule_DecalAttributes
          (UNiagaraStatelessModule_DecalAttributes *this)

{
  TVector<float>_u_0 local_18;
  
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  this->bApplyOrientation = false;
  this->bApplySize = false;
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_DecalAttributes__6B_;
  this->bApplyFade = false;
  FNiagaraDistributionVector3::FNiagaraDistributionVector3
            (&this->Orientation,&UE::Math::TVector<float>::ZeroVector);
  this->OrientationCoordinateSpace = Local;
  local_18._s_0.X = 50.0;
  local_18._s_0.Y = 50.0;
  local_18._s_0.Z = 50.0;
  FNiagaraDistributionVector3::FNiagaraDistributionVector3
            (&this->Size,(TVector<float> *)&local_18._s_0);
  FNiagaraDistributionFloat::FNiagaraDistributionFloat(&this->Fade,__real_3f800000);
  return this;
}

// ~UNiagaraStatelessModule_DecalAttributes @ 14942c790

void __thiscall
UNiagaraStatelessModule_DecalAttributes::~UNiagaraStatelessModule_DecalAttributes
          (UNiagaraStatelessModule_DecalAttributes *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_DecalAttributes__6B_;
  pFVar1 = (this->Fade).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&(this->Fade)._padding_);
  pFVar1 = (this->Size).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&(this->Size)._padding_);
  pFVar1 = (this->Orientation).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&(this->Orientation)._padding_);
  UNiagaraStatelessModule::~UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  return;
}

// BuildEmitterData @ 149432220

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
UNiagaraStatelessModule_DecalAttributes::BuildEmitterData
          (UNiagaraStatelessModule_DecalAttributes *this,
          FNiagaraStatelessEmitterDataBuildContext *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  bool bVar2;
  int iVar3;
  ENiagaraCoordinateSpace EVar4;
  FNiagaraVariableBase *pFVar5;
  TIntVector3<unsigned_int> *pTVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  TIntVector3<unsigned_int> local_58;
  code *local_48 [2];
  undefined **local_38;
  code *local_30;
  undefined8 local_20;
  
  pTVar1 = param_1->BuiltData;
  uVar9 = pTVar1->ArrayNum + 3U & 0xfffffffc;
  iVar7 = (uVar9 - pTVar1->ArrayNum) + 0x34;
  iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar7,&pTVar1->AllocatorInstance,&pTVar1->ArrayNum,&pTVar1->ArrayMax);
  memset((pTVar1->AllocatorInstance).Data + iVar3,0,(longlong)iVar7);
  pFVar8 = (param_1->BuiltData->AllocatorInstance).Data + (int)uVar9;
  *(ENiagaraCoordinateSpace *)pFVar8 = Local;
  *(undefined8 *)(pFVar8 + 4) = UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._0_8_;
  *(uint *)(pFVar8 + 0xc) = UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Z;
  *(ENiagaraCoordinateSpace *)(pFVar8 + 0x28) = ~Simulation;
  *(undefined8 *)(pFVar8 + 0x10) = UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._0_8_;
  *(uint *)(pFVar8 + 0x18) = UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Z;
  *(ENiagaraCoordinateSpace *)(pFVar8 + 0x2c) = ~Simulation;
  *(undefined8 *)(pFVar8 + 0x1c) = UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._0_8_;
  *(uint *)(pFVar8 + 0x24) = UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Z;
  *(ENiagaraCoordinateSpace *)(pFVar8 + 0x30) = ~Simulation;
  bVar2 = UNiagaraStatelessModule::IsModuleEnabled((UNiagaraStatelessModule *)this);
  if (bVar2) {
    bVar2 = false;
    pFVar5 = NSMDecalAttributesPrivate::GetAttributeVariable(Orientation,this,Used);
    if (pFVar5 != (FNiagaraVariableBase *)0x0) {
      EVar4 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex(param_1,pFVar5);
      bVar2 = EVar4 != ~Simulation;
      *(ENiagaraCoordinateSpace *)(pFVar8 + 0x28) = EVar4;
    }
    pFVar5 = NSMDecalAttributesPrivate::GetAttributeVariable(Size,this,Used);
    if (pFVar5 != (FNiagaraVariableBase *)0x0) {
      EVar4 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex(param_1,pFVar5);
      *(ENiagaraCoordinateSpace *)(pFVar8 + 0x2c) = EVar4;
      if (EVar4 != ~Simulation) {
        bVar2 = true;
      }
    }
    pFVar5 = NSMDecalAttributesPrivate::GetAttributeVariable(Fade,this,Used);
    if (pFVar5 != (FNiagaraVariableBase *)0x0) {
      EVar4 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex(param_1,pFVar5);
      *(ENiagaraCoordinateSpace *)(pFVar8 + 0x30) = EVar4;
      bVar2 = (bool)(bVar2 | EVar4 != ~Simulation);
    }
    if (bVar2) {
      if (this->bApplyOrientation != false) {
        *(ENiagaraCoordinateSpace *)pFVar8 = this->OrientationCoordinateSpace;
        pTVar6 = FNiagaraStatelessEmitterDataBuildContext::
                 AddDistribution<FNiagaraDistributionVector3>(param_1,&local_58,&this->Orientation);
        *(undefined8 *)(pFVar8 + 4) = *(undefined8 *)&pTVar6->field0_0x0;
        *(uint *)(pFVar8 + 0xc) = (pTVar6->field0_0x0)._s_0.Z;
      }
      if (this->bApplySize != false) {
        pTVar6 = FNiagaraStatelessEmitterDataBuildContext::
                 AddDistribution<FNiagaraDistributionVector3>(param_1,&local_58,&this->Size);
        *(undefined8 *)(pFVar8 + 0x10) = *(undefined8 *)&pTVar6->field0_0x0;
        *(uint *)(pFVar8 + 0x18) = (pTVar6->field0_0x0)._s_0.Z;
      }
      if (this->bApplyFade != false) {
        pTVar6 = FNiagaraStatelessEmitterDataBuildContext::
                 AddDistribution<FNiagaraDistributionFloat>(param_1,&local_58,&this->Fade);
        *(undefined8 *)(pFVar8 + 0x1c) = *(undefined8 *)&pTVar6->field0_0x0;
        *(uint *)(pFVar8 + 0x24) = (pTVar6->field0_0x0)._s_0.Z;
      }
      local_20 = 0;
      local_38 = &
                 ___7__TFunction_OwnedObject_P6AXAEBVFParticleSimulationContext_NiagaraStateless___Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      local_30 = NSMDecalAttributesPrivate::ParticleSimulate;
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

// GetFeatureMask @ 149449c50

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

ENiagaraStatelessFeatureMask __thiscall
UNiagaraStatelessModule_DecalAttributes::GetFeatureMask
          (UNiagaraStatelessModule_DecalAttributes *this)

{
  return ExecuteCPU;
}

// GetPrivateStaticClass @ 14944b770

UClass * __cdecl UNiagaraStatelessModule_DecalAttributes::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_DecalAttributes.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_DecalAttributes",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_DecalAttributes.InnerSingleton,
               StaticRegisterNativesUNiagaraStatelessModule_DecalAttributes,0x100,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraStatelessModule_DecalAttributes>
               ,InternalVTableHelperCtorCaller<UNiagaraStatelessModule_DecalAttributes>,local_res8,
               UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_DecalAttributes.InnerSingleton;
}

// SetShaderParameters @ 149465970

void __thiscall
UNiagaraStatelessModule_DecalAttributes::SetShaderParameters
          (UNiagaraStatelessModule_DecalAttributes *this,
          FNiagaraStatelessSetShaderParameterContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = (param_1->BuiltDataOffset + 3U & 0xfffffffc) + 0x34;
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

// StaticRegisterNativesUNiagaraStatelessModule_DecalAttributes @ 149469c30

void __cdecl
UNiagaraStatelessModule_DecalAttributes::
StaticRegisterNativesUNiagaraStatelessModule_DecalAttributes(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UNiagaraStatelessModule_DecalAttributes_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execIsOrientationEnabled @ 1494722a0

void __cdecl
UNiagaraStatelessModule_DecalAttributes::execIsOrientationEnabled
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[1].field_0x8;
  return;
}

