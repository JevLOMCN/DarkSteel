// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// StaticClass @ 14925edb0

UClass * __cdecl UNiagaraSignificanceHandler::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraSignificanceHandler.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraSignificanceHandler",
               &Z_Registration_Info_UClass_UNiagaraSignificanceHandler.InnerSingleton,
               StaticRegisterNativesUNiagaraSignificanceHandler,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraSignificanceHandler>,
               InternalVTableHelperCtorCaller<UNiagaraSignificanceHandler>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraSignificanceHandler.InnerSingleton;
}

// UNiagaraSignificanceHandler @ 149278a50

UNiagaraSignificanceHandler * __thiscall
UNiagaraSignificanceHandler::UNiagaraSignificanceHandler
          (UNiagaraSignificanceHandler *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UNiagaraSignificanceHandler__6B_;
  return this;
}

// UNiagaraSignificanceHandler @ 149278a80

UNiagaraSignificanceHandler * __thiscall
UNiagaraSignificanceHandler::UNiagaraSignificanceHandler
          (UNiagaraSignificanceHandler *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UNiagaraSignificanceHandler__6B_;
  return this;
}

// ~UNiagaraSignificanceHandler @ 14927ace0

void __thiscall
UNiagaraSignificanceHandler::~UNiagaraSignificanceHandler(UNiagaraSignificanceHandler *this)

{
  *(undefined ***)this = &___7UNiagaraSignificanceHandler__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CalculateSignificance @ 149287590

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraSignificanceHandler::CalculateSignificance
          (UNiagaraSignificanceHandler *this,TArrayView<UNiagaraComponent_*_const,int> *param_1,
          TArrayView<FNiagaraScalabilityState,int> *param_2,
          TArrayView<FNiagaraScalabilitySystemData_const_,int> *param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEffectType.h"
             ,0x176,L"Pure virtual not implemented (%s)");
  return;
}

// GetPrivateStaticClass @ 1492a6490

UClass * __cdecl UNiagaraSignificanceHandler::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraSignificanceHandler.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraSignificanceHandler",
               &Z_Registration_Info_UClass_UNiagaraSignificanceHandler.InnerSingleton,
               StaticRegisterNativesUNiagaraSignificanceHandler,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraSignificanceHandler>,
               InternalVTableHelperCtorCaller<UNiagaraSignificanceHandler>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraSignificanceHandler.InnerSingleton;
}

// StaticRegisterNativesUNiagaraSignificanceHandler @ 1492b6990

void __cdecl UNiagaraSignificanceHandler::StaticRegisterNativesUNiagaraSignificanceHandler(void)

{
  return;
}

