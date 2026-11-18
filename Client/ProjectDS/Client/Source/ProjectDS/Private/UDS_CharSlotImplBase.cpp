// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 36

// StaticClass @ 14b4484b0

UClass * __cdecl UDS_CharSlotImplBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CharSlotImplBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CharSlotImplBase",
               &Z_Registration_Info_UClass_UDS_CharSlotImplBase.InnerSingleton,
               StaticRegisterNativesUDS_CharSlotImplBase,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CharSlotImplBase>,
               InternalVTableHelperCtorCaller<UDS_CharSlotImplBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CharSlotImplBase.InnerSingleton;
}

// UDS_CharSlotImplBase @ 14b44d100

UDS_CharSlotImplBase * __thiscall
UDS_CharSlotImplBase::UDS_CharSlotImplBase(UDS_CharSlotImplBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_CharSlotImplBase__6B_;
  this->CharID = 0;
  (this->SlotInfo).SlotInfo.Object = (FDS_SlotInfoBase *)0x0;
  (this->SlotInfo).SlotInfo.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->Selected = false;
  this->Hovered = false;
  this->Dragging = false;
  return this;
}

// UDS_CharSlotImplBase @ 14b44d140

UDS_CharSlotImplBase * __thiscall
UDS_CharSlotImplBase::UDS_CharSlotImplBase(UDS_CharSlotImplBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_CharSlotImplBase__6B_;
  this->CharID = 0;
  (this->SlotInfo).SlotInfo.Object = (FDS_SlotInfoBase *)0x0;
  (this->SlotInfo).SlotInfo.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->Selected = false;
  this->Hovered = false;
  this->Dragging = false;
  return this;
}

// ~UDS_CharSlotImplBase @ 14b44fee0

void __thiscall UDS_CharSlotImplBase::~UDS_CharSlotImplBase(UDS_CharSlotImplBase *this)

{
  this->_padding_ = (longlong)&___7UDS_CharSlotImplBase__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SlotInfo).SlotInfo.SharedReferenceCount.ReferenceController);
  UObject::~UObject((UObject *)this);
  return;
}

// BindData @ 14b451e60

void __thiscall
UDS_CharSlotImplBase::BindData
          (UDS_CharSlotImplBase *this,TWeakObjectPtr<UDS_VM_W_CharacterSlot,FWeakObjectPtr> param_1)

{
  return;
}

// GetAddShiftSwitcherIndex @ 14b4538e0

int __thiscall UDS_CharSlotImplBase::GetAddShiftSwitcherIndex(UDS_CharSlotImplBase *this)

{
  return 0;
}

// GetCharEvolution @ 14b4538f0

int __thiscall UDS_CharSlotImplBase::GetCharEvolution(UDS_CharSlotImplBase *this)

{
  return 0;
}

// GetCharLevel @ 14b453900

int __thiscall UDS_CharSlotImplBase::GetCharLevel(UDS_CharSlotImplBase *this)

{
  return 0;
}

// GetEquipIconID @ 14b453980

int __thiscall UDS_CharSlotImplBase::GetEquipIconID(UDS_CharSlotImplBase *this)

{
  return 0;
}

// GetPrivateStaticClass @ 14b453e80

UClass * __cdecl UDS_CharSlotImplBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CharSlotImplBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CharSlotImplBase",
               &Z_Registration_Info_UClass_UDS_CharSlotImplBase.InnerSingleton,
               StaticRegisterNativesUDS_CharSlotImplBase,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CharSlotImplBase>,
               InternalVTableHelperCtorCaller<UDS_CharSlotImplBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CharSlotImplBase.InnerSingleton;
}

// IsAddShiftVisible @ 14b4548e0

bool __thiscall UDS_CharSlotImplBase::IsAddShiftVisible(UDS_CharSlotImplBase *this)

{
  return false;
}

// IsButtonVisible @ 14b4548f0

bool __thiscall UDS_CharSlotImplBase::IsButtonVisible(UDS_CharSlotImplBase *this)

{
  return true;
}

// IsClickable @ 14b454910

bool __thiscall UDS_CharSlotImplBase::IsClickable(UDS_CharSlotImplBase *this)

{
  return true;
}

// IsCurrentChar @ 14b454920

bool __thiscall UDS_CharSlotImplBase::IsCurrentChar(UDS_CharSlotImplBase *this)

{
  return false;
}

// IsDimmed @ 14b454930

bool __thiscall UDS_CharSlotImplBase::IsDimmed(UDS_CharSlotImplBase *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x2f0))();
  return cVar1 == '\0';
}

// IsDragging @ 14b454950

bool __thiscall UDS_CharSlotImplBase::IsDragging(UDS_CharSlotImplBase *this)

{
  return this->Dragging;
}

// IsEquipChar @ 14b454960

bool __thiscall UDS_CharSlotImplBase::IsEquipChar(UDS_CharSlotImplBase *this)

{
  return false;
}

// IsHaveChar @ 14b454970

bool __thiscall UDS_CharSlotImplBase::IsHaveChar(UDS_CharSlotImplBase *this)

{
  return false;
}

// IsSelected @ 14b454980

bool __thiscall UDS_CharSlotImplBase::IsSelected(UDS_CharSlotImplBase *this)

{
  return this->Selected;
}

// IsShowQuickChangeNum @ 14b454990

bool __thiscall UDS_CharSlotImplBase::IsShowQuickChangeNum(UDS_CharSlotImplBase *this)

{
  return false;
}

// OnClickAddBtn @ 14b4549a0

void __thiscall UDS_CharSlotImplBase::OnClickAddBtn(UDS_CharSlotImplBase *this)

{
  return;
}

// OnClickChangeBtn @ 14b4549b0

void __thiscall UDS_CharSlotImplBase::OnClickChangeBtn(UDS_CharSlotImplBase *this)

{
  return;
}

// OnEventMouseButtonUp @ 14b4549c0

void __thiscall
UDS_CharSlotImplBase::OnEventMouseButtonUp
          (UDS_CharSlotImplBase *this,FDS_WidgetPointerEventField *param_1)

{
  return;
}

// OnEventOnDragCanceled @ 14b4549d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_CharSlotImplBase::OnEventOnDragCanceled
          (UDS_CharSlotImplBase *this,FDS_DragDropEventField *param_1)

{
  return;
}

// OnEventOnDragDetected @ 14b4549e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_CharSlotImplBase::OnEventOnDragDetected
          (UDS_CharSlotImplBase *this,FDS_DragDropEventField *param_1)

{
  return;
}

// OnEventOnDrop @ 14b4549f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_CharSlotImplBase::OnEventOnDrop(UDS_CharSlotImplBase *this,FDS_DragDropEventField *param_1)

{
  return;
}

// StaticRegisterNativesUDS_CharSlotImplBase @ 14b455100

void __cdecl UDS_CharSlotImplBase::StaticRegisterNativesUDS_CharSlotImplBase(void)

{
  return;
}

// UnBindData @ 14b455540

void __thiscall
UDS_CharSlotImplBase::UnBindData
          (UDS_CharSlotImplBase *this,TWeakObjectPtr<UDS_VM_W_CharacterSlot,FWeakObjectPtr> param_1)

{
  return;
}

// GetCharElementTypeIconID @ 14bcf5b80

int __thiscall UDS_CharSlotImplBase::GetCharElementTypeIconID(UDS_CharSlotImplBase *this)

{
  EDS_ElementType EVar1;
  int iVar2;
  FDS_CharacterBaseTableRow *pFVar3;
  UEnum *pUVar4;
  
  if (this->CharID != 0) {
    pFVar3 = FDS_CharacterBaseTableRow::Get((longlong)this->CharID,true);
    if (pFVar3 != (FDS_CharacterBaseTableRow *)0x0) {
      EVar1 = pFVar3->ElementType;
      pUVar4 = StaticEnum<enum_EDS_ElementType>();
      iVar2 = DS_Util::GetEnumIconID(pUVar4,(uint)EVar1);
      return iVar2;
    }
  }
  return 0;
}

// GetCharID @ 14bcf5c20

int __thiscall UDS_CharSlotImplBase::GetCharID(UDS_CharSlotImplBase *this)

{
  return this->CharID;
}

// GetCharIconID @ 14bcf5c30

int __thiscall UDS_CharSlotImplBase::GetCharIconID(UDS_CharSlotImplBase *this)

{
  FDS_CharacterBaseTableRow *pFVar1;
  FDS_CharacterSkinTableRow *pFVar2;
  
  if (this->CharID != 0) {
    pFVar1 = FDS_CharacterBaseTableRow::Get((longlong)this->CharID,true);
    if (pFVar1 != (FDS_CharacterBaseTableRow *)0x0) {
      pFVar2 = FDS_CharacterSkinTableRow::Get((longlong)pFVar1->ID_DefaultSkin,true);
      if (pFVar2 != (FDS_CharacterSkinTableRow *)0x0) {
        return pFVar2->ID_CardImg;
      }
    }
  }
  return 0;
}

// GetSlotInfo @ 14bcfbca0

FDS_SlotInfo * __thiscall
UDS_CharSlotImplBase::GetSlotInfo(UDS_CharSlotImplBase *this,FDS_SlotInfo *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  (__return_storage_ptr__->SlotInfo).Object = (this->SlotInfo).SlotInfo.Object;
  pTVar1 = (this->SlotInfo).SlotInfo.SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SlotInfo).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// OnEventMouseEnter @ 14bd0d370

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_CharSlotImplBase::OnEventMouseEnter
          (UDS_CharSlotImplBase *this,FDS_WidgetPointerEventField *param_1)

{
  UDS_WindowManager *pUVar1;
  
  if (0 < this->CharID) {
    pUVar1 = UDS_WindowManager::GetInst();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_WindowManager *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
      return;
    }
  }
  return;
}

// OnEventMouseLeave @ 14bd0d3c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_CharSlotImplBase::OnEventMouseLeave
          (UDS_CharSlotImplBase *this,FDS_WidgetPointerEventField *param_1)

{
  UDS_WindowManager *pUVar1;
  
  pUVar1 = UDS_WindowManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_WindowManager *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
    return;
  }
  return;
}

// SetContext @ 14bd1e6f0

void __thiscall
UDS_CharSlotImplBase::SetContext
          (UDS_CharSlotImplBase *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FDS_ViewModelContext_CharSlotBase,1> local_28;
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
  SafeCast<FDS_ViewModelContext_CharSlotBase>(&local_28,&local_18);
  if (local_28.Object == (FDS_ViewModelContext_CharSlotBase *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3345691820351815698>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\CharSlot\\DS_CharSlotImplBase.cpp"
                       ,0x12,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    if (local_28.Object == (FDS_ViewModelContext_CharSlotBase *)0x0) {
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
    this->CharID = (local_28.Object)->CharID;
    this->Selected = (local_28.Object)->IsSelected;
    (**(code **)(this->_padding_ + 0x2b8))(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UpdateSlotInfo @ 14bd29a60

void __thiscall UDS_CharSlotImplBase::UpdateSlotInfo(UDS_CharSlotImplBase *this)

{
  return;
}

