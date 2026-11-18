// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b77c690

UClass * __cdecl UDS_W_NameTag_BattleNPC::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_NameTag_BattleNPC.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_NameTag_BattleNPC",
               &Z_Registration_Info_UClass_UDS_W_NameTag_BattleNPC.InnerSingleton,
               StaticRegisterNativesUDS_W_NameTag_BattleNPC,0x878,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_W_NameTag_BattleNPC>,
               InternalVTableHelperCtorCaller<UDS_W_NameTag_BattleNPC>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_NameTag_BattleNPC.InnerSingleton;
}

// UDS_W_NameTag_BattleNPC @ 14b782850

UDS_W_NameTag_BattleNPC * __thiscall
UDS_W_NameTag_BattleNPC::UDS_W_NameTag_BattleNPC
          (UDS_W_NameTag_BattleNPC *this,FVTableHelper *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &_vftable__for__UCommonUserWidget__;
  *(undefined ***)&this->field_0x3d0 = &_vftable__for__IUserObjectListEntry__;
  return this;
}

// UDS_W_NameTag_BattleNPC @ 14b7828a0

UDS_W_NameTag_BattleNPC * __thiscall
UDS_W_NameTag_BattleNPC::UDS_W_NameTag_BattleNPC
          (UDS_W_NameTag_BattleNPC *this,FObjectInitializer *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &_vftable__for__UCommonUserWidget__;
  *(undefined ***)&this->field_0x3d0 = &_vftable__for__IUserObjectListEntry__;
  return this;
}

// ~UDS_W_NameTag_BattleNPC @ 14b783500

void __thiscall UDS_W_NameTag_BattleNPC::~UDS_W_NameTag_BattleNPC(UDS_W_NameTag_BattleNPC *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &_vftable__for__UCommonUserWidget__;
  *(undefined ***)&this->field_0x3d0 = &_vftable__for__IUserObjectListEntry__;
  UDS_UserWidget::~UDS_UserWidget((UDS_UserWidget *)this);
  return;
}

// GetPrivateStaticClass @ 14b786320

UClass * __cdecl UDS_W_NameTag_BattleNPC::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_NameTag_BattleNPC.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_NameTag_BattleNPC",
               &Z_Registration_Info_UClass_UDS_W_NameTag_BattleNPC.InnerSingleton,
               StaticRegisterNativesUDS_W_NameTag_BattleNPC,0x878,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_W_NameTag_BattleNPC>,
               InternalVTableHelperCtorCaller<UDS_W_NameTag_BattleNPC>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_NameTag_BattleNPC.InnerSingleton;
}

// StaticRegisterNativesUDS_W_NameTag_BattleNPC @ 14b786650

void __cdecl UDS_W_NameTag_BattleNPC::StaticRegisterNativesUDS_W_NameTag_BattleNPC(void)

{
  return;
}

// InitWithData @ 14c020690

bool __thiscall
UDS_W_NameTag_BattleNPC::InitWithData(UDS_W_NameTag_BattleNPC *this,FDS_WidgetContext *param_1)

{
  code *pcVar1;
  FDS_ViewModelContext_Entity *pFVar2;
  bool bVar3;
  undefined1 uVar4;
  ulong64 uVar5;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FName local_88;
  UDS_W_NameTag_BattleNPC *local_80;
  UDS_W_NameTag_BattleNPC *local_78 [2];
  TSharedPtr<FDS_ViewModelContext_Entity,1> local_68;
  TSharedPtr<FDS_ViewModelContext_Entity,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  
  bVar3 = UDS_UserWidget::InitWithData((UDS_UserWidget *)this,param_1);
  if (bVar3) {
    ::FName::FName(&local_88,"entityID");
    uVar5 = FDS_WidgetContext::GetUint64(param_1,&local_88);
    MakeContext<FDS_ViewModelContext_Entity>(&local_68);
    pFVar2 = local_68.Object;
    if (local_68.Object == (FDS_ViewModelContext_Entity *)0x0) {
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
    local_48.Object = (FDS_ViewModelContext *)local_68.Object;
    local_48.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    *(undefined4 *)&pFVar2->_padding_ = 0x6b;
    pFVar2->EntityID = uVar5;
    if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_W_NameTag_BattleNPC *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_80 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_W_NameTag_BattleNPC *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_80);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res18,&local_48,false);
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
    *(undefined4 *)&pFVar2->_padding_ = 0x45;
    pFVar2->EntityID = uVar5;
    local_38.Object = (FDS_ViewModelContext *)local_58.Object;
    local_38.SharedReferenceCount.ReferenceController =
         local_58.SharedReferenceCount.ReferenceController;
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_W_NameTag_BattleNPC *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_78[0] = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_W_NameTag_BattleNPC *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)local_78);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res20,&local_38,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
  }
  return false;
}

