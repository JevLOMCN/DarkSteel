// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b69fd80

UClass * __cdecl UDS_VM_MountDisplay::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_MountDisplay.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_MountDisplay",
               &Z_Registration_Info_UClass_UDS_VM_MountDisplay.InnerSingleton,
               StaticRegisterNativesUDS_VM_MountDisplay,0x198,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_MountDisplay>,
               InternalVTableHelperCtorCaller<UDS_VM_MountDisplay>,local_res8,
               UDS_VM_Common_Mount::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_MountDisplay.InnerSingleton;
}

// UDS_VM_MountDisplay @ 14b6a56b0

UDS_VM_MountDisplay * __thiscall
UDS_VM_MountDisplay::UDS_VM_MountDisplay(UDS_VM_MountDisplay *this,FVTableHelper *param_1)

{
  UDS_VM_Common_Mount::UDS_VM_Common_Mount((UDS_VM_Common_Mount *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_MountDisplay__6B_;
  return this;
}

// UDS_VM_MountDisplay @ 14b6a56f0

UDS_VM_MountDisplay * __thiscall
UDS_VM_MountDisplay::UDS_VM_MountDisplay(UDS_VM_MountDisplay *this,FObjectInitializer *param_1)

{
  UDS_VM_Common_Mount::UDS_VM_Common_Mount((UDS_VM_Common_Mount *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_MountDisplay__6B_;
  return this;
}

// ~UDS_VM_MountDisplay @ 14b6a7350

void __thiscall UDS_VM_MountDisplay::~UDS_VM_MountDisplay(UDS_VM_MountDisplay *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_MountDisplay__6B_;
  UDS_VM_Common_Mount::~UDS_VM_Common_Mount((UDS_VM_Common_Mount *)this);
  return;
}

// GetPrivateStaticClass @ 14b6aa340

UClass * __cdecl UDS_VM_MountDisplay::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_MountDisplay.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_MountDisplay",
               &Z_Registration_Info_UClass_UDS_VM_MountDisplay.InnerSingleton,
               StaticRegisterNativesUDS_VM_MountDisplay,0x198,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_MountDisplay>,
               InternalVTableHelperCtorCaller<UDS_VM_MountDisplay>,local_res8,
               UDS_VM_Common_Mount::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_MountDisplay.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_MountDisplay @ 14b6aad00

void __cdecl UDS_VM_MountDisplay::StaticRegisterNativesUDS_VM_MountDisplay(void)

{
  return;
}

// OnSetViewModel @ 14be3a5c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_MountDisplay::OnSetViewModel
          (UDS_VM_MountDisplay *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  FDS_MountBaseTableRow *pFVar5;
  undefined1 auStackY_2b8 [32];
  TSharedPtr<FDS_VMContext_MountDisplay,1> local_288;
  TSharedPtr<FDS_ViewModelContext,1> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_278.Object = param_1->Object;
  local_278.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_278.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_VMContext_MountDisplay>(&local_288,&local_278);
  if (local_288.Object == (FDS_VMContext_MountDisplay *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<187730997578563599>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_MountDisplay.cpp"
                       ,0xf,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_268._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_268,"UDS_VM_MountDisplay::OnSetViewModel",0x23,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_268.Ptr,0x10,L"context is nullptr.");
      if ((void *)local_268._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_268._padding_);
      }
    }
  }
  else {
    if ((local_288.Object)->MountBaseTableID == 0) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_VM_MountDisplay::OnSetViewModel",0x23,Yes);
        UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,0x16,L"MountBaseTableID is 0");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    pFVar5 = FDS_MountBaseTableRow::GetRef((longlong)(local_288.Object)->MountBaseTableID,true);
    UDS_VM_Common_Mount::SetMountIconID((UDS_VM_Common_Mount *)this,pFVar5->ID_Portrait);
    UDS_VM_Common_Mount::SetMountName((UDS_VM_Common_Mount *)this,(int)(pFVar5->ID_DefaultName).ID);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_288.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

