// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 17

// StaticClass @ 14dc68410

UClass * __cdecl UMoviePipelineBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineBase",
               &Z_Registration_Info_UClass_UMoviePipelineBase.InnerSingleton,
               StaticRegisterNativesUMoviePipelineBase,0x98,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineBase>,
               InternalVTableHelperCtorCaller<UMoviePipelineBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineBase.InnerSingleton;
}

// UMoviePipelineBase @ 14dc73910

UMoviePipelineBase * __thiscall
UMoviePipelineBase::UMoviePipelineBase(UMoviePipelineBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMoviePipelineBase__6B_;
  *(undefined8 *)&this->OnMoviePipelineWorkFinishedDelegate = 0;
  *(undefined8 *)&(this->OnMoviePipelineWorkFinishedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnMoviePipelineWorkFinishedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnMoviePipelineShotWorkFinishedDelegate = 0;
  *(undefined8 *)&(this->OnMoviePipelineShotWorkFinishedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnMoviePipelineShotWorkFinishedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnMoviePipelineWorkFinishedDelegateNative = 0;
  *(undefined8 *)&(this->OnMoviePipelineWorkFinishedDelegateNative).field_0x8 = 0;
  *(undefined8 *)&(this->OnMoviePipelineWorkFinishedDelegateNative).field_0x10 = 0;
  *(undefined8 *)&this->OnMoviePipelineShotWorkFinishedDelegateNative = 0;
  *(undefined8 *)&(this->OnMoviePipelineShotWorkFinishedDelegateNative).field_0x8 = 0;
  *(undefined8 *)&(this->OnMoviePipelineShotWorkFinishedDelegateNative).field_0x10 = 0;
  *(undefined8 *)&(this->OnMoviePipelineWorkFinishedDelegateNative).field_0x18 = 2;
  *(undefined8 *)&(this->OnMoviePipelineShotWorkFinishedDelegateNative).field_0x18 = 2;
  return this;
}

// UMoviePipelineBase @ 14dc73990

UMoviePipelineBase * __thiscall
UMoviePipelineBase::UMoviePipelineBase(UMoviePipelineBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMoviePipelineBase__6B_;
  *(undefined8 *)&this->OnMoviePipelineWorkFinishedDelegate = 0;
  *(undefined8 *)&(this->OnMoviePipelineWorkFinishedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnMoviePipelineWorkFinishedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnMoviePipelineShotWorkFinishedDelegate = 0;
  *(undefined8 *)&(this->OnMoviePipelineShotWorkFinishedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnMoviePipelineShotWorkFinishedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnMoviePipelineWorkFinishedDelegateNative = 0;
  *(undefined8 *)&(this->OnMoviePipelineWorkFinishedDelegateNative).field_0x8 = 0;
  *(undefined8 *)&(this->OnMoviePipelineWorkFinishedDelegateNative).field_0x10 = 0;
  *(undefined8 *)&this->OnMoviePipelineShotWorkFinishedDelegateNative = 0;
  *(undefined8 *)&(this->OnMoviePipelineShotWorkFinishedDelegateNative).field_0x8 = 0;
  *(undefined8 *)&(this->OnMoviePipelineShotWorkFinishedDelegateNative).field_0x10 = 0;
  *(undefined8 *)&(this->OnMoviePipelineWorkFinishedDelegateNative).field_0x18 = 2;
  *(undefined8 *)&(this->OnMoviePipelineShotWorkFinishedDelegateNative).field_0x18 = 2;
  return this;
}

// ~UMoviePipelineBase @ 14dc74970

void __thiscall UMoviePipelineBase::~UMoviePipelineBase(UMoviePipelineBase *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMoviePipelineBase__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnMoviePipelineShotWorkFinishedDelegateNative).field_0x8,
             *(int *)&(this->OnMoviePipelineShotWorkFinishedDelegateNative).field_0x10);
  pvVar1 = *(void **)&(this->OnMoviePipelineShotWorkFinishedDelegateNative).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMoviePipelineShotWorkFinishedDelegateNative);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnMoviePipelineWorkFinishedDelegateNative).field_0x8,
             *(int *)&(this->OnMoviePipelineWorkFinishedDelegateNative).field_0x10);
  pvVar1 = *(void **)&(this->OnMoviePipelineWorkFinishedDelegateNative).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMoviePipelineWorkFinishedDelegateNative);
  pvVar1 = *(void **)&(this->OnMoviePipelineShotWorkFinishedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMoviePipelineShotWorkFinishedDelegate);
  pvVar1 = *(void **)&(this->OnMoviePipelineWorkFinishedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMoviePipelineWorkFinishedDelegate);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPipelineStateImpl @ 14dc81760

EMovieRenderPipelineState __thiscall
UMoviePipelineBase::GetPipelineStateImpl(UMoviePipelineBase *this)

{
  return Uninitialized;
}

// GetPrivateStaticClass @ 14dc825a0

UClass * __cdecl UMoviePipelineBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineBase",
               &Z_Registration_Info_UClass_UMoviePipelineBase.InnerSingleton,
               StaticRegisterNativesUMoviePipelineBase,0x98,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineBase>,
               InternalVTableHelperCtorCaller<UMoviePipelineBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineBase.InnerSingleton;
}

// IsPostShotCallbackNeeded @ 14dc84460

bool __thiscall UMoviePipelineBase::IsPostShotCallbackNeeded(UMoviePipelineBase *this)

{
  return false;
}

// IsShutdownRequestedImpl @ 14dc844a0

bool __thiscall UMoviePipelineBase::IsShutdownRequestedImpl(UMoviePipelineBase *this)

{
  return false;
}

// OnMoviePipelineShotWorkFinishedImpl @ 14dc851c0

TMulticastDelegate<void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy> * __thiscall
UMoviePipelineBase::OnMoviePipelineShotWorkFinishedImpl(UMoviePipelineBase *this)

{
  return &this->OnMoviePipelineShotWorkFinishedDelegateNative;
}

// OnMoviePipelineWorkFinishedImpl @ 14dc851d0

TMulticastDelegate<void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy> * __thiscall
UMoviePipelineBase::OnMoviePipelineWorkFinishedImpl(UMoviePipelineBase *this)

{
  return &this->OnMoviePipelineWorkFinishedDelegateNative;
}

// RequestShutdownImpl @ 14dc86990

void __thiscall UMoviePipelineBase::RequestShutdownImpl(UMoviePipelineBase *this,bool param_1)

{
  return;
}

// ShutdownImpl @ 14dc897d0

void __thiscall UMoviePipelineBase::ShutdownImpl(UMoviePipelineBase *this,bool param_1)

{
  return;
}

// StaticRegisterNativesUMoviePipelineBase @ 14dc89cf0

void __cdecl UMoviePipelineBase::StaticRegisterNativesUMoviePipelineBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UMoviePipelineBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetPipelineState @ 14dc94c10

void __cdecl
UMoviePipelineBase::execGetPipelineState(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2c8))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execIsShutdownRequested @ 14dc95d40

void __cdecl
UMoviePipelineBase::execIsShutdownRequested(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2c0))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execRequestShutdown @ 14dc96ea0

void __cdecl UMoviePipelineBase::execRequestShutdown(UObject *param_1,FFrame *param_2,void *param_3)

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
  (**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_res8[0] != 0);
  return;
}

// execShutdown @ 14dc97a30

void __cdecl UMoviePipelineBase::execShutdown(UObject *param_1,FFrame *param_2,void *param_3)

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
  (**(code **)(*(longlong *)param_1 + 0x2b8))(param_1,local_res8[0] != 0);
  return;
}

