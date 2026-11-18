// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 26

// StaticClass @ 148ee45e0

UClass * __cdecl UMovieSceneNiagaraSystemSpawnSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneNiagaraSystemSpawnSection.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"MovieSceneNiagaraSystemSpawnSection",
               &Z_Registration_Info_UClass_UMovieSceneNiagaraSystemSpawnSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneNiagaraSystemSpawnSection,0x118,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneNiagaraSystemSpawnSection>,
               InternalVTableHelperCtorCaller<UMovieSceneNiagaraSystemSpawnSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneNiagaraSystemSpawnSection.InnerSingleton;
}

// UMovieSceneNiagaraSystemSpawnSection @ 148f80980

UMovieSceneNiagaraSystemSpawnSection * __thiscall
UMovieSceneNiagaraSystemSpawnSection::UMovieSceneNiagaraSystemSpawnSection
          (UMovieSceneNiagaraSystemSpawnSection *this,FVTableHelper *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneNiagaraSystemSpawnSection__6B_;
  return this;
}

// UMovieSceneNiagaraSystemSpawnSection @ 148f809b0

UMovieSceneNiagaraSystemSpawnSection * __thiscall
UMovieSceneNiagaraSystemSpawnSection::UMovieSceneNiagaraSystemSpawnSection
          (UMovieSceneNiagaraSystemSpawnSection *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,pFVar1);
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  this->_padding_ = (longlong)&___7UMovieSceneNiagaraSystemSpawnSection__6B_;
  this->SectionStartBehavior = Activate;
  this->SectionEvaluateBehavior = ActivateIfInactive;
  this->SectionEndBehavior = SetSystemInactive;
  this->AgeUpdateMode = TickDeltaTime;
  this->bAllowScalability = false;
  return this;
}

// ~UMovieSceneNiagaraSystemSpawnSection @ 148f81fd0

void __thiscall
UMovieSceneNiagaraSystemSpawnSection::~UMovieSceneNiagaraSystemSpawnSection
          (UMovieSceneNiagaraSystemSpawnSection *this)

{
  this->_padding_ = (longlong)&___7UMovieSceneNiagaraSystemSpawnSection__6B_;
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  return;
}

// GetAgeUpdateMode @ 148fb11c0

ENiagaraAgeUpdateMode __thiscall
UMovieSceneNiagaraSystemSpawnSection::GetAgeUpdateMode(UMovieSceneNiagaraSystemSpawnSection *this)

{
  return this->AgeUpdateMode;
}

// GetAllowScalability @ 148fb1270

bool __thiscall
UMovieSceneNiagaraSystemSpawnSection::GetAllowScalability
          (UMovieSceneNiagaraSystemSpawnSection *this)

{
  return this->bAllowScalability;
}

// GetPrivateStaticClass @ 148fb66c0

UClass * __cdecl UMovieSceneNiagaraSystemSpawnSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneNiagaraSystemSpawnSection.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"MovieSceneNiagaraSystemSpawnSection",
               &Z_Registration_Info_UClass_UMovieSceneNiagaraSystemSpawnSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneNiagaraSystemSpawnSection,0x118,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneNiagaraSystemSpawnSection>,
               InternalVTableHelperCtorCaller<UMovieSceneNiagaraSystemSpawnSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneNiagaraSystemSpawnSection.InnerSingleton;
}

// GetSectionEndBehavior @ 148fb7160

ENiagaraSystemSpawnSectionEndBehavior __thiscall
UMovieSceneNiagaraSystemSpawnSection::GetSectionEndBehavior
          (UMovieSceneNiagaraSystemSpawnSection *this)

{
  return this->SectionEndBehavior;
}

// GetSectionEvaluateBehavior @ 148fb7170

ENiagaraSystemSpawnSectionEvaluateBehavior __thiscall
UMovieSceneNiagaraSystemSpawnSection::GetSectionEvaluateBehavior
          (UMovieSceneNiagaraSystemSpawnSection *this)

{
  return this->SectionEvaluateBehavior;
}

// GetSectionStartBehavior @ 148fb7180

ENiagaraSystemSpawnSectionStartBehavior __thiscall
UMovieSceneNiagaraSystemSpawnSection::GetSectionStartBehavior
          (UMovieSceneNiagaraSystemSpawnSection *this)

{
  return this->SectionStartBehavior;
}

// SetAgeUpdateMode @ 148fcba10

void __thiscall
UMovieSceneNiagaraSystemSpawnSection::SetAgeUpdateMode
          (UMovieSceneNiagaraSystemSpawnSection *this,ENiagaraAgeUpdateMode param_1)

{
  this->AgeUpdateMode = param_1;
  return;
}

// SetAllowScalability @ 148fcba30

void __thiscall
UMovieSceneNiagaraSystemSpawnSection::SetAllowScalability
          (UMovieSceneNiagaraSystemSpawnSection *this,bool param_1)

{
  this->bAllowScalability = param_1;
  return;
}

// SetSectionEndBehavior @ 148fcc360

void __thiscall
UMovieSceneNiagaraSystemSpawnSection::SetSectionEndBehavior
          (UMovieSceneNiagaraSystemSpawnSection *this,ENiagaraSystemSpawnSectionEndBehavior param_1)

{
  this->SectionEndBehavior = param_1;
  return;
}

// SetSectionEvaluateBehavior @ 148fcc370

void __thiscall
UMovieSceneNiagaraSystemSpawnSection::SetSectionEvaluateBehavior
          (UMovieSceneNiagaraSystemSpawnSection *this,
          ENiagaraSystemSpawnSectionEvaluateBehavior param_1)

{
  this->SectionEvaluateBehavior = param_1;
  return;
}

// SetSectionStartBehavior @ 148fcc380

void __thiscall
UMovieSceneNiagaraSystemSpawnSection::SetSectionStartBehavior
          (UMovieSceneNiagaraSystemSpawnSection *this,
          ENiagaraSystemSpawnSectionStartBehavior param_1)

{
  this->SectionStartBehavior = param_1;
  return;
}

// StaticRegisterNativesUMovieSceneNiagaraSystemSpawnSection @ 148fcdc90

void __cdecl
UMovieSceneNiagaraSystemSpawnSection::StaticRegisterNativesUMovieSceneNiagaraSystemSpawnSection
          (void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 10;
  local_18.DataPtr = Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetAgeUpdateMode @ 148fdafa0

void __cdecl
UMovieSceneNiagaraSystemSpawnSection::execGetAgeUpdateMode
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[6].field_0x23;
  return;
}

// execGetAllowScalability @ 148fdafd0

void __cdecl
UMovieSceneNiagaraSystemSpawnSection::execGetAllowScalability
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[6].field_0x24;
  return;
}

// execGetSectionEndBehavior @ 148fdb000

void __cdecl
UMovieSceneNiagaraSystemSpawnSection::execGetSectionEndBehavior
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[6].field_0x22;
  return;
}

// execGetSectionEvaluateBehavior @ 148fdb030

void __cdecl
UMovieSceneNiagaraSystemSpawnSection::execGetSectionEvaluateBehavior
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[6].field_0x21;
  return;
}

// execGetSectionStartBehavior @ 148fdb060

void __cdecl
UMovieSceneNiagaraSystemSpawnSection::execGetSectionStartBehavior
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[6].field_0x20;
  return;
}

// execSetAgeUpdateMode @ 148fdb190

void __cdecl
UMovieSceneNiagaraSystemSpawnSection::execSetAgeUpdateMode
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[6].field_0x23 = local_res8[0];
  return;
}

// execSetAllowScalability @ 148fdb210

void __cdecl
UMovieSceneNiagaraSystemSpawnSection::execSetAllowScalability
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[6].field_0x24 = local_res8[0] != 0;
  return;
}

// execSetSectionEndBehavior @ 148fdb3e0

void __cdecl
UMovieSceneNiagaraSystemSpawnSection::execSetSectionEndBehavior
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[6].field_0x22 = local_res8[0];
  return;
}

// execSetSectionEvaluateBehavior @ 148fdb460

void __cdecl
UMovieSceneNiagaraSystemSpawnSection::execSetSectionEvaluateBehavior
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[6].field_0x21 = local_res8[0];
  return;
}

// execSetSectionStartBehavior @ 148fdb4e0

void __cdecl
UMovieSceneNiagaraSystemSpawnSection::execSetSectionStartBehavior
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[6].field_0x20 = local_res8[0];
  return;
}

