// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 14

// StaticClass @ 14d88f720

UClass * __cdecl UAudioMaterialMeter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioMaterialMeter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioMaterialMeter",
               &Z_Registration_Info_UClass_UAudioMaterialMeter.InnerSingleton,
               StaticRegisterNativesUAudioMaterialMeter,0x2e0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAudioMaterialMeter>,
               InternalVTableHelperCtorCaller<UAudioMaterialMeter>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioMaterialMeter.InnerSingleton;
}

// UAudioMaterialMeter @ 14d8b8ea0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UAudioMaterialMeter * __thiscall
UAudioMaterialMeter::UAudioMaterialMeter(UAudioMaterialMeter *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  FAudioMaterialMeterStyle::FAudioMaterialMeterStyle(&this->WidgetStyle);
  *(undefined8 *)&this->MeterChannelInfoDelegate = 0;
  *(undefined8 *)&(this->MeterChannelInfoDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->MeterChannelInfoDelegate).field_0x10 = 0;
  (this->Meter).Object = (SAudioMaterialMeter *)0x0;
  (this->Meter).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->MeterChannelInfo).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeterChannelInfo).ArrayNum = 0;
  (this->MeterChannelInfo).ArrayMax = 0;
  return this;
}

// UAudioMaterialMeter @ 14d8b8f20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UAudioMaterialMeter * __thiscall UAudioMaterialMeter::UAudioMaterialMeter(UAudioMaterialMeter *this)

{
  TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FObjectInitializer *pFVar6;
  FAudioWidgetsStyle *pFVar7;
  FName *pFVar8;
  FAudioMaterialMeterStyle *pFVar9;
  UAudioMaterialMeter *pUVar10;
  FName local_res8;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  
  pFVar6 = FObjectInitializer::Get();
  UWidget::UWidget((UWidget *)this,pFVar6);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  FAudioMaterialMeterStyle::FAudioMaterialMeterStyle(&this->WidgetStyle);
  pTVar1 = &this->MeterChannelInfo;
  *(undefined8 *)&this->MeterChannelInfoDelegate = 0;
  *(undefined8 *)&(this->MeterChannelInfoDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->MeterChannelInfoDelegate).field_0x10 = 0;
  (this->Meter).Object = (SAudioMaterialMeter *)0x0;
  (this->Meter).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->MeterChannelInfo).ArrayNum = 0;
  (this->MeterChannelInfo).ArrayMax = 0;
  (this->Orientation).Value = '\x01';
  pFVar7 = FAudioWidgetsStyle::Get();
  pFVar8 = ::FName::FName(&local_res8,"AudioMaterialMeter.Style");
  pFVar9 = (FAudioMaterialMeterStyle *)
           (**(code **)(*(longlong *)pFVar7 + 0xa0))
                     (pFVar7,FAudioMaterialMeterStyle::TypeName,*pFVar8,0,1);
  if ((pFVar9 == (FAudioMaterialMeterStyle *)0x0) &&
     (pFVar9 = &::Default,
     *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
             0x9d4c) < ::_TSS0)) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FAudioMaterialMeterStyle::FAudioMaterialMeterStyle(&::Default);
      atexit(`FAudioMaterialMeterStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__
            );
      _Init_thread_footer(&::_TSS0);
    }
  }
  FAudioMaterialMeterStyle::operator=(&this->WidgetStyle,pFVar9);
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
      pUVar10 = (UAudioMaterialMeter *)(*pcVar3)();
      return pUVar10;
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
  return this;
}

// ~UAudioMaterialMeter @ 14d8c1300

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioMaterialMeter::~UAudioMaterialMeter(UAudioMaterialMeter *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  pFVar1 = (this->MeterChannelInfo).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Meter).SharedReferenceCount.ReferenceController);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MeterChannelInfoDelegate);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WidgetStyle).Font.CompositeFont.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&this->WidgetStyle);
  UWidget::~UWidget((UWidget *)this);
  return;
}

// FGetMeterChannelInfo_DelegateWrapper @ 14d924ab0

TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_> * __cdecl
UAudioMaterialMeter::FGetMeterChannelInfo_DelegateWrapper
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

// GetMeterChannelInfo @ 14d92fc00

TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_> * __thiscall
UAudioMaterialMeter::GetMeterChannelInfo
          (UAudioMaterialMeter *this,
          TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  SAudioMaterialMeter *pSVar1;
  
  pSVar1 = (this->Meter).Object;
  if (pSVar1 != (SAudioMaterialMeter *)0x0) {
    (**(code **)(pSVar1->_padding_ + 0x250))();
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14d9338a0

UClass * __cdecl UAudioMaterialMeter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioMaterialMeter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioMaterialMeter",
               &Z_Registration_Info_UClass_UAudioMaterialMeter.InnerSingleton,
               StaticRegisterNativesUAudioMaterialMeter,0x2e0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAudioMaterialMeter>,
               InternalVTableHelperCtorCaller<UAudioMaterialMeter>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioMaterialMeter.InnerSingleton;
}

// RebuildWidget @ 14d95fd70

TSharedRef<SWidget,1> * __thiscall
UAudioMaterialMeter::RebuildWidget
          (UAudioMaterialMeter *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  SAudioMaterialMeter *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FArguments *pFVar5;
  TSharedRef<SAudioMaterialMeter,1> *pTVar6;
  TSharedRef<SWidget,1> *pTVar7;
  TSharedPtr<SAudioMaterialMeter,1> *pTVar8;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FWeakObjectPtr local_res18;
  UAudioMaterialMeter *local_res20;
  SAudioMaterialMeter *local_2b8;
  FSharedReferencer<1> local_2b0;
  FName local_2a8;
  FMemScope local_2a0;
  TSharedRef<SAudioMaterialMeter,1> local_298;
  TSlateDecl<SAudioMaterialMeter,RequiredArgs::T0RequiredArgs> local_288;
  undefined1 local_270 [552];
  undefined1 local_48 [40];
  
  pFVar5 = SAudioMaterialMeter::FArguments::FArguments((FArguments *)local_270);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UAudioMaterialMeter *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_res20 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UAudioMaterialMeter *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
  (pFVar5->_Owner).WeakPtr = local_res18;
  pFVar5->_AudioMaterialMeterStyle = &this->WidgetStyle;
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2a8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2a0,&local_2a8,true);
  TSlateDecl<SAudioMaterialMeter,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAudioMaterialMeter,RequiredArgs::T0RequiredArgs>
            (&local_288,"SAudioMaterialMeter",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioMaterialSlate\\AudioMaterialMeter.cpp"
             ,0x50,local_res8);
  FMemScope::~FMemScope(&local_2a0);
  FLLMScope::~FLLMScope(local_res10);
  pTVar6 = TSlateDecl<SAudioMaterialMeter,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_288,&local_298,pFVar5);
  local_2b0.ReferenceController = (pTVar6->SharedReferenceCount).ReferenceController;
  local_2b8 = pTVar6->Object;
  if (local_2b0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2b0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_2b0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar8 = &this->Meter;
  if (pTVar8 != (TSharedPtr<SAudioMaterialMeter,1> *)&local_2b8) {
    pTVar8->Object = local_2b8;
    local_2b8 = (SAudioMaterialMeter *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Meter).SharedReferenceCount,&local_2b0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2b0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_298.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_288._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_48);
  if ((void *)local_48._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_48._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  if ((FScriptContainerElement *)local_270._528_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_270._528_8_);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_270);
  if (pTVar8->Object == (SAudioMaterialMeter *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar1 = pTVar8->Object;
  pTVar2 = (this->Meter).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar1 == (SAudioMaterialMeter *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar1;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 14d9639a0

void __thiscall UAudioMaterialMeter::ReleaseSlateResources(UAudioMaterialMeter *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->Meter != (TSharedPtr<SAudioMaterialMeter,1> *)&local_18) {
    (this->Meter).Object = (SAudioMaterialMeter *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Meter).SharedReferenceCount,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// SetMeterChannelInfo @ 14d96a150

void __thiscall
UAudioMaterialMeter::SetMeterChannelInfo
          (UAudioMaterialMeter *this,TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  SAudioMaterialMeter *pSVar1;
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
  
  pSVar1 = (this->Meter).Object;
  if (pSVar1 != (SAudioMaterialMeter *)0x0) {
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

// StaticRegisterNativesUAudioMaterialMeter @ 14d971c20

void __cdecl UAudioMaterialMeter::StaticRegisterNativesUAudioMaterialMeter(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UAudioMaterialMeter_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 14d972730

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioMaterialMeter::SynchronizeProperties(UAudioMaterialMeter *this)

{
  int iVar1;
  SAudioMaterialMeter *pSVar2;
  FScriptContainerElement *_Src;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  EOrientation EVar6;
  UObject *pUVar7;
  TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_> *pTVar8;
  FName local_res8;
  undefined1 local_e8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d0;
  ForAnyElementType FStack_c8;
  ulonglong local_c0;
  FScriptContainerElement *local_b8;
  int local_b0;
  int local_ac;
  undefined1 local_a8;
  undefined1 local_a0 [24];
  FDestructionSentinel local_88;
  TArray<TWeakObjectPtr<UMaterialInstanceDynamic,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
  local_70;
  undefined1 local_60 [24];
  undefined1 local_48 [24];
  FReadAccessScope local_30;
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  UWidget::SynchronizeProperties((UWidget *)this);
  pSVar2 = (this->Meter).Object;
  if (pSVar2 != (SAudioMaterialMeter *)0x0) {
    SAudioMaterialMeter::ApplyNewMaterial(pSVar2,&local_70);
    if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.AllocatorInstance.Data);
    }
    if ((this->Meter).Object == (SAudioMaterialMeter *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pSVar2 = (this->Meter).Object;
    EVar6 = (EOrientation)(this->Orientation).Value;
    if (pSVar2->Orientation != EVar6) {
      pSVar2->Orientation = EVar6;
      SWidget::Invalidate((SWidget *)pSVar2,Layout);
    }
    bVar5 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                      ((TScriptDelegate<FNotThreadSafeDelegateMode> *)
                       &this->MeterChannelInfoDelegate);
    if (bVar5) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->MeterChannelInfoDelegate,&local_30);
      local_res8.ComparisonIndex.Value = *(uint *)&(this->MeterChannelInfoDelegate).field_0x10;
      local_res8.Number = *(uint *)&(this->MeterChannelInfoDelegate).field_0x14;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_30);
      pUVar7 = TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
                         ((TScriptDelegate<FNotThreadSafeDelegateMode> *)
                          &this->MeterChannelInfoDelegate);
      pTVar8 = TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_>::Create<UObject>
                         ((TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_> *)
                          local_60,pUVar7,&local_res8);
      bVar4 = true;
      bVar5 = false;
    }
    else {
      iVar1 = (this->MeterChannelInfo).ArrayNum;
      _Src = (this->MeterChannelInfo).AllocatorInstance.Data;
      local_e8._0_8_ = (FScriptContainerElement *)0x0;
      local_e8._8_4_ = iVar1;
      if (iVar1 == 0) {
        local_e8._12_4_ = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,iVar1,0,(ForAnyElementType *)local_e8,iVar1,(int *)(local_e8 + 0xc));
        memcpy((void *)local_e8._0_8_,_Src,(longlong)iVar1 * 0xc);
      }
      pTVar8 = (TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_> *)local_e8;
      local_e8[0x10] = true;
      local_c0 = 0;
      bVar4 = false;
      bVar5 = true;
      local_d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_c8.Data = (FScriptContainerElement *)0x0;
    }
    local_b8 = (pTVar8->Value).AllocatorInstance.Data;
    (pTVar8->Value).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b0 = (pTVar8->Value).ArrayNum;
    local_ac = (pTVar8->Value).ArrayMax;
    (pTVar8->Value).ArrayNum = 0;
    (pTVar8->Value).ArrayMax = 0;
    local_a8 = pTVar8->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_a0,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar8->Getter);
    if (bVar5) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_d0,(FWriteAccessScope *)&local_88);
      if (((int)local_c0 != 0) && (FStack_c8.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_c8.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_c8,0,0,0x10);
        local_c0 = local_c0 & 0xffffffff00000000;
      }
      if (local_88.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
      }
      if (FStack_c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_c8.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d0.AccessDetector);
      if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_e8._0_8_);
      }
    }
    if (bVar4) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_48);
      if ((void *)local_48._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_48._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_48);
      if ((FScriptContainerElement *)local_60._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_60._0_8_);
      }
    }
    if ((this->Meter).Object == (SAudioMaterialMeter *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pSVar2 = (this->Meter).Object;
    (**(code **)(pSVar2->_padding_ + 0x248))(pSVar2,&local_b8);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_a0);
    if ((void *)local_a0._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_a0._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_a0);
    if (local_b8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8);
    }
  }
  return;
}

// execGetMeterChannelInfo @ 14d97e340

void __cdecl
UAudioMaterialMeter::execGetMeterChannelInfo(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong *plVar1;
  void *local_18;
  undefined8 local_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar1 = *(longlong **)&param_1[0x11].field_0x18;
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

// execSetMeterChannelInfo @ 14d97f0f0

void __cdecl
UAudioMaterialMeter::execSetMeterChannelInfo(UObject *param_1,FFrame *param_2,void *param_3)

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
  plVar2 = *(longlong **)&param_1[0x11].field_0x18;
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

