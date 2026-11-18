// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b78a450

UClass * __cdecl UDS_W_NameTag_Stuff::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_NameTag_Stuff.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_NameTag_Stuff",
               &Z_Registration_Info_UClass_UDS_W_NameTag_Stuff.InnerSingleton,
               StaticRegisterNativesUDS_W_NameTag_Stuff,0x878,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_W_NameTag_Stuff>,
               InternalVTableHelperCtorCaller<UDS_W_NameTag_Stuff>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_NameTag_Stuff.InnerSingleton;
}

// UDS_W_NameTag_Stuff @ 14b78cf30

UDS_W_NameTag_Stuff * __thiscall
UDS_W_NameTag_Stuff::UDS_W_NameTag_Stuff(UDS_W_NameTag_Stuff *this,FVTableHelper *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &_vftable__for__UCommonUserWidget__;
  *(undefined ***)&this->field_0x3d0 = &_vftable__for__IUserObjectListEntry__;
  return this;
}

// UDS_W_NameTag_Stuff @ 14b78cf80

UDS_W_NameTag_Stuff * __thiscall
UDS_W_NameTag_Stuff::UDS_W_NameTag_Stuff(UDS_W_NameTag_Stuff *this,FObjectInitializer *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &_vftable__for__UCommonUserWidget__;
  *(undefined ***)&this->field_0x3d0 = &_vftable__for__IUserObjectListEntry__;
  return this;
}

// ~UDS_W_NameTag_Stuff @ 14b78e130

void __thiscall UDS_W_NameTag_Stuff::~UDS_W_NameTag_Stuff(UDS_W_NameTag_Stuff *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &_vftable__for__UCommonUserWidget__;
  *(undefined ***)&this->field_0x3d0 = &_vftable__for__IUserObjectListEntry__;
  UDS_UserWidget::~UDS_UserWidget((UDS_UserWidget *)this);
  return;
}

// GetPrivateStaticClass @ 14b790370

UClass * __cdecl UDS_W_NameTag_Stuff::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_NameTag_Stuff.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_NameTag_Stuff",
               &Z_Registration_Info_UClass_UDS_W_NameTag_Stuff.InnerSingleton,
               StaticRegisterNativesUDS_W_NameTag_Stuff,0x878,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_W_NameTag_Stuff>,
               InternalVTableHelperCtorCaller<UDS_W_NameTag_Stuff>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_NameTag_Stuff.InnerSingleton;
}

// StaticRegisterNativesUDS_W_NameTag_Stuff @ 14b790b50

void __cdecl UDS_W_NameTag_Stuff::StaticRegisterNativesUDS_W_NameTag_Stuff(void)

{
  return;
}

// InitWithData @ 14c020e30

bool __thiscall
UDS_W_NameTag_Stuff::InitWithData(UDS_W_NameTag_Stuff *this,FDS_WidgetContext *param_1)

{
  code *pcVar1;
  FDS_ViewModelContext_Entity *pFVar2;
  bool bVar3;
  undefined1 uVar4;
  ulong64 uVar5;
  FWeakObjectPtr local_res18;
  FName local_res20;
  UDS_W_NameTag_Stuff *local_38 [2];
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
  *(undefined4 *)&pFVar2->_padding_ = 0x6d;
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
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_W_NameTag_Stuff *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_38[0] = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_W_NameTag_Stuff *)0x0))
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

// NativeTick @ 14c024cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_W_NameTag_Stuff::NativeTick(UDS_W_NameTag_Stuff *this,FGeometry *param_1,float param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UWorld *this_00;
  FLatentActionManager *this_01;
  UFunction *pUVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_f8 [32];
  longlong lStack_d8;
  longlong lStack_d0;
  undefined1 auStack_c8 [16];
  FGeometry FStack_b8;
  FGeometry FStack_78;
  float fStack_40;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if (this->field_0x360 == '\0') {
    auStack_c8[0] = 0;
    bVar3 = `UUserWidget::NativeTick'::__l3::<lambda_1>::operator()(auStack_c8);
    if (!bVar3) {
      return;
    }
  }
  GInitRunaway();
  uVar7 = 0;
  if (0 < *(int *)&this->field_0x338) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < *(int *)&this->field_0x338) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if (uVar4 == 0) {
        lStack_d8 = (longlong)(int)uVar7;
        lStack_d0 = (longlong)*(int *)&this->field_0x338;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      plVar1 = *(longlong **)(lVar6 + *(longlong *)&this->field_0x330);
      (**(code **)(*plVar1 + 0x2e0))(plVar1,param_1,param_2);
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar7 < *(int *)&this->field_0x338);
  }
  if (*(UUMGSequenceTickManager **)&this->field_0x2f0 != (UUMGSequenceTickManager *)0x0) {
    UUMGSequenceTickManager::OnWidgetTicked
              (*(UUMGSequenceTickManager **)&this->field_0x2f0,(UUserWidget *)this);
  }
  this_00 = (UWorld *)(**(code **)(*(longlong *)this + 0x180))(this);
  if (this_00 != (UWorld *)0x0) {
    this_01 = UWorld::GetLatentActionManager(this_00);
    FLatentActionManager::ProcessLatentActions(this_01,(UObject *)this,param_2);
  }
  if ((this->field_0x348 & 1) != 0) {
    FStack_b8.Size = param_1->Size;
    FStack_b8._8_8_ = *(undefined8 *)&param_1->Scale;
    FStack_b8._16_8_ = *(undefined8 *)((longlong)&(param_1->AbsolutePosition).field0_0x0 + 4);
    FStack_b8._24_8_ = *(undefined8 *)((longlong)&(param_1->Position).field0_0x0 + 4);
    FStack_b8.AccumulatedRenderTransform.M.M._4_8_ =
         *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[0] + 1);
    FStack_b8.AccumulatedRenderTransform._12_8_ =
         *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[1] + 1);
    FStack_b8._48_8_ =
         *(undefined8 *)((longlong)&(param_1->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
    FGeometry::FGeometry(&FStack_78);
    FGeometry::operator=(&FStack_78,&FStack_b8);
    fStack_40 = param_2;
    pUVar5 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_Tick);
    (**(code **)(*(longlong *)this + 0x260))(this,pUVar5,&FStack_78);
  }
  return;
}

// TestFunction @ 14c047dd0

void __thiscall UDS_W_NameTag_Stuff::TestFunction(UDS_W_NameTag_Stuff *this)

{
  return;
}

