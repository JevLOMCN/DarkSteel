// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b4add50

UClass * __cdecl UDS_HUD_SmiteEffect::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_HUD_SmiteEffect.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_HUD_SmiteEffect",
               &Z_Registration_Info_UClass_UDS_HUD_SmiteEffect.InnerSingleton,
               StaticRegisterNativesUDS_HUD_SmiteEffect,0x878,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_HUD_SmiteEffect>,
               InternalVTableHelperCtorCaller<UDS_HUD_SmiteEffect>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_HUD_SmiteEffect.InnerSingleton;
}

// UDS_HUD_SmiteEffect @ 14b4b2340

UDS_HUD_SmiteEffect * __thiscall
UDS_HUD_SmiteEffect::UDS_HUD_SmiteEffect(UDS_HUD_SmiteEffect *this,FVTableHelper *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &_vftable__for__UCommonUserWidget__;
  *(undefined ***)&this->field_0x3d0 = &_vftable__for__IUserObjectListEntry__;
  return this;
}

// UDS_HUD_SmiteEffect @ 14b4b2390

UDS_HUD_SmiteEffect * __thiscall
UDS_HUD_SmiteEffect::UDS_HUD_SmiteEffect(UDS_HUD_SmiteEffect *this,FObjectInitializer *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &_vftable__for__UCommonUserWidget__;
  *(undefined ***)&this->field_0x3d0 = &_vftable__for__IUserObjectListEntry__;
  return this;
}

// ~UDS_HUD_SmiteEffect @ 14b4b36b0

void __thiscall UDS_HUD_SmiteEffect::~UDS_HUD_SmiteEffect(UDS_HUD_SmiteEffect *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &_vftable__for__UCommonUserWidget__;
  *(undefined ***)&this->field_0x3d0 = &_vftable__for__IUserObjectListEntry__;
  UDS_UserWidget::~UDS_UserWidget((UDS_UserWidget *)this);
  return;
}

// GetPrivateStaticClass @ 14b4b7320

UClass * __cdecl UDS_HUD_SmiteEffect::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_HUD_SmiteEffect.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_HUD_SmiteEffect",
               &Z_Registration_Info_UClass_UDS_HUD_SmiteEffect.InnerSingleton,
               StaticRegisterNativesUDS_HUD_SmiteEffect,0x878,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_HUD_SmiteEffect>,
               InternalVTableHelperCtorCaller<UDS_HUD_SmiteEffect>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_HUD_SmiteEffect.InnerSingleton;
}

// StaticRegisterNativesUDS_HUD_SmiteEffect @ 14b4b84f0

void __cdecl UDS_HUD_SmiteEffect::StaticRegisterNativesUDS_HUD_SmiteEffect(void)

{
  return;
}

// InitWithData @ 14c08d7a0

bool __thiscall
UDS_HUD_SmiteEffect::InitWithData(UDS_HUD_SmiteEffect *this,FDS_WidgetContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  long64 lVar4;
  FDS_ViewModelContext *pFVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this_00;
  FDS_ViewModelContext *pFVar7;
  FDS_ViewModelContext *pFVar8;
  FWeakObjectPtr local_res18;
  FName local_res20;
  UDS_HUD_SmiteEffect *local_48;
  TSharedPtr<FDS_ViewModelContext,1> local_40;
  TSharedPtr<FDS_ViewModelContext,1> local_30;
  
  bVar2 = UDS_UserWidget::InitWithData((UDS_UserWidget *)this,param_1);
  if (!bVar2) {
    return false;
  }
  ::FName::FName(&local_res20,"entityID");
  lVar4 = FDS_WidgetContext::GetUint64(param_1,&local_res20);
  pFVar5 = ::operator_new(0x30);
  pFVar8 = (FDS_ViewModelContext *)0x0;
  pFVar7 = pFVar8;
  if (pFVar5 != (FDS_ViewModelContext *)0x0) {
    *(undefined8 *)&pFVar5->field_0x1c = 0;
    *(undefined8 *)((longlong)&pFVar5[1]._padding_ + 4) = 0;
    ((atomic<int> *)&pFVar5[1].DerivedStaticStruct)[1] = (atomic<int>)0x0;
    *(undefined8 *)&pFVar5->DerivedStaticStruct = 0;
    (pFVar5->ViewModelName).ComparisonIndex = 0;
    (pFVar5->ViewModelName).Number = 0;
    pFVar5->ViewModelTemplateKey = None;
    pFVar5->_padding_ = (longlong)&___7FDS_ViewModelContext_Smite__6B_;
    pFVar7 = pFVar5;
  }
  pFVar5 = ::operator_new(0x20);
  if (pFVar5 != (FDS_ViewModelContext *)0x0) {
    *(atomic<int> *)&pFVar5->DerivedStaticStruct = (atomic<int>)0x1;
    *(code **)&(pFVar5->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
    pFVar5->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_Smite__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    ((atomic<int> *)&pFVar5->DerivedStaticStruct)[1] = (atomic<int>)0x1;
    *(FDS_ViewModelContext **)&pFVar5->ViewModelTemplateKey = pFVar7;
    pFVar8 = pFVar5;
  }
  if ((pFVar7 == (FDS_ViewModelContext *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pUVar6 = FDS_ViewModelContext_Smite::StaticStruct();
  *(UScriptStruct **)&pFVar7->DerivedStaticStruct = pUVar6;
  this_00 = UDS_ViewModelContextManager::GetInst();
  if (this_00 != (UDS_ViewModelContextManager *)0x0) {
    if (pFVar8 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar8->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar8->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_40.Object = pFVar7;
    local_40.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar8;
    UDS_ViewModelContextManager::RegisterContext(this_00,&local_40);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40.SharedReferenceCount.ReferenceController);
  }
  pFVar7->ViewModelTemplateKey = W_SmiteEffect;
  pFVar7[1]._padding_ = lVar4;
  *(atomic<int> *)&pFVar7[1].DerivedStaticStruct = (atomic<int>)0x0;
  if (pFVar8 != (FDS_ViewModelContext *)0x0) {
    LOCK();
    *(atomic<int> *)&pFVar8->DerivedStaticStruct =
         (atomic<int>)((int)*(atomic<int> *)&pFVar8->DerivedStaticStruct + 1);
    UNLOCK();
  }
  local_30.Object = pFVar7;
  local_30.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_HUD_SmiteEffect *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_48 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_HUD_SmiteEffect *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_48);
  DS_ViewModelTemplateUtil::BindViewModel
            ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res18,&local_30,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar8);
  return true;
}

