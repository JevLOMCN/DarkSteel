// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 6

// ~TArray<TWeakObjectPtr<UMaterialInstanceDynamic,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> @ 14d8bb5c0

void __thiscall
TArray<TWeakObjectPtr<UMaterialInstanceDynamic,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
~TArray<TWeakObjectPtr<UMaterialInstanceDynamic,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          (TArray<TWeakObjectPtr<UMaterialInstanceDynamic,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
           *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<FSlateRect,TSizedDefaultAllocator<32>_> @ 14d8bb5e0

void __thiscall
TArray<FSlateRect,TSizedDefaultAllocator<32>_>::~TArray<FSlateRect,TSizedDefaultAllocator<32>_>
          (TArray<FSlateRect,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// operator= @ 14d8c1860

TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_> *this,
          TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0xc);
    }
  }
  return this;
}

// operator= @ 14d8c1900

TArray<TSharedPtr<EAudioOscilloscopeTriggerMode,1>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,TSizedDefaultAllocator<32>_>::operator=
          (void *this,
          TArray<TSharedPtr<EAudioOscilloscopeTriggerMode,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  TSharedPtr<EAudioOscilloscopeTriggerMode,1> *pTVar3;
  
  if (this != param_1) {
    DestructItems<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,int>
              (*(TSharedPtr<EAudioOscilloscopeTriggerMode,1> **)this,*(int *)((longlong)this + 8));
    iVar2 = param_1->ArrayNum;
    piVar1 = (int *)((longlong)this + 0xc);
    pTVar3 = (TSharedPtr<EAudioOscilloscopeTriggerMode,1> *)(param_1->AllocatorInstance).Data;
    *(int *)((longlong)this + 8) = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,*piVar1,this,iVar2,piVar1);
    ConstructItems<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,int>
              (*(void **)this,pTVar3,iVar2);
  }
  return this;
}

// operator= @ 14d8c19a0

TArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSizedDefaultAllocator<32>_>
* __thiscall
TArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSizedDefaultAllocator<32>_>
::operator=(TArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSizedDefaultAllocator<32>_>
            *this,TArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSizedDefaultAllocator<32>_>
                  *param_1)

{
  int *piVar1;
  int iVar2;
  TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *pTVar3;
  
  if (this != param_1) {
    DestructItems<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,int>
              ((TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *)
               (this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pTVar3 = (TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *)
             (param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,int>
              ((this->AllocatorInstance).Data,pTVar3,iVar2);
  }
  return this;
}

// RemoveAtImpl @ 14d963e80

void __thiscall
TArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(TArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSizedDefaultAllocator<32>_>
               *this,int param_1,int param_2)

{
  int iVar1;
  TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *_Dst;
  
  _Dst = (TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,int>
            (_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

