// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 9

// StaticClass @ 14dc666c0

UClass * __cdecl UMovieGraphGlobalVariable::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphGlobalVariable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphGlobalVariable",
               &Z_Registration_Info_UClass_UMovieGraphGlobalVariable.InnerSingleton,
               StaticRegisterNativesUMovieGraphGlobalVariable,0x88,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphGlobalVariable>,
               InternalVTableHelperCtorCaller<UMovieGraphGlobalVariable>,local_res8,
               UMovieGraphVariable::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphGlobalVariable.InnerSingleton;
}

// UMovieGraphGlobalVariable @ 14dc730e0

UMovieGraphGlobalVariable * __thiscall
UMovieGraphGlobalVariable::UMovieGraphGlobalVariable
          (UMovieGraphGlobalVariable *this,FVTableHelper *param_1)

{
  UMovieGraphValueContainer::UMovieGraphValueContainer((UMovieGraphValueContainer *)this,param_1);
  this->field_0x70 = 1;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined8 *)&this->field_0x78 = 0;
  *(undefined8 *)&this->field_0x80 = 0;
  *(undefined ***)this = &___7UMovieGraphGlobalVariable__6B_;
  return this;
}

// UMovieGraphGlobalVariable @ 14dc73130

UMovieGraphGlobalVariable * __thiscall
UMovieGraphGlobalVariable::UMovieGraphGlobalVariable(UMovieGraphGlobalVariable *this)

{
  UMovieGraphValueContainer::UMovieGraphValueContainer((UMovieGraphValueContainer *)this);
  this->field_0x70 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined8 *)&this->field_0x78 = 0;
  *(undefined8 *)&this->field_0x80 = 0;
  *(undefined ***)this = &___7UMovieGraphGlobalVariable__6B_;
  return this;
}

// ~UMovieGraphGlobalVariable @ 14dc74560

void __thiscall
UMovieGraphGlobalVariable::~UMovieGraphGlobalVariable(UMovieGraphGlobalVariable *this)

{
  *(undefined ***)this = &___7UMovieGraphVariable__6B_;
  if (*(void **)&this->field_0x78 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x78);
  }
  *(undefined ***)this = &___7UMovieGraphMember__6B_;
  if (*(void **)&this->field_0x50 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x50);
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  UMovieGraphValueContainer::~UMovieGraphValueContainer((UMovieGraphValueContainer *)this);
  return;
}

// CanRename @ 14dc78470

bool __thiscall
UMovieGraphGlobalVariable::CanRename(UMovieGraphGlobalVariable *this,FText *param_1,FText *param_2)

{
  return false;
}

// GetPrivateStaticClass @ 14dc81be0

UClass * __cdecl UMovieGraphGlobalVariable::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphGlobalVariable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphGlobalVariable",
               &Z_Registration_Info_UClass_UMovieGraphGlobalVariable.InnerSingleton,
               StaticRegisterNativesUMovieGraphGlobalVariable,0x88,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphGlobalVariable>,
               InternalVTableHelperCtorCaller<UMovieGraphGlobalVariable>,local_res8,
               UMovieGraphVariable::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphGlobalVariable.InnerSingleton;
}

// IsDeletable @ 14dc84250

bool __thiscall UMovieGraphGlobalVariable::IsDeletable(UMovieGraphGlobalVariable *this)

{
  return false;
}

// StaticRegisterNativesUMovieGraphGlobalVariable @ 14dc89bc0

void __cdecl UMovieGraphGlobalVariable::StaticRegisterNativesUMovieGraphGlobalVariable(void)

{
  return;
}

// UpdateValue @ 14dc8de00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieGraphGlobalVariable::UpdateValue
          (UMovieGraphGlobalVariable *this,FMovieGraphTraversalContext *param_1,
          UMovieGraphPipeline *param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\Graph\\MovieGraphConfig.h"
             ,0xac,L"Pure virtual not implemented (%s)");
  return;
}

