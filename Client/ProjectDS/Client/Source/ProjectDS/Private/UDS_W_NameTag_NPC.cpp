// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b788df0

UClass * __cdecl UDS_W_NameTag_NPC::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_NameTag_NPC.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_NameTag_NPC",
               &Z_Registration_Info_UClass_UDS_W_NameTag_NPC.InnerSingleton,
               StaticRegisterNativesUDS_W_NameTag_NPC,0x888,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_W_NameTag_NPC>,
               InternalVTableHelperCtorCaller<UDS_W_NameTag_NPC>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_NameTag_NPC.InnerSingleton;
}

// UDS_W_NameTag_NPC @ 14b78cd30

UDS_W_NameTag_NPC * __thiscall
UDS_W_NameTag_NPC::UDS_W_NameTag_NPC(UDS_W_NameTag_NPC *this,FVTableHelper *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  (this->OwnerActor).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UDS_W_NameTag_NPC @ 14b78cd90

UDS_W_NameTag_NPC * __thiscall
UDS_W_NameTag_NPC::UDS_W_NameTag_NPC(UDS_W_NameTag_NPC *this,FObjectInitializer *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  (this->OwnerActor).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_W_NameTag_NPC @ 14b78e070

void __thiscall UDS_W_NameTag_NPC::~UDS_W_NameTag_NPC(UDS_W_NameTag_NPC *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  UDS_UserWidget::~UDS_UserWidget((UDS_UserWidget *)this);
  return;
}

// GetPrivateStaticClass @ 14b790130

UClass * __cdecl UDS_W_NameTag_NPC::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_NameTag_NPC.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_NameTag_NPC",
               &Z_Registration_Info_UClass_UDS_W_NameTag_NPC.InnerSingleton,
               StaticRegisterNativesUDS_W_NameTag_NPC,0x888,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_W_NameTag_NPC>,
               InternalVTableHelperCtorCaller<UDS_W_NameTag_NPC>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_NameTag_NPC.InnerSingleton;
}

// StaticRegisterNativesUDS_W_NameTag_NPC @ 14b790b20

void __cdecl UDS_W_NameTag_NPC::StaticRegisterNativesUDS_W_NameTag_NPC(void)

{
  return;
}

// InitWithData @ 14c0209d0

bool __thiscall UDS_W_NameTag_NPC::InitWithData(UDS_W_NameTag_NPC *this,FDS_WidgetContext *param_1)

{
  code *pcVar1;
  FDS_ViewModelContext_Entity *pFVar2;
  bool bVar3;
  undefined1 uVar4;
  ulong64 uVar5;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FName local_78;
  UDS_W_NameTag_NPC *local_70;
  UDS_W_NameTag_NPC *local_68 [2];
  TSharedPtr<FDS_ViewModelContext_Entity,1> local_58;
  TSharedPtr<FDS_ViewModelContext_Entity,1> local_48;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  
  bVar3 = UDS_UserWidget::InitWithData((UDS_UserWidget *)this,param_1);
  if (!bVar3) {
    return false;
  }
  ::FName::FName(&local_78,"entityID");
  uVar5 = FDS_WidgetContext::GetUint64(param_1,&local_78);
  this->OwnerEntityID = uVar5;
  MakeContext<FDS_ViewModelContext_Entity>(&local_58);
  pFVar2 = local_58.Object;
  if (local_58.Object == (FDS_ViewModelContext_Entity *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  *(undefined4 *)&pFVar2->_padding_ = 0x6a;
  local_38.Object = (FDS_ViewModelContext *)local_58.Object;
  local_38.SharedReferenceCount.ReferenceController =
       local_58.SharedReferenceCount.ReferenceController;
  pFVar2->EntityID = this->OwnerEntityID;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_70 = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_70);
  DS_ViewModelTemplateUtil::BindViewModel
            ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res18,&local_38,false);
  MakeContext<FDS_ViewModelContext_Entity>(&local_48);
  pFVar2 = local_48.Object;
  if (local_48.Object == (FDS_ViewModelContext_Entity *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  *(undefined4 *)&pFVar2->_padding_ = 0x45;
  local_28.Object = (FDS_ViewModelContext *)local_48.Object;
  local_28.SharedReferenceCount.ReferenceController =
       local_48.SharedReferenceCount.ReferenceController;
  pFVar2->EntityID = this->OwnerEntityID;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_68[0] = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)local_68);
  DS_ViewModelTemplateUtil::BindViewModel
            ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res20,&local_28,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  return true;
}

