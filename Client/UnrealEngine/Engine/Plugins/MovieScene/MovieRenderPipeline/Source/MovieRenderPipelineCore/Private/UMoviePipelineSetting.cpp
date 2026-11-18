// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 32

// BeginExportImpl @ 14dc783d0

void __thiscall UMoviePipelineSetting::BeginExportImpl(UMoviePipelineSetting *this)

{
  return;
}

// BuildNewProcessCommandLineArgsImpl @ 14dc78440

void __thiscall
UMoviePipelineSetting::BuildNewProcessCommandLineArgsImpl
          (UMoviePipelineSetting *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_4)

{
  return;
}

// GetFormatArguments @ 14dc80660

void __thiscall
UMoviePipelineSetting::GetFormatArguments
          (UMoviePipelineSetting *this,FMoviePipelineFormatArgs *param_1)

{
  return;
}

// GetPriority @ 14dc81770

int __thiscall UMoviePipelineSetting::GetPriority(UMoviePipelineSetting *this)

{
  return 0;
}

// GetValidationState @ 14dc83670

EMoviePipelineValidationState __thiscall
UMoviePipelineSetting::GetValidationState(UMoviePipelineSetting *this)

{
  return this->ValidationState;
}

// HasFinishedExportingImpl @ 14dc83ef0

bool __thiscall UMoviePipelineSetting::HasFinishedExportingImpl(UMoviePipelineSetting *this)

{
  return true;
}

// IgnoreTransientFilters @ 14dc83f40

bool __thiscall UMoviePipelineSetting::IgnoreTransientFilters(UMoviePipelineSetting *this)

{
  return false;
}

// IsEnabled @ 14dc84330

bool __thiscall UMoviePipelineSetting::IsEnabled(UMoviePipelineSetting *this)

{
  return this->bEnabled;
}

// IsSolo @ 14dc844b0

bool __thiscall UMoviePipelineSetting::IsSolo(UMoviePipelineSetting *this)

{
  return true;
}

// OnSetupForShotImpl @ 14dc85210

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMoviePipelineSetting::OnSetupForShotImpl
          (UMoviePipelineSetting *this,UMoviePipelineExecutorShot *param_1)

{
  return;
}

// OnTeardownForShotImpl @ 14dc85230

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMoviePipelineSetting::OnTeardownForShotImpl
          (UMoviePipelineSetting *this,UMoviePipelineExecutorShot *param_1)

{
  return;
}

// SetIsEnabled @ 14dc894d0

void __thiscall UMoviePipelineSetting::SetIsEnabled(UMoviePipelineSetting *this,bool param_1)

{
  this->bEnabled = param_1;
  return;
}

// SetupForPipelineImpl @ 14dc89690

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMoviePipelineSetting::SetupForPipelineImpl(UMoviePipelineSetting *this,UMoviePipeline *param_1)

{
  return;
}

// StaticClass @ 14dc89ac0

UClass * __cdecl UMoviePipelineSetting::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineSetting.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineSetting",
               &Z_Registration_Info_UClass_UMoviePipelineSetting.InnerSingleton,
               StaticRegisterNativesUMoviePipelineSetting,0x48,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineSetting>,
               InternalVTableHelperCtorCaller<UMoviePipelineSetting>,aFStackX_8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineSetting.InnerSingleton;
}

// TeardownForPipelineImpl @ 14dc89e40

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMoviePipelineSetting::TeardownForPipelineImpl(UMoviePipelineSetting *this,UMoviePipeline *param_1)

{
  return;
}

// UpdateTelemetry @ 14dc8c8f0

void __thiscall
UMoviePipelineSetting::UpdateTelemetry
          (UMoviePipelineSetting *this,FMoviePipelineShotRenderTelemetry *param_1)

{
  return;
}

// ValidateStateImpl @ 14dc8e220

void __thiscall UMoviePipelineSetting::ValidateStateImpl(UMoviePipelineSetting *this)

{
  int *piVar1;
  int iVar2;
  FText *pFVar3;
  
  piVar1 = &(this->ValidationResults).ArrayMax;
  pFVar3 = (FText *)(this->ValidationResults).AllocatorInstance.Data;
  iVar2 = (this->ValidationResults).ArrayNum;
  if ((this->ValidationResults).ArrayMax < 0) {
    DestructItems<FText,int>(pFVar3,iVar2);
    (this->ValidationResults).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->ValidationResults).AllocatorInstance,0,piVar1);
      this->ValidationState = Valid;
      return;
    }
  }
  else {
    DestructItems<FText,int>(pFVar3,iVar2);
    (this->ValidationResults).ArrayNum = 0;
  }
  this->ValidationState = Valid;
  return;
}

// UMoviePipelineSetting @ 14dd6b730

UMoviePipelineSetting * __thiscall
UMoviePipelineSetting::UMoviePipelineSetting(UMoviePipelineSetting *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMoviePipelineSetting__6B_;
  (this->CachedPipeline).WeakPtr = (FWeakObjectPtr)0x0;
  (this->ValidationResults).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ValidationResults).ArrayNum = 0;
  (this->ValidationResults).ArrayMax = 0;
  return this;
}

// UMoviePipelineSetting @ 14dd6b770

UMoviePipelineSetting * __thiscall
UMoviePipelineSetting::UMoviePipelineSetting(UMoviePipelineSetting *this)

{
  UObject::UObject((UObject *)this);
  this->bEnabled = true;
  this->_padding_ = (longlong)&___7UMoviePipelineSetting__6B_;
  (this->CachedPipeline).WeakPtr = (FWeakObjectPtr)0x0;
  (this->ValidationResults).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ValidationResults).ArrayNum = 0;
  (this->ValidationResults).ArrayMax = 0;
  return this;
}

// ~UMoviePipelineSetting @ 14dd6c480

void __thiscall UMoviePipelineSetting::~UMoviePipelineSetting(UMoviePipelineSetting *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMoviePipelineSetting__6B_;
  DestructItems<FText,int>
            ((FText *)(this->ValidationResults).AllocatorInstance.Data,
             (this->ValidationResults).ArrayNum);
  pFVar1 = (this->ValidationResults).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPipeline @ 14dd8b8d0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UMoviePipeline * __thiscall UMoviePipelineSetting::GetPipeline(UMoviePipelineSetting *this)

{
  UMoviePipeline *pUVar1;
  
  pUVar1 = (UMoviePipeline *)FWeakObjectPtr::Get(&(this->CachedPipeline).WeakPtr);
  return pUVar1;
}

// GetPrivateStaticClass @ 14dd8c300

UClass * __cdecl UMoviePipelineSetting::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineSetting.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineSetting",
               &Z_Registration_Info_UClass_UMoviePipelineSetting.InnerSingleton,
               StaticRegisterNativesUMoviePipelineSetting,0x48,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineSetting>,
               InternalVTableHelperCtorCaller<UMoviePipelineSetting>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineSetting.InnerSingleton;
}

// GetValidationResults @ 14dd8d840

TArray<FText,TSizedDefaultAllocator<32>_> * __thiscall
UMoviePipelineSetting::GetValidationResults
          (UMoviePipelineSetting *this,
          TArray<FText,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FText *pFVar2;
  char cVar3;
  undefined1 local_res8 [8];
  
  if (0 < (this->ValidationResults).ArrayNum) {
    cVar3 = (**(code **)(this->_padding_ + 0x2f8))();
    if (cVar3 == '\0') {
      `UMoviePipelineSetting::GetValidationResults'::__l5::<lambda_1>::operator()(local_res8);
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->ValidationResults).ArrayNum;
  pFVar2 = (FText *)(this->ValidationResults).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  ConstructItems<FText,FText,int>((__return_storage_ptr__->AllocatorInstance).Data,pFVar2,iVar1);
  return __return_storage_ptr__;
}

// GetWorld @ 14dd8eab0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UMoviePipelineSetting::GetWorld(UMoviePipelineSetting *this)

{
  UObject *pUVar1;
  UWorld *pUVar2;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->CachedPipeline).WeakPtr);
  if (pUVar1 != (UObject *)0x0) {
    pUVar1 = FWeakObjectPtr::Get(&(this->CachedPipeline).WeakPtr);
                    /* WARNING: Could not recover jumptable at 0x00014dd8eaeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar2 = (UWorld *)
             (**(code **)(*(longlong *)pUVar1 + 0x180))
                       (pUVar1,*(code **)(*(longlong *)pUVar1 + 0x180));
    return pUVar2;
  }
  pUVar2 = UObject::GetWorld((UObject *)this);
  return pUVar2;
}

// IsValidOnPrimary @ 14dd90370

bool __thiscall UMoviePipelineSetting::IsValidOnPrimary(UMoviePipelineSetting *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\MoviePipelineSetting.h"
             ,0x76,L"Pure virtual not implemented (%s)");
  return false;
}

// IsValidOnShots @ 14dd903d0

bool __thiscall UMoviePipelineSetting::IsValidOnShots(UMoviePipelineSetting *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\MoviePipelineSetting.h"
             ,0x74,L"Pure virtual not implemented (%s)");
  return false;
}

// OnMoviePipelineInitialized @ 14dd92070

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMoviePipelineSetting::OnMoviePipelineInitialized
          (UMoviePipelineSetting *this,UMoviePipeline *param_1)

{
  FWeakObjectPtr local_res8;
  UMoviePipeline *local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMoviePipeline *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMoviePipeline *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->CachedPipeline).WeakPtr = local_res8;
                    /* WARNING: Could not recover jumptable at 0x00014dd920e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2b8))(this,param_1);
  return;
}

// StaticRegisterNativesUMoviePipelineSetting @ 14dda6810

void __cdecl UMoviePipelineSetting::StaticRegisterNativesUMoviePipelineSetting(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UMoviePipelineSetting_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execBuildNewProcessCommandLineArgs @ 14ddaa8e0

void __cdecl
UMoviePipelineSetting::execBuildNewProcessCommandLineArgs
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString **ppFVar2;
  FString **ppFVar3;
  FString **ppFVar4;
  FString **ppFVar5;
  FString *local_58;
  undefined8 local_50;
  FString *local_48;
  undefined8 local_40;
  FString *local_38;
  undefined8 local_30;
  FString *local_28;
  undefined8 local_20;
  
  local_28 = (FString *)0x0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_38 = (FString *)0x0;
  local_30 = 0;
  ppFVar5 = &local_28;
  if ((FString **)param_2->MostRecentPropertyAddress != (FString **)0x0) {
    ppFVar5 = (FString **)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_48 = (FString *)0x0;
  local_40 = 0;
  ppFVar4 = &local_38;
  if ((FString **)param_2->MostRecentPropertyAddress != (FString **)0x0) {
    ppFVar4 = (FString **)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_58 = (FString *)0x0;
  local_50 = 0;
  ppFVar3 = &local_48;
  if ((FString **)param_2->MostRecentPropertyAddress != (FString **)0x0) {
    ppFVar3 = (FString **)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  ppFVar2 = &local_58;
  if ((FString **)param_2->MostRecentPropertyAddress != (FString **)0x0) {
    ppFVar2 = (FString **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x318))(param_1,ppFVar5,ppFVar4,ppFVar3,ppFVar2);
  DestructItems<FString,int>(local_58,(int)local_50);
  if (local_58 != (FString *)0x0) {
    FMemory::Free(local_58);
  }
  DestructItems<FString,int>(local_48,(int)local_40);
  if (local_48 != (FString *)0x0) {
    FMemory::Free(local_48);
  }
  DestructItems<FString,int>(local_38,(int)local_30);
  if (local_38 != (FString *)0x0) {
    FMemory::Free(local_38);
  }
  DestructItems<FString,int>(local_28,(int)local_20);
  if (local_28 != (FString *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execIsEnabled @ 14ddad380

void __cdecl UMoviePipelineSetting::execIsEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x328))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execSetIsEnabled @ 14ddae0d0

void __cdecl UMoviePipelineSetting::execSetIsEnabled(UObject *param_1,FFrame *param_2,void *param_3)

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
  (**(code **)(*(longlong *)param_1 + 0x330))(param_1,local_res8[0] != 0);
  return;
}

// operator() @ 15058eab0

bool __thiscall
`UMoviePipelineSetting::GetValidationResults'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4426064068834492463>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4426064068834492463>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

