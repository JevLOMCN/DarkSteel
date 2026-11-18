// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 32

// StaticClass @ 1468d9360

UClass * __cdecl UGameViewportSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameViewportSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"GameViewportSubsystem",
               &Z_Registration_Info_UClass_UGameViewportSubsystem.InnerSingleton,
               StaticRegisterNativesUGameViewportSubsystem,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGameViewportSubsystem>,
               InternalVTableHelperCtorCaller<UGameViewportSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameViewportSubsystem.InnerSingleton;
}

// UGameViewportSubsystem @ 1469011e0

UGameViewportSubsystem * __thiscall
UGameViewportSubsystem::UGameViewportSubsystem(UGameViewportSubsystem *this,FVTableHelper *param_1)

{
  UEngineSubsystem::UEngineSubsystem((UEngineSubsystem *)this,param_1);
  this->_padding_ = (longlong)&___7UGameViewportSubsystem__6B_;
  *(undefined8 *)&this->OnWidgetAdded = 0;
  *(undefined8 *)&(this->OnWidgetAdded).field_0x8 = 0;
  *(undefined8 *)&(this->OnWidgetAdded).field_0x10 = 0;
  *(undefined8 *)&this->OnWidgetRemoved = 0;
  *(undefined8 *)&(this->OnWidgetRemoved).field_0x8 = 0;
  *(undefined8 *)&(this->OnWidgetRemoved).field_0x10 = 0;
  *(undefined8 *)&this->ViewportWidgets = 0;
  *(undefined8 *)&(this->ViewportWidgets).field_0x8 = 0;
  *(undefined8 *)&(this->ViewportWidgets).field_0x20 = 0;
  *(undefined8 *)&(this->OnWidgetAdded).field_0x18 = 2;
  *(undefined8 *)&(this->OnWidgetRemoved).field_0x18 = 2;
  *(undefined4 *)&(this->ViewportWidgets).field_0x28 = 0;
  *(undefined4 *)&(this->ViewportWidgets).field_0x2c = 0x80;
  *(undefined4 *)&(this->ViewportWidgets).field_0x34 = 0;
  *(undefined4 *)&(this->ViewportWidgets).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ViewportWidgets).field_0x40 = 0;
  *(undefined4 *)&(this->ViewportWidgets).field_0x48 = 0;
  return this;
}

// UGameViewportSubsystem @ 146901270

UGameViewportSubsystem * __thiscall
UGameViewportSubsystem::UGameViewportSubsystem(UGameViewportSubsystem *this)

{
  UEngineSubsystem::UEngineSubsystem((UEngineSubsystem *)this);
  this->_padding_ = (longlong)&___7UGameViewportSubsystem__6B_;
  *(undefined8 *)&this->OnWidgetAdded = 0;
  *(undefined8 *)&(this->OnWidgetAdded).field_0x8 = 0;
  *(undefined8 *)&(this->OnWidgetAdded).field_0x10 = 0;
  *(undefined8 *)&this->OnWidgetRemoved = 0;
  *(undefined8 *)&(this->OnWidgetRemoved).field_0x8 = 0;
  *(undefined8 *)&(this->OnWidgetRemoved).field_0x10 = 0;
  *(undefined8 *)&this->ViewportWidgets = 0;
  *(undefined8 *)&(this->ViewportWidgets).field_0x8 = 0;
  *(undefined8 *)&(this->ViewportWidgets).field_0x20 = 0;
  *(undefined8 *)&(this->OnWidgetAdded).field_0x18 = 2;
  *(undefined8 *)&(this->OnWidgetRemoved).field_0x18 = 2;
  *(undefined4 *)&(this->ViewportWidgets).field_0x28 = 0;
  *(undefined4 *)&(this->ViewportWidgets).field_0x2c = 0x80;
  *(undefined4 *)&(this->ViewportWidgets).field_0x34 = 0;
  *(undefined4 *)&(this->ViewportWidgets).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ViewportWidgets).field_0x40 = 0;
  *(undefined4 *)&(this->ViewportWidgets).field_0x48 = 0;
  return this;
}

// ~UGameViewportSubsystem @ 1469048f0

void __thiscall UGameViewportSubsystem::~UGameViewportSubsystem(UGameViewportSubsystem *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UGameViewportSubsystem__6B_;
  *(undefined4 *)&(this->ViewportWidgets).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ViewportWidgets).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ViewportWidgets);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnWidgetRemoved).field_0x8,*(int *)&(this->OnWidgetRemoved).field_0x10);
  pvVar1 = *(void **)&(this->OnWidgetRemoved).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnWidgetRemoved);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnWidgetAdded).field_0x8,*(int *)&(this->OnWidgetAdded).field_0x10);
  pvVar1 = *(void **)&(this->OnWidgetAdded).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnWidgetAdded);
  UEngineSubsystem::~UEngineSubsystem((UEngineSubsystem *)this);
  return;
}

// AddToScreen @ 14690af60

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGameViewportSubsystem::AddToScreen
          (UGameViewportSubsystem *this,UWidget *param_1,ULocalPlayer *param_2,
          FGameViewportWidgetSlot *param_3)

{
  int *piVar1;
  atomic<int> *paVar2;
  undefined1 *puVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  FSlot *this_00;
  FSlotArguments *pFVar6;
  longlong lVar7;
  longlong *plVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  SWidget *pSVar13;
  TReferenceControllerBase<1> *pTVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined3 uVar18;
  SConstraintCanvas *pSVar19;
  FArguments *pFVar20;
  bool bVar21;
  undefined1 uVar22;
  bool bVar23;
  char cVar24;
  int iVar25;
  UPanelWidget *pUVar26;
  UWorld *this_01;
  FSlotInfo *pFVar27;
  FSlotArguments *pFVar28;
  TSharedRef<SConstraintCanvas,1> *pTVar29;
  TSharedRef<SWidget,1> *pTVar30;
  uint uVar31;
  uint uVar32;
  FSharedReferencer<1> FVar33;
  ForAnyElementType FVar34;
  TArray<SConstraintCanvas::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> *pTVar35;
  longlong lVar36;
  uint uVar37;
  T0RequiredArgs local_578 [8];
  FWeakObjectPtr local_570;
  SConstraintCanvas *local_568;
  FSharedReferencer<1> FStack_560;
  FLLMScope local_558 [2];
  UGameViewportClient *local_550;
  undefined8 local_548;
  undefined8 local_540;
  FArguments *local_538;
  undefined1 local_530;
  undefined1 local_52f;
  TDelegateBase<FNotThreadSafeDelegateMode> local_528;
  UWidget *local_510;
  FWeakObjectPtr local_508;
  FName local_500;
  FName local_4f8;
  FMemScope local_4f0;
  ULocalPlayer *local_4e8;
  FName local_4e0;
  FString local_4d8;
  FString local_4c8;
  FString local_4b8;
  FString local_4a8;
  undefined8 local_498;
  FSharedReferencer<1> local_490;
  FString local_488;
  FString local_478;
  FName local_468;
  SConstraintCanvas *local_460;
  TReferenceControllerBase<1> *local_458;
  SConstraintCanvas *local_450;
  TReferenceControllerBase<1> *local_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined1 local_430;
  TDelegateBase<FNotThreadSafeDelegateMode> local_428;
  double local_410;
  double dStack_408;
  undefined1 local_400;
  TDelegateBase<FNotThreadSafeDelegateMode> local_3f8;
  double local_3e0;
  double dStack_3d8;
  double local_3d0;
  double dStack_3c8;
  undefined1 local_3c0;
  TDelegateBase<FNotThreadSafeDelegateMode> local_3b8;
  FDestructionSentinel local_3a0;
  TSharedRef<SConstraintCanvas,1> local_388;
  TSharedRef<SWidget,1> local_378;
  TSlateDecl<SConstraintCanvas,RequiredArgs::T0RequiredArgs> local_368;
  undefined8 local_350;
  undefined8 uStack_348;
  FSlotArguments local_338;
  FArguments local_258;
  
  if (param_1 == (UWidget *)0x0) {
    local_548 = 0;
    FFrame::KismetExecutionMessage(L"The Widget is invalid.",Warning,(FName)0x0);
    return false;
  }
  pUVar26 = UWidget::GetParent(param_1);
  if (pUVar26 == (UPanelWidget *)0x0) {
    this_01 = (UWorld *)(**(code **)(param_1->_padding_ + 0x180))(param_1);
    if ((this_01 != (UWorld *)0x0) && (bVar21 = UWorld::IsGameWorld(this_01), bVar21)) {
      local_550 = UWorld::GetGameViewport(this_01);
      if (local_550 == (UGameViewportClient *)0x0) {
        local_540 = 0;
        FFrame::KismetExecutionMessage(L"No game viewport was found.",Warning,(FName)0x0);
        return false;
      }
      local_568 = (SConstraintCanvas *)0x0;
      FStack_560.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_570.ObjectIndex = 0;
      local_570.ObjectSerialNumber = 0;
      local_510 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_570,(FObjectPtr)&local_510);
      local_508 = local_570;
      uVar37 = local_570.ObjectIndex - local_570.ObjectSerialNumber ^
               (uint)local_570.ObjectSerialNumber >> 0xd;
      uVar31 = (-0x61c88647 - local_570.ObjectSerialNumber) - uVar37 ^ uVar37 << 8;
      uVar32 = (local_570.ObjectSerialNumber - uVar31) - uVar37 ^ uVar31 >> 0xd;
      uVar37 = (uVar37 - uVar32) - uVar31 ^ uVar32 >> 0xc;
      uVar31 = (uVar31 - uVar37) - uVar32 ^ uVar37 << 0x10;
      uVar32 = (uVar32 - uVar31) - uVar37 ^ uVar31 >> 5;
      uVar37 = (uVar37 - uVar32) - uVar31 ^ uVar32 >> 3;
      uVar31 = (uVar31 - uVar37) - uVar32 ^ uVar37 << 10;
      pFVar27 = TMapBase<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>_>
                ::FindOrAddImpl<TObjectKey<UWidget>_const_&>
                          ((TMapBase<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>_>
                            *)&this->ViewportWidgets,(uVar32 - uVar31) - uVar37 ^ uVar31 >> 0xf,
                           (TObjectKey<UWidget> *)&local_508);
      param_1->bIsManagedByGameViewportSubsystem = '\x01';
      if ((((pFVar27->FullScreenWidget).Object != (SConstraintCanvas *)0x0) &&
          (pTVar5 = (pFVar27->FullScreenWidget).WeakReferenceCount.ReferenceController,
          pTVar5 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar5->SharedReferenceCount))
      {
        local_500 = (FName)param_1->_padding_;
        ::FName::ToString(&local_500,&local_4a8);
        ::FString::PrintfImpl(&local_4b8,L"The widget \'%s\' was already added to the screen.");
        FVar34.Data = (FScriptContainerElement *)L"";
        if (local_4b8.Data.ArrayNum != 0) {
          FVar34.Data = local_4b8.Data.AllocatorInstance.Data;
        }
        FFrame::KismetExecutionMessage((wchar_t *)FVar34.Data,Warning,(FName)0x0);
        if (local_4b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4b8.Data.AllocatorInstance.Data);
        }
        if (local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_560.ReferenceController);
        return false;
      }
      if ((((param_3->Offsets).Right == 0.0) && ((param_3->Offsets).Bottom == 0.0)) &&
         (((param_3->Anchors).Maximum.field0_0x0._s_0.Y ==
           (param_3->Anchors).Minimum.field0_0x0._s_0.Y &&
          ((param_3->Anchors).Maximum.field0_0x0._s_0.X ==
           (param_3->Anchors).Minimum.field0_0x0._s_0.X)))) {
        bVar21 = true;
      }
      else {
        bVar21 = false;
      }
      uVar10._0_4_ = (param_3->Offsets).Left;
      uVar10._4_4_ = (param_3->Offsets).Top;
      uVar11._0_4_ = (param_3->Offsets).Right;
      uVar11._4_4_ = (param_3->Offsets).Bottom;
      local_350 = uVar10;
      uStack_348 = uVar11;
      local_538 = SConstraintCanvas::FArguments::FArguments(&local_258);
      pFVar28 = SConstraintCanvas::Slot(&local_338);
      local_430 = 1;
      local_428._16_8_ = 0;
      local_428._0_8_ = 0;
      local_428._8_8_ = 0;
      (pFVar28->_Offset).Value.Left = (float)(undefined4)uVar10;
      (pFVar28->_Offset).Value.Top = (float)uVar10._4_4_;
      (pFVar28->_Offset).Value.Right = (float)(undefined4)uVar11;
      (pFVar28->_Offset).Value.Bottom = (float)uVar11._4_4_;
      (pFVar28->_Offset).bIsSet = true;
      local_440 = uVar10;
      uStack_438 = uVar11;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar28->_Offset).Getter,&local_428)
      ;
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                (&local_428);
      local_52f = 1;
      local_528._16_8_ = 0;
      local_528._0_8_ = 0;
      local_528._8_8_ = 0;
      (pFVar28->_AutoSize).Value = bVar21;
      (pFVar28->_AutoSize).bIsSet = true;
      local_530 = bVar21;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar28->_AutoSize).Getter,
                 &local_528);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                (&local_528);
      local_3d0 = (param_3->Anchors).Maximum.field0_0x0._s_0.X;
      dStack_3c8 = (param_3->Anchors).Maximum.field0_0x0._s_0.Y;
      local_3c0 = 1;
      local_3e0 = (param_3->Anchors).Minimum.field0_0x0._s_0.X;
      dStack_3d8 = (param_3->Anchors).Minimum.field0_0x0._s_0.Y;
      local_3b8._16_8_ = 0;
      local_3b8._0_8_ = 0;
      local_3b8._8_8_ = 0;
      (pFVar28->_Anchors).Value.Minimum.field0_0x0._s_0.X = local_3e0;
      (pFVar28->_Anchors).Value.Minimum.field0_0x0._s_0.Y = dStack_3d8;
      (pFVar28->_Anchors).Value.Maximum.field0_0x0._s_0.X = local_3d0;
      (pFVar28->_Anchors).Value.Maximum.field0_0x0._s_0.Y = dStack_3c8;
      (pFVar28->_Anchors).bIsSet = true;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar28->_Anchors).Getter,&local_3b8
                );
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                (&local_3b8);
      local_410 = (param_3->Alignment).field0_0x0._s_0.X;
      dStack_408 = (param_3->Alignment).field0_0x0._s_0.Y;
      local_400 = 1;
      local_3f8._16_8_ = 0;
      local_3f8._0_8_ = 0;
      local_3f8._8_8_ = 0;
      (pFVar28->_Alignment).Value.field0_0x0._s_0.X = local_410;
      (pFVar28->_Alignment).Value.field0_0x0._s_0.Y = dStack_408;
      (pFVar28->_Alignment).bIsSet = true;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar28->_Alignment).Getter,
                 &local_3f8);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                (&local_3f8);
      pFVar20 = local_538;
      this_00 = (FSlot *)pFVar28->_padding_;
      pTVar35 = &local_538->_Slots;
      pFVar6 = (FSlotArguments *)(pTVar35->AllocatorInstance).Data;
      if (((pFVar6 <= pFVar28) && (pFVar28 < pFVar6 + (local_538->_Slots).ArrayMax)) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar21)) {
        pcVar9 = (code *)swi(3);
        uVar22 = (*pcVar9)();
        return (bool)uVar22;
      }
      iVar25 = (pFVar20->_Slots).ArrayNum;
      piVar1 = &(pFVar20->_Slots).ArrayMax;
      if (iVar25 == *piVar1) {
        iVar25 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x8e0,&pTVar35->AllocatorInstance,piVar1);
      }
      (pFVar20->_Slots).ArrayNum = iVar25 + 1;
      SConstraintCanvas::FSlot::FSlotArguments::FSlotArguments
                ((FSlotArguments *)((pTVar35->AllocatorInstance).Data + (longlong)iVar25 * 0xe0),
                 pFVar28);
      FLLMScope::FLLMScope(local_558,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
      local_4f8 = LLMTagDeclaration_UI_Slate.UniqueName;
      FMemScope::FMemScope(&local_4f0,&local_4f8,true);
      TSlateDecl<SConstraintCanvas,RequiredArgs::T0RequiredArgs>::
      TSlateDecl<SConstraintCanvas,RequiredArgs::T0RequiredArgs>
                (&local_368,"SConstraintCanvas",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Blueprint\\GameViewportSubsystem.cpp"
                 ,0xa5,local_578);
      FMemScope::~FMemScope(&local_4f0);
      FLLMScope::~FLLMScope(local_558);
      pTVar29 = TSlateDecl<SConstraintCanvas,RequiredArgs::T0RequiredArgs>::operator<<=
                          (&local_368,&local_388,local_538);
      local_490.ReferenceController = (pTVar29->SharedReferenceCount).ReferenceController;
      local_568 = pTVar29->Object;
      if (local_490.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_490.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_490.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_498 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_560,&local_490);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_490.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_388.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_368._Widget.SharedReferenceCount.ReferenceController);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_338._AutoSize.Getter);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_338._Alignment.Getter);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_338._Anchors.Getter);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_338._Offset.Getter);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_338._padding_);
      if ((undefined8 *)local_338._padding_ != (undefined8 *)0x0) {
        (*(code *)**(undefined8 **)local_338._padding_)(local_338._padding_,1);
      }
      DestructItems<SConstraintCanvas::FSlot::FSlotArguments,int>
                ((FSlotArguments *)local_258._Slots.AllocatorInstance.Data,local_258._Slots.ArrayNum
                );
      if ((FSlotArguments *)local_258._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
        FMemory::Free(local_258._Slots.AllocatorInstance.Data);
      }
      FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_258);
      dVar12 = (param_3->Anchors).Minimum.field0_0x0._s_0.Y;
      (pFVar27->Slot).Anchors.Minimum.field0_0x0._s_0.X =
           (param_3->Anchors).Minimum.field0_0x0._s_0.X;
      (pFVar27->Slot).Anchors.Minimum.field0_0x0._s_0.Y = dVar12;
      dVar12 = (param_3->Anchors).Maximum.field0_0x0._s_0.Y;
      (pFVar27->Slot).Anchors.Maximum.field0_0x0._s_0.X =
           (param_3->Anchors).Maximum.field0_0x0._s_0.X;
      (pFVar27->Slot).Anchors.Maximum.field0_0x0._s_0.Y = dVar12;
      fVar15 = (param_3->Offsets).Top;
      fVar16 = (param_3->Offsets).Right;
      fVar17 = (param_3->Offsets).Bottom;
      (pFVar27->Slot).Offsets.Left = (param_3->Offsets).Left;
      (pFVar27->Slot).Offsets.Top = fVar15;
      (pFVar27->Slot).Offsets.Right = fVar16;
      (pFVar27->Slot).Offsets.Bottom = fVar17;
      dVar12 = (param_3->Alignment).field0_0x0._s_0.Y;
      (pFVar27->Slot).Alignment.field0_0x0._s_0.X = (param_3->Alignment).field0_0x0._s_0.X;
      (pFVar27->Slot).Alignment.field0_0x0._s_0.Y = dVar12;
      bVar21 = param_3->bAutoRemoveOnWorldRemoved;
      uVar18 = *(undefined3 *)&param_3->field_0x45;
      (pFVar27->Slot).ZOrder = param_3->ZOrder;
      (pFVar27->Slot).bAutoRemoveOnWorldRemoved = bVar21;
      *(undefined3 *)&(pFVar27->Slot).field_0x45 = uVar18;
      local_4e8 = param_2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (ULocalPlayer *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      FWeakObjectPtr::operator=(&(pFVar27->LocalPlayer).WeakPtr,(FObjectPtr)&local_4e8);
      pSVar19 = local_568;
      (pFVar27->FullScreenWidget).Object = local_568;
      if (FStack_560.ReferenceController !=
          (pFVar27->FullScreenWidget).WeakReferenceCount.ReferenceController) {
        if (FStack_560.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FStack_560.ReferenceController)->WeakReferenceCount =
               (atomic<int>)((int)(FStack_560.ReferenceController)->WeakReferenceCount + 1);
          UNLOCK();
        }
        pTVar5 = (pFVar27->FullScreenWidget).WeakReferenceCount.ReferenceController;
        if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar2 = &pTVar5->WeakReferenceCount;
          aVar4 = *paVar2;
          *paVar2 = (atomic<int>)((int)*paVar2 + -1);
          UNLOCK();
          if (aVar4 == (atomic<int>)0x1) {
            (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
          }
        }
        (pFVar27->FullScreenWidget).WeakReferenceCount.ReferenceController =
             FStack_560.ReferenceController;
      }
      pFVar27->FullScreenWidgetSlot = this_00;
      if ((this_00 == (FSlot *)0x0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("RawSlot",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Blueprint\\GameViewportSubsystem.cpp"
                              ,0xb3,L""), bVar21)) {
        pcVar9 = (code *)swi(3);
        uVar22 = (*pcVar9)();
        return (bool)uVar22;
      }
      pTVar30 = UWidget::TakeWidget(param_1,&local_378);
      FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
      pTVar5 = (pTVar30->SharedReferenceCount).ReferenceController;
      pSVar13 = ((TSharedRef<SWidget,1> *)&this_00->_padding_)->Object;
      pTVar14 = ((FSharedReferencer<1> *)&this_00->_padding_)->ReferenceController;
      ((TSharedRef<SWidget,1> *)&this_00->_padding_)->Object = pTVar30->Object;
      ((FSharedReferencer<1> *)&this_00->_padding_)->ReferenceController = pTVar5;
      pTVar30->Object = pSVar13;
      (pTVar30->SharedReferenceCount).ReferenceController = pTVar14;
      FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_378.SharedReferenceCount.ReferenceController);
      iVar25 = param_3->ZOrder;
      if (param_2 == (ULocalPlayer *)0x0) {
        pcVar9 = *(code **)(local_550->_padding_ + 0x2e8);
        if ((pSVar19 == (SConstraintCanvas *)0x0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x408,L""), bVar21)) {
          pcVar9 = (code *)swi(3);
          uVar22 = (*pcVar9)();
          return (bool)uVar22;
        }
        FVar33.ReferenceController = FStack_560.ReferenceController;
        if (FStack_560.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FStack_560.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FStack_560.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((pSVar19 == (SConstraintCanvas *)0x0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x25d,L""), bVar21)) {
          pcVar9 = (code *)swi(3);
          uVar22 = (*pcVar9)();
          return (bool)uVar22;
        }
        local_460 = pSVar19;
        local_458 = FVar33.ReferenceController;
        if (FVar33.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar33.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar33.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        (*pcVar9)(local_550,&local_460,iVar25 + 10);
      }
      else {
        pcVar9 = *(code **)(local_550->_padding_ + 0x2f8);
        if ((pSVar19 == (SConstraintCanvas *)0x0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x408,L""), bVar21)) {
          pcVar9 = (code *)swi(3);
          uVar22 = (*pcVar9)();
          return (bool)uVar22;
        }
        FVar33.ReferenceController = FStack_560.ReferenceController;
        if (FStack_560.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FStack_560.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FStack_560.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((pSVar19 == (SConstraintCanvas *)0x0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x25d,L""), bVar21)) {
          pcVar9 = (code *)swi(3);
          uVar22 = (*pcVar9)();
          return (bool)uVar22;
        }
        local_450 = pSVar19;
        local_448 = FVar33.ReferenceController;
        if (FVar33.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar33.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar33.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        (*pcVar9)(local_550,param_2,&local_450,iVar25);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar33.ReferenceController);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnWidgetAdded,
                 (FWriteAccessScope *)&local_3a0);
      puVar3 = &(this->OnWidgetAdded).field_0x1c;
      *(int *)puVar3 = *(int *)puVar3 + 1;
      bVar21 = false;
      uVar31 = *(int *)&(this->OnWidgetAdded).field_0x10 - 1;
      if (-1 < (int)uVar31) {
        lVar36 = (longlong)(int)uVar31 << 4;
        bVar21 = false;
        do {
          uVar32 = 0;
          if ((int)uVar31 < *(int *)&(this->OnWidgetAdded).field_0x10) {
            uVar32 = ~uVar31 >> 0x1f;
          }
          if ((uVar32 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar9 = (code *)swi(3);
            uVar22 = (*pcVar9)();
            return (bool)uVar22;
          }
          lVar7 = *(longlong *)&(this->OnWidgetAdded).field_0x8;
          if (((*(int *)(lVar7 + 8 + lVar36) == 0) ||
              (plVar8 = *(longlong **)(lVar7 + lVar36), plVar8 == (longlong *)0x0)) ||
             (cVar24 = (**(code **)(*plVar8 + 0x68))(plVar8,param_1,param_2), cVar24 == '\0')) {
            bVar21 = true;
          }
          lVar36 = lVar36 + -0x10;
          uVar31 = uVar31 - 1;
        } while (-1 < (int)uVar31);
      }
      puVar3 = &(this->OnWidgetAdded).field_0x1c;
      *(int *)puVar3 = *(int *)puVar3 + -1;
      if (bVar21) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnWidgetAdded,false)
        ;
      }
      if (local_3a0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3a0.Accessor,&local_3a0);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_560.ReferenceController);
      return true;
    }
    local_4e0 = (FName)param_1->_padding_;
    ::FName::ToString(&local_4e0,&local_478);
    ::FString::PrintfImpl(&local_488,L"The widget \'%s\' does not have a World.");
    FVar34.Data = (FScriptContainerElement *)L"";
    if (local_488.Data.ArrayNum != 0) {
      FVar34.Data = local_488.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar34.Data,Warning,(FName)0x0);
    if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_488.Data.AllocatorInstance.Data);
    }
  }
  else {
    local_468 = (FName)param_1->_padding_;
    ::FName::ToString(&local_468,&local_4c8);
    ::FString::PrintfImpl
              (&local_4d8,
               L"The widget \'%s\' already has a parent widget. It can\'t also be added to the viewport!"
              );
    FVar34.Data = (FScriptContainerElement *)L"";
    if (local_4d8.Data.ArrayNum != 0) {
      FVar34.Data = local_4d8.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar34.Data,Warning,(FName)0x0);
    local_478.Data.AllocatorInstance.Data = local_4c8.Data.AllocatorInstance.Data;
    if (local_4d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4d8.Data.AllocatorInstance.Data);
      local_478.Data.AllocatorInstance.Data = local_4c8.Data.AllocatorInstance.Data;
    }
  }
  if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_478.Data.AllocatorInstance.Data);
  }
  return false;
}

// AddWidget @ 14690ba10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGameViewportSubsystem::AddWidget
          (UGameViewportSubsystem *this,UWidget *param_1,FGameViewportWidgetSlot *param_2)

{
  bool bVar1;
  
  bVar1 = AddToScreen(this,param_1,(ULocalPlayer *)0x0,param_2);
  return bVar1;
}

// AddWidgetForPlayer @ 14690bc30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGameViewportSubsystem::AddWidgetForPlayer
          (UGameViewportSubsystem *this,UWidget *param_1,ULocalPlayer *param_2,
          FGameViewportWidgetSlot *param_3)

{
  bool bVar1;
  
  if (param_2 == (ULocalPlayer *)0x0) {
    FFrame::KismetExecutionMessage(L"The Player is invalid.",Warning,(FName)0x0);
    return false;
  }
  bVar1 = AddToScreen(this,param_1,param_2,param_3);
  return bVar1;
}

// Deinitialize @ 1469133e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UGameViewportSubsystem::Deinitialize(UGameViewportSubsystem *this)

{
  TMap<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>_>
  *this_00;
  code *pcVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  TMap<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>_>
  *pTVar3;
  bool bVar4;
  int iVar5;
  uint *puVar6;
  FTlsAutoCleanup *pFVar7;
  UObject *pUVar8;
  byte bVar9;
  longlong lVar10;
  int iVar11;
  int *piVar12;
  TTuple<UWidget_*,TWeakPtr<SConstraintCanvas,1>,TWeakObjectPtr<ULocalPlayer,FWeakObjectPtr>_>
  *pTVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 *puVar18;
  ulonglong uVar19;
  ForElementType<TTuple<UWidget_*,TWeakPtr<SConstraintCanvas,1>,TWeakObjectPtr<ULocalPlayer,FWeakObjectPtr>_>_>
  FVar20;
  uint uVar21;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  ForElementType<TTuple<UWidget_*,TWeakPtr<SConstraintCanvas,1>,TWeakObjectPtr<ULocalPlayer,FWeakObjectPtr>_>_>
  local_108;
  undefined8 local_100;
  FMemMark local_f8;
  FWeakObjectPtr local_d0;
  TMap<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>_>
  *local_c8;
  uint uStack_c0;
  uint uStack_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  uint uStack_ac;
  uint local_a8;
  uint uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  int local_98;
  int local_94;
  TBitArray<FDefaultBitArrayAllocator> *local_90;
  TMap<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>_>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  code *local_58;
  undefined1 *local_50;
  ulonglong uVar17;
  
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             &FWorldDelegates::OnPreWorldFinishDestroy,this);
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             &FWorldDelegates::OnWorldBeginTearDown,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FWorldDelegates::OnWorldCleanup,
             this);
  if (0 < *(int *)&(this->ViewportWidgets).field_0x8 - *(int *)&(this->ViewportWidgets).field_0x34)
  {
    puVar6 = TThreadSingleton<FMemStack>::GetTlsSlot();
    local_50 = local_res18;
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar7 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_58,puVar6);
    uVar17 = 0;
    uVar16 = 0;
    local_108.Data =
         (TTuple<UWidget_*,TWeakPtr<SConstraintCanvas,1>,TWeakObjectPtr<ULocalPlayer,FWeakObjectPtr>_>
          *)0x0;
    local_100 = 0;
    local_f8.Mem = (FMemStackBase *)(pFVar7 + 2);
    local_f8.Top = (local_f8.Mem)->Top;
    local_f8.SavedChunk = *(FTaggedMemory **)(pFVar7 + 4);
    local_f8.bPopped = false;
    local_f8.NextTopmostMark = *(FMemMark **)(pFVar7 + 5);
    pFVar7[5] = (FTlsAutoCleanup)&local_f8;
    *(int *)(pFVar7 + 6) = *(int *)(pFVar7 + 6) + 1;
    uVar15 = *(int *)&(this->ViewportWidgets).field_0x8 -
             *(int *)&(this->ViewportWidgets).field_0x34;
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
    }
    uVar14 = uVar17;
    if (0 < (int)uVar15) {
      UE::Core::Private::
      ReallocTo<0,TMemStackAllocator<0>::ForElementType<TTuple<UWidget_*,TWeakPtr<SConstraintCanvas,1>,TWeakObjectPtr<ULocalPlayer,FWeakObjectPtr>_>_>_>
                (0x20,8,uVar15,&local_108,0,(int *)((longlong)&local_100 + 4));
      uVar14 = local_100 & 0xffffffff;
    }
    FVar20.Data = local_108.Data;
    local_b8 = &(this->ViewportWidgets).field_0x10;
    uVar15 = *(uint *)&(this->ViewportWidgets).field_0x28;
    this_00 = &this->ViewportWidgets;
    uStack_bc = 1;
    local_a8 = 0;
    iVar5 = 0;
    uStack_ac = local_a8;
    if (uVar15 != 0) {
      puVar6 = *(uint **)&(this->ViewportWidgets).field_0x20;
      if (puVar6 == (uint *)0x0) {
        puVar6 = (uint *)local_b8;
      }
      uVar21 = *puVar6;
      uVar19 = uVar17;
      local_a8 = 0;
      uVar16 = 0;
      while (uVar21 == 0) {
        iVar5 = (int)uVar17;
        local_a8 = (int)uVar19 + 0x20;
        uVar19 = (ulonglong)local_a8;
        uVar16 = iVar5 + 1;
        uVar17 = (ulonglong)uVar16;
        if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar16) {
          iVar5 = *(int *)&(this->ViewportWidgets).field_0x28;
          uStack_ac = uVar15;
          goto LAB_1469135a5;
        }
        uVar21 = puVar6[(longlong)iVar5 + 1];
      }
      iVar5 = *(int *)&(this->ViewportWidgets).field_0x28;
      uStack_bc = -uVar21 & uVar21;
      uVar17 = (ulonglong)uStack_bc * 2 + 1;
      lVar10 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_98 = (int)lVar10;
      uStack_ac = (local_a8 - 1) + local_98;
      if (iVar5 < (int)uStack_ac) {
        uStack_ac = uVar15;
      }
    }
LAB_1469135a5:
    iStack_a0 = *(int *)&(this->ViewportWidgets).field_0x8 -
                *(int *)&(this->ViewportWidgets).field_0x34;
    local_res20 = *(uint *)&(this->ViewportWidgets).field_0x28;
    uStack_b0 = 0xffffffff;
    uVar15 = local_res20 & 0xffffffe0;
    TStack_80._padding_ = CONCAT44(uStack_bc,uVar16);
    TStack_80.CurrentBitIndex = uStack_ac;
    TStack_80.UnvisitedBitMask = 0xffffffff;
    iVar11 = (int)local_res20 >> 5;
    bVar9 = (byte)local_res20;
    TStack_80._28_4_ = uStack_ac;
    TStack_80.BaseBitIndex = local_a8;
    uStack_60 = CONCAT44(uStack_9c,iStack_a0);
    local_c8 = this_00;
    uStack_c0 = uVar16;
    uStack_a4 = uStack_ac;
    local_90 = (TBitArray<FDefaultBitArrayAllocator> *)local_b8;
    local_88 = this_00;
    TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_b8;
    if ((((int)local_res20 < 0) || (iVar5 < (int)local_res20)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pTVar2 = local_90;
    uVar16 = *(uint *)&(this->ViewportWidgets).field_0x28;
    uVar21 = local_res20;
    if (local_res20 != uVar16) {
      puVar18 = *(undefined1 **)&(this->ViewportWidgets).field_0x20;
      if (puVar18 == (undefined1 *)0x0) {
        puVar18 = &(this->ViewportWidgets).field_0x10;
      }
      uVar21 = -1 << (bVar9 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar11 * 4);
      while (uVar21 == 0) {
        lVar10 = (longlong)iVar11;
        uVar15 = uVar15 + 0x20;
        iVar11 = iVar11 + 1;
        local_res20 = uVar16;
        uVar21 = uVar16;
        if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_1469136e0;
        uVar21 = *(uint *)(puVar18 + lVar10 * 4 + 4);
      }
      uVar17 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_94 = (int)lVar10;
      local_res20 = local_94 + -1 + uVar15;
      uVar21 = local_res20;
      if ((int)uVar16 < (int)local_res20) {
        local_res20 = uVar16;
        uVar21 = uVar16;
      }
    }
LAB_1469136e0:
    while( true ) {
      pTVar3 = local_88;
      iVar5 = (int)uVar14;
      if (*(int *)(&local_88->field_0x0 + 8) - *(int *)(&local_88->field_0x0 + 0x34) !=
          (int)uStack_60) {
        local_res10[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_80.CurrentBitIndex == uVar21) && (TStack_80.Array == pTVar2)) &&
         (pTVar3 == this_00)) break;
      piVar12 = (int *)(*(longlong *)&pTVar3->field_0x0 + (longlong)TStack_80.CurrentBitIndex * 0x78
                       );
      local_d0.ObjectIndex = *piVar12;
      local_d0.ObjectSerialNumber = piVar12[1];
      pUVar8 = FWeakObjectPtr::Get(&local_d0);
      if (pUVar8 != (UObject *)0x0) {
        if (iVar5 == local_100._4_4_) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<TTuple<UWidget_*,TWeakPtr<SConstraintCanvas,1>,TWeakObjectPtr<ULocalPlayer,FWeakObjectPtr>_>_>_>
                            (0x820,&local_108,(int *)((longlong)&local_100 + 4));
          FVar20.Data = local_108.Data;
        }
        pTVar13 = FVar20.Data + iVar5;
        uVar14 = (ulonglong)(iVar5 + 1U);
        local_100 = CONCAT44(local_100._4_4_,iVar5 + 1U);
        *(UObject **)pTVar13 = pUVar8;
        iVar5 = piVar12[0x17];
        *(int *)&pTVar13->field_0x8 = piVar12[0x16];
        *(int *)&pTVar13->field_0xc = iVar5;
        lVar10 = *(longlong *)(piVar12 + 0x18);
        *(longlong *)&pTVar13->field_0x10 = lVar10;
        if (lVar10 != 0) {
          LOCK();
          *(int *)(lVar10 + 0xc) = *(int *)(lVar10 + 0xc) + 1;
          UNLOCK();
        }
        iVar5 = piVar12[0x15];
        *(int *)&pTVar13->field_0x18 = piVar12[0x14];
        *(int *)&pTVar13->field_0x1c = iVar5;
      }
      TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
    }
    bVar4 = 1 < *(int *)&(this->ViewportWidgets).field_0x48;
    if (!bVar4) {
      TSet<TTuple<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>,FDefaultSetAllocator>
                        *)this_00);
    }
    TSparseArray<TSparseSetElement<TTuple<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_00,0,*(int *)&(this->ViewportWidgets).field_0x8);
    puVar18 = &(this->ViewportWidgets).field_0xc;
    *(undefined4 *)&(this->ViewportWidgets).field_0x8 = 0;
    if (*(int *)puVar18 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x78,8,0,(ForAnyElementType *)this_00,0,(int *)puVar18);
    }
    *(undefined4 *)&(this->ViewportWidgets).field_0x34 = 0;
    *(undefined4 *)&(this->ViewportWidgets).field_0x30 = 0xffffffff;
    iVar11 = *(int *)&(this->ViewportWidgets).field_0x2c;
    *(undefined4 *)&(this->ViewportWidgets).field_0x28 = 0;
    if ((iVar11 < 0) || (0x80 < iVar11)) {
      *(undefined4 *)&(this->ViewportWidgets).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ViewportWidgets).field_0x10,0);
    }
    if (bVar4) {
      *(undefined4 *)&(this->ViewportWidgets).field_0x48 = 1;
      TSet<TTuple<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>,FDefaultSetAllocator>
                *)this_00);
    }
    for (pTVar13 = FVar20.Data; pTVar13 != FVar20.Data + iVar5; pTVar13 = pTVar13 + 1) {
      if ((*(UWidget **)pTVar13)->bIsManagedByGameViewportSubsystem != '\0') {
        RemoveWidgetInternal
                  (this,*(UWidget **)pTVar13,(TWeakPtr<SConstraintCanvas,1> *)&pTVar13->field_0x8,
                   (TWeakObjectPtr<ULocalPlayer,FWeakObjectPtr> *)&pTVar13->field_0x18);
      }
    }
    DestructItems<TTuple<UWidget_*,TWeakPtr<SConstraintCanvas,1>,TWeakObjectPtr<ULocalPlayer,FWeakObjectPtr>_>,int>
              (FVar20.Data,iVar5);
    if (local_f8.bPopped == false) {
      if (((local_f8.Mem)->TopMark != &local_f8) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mem.TopMark == this",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                             ,0x215,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_f8.bPopped = true;
      (local_f8.Mem)->NumMarks = (local_f8.Mem)->NumMarks + -1;
      if (local_f8.SavedChunk != (local_f8.Mem)->TopChunk) {
        FMemStackBase::FreeChunks(local_f8.Mem,local_f8.SavedChunk);
      }
      (local_f8.Mem)->Top = local_f8.Top;
      (local_f8.Mem)->TopMark = local_f8.NextTopmostMark;
    }
  }
  return;
}

// Get @ 14691d070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UGameViewportSubsystem * __cdecl UGameViewportSubsystem::Get(UWorld *param_1)

{
  int iVar1;
  bool bVar2;
  UEngine *pUVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UGameViewportSubsystem *pUVar6;
  
  pUVar3 = GEngine;
  pUVar4 = StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar4 != (UClass *)0x0) goto LAB_14691d0a6;
  }
  else if (pUVar4 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
LAB_14691d0a6:
    pUVar5 = StaticClass();
    if (pUVar5 != (UClass *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)pUVar4->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_14691d0d6;
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_14691d0d6:
  pUVar6 = (UGameViewportSubsystem *)
           FSubsystemCollectionBase::GetSubsystemInternal
                     ((FSubsystemCollectionBase *)&pUVar3->EngineSubsystemCollection,pUVar4);
  return pUVar6;
}

// Get @ 14691d100

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UGameViewportSubsystem * __cdecl UGameViewportSubsystem::Get(void)

{
  int iVar1;
  bool bVar2;
  UEngine *pUVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UGameViewportSubsystem *pUVar6;
  
  pUVar3 = GEngine;
  pUVar4 = StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar4 != (UClass *)0x0) goto LAB_14691d136;
  }
  else if (pUVar4 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
LAB_14691d136:
    pUVar5 = StaticClass();
    if (pUVar5 != (UClass *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)pUVar4->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_14691d166;
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_14691d166:
  pUVar6 = (UGameViewportSubsystem *)
           FSubsystemCollectionBase::GetSubsystemInternal
                     ((FSubsystemCollectionBase *)&pUVar3->EngineSubsystemCollection,pUVar4);
  return pUVar6;
}

// GetPrivateStaticClass @ 1469220b0

UClass * __cdecl UGameViewportSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameViewportSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"GameViewportSubsystem",
               &Z_Registration_Info_UClass_UGameViewportSubsystem.InnerSingleton,
               StaticRegisterNativesUGameViewportSubsystem,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGameViewportSubsystem>,
               InternalVTableHelperCtorCaller<UGameViewportSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameViewportSubsystem.InnerSingleton;
}

// GetWidgetSlot @ 146927a70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FGameViewportWidgetSlot * __thiscall
UGameViewportSubsystem::GetWidgetSlot
          (UGameViewportSubsystem *this,FGameViewportWidgetSlot *__return_storage_ptr__,
          UWidget *param_1)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  undefined3 uVar6;
  FSlotInfo *pFVar7;
  FWeakObjectPtr local_res18;
  UWidget *local_res20;
  
  if ((param_1 != (UWidget *)0x0) && (param_1->bIsManagedByGameViewportSubsystem != '\0')) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_res20 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
    pFVar7 = TMapBase<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>_>
             ::Find((TMapBase<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>_>
                     *)&this->ViewportWidgets,(TObjectKey<UWidget> *)&local_res18);
    if (pFVar7 != (FSlotInfo *)0x0) {
      dVar1 = (pFVar7->Slot).Anchors.Minimum.field0_0x0._s_0.Y;
      (__return_storage_ptr__->Anchors).Minimum.field0_0x0._s_0.X =
           (pFVar7->Slot).Anchors.Minimum.field0_0x0._s_0.X;
      (__return_storage_ptr__->Anchors).Minimum.field0_0x0._s_0.Y = dVar1;
      dVar1 = (pFVar7->Slot).Anchors.Maximum.field0_0x0._s_0.Y;
      (__return_storage_ptr__->Anchors).Maximum.field0_0x0._s_0.X =
           (pFVar7->Slot).Anchors.Maximum.field0_0x0._s_0.X;
      (__return_storage_ptr__->Anchors).Maximum.field0_0x0._s_0.Y = dVar1;
      fVar2 = (pFVar7->Slot).Offsets.Top;
      fVar3 = (pFVar7->Slot).Offsets.Right;
      fVar4 = (pFVar7->Slot).Offsets.Bottom;
      (__return_storage_ptr__->Offsets).Left = (pFVar7->Slot).Offsets.Left;
      (__return_storage_ptr__->Offsets).Top = fVar2;
      (__return_storage_ptr__->Offsets).Right = fVar3;
      (__return_storage_ptr__->Offsets).Bottom = fVar4;
      dVar1 = (pFVar7->Slot).Alignment.field0_0x0._s_0.Y;
      (__return_storage_ptr__->Alignment).field0_0x0._s_0.X =
           (pFVar7->Slot).Alignment.field0_0x0._s_0.X;
      (__return_storage_ptr__->Alignment).field0_0x0._s_0.Y = dVar1;
      bVar5 = (pFVar7->Slot).bAutoRemoveOnWorldRemoved;
      uVar6 = *(undefined3 *)&(pFVar7->Slot).field_0x45;
      __return_storage_ptr__->ZOrder = (pFVar7->Slot).ZOrder;
      __return_storage_ptr__->bAutoRemoveOnWorldRemoved = bVar5;
      *(undefined3 *)&__return_storage_ptr__->field_0x45 = uVar6;
      return __return_storage_ptr__;
    }
    `UGameViewportSubsystem::GetWidgetSlot'::__l5::<lambda_1>::operator()(&local_res18);
  }
  *(undefined2 *)&__return_storage_ptr__->field_0x45 = 0;
  __return_storage_ptr__->field_0x47 = 0;
  (__return_storage_ptr__->Anchors).Maximum.field0_0x0._s_0.X = 1.0;
  (__return_storage_ptr__->Anchors).Maximum.field0_0x0._s_0.Y = 1.0;
  (__return_storage_ptr__->Anchors).Minimum.field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Anchors).Minimum.field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Offsets).Left = 0.0;
  (__return_storage_ptr__->Offsets).Top = 0.0;
  (__return_storage_ptr__->Offsets).Right = 0.0;
  (__return_storage_ptr__->Offsets).Bottom = 0.0;
  (__return_storage_ptr__->Alignment).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Alignment).field0_0x0._s_0.Y = 0.0;
  __return_storage_ptr__->ZOrder = 0;
  __return_storage_ptr__->bAutoRemoveOnWorldRemoved = true;
  return __return_storage_ptr__;
}

// HandleLevelRemovedFromWorld @ 146928280

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UGameViewportSubsystem::HandleLevelRemovedFromWorld
          (UGameViewportSubsystem *this,ULevel *param_1,UWorld *param_2)

{
  if (param_1 == (ULevel *)0x0) {
    HandleRemoveWorld(this,param_2);
    return;
  }
  return;
}

// HandleRemoveWorld @ 1469285a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameViewportSubsystem::HandleRemoveWorld(UGameViewportSubsystem *this,UWorld *param_1)

{
  TMap<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>_>
  *pTVar1;
  ForElementType<UWidget_*> FVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  UWorld *pUVar7;
  ulonglong uVar8;
  ForElementType<UWidget_*> FVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_198 [32];
  UObject **local_178;
  ForElementType<UWidget_*> local_170;
  longlong local_168;
  longlong local_160;
  undefined8 local_158;
  undefined1 local_148 [8];
  UObject *local_140;
  FWeakObjectPtr local_138 [2];
  longlong *local_128;
  undefined1 auStack_120 [16];
  uint uStack_110;
  uint uStack_10c;
  longlong local_108;
  TSet<TTuple<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>,FDefaultSetAllocator>
  *pTStack_100;
  TSet<TTuple<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>,FDefaultSetAllocator>
  *local_f8;
  char local_f0;
  char cStack_ef;
  undefined1 local_e8 [32];
  longlong local_c8;
  TSet<TTuple<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>,FDefaultSetAllocator>
  *pTStack_c0;
  ForElementType<UWidget_*> local_b8;
  uint local_30;
  uint local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_198;
  pTVar1 = &this->ViewportWidgets;
  local_2c = 0x10;
  local_b8.SecondaryData = (ForElementType<UWidget_*>)0x0;
  local_30 = 0;
  TSet<TTuple<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_e8,
             (TSet<TTuple<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>,FDefaultSetAllocator>
              *)pTVar1);
  local_f0 = '\0';
  cStack_ef = '\0';
  stack0xfffffffffffffee8 = local_e8._16_16_;
  local_128 = (longlong *)local_e8._0_8_;
  auStack_120._0_8_ = local_e8._8_8_;
  local_108 = local_c8;
  pTStack_100 = pTStack_c0;
  uVar8 = local_e8._24_8_ >> 0x20;
  local_f8 = (TSet<TTuple<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>,FDefaultSetAllocator>
              *)pTVar1;
  if (local_e8._28_4_ < *(int *)(local_e8._16_8_ + 0x18)) {
    do {
      plVar4 = local_128;
      lVar10 = (longlong)(int)uVar8 * 0x78;
      local_138[0].ObjectIndex = *(int *)(*local_128 + lVar10);
      local_138[0].ObjectSerialNumber = *(int *)(*local_128 + 4 + lVar10);
      local_140 = FWeakObjectPtr::Get(local_138);
      if (local_140 == (UObject *)0x0) {
        TSet<TTuple<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_100,(int)uVar8);
        local_f0 = '\x01';
      }
      else if ((*(char *)(lVar10 + 0x4c + *plVar4) != '\0') &&
              (pUVar7 = (UWorld *)(**(code **)(*(longlong *)local_140 + 0x180))(), param_1 == pUVar7
              )) {
        FVar9 = (ForElementType<UWidget_*>)&local_b8;
        if (local_b8.SecondaryData != (ForElementType<UWidget_*>)0x0) {
          FVar9 = local_b8.SecondaryData;
        }
        if ((ulonglong)FVar9 <= &local_140) {
          FVar9 = (ForElementType<UWidget_*>)&local_b8;
          if (local_b8.SecondaryData != (ForElementType<UWidget_*>)0x0) {
            FVar9 = local_b8.SecondaryData;
          }
          if (&local_140 < (UObject **)((longlong)FVar9 + (longlong)(int)local_2c * 8)) {
            local_160 = (longlong)(int)local_30;
            local_158 = 8;
            local_178 = &local_140;
            local_170 = (ForElementType<UWidget_*>)&local_b8;
            if (local_b8.SecondaryData != (ForElementType<UWidget_*>)0x0) {
              local_170 = local_b8.SecondaryData;
            }
            local_168 = (longlong)(int)local_2c;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
        }
        if (local_30 == local_2c) {
          local_30 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UWidget_*>_>
                               (0x808,&local_b8,(int *)&local_2c);
        }
        lVar10 = (longlong)(int)local_30;
        FVar9 = (ForElementType<UWidget_*>)&local_b8;
        if (local_b8.SecondaryData != (ForElementType<UWidget_*>)0x0) {
          FVar9 = local_b8.SecondaryData;
        }
        local_30 = local_30 + 1;
        *(UObject **)((longlong)FVar9 + lVar10 * 8) = local_140;
      }
      uStack_110 = uStack_110 & ~auStack_120._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_120);
      uVar8 = (ulonglong)uStack_10c;
    } while ((int)uStack_10c < *(int *)(auStack_120._8_8_ + 0x18));
    if ((local_f0 != '\0') && (cStack_ef != '\0')) {
      uVar11 = *(int *)&(local_f8->Elements).field_0x8 - *(int *)&(local_f8->Elements).field_0x34;
      if (uVar11 < 4) {
        iVar6 = 1;
      }
      else {
        uVar8 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
        lVar10 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar6 = 1 << ((byte)lVar10 & 0x1f);
      }
      if (((0 < (int)uVar11) && (local_f8->HashSize < iVar6)) || (iVar6 < local_f8->HashSize)) {
        local_f8->HashSize = iVar6;
        TSet<TTuple<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>,FDefaultSetAllocator>
        ::Rehash(local_f8);
      }
    }
  }
  uVar11 = local_30;
  uVar8 = (ulonglong)(int)local_30;
  FVar9 = (ForElementType<UWidget_*>)&local_b8;
  if (local_b8.SecondaryData != (ForElementType<UWidget_*>)0x0) {
    FVar9 = local_b8.SecondaryData;
  }
  FVar2 = (ForElementType<UWidget_*>)((longlong)FVar9 + uVar8 * 8);
  while( true ) {
    if ((uint)uVar8 != uVar11) {
      `TCheckedPointerIterator<UWidget_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_148);
    }
    if (FVar9 == FVar2) break;
    (**(code **)(**(longlong **)FVar9 + 0x2d0))();
    uVar8 = (ulonglong)local_30;
    FVar9 = (ForElementType<UWidget_*>)((longlong)FVar9 + 8);
  }
  if (local_b8.SecondaryData != (ForElementType<UWidget_*>)0x0) {
    FMemory::Free((void *)local_b8.SecondaryData);
  }
  return;
}

// HandleWorldCleanup @ 146928c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameViewportSubsystem::HandleWorldCleanup
          (UGameViewportSubsystem *this,UWorld *param_1,bool param_2,bool param_3)

{
  TMap<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>_>
  *pTVar1;
  ForElementType<UWidget_*> FVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  UWorld *pUVar7;
  ulonglong uVar8;
  ForElementType<UWidget_*> FVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_198 [32];
  UObject **ppUStack_178;
  ForElementType<UWidget_*> FStack_170;
  longlong lStack_168;
  longlong lStack_160;
  undefined8 uStack_158;
  undefined1 auStack_148 [8];
  UObject *pUStack_140;
  FWeakObjectPtr aFStack_138 [2];
  longlong *plStack_128;
  undefined1 auStack_120 [16];
  uint uStack_110;
  uint uStack_10c;
  longlong lStack_108;
  TSet<TTuple<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>,FDefaultSetAllocator>
  *pTStack_100;
  TSet<TTuple<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>,FDefaultSetAllocator>
  *pTStack_f8;
  char cStack_f0;
  char cStack_ef;
  undefined1 auStack_e8 [32];
  longlong lStack_c8;
  TSet<TTuple<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>,FDefaultSetAllocator>
  *pTStack_c0;
  ForElementType<UWidget_*> FStack_b8;
  uint uStack_30;
  uint uStack_2c;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_198;
  pTVar1 = &this->ViewportWidgets;
  uStack_2c = 0x10;
  FStack_b8.SecondaryData = (ForElementType<UWidget_*>)0x0;
  uStack_30 = 0;
  TSet<TTuple<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)auStack_e8,
             (TSet<TTuple<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>,FDefaultSetAllocator>
              *)pTVar1);
  cStack_f0 = '\0';
  cStack_ef = '\0';
  stack0xfffffffffffffee8 = auStack_e8._16_16_;
  plStack_128 = (longlong *)auStack_e8._0_8_;
  auStack_120._0_8_ = auStack_e8._8_8_;
  lStack_108 = lStack_c8;
  pTStack_100 = pTStack_c0;
  uVar8 = auStack_e8._24_8_ >> 0x20;
  pTStack_f8 = (TSet<TTuple<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>,FDefaultSetAllocator>
                *)pTVar1;
  if (auStack_e8._28_4_ < *(int *)(auStack_e8._16_8_ + 0x18)) {
    do {
      plVar4 = plStack_128;
      lVar10 = (longlong)(int)uVar8 * 0x78;
      aFStack_138[0].ObjectIndex = *(int *)(*plStack_128 + lVar10);
      aFStack_138[0].ObjectSerialNumber = *(int *)(*plStack_128 + 4 + lVar10);
      pUStack_140 = FWeakObjectPtr::Get(aFStack_138);
      if (pUStack_140 == (UObject *)0x0) {
        TSet<TTuple<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_100,(int)uVar8);
        cStack_f0 = '\x01';
      }
      else if ((*(char *)(lVar10 + 0x4c + *plVar4) != '\0') &&
              (pUVar7 = (UWorld *)(**(code **)(*(longlong *)pUStack_140 + 0x180))(),
              param_1 == pUVar7)) {
        FVar9 = (ForElementType<UWidget_*>)&FStack_b8;
        if (FStack_b8.SecondaryData != (ForElementType<UWidget_*>)0x0) {
          FVar9 = FStack_b8.SecondaryData;
        }
        if ((ulonglong)FVar9 <= &pUStack_140) {
          FVar9 = (ForElementType<UWidget_*>)&FStack_b8;
          if (FStack_b8.SecondaryData != (ForElementType<UWidget_*>)0x0) {
            FVar9 = FStack_b8.SecondaryData;
          }
          if (&pUStack_140 < (UObject **)((longlong)FVar9 + (longlong)(int)uStack_2c * 8)) {
            lStack_160 = (longlong)(int)uStack_30;
            uStack_158 = 8;
            ppUStack_178 = &pUStack_140;
            FStack_170 = (ForElementType<UWidget_*>)&FStack_b8;
            if (FStack_b8.SecondaryData != (ForElementType<UWidget_*>)0x0) {
              FStack_170 = FStack_b8.SecondaryData;
            }
            lStack_168 = (longlong)(int)uStack_2c;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
        }
        if (uStack_30 == uStack_2c) {
          uStack_30 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UWidget_*>_>
                                (0x808,&FStack_b8,(int *)&uStack_2c);
        }
        lVar10 = (longlong)(int)uStack_30;
        FVar9 = (ForElementType<UWidget_*>)&FStack_b8;
        if (FStack_b8.SecondaryData != (ForElementType<UWidget_*>)0x0) {
          FVar9 = FStack_b8.SecondaryData;
        }
        uStack_30 = uStack_30 + 1;
        *(UObject **)((longlong)FVar9 + lVar10 * 8) = pUStack_140;
      }
      uStack_110 = uStack_110 & ~auStack_120._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_120);
      uVar8 = (ulonglong)uStack_10c;
    } while ((int)uStack_10c < *(int *)(auStack_120._8_8_ + 0x18));
    if ((cStack_f0 != '\0') && (cStack_ef != '\0')) {
      uVar11 = *(int *)&(pTStack_f8->Elements).field_0x8 -
               *(int *)&(pTStack_f8->Elements).field_0x34;
      if (uVar11 < 4) {
        iVar6 = 1;
      }
      else {
        uVar8 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
        lVar10 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar6 = 1 << ((byte)lVar10 & 0x1f);
      }
      if (((0 < (int)uVar11) && (pTStack_f8->HashSize < iVar6)) || (iVar6 < pTStack_f8->HashSize)) {
        pTStack_f8->HashSize = iVar6;
        TSet<TTuple<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>,FDefaultSetAllocator>
        ::Rehash(pTStack_f8);
      }
    }
  }
  uVar11 = uStack_30;
  uVar8 = (ulonglong)(int)uStack_30;
  FVar9 = (ForElementType<UWidget_*>)&FStack_b8;
  if (FStack_b8.SecondaryData != (ForElementType<UWidget_*>)0x0) {
    FVar9 = FStack_b8.SecondaryData;
  }
  FVar2 = (ForElementType<UWidget_*>)((longlong)FVar9 + uVar8 * 8);
  while( true ) {
    if ((uint)uVar8 != uVar11) {
      `TCheckedPointerIterator<UWidget_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStack_148);
    }
    if (FVar9 == FVar2) break;
    (**(code **)(**(longlong **)FVar9 + 0x2d0))();
    uVar8 = (ulonglong)uStack_30;
    FVar9 = (ForElementType<UWidget_*>)((longlong)FVar9 + 8);
  }
  if (FStack_b8.SecondaryData != (ForElementType<UWidget_*>)0x0) {
    FMemory::Free((void *)FStack_b8.SecondaryData);
  }
  return;
}

// Initialize @ 14692ab00

void __thiscall
UGameViewportSubsystem::Initialize(UGameViewportSubsystem *this,FSubsystemCollectionBase *param_1)

{
  TMulticastDelegateRegistration<void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>::
  AddUObject<UGameViewportSubsystem>
            ((TMulticastDelegateRegistration<void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
              *)&FWorldDelegates::OnWorldCleanup,(UGameViewportSubsystem *)&stack0x00000018,
             (pmf_4aeb3607)this);
  TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>::
  AddUObject<UGameViewportSubsystem>
            ((TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy> *)
             &FWorldDelegates::OnWorldBeginTearDown,(UGameViewportSubsystem *)&stack0x00000018,
             (pmf_f258d4e7)this);
  TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>::
  AddUObject<UGameViewportSubsystem>
            ((TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy> *)
             &FWorldDelegates::OnPreWorldFinishDestroy,(UGameViewportSubsystem *)&stack0x00000018,
             (pmf_f258d4e7)this);
  return;
}

// IsWidgetAdded @ 14692d620

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UGameViewportSubsystem::IsWidgetAdded(UGameViewportSubsystem *this,UWidget *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FSlotInfo *pFVar2;
  FWeakObjectPtr local_res10;
  UWidget *local_res18 [2];
  
  if (param_1 == (UWidget *)0x0) {
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    FFrame::KismetExecutionMessage(L"The Widget is invalid.",Warning,(FName)0x0);
  }
  else if (param_1->bIsManagedByGameViewportSubsystem != '\0') {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
    pFVar2 = TMapBase<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>_>
             ::Find((TMapBase<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>_>
                     *)&this->ViewportWidgets,(TObjectKey<UWidget> *)&local_res10);
    if ((((pFVar2 != (FSlotInfo *)0x0) &&
         ((pFVar2->FullScreenWidget).Object != (SConstraintCanvas *)0x0)) &&
        (pTVar1 = (pFVar2->FullScreenWidget).WeakReferenceCount.ReferenceController,
        pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
      return true;
    }
  }
  return false;
}

// RemoveWidget @ 14693c230

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameViewportSubsystem::RemoveWidget(UGameViewportSubsystem *this,UWidget *param_1)

{
  undefined1 *puVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  SConstraintCanvas *pSVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  char cVar10;
  atomic<int> aVar11;
  uint uVar12;
  UWorld *this_00;
  UGameViewportClient *pUVar13;
  UObject *pUVar14;
  uint uVar15;
  TReferenceControllerBase<1> *pTVar16;
  longlong lVar17;
  bool bVar18;
  FWeakObjectPtr local_res10;
  UWidget *local_res18;
  FWeakObjectPtr local_res20;
  SConstraintCanvas *local_e8;
  TReferenceControllerBase<1> *local_e0;
  SConstraintCanvas *local_d8;
  TReferenceControllerBase<1> *local_d0;
  FDestructionSentinel local_c8;
  TVector2<double>_u_0 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined1 local_64;
  FWeakObjectPtr local_60;
  SConstraintCanvas *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  undefined8 local_48;
  
  if (param_1 == (UWidget *)0x0) {
    return;
  }
  if (param_1->bIsManagedByGameViewportSubsystem == '\0') {
    return;
  }
  local_98 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_90 = _UNK_150689688;
  local_a8._s_0.X = 0.0;
  local_a8._s_0.Y = 0.0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_64 = 1;
  local_60.ObjectIndex = 0;
  local_60.ObjectSerialNumber = 0;
  local_58 = (SConstraintCanvas *)0x0;
  pTStack_50 = (TReferenceControllerBase<1> *)0x0;
  local_48 = 0;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
  local_res20 = local_res10;
  TMap<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>_>
  ::RemoveAndCopyValue
            (&this->ViewportWidgets,(TObjectKey<UWidget> *)&local_res20,(FSlotInfo *)&local_a8._s_0)
  ;
  pTVar16 = pTStack_50;
  pSVar7 = local_58;
  param_1->bIsManagedByGameViewportSubsystem = '\0';
  pTVar8 = pTVar16;
  if (pTStack_50 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTStack_50->SharedReferenceCount;
    do {
      pTVar8 = (TReferenceControllerBase<1> *)0x0;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14693c3de;
      LOCK();
      aVar11 = pTStack_50->SharedReferenceCount;
      bVar18 = aVar3 == aVar11;
      if (bVar18) {
        pTStack_50->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar11 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar11;
    } while (!bVar18);
    LOCK();
    pTStack_50->SharedReferenceCount = (atomic<int>)((int)pTStack_50->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
    if ((((pSVar7 == (SConstraintCanvas *)0x0) ||
         (this_00 = (UWorld *)(**(code **)(param_1->_padding_ + 0x180))(param_1),
         this_00 == (UWorld *)0x0)) || (bVar18 = UWorld::IsGameWorld(this_00), !bVar18)) ||
       (pUVar13 = UWorld::GetGameViewport(this_00), pUVar13 == (UGameViewportClient *)0x0))
    goto LAB_14693c3e3;
    LOCK();
    pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
    UNLOCK();
    local_e8 = pSVar7;
    local_e0 = pTVar16;
    pcVar6 = *(code **)(pUVar13->_padding_ + 0x2f0);
    LOCK();
    pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
    UNLOCK();
    (*pcVar6)(pUVar13,&local_e8);
    local_d8 = pSVar7;
    local_d0 = pTVar16;
    pcVar6 = *(code **)(pUVar13->_padding_ + 0x300);
    LOCK();
    pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
    UNLOCK();
    pUVar14 = FWeakObjectPtr::Get(&local_60);
    (*pcVar6)(pUVar13,pUVar14,&local_d8);
    pTVar8 = pTVar16;
  }
LAB_14693c3de:
  pTVar16 = pTVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
LAB_14693c3e3:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnWidgetRemoved,
             (FWriteAccessScope *)&local_c8);
  puVar1 = &(this->OnWidgetRemoved).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar18 = false;
  uVar15 = *(int *)&(this->OnWidgetRemoved).field_0x10 - 1;
  if (-1 < (int)uVar15) {
    lVar17 = (longlong)(int)uVar15 << 4;
    bVar18 = false;
    do {
      uVar12 = 0;
      if ((int)uVar15 < *(int *)&(this->OnWidgetRemoved).field_0x10) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar4 = *(longlong *)&(this->OnWidgetRemoved).field_0x8;
      if (((*(int *)(lVar17 + 8 + lVar4) == 0) ||
          (plVar5 = *(longlong **)(lVar17 + lVar4), plVar5 == (longlong *)0x0)) ||
         (cVar10 = (**(code **)(*plVar5 + 0x68))(), cVar10 == '\0')) {
        bVar18 = true;
      }
      lVar17 = lVar17 + -0x10;
      uVar15 = uVar15 - 1;
    } while (-1 < (int)uVar15);
  }
  puVar1 = &(this->OnWidgetRemoved).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar18) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnWidgetRemoved,false);
  }
  if (local_c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
  }
  if (pTStack_50 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTStack_50->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTStack_50->_padding_ + 8))(pTStack_50,1);
    }
  }
  return;
}

// RemoveWidgetInternal @ 14693c640

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameViewportSubsystem::RemoveWidgetInternal
          (UGameViewportSubsystem *this,UWidget *param_1,TWeakPtr<SConstraintCanvas,1> *param_2,
          TWeakObjectPtr<ULocalPlayer,FWeakObjectPtr> *param_3)

{
  SConstraintCanvas *pSVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  UWorld *this_00;
  UGameViewportClient *pUVar5;
  UObject *pUVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  SConstraintCanvas *local_28;
  TReferenceControllerBase<1> *local_20;
  
  param_1->bIsManagedByGameViewportSubsystem = '\0';
  pTVar7 = (param_2->WeakReferenceCount).ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar7->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14693c73e;
      }
      LOCK();
      aVar4 = pTVar7->SharedReferenceCount;
      bVar8 = aVar3 == aVar4;
      if (bVar8) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar8);
    pSVar1 = param_2->Object;
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    if ((((pSVar1 == (SConstraintCanvas *)0x0) ||
         (this_00 = (UWorld *)(**(code **)(param_1->_padding_ + 0x180))(param_1),
         this_00 == (UWorld *)0x0)) || (bVar8 = UWorld::IsGameWorld(this_00), !bVar8)) ||
       (pUVar5 = UWorld::GetGameViewport(this_00), pUVar5 == (UGameViewportClient *)0x0))
    goto LAB_14693c743;
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    pcVar2 = *(code **)(pUVar5->_padding_ + 0x2f0);
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    local_28 = pSVar1;
    local_20 = pTVar7;
    (*pcVar2)(pUVar5,&local_28);
    pcVar2 = *(code **)(pUVar5->_padding_ + 0x300);
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    local_28 = pSVar1;
    local_20 = pTVar7;
    pUVar6 = FWeakObjectPtr::Get(&param_3->WeakPtr);
    (*pcVar2)(pUVar5,pUVar6,&local_28);
  }
LAB_14693c73e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
LAB_14693c743:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// SetWidgetSlot @ 146944600

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UGameViewportSubsystem::SetWidgetSlot
          (UGameViewportSubsystem *this,UWidget *param_1,FGameViewportWidgetSlot *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  SConstraintCanvas *this_00;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  atomic<int> aVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  undefined3 uVar12;
  atomic<int> aVar13;
  FSlotInfo *pFVar14;
  uint uVar15;
  uint uVar16;
  TReferenceControllerBase<1> *pTVar17;
  uint uVar18;
  bool bVar19;
  FWeakObjectPtr local_res10;
  UWidget *local_res20;
  undefined1 local_158 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_150;
  ForAnyElementType FStack_148;
  ulonglong local_140;
  undefined1 local_138 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_120;
  ForAnyElementType FStack_118;
  ulonglong local_110;
  TVector2<double>_u_0 local_108;
  undefined1 local_f8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_f0;
  ForAnyElementType FStack_e8;
  ulonglong local_e0;
  TVector2<double>_u_0 local_d8;
  double local_c8;
  double dStack_c0;
  undefined1 local_b8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b0;
  ForAnyElementType FStack_a8;
  ulonglong local_a0;
  FWeakObjectPtr local_98;
  FDestructionSentinel local_90;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  
  if ((param_1 != (UWidget *)0x0) && (((uint)param_1->_padding_ >> 0xf & 1) == 0)) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res20 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
    local_98 = local_res10;
    uVar18 = local_res10.ObjectIndex - local_res10.ObjectSerialNumber ^
             (uint)local_res10.ObjectSerialNumber >> 0xd;
    uVar15 = (-0x61c88647 - uVar18) - local_res10.ObjectSerialNumber ^ uVar18 << 8;
    uVar16 = (local_res10.ObjectSerialNumber - uVar15) - uVar18 ^ uVar15 >> 0xd;
    uVar18 = (uVar18 - uVar16) - uVar15 ^ uVar16 >> 0xc;
    uVar15 = (uVar15 - uVar16) - uVar18 ^ uVar18 << 0x10;
    uVar16 = (uVar16 - uVar15) - uVar18 ^ uVar15 >> 5;
    uVar18 = (uVar18 - uVar16) - uVar15 ^ uVar16 >> 3;
    uVar15 = (uVar15 - uVar18) - uVar16 ^ uVar18 << 10;
    pFVar14 = TMapBase<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>_>
              ::FindOrAddImpl<TObjectKey<UWidget>_const_&>
                        ((TMapBase<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>_>
                          *)&this->ViewportWidgets,(uVar16 - uVar15) - uVar18 ^ uVar15 >> 0xf,
                         (TObjectKey<UWidget> *)&local_98);
    param_1->bIsManagedByGameViewportSubsystem = '\x01';
    dVar3 = (param_2->Anchors).Minimum.field0_0x0._s_0.Y;
    dVar4 = (param_2->Anchors).Maximum.field0_0x0._s_0.X;
    dVar5 = (param_2->Anchors).Maximum.field0_0x0._s_0.Y;
    (pFVar14->Slot).Anchors.Minimum.field0_0x0._s_0.X = (param_2->Anchors).Minimum.field0_0x0._s_0.X
    ;
    (pFVar14->Slot).Anchors.Minimum.field0_0x0._s_0.Y = dVar3;
    fVar7 = (param_2->Offsets).Left;
    fVar8 = (param_2->Offsets).Top;
    fVar9 = (param_2->Offsets).Right;
    fVar10 = (param_2->Offsets).Bottom;
    (pFVar14->Slot).Anchors.Maximum.field0_0x0._s_0.X = dVar4;
    (pFVar14->Slot).Anchors.Maximum.field0_0x0._s_0.Y = dVar5;
    dVar3 = (param_2->Alignment).field0_0x0._s_0.X;
    dVar4 = (param_2->Alignment).field0_0x0._s_0.Y;
    (pFVar14->Slot).Offsets.Left = fVar7;
    (pFVar14->Slot).Offsets.Top = fVar8;
    (pFVar14->Slot).Offsets.Right = fVar9;
    (pFVar14->Slot).Offsets.Bottom = fVar10;
    iVar11 = param_2->ZOrder;
    bVar19 = param_2->bAutoRemoveOnWorldRemoved;
    uVar12 = *(undefined3 *)&param_2->field_0x45;
    (pFVar14->Slot).Alignment.field0_0x0._s_0.X = dVar3;
    (pFVar14->Slot).Alignment.field0_0x0._s_0.Y = dVar4;
    (pFVar14->Slot).ZOrder = iVar11;
    (pFVar14->Slot).bAutoRemoveOnWorldRemoved = bVar19;
    *(undefined3 *)&(pFVar14->Slot).field_0x45 = uVar12;
    pTVar1 = (pFVar14->FullScreenWidget).WeakReferenceCount.ReferenceController;
    pTVar17 = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      aVar6 = pTVar1->SharedReferenceCount;
      do {
        pTVar17 = (TReferenceControllerBase<1> *)0x0;
        if (aVar6 == (atomic<int>)0x0) goto LAB_146944772;
        LOCK();
        aVar13 = pTVar1->SharedReferenceCount;
        bVar19 = aVar6 == aVar13;
        if (bVar19) {
          pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
          aVar13 = aVar6;
        }
        UNLOCK();
        aVar6 = aVar13;
      } while (!bVar19);
      this_00 = (pFVar14->FullScreenWidget).Object;
      pTVar17 = pTVar1;
      if (this_00 != (SConstraintCanvas *)0x0) {
        if ((pFVar14->FullScreenWidgetSlot == (FSlot *)0x0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("SlotInfo.FullScreenWidgetSlot",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Blueprint\\GameViewportSubsystem.cpp"
                                ,0x101,L""), bVar19)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (((((param_2->Offsets).Right == 0.0) && ((param_2->Offsets).Bottom == 0.0)) &&
            ((param_2->Anchors).Maximum.field0_0x0._s_0.Y ==
             (param_2->Anchors).Minimum.field0_0x0._s_0.Y)) &&
           ((param_2->Anchors).Maximum.field0_0x0._s_0.X ==
            (param_2->Anchors).Minimum.field0_0x0._s_0.X)) {
          bVar19 = true;
        }
        else {
          bVar19 = false;
        }
        local_138._0_4_ = (param_2->Offsets).Left;
        local_138._4_4_ = (param_2->Offsets).Top;
        local_138._8_4_ = (param_2->Offsets).Right;
        local_138._12_4_ = (param_2->Offsets).Bottom;
        local_138[0x10] = true;
        local_110 = 0;
        local_120.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        FStack_118.Data = (FScriptContainerElement *)0x0;
        SConstraintCanvas::FSlot::SetOffset
                  (pFVar14->FullScreenWidgetSlot,(TAttribute<FMargin> *)local_138);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_120,(FWriteAccessScope *)&local_90);
        if (((int)local_110 != 0) && (FStack_118.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_118.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_118,0,0,0x10)
          ;
          local_110 = local_110 & 0xffffffff00000000;
        }
        if (local_90.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
        }
        if (FStack_118.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_118.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_120.AccessDetector);
        local_158[1] = true;
        local_140 = 0;
        local_150.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        FStack_148.Data = (FScriptContainerElement *)0x0;
        local_158[0] = bVar19;
        FSlotBase::SetAttribute<bool,bool>
                  ((FSlotBase *)pFVar14->FullScreenWidgetSlot,
                   &pFVar14->FullScreenWidgetSlot->AutoSizeAttr,(TAttribute<bool> *)local_158,Layout
                  );
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_150,(FWriteAccessScope *)&local_78);
        if (((int)local_140 != 0) && (FStack_148.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_148.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_148,0,0,0x10)
          ;
          local_140 = local_140 & 0xffffffff00000000;
        }
        if (local_78.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
        }
        if (FStack_148.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_148.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_150.AccessDetector);
        local_c8 = (param_2->Anchors).Maximum.field0_0x0._s_0.X;
        dStack_c0 = (param_2->Anchors).Maximum.field0_0x0._s_0.Y;
        local_d8._s_0.X = (param_2->Anchors).Minimum.field0_0x0._s_0.X;
        local_d8._s_0.Y = (param_2->Anchors).Minimum.field0_0x0._s_0.Y;
        local_b8 = 1;
        local_a0 = 0;
        local_b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
        FStack_a8.Data = (FScriptContainerElement *)0x0;
        SConstraintCanvas::FSlot::SetAnchors
                  (pFVar14->FullScreenWidgetSlot,(TAttribute<FAnchors> *)&local_d8._s_0);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_b0,(FWriteAccessScope *)&local_60);
        if (((int)local_a0 != 0) && (FStack_a8.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_a8.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_a8,0,0,0x10);
          local_a0 = local_a0 & 0xffffffff00000000;
        }
        if (local_60.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
        }
        if (FStack_a8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_a8.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b0.AccessDetector);
        local_108._s_0.X = (param_2->Alignment).field0_0x0._s_0.X;
        local_108._s_0.Y = (param_2->Alignment).field0_0x0._s_0.Y;
        local_f8 = 1;
        local_e0 = 0;
        local_f0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
        FStack_e8.Data = (FScriptContainerElement *)0x0;
        SConstraintCanvas::FSlot::SetAlignment
                  (pFVar14->FullScreenWidgetSlot,
                   (TAttribute<UE::Math::TVector2<double>_> *)&local_108._s_0);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_f0,(FWriteAccessScope *)&local_48);
        if (((int)local_e0 != 0) && (FStack_e8.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_e8.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_e8,0,0,0x10);
          local_e0 = local_e0 & 0xffffffff00000000;
        }
        if (local_48.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
        }
        if (FStack_e8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_e8.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f0.AccessDetector);
        SConstraintCanvas::FSlot::SetZOrder(pFVar14->FullScreenWidgetSlot,(float)param_2->ZOrder);
        SWidget::Invalidate((SWidget *)this_00,Layout);
      }
    }
LAB_146944772:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  }
  return;
}

// SetWidgetSlotDesiredSize @ 146944ab0

FGameViewportWidgetSlot * __cdecl
UGameViewportSubsystem::SetWidgetSlotDesiredSize
          (FGameViewportWidgetSlot *__return_storage_ptr__,FGameViewportWidgetSlot *param_1,
          TVector2<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  bool bVar9;
  undefined3 uVar10;
  
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  (param_1->Offsets).Right = (float)(param_2->field0_0x0)._s_0.X;
  (param_1->Offsets).Bottom = (float)dVar1;
  (param_1->Anchors).Minimum.field0_0x0._s_0.X = 0.0;
  (param_1->Anchors).Minimum.field0_0x0._s_0.Y = 0.0;
  (param_1->Anchors).Maximum.field0_0x0._s_0.X = 0.0;
  (param_1->Anchors).Maximum.field0_0x0._s_0.Y = 0.0;
  dVar1 = (param_1->Anchors).Minimum.field0_0x0._s_0.Y;
  dVar2 = (param_1->Anchors).Maximum.field0_0x0._s_0.X;
  dVar3 = (param_1->Anchors).Maximum.field0_0x0._s_0.Y;
  (__return_storage_ptr__->Anchors).Minimum.field0_0x0._s_0.X =
       (param_1->Anchors).Minimum.field0_0x0._s_0.X;
  (__return_storage_ptr__->Anchors).Minimum.field0_0x0._s_0.Y = dVar1;
  fVar4 = (param_1->Offsets).Left;
  fVar5 = (param_1->Offsets).Top;
  fVar6 = (param_1->Offsets).Right;
  fVar7 = (param_1->Offsets).Bottom;
  (__return_storage_ptr__->Anchors).Maximum.field0_0x0._s_0.X = dVar2;
  (__return_storage_ptr__->Anchors).Maximum.field0_0x0._s_0.Y = dVar3;
  dVar1 = (param_1->Alignment).field0_0x0._s_0.X;
  dVar2 = (param_1->Alignment).field0_0x0._s_0.Y;
  (__return_storage_ptr__->Offsets).Left = fVar4;
  (__return_storage_ptr__->Offsets).Top = fVar5;
  (__return_storage_ptr__->Offsets).Right = fVar6;
  (__return_storage_ptr__->Offsets).Bottom = fVar7;
  iVar8 = param_1->ZOrder;
  bVar9 = param_1->bAutoRemoveOnWorldRemoved;
  uVar10 = *(undefined3 *)&param_1->field_0x45;
  (__return_storage_ptr__->Alignment).field0_0x0._s_0.X = dVar1;
  (__return_storage_ptr__->Alignment).field0_0x0._s_0.Y = dVar2;
  __return_storage_ptr__->ZOrder = iVar8;
  __return_storage_ptr__->bAutoRemoveOnWorldRemoved = bVar9;
  *(undefined3 *)&__return_storage_ptr__->field_0x45 = uVar10;
  return __return_storage_ptr__;
}

// SetWidgetSlotPosition @ 146944b10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FGameViewportWidgetSlot * __cdecl
UGameViewportSubsystem::SetWidgetSlotPosition
          (FGameViewportWidgetSlot *__return_storage_ptr__,FGameViewportWidgetSlot *param_1,
          UWidget *param_2,TVector2<double> *param_3,bool param_4)

{
  TVector2<double>_u_0 TVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  bool bVar9;
  undefined3 uVar10;
  float fVar11;
  
  if (param_4) {
    fVar11 = UWidgetLayoutLibrary::GetViewportScale((UObject *)param_2);
    dVar2 = (param_3->field0_0x0)._s_0.Y * (__real_3ff0000000000000 / (double)fVar11);
    TVar1._8_4_ = SUB84(dVar2,0);
    TVar1._s_0.X = (param_3->field0_0x0)._s_0.X * (__real_3ff0000000000000 / (double)fVar11);
    TVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    param_3->field0_0x0 = TVar1;
  }
  dVar2 = (param_3->field0_0x0)._s_0.Y;
  (param_1->Offsets).Left = (float)(param_3->field0_0x0)._s_0.X;
  (param_1->Offsets).Top = (float)dVar2;
  (param_1->Anchors).Minimum.field0_0x0._s_0.X = 0.0;
  (param_1->Anchors).Minimum.field0_0x0._s_0.Y = 0.0;
  (param_1->Anchors).Maximum.field0_0x0._s_0.X = 0.0;
  (param_1->Anchors).Maximum.field0_0x0._s_0.Y = 0.0;
  dVar2 = (param_1->Anchors).Minimum.field0_0x0._s_0.Y;
  dVar3 = (param_1->Anchors).Maximum.field0_0x0._s_0.X;
  dVar4 = (param_1->Anchors).Maximum.field0_0x0._s_0.Y;
  (__return_storage_ptr__->Anchors).Minimum.field0_0x0._s_0.X =
       (param_1->Anchors).Minimum.field0_0x0._s_0.X;
  (__return_storage_ptr__->Anchors).Minimum.field0_0x0._s_0.Y = dVar2;
  fVar11 = (param_1->Offsets).Left;
  fVar5 = (param_1->Offsets).Top;
  fVar6 = (param_1->Offsets).Right;
  fVar7 = (param_1->Offsets).Bottom;
  (__return_storage_ptr__->Anchors).Maximum.field0_0x0._s_0.X = dVar3;
  (__return_storage_ptr__->Anchors).Maximum.field0_0x0._s_0.Y = dVar4;
  dVar2 = (param_1->Alignment).field0_0x0._s_0.X;
  dVar3 = (param_1->Alignment).field0_0x0._s_0.Y;
  (__return_storage_ptr__->Offsets).Left = fVar11;
  (__return_storage_ptr__->Offsets).Top = fVar5;
  (__return_storage_ptr__->Offsets).Right = fVar6;
  (__return_storage_ptr__->Offsets).Bottom = fVar7;
  iVar8 = param_1->ZOrder;
  bVar9 = param_1->bAutoRemoveOnWorldRemoved;
  uVar10 = *(undefined3 *)&param_1->field_0x45;
  (__return_storage_ptr__->Alignment).field0_0x0._s_0.X = dVar2;
  (__return_storage_ptr__->Alignment).field0_0x0._s_0.Y = dVar3;
  __return_storage_ptr__->ZOrder = iVar8;
  __return_storage_ptr__->bAutoRemoveOnWorldRemoved = bVar9;
  *(undefined3 *)&__return_storage_ptr__->field_0x45 = uVar10;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUGameViewportSubsystem @ 1469458b0

void __cdecl UGameViewportSubsystem::StaticRegisterNativesUGameViewportSubsystem(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 8;
  local_18.DataPtr = Z_Construct_UClass_UGameViewportSubsystem_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddWidget @ 146950780

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UGameViewportSubsystem::execAddWidget(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  UWidget *local_res10;
  double local_a8;
  double dStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  TVector2<double>_u_0 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_res10 = (UWidget *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_98 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_90 = _UNK_150689688;
  local_78 = 0;
  uStack_70 = 0;
  local_a8 = 0.0;
  dStack_a0 = 0.0;
  local_88 = 0;
  uStack_80 = 0;
  local_68 = 0;
  uStack_64 = CONCAT31(uStack_64._1_3_,1);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_58._s_0.X = local_a8;
  local_58._s_0.Y = dStack_a0;
  local_48 = local_98;
  uStack_40 = uStack_90;
  local_38 = local_88;
  uStack_30 = uStack_80;
  local_18 = CONCAT44(uStack_64,local_68);
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = local_78;
  uStack_20 = uStack_70;
  bVar2 = AddToScreen((UGameViewportSubsystem *)param_1,local_res10,(ULocalPlayer *)0x0,
                      (FGameViewportWidgetSlot *)&local_58._s_0);
  *(bool *)param_3 = bVar2;
  return;
}

// execAddWidgetForPlayer @ 1469508e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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

void __cdecl
UGameViewportSubsystem::execAddWidgetForPlayer(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  ULocalPlayer *local_res10;
  UWidget *local_res18;
  undefined8 local_res20;
  double local_c8;
  double dStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  TVector2<double>_u_0 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_res18 = (UWidget *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10 = (ULocalPlayer *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_b8 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_b0 = _UNK_150689688;
  local_98 = 0;
  uStack_90 = 0;
  local_c8 = 0.0;
  dStack_c0 = 0.0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_88 = 0;
  uStack_84 = CONCAT31(uStack_84._1_3_,1);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  local_78._s_0.X = local_c8;
  local_78._s_0.Y = dStack_c0;
  local_68 = local_b8;
  uStack_60 = uStack_b0;
  local_58 = local_a8;
  uStack_50 = uStack_a0;
  local_38 = CONCAT44(uStack_84,local_88);
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_48 = local_98;
  uStack_40 = uStack_90;
  if (local_res10 == (ULocalPlayer *)0x0) {
    local_res20 = 0;
    FFrame::KismetExecutionMessage(L"The Player is invalid.",Warning,(FName)0x0);
    *(undefined1 *)param_3 = 0;
    return;
  }
  bVar2 = AddToScreen((UGameViewportSubsystem *)param_1,local_res18,local_res10,
                      (FGameViewportWidgetSlot *)&local_78._s_0);
  *(bool *)param_3 = bVar2;
  return;
}

// execGetWidgetSlot @ 146952f10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UGameViewportSubsystem::execGetWidgetSlot(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  FSlotInfo *pFVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  FWeakObjectPtr local_res10;
  UObject *local_res18;
  UObject *local_res20;
  
  local_res18 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  pUVar2 = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res18 != (UObject *)0x0) && ((local_res18[6].field_0x9 & 0x20) != 0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(local_res18);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res20 = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
    pFVar3 = TMapBase<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>_>
             ::Find((TMapBase<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>_>
                     *)&param_1[2].field_0x20,(TObjectKey<UWidget> *)&local_res10);
    if (pFVar3 != (FSlotInfo *)0x0) {
      uVar4 = *(undefined4 *)&(pFVar3->Slot).Anchors.Minimum.field0_0x0;
      uVar5 = *(undefined4 *)((longlong)&(pFVar3->Slot).Anchors.Minimum.field0_0x0 + 4);
      uVar6 = *(undefined4 *)((longlong)&(pFVar3->Slot).Anchors.Minimum.field0_0x0 + 8);
      uVar7 = *(undefined4 *)((longlong)&(pFVar3->Slot).Anchors.Minimum.field0_0x0 + 0xc);
      dVar8 = (pFVar3->Slot).Anchors.Maximum.field0_0x0._s_0.X;
      dVar9 = (pFVar3->Slot).Anchors.Maximum.field0_0x0._s_0.Y;
      fVar10 = (pFVar3->Slot).Offsets.Left;
      fVar11 = (pFVar3->Slot).Offsets.Top;
      fVar12 = (pFVar3->Slot).Offsets.Right;
      fVar13 = (pFVar3->Slot).Offsets.Bottom;
      uVar14 = *(undefined4 *)&(pFVar3->Slot).Alignment.field0_0x0;
      uVar15 = *(undefined4 *)((longlong)&(pFVar3->Slot).Alignment.field0_0x0 + 4);
      uVar16 = *(undefined4 *)((longlong)&(pFVar3->Slot).Alignment.field0_0x0 + 8);
      uVar17 = *(undefined4 *)((longlong)&(pFVar3->Slot).Alignment.field0_0x0 + 0xc);
      uVar18._0_4_ = (pFVar3->Slot).ZOrder;
      uVar18._4_1_ = (pFVar3->Slot).bAutoRemoveOnWorldRemoved;
      uVar18._5_3_ = *(undefined3 *)&(pFVar3->Slot).field_0x45;
      goto LAB_14695304e;
    }
    `UGameViewportSubsystem::GetWidgetSlot'::__l5::<lambda_1>::operator()(&local_res10);
  }
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  fVar10 = 0.0;
  fVar11 = 0.0;
  fVar12 = 0.0;
  fVar13 = 0.0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0x100000000;
  dVar8 = ___xmm_3ff00000000000003ff0000000000000;
  dVar9 = _UNK_150689688;
LAB_14695304e:
  *(undefined4 *)param_3 = uVar4;
  *(undefined4 *)((longlong)param_3 + 4) = uVar5;
  *(undefined4 *)((longlong)param_3 + 8) = uVar6;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar7;
  *(double *)((longlong)param_3 + 0x10) = dVar8;
  *(double *)((longlong)param_3 + 0x18) = dVar9;
  *(float *)((longlong)param_3 + 0x20) = fVar10;
  *(float *)((longlong)param_3 + 0x24) = fVar11;
  *(float *)((longlong)param_3 + 0x28) = fVar12;
  *(float *)((longlong)param_3 + 0x2c) = fVar13;
  *(undefined4 *)((longlong)param_3 + 0x30) = uVar14;
  *(undefined4 *)((longlong)param_3 + 0x34) = uVar15;
  *(undefined4 *)((longlong)param_3 + 0x38) = uVar16;
  *(undefined4 *)((longlong)param_3 + 0x3c) = uVar17;
  *(undefined8 *)((longlong)param_3 + 0x40) = uVar18;
  return;
}

// execIsWidgetAdded @ 146953a40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGameViewportSubsystem::execIsWidgetAdded(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  UObject *pUVar3;
  FSlotInfo *pFVar4;
  UObject *local_res10;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar3 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UObject *)0x0) {
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    FFrame::KismetExecutionMessage(L"The Widget is invalid.",Warning,(FName)0x0);
  }
  else if ((local_res10[6].field_0x9 & 0x20) != 0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(local_res10);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_res20 = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
    pFVar4 = TMapBase<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>_>
             ::Find((TMapBase<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>_>
                     *)&param_1[2].field_0x20,(TObjectKey<UWidget> *)&local_res18);
    if (pFVar4 != (FSlotInfo *)0x0) {
      if ((((pFVar4->FullScreenWidget).Object != (SConstraintCanvas *)0x0) &&
          (pTVar2 = (pFVar4->FullScreenWidget).WeakReferenceCount.ReferenceController,
          pTVar2 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar2->SharedReferenceCount))
      {
        *(undefined1 *)param_3 = 1;
        return;
      }
      *(undefined1 *)param_3 = 0;
      return;
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execRemoveWidget @ 146954300

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UGameViewportSubsystem::execRemoveWidget(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FProperty *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  SConstraintCanvas *pSVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  char cVar9;
  atomic<int> aVar10;
  uint uVar11;
  UWorld *this;
  UGameViewportClient *pUVar12;
  UObject *pUVar13;
  uint uVar14;
  TReferenceControllerBase<1> *pTVar15;
  longlong lVar16;
  bool bVar17;
  UObject *local_res10 [2];
  FWeakObjectPtr local_res20;
  UObject *local_f8;
  FWeakObjectPtr local_f0;
  SConstraintCanvas *local_e8;
  TReferenceControllerBase<1> *local_e0;
  SConstraintCanvas *local_d8;
  TReferenceControllerBase<1> *local_d0;
  FDestructionSentinel local_c8;
  TVector2<double>_u_0 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined1 local_64;
  FWeakObjectPtr local_60;
  SConstraintCanvas *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  undefined8 local_48;
  
  local_res10[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar13 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == (UObject *)0x0) {
    return;
  }
  if ((local_res10[0][6].field_0x9 & 0x20) == 0) {
    return;
  }
  local_98 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_90 = _UNK_150689688;
  local_78 = 0;
  uStack_70 = 0;
  local_a8._s_0.X = 0.0;
  local_a8._s_0.Y = 0.0;
  local_88 = 0;
  uStack_80 = 0;
  local_68 = 0;
  local_64 = 1;
  local_60.ObjectIndex = 0;
  local_60.ObjectSerialNumber = 0;
  local_58 = (SConstraintCanvas *)0x0;
  pTStack_50 = (TReferenceControllerBase<1> *)0x0;
  local_48 = 0;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(local_res10[0]);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_f8 = pUVar13;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(pUVar13);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_f8);
  local_f0 = local_res20;
  TMap<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>_>
  ::RemoveAndCopyValue
            ((TMap<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>_>
              *)&param_1[2].field_0x20,(TObjectKey<UWidget> *)&local_f0,(FSlotInfo *)&local_a8._s_0)
  ;
  pTVar15 = pTStack_50;
  pSVar6 = local_58;
  pUVar13[6].field_0x9 = pUVar13[6].field_0x9 & 0xdf;
  pTVar7 = pTVar15;
  if (pTStack_50 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTStack_50->SharedReferenceCount;
    do {
      pTVar7 = (TReferenceControllerBase<1> *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_146954504;
      LOCK();
      aVar10 = pTStack_50->SharedReferenceCount;
      bVar17 = aVar2 == aVar10;
      if (bVar17) {
        pTStack_50->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar10 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar10;
    } while (!bVar17);
    LOCK();
    pTStack_50->SharedReferenceCount = (atomic<int>)((int)pTStack_50->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
    if ((((pSVar6 == (SConstraintCanvas *)0x0) ||
         (this = (UWorld *)(**(code **)(*(longlong *)pUVar13 + 0x180))(pUVar13),
         this == (UWorld *)0x0)) || (bVar17 = UWorld::IsGameWorld(this), !bVar17)) ||
       (pUVar12 = UWorld::GetGameViewport(this), pUVar12 == (UGameViewportClient *)0x0))
    goto LAB_146954509;
    LOCK();
    pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
    UNLOCK();
    local_e8 = pSVar6;
    local_e0 = pTVar15;
    pcVar5 = *(code **)(pUVar12->_padding_ + 0x2f0);
    LOCK();
    pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
    UNLOCK();
    (*pcVar5)(pUVar12,&local_e8);
    local_d8 = pSVar6;
    local_d0 = pTVar15;
    pcVar5 = *(code **)(pUVar12->_padding_ + 0x300);
    LOCK();
    pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
    UNLOCK();
    pUVar13 = FWeakObjectPtr::Get(&local_60);
    (*pcVar5)(pUVar12,pUVar13,&local_d8);
    pTVar7 = pTVar15;
  }
LAB_146954504:
  pTVar15 = pTVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
LAB_146954509:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(param_1 + 2),
             (FWriteAccessScope *)&local_c8);
  *(int *)&param_1[2].field_0x1c = *(int *)&param_1[2].field_0x1c + 1;
  bVar17 = false;
  uVar14 = *(int *)&param_1[2].field_0x10 - 1;
  if (-1 < (int)uVar14) {
    lVar16 = (longlong)(int)uVar14 << 4;
    bVar17 = false;
    do {
      uVar11 = 0;
      if ((int)uVar14 < *(int *)&param_1[2].field_0x10) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (((*(int *)(*(longlong *)&param_1[2].field_0x8 + 8 + lVar16) == 0) ||
          (plVar4 = *(longlong **)(*(longlong *)&param_1[2].field_0x8 + lVar16),
          plVar4 == (longlong *)0x0)) || (cVar9 = (**(code **)(*plVar4 + 0x68))(), cVar9 == '\0')) {
        bVar17 = true;
      }
      lVar16 = lVar16 + -0x10;
      uVar14 = uVar14 - 1;
    } while (-1 < (int)uVar14);
  }
  *(int *)&param_1[2].field_0x1c = *(int *)&param_1[2].field_0x1c + -1;
  if (bVar17) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(param_1 + 2),false);
  }
  if (local_c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
  }
  if (pTStack_50 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTStack_50->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTStack_50->_padding_ + 8))(pTStack_50,1);
    }
  }
  return;
}

// execSetWidgetSlot @ 146956b40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UGameViewportSubsystem::execSetWidgetSlot(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  SConstraintCanvas *this;
  code *pcVar3;
  atomic<int> aVar4;
  UObject *pUVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  atomic<int> aVar18;
  FSlotInfo *pFVar19;
  uint uVar20;
  uint uVar21;
  TReferenceControllerBase<1> *pTVar22;
  uint uVar23;
  bool bVar24;
  FWeakObjectPtr local_res10 [2];
  UObject *local_res20;
  undefined1 local_248 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_240;
  ForAnyElementType FStack_238;
  ulonglong local_230;
  undefined1 local_228 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_210;
  ForAnyElementType FStack_208;
  ulonglong local_200;
  TVector2<double>_u_0 local_1f8;
  undefined1 local_1e8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1e0;
  ForAnyElementType FStack_1d8;
  ulonglong local_1d0;
  TVector2<double>_u_0 local_1c8;
  double local_1b8;
  double dStack_1b0;
  undefined1 local_1a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1a0;
  ForAnyElementType FStack_198;
  ulonglong local_190;
  UObject *local_188;
  FWeakObjectPtr local_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148;
  double dStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  FDestructionSentinel local_128;
  FDestructionSentinel local_110;
  FDestructionSentinel local_f8;
  FDestructionSentinel local_e0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  double local_98;
  double dStack_90;
  undefined8 local_88;
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_168 = ___xmm_3ff00000000000003ff0000000000000;
  dStack_160 = _UNK_150689688;
  local_148 = 0.0;
  dStack_140 = 0.0;
  local_178 = 0.0;
  dStack_170 = 0.0;
  local_158 = 0;
  uStack_150 = 0;
  local_138 = 0;
  uStack_134 = CONCAT31(uStack_134._1_3_,1);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_178,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_178);
  }
  uVar17 = uStack_134;
  uVar16 = local_138;
  dVar15 = dStack_140;
  dVar14 = local_148;
  dVar9 = dStack_160;
  dVar8 = local_168;
  dVar7 = dStack_170;
  dVar6 = local_178;
  pUVar5 = local_res20;
  fVar10 = (float)local_158;
  fVar11 = local_158._4_4_;
  fVar12 = (float)uStack_150;
  fVar13 = uStack_150._4_4_;
  local_88 = CONCAT44(uStack_134,local_138);
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_c8 = local_178;
  dStack_c0 = dStack_170;
  local_b8 = local_168;
  dStack_b0 = dStack_160;
  local_a8 = (float)local_158;
  fStack_a4 = local_158._4_4_;
  fStack_a0 = (float)uStack_150;
  fStack_9c = uStack_150._4_4_;
  local_98 = local_148;
  dStack_90 = dStack_140;
  if ((local_res20 != (UObject *)0x0) && ((*(uint *)&local_res20->field_0x8 >> 0xf & 1) == 0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(local_res20);
    }
    local_res10[0].ObjectIndex = 0;
    local_res10[0].ObjectSerialNumber = 0;
    local_188 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    FWeakObjectPtr::operator=(local_res10,(FObjectPtr)&local_188);
    local_180 = local_res10[0];
    uVar23 = local_res10[0].ObjectIndex - local_res10[0].ObjectSerialNumber ^
             (uint)local_res10[0].ObjectSerialNumber >> 0xd;
    uVar20 = (-0x61c88647 - uVar23) - local_res10[0].ObjectSerialNumber ^ uVar23 << 8;
    uVar21 = (local_res10[0].ObjectSerialNumber - uVar20) - uVar23 ^ uVar20 >> 0xd;
    uVar23 = (uVar23 - uVar21) - uVar20 ^ uVar21 >> 0xc;
    uVar20 = (uVar20 - uVar21) - uVar23 ^ uVar23 << 0x10;
    uVar21 = (uVar21 - uVar20) - uVar23 ^ uVar20 >> 5;
    uVar23 = (uVar23 - uVar21) - uVar20 ^ uVar21 >> 3;
    uVar20 = (uVar20 - uVar23) - uVar21 ^ uVar23 << 10;
    pFVar19 = TMapBase<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>_>
              ::FindOrAddImpl<TObjectKey<UWidget>_const_&>
                        ((TMapBase<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>_>
                          *)&param_1[2].field_0x20,(uVar21 - uVar20) - uVar23 ^ uVar20 >> 0xf,
                         (TObjectKey<UWidget> *)&local_180);
    pUVar5[6].field_0x9 = pUVar5[6].field_0x9 | 0x20;
    (pFVar19->Slot).Anchors.Minimum.field0_0x0._s_0.X = dVar6;
    (pFVar19->Slot).Anchors.Minimum.field0_0x0._s_0.Y = dVar7;
    (pFVar19->Slot).Anchors.Maximum.field0_0x0._s_0.X = dVar8;
    (pFVar19->Slot).Anchors.Maximum.field0_0x0._s_0.Y = dVar9;
    (pFVar19->Slot).Offsets.Left = fVar10;
    (pFVar19->Slot).Offsets.Top = fVar11;
    (pFVar19->Slot).Offsets.Right = fVar12;
    (pFVar19->Slot).Offsets.Bottom = fVar13;
    (pFVar19->Slot).Alignment.field0_0x0._s_0.X = dVar14;
    (pFVar19->Slot).Alignment.field0_0x0._s_0.Y = dVar15;
    (pFVar19->Slot).ZOrder = uVar16;
    (pFVar19->Slot).bAutoRemoveOnWorldRemoved = (bool)(char)uVar17;
    *(int3 *)&(pFVar19->Slot).field_0x45 = (int3)((uint)uVar17 >> 8);
    pTVar2 = (pFVar19->FullScreenWidget).WeakReferenceCount.ReferenceController;
    pTVar22 = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      aVar4 = pTVar2->SharedReferenceCount;
      do {
        pTVar22 = (TReferenceControllerBase<1> *)0x0;
        if (aVar4 == (atomic<int>)0x0) goto LAB_146956db4;
        LOCK();
        aVar18 = pTVar2->SharedReferenceCount;
        bVar24 = aVar4 == aVar18;
        if (bVar24) {
          pTVar2->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
          aVar18 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar18;
      } while (!bVar24);
      this = (pFVar19->FullScreenWidget).Object;
      pTVar22 = pTVar2;
      if (this != (SConstraintCanvas *)0x0) {
        if ((pFVar19->FullScreenWidgetSlot == (FSlot *)0x0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("SlotInfo.FullScreenWidgetSlot",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Blueprint\\GameViewportSubsystem.cpp"
                                ,0x101,L""), bVar24)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((((fVar12 == 0.0) && (fVar13 == 0.0)) && (dVar7 == dVar9)) && (dVar6 == dVar8)) {
          bVar24 = true;
        }
        else {
          bVar24 = false;
        }
        local_228[0x10] = true;
        local_200 = 0;
        local_228._0_4_ = fVar10;
        local_228._4_4_ = fVar11;
        local_228._8_4_ = fVar12;
        local_228._12_4_ = fVar13;
        local_210.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        FStack_208.Data = (FScriptContainerElement *)0x0;
        SConstraintCanvas::FSlot::SetOffset
                  (pFVar19->FullScreenWidgetSlot,(TAttribute<FMargin> *)local_228);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_210,(FWriteAccessScope *)&local_128);
        if (((int)local_200 != 0) && (FStack_208.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_208.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_208,0,0,0x10)
          ;
          local_200 = local_200 & 0xffffffff00000000;
        }
        if (local_128.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_128.Accessor,&local_128);
        }
        if (FStack_208.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_208.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_210.AccessDetector);
        local_248[1] = true;
        local_230 = 0;
        local_240.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        FStack_238.Data = (FScriptContainerElement *)0x0;
        local_248[0] = bVar24;
        FSlotBase::SetAttribute<bool,bool>
                  ((FSlotBase *)pFVar19->FullScreenWidgetSlot,
                   &pFVar19->FullScreenWidgetSlot->AutoSizeAttr,(TAttribute<bool> *)local_248,Layout
                  );
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_240,(FWriteAccessScope *)&local_110);
        if (((int)local_230 != 0) && (FStack_238.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_238.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_238,0,0,0x10)
          ;
          local_230 = local_230 & 0xffffffff00000000;
        }
        if (local_110.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_110.Accessor,&local_110);
        }
        if (FStack_238.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_238.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_240.AccessDetector);
        local_1a8 = 1;
        local_190 = 0;
        local_1c8._s_0.X = dVar6;
        local_1c8._s_0.Y = dVar7;
        local_1b8 = dVar8;
        dStack_1b0 = dVar9;
        local_1a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        FStack_198.Data = (FScriptContainerElement *)0x0;
        SConstraintCanvas::FSlot::SetAnchors
                  (pFVar19->FullScreenWidgetSlot,(TAttribute<FAnchors> *)&local_1c8._s_0);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_1a0,(FWriteAccessScope *)&local_f8);
        if (((int)local_190 != 0) && (FStack_198.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_198.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_198,0,0,0x10)
          ;
          local_190 = local_190 & 0xffffffff00000000;
        }
        if (local_f8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f8.Accessor,&local_f8);
        }
        if (FStack_198.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_198.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1a0.AccessDetector);
        local_1e8 = 1;
        local_1d0 = 0;
        local_1f8._s_0.X = dVar14;
        local_1f8._s_0.Y = dVar15;
        local_1e0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        FStack_1d8.Data = (FScriptContainerElement *)0x0;
        SConstraintCanvas::FSlot::SetAlignment
                  (pFVar19->FullScreenWidgetSlot,
                   (TAttribute<UE::Math::TVector2<double>_> *)&local_1f8._s_0);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_1e0,(FWriteAccessScope *)&local_e0);
        if (((int)local_1d0 != 0) && (FStack_1d8.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_1d8.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1d8,0,0,0x10)
          ;
          local_1d0 = local_1d0 & 0xffffffff00000000;
        }
        if (local_e0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e0.Accessor,&local_e0);
        }
        if (FStack_1d8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_1d8.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1e0.AccessDetector);
        SConstraintCanvas::FSlot::SetZOrder(pFVar19->FullScreenWidgetSlot,(float)(int)local_88);
        SWidget::Invalidate((SWidget *)this,Layout);
      }
    }
LAB_146956db4:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22);
  }
  return;
}

// execSetWidgetSlotDesiredSize @ 146957130

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UGameViewportSubsystem::execSetWidgetSlotDesiredSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double local_c8;
  double local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  
  local_a8 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_a0 = _UNK_150689688;
  local_88 = 0;
  uStack_80 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_78 = 0;
  uStack_74 = CONCAT31(uStack_74._1_3_,1);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  *(undefined8 *)((longlong)param_3 + 0x10) = 0;
  *(undefined8 *)((longlong)param_3 + 0x18) = 0;
  *(undefined4 *)((longlong)param_3 + 0x20) = (undefined4)local_98;
  *(undefined4 *)((longlong)param_3 + 0x24) = local_98._4_4_;
  *(float *)((longlong)param_3 + 0x28) = (float)local_c8;
  *(float *)((longlong)param_3 + 0x2c) = (float)local_c0;
  *(undefined8 *)((longlong)param_3 + 0x30) = local_88;
  *(undefined8 *)((longlong)param_3 + 0x38) = uStack_80;
  *(ulonglong *)((longlong)param_3 + 0x40) = CONCAT44(uStack_74,local_78);
  return;
}

// execSetWidgetSlotPosition @ 146957290

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UGameViewportSubsystem::execSetWidgetSlotPosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  int local_res10 [2];
  UObject *local_res18 [2];
  double local_e8;
  double dStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined8 uStack_60;
  
  local_c8 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_c0 = _UNK_150689688;
  local_a8 = 0;
  uStack_a0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_98 = 0;
  uStack_94 = CONCAT31(uStack_94._1_3_,1);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_res18[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar4 = uStack_a0;
  uVar3 = local_a8;
  uVar2 = CONCAT44(uStack_94,local_98);
  local_88 = local_d8;
  uStack_80 = uStack_d0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_68 = local_b8;
  uStack_60 = uStack_b0;
  if (local_res10[0] != 0) {
    fVar5 = UWidgetLayoutLibrary::GetViewportScale(local_res18[0]);
    local_e8 = local_e8 * (__real_3ff0000000000000 / (double)fVar5);
    dStack_e0 = dStack_e0 * (__real_3ff0000000000000 / (double)fVar5);
  }
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  *(undefined8 *)((longlong)param_3 + 0x10) = 0;
  *(undefined8 *)((longlong)param_3 + 0x18) = 0;
  *(float *)((longlong)param_3 + 0x20) = (float)local_e8;
  *(float *)((longlong)param_3 + 0x24) = (float)dStack_e0;
  *(undefined4 *)((longlong)param_3 + 0x28) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)param_3 + 0x2c) = uStack_60._4_4_;
  *(undefined8 *)((longlong)param_3 + 0x30) = uVar3;
  *(undefined8 *)((longlong)param_3 + 0x38) = uVar4;
  *(undefined8 *)((longlong)param_3 + 0x40) = uVar2;
  return;
}

// operator() @ 1504f5eb0

bool __thiscall `UGameViewportSubsystem::GetWidgetSlot'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5525962338156412690>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5525962338156412690>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

