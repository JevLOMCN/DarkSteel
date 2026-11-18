// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b77bf30

UClass * __cdecl UDS_W_LoadingScreen::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_LoadingScreen.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_LoadingScreen",
               &Z_Registration_Info_UClass_UDS_W_LoadingScreen.InnerSingleton,
               StaticRegisterNativesUDS_W_LoadingScreen,0x878,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_W_LoadingScreen>,
               InternalVTableHelperCtorCaller<UDS_W_LoadingScreen>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_LoadingScreen.InnerSingleton;
}

// UDS_W_LoadingScreen @ 14b781e00

UDS_W_LoadingScreen * __thiscall
UDS_W_LoadingScreen::UDS_W_LoadingScreen(UDS_W_LoadingScreen *this,FVTableHelper *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &_vftable__for__UCommonUserWidget__;
  *(undefined ***)&this->field_0x3d0 = &_vftable__for__IUserObjectListEntry__;
  return this;
}

// UDS_W_LoadingScreen @ 14b781e50

UDS_W_LoadingScreen * __thiscall
UDS_W_LoadingScreen::UDS_W_LoadingScreen(UDS_W_LoadingScreen *this,FObjectInitializer *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &_vftable__for__UCommonUserWidget__;
  *(undefined ***)&this->field_0x3d0 = &_vftable__for__IUserObjectListEntry__;
  return this;
}

// ~UDS_W_LoadingScreen @ 14b783200

void __thiscall UDS_W_LoadingScreen::~UDS_W_LoadingScreen(UDS_W_LoadingScreen *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &_vftable__for__UCommonUserWidget__;
  *(undefined ***)&this->field_0x3d0 = &_vftable__for__IUserObjectListEntry__;
  UDS_UserWidget::~UDS_UserWidget((UDS_UserWidget *)this);
  return;
}

// GetPrivateStaticClass @ 14b786020

UClass * __cdecl UDS_W_LoadingScreen::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_LoadingScreen.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_LoadingScreen",
               &Z_Registration_Info_UClass_UDS_W_LoadingScreen.InnerSingleton,
               StaticRegisterNativesUDS_W_LoadingScreen,0x878,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_W_LoadingScreen>,
               InternalVTableHelperCtorCaller<UDS_W_LoadingScreen>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_LoadingScreen.InnerSingleton;
}

// StaticRegisterNativesUDS_W_LoadingScreen @ 14b7865b0

void __cdecl UDS_W_LoadingScreen::StaticRegisterNativesUDS_W_LoadingScreen(void)

{
  return;
}

// NativeConstruct @ 14bcab5a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_W_LoadingScreen::NativeConstruct(UDS_W_LoadingScreen *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  UWidgetAnimation *pUVar3;
  FWidgetAnimationHandle FStack_18;
  
  UUserWidget::NativeConstruct((UUserWidget *)this);
  UDS_UserWidget::CollectChildUserWidget((UDS_UserWidget *)this);
  if ((this->field_0x4f8 != '\0') && (*(longlong *)&this->field_0x4fc != 0)) {
    pUVar3 = UDS_UserWidget::GetAnimation((UDS_UserWidget *)this,(FName *)&this->field_0x4fc);
    if (pUVar3 != (UWidgetAnimation *)0x0) {
      UUserWidget::PlayAnimation
                ((UUserWidget *)this,&FStack_18,pUVar3,0.0,(uint)(this->field_0x504 != '\x01'),
                 Forward,__real_3f800000,false);
      if (FStack_18.WeakState.WeakReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(FStack_18.WeakState.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((FStack_18.WeakState.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (FStack_18.WeakState.WeakReferenceCount.ReferenceController,1);
        }
      }
    }
  }
  return;
}

// NativeTick @ 14bcaed40

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
UDS_W_LoadingScreen::NativeTick(UDS_W_LoadingScreen *this,FGeometry *param_1,float param_2)

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

// OnCloseInit @ 14bcb2670

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_LoadingScreen::OnCloseInit(UDS_W_LoadingScreen *this)

{
  undefined1 *puVar1;
  void *_Dst;
  FObjectPtr_u_0 *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UObject *pUVar6;
  UMVVMView *pUVar7;
  UClass *pUVar8;
  int iVar9;
  uint uVar10;
  FObjectPtr_u_0 *this_00;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  FWeakObjectPtr FStackX_8;
  FFieldId FStack_38;
  
  uVar10 = 0;
  iVar13 = *(int *)&this->field_0x438;
  if (0 < iVar13) {
    puVar1 = &this->field_0x430;
    lVar12 = 0;
    do {
      uVar11 = ~uVar10 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar10 < *(int *)&this->field_0x438) {
        uVar5 = uVar11;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FStackX_8 = *(FWeakObjectPtr *)(*(longlong *)puVar1 + lVar12);
      bVar4 = TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> *)&FStackX_8,(void *)0x0);
      if (bVar4) {
        uVar5 = 0;
        if ((int)uVar10 < *(int *)&this->field_0x438) {
          uVar5 = uVar11;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        _Dst = (void *)(*(longlong *)puVar1 + (longlong)(int)uVar10 * 8);
        iVar9 = *(int *)&this->field_0x438 + ~uVar10;
        if (iVar9 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar9 << 3);
        }
        *(int *)&this->field_0x438 = *(int *)&this->field_0x438 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,(ForAnyElementType *)puVar1,*(int *)&this->field_0x438,
                   (int *)&this->field_0x43c);
        uVar10 = uVar10 - 1;
        lVar12 = lVar12 + -8;
        iVar13 = iVar13 + -1;
      }
      else {
        pUVar6 = FWeakObjectPtr::Get(&FStackX_8);
        (**(code **)(*(longlong *)pUVar6 + 0x4e8))(pUVar6);
      }
      uVar10 = uVar10 + 1;
      lVar12 = lVar12 + 8;
    } while ((int)uVar10 < iVar13);
  }
  FStack_38.FieldName = UDS_UserWidget::FFieldNotificationClassDescriptor::CloseEvent.FieldName;
  FStack_38.BitNumber = UDS_UserWidget::FFieldNotificationClassDescriptor::CloseEvent.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->field_0x28,&FStack_38);
  pUVar7 = UMVVMSubsystem::GetViewFromUserWidget((UUserWidget *)this);
  if (pUVar7 != (UMVVMView *)0x0) {
    iVar13 = (pUVar7->Sources).ArrayNum;
    this_00 = (FObjectPtr_u_0 *)(pUVar7->Sources).AllocatorInstance.Data;
    if ((iVar13 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar2 = this_00 + (longlong)iVar13 * 3;
    for (; this_00 != pFVar2; this_00 = this_00 + 3) {
      if (this_00->Handle != (UObject *)0x0) {
        pUVar8 = Z_Construct_UClass_UDS_ViewModelBase_NoRegister();
        bVar4 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar8);
        if ((bVar4) && (this_00->Handle != (UObject *)0x0)) {
          (**(code **)(*(longlong *)this_00->Handle + 0x2b0))();
        }
      }
    }
  }
  return;
}

// OnOpenInit @ 14bcb8250

void __thiscall UDS_W_LoadingScreen::OnOpenInit(UDS_W_LoadingScreen *this)

{
  undefined1 *puVar1;
  void *_Dst;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UObject *pUVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  FWeakObjectPtr FStackX_8;
  
  iVar10 = *(int *)&this->field_0x438;
  uVar7 = 0;
  if (0 < iVar10) {
    lVar9 = 0;
    puVar1 = &this->field_0x430;
    do {
      uVar8 = ~uVar7 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar7 < *(int *)&this->field_0x438) {
        uVar4 = uVar8;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FStackX_8 = *(FWeakObjectPtr *)(*(longlong *)puVar1 + lVar9);
      bVar3 = TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> *)&FStackX_8,(void *)0x0);
      if (bVar3) {
        uVar4 = 0;
        if ((int)uVar7 < *(int *)&this->field_0x438) {
          uVar4 = uVar8;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        _Dst = (void *)(*(longlong *)puVar1 + (longlong)(int)uVar7 * 8);
        iVar6 = *(int *)&this->field_0x438 + ~uVar7;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar6 << 3);
        }
        *(int *)&this->field_0x438 = *(int *)&this->field_0x438 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,(ForAnyElementType *)puVar1,*(int *)&this->field_0x438,
                   (int *)&this->field_0x43c);
        uVar7 = uVar7 - 1;
        lVar9 = lVar9 + -8;
        iVar10 = iVar10 + -1;
      }
      else {
        pUVar5 = FWeakObjectPtr::Get(&FStackX_8);
        (**(code **)(*(longlong *)pUVar5 + 0x4e0))(pUVar5);
      }
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar7 < iVar10);
  }
  return;
}

