// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// StaticClass @ 14b5092d0

UClass * __cdecl UDS_M_CommonProgress::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_CommonProgress.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_CommonProgress",
               &Z_Registration_Info_UClass_UDS_M_CommonProgress.InnerSingleton,
               StaticRegisterNativesUDS_M_CommonProgress,0x200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_CommonProgress>,
               InternalVTableHelperCtorCaller<UDS_M_CommonProgress>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_CommonProgress.InnerSingleton;
}

// UDS_M_CommonProgress @ 14b510760

UDS_M_CommonProgress * __thiscall
UDS_M_CommonProgress::UDS_M_CommonProgress(UDS_M_CommonProgress *this,FVTableHelper *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  FTickableGameObject::FTickableGameObject((FTickableGameObject *)&this->_padding_,NewObject);
  this->_padding_ = (longlong)&_vftable__for__UDS_ModelBase__;
  *(undefined8 *)&this->Delegate_TimerFinish = 0;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  *(undefined8 *)&(this->Delegate_TimerFinish).field_0x8 = 0;
  *(undefined4 *)&(this->Delegate_TimerFinish).field_0x10 = 0;
  FText::FText(&this->ProgressText);
  this->TimeFormat = None;
  this->bIsTickable = false;
  return this;
}

// UDS_M_CommonProgress @ 14b5107e0

UDS_M_CommonProgress * __thiscall
UDS_M_CommonProgress::UDS_M_CommonProgress(UDS_M_CommonProgress *this,FObjectInitializer *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  FTickableGameObject::FTickableGameObject((FTickableGameObject *)&this->_padding_,NewObject);
  this->_padding_ = (longlong)&_vftable__for__UDS_ModelBase__;
  *(undefined8 *)&this->Delegate_TimerFinish = 0;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  *(undefined8 *)&(this->Delegate_TimerFinish).field_0x8 = 0;
  *(undefined4 *)&(this->Delegate_TimerFinish).field_0x10 = 0;
  FText::FText(&this->ProgressText);
  this->TimeFormat = None;
  this->bIsTickable = false;
  return this;
}

// ~UDS_M_CommonProgress @ 14b512b80

void __thiscall UDS_M_CommonProgress::~UDS_M_CommonProgress(UDS_M_CommonProgress *this)

{
  ITextData *pIVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UDS_ModelBase__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  pIVar1 = (this->ProgressText).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Delegate_TimerFinish);
  pvVar2 = *(void **)&(this->Delegate_TimerFinish).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Delegate_TimerFinish);
  FTickableGameObject::~FTickableGameObject((FTickableGameObject *)&this->_padding_);
  UDS_ModelBase::~UDS_ModelBase((UDS_ModelBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b5153c0

UClass * __cdecl UDS_M_CommonProgress::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_CommonProgress.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_CommonProgress",
               &Z_Registration_Info_UClass_UDS_M_CommonProgress.InnerSingleton,
               StaticRegisterNativesUDS_M_CommonProgress,0x200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_CommonProgress>,
               InternalVTableHelperCtorCaller<UDS_M_CommonProgress>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_CommonProgress.InnerSingleton;
}

// StaticRegisterNativesUDS_M_CommonProgress @ 14b516be0

void __cdecl UDS_M_CommonProgress::StaticRegisterNativesUDS_M_CommonProgress(void)

{
  return;
}

// GetProgressText @ 14bcf9c40

FText * __thiscall
UDS_M_CommonProgress::GetProgressText(UDS_M_CommonProgress *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (this->ProgressText).TextData.Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = (this->ProgressText).Flags;
  return __return_storage_ptr__;
}

// GetProgressValue @ 14bcf9d80

float __thiscall UDS_M_CommonProgress::GetProgressValue(UDS_M_CommonProgress *this)

{
  return this->ProgressValue;
}

// GetStatId @ 14bcfc900

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall UDS_M_CommonProgress::GetStatId(UDS_M_CommonProgress *this)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UDS_M_CommonProgress::GetStatId(void)const_::_2_::FStat_DS_M_CommonProgressTime>
  FVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_DS_M_CommonProgressTime ==
          (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UDS_M_CommonProgress::GetStatId(void)const_::_2_::FStat_DS_M_CommonProgressTime>
           )0x0) {
        pFVar1 = ::FName::FName(&local_res10,"DS_M_CommonProgressTime");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_DS_M_CommonProgressTime,*pFVar1,
                   L"DS_M_CommonProgressTime","STATGROUP_UMG_Viewmodel","STATCAT_Advanced",
                   L"DS_ViewModel",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar2 = StatPtr_DS_M_CommonProgressTime;
  if (StatPtr_DS_M_CommonProgressTime ==
      (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UDS_M_CommonProgress::GetStatId(void)const_::_2_::FStat_DS_M_CommonProgressTime>
       )0x0) {
    pFVar1 = ::FName::FName(&local_res10,"DS_M_CommonProgressTime");
    FVar2 = (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UDS_M_CommonProgress::GetStatId(void)const_::_2_::FStat_DS_M_CommonProgressTime>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_DS_M_CommonProgressTime,*pFVar1,
                         L"DS_M_CommonProgressTime","STATGROUP_UMG_Viewmodel","STATCAT_Advanced",
                         L"DS_ViewModel",true,true,ST_int64,true,false,MCR_Invalid);
  }
  in_RDX->Name = (TAtomic<FMinimalName>)FVar2;
  return (TStatId)in_RDX;
}

// Init @ 14bd00c10

void __thiscall UDS_M_CommonProgress::Init(UDS_M_CommonProgress *this,float param_1,FText *param_2)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res10 [8];
  
  this->ProgressValue = param_1;
  pIVar1 = (param_2->TextData).Reference;
  pIVar2 = (this->ProgressText).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->ProgressText).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->ProgressText).Flags = param_2->Flags;
  this->bIsTickable = false;
  *(undefined1 *)&this->_padding_ = 1;
  pIVar1 = (param_2->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return;
}

// Init @ 14bd00ca0

void __thiscall
UDS_M_CommonProgress::Init
          (UDS_M_CommonProgress *this,double param_1,double param_2,bool param_3,
          EDS_TimeExpression param_4)

{
  this->EndTime = param_2;
  this->StartTime = param_1;
  this->bIsRemainTime = param_3;
  this->TimeFormat = param_4;
  this->IntervalTime = param_2 - param_1;
  if (0.0 < param_2 - param_1) {
    this->bIsTickable = true;
    UpdateRemainTime(this,false);
    return;
  }
  this->bIsTickable = false;
  return;
}

// IsTickable @ 14bd06620

bool __thiscall UDS_M_CommonProgress::IsTickable(UDS_M_CommonProgress *this)

{
  return (bool)*(undefined1 *)((longlong)&this->_padding_ + 5);
}

// IsVisibleText @ 14bd06aa0

bool __thiscall UDS_M_CommonProgress::IsVisibleText(UDS_M_CommonProgress *this)

{
  bool bVar1;
  
  bVar1 = FText::IsEmpty(&this->ProgressText);
  return !bVar1;
}

// SetProgressByModel @ 14bd20860

void __thiscall
UDS_M_CommonProgress::SetProgressByModel(UDS_M_CommonProgress *this,float param_1,FText *param_2)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  code *pcVar3;
  FWeakObjectPtr local_res8;
  undefined1 local_res10 [8];
  undefined8 local_res18 [2];
  
  this->ProgressValue = param_1;
  pIVar1 = (param_2->TextData).Reference;
  pIVar2 = (this->ProgressText).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->ProgressText).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->ProgressText).Flags = param_2->Flags;
  *(undefined1 *)&this->_padding_ = 1;
  pcVar3 = *(code **)(this->_padding_ + 0x2e0);
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  (*pcVar3)(this,local_res8,0);
  pIVar1 = (param_2->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014bd208fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x10))();
    return;
  }
  return;
}

// SetProgressByView @ 14bd20910

void __thiscall
UDS_M_CommonProgress::SetProgressByView(UDS_M_CommonProgress *this,float param_1,FText *param_2)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FWeakObjectPtr local_res8;
  undefined1 local_res10 [8];
  undefined8 local_res18 [2];
  
  this->ProgressValue = param_1;
  pIVar1 = (param_2->TextData).Reference;
  pIVar2 = (this->ProgressText).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->ProgressText).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->ProgressText).Flags = param_2->Flags;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  UDS_ModelBase::UpdateModel
            ((UDS_ModelBase *)this,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)local_res8);
  pIVar1 = (param_2->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014bd2099d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x10))();
    return;
  }
  return;
}

// Tick @ 14bd233c0

void __thiscall UDS_M_CommonProgress::Tick(UDS_M_CommonProgress *this,float param_1)

{
  UpdateRemainTime((UDS_M_CommonProgress *)&this[-1]._padding_,true);
  return;
}

// UpdateRemainTime @ 14bd28a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_M_CommonProgress::UpdateRemainTime(UDS_M_CommonProgress *this,bool param_1)

{
  code *pcVar1;
  float fVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  FString *pFVar5;
  FText *pFVar6;
  longlong *plVar7;
  double dVar8;
  float fVar9;
  undefined1 auStack_108 [32];
  FString local_e8;
  FText local_d8;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_108;
  if (((0.0 < this->StartTime || this->StartTime == 0.0) && (0.0 < this->EndTime)) &&
     (0.0 < this->IntervalTime)) {
    dVar8 = UDS_TimeUtilManager::GetCurrentServerTime();
    fVar2 = __real_3f800000;
    dVar8 = this->EndTime - dVar8;
    if (dVar8 <= 0.0) {
      this->ProgressValue = 0.0;
      pUVar3 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar3,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar4 = Z_Construct_UClass_UDS_ModelEventCommonProgress_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_c8,pUVar4);
      local_c8._8_8_ = pUVar3;
      pUVar3 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
      if (local_c8._64_8_ != 0) {
        plVar7 = (longlong *)(local_c8 + 0x50);
        if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
          plVar7 = (longlong *)local_c8._104_8_;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.TextData.Reference = (ITextData *)pUVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_e8,(FObjectPtr)&local_d8);
      UDS_ModelBase::UpdateModel
                ((UDS_ModelBase *)this,
                 (TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)
                 local_e8.Data.AllocatorInstance.Data);
      this->bIsTickable = false;
    }
    else {
      fVar9 = (float)(dVar8 / this->IntervalTime);
      if (__real_3f800000 <= fVar9) {
        fVar9 = __real_3f800000;
      }
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      this->ProgressValue = fVar9;
    }
    fVar9 = this->ProgressValue;
    if (this->bIsRemainTime == false) {
      this->ProgressValue = fVar2 - fVar9;
    }
    if (this->TimeFormat != None) {
      pFVar5 = UDS_TimeUtilManager::ConvertStringFromSec
                         (&local_e8,(float)((double)fVar9 * this->IntervalTime),this->TimeFormat,
                          false);
      pFVar6 = FText::FromString(&local_d8,pFVar5);
      FText::operator=(&this->ProgressText,pFVar6);
      if ((UObject *)local_d8.TextData.Reference != (UObject *)0x0) {
        (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
      }
      if ((FWeakObjectPtr)local_e8.Data.AllocatorInstance.Data != (FWeakObjectPtr)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
    }
    *(undefined1 *)&this->_padding_ = 1;
    local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.TextData.Reference = (ITextData *)0x0;
    pcVar1 = *(code **)(this->_padding_ + 0x2e0);
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_e8,(FObjectPtr)&local_d8);
    (*pcVar1)(this,local_e8.Data.AllocatorInstance.Data,0);
    if ((param_1) && (dVar8 <= 0.0)) {
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
                (&this->Delegate_TimerFinish);
    }
  }
  return;
}

