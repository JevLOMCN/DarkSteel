// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FacialAnimation
// Functions: 20

// StaticClass @ 14e2ccec0

UClass * __cdecl UAudioCurveSourceComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioCurveSourceComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FacialAnimation",L"AudioCurveSourceComponent",
               &Z_Registration_Info_UClass_UAudioCurveSourceComponent.InnerSingleton,
               StaticRegisterNativesUAudioCurveSourceComponent,0xd80,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioCurveSourceComponent>,
               InternalVTableHelperCtorCaller<UAudioCurveSourceComponent>,local_res8,
               UAudioComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioCurveSourceComponent.InnerSingleton;
}

// UAudioCurveSourceComponent @ 14e2cd5c0

UAudioCurveSourceComponent * __thiscall
UAudioCurveSourceComponent::UAudioCurveSourceComponent
          (UAudioCurveSourceComponent *this,FVTableHelper *param_1)

{
  UAudioComponent::UAudioComponent((UAudioComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__UAudioComponent__;
  *(undefined ***)&this->field_0x258 =
       &
       _vftable__for__Audio__Quartz__PrivateDefs__TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>__IListenerBase__
  ;
  *(undefined ***)&this->field_0x260 = &_vftable__for__Audio__Quartz__IMetronomeEventListener__;
  *(undefined ***)&this->field_0x268 = &_vftable__for__Audio__Quartz__ICommandListener__;
  *(undefined ***)&this->field_0x270 = &_vftable__for__Audio__Quartz__IQueueCommandListener__;
  *(undefined ***)&this->field_0xd38 = &_vftable__for__ICurveSourceInterface__;
  (this->CurveSourceBindingName).ComparisonIndex = 0;
  (this->CurveSourceBindingName).Number = 0;
  (this->CachedCurveTable).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UAudioCurveSourceComponent @ 14e2cd670

UAudioCurveSourceComponent * __thiscall
UAudioCurveSourceComponent::UAudioCurveSourceComponent(UAudioCurveSourceComponent *this)

{
  void *pvVar1;
  FObjectInitializer *pFVar2;
  ulonglong uVar3;
  
  pFVar2 = FObjectInitializer::Get();
  UAudioComponent::UAudioComponent((UAudioComponent *)this,pFVar2);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  (this->CurveSourceBindingName).ComparisonIndex = 0;
  (this->CurveSourceBindingName).Number = 0;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->CachedCurveTable).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined ***)&this->field_0x250 = &_vftable__for__UAudioComponent__;
  *(undefined ***)&this->field_0x258 =
       &
       _vftable__for__Audio__Quartz__PrivateDefs__TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>__IListenerBase__
  ;
  *(undefined ***)&this->field_0x260 = &_vftable__for__Audio__Quartz__IMetronomeEventListener__;
  *(undefined ***)&this->field_0x268 = &_vftable__for__Audio__Quartz__ICommandListener__;
  *(undefined ***)&this->field_0x270 = &_vftable__for__Audio__Quartz__IQueueCommandListener__;
  *(undefined ***)&this->field_0xd38 = &_vftable__for__ICurveSourceInterface__;
  TMulticastDelegateRegistration<void___cdecl(UAudioComponent_const_*,USoundWave_const_*,float),FDefaultDelegateUserPolicy>
  ::AddUObject<UAudioCurveSourceComponent>
            ((TMulticastDelegateRegistration<void___cdecl(UAudioComponent_const_*,USoundWave_const_*,float),FDefaultDelegateUserPolicy>
              *)&this->field_0xb80,(UAudioCurveSourceComponent *)&stack0x00000008,
             (pmf_73d7adce *)this);
  this->field_0x42 = this->field_0x42 | 2;
  pvVar1 = ThreadLocalStoragePointer;
  uVar3 = (ulonglong)_tls_index;
  this->field_0x40 = 0;
  if (*(int *)(*(longlong *)((longlong)pvVar1 + uVar3 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&DefaultSourceBindingName,L"Default");
      _Init_thread_footer(&::_TSS0);
    }
  }
  this->CurveSourceBindingName = DefaultSourceBindingName;
  this->CachedCurveEvalTime = 0.0;
  this->CachedSyncPreRoll = 0.0;
  this->CachedStartTime = 0.0;
  this->CachedFadeInDuration = 0.0;
  this->CachedFadeVolumeLevel = 1.0;
  this->CachedDuration = 0.0;
  this->bCachedLooping = false;
  this->CachedFadeType = Linear;
  return this;
}

// ~UAudioCurveSourceComponent @ 14e2cd820

void __thiscall
UAudioCurveSourceComponent::~UAudioCurveSourceComponent(UAudioCurveSourceComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__UAudioComponent__;
  *(undefined ***)&this->field_0x258 =
       &
       _vftable__for__Audio__Quartz__PrivateDefs__TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>__IListenerBase__
  ;
  *(undefined ***)&this->field_0x260 = &_vftable__for__Audio__Quartz__IMetronomeEventListener__;
  *(undefined ***)&this->field_0x268 = &_vftable__for__Audio__Quartz__ICommandListener__;
  *(undefined ***)&this->field_0x270 = &_vftable__for__Audio__Quartz__IQueueCommandListener__;
  *(undefined ***)&this->field_0xd38 = &___7ICurveSourceInterface__6B_;
  UAudioComponent::~UAudioComponent((UAudioComponent *)this);
  return;
}

// CacheCurveData @ 14e2cda70

void __thiscall UAudioCurveSourceComponent::CacheCurveData(UAudioCurveSourceComponent *this)

{
  longlong *plVar1;
  FRealCurve *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FKeyHandle FVar5;
  FWeakObjectPtr FVar6;
  FRealCurve **ppFVar7;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  float fVar9;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  undefined4 *puVar8;
  
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  plVar1 = *(longlong **)&this->field_0x498;
  (this->CachedCurveTable).WeakPtr = local_res8;
  this->CachedCurveEvalTime = 0.0;
  this->CachedSyncPreRoll = 0.0;
  this->CachedDuration = 0.0;
  this->bCachedLooping = false;
  if (plVar1 != (longlong *)0x0) {
    FVar6 = (FWeakObjectPtr)(**(code **)(*plVar1 + 0x308))();
    if (FVar6 != (FWeakObjectPtr)0x0) {
      local_res8 = FVar6;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)FVar6);
      }
      FWeakObjectPtr::operator=(&(this->CachedCurveTable).WeakPtr,(FObjectPtr)&local_res8);
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c) < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          ::FName::FName(&AudioSyncCurve,L"Audio");
          _Init_thread_footer(&::_TSS0);
        }
      }
      if (AudioSyncCurve != (FName)0x0) {
        ppFVar7 = TMapBase<FName,FRealCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>_>
                  ::Find((TMapBase<FName,FRealCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>_>
                          *)((longlong)FVar6 + 0x30),AudioSyncCurve);
        if ((ppFVar7 != (FRealCurve **)0x0) && (this_00 = *ppFVar7, this_00 != (FRealCurve *)0x0)) {
          pcVar2 = *(code **)(this_00->_padding_ + 0x18);
          iVar4 = (**(code **)(this_00->_padding_ + 8))(this_00);
          if (iVar4 < 1) {
            FVar5 = FKeyHandle::Invalid();
            puVar8 = (undefined4 *)CONCAT44(extraout_var_00,FVar5.Index);
          }
          else {
            FVar5 = FIndexedCurve::GetKeyHandle((FIndexedCurve *)this_00,(int)&local_res8);
            puVar8 = (undefined4 *)CONCAT44(extraout_var,FVar5.Index);
          }
          fVar9 = (float)(*pcVar2)(this_00,*puVar8);
          this->CachedSyncPreRoll = fVar9;
        }
      }
      this->CachedDuration = *(float *)((longlong)*(longlong **)&this->field_0x498 + 0x10c);
      bVar3 = (bool)(**(code **)(**(longlong **)&this->field_0x498 + 0x310))();
      this->bCachedLooping = bVar3;
    }
  }
  return;
}

// FadeIn @ 14e2cdf50

void __thiscall
UAudioCurveSourceComponent::FadeIn
          (UAudioCurveSourceComponent *this,float param_1,float param_2,float param_3,
          EAudioFaderCurve param_4)

{
  PlayInternalRequestData local_a8;
  
  CacheCurveData(this);
  if (0.0 < this->CachedSyncPreRoll) {
    this->CachedFadeType = param_4;
    this->Delay = 0.0;
    this->CachedFadeInDuration = param_1;
    this->CachedFadeVolumeLevel = param_2;
    this->CachedStartTime = param_3;
  }
  else {
    local_a8.QuantizedRequestData.ClockName.ComparisonIndex.Value = 0;
    local_a8.QuantizedRequestData.ClockName.Number = 0;
    local_a8.QuantizedRequestData.OtherClockName.ComparisonIndex.Value = 0;
    local_a8.QuantizedRequestData.OtherClockName.Number = 0;
    local_a8.QuantizedRequestData.QuantizationBoundary.bResumeClockOnQueued = false;
    local_a8.QuantizedRequestData.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data
         = (FScriptContainerElement *)0x0;
    local_a8.QuantizedRequestData.QuantizationBoundary.GameThreadSubscribers.ArrayNum = 0;
    local_a8.QuantizedRequestData.QuantizationBoundary.GameThreadSubscribers.ArrayMax = 0;
    local_a8.QuantizedRequestData.GameThreadSubscribers.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_a8.QuantizedRequestData.GameThreadSubscribers.ArrayNum = 0;
    local_a8.QuantizedRequestData.GameThreadSubscribers.ArrayMax = 0;
    local_a8.FadeCurve = param_4;
    local_a8.QuantizedRequestData.QuantizedCommandPtr.Object = (IQuartzQuantizedCommand *)0x0;
    local_a8.QuantizedRequestData.QuantizedCommandPtr.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_a8.QuantizedRequestData.QuantizationBoundary.Quantization = Tick;
    local_a8.QuantizedRequestData.QuantizationBoundary.Multiplier = 1.0;
    local_a8.QuantizedRequestData.QuantizationBoundary.CountingReferencePoint = BarRelative;
    local_a8.QuantizedRequestData.QuantizationBoundary.bFireOnClockStart = true;
    local_a8.QuantizedRequestData.QuantizationBoundary.bCancelCommandIfClockIsNotRunning = false;
    local_a8.QuantizedRequestData.QuantizationBoundary.bResetClockOnQueued = false;
    local_a8.QuantizedRequestData.GameThreadDelegateID = -1;
    local_a8.StartTime = param_3;
    local_a8.FadeInDuration = param_1;
    local_a8.FadeVolumeLevel = param_2;
    UAudioComponent::PlayInternal((UAudioComponent *)this,&local_a8,(USoundBase *)0x0);
    DestructItems<Audio::FQuartzGameThreadSubscriber,int>
              ((FQuartzGameThreadSubscriber *)
               local_a8.QuantizedRequestData.GameThreadSubscribers.AllocatorInstance.Data,
               local_a8.QuantizedRequestData.GameThreadSubscribers.ArrayNum);
    if ((FQuartzGameThreadSubscriber *)
        local_a8.QuantizedRequestData.GameThreadSubscribers.AllocatorInstance.Data !=
        (FQuartzGameThreadSubscriber *)0x0) {
      FMemory::Free(local_a8.QuantizedRequestData.GameThreadSubscribers.AllocatorInstance.Data);
    }
    DestructItems<Audio::FQuartzGameThreadSubscriber,int>
              ((FQuartzGameThreadSubscriber *)
               local_a8.QuantizedRequestData.QuantizationBoundary.GameThreadSubscribers.
               AllocatorInstance.Data,
               local_a8.QuantizedRequestData.QuantizationBoundary.GameThreadSubscribers.ArrayNum);
    if ((FQuartzGameThreadSubscriber *)
        local_a8.QuantizedRequestData.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.
        Data != (FQuartzGameThreadSubscriber *)0x0) {
      FMemory::Free(local_a8.QuantizedRequestData.QuantizationBoundary.GameThreadSubscribers.
                    AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.QuantizedRequestData.QuantizedCommandPtr.SharedReferenceCount.
               ReferenceController);
  }
  return;
}

// FadeOut @ 14e2ce090

void __thiscall
UAudioCurveSourceComponent::FadeOut
          (UAudioCurveSourceComponent *this,float param_1,float param_2,EAudioFaderCurve param_3)

{
  FWeakObjectPtr local_res8;
  undefined8 local_18 [2];
  
  if (this->Delay <= this->CachedSyncPreRoll && this->CachedSyncPreRoll != this->Delay) {
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_18);
    this->CachedCurveEvalTime = 0.0;
    this->CachedSyncPreRoll = 0.0;
    this->Delay = 0.0;
    (this->CachedCurveTable).WeakPtr = local_res8;
    return;
  }
  UAudioComponent::FadeOut((UAudioComponent *)this,param_1,param_2,param_3);
  return;
}

// GetBindingName_Implementation @ 14e2ce120

FName __thiscall
UAudioCurveSourceComponent::GetBindingName_Implementation(UAudioCurveSourceComponent *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = *(undefined8 *)&this->field_0x8;
  return in_RDX;
}

// GetCurveValue_Implementation @ 14e2ce160

float __thiscall
UAudioCurveSourceComponent::GetCurveValue_Implementation
          (UAudioCurveSourceComponent *this,FName param_1)

{
  FRealCurve *pFVar1;
  char cVar2;
  UObject *pUVar3;
  FRealCurve **ppFVar4;
  float fVar5;
  
  cVar2 = (**(code **)(*(longlong *)&this[-1].field_0x298 + 0xa8))();
  if (cVar2 != '\0') {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x18);
    if ((pUVar3 != (UObject *)0x0) && (param_1 != (FName)0x0)) {
      ppFVar4 = TMapBase<FName,FRealCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>_>
                ::Find((TMapBase<FName,FRealCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>_>
                        *)&pUVar3[1].field_0x8,param_1);
      if ((ppFVar4 != (FRealCurve **)0x0) && (pFVar1 = *ppFVar4, pFVar1 != (FRealCurve *)0x0)) {
        fVar5 = (float)(**(code **)(pFVar1->_padding_ + 0x88))
                                 (pFVar1,*(undefined4 *)&this->field_0x14,0);
        return fVar5;
      }
    }
  }
  return 0.0;
}

// GetCurves_Implementation @ 14e2ce1f0

void __thiscall
UAudioCurveSourceComponent::GetCurves_Implementation
          (UAudioCurveSourceComponent *this,
          TArray<FNamedCurveValue,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  FScriptContainerElement *pFVar6;
  longlong *plVar7;
  char cVar8;
  bool bVar9;
  UObject *pUVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  float fVar15;
  float fVar16;
  undefined8 local_138;
  float local_130;
  undefined8 local_12c;
  undefined4 local_124;
  undefined1 *local_120;
  int iStack_118;
  uint uStack_114;
  undefined1 *local_110;
  undefined4 uStack_108;
  int iStack_104;
  int local_100;
  undefined4 uStack_fc;
  longlong *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  longlong *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined4 local_84;
  undefined4 local_64;
  
  cVar8 = (**(code **)(*(longlong *)&this[-1].field_0x298 + 0xa8))();
  if ((cVar8 != '\0') &&
     (pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x18), pUVar10 != (UObject *)0x0)
     ) {
    uVar13 = *(int *)&pUVar10[1].field_0x10 - *(int *)&pUVar10[2].field_0x14;
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
    iVar12 = 0;
    piVar1 = &param_1->ArrayMax;
    param_1->ArrayNum = 0;
    if (param_1->ArrayMax < (int)uVar13) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar13,&param_1->AllocatorInstance,0,piVar1);
    }
    if ((((this->field_0x38 == '\0') || (fVar15 = *(float *)&this->field_0x20, fVar15 <= 0.0)) ||
        (*(float *)&this->field_0x30 <= fVar15 && fVar15 != *(float *)&this->field_0x30)) ||
       (fVar15 = *(float *)&this->field_0x34 - fVar15,
       *(float *)&this->field_0x14 <= fVar15 && fVar15 != *(float *)&this->field_0x14)) {
      local_120 = &pUVar10[1].field_0x8;
      iVar3 = *(int *)&pUVar10[2].field_0x8;
      local_110 = &pUVar10[1].field_0x18;
      uStack_114 = 1;
      local_100 = 0;
      iStack_104 = 0;
      if (iVar3 != 0) {
        puVar14 = *(uint **)(pUVar10 + 2);
        if (*(uint **)(pUVar10 + 2) == (uint *)0x0) {
          puVar14 = (uint *)local_110;
        }
        uVar13 = *puVar14;
        while (uVar13 == 0) {
          lVar11 = (longlong)iVar12;
          local_100 = local_100 + 0x20;
          iVar12 = iVar12 + 1;
          iStack_104 = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14e2ce58e;
          uVar13 = puVar14[lVar11 + 1];
        }
        uStack_114 = -uVar13 & uVar13;
        uVar2 = (ulonglong)uStack_114 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iStack_104 = local_100 + -1 + (int)lVar11;
        if (iVar3 < iStack_104) {
          iStack_104 = iVar3;
        }
      }
LAB_14e2ce58e:
      uStack_108 = 0xffffffff;
      uStack_fc = local_64;
      TStack_c0._padding_ = CONCAT44(uStack_114,iVar12);
      TStack_c0.UnvisitedBitMask = 0xffffffff;
      TStack_c0._28_4_ = local_64;
      TStack_c0.BaseBitIndex = local_100;
      iStack_118 = iVar12;
      local_c8 = (longlong *)local_120;
      TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_110;
      TStack_c0.CurrentBitIndex = iStack_104;
      if (iStack_104 < iVar3) {
        do {
          local_12c = *(undefined8 *)(*local_c8 + (longlong)TStack_c0.CurrentBitIndex * 0x18);
          plVar4 = *(longlong **)(*local_c8 + 8 + (longlong)TStack_c0.CurrentBitIndex * 0x18);
          local_124 = (**(code **)(*plVar4 + 0x88))(plVar4,*(undefined4 *)&this->field_0x14,0);
          pFVar6 = (param_1->AllocatorInstance).Data;
          if (((pFVar6 <= (FScriptContainerElement *)&local_12c) &&
              ((FScriptContainerElement *)&local_12c < pFVar6 + (longlong)*piVar1 * 0xc)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar12 = param_1->ArrayNum;
          if (iVar12 == *piVar1) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x40c,&param_1->AllocatorInstance,piVar1);
          }
          param_1->ArrayNum = iVar12 + 1;
          pFVar6 = (param_1->AllocatorInstance).Data;
          *(undefined8 *)(pFVar6 + (longlong)iVar12 * 0xc) = local_12c;
          *(undefined4 *)(pFVar6 + (longlong)iVar12 * 0xc + 8) = local_124;
          TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
        } while (TStack_c0.CurrentBitIndex < (TStack_c0.Array)->NumBits);
      }
    }
    else {
      local_120 = &pUVar10[1].field_0x8;
      iVar3 = *(int *)&pUVar10[2].field_0x8;
      local_110 = &pUVar10[1].field_0x18;
      uStack_114 = 1;
      local_100 = 0;
      iStack_104 = 0;
      if (iVar3 != 0) {
        puVar14 = *(uint **)(pUVar10 + 2);
        if (*(uint **)(pUVar10 + 2) == (uint *)0x0) {
          puVar14 = (uint *)local_110;
        }
        uVar13 = *puVar14;
        while (uVar13 == 0) {
          lVar11 = (longlong)iVar12;
          local_100 = local_100 + 0x20;
          iVar12 = iVar12 + 1;
          iStack_104 = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14e2ce35e;
          uVar13 = puVar14[lVar11 + 1];
        }
        uStack_114 = -uVar13 & uVar13;
        uVar2 = (ulonglong)uStack_114 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iStack_104 = local_100 + -1 + (int)lVar11;
        if (iVar3 < iStack_104) {
          iStack_104 = iVar3;
        }
      }
LAB_14e2ce35e:
      uStack_108 = 0xffffffff;
      uStack_fc = local_84;
      TStack_e8._padding_ = CONCAT44(uStack_114,iVar12);
      TStack_e8.UnvisitedBitMask = 0xffffffff;
      TStack_e8._28_4_ = local_84;
      TStack_e8.BaseBitIndex = local_100;
      iStack_118 = iVar12;
      local_f0 = (longlong *)local_120;
      TStack_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_110;
      TStack_e8.CurrentBitIndex = iStack_104;
      if (iStack_104 < iVar3) {
        do {
          iVar12 = TStack_e8.CurrentBitIndex;
          plVar7 = local_f0;
          plVar4 = *(longlong **)(*local_f0 + 8 + (longlong)TStack_e8.CurrentBitIndex * 0x18);
          fVar15 = (float)(**(code **)(*plVar4 + 0x88))(plVar4,*(undefined4 *)&this->field_0x14,0);
          pcVar5 = *(code **)(*plVar4 + 0x88);
          fVar16 = FGenericPlatformMath::Fmod
                             (*(float *)&this->field_0x14,*(float *)&this->field_0x34);
          local_130 = (float)(*pcVar5)(plVar4,fVar16,0);
          pFVar6 = (param_1->AllocatorInstance).Data;
          if (local_130 <= fVar15) {
            local_130 = fVar15;
          }
          local_138 = *(undefined8 *)(*plVar7 + (longlong)iVar12 * 0x18);
          if (((pFVar6 <= (FScriptContainerElement *)&local_138) &&
              ((FScriptContainerElement *)&local_138 < pFVar6 + (longlong)*piVar1 * 0xc)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar12 = param_1->ArrayNum;
          if (iVar12 == *piVar1) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x40c,&param_1->AllocatorInstance,piVar1);
          }
          param_1->ArrayNum = iVar12 + 1;
          pFVar6 = (param_1->AllocatorInstance).Data;
          *(undefined8 *)(pFVar6 + (longlong)iVar12 * 0xc) = local_138;
          *(float *)(pFVar6 + (longlong)iVar12 * 0xc + 8) = local_130;
          TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
        } while (TStack_e8.CurrentBitIndex < (TStack_e8.Array)->NumBits);
      }
    }
  }
  return;
}

// GetPrivateStaticClass @ 14e2ce750

UClass * __cdecl UAudioCurveSourceComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioCurveSourceComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FacialAnimation",L"AudioCurveSourceComponent",
               &Z_Registration_Info_UClass_UAudioCurveSourceComponent.InnerSingleton,
               StaticRegisterNativesUAudioCurveSourceComponent,0xd80,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioCurveSourceComponent>,
               InternalVTableHelperCtorCaller<UAudioCurveSourceComponent>,local_res8,
               UAudioComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioCurveSourceComponent.InnerSingleton;
}

// HandlePlaybackPercent @ 14e2ce820

void __thiscall
UAudioCurveSourceComponent::HandlePlaybackPercent
          (UAudioCurveSourceComponent *this,UAudioComponent *param_1,USoundWave *param_2,
          float param_3)

{
  bool bVar1;
  UObject *local_res8;
  
  local_res8 = (UObject *)(**(code **)(param_2->_padding_ + 0x308))(param_2);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  FWeakObjectPtr::operator=(&(this->CachedCurveTable).WeakPtr,(FObjectPtr)&local_res8);
  this->CachedDuration = *(float *)((longlong)&param_2->_padding_ + 4);
  this->CachedCurveEvalTime =
       this->Delay + this->CurveSyncOffset + param_3 * *(float *)((longlong)&param_2->_padding_ + 4)
  ;
  bVar1 = (bool)(**(code **)(param_2->_padding_ + 0x310))(param_2);
  this->bCachedLooping = bVar1;
  return;
}

// IsPlaying @ 14e2ce950

bool __thiscall UAudioCurveSourceComponent::IsPlaying(UAudioCurveSourceComponent *this)

{
  bool bVar1;
  
  if (*(float *)&this->field_0xb08 < *(float *)&this->field_0xb18 ||
      *(float *)&this->field_0xb08 == *(float *)&this->field_0xb18) {
    bVar1 = UAudioComponent::IsPlaying((UAudioComponent *)this);
    if (!bVar1) {
      return false;
    }
  }
  return true;
}

// Play @ 14e2ce9a0

void __thiscall UAudioCurveSourceComponent::Play(UAudioCurveSourceComponent *this,float param_1)

{
  PlayInternalRequestData local_88;
  
  CacheCurveData(this);
  if (0.0 < this->CachedSyncPreRoll) {
    this->CachedStartTime = 0.0;
    this->CachedFadeInDuration = 0.0;
    this->CachedFadeVolumeLevel = 1.0;
    this->Delay = 0.0;
  }
  else {
    local_88.FadeInDuration = 0.0;
    local_88.FadeVolumeLevel = 1.0;
    local_88.FadeCurve = Linear;
    local_88.QuantizedRequestData.ClockName.ComparisonIndex.Value = 0;
    local_88.QuantizedRequestData.ClockName.Number = 0;
    local_88.QuantizedRequestData.OtherClockName.ComparisonIndex.Value = 0;
    local_88.QuantizedRequestData.OtherClockName.Number = 0;
    local_88.QuantizedRequestData.QuantizedCommandPtr.Object = (IQuartzQuantizedCommand *)0x0;
    local_88.QuantizedRequestData.QuantizedCommandPtr.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_88.QuantizedRequestData.QuantizationBoundary.Quantization = Tick;
    local_88.QuantizedRequestData.QuantizationBoundary.Multiplier = 1.0;
    local_88.QuantizedRequestData.QuantizationBoundary.CountingReferencePoint = BarRelative;
    local_88.QuantizedRequestData.QuantizationBoundary.bFireOnClockStart = true;
    local_88.QuantizedRequestData.QuantizationBoundary.bCancelCommandIfClockIsNotRunning = false;
    local_88.QuantizedRequestData.QuantizationBoundary.bResetClockOnQueued = false;
    local_88.QuantizedRequestData.QuantizationBoundary.bResumeClockOnQueued = false;
    local_88.QuantizedRequestData.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data
         = (FScriptContainerElement *)0x0;
    local_88.QuantizedRequestData.QuantizationBoundary.GameThreadSubscribers.ArrayNum = 0;
    local_88.QuantizedRequestData.QuantizationBoundary.GameThreadSubscribers.ArrayMax = 0;
    local_88.QuantizedRequestData.GameThreadSubscribers.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_88.QuantizedRequestData.GameThreadSubscribers.ArrayNum = 0;
    local_88.QuantizedRequestData.GameThreadSubscribers.ArrayMax = 0;
    local_88.QuantizedRequestData.GameThreadDelegateID = -1;
    local_88.StartTime = param_1;
    UAudioComponent::PlayInternal((UAudioComponent *)this,&local_88,(USoundBase *)0x0);
    DestructItems<Audio::FQuartzGameThreadSubscriber,int>
              ((FQuartzGameThreadSubscriber *)
               local_88.QuantizedRequestData.GameThreadSubscribers.AllocatorInstance.Data,
               local_88.QuantizedRequestData.GameThreadSubscribers.ArrayNum);
    if ((FQuartzGameThreadSubscriber *)
        local_88.QuantizedRequestData.GameThreadSubscribers.AllocatorInstance.Data !=
        (FQuartzGameThreadSubscriber *)0x0) {
      FMemory::Free(local_88.QuantizedRequestData.GameThreadSubscribers.AllocatorInstance.Data);
    }
    DestructItems<Audio::FQuartzGameThreadSubscriber,int>
              ((FQuartzGameThreadSubscriber *)
               local_88.QuantizedRequestData.QuantizationBoundary.GameThreadSubscribers.
               AllocatorInstance.Data,
               local_88.QuantizedRequestData.QuantizationBoundary.GameThreadSubscribers.ArrayNum);
    if ((FQuartzGameThreadSubscriber *)
        local_88.QuantizedRequestData.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.
        Data != (FQuartzGameThreadSubscriber *)0x0) {
      FMemory::Free(local_88.QuantizedRequestData.QuantizationBoundary.GameThreadSubscribers.
                    AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.QuantizedRequestData.QuantizedCommandPtr.SharedReferenceCount.
               ReferenceController);
  }
  return;
}

// StaticRegisterNativesUAudioCurveSourceComponent @ 14e2ceab0

void __cdecl UAudioCurveSourceComponent::StaticRegisterNativesUAudioCurveSourceComponent(void)

{
  return;
}

// Stop @ 14e2ceac0

void __thiscall UAudioCurveSourceComponent::Stop(UAudioCurveSourceComponent *this)

{
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  if (this->Delay <= this->CachedSyncPreRoll && this->CachedSyncPreRoll != this->Delay) {
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = 0;
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    this->CachedCurveEvalTime = 0.0;
    this->CachedSyncPreRoll = 0.0;
    this->Delay = 0.0;
    (this->CachedCurveTable).WeakPtr = local_res8;
    return;
  }
  UAudioComponent::Stop((UAudioComponent *)this);
  return;
}

// TickComponent @ 14e2ceb40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UAudioCurveSourceComponent::TickComponent
          (UAudioCurveSourceComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  PlayInternalRequestData local_78;
  
  fVar1 = this->Delay;
  fVar2 = this->CachedSyncPreRoll;
  fVar3 = fVar1 + param_1;
  if (fVar2 <= fVar3) {
    fVar3 = fVar2;
  }
  this->Delay = fVar3;
  if (fVar2 <= fVar1) {
    if (fVar2 <= fVar3) {
      return;
    }
  }
  else if (fVar2 <= fVar3) {
    local_78.FadeInDuration = this->CachedFadeInDuration;
    local_78.QuantizedRequestData.ClockName.ComparisonIndex.Value = 0;
    local_78.QuantizedRequestData.ClockName.Number = 0;
    local_78.QuantizedRequestData.QuantizedCommandPtr.Object = (IQuartzQuantizedCommand *)0x0;
    local_78.QuantizedRequestData.QuantizedCommandPtr.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_78.StartTime = this->CachedStartTime;
    local_78.FadeVolumeLevel = this->CachedFadeVolumeLevel;
    local_78.QuantizedRequestData.OtherClockName.ComparisonIndex.Value = 0;
    local_78.QuantizedRequestData.OtherClockName.Number = 0;
    local_78.QuantizedRequestData.QuantizationBoundary.bResumeClockOnQueued = false;
    local_78.QuantizedRequestData.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data
         = (FScriptContainerElement *)0x0;
    local_78.QuantizedRequestData.QuantizationBoundary.GameThreadSubscribers.ArrayNum = 0;
    local_78.QuantizedRequestData.QuantizationBoundary.GameThreadSubscribers.ArrayMax = 0;
    local_78.QuantizedRequestData.GameThreadSubscribers.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_78.QuantizedRequestData.GameThreadSubscribers.ArrayNum = 0;
    local_78.QuantizedRequestData.GameThreadSubscribers.ArrayMax = 0;
    local_78.FadeCurve = this->CachedFadeType;
    local_78.QuantizedRequestData.QuantizationBoundary.Quantization = Tick;
    local_78.QuantizedRequestData.QuantizationBoundary.Multiplier = 1.0;
    local_78.QuantizedRequestData.QuantizationBoundary.CountingReferencePoint = BarRelative;
    local_78.QuantizedRequestData.QuantizationBoundary.bFireOnClockStart = true;
    local_78.QuantizedRequestData.QuantizationBoundary.bCancelCommandIfClockIsNotRunning = false;
    local_78.QuantizedRequestData.QuantizationBoundary.bResetClockOnQueued = false;
    local_78.QuantizedRequestData.GameThreadDelegateID = -1;
    UAudioComponent::PlayInternal((UAudioComponent *)this,&local_78,(USoundBase *)0x0);
    DestructItems<Audio::FQuartzGameThreadSubscriber,int>
              ((FQuartzGameThreadSubscriber *)
               local_78.QuantizedRequestData.GameThreadSubscribers.AllocatorInstance.Data,
               local_78.QuantizedRequestData.GameThreadSubscribers.ArrayNum);
    if ((FQuartzGameThreadSubscriber *)
        local_78.QuantizedRequestData.GameThreadSubscribers.AllocatorInstance.Data !=
        (FQuartzGameThreadSubscriber *)0x0) {
      FMemory::Free(local_78.QuantizedRequestData.GameThreadSubscribers.AllocatorInstance.Data);
    }
    DestructItems<Audio::FQuartzGameThreadSubscriber,int>
              ((FQuartzGameThreadSubscriber *)
               local_78.QuantizedRequestData.QuantizationBoundary.GameThreadSubscribers.
               AllocatorInstance.Data,
               local_78.QuantizedRequestData.QuantizationBoundary.GameThreadSubscribers.ArrayNum);
    if ((FQuartzGameThreadSubscriber *)
        local_78.QuantizedRequestData.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.
        Data != (FQuartzGameThreadSubscriber *)0x0) {
      FMemory::Free(local_78.QuantizedRequestData.QuantizationBoundary.GameThreadSubscribers.
                    AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.QuantizedRequestData.QuantizedCommandPtr.SharedReferenceCount.
               ReferenceController);
    return;
  }
  this->CachedCurveEvalTime = fVar3;
  return;
}

// _getUObject @ 14e2ced40

UObject * __thiscall UAudioCurveSourceComponent::_getUObject(UAudioCurveSourceComponent *this)

{
  return (UObject *)&this[-1].CachedSyncPreRoll;
}

// _getUObject`adjustor{552}' @ 14e2ced4c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UAudioCurveSourceComponent::_getUObject`adjustor{552}' (void)const __ptr64 */

UObject * __thiscall
UAudioCurveSourceComponent::_getUObject_adjustor_552__(UAudioCurveSourceComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UAudioCurveSourceComponent *)&this[-1].field_0xb58);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{3344}' @ 14e2ced60

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UAudioCurveSourceComponent::_getUObject`adjustor{3344}' (void)const __ptr64 */

UObject * __thiscall
UAudioCurveSourceComponent::_getUObject_adjustor_3344__(UAudioCurveSourceComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UAudioCurveSourceComponent *)&this[-1].field_0x70);
  return (UObject *)pUVar1;
}

