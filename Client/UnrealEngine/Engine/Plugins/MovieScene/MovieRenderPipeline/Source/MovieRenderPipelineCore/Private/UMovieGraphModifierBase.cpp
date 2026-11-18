// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 12

// StaticClass @ 14dc9b620

UClass * __cdecl UMovieGraphModifierBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphModifierBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphModifierBase",
               &Z_Registration_Info_UClass_UMovieGraphModifierBase.InnerSingleton,
               StaticRegisterNativesUMovieGraphModifierBase,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphModifierBase>,
               InternalVTableHelperCtorCaller<UMovieGraphModifierBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphModifierBase.InnerSingleton;
}

// UMovieGraphModifierBase @ 14dcb0070

UMovieGraphModifierBase * __thiscall
UMovieGraphModifierBase::UMovieGraphModifierBase
          (UMovieGraphModifierBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMovieGraphModifierBase__6B_;
  return this;
}

// UMovieGraphModifierBase @ 14dcb00a0

UMovieGraphModifierBase * __thiscall
UMovieGraphModifierBase::UMovieGraphModifierBase
          (UMovieGraphModifierBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMovieGraphModifierBase__6B_;
  return this;
}

// ~UMovieGraphModifierBase @ 14dcb2ec0

void __thiscall UMovieGraphModifierBase::~UMovieGraphModifierBase(UMovieGraphModifierBase *this)

{
  *(undefined ***)this = &___7UMovieGraphModifierBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ApplyModifier @ 14dcbb360

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMovieGraphModifierBase::ApplyModifier(UMovieGraphModifierBase *this,UWorld *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\Graph\\MovieGraphRenderLayerSubsystem.h"
             ,0x376,L"Pure virtual not implemented (%s)");
  return;
}

// GetModifierName @ 14dccea80

FText * __thiscall
UMovieGraphModifierBase::GetModifierName
          (UMovieGraphModifierBase *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  FText *pFVar2;
  undefined1 local_res10 [24];
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\Graph\\MovieGraphRenderLayerSubsystem.h"
             ,0x37e,L"Pure virtual not implemented (%s)");
  pFVar2 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar2->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
  }
  __return_storage_ptr__->Flags = pFVar2->Flags;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14dcd29a0

UClass * __cdecl UMovieGraphModifierBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphModifierBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphModifierBase",
               &Z_Registration_Info_UClass_UMovieGraphModifierBase.InnerSingleton,
               StaticRegisterNativesUMovieGraphModifierBase,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphModifierBase>,
               InternalVTableHelperCtorCaller<UMovieGraphModifierBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphModifierBase.InnerSingleton;
}

// StaticRegisterNativesUMovieGraphModifierBase @ 14dce65c0

void __cdecl UMovieGraphModifierBase::StaticRegisterNativesUMovieGraphModifierBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UMovieGraphModifierBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UndoModifier @ 14dce9b50

void __thiscall UMovieGraphModifierBase::UndoModifier(UMovieGraphModifierBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\Graph\\MovieGraphRenderLayerSubsystem.h"
             ,0x37a,L"Pure virtual not implemented (%s)");
  return;
}

// execApplyModifier @ 14dcef590

void __cdecl
UMovieGraphModifierBase::execApplyModifier(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_res8);
  return;
}

// execGetModifierName @ 14dcf1180

void __cdecl
UMovieGraphModifierBase::execGetModifierName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FText *pFVar1;
  longlong *local_18 [2];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = (FText *)(**(code **)(*(longlong *)param_1 + 0x2c0))(param_1,local_18);
  FText::operator=(param_3,pFVar1);
  if (local_18[0] != (longlong *)0x0) {
    (**(code **)(*local_18[0] + 0x10))();
  }
  return;
}

// execUndoModifier @ 14dcf3e10

void __cdecl
UMovieGraphModifierBase::execUndoModifier(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014dcf3e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2b8))();
  return;
}

