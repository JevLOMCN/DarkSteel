// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b57a060

UClass * __cdecl UDS_QuickSlotDeckDataSet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_QuickSlotDeckDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_QuickSlotDeckDataSet",
               &Z_Registration_Info_UClass_UDS_QuickSlotDeckDataSet.InnerSingleton,
               StaticRegisterNativesUDS_QuickSlotDeckDataSet,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_QuickSlotDeckDataSet>,
               InternalVTableHelperCtorCaller<UDS_QuickSlotDeckDataSet>,local_res8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_QuickSlotDeckDataSet.InnerSingleton;
}

// UDS_QuickSlotDeckDataSet @ 14b57daa0

UDS_QuickSlotDeckDataSet * __thiscall
UDS_QuickSlotDeckDataSet::UDS_QuickSlotDeckDataSet
          (UDS_QuickSlotDeckDataSet *this,FVTableHelper *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  this->CurrentDeckNumber = 1;
  this->_padding_ = (longlong)&___7UDS_QuickSlotDeckDataSet__6B_;
  return this;
}

// ~UDS_QuickSlotDeckDataSet @ 14b57e270

void __thiscall UDS_QuickSlotDeckDataSet::~UDS_QuickSlotDeckDataSet(UDS_QuickSlotDeckDataSet *this)

{
  this->_padding_ = (longlong)&___7UDS_QuickSlotDeckDataSet__6B_;
  UDS_DataSetBase::~UDS_DataSetBase((UDS_DataSetBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b57fa50

UClass * __cdecl UDS_QuickSlotDeckDataSet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_QuickSlotDeckDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_QuickSlotDeckDataSet",
               &Z_Registration_Info_UClass_UDS_QuickSlotDeckDataSet.InnerSingleton,
               StaticRegisterNativesUDS_QuickSlotDeckDataSet,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_QuickSlotDeckDataSet>,
               InternalVTableHelperCtorCaller<UDS_QuickSlotDeckDataSet>,local_res8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_QuickSlotDeckDataSet.InnerSingleton;
}

// StaticRegisterNativesUDS_QuickSlotDeckDataSet @ 14b5808e0

void __cdecl UDS_QuickSlotDeckDataSet::StaticRegisterNativesUDS_QuickSlotDeckDataSet(void)

{
  return;
}

// UDS_QuickSlotDeckDataSet @ 14ba33090

UDS_QuickSlotDeckDataSet * __thiscall
UDS_QuickSlotDeckDataSet::UDS_QuickSlotDeckDataSet
          (UDS_QuickSlotDeckDataSet *this,FObjectInitializer *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  this->CurrentDeckNumber = 1;
  this->_padding_ = (longlong)&___7UDS_QuickSlotDeckDataSet__6B_;
  return this;
}

// GetCurrentQuickSlotDeckData @ 14ba46f70

TWeakObjectPtr<UDS_QuickSlotDeckData,FWeakObjectPtr> __thiscall
UDS_QuickSlotDeckDataSet::GetCurrentQuickSlotDeckData(UDS_QuickSlotDeckDataSet *this)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  FWeakObjectPtr in_RDX;
  ulong64 uVar4;
  
  iVar1 = this->CurrentDeckNumber;
  bVar2 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  if (bVar2) {
    uVar4 = 0;
  }
  else {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    uVar4 = *(ulong64 *)(pUVar3 + 1);
  }
  UDS_QuickSlotDeckData::GetData((ulong64)in_RDX,uVar4,SUB41(iVar1,0));
  return (TWeakObjectPtr<UDS_QuickSlotDeckData,FWeakObjectPtr>)in_RDX;
}

// OnAdded @ 14ba5f020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_QuickSlotDeckDataSet::OnAdded(UDS_QuickSlotDeckDataSet *this)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_QuickSlotDeckData *this_00;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_178 [32];
  UDS_QuickSlotDeckData *local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_148[0] = (UDS_QuickSlotDeckData *)0x1;
  pUVar2 = GetTransientPackageAsObject();
  this_00 = NewObject<UDS_QuickSlotDeckData>(pUVar2);
  if (this_00 == (UDS_QuickSlotDeckData *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    this_00 = (UDS_QuickSlotDeckData *)0x0;
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_QuickSlotDeckData::Create",0x1d,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Error,local_138.Ptr,0x89,L"DataSetContainer Create Fail.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    bVar1 = UDS_QuickSlotDeckData::Init(this_00,(ulong64 *)local_148);
    if (!bVar1) {
      this_00 = (UDS_QuickSlotDeckData *)0x0;
    }
  }
  local_148[0] = this_00;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_00 != (UDS_QuickSlotDeckData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  UDS_DataSetBase::AddData((UDS_DataSetBase *)this,1,(TObjectPtr<UDS_DataBase>)local_148);
  return;
}

// UpdateQuickSlotData @ 14ba80a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_QuickSlotDeckDataSet::UpdateQuickSlotData
          (UDS_QuickSlotDeckDataSet *this,SqlQuickSlotTable *param_1)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  UDS_LogManager *pUVar4;
  UDS_QuickSlotDeckData *this_00;
  ulong64 uVar5;
  undefined1 auStackY_198 [32];
  FWeakObjectPtr local_158 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  iVar1 = (param_1->_impl_).deck_index_;
  bVar2 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  if (bVar2) {
    uVar5 = 0;
  }
  else {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    uVar5 = *(ulong64 *)(pUVar3 + 1);
  }
  UDS_QuickSlotDeckData::GetData((ulong64)local_158,uVar5,SUB41(iVar1,0));
  bVar2 = FWeakObjectPtr::IsValid(local_158);
  if (bVar2) {
    this_00 = (UDS_QuickSlotDeckData *)FWeakObjectPtr::Get(local_158);
    UDS_QuickSlotDeckData::UpdateQuickSlotData(this_00,param_1);
    *(undefined1 *)&this->_padding_ = 1;
    bVar2 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)&this->_padding_,
                       (void *)0x0);
    if (!bVar2) {
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      pUVar3[3].field_0x20 = 1;
    }
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_QuickSlotDeckDataSet::UpdateQuickSlotData",0x2d,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_148.Ptr,0x111,L"quickSlotDeckData is nullptr, deckNum : %d")
      ;
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  return;
}

// UseQuickSlot @ 14ba82f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_QuickSlotDeckDataSet::UseQuickSlot(UDS_QuickSlotDeckDataSet *this,int *param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  UDS_LogManager *pUVar5;
  UDS_QuickSlotDeckData *this_00;
  ulong64 uVar6;
  undefined1 auStackY_408 [32];
  FWeakObjectPtr local_3c8;
  FWeakObjectPtr local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  TSharedPtr<FDS_QuickSlotData,1> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_408;
  iVar1 = *param_1;
  bVar3 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  uVar6 = 0;
  if (!bVar3) {
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    uVar6 = *(ulong64 *)(pUVar4 + 1);
  }
  UDS_QuickSlotDeckData::GetData((ulong64)&local_3c0,uVar6,SUB41(iVar1,0));
  bVar3 = FWeakObjectPtr::IsValid(&local_3c0);
  if (bVar3) {
    this_00 = (UDS_QuickSlotDeckData *)FWeakObjectPtr::Get(&local_3c0);
    UDS_QuickSlotDeckData::GetQuickSlotData(this_00,&local_3a8,param_2);
    if (local_3a8.Object == (FDS_QuickSlotData *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_278._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_278,"UDS_QuickSlotDeckDataSet::UseQuickSlot",0x26,Yes);
        UDS_LogManager::PrintLog
                  (pUVar5,1,Warning,local_278.Ptr,0x125,L"quickSlotData is nullptr, slotNumber : %d"
                  );
        if ((void *)local_278._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_278._padding_);
        }
      }
    }
    else {
      if ((local_3a8.Object == (FDS_QuickSlotData *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((local_3a8.Object)->TargetUID == 0) {
        local_3c8.ObjectIndex = 0;
        local_3c8.ObjectSerialNumber = 0;
        local_3b8 = 0;
        FWeakObjectPtr::operator=(&local_3c8,(FObjectPtr)&local_3b8);
      }
      else if ((local_3a8.Object)->TemplateType == ItemBase) {
        DS_ItemDataUtil::GetItemDataByUID((long64)&local_3c8);
      }
      else {
        local_3c8.ObjectIndex = 0;
        local_3c8.ObjectSerialNumber = 0;
        local_3b0 = 0;
        FWeakObjectPtr::operator=(&local_3c8,(FObjectPtr)&local_3b0);
      }
      bVar3 = FWeakObjectPtr::IsValid(&local_3c8);
      if (bVar3) {
        DS_ItemDataUtil::Use((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_3c8,0,0,0);
      }
      else {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 != (UDS_LogManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"UDS_QuickSlotDeckDataSet::UseQuickSlot",0x26,Yes);
          UDS_LogManager::PrintLog
                    (pUVar5,1,Warning,local_158.Ptr,300,L"itemData is nullptr, UID : %d");
          if ((void *)local_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_158._padding_);
          }
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3a8.SharedReferenceCount.ReferenceController);
  }
  else {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_398._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_398,"UDS_QuickSlotDeckDataSet::UseQuickSlot",0x26,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_398.Ptr,0x11e,L"quickSlotDeckData is nullptr, deckNum : %d")
      ;
      if ((void *)local_398._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_398._padding_);
      }
    }
  }
  return;
}

// UseQuickSlot @ 14ba83250

void __thiscall UDS_QuickSlotDeckDataSet::UseQuickSlot(UDS_QuickSlotDeckDataSet *this,int *param_1)

{
  UseQuickSlot(this,&this->CurrentDeckNumber,param_1);
  return;
}

