// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// operator() @ 149b5f420

void __thiscall
`FPCGCreateTargetActorElement::ExecuteInternal'::__l85::<lambda_1>::operator()
          (void *this,UPCGManagedResource *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  
  if ((**(longlong **)this == 0) && (param_1 != (UPCGManagedResource *)0x0)) {
    pUVar4 = Z_Construct_UClass_UPCGManagedActors_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       (((((longlong *)
           *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
           &pUVar4->_padding_ && ((param_1->Crc).bValid != false)) &&
         (*(char *)((longlong)this + 0xc) != '\0')) &&
        (((param_1->Crc).Value == *(uint *)((longlong)this + 8) && (param_1[2].Crc.Value == 1))))))
    {
      if (((int)param_1[2].Crc.Value < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar5 = TPersistentObjectPtr<FSoftObjectPath>::Get
                         ((TPersistentObjectPtr<FSoftObjectPath> *)param_1[2]._padding_);
      if (pUVar5 != (UObject *)0x0) {
        pUVar4 = Z_Construct_UClass_AActor_NoRegister();
        iVar1 = (int)pUVar4->_padding_;
        if ((iVar1 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar4->_padding_)) {
          **(undefined8 **)this = param_1;
        }
      }
    }
  }
  return;
}

// CanExecuteOnlyOnMainThread @ 149b67bd0

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
FPCGCreateTargetActorElement::CanExecuteOnlyOnMainThread
          (FPCGCreateTargetActorElement *this,FPCGContext *param_1)

{
  return true;
}

// ExecuteInternal @ 149b75900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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
FPCGCreateTargetActorElement::ExecuteInternal
          (FPCGCreateTargetActorElement *this,FPCGContext *param_1)

{
  FPCGDataCollection *this_00;
  int *piVar1;
  TObjectPtr<UPCGSettings> *this_01;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  UPCGNode *this_02;
  UPropertyBag *pUVar4;
  longlong lVar5;
  IPCGGraphExecutionSource *pIVar6;
  USceneComponent *pUVar7;
  code *pcVar8;
  bool bVar9;
  TConsoleVariableData<bool> *pTVar10;
  FPCGContext *pFVar11;
  bool bVar12;
  undefined1 uVar13;
  uint uVar14;
  int iVar15;
  UClass *pUVar16;
  UPCGSettings *pUVar17;
  TObjectPtr<UPropertyBag_const_>_u_0 TVar18;
  FPCGTaggedData *pFVar19;
  AActor *pAVar20;
  FText *pFVar21;
  TObjectPtr<UPropertyBag_const_>_u_0 TVar22;
  TTransform<double> *pTVar23;
  FName *pFVar24;
  TObjectPtr<UPropertyBag_const_>_u_0 TVar25;
  FPCGStack *this_03;
  AActor *pAVar26;
  UPCGManagedResource *pUVar27;
  UObject *pUVar28;
  UPCGParamData *pUVar29;
  FPCGMetadataDomain *this_04;
  FPCGMetadataAttribute<FSoftObjectPath> *pFVar30;
  FTextFormat *pFVar31;
  FString *pFVar32;
  ITextData *pIVar33;
  ulonglong uVar34;
  TObjectPtr<AActor>_u_0 TVar35;
  FPCGDataPtrWrapper *this_05;
  longlong *plVar36;
  FName *pFVar37;
  FPCGCrc FVar38;
  ForAnyElementType FVar39;
  TObjectPtr<UPropertyBag_const_>_u_0 TVar40;
  wchar_t *pwVar41;
  atomic<int> aVar42;
  wchar_t *pwVar43;
  bool bVar44;
  undefined1 auStackY_5b8 [32];
  <lambda_1> local_568 [8];
  FPCGContext *local_560;
  TObjectPtr<UPropertyBag_const_>_u_0 local_558;
  FPCGCrc local_550;
  FPCGCreateTargetActorElement *local_548;
  AActor *local_540;
  FPCGCrc *local_538;
  double dStack_530;
  longlong *local_528;
  TObjectPtr<UPropertyBag_const_>_u_0 local_520;
  TArray<FString,TSizedDefaultAllocator<32>_> local_518;
  TArray<UFunction_const_*,TSizedDefaultAllocator<32>_> local_508;
  undefined8 local_4f8;
  FName local_4f0;
  code *local_4e8;
  double dStack_4e0;
  FSoftObjectPath local_4d8;
  FString local_4b8;
  TArray<UFunction_*,TSizedDefaultAllocator<32>_> local_4a8;
  FText local_498;
  FPCGTaggedData *local_488;
  undefined8 local_480;
  undefined2 local_478;
  void *local_470;
  undefined8 local_468;
  undefined8 local_460;
  undefined1 local_458 [24];
  FUtf8String local_440;
  undefined1 local_430 [8];
  int local_428;
  undefined1 local_420 [64];
  undefined8 uStack_3e0;
  code *local_3d8;
  longlong ***local_3d0;
  FText local_3c8;
  double local_3b8;
  FName FStack_3b0;
  AActor *local_3a8;
  AActor *pAStack_3a0;
  FName local_398;
  FPCGMetadataDomainID local_390;
  FPCGTaggedData **local_378;
  TObjectPtr<UPropertyBag_const_>_u_0 local_370;
  TObjectPtr<UPropertyBag_const_>_u_0 local_368;
  longlong **local_360;
  FPCGCrc local_358;
  FPCGContext **local_350;
  undefined1 local_348;
  FText local_340;
  FString local_330;
  FString local_320;
  FText local_310;
  FText local_300;
  FString local_2f0;
  FText local_2e0;
  FString local_2d0;
  FString local_2c0;
  FText local_2b0;
  FText local_2a0;
  FName local_290;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FTextFormat local_238;
  undefined1 local_228 [80];
  ITextData local_1d8 [3];
  ITextData *local_1c0;
  undefined1 local_1b8 [128];
  AActor *local_138;
  APawn *local_130;
  ULevel *local_128;
  UChildActorComponent *local_120;
  ESpawnActorCollisionHandlingMethod local_118;
  ESpawnActorScaleMethod local_117;
  byte local_116;
  ESpawnActorNameMode local_115;
  EObjectFlags local_114;
  double local_108;
  longlong local_f8 [5];
  undefined1 local_d0 [72];
  TVector<double>_u_0 local_88;
  TObjectPtr<AActor>_u_0 local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_5b8;
  TVar40.DebugPtr = (UPropertyBag *)0x0;
  local_538 = (FPCGCrc *)((ulonglong)local_538 & 0xffffffff00000000);
  bVar44 = -1 < CpuChannel->Enabled;
  local_560 = param_1;
  local_548 = this;
  if (bVar44) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId333,"FPCGCreateTargetActorElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCreateTargetActor.cpp"
               ,0x14d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId333);
  }
  bVar12 = IsInGameThread();
  pwVar43 = L"";
  if ((!bVar12) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCreateTargetActor.cpp"
                          ,0x14f,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    uVar13 = (*pcVar8)();
    return (bool)uVar13;
  }
  if ((local_560->Node != (UPCGNode *)0x0) &&
     (bVar12 = UPCGNode::IsOutputPinConnected(local_560->Node,&PCGPinConstants::DefaultOutputLabel),
     !bVar12)) goto LAB_149b76dd1;
  this_01 = &local_560->SettingsWithOverride;
  if ((this_01->field0_0x0).DebugPtr == (UPCGSettings *)0x0) {
    this_02 = local_560->Node;
    this_00 = &local_560->InputData;
    if ((this_02 == (UPCGNode *)0x0) ||
       (pUVar17 = UPCGNode::GetSettings(this_02), pUVar17 == (UPCGSettings *)0x0)) {
      pFVar19 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGCreateTargetActor>_::__l2::<lambda_1>_>
                          (&this_00->TaggedData,local_568[0]);
      if (pFVar19 != (FPCGTaggedData *)0x0) {
        local_520.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar19->Data).Data.field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if ((UPCGComponent *)local_520.DebugPtr == (UPCGComponent *)0x0) goto LAB_149b75acc;
          UE::GC::MarkAsReachable((UObject *)local_520.DebugPtr);
        }
        if ((UPCGComponent *)local_520.DebugPtr != (UPCGComponent *)0x0) {
          pUVar16 = UPCGCreateTargetActor::StaticClass();
          bVar12 = FObjectPtr::IsA(&local_520.ObjectPtr,pUVar16);
          TVar18 = local_520;
          if (bVar12) goto LAB_149b75acf;
        }
      }
    }
    else {
      pUVar17 = UPCGNode::GetSettings(this_02);
      TVar18.DebugPtr = (UPropertyBag *)FPCGDataCollection::GetSettings(this_00,pUVar17);
      if ((UPCGComponent *)TVar18.DebugPtr != (UPCGComponent *)0x0) {
        pUVar16 = UPCGCreateTargetActor::StaticClass();
        iVar15 = (int)pUVar16->_padding_;
        if ((iVar15 <= *(int *)((TVar18.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar18.DebugPtr)->_padding_ + 0x30) + (longlong)iVar15 * 8) ==
            &pUVar16->_padding_)) goto LAB_149b75acf;
      }
    }
LAB_149b75acc:
    TVar18.DebugPtr = TVar40.DebugPtr;
  }
  else {
    pUVar16 = UPCGCreateTargetActor::StaticClass();
    bVar12 = FObjectPtr::IsA((FObjectPtr *)this_01,pUVar16);
    if (!bVar12) goto LAB_149b75acc;
    TVar18.ObjectPtr.field0_0x0 = (FObjectPtr)(FObjectPtr)(this_01->field0_0x0).DebugPtr;
  }
LAB_149b75acf:
  if (((UPCGComponent *)TVar18.DebugPtr == (UPCGComponent *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCreateTargetActor.cpp"
                          ,0x158,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    uVar13 = (*pcVar8)();
    return (bool)uVar13;
  }
  pUVar4 = (((TObjectPtr<UPropertyBag_const_> *)&TVar18.DebugPtr[3]._padding_)->field0_0x0).DebugPtr
  ;
  if ((pUVar4 == (UPropertyBag *)0x0) ||
     (pUVar16 = Z_Construct_UClass_AActor_NoRegister(), pUVar16 == (UClass *)0x0)) {
LAB_149b76b39:
    lVar5 = TVar18.DebugPtr[3]._padding_;
    if ((lVar5 == 0) || (pUVar16 = Z_Construct_UClass_AActor_NoRegister(), pUVar16 == (UClass *)0x0)
       ) {
LAB_149b76c2c:
      local_4f0.ComparisonIndex.Value = 0;
      local_4f0.Number = 0;
      pFVar21 = FText::FromName(&local_2e0,&local_4f0);
      FText::FText(&local_498,pFVar21);
      if (local_2e0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2e0.TextData.Reference + 0x10))();
      }
    }
    else {
      iVar15 = (int)pUVar16->_padding_;
      if ((*(int *)(lVar5 + 0x38) < iVar15) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar15 * 8) !=
          &pUVar16->_padding_)) {
        bVar12 = false;
      }
      else {
        bVar12 = true;
      }
      if ((!bVar12) || (lVar5 = TVar18.DebugPtr[3]._padding_, lVar5 == 0)) goto LAB_149b76c2c;
      pUVar16 = Z_Construct_UClass_AActor_NoRegister();
      if (pUVar16 != (UClass *)0x0) {
        iVar15 = (int)pUVar16->_padding_;
        if ((*(int *)(lVar5 + 0x38) < iVar15) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar15 * 8) !=
            &pUVar16->_padding_)) {
          bVar12 = false;
        }
        else {
          bVar12 = true;
        }
        if (bVar12) {
          TVar40 = (TObjectPtr<UPropertyBag_const_>_u_0)TVar18.DebugPtr[3]._padding_;
        }
      }
      local_420._32_8_ = (TVar40.DebugPtr)->_padding_;
      pFVar32 = ::FName::ToString((FName *)(local_420 + 0x20),&local_2f0);
      pFVar21 = FText::FromString(&local_300,pFVar32);
      FText::FText(&local_498,pFVar21);
      if (local_300.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_300.TextData.Reference + 0x10))();
      }
      if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
      }
    }
    bVar12 = false;
    if (1 < (byte)LogPCG._0_1_) {
      local_3c8.TextData.Reference = local_498.TextData.Reference;
      if (local_498.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_498.TextData.Reference + 8))
                  (local_498.TextData.Reference,local_430);
      }
      local_3c8.Flags = local_498.Flags;
      pFVar21 = FText::AsLocalizable_Advanced_LocText
                          (&local_2b0,L"PCGCreateTargetActor",L"InvalidTemplateActorClass",
                           L"Invalid template actor class \'{0}\'");
      pFVar31 = FTextFormat::FTextFormat(&local_238,pFVar21,Default);
      pFVar21 = FText::Format<FText>(&local_2a0,pFVar31,&local_3c8);
      FText::ToString(pFVar21);
      if (local_560 == (FPCGContext *)0x0) {
LAB_149b76d47:
        bVar9 = false;
      }
      else {
        bVar12 = true;
        FPCGContext::GetTaskName(local_560,&local_2c0);
        if (local_560 == (FPCGContext *)0x0) goto LAB_149b76d47;
        bVar12 = true;
        bVar9 = true;
        FPCGContext::GetExecutionSourceName(local_560,&local_2d0);
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((bVar9) && (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
      }
      if ((bVar12) && (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
      }
      if (local_2a0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2a0.TextData.Reference + 0x10))();
      }
      if (local_2b0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2b0.TextData.Reference + 0x10))();
      }
    }
LAB_149b76dc6:
    if (local_498.TextData.Reference == (ITextData *)0x0) goto LAB_149b76dd1;
  }
  else {
    iVar15 = (int)pUVar16->_padding_;
    if (((int)pUVar4->_padding_ < iVar15) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar15 * 8) !=
        &pUVar16->_padding_)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if ((!bVar12) ||
       (pUVar4 = (((TObjectPtr<UPropertyBag_const_> *)&TVar18.DebugPtr[3]._padding_)->field0_0x0).
                 DebugPtr, pUVar4 == (UPropertyBag *)0x0)) goto LAB_149b76b39;
    pUVar16 = Z_Construct_UClass_AActor_NoRegister();
    TVar22.DebugPtr = TVar40.DebugPtr;
    if (pUVar16 != (UClass *)0x0) {
      iVar15 = (int)pUVar16->_padding_;
      if (((int)pUVar4->_padding_ < iVar15) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar15 * 8) !=
          &pUVar16->_padding_)) {
        bVar12 = false;
      }
      else {
        bVar12 = true;
      }
      if (bVar12) {
        TVar22.DebugPtr =
             (((TObjectPtr<UPropertyBag_const_> *)&TVar18.DebugPtr[3]._padding_)->field0_0x0).
             DebugPtr;
      }
    }
    if ((*(EClassFlags *)&(TVar22.DebugPtr)->field_0xd4 & CLASS_Abstract) != CLASS_None)
    goto LAB_149b76b39;
    lVar5 = TVar18.DebugPtr[3]._padding_;
    TVar22.DebugPtr = TVar40.DebugPtr;
    if ((lVar5 != 0) && (pUVar16 = Z_Construct_UClass_AActor_NoRegister(), pUVar16 != (UClass *)0x0)
       ) {
      iVar15 = (int)pUVar16->_padding_;
      if ((*(int *)(lVar5 + 0x38) < iVar15) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar15 * 8) !=
          &pUVar16->_padding_)) {
        bVar12 = false;
      }
      else {
        bVar12 = true;
      }
      if (bVar12) {
        TVar22 = (TObjectPtr<UPropertyBag_const_>_u_0)TVar18.DebugPtr[3]._padding_;
      }
    }
    if ((((TObjectPtr<UObject> *)&TVar22.DebugPtr[1]._padding_)->field0_0x0).DebugPtr ==
        (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper((UClass *)TVar22.DebugPtr);
    }
    pUVar28 = (((TObjectPtr<UObject> *)&TVar22.DebugPtr[1]._padding_)->field0_0x0).DebugPtr;
    pUVar16 = Z_Construct_UClass_AActor_NoRegister();
    lVar5 = *(longlong *)&pUVar28->field_0x10;
    iVar15 = (int)pUVar16->_padding_;
    if ((*(int *)(lVar5 + 0x38) < iVar15) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar15 * 8) !=
        &pUVar16->_padding_)) goto LAB_149b76b39;
    lVar5 = *(longlong *)&((TVar18.DebugPtr)->PropertyDescs).ArrayNum;
    if (lVar5 != 0) {
      TVar22 = (TObjectPtr<UPropertyBag_const_>_u_0)TVar18.DebugPtr[3]._padding_;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if ((UPCGComponent *)TVar22.DebugPtr != (UPCGComponent *)0x0) goto LAB_149b75c50;
LAB_149b75c7e:
        TVar22.DebugPtr = TVar40.DebugPtr;
      }
      else {
        if ((UPCGComponent *)TVar22.DebugPtr == (UPCGComponent *)0x0) goto LAB_149b75c7e;
        UE::GC::MarkAsReachable((UObject *)TVar22.DebugPtr);
LAB_149b75c50:
        pUVar16 = Z_Construct_UClass_AActor_NoRegister();
        if (pUVar16 == (UClass *)0x0) goto LAB_149b75c7e;
        iVar15 = (int)pUVar16->_padding_;
        if (((int)(TVar22.DebugPtr)->_padding_ < iVar15) ||
           ((longlong *)*(undefined1 **)((TVar22.DebugPtr)->_padding_ + (longlong)iVar15 * 8) !=
            &pUVar16->_padding_)) {
          bVar12 = false;
        }
        else {
          bVar12 = true;
        }
        if (!bVar12) goto LAB_149b75c7e;
      }
      lVar5 = *(longlong *)(lVar5 + 0x10);
      iVar15 = (int)(TVar22.DebugPtr)->_padding_;
      if ((*(int *)(lVar5 + 0x38) < iVar15) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar15 * 8) !=
          &(TVar22.DebugPtr)->_padding_)) {
        bVar12 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<7463152851062096226>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCreateTargetActor.cpp"
                            ,0x162,
                            "!Settings->TemplateActor || Settings->TemplateActor->IsA(Settings->TemplateActorClass)"
                           );
        if (bVar12) {
          pcVar8 = (code *)swi(3);
          uVar13 = (*pcVar8)();
          return (bool)uVar13;
        }
        goto LAB_149b76dd1;
      }
    }
    pAVar20 = TSoftObjectPtr<AActor>::Get((TSoftObjectPtr<AActor> *)(TVar18.DebugPtr + 1));
    if (pAVar20 == (AActor *)0x0) {
      local_540 = FPCGContext::GetTargetActor(local_560,(UPCGSpatialData *)0x0);
    }
    else {
      local_540 = TSoftObjectPtr<AActor>::Get((TSoftObjectPtr<AActor> *)(TVar18.DebugPtr + 1));
    }
    pFVar11 = local_560;
    if (local_540 == (AActor *)0x0) {
      if ((byte)LogPCG._0_1_ < 2) goto LAB_149b76dd1;
      pFVar21 = FText::AsLocalizable_Advanced_LocText
                          (&local_340,L"PCGCreateTargetActor",L"InvalidTargetActor",
                           L"Invalid target actor");
      FText::ToString(pFVar21);
      if (local_560 != (FPCGContext *)0x0) {
        TVar40 = (TObjectPtr<UPropertyBag_const_>_u_0)0x20;
        FPCGContext::GetTaskName(local_560,&local_278);
        if (local_560 != (FPCGContext *)0x0) {
          TVar40 = (TObjectPtr<UPropertyBag_const_>_u_0)0x60;
          FPCGContext::GetExecutionSourceName(local_560,&local_288);
        }
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((((ulonglong)TVar40.DebugPtr & 0x40) != 0) &&
         (TVar40._0_4_ = TVar40._0_4_ & 0xffffffbf, TVar40._4_4_ = 0,
         local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_288.Data.AllocatorInstance.Data);
      }
      local_498.TextData.Reference = local_340.TextData.Reference;
      if ((((ulonglong)TVar40.DebugPtr & 0x20) != 0) &&
         (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_278.Data.AllocatorInstance.Data);
        local_498.TextData.Reference = local_340.TextData.Reference;
      }
      goto LAB_149b76dc6;
    }
    if (((((local_560->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) ||
         (bVar12 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_560->ExecutionSource), !bVar12))
        || (pIVar6 = (pFVar11->ExecutionSource).InterfaceInstance,
           pIVar6 == (IPCGGraphExecutionSource *)0x0)) ||
       (TVar22.DebugPtr = (UPropertyBag *)(**(code **)((longlong)*pIVar6 + 8))(),
       (UPCGComponent *)TVar22.DebugPtr == (UPCGComponent *)0x0)) {
LAB_149b75e7e:
      local_558.DebugPtr = (UPropertyBag *)0x0;
      TVar22.DebugPtr = TVar40.DebugPtr;
LAB_149b75e86:
      bVar12 = true;
    }
    else {
      local_558.DebugPtr = TVar22.DebugPtr;
      pUVar16 = Z_Construct_UClass_UPCGComponent_NoRegister();
      iVar15 = (int)pUVar16->_padding_;
      if ((*(int *)((TVar22.DebugPtr)->_padding_ + 0x38) < iVar15) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)((TVar22.DebugPtr)->_padding_ + 0x30) + (longlong)iVar15 * 8) !=
          &pUVar16->_padding_)) goto LAB_149b75e7e;
      if (((TVar22.DebugPtr)->_padding_ != 0) &&
         (*(char *)((TVar22.DebugPtr)->_padding_ + 0x168) == '\x03')) goto LAB_149b75e86;
      bVar12 = false;
      local_558.DebugPtr = TVar22.DebugPtr;
    }
    lVar5 = TVar18.DebugPtr[3]._padding_;
    TVar25.DebugPtr = TVar40.DebugPtr;
    if ((lVar5 != 0) && (pUVar16 = Z_Construct_UClass_AActor_NoRegister(), pUVar16 != (UClass *)0x0)
       ) {
      iVar15 = (int)pUVar16->_padding_;
      if ((*(int *)(lVar5 + 0x38) < iVar15) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar15 * 8) !=
          &pUVar16->_padding_)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      if (bVar9) {
        TVar25 = (TObjectPtr<UPropertyBag_const_>_u_0)TVar18.DebugPtr[3]._padding_;
      }
    }
    if ((((TObjectPtr<UObject> *)&TVar25.DebugPtr[1]._padding_)->field0_0x0).DebugPtr ==
        (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper((UClass *)TVar25.DebugPtr);
    }
    pUVar28 = (((TObjectPtr<UObject> *)&TVar25.DebugPtr[1]._padding_)->field0_0x0).DebugPtr;
    if (pUVar28 == (UObject *)0x0) {
      pFVar32 = GetTypeName<AActor>(&local_268);
      if ((pFVar32->Data).ArrayNum != 0) {
        pwVar43 = (wchar_t *)(pFVar32->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar43);
    }
    pUVar16 = Z_Construct_UClass_AActor_NoRegister();
    iVar15 = (int)pUVar16->_padding_;
    if ((*(int *)(*(longlong *)&pUVar28->field_0x10 + 0x38) < iVar15) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar28->field_0x10 + 0x30) + (longlong)iVar15 * 8) !=
        &pUVar16->_padding_)) {
      pFVar32 = GetTypeName<AActor>(&local_258);
      if ((pFVar32->Data).ArrayNum == 0) {
        pwVar41 = L"";
      }
      else {
        pwVar41 = (wchar_t *)(pFVar32->Data).AllocatorInstance.Data;
      }
      pFVar32 = GetFullNameForCastLogError<UObject>(&local_248,pUVar28);
      if ((pFVar32->Data).ArrayNum != 0) {
        pwVar43 = (wchar_t *)(pFVar32->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar43,pwVar41);
    }
    if ((!bVar12) && ((pUVar28[2].field_0xb & 8) != 0)) goto LAB_149b76dd1;
    pAVar20 = *(AActor **)&((TVar18.DebugPtr)->PropertyDescs).ArrayNum;
    FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_228);
    pAVar26 = local_540;
    local_228[0x30] = AlwaysSpawn;
    local_228._8_8_ = pAVar20;
    local_228._32_8_ = AActor::GetLevel(local_540);
    pUVar7 = (pAVar26->RootComponent).field0_0x0.DebugPtr;
    if (pUVar7 == (USceneComponent *)0x0) {
      pTVar23 = &UE::Math::TTransform<double>::Identity;
    }
    else {
      pTVar23 = &pUVar7->ComponentToWorld;
    }
    local_4e8 = (code *)(pTVar23->Rotation).XY.m128d_f64[0];
    dStack_4e0 = (pTVar23->Rotation).XY.m128d_f64[1];
    local_538 = (FPCGCrc *)(pTVar23->Rotation).ZW.m128d_f64[0];
    dStack_530 = (pTVar23->Rotation).ZW.m128d_f64[1];
    aVar42 = (atomic<int>)0x1;
    local_3b8 = (pTVar23->Translation).XY.m128d_f64[0];
    FStack_3b0 = *(FName *)((pTVar23->Translation).XY.m128d_f64 + 1);
    local_3a8 = (AActor *)(pTVar23->Translation).ZW.m128d_f64[0];
    pAStack_3a0 = (AActor *)(pTVar23->Translation).ZW.m128d_f64[1];
    local_420._40_8_ = (pTVar23->Scale3D).XY.m128d_f64[0];
    local_420._48_8_ = (pTVar23->Scale3D).XY.m128d_f64[1];
    local_420._56_8_ = (pTVar23->Scale3D).ZW.m128d_f64[0];
    uStack_3e0 = (pTVar23->Scale3D).ZW.m128d_f64[1];
    pFVar24 = ::FName::FName(&local_290,10,L"ActorPivot",FNAME_Add);
    bVar12 = FPCGContext::IsValueOverriden(local_560,*pFVar24);
    if (bVar12) {
      local_4e8 = (code *)TVar18.DebugPtr[1]._padding_;
      dStack_4e0 = (double)TVar18.DebugPtr[1]._padding_;
      local_538 = (FPCGCrc *)TVar18.DebugPtr[1]._padding_;
      dStack_530 = (double)TVar18.DebugPtr[1]._padding_;
      local_3b8 = (double)TVar18.DebugPtr[1]._padding_;
      FStack_3b0 = (FName)TVar18.DebugPtr[1]._padding_;
      local_3a8 = (AActor *)TVar18.DebugPtr[1]._padding_;
      pAStack_3a0 = (AActor *)TVar18.DebugPtr[1]._padding_;
      local_420._40_8_ = TVar18.DebugPtr[1]._padding_;
      local_420._48_8_ = TVar18.DebugPtr[1]._padding_;
      local_420._56_8_ = TVar18.DebugPtr[1]._padding_;
      uStack_3e0 = (double)TVar18.DebugPtr[1]._padding_;
    }
    pUVar16 = (UClass *)TVar18.DebugPtr[3]._padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar16 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar16);
    }
    local_1b8._0_8_ = AActor::GetWorld(local_540);
    local_1b8._8_8_ = pUVar16;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar16 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar16);
    }
    local_1b8._112_8_ = local_228._0_8_;
    local_1b8._120_8_ = local_228._8_8_;
    local_138 = (AActor *)local_228._16_8_;
    local_130 = (APawn *)local_228._24_8_;
    local_128 = (ULevel *)local_228._32_8_;
    local_120 = (UChildActorComponent *)local_228._40_8_;
    local_118 = local_228[0x30];
    local_117 = local_228[0x31];
    local_1b8._16_8_ = local_4e8;
    local_1b8._24_8_ = dStack_4e0;
    local_115 = local_228[0x33];
    local_1b8._32_8_ = local_538;
    local_1b8._40_8_ = dStack_530;
    local_114 = local_228._52_4_;
    local_1b8._48_8_ = local_3b8;
    local_1b8._56_4_ = FStack_3b0.ComparisonIndex.Value;
    local_1b8._60_4_ = FStack_3b0.Number;
    local_1b8._64_8_ = local_3a8;
    local_1b8._72_8_ = pAStack_3a0;
    local_1b8._80_4_ = local_420._40_4_;
    local_1b8._84_4_ = local_420._44_4_;
    local_1b8._88_4_ = local_420._48_4_;
    local_1b8._92_4_ = local_420._52_4_;
    local_1b8._96_4_ = local_420._56_4_;
    local_1b8._100_4_ = local_420._60_4_;
    local_1b8._104_4_ = (float)uStack_3e0;
    local_1b8._108_4_ = uStack_3e0._4_4_;
    local_116 = local_228[0x32] & 0x1f | local_116 & 0xe0;
    local_108 = (double)local_228._64_8_;
    local_f8[3] = 0;
    if ((double)local_228._64_8_ != 0.0) {
      pIVar33 = local_1d8;
      if (local_1c0 != (ITextData *)0x0) {
        pIVar33 = local_1c0;
      }
      (**(code **)*pIVar33)(local_420._40_4_,local_f8);
    }
    pTVar10 = PCGCreateTargetActor::CVarCreateTargetActorAllowReuse.Ref;
    local_f8[4] = 0;
    local_d0._0_2_ = 1;
    local_528 = (longlong *)0x0;
    local_550 = (FPCGCrc)((ulonglong)(uint3)local_550._5_3_ << 0x28);
    bVar12 = IsInParallelGameThread();
    if (bVar12) {
LAB_149b761e9:
      TVar25.DebugPtr = TVar40.DebugPtr;
    }
    else {
      bVar12 = IsInGameThread();
      TVar25 = (TObjectPtr<UPropertyBag_const_>_u_0)0x1;
      if (bVar12) goto LAB_149b761e9;
    }
    pFVar11 = local_560;
    if (pTVar10->ShadowedValue[(longlong)&(TVar25.DebugPtr)->_padding_] != false) {
      if ((local_560->DependenciesCrc).bValid == false) {
        local_488 = (FPCGTaggedData *)0x0;
        local_480 = 0;
        local_478 = 0;
        local_470 = (void *)0x0;
        local_468 = 0;
        local_460 = 0;
        local_4e8 = *(code **)((longlong)*local_548 + 0x40);
        local_538 = &local_560->DependenciesCrc;
        local_368.DebugPtr = TVar40.DebugPtr;
        if (((local_560->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
           (bVar12 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_560->ExecutionSource), bVar12)
           ) {
          local_368 = (TObjectPtr<UPropertyBag_const_>_u_0)
                      (pFVar11->ExecutionSource).InterfaceInstance;
        }
        local_378 = &local_488;
        local_370 = TVar18;
        (*local_4e8)(local_548,&local_378,local_538);
        if (local_470 != (void *)0x0) {
          FMemory::Free(local_470);
        }
        DestructItems<FPCGTaggedData,int>(local_488,(int)local_480);
        if (local_488 != (FPCGTaggedData *)0x0) {
          FMemory::Free(local_488);
        }
        if ((local_560->DependenciesCrc).bValid == false) goto LAB_149b763b0;
      }
      FVar38 = local_560->DependenciesCrc;
      local_550 = FVar38;
      this_03 = FPCGStackHandle::GetStack(&local_560->StackHandle);
      uVar14 = FVar38.Value;
      local_548 = (FPCGCreateTargetActorElement *)CONCAT44(local_548._4_4_,uVar14);
      local_538 = (FPCGCrc *)CONCAT44(local_538._4_4_,uVar14);
      if (this_03 != (FPCGStack *)0x0) {
        FPCGStack::GetCrc(this_03);
        uVar14 = local_428 + -0x61c88647 + ((uint)((ulonglong)FVar38 >> 2) & 0x3fffffff) +
                 uVar14 * 0x40 ^ uVar14;
        local_548 = (FPCGCreateTargetActorElement *)CONCAT44(local_548._4_4_,uVar14);
        FVar38._4_4_ = 0;
        FVar38.Value = uVar14;
        local_538 = (FPCGCrc *)CONCAT44(local_538._4_4_,uVar14);
      }
      PCGCreateTargetActor::GetAdditionalDependenciesCrc
                ((FSpawnDefaultActorParams *)local_420,(AActor *)local_1b8);
      local_550.Value =
           local_420._0_4_ + FVar38.Value * 0x40 + ((uint)local_548 >> 2) + 0x9e3779b9 ^
           (uint)local_538;
      if ((UPCGComponent *)TVar22.DebugPtr != (UPCGComponent *)0x0) {
        local_360 = &local_528;
        local_358 = local_550;
        local_350 = &local_560;
        local_348 = local_d0[1];
        local_3d0 = &local_360;
        local_3d8 = UE::Core::Private::Function::
                    TFunctionRefCaller<`FPCGCreateTargetActorElement::ExecuteInternal'::__l85::<lambda_1>,void,UPCGManagedResource_*>
                    ::Call;
        UPCGComponent::ForEachManagedResource
                  ((UPCGComponent *)TVar22.DebugPtr,
                   (TFunctionRef<void___cdecl(UPCGManagedResource_*)> *)&local_3d8);
      }
    }
LAB_149b763b0:
    if (local_528 == (longlong *)0x0) {
      pAVar20 = UPCGActorHelpers::SpawnDefaultActor((FSpawnDefaultActorParams *)local_1b8);
      if (pAVar20 != (AActor *)0x0) {
        pTVar2 = &pAVar20->Tags;
        pFVar3 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar3 < (FScriptContainerElement *)
                       ((longlong)&PCGHelpers::DefaultPCGActorTag.ComparisonIndex.Value + 1)) &&
            (&PCGHelpers::DefaultPCGActorTag <
             (FName *)(pFVar3 + (longlong)(pAVar20->Tags).ArrayMax * 8))) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          uVar13 = (*pcVar8)();
          return (bool)uVar13;
        }
        iVar15 = (pAVar20->Tags).ArrayNum;
        if (iVar15 == (pAVar20->Tags).ArrayMax) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&pTVar2->AllocatorInstance,&(pAVar20->Tags).ArrayMax);
        }
        (pAVar20->Tags).ArrayNum = iVar15 + 1;
        *(FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar15 * 8) =
             PCGHelpers::DefaultPCGActorTag;
        PCGHelpers::GetStringArrayFromCommaSeparatedList
                  (&local_518,(FString *)&TVar18.DebugPtr[1]._padding_);
        if ((pTVar2 == (TArray<FName,TSizedDefaultAllocator<32>_> *)&local_518) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)this != (void*)&Source",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x96e,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          uVar13 = (*pcVar8)();
          return (bool)uVar13;
        }
        local_538 = (FPCGCrc *)CONCAT44(local_538._4_4_,local_518.ArrayNum);
        if (local_518.ArrayNum != 0) {
          iVar15 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (8,4,local_518.ArrayNum,&pTVar2->AllocatorInstance,
                              &(pAVar20->Tags).ArrayNum,&(pAVar20->Tags).ArrayMax);
          ConstructItems<FName,FString,int>
                    ((pTVar2->AllocatorInstance).Data + (longlong)iVar15 * 8,
                     (FString *)local_518.AllocatorInstance.Data,(uint)local_538);
        }
        pFVar11 = local_560;
        local_4b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_4b8.Data.ArrayNum = 0;
        local_4b8.Data.ArrayMax = 0;
        pAVar26 = TSoftObjectPtr<AActor>::Get((TSoftObjectPtr<AActor> *)(TVar18.DebugPtr + 1));
        if (pAVar26 == (AActor *)0x0) {
          aVar42 = (TVar18.DebugPtr)->RefCount;
        }
        PCGHelpers::AttachToParent(pAVar20,local_540,(EPCGAttachOptions)aVar42,pFVar11,&local_4b8);
        if (local_4b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4b8.Data.AllocatorInstance.Data);
        }
        PCGObjectPropertyOverrideHelpers::ApplyOverridesFromParams
                  ((TArray<FPCGObjectPropertyOverrideDescription,TSizedDefaultAllocator<32>_> *)
                   &TVar18.DebugPtr[1]._padding_,(UObject *)pAVar20,
                   PCGCreateTargetActorConstants::ActorPropertyOverridesLabel,local_560,false);
        DestructItems<FString,int>((FString *)local_518.AllocatorInstance.Data,local_518.ArrayNum);
        TVar40 = local_558;
        local_558 = TVar40;
        if (local_518.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_518.AllocatorInstance.Data);
          local_558 = TVar40;
        }
        goto LAB_149b76760;
      }
      if (1 < (byte)LogPCG._0_1_) {
        pFVar21 = FText::AsLocalizable_Advanced_LocText
                            (&local_310,L"PCGCreateTargetActor",L"ActorSpawnFailed",
                             L"Failed to spawn actor");
        FText::ToString(pFVar21);
        if (local_560 != (FPCGContext *)0x0) {
          TVar40 = (TObjectPtr<UPropertyBag_const_>_u_0)0x80;
          FPCGContext::GetTaskName(local_560,&local_320);
          if (local_560 != (FPCGContext *)0x0) {
            TVar40 = (TObjectPtr<UPropertyBag_const_>_u_0)0x180;
            FPCGContext::GetExecutionSourceName(local_560,&local_330);
          }
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if ((TVar40._0_4_ >> 8 != 0) &&
           (TVar40._0_4_ = TVar40._0_4_ & 0xfffffeff, TVar40._4_4_ = 0,
           local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_330.Data.AllocatorInstance.Data);
        }
        if ((TVar40._0_1_ < '\0') &&
           (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_320.Data.AllocatorInstance.Data);
        }
        if (local_310.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_310.TextData.Reference + 0x10))();
        }
      }
    }
    else {
      (**(code **)(*local_528 + 0x2e0))();
      plVar36 = local_528;
      if (((int)local_528[0x13] < 1) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        uVar13 = (*pcVar8)();
        return (bool)uVar13;
      }
      pAVar20 = TSoftObjectPtr<AActor>::Get((TSoftObjectPtr<AActor> *)plVar36[0x12]);
      pFVar37 = (FName *)(pAVar20->Tags).AllocatorInstance.Data;
      pFVar24 = pFVar37 + (pAVar20->Tags).ArrayNum;
      for (; pFVar37 != pFVar24; pFVar37 = pFVar37 + 1) {
        if (*pFVar37 == PCGHelpers::DefaultPCGActorTag) goto LAB_149b76760;
      }
      bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<7463152851062096346>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCreateTargetActor.cpp"
                          ,0x1da,"GeneratedActor->Tags.Contains(PCGHelpers::DefaultPCGActorTag)");
      if (bVar12) {
        pcVar8 = (code *)swi(3);
        uVar13 = (*pcVar8)();
        return (bool)uVar13;
      }
LAB_149b76760:
      pFVar11 = local_560;
      local_420._8_8_ = UPCGFunctionPrototypes::GetPrototypeWithNoParams();
      local_508.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_508.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,1,0,&local_508.AllocatorInstance,1,&local_508.ArrayMax);
      *(undefined8 *)local_508.AllocatorInstance.Data = local_420._8_8_;
      local_420._16_8_ = pAVar20->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)local_420._16_8_ != (UObject *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_420._16_8_);
      }
      PCGHelpers::FindUserFunctions
                (&local_4a8,(TSubclassOf<UObject>)((longlong)local_420 + 0x10),
                 (TArray<FName,TSizedDefaultAllocator<32>_> *)&TVar18.DebugPtr[1]._padding_,
                 &local_508,pFVar11);
      if ((TObjectPtr<UClass>_u_0 *)local_508.AllocatorInstance.Data !=
          (TObjectPtr<UClass>_u_0 *)0x0) {
        FMemory::Free(local_508.AllocatorInstance.Data);
      }
      iVar15 = local_4a8.ArrayNum;
      uVar34 = (ulonglong)local_4a8.ArrayNum;
      pFVar3 = local_4a8.AllocatorInstance.Data + uVar34 * 8;
      FVar39.Data = local_4a8.AllocatorInstance.Data;
      while( true ) {
        if ((uint)uVar34 != iVar15) {
          local_568[0] = (<lambda_1>)0x0;
          `TCheckedPointerIterator<UFunction_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_568);
        }
        if (FVar39.Data == pFVar3) break;
        (**(code **)(pAVar20->_padding_ + 0x260))(pAVar20,*(undefined8 *)FVar39.Data,0);
        uVar34 = (ulonglong)(uint)local_4a8.ArrayNum;
        FVar39.Data = FVar39.Data + 8;
      }
      if (local_4a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4a8.AllocatorInstance.Data);
      }
      TVar40 = local_558;
      if ((local_528 == (longlong *)0x0) &&
         ((UPCGComponent *)local_558.DebugPtr != (UPCGComponent *)0x0)) {
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)local_558.DebugPtr,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar16 = Z_Construct_UClass_UPCGManagedActors_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)(local_d0 + 8),pUVar16);
        local_d0._16_8_ = TVar40;
        pUVar27 = (UPCGManagedResource *)
                  StaticConstructObject_Internal((FStaticConstructObjectParameters *)(local_d0 + 8))
        ;
        if (local_88._s_0.X != 0.0) {
          TVar35 = (TObjectPtr<AActor>_u_0)((longlong)&local_88._s_0 + 0x10);
          if (local_60.DebugPtr != (AActor *)0x0) {
            TVar35 = local_60;
          }
          (**(code **)((TVar35.DebugPtr)->_padding_ + 0x10))();
        }
        if (local_550.bValid != false) {
          pUVar27->Crc = local_550;
        }
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pAVar20);
        }
        local_440.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_458._16_8_ = 0;
        local_458._8_8_ = 0;
        local_440.Data.ArrayNum = 0;
        local_440.Data.ArrayMax = 0;
        local_458._0_8_ = 0;
        local_4f8 = 0;
        FUtf8String::Reset(&local_440,0);
        local_420._24_8_ = pAVar20;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pAVar20);
        }
        FSoftObjectPtr::operator=
                  ((FSoftObjectPtr *)local_458,(FObjectPtr)((longlong)local_420 + 0x18));
        TArray<TSoftObjectPtr<AActor>,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<TSoftObjectPtr<AActor>_>
                  ((TArray<TSoftObjectPtr<AActor>,TSizedDefaultAllocator<32>_> *)
                   &pUVar27[2]._padding_,(TSoftObjectPtr<AActor> *)local_458);
        if (local_440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_440.Data.AllocatorInstance.Data);
        }
        *(bool *)&pUVar27[1]._padding_ = (char)TVar18.DebugPtr[3]._padding_ == '\0';
        UPCGComponent::AddToManagedResources((UPCGComponent *)TVar40.DebugPtr,pUVar27);
      }
      local_4d8.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_4d8.AssetPath.PackageName.Number = 0;
      local_4d8.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_4d8.AssetPath.AssetName.Number = 0;
      local_4d8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_4d8.SubPathString.Data.ArrayNum = 0;
      local_4d8.SubPathString.Data.ArrayMax = 0;
      FSoftObjectPath::SetPath(&local_4d8,(UObject *)pAVar20);
      pUVar28 = GetTransientPackageAsObject();
      pUVar29 = NewObject<UPCGParamData>(pUVar28);
      plVar36 = &pUVar29->_padding_;
      if (((pUVar29 == (UPCGParamData *)0x0) || (*plVar36 == 0)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("ParamData && ParamData->Metadata",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCreateTargetActor.cpp"
                              ,0x215,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        uVar13 = (*pcVar8)();
        return (bool)uVar13;
      }
      local_390 = PCGMetadataDomainID::Default;
      local_398 = PCGPointDataConstants::ActorReferenceAttribute;
      this_04 = UPCGMetadata::FindOrCreateMetadataDomain((UPCGMetadata *)*plVar36,&local_390);
      if (((this_04 == (FPCGMetadataDomain *)0x0) ||
          (pFVar30 = FPCGMetadataDomain::CreateAttribute<FSoftObjectPath>
                               (this_04,local_398,&local_4d8,false,false),
          pFVar30 == (FPCGMetadataAttribute<FSoftObjectPath> *)0x0)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("ActorPathAttribute",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCreateTargetActor.cpp"
                              ,0x217,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        uVar13 = (*pcVar8)();
        return (bool)uVar13;
      }
      UPCGMetadata::AddEntry((UPCGMetadata *)*plVar36,-1);
      pFVar11 = local_560;
      piVar1 = &(local_560->OutputData).TaggedData.ArrayMax;
      iVar15 = (local_560->OutputData).TaggedData.ArrayNum;
      if (iVar15 == *piVar1) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x878,(ForAnyElementType *)&local_560->OutputData,piVar1);
      }
      (pFVar11->OutputData).TaggedData.ArrayNum = iVar15 + 1;
      this_05 = (FPCGDataPtrWrapper *)
                ((pFVar11->OutputData).TaggedData.AllocatorInstance.Data + (longlong)iVar15 * 0x78);
      this_05[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      this_05[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      this_05[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      this_05[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      this_05[6].WeakData.WeakPtr.ObjectIndex = 0x100;
      (this_05->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
      (this_05->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
      this_05[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      this_05[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      this_05[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      this_05[3].WeakData.WeakPtr.ObjectIndex = 0;
      this_05[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
      *(undefined4 *)&this_05[4].Data.field0_0x0 = 0xffffffff;
      *(undefined4 *)((longlong)&this_05[4].Data.field0_0x0 + 4) = 0;
      this_05[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      this_05[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      *(undefined8 *)&this_05[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
      *(undefined4 *)((longlong)&this_05[7].Data.field0_0x0 + 4) = 0xffffffff;
      FPCGDataPtrWrapper::operator=(this_05,(UPCGData *)pUVar29);
      if (local_4d8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4d8.SubPathString.Data.AllocatorInstance.Data);
      }
    }
    if (local_108 != 0.0) {
      plVar36 = local_f8;
      if ((longlong *)local_f8[3] != (longlong *)0x0) {
        plVar36 = (longlong *)local_f8[3];
      }
      (**(code **)(*plVar36 + 0x10))();
    }
    if ((double)local_228._64_8_ == 0.0) goto LAB_149b76dd1;
    local_498.TextData.Reference = local_1d8;
    if (local_1c0 != (ITextData *)0x0) {
      local_498.TextData.Reference = local_1c0;
    }
  }
  (**(code **)((longlong)*local_498.TextData.Reference + 0x10))();
LAB_149b76dd1:
  if (bVar44) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// IsCacheable @ 149b93160

bool __thiscall
FPCGCreateTargetActorElement::IsCacheable(FPCGCreateTargetActorElement *this,UPCGSettings *param_1)

{
  return false;
}

