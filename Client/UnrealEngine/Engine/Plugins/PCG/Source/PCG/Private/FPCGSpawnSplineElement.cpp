// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// CanExecuteOnlyOnMainThread @ 149c5d640

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
FPCGSpawnSplineElement::CanExecuteOnlyOnMainThread
          (FPCGSpawnSplineElement *this,FPCGContext *param_1)

{
  return true;
}

// ExecuteInternal @ 149c67270

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FPCGSpawnSplineElement::ExecuteInternal(FPCGSpawnSplineElement *this,FPCGContext *param_1)

{
  atomic<int> *paVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  UPCGNode *this_00;
  IPCGGraphExecutionSource *pIVar4;
  longlong lVar5;
  code *pcVar6;
  FPCGContext *pFVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  FName FVar10;
  FName FVar11;
  bool bVar12;
  undefined1 uVar13;
  char cVar14;
  int iVar15;
  UClass *pUVar16;
  UPCGSettings *pUVar17;
  FPCGCrc FVar18;
  UPCGComponent *pUVar19;
  UObject *pUVar20;
  FText *pFVar21;
  FString *pFVar22;
  UPCGComponent *pUVar23;
  USplineComponent *this_01;
  UPCGManagedResource *pUVar24;
  FTextFormat *pFVar25;
  UClass *pUVar26;
  UPCGSpatialData *pUVar27;
  FPCGMetadataAttribute<FSoftObjectPath> *pFVar28;
  FPCGTaggedData *pFVar29;
  longlong *plVar30;
  ulonglong uVar31;
  ForAnyElementType FVar32;
  wchar_t *pwVar33;
  <lambda_1> <Var34;
  wchar_t *pwVar35;
  FPCGObjectSingleOverride *pFVar36;
  UPCGComponent *pUVar37;
  byte bVar38;
  bool bVar39;
  undefined1 auStackY_4b8 [32];
  <lambda_1> local_468 [8];
  FPCGTaggedData *local_460;
  undefined1 local_458;
  undefined1 local_457;
  undefined1 local_456 [6];
  FPCGCrc local_450;
  undefined4 local_448 [2];
  FPCGTaggedData *local_440;
  FPCGContext *local_438;
  undefined1 local_430 [64];
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_3f0;
  TArray<UFunction_const_*,TSizedDefaultAllocator<32>_> local_3e0;
  FName local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  USplineComponent *local_3b8;
  FSoftObjectPath local_3b0;
  undefined1 local_388 [24];
  undefined1 local_370;
  USplineComponent *local_368;
  ForAnyElementType local_360;
  undefined8 local_358;
  bool local_350;
  TArray<UFunction_*,TSizedDefaultAllocator<32>_> local_348;
  FSoftObjectPath local_338;
  undefined1 local_318 [8];
  USplineComponent *local_310;
  UObject *local_308;
  FName local_300;
  UObject *local_2f8 [2];
  FPCGAttributePropertySelector local_2e8;
  FSoftObjectPath *local_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  FText local_298;
  wchar_t *local_288;
  int iStack_280;
  undefined4 uStack_27c;
  FString local_278;
  FText local_268;
  FText local_258;
  TArrayView<FSoftObjectPath,int> local_248;
  FString local_238;
  FText local_228;
  FText local_218;
  TStringView<wchar_t> local_208;
  FText local_1f8;
  TSharedRef<FTextFormatData,1> local_1e8;
  FText local_1d8;
  FText local_1c8;
  FText local_1b8;
  FPCGAttributeAccessorKeysEntries local_1a8;
  FTextFormat local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  undefined1 local_138 [128];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_4b8;
  bVar39 = -1 < CpuChannel->Enabled;
  local_438 = param_1;
  if (bVar39) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId49,"FPCGSpawnSplineElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSpawnSpline.cpp"
               ,0x31);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId49);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InContext",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSpawnSpline.cpp"
                          ,0x33,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    uVar13 = (*pcVar6)();
    return (bool)uVar13;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar17 = UPCGNode::GetSettings(this_00), pUVar17 == (UPCGSettings *)0x0)) {
      pFVar29 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSpawnSplineSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,(<lambda_1>)local_468[0]);
      if (pFVar29 != (FPCGTaggedData *)0x0) {
        local_430._48_8_ = (pFVar29->Data).Data.field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((FPCGCrc)local_430._48_8_ != (FPCGCrc)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_430._48_8_);
        }
        if ((FPCGCrc)local_430._48_8_ != (FPCGCrc)0x0) {
          pUVar16 = UPCGSpawnSplineSettings::StaticClass();
          bVar12 = FObjectPtr::IsA((FObjectPtr *)(local_430 + 0x30),pUVar16);
          if (bVar12) {
            local_450.Value = local_430._48_4_;
            local_450.bValid = (bool)local_430[0x34];
            local_450._5_3_ = local_430._53_3_;
            FVar18 = (FPCGCrc)local_430._48_8_;
            goto LAB_149c6742f;
          }
        }
      }
    }
    else {
      pUVar17 = UPCGNode::GetSettings(this_00);
      FVar18 = (FPCGCrc)FPCGDataCollection::GetSettings(&param_1->InputData,pUVar17);
      if (FVar18 != (FPCGCrc)0x0) {
        local_450 = FVar18;
        pUVar16 = UPCGSpawnSplineSettings::StaticClass();
        iVar15 = (int)pUVar16->_padding_;
        if ((iVar15 <= *(int *)(*(longlong *)((longlong)FVar18 + 0x10) + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)((longlong)FVar18 + 0x10) + 0x30) + (longlong)iVar15 * 8)
            == &pUVar16->_padding_)) goto LAB_149c6742f;
      }
    }
    FVar18.Value = 0;
    FVar18.bValid = false;
    FVar18._5_3_ = 0;
    local_450.Value = 0;
    local_450.bValid = false;
    local_450._5_3_ = 0;
  }
  else {
    pUVar16 = UPCGSpawnSplineSettings::StaticClass();
    bVar12 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar16);
    FVar18.Value = 0;
    FVar18.bValid = false;
    FVar18._5_3_ = 0;
    if (bVar12) {
      local_450 = (FPCGCrc)(param_1->SettingsWithOverride).field0_0x0.DebugPtr;
      FVar18 = local_450;
    }
    else {
      local_450.Value = 0;
      local_450.bValid = false;
      local_450._5_3_ = 0;
    }
  }
LAB_149c6742f:
  pUVar37 = (UPCGComponent *)0x0;
  if ((FVar18 == (FPCGCrc)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSpawnSpline.cpp"
                          ,0x36,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    uVar13 = (*pcVar6)();
    return (bool)uVar13;
  }
  if (((((param_1->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) ||
       (bVar12 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), !bVar12)) ||
      (pIVar4 = (param_1->ExecutionSource).InterfaceInstance,
      pIVar4 == (IPCGGraphExecutionSource *)0x0)) ||
     (pUVar19 = (UPCGComponent *)(**(code **)((longlong)*pIVar4 + 8))(),
     pUVar19 == (UPCGComponent *)0x0)) {
LAB_149c674a5:
    local_430._24_8_ = (UPCGComponent *)0x0;
    pUVar19 = pUVar37;
  }
  else {
    local_430._24_8_ = pUVar19;
    pUVar16 = Z_Construct_UClass_UPCGComponent_NoRegister();
    iVar15 = (int)pUVar16->_padding_;
    if ((*(int *)(pUVar19->_padding_ + 0x38) < iVar15) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar19->_padding_ + 0x30) + (longlong)iVar15 * 8) !=
        &pUVar16->_padding_)) goto LAB_149c674a5;
  }
  lVar5 = ((UPCGSettings *)((longlong)FVar18 + 200))->_padding_;
  if ((lVar5 == 0) ||
     (pUVar16 = Z_Construct_UClass_USplineComponent_NoRegister(), pUVar16 == (UClass *)0x0))
  goto LAB_149c6825a;
  iVar15 = (int)pUVar16->_padding_;
  if ((*(int *)(lVar5 + 0x38) < iVar15) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar15 * 8) !=
      &pUVar16->_padding_)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (((!bVar12) || (((UPCGSettings *)((longlong)FVar18 + 200))->_padding_ == 0)) ||
     (pUVar19 == (UPCGComponent *)0x0)) goto LAB_149c6825a;
  pUVar20 = TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)((longlong)FVar18 + 0x118));
  if (pUVar20 == (UObject *)0x0) {
LAB_149c6755a:
    local_430._8_8_ = FPCGContext::GetTargetActor(param_1,(UPCGSpatialData *)0x0);
  }
  else {
    pUVar16 = Z_Construct_UClass_AActor_NoRegister();
    iVar15 = (int)pUVar16->_padding_;
    if ((*(int *)(*(longlong *)&pUVar20->field_0x10 + 0x38) < iVar15) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar20->field_0x10 + 0x30) + (longlong)iVar15 * 8) !=
        &pUVar16->_padding_)) goto LAB_149c6755a;
    local_430._8_8_ =
         TSoftObjectPtr<AActor>::Get((TSoftObjectPtr<AActor> *)((longlong)FVar18 + 0x118));
  }
  if ((AActor *)local_430._8_8_ == (AActor *)0x0) {
    pFVar21 = FText::AsLocalizable_Advanced_LocText
                        (&local_258,L"PCGSpawnSplineElement",L"InvalidTargetActor",
                         L"Invalid target actor. Ensure TargetActor member is initialized when creating SpatialData."
                        );
    PCGLog::LogErrorOnGraph(pFVar21,param_1);
    if (local_258.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_258.TextData.Reference + 0x10))();
    }
  }
  else {
    FPCGDataCollection::GetInputsByPin
              (&param_1->InputData,&local_3f0,&PCGPinConstants::DefaultInputLabel);
    uVar31 = (ulonglong)local_3f0.ArrayNum;
    local_430._40_4_ = local_3f0.ArrayNum;
    local_440 = (FPCGTaggedData *)(local_3f0.AllocatorInstance.Data + uVar31 * 0x78);
    local_460 = (FPCGTaggedData *)local_3f0.AllocatorInstance.Data;
    pFVar29 = local_440;
    <Var34 = local_468[0];
    while( true ) {
      if (local_3f0.ArrayNum != (uint)uVar31) {
        local_456[0] = 0;
        `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_456);
      }
      if (local_460 == pFVar29) break;
      local_430._56_8_ = (local_460->Data).Data.field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149c67635:
        if ((UPCGSplineData *)local_430._56_8_ == (UPCGSplineData *)0x0) goto LAB_149c68234;
        pUVar16 = Z_Construct_UClass_UPCGSplineData_NoRegister();
        bVar12 = FObjectPtr::IsA((FObjectPtr *)(local_430 + 0x38),pUVar16);
        uVar9 = local_430._56_8_;
        if ((!bVar12) ||
           (pFVar29 = local_440, (UPCGSplineData *)local_430._56_8_ == (UPCGSplineData *)0x0))
        goto LAB_149c68234;
        pUVar19 = (UPCGComponent *)((UPCGSettings *)((longlong)FVar18 + 200))->_padding_;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar19 != (UPCGComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar19);
        }
        local_430._32_8_ = uVar9;
        if (*(char *)((longlong)FVar18 + 0xd0) == '\0') {
LAB_149c678e2:
          if ((pUVar19 == (UPCGComponent *)0x0) ||
             (pUVar16 = Z_Construct_UClass_USplineComponent_NoRegister(), pUVar16 == (UClass *)0x0))
          {
LAB_149c681eb:
            pFVar21 = FText::AsLocalizable_Advanced_LocText
                                (&local_1b8,L"PCGSpawnSplineElement",L"InvalidSplineComponent",
                                 L"Invalid spline component subclass.");
            PCGLog::LogErrorOnGraph(pFVar21,local_438);
            pFVar29 = local_440;
            if (local_1b8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_1b8.TextData.Reference + 0x10))();
              pFVar29 = local_440;
            }
            goto LAB_149c68234;
          }
          iVar15 = (int)pUVar16->_padding_;
          if (((int)pUVar19->_padding_ < iVar15) ||
             ((longlong *)*(undefined1 **)(pUVar19->_padding_ + (longlong)iVar15 * 8) !=
              &pUVar16->_padding_)) {
            bVar12 = false;
          }
          else {
            bVar12 = true;
          }
          if (!bVar12) goto LAB_149c681eb;
          bVar12 = IsInGameThread();
          if ((!bVar12) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsInGameThread()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSpawnSpline.cpp"
                                  ,0x6b,L""), bVar12)) {
            pcVar6 = (code *)swi(3);
            uVar13 = (*pcVar6)();
            return (bool)uVar13;
          }
          local_3d0.ComparisonIndex.Value = 0;
          local_3d0.Number = 0;
          pUVar16 = Z_Construct_UClass_USplineComponent_NoRegister();
          FVar10 = local_3d0;
          uVar8 = local_430._8_8_;
          if (pUVar16 == (UClass *)0x0) {
LAB_149c67988:
            pUVar19 = pUVar37;
          }
          else {
            iVar15 = (int)pUVar16->_padding_;
            if (((int)pUVar19->_padding_ < iVar15) ||
               ((longlong *)*(undefined1 **)(pUVar19->_padding_ + (longlong)iVar15 * 8) !=
                &pUVar16->_padding_)) {
              bVar12 = false;
            }
            else {
              bVar12 = true;
            }
            if (!bVar12) goto LAB_149c67988;
          }
          local_3c8 = 0;
          if (local_3d0 == (FName)0x0) {
            FObjectInitializer::AssertIfInConstructor
                      ((UObject *)local_430._8_8_,
                       L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                      );
          }
          pUVar16 = Z_Construct_UClass_USplineComponent_NoRegister();
          CheckIsClassChildOf_Internal(pUVar16,(UClass *)pUVar19);
          FStaticConstructObjectParameters::FStaticConstructObjectParameters
                    ((FStaticConstructObjectParameters *)local_138,(UClass *)pUVar19);
          FVar11 = local_3d0;
          local_138._8_8_ = uVar8;
          local_138._48_8_ = (FObjectInstancingGraph *)0x0;
          local_138._56_8_ = (UPackage *)0x0;
          local_3d0.ComparisonIndex = FVar10.ComparisonIndex.Value;
          local_3d0.Number = FVar10.Number;
          local_138._16_4_ = local_3d0.ComparisonIndex.Value;
          local_138._20_4_ = local_3d0.Number;
          local_138._24_4_ = RF_NoFlags;
          local_138._40_8_ = (UObject *)0x0;
          local_138[0x20] = false;
          local_3d0 = FVar11;
          this_01 = (USplineComponent *)
                    StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_138);
          local_3b8 = this_01;
          if (local_138._64_8_ != 0) {
            plVar30 = (longlong *)(local_138 + 0x50);
            if ((longlong *)local_138._104_8_ != (longlong *)0x0) {
              plVar30 = (longlong *)local_138._104_8_;
            }
            (**(code **)(*plVar30 + 0x10))();
          }
          local_430._16_8_ = *(longlong *)(local_430._24_8_ + 0x18);
          if ((((undefined1 *)this_01->_padding_ <= local_430 + 0x10) &&
              (local_430 + 0x10 <
               (undefined1 *)this_01->_padding_ +
               (longlong)*(int *)((longlong)&this_01->_padding_ + 4) * 8)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar6 = (code *)swi(3);
            uVar13 = (*pcVar6)();
            return (bool)uVar13;
          }
          iVar15 = (int)this_01->_padding_;
          if (iVar15 == *(int *)((longlong)&this_01->_padding_ + 4)) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,(ForAnyElementType *)&this_01->_padding_,
                                (int *)((longlong)&this_01->_padding_ + 4));
          }
          *(int *)&this_01->_padding_ = iVar15 + 1;
          *(undefined8 *)(this_01->_padding_ + (longlong)iVar15 * 8) = local_430._16_8_;
          if ((((ulonglong)this_01->_padding_ < 0x15528e7f9) &&
              (&PCGHelpers::DefaultPCGTag <
               (FName *)(this_01->_padding_ +
                        (longlong)*(int *)((longlong)&this_01->_padding_ + 4) * 8))) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar6 = (code *)swi(3);
            uVar13 = (*pcVar6)();
            return (bool)uVar13;
          }
          iVar15 = (int)this_01->_padding_;
          if (iVar15 == *(int *)((longlong)&this_01->_padding_ + 4)) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,(ForAnyElementType *)&this_01->_padding_,
                                (int *)((longlong)&this_01->_padding_ + 4));
          }
          *(int *)&this_01->_padding_ = iVar15 + 1;
          *(FName *)(this_01->_padding_ + (longlong)iVar15 * 8) = PCGHelpers::DefaultPCGTag;
          Algo::
          Transform<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TArray<FName,TSizedDefaultAllocator<32>_>_&,_FPCGSpawnSplineElement::ExecuteInternal_::__l26::<lambda_1>_>
                    (&local_460->Tags,
                     (TArray<FName,TSizedDefaultAllocator<32>_> *)&this_01->_padding_,<Var34);
          UActorComponent::RegisterComponent((UActorComponent *)this_01);
          uVar8 = local_430._8_8_;
          AActor::AddInstanceComponent((AActor *)local_430._8_8_,(UActorComponent *)this_01);
          local_3c0 = 0;
          local_448[0] = 0x10100;
          cVar14 = (**(code **)(this_01->_padding_ + 0x508))
                             (this_01,(((TObjectPtr<USceneComponent> *)(uVar8 + 0x1b8))->field0_0x0)
                                      .DebugPtr,local_448);
          if (cVar14 == '\0') {
            PCGLog::Component::LogComponentAttachmentFailedWarning(local_438);
          }
          UPCGSplineData::ApplyTo((UPCGSplineData *)uVar9,this_01);
          uVar8 = local_430._24_8_;
          FObjectInitializer::AssertIfInConstructor
                    ((UObject *)local_430._24_8_,
                     L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                    );
          pUVar16 = Z_Construct_UClass_UPCGManagedComponent_NoRegister();
          FStaticConstructObjectParameters::FStaticConstructObjectParameters
                    ((FStaticConstructObjectParameters *)local_b8,pUVar16);
          local_b8._8_8_ = uVar8;
          pUVar24 = (UPCGManagedResource *)
                    StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
          if (local_b8._64_8_ != 0) {
            plVar30 = (longlong *)(local_b8 + 0x50);
            if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
              plVar30 = (longlong *)local_b8._104_8_;
            }
            (**(code **)(*plVar30 + 0x10))();
          }
          local_310 = this_01;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this_01);
          }
          FSoftObjectPtr::operator=((FSoftObjectPtr *)(pUVar24 + 1),(FObjectPtr)&local_310);
          UPCGComponent::AddToManagedResources((UPCGComponent *)local_430._24_8_,pUVar24);
          if (*(int *)((longlong)local_450 + 0x158) != 0) {
            local_388._16_8_ =
                 &___7__FPCGAttributeAccessorKeysSingleObjectPtr_VUSplineComponent__X__6B_;
            local_388[0] = false;
            local_388._8_8_ = (UObject *)0x0;
            local_370 = 0;
            local_360.Data = (FScriptContainerElement *)0x0;
            local_358._0_4_ = 0;
            local_358._4_4_ = 0;
            local_350 = false;
            local_368 = this_01;
            FPCGObjectOverrides<USplineComponent>::Initialize
                      ((FPCGObjectOverrides<USplineComponent> *)local_388,
                       (TArray<FPCGObjectPropertyOverrideDescription,TSizedDefaultAllocator<32>_> *)
                       ((longlong)local_450 + 0x150),this_01,(UPCGData *)uVar9,local_438,false);
            if (local_350 != false) {
              iVar15 = (int)local_358;
              if ((int)local_358 != 0) {
                bVar38 = 1;
                pFVar36 = (FPCGObjectSingleOverride *)
                          (local_360.Data + (longlong)(int)local_358 * 0x68);
                FVar32.Data = local_360.Data;
                while( true ) {
                  if ((int)local_358 != iVar15) {
                    local_458 = 0;
                    `TCheckedPointerIterator<FPCGObjectSingleOverride,int,0>::operator!='::__l2::
                    <lambda_1>::operator()(&local_458);
                  }
                  if ((FPCGObjectSingleOverride *)FVar32.Data == pFVar36) break;
                  bVar12 = FPCGObjectSingleOverride::Apply
                                     ((FPCGObjectSingleOverride *)FVar32.Data,0,
                                      (IPCGAttributeAccessorKeys *)(local_388 + 0x10));
                  bVar38 = bVar38 & bVar12;
                  FVar32.Data = FVar32.Data + 0x68;
                }
                if (bVar38 == 0) {
                  lVar5 = ((longlong)local_460 - (longlong)local_3f0.AllocatorInstance.Data) +
                          SUB168(SEXT816(-0x7777777777777777) *
                                 SEXT816((longlong)local_460 -
                                         (longlong)local_3f0.AllocatorInstance.Data),8);
                  pFVar21 = FText::AsLocalizable_Advanced_LocText
                                      (&local_218,L"PCGSpawnSplineElement",L"FailOverride",
                                       L"Failed to override descriptor for input {0}");
                  pFVar25 = FTextFormat::FTextFormat(&local_178,pFVar21,Default);
                  pFVar21 = FText::Format<int>(&local_228,pFVar25,
                                               (int)(lVar5 >> 6) - (int)(lVar5 >> 0x3f));
                  PCGLog::LogWarningOnGraph(pFVar21,(FPCGContext *)0x0);
                  if (local_228.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_228.TextData.Reference + 0x10))();
                  }
                  if (local_218.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_218.TextData.Reference + 0x10))();
                  }
                }
              }
            }
            iVar15 = (int)local_358;
            pFVar36 = (FPCGObjectSingleOverride *)(local_360.Data + (longlong)(int)local_358 * 0x68)
            ;
            FVar32.Data = local_360.Data;
            while( true ) {
              if ((int)local_358 != iVar15) {
                local_457 = 0;
                `TCheckedPointerIterator<FPCGObjectSingleOverride,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_457);
              }
              if ((FPCGObjectSingleOverride *)FVar32.Data == pFVar36) break;
              FPCGObjectSingleOverride::Apply
                        ((FPCGObjectSingleOverride *)FVar32.Data,0,
                         (IPCGAttributeAccessorKeys *)(local_388 + 0x10));
              FVar32.Data = FVar32.Data + 0x68;
            }
            DestructItems<FPCGObjectSingleOverride,int>
                      ((FPCGObjectSingleOverride *)local_360.Data,(int)local_358);
            this_01 = local_3b8;
            if ((FPCGObjectSingleOverride *)local_360.Data != (FPCGObjectSingleOverride *)0x0) {
              FMemory::Free(local_360.Data);
              this_01 = local_3b8;
            }
          }
          FVar18 = local_450;
          iStack_280 = 0x15;
          local_288 = L"PrototypeWithNoParams";
          pUVar16 = Z_Construct_UClass_UPCGFunctionPrototypes_NoRegister();
          pUVar26 = Z_Construct_UClass_UFunction_NoRegister();
          local_208._12_4_ = uStack_27c;
          local_208.Size = iStack_280;
          local_208.DataPtr = local_288;
          local_308 = StaticFindObject(pUVar26,(UObject *)pUVar16,&local_208,None);
          local_3e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_3e0.ArrayNum = 1;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,1,0,&local_3e0.AllocatorInstance,1,&local_3e0.ArrayMax);
          *(UObject **)local_3e0.AllocatorInstance.Data = local_308;
          local_2f8[0] = *(UObject **)(local_430._8_8_ + 0x10);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_2f8[0] != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(local_2f8[0]);
          }
          PCGHelpers::FindUserFunctions
                    (&local_348,(TSubclassOf<UObject>)local_2f8,
                     (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)FVar18 + 0x140),
                     &local_3e0,local_438);
          if (local_3e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3e0.AllocatorInstance.Data);
          }
          iVar15 = local_348.ArrayNum;
          uVar9 = local_430._8_8_;
          uVar31 = (ulonglong)local_348.ArrayNum;
          pFVar3 = local_348.AllocatorInstance.Data + uVar31 * 8;
          FVar32.Data = local_348.AllocatorInstance.Data;
          while( true ) {
            if ((uint)uVar31 != iVar15) {
              local_468[0] = (<lambda_1>)0x0;
              `TCheckedPointerIterator<UFunction_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_468);
            }
            <Var34 = local_468[0];
            if (FVar32.Data == pFVar3) break;
            (**(code **)(*(longlong *)uVar9 + 0x260))(uVar9,*(undefined8 *)FVar32.Data,0);
            uVar31 = (ulonglong)(uint)local_348.ArrayNum;
            FVar32.Data = FVar32.Data + 8;
          }
          if (local_348.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_348.AllocatorInstance.Data);
          }
          pFVar7 = local_438;
          if (*(char *)((longlong)local_450 + 0x160) == '\0') {
            piVar2 = &(local_438->OutputData).TaggedData.ArrayMax;
            iVar15 = (local_438->OutputData).TaggedData.ArrayNum;
            if (iVar15 == *piVar2) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x878,(ForAnyElementType *)&local_438->OutputData,piVar2);
            }
            (pFVar7->OutputData).TaggedData.ArrayNum = iVar15 + 1;
            FPCGTaggedData::FPCGTaggedData
                      ((FPCGTaggedData *)
                       ((pFVar7->OutputData).TaggedData.AllocatorInstance.Data +
                       (longlong)iVar15 * 0x78),local_460);
            local_460 = local_460 + 1;
            uVar31 = (ulonglong)(uint)local_430._40_4_;
            pFVar29 = local_440;
            FVar18 = local_450;
          }
          else {
            pUVar27 = (UPCGSpatialData *)
                      (**(code **)(*(longlong *)local_430._32_8_ + 0x310))
                                (local_430._32_8_,local_438,1);
            if (pUVar27 == (UPCGSpatialData *)0x0) {
              pFVar22 = GetTypeName<UPCGSplineData>(&local_148);
              if ((pFVar22->Data).ArrayNum == 0) {
                pwVar35 = L"";
              }
              else {
                pwVar35 = (wchar_t *)(pFVar22->Data).AllocatorInstance.Data;
              }
                    /* WARNING: Subroutine does not return */
              CastLogError(L"nullptr",pwVar35);
            }
            pUVar16 = Z_Construct_UClass_UPCGSplineData_NoRegister();
            iVar15 = (int)pUVar16->_padding_;
            if ((*(int *)(pUVar27->_padding_ + 0x38) < iVar15) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar27->_padding_ + 0x30) + (longlong)iVar15 * 8) !=
                &pUVar16->_padding_)) {
              pFVar22 = GetTypeName<UPCGSplineData>(&local_168);
              pwVar35 = L"";
              if ((pFVar22->Data).ArrayNum == 0) {
                pwVar33 = L"";
              }
              else {
                pwVar33 = (wchar_t *)(pFVar22->Data).AllocatorInstance.Data;
              }
              pFVar22 = GetFullNameForCastLogError<UPCGSpatialData>(&local_158,pUVar27);
              if ((pFVar22->Data).ArrayNum != 0) {
                pwVar35 = (wchar_t *)(pFVar22->Data).AllocatorInstance.Data;
              }
                    /* WARNING: Subroutine does not return */
              CastLogError(pwVar35,pwVar33);
            }
            local_338.AssetPath.PackageName.ComparisonIndex.Value = 0;
            local_338.AssetPath.PackageName.Number = 0;
            local_338.AssetPath.AssetName.ComparisonIndex.Value = 0;
            local_338.AssetPath.AssetName.Number = 0;
            local_338.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_338.SubPathString.Data.ArrayNum = 0;
            local_338.SubPathString.Data.ArrayMax = 0;
            FSoftObjectPath::SetPath(&local_338,(UObject *)this_01);
            FVar18 = local_450;
            pFVar28 = PCGMetadataElementCommon::ClearOrCreateAttribute<FSoftObjectPath>
                                ((UPCGMetadata *)pUVar27->_padding_,
                                 (FName *)((longlong)local_450 + 0x164),&local_338);
            if (pFVar28 == (FPCGMetadataAttribute<FSoftObjectPath> *)0x0) {
              local_300 = *(FName *)((longlong)FVar18 + 0x164);
              pFVar21 = FText::FromName(&local_1c8,&local_300);
              PCG::Private::GetTypeName(&local_278,0xd);
              FText::FromString(&local_1f8,&local_278);
              if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_278.Data.AllocatorInstance.Data);
              }
              local_268.TextData.Reference = (pFVar21->TextData).Reference;
              if (local_268.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_268.TextData.Reference + 8))
                          (local_268.TextData.Reference,local_318);
              }
              local_268.Flags = pFVar21->Flags;
              local_1e8 = PCGLog::Metadata::Format::CreateAttributeFailure.TextFormatData;
              if (PCGLog::Metadata::Format::CreateAttributeFailure.TextFormatData.
                  SharedReferenceCount.ReferenceController.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                paVar1 = &(PCGLog::Metadata::Format::CreateAttributeFailure.TextFormatData.
                           SharedReferenceCount.ReferenceController.ReferenceController)->
                          SharedReferenceCount;
                *paVar1 = (atomic<int>)((int)*paVar1 + 1);
                UNLOCK();
              }
              pFVar21 = FText::Format<FText,FText>
                                  (&local_1d8,(FTextFormat *)&local_1e8,&local_268,&local_1f8);
              PCGLog::LogErrorOnGraph(pFVar21,pFVar7);
              if (local_1d8.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_1d8.TextData.Reference + 0x10))();
              }
              if (local_1c8.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_1c8.TextData.Reference + 0x10))();
              }
            }
            iVar15 = (pFVar7->OutputData).TaggedData.ArrayNum;
            piVar2 = &(pFVar7->OutputData).TaggedData.ArrayMax;
            if (iVar15 == *piVar2) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x878,(ForAnyElementType *)&pFVar7->OutputData,piVar2);
            }
            (pFVar7->OutputData).TaggedData.ArrayNum = iVar15 + 1;
            pFVar29 = FPCGTaggedData::FPCGTaggedData
                                ((FPCGTaggedData *)
                                 ((pFVar7->OutputData).TaggedData.AllocatorInstance.Data +
                                 (longlong)iVar15 * 0x78),local_460);
            FPCGDataPtrWrapper::operator=(&pFVar29->Data,(UPCGData *)pUVar27);
            local_460 = local_460 + 1;
            uVar31 = (ulonglong)(uint)local_430._40_4_;
            pFVar29 = local_440;
          }
        }
        else {
          FPCGAttributePropertyInputSelector::CopyAndFixLast
                    ((FPCGAttributePropertyInputSelector *)((longlong)FVar18 + 0xd8),
                     (FPCGAttributePropertyInputSelector *)&local_2e8,(UPCGData *)uVar9);
          PCGAttributeAccessorHelpers::CreateConstAccessor
                    ((UPCGData *)local_430,(FPCGAttributePropertySelector *)uVar9,
                     SUB81(&local_2e8,0));
          if ((IPCGAttributeAccessor *)local_430._0_8_ == (IPCGAttributeAccessor *)0x0) {
            PCGLog::Metadata::LogFailToCreateAccessorError(&local_2e8,local_438);
          }
          else {
            FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_1a8,-1);
            local_2a8 = &local_3b0;
            uStack_2a0 = 1;
            local_248._12_4_ = uStack_29c;
            local_248.ArrayNum = 1;
            local_3b0.AssetPath.PackageName.ComparisonIndex.Value = 0;
            local_3b0.AssetPath.PackageName.Number = 0;
            local_3b0.AssetPath.AssetName.ComparisonIndex.Value = 0;
            local_3b0.AssetPath.AssetName.Number = 0;
            local_3b0.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_3b0.SubPathString.Data.ArrayNum = 0;
            local_3b0.SubPathString.Data.ArrayMax = 0;
            local_248.DataPtr = local_2a8;
            bVar12 = IPCGAttributeAccessor::GetRange<FSoftObjectPath>
                               ((IPCGAttributeAccessor *)local_430._0_8_,&local_248,0,
                                (IPCGAttributeAccessorKeys *)&local_1a8,
                                AllowBroadcastAndConstructible);
            uVar8 = local_430._0_8_;
            if (bVar12) {
              pUVar23 = (UPCGComponent *)
                        FSoftObjectPath::TryLoad(&local_3b0,(FUObjectSerializeContext *)0x0);
              local_430._32_8_ = uVar9;
              pUVar19 = pUVar37;
              if (pUVar23 != (UPCGComponent *)0x0) {
                pUVar16 = Z_Construct_UClass_UClass_NoRegister();
                iVar15 = (int)pUVar16->_padding_;
                if ((iVar15 <= *(int *)(pUVar23->_padding_ + 0x38)) &&
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(pUVar23->_padding_ + 0x30) + (longlong)iVar15 * 8) ==
                    &pUVar16->_padding_)) {
                  pUVar19 = pUVar23;
                }
              }
              local_430._32_8_ = uVar9;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar19 != (UPCGComponent *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)pUVar19);
              }
              if (local_3b0.SubPathString.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_3b0.SubPathString.Data.AllocatorInstance.Data);
              }
              if (local_1a8.ExtractedEntries.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1a8.ExtractedEntries.AllocatorInstance.Data);
              }
              if ((IPCGAttributeAccessor *)local_430._0_8_ != (IPCGAttributeAccessor *)0x0) {
                (**(code **)*(longlong *)local_430._0_8_)(local_430._0_8_,1);
              }
              DestructItems<FString,int>
                        ((FString *)local_2e8.ExtraNames.AllocatorInstance.Data,
                         local_2e8.ExtraNames.ArrayNum);
              if (local_2e8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2e8.ExtraNames.AllocatorInstance.Data);
              }
              goto LAB_149c678e2;
            }
            pFVar22 = FPCGAttributePropertySelector::ToString(&local_2e8,&local_238,false);
            FText::FromString(&local_298,pFVar22);
            if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_238.Data.AllocatorInstance.Data);
            }
            PCGLog::Metadata::LogFailToGetAttributeError<FSoftObjectPath>
                      (&local_298,(IPCGAttributeAccessor *)uVar8,local_438);
            if (local_298.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_298.TextData.Reference + 0x10))();
            }
            if (local_3b0.SubPathString.Data.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3b0.SubPathString.Data.AllocatorInstance.Data);
            }
            if (local_1a8.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_1a8.ExtractedEntries.AllocatorInstance.Data);
            }
          }
          if ((IPCGAttributeAccessor *)local_430._0_8_ != (IPCGAttributeAccessor *)0x0) {
            (**(code **)*(longlong *)local_430._0_8_)(local_430._0_8_,1);
          }
          DestructItems<FString,int>
                    ((FString *)local_2e8.ExtraNames.AllocatorInstance.Data,
                     local_2e8.ExtraNames.ArrayNum);
          pFVar29 = local_440;
          if (local_2e8.ExtraNames.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
          goto LAB_149c68234;
          FMemory::Free(local_2e8.ExtraNames.AllocatorInstance.Data);
          local_460 = local_460 + 1;
          uVar31 = (ulonglong)(uint)local_430._40_4_;
          pFVar29 = local_440;
        }
      }
      else {
        if ((UPCGSplineData *)local_430._56_8_ != (UPCGSplineData *)0x0) {
          UE::GC::MarkAsReachable((UObject *)local_430._56_8_);
          goto LAB_149c67635;
        }
LAB_149c68234:
        uVar31 = (ulonglong)(uint)local_430._40_4_;
        local_460 = local_460 + 1;
      }
    }
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_3f0.AllocatorInstance.Data,local_3f0.ArrayNum);
    if ((FPCGTaggedData *)local_3f0.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
      FMemory::Free(local_3f0.AllocatorInstance.Data);
    }
  }
LAB_149c6825a:
  if (bVar39) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// IsCacheable @ 149c80660

bool __thiscall
FPCGSpawnSplineElement::IsCacheable(FPCGSpawnSplineElement *this,UPCGSettings *param_1)

{
  return false;
}

