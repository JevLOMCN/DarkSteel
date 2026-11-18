// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// StaticClass @ 149415e60

UClass * __cdecl UNiagaraStatelessModule_Drag::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_Drag.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_Drag",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_Drag.InnerSingleton,
               StaticRegisterNativesUNiagaraStatelessModule_Drag,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraStatelessModule_Drag>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_Drag>,local_res8,
               UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_Drag.InnerSingleton;
}

// UNiagaraStatelessModule_Drag @ 1494291c0

UNiagaraStatelessModule_Drag * __thiscall
UNiagaraStatelessModule_Drag::UNiagaraStatelessModule_Drag
          (UNiagaraStatelessModule_Drag *this,FVTableHelper *param_1)

{
  float fVar1;
  
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this,param_1);
  fVar1 = __real_3f800000;
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_Drag__6B_;
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat(&this->DragDistribution,fVar1);
  return this;
}

// UNiagaraStatelessModule_Drag @ 149429200

UNiagaraStatelessModule_Drag * __thiscall
UNiagaraStatelessModule_Drag::UNiagaraStatelessModule_Drag(UNiagaraStatelessModule_Drag *this)

{
  float fVar1;
  
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  fVar1 = __real_3f800000;
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_Drag__6B_;
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat(&this->DragDistribution,fVar1);
  return this;
}

// ~UNiagaraStatelessModule_Drag @ 14942c810

void __thiscall
UNiagaraStatelessModule_Drag::~UNiagaraStatelessModule_Drag(UNiagaraStatelessModule_Drag *this)

{
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_Drag__6B_;
  FInstancedStruct::Reset((FInstancedStruct *)&(this->DragDistribution)._padding_);
  UNiagaraStatelessModule::~UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  return;
}

// BuildEmitterData @ 149432470

void __thiscall
UNiagaraStatelessModule_Drag::BuildEmitterData
          (UNiagaraStatelessModule_Drag *this,FNiagaraStatelessEmitterDataBuildContext *param_1)

{
  float fVar1;
  bool bVar2;
  FPhysicsBuildData *pFVar3;
  float fVar4;
  
  bVar2 = UNiagaraStatelessModule::IsModuleEnabled((UNiagaraStatelessModule *)this);
  if (bVar2) {
    pFVar3 = FNiagaraStatelessEmitterDataBuildContext::
             GetTransientBuildData<NiagaraStateless::FPhysicsBuildData>(param_1);
    fVar1 = (this->DragDistribution).Min;
    fVar4 = fVar1;
    if ((char)(this->DragDistribution)._padding_ != '\x03') {
      fVar4 = (this->DragDistribution).Max;
    }
    (pFVar3->DragRange).ParameterOffset = -1;
    (pFVar3->DragRange).Min = fVar1;
    (pFVar3->DragRange).Max = fVar4;
  }
  return;
}

// GetPrivateStaticClass @ 14944b830

UClass * __cdecl UNiagaraStatelessModule_Drag::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_Drag.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_Drag",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_Drag.InnerSingleton,
               StaticRegisterNativesUNiagaraStatelessModule_Drag,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraStatelessModule_Drag>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_Drag>,local_res8,
               UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_Drag.InnerSingleton;
}

// StaticRegisterNativesUNiagaraStatelessModule_Drag @ 149469c70

void __cdecl UNiagaraStatelessModule_Drag::StaticRegisterNativesUNiagaraStatelessModule_Drag(void)

{
  return;
}

