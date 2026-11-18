// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 27

// StaticClass @ 14acb1d00

UClass * __cdecl UEasyParticleState::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleState.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleState",
               &Z_Registration_Info_UClass_UEasyParticleState.InnerSingleton,
               StaticRegisterNativesUEasyParticleState,0x2b0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEasyParticleState>,
               InternalVTableHelperCtorCaller<UEasyParticleState>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleState.InnerSingleton;
}

// UEasyParticleState @ 14acb7790

UEasyParticleState * __thiscall
UEasyParticleState::UEasyParticleState(UEasyParticleState *this,FVTableHelper *param_1)

{
  FLinearColor FVar1;
  TVector2<double> TVar2;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UEasyParticleState__6B_;
  (this->Components).ArrayNum = 0;
  (this->Components).ArrayMax = 0;
  (this->Components).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InitialState).Lifetime = 0.0;
  (this->InitialState).Velocity.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->InitialState).Position.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar2 = UE::Math::TVector2<double>::ZeroVector;
  (this->InitialState).Rotation = 0.0;
  (this->InitialState).RotationRate = 0.0;
  (this->InitialState).Size.field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar2.field0_0x0;
  FVar1 = FLinearColor::White;
  (this->InitialState).AutoSizeScale = 1.0;
  (this->InitialState).Color.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  TVar2 = UE::Math::TVector2<double>::ZeroVector;
  (this->InitialState).ZOrderOffset = 0.0;
  (this->InitialState).DrawEffect = None;
  (this->InitialState).WidgetPositionAbsolute.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)TVar2.field0_0x0;
  (this->InitialState).RootEmitterLifetime = 0.0;
  (this->InitialState).Pivot.field0_0x0._s_0.X = 0.5;
  (this->InitialState).Pivot.field0_0x0._s_0.Y = 0.5;
  (this->CurrentState).Lifetime = 0.0;
  (this->CurrentState).Velocity.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->CurrentState).Position.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar2 = UE::Math::TVector2<double>::ZeroVector;
  (this->CurrentState).Rotation = 0.0;
  (this->CurrentState).RotationRate = 0.0;
  (this->CurrentState).Size.field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar2.field0_0x0;
  FVar1 = FLinearColor::White;
  (this->CurrentState).AutoSizeScale = 1.0;
  (this->CurrentState).Color.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  TVar2 = UE::Math::TVector2<double>::ZeroVector;
  (this->CurrentState).ZOrderOffset = 0.0;
  (this->CurrentState).DrawEffect = None;
  (this->CurrentState).WidgetPositionAbsolute.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)TVar2.field0_0x0;
  (this->CurrentState).RootEmitterLifetime = 0.0;
  (this->CurrentState).Pivot.field0_0x0._s_0.X = 0.5;
  (this->CurrentState).Pivot.field0_0x0._s_0.Y = 0.5;
  (this->BackBufferState).Lifetime = 0.0;
  (this->BackBufferState).Velocity.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->BackBufferState).Position.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar2 = UE::Math::TVector2<double>::ZeroVector;
  (this->BackBufferState).Rotation = 0.0;
  (this->BackBufferState).RotationRate = 0.0;
  (this->BackBufferState).Size.field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar2.field0_0x0;
  FVar1 = FLinearColor::White;
  (this->BackBufferState).AutoSizeScale = 1.0;
  (this->BackBufferState).Color.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  TVar2 = UE::Math::TVector2<double>::ZeroVector;
  (this->BackBufferState).ZOrderOffset = 0.0;
  (this->BackBufferState).DrawEffect = None;
  (this->BackBufferState).WidgetPositionAbsolute.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)TVar2.field0_0x0;
  (this->BackBufferState).RootEmitterLifetime = 0.0;
  (this->BackBufferState).Pivot.field0_0x0._s_0.X = 0.5;
  (this->BackBufferState).Pivot.field0_0x0._s_0.Y = 0.5;
  FSlateBrush::FSlateBrush(&this->Brush);
  return this;
}

// ~UEasyParticleState @ 14acb7fb0

void __thiscall UEasyParticleState::~UEasyParticleState(UEasyParticleState *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &___7UEasyParticleState__6B_;
  (this->Brush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Brush).ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  pFVar1 = (this->Components).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14acbb320

UClass * __cdecl UEasyParticleState::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleState.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleState",
               &Z_Registration_Info_UClass_UEasyParticleState.InnerSingleton,
               StaticRegisterNativesUEasyParticleState,0x2b0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEasyParticleState>,
               InternalVTableHelperCtorCaller<UEasyParticleState>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleState.InnerSingleton;
}

// StaticRegisterNativesUEasyParticleState @ 14acbd750

void __cdecl UEasyParticleState::StaticRegisterNativesUEasyParticleState(void)

{
  return;
}

// UEasyParticleState @ 14acc1fd0

UEasyParticleState * __thiscall
UEasyParticleState::UEasyParticleState(UEasyParticleState *this,FObjectInitializer *param_1)

{
  int iVar1;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UEasyParticleState__6B_;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&(this->Components).AllocatorInstance);
  (this->Components).ArrayNum = 0;
  iVar1 = TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                    (&(this->Components).AllocatorInstance);
  (this->Components).ArrayMax = iVar1;
  this->Asset = (UEasyParticleEmitterAsset *)0x0;
  FEasyParticleStateRuntime::FEasyParticleStateRuntime(&this->InitialState);
  FEasyParticleStateRuntime::FEasyParticleStateRuntime(&this->CurrentState);
  FEasyParticleStateRuntime::FEasyParticleStateRuntime(&this->BackBufferState);
  this->ParentComponent = (UEasyParticleComponent_Child_Runtime *)0x0;
  this->State = ACTIVE;
  FSlateBrush::FSlateBrush(&this->Brush);
  this->ChildLayer = 0;
  TArray<UEasyParticleComponentRuntime_*,TSizedDefaultAllocator<32>_>::Empty(&this->Components,0);
  FEasyParticleStateRuntime::Reset(&this->InitialState);
  FEasyParticleStateRuntime::Reset(&this->CurrentState);
  FEasyParticleStateRuntime::Reset(&this->BackBufferState);
  return this;
}

// operator_delete @ 14acc2150

void __cdecl UEasyParticleState::operator_delete(void *param_1)

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

// AddRuntimeComponent @ 14acc23a0

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

void __thiscall
UEasyParticleState::AddRuntimeComponent
          (UEasyParticleState *this,UEasyParticleComponentRuntime *param_1,FGeometry *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArray<UEasyParticleComponentRuntime_*,TSizedDefaultAllocator<32>_> *pTVar4;
  undefined8 *puVar5;
  UEasyParticleComponentRuntime *local_res10;
  FGeometry *local_res18;
  
  if (param_1 != (UEasyParticleComponentRuntime *)0x0) {
    local_res10 = param_1;
    local_res18 = param_2;
    UEasyParticleComponentRuntime::SetOwner(param_1,this);
    UEasyParticleComponentRuntime::Init(local_res10,local_res18);
    pTVar4 = &this->Components;
    if (((pTVar4->AllocatorInstance).Data <= (FScriptContainerElement *)&local_res10) &&
       ((FScriptContainerElement *)&local_res10 <
        (pTVar4->AllocatorInstance).Data + (longlong)(this->Components).ArrayMax * 8)) {
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((this->Components).ArrayNum == (this->Components).ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar4->AllocatorInstance,&(this->Components).ArrayMax);
      (this->Components).ArrayNum = iVar3;
    }
    iVar3 = (this->Components).ArrayNum;
    (this->Components).ArrayNum = (this->Components).ArrayNum + 1;
    puVar5 = ::operator_new(8,(pTVar4->AllocatorInstance).Data + (longlong)iVar3 * 8);
    *puVar5 = local_res10;
  }
  return;
}

// ClearRuntimeComponent @ 14acc2640

void __thiscall UEasyParticleState::ClearRuntimeComponent(UEasyParticleState *this)

{
  TArray<UEasyParticleComponentRuntime_*,TSizedDefaultAllocator<32>_>::Empty(&this->Components,0);
  return;
}

// CreateParticle @ 14acc2820

UEasyParticleState * __cdecl
UEasyParticleState::CreateParticle
          (UEasyParticleEmitterAsset *param_1,UEasyParticleComponent_Child_Runtime *param_2,
          FGeometry *param_3,int param_4)

{
  UObject *pUVar1;
  undefined8 local_18;
  
  local_18 = (UEasyParticleState *)0x0;
  if (param_1 != (UEasyParticleEmitterAsset *)0x0) {
    pUVar1 = GetTransientPackageAsObject();
    local_18 = NewObject<UEasyParticleState>(pUVar1);
    Init(local_18,param_1,param_2,param_3,param_4);
  }
  return local_18;
}

// GetBasicComponent @ 14acc3a90

/* WARNING: Removing unreachable block (ram,0x00014acc3ae1) */
/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_Basic_Runtime * __thiscall
UEasyParticleState::GetBasicComponent(UEasyParticleState *this)

{
  code *pcVar1;
  bool bVar2;
  UEasyParticleComponent_Basic_Runtime *pUVar3;
  UEasyParticleComponent_Basic_Runtime *local_40;
  
  local_40 = (UEasyParticleComponent_Basic_Runtime *)0x0;
  if (0 < (this->Components).ArrayNum) {
    if ((this->Components).ArrayNum < 1) {
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UEasyParticleComponent_Basic_Runtime *)(*pcVar1)();
        return pUVar3;
      }
    }
    local_40 = Cast<UEasyParticleComponent_Basic_Runtime,UEasyParticleComponentRuntime>
                         (*(UEasyParticleComponentRuntime **)
                           (this->Components).AllocatorInstance.Data);
  }
  return local_40;
}

// GetBrushObject @ 14acc3be0

UObject * __thiscall UEasyParticleState::GetBrushObject(UEasyParticleState *this)

{
  UObject *pUVar1;
  
  pUVar1 = FSlateBrush::GetResourceObject(&this->Brush);
  return pUVar1;
}

// GetParent @ 14acc3c20

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleState * __thiscall UEasyParticleState::GetParent(UEasyParticleState *this)

{
  UEasyParticleState *local_18;
  
  local_18 = (UEasyParticleState *)0x0;
  if (this->ParentComponent != (UEasyParticleComponent_Child_Runtime *)0x0) {
    local_18 = UEasyParticleComponentRuntime::GetOwner
                         ((UEasyParticleComponentRuntime *)this->ParentComponent);
  }
  return local_18;
}

// GetParticleCount @ 14acc3c90

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

int __thiscall UEasyParticleState::GetParticleCount(UEasyParticleState *this)

{
  int iVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 local_98 [4];
  int local_94;
  uint local_90;
  TArray<UEasyParticleComponentRuntime_*,TSizedDefaultAllocator<32>_> *local_88;
  int local_80;
  UEasyParticleComponent_Child_Runtime *local_78;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0> local_70;
  FScriptContainerElement *local_58;
  FScriptContainerElement *local_50;
  FScriptContainerElement *local_48;
  FScriptContainerElement *local_40;
  UEasyParticleComponentRuntime **local_38;
  UEasyParticleComponentRuntime *local_30;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0> local_28;
  
  local_94 = 1;
  local_88 = &this->Components;
  local_58 = (local_88->AllocatorInstance).Data;
  local_50 = local_58;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>::
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>
            (&local_70,&(this->Components).ArrayNum,(UEasyParticleComponentRuntime **)local_58);
  local_48 = (local_88->AllocatorInstance).Data;
  local_80 = local_88->ArrayNum;
  local_40 = local_48;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>::
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>
            (&local_28,&local_88->ArrayNum,
             (UEasyParticleComponentRuntime **)(local_48 + (longlong)local_80 * 8));
  while( true ) {
    if (*local_70.CurrentNum != local_70.InitialNum) {
      puVar3 = local_98;
      for (lVar2 = 1; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      `TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_98);
    }
    local_98[1] = local_70.Ptr != local_28.Ptr;
    local_90 = (uint)(byte)local_98[1];
    if (!(bool)local_98[1]) break;
    local_38 = local_70.Ptr;
    local_30 = *local_70.Ptr;
    local_78 = Cast<UEasyParticleComponent_Child_Runtime,UEasyParticleComponentRuntime>(local_30);
    if (local_78 != (UEasyParticleComponent_Child_Runtime *)0x0) {
      iVar1 = UEasyParticleComponent_Child_Runtime::GetParticleCount(local_78);
      local_94 = local_94 + iVar1;
    }
    local_70.Ptr = local_70.Ptr + 1;
  }
  return local_94;
}

// GetParticleCountInPool @ 14acc3e40

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

int __thiscall UEasyParticleState::GetParticleCountInPool(UEasyParticleState *this)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 local_98 [4];
  uint local_94;
  uint local_90;
  uint local_8c;
  TArray<UEasyParticleComponentRuntime_*,TSizedDefaultAllocator<32>_> *local_88;
  int local_80;
  UEasyParticleComponent_Child_Runtime *local_78;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0> local_70;
  FScriptContainerElement *local_58;
  FScriptContainerElement *local_50;
  FScriptContainerElement *local_48;
  FScriptContainerElement *local_40;
  UEasyParticleComponentRuntime **local_38;
  UEasyParticleComponentRuntime *local_30;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0> local_28;
  
  bVar1 = IsInCache(this);
  local_90 = (uint)bVar1;
  local_94 = local_90;
  local_88 = &this->Components;
  local_58 = (local_88->AllocatorInstance).Data;
  local_50 = local_58;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>::
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>
            (&local_70,&(this->Components).ArrayNum,(UEasyParticleComponentRuntime **)local_58);
  local_48 = (local_88->AllocatorInstance).Data;
  local_80 = local_88->ArrayNum;
  local_40 = local_48;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>::
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>
            (&local_28,&local_88->ArrayNum,
             (UEasyParticleComponentRuntime **)(local_48 + (longlong)local_80 * 8));
  while( true ) {
    if (*local_70.CurrentNum != local_70.InitialNum) {
      puVar4 = local_98;
      for (lVar3 = 1; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      `TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_98);
    }
    local_98[1] = local_70.Ptr != local_28.Ptr;
    local_8c = (uint)(byte)local_98[1];
    if (!(bool)local_98[1]) break;
    local_38 = local_70.Ptr;
    local_30 = *local_70.Ptr;
    local_78 = Cast<UEasyParticleComponent_Child_Runtime,UEasyParticleComponentRuntime>(local_30);
    if (local_78 != (UEasyParticleComponent_Child_Runtime *)0x0) {
      iVar2 = UEasyParticleComponent_Child_Runtime::GetParticleCountInPool(local_78);
      local_94 = local_94 + iVar2;
    }
    local_70.Ptr = local_70.Ptr + 1;
  }
  return local_94;
}

// Init @ 14acc4f80

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

void __thiscall
UEasyParticleState::Init
          (UEasyParticleState *this,UEasyParticleEmitterAsset *param_1,
          UEasyParticleComponent_Child_Runtime *param_2,FGeometry *param_3,int param_4)

{
  bool bVar1;
  UEasyParticleComponent_Child_Runtime *pUVar2;
  longlong lVar3;
  FEasyParticleStateRuntime *pFVar4;
  undefined1 *puVar5;
  FEasyParticleStateRuntime *pFVar6;
  undefined1 local_a7 [3];
  uint local_a4;
  TArray<UEasyParticleComponentRuntime_*,TSizedDefaultAllocator<32>_> *local_a0;
  int local_98;
  TArray<UEasyParticleComponentRuntime_*,TSizedDefaultAllocator<32>_> local_90;
  UEasyParticleComponentRuntime *local_80;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0> local_78;
  FScriptContainerElement *local_50;
  FScriptContainerElement *local_48;
  UEasyParticleComponentRuntime **local_40;
  code *local_38;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0> local_30;
  
  this->Asset = param_1;
  this->ParentComponent = param_2;
  this->ChildLayer = param_4;
  FEasyParticleStateRuntime::Reset(&this->InitialState);
  ClearRuntimeComponent(this);
  if (param_1 != (UEasyParticleEmitterAsset *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
              (&local_90.AllocatorInstance);
    local_90.ArrayNum = 0;
    local_90.ArrayMax =
         TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                   (&local_90.AllocatorInstance);
    UEasyParticleEmitterAsset::GenerateRuntimeComponents(param_1,&local_90,1);
    local_a0 = &local_90;
    TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>::
    TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>
              (&local_78,&local_90.ArrayNum,
               (UEasyParticleComponentRuntime **)local_90.AllocatorInstance.Data);
    local_50 = (local_a0->AllocatorInstance).Data;
    local_98 = local_a0->ArrayNum;
    local_48 = local_50;
    TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>::
    TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>
              (&local_30,&local_a0->ArrayNum,
               (UEasyParticleComponentRuntime **)(local_50 + (longlong)local_98 * 8));
    while( true ) {
      if (*local_78.CurrentNum != local_78.InitialNum) {
        puVar5 = local_a7;
        for (lVar3 = 1; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        `TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_a7);
      }
      local_a7[1] = local_78.Ptr != local_30.Ptr;
      local_a4 = (uint)(byte)local_a7[1];
      if (!(bool)local_a7[1]) break;
      local_40 = local_78.Ptr;
      local_80 = *local_78.Ptr;
      bVar1 = true;
      if ((4 < this->ChildLayer) &&
         (pUVar2 = Cast<UEasyParticleComponent_Child_Runtime,UEasyParticleComponentRuntime>
                             (local_80), pUVar2 != (UEasyParticleComponent_Child_Runtime *)0x0)) {
        bVar1 = false;
      }
      if (bVar1) {
        AddRuntimeComponent(this,local_80,param_3);
      }
      local_78.Ptr = local_78.Ptr + 1;
    }
    TArray<UEasyParticleComponentRuntime_*,TSizedDefaultAllocator<32>_>::
    ~TArray<UEasyParticleComponentRuntime_*,TSizedDefaultAllocator<32>_>(&local_90);
  }
  pFVar4 = &this->InitialState;
  pFVar6 = &this->CurrentState;
  for (lVar3 = 0x88; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)&pFVar6->Lifetime = *(undefined1 *)&pFVar4->Lifetime;
    pFVar4 = (FEasyParticleStateRuntime *)((longlong)&pFVar4->Lifetime + 1);
    pFVar6 = (FEasyParticleStateRuntime *)((longlong)&pFVar6->Lifetime + 1);
  }
  (this->CurrentState).Lifetime = 0.0;
  local_38 = *(code **)(*(longlong *)this + 0x2b0);
  (*local_38)(this,param_3,0);
  return;
}

// InitComponents @ 14acc5250

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

void __thiscall UEasyParticleState::InitComponents(UEasyParticleState *this,FGeometry *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_88 [4];
  uint local_84;
  TArray<UEasyParticleComponentRuntime_*,TSizedDefaultAllocator<32>_> *local_80;
  int local_78;
  UEasyParticleComponentRuntime *local_70;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0> local_68;
  FScriptContainerElement *local_50;
  FScriptContainerElement *local_48;
  FScriptContainerElement *local_40;
  FScriptContainerElement *local_38;
  UEasyParticleComponentRuntime **local_30;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0> local_28;
  
  local_80 = &this->Components;
  local_50 = (local_80->AllocatorInstance).Data;
  local_48 = local_50;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>::
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>
            (&local_68,&(this->Components).ArrayNum,(UEasyParticleComponentRuntime **)local_50);
  local_40 = (local_80->AllocatorInstance).Data;
  local_78 = local_80->ArrayNum;
  local_38 = local_40;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>::
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>
            (&local_28,&local_80->ArrayNum,
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
    local_88[1] = local_68.Ptr != local_28.Ptr;
    local_84 = (uint)(byte)local_88[1];
    if (!(bool)local_88[1]) break;
    local_30 = local_68.Ptr;
    local_70 = *local_68.Ptr;
    if (local_70 != (UEasyParticleComponentRuntime *)0x0) {
      UEasyParticleComponentRuntime::Init(local_70,param_1);
    }
    local_68.Ptr = local_68.Ptr + 1;
  }
  return;
}

// IsEnd @ 14acc6080

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

bool __thiscall UEasyParticleState::IsEnd(UEasyParticleState *this)

{
  char cVar1;
  longlong lVar2;
  undefined1 *puVar3;
  char local_88;
  undefined1 local_87 [3];
  uint local_84;
  TArray<UEasyParticleComponentRuntime_*,TSizedDefaultAllocator<32>_> *local_80;
  int local_78;
  UEasyParticleComponentRuntime *local_70;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0> local_68;
  FScriptContainerElement *local_50;
  FScriptContainerElement *local_48;
  FScriptContainerElement *local_40;
  FScriptContainerElement *local_38;
  UEasyParticleComponentRuntime **local_30;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0> local_28;
  
  if ((this->State == SELF_CHILD_END) || (this->State == IN_CACHE)) {
    local_88 = '\x01';
  }
  else {
    local_88 = (**(code **)(*(longlong *)this + 0x2c8))(this);
    if (local_88 != '\0') {
      local_80 = &this->Components;
      local_50 = (local_80->AllocatorInstance).Data;
      local_48 = local_50;
      TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>::
      TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>
                (&local_68,&(this->Components).ArrayNum,(UEasyParticleComponentRuntime **)local_50);
      local_40 = (local_80->AllocatorInstance).Data;
      local_78 = local_80->ArrayNum;
      local_38 = local_40;
      TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>::
      TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>
                (&local_28,&local_80->ArrayNum,
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
      this->State = SELF_CHILD_END;
    }
  }
  return (bool)local_88;
}

// IsInCache @ 14acc6260

bool __thiscall UEasyParticleState::IsInCache(UEasyParticleState *this)

{
  return this->State == IN_CACHE;
}

// IsSelfEnd @ 14acc6370

bool __thiscall UEasyParticleState::IsSelfEnd(UEasyParticleState *this)

{
  UEasyParticleComponent_Basic_Runtime *pUVar1;
  char local_18;
  
  if (this->State == ACTIVE) {
    local_18 = '\x01';
    pUVar1 = GetBasicComponent(this);
    if (pUVar1 != (UEasyParticleComponent_Basic_Runtime *)0x0) {
      local_18 = (**(code **)(pUVar1->_padding_ + 0x2d8))(pUVar1);
    }
    if (local_18 != '\0') {
      this->State = SELF_END;
    }
  }
  else {
    local_18 = '\x01';
  }
  return (bool)local_18;
}

// OnPaint @ 14acc6c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

void __thiscall
UEasyParticleState::OnPaint
          (UEasyParticleState *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  undefined1 uVar1;
  char cVar2;
  UObject *pUVar3;
  FDeprecateVector2DParameter *pFVar4;
  TTransform2<float> *pTVar5;
  TVector2<float> TVar6;
  longlong lVar7;
  undefined1 *puVar8;
  undefined1 auStackY_338 [32];
  ESlateDrawEffect local_2f8;
  undefined1 local_2f5 [5];
  uint local_2f0;
  TArray<UEasyParticleComponentRuntime_*,TSizedDefaultAllocator<32>_> *local_2e8;
  FGeometry *local_2e0;
  int local_2d8;
  UEasyParticleComponentRuntime *local_2d0;
  TVector2<double> *local_2c8;
  TVector2<double> *local_2c0;
  double *local_2b8;
  TVector2<double> *local_2b0;
  TVector2<float>_u_0 local_2a8;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0> local_2a0;
  double local_288;
  double local_280;
  FDeprecateVector2DParameter *local_278;
  FDeprecateVector2DParameter local_270;
  TVector2<float> *local_268;
  TTransform2<float> *local_260;
  FDeprecateSlateVector2D local_258;
  FDeprecateSlateVector2D *local_250;
  double local_248;
  double local_240;
  TVector2<double> *local_238;
  double local_230;
  double local_228;
  FDeprecateVector2DParameter local_220;
  TVector2<float>_u_0 *local_218;
  TQuat2<float> *local_210;
  TScale2<float> *local_208;
  TVector2<float>_u_0 *local_200;
  TMatrix2x2<float> *local_1f8;
  FDeprecateVector2DParameter local_1f0;
  FDeprecateVector2DParameter local_1e8;
  TVector2<float>_u_0 local_1e0;
  FDeprecateVector2DParameter local_1d8;
  TTransform2<float> *local_1d0;
  FSlateLayoutTransform *local_1c8;
  FScriptContainerElement *local_1c0;
  FScriptContainerElement *local_1b8;
  FScriptContainerElement *local_1b0;
  FScriptContainerElement *local_1a8;
  UEasyParticleComponentRuntime **local_1a0;
  code *local_198;
  FDeprecateSlateVector2D local_190;
  TVector2<double>_u_0 local_188;
  TVector2<double>_u_0 local_178;
  TVector2<double>_u_0 local_168;
  TVector2<double>_u_0 local_158;
  double local_148;
  double local_140;
  FSlateLayoutTransform local_138;
  FDeprecateVector2DParameter local_128;
  TTransform2<float> local_120;
  FSlateLayoutTransform local_100;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0> local_f0;
  TVector2<double> local_d8;
  TTransform2<float> local_c8;
  TMatrix2x2<float> local_b0;
  TTransform2<float> local_a0;
  FPaintGeometry local_88;
  FGeometry local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_338;
  pUVar3 = FSlateBrush::GetResourceObject(&this->Brush);
  if ((pUVar3 != (UObject *)0x0) &&
     (cVar2 = (**(code **)(*(longlong *)this + 0x2c8))(this), cVar2 == '\0')) {
    if (param_7) {
      local_2f8 = (this->CurrentState).DrawEffect;
    }
    else {
      local_2f8 = DisabledEffect;
    }
    local_190 = FPaintArgs::GetWindowToDesktopTransform(param_1);
    FDeprecateSlateVector2D::operator_UE::Math::TVector2<double>
              ((void *)local_190,(TVector2<double> *)&local_178._s_0);
    local_278 = &local_128;
    local_2c8 = &(this->InitialState).WidgetPositionAbsolute;
    local_280 = (this->InitialState).WidgetPositionAbsolute.field0_0x0._s_0.Y - local_178._s_0.Y;
    local_288 = (local_2c8->field0_0x0)._s_0.X - local_178._s_0.X;
    local_168._s_0.X = local_288;
    local_168._s_0.Y = local_280;
    pFVar4 = UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
                       (local_278,(TVector2<double> *)&local_168._s_0);
    local_270 = *pFVar4;
    local_268 = UE::Slate::CastToVector2f(&local_270);
    pTVar5 = FGeometry::GetAccumulatedRenderTransform(param_2);
    local_260 = Inverse<TTransform2<float>_>(&local_a0,pTVar5);
    TVar6 = TransformPoint<TTransform2<float>,UE::Math::TVector2<float>_>
                      (&local_120,(TVector2<float> *)local_260);
    FDeprecateSlateVector2D::FDeprecateSlateVector2D
              (&local_258,(TVector2<float>)*(TVector2<float>_u_0 *)TVar6.field0_0x0);
    local_250 = &local_258;
    FDeprecateSlateVector2D::operator_UE::Math::TVector2<double>
              (local_250,(TVector2<double> *)&local_158._s_0);
    local_2c0 = &(this->CurrentState).Position;
    local_240 = local_158._s_0.Y + (this->CurrentState).Position.field0_0x0._s_0.Y;
    local_248 = local_158._s_0.X + (local_2c0->field0_0x0)._s_0.X;
    local_2b8 = &local_148;
    local_238 = &(this->CurrentState).Size;
    local_148 = local_248;
    local_140 = local_240;
    local_2b0 = UE::Math::TVector2<double>::operator/(local_238,&local_d8,__real_4000000000000000);
    local_228 = local_2b8[1] - (local_2b0->field0_0x0)._s_0.Y;
    local_230 = *local_2b8 - (local_2b0->field0_0x0)._s_0.X;
    local_188._s_0.X = local_230;
    local_188._s_0.Y = local_228;
    UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
              (&local_220,(TVector2<double> *)&local_188._s_0);
    FSlateLayoutTransform::FSlateLayoutTransform(&local_138,__real_3f800000,&local_220);
    local_2a8._s_0.X = 0.0;
    local_2a8._s_0.Y = 0.0;
    local_218 = &local_2a8;
    local_200 = local_218;
    local_210 = TQuat2<float>::TQuat2<float>
                          ((TQuat2<float> *)&local_120.Trans,(this->CurrentState).Rotation);
    local_208 = TScale2<float>::TScale2<float>
                          ((TScale2<float> *)(local_120.M.M + 1),(this->CurrentState).AutoSizeScale,
                           (this->CurrentState).AutoSizeScale);
    local_1f8 = Concatenate<TScale2<float>,TQuat2<float>_>(&local_b0,local_208,local_210);
    TTransform2<float>::TTransform2<float><float>
              (&local_c8,local_1f8,(TVector2<float> *)&local_200->_s_0);
    UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
              (&local_1f0,&(this->CurrentState).Pivot);
    UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
              (&local_1e8,&(this->CurrentState).Size);
    local_2e0 = FGeometry::MakeChild(param_2,&local_50,&local_1e8,&local_138,&local_c8,&local_1f0);
    local_1e0._s_0 = *(TVector2<float>_u_0_s_0 *)&local_2e0->Size;
    UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
              (&local_1d8,(TVector2<float> *)&local_1e0._s_0);
    local_1d0 = FGeometry::GetAccumulatedRenderTransform(local_2e0);
    local_1c8 = FGeometry::GetAccumulatedLayoutTransform(local_2e0,&local_100);
    FPaintGeometry::FPaintGeometry
              (&local_88,local_1c8,local_1d0,&local_1d8,local_2e0->bHasRenderTransform);
    FSlateDrawElement::MakeBox
              (param_4,(uint)(longlong)((float)param_5 + (this->CurrentState).ZOrderOffset),
               &local_88,&this->Brush,local_2f8,&(this->CurrentState).Color);
  }
  local_2e8 = &this->Components;
  local_1c0 = (local_2e8->AllocatorInstance).Data;
  local_1b8 = local_1c0;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>::
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>
            (&local_2a0,&(this->Components).ArrayNum,(UEasyParticleComponentRuntime **)local_1c0);
  local_1b0 = (local_2e8->AllocatorInstance).Data;
  local_2d8 = local_2e8->ArrayNum;
  local_1a8 = local_1b0;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>::
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>
            (&local_f0,&local_2e8->ArrayNum,
             (UEasyParticleComponentRuntime **)(local_1b0 + (longlong)local_2d8 * 8));
  while( true ) {
    if (*local_2a0.CurrentNum != local_2a0.InitialNum) {
      puVar8 = local_2f5;
      for (lVar7 = 1; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      `TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_2f5);
    }
    local_2f5[1] = local_2a0.Ptr != local_f0.Ptr;
    local_2f0 = (uint)(byte)local_2f5[1];
    if (!(bool)local_2f5[1]) break;
    local_1a0 = local_2a0.Ptr;
    local_2d0 = *local_2a0.Ptr;
    if (local_2d0 != (UEasyParticleComponentRuntime *)0x0) {
      local_198 = *(code **)(local_2d0->_padding_ + 0x2d0);
      (*local_198)(local_2d0,param_1,param_2,param_3);
    }
    local_2a0.Ptr = local_2a0.Ptr + 1;
  }
  return;
}

// RemoveRuntimeComponent @ 14acc8080

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

void __thiscall
UEasyParticleState::RemoveRuntimeComponent
          (UEasyParticleState *this,UEasyParticleComponentRuntime *param_1)

{
  UEasyParticleComponentRuntime *local_res10 [3];
  
  local_res10[0] = param_1;
  TArray<UEasyParticleComponentRuntime_*,TSizedDefaultAllocator<32>_>::Remove
            (&this->Components,local_res10);
  return;
}

// Reset @ 14acc8520

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

void __thiscall UEasyParticleState::Reset(UEasyParticleState *this)

{
  longlong lVar1;
  FEasyParticleStateRuntime *pFVar2;
  FEasyParticleStateRuntime *pFVar3;
  undefined1 *puVar4;
  undefined1 local_98 [4];
  uint local_94;
  TArray<UEasyParticleComponentRuntime_*,TSizedDefaultAllocator<32>_> *local_90;
  int local_88;
  UEasyParticleComponentRuntime *local_80;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0> local_78;
  FScriptContainerElement *local_60;
  FScriptContainerElement *local_58;
  FScriptContainerElement *local_50;
  FScriptContainerElement *local_48;
  UEasyParticleComponentRuntime **local_40;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0> local_38;
  
  FEasyParticleStateRuntime::Reset(&this->BackBufferState);
  pFVar2 = &this->InitialState;
  pFVar3 = &this->CurrentState;
  for (lVar1 = 0x88; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)&pFVar3->Lifetime = *(undefined1 *)&pFVar2->Lifetime;
    pFVar2 = (FEasyParticleStateRuntime *)((longlong)&pFVar2->Lifetime + 1);
    pFVar3 = (FEasyParticleStateRuntime *)((longlong)&pFVar3->Lifetime + 1);
  }
  (this->CurrentState).Lifetime = 0.0;
  this->State = ACTIVE;
  local_90 = &this->Components;
  local_60 = (local_90->AllocatorInstance).Data;
  local_58 = local_60;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>::
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>
            (&local_78,&(this->Components).ArrayNum,(UEasyParticleComponentRuntime **)local_60);
  local_50 = (local_90->AllocatorInstance).Data;
  local_88 = local_90->ArrayNum;
  local_48 = local_50;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>::
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>
            (&local_38,&local_90->ArrayNum,
             (UEasyParticleComponentRuntime **)(local_50 + (longlong)local_88 * 8));
  while( true ) {
    if (*local_78.CurrentNum != local_78.InitialNum) {
      puVar4 = local_98;
      for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      `TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_98);
    }
    local_98[1] = local_78.Ptr != local_38.Ptr;
    local_94 = (uint)(byte)local_98[1];
    if (!(bool)local_98[1]) break;
    local_40 = local_78.Ptr;
    local_80 = *local_78.Ptr;
    if (local_80 != (UEasyParticleComponentRuntime *)0x0) {
      UEasyParticleComponentRuntime::Reset(local_80);
    }
    local_78.Ptr = local_78.Ptr + 1;
  }
  return;
}

// SetBrush @ 14acc8d00

void __thiscall UEasyParticleState::SetBrush(UEasyParticleState *this,UObject *param_1)

{
  FSlateBrush::SetResourceObject(&this->Brush,param_1);
  return;
}

// SetInCache @ 14acc8d80

void __thiscall UEasyParticleState::SetInCache(UEasyParticleState *this)

{
  this->State = IN_CACHE;
  return;
}

// StopEmit @ 14acc91b0

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

void __thiscall UEasyParticleState::StopEmit(UEasyParticleState *this)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_88 [4];
  uint local_84;
  TArray<UEasyParticleComponentRuntime_*,TSizedDefaultAllocator<32>_> *local_80;
  int local_78;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0> local_70;
  FScriptContainerElement *local_58;
  FScriptContainerElement *local_50;
  FScriptContainerElement *local_48;
  FScriptContainerElement *local_40;
  UEasyParticleComponentRuntime **local_38;
  UEasyParticleComponentRuntime *local_30;
  UEasyParticleComponent_Child_Runtime *local_28;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0> local_20;
  
  local_80 = &this->Components;
  local_58 = (local_80->AllocatorInstance).Data;
  local_50 = local_58;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>::
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>
            (&local_70,&(this->Components).ArrayNum,(UEasyParticleComponentRuntime **)local_58);
  local_48 = (local_80->AllocatorInstance).Data;
  local_78 = local_80->ArrayNum;
  local_40 = local_48;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>::
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>
            (&local_20,&local_80->ArrayNum,
             (UEasyParticleComponentRuntime **)(local_48 + (longlong)local_78 * 8));
  while( true ) {
    if (*local_70.CurrentNum != local_70.InitialNum) {
      puVar2 = local_88;
      for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      `TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_88);
    }
    local_88[1] = local_70.Ptr != local_20.Ptr;
    local_84 = (uint)(byte)local_88[1];
    if (!(bool)local_88[1]) break;
    local_38 = local_70.Ptr;
    local_30 = *local_70.Ptr;
    local_28 = Cast<UEasyParticleComponent_Child_Runtime,UEasyParticleComponentRuntime>(local_30);
    local_70.Ptr = local_70.Ptr + 1;
  }
  return;
}

// Tick @ 14acc9b40

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

void __thiscall UEasyParticleState::Tick(UEasyParticleState *this,FGeometry *param_1,float param_2)

{
  FName FVar1;
  bool bVar2;
  longlong lVar3;
  double *pdVar4;
  FEasyParticleStateRuntime *pFVar5;
  TVector2<double> *pTVar6;
  undefined1 *puVar7;
  FEasyParticleStateRuntime *pFVar8;
  undefined1 local_195 [5];
  uint local_190;
  uint local_18c;
  TArray<UEasyParticleComponentRuntime_*,TSizedDefaultAllocator<32>_> *local_188;
  TArray<UEasyParticleComponentRuntime_*,TSizedDefaultAllocator<32>_> *local_180;
  int local_178;
  int local_174;
  FName local_170;
  uint local_168;
  uint uStack_164;
  TVector2<double> *local_160;
  double local_158;
  TVector2<double> *local_150;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0> local_148;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0> local_130;
  TAtomic<FMinimalName> local_118;
  FName local_110;
  FScriptContainerElement *local_108;
  FScriptContainerElement *local_100;
  FScriptContainerElement *local_f8;
  FScriptContainerElement *local_f0;
  UEasyParticleComponentRuntime **local_e8;
  UEasyParticleComponentRuntime *local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  FScriptContainerElement *local_b8;
  FScriptContainerElement *local_b0;
  FScriptContainerElement *local_a8;
  FScriptContainerElement *local_a0;
  UEasyParticleComponentRuntime **local_98;
  UEasyParticleComponentRuntime *local_90;
  double local_88;
  double local_80;
  TStatIdData *local_78;
  TAtomic<FMinimalName> local_70;
  double local_68;
  double local_60;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0> local_50;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0> local_38;
  
  if ((FThreadStats::bPrimaryEnable) ||
     (bVar2 = EnumHasAnyFlags<enum_EStatFlags>(ClearEveryFrame,ClearEveryFrame), !bVar2)) {
    local_78 = (TStatIdData *)
               FThreadSafeStaticStatInner<FStat_STAT_EasyParticleCount,1>::GetStatId
                         ((FThreadSafeStaticStatInner<FStat_STAT_EasyParticleCount,1> *)
                          &StatPtr_STAT_EasyParticleCount);
    local_118 = local_78->Name;
    local_70 = local_118;
    TAtomicBase_Basic<FMinimalName>::ToStd(SequentiallyConsistent);
    std::_Atomic_storage<FMinimalName,8>::load
              ((_Atomic_storage<FMinimalName,8> *)local_118,(memory_order)&local_110);
    local_170 = local_110;
    FVar1 = local_170;
    local_170.ComparisonIndex = local_110.ComparisonIndex.Value;
    local_168 = local_170.ComparisonIndex.Value;
    local_170.Number = local_110.Number;
    uStack_164 = local_170.Number;
    local_170 = FVar1;
    FThreadStats::AddMessage<__int64>(local_110,Add,1,false);
  }
  pFVar5 = &this->CurrentState;
  pFVar8 = &this->BackBufferState;
  for (lVar3 = 0x88; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)&pFVar8->Lifetime = *(undefined1 *)&pFVar5->Lifetime;
    pFVar5 = (FEasyParticleStateRuntime *)((longlong)&pFVar5->Lifetime + 1);
    pFVar8 = (FEasyParticleStateRuntime *)((longlong)&pFVar8->Lifetime + 1);
  }
  local_188 = &this->Components;
  local_108 = (local_188->AllocatorInstance).Data;
  local_100 = local_108;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>::
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>
            (&local_148,&(this->Components).ArrayNum,(UEasyParticleComponentRuntime **)local_108);
  local_f8 = (local_188->AllocatorInstance).Data;
  local_178 = local_188->ArrayNum;
  local_f0 = local_f8;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>::
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>
            (&local_50,&local_188->ArrayNum,
             (UEasyParticleComponentRuntime **)(local_f8 + (longlong)local_178 * 8));
  while( true ) {
    if (*local_148.CurrentNum != local_148.InitialNum) {
      puVar7 = local_195;
      for (lVar3 = 1; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      `TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_195);
    }
    local_195[1] = local_148.Ptr != local_50.Ptr;
    local_190 = (uint)(byte)local_195[1];
    if (!(bool)local_195[1]) break;
    local_e8 = local_148.Ptr;
    local_e0 = *local_148.Ptr;
    UEasyParticleComponentRuntime::Tick(local_e0,param_1,param_2);
    local_148.Ptr = local_148.Ptr + 1;
  }
  local_150 = &(this->BackBufferState).Position;
  local_160 = &(this->BackBufferState).Velocity;
  local_158 = (double)param_2;
  local_d0 = (this->BackBufferState).Velocity.field0_0x0._s_0.Y * local_158;
  local_d8 = (local_160->field0_0x0)._s_0.X * local_158;
  local_c0 = (this->BackBufferState).Position.field0_0x0._s_0.Y + local_d0;
  local_c8 = (local_150->field0_0x0)._s_0.X + local_d8;
  local_68 = local_c8;
  local_60 = local_c0;
  pdVar4 = &local_68;
  pTVar6 = &(this->BackBufferState).Position;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)&pTVar6->field0_0x0 = *(undefined1 *)pdVar4;
    pdVar4 = (double *)((longlong)pdVar4 + 1);
    pTVar6 = (TVector2<double> *)((longlong)&pTVar6->field0_0x0 + 1);
  }
  (this->BackBufferState).Rotation =
       (this->BackBufferState).Rotation + (this->BackBufferState).RotationRate * param_2;
  local_180 = &this->Components;
  local_b8 = (local_180->AllocatorInstance).Data;
  local_b0 = local_b8;
  local_88 = local_d8;
  local_80 = local_d0;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>::
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>
            (&local_130,&(this->Components).ArrayNum,(UEasyParticleComponentRuntime **)local_b8);
  local_a8 = (local_180->AllocatorInstance).Data;
  local_174 = local_180->ArrayNum;
  local_a0 = local_a8;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>::
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>
            (&local_38,&local_180->ArrayNum,
             (UEasyParticleComponentRuntime **)(local_a8 + (longlong)local_174 * 8));
  while( true ) {
    if (*local_130.CurrentNum != local_130.InitialNum) {
      puVar7 = local_195 + 2;
      for (lVar3 = 1; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      `TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_195 + 2);
    }
    local_195[3] = local_130.Ptr != local_38.Ptr;
    local_18c = (uint)(byte)local_195[3];
    if (!(bool)local_195[3]) break;
    local_98 = local_130.Ptr;
    local_90 = *local_130.Ptr;
    UEasyParticleComponentRuntime::PostTick(local_90,param_1,param_2);
    local_130.Ptr = local_130.Ptr + 1;
  }
  pFVar5 = &this->BackBufferState;
  pFVar8 = &this->CurrentState;
  for (lVar3 = 0x88; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)&pFVar8->Lifetime = *(undefined1 *)&pFVar5->Lifetime;
    pFVar5 = (FEasyParticleStateRuntime *)((longlong)&pFVar5->Lifetime + 1);
    pFVar8 = (FEasyParticleStateRuntime *)((longlong)&pFVar8->Lifetime + 1);
  }
  return;
}

