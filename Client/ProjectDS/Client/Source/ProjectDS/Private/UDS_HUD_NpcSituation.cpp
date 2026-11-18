// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b4ac830

UClass * __cdecl UDS_HUD_NpcSituation::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_HUD_NpcSituation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_HUD_NpcSituation",
               &Z_Registration_Info_UClass_UDS_HUD_NpcSituation.InnerSingleton,
               StaticRegisterNativesUDS_HUD_NpcSituation,0x878,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_HUD_NpcSituation>,
               InternalVTableHelperCtorCaller<UDS_HUD_NpcSituation>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_HUD_NpcSituation.InnerSingleton;
}

// UDS_HUD_NpcSituation @ 14b4b1e40

UDS_HUD_NpcSituation * __thiscall
UDS_HUD_NpcSituation::UDS_HUD_NpcSituation(UDS_HUD_NpcSituation *this,FVTableHelper *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &_vftable__for__UCommonUserWidget__;
  *(undefined ***)&this->field_0x3d0 = &_vftable__for__IUserObjectListEntry__;
  return this;
}

// UDS_HUD_NpcSituation @ 14b4b1e90

UDS_HUD_NpcSituation * __thiscall
UDS_HUD_NpcSituation::UDS_HUD_NpcSituation(UDS_HUD_NpcSituation *this,FObjectInitializer *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &_vftable__for__UCommonUserWidget__;
  *(undefined ***)&this->field_0x3d0 = &_vftable__for__IUserObjectListEntry__;
  return this;
}

// ~UDS_HUD_NpcSituation @ 14b4b3490

void __thiscall UDS_HUD_NpcSituation::~UDS_HUD_NpcSituation(UDS_HUD_NpcSituation *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &_vftable__for__UCommonUserWidget__;
  *(undefined ***)&this->field_0x3d0 = &_vftable__for__IUserObjectListEntry__;
  UDS_UserWidget::~UDS_UserWidget((UDS_UserWidget *)this);
  return;
}

// GetPrivateStaticClass @ 14b4b6ea0

UClass * __cdecl UDS_HUD_NpcSituation::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_HUD_NpcSituation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_HUD_NpcSituation",
               &Z_Registration_Info_UClass_UDS_HUD_NpcSituation.InnerSingleton,
               StaticRegisterNativesUDS_HUD_NpcSituation,0x878,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_HUD_NpcSituation>,
               InternalVTableHelperCtorCaller<UDS_HUD_NpcSituation>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_HUD_NpcSituation.InnerSingleton;
}

// StaticRegisterNativesUDS_HUD_NpcSituation @ 14b4b8490

void __cdecl UDS_HUD_NpcSituation::StaticRegisterNativesUDS_HUD_NpcSituation(void)

{
  return;
}

// InitWithData @ 14c08d230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UDS_HUD_NpcSituation::InitWithData(UDS_HUD_NpcSituation *this,FDS_WidgetContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FDS_EntityBase *pFVar4;
  UDS_LogManager *pUVar5;
  FDS_ViewModelContext *pFVar6;
  UScriptStruct *pUVar7;
  UDS_ViewModelContextManager *this_00;
  UObject *pUVar8;
  FDS_ViewModelContext *pFVar9;
  FDS_ViewModelContext *pFVar10;
  undefined1 auStackY_1c8 [32];
  FWeakObjectPtr local_190;
  FWeakObjectPtr local_188;
  ulong64 local_180;
  FName local_178;
  UDS_HUD_NpcSituation *local_170;
  TSharedPtr<FDS_ViewModelContext,1> local_168;
  TSharedPtr<FDS_ViewModelContext,1> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  bVar2 = UDS_UserWidget::InitWithData((UDS_UserWidget *)this,param_1);
  if (bVar2) {
    ::FName::FName(&local_178,"entityID");
    local_180 = FDS_WidgetContext::GetUint64(param_1,&local_178);
    pFVar4 = FDS_EntityBase::GetEntityBase(&local_180);
    if (pFVar4 != (FDS_EntityBase *)0x0) {
      UDS_AbilityDataSet::GetAbilityData<UDS_TamingNPCAbilityData>
                ((ulong64 *)&local_190,(EDS_AbilityTagType *)&local_180);
      pFVar6 = ::operator_new(0x28);
      pFVar10 = (FDS_ViewModelContext *)0x0;
      pFVar9 = pFVar10;
      if (pFVar6 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar6->ViewModelTemplateKey = 0;
        *(undefined2 *)((longlong)&pFVar6[1]._padding_ + 6) = 0;
        *(undefined8 *)&pFVar6->DerivedStaticStruct = 0;
        (pFVar6->ViewModelName).ComparisonIndex = 0;
        (pFVar6->ViewModelName).Number = 0;
        pFVar6->_padding_ = (longlong)&___7FDS_VMContext_Situation__6B_;
        *(undefined4 *)&pFVar6[1]._padding_ = 0;
        *(undefined2 *)((longlong)&pFVar6[1]._padding_ + 4) = 0;
        pFVar9 = pFVar6;
      }
      pFVar6 = ::operator_new(0x20);
      if (pFVar6 != (FDS_ViewModelContext *)0x0) {
        *(atomic<int> *)&pFVar6->DerivedStaticStruct = (atomic<int>)0x1;
        *(code **)&(pFVar6->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
        pFVar6->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_VMContext_Situation__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        ((atomic<int> *)&pFVar6->DerivedStaticStruct)[1] = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pFVar6->ViewModelTemplateKey = pFVar9;
        pFVar10 = pFVar6;
      }
      if ((pFVar9 == (FDS_ViewModelContext *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      pUVar7 = FDS_VMContext_Situation::StaticStruct();
      *(UScriptStruct **)&pFVar9->DerivedStaticStruct = pUVar7;
      this_00 = UDS_ViewModelContextManager::GetInst();
      if (this_00 != (UDS_ViewModelContextManager *)0x0) {
        if (pFVar10 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar10->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar10->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_168.Object = pFVar9;
        local_168.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
        UDS_ViewModelContextManager::RegisterContext(this_00,&local_168);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_168.SharedReferenceCount.ReferenceController);
      }
      pFVar9->ViewModelTemplateKey = W_Situation;
      pUVar8 = FWeakObjectPtr::Get(&local_190);
      *(undefined4 *)&pFVar9[1]._padding_ = *(undefined4 *)&pUVar8[2].field_0x20;
      pUVar8 = FWeakObjectPtr::Get(&local_190);
      *(undefined1 *)((longlong)&pFVar9[1]._padding_ + 4) = pUVar8[2].field_0x24;
      pUVar8 = FWeakObjectPtr::Get(&local_190);
      *(undefined1 *)((longlong)&pFVar9[1]._padding_ + 5) = pUVar8[2].field_0x25;
      if (pFVar10 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar10->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar10->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_158.Object = pFVar9;
      local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_HUD_NpcSituation *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      local_188.ObjectIndex = 0;
      local_188.ObjectSerialNumber = 0;
      local_170 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_HUD_NpcSituation *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(&local_188,(FObjectPtr)&local_170);
      DS_ViewModelTemplateUtil::BindViewModel
                ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_188,&local_158,false);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar10);
      return true;
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8644344771009052647>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\View\\Hud\\DS_HUD_NpcSituation.cpp"
                       ,0x19,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_HUD_NpcSituation::InitWithData",0x22,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_148.Ptr,0x1a,L"entityBase is nullptr.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  return false;
}

