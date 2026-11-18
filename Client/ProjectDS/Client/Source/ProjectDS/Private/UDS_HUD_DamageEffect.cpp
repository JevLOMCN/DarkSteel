// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b4acff0

UClass * __cdecl UDS_HUD_DamageEffect::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_HUD_DamageEffect.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_HUD_DamageEffect",
               &Z_Registration_Info_UClass_UDS_HUD_DamageEffect.InnerSingleton,
               StaticRegisterNativesUDS_HUD_DamageEffect,0x878,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_HUD_DamageEffect>,
               InternalVTableHelperCtorCaller<UDS_HUD_DamageEffect>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_HUD_DamageEffect.InnerSingleton;
}

// UDS_HUD_DamageEffect @ 14b4b1ba0

UDS_HUD_DamageEffect * __thiscall
UDS_HUD_DamageEffect::UDS_HUD_DamageEffect(UDS_HUD_DamageEffect *this,FVTableHelper *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &_vftable__for__UCommonUserWidget__;
  *(undefined ***)&this->field_0x3d0 = &_vftable__for__IUserObjectListEntry__;
  return this;
}

// UDS_HUD_DamageEffect @ 14b4b1bf0

UDS_HUD_DamageEffect * __thiscall
UDS_HUD_DamageEffect::UDS_HUD_DamageEffect(UDS_HUD_DamageEffect *this,FObjectInitializer *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &_vftable__for__UCommonUserWidget__;
  *(undefined ***)&this->field_0x3d0 = &_vftable__for__IUserObjectListEntry__;
  return this;
}

// ~UDS_HUD_DamageEffect @ 14b4b3390

void __thiscall UDS_HUD_DamageEffect::~UDS_HUD_DamageEffect(UDS_HUD_DamageEffect *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &_vftable__for__UCommonUserWidget__;
  *(undefined ***)&this->field_0x3d0 = &_vftable__for__IUserObjectListEntry__;
  UDS_UserWidget::~UDS_UserWidget((UDS_UserWidget *)this);
  return;
}

// GetPrivateStaticClass @ 14b4b6ba0

UClass * __cdecl UDS_HUD_DamageEffect::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_HUD_DamageEffect.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_HUD_DamageEffect",
               &Z_Registration_Info_UClass_UDS_HUD_DamageEffect.InnerSingleton,
               StaticRegisterNativesUDS_HUD_DamageEffect,0x878,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_HUD_DamageEffect>,
               InternalVTableHelperCtorCaller<UDS_HUD_DamageEffect>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_HUD_DamageEffect.InnerSingleton;
}

// StaticRegisterNativesUDS_HUD_DamageEffect @ 14b4b8450

void __cdecl UDS_HUD_DamageEffect::StaticRegisterNativesUDS_HUD_DamageEffect(void)

{
  return;
}

// InitWithData @ 14c08cba0

bool __thiscall
UDS_HUD_DamageEffect::InitWithData(UDS_HUD_DamageEffect *this,FDS_WidgetContext *param_1)

{
  code *pcVar1;
  FDS_ViewModelContext_Entity *pFVar2;
  bool bVar3;
  undefined1 uVar4;
  ulong64 uVar5;
  FWeakObjectPtr local_res18;
  FName local_res20;
  UDS_HUD_DamageEffect *local_38 [2];
  TSharedPtr<FDS_ViewModelContext_Entity,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  bVar3 = UDS_UserWidget::InitWithData((UDS_UserWidget *)this,param_1);
  if (!bVar3) {
    return false;
  }
  ::FName::FName(&local_res20,"entityID");
  uVar5 = FDS_WidgetContext::GetUint64(param_1,&local_res20);
  MakeContext<FDS_ViewModelContext_Entity>(&local_28);
  pFVar2 = local_28.Object;
  if (local_28.Object == (FDS_ViewModelContext_Entity *)0x0) {
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
  *(undefined4 *)&pFVar2->_padding_ = 0x2a;
  pFVar2->EntityID = uVar5;
  local_18.Object = (FDS_ViewModelContext *)local_28.Object;
  local_18.SharedReferenceCount.ReferenceController =
       local_28.SharedReferenceCount.ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_HUD_DamageEffect *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_38[0] = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_HUD_DamageEffect *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)local_38);
  DS_ViewModelTemplateUtil::BindViewModel
            ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res18,&local_18,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return true;
}

