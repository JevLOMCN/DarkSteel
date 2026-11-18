// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// StaticClass @ 14b448790

UClass * __cdecl UDS_CharSlotImplByCharInfoData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CharSlotImplByCharInfoData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CharSlotImplByCharInfoData",
               &Z_Registration_Info_UClass_UDS_CharSlotImplByCharInfoData.InnerSingleton,
               StaticRegisterNativesUDS_CharSlotImplByCharInfoData,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_CharSlotImplByCharInfoData>,
               InternalVTableHelperCtorCaller<UDS_CharSlotImplByCharInfoData>,local_res8,
               UDS_CharSlotImplBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CharSlotImplByCharInfoData.InnerSingleton;
}

// UDS_CharSlotImplByCharInfoData @ 14b44d180

UDS_CharSlotImplByCharInfoData * __thiscall
UDS_CharSlotImplByCharInfoData::UDS_CharSlotImplByCharInfoData
          (UDS_CharSlotImplByCharInfoData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_CharSlotImplByCharInfoData__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  (this->PlayerData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharInfoData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UDS_CharSlotImplByCharInfoData @ 14b44d1d0

UDS_CharSlotImplByCharInfoData * __thiscall
UDS_CharSlotImplByCharInfoData::UDS_CharSlotImplByCharInfoData
          (UDS_CharSlotImplByCharInfoData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_CharSlotImplByCharInfoData__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  (this->PlayerData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharInfoData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_CharSlotImplByCharInfoData @ 14b44ff10

void __thiscall
UDS_CharSlotImplByCharInfoData::~UDS_CharSlotImplByCharInfoData
          (UDS_CharSlotImplByCharInfoData *this)

{
  this->_padding_ = (longlong)&___7UDS_CharSlotImplBase__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b453f30

UClass * __cdecl UDS_CharSlotImplByCharInfoData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CharSlotImplByCharInfoData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CharSlotImplByCharInfoData",
               &Z_Registration_Info_UClass_UDS_CharSlotImplByCharInfoData.InnerSingleton,
               StaticRegisterNativesUDS_CharSlotImplByCharInfoData,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_CharSlotImplByCharInfoData>,
               InternalVTableHelperCtorCaller<UDS_CharSlotImplByCharInfoData>,local_res8,
               UDS_CharSlotImplBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CharSlotImplByCharInfoData.InnerSingleton;
}

// StaticRegisterNativesUDS_CharSlotImplByCharInfoData @ 14b455110

void __cdecl
UDS_CharSlotImplByCharInfoData::StaticRegisterNativesUDS_CharSlotImplByCharInfoData(void)

{
  return;
}

// BindData @ 14bce8ff0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_CharSlotImplByCharInfoData::BindData
          (UDS_CharSlotImplByCharInfoData *this,
          TWeakObjectPtr<UDS_VM_W_CharacterSlot,FWeakObjectPtr> param_1)

{
  TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *this_00;
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  char *pcVar4;
  UDS_VM_W_CharacterSlot *pUVar5;
  char *pcVar6;
  char *pcVar7;
  FName local_res8;
  FWeakObjectPtr local_res10;
  FName local_res18 [2];
  code *local_58;
  undefined8 uStack_50;
  code *local_48;
  ulonglong uStack_40;
  
  this_00 = &this->CharInfoData;
  local_res10 = param_1.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (!bVar2) {
    return;
  }
  pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  pcVar4 = strstr("&UDS_VM_W_CharacterSlot::OnChangedCharLevel","::");
  pcVar7 = &DAT_00000002;
  if (pcVar4 == (char *)0x0) {
LAB_14bce908a:
    pcVar6 = &DAT_00000002;
LAB_14bce908d:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      pcVar6 = pcVar4;
      pcVar4 = strstr(pcVar6 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if (pcVar6 == (char *)0x0) goto LAB_14bce908a;
    pcVar6 = pcVar6 + 2;
    if (*pcVar6 == '0') goto LAB_14bce908d;
  }
  ::FName::FName(&local_res8,pcVar6);
  local_58 = UDS_VM_W_CharacterSlot::OnChangedCharLevel;
  uStack_50 = (ulonglong)uStack_50._4_4_ << 0x20;
  pUVar5 = (UDS_VM_W_CharacterSlot *)FWeakObjectPtr::Get(&local_res10);
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,int_const_&>::
  __Internal_AddDynamic<UDS_VM_W_CharacterSlot>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,int_const_&> *)
             &pUVar3[2].field_0x8,pUVar5,(pmf_243ff8ac *)&local_58,local_res8);
  pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  pcVar4 = strstr("&UDS_VM_W_CharacterSlot::OnChangedCharLevel","::");
  if (pcVar4 != (char *)0x0) {
    do {
      pcVar6 = pcVar4;
      pcVar4 = strstr(pcVar6 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if ((pcVar6 != (char *)0x0) && (pcVar7 = pcVar6 + 2, pcVar6[2] != '0')) goto LAB_14bce9198;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result && Result[2] != \'0\'",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                     ,0x1da,L"\'%hs\' does not look like a member function");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14bce9198:
  ::FName::FName(local_res18,pcVar7);
  local_58 = UDS_VM_W_CharacterSlot::OnChangedCharLevel;
  uStack_50 = uStack_50 & 0xffffffff00000000;
  pUVar5 = (UDS_VM_W_CharacterSlot *)FWeakObjectPtr::Get(&local_res10);
  local_48 = local_58;
  uStack_40 = uStack_50;
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,int_const_&>::
  __Internal_AddDynamic<UDS_VM_W_CharacterSlot>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,int_const_&> *)
             &pUVar3[4].field_0x18,pUVar5,(pmf_243ff8ac *)&local_48,local_res18[0]);
  return;
}

// GetCharEvolution @ 14bcf5bd0

int __thiscall
UDS_CharSlotImplByCharInfoData::GetCharEvolution(UDS_CharSlotImplByCharInfoData *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->CharInfoData).WeakPtr);
  if (!bVar1) {
    return 0;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->CharInfoData).WeakPtr);
  return *(int *)&pUVar2[0xd].field_0x14;
}

// GetCharLevel @ 14bcf5c70

int __thiscall UDS_CharSlotImplByCharInfoData::GetCharLevel(UDS_CharSlotImplByCharInfoData *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->CharInfoData).WeakPtr);
  if (!bVar1) {
    return 0;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->CharInfoData).WeakPtr);
  return *(int *)&pUVar2[8].field_0xc;
}

// GetEquipIconID @ 14bcf7790

int __thiscall UDS_CharSlotImplByCharInfoData::GetEquipIconID(UDS_CharSlotImplByCharInfoData *this)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->CharInfoData).WeakPtr);
  if (bVar1) {
    cVar2 = (**(code **)(this->_padding_ + 0x2f8))(this);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(this->_padding_ + 0x300))(this);
      return 0x3ea - (uint)(cVar2 != '\0');
    }
  }
  return 0;
}

// IsCurrentChar @ 14bd05660

bool __thiscall UDS_CharSlotImplByCharInfoData::IsCurrentChar(UDS_CharSlotImplByCharInfoData *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->PlayerData).WeakPtr);
  if (!bVar1) {
    return false;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->PlayerData).WeakPtr);
  return (int)this->_padding_ == *(int *)&pUVar2[8].field_0x18;
}

// IsEquipChar @ 14bd05c30

bool __thiscall UDS_CharSlotImplByCharInfoData::IsEquipChar(UDS_CharSlotImplByCharInfoData *this)

{
  return false;
}

// IsHaveChar @ 14bd05c40

bool __thiscall UDS_CharSlotImplByCharInfoData::IsHaveChar(UDS_CharSlotImplByCharInfoData *this)

{
  bool bVar1;
  UDS_PlayerData *this_00;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->PlayerData).WeakPtr);
  if (!bVar1) {
    return false;
  }
  this_00 = (UDS_PlayerData *)FWeakObjectPtr::Get(&(this->PlayerData).WeakPtr);
  bVar1 = UDS_PlayerData::IsHaveChar(this_00,(int)this->_padding_);
  return bVar1;
}

// IsShowQuickChangeNum @ 14bd06350

bool __thiscall
UDS_CharSlotImplByCharInfoData::IsShowQuickChangeNum(UDS_CharSlotImplByCharInfoData *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014bd06353. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x2f8))();
  return (bool)uVar1;
}

// SetContext @ 14bd1e7e0

void __thiscall
UDS_CharSlotImplByCharInfoData::SetContext
          (UDS_CharSlotImplByCharInfoData *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> TVar3;
  atomic<unsigned_char> *paVar4;
  int iVar5;
  undefined1 local_res10 [8];
  TSharedPtr<FDS_ViewModelContext_CharSlotByCharInfoData,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  local_28.Object = param_1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_CharSlotImplBase::SetContext((UDS_CharSlotImplBase *)this,&local_28);
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_CharSlotByCharInfoData>(&local_38,&local_18);
  if (local_38.Object == (FDS_ViewModelContext_CharSlotByCharInfoData *)0x0) {
    iVar5 = 0x17;
    paVar4 = &bGEnsureHasExecuted<7137215024283516951>;
  }
  else {
    if (local_38.Object == (FDS_ViewModelContext_CharSlotByCharInfoData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    TVar3 = UDS_CharInfoData::GetData((ulong64)local_res10);
                    /* WARNING: Load size is inaccurate */
    (this->CharInfoData).WeakPtr = *TVar3.WeakPtr;
    bVar2 = FWeakObjectPtr::IsValid(&(this->CharInfoData).WeakPtr);
    if (bVar2) goto LAB_14bd1e8df;
    iVar5 = 0x1a;
    paVar4 = &bGEnsureHasExecuted<7137215024283516954>;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar4,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\CharSlot\\DS_CharSlotImplByCharInfoData.cpp"
                     ,iVar5,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14bd1e8df:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UnBindData @ 14bd249a0

void __thiscall
UDS_CharSlotImplByCharInfoData::UnBindData
          (UDS_CharSlotImplByCharInfoData *this,
          TWeakObjectPtr<UDS_VM_W_CharacterSlot,FWeakObjectPtr> param_1)

{
  TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *this_00;
  bool bVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res10 [3];
  
  this_00 = &this->CharInfoData;
  local_res10[0] = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    pUVar3 = FWeakObjectPtr::Get(local_res10);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar2[2].field_0x8,pUVar3);
    pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    pUVar3 = FWeakObjectPtr::Get(local_res10);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar2[4].field_0x18,pUVar3)
    ;
  }
  return;
}

