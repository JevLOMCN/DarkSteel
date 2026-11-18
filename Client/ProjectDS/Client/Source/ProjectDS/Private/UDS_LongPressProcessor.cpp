// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b4e4e70

UClass * __cdecl UDS_LongPressProcessor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_LongPressProcessor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LongPressProcessor",
               &Z_Registration_Info_UClass_UDS_LongPressProcessor.InnerSingleton,
               StaticRegisterNativesUDS_LongPressProcessor,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_LongPressProcessor>,
               InternalVTableHelperCtorCaller<UDS_LongPressProcessor>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_LongPressProcessor.InnerSingleton;
}

// UDS_LongPressProcessor @ 14b4e8720

UDS_LongPressProcessor * __thiscall
UDS_LongPressProcessor::UDS_LongPressProcessor(UDS_LongPressProcessor *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_LongPressProcessor__6B_;
  *(undefined8 *)&this->OnLongPressStartDelegate = 0;
  *(undefined8 *)&(this->OnLongPressStartDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnLongPressStartDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnLongPressEndDelegate = 0;
  *(undefined8 *)&(this->OnLongPressEndDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnLongPressEndDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnLongPressPressingDelegate = 0;
  *(undefined8 *)&(this->OnLongPressPressingDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnLongPressPressingDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnLongPressRatioDelegate = 0;
  *(undefined8 *)&(this->OnLongPressRatioDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnLongPressRatioDelegate).field_0x10 = 0;
  this->LongPressEventType = Once;
  (this->pressedTime).Ticks = 0;
  return this;
}

// UDS_LongPressProcessor @ 14b4e8790

UDS_LongPressProcessor * __thiscall
UDS_LongPressProcessor::UDS_LongPressProcessor
          (UDS_LongPressProcessor *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_LongPressProcessor__6B_;
  *(undefined8 *)&this->OnLongPressStartDelegate = 0;
  *(undefined8 *)&(this->OnLongPressStartDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnLongPressStartDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnLongPressEndDelegate = 0;
  *(undefined8 *)&(this->OnLongPressEndDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnLongPressEndDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnLongPressPressingDelegate = 0;
  *(undefined8 *)&(this->OnLongPressPressingDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnLongPressPressingDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnLongPressRatioDelegate = 0;
  *(undefined8 *)&(this->OnLongPressRatioDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnLongPressRatioDelegate).field_0x10 = 0;
  this->LongPressEventType = Once;
  (this->pressedTime).Ticks = 0;
  return this;
}

// ~UDS_LongPressProcessor @ 14b4e98c0

void __thiscall UDS_LongPressProcessor::~UDS_LongPressProcessor(UDS_LongPressProcessor *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_LongPressProcessor__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnLongPressRatioDelegate);
  pvVar1 = *(void **)&(this->OnLongPressRatioDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLongPressRatioDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnLongPressPressingDelegate);
  pvVar1 = *(void **)&(this->OnLongPressPressingDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLongPressPressingDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnLongPressEndDelegate);
  pvVar1 = *(void **)&(this->OnLongPressEndDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLongPressEndDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnLongPressStartDelegate);
  pvVar1 = *(void **)&(this->OnLongPressStartDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLongPressStartDelegate);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b4eb3a0

UClass * __cdecl UDS_LongPressProcessor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_LongPressProcessor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LongPressProcessor",
               &Z_Registration_Info_UClass_UDS_LongPressProcessor.InnerSingleton,
               StaticRegisterNativesUDS_LongPressProcessor,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_LongPressProcessor>,
               InternalVTableHelperCtorCaller<UDS_LongPressProcessor>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_LongPressProcessor.InnerSingleton;
}

// StaticRegisterNativesUDS_LongPressProcessor @ 14b4ec120

void __cdecl UDS_LongPressProcessor::StaticRegisterNativesUDS_LongPressProcessor(void)

{
  return;
}

// CheckLongPress @ 14c06e6b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_LongPressProcessor::CheckLongPress(UDS_LongPressProcessor *this)

{
  double dVar1;
  UDS_LogManager *pUVar2;
  FDateTime FVar3;
  longlong lVar4;
  float fVar5;
  undefined1 auStackY_198 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (((this->bUsableLongPress != false) && (this->bIsPress != false)) &&
     ((this->LongPressEventType != Once || (this->bIsOnceNotify != true)))) {
    if (0.0 < this->LongPressTime) {
      FVar3 = FDateTime::Now();
      dVar1 = (double)(*(longlong *)FVar3.Ticks - (this->pressedTime).Ticks) *
              __real_3e7ad7f29abcaf48;
      if ((double)this->LongPressDelay <= dVar1) {
        if (dVar1 < (double)(this->LongPressDelay + this->LongPressTime)) {
          lVar4 = 0x58;
          if (this->LongPressRatio == 0.0) {
            lVar4 = 0x28;
          }
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
                    ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                     ((longlong)&this->_padding_ + lVar4));
          fVar5 = (float)((dVar1 - (double)this->LongPressDelay) / (double)this->LongPressTime);
          if (__real_3f800000 <= fVar5) {
            fVar5 = __real_3f800000;
          }
          this->LongPressRatio = fVar5;
        }
        else {
          if (this->LongPressEventType == Once) {
            this->bIsOnceNotify = true;
          }
          this->LongPressRatio = 1.0;
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
                    (&this->OnLongPressEndDelegate);
        }
        TDelegate<void___cdecl(float_const_&),FDefaultDelegateUserPolicy>::ExecuteIfBound
                  (&this->OnLongPressRatioDelegate,&this->LongPressRatio);
      }
      else {
        this->LongPressRatio = 0.0;
        TDelegate<void___cdecl(float_const_&),FDefaultDelegateUserPolicy>::ExecuteIfBound
                  (&this->OnLongPressRatioDelegate,&this->LongPressRatio);
      }
    }
    else {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_LongPressProcessor::CheckLongPress",0x26,Yes);
        UDS_LogManager::PrintLog
                  (pUVar2,1,Warning,local_158.Ptr,0x14,L"LongPressTime must not be \'0\' or less.");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
    }
  }
  return;
}

// IsClickable @ 14c08e500

bool __thiscall UDS_LongPressProcessor::IsClickable(UDS_LongPressProcessor *this)

{
  FDateTime FVar1;
  
  FVar1 = FDateTime::Now();
  return (double)(*(longlong *)FVar1.Ticks - (this->pressedTime).Ticks) * __real_3e7ad7f29abcaf48 <
         (double)this->LongPressDelay;
}

// OnPress @ 14c098830

void __thiscall UDS_LongPressProcessor::OnPress(UDS_LongPressProcessor *this)

{
  EDS_LongPressEventType EVar1;
  FDateTime FVar2;
  
  if (this->bUsableLongPress != false) {
    this->bIsPress = true;
    FVar2 = FDateTime::Now();
    EVar1 = this->LongPressEventType;
                    /* WARNING: Load size is inaccurate */
    (this->pressedTime).Ticks = *FVar2.Ticks;
    if (EVar1 == Once) {
      this->bIsOnceNotify = false;
    }
  }
  return;
}

// OnRelease @ 14c0992c0

void __thiscall UDS_LongPressProcessor::OnRelease(UDS_LongPressProcessor *this)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  if (this->bUsableLongPress != false) {
    this->bIsPress = false;
    this->LongPressRatio = 0.0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnLongPressRatioDelegate,&local_28);
    if ((*(int *)&(this->OnLongPressRatioDelegate).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(this->OnLongPressRatioDelegate).field_0x8,
       plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x68))(plVar1,&this->LongPressRatio);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  return;
}

// OutofButtonRange @ 14c09e680

void __thiscall UDS_LongPressProcessor::OutofButtonRange(UDS_LongPressProcessor *this)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  if ((this->bUsableLongPress != false) && (this->bIsOutofRangeStop != false)) {
    this->bIsPress = false;
    this->LongPressRatio = 0.0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnLongPressRatioDelegate,&local_28);
    if ((*(int *)&(this->OnLongPressRatioDelegate).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(this->OnLongPressRatioDelegate).field_0x8,
       plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x68))(plVar1,&this->LongPressRatio);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  return;
}

