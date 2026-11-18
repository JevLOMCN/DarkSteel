// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 21

// StaticClass @ 14dcf7de0

UClass * __cdecl UMovieGraphScriptBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphScriptBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphScriptBase",
               &Z_Registration_Info_UClass_UMovieGraphScriptBase.InnerSingleton,
               StaticRegisterNativesUMovieGraphScriptBase,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphScriptBase>,
               InternalVTableHelperCtorCaller<UMovieGraphScriptBase>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphScriptBase.InnerSingleton;
}

// UMovieGraphScriptBase @ 14dd0b230

UMovieGraphScriptBase * __thiscall
UMovieGraphScriptBase::UMovieGraphScriptBase(UMovieGraphScriptBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMovieGraphScriptBase__6B_;
  return this;
}

// UMovieGraphScriptBase @ 14dd0b260

UMovieGraphScriptBase * __thiscall
UMovieGraphScriptBase::UMovieGraphScriptBase
          (UMovieGraphScriptBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMovieGraphScriptBase__6B_;
  return this;
}

// ~UMovieGraphScriptBase @ 14dd0ddb0

void __thiscall UMovieGraphScriptBase::~UMovieGraphScriptBase(UMovieGraphScriptBase *this)

{
  *(undefined ***)this = &___7UMovieGraphScriptBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14dd2d0f0

UClass * __cdecl UMovieGraphScriptBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphScriptBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphScriptBase",
               &Z_Registration_Info_UClass_UMovieGraphScriptBase.InnerSingleton,
               StaticRegisterNativesUMovieGraphScriptBase,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphScriptBase>,
               InternalVTableHelperCtorCaller<UMovieGraphScriptBase>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphScriptBase.InnerSingleton;
}

// IsPerShotCallbackNeeded @ 14dd33960

bool __thiscall UMovieGraphScriptBase::IsPerShotCallbackNeeded(UMovieGraphScriptBase *this)

{
  undefined1 uVar1;
  UFunction *this_00;
  UClass *pUVar2;
  char local_res10 [24];
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UMovieGraphScriptBase_IsPerShotCallbackNeeded);
  pUVar2 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar2->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res10[0] = '\0';
    (**(code **)(*(longlong *)this + 0x260))(this,this_00,local_res10);
    return local_res10[0] != '\0';
  }
                    /* WARNING: Could not recover jumptable at 0x00014dd339c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 0x2d0))(this);
  return (bool)uVar1;
}

// IsPerShotCallbackNeeded_Implementation @ 14dd339e0

bool __thiscall
UMovieGraphScriptBase::IsPerShotCallbackNeeded_Implementation(UMovieGraphScriptBase *this)

{
  return false;
}

// OnJobFinished @ 14dd37e30

void __thiscall
UMovieGraphScriptBase::OnJobFinished
          (UMovieGraphScriptBase *this,UMoviePipelineExecutorJob *param_1,
          FMoviePipelineOutputData *param_2)

{
  UFunction *this_00;
  UClass *pUVar1;
  UMoviePipelineExecutorJob *local_48;
  TObjectPtr<UMoviePipelineBase>_u_0 local_40;
  undefined8 local_38;
  undefined1 local_30;
  FMoviePipelineShotOutputData *local_28;
  undefined8 local_20;
  FMovieGraphRenderOutputData *local_18;
  undefined8 local_10;
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UMovieGraphScriptBase_OnJobFinished);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_40.DebugPtr = (UMoviePipelineBase *)0x0;
    local_38 = 0;
    local_30 = 0;
    local_28 = (FMoviePipelineShotOutputData *)0x0;
    local_20 = 0;
    local_18 = (FMovieGraphRenderOutputData *)0x0;
    local_10 = 0;
    local_48 = param_1;
    FMoviePipelineOutputData::operator=((FMoviePipelineOutputData *)&local_40.ObjectPtr,param_2);
    (**(code **)(*(longlong *)this + 0x260))(this,this_00,&local_48);
    DestructItems<FMovieGraphRenderOutputData,int>(local_18,(int)local_10);
    if (local_18 != (FMovieGraphRenderOutputData *)0x0) {
      FMemory::Free(local_18);
    }
    DestructItems<FMoviePipelineShotOutputData,int>(local_28,(int)local_20);
    if (local_28 != (FMoviePipelineShotOutputData *)0x0) {
      FMemory::Free(local_28);
    }
  }
  else {
    (**(code **)(*(longlong *)this + 0x2b8))(this,param_1,param_2);
  }
  return;
}

// OnJobFinished_Implementation @ 14dd37f30

void __thiscall
UMovieGraphScriptBase::OnJobFinished_Implementation
          (UMovieGraphScriptBase *this,UMoviePipelineExecutorJob *param_1,
          FMoviePipelineOutputData *param_2)

{
  return;
}

// OnJobStart @ 14dd37f40

void __thiscall
UMovieGraphScriptBase::OnJobStart(UMovieGraphScriptBase *this,UMoviePipelineExecutorJob *param_1)

{
  UFunction *this_00;
  UClass *pUVar1;
  UMoviePipelineExecutorJob *local_res18 [2];
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UMovieGraphScriptBase_OnJobStart);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res18[0] = param_1;
    (**(code **)(*(longlong *)this + 0x260))(this,this_00,local_res18);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014dd37fb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x2b0))(this,param_1);
  return;
}

// OnJobStart_Implementation @ 14dd37fc0

void __thiscall
UMovieGraphScriptBase::OnJobStart_Implementation
          (UMovieGraphScriptBase *this,UMoviePipelineExecutorJob *param_1)

{
  return;
}

// OnShotFinished @ 14dd39c10

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieGraphScriptBase::OnShotFinished
          (UMovieGraphScriptBase *this,UMoviePipelineExecutorJob *param_1,
          UMoviePipelineExecutorShot *param_2,FMoviePipelineOutputData *param_3)

{
  UFunction *this_00;
  UClass *pUVar1;
  UMoviePipelineExecutorJob *local_58;
  UMoviePipelineExecutorShot *local_50;
  TObjectPtr<UMoviePipelineBase>_u_0 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  FMoviePipelineShotOutputData *local_30;
  undefined8 local_28;
  FMovieGraphRenderOutputData *local_20;
  undefined8 local_18;
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UMovieGraphScriptBase_OnShotFinished);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_38 = 0;
    local_30 = (FMoviePipelineShotOutputData *)0x0;
    local_48.DebugPtr = (UMoviePipelineBase *)0x0;
    uStack_40 = 0;
    local_28 = 0;
    local_20 = (FMovieGraphRenderOutputData *)0x0;
    local_18 = 0;
    local_58 = param_1;
    local_50 = param_2;
    FMoviePipelineOutputData::operator=((FMoviePipelineOutputData *)&local_48.ObjectPtr,param_3);
    (**(code **)(*(longlong *)this + 0x260))(this,this_00,&local_58);
    DestructItems<FMovieGraphRenderOutputData,int>(local_20,(int)local_18);
    if (local_20 != (FMovieGraphRenderOutputData *)0x0) {
      FMemory::Free(local_20);
    }
    DestructItems<FMoviePipelineShotOutputData,int>(local_30,(int)local_28);
    if (local_30 != (FMoviePipelineShotOutputData *)0x0) {
      FMemory::Free(local_30);
    }
  }
  else {
    (**(code **)(*(longlong *)this + 0x2c8))(this,param_1,param_2,param_3);
  }
  return;
}

// OnShotFinished_Implementation @ 14dd39d20

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieGraphScriptBase::OnShotFinished_Implementation
          (UMovieGraphScriptBase *this,UMoviePipelineExecutorJob *param_1,
          UMoviePipelineExecutorShot *param_2,FMoviePipelineOutputData *param_3)

{
  return;
}

// OnShotStart @ 14dd39d30

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieGraphScriptBase::OnShotStart
          (UMovieGraphScriptBase *this,UMoviePipelineExecutorJob *param_1,
          UMoviePipelineExecutorShot *param_2)

{
  UFunction *this_00;
  UClass *pUVar1;
  UMoviePipelineExecutorJob *local_18;
  UMoviePipelineExecutorShot *local_10;
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UMovieGraphScriptBase_OnShotStart);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_18 = param_1;
    local_10 = param_2;
    (**(code **)(*(longlong *)this + 0x260))(this,this_00,&local_18);
  }
  else {
    (**(code **)(*(longlong *)this + 0x2c0))(this,param_1,param_2);
  }
  return;
}

// OnShotStart_Implementation @ 14dd39dc0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieGraphScriptBase::OnShotStart_Implementation
          (UMovieGraphScriptBase *this,UMoviePipelineExecutorJob *param_1,
          UMoviePipelineExecutorShot *param_2)

{
  return;
}

// StaticRegisterNativesUMovieGraphScriptBase @ 14dd45370

void __cdecl UMovieGraphScriptBase::StaticRegisterNativesUMovieGraphScriptBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UMovieGraphScriptBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execIsPerShotCallbackNeeded @ 14dd55a30

void __cdecl
UMovieGraphScriptBase::execIsPerShotCallbackNeeded(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2d0))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execOnJobFinished @ 14dd55d60

void __cdecl
UMovieGraphScriptBase::execOnJobFinished(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  undefined8 local_res8;
  uchar local_48 [24];
  FMoviePipelineShotOutputData *local_30;
  undefined8 local_28;
  FMovieGraphRenderOutputData *local_20;
  undefined8 local_18;
  
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
  local_48[0x10] = 0;
  local_30 = (FMoviePipelineShotOutputData *)0x0;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0xc] = '\0';
  local_48[0xd] = '\0';
  local_48[0xe] = '\0';
  local_48[0xf] = '\0';
  local_28 = 0;
  local_20 = (FMovieGraphRenderOutputData *)0x0;
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  puVar2 = local_48;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2b8))(param_1,local_res8,puVar2);
  DestructItems<FMovieGraphRenderOutputData,int>(local_20,(int)local_18);
  if (local_20 != (FMovieGraphRenderOutputData *)0x0) {
    FMemory::Free(local_20);
  }
  DestructItems<FMoviePipelineShotOutputData,int>(local_30,(int)local_28);
  if (local_30 != (FMoviePipelineShotOutputData *)0x0) {
    FMemory::Free(local_30);
  }
  return;
}

// execOnJobStart @ 14dd55ea0

void __cdecl UMovieGraphScriptBase::execOnJobStart(UObject *param_1,FFrame *param_2,void *param_3)

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

// execOnShotFinished @ 14dd55f60

void __cdecl
UMovieGraphScriptBase::execOnShotFinished(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  undefined8 local_res8;
  undefined8 local_res10;
  uchar local_58 [24];
  FMoviePipelineShotOutputData *local_40;
  undefined8 local_38;
  FMovieGraphRenderOutputData *local_30;
  undefined8 local_28;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
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
  local_58[0x10] = 0;
  local_40 = (FMoviePipelineShotOutputData *)0x0;
  local_58[0] = '\0';
  local_58[1] = '\0';
  local_58[2] = '\0';
  local_58[3] = '\0';
  local_58[4] = '\0';
  local_58[5] = '\0';
  local_58[6] = '\0';
  local_58[7] = '\0';
  local_58[8] = '\0';
  local_58[9] = '\0';
  local_58[10] = '\0';
  local_58[0xb] = '\0';
  local_58[0xc] = '\0';
  local_58[0xd] = '\0';
  local_58[0xe] = '\0';
  local_58[0xf] = '\0';
  local_38 = 0;
  local_30 = (FMovieGraphRenderOutputData *)0x0;
  local_28 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  puVar2 = local_58;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2c8))(param_1,local_res10,local_res8,puVar2);
  DestructItems<FMovieGraphRenderOutputData,int>(local_30,(int)local_28);
  if (local_30 != (FMovieGraphRenderOutputData *)0x0) {
    FMemory::Free(local_30);
  }
  DestructItems<FMoviePipelineShotOutputData,int>(local_40,(int)local_38);
  if (local_40 != (FMoviePipelineShotOutputData *)0x0) {
    FMemory::Free(local_40);
  }
  return;
}

// execOnShotStart @ 14dd560d0

void __cdecl UMovieGraphScriptBase::execOnShotStart(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  undefined8 local_res10;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
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
  (**(code **)(*(longlong *)param_1 + 0x2c0))(param_1,local_res10,local_res8);
  return;
}

