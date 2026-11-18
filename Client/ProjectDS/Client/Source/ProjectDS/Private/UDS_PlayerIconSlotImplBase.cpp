// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// StaticClass @ 14b5614a0

UClass * __cdecl UDS_PlayerIconSlotImplBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PlayerIconSlotImplBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PlayerIconSlotImplBase",
               &Z_Registration_Info_UClass_UDS_PlayerIconSlotImplBase.InnerSingleton,
               StaticRegisterNativesUDS_PlayerIconSlotImplBase,0x30,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_PlayerIconSlotImplBase>,
               InternalVTableHelperCtorCaller<UDS_PlayerIconSlotImplBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PlayerIconSlotImplBase.InnerSingleton;
}

// UDS_PlayerIconSlotImplBase @ 14b564200

UDS_PlayerIconSlotImplBase * __thiscall
UDS_PlayerIconSlotImplBase::UDS_PlayerIconSlotImplBase
          (UDS_PlayerIconSlotImplBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_PlayerIconSlotImplBase__6B_;
  return this;
}

// UDS_PlayerIconSlotImplBase @ 14b564230

UDS_PlayerIconSlotImplBase * __thiscall
UDS_PlayerIconSlotImplBase::UDS_PlayerIconSlotImplBase
          (UDS_PlayerIconSlotImplBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_PlayerIconSlotImplBase__6B_;
  return this;
}

// ~UDS_PlayerIconSlotImplBase @ 14b565120

void __thiscall
UDS_PlayerIconSlotImplBase::~UDS_PlayerIconSlotImplBase(UDS_PlayerIconSlotImplBase *this)

{
  this->_padding_ = (longlong)&___7UDS_PlayerIconSlotImplBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BindModel @ 14b566090

void __thiscall UDS_PlayerIconSlotImplBase::BindModel(UDS_PlayerIconSlotImplBase *this)

{
  return;
}

// GetPrivateStaticClass @ 14b567330

UClass * __cdecl UDS_PlayerIconSlotImplBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PlayerIconSlotImplBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PlayerIconSlotImplBase",
               &Z_Registration_Info_UClass_UDS_PlayerIconSlotImplBase.InnerSingleton,
               StaticRegisterNativesUDS_PlayerIconSlotImplBase,0x30,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_PlayerIconSlotImplBase>,
               InternalVTableHelperCtorCaller<UDS_PlayerIconSlotImplBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PlayerIconSlotImplBase.InnerSingleton;
}

// IsHave @ 14b567f30

bool __thiscall UDS_PlayerIconSlotImplBase::IsHave(UDS_PlayerIconSlotImplBase *this)

{
  return true;
}

// IsSelected @ 14b567f80

bool __thiscall UDS_PlayerIconSlotImplBase::IsSelected(UDS_PlayerIconSlotImplBase *this)

{
  return false;
}

// IsShowChangePanel @ 14b567f90

bool __thiscall UDS_PlayerIconSlotImplBase::IsShowChangePanel(UDS_PlayerIconSlotImplBase *this)

{
  return false;
}

// IsUnLockable @ 14b567fa0

bool __thiscall UDS_PlayerIconSlotImplBase::IsUnLockable(UDS_PlayerIconSlotImplBase *this)

{
  return false;
}

// IsUsing @ 14b567fb0

bool __thiscall UDS_PlayerIconSlotImplBase::IsUsing(UDS_PlayerIconSlotImplBase *this)

{
  return false;
}

// OnEventMouseButtonUp @ 14b567fc0

void __thiscall UDS_PlayerIconSlotImplBase::OnEventMouseButtonUp(UDS_PlayerIconSlotImplBase *this)

{
  return;
}

// OnEventMouseEnter @ 14b567fd0

void __thiscall UDS_PlayerIconSlotImplBase::OnEventMouseEnter(UDS_PlayerIconSlotImplBase *this)

{
  return;
}

// OnEventMouseLeave @ 14b567fe0

void __thiscall UDS_PlayerIconSlotImplBase::OnEventMouseLeave(UDS_PlayerIconSlotImplBase *this)

{
  return;
}

// StaticRegisterNativesUDS_PlayerIconSlotImplBase @ 14b568070

void __cdecl UDS_PlayerIconSlotImplBase::StaticRegisterNativesUDS_PlayerIconSlotImplBase(void)

{
  return;
}

// UnBindModel @ 14b568290

void __thiscall UDS_PlayerIconSlotImplBase::UnBindModel(UDS_PlayerIconSlotImplBase *this)

{
  return;
}

// SetContext @ 14bd87ce0

void __thiscall
UDS_PlayerIconSlotImplBase::SetContext
          (UDS_PlayerIconSlotImplBase *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FDS_PlayerIconTableRow *pFVar4;
  TSharedPtr<FDS_ViewModelContext_PlayerIconSlot,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
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
  SafeCast<FDS_ViewModelContext_PlayerIconSlot>(&local_28,&local_18);
  if (local_28.Object != (FDS_ViewModelContext_PlayerIconSlot *)0x0) {
    if (local_28.Object == (FDS_ViewModelContext_PlayerIconSlot *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar1 = (local_28.Object)->PlayerIconID;
    this->PlayerIconID = iVar1;
    pFVar4 = FDS_PlayerIconTableRow::GetRef((longlong)iVar1,true);
    this->IconID = pFVar4->ID_PlayerIcon;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

