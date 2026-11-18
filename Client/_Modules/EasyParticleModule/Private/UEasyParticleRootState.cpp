// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 15

// StaticClass @ 14acb2070

UClass * __cdecl UEasyParticleRootState::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleRootState.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleRootState",
               &Z_Registration_Info_UClass_UEasyParticleRootState.InnerSingleton,
               StaticRegisterNativesUEasyParticleRootState,0x2b0,0x10,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UEasyParticleRootState>,
               InternalVTableHelperCtorCaller<UEasyParticleRootState>,local_res8,
               UEasyParticleState::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleRootState.InnerSingleton;
}

// UEasyParticleRootState @ 14acb7760

UEasyParticleRootState * __thiscall
UEasyParticleRootState::UEasyParticleRootState(UEasyParticleRootState *this,FVTableHelper *param_1)

{
  UEasyParticleState::UEasyParticleState((UEasyParticleState *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleRootState__6B_;
  return this;
}

// ~UEasyParticleRootState @ 14acb7f60

void __thiscall UEasyParticleRootState::~UEasyParticleRootState(UEasyParticleRootState *this)

{
  this->_padding_ = (longlong)&___7UEasyParticleState__6B_;
  this->_padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14acbb260

UClass * __cdecl UEasyParticleRootState::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleRootState.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleRootState",
               &Z_Registration_Info_UClass_UEasyParticleRootState.InnerSingleton,
               StaticRegisterNativesUEasyParticleRootState,0x2b0,0x10,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UEasyParticleRootState>,
               InternalVTableHelperCtorCaller<UEasyParticleRootState>,local_res8,
               UEasyParticleState::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleRootState.InnerSingleton;
}

// StaticRegisterNativesUEasyParticleRootState @ 14acbd740

void __cdecl UEasyParticleRootState::StaticRegisterNativesUEasyParticleRootState(void)

{
  return;
}

// UEasyParticleRootState @ 14acc1f80

UEasyParticleRootState * __thiscall
UEasyParticleRootState::UEasyParticleRootState
          (UEasyParticleRootState *this,FObjectInitializer *param_1)

{
  UEasyParticleState::UEasyParticleState((UEasyParticleState *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleRootState__6B_;
  this->RootComponent = (UEasyParticleComponent_Child *)0x0;
  return this;
}

// operator_delete @ 14acc2140

void __cdecl UEasyParticleRootState::operator_delete(void *param_1)

{
  FLowLevelMemTracker *this;
  
  if (param_1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,param_1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::FreeExternal(param_1);
      return;
    }
    DoGamethreadHook(2);
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,param_1);
  }
  return;
}

// Init @ 14acc4ca0

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

void __thiscall
UEasyParticleRootState::Init
          (UEasyParticleRootState *this,UEasyParticleAsset *param_1,FGeometry *param_2)

{
  bool bVar1;
  UObject *pUVar2;
  UEasyParticleComponent_Child *pUVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 local_a7 [3];
  float local_a4;
  uint local_a0;
  TArray<UEasyParticleEmitterAsset_*,TSizedDefaultAllocator<32>_> *local_98;
  UEasyParticleComponent_Basic *local_90;
  int local_88;
  UEasyParticleEmitterAsset *local_80;
  TCheckedPointerIterator<UEasyParticleEmitterAsset_*,int,0> local_78;
  UEasyParticleAsset *local_60;
  UEasyParticleComponent_Child *local_58;
  UEasyParticleComponentRuntime *local_50;
  FScriptContainerElement *local_48;
  FScriptContainerElement *local_40;
  FScriptContainerElement *local_38;
  FScriptContainerElement *local_30;
  UEasyParticleEmitterAsset **local_28;
  TCheckedPointerIterator<UEasyParticleEmitterAsset_*,int,0> local_20;
  
  if (param_1 != (UEasyParticleAsset *)0x0) {
    bVar1 = true;
    if ((this->RootComponent != (UEasyParticleComponent_Child *)0x0) &&
       (local_60 = UEasyParticleComponent_Child::GetAsset(this->RootComponent), local_60 == param_1)
       ) {
      bVar1 = false;
    }
    if (bVar1) {
      UEasyParticleState::ClearRuntimeComponent((UEasyParticleState *)this);
      pUVar2 = GetTransientPackageAsObject();
      pUVar3 = NewObject<UEasyParticleComponent_Child>(pUVar2);
      this->RootComponent = pUVar3;
      local_58 = this->RootComponent;
      UEasyParticleComponent_Child::SetAsset(local_58,param_1);
      local_50 = UEasyParticleComponent::CreateRuntimeComponent
                           ((UEasyParticleComponent *)this->RootComponent);
      UEasyParticleState::AddRuntimeComponent((UEasyParticleState *)this,local_50,param_2);
      local_a4 = 0.0;
      local_98 = &param_1->Emitters;
      local_48 = (local_98->AllocatorInstance).Data;
      local_40 = local_48;
      TCheckedPointerIterator<UEasyParticleEmitterAsset_*,int,0>::
      TCheckedPointerIterator<UEasyParticleEmitterAsset_*,int,0>
                (&local_78,&(param_1->Emitters).ArrayNum,(UEasyParticleEmitterAsset **)local_48);
      local_38 = (local_98->AllocatorInstance).Data;
      local_88 = local_98->ArrayNum;
      local_30 = local_38;
      TCheckedPointerIterator<UEasyParticleEmitterAsset_*,int,0>::
      TCheckedPointerIterator<UEasyParticleEmitterAsset_*,int,0>
                (&local_20,&local_98->ArrayNum,
                 (UEasyParticleEmitterAsset **)(local_38 + (longlong)local_88 * 8));
      do {
        if (*local_78.CurrentNum != local_78.InitialNum) {
          puVar5 = local_a7;
          for (lVar4 = 1; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          }
          `TCheckedPointerIterator<UEasyParticleEmitterAsset_*,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_a7);
        }
        local_a7[1] = local_78.Ptr != local_20.Ptr;
        local_a0 = (uint)(byte)local_a7[1];
        if (!(bool)local_a7[1]) goto LAB_14acc4f56;
        local_28 = local_78.Ptr;
        local_80 = *local_78.Ptr;
        if ((local_80 != (UEasyParticleEmitterAsset *)0x0) &&
           (local_90 = UEasyParticleEmitterAsset::GetBasicComponent(local_80),
           local_90 != (UEasyParticleComponent_Basic *)0x0)) {
          bVar1 = FMath::IsNearlyEqual<float,int>(local_90->EmitSeconds,-1);
          if (bVar1) {
            local_a4 = local_90->EmitSeconds;
LAB_14acc4f56:
            *(float *)&this->_padding_ = local_a4;
            return;
          }
          if (local_a4 < local_90->EmitSeconds) {
            local_a4 = local_90->EmitSeconds;
          }
        }
        local_78.Ptr = local_78.Ptr + 1;
      } while( true );
    }
  }
  return;
}

// IsEnd @ 14acc5ea0

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

bool __thiscall UEasyParticleRootState::IsEnd(UEasyParticleRootState *this)

{
  char cVar1;
  longlong lVar2;
  undefined1 *puVar3;
  char local_88;
  undefined1 local_87 [3];
  uint local_84;
  longlong *local_80;
  int local_78;
  UEasyParticleComponentRuntime *local_70;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0> local_68;
  UEasyParticleComponentRuntime **local_50;
  UEasyParticleComponentRuntime **local_48;
  longlong local_40;
  longlong local_38;
  UEasyParticleComponentRuntime **local_30;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0> local_28;
  
  if (((char)this->_padding_ == '\x02') || ((char)this->_padding_ == '\x03')) {
    local_88 = '\x01';
  }
  else {
    local_88 = (**(code **)(this->_padding_ + 0x2c8))(this);
    if (local_88 != '\0') {
      local_80 = &this->_padding_;
      local_50 = (UEasyParticleComponentRuntime **)*local_80;
      local_48 = local_50;
      TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>::
      TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>
                (&local_68,(int *)&this->_padding_,local_50);
      local_40 = *local_80;
      local_78 = (int)local_80[1];
      local_38 = local_40;
      TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>::
      TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>
                (&local_28,(int *)(local_80 + 1),
                 (UEasyParticleComponentRuntime **)(local_40 + (longlong)local_78 * 8));
      while( true ) {
        if (*local_68.CurrentNum != local_68.InitialNum) {
          puVar3 = local_87;
          for (lVar2 = 1; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar3 = 0;
            puVar3 = puVar3 + 1;
          }
          `TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_87);
        }
        local_87[1] = local_68.Ptr != local_28.Ptr;
        local_84 = (uint)(byte)local_87[1];
        if (!(bool)local_87[1]) break;
        local_30 = local_68.Ptr;
        local_70 = *local_68.Ptr;
        if ((local_70 != (UEasyParticleComponentRuntime *)0x0) &&
           (cVar1 = (**(code **)(local_70->_padding_ + 0x2d8))(local_70), cVar1 == '\0')) {
          local_88 = '\0';
        }
        local_68.Ptr = local_68.Ptr + 1;
      }
    }
    if (local_88 != '\0') {
      *(undefined1 *)&this->_padding_ = 2;
    }
  }
  return (bool)local_88;
}

// IsSelfEnd @ 14acc62c0

bool __thiscall UEasyParticleRootState::IsSelfEnd(UEasyParticleRootState *this)

{
  bool local_18;
  
  if ((char)this->_padding_ == '\0') {
    local_18 = FMath::IsNearlyEqual<float,int>(*(float *)&this->_padding_,-1);
    local_18 = !local_18;
    if (local_18) {
      local_18 = *(float *)&this->_padding_ < *(float *)&this->_padding_;
    }
    if (local_18 != false) {
      *(undefined1 *)&this->_padding_ = 1;
    }
  }
  else {
    local_18 = true;
  }
  return local_18;
}

// OnPaint @ 14acc6a50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

void __thiscall
UEasyParticleRootState::OnPaint
          (UEasyParticleRootState *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_88 [4];
  uint local_84;
  longlong *local_80;
  int local_78;
  UEasyParticleComponentRuntime *local_70;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0> local_68;
  UEasyParticleComponentRuntime **local_50;
  UEasyParticleComponentRuntime **local_48;
  longlong local_40;
  longlong local_38;
  UEasyParticleComponentRuntime **local_30;
  code *local_28;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0> local_20;
  
  local_80 = &this->_padding_;
  local_50 = (UEasyParticleComponentRuntime **)*local_80;
  local_48 = local_50;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>::
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>
            (&local_68,(int *)&this->_padding_,local_50);
  local_40 = *local_80;
  local_78 = (int)local_80[1];
  local_38 = local_40;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>::
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>
            (&local_20,(int *)(local_80 + 1),
             (UEasyParticleComponentRuntime **)(local_40 + (longlong)local_78 * 8));
  while( true ) {
    if (*local_68.CurrentNum != local_68.InitialNum) {
      puVar2 = local_88;
      for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      `TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_88);
    }
    local_88[1] = local_68.Ptr != local_20.Ptr;
    local_84 = (uint)(byte)local_88[1];
    if (!(bool)local_88[1]) break;
    local_30 = local_68.Ptr;
    local_70 = *local_68.Ptr;
    if (local_70 != (UEasyParticleComponentRuntime *)0x0) {
      local_28 = *(code **)(local_70->_padding_ + 0x2d0);
      (*local_28)(local_70,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    }
    local_68.Ptr = local_68.Ptr + 1;
  }
  return;
}

// Play @ 14acc7690

void __thiscall UEasyParticleRootState::Play(UEasyParticleRootState *this,FGeometry *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  (**(code **)(this->_padding_ + 0x2d8))(this);
  plVar2 = &this->_padding_;
  plVar3 = &this->_padding_;
  for (lVar1 = 0x88; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(char *)plVar3 = (char)*plVar2;
    plVar2 = (longlong *)((longlong)plVar2 + 1);
    plVar3 = (longlong *)((longlong)plVar3 + 1);
  }
  *(undefined4 *)&this->_padding_ = 0;
  UEasyParticleState::InitComponents((UEasyParticleState *)this,param_1);
  (**(code **)(this->_padding_ + 0x2b0))(this,param_1,0);
  return;
}

// Stop @ 14acc8fc0

void __thiscall UEasyParticleRootState::Stop(UEasyParticleRootState *this)

{
  (**(code **)(this->_padding_ + 0x2d8))(this);
  return;
}

// StopEmit @ 14acc9040

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

void __thiscall UEasyParticleRootState::StopEmit(UEasyParticleRootState *this)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_88 [4];
  uint local_84;
  longlong *local_80;
  int local_78;
  UEasyParticleComponent_Child_Runtime *local_70;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0> local_68;
  UEasyParticleComponentRuntime **local_50;
  UEasyParticleComponentRuntime **local_48;
  longlong local_40;
  longlong local_38;
  UEasyParticleComponentRuntime **local_30;
  UEasyParticleComponentRuntime *local_28;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0> local_20;
  
  local_80 = &this->_padding_;
  local_50 = (UEasyParticleComponentRuntime **)*local_80;
  local_48 = local_50;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>::
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>
            (&local_68,(int *)&this->_padding_,local_50);
  local_40 = *local_80;
  local_78 = (int)local_80[1];
  local_38 = local_40;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>::
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>
            (&local_20,(int *)(local_80 + 1),
             (UEasyParticleComponentRuntime **)(local_40 + (longlong)local_78 * 8));
  while( true ) {
    if (*local_68.CurrentNum != local_68.InitialNum) {
      puVar2 = local_88;
      for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      `TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_88);
    }
    local_88[1] = local_68.Ptr != local_20.Ptr;
    local_84 = (uint)(byte)local_88[1];
    if (!(bool)local_88[1]) break;
    local_30 = local_68.Ptr;
    local_28 = *local_68.Ptr;
    local_70 = Cast<UEasyParticleComponent_Child_Runtime,UEasyParticleComponentRuntime>(local_28);
    if (local_70 != (UEasyParticleComponent_Child_Runtime *)0x0) {
      UEasyParticleComponent_Child_Runtime::StopEmit(local_70);
    }
    local_68.Ptr = local_68.Ptr + 1;
  }
  return;
}

// Tick @ 14acc96b0

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

void __thiscall
UEasyParticleRootState::Tick(UEasyParticleRootState *this,FGeometry *param_1,float param_2)

{
  FName FVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  undefined1 local_135 [5];
  uint local_130;
  uint local_12c;
  longlong *local_128;
  longlong *local_120;
  int local_118;
  int local_114;
  FName local_110;
  uint local_108;
  uint uStack_104;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0> local_100;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0> local_e8;
  TAtomic<FMinimalName> local_d0;
  FName local_c8;
  UEasyParticleComponentRuntime **local_c0;
  UEasyParticleComponentRuntime **local_b8;
  longlong local_b0;
  longlong local_a8;
  UEasyParticleComponentRuntime **local_a0;
  UEasyParticleComponentRuntime *local_98;
  UEasyParticleComponentRuntime **local_90;
  UEasyParticleComponentRuntime **local_88;
  longlong local_80;
  longlong local_78;
  UEasyParticleComponentRuntime **local_70;
  UEasyParticleComponentRuntime *local_68;
  TStatIdData *local_60;
  TAtomic<FMinimalName> local_58;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0> local_48;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0> local_30;
  
  if ((FThreadStats::bPrimaryEnable) ||
     (bVar2 = EnumHasAnyFlags<enum_EStatFlags>(ClearEveryFrame,ClearEveryFrame), !bVar2)) {
    local_60 = (TStatIdData *)
               FThreadSafeStaticStatInner<FStat_STAT_EasyParticleCount,1>::GetStatId
                         ((FThreadSafeStaticStatInner<FStat_STAT_EasyParticleCount,1> *)
                          &StatPtr_STAT_EasyParticleCount);
    local_d0 = local_60->Name;
    local_58 = local_d0;
    TAtomicBase_Basic<FMinimalName>::ToStd(SequentiallyConsistent);
    std::_Atomic_storage<FMinimalName,8>::load
              ((_Atomic_storage<FMinimalName,8> *)local_d0,(memory_order)&local_c8);
    local_110 = local_c8;
    FVar1 = local_110;
    local_110.ComparisonIndex = local_c8.ComparisonIndex.Value;
    local_108 = local_110.ComparisonIndex.Value;
    local_110.Number = local_c8.Number;
    uStack_104 = local_110.Number;
    local_110 = FVar1;
    FThreadStats::AddMessage<__int64>(local_c8,Add,1,false);
  }
  if (((char)this->_padding_ != '\x02') && ((char)this->_padding_ != '\x03')) {
    plVar4 = &this->_padding_;
    plVar6 = &this->_padding_;
    for (lVar3 = 0x88; lVar3 != 0; lVar3 = lVar3 + -1) {
      *(char *)plVar6 = (char)*plVar4;
      plVar4 = (longlong *)((longlong)plVar4 + 1);
      plVar6 = (longlong *)((longlong)plVar6 + 1);
    }
    *(float *)&this->_padding_ = *(float *)&this->_padding_ + param_2;
    *(float *)&this->_padding_ = *(float *)&this->_padding_ + param_2;
    local_128 = &this->_padding_;
    local_c0 = (UEasyParticleComponentRuntime **)*local_128;
    local_b8 = local_c0;
    TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>::
    TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>
              (&local_100,(int *)&this->_padding_,local_c0);
    local_b0 = *local_128;
    local_118 = (int)local_128[1];
    local_a8 = local_b0;
    TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>::
    TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>
              (&local_48,(int *)(local_128 + 1),
               (UEasyParticleComponentRuntime **)(local_b0 + (longlong)local_118 * 8));
    while( true ) {
      if (*local_100.CurrentNum != local_100.InitialNum) {
        puVar5 = local_135;
        for (lVar3 = 1; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        `TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_135);
      }
      local_135[1] = local_100.Ptr != local_48.Ptr;
      local_130 = (uint)(byte)local_135[1];
      if (!(bool)local_135[1]) break;
      local_a0 = local_100.Ptr;
      local_98 = *local_100.Ptr;
      UEasyParticleComponentRuntime::Tick(local_98,param_1,param_2);
      local_100.Ptr = local_100.Ptr + 1;
    }
    local_120 = &this->_padding_;
    local_90 = (UEasyParticleComponentRuntime **)*local_120;
    local_88 = local_90;
    TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>::
    TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>
              (&local_e8,(int *)&this->_padding_,local_90);
    local_80 = *local_120;
    local_114 = (int)local_120[1];
    local_78 = local_80;
    TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>::
    TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>
              (&local_30,(int *)(local_120 + 1),
               (UEasyParticleComponentRuntime **)(local_80 + (longlong)local_114 * 8));
    while( true ) {
      if (*local_e8.CurrentNum != local_e8.InitialNum) {
        puVar5 = local_135 + 2;
        for (lVar3 = 1; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        `TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_135 + 2);
      }
      local_135[3] = local_e8.Ptr != local_30.Ptr;
      local_12c = (uint)(byte)local_135[3];
      if (!(bool)local_135[3]) break;
      local_70 = local_e8.Ptr;
      local_68 = *local_e8.Ptr;
      UEasyParticleComponentRuntime::PostTick(local_68,param_1,param_2);
      local_e8.Ptr = local_e8.Ptr + 1;
    }
    plVar4 = &this->_padding_;
    plVar6 = &this->_padding_;
    for (lVar3 = 0x88; lVar3 != 0; lVar3 = lVar3 + -1) {
      *(char *)plVar6 = (char)*plVar4;
      plVar4 = (longlong *)((longlong)plVar4 + 1);
      plVar6 = (longlong *)((longlong)plVar6 + 1);
    }
  }
  return;
}

