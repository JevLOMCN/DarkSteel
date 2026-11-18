// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 17

// StaticClass @ 14dd5f7d0

UClass * __cdecl UMoviePipelinePythonHostExecutor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelinePythonHostExecutor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelinePythonHostExecutor",
               &Z_Registration_Info_UClass_UMoviePipelinePythonHostExecutor.InnerSingleton,
               StaticRegisterNativesUMoviePipelinePythonHostExecutor,0x160,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelinePythonHostExecutor>,
               InternalVTableHelperCtorCaller<UMoviePipelinePythonHostExecutor>,local_res8,
               UMoviePipelineExecutorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelinePythonHostExecutor.InnerSingleton;
}

// UMoviePipelinePythonHostExecutor @ 14dd6b5d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMoviePipelinePythonHostExecutor * __thiscall
UMoviePipelinePythonHostExecutor::UMoviePipelinePythonHostExecutor
          (UMoviePipelinePythonHostExecutor *this,FVTableHelper *param_1)

{
  UMoviePipelineExecutorBase::UMoviePipelineExecutorBase((UMoviePipelineExecutorBase *)this,param_1)
  ;
  this->_padding_ = (longlong)&___7UMoviePipelinePythonHostExecutor__6B_;
  (this->ExecutorClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->PipelineQueue).field0_0x0.DebugPtr = (UMoviePipelineQueue *)0x0;
  (this->LastLoadedWorld).field0_0x0.DebugPtr = (UWorld *)0x0;
  return this;
}

// ~UMoviePipelinePythonHostExecutor @ 14dd6c380

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
UMoviePipelinePythonHostExecutor::~UMoviePipelinePythonHostExecutor
          (UMoviePipelinePythonHostExecutor *this)

{
  this->_padding_ = (longlong)&___7UMoviePipelinePythonHostExecutor__6B_;
  UMoviePipelineExecutorBase::~UMoviePipelineExecutorBase((UMoviePipelineExecutorBase *)this);
  return;
}

// CancelAllJobs_Implementation @ 14dd7a930

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
UMoviePipelinePythonHostExecutor::CancelAllJobs_Implementation
          (UMoviePipelinePythonHostExecutor *this)

{
  if (1 < (byte)LogMovieRenderPipeline._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    return;
  }
  return;
}

// CancelCurrentJob_Implementation @ 14dd7aa50

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
UMoviePipelinePythonHostExecutor::CancelCurrentJob_Implementation
          (UMoviePipelinePythonHostExecutor *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014dd7aa53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x300))();
  return;
}

// ExecuteDelayed @ 14dd7ff00

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
UMoviePipelinePythonHostExecutor::ExecuteDelayed
          (UMoviePipelinePythonHostExecutor *this,UMoviePipelineQueue *param_1)

{
  UFunction *this_00;
  UClass *pUVar1;
  UMoviePipelineQueue *local_res18 [2];
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UMoviePipelinePythonHostExecutor_ExecuteDelayed);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res18[0] = param_1;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,local_res18);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014dd7ff71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x308))(this,param_1);
  return;
}

// ExecuteDelayed_Implementation @ 14dd7ff80

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
UMoviePipelinePythonHostExecutor::ExecuteDelayed_Implementation
          (UMoviePipelinePythonHostExecutor *this,UMoviePipelineQueue *param_1)

{
  return;
}

// Execute_Implementation @ 14dd80b30

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
UMoviePipelinePythonHostExecutor::Execute_Implementation
          (UMoviePipelinePythonHostExecutor *this,UMoviePipelineQueue *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UWorld *pUVar4;
  UFunction *this_00;
  UClass *pUVar5;
  FScriptContainerElement *pFVar6;
  UMoviePipelineQueue *local_res8;
  
  piVar1 = &(GEngine->WorldList).Array.ArrayNum;
  pFVar6 = (GEngine->WorldList).Array.AllocatorInstance.Data;
  iVar3 = *piVar1;
  pFVar2 = pFVar6 + (longlong)iVar3 * 8;
  while( true ) {
    if (*piVar1 != iVar3) {
      `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (pFVar6 == pFVar2) break;
    if (**(char **)pFVar6 == '\x01') {
      pUVar4 = *(UWorld **)(*(char **)pFVar6 + 0x2c0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UWorld *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      (this->LastLoadedWorld).field0_0x0.DebugPtr = pUVar4;
    }
    pFVar6 = pFVar6 + 8;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UMoviePipelineQueue *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->PipelineQueue).field0_0x0.DebugPtr = param_1;
  TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>::
  AddUObject<UMoviePipelinePythonHostExecutor>
            ((TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy> *)
             &FCoreUObjectDelegates::PostLoadMapWithWorld,
             (UMoviePipelinePythonHostExecutor *)&local_res8,(pmf_1f5a2095)this);
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UMoviePipelinePythonHostExecutor_ExecuteDelayed);
  pUVar5 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar5->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res8 = param_1;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_res8);
  }
  else {
    (**(code **)(this->_padding_ + 0x308))(this,param_1);
  }
  return;
}

// GetPrivateStaticClass @ 14dd8c0d0

UClass * __cdecl UMoviePipelinePythonHostExecutor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelinePythonHostExecutor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelinePythonHostExecutor",
               &Z_Registration_Info_UClass_UMoviePipelinePythonHostExecutor.InnerSingleton,
               StaticRegisterNativesUMoviePipelinePythonHostExecutor,0x160,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelinePythonHostExecutor>,
               InternalVTableHelperCtorCaller<UMoviePipelinePythonHostExecutor>,local_res8,
               UMoviePipelineExecutorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelinePythonHostExecutor.InnerSingleton;
}

// IsRendering_Implementation @ 14dd8ff40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UMoviePipelinePythonHostExecutor::IsRendering_Implementation(UMoviePipelinePythonHostExecutor *this)

{
  return false;
}

// OnMapLoad @ 14dd915e0

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
UMoviePipelinePythonHostExecutor::OnMapLoad(UMoviePipelinePythonHostExecutor *this,UWorld *param_1)

{
  UFunction *this_00;
  UClass *pUVar1;
  UWorld *local_res18 [2];
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UMoviePipelinePythonHostExecutor_OnMapLoad);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res18[0] = param_1;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,local_res18);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014dd91651. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x310))(this,param_1);
  return;
}

// OnMapLoadFinished @ 14dd91e80

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
UMoviePipelinePythonHostExecutor::OnMapLoadFinished
          (UMoviePipelinePythonHostExecutor *this,UWorld *param_1)

{
  UFunction *this_00;
  UClass *pUVar1;
  UWorld *local_res8;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->LastLoadedWorld).field0_0x0.DebugPtr = param_1;
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UMoviePipelinePythonHostExecutor_OnMapLoad);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res8 = param_1;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_res8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014dd91f11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x310))(this,param_1);
  return;
}

// OnMapLoad_Implementation @ 14dd91f20

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
UMoviePipelinePythonHostExecutor::OnMapLoad_Implementation
          (UMoviePipelinePythonHostExecutor *this,UWorld *param_1)

{
  return;
}

// StaticRegisterNativesUMoviePipelinePythonHostExecutor @ 14dda6750

void __cdecl
UMoviePipelinePythonHostExecutor::StaticRegisterNativesUMoviePipelinePythonHostExecutor(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UMoviePipelinePythonHostExecutor_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execExecuteDelayed @ 14ddab220

void __cdecl
UMoviePipelinePythonHostExecutor::execExecuteDelayed(UObject *param_1,FFrame *param_2,void *param_3)

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
  (**(code **)(*(longlong *)param_1 + 0x308))(param_1,local_res8);
  return;
}

// execGetLastLoadedWorld @ 14ddab860

void __cdecl
UMoviePipelinePythonHostExecutor::execGetLastLoadedWorld
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[8].field_0x18;
  return;
}

// execOnMapLoad @ 14ddad510

void __cdecl
UMoviePipelinePythonHostExecutor::execOnMapLoad(UObject *param_1,FFrame *param_2,void *param_3)

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
  (**(code **)(*(longlong *)param_1 + 0x310))(param_1,local_res8);
  return;
}

