// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 8

// StaticClass @ 14940e140

UClass * __cdecl UNiagaraStatelessModule_CalculateAccurateVelocity::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_CalculateAccurateVelocity.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_CalculateAccurateVelocity",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_CalculateAccurateVelocity.
                InnerSingleton,
               StaticRegisterNativesUNiagaraStatelessModule_CalculateAccurateVelocity,0x30,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraStatelessModule_CalculateAccurateVelocity>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_CalculateAccurateVelocity>,
               local_res8,UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_CalculateAccurateVelocity.InnerSingleton
  ;
}

// UNiagaraStatelessModule_CalculateAccurateVelocity @ 149428f40

UNiagaraStatelessModule_CalculateAccurateVelocity * __thiscall
UNiagaraStatelessModule_CalculateAccurateVelocity::UNiagaraStatelessModule_CalculateAccurateVelocity
          (UNiagaraStatelessModule_CalculateAccurateVelocity *this,FVTableHelper *param_1)

{
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this,param_1);
  *(undefined ***)this = &___7UNiagaraStatelessModule_CalculateAccurateVelocity__6B_;
  return this;
}

// UNiagaraStatelessModule_CalculateAccurateVelocity @ 149428f70

UNiagaraStatelessModule_CalculateAccurateVelocity * __thiscall
UNiagaraStatelessModule_CalculateAccurateVelocity::UNiagaraStatelessModule_CalculateAccurateVelocity
          (UNiagaraStatelessModule_CalculateAccurateVelocity *this)

{
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  *(undefined ***)this = &___7UNiagaraStatelessModule_CalculateAccurateVelocity__6B_;
  return this;
}

// ~UNiagaraStatelessModule_CalculateAccurateVelocity @ 14942c710

void __thiscall
UNiagaraStatelessModule_CalculateAccurateVelocity::
~UNiagaraStatelessModule_CalculateAccurateVelocity
          (UNiagaraStatelessModule_CalculateAccurateVelocity *this)

{
  *(undefined ***)this = &___7UNiagaraStatelessModule_CalculateAccurateVelocity__6B_;
  UNiagaraStatelessModule::~UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  return;
}

// BuildEmitterData @ 149431f40

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
UNiagaraStatelessModule_CalculateAccurateVelocity::BuildEmitterData
          (UNiagaraStatelessModule_CalculateAccurateVelocity *this,
          FNiagaraStatelessEmitterDataBuildContext *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  pTVar1 = param_1->BuiltData;
  uVar5 = pTVar1->ArrayNum + 3U & 0xfffffffc;
  iVar3 = (uVar5 - pTVar1->ArrayNum) + 0x10;
  iVar2 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar3,&pTVar1->AllocatorInstance,&pTVar1->ArrayNum,&pTVar1->ArrayMax);
  memset((pTVar1->AllocatorInstance).Data + iVar2,0,(longlong)iVar3);
  pFVar4 = (param_1->BuiltData->AllocatorInstance).Data + (int)uVar5;
  *(undefined8 *)pFVar4 = 0xffffffffffffffff;
  *(undefined8 *)(pFVar4 + 8) = 0xffffffffffffffff;
  iVar2 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                    (param_1,&NiagaraStatelessCommon::GGlobals.PositionVariable);
  *(int *)pFVar4 = iVar2;
  iVar2 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                    (param_1,&NiagaraStatelessCommon::GGlobals.PreviousPositionVariable);
  *(int *)(pFVar4 + 4) = iVar2;
  iVar2 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                    (param_1,&NiagaraStatelessCommon::GGlobals.VelocityVariable);
  *(int *)(pFVar4 + 8) = iVar2;
  iVar2 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                    (param_1,&NiagaraStatelessCommon::GGlobals.PreviousVelocityVariable);
  *(int *)(pFVar4 + 0xc) = iVar2;
  if ((*(int *)(pFVar4 + 8) != -1) || (iVar2 != -1)) {
    local_10 = 0;
    local_28 = &
               ___7__TFunction_OwnedObject_P6AXAEBVFParticleSimulationContext_NiagaraStateless___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_20 = NSMCalculateAccurateVelocityPrivate::ParticleSimulate;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<void_(__cdecl*)(NiagaraStateless::FParticleSimulationContext_const_&),void,NiagaraStateless::FParticleSimulationContext_const_&>
                  ::Call;
    FNiagaraStatelessEmitterDataBuildContext::AddParticleSimulationExecSimulate
              (param_1,(TFunction<void___cdecl(NiagaraStateless::FParticleSimulationContext_const_&)>
                        *)local_38);
  }
  return;
}

// GetPrivateStaticClass @ 14944b530

UClass * __cdecl UNiagaraStatelessModule_CalculateAccurateVelocity::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_CalculateAccurateVelocity.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_CalculateAccurateVelocity",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_CalculateAccurateVelocity.
                InnerSingleton,
               StaticRegisterNativesUNiagaraStatelessModule_CalculateAccurateVelocity,0x30,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraStatelessModule_CalculateAccurateVelocity>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_CalculateAccurateVelocity>,
               local_res8,UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_CalculateAccurateVelocity.InnerSingleton
  ;
}

// SetShaderParameters @ 149465870

void __thiscall
UNiagaraStatelessModule_CalculateAccurateVelocity::SetShaderParameters
          (UNiagaraStatelessModule_CalculateAccurateVelocity *this,
          FNiagaraStatelessSetShaderParameterContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = (param_1->BuiltDataOffset + 3U & 0xfffffffc) + 0x10;
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

// StaticRegisterNativesUNiagaraStatelessModule_CalculateAccurateVelocity @ 149469c00

void __cdecl
UNiagaraStatelessModule_CalculateAccurateVelocity::
StaticRegisterNativesUNiagaraStatelessModule_CalculateAccurateVelocity(void)

{
  return;
}

