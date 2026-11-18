// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTasks
// Functions: 13

// StaticClass @ 146ceb3b0

UClass * __cdecl UGameplayTask_WaitDelay::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayTask_WaitDelay.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTasks",L"GameplayTask_WaitDelay",
               &Z_Registration_Info_UClass_UGameplayTask_WaitDelay.InnerSingleton,
               StaticRegisterNativesUGameplayTask_WaitDelay,0xa0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UGameplayTask_WaitDelay>,
               InternalVTableHelperCtorCaller<UGameplayTask_WaitDelay>,local_res8,
               UGameplayTask::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayTask_WaitDelay.InnerSingleton;
}

// UGameplayTask_WaitDelay @ 146cedca0

UGameplayTask_WaitDelay * __thiscall
UGameplayTask_WaitDelay::UGameplayTask_WaitDelay
          (UGameplayTask_WaitDelay *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->OnFinish = 0;
  *(undefined8 *)&(this->OnFinish).field_0x8 = 0;
  *(undefined8 *)&(this->OnFinish).field_0x10 = 0;
  return this;
}

// UGameplayTask_WaitDelay @ 146cedd10

UGameplayTask_WaitDelay * __thiscall
UGameplayTask_WaitDelay::UGameplayTask_WaitDelay
          (UGameplayTask_WaitDelay *this,FObjectInitializer *param_1)

{
  UGameplayTask::UGameplayTask((UGameplayTask *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  *(undefined8 *)&this->OnFinish = 0;
  *(undefined8 *)&(this->OnFinish).field_0x8 = 0;
  *(undefined8 *)&(this->OnFinish).field_0x10 = 0;
  this->Time = 0.0;
  this->TimeStarted = 0.0;
  return this;
}

// ~UGameplayTask_WaitDelay @ 146cee2a0

void __thiscall UGameplayTask_WaitDelay::~UGameplayTask_WaitDelay(UGameplayTask_WaitDelay *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  pvVar1 = *(void **)&(this->OnFinish).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFinish);
  this->_padding_ = (longlong)&UGameplayTask::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UGameplayTask::_vftable__for__IGameplayTaskOwnerInterface__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IGameplayTaskOwnerInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Activate @ 146ceede0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameplayTask_WaitDelay::Activate(UGameplayTask_WaitDelay *this)

{
  UWorld *this_00;
  FTimerManager *pFVar1;
  FTimerHandle local_res8 [4];
  code *local_18;
  undefined8 uStack_10;
  
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  this->TimeStarted = this_00->TimeSeconds;
  if (this->Time <= 0.0) {
    pFVar1 = UWorld::GetTimerManager(this_00);
    uStack_10 = (ulonglong)uStack_10._4_4_ << 0x20;
    local_18 = OnTimeFinish;
    FTimerManager::SetTimerForNextTick<UGameplayTask_WaitDelay>
              (pFVar1,(UGameplayTask_WaitDelay *)local_res8,(pmf_459a3c1b *)this);
    return;
  }
  local_res8[0].Handle = 0;
  pFVar1 = UWorld::GetTimerManager(this_00);
  uStack_10 = (ulonglong)uStack_10._4_4_ << 0x20;
  local_18 = OnTimeFinish;
  FTimerManager::SetTimer<UGameplayTask_WaitDelay>
            (pFVar1,local_res8,this,(pmf_459a3c1b *)&local_18,(float)this->Time,false,
             __real_bf800000);
  return;
}

// FTaskDelayDelegate_DelegateWrapper @ 146cf1950

void __cdecl
UGameplayTask_WaitDelay::FTaskDelayDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,(void *)0x0);
  return;
}

// GetDebugString @ 146cf2640

FString * __thiscall
UGameplayTask_WaitDelay::GetDebugString
          (UGameplayTask_WaitDelay *this,FString *__return_storage_ptr__)

{
  (**(code **)(this->_padding_ + 0x180))();
  ::FString::PrintfImpl(__return_storage_ptr__,L"WaitDelay. Time: %.2f. TimeLeft: %.2f");
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146cf31a0

UClass * __cdecl UGameplayTask_WaitDelay::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayTask_WaitDelay.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTasks",L"GameplayTask_WaitDelay",
               &Z_Registration_Info_UClass_UGameplayTask_WaitDelay.InnerSingleton,
               StaticRegisterNativesUGameplayTask_WaitDelay,0xa0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UGameplayTask_WaitDelay>,
               InternalVTableHelperCtorCaller<UGameplayTask_WaitDelay>,local_res8,
               UGameplayTask::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayTask_WaitDelay.InnerSingleton;
}

// OnTimeFinish @ 146cf5af0

void __thiscall UGameplayTask_WaitDelay::OnTimeFinish(UGameplayTask_WaitDelay *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnFinish,(void *)0x0);
  UGameplayTask::EndTask((UGameplayTask *)this);
  return;
}

// StaticRegisterNativesUGameplayTask_WaitDelay @ 146cf7d00

void __cdecl UGameplayTask_WaitDelay::StaticRegisterNativesUGameplayTask_WaitDelay(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UGameplayTask_WaitDelay_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TaskWaitDelay @ 146cf7e80

UGameplayTask_WaitDelay * __cdecl
UGameplayTask_WaitDelay::TaskWaitDelay
          (IGameplayTaskOwnerInterface *param_1,float param_2,uchar param_3)

{
  UGameplayTask_WaitDelay *this;
  
  this = UGameplayTask::NewTaskUninitialized<UGameplayTask_WaitDelay>();
  if (this != (UGameplayTask_WaitDelay *)0x0) {
    UGameplayTask::InitTask((UGameplayTask *)this,param_1,param_3);
    this->Time = (double)param_2;
  }
  return this;
}

// TaskWaitDelay @ 146cf7ef0

UGameplayTask_WaitDelay * __cdecl
UGameplayTask_WaitDelay::TaskWaitDelay
          (TScriptInterface<IGameplayTaskOwnerInterface> *param_1,float param_2,uchar param_3)

{
  UGameplayTask_WaitDelay *this;
  
  this = UGameplayTask::NewTaskUninitialized<UGameplayTask_WaitDelay>();
  if (((this != (UGameplayTask_WaitDelay *)0x0) && (*(longlong *)param_1 != 0)) &&
     (*(IGameplayTaskOwnerInterface **)&param_1->field_0x8 != (IGameplayTaskOwnerInterface *)0x0)) {
    UGameplayTask::InitTask
              ((UGameplayTask *)this,*(IGameplayTaskOwnerInterface **)&param_1->field_0x8,param_3);
    this->Time = (double)param_2;
  }
  return this;
}

// execTaskWaitDelay @ 146cf9fb0

void __cdecl
UGameplayTask_WaitDelay::execTaskWaitDelay(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  uchar uVar3;
  float fVar4;
  UObject *pUVar5;
  UGameplayTask_WaitDelay *this;
  IGameplayTaskOwnerInterface *pIVar6;
  IGameplayTaskOwnerInterface *pIVar7;
  uchar local_res10 [8];
  float local_res18 [4];
  UObject *local_48;
  IGameplayTaskOwnerInterface *pIStack_40;
  
  local_48 = (UObject *)0x0;
  pIStack_40 = (IGameplayTaskOwnerInterface *)0x0;
  FInterfaceProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar5 = local_48;
  fVar4 = local_res18[0];
  uVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_48);
  }
  pIVar7 = pIStack_40;
  this = UGameplayTask::NewTaskUninitialized<UGameplayTask_WaitDelay>();
  if (this != (UGameplayTask_WaitDelay *)0x0) {
    pIVar6 = pIVar7;
    if (pUVar5 == (UObject *)0x0) {
      pIVar6 = (IGameplayTaskOwnerInterface *)0x0;
    }
    if (pIVar6 != (IGameplayTaskOwnerInterface *)0x0) {
      if (pUVar5 == (UObject *)0x0) {
        pIVar7 = (IGameplayTaskOwnerInterface *)0x0;
      }
      UGameplayTask::InitTask((UGameplayTask *)this,pIVar7,uVar3);
      this->Time = (double)fVar4;
    }
  }
  *(UGameplayTask_WaitDelay **)param_3 = this;
  return;
}

