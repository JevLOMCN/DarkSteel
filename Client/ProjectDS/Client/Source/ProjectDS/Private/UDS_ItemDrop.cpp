// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b4d2680

UClass * __cdecl UDS_ItemDrop::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ItemDrop.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ItemDrop",
               &Z_Registration_Info_UClass_UDS_ItemDrop.InnerSingleton,
               StaticRegisterNativesUDS_ItemDrop,0x48,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_ItemDrop>,InternalVTableHelperCtorCaller<UDS_ItemDrop>,
               local_res8,UDS_EventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ItemDrop.InnerSingleton;
}

// UDS_ItemDrop @ 14b4d3ee0

UDS_ItemDrop * __thiscall UDS_ItemDrop::UDS_ItemDrop(UDS_ItemDrop *this,FVTableHelper *param_1)

{
  UDS_EventBase::UDS_EventBase((UDS_EventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ItemDrop__6B_;
  *(undefined8 *)&(this->OnDropDataChanged).Delegate = 0;
  *(undefined8 *)&(this->OnDropDataChanged).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnDropDataChanged).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnDropDataChanged).Delegate.field_0x18 = 2;
  return this;
}

// UDS_ItemDrop @ 14b4d3f20

UDS_ItemDrop * __thiscall UDS_ItemDrop::UDS_ItemDrop(UDS_ItemDrop *this,FObjectInitializer *param_1)

{
  UDS_EventBase::UDS_EventBase((UDS_EventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ItemDrop__6B_;
  *(undefined8 *)&(this->OnDropDataChanged).Delegate = 0;
  *(undefined8 *)&(this->OnDropDataChanged).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnDropDataChanged).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnDropDataChanged).Delegate.field_0x18 = 2;
  return this;
}

// ~UDS_ItemDrop @ 14b4d49f0

void __thiscall UDS_ItemDrop::~UDS_ItemDrop(UDS_ItemDrop *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_ItemDrop__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnDropDataChanged).Delegate.field_0x8,
             *(int *)&(this->OnDropDataChanged).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnDropDataChanged).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDropDataChanged);
  UDS_EventBase::~UDS_EventBase((UDS_EventBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b4d5440

UClass * __cdecl UDS_ItemDrop::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ItemDrop.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ItemDrop",
               &Z_Registration_Info_UClass_UDS_ItemDrop.InnerSingleton,
               StaticRegisterNativesUDS_ItemDrop,0x48,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_ItemDrop>,InternalVTableHelperCtorCaller<UDS_ItemDrop>,
               local_res8,UDS_EventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ItemDrop.InnerSingleton;
}

// StaticRegisterNativesUDS_ItemDrop @ 14b4d55b0

void __cdecl UDS_ItemDrop::StaticRegisterNativesUDS_ItemDrop(void)

{
  return;
}

// GetEvent @ 14bf57310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_ItemDrop * __cdecl UDS_ItemDrop::GetEvent(void)

{
  UDS_EventManager *this;
  UDS_LogManager *pUVar1;
  UDS_ItemDrop *pUVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this = UDS_EventManager::GetInst();
  if (this != (UDS_EventManager *)0x0) {
    if ((char)this->_padding_ != '\x01') {
      pUVar2 = UDS_EventManager::GetEventInternal<UDS_ItemDrop>(this);
      return pUVar2;
    }
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_EventManager::GetEvent",0x1a,Yes);
      UDS_LogManager::PrintLog
                (pUVar1,1,Warning,local_138.Ptr,0x31,
                 L"Cannot access event during UDS_EventManager destruction.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return (UDS_ItemDrop *)0x0;
}

