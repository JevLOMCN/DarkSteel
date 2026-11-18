// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 46

// TAttribute<TOptional<float>_><FNullOpt> @ 14d894e30

TAttribute<TOptional<float>_> * __thiscall
TAttribute<TOptional<float>_>::TAttribute<TOptional<float>_><FNullOpt>
          (TAttribute<TOptional<float>_> *this,FNullOpt *param_1)

{
  (this->Value).bIsSet = false;
  this->bIsSet = true;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_><TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_> @ 14d894f80

TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_> * __thiscall
TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_>::
TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_><TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_>
          (TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_> *this,
          TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  piVar1 = &(this->Value).ArrayMax;
  (this->Value).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = param_1->ArrayNum;
  _Src = (param_1->AllocatorInstance).Data;
  (this->Value).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
    memcpy((this->Value).AllocatorInstance.Data,_Src,(longlong)iVar2 * 0xc);
  }
  this->bIsSet = true;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// TAttribute<enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode><enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode> @ 14d895120

TAttribute<EAudioSpectrumPlotFrequencyAxisPixelBucketMode> * __thiscall
TAttribute<enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode>::
TAttribute<enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode><enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode>
          (void *this,EAudioSpectrumPlotFrequencyAxisPixelBucketMode *param_1)

{
  *(EAudioSpectrumPlotFrequencyAxisPixelBucketMode *)this = *param_1;
  *(undefined1 *)((longlong)this + 1) = 1;
  *(undefined8 *)((longlong)this + 0x18) = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  return this;
}

// TAttribute<enum_EAudioSpectrumPlotFrequencyAxisScale><enum_EAudioSpectrumPlotFrequencyAxisScale> @ 14d895150

TAttribute<EAudioSpectrumPlotFrequencyAxisScale> * __thiscall
TAttribute<enum_EAudioSpectrumPlotFrequencyAxisScale>::
TAttribute<enum_EAudioSpectrumPlotFrequencyAxisScale><enum_EAudioSpectrumPlotFrequencyAxisScale>
          (void *this,EAudioSpectrumPlotFrequencyAxisScale *param_1)

{
  *(EAudioSpectrumPlotFrequencyAxisScale *)this = *param_1;
  *(undefined1 *)((longlong)this + 1) = 1;
  *(undefined8 *)((longlong)this + 0x18) = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  return this;
}

// TAttribute<enum_EAudioUnitsValueType><enum_EAudioUnitsValueType> @ 14d895180

TAttribute<EAudioUnitsValueType> * __thiscall
TAttribute<enum_EAudioUnitsValueType>::
TAttribute<enum_EAudioUnitsValueType><enum_EAudioUnitsValueType>
          (void *this,EAudioUnitsValueType *param_1)

{
  *(EAudioUnitsValueType *)this = *param_1;
  *(undefined1 *)((longlong)this + 1) = 1;
  *(undefined8 *)((longlong)this + 0x18) = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  return this;
}

// Create<UObject> @ 14d899060

TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_> * __cdecl
TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_>::Create<UObject>
          (TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_>
           *__return_storage_ptr__,UObject *param_1,FName *param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_> *pTVar6;
  UObject *this;
  UFunction *pUVar7;
  UObject *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  (__return_storage_ptr__->Value).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Value).ArrayNum = 0;
  (__return_storage_ptr__->Value).ArrayMax = 0;
  puVar1 = &(__return_storage_ptr__->Getter).field_0x8;
  *(undefined4 *)&(__return_storage_ptr__->Getter).field_0x14 = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Getter).field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->Getter = 0;
  __return_storage_ptr__->bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &__return_storage_ptr__->Getter,(FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TArray_UFMeterChannelInfo__V__TSizedDefaultAllocator__0CA_____XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_AV__TArray_UFMeterChannelInfo__V__TSizedDefaultAllocator__0CA_____XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FName *)(puVar4 + 4) = *param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
    puVar4[5] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 5),(FObjectPtr)&local_res8);
    if ((*param_2 == (FName)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InFunctionName != NAME_None",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x56,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_> *)(*pcVar2)();
      return pTVar6;
    }
    if (param_1 != (UObject *)0x0) {
      this = FWeakObjectPtr::Get((FWeakObjectPtr *)(puVar4 + 5));
      pUVar7 = UObject::FindFunctionChecked(this,*param_2);
      puVar4[3] = pUVar7;
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// Set<float> @ 14d8a3270

void __thiscall TAttribute<float>::Set<float>(TAttribute<float> *this,float *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  this->Value = *param_1;
  this->bIsSet = true;
  return;
}

// TAttribute<FTimespan> @ 14d8a6880

TAttribute<FTimespan> * __thiscall
TAttribute<FTimespan>::TAttribute<FTimespan>
          (TAttribute<FTimespan> *this,TAttribute<FTimespan> *param_1)

{
  (this->Value).Ticks = (param_1->Value).Ticks;
  this->bIsSet = param_1->bIsSet;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  *(undefined4 *)&(this->Getter).field_0x10 = 0;
  TDelegate<FTimespan___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->Getter,&param_1->Getter);
  return this;
}

// TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_> @ 14d8a68c0

TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_> * __thiscall
TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_>::
TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_>
          (TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_> *this,
          TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  piVar1 = &(this->Value).ArrayMax;
  (this->Value).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = (param_1->Value).ArrayNum;
  _Src = (param_1->Value).AllocatorInstance.Data;
  (this->Value).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
    memcpy((this->Value).AllocatorInstance.Data,_Src,(longlong)iVar2 * 0xc);
  }
  this->bIsSet = param_1->bIsSet;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  *(undefined4 *)&(this->Getter).field_0x10 = 0;
  TDelegate<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>(&this->Getter,&param_1->Getter);
  return this;
}

// TAttribute<enum_EListItemAlignment> @ 14d8a6980

TAttribute<EListItemAlignment> * __thiscall
TAttribute<enum_EListItemAlignment>::TAttribute<enum_EListItemAlignment>
          (void *this,EListItemAlignment *param_1)

{
  *(EListItemAlignment *)this = *param_1;
  *(undefined1 *)((longlong)this + 1) = 1;
  *(undefined8 *)((longlong)this + 0x18) = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  return this;
}

// ~TAttribute<enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode> @ 14d8bb600

void __thiscall
TAttribute<enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode>::
~TAttribute<enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode>(void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  return;
}

// ~TAttribute<enum_EAudioSpectrumPlotFrequencyAxisScale> @ 14d8bb640

void __thiscall
TAttribute<enum_EAudioSpectrumPlotFrequencyAxisScale>::
~TAttribute<enum_EAudioSpectrumPlotFrequencyAxisScale>(void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  return;
}

// ~TAttribute<enum_EAudioUnitsValueType> @ 14d8bb680

void __thiscall
TAttribute<enum_EAudioUnitsValueType>::~TAttribute<enum_EAudioUnitsValueType>(void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  return;
}

// operator= @ 14d8c1a40

TAttribute<float> * __thiscall
TAttribute<float>::operator=(TAttribute<float> *this,TAttribute<float> *param_1)

{
  this->Value = param_1->Value;
  this->bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  return this;
}

// operator= @ 14d8c1a70

TAttribute<TOptional<UE::Math::TVector2<double>_>_> * __thiscall
TAttribute<TOptional<UE::Math::TVector2<double>_>_>::operator=
          (TAttribute<TOptional<UE::Math::TVector2<double>_>_> *this,
          TAttribute<TOptional<UE::Math::TVector2<double>_>_> *param_1)

{
  longlong *plVar1;
  double dVar2;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (param_1 != this) {
    if ((param_1->Value).bIsSet == false) {
      if ((this->Value).bIsSet != false) {
        (this->Value).bIsSet = false;
      }
    }
    else {
      dVar2 = (param_1->Value).TypedValue.field0_0x0._s_0.Y;
      (this->Value).TypedValue.field0_0x0._s_0.X = (param_1->Value).TypedValue.field0_0x0._s_0.X;
      (this->Value).TypedValue.field0_0x0._s_0.Y = dVar2;
      (this->Value).bIsSet = true;
    }
  }
  this->bIsSet = param_1->bIsSet;
  if (&param_1->Getter != &this->Getter) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&(param_1->Getter).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(param_1->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return this;
}

// operator= @ 14d8c1ba0

TAttribute<UE::Math::TVector2<double>_> * __thiscall
TAttribute<UE::Math::TVector2<double>_>::operator=
          (TAttribute<UE::Math::TVector2<double>_> *this,
          TAttribute<UE::Math::TVector2<double>_> *param_1)

{
  longlong *plVar1;
  double dVar2;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  dVar2 = (param_1->Value).field0_0x0._s_0.Y;
  (this->Value).field0_0x0._s_0.X = (param_1->Value).field0_0x0._s_0.X;
  (this->Value).field0_0x0._s_0.Y = dVar2;
  this->bIsSet = param_1->bIsSet;
  if (&param_1->Getter != &this->Getter) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&(param_1->Getter).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(param_1->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return this;
}

// operator= @ 14d8c1cc0

TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_> * __thiscall
TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_>::operator=
          (TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_> *this,
          TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_> *param_1)

{
  TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>::operator=(&this->Value,&param_1->Value);
  this->bIsSet = param_1->bIsSet;
  TDelegate<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
  ::operator=(&this->Getter,&param_1->Getter);
  return this;
}

// operator= @ 14d8c1d20

TAttribute<EAudioRadialSliderLayout> * __thiscall
TAttribute<enum_EAudioRadialSliderLayout>::operator=
          (void *this,TAttribute<EAudioRadialSliderLayout> *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  *(EAudioRadialSliderLayout *)this = param_1->Value;
  *(bool *)((longlong)this + 4) = param_1->bIsSet;
  if (&param_1->Getter !=
      (TDelegate<EAudioRadialSliderLayout___cdecl(void),FDefaultDelegateUserPolicy> *)
      ((longlong)this + 8)) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&(param_1->Getter).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(param_1->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return this;
}

// operator= @ 14d8c1e40

TAttribute<EAudioSpectrumPlotFrequencyAxisPixelBucketMode> * __thiscall
TAttribute<enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode>::operator=
          (void *this,TAttribute<EAudioSpectrumPlotFrequencyAxisPixelBucketMode> *param_1)

{
  *(EAudioSpectrumPlotFrequencyAxisPixelBucketMode *)this = param_1->Value;
  *(bool *)((longlong)this + 1) = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  return this;
}

// operator= @ 14d8c1e80

TAttribute<EAudioSpectrumPlotFrequencyAxisScale> * __thiscall
TAttribute<enum_EAudioSpectrumPlotFrequencyAxisScale>::operator=
          (void *this,TAttribute<EAudioSpectrumPlotFrequencyAxisScale> *param_1)

{
  *(EAudioSpectrumPlotFrequencyAxisScale *)this = param_1->Value;
  *(bool *)((longlong)this + 1) = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  return this;
}

// operator= @ 14d8c1ec0

TAttribute<EAudioUnitsValueType> * __thiscall
TAttribute<enum_EAudioUnitsValueType>::operator=
          (void *this,TAttribute<EAudioUnitsValueType> *param_1)

{
  *(EAudioUnitsValueType *)this = param_1->Value;
  *(bool *)((longlong)this + 1) = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  return this;
}

// Get @ 14d92a120

TOptional<UE::Math::TVector2<double>_> * __thiscall
TAttribute<TOptional<UE::Math::TVector2<double>_>_>::Get
          (TAttribute<TOptional<UE::Math::TVector2<double>_>_> *this)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  TVector2<double>_u_0 local_38;
  char local_28;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_20);
  if (((*(int *)&(this->Getter).field_0x10 == 0) ||
      (plVar3 = *(longlong **)&(this->Getter).field_0x8, plVar3 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar3 + 0x38))(), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_20);
  if (bVar1) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_20);
    if (*(int *)&(this->Getter).field_0x10 == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = *(longlong **)&(this->Getter).field_0x8;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,&local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
    if (&local_38 != (TVector2<double>_u_0 *)this) {
      if (local_28 == '\0') {
        if ((this->Value).bIsSet != false) {
          (this->Value).bIsSet = false;
          return &this->Value;
        }
      }
      else {
        (this->Value).TypedValue.field0_0x0._s_0.X = local_38._s_0.X;
        (this->Value).TypedValue.field0_0x0._s_0.Y = local_38._s_0.Y;
        (this->Value).bIsSet = true;
      }
    }
  }
  return &this->Value;
}

// Get @ 14d92a220

TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_> * __thiscall
TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_>::Get
          (TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_> *this)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 local_38 [48];
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FReadAccessScope *)(local_38 + 0x10));
  if (((*(int *)&(this->Getter).field_0x10 != 0) &&
      (plVar3 = *(longlong **)&(this->Getter).field_0x8, plVar3 != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(*plVar3 + 0x38))(), cVar2 != '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 0x10));
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
               (FReadAccessScope *)(local_38 + 0x10));
    plVar3 = (longlong *)0x0;
    if (*(int *)&(this->Getter).field_0x10 != 0) {
      plVar3 = *(longlong **)&(this->Getter).field_0x8;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 0x10));
    if (this != (TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_> *)local_38) {
      pFVar1 = (this->Value).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (this->Value).AllocatorInstance.Data = (FScriptContainerElement *)local_38._0_8_;
      (this->Value).ArrayNum = local_38._8_4_;
      (this->Value).ArrayMax = local_38._12_4_;
      local_38._8_4_ = 0;
      local_38._12_4_ = 0;
      local_38._0_8_ = (FScriptContainerElement *)0x0;
    }
    if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
    return &this->Value;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_38 + 0x10));
  return &this->Value;
}

// Get @ 14d92a320

EAudioColorGradient * __thiscall TAttribute<enum_EAudioColorGradient>::Get(void *this)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_28);
  if ((*(int *)((longlong)this + 0x18) != 0) &&
     (*(longlong **)((longlong)this + 0x10) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
                 &local_28);
      if (*(int *)((longlong)this + 0x18) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)((longlong)this + 0x10);
      }
      uVar2 = (**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      *(undefined1 *)this = uVar2;
      return this;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return this;
}

// Get @ 14d92a3c0

EAudioSpectrogramFrequencyAxisPixelBucketMode * __thiscall
TAttribute<enum_EAudioSpectrogramFrequencyAxisPixelBucketMode>::Get(void *this)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_28);
  if ((*(int *)((longlong)this + 0x18) != 0) &&
     (*(longlong **)((longlong)this + 0x10) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
                 &local_28);
      if (*(int *)((longlong)this + 0x18) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)((longlong)this + 0x10);
      }
      uVar2 = (**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      *(undefined1 *)this = uVar2;
      return this;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return this;
}

// Get @ 14d92a460

EAudioSpectrogramFrequencyAxisScale * __thiscall
TAttribute<enum_EAudioSpectrogramFrequencyAxisScale>::Get(void *this)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_28);
  if ((*(int *)((longlong)this + 0x18) != 0) &&
     (*(longlong **)((longlong)this + 0x10) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
                 &local_28);
      if (*(int *)((longlong)this + 0x18) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)((longlong)this + 0x10);
      }
      uVar2 = (**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      *(undefined1 *)this = uVar2;
      return this;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return this;
}

// Get @ 14d92a500

EAudioSpectrumAnalyzerBallistics * __thiscall
TAttribute<enum_EAudioSpectrumAnalyzerBallistics>::Get(void *this)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_28);
  if ((*(int *)((longlong)this + 0x18) != 0) &&
     (*(longlong **)((longlong)this + 0x10) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
                 &local_28);
      if (*(int *)((longlong)this + 0x18) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)((longlong)this + 0x10);
      }
      uVar2 = (**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      *(undefined1 *)this = uVar2;
      return this;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return this;
}

// Get @ 14d92a5a0

EAudioSpectrumAnalyzerType * __thiscall TAttribute<enum_EAudioSpectrumAnalyzerType>::Get(void *this)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_28);
  if ((*(int *)((longlong)this + 0x18) != 0) &&
     (*(longlong **)((longlong)this + 0x10) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
                 &local_28);
      if (*(int *)((longlong)this + 0x18) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)((longlong)this + 0x10);
      }
      uVar2 = (**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      *(undefined1 *)this = uVar2;
      return this;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return this;
}

// Get @ 14d92a640

EAudioSpectrumPlotFrequencyAxisPixelBucketMode * __thiscall
TAttribute<enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode>::Get(void *this)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_28);
  if ((*(int *)((longlong)this + 0x18) != 0) &&
     (*(longlong **)((longlong)this + 0x10) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
                 &local_28);
      if (*(int *)((longlong)this + 0x18) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)((longlong)this + 0x10);
      }
      uVar2 = (**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      *(undefined1 *)this = uVar2;
      return this;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return this;
}

// Get @ 14d92a6e0

EAudioSpectrumPlotFrequencyAxisScale * __thiscall
TAttribute<enum_EAudioSpectrumPlotFrequencyAxisScale>::Get(void *this)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_28);
  if ((*(int *)((longlong)this + 0x18) != 0) &&
     (*(longlong **)((longlong)this + 0x10) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
                 &local_28);
      if (*(int *)((longlong)this + 0x18) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)((longlong)this + 0x10);
      }
      uVar2 = (**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      *(undefined1 *)this = uVar2;
      return this;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return this;
}

// Get @ 14d92a780

EAudioUnitsValueType * __thiscall TAttribute<enum_EAudioUnitsValueType>::Get(void *this)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_28);
  if ((*(int *)((longlong)this + 0x18) != 0) &&
     (*(longlong **)((longlong)this + 0x10) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
                 &local_28);
      if (*(int *)((longlong)this + 0x18) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)((longlong)this + 0x10);
      }
      uVar2 = (**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      *(undefined1 *)this = uVar2;
      return this;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return this;
}

// Get @ 14d92a820

EConstantQFFTSizeEnum * __thiscall TAttribute<enum_EConstantQFFTSizeEnum>::Get(void *this)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_28);
  if ((*(int *)((longlong)this + 0x18) != 0) &&
     (*(longlong **)((longlong)this + 0x10) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
                 &local_28);
      if (*(int *)((longlong)this + 0x18) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)((longlong)this + 0x10);
      }
      uVar2 = (**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      *(undefined1 *)this = uVar2;
      return this;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return this;
}

// Get @ 14d92a8c0

EFFTSize * __thiscall TAttribute<enum_EFFTSize>::Get(void *this)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_28);
  if ((*(int *)((longlong)this + 0x18) != 0) &&
     (*(longlong **)((longlong)this + 0x10) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
                 &local_28);
      if (*(int *)((longlong)this + 0x18) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)((longlong)this + 0x10);
      }
      uVar2 = (**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      *(undefined1 *)this = uVar2;
      return this;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return this;
}

// Get @ 14d92a960

EOrientation * __thiscall TAttribute<enum_EOrientation>::Get(void *this)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_28);
  if ((*(int *)((longlong)this + 0x18) != 0) &&
     (*(longlong **)((longlong)this + 0x10) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
                 &local_28);
      if (*(int *)((longlong)this + 0x18) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)((longlong)this + 0x10);
      }
      uVar2 = (**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      *(undefined4 *)this = uVar2;
      return this;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return this;
}

// IdenticalTo @ 14d93ad60

bool __thiscall
TAttribute<TOptional<UE::Math::TVector2<double>_>_>::IdenticalTo
          (TAttribute<TOptional<UE::Math::TVector2<double>_>_> *this,
          TAttribute<TOptional<UE::Math::TVector2<double>_>_> *param_1)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  FReadAccessScope local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_38);
  if (((*(int *)&(this->Getter).field_0x10 == 0) ||
      (plVar4 = *(longlong **)&(this->Getter).field_0x8, plVar4 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar4 + 0x38))(), cVar2 == '\0')) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,&local_38);
  if (((*(int *)&(param_1->Getter).field_0x10 == 0) ||
      (plVar4 = *(longlong **)&(param_1->Getter).field_0x8, plVar4 == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(*plVar4 + 0x38))(), cVar3 == '\0')) {
    cVar3 = '\0';
  }
  else {
    cVar3 = '\x01';
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  if (cVar2 == cVar3) {
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_38);
      lVar5 = 0;
      lVar6 = lVar5;
      if ((*(int *)&(this->Getter).field_0x10 != 0) &&
         (plVar4 = *(longlong **)&(this->Getter).field_0x8, plVar4 != (longlong *)0x0)) {
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x40))(plVar4,local_res8);
        lVar6 = *plVar4;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,
                 &local_38);
      if ((*(int *)&(param_1->Getter).field_0x10 != 0) &&
         (plVar4 = *(longlong **)&(param_1->Getter).field_0x8, plVar4 != (longlong *)0x0)) {
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x40))(plVar4,local_res8);
        lVar5 = *plVar4;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      return lVar6 == lVar5;
    }
    if (((this->bIsSet == param_1->bIsSet) &&
        (bVar1 = (this->Value).bIsSet, bVar1 == (param_1->Value).bIsSet)) &&
       ((bVar1 == false ||
        (((param_1->Value).TypedValue.field0_0x0._s_0.X ==
          (this->Value).TypedValue.field0_0x0._s_0.X &&
         ((param_1->Value).TypedValue.field0_0x0._s_0.Y ==
          (this->Value).TypedValue.field0_0x0._s_0.Y)))))) {
      return true;
    }
  }
  return false;
}

// IdenticalTo @ 14d93aed0

bool __thiscall
TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_>::IdenticalTo
          (TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_> *this,
          TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_> *param_1)

{
  int iVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  FReadAccessScope local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_38);
  if (((*(int *)&(this->Getter).field_0x10 == 0) ||
      (plVar5 = *(longlong **)&(this->Getter).field_0x8, plVar5 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar5 + 0x38))(), cVar2 == '\0')) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,&local_38);
  if (((*(int *)&(param_1->Getter).field_0x10 == 0) ||
      (plVar5 = *(longlong **)&(param_1->Getter).field_0x8, plVar5 == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(*plVar5 + 0x38))(), cVar3 == '\0')) {
    cVar3 = '\0';
  }
  else {
    cVar3 = '\x01';
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  if (cVar2 == cVar3) {
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_38);
      lVar7 = 0;
      lVar6 = lVar7;
      if ((*(int *)&(this->Getter).field_0x10 != 0) &&
         (plVar5 = *(longlong **)&(this->Getter).field_0x8, plVar5 != (longlong *)0x0)) {
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x40))(plVar5,local_res8);
        lVar6 = *plVar5;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,
                 &local_38);
      if ((*(int *)&(param_1->Getter).field_0x10 != 0) &&
         (plVar5 = *(longlong **)&(param_1->Getter).field_0x8, plVar5 != (longlong *)0x0)) {
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x40))(plVar5,local_res8);
        lVar7 = *plVar5;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      return lVar6 == lVar7;
    }
    if (((this->bIsSet == param_1->bIsSet) &&
        (iVar1 = (this->Value).ArrayNum, iVar1 == (param_1->Value).ArrayNum)) &&
       (bVar4 = CompareItems<FMeterChannelInfo,int>
                          ((FMeterChannelInfo *)(this->Value).AllocatorInstance.Data,
                           (FMeterChannelInfo *)(param_1->Value).AllocatorInstance.Data,iVar1),
       bVar4)) {
      return true;
    }
  }
  return false;
}

// IsBound @ 14d93d060

bool __thiscall
TAttribute<TOptional<UE::Math::TVector2<double>_>_>::IsBound
          (TAttribute<TOptional<UE::Math::TVector2<double>_>_> *this)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// IsBound @ 14d93d0c0

bool __thiscall
TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_>::IsBound
          (TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_> *this)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// IsBound @ 14d93d120

bool __thiscall TAttribute<enum_EAudioColorGradient>::IsBound(void *this)

{
  char cVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_28);
  if ((*(int *)((longlong)this + 0x18) != 0) &&
     (*(longlong **)((longlong)this + 0x10) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// IsBound @ 14d93d180

bool __thiscall TAttribute<enum_EAudioRadialSliderLayout>::IsBound(void *this)

{
  char cVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_28);
  if ((*(int *)((longlong)this + 0x18) != 0) &&
     (*(longlong **)((longlong)this + 0x10) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// IsBound @ 14d93d1e0

bool __thiscall TAttribute<enum_EAudioSpectrogramFrequencyAxisPixelBucketMode>::IsBound(void *this)

{
  char cVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_28);
  if ((*(int *)((longlong)this + 0x18) != 0) &&
     (*(longlong **)((longlong)this + 0x10) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// IsBound @ 14d93d240

bool __thiscall TAttribute<enum_EAudioSpectrogramFrequencyAxisScale>::IsBound(void *this)

{
  char cVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_28);
  if ((*(int *)((longlong)this + 0x18) != 0) &&
     (*(longlong **)((longlong)this + 0x10) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// IsBound @ 14d93d2a0

bool __thiscall TAttribute<enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode>::IsBound(void *this)

{
  char cVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_28);
  if ((*(int *)((longlong)this + 0x18) != 0) &&
     (*(longlong **)((longlong)this + 0x10) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// IsBound @ 14d93d300

bool __thiscall TAttribute<enum_EAudioSpectrumPlotFrequencyAxisScale>::IsBound(void *this)

{
  char cVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_28);
  if ((*(int *)((longlong)this + 0x18) != 0) &&
     (*(longlong **)((longlong)this + 0x10) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// IsBound @ 14d93d360

bool __thiscall TAttribute<enum_EOrientation>::IsBound(void *this)

{
  char cVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_28);
  if ((*(int *)((longlong)this + 0x18) != 0) &&
     (*(longlong **)((longlong)this + 0x10) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// IsSet @ 14d93f590

bool __thiscall TAttribute<float>::IsSet(TAttribute<float> *this)

{
  return this->bIsSet;
}

