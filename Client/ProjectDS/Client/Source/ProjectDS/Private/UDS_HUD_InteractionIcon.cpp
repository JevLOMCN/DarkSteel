// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b4ac060

UClass * __cdecl UDS_HUD_InteractionIcon::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_HUD_InteractionIcon.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_HUD_InteractionIcon",
               &Z_Registration_Info_UClass_UDS_HUD_InteractionIcon.InnerSingleton,
               StaticRegisterNativesUDS_HUD_InteractionIcon,0x878,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_HUD_InteractionIcon>,
               InternalVTableHelperCtorCaller<UDS_HUD_InteractionIcon>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_HUD_InteractionIcon.InnerSingleton;
}

// UDS_HUD_InteractionIcon @ 14b4b1ce0

UDS_HUD_InteractionIcon * __thiscall
UDS_HUD_InteractionIcon::UDS_HUD_InteractionIcon
          (UDS_HUD_InteractionIcon *this,FVTableHelper *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &_vftable__for__UCommonUserWidget__;
  *(undefined ***)&this->field_0x3d0 = &_vftable__for__IUserObjectListEntry__;
  return this;
}

// UDS_HUD_InteractionIcon @ 14b4b1d30

UDS_HUD_InteractionIcon * __thiscall
UDS_HUD_InteractionIcon::UDS_HUD_InteractionIcon
          (UDS_HUD_InteractionIcon *this,FObjectInitializer *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &_vftable__for__UCommonUserWidget__;
  *(undefined ***)&this->field_0x3d0 = &_vftable__for__IUserObjectListEntry__;
  return this;
}

// ~UDS_HUD_InteractionIcon @ 14b4b3410

void __thiscall UDS_HUD_InteractionIcon::~UDS_HUD_InteractionIcon(UDS_HUD_InteractionIcon *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &_vftable__for__UCommonUserWidget__;
  *(undefined ***)&this->field_0x3d0 = &_vftable__for__IUserObjectListEntry__;
  UDS_UserWidget::~UDS_UserWidget((UDS_UserWidget *)this);
  return;
}

// GetPrivateStaticClass @ 14b4b6d20

UClass * __cdecl UDS_HUD_InteractionIcon::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_HUD_InteractionIcon.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_HUD_InteractionIcon",
               &Z_Registration_Info_UClass_UDS_HUD_InteractionIcon.InnerSingleton,
               StaticRegisterNativesUDS_HUD_InteractionIcon,0x878,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_HUD_InteractionIcon>,
               InternalVTableHelperCtorCaller<UDS_HUD_InteractionIcon>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_HUD_InteractionIcon.InnerSingleton;
}

// StaticRegisterNativesUDS_HUD_InteractionIcon @ 14b4b8470

void __cdecl UDS_HUD_InteractionIcon::StaticRegisterNativesUDS_HUD_InteractionIcon(void)

{
  return;
}

// InitWithData @ 14c08ccd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
UDS_HUD_InteractionIcon::InitWithData(UDS_HUD_InteractionIcon *this,FDS_WidgetContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FDS_EntityBase *this_00;
  FDS_ViewModelContext *pFVar4;
  UScriptStruct *pUVar5;
  UDS_ViewModelContextManager *this_01;
  undefined8 uVar6;
  FDS_ViewModelContext *pFVar7;
  FDS_ViewModelContext *pFVar8;
  EDS_InteractionType local_res18 [2];
  FWeakObjectPtr local_res20;
  ulong64 local_68;
  FName local_60;
  UDS_HUD_InteractionIcon *local_58;
  undefined1 local_50 [8];
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  code *local_28;
  FDS_ViewModelContext *pFStack_20;
  
  bVar2 = UDS_UserWidget::InitWithData((UDS_UserWidget *)this,param_1);
  if (bVar2) {
    ::FName::FName(&local_60,"entityID");
    local_68 = FDS_WidgetContext::GetUint64(param_1,&local_60);
    this_00 = FDS_EntityBase::GetEntityBase(&local_68);
    if (this_00 != (FDS_EntityBase *)0x0) {
      local_48.Object = (FDS_ViewModelContext *)OnInteractionOverlaped;
      pFVar7 = (FDS_ViewModelContext *)0x0;
      local_48.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)
           ((ulonglong)local_48.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
      local_28 = OnInteractionOverlaped;
      pFStack_20 = (FDS_ViewModelContext *)local_48.SharedReferenceCount.ReferenceController;
      TMulticastDelegateRegistration<void___cdecl(enum_EDS_InteractionType,unsigned___int64,bool),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_HUD_InteractionIcon>
                (&this_00->InteractionOverlapDelegate,(UDS_HUD_InteractionIcon *)local_50,
                 (pmf_40782811 *)this);
      local_res18[0] = Icon;
      pcVar1 = *(code **)(*(longlong *)this + 0x2c0);
      bVar2 = FDS_EntityBase::IsMainPlayerInteractionOverlapped(this_00,local_res18);
      uVar6 = 1;
      if (bVar2) {
        uVar6 = 4;
      }
      (*pcVar1)(this,uVar6);
      pFVar4 = ::operator_new(0x30);
      pFVar8 = pFVar7;
      if (pFVar4 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar4->field_0x1c = 0;
        *(undefined8 *)((longlong)&pFVar4[1]._padding_ + 4) = 0;
        ((atomic<int> *)&pFVar4[1].DerivedStaticStruct)[1] = (atomic<int>)0x0;
        *(undefined8 *)&pFVar4->DerivedStaticStruct = 0;
        (pFVar4->ViewModelName).ComparisonIndex = 0;
        (pFVar4->ViewModelName).Number = 0;
        pFVar4->ViewModelTemplateKey = None;
        pFVar4->_padding_ = (longlong)&___7FDS_ViewModelContext_Interaction__6B_;
        pFVar8 = pFVar4;
      }
      pFVar4 = ::operator_new(0x20);
      if (pFVar4 != (FDS_ViewModelContext *)0x0) {
        *(atomic<int> *)&pFVar4->DerivedStaticStruct = (atomic<int>)0x1;
        *(code **)&(pFVar4->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
        pFVar4->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_Interaction__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        ((atomic<int> *)&pFVar4->DerivedStaticStruct)[1] = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pFVar4->ViewModelTemplateKey = pFVar8;
        pFVar7 = pFVar4;
      }
      if ((pFVar8 == (FDS_ViewModelContext *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      pUVar5 = FDS_ViewModelContext_Interaction::StaticStruct();
      *(UScriptStruct **)&pFVar8->DerivedStaticStruct = pUVar5;
      this_01 = UDS_ViewModelContextManager::GetInst();
      if (this_01 != (UDS_ViewModelContextManager *)0x0) {
        if (pFVar7 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar7->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar7->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_48.Object = pFVar8;
        local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
        UDS_ViewModelContextManager::RegisterContext(this_01,&local_48);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_48.SharedReferenceCount.ReferenceController);
      }
      pFVar8->ViewModelTemplateKey = InteractionGroup;
      pFVar8[1]._padding_ = local_68;
      if (pFVar7 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar7->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar7->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_38.Object = pFVar8;
      local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      local_res20.ObjectIndex = 0;
      local_res20.ObjectSerialNumber = 0;
      local_58 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_58);
      DS_ViewModelTemplateUtil::BindViewModel
                ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res20,&local_38,false);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar7);
      return true;
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<552304082409226261>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\View\\Hud\\DS_HUD_InteractionIcon.cpp"
                       ,0x15,"entityBase");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// OnInteractionOverlaped @ 14c096390

void __thiscall
UDS_HUD_InteractionIcon::OnInteractionOverlaped
          (UDS_HUD_InteractionIcon *this,EDS_InteractionType param_1,ulong64 param_2,bool param_3)

{
  undefined4 uVar1;
  
  if (param_1 == Icon) {
    uVar1 = 1;
    if (param_3) {
      uVar1 = 4;
    }
                    /* WARNING: Could not recover jumptable at 0x00014c0963a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0x2c0))(this,uVar1);
    return;
  }
  return;
}

