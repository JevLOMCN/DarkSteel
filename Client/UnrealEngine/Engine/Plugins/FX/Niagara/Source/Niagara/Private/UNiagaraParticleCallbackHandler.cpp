// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// StaticClass @ 14915bd60

UClass * __cdecl UNiagaraParticleCallbackHandler::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraParticleCallbackHandler.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraParticleCallbackHandler",
               &Z_Registration_Info_UClass_UNiagaraParticleCallbackHandler.InnerSingleton,
               StaticRegisterNativesUNiagaraParticleCallbackHandler,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraParticleCallbackHandler>,
               InternalVTableHelperCtorCaller<UNiagaraParticleCallbackHandler>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraParticleCallbackHandler.InnerSingleton;
}

// UNiagaraParticleCallbackHandler @ 14916a370

UNiagaraParticleCallbackHandler * __thiscall
UNiagaraParticleCallbackHandler::UNiagaraParticleCallbackHandler
          (UNiagaraParticleCallbackHandler *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNiagaraParticleCallbackHandler__6B_;
  return this;
}

// UNiagaraParticleCallbackHandler @ 14916a3a0

UNiagaraParticleCallbackHandler * __thiscall
UNiagaraParticleCallbackHandler::UNiagaraParticleCallbackHandler
          (UNiagaraParticleCallbackHandler *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNiagaraParticleCallbackHandler__6B_;
  return this;
}

// ~UNiagaraParticleCallbackHandler @ 14916b570

void __thiscall
UNiagaraParticleCallbackHandler::~UNiagaraParticleCallbackHandler
          (UNiagaraParticleCallbackHandler *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14917fdd0

UClass * __cdecl UNiagaraParticleCallbackHandler::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraParticleCallbackHandler.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraParticleCallbackHandler",
               &Z_Registration_Info_UClass_UNiagaraParticleCallbackHandler.InnerSingleton,
               StaticRegisterNativesUNiagaraParticleCallbackHandler,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraParticleCallbackHandler>,
               InternalVTableHelperCtorCaller<UNiagaraParticleCallbackHandler>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraParticleCallbackHandler.InnerSingleton;
}

// StaticRegisterNativesUNiagaraParticleCallbackHandler @ 14918ef40

void __cdecl
UNiagaraParticleCallbackHandler::StaticRegisterNativesUNiagaraParticleCallbackHandler(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UNiagaraParticleCallbackHandler_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

