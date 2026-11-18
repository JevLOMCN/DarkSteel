// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 25

// SetChannel_WrapperImpl @ 14b457240

void __cdecl UDS_ColorSlider::SetChannel_WrapperImpl(void *param_1,void *param_2)

{
  SetChannel(param_1,*(EDS_ColorChannels *)param_2);
  return;
}

// SetSelectedHSVColor_WrapperImpl @ 14b457250

void __cdecl UDS_ColorSlider::SetSelectedHSVColor_WrapperImpl(void *param_1,void *param_2)

{
  FLinearColor_u_0 local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)((longlong)param_2 + 8);
  SetSelectedHSVColor(param_1,(FLinearColor *)&local_18._s_0);
  return;
}

// SetValue_WrapperImpl @ 14b457280

void __cdecl UDS_ColorSlider::SetValue_WrapperImpl(void *param_1,void *param_2)

{
  SetValue(param_1,*(float *)param_2);
  return;
}

// SetSelectorThickness_WrapperImpl @ 14b457290

void __cdecl UDS_ColorSlider::SetSelectorThickness_WrapperImpl(void *param_1,void *param_2)

{
  SetSelectorThickness(param_1,*(float *)param_2);
  return;
}

// SetOrientation_WrapperImpl @ 14b4572a0

void __cdecl UDS_ColorSlider::SetOrientation_WrapperImpl(void *param_1,void *param_2)

{
  SetOrientation(param_1,(uint)*(byte *)param_2);
  return;
}

// StaticClass @ 14b4572b0

UClass * __cdecl UDS_ColorSlider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ColorSlider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ColorSlider",
               &Z_Registration_Info_UClass_UDS_ColorSlider.InnerSingleton,
               StaticRegisterNativesUDS_ColorSlider,0x1e0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_ColorSlider>,InternalVTableHelperCtorCaller<UDS_ColorSlider>
               ,local_res8,UWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ColorSlider.InnerSingleton;
}

// UDS_ColorSlider @ 14b45c630

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_ColorSlider * __thiscall
UDS_ColorSlider::UDS_ColorSlider(UDS_ColorSlider *this,FVTableHelper *param_1)

{
  FLinearColor FVar1;
  
  UWidget::UWidget((UWidget *)this,param_1);
  this->Channel = Alpha;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  FVar1 = FLinearColor::Blue;
  this->Value = 1.0;
  this->SelectorThickness = 6.0;
  (this->SelectedHSVColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->MyColorSlider).Object = (SDS_ColorSlider *)0x0;
  (this->MyColorSlider).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Orientation).Value = '\0';
  return this;
}

// UDS_ColorSlider @ 14b45c6b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_ColorSlider * __thiscall
UDS_ColorSlider::UDS_ColorSlider(UDS_ColorSlider *this,FObjectInitializer *param_1)

{
  FLinearColor FVar1;
  
  UWidget::UWidget((UWidget *)this,param_1);
  this->Channel = Alpha;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  FVar1 = FLinearColor::Blue;
  this->Value = 1.0;
  this->SelectorThickness = 6.0;
  (this->SelectedHSVColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->MyColorSlider).Object = (SDS_ColorSlider *)0x0;
  (this->MyColorSlider).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Orientation).Value = '\0';
  return this;
}

// ~UDS_ColorSlider @ 14b45d010

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_ColorSlider::~UDS_ColorSlider(UDS_ColorSlider *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyColorSlider).SharedReferenceCount.ReferenceController);
  UWidget::~UWidget((UWidget *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b45e120

IClassDescriptor * __thiscall UDS_ColorSlider::GetFieldNotificationDescriptor(UDS_ColorSlider *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_ColorSlider::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b45e800

UClass * __cdecl UDS_ColorSlider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ColorSlider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ColorSlider",
               &Z_Registration_Info_UClass_UDS_ColorSlider.InnerSingleton,
               StaticRegisterNativesUDS_ColorSlider,0x1e0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_ColorSlider>,InternalVTableHelperCtorCaller<UDS_ColorSlider>
               ,local_res8,UWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ColorSlider.InnerSingleton;
}

// StaticRegisterNativesUDS_ColorSlider @ 14b45f220

void __cdecl UDS_ColorSlider::StaticRegisterNativesUDS_ColorSlider(void)

{
  return;
}

// GetGradientColors @ 14bc9fb70

TArray<FLinearColor,TSizedDefaultAllocator<32>_> * __thiscall
UDS_ColorSlider::GetGradientColors
          (UDS_ColorSlider *this,
          TArray<FLinearColor,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FLinearColor *pFVar3;
  longlong lVar4;
  int iVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  FLinearColor_u_0 local_c8;
  FLinearColor_u_0 local_b8 [11];
  
  switch(this->Channel) {
  case Red:
    FLinearColor::HSVToLinearRGB(&this->SelectedHSVColor,(FLinearColor *)&local_c8._s_0);
    uVar15 = 0.0;
    local_b8[0]._4_4_ = 0.0;
    fVar6 = 0.0;
    uVar12 = local_c8._s_0.A;
    uVar11 = local_c8._s_0.B;
    uVar10 = local_c8._s_0.G;
    local_c8._s_0.R = __real_3f800000;
    uVar17 = local_c8._s_0.A;
    break;
  case Green:
    FLinearColor::HSVToLinearRGB(&this->SelectedHSVColor,(FLinearColor *)&local_c8._s_0);
    fVar6 = 0.0;
    local_b8[0]._4_4_ = 0.0;
    local_c8._s_0.G = __real_3f800000;
    uVar15 = local_c8._s_0.R;
    uVar12 = local_c8._s_0.A;
    uVar11 = local_c8._s_0.B;
    uVar10 = 0.0;
    uVar17 = local_c8._s_0.A;
    break;
  case Blue:
    FLinearColor::HSVToLinearRGB(&this->SelectedHSVColor,(FLinearColor *)&local_c8._s_0);
    local_b8[0]._4_4_ = 0.0;
    fVar6 = 0.0;
    local_c8._s_0.B = __real_3f800000;
    uVar15 = local_c8._s_0.R;
    uVar12 = local_c8._s_0.A;
    uVar11 = 0.0;
    uVar10 = local_c8._s_0.G;
    uVar17 = local_c8._s_0.A;
    break;
  case Alpha:
    FLinearColor::HSVToLinearRGB(&this->SelectedHSVColor,(FLinearColor *)&local_c8._s_0);
    local_b8[0]._4_4_ = 0.0;
    fVar6 = 0.0;
    uVar15 = local_c8._s_0.R;
    uVar12 = 0.0;
    uVar11 = local_c8._s_0.B;
    uVar10 = local_c8._s_0.G;
    uVar17 = __real_3f800000;
    break;
  case Hue:
    local_c8._s_0.G = (this->SelectedHSVColor).field0_0x0._s_0.G;
    local_c8._s_0.B = (this->SelectedHSVColor).field0_0x0._s_0.B;
    local_c8._s_0.R = 0.0;
    local_c8._s_0.A = 1.0;
    pFVar3 = FLinearColor::HSVToLinearRGB
                       ((FLinearColor *)&local_c8._s_0,(FLinearColor *)&local_b8[0]._s_0);
    local_c8._s_0.G = (this->SelectedHSVColor).field0_0x0._s_0.G;
    local_c8._s_0.B = (this->SelectedHSVColor).field0_0x0._s_0.B;
    uVar15 = (pFVar3->field0_0x0)._s_0.R;
    uVar10 = (pFVar3->field0_0x0)._s_0.G;
    uVar11 = (pFVar3->field0_0x0)._s_0.B;
    uVar12 = (pFVar3->field0_0x0)._s_0.A;
    local_c8._s_0.R = 360.0;
    local_c8._s_0.A = 1.0;
    pFVar3 = FLinearColor::HSVToLinearRGB
                       ((FLinearColor *)&local_c8._s_0,(FLinearColor *)&local_b8[0]._s_0);
    local_c8._s_0.R = (pFVar3->field0_0x0)._s_0.R;
    local_c8._s_0.G = (pFVar3->field0_0x0)._s_0.G;
    local_c8._s_0.B = (pFVar3->field0_0x0)._s_0.B;
    fVar6 = local_c8._s_0.B;
    local_b8[0]._4_4_ = local_c8._s_0.G;
    uVar17 = (pFVar3->field0_0x0)._s_0.A;
    break;
  case Saturation:
    local_c8._s_0.R = (this->SelectedHSVColor).field0_0x0._s_0.R;
    local_c8._s_0.B = (this->SelectedHSVColor).field0_0x0._s_0.B;
    local_c8._s_0.G = 0.0;
    local_c8._s_0.A = 1.0;
    pFVar3 = FLinearColor::HSVToLinearRGB
                       ((FLinearColor *)&local_c8._s_0,(FLinearColor *)&local_b8[0]._s_0);
    local_c8._s_0.B = (this->SelectedHSVColor).field0_0x0._s_0.B;
    uVar15 = (pFVar3->field0_0x0)._s_0.R;
    uVar10 = (pFVar3->field0_0x0)._s_0.G;
    uVar11 = (pFVar3->field0_0x0)._s_0.B;
    uVar12 = (pFVar3->field0_0x0)._s_0.A;
    local_c8._s_0.G = 1.0;
    goto LAB_14bc9fe2e;
  default:
    local_c8._s_0.R = (this->SelectedHSVColor).field0_0x0._s_0.R;
    local_c8._s_0.G = (this->SelectedHSVColor).field0_0x0._s_0.G;
    local_c8._s_0.B = 0.0;
    local_c8._s_0.A = 1.0;
    pFVar3 = FLinearColor::HSVToLinearRGB
                       ((FLinearColor *)&local_c8._s_0,(FLinearColor *)&local_b8[0]._s_0);
    local_c8._s_0.G = (this->SelectedHSVColor).field0_0x0._s_0.G;
    uVar15 = (pFVar3->field0_0x0)._s_0.R;
    uVar10 = (pFVar3->field0_0x0)._s_0.G;
    uVar11 = (pFVar3->field0_0x0)._s_0.B;
    uVar12 = (pFVar3->field0_0x0)._s_0.A;
    local_c8._s_0.B = 1.0;
LAB_14bc9fe2e:
    local_c8._s_0.R = (this->SelectedHSVColor).field0_0x0._s_0.R;
    local_c8._s_0.A = 1.0;
    pFVar3 = FLinearColor::HSVToLinearRGB
                       ((FLinearColor *)&local_c8._s_0,(FLinearColor *)&local_b8[0]._s_0);
    local_c8._s_0.R = (pFVar3->field0_0x0)._s_0.R;
    local_c8._s_0.G = (pFVar3->field0_0x0)._s_0.G;
    local_c8._s_0.B = (pFVar3->field0_0x0)._s_0.B;
    fVar6 = local_c8._s_0.B;
    local_b8[0]._4_4_ = local_c8._s_0.G;
    uVar17 = (pFVar3->field0_0x0)._s_0.A;
  }
  fVar8 = __real_3dcccccd;
  uVar9 = local_c8._s_0.G - (float)uVar10;
  iVar5 = 0;
  uVar7 = local_c8._s_0.B - (float)uVar11;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  fVar16 = local_c8._s_0.R - (float)uVar15;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_c8._s_0.R = (float)uVar7;
  local_c8._s_0.G = fVar6;
  local_c8._s_0.B = fVar6;
  local_c8._s_0.A = fVar6;
  local_b8[0]._0_4_ = uVar9;
  local_b8[0]._8_4_ = local_b8[0]._4_4_;
  local_b8[0]._12_4_ = local_b8[0]._4_4_;
  do {
    iVar2 = __return_storage_ptr__->ArrayNum;
    fVar6 = (float)iVar5 * fVar8;
    fVar13 = (float)uVar9 * fVar6;
    fVar14 = (float)uVar7 * fVar6;
    if (iVar2 == __return_storage_ptr__->ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
      uVar7 = local_c8._s_0.R;
      fVar8 = __real_3dcccccd;
      uVar9 = local_b8[0]._s_0.R;
    }
    iVar5 = iVar5 + 1;
    __return_storage_ptr__->ArrayNum = iVar2 + 1;
    lVar4 = (longlong)iVar2;
    pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
    *(float *)(pFVar1 + lVar4 * 0x10) = fVar16 * fVar6 + (float)uVar15;
    *(float *)(pFVar1 + lVar4 * 0x10 + 4) = fVar13 + (float)uVar10;
    *(float *)(pFVar1 + lVar4 * 0x10 + 8) = fVar14 + (float)uVar11;
    *(float *)(pFVar1 + lVar4 * 0x10 + 0xc) =
         ((float)uVar17 - (float)uVar12) * fVar6 + (float)uVar12;
  } while (iVar5 < 0xb);
  return __return_storage_ptr__;
}

// GetOrientation @ 14bca13f0

EOrientation __thiscall UDS_ColorSlider::GetOrientation(UDS_ColorSlider *this)

{
  return (EOrientation)(this->Orientation).Value;
}

// GetSelectorThickness @ 14bca1a40

float __thiscall UDS_ColorSlider::GetSelectorThickness(UDS_ColorSlider *this)

{
  return this->SelectorThickness;
}

// GetValue @ 14bca25f0

float __thiscall UDS_ColorSlider::GetValue(UDS_ColorSlider *this)

{
  return this->Value;
}

// OnValueChanged @ 14bcbc9a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_ColorSlider::OnValueChanged(UDS_ColorSlider *this,float param_1)

{
  FFieldId local_18 [2];
  
  if (param_1 != this->Value) {
    this->Value = param_1;
    local_18[0].FieldName = FFieldNotificationClassDescriptor::Value.FieldName;
    local_18[0].BitNumber = FFieldNotificationClassDescriptor::Value.BitNumber;
    UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,local_18);
  }
  return;
}

// RebuildWidget @ 14bcbe6b0

TSharedRef<SWidget,1> * __thiscall
UDS_ColorSlider::RebuildWidget(UDS_ColorSlider *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  TAttribute<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  SDS_ColorSlider *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  char cVar9;
  byte bVar10;
  FArguments *pFVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  TSharedRef<SWidget,1> *pTVar14;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  UDS_ColorSlider *local_res18;
  UDS_ColorSlider *local_res20;
  FMemScope local_7b8;
  undefined4 uStack_7b0;
  undefined4 uStack_7ac;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_7a8;
  FDelegateAllocation local_7a0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_790;
  FDelegateAllocation local_788;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_778;
  FDelegateAllocation local_770;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_760;
  FDelegateAllocation local_758;
  undefined1 local_748 [8];
  FDelegateAllocation local_740;
  float local_730;
  bool local_72c;
  undefined1 local_728 [8];
  ForAnyElementType FStack_720;
  int local_718;
  float local_710;
  bool local_70c;
  undefined1 local_708 [8];
  ForAnyElementType FStack_700;
  int local_6f8;
  EOrientation local_6f0;
  bool local_6ec;
  undefined1 local_6e8 [8];
  ForAnyElementType FStack_6e0;
  int local_6d8;
  ForAnyElementType local_6d0;
  undefined8 local_6c8;
  bool local_6c0;
  undefined1 local_6b8 [8];
  ForAnyElementType FStack_6b0;
  int local_6a8;
  float local_6a0;
  undefined1 local_69c;
  undefined1 local_698 [8];
  ForAnyElementType FStack_690;
  ulonglong local_688;
  TSlateDecl<SDS_ColorSlider,RequiredArgs::T0RequiredArgs> local_680;
  SDS_ColorSlider *local_668;
  FSharedReferencer<1> local_660;
  UDS_ColorSlider *local_658;
  UDS_ColorSlider *local_650;
  UDS_ColorSlider *local_648;
  FName local_640;
  FDestructionSentinel local_638;
  FDestructionSentinel local_620;
  FDestructionSentinel local_608;
  FDestructionSentinel local_5f0;
  FDestructionSentinel local_5d8;
  FDestructionSentinel local_5c0;
  FDestructionSentinel local_5a8;
  FDestructionSentinel local_590;
  FDestructionSentinel local_578;
  FDestructionSentinel local_560;
  FDestructionSentinel local_548;
  FDestructionSentinel local_530;
  FDestructionSentinel local_518;
  FDestructionSentinel local_500;
  FDestructionSentinel local_4e8;
  FDelegateAllocation *local_4d0;
  FDestructionSentinel local_4c8;
  FDelegateAllocation *local_4b0;
  FDestructionSentinel local_4a8;
  FDelegateAllocation *local_490;
  FDestructionSentinel local_488;
  FDelegateAllocation *local_470;
  FDestructionSentinel local_468;
  FDelegateAllocation *local_450;
  FArguments local_448;
  
  pFVar11 = SDS_ColorSlider::FArguments::FArguments(&local_448);
  uStack_7b0 = 0;
  local_760.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_7b8 = (FMemScope)GetValue;
  local_758.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_758.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_760,(FWriteAccessScope *)&local_468);
  local_450 = &local_758;
  puVar12 = UE::Core::Private::DelegateAllocate(0x30,&local_758);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar13;
    *puVar12 = &
               ___7__TBaseUObjectMethodDelegateInstance__00__CBVUDS_ColorSlider____A6AMXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_ColorSlider *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar12[3] = 0;
    local_res18 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_ColorSlider *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar12 + 3),(FObjectPtr)&local_res18);
    *(FMemScope *)(puVar12 + 4) = local_7b8;
    puVar12[5] = CONCAT44(uStack_7ac,uStack_7b0);
  }
  if (local_468.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_468.Accessor,&local_468);
  }
  local_730 = 0.0;
  local_72c = true;
  local_728 = (undefined1  [8])0x0;
  FStack_720.Data = (FScriptContainerElement *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_760,(FWriteAccessScope *)&local_560);
  if (FStack_720.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_720.Data);
  }
  FStack_720.Data = (FScriptContainerElement *)local_758.DelegateAllocator;
  local_718 = local_758.DelegateSize;
  local_758.DelegateSize = 0;
  local_758.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  if (local_560.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_560.Accessor,&local_560);
  }
  (pFVar11->_Value).Value = local_730;
  (pFVar11->_Value).bIsSet = local_72c;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar11->_Value).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_728);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_728,
             (FWriteAccessScope *)&local_548);
  if ((local_718 != 0) &&
     ((ForElementType<TAlignedBytes<16,16>_>)FStack_720.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_720.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_720,0,0,0x10);
    local_718 = 0;
  }
  if (local_548.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_548.Accessor,&local_548);
  }
  if ((ForElementType<TAlignedBytes<16,16>_>)FStack_720.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free(FStack_720.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_728);
  local_69c = 1;
  local_6a0 = __real_3a83126f;
  local_688 = 0;
  local_698 = (undefined1  [8])0x0;
  FStack_690.Data = (FScriptContainerElement *)0x0;
  (pFVar11->_Delta).Value = __real_3a83126f;
  (pFVar11->_Delta).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar11->_Delta).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_698);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_698,
             (FWriteAccessScope *)&local_530);
  if (((int)local_688 != 0) && (FStack_690.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_690.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_690,0,0,0x10);
    local_688 = local_688 & 0xffffffff00000000;
  }
  if (local_530.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_530.Accessor,&local_530);
  }
  if (FStack_690.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_690.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_698);
  uStack_7b0 = 0;
  local_7b8 = (FMemScope)GetSelectorThickness;
  local_778.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_770.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_770.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_778,(FWriteAccessScope *)&local_4e8);
  local_4d0 = &local_770;
  puVar12 = UE::Core::Private::DelegateAllocate(0x30,&local_770);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar13;
    *puVar12 = &
               ___7__TBaseUObjectMethodDelegateInstance__00__CBVUDS_ColorSlider____A6AMXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_ColorSlider *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar12[3] = 0;
    local_res20 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_ColorSlider *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar12 + 3),(FObjectPtr)&local_res20);
    *(FMemScope *)(puVar12 + 4) = local_7b8;
    puVar12[5] = CONCAT44(uStack_7ac,uStack_7b0);
  }
  if (local_4e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4e8.Accessor,&local_4e8);
  }
  local_710 = 0.0;
  local_70c = true;
  local_708 = (undefined1  [8])0x0;
  FStack_700.Data = (FScriptContainerElement *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_778,(FWriteAccessScope *)&local_518);
  if (FStack_700.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_700.Data);
  }
  FStack_700.Data = (FScriptContainerElement *)local_770.DelegateAllocator;
  local_6f8 = local_770.DelegateSize;
  local_770.DelegateSize = 0;
  local_770.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  if (local_518.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_518.Accessor,&local_518);
  }
  (pFVar11->_SelectorThickness).Value = local_710;
  (pFVar11->_SelectorThickness).bIsSet = local_70c;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar11->_SelectorThickness).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_708);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_708,
             (FWriteAccessScope *)&local_500);
  if ((local_6f8 != 0) &&
     ((ForElementType<TAlignedBytes<16,16>_>)FStack_700.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_700.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_700,0,0,0x10);
    local_6f8 = 0;
  }
  if (local_500.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_500.Accessor,&local_500);
  }
  if ((ForElementType<TAlignedBytes<16,16>_>)FStack_700.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free(FStack_700.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_708);
  uStack_7b0 = 0;
  local_7b8 = (FMemScope)GetOrientation;
  local_790.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_788.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_788.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_790,(FWriteAccessScope *)&local_4c8);
  local_4b0 = &local_788;
  puVar12 = UE::Core::Private::DelegateAllocate(0x30,&local_788);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &
               ___7__TCommonDelegateInstanceState___A6A_AW4EOrientation__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar13;
    *puVar12 = &
               ___7__TBaseUObjectMethodDelegateInstance__00__CBVUDS_ColorSlider____A6A_AW4EOrientation__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_ColorSlider *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar12[3] = 0;
    local_658 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_ColorSlider *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar12 + 3),(FObjectPtr)&local_658);
    *(FMemScope *)(puVar12 + 4) = local_7b8;
    puVar12[5] = CONCAT44(uStack_7ac,uStack_7b0);
  }
  if (local_4c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4c8.Accessor,&local_4c8);
  }
  local_6f0 = Orient_Horizontal;
  local_6ec = true;
  local_6e8 = (undefined1  [8])0x0;
  FStack_6e0.Data = (FScriptContainerElement *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_790,(FWriteAccessScope *)&local_638);
  if (FStack_6e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_6e0.Data);
  }
  FStack_6e0.Data = (FScriptContainerElement *)local_788.DelegateAllocator;
  local_6d8 = local_788.DelegateSize;
  local_788.DelegateSize = 0;
  local_788.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  if (local_638.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_638.Accessor,&local_638);
  }
  (pFVar11->_Orientation).Value = local_6f0;
  (pFVar11->_Orientation).bIsSet = local_6ec;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar11->_Orientation).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_6e8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_6e8,
             (FWriteAccessScope *)&local_620);
  if ((local_6d8 != 0) &&
     ((ForElementType<TAlignedBytes<16,16>_>)FStack_6e0.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_6e0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_6e0,0,0,0x10);
    local_6d8 = 0;
  }
  if (local_620.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_620.Accessor,&local_620);
  }
  if ((ForElementType<TAlignedBytes<16,16>_>)FStack_6e0.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free(FStack_6e0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6e8);
  uStack_7b0 = 0;
  local_7b8 = (FMemScope)GetGradientColors;
  local_7a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_7a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_7a0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_7a8,(FWriteAccessScope *)&local_4a8);
  local_490 = &local_7a0;
  puVar12 = UE::Core::Private::DelegateAllocate(0x30,&local_7a0);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TArray_UFLinearColor__V__TSizedDefaultAllocator__0CA_____XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar13;
    *puVar12 = &
               ___7__TBaseUObjectMethodDelegateInstance__00__CBVUDS_ColorSlider____A6A_AV__TArray_UFLinearColor__V__TSizedDefaultAllocator__0CA_____XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_ColorSlider *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar12[3] = 0;
    local_650 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_ColorSlider *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar12 + 3),(FObjectPtr)&local_650);
    *(FMemScope *)(puVar12 + 4) = local_7b8;
    puVar12[5] = CONCAT44(uStack_7ac,uStack_7b0);
  }
  if (local_4a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4a8.Accessor,&local_4a8);
  }
  local_6d0.Data = (FScriptContainerElement *)0x0;
  local_6c8 = 0;
  local_6c0 = true;
  local_6b8 = (undefined1  [8])0x0;
  FStack_6b0.Data = (FScriptContainerElement *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_7a8,(FWriteAccessScope *)&local_608);
  if (FStack_6b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_6b0.Data);
  }
  FStack_6b0.Data = (FScriptContainerElement *)local_7a0.DelegateAllocator;
  local_6a8 = local_7a0.DelegateSize;
  local_7a0.DelegateSize = 0;
  local_7a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  if (local_608.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_608.Accessor,&local_608);
  }
  pTVar2 = &pFVar11->_GradientColors;
  if (pTVar2 != (TAttribute<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> *)&local_6d0) {
    pFVar3 = (pTVar2->Value).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->Value).AllocatorInstance.Data = local_6d0.Data;
    local_6d0.Data = (FScriptContainerElement *)0x0;
    (pFVar11->_GradientColors).Value.ArrayNum = (int)local_6c8;
    (pFVar11->_GradientColors).Value.ArrayMax = local_6c8._4_4_;
    local_6c8 = 0;
  }
  (pFVar11->_GradientColors).bIsSet = local_6c0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar11->_GradientColors).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_6b8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_6b8,
             (FWriteAccessScope *)&local_5f0);
  if ((local_6a8 != 0) &&
     ((ForElementType<TAlignedBytes<16,16>_>)FStack_6b0.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_6b0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_6b0,0,0,0x10);
    local_6a8 = 0;
  }
  if (local_5f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5f0.Accessor,&local_5f0);
  }
  if ((ForElementType<TAlignedBytes<16,16>_>)FStack_6b0.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free(FStack_6b0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6b8);
  if (local_6d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6d0.Data);
  }
  uStack_7b0 = 0;
  local_7b8 = (FMemScope)OnValueChanged;
  local_748 = (undefined1  [8])0x0;
  local_740.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_740.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_748,
             (FWriteAccessScope *)&local_488);
  local_470 = &local_740;
  puVar12 = UE::Core::Private::DelegateAllocate(0x30,&local_740);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar13;
    *puVar12 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_ColorSlider____A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_ColorSlider *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar12[3] = 0;
    local_648 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_ColorSlider *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar12 + 3),(FObjectPtr)&local_648);
    *(FMemScope *)(puVar12 + 4) = local_7b8;
    puVar12[5] = CONCAT44(uStack_7ac,uStack_7b0);
  }
  if (local_488.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_488.Accessor,&local_488);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar11->_OnValueChanged,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_748);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_640 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_7b8,&local_640,true);
  TSlateDecl<SDS_ColorSlider,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SDS_ColorSlider,RequiredArgs::T0RequiredArgs>
            (&local_680,"SDS_ColorSlider",
             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\BaseWidget\\DS_ColorSlider.cpp"
             ,8,local_res8);
  FMemScope::~FMemScope(&local_7b8);
  FLLMScope::~FLLMScope(local_res10);
  pSVar4 = local_680._Widget.Object;
  if (local_680._Widget.Object == (SDS_ColorSlider *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pTVar14 = (TSharedRef<SWidget,1> *)(*pcVar6)();
      return pTVar14;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_680._Widget.Object,(FSlateBaseNamedArgs *)pFVar11);
  SDS_ColorSlider::Construct(local_680._Widget.Object,pFVar11);
  if (local_680._Widget.Object == (SDS_ColorSlider *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pTVar14 = (TSharedRef<SWidget,1> *)(*pcVar6)();
      return pTVar14;
    }
  }
  if (((local_680._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar9 = (**(code **)((local_680._Widget.Object)->_padding_ + 0x228))(local_680._Widget.Object);
    bVar10 = 0;
    if (cVar9 == '\0') goto LAB_14bcbf159;
  }
  bVar10 = 0x20;
LAB_14bcbf159:
  *(byte *)&(local_680._Widget.Object)->_padding_ =
       (byte)(local_680._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_680._Widget.Object)->_padding_ =
       (byte)(local_680._Widget.Object)->_padding_ | bVar10;
  if (local_680._Widget.Object == (SDS_ColorSlider *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pTVar14 = (TSharedRef<SWidget,1> *)(*pcVar6)();
      return pTVar14;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_680._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_680._Widget.Object == (SDS_ColorSlider *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pTVar14 = (TSharedRef<SWidget,1> *)(*pcVar6)();
      return pTVar14;
    }
  }
  FVar7.ReferenceController = local_680._Widget.SharedReferenceCount.ReferenceController;
  local_680._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_680._Widget.Object = (SDS_ColorSlider *)0x0;
  if (pSVar4 == (SDS_ColorSlider *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pTVar14 = (TSharedRef<SWidget,1> *)(*pcVar6)();
      return pTVar14;
    }
  }
  local_668 = pSVar4;
  local_660.ReferenceController = FVar7.ReferenceController;
  if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar7.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->MyColorSlider != (TSharedPtr<SDS_ColorSlider,1> *)&local_668) {
    (this->MyColorSlider).Object = pSVar4;
    local_668 = (SDS_ColorSlider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyColorSlider).SharedReferenceCount,&local_660);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_660.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_748,
             (FWriteAccessScope *)&local_5d8);
  if ((local_740.DelegateSize != 0) &&
     (local_740.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_740.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_740,0,0,0x10);
    local_740.DelegateSize = 0;
  }
  if (local_5d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5d8.Accessor,&local_5d8);
  }
  if (local_740.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_740.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_748);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_7a8,(FWriteAccessScope *)&local_5c0);
  if ((local_7a0.DelegateSize != 0) &&
     (local_7a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_7a0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_7a0,0,0,0x10);
    local_7a0.DelegateSize = 0;
  }
  if (local_5c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5c0.Accessor,&local_5c0);
  }
  if (local_7a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_7a0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_7a8.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_790,(FWriteAccessScope *)&local_5a8);
  if ((local_788.DelegateSize != 0) &&
     (local_788.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_788.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_788,0,0,0x10);
    local_788.DelegateSize = 0;
  }
  if (local_5a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5a8.Accessor,&local_5a8);
  }
  if (local_788.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_788.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_790.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_778,(FWriteAccessScope *)&local_590);
  if ((local_770.DelegateSize != 0) &&
     (local_770.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_770.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_770,0,0,0x10);
    local_770.DelegateSize = 0;
  }
  if (local_590.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_590.Accessor,&local_590);
  }
  if (local_770.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_770.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_778.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_760,(FWriteAccessScope *)&local_578);
  if ((local_758.DelegateSize != 0) &&
     (local_758.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_758.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_758,0,0,0x10);
    local_758.DelegateSize = 0;
  }
  if (local_578.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_578.Accessor,&local_578);
  }
  if (local_758.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_758.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_760.AccessDetector);
  SDS_ColorSlider::FArguments::~FArguments(&local_448);
  if ((this->MyColorSlider).Object == (SDS_ColorSlider *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pTVar14 = (TSharedRef<SWidget,1> *)(*pcVar6)();
      return pTVar14;
    }
  }
  pSVar4 = (this->MyColorSlider).Object;
  pTVar5 = (this->MyColorSlider).SharedReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar4 == (SDS_ColorSlider *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pTVar14 = (TSharedRef<SWidget,1> *)(*pcVar6)();
      return pTVar14;
    }
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar4;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 14bcc39e0

void __thiscall UDS_ColorSlider::ReleaseSlateResources(UDS_ColorSlider *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyColorSlider != (TSharedPtr<SDS_ColorSlider,1> *)&local_18) {
    (this->MyColorSlider).Object = (SDS_ColorSlider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyColorSlider).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  UVisual::ReleaseSlateResources((UVisual *)this,param_1);
  return;
}

// SetChannel @ 14bcc5400

void __thiscall UDS_ColorSlider::SetChannel(UDS_ColorSlider *this,EDS_ColorChannels param_1)

{
  SDS_ColorSlider *this_00;
  
  this->Channel = param_1;
  this->Value = 1.0;
  this_00 = (this->MyColorSlider).Object;
  if (this_00 != (SDS_ColorSlider *)0x0) {
    SWidget::Invalidate((SWidget *)this_00,Paint);
    return;
  }
  return;
}

// SetOrientation @ 14bcc7e10

void __thiscall UDS_ColorSlider::SetOrientation(UDS_ColorSlider *this,EOrientation param_1)

{
  (this->Orientation).Value = (uchar)param_1;
  return;
}

// SetSelectedHSVColor @ 14bcc87a0

void __thiscall UDS_ColorSlider::SetSelectedHSVColor(UDS_ColorSlider *this,FLinearColor *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->SelectedHSVColor).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  *(undefined8 *)((longlong)&(this->SelectedHSVColor).field0_0x0 + 8) = uVar1;
  return;
}

// SetSelectorThickness @ 14bcc8800

void __thiscall UDS_ColorSlider::SetSelectorThickness(UDS_ColorSlider *this,float param_1)

{
  this->SelectorThickness = param_1;
  return;
}

// SetValue @ 14bcc9420

void __thiscall UDS_ColorSlider::SetValue(UDS_ColorSlider *this,float param_1)

{
  this->Value = param_1;
  return;
}

// SynchronizeProperties @ 14bcca5a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_ColorSlider::SynchronizeProperties(UDS_ColorSlider *this)

{
  SDS_ColorSlider *this_00;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  this_00 = (this->MyColorSlider).Object;
  if (this_00 != (SDS_ColorSlider *)0x0) {
    SWidget::Invalidate((SWidget *)this_00,Paint);
    return;
  }
  return;
}

