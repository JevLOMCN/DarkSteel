// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 19

// StaticClass @ 14b65a560

UClass * __cdecl UDS_VM_GuildMark::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildMark.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildMark",
               &Z_Registration_Info_UClass_UDS_VM_GuildMark.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildMark,0x128,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_GuildMark>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildMark>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildMark.InnerSingleton;
}

// UDS_VM_GuildMark @ 14b65e6f0

UDS_VM_GuildMark * __thiscall
UDS_VM_GuildMark::UDS_VM_GuildMark(UDS_VM_GuildMark *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildMark__6B_;
  (this->MarkResourcePath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->MarkResourcePath).AssetPath.PackageName.Number = 0;
  (this->MarkResourcePath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->MarkResourcePath).AssetPath.AssetName.Number = 0;
  (this->MarkResourcePath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MarkResourcePath).SubPathString.Data.ArrayNum = 0;
  (this->MarkResourcePath).SubPathString.Data.ArrayMax = 0;
  (this->MarkBgResourcePath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->MarkBgResourcePath).AssetPath.PackageName.Number = 0;
  (this->MarkBgResourcePath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->MarkBgResourcePath).AssetPath.AssetName.Number = 0;
  (this->MarkBgResourcePath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MarkBgResourcePath).SubPathString.Data.ArrayNum = 0;
  (this->MarkBgResourcePath).SubPathString.Data.ArrayMax = 0;
  (this->GuildMarkInfo).GuildMarkTableID = 0;
  (this->GuildMarkInfo).GuildMarkColorTableID = 0;
  (this->GuildMarkInfo).GuildMarkBgTableID = 0;
  (this->GuildMarkInfo).GuildMarkBgColorTableID = 0;
  *(undefined8 *)&this->OnGuildMarkUpdateDelegate = 0;
  *(undefined8 *)&(this->OnGuildMarkUpdateDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnGuildMarkUpdateDelegate).field_0x10 = 0;
  return this;
}

// UDS_VM_GuildMark @ 14b65e790

UDS_VM_GuildMark * __thiscall
UDS_VM_GuildMark::UDS_VM_GuildMark(UDS_VM_GuildMark *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildMark__6B_;
  (this->MarkResourcePath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->MarkResourcePath).AssetPath.PackageName.Number = 0;
  (this->MarkResourcePath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->MarkResourcePath).AssetPath.AssetName.Number = 0;
  (this->MarkResourcePath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MarkResourcePath).SubPathString.Data.ArrayNum = 0;
  (this->MarkResourcePath).SubPathString.Data.ArrayMax = 0;
  (this->MarkBgResourcePath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->MarkBgResourcePath).AssetPath.PackageName.Number = 0;
  (this->MarkBgResourcePath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->MarkBgResourcePath).AssetPath.AssetName.Number = 0;
  (this->MarkBgResourcePath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MarkBgResourcePath).SubPathString.Data.ArrayNum = 0;
  (this->MarkBgResourcePath).SubPathString.Data.ArrayMax = 0;
  (this->GuildMarkInfo).GuildMarkTableID = 0;
  (this->GuildMarkInfo).GuildMarkColorTableID = 0;
  (this->GuildMarkInfo).GuildMarkBgTableID = 0;
  (this->GuildMarkInfo).GuildMarkBgColorTableID = 0;
  *(undefined8 *)&this->OnGuildMarkUpdateDelegate = 0;
  *(undefined8 *)&(this->OnGuildMarkUpdateDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnGuildMarkUpdateDelegate).field_0x10 = 0;
  return this;
}

// ~UDS_VM_GuildMark @ 14b661a80

void __thiscall UDS_VM_GuildMark::~UDS_VM_GuildMark(UDS_VM_GuildMark *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildMark__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGuildMarkUpdateDelegate);
  pvVar1 = *(void **)&(this->OnGuildMarkUpdateDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnGuildMarkUpdateDelegate);
  pFVar2 = (this->MarkBgResourcePath).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->MarkResourcePath).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b664420

IClassDescriptor * __thiscall
UDS_VM_GuildMark::GetFieldNotificationDescriptor(UDS_VM_GuildMark *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_GuildMark::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b664ae0

UClass * __cdecl UDS_VM_GuildMark::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildMark.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildMark",
               &Z_Registration_Info_UClass_UDS_VM_GuildMark.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildMark,0x128,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_GuildMark>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildMark>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildMark.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_GuildMark @ 14b665400

void __cdecl UDS_VM_GuildMark::StaticRegisterNativesUDS_VM_GuildMark(void)

{
  return;
}

// BindModel @ 14be75d50

void __thiscall UDS_VM_GuildMark::BindModel(UDS_VM_GuildMark *this)

{
  UDS_GuildEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_GuildEvent::GetEvent();
  if (pUVar1 != (UDS_GuildEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->SelectedGuildMarkSlotDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_GuildMark>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->SelectedGuildMarkSlotDelegate,(UDS_VM_GuildMark *)&stack0x00000010,
               (pmf_61e1896b *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->SelectedGuildMarkColorSlotDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_GuildMark>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->SelectedGuildMarkColorSlotDelegate,(UDS_VM_GuildMark *)&stack0x00000010,
               (pmf_61e1896b *)this);
  }
  return;
}

// GetGuildMarkColorID @ 14be89770

int __thiscall
UDS_VM_GuildMark::GetGuildMarkColorID(UDS_VM_GuildMark *this,EDS_GuildMarkType param_1)

{
  if (param_1 == Emblem) {
    return (this->GuildMarkInfo).GuildMarkColorTableID;
  }
  if (param_1 == BackGround) {
    return (this->GuildMarkInfo).GuildMarkBgColorTableID;
  }
  return 0;
}

// GetGuildMarkID @ 14be897a0

int __thiscall UDS_VM_GuildMark::GetGuildMarkID(UDS_VM_GuildMark *this,EDS_GuildMarkType param_1)

{
  if (param_1 == Emblem) {
    return (this->GuildMarkInfo).GuildMarkTableID;
  }
  if (param_1 == BackGround) {
    return (this->GuildMarkInfo).GuildMarkBgTableID;
  }
  return 0;
}

// InitViewModel @ 14be8cc70

void __thiscall UDS_VM_GuildMark::InitViewModel(UDS_VM_GuildMark *this)

{
  return;
}

// OnSelectedMarkColorSlotEvent @ 14be9ccb0

void __thiscall UDS_VM_GuildMark::OnSelectedMarkColorSlotEvent(UDS_VM_GuildMark *this,int param_1)

{
  float fVar1;
  float fVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  FDS_GuildMarkColorTableRow *this_00;
  FDS_ResourceColorTableRow *pFVar6;
  float fVar7;
  FName FVar8;
  FName local_28;
  int local_20;
  
  this_00 = FDS_GuildMarkColorTableRow::GetRef((longlong)param_1,true);
  bVar4 = FDS_GuildMarkColorTableRow::IsValid(this_00);
  if (!bVar4) {
    return;
  }
  if (this_00->Type == Emblem) {
    (this->GuildMarkInfo).GuildMarkColorTableID = param_1;
    pFVar6 = FDS_ResourceColorTableRow::GetRef((longlong)this_00->ID_ResourceColor,true);
    bVar4 = FDS_ResourceColorTableRow::IsValid(pFVar6);
    iVar5 = FFieldNotificationClassDescriptor::GuildMarkIconColor.BitNumber;
    FVar8 = FFieldNotificationClassDescriptor::GuildMarkIconColor.FieldName;
    if (!bVar4) goto LAB_14be9ce6f;
    fVar1 = FLinearColor::sRGBToLinearTable[(pFVar6->Color).field0_0x0._s_0.B];
    fVar2 = FLinearColor::sRGBToLinearTable[(pFVar6->Color).field0_0x0._s_0.G];
    fVar7 = (float)(pFVar6->Color).field0_0x0._s_0.A * __real_3b808081;
    if (((FLinearColor::sRGBToLinearTable[(pFVar6->Color).field0_0x0._s_0.R] ==
          (this->GuildMarkIconColor).field0_0x0._s_0.R) &&
        (fVar2 == (this->GuildMarkIconColor).field0_0x0._s_0.G)) &&
       ((fVar1 == (this->GuildMarkIconColor).field0_0x0._s_0.B &&
        (fVar7 == (this->GuildMarkIconColor).field0_0x0._s_0.A)))) goto LAB_14be9ce6f;
    (this->GuildMarkIconColor).field0_0x0._s_0.R =
         FLinearColor::sRGBToLinearTable[(pFVar6->Color).field0_0x0._s_0.R];
    (this->GuildMarkIconColor).field0_0x0._s_0.G = fVar2;
    (this->GuildMarkIconColor).field0_0x0._s_0.B = fVar1;
    (this->GuildMarkIconColor).field0_0x0._s_0.A = fVar7;
  }
  else {
    if (this_00->Type != BackGround) goto LAB_14be9ce6f;
    (this->GuildMarkInfo).GuildMarkBgColorTableID = param_1;
    pFVar6 = FDS_ResourceColorTableRow::GetRef((longlong)this_00->ID_ResourceColor,true);
    bVar4 = FDS_ResourceColorTableRow::IsValid(pFVar6);
    iVar5 = FFieldNotificationClassDescriptor::GuildMarkBgIconColor.BitNumber;
    FVar8 = FFieldNotificationClassDescriptor::GuildMarkBgIconColor.FieldName;
    if (!bVar4) goto LAB_14be9ce6f;
    fVar1 = FLinearColor::sRGBToLinearTable[(pFVar6->Color).field0_0x0._s_0.B];
    fVar2 = FLinearColor::sRGBToLinearTable[(pFVar6->Color).field0_0x0._s_0.G];
    fVar7 = (float)(pFVar6->Color).field0_0x0._s_0.A * __real_3b808081;
    if ((((FLinearColor::sRGBToLinearTable[(pFVar6->Color).field0_0x0._s_0.R] ==
           (this->GuildMarkBgIconColor).field0_0x0._s_0.R) &&
         (fVar2 == (this->GuildMarkBgIconColor).field0_0x0._s_0.G)) &&
        (fVar1 == (this->GuildMarkBgIconColor).field0_0x0._s_0.B)) &&
       (fVar7 == (this->GuildMarkBgIconColor).field0_0x0._s_0.A)) goto LAB_14be9ce6f;
    (this->GuildMarkBgIconColor).field0_0x0._s_0.R =
         FLinearColor::sRGBToLinearTable[(pFVar6->Color).field0_0x0._s_0.R];
    (this->GuildMarkBgIconColor).field0_0x0._s_0.G = fVar2;
    (this->GuildMarkBgIconColor).field0_0x0._s_0.B = fVar1;
    (this->GuildMarkBgIconColor).field0_0x0._s_0.A = fVar7;
  }
  local_28 = FVar8;
  local_20 = iVar5;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
LAB_14be9ce6f:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnGuildMarkUpdateDelegate,(FReadAccessScope *)&local_28);
  if ((*(int *)&(this->OnGuildMarkUpdateDelegate).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->OnGuildMarkUpdateDelegate).field_0x8, plVar3 != (longlong *)0x0
     )) {
    (**(code **)(*plVar3 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_28);
  return;
}

// OnSelectedMarkSlotEvent @ 14be9cf10

void __thiscall UDS_VM_GuildMark::OnSelectedMarkSlotEvent(UDS_VM_GuildMark *this,int param_1)

{
  longlong *plVar1;
  bool bVar2;
  FDS_GuildMarkTableRow *this_00;
  FDS_ResourceImageTableRow *this_01;
  FSoftObjectPath *pFVar3;
  FReadAccessScope local_28;
  
  this_00 = FDS_GuildMarkTableRow::GetRef((longlong)param_1,true);
  bVar2 = FDS_GuildMarkTableRow::IsValid(this_00);
  if (!bVar2) {
    return;
  }
  if (this_00->Type == Emblem) {
    (this->GuildMarkInfo).GuildMarkTableID = param_1;
    this_01 = FDS_ResourceImageTableRow::GetRef(this_00->ID_ResourceImage,true);
    bVar2 = FDS_ResourceImageTableRow::IsValid(this_01);
    if (!bVar2) goto LAB_14be9cfd8;
    pFVar3 = &this->MarkResourcePath;
    local_28.DestructionSentinel._0_8_ =
         FFieldNotificationClassDescriptor::MarkResourcePath.FieldName;
    local_28.DestructionSentinel.Accessor._0_4_ =
         FFieldNotificationClassDescriptor::MarkResourcePath.BitNumber;
  }
  else {
    if (this_00->Type != BackGround) goto LAB_14be9cfd8;
    (this->GuildMarkInfo).GuildMarkBgTableID = param_1;
    this_01 = FDS_ResourceImageTableRow::GetRef(this_00->ID_ResourceImage,true);
    bVar2 = FDS_ResourceImageTableRow::IsValid(this_01);
    if (!bVar2) goto LAB_14be9cfd8;
    pFVar3 = &this->MarkBgResourcePath;
    local_28.DestructionSentinel._0_8_ =
         FFieldNotificationClassDescriptor::MarkBgResourcePath.FieldName;
    local_28.DestructionSentinel.Accessor._0_4_ =
         FFieldNotificationClassDescriptor::MarkBgResourcePath.BitNumber;
  }
  UMVVMViewModelBase::SetPropertyValue<FSoftObjectPath,FSoftObjectPath>
            ((UMVVMViewModelBase *)this,pFVar3,&this_01->IconPath,(FFieldId *)&local_28);
LAB_14be9cfd8:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnGuildMarkUpdateDelegate,&local_28);
  if ((*(int *)&(this->OnGuildMarkUpdateDelegate).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnGuildMarkUpdateDelegate).field_0x8, plVar1 != (longlong *)0x0
     )) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnSetViewModel @ 14be9fbb0

void __thiscall
UDS_VM_GuildMark::OnSetViewModel(UDS_VM_GuildMark *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<FDS_ViewModelContext_GuildMark,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
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
  SafeCast<FDS_ViewModelContext_GuildMark>(&local_28,&local_18);
  if (local_28.Object != (FDS_ViewModelContext_GuildMark *)0x0) {
    if (local_28.Object == (FDS_ViewModelContext_GuildMark *)0x0) {
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
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (&this->OnGuildMarkUpdateDelegate,&(local_28.Object)->OnGuildMarkUpdateDelegate);
    if (local_28.Object == (FDS_ViewModelContext_GuildMark *)0x0) {
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
    OnSelectedMarkSlotEvent(this,(local_28.Object)->GuildMarkTableID);
    OnSelectedMarkSlotEvent(this,(local_28.Object)->GuildMarkBgTableID);
    OnSelectedMarkColorSlotEvent(this,(local_28.Object)->GuildMarkColorTableID);
    OnSelectedMarkColorSlotEvent(this,(local_28.Object)->GuildMarkBgColorTableID);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetGuildMarkBgIconColor @ 14beafb00

void __thiscall
UDS_VM_GuildMark::SetGuildMarkBgIconColor(UDS_VM_GuildMark *this,FLinearColor *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FName local_18;
  int local_10;
  
  if (((((param_1->field0_0x0)._s_0.R != (this->GuildMarkBgIconColor).field0_0x0._s_0.R) ||
       ((param_1->field0_0x0)._s_0.G != (this->GuildMarkBgIconColor).field0_0x0._s_0.G)) ||
      ((param_1->field0_0x0)._s_0.B != (this->GuildMarkBgIconColor).field0_0x0._s_0.B)) ||
     ((param_1->field0_0x0)._s_0.A != (this->GuildMarkBgIconColor).field0_0x0._s_0.A)) {
    fVar1 = (param_1->field0_0x0)._s_0.G;
    fVar2 = (param_1->field0_0x0)._s_0.B;
    fVar3 = (param_1->field0_0x0)._s_0.A;
    local_10 = FFieldNotificationClassDescriptor::GuildMarkBgIconColor.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::GuildMarkBgIconColor.FieldName;
    (this->GuildMarkBgIconColor).field0_0x0._s_0.R = (param_1->field0_0x0)._s_0.R;
    (this->GuildMarkBgIconColor).field0_0x0._s_0.G = fVar1;
    (this->GuildMarkBgIconColor).field0_0x0._s_0.B = fVar2;
    (this->GuildMarkBgIconColor).field0_0x0._s_0.A = fVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetGuildMarkIconColor @ 14beafb80

void __thiscall
UDS_VM_GuildMark::SetGuildMarkIconColor(UDS_VM_GuildMark *this,FLinearColor *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FName local_18;
  int local_10;
  
  if (((((param_1->field0_0x0)._s_0.R != (this->GuildMarkIconColor).field0_0x0._s_0.R) ||
       ((param_1->field0_0x0)._s_0.G != (this->GuildMarkIconColor).field0_0x0._s_0.G)) ||
      ((param_1->field0_0x0)._s_0.B != (this->GuildMarkIconColor).field0_0x0._s_0.B)) ||
     ((param_1->field0_0x0)._s_0.A != (this->GuildMarkIconColor).field0_0x0._s_0.A)) {
    fVar1 = (param_1->field0_0x0)._s_0.G;
    fVar2 = (param_1->field0_0x0)._s_0.B;
    fVar3 = (param_1->field0_0x0)._s_0.A;
    local_10 = FFieldNotificationClassDescriptor::GuildMarkIconColor.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::GuildMarkIconColor.FieldName;
    (this->GuildMarkIconColor).field0_0x0._s_0.R = (param_1->field0_0x0)._s_0.R;
    (this->GuildMarkIconColor).field0_0x0._s_0.G = fVar1;
    (this->GuildMarkIconColor).field0_0x0._s_0.B = fVar2;
    (this->GuildMarkIconColor).field0_0x0._s_0.A = fVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetMarkBgResourcePath @ 14beb2860

void __thiscall
UDS_VM_GuildMark::SetMarkBgResourcePath(UDS_VM_GuildMark *this,FSoftObjectPath *param_1)

{
  FFieldId local_18 [2];
  
  local_18[0].FieldName = FFieldNotificationClassDescriptor::MarkBgResourcePath.FieldName;
  local_18[0].BitNumber = FFieldNotificationClassDescriptor::MarkBgResourcePath.BitNumber;
  UMVVMViewModelBase::SetPropertyValue<FSoftObjectPath,FSoftObjectPath>
            ((UMVVMViewModelBase *)this,&this->MarkBgResourcePath,param_1,local_18);
  return;
}

// SetMarkResourcePath @ 14beb28a0

void __thiscall
UDS_VM_GuildMark::SetMarkResourcePath(UDS_VM_GuildMark *this,FSoftObjectPath *param_1)

{
  FFieldId local_18 [2];
  
  local_18[0].FieldName = FFieldNotificationClassDescriptor::MarkResourcePath.FieldName;
  local_18[0].BitNumber = FFieldNotificationClassDescriptor::MarkResourcePath.BitNumber;
  UMVVMViewModelBase::SetPropertyValue<FSoftObjectPath,FSoftObjectPath>
            ((UMVVMViewModelBase *)this,&this->MarkResourcePath,param_1,local_18);
  return;
}

// UnbindModel @ 14bebbff0

void __thiscall UDS_VM_GuildMark::UnbindModel(UDS_VM_GuildMark *this)

{
  UDS_GuildEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_GuildEvent::GetEvent();
  if (pUVar1 != (UDS_GuildEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->SelectedGuildMarkSlotDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->SelectedGuildMarkColorSlotDelegate,this);
  }
  return;
}

