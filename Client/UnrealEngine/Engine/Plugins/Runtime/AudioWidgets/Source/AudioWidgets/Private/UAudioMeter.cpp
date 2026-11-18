// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 28

// StaticClass @ 14d891a80

UClass * __cdecl UAudioMeter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioMeter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioMeter",
               &Z_Registration_Info_UClass_UAudioMeter.InnerSingleton,
               StaticRegisterNativesUAudioMeter,0x6a0,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioMeter>,InternalVTableHelperCtorCaller<UAudioMeter>,
               local_res8,UWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioMeter.InnerSingleton;
}

// UAudioMeter @ 14d8b9430

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UAudioMeter * __thiscall UAudioMeter::UAudioMeter(UAudioMeter *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  (this->MeterChannelInfo).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  (this->MeterChannelInfo).ArrayNum = 0;
  (this->MeterChannelInfo).ArrayMax = 0;
  *(undefined8 *)&this->MeterChannelInfoDelegate = 0;
  *(undefined8 *)&(this->MeterChannelInfoDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->MeterChannelInfoDelegate).field_0x10 = 0;
  FAudioMeterStyle::FAudioMeterStyle(&this->WidgetStyle);
  (this->MyAudioMeter).Object = (SAudioMeter *)0x0;
  (this->MyAudioMeter).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  return this;
}

// UAudioMeter @ 14d8b94b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UAudioMeter * __thiscall UAudioMeter::UAudioMeter(UAudioMeter *this,FObjectInitializer *param_1)

{
  TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UAudioMeter *pUVar6;
  FAudioWidgetsStyle *pFVar7;
  FName *pFVar8;
  FAudioMeterStyle *pFVar9;
  FName local_res8;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  
  UWidget::UWidget((UWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  pTVar1 = &this->MeterChannelInfo;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  (this->MeterChannelInfo).ArrayNum = 0;
  (this->MeterChannelInfo).ArrayMax = 0;
  *(undefined8 *)&this->MeterChannelInfoDelegate = 0;
  *(undefined8 *)&(this->MeterChannelInfoDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->MeterChannelInfoDelegate).field_0x10 = 0;
  FAudioMeterStyle::FAudioMeterStyle(&this->WidgetStyle);
  (this->MyAudioMeter).Object = (SAudioMeter *)0x0;
  (this->MyAudioMeter).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->Orientation).Value = '\x01';
  (this->BackgroundColor).field0_0x0._s_0.R = 0.0075;
  (this->BackgroundColor).field0_0x0._s_0.G = 0.0075;
  (this->BackgroundColor).field0_0x0._s_0.B = 0.0075;
  (this->BackgroundColor).field0_0x0._s_0.A = 1.0;
  (this->MeterBackgroundColor).field0_0x0._s_0.R = 0.031;
  (this->MeterBackgroundColor).field0_0x0._s_0.G = 0.031;
  (this->MeterBackgroundColor).field0_0x0._s_0.B = 0.031;
  (this->MeterBackgroundColor).field0_0x0._s_0.A = 1.0;
  (this->MeterValueColor).field0_0x0._s_0.R = 0.025719;
  (this->MeterValueColor).field0_0x0._s_0.G = 0.208333;
  (this->MeterValueColor).field0_0x0._s_0.B = 0.069907;
  (this->MeterValueColor).field0_0x0._s_0.A = 1.0;
  (this->MeterPeakColor).field0_0x0._s_0.R = 0.24349;
  (this->MeterPeakColor).field0_0x0._s_0.G = 0.708333;
  (this->MeterPeakColor).field0_0x0._s_0.B = 0.357002;
  (this->MeterPeakColor).field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->MeterClippingColor).field0_0x0 = 0x3f800000;
  (this->MeterClippingColor).field0_0x0._s_0.B = 0.112334;
  (this->MeterClippingColor).field0_0x0._s_0.A = 1.0;
  (this->MeterScaleColor).field0_0x0._s_0.R = 0.017642;
  (this->MeterScaleColor).field0_0x0._s_0.G = 0.017642;
  (this->MeterScaleColor).field0_0x0._s_0.B = 0.017642;
  (this->MeterScaleColor).field0_0x0._s_0.A = 1.0;
  (this->MeterScaleLabelColor).field0_0x0._s_0.R = 0.442708;
  (this->MeterScaleLabelColor).field0_0x0._s_0.G = 0.442708;
  (this->MeterScaleLabelColor).field0_0x0._s_0.B = 0.442708;
  (this->MeterScaleLabelColor).field0_0x0._s_0.A = 1.0;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  local_20 = 0;
  local_28 = 0xc0c00000;
  uStack_24 = 0xc0400000;
  if ((pFVar2 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar2 + (longlong)(this->MeterChannelInfo).ArrayMax * 0xc)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (UAudioMeter *)(*pcVar3)();
      return pUVar6;
    }
  }
  iVar5 = (this->MeterChannelInfo).ArrayNum;
  if (iVar5 == (this->MeterChannelInfo).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&pTVar1->AllocatorInstance,&(this->MeterChannelInfo).ArrayMax);
  }
  (this->MeterChannelInfo).ArrayNum = iVar5 + 1;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  *(ulonglong *)(pFVar2 + (longlong)iVar5 * 0xc) = CONCAT44(uStack_24,local_28);
  *(undefined4 *)(pFVar2 + (longlong)iVar5 * 0xc + 8) = local_20;
  pFVar7 = FAudioWidgetsStyle::Get();
  pFVar8 = ::FName::FName(&local_res8,"AudioMeter.Style");
  pFVar9 = (FAudioMeterStyle *)
           (**(code **)(*(longlong *)pFVar7 + 0xa0))(pFVar7,FAudioMeterStyle::TypeName,*pFVar8,0,1);
  if ((pFVar9 == (FAudioMeterStyle *)0x0) &&
     (pFVar9 = &::Default,
     *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
             0x9d4c) < ::_TSS0)) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FAudioMeterStyle::FAudioMeterStyle(&::Default);
      atexit(`FAudioMeterStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FAudioMeterStyle::operator=(&this->WidgetStyle,pFVar9);
  return this;
}

// ~UAudioMeter @ 14d8c1510

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioMeter::~UAudioMeter(UAudioMeter *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyAudioMeter).SharedReferenceCount.ReferenceController);
  FAudioMeterWidgetStyle::~FAudioMeterWidgetStyle((FAudioMeterWidgetStyle *)&this->WidgetStyle);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MeterChannelInfoDelegate);
  pFVar1 = (this->MeterChannelInfo).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UWidget::~UWidget((UWidget *)this);
  return;
}

// FGetMeterChannelInfo_DelegateWrapper @ 14d924b70

TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_> * __cdecl
UAudioMeter::FGetMeterChannelInfo_DelegateWrapper
          (TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  void *_Src;
  longlong lVar1;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,&local_18);
  _Src = local_18;
  lVar1 = (longlong)(int)local_10;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = (int)local_10;
  if ((int)local_10 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,(int)local_10,0,&__return_storage_ptr__->AllocatorInstance,(int)local_10,
               &__return_storage_ptr__->ArrayMax);
    memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,lVar1 * 0xc);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return __return_storage_ptr__;
}

// GetMeterChannelInfo @ 14d92fc40

TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_> * __thiscall
UAudioMeter::GetMeterChannelInfo
          (UAudioMeter *this,
          TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  SAudioMeter *pSVar1;
  
  pSVar1 = (this->MyAudioMeter).Object;
  if (pSVar1 != (SAudioMeter *)0x0) {
    (**(code **)(pSVar1->_padding_ + 0x250))();
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14d933ba0

UClass * __cdecl UAudioMeter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioMeter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioMeter",
               &Z_Registration_Info_UClass_UAudioMeter.InnerSingleton,
               StaticRegisterNativesUAudioMeter,0x6a0,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioMeter>,InternalVTableHelperCtorCaller<UAudioMeter>,
               local_res8,UWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioMeter.InnerSingleton;
}

// RebuildWidget @ 14d960730

TSharedRef<SWidget,1> * __thiscall
UAudioMeter::RebuildWidget(UAudioMeter *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TSharedPtr<SAudioMeter,1> *pTVar1;
  SAudioMeter *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FArguments *pFVar6;
  TSharedRef<SAudioMeter,1> *pTVar7;
  TSharedRef<SWidget,1> *pTVar8;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  SAudioMeter *local_3f8;
  FSharedReferencer<1> local_3f0;
  TSharedRef<SAudioMeter,1> local_3e8;
  TSlateDecl<SAudioMeter,RequiredArgs::T0RequiredArgs> local_3d8;
  FArguments local_3c0;
  
  pFVar6 = SAudioMeter::FArguments::FArguments(&local_3c0);
  pFVar6->_Style = &this->WidgetStyle;
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SAudioMeter,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAudioMeter,RequiredArgs::T0RequiredArgs>
            (&local_3d8,"SAudioMeter",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioMeter.cpp"
             ,0x2e,local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pTVar7 = TSlateDecl<SAudioMeter,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_3d8,&local_3e8,pFVar6);
  local_3f0.ReferenceController = (pTVar7->SharedReferenceCount).ReferenceController;
  local_3f8 = pTVar7->Object;
  if (local_3f0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3f0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_3f0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->MyAudioMeter;
  if (pTVar1 != (TSharedPtr<SAudioMeter,1> *)&local_3f8) {
    pTVar1->Object = local_3f8;
    local_3f8 = (SAudioMeter *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyAudioMeter).SharedReferenceCount,&local_3f0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3f0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3e8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3d8._Widget.SharedReferenceCount.ReferenceController);
  SAudioMeter::FArguments::~FArguments(&local_3c0);
  if (pTVar1->Object == (SAudioMeter *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pSVar2 = pTVar1->Object;
  pTVar3 = (this->MyAudioMeter).SharedReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar2 == (SAudioMeter *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar2;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 14d963a40

void __thiscall UAudioMeter::ReleaseSlateResources(UAudioMeter *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UVisual::ReleaseSlateResources((UVisual *)this,param_1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyAudioMeter != (TSharedPtr<SAudioMeter,1> *)&local_18) {
    (this->MyAudioMeter).Object = (SAudioMeter *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyAudioMeter).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// SetBackgroundColor @ 14d9682e0

void __thiscall UAudioMeter::SetBackgroundColor(UAudioMeter *this,FLinearColor *param_1)

{
  SAudioMeter *pSVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  int local_58;
  FLinearColor_u_0 local_48;
  int local_38;
  undefined2 local_17;
  undefined1 local_15;
  
  fVar3 = (param_1->field0_0x0)._s_0.R;
  fVar4 = (param_1->field0_0x0)._s_0.G;
  fVar5 = (param_1->field0_0x0)._s_0.B;
  fVar6 = (param_1->field0_0x0)._s_0.A;
  pSVar1 = (this->MyAudioMeter).Object;
  (this->BackgroundColor).field0_0x0._s_0.R = fVar3;
  (this->BackgroundColor).field0_0x0._s_0.G = fVar4;
  (this->BackgroundColor).field0_0x0._s_0.B = fVar5;
  (this->BackgroundColor).field0_0x0._s_0.A = fVar6;
  if (pSVar1 != (SAudioMeter *)0x0) {
    local_58 = (uint)CONCAT12(local_15,local_17) << 8;
    if (((pSVar1->AudioMeterWidget).Object == (SAudioMeterWidget *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_38 = local_58;
    local_48._s_0.R = fVar3;
    local_48._s_0.G = fVar4;
    local_48._s_0.B = fVar5;
    local_48._s_0.A = fVar6;
    SAudioMeterWidget::SetBackgroundColor
              ((pSVar1->AudioMeterWidget).Object,(FSlateColor *)&local_48._s_0);
  }
  return;
}

// SetMeterBackgroundColor @ 14d969f30

void __thiscall UAudioMeter::SetMeterBackgroundColor(UAudioMeter *this,FLinearColor *param_1)

{
  SAudioMeter *pSVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  int local_58;
  FLinearColor_u_0 local_48;
  int local_38;
  undefined2 local_17;
  undefined1 local_15;
  
  fVar3 = (param_1->field0_0x0)._s_0.R;
  fVar4 = (param_1->field0_0x0)._s_0.G;
  fVar5 = (param_1->field0_0x0)._s_0.B;
  fVar6 = (param_1->field0_0x0)._s_0.A;
  pSVar1 = (this->MyAudioMeter).Object;
  (this->MeterBackgroundColor).field0_0x0._s_0.R = fVar3;
  (this->MeterBackgroundColor).field0_0x0._s_0.G = fVar4;
  (this->MeterBackgroundColor).field0_0x0._s_0.B = fVar5;
  (this->MeterBackgroundColor).field0_0x0._s_0.A = fVar6;
  if (pSVar1 != (SAudioMeter *)0x0) {
    local_58 = (uint)CONCAT12(local_15,local_17) << 8;
    if (((pSVar1->AudioMeterWidget).Object == (SAudioMeterWidget *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_38 = local_58;
    local_48._s_0.R = fVar3;
    local_48._s_0.G = fVar4;
    local_48._s_0.B = fVar5;
    local_48._s_0.A = fVar6;
    SAudioMeterWidget::SetMeterBackgroundColor
              ((pSVar1->AudioMeterWidget).Object,(FSlateColor *)&local_48._s_0);
  }
  return;
}

// SetMeterChannelInfo @ 14d96a2b0

void __thiscall
UAudioMeter::SetMeterChannelInfo
          (UAudioMeter *this,TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  SAudioMeter *pSVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  longlong lVar3;
  FDestructionSentinel local_68;
  ForAnyElementType local_50;
  int local_48;
  int local_44;
  undefined1 local_40;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_38;
  ForAnyElementType FStack_30;
  ulonglong local_28;
  
  pSVar1 = (this->MyAudioMeter).Object;
  if (pSVar1 != (SAudioMeter *)0x0) {
    local_48 = param_1->ArrayNum;
    lVar3 = (longlong)local_48;
    _Src = (param_1->AllocatorInstance).Data;
    local_50.Data = (FScriptContainerElement *)0x0;
    pcVar2 = *(code **)(pSVar1->_padding_ + 0x248);
    if (local_48 == 0) {
      local_44 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,local_48,0,&local_50,local_48,&local_44);
      memcpy(local_50.Data,_Src,lVar3 * 0xc);
    }
    local_40 = 1;
    local_28 = 0;
    local_38.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_30.Data = (FScriptContainerElement *)0x0;
    (*pcVar2)(pSVar1,&local_50);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_38,(FWriteAccessScope *)&local_68);
    if (((int)local_28 != 0) && (FStack_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
      local_28 = local_28 & 0xffffffff00000000;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    if (FStack_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_38.AccessDetector);
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data);
    }
  }
  return;
}

// SetMeterClippingColor @ 14d96a490

void __thiscall UAudioMeter::SetMeterClippingColor(UAudioMeter *this,FLinearColor *param_1)

{
  SAudioMeter *pSVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  int local_58;
  FLinearColor_u_0 local_48;
  int local_38;
  undefined2 local_17;
  undefined1 local_15;
  
  fVar3 = (param_1->field0_0x0)._s_0.R;
  fVar4 = (param_1->field0_0x0)._s_0.G;
  fVar5 = (param_1->field0_0x0)._s_0.B;
  fVar6 = (param_1->field0_0x0)._s_0.A;
  pSVar1 = (this->MyAudioMeter).Object;
  (this->MeterClippingColor).field0_0x0._s_0.R = fVar3;
  (this->MeterClippingColor).field0_0x0._s_0.G = fVar4;
  (this->MeterClippingColor).field0_0x0._s_0.B = fVar5;
  (this->MeterClippingColor).field0_0x0._s_0.A = fVar6;
  if (pSVar1 != (SAudioMeter *)0x0) {
    local_58 = (uint)CONCAT12(local_15,local_17) << 8;
    if (((pSVar1->AudioMeterWidget).Object == (SAudioMeterWidget *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_38 = local_58;
    local_48._s_0.R = fVar3;
    local_48._s_0.G = fVar4;
    local_48._s_0.B = fVar5;
    local_48._s_0.A = fVar6;
    SAudioMeterWidget::SetMeterClippingColor
              ((pSVar1->AudioMeterWidget).Object,(FSlateColor *)&local_48._s_0);
  }
  return;
}

// SetMeterPeakColor @ 14d96a5c0

void __thiscall UAudioMeter::SetMeterPeakColor(UAudioMeter *this,FLinearColor *param_1)

{
  SAudioMeter *pSVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  int local_58;
  FLinearColor_u_0 local_48;
  int local_38;
  undefined2 local_17;
  undefined1 local_15;
  
  fVar3 = (param_1->field0_0x0)._s_0.R;
  fVar4 = (param_1->field0_0x0)._s_0.G;
  fVar5 = (param_1->field0_0x0)._s_0.B;
  fVar6 = (param_1->field0_0x0)._s_0.A;
  pSVar1 = (this->MyAudioMeter).Object;
  (this->MeterPeakColor).field0_0x0._s_0.R = fVar3;
  (this->MeterPeakColor).field0_0x0._s_0.G = fVar4;
  (this->MeterPeakColor).field0_0x0._s_0.B = fVar5;
  (this->MeterPeakColor).field0_0x0._s_0.A = fVar6;
  if (pSVar1 != (SAudioMeter *)0x0) {
    local_58 = (uint)CONCAT12(local_15,local_17) << 8;
    if (((pSVar1->AudioMeterWidget).Object == (SAudioMeterWidget *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_38 = local_58;
    local_48._s_0.R = fVar3;
    local_48._s_0.G = fVar4;
    local_48._s_0.B = fVar5;
    local_48._s_0.A = fVar6;
    SAudioMeterWidget::SetMeterPeakColor
              ((pSVar1->AudioMeterWidget).Object,(FSlateColor *)&local_48._s_0);
  }
  return;
}

// SetMeterScaleColor @ 14d96a6f0

void __thiscall UAudioMeter::SetMeterScaleColor(UAudioMeter *this,FLinearColor *param_1)

{
  SAudioMeter *pSVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  int local_58;
  FLinearColor_u_0 local_48;
  int local_38;
  undefined2 local_17;
  undefined1 local_15;
  
  fVar3 = (param_1->field0_0x0)._s_0.R;
  fVar4 = (param_1->field0_0x0)._s_0.G;
  fVar5 = (param_1->field0_0x0)._s_0.B;
  fVar6 = (param_1->field0_0x0)._s_0.A;
  pSVar1 = (this->MyAudioMeter).Object;
  (this->MeterScaleColor).field0_0x0._s_0.R = fVar3;
  (this->MeterScaleColor).field0_0x0._s_0.G = fVar4;
  (this->MeterScaleColor).field0_0x0._s_0.B = fVar5;
  (this->MeterScaleColor).field0_0x0._s_0.A = fVar6;
  if (pSVar1 != (SAudioMeter *)0x0) {
    local_58 = (uint)CONCAT12(local_15,local_17) << 8;
    if (((pSVar1->AudioMeterWidget).Object == (SAudioMeterWidget *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_38 = local_58;
    local_48._s_0.R = fVar3;
    local_48._s_0.G = fVar4;
    local_48._s_0.B = fVar5;
    local_48._s_0.A = fVar6;
    SAudioMeterWidget::SetMeterScaleColor
              ((pSVar1->AudioMeterWidget).Object,(FSlateColor *)&local_48._s_0);
  }
  return;
}

// SetMeterScaleLabelColor @ 14d96a820

void __thiscall UAudioMeter::SetMeterScaleLabelColor(UAudioMeter *this,FLinearColor *param_1)

{
  SAudioMeter *pSVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  int local_58;
  FLinearColor_u_0 local_48;
  int local_38;
  undefined2 local_17;
  undefined1 local_15;
  
  fVar3 = (param_1->field0_0x0)._s_0.R;
  fVar4 = (param_1->field0_0x0)._s_0.G;
  fVar5 = (param_1->field0_0x0)._s_0.B;
  fVar6 = (param_1->field0_0x0)._s_0.A;
  pSVar1 = (this->MyAudioMeter).Object;
  (this->MeterScaleLabelColor).field0_0x0._s_0.R = fVar3;
  (this->MeterScaleLabelColor).field0_0x0._s_0.G = fVar4;
  (this->MeterScaleLabelColor).field0_0x0._s_0.B = fVar5;
  (this->MeterScaleLabelColor).field0_0x0._s_0.A = fVar6;
  if (pSVar1 != (SAudioMeter *)0x0) {
    local_58 = (uint)CONCAT12(local_15,local_17) << 8;
    if (((pSVar1->AudioMeterWidget).Object == (SAudioMeterWidget *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_38 = local_58;
    local_48._s_0.R = fVar3;
    local_48._s_0.G = fVar4;
    local_48._s_0.B = fVar5;
    local_48._s_0.A = fVar6;
    SAudioMeterWidget::SetMeterScaleLabelColor
              ((pSVar1->AudioMeterWidget).Object,(FSlateColor *)&local_48._s_0);
  }
  return;
}

// SetMeterValueColor @ 14d96a950

void __thiscall UAudioMeter::SetMeterValueColor(UAudioMeter *this,FLinearColor *param_1)

{
  SAudioMeter *pSVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  int local_58;
  FLinearColor_u_0 local_48;
  int local_38;
  undefined2 local_17;
  undefined1 local_15;
  
  fVar3 = (param_1->field0_0x0)._s_0.R;
  fVar4 = (param_1->field0_0x0)._s_0.G;
  fVar5 = (param_1->field0_0x0)._s_0.B;
  fVar6 = (param_1->field0_0x0)._s_0.A;
  pSVar1 = (this->MyAudioMeter).Object;
  (this->MeterValueColor).field0_0x0._s_0.R = fVar3;
  (this->MeterValueColor).field0_0x0._s_0.G = fVar4;
  (this->MeterValueColor).field0_0x0._s_0.B = fVar5;
  (this->MeterValueColor).field0_0x0._s_0.A = fVar6;
  if (pSVar1 != (SAudioMeter *)0x0) {
    local_58 = (uint)CONCAT12(local_15,local_17) << 8;
    if (((pSVar1->AudioMeterWidget).Object == (SAudioMeterWidget *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_38 = local_58;
    local_48._s_0.R = fVar3;
    local_48._s_0.G = fVar4;
    local_48._s_0.B = fVar5;
    local_48._s_0.A = fVar6;
    SAudioMeterWidget::SetMeterValueColor
              ((pSVar1->AudioMeterWidget).Object,(FSlateColor *)&local_48._s_0);
  }
  return;
}

// StaticRegisterNativesUAudioMeter @ 14d971cc0

void __cdecl UAudioMeter::StaticRegisterNativesUAudioMeter(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 9;
  local_18.DataPtr = Z_Construct_UClass_UAudioMeter_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 14d972be0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioMeter::SynchronizeProperties(UAudioMeter *this)

{
  byte bVar1;
  int iVar2;
  SAudioMeter *pSVar3;
  FScriptContainerElement *_Src;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  UObject *pUVar9;
  TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_> *pTVar10;
  FName local_res8;
  int local_298;
  undefined1 local_288 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_270;
  ForAnyElementType FStack_268;
  ulonglong local_260;
  FScriptContainerElement *local_258;
  int local_250;
  int local_24c;
  undefined1 local_248;
  undefined1 local_240 [24];
  FDestructionSentinel local_228;
  FDestructionSentinel local_210;
  FLinearColor_u_0 local_1f8;
  int local_1e8;
  FLinearColor_u_0 local_1d8;
  int local_1c8;
  FLinearColor_u_0 local_1b8;
  int local_1a8;
  FLinearColor_u_0 local_198;
  int local_188;
  FLinearColor_u_0 local_178;
  int local_168;
  FLinearColor_u_0 local_158;
  int local_148;
  FLinearColor_u_0 local_138;
  int local_128;
  undefined1 local_118 [24];
  undefined1 local_100 [41];
  undefined2 local_d7;
  undefined1 local_d5;
  undefined2 local_bf;
  undefined1 local_bd;
  undefined2 local_a7;
  undefined1 local_a5;
  undefined2 local_8f;
  undefined1 local_8d;
  undefined2 local_77;
  undefined1 local_75;
  undefined2 local_5f;
  undefined1 local_5d;
  undefined2 local_47;
  undefined1 local_45;
  FReadAccessScope local_40;
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  UWidget::SynchronizeProperties((UWidget *)this);
  if ((this->MyAudioMeter).Object == (SAudioMeter *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pSVar3 = (this->MyAudioMeter).Object;
  bVar1 = (this->Orientation).Value;
  if ((pSVar3->AudioMeterWidget).Object == (SAudioMeterWidget *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  SAudioMeterWidget::SetOrientation((pSVar3->AudioMeterWidget).Object,(uint)bVar1);
  if ((this->MyAudioMeter).Object == (SAudioMeter *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pSVar3 = (this->MyAudioMeter).Object;
  uVar5 = *(undefined8 *)&(this->BackgroundColor).field0_0x0;
  uVar6 = *(undefined8 *)((longlong)&(this->BackgroundColor).field0_0x0 + 8);
  local_298 = (uint)CONCAT12(local_d5,local_d7) << 8;
  if ((pSVar3->AudioMeterWidget).Object == (SAudioMeterWidget *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_1e8 = local_298;
  local_1f8._0_8_ = uVar5;
  local_1f8._8_8_ = uVar6;
  SAudioMeterWidget::SetBackgroundColor
            ((pSVar3->AudioMeterWidget).Object,(FSlateColor *)&local_1f8._s_0);
  if ((this->MyAudioMeter).Object == (SAudioMeter *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pSVar3 = (this->MyAudioMeter).Object;
  uVar5 = *(undefined8 *)&(this->MeterBackgroundColor).field0_0x0;
  uVar6 = *(undefined8 *)((longlong)&(this->MeterBackgroundColor).field0_0x0 + 8);
  local_298 = (uint)CONCAT12(local_bd,local_bf) << 8;
  if ((pSVar3->AudioMeterWidget).Object == (SAudioMeterWidget *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_1c8 = local_298;
  local_1d8._0_8_ = uVar5;
  local_1d8._8_8_ = uVar6;
  SAudioMeterWidget::SetMeterBackgroundColor
            ((pSVar3->AudioMeterWidget).Object,(FSlateColor *)&local_1d8._s_0);
  if ((this->MyAudioMeter).Object == (SAudioMeter *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pSVar3 = (this->MyAudioMeter).Object;
  uVar5 = *(undefined8 *)&(this->MeterValueColor).field0_0x0;
  uVar6 = *(undefined8 *)((longlong)&(this->MeterValueColor).field0_0x0 + 8);
  local_298 = (uint)CONCAT12(local_a5,local_a7) << 8;
  if ((pSVar3->AudioMeterWidget).Object == (SAudioMeterWidget *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_1a8 = local_298;
  local_1b8._0_8_ = uVar5;
  local_1b8._8_8_ = uVar6;
  SAudioMeterWidget::SetMeterValueColor
            ((pSVar3->AudioMeterWidget).Object,(FSlateColor *)&local_1b8._s_0);
  if ((this->MyAudioMeter).Object == (SAudioMeter *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pSVar3 = (this->MyAudioMeter).Object;
  uVar5 = *(undefined8 *)&(this->MeterPeakColor).field0_0x0;
  uVar6 = *(undefined8 *)((longlong)&(this->MeterPeakColor).field0_0x0 + 8);
  local_298 = (uint)CONCAT12(local_8d,local_8f) << 8;
  if ((pSVar3->AudioMeterWidget).Object == (SAudioMeterWidget *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_188 = local_298;
  local_198._0_8_ = uVar5;
  local_198._8_8_ = uVar6;
  SAudioMeterWidget::SetMeterPeakColor
            ((pSVar3->AudioMeterWidget).Object,(FSlateColor *)&local_198._s_0);
  if ((this->MyAudioMeter).Object == (SAudioMeter *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pSVar3 = (this->MyAudioMeter).Object;
  uVar5 = *(undefined8 *)&(this->MeterClippingColor).field0_0x0;
  uVar6 = *(undefined8 *)((longlong)&(this->MeterClippingColor).field0_0x0 + 8);
  local_298 = (uint)CONCAT12(local_75,local_77) << 8;
  if ((pSVar3->AudioMeterWidget).Object == (SAudioMeterWidget *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_168 = local_298;
  local_178._0_8_ = uVar5;
  local_178._8_8_ = uVar6;
  SAudioMeterWidget::SetMeterClippingColor
            ((pSVar3->AudioMeterWidget).Object,(FSlateColor *)&local_178._s_0);
  if ((this->MyAudioMeter).Object == (SAudioMeter *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pSVar3 = (this->MyAudioMeter).Object;
  uVar5 = *(undefined8 *)&(this->MeterScaleColor).field0_0x0;
  uVar6 = *(undefined8 *)((longlong)&(this->MeterScaleColor).field0_0x0 + 8);
  local_298 = (uint)CONCAT12(local_5d,local_5f) << 8;
  if ((pSVar3->AudioMeterWidget).Object == (SAudioMeterWidget *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_148 = local_298;
  local_158._0_8_ = uVar5;
  local_158._8_8_ = uVar6;
  SAudioMeterWidget::SetMeterScaleColor
            ((pSVar3->AudioMeterWidget).Object,(FSlateColor *)&local_158._s_0);
  if ((this->MyAudioMeter).Object == (SAudioMeter *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pSVar3 = (this->MyAudioMeter).Object;
  uVar5 = *(undefined8 *)&(this->MeterScaleLabelColor).field0_0x0;
  uVar6 = *(undefined8 *)((longlong)&(this->MeterScaleLabelColor).field0_0x0 + 8);
  local_298 = (uint)CONCAT12(local_45,local_47) << 8;
  if ((pSVar3->AudioMeterWidget).Object == (SAudioMeterWidget *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_128 = local_298;
  local_138._0_8_ = uVar5;
  local_138._8_8_ = uVar6;
  SAudioMeterWidget::SetMeterScaleLabelColor
            ((pSVar3->AudioMeterWidget).Object,(FSlateColor *)&local_138._s_0);
  bVar8 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->MeterChannelInfoDelegate)
  ;
  if (bVar8) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->MeterChannelInfoDelegate,&local_40);
    local_res8.ComparisonIndex.Value = *(uint *)&(this->MeterChannelInfoDelegate).field_0x10;
    local_res8.Number = *(uint *)&(this->MeterChannelInfoDelegate).field_0x14;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_40);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->MeterChannelInfoDelegate,(FWriteAccessScope *)&local_228);
    pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&(this->MeterChannelInfoDelegate).field_0x8);
    if (local_228.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_228.Accessor,&local_228);
    }
    pTVar10 = TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_>::Create<UObject>
                        ((TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_> *)
                         local_118,pUVar9,&local_res8);
    bVar7 = true;
    bVar8 = false;
  }
  else {
    iVar2 = (this->MeterChannelInfo).ArrayNum;
    _Src = (this->MeterChannelInfo).AllocatorInstance.Data;
    local_288._0_8_ = (FScriptContainerElement *)0x0;
    local_288._8_4_ = iVar2;
    if (iVar2 == 0) {
      local_288._12_4_ = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar2,0,(ForAnyElementType *)local_288,iVar2,(int *)(local_288 + 0xc));
      memcpy((void *)local_288._0_8_,_Src,(longlong)iVar2 * 0xc);
    }
    local_288[0x10] = true;
    local_260 = 0;
    pTVar10 = (TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_> *)local_288;
    local_270.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_268.Data = (FScriptContainerElement *)0x0;
    bVar7 = false;
    bVar8 = true;
  }
  local_258 = (pTVar10->Value).AllocatorInstance.Data;
  (pTVar10->Value).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_250 = (pTVar10->Value).ArrayNum;
  local_24c = (pTVar10->Value).ArrayMax;
  (pTVar10->Value).ArrayNum = 0;
  (pTVar10->Value).ArrayMax = 0;
  local_248 = pTVar10->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_240,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar10->Getter);
  if (bVar8) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_270,(FWriteAccessScope *)&local_210);
    if (((int)local_260 != 0) && (FStack_268.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_268.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_268,0,0,0x10);
      local_260 = local_260 & 0xffffffff00000000;
    }
    if (local_210.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_210.Accessor,&local_210);
    }
    if (FStack_268.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_268.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_270.AccessDetector);
    if ((FScriptContainerElement *)local_288._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_288._0_8_);
    }
  }
  if (bVar7) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_100);
    if ((void *)local_100._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_100._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_100);
    if ((FScriptContainerElement *)local_118._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_118._0_8_);
    }
  }
  if ((this->MyAudioMeter).Object == (SAudioMeter *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pSVar3 = (this->MyAudioMeter).Object;
  (**(code **)(pSVar3->_padding_ + 0x248))(pSVar3,&local_258);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_240);
  if ((void *)local_240._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_240._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_240);
  if (local_258 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258);
  }
  return;
}

// execGetMeterChannelInfo @ 14d97e3f0

void __cdecl UAudioMeter::execGetMeterChannelInfo(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong *plVar1;
  void *local_18;
  undefined8 local_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar1 = *(longlong **)&param_1[0x29].field_0x20;
  if (plVar1 == (longlong *)0x0) {
    local_10 = 0;
    local_18 = (void *)0x0;
  }
  else {
    (**(code **)(*plVar1 + 0x250))(plVar1,&local_18);
  }
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(void **)param_3 = local_18;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_10;
    local_18 = (void *)0x0;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_10._4_4_;
    local_10 = 0;
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execSetBackgroundColor @ 14d97e9a0

void __cdecl UAudioMeter::execSetBackgroundColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  int local_58;
  FLinearColor_u_0 local_48;
  int local_38;
  undefined2 local_17;
  undefined1 local_15;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_78 = local_88;
  fStack_74 = fStack_84;
  fStack_70 = fStack_80;
  fStack_6c = fStack_7c;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)&param_1[0x29].field_0x20;
  *(float *)&param_1[0x26].field_0x24 = local_88;
  *(float *)(param_1 + 0x27) = fStack_84;
  *(float *)&param_1[0x27].field_0x4 = fStack_80;
  *(float *)&param_1[0x27].field_0x8 = fStack_7c;
  if (lVar2 != 0) {
    local_58 = (uint)CONCAT12(local_15,local_17) << 8;
    if ((*(longlong *)(lVar2 + 0x220) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_38 = local_58;
    local_48._s_0.R = local_78;
    local_48._s_0.G = fStack_74;
    local_48._s_0.B = fStack_70;
    local_48._s_0.A = fStack_6c;
    SAudioMeterWidget::SetBackgroundColor
              (*(SAudioMeterWidget **)(lVar2 + 0x220),(FSlateColor *)&local_48._s_0);
  }
  return;
}

// execSetMeterBackgroundColor @ 14d97efe0

void __cdecl
UAudioMeter::execSetMeterBackgroundColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  int local_58;
  FLinearColor_u_0 local_48;
  int local_38;
  undefined2 local_17;
  undefined1 local_15;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_78 = local_88;
  fStack_74 = fStack_84;
  fStack_70 = fStack_80;
  fStack_6c = fStack_7c;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)&param_1[0x29].field_0x20;
  *(float *)&param_1[0x27].field_0xc = local_88;
  *(float *)&param_1[0x27].field_0x10 = fStack_84;
  *(float *)&param_1[0x27].field_0x14 = fStack_80;
  *(float *)&param_1[0x27].field_0x18 = fStack_7c;
  if (lVar2 != 0) {
    local_58 = (uint)CONCAT12(local_15,local_17) << 8;
    if ((*(longlong *)(lVar2 + 0x220) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_38 = local_58;
    local_48._s_0.R = local_78;
    local_48._s_0.G = fStack_74;
    local_48._s_0.B = fStack_70;
    local_48._s_0.A = fStack_6c;
    SAudioMeterWidget::SetMeterBackgroundColor
              (*(SAudioMeterWidget **)(lVar2 + 0x220),(FSlateColor *)&local_48._s_0);
  }
  return;
}

// execSetMeterChannelInfo @ 14d97f2e0

void __cdecl UAudioMeter::execSetMeterChannelInfo(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  void *_Src;
  void **ppvVar4;
  longlong lVar5;
  void *local_78;
  undefined8 local_70;
  FDestructionSentinel local_68;
  ForAnyElementType local_50;
  int local_48;
  int local_44;
  undefined1 local_40;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_38;
  ForAnyElementType FStack_30;
  ulonglong local_28;
  
  local_78 = (void *)0x0;
  local_70 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  ppvVar4 = &local_78;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar4 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar2 = *(longlong **)&param_1[0x29].field_0x20;
  if (plVar2 != (longlong *)0x0) {
    local_48 = *(int *)(ppvVar4 + 1);
    lVar5 = (longlong)local_48;
    pcVar3 = *(code **)(*plVar2 + 0x248);
    _Src = *ppvVar4;
    local_50.Data = (FScriptContainerElement *)0x0;
    if (local_48 == 0) {
      local_44 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,local_48,0,&local_50,local_48,&local_44);
      memcpy(local_50.Data,_Src,lVar5 * 0xc);
    }
    local_40 = 1;
    local_28 = 0;
    local_38.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_30.Data = (FScriptContainerElement *)0x0;
    (*pcVar3)(plVar2,&local_50);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_38,(FWriteAccessScope *)&local_68);
    if (((int)local_28 != 0) && (FStack_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
      local_28 = local_28 & 0xffffffff00000000;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    if (FStack_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_38.AccessDetector);
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data);
    }
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  return;
}

// execSetMeterClippingColor @ 14d97f4d0

void __cdecl UAudioMeter::execSetMeterClippingColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  int local_58;
  FLinearColor_u_0 local_48;
  int local_38;
  undefined2 local_17;
  undefined1 local_15;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_78 = local_88;
  fStack_74 = fStack_84;
  fStack_70 = fStack_80;
  fStack_6c = fStack_7c;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)&param_1[0x29].field_0x20;
  *(float *)&param_1[0x28].field_0x14 = local_88;
  *(float *)&param_1[0x28].field_0x18 = fStack_84;
  *(float *)&param_1[0x28].field_0x1c = fStack_80;
  *(float *)&param_1[0x28].field_0x20 = fStack_7c;
  if (lVar2 != 0) {
    local_58 = (uint)CONCAT12(local_15,local_17) << 8;
    if ((*(longlong *)(lVar2 + 0x220) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_38 = local_58;
    local_48._s_0.R = local_78;
    local_48._s_0.G = fStack_74;
    local_48._s_0.B = fStack_70;
    local_48._s_0.A = fStack_6c;
    SAudioMeterWidget::SetMeterClippingColor
              (*(SAudioMeterWidget **)(lVar2 + 0x220),(FSlateColor *)&local_48._s_0);
  }
  return;
}

// execSetMeterPeakColor @ 14d97f5e0

void __cdecl UAudioMeter::execSetMeterPeakColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  int local_58;
  FLinearColor_u_0 local_48;
  int local_38;
  undefined2 local_17;
  undefined1 local_15;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_78 = local_88;
  fStack_74 = fStack_84;
  fStack_70 = fStack_80;
  fStack_6c = fStack_7c;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)&param_1[0x29].field_0x20;
  *(float *)&param_1[0x28].field_0x4 = local_88;
  *(float *)&param_1[0x28].field_0x8 = fStack_84;
  *(float *)&param_1[0x28].field_0xc = fStack_80;
  *(float *)&param_1[0x28].field_0x10 = fStack_7c;
  if (lVar2 != 0) {
    local_58 = (uint)CONCAT12(local_15,local_17) << 8;
    if ((*(longlong *)(lVar2 + 0x220) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_38 = local_58;
    local_48._s_0.R = local_78;
    local_48._s_0.G = fStack_74;
    local_48._s_0.B = fStack_70;
    local_48._s_0.A = fStack_6c;
    SAudioMeterWidget::SetMeterPeakColor
              (*(SAudioMeterWidget **)(lVar2 + 0x220),(FSlateColor *)&local_48._s_0);
  }
  return;
}

// execSetMeterScaleColor @ 14d97f6f0

void __cdecl UAudioMeter::execSetMeterScaleColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  int local_58;
  FLinearColor_u_0 local_48;
  int local_38;
  undefined2 local_17;
  undefined1 local_15;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_78 = local_88;
  fStack_74 = fStack_84;
  fStack_70 = fStack_80;
  fStack_6c = fStack_7c;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)&param_1[0x29].field_0x20;
  *(float *)&param_1[0x28].field_0x24 = local_88;
  *(float *)(param_1 + 0x29) = fStack_84;
  *(float *)&param_1[0x29].field_0x4 = fStack_80;
  *(float *)&param_1[0x29].field_0x8 = fStack_7c;
  if (lVar2 != 0) {
    local_58 = (uint)CONCAT12(local_15,local_17) << 8;
    if ((*(longlong *)(lVar2 + 0x220) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_38 = local_58;
    local_48._s_0.R = local_78;
    local_48._s_0.G = fStack_74;
    local_48._s_0.B = fStack_70;
    local_48._s_0.A = fStack_6c;
    SAudioMeterWidget::SetMeterScaleColor
              (*(SAudioMeterWidget **)(lVar2 + 0x220),(FSlateColor *)&local_48._s_0);
  }
  return;
}

// execSetMeterScaleLabelColor @ 14d97f800

void __cdecl
UAudioMeter::execSetMeterScaleLabelColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  int local_58;
  FLinearColor_u_0 local_48;
  int local_38;
  undefined2 local_17;
  undefined1 local_15;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_78 = local_88;
  fStack_74 = fStack_84;
  fStack_70 = fStack_80;
  fStack_6c = fStack_7c;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)&param_1[0x29].field_0x20;
  *(float *)&param_1[0x29].field_0xc = local_88;
  *(float *)&param_1[0x29].field_0x10 = fStack_84;
  *(float *)&param_1[0x29].field_0x14 = fStack_80;
  *(float *)&param_1[0x29].field_0x18 = fStack_7c;
  if (lVar2 != 0) {
    local_58 = (uint)CONCAT12(local_15,local_17) << 8;
    if ((*(longlong *)(lVar2 + 0x220) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_38 = local_58;
    local_48._s_0.R = local_78;
    local_48._s_0.G = fStack_74;
    local_48._s_0.B = fStack_70;
    local_48._s_0.A = fStack_6c;
    SAudioMeterWidget::SetMeterScaleLabelColor
              (*(SAudioMeterWidget **)(lVar2 + 0x220),(FSlateColor *)&local_48._s_0);
  }
  return;
}

// execSetMeterValueColor @ 14d97f910

void __cdecl UAudioMeter::execSetMeterValueColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  int local_58;
  FLinearColor_u_0 local_48;
  int local_38;
  undefined2 local_17;
  undefined1 local_15;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_78 = local_88;
  fStack_74 = fStack_84;
  fStack_70 = fStack_80;
  fStack_6c = fStack_7c;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)&param_1[0x29].field_0x20;
  *(float *)&param_1[0x27].field_0x1c = local_88;
  *(float *)&param_1[0x27].field_0x20 = fStack_84;
  *(float *)&param_1[0x27].field_0x24 = fStack_80;
  *(float *)(param_1 + 0x28) = fStack_7c;
  if (lVar2 != 0) {
    local_58 = (uint)CONCAT12(local_15,local_17) << 8;
    if ((*(longlong *)(lVar2 + 0x220) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_38 = local_58;
    local_48._s_0.R = local_78;
    local_48._s_0.G = fStack_74;
    local_48._s_0.B = fStack_70;
    local_48._s_0.A = fStack_6c;
    SAudioMeterWidget::SetMeterValueColor
              (*(SAudioMeterWidget **)(lVar2 + 0x220),(FSlateColor *)&local_48._s_0);
  }
  return;
}

