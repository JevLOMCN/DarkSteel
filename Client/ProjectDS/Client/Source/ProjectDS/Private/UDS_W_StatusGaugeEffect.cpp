// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// SetPercent_WrapperImpl @ 14b7898b0

void __cdecl UDS_W_StatusGaugeEffect::SetPercent_WrapperImpl(void *param_1,void *param_2)

{
  SetPercent(param_1,*(float *)param_2);
  return;
}

// SetGaugeSize_WrapperImpl @ 14b7898c0

void __cdecl UDS_W_StatusGaugeEffect::SetGaugeSize_WrapperImpl(void *param_1,void *param_2)

{
  TVector2<double>_u_0 local_18;
  
  local_18._s_0.X = (double)*(undefined8 *)param_2;
  local_18._s_0.Y = *(double *)((longlong)param_2 + 8);
  SetGaugeSize(param_1,(TVector2<double> *)&local_18._s_0);
  return;
}

// StaticClass @ 14b7898f0

UClass * __cdecl UDS_W_StatusGaugeEffect::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_StatusGaugeEffect.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_StatusGaugeEffect",
               &Z_Registration_Info_UClass_UDS_W_StatusGaugeEffect.InnerSingleton,
               StaticRegisterNativesUDS_W_StatusGaugeEffect,0x890,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_W_StatusGaugeEffect>,
               InternalVTableHelperCtorCaller<UDS_W_StatusGaugeEffect>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_StatusGaugeEffect.InnerSingleton;
}

// UDS_W_StatusGaugeEffect @ 14b78d540

UDS_W_StatusGaugeEffect * __thiscall
UDS_W_StatusGaugeEffect::UDS_W_StatusGaugeEffect
          (UDS_W_StatusGaugeEffect *this,FVTableHelper *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  return this;
}

// ~UDS_W_StatusGaugeEffect @ 14b78e440

void __thiscall UDS_W_StatusGaugeEffect::~UDS_W_StatusGaugeEffect(UDS_W_StatusGaugeEffect *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  UDS_UserWidget::~UDS_UserWidget((UDS_UserWidget *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b78fd50

IClassDescriptor * __thiscall
UDS_W_StatusGaugeEffect::GetFieldNotificationDescriptor(UDS_W_StatusGaugeEffect *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_W_StatusGaugeEffect::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b790730

UClass * __cdecl UDS_W_StatusGaugeEffect::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_StatusGaugeEffect.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_StatusGaugeEffect",
               &Z_Registration_Info_UClass_UDS_W_StatusGaugeEffect.InnerSingleton,
               StaticRegisterNativesUDS_W_StatusGaugeEffect,0x890,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_W_StatusGaugeEffect>,
               InternalVTableHelperCtorCaller<UDS_W_StatusGaugeEffect>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_StatusGaugeEffect.InnerSingleton;
}

// StaticRegisterNativesUDS_W_StatusGaugeEffect @ 14b790c30

void __cdecl UDS_W_StatusGaugeEffect::StaticRegisterNativesUDS_W_StatusGaugeEffect(void)

{
  return;
}

// UDS_W_StatusGaugeEffect @ 14bce5a30

UDS_W_StatusGaugeEffect * __thiscall
UDS_W_StatusGaugeEffect::UDS_W_StatusGaugeEffect
          (UDS_W_StatusGaugeEffect *this,FObjectInitializer *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  return this;
}

// OnOpenInit @ 14bd0f740

void __thiscall UDS_W_StatusGaugeEffect::OnOpenInit(UDS_W_StatusGaugeEffect *this)

{
  longlong *plVar1;
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
  
  iVar10 = (int)this->_padding_;
  uVar7 = 0;
  if (0 < iVar10) {
    lVar9 = 0;
    plVar1 = &this->_padding_;
    do {
      uVar8 = ~uVar7 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar7 < (int)this->_padding_) {
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
      FStackX_8 = *(FWeakObjectPtr *)(*plVar1 + lVar9);
      bVar3 = TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> *)&FStackX_8,(void *)0x0);
      if (bVar3) {
        uVar4 = 0;
        if ((int)uVar7 < (int)this->_padding_) {
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
        _Dst = (void *)(*plVar1 + (longlong)(int)uVar7 * 8);
        iVar6 = (int)this->_padding_ + ~uVar7;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar6 << 3);
        }
        *(int *)&this->_padding_ = (int)this->_padding_ + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,(ForAnyElementType *)plVar1,(int)this->_padding_,
                   (int *)((longlong)&this->_padding_ + 4));
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

// SetGaugeSize @ 14bd1fa80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_StatusGaugeEffect::SetGaugeSize(UDS_W_StatusGaugeEffect *this,TVector2<double> *param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  TVector2<double>_u_0 local_18;
  
  dVar2 = (param_1->field0_0x0)._s_0.X;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  fVar1 = this->Percent;
  (this->GaugeSize).field0_0x0._s_0.X = dVar2;
  (this->GaugeSize).field0_0x0._s_0.Y = dVar3;
  local_18._s_0.Y = 0.0;
  local_18._s_0.X = (double)(float)((double)fVar1 * dVar2);
  UWidget::SetRenderTranslation((UWidget *)this,(TVector2<double> *)&local_18._s_0);
  return;
}

// SetPercent @ 14bd205a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_StatusGaugeEffect::SetPercent(UDS_W_StatusGaugeEffect *this,float param_1)

{
  TVector2<double>_u_0 local_18;
  
  this->Percent = param_1;
  local_18._s_0.Y = 0.0;
  local_18._s_0.X = (double)(float)((double)param_1 * (this->GaugeSize).field0_0x0._s_0.X);
  UWidget::SetRenderTranslation((UWidget *)this,(TVector2<double> *)&local_18._s_0);
  return;
}

// UpdateGaugePosition @ 14bd275f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_StatusGaugeEffect::UpdateGaugePosition(UDS_W_StatusGaugeEffect *this)

{
  TVector2<double>_u_0 local_18;
  
  local_18._s_0.Y = 0.0;
  local_18._s_0.X = (double)(float)((double)this->Percent * (this->GaugeSize).field0_0x0._s_0.X);
  UWidget::SetRenderTranslation((UWidget *)this,(TVector2<double> *)&local_18._s_0);
  return;
}

