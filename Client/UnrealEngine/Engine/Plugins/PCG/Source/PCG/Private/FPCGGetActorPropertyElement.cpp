// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// <lambda_invoker_cdecl> @ 149b33110

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
`FPCGGetActorPropertyElement::ExecuteInternal'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (AActor *param_1)

{
  return true;
}

// <lambda_invoker_cdecl> @ 149b33130

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
`FPCGGetActorPropertyElement::ExecuteInternal'::__l2::<lambda_2>::<lambda_invoker_cdecl>
          (AActor *param_1)

{
  return true;
}

// CanExecuteOnlyOnMainThread @ 149b67ca0

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
FPCGGetActorPropertyElement::CanExecuteOnlyOnMainThread
          (FPCGGetActorPropertyElement *this,FPCGContext *param_1)

{
  return true;
}

// ExecuteInternal @ 149b875c0

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
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FPCGGetActorPropertyElement::ExecuteInternal(FPCGGetActorPropertyElement *this,FPCGContext *param_1)

{
  int *piVar1;
  FSoftObjectPath *pFVar2;
  FName *pFVar3;
  AActor *pAVar4;
  TObjectPtr<UClass>_u_0 TVar5;
  code *pcVar6;
  FPCGContext *pFVar7;
  FScriptContainerElement *pFVar8;
  FPCGMetadataDomainID FVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool bVar14;
  undefined1 uVar15;
  int iVar16;
  int iVar17;
  ITextData IVar18;
  UClass *pUVar19;
  FText *pFVar20;
  ITextData IVar21;
  ITextData *pIVar22;
  code *pcVar23;
  AActor *pAVar24;
  FString *pFVar25;
  UPCGParamData *pUVar26;
  longlong lVar27;
  UPCGMetadata *pUVar28;
  FPCGMetadataDomain *pFVar29;
  FName FVar30;
  FText *pFVar31;
  FTextFormat *pFVar32;
  FText *pFVar33;
  undefined ***pppuVar34;
  ulonglong uVar35;
  ForElementType<UActorComponent_*> FVar36;
  ulonglong uVar37;
  FPCGDataPtrWrapper *this_00;
  FName *pFVar38;
  ForAnyElementType FVar39;
  FSoftObjectPath *this_01;
  uint uVar40;
  TObjectPtr<UClass>_u_0 TVar41;
  bool bVar42;
  undefined1 auStackY_6c8 [32];
  undefined1 local_677;
  undefined1 local_676;
  undefined1 local_675;
  undefined1 local_674 [4];
  ForAnyElementType local_670;
  undefined8 local_668;
  ForAnyElementType local_660;
  undefined8 local_658;
  uint local_650;
  AActor *local_648;
  ITextData local_640;
  ITextData local_638;
  AActor *local_630;
  UActorComponent *local_628;
  FPCGContext *local_620;
  ITextData local_618;
  FScriptContainerElement *local_610;
  int iStack_608;
  undefined4 uStack_604;
  uint local_600;
  uint local_5fc;
  undefined8 local_5f8;
  FScriptContainerElement *local_5f0;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_5e8;
  FSoftObjectPath local_5d8;
  FSoftObjectPath local_5b8;
  FName local_598;
  undefined1 local_590 [12];
  FName local_584;
  TObjectPtr<UClass>_u_0 local_578;
  FName local_570;
  FName local_568;
  FPCGMetadataDomainID local_560;
  FName local_550;
  FString local_548;
  FString local_538;
  FString local_528;
  FString local_518;
  FName local_508;
  FPCGMetadataDomainID FStack_500;
  FName local_4e8;
  FPCGMetadataDomainID local_4e0;
  ITextData local_4c8;
  ITextData IStack_4c0;
  ITextData IStack_4b8;
  ITextData IStack_4b0;
  ITextData IStack_4a8;
  ITextData local_4a0;
  undefined8 uStack_498;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  ITextData local_488;
  TArrayView<AActor_*,int> local_478;
  FString local_468;
  FString local_458;
  FText local_448;
  FString local_438;
  FString local_428;
  FString local_418;
  FText local_408;
  FString local_3f8;
  FString local_3e8;
  FText local_3d8;
  FText local_3c8;
  FString local_3b8;
  FString local_3a8;
  FText local_398;
  FText local_388;
  FString local_378;
  FString local_368;
  FText local_358;
  FText local_348;
  FString local_338;
  FText local_320;
  FString local_310;
  FString local_300;
  FName local_2f0;
  FPCGMetadataDomainID FStack_2e8;
  FString local_2d8;
  FText local_2c8;
  undefined4 local_2ac;
  FExtractorParameters local_2a8;
  FTextFormat local_238;
  FText local_228;
  FTextFormat local_218;
  FText local_208;
  FTextFormat local_1f8;
  FText local_1e8;
  FText local_1d8;
  code *local_1c8 [2];
  ITextData local_1b8;
  code *pcStack_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  ITextData *pIStack_1a0;
  code *local_198;
  undefined8 uStack_190;
  ITextData local_188 [3];
  ITextData *pIStack_170;
  code *local_168 [2];
  undefined **local_158;
  code *local_150;
  undefined ***local_140;
  TVector<double>_u_0 local_138;
  ITextData IStack_120;
  ITextData local_118;
  undefined8 uStack_110;
  ITextData local_108;
  TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_> local_100;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_6c8;
  local_650 = 0;
  bVar42 = -1 < CpuChannel->Enabled;
  local_620 = param_1;
  if (bVar42) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId237,"FPCGGetActorPropertyElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetActorProperty.cpp"
               ,0xed);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId237);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InContext",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetActorProperty.cpp"
                          ,0xef,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    uVar15 = (*pcVar6)();
    return (bool)uVar15;
  }
  IVar18 = (ITextData)FPCGContext::GetInputSettings<UPCGGetActorPropertySettings>(param_1);
  local_640 = IVar18;
  if ((IVar18 == (ITextData)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetActorProperty.cpp"
                          ,0xf3,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    uVar15 = (*pcVar6)();
    return (bool)uVar15;
  }
  if (*(bool *)((longlong)IVar18 + 0x140) == false) {
LAB_149b87808:
    if ((param_1->Node == (UPCGNode *)0x0) ||
       (bVar14 = UPCGNode::IsOutputPinConnected(param_1->Node,&PCGPinConstants::DefaultOutputLabel),
       !bVar14)) {
      if ((byte)LogPCG._0_1_ < 6) goto LAB_149b88a4d;
      pFVar20 = FText::AsLocalizable_Advanced_LocText
                          (&local_320,L"PCGPropertyToParamDataElement",L"UnconnectedNode",
                           L"Node is not connected, nothing to do");
      FText::ToString(pFVar20);
      FPCGContext::GetTaskName(param_1,&local_300);
      FPCGContext::GetExecutionSourceName(param_1,&local_338);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_338.Data.AllocatorInstance.Data);
      }
      if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_300.Data.AllocatorInstance.Data);
      }
      goto LAB_149b88a42;
    }
    IVar21 = (ITextData)UPCGBlueprintHelpers::GetOriginalComponent(param_1);
    pIStack_1a0 = (ITextData *)0x0;
    local_1b8 = (ITextData)
                &
                ___7__TFunction_OwnedObject_P6A_NPEBVAActor___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    pcStack_1b0 = `FPCGGetActorPropertyElement::ExecuteInternal'::__l2::<lambda_1>::
                  <lambda_invoker_cdecl>;
    local_1c8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<bool_(__cdecl*)(AActor_const_*),bool,AActor_const_*>::Call;
    local_618 = IVar21;
    if (((IVar21 != (ITextData)0x0) && (*(AActor **)((longlong)IVar21 + 0xa8) != (AActor *)0x0)) &&
       (*(bool *)((longlong)IVar18 + 0xc9) != false)) {
      PCGHelpers::GetActorBounds
                ((TBox<double> *)&local_138._s_0,*(AActor **)((longlong)IVar21 + 0xa8),true);
      IStack_4c0 = (ITextData)local_138._s_0.X;
      IStack_4b8 = (ITextData)local_138._s_0.Y;
      local_198 = (code *)0x0;
      IStack_4b0 = (ITextData)local_138._s_0.Z;
      IStack_4a8 = IStack_120;
      local_4a0 = local_118;
      uStack_498 = uStack_110;
      local_638 = local_108;
      local_4c8 = IVar18;
      local_488 = IVar21;
      pIVar22 = FMemory::Malloc(0x50,8);
      pIStack_170 = pIStack_1a0;
      pcVar6 = local_1c8[1];
      uStack_490 = local_638._0_4_;
      uStack_48c = local_638._4_4_;
      pIVar22[1] = local_4c8;
      pIVar22[2] = IStack_4c0;
      *pIVar22 = (ITextData)
                 &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FPCGGetActorPropertyElement::ExecuteInternal'::`61'::<lambda_3>,0,1>
                  ::_vftable_;
      pIVar22[3] = IStack_4b8;
      pIVar22[4] = IStack_4b0;
      pIVar22[5] = IStack_4a8;
      pIVar22[6] = local_4a0;
      *(undefined4 *)(pIVar22 + 7) = (undefined4)uStack_498;
      *(undefined4 *)&pIVar22[7].field_0x4 = uStack_498._4_4_;
      *(undefined4 *)(pIVar22 + 8) = uStack_490;
      *(undefined4 *)&pIVar22[8].field_0x4 = uStack_48c;
      pIVar22[9] = local_488;
      pcVar23 = local_198;
      if (pIVar22 != (ITextData *)&DAT_fffffffffffffff8) {
        pcVar23 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FPCGGetActorPropertyElement::ExecuteInternal'::__l61::<lambda_3>,bool,AActor_const_*>
                  ::Call;
      }
      uVar10 = local_1b8._0_4_;
      uVar11 = local_1b8._4_4_;
      uVar12 = pcStack_1b0._0_4_;
      uVar13 = pcStack_1b0._4_4_;
      local_1c8[1] = (code *)uStack_190;
      local_1a8 = local_188[2]._0_4_;
      uStack_1a4 = local_188[2]._4_4_;
      pIStack_1a0 = pIVar22;
      local_1b8._4_4_ = local_188[0]._4_4_;
      local_1b8._0_4_ = local_188[0]._0_4_;
      pcStack_1b0 = (code *)CONCAT44(local_188[1]._4_4_,local_188[1]._0_4_);
      local_198 = local_1c8[0];
      uStack_190 = pcVar6;
      local_188[0]._0_4_ = uVar10;
      local_188[0]._4_4_ = uVar11;
      local_188[1]._0_4_ = uVar12;
      local_188[1]._4_4_ = uVar13;
      bVar14 = local_1c8[0] != (code *)0x0;
      local_1c8[0] = pcVar23;
      if (bVar14) {
        pIVar22 = local_188;
        if (pIStack_170 != (ITextData *)0x0) {
          pIVar22 = pIStack_170;
        }
        (**(code **)((longlong)*pIVar22 + 0x10))();
      }
    }
    pFVar7 = local_620;
    local_660.Data = (FScriptContainerElement *)0x0;
    local_658 = 0;
    if (((FPCGActorSelectorSettings *)((longlong)IVar18 + 200))->ActorFilter == FromInput) {
      iVar17 = *(int *)&local_620[1].OutputData.TaggedData.AllocatorInstance.Data;
      this_01 = (FSoftObjectPath *)local_620[1].InputData.InactiveOutputPinBitmask;
      pFVar2 = (FSoftObjectPath *)((longlong)this_01 + (longlong)iVar17 * 0x28);
      while( true ) {
        if (*(int *)&pFVar7[1].OutputData.TaggedData.AllocatorInstance.Data != iVar17) {
          local_677 = 0;
          `TCheckedPointerIterator<TTuple<FSoftObjectPath,int,int>_const_,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(&local_677);
        }
        IVar21 = local_618;
        if (this_01 == pFVar2) break;
        pAVar24 = (AActor *)FSoftObjectPath::ResolveObject(this_01);
        if (pAVar24 == (AActor *)0x0) {
LAB_149b87a84:
          local_630 = (AActor *)0x0;
        }
        else {
          pUVar19 = Z_Construct_UClass_AActor_NoRegister();
          iVar16 = (int)pUVar19->_padding_;
          if ((*(int *)(pAVar24->_padding_ + 0x38) < iVar16) ||
             (local_630 = pAVar24,
             (longlong *)
             *(undefined1 **)(*(longlong *)(pAVar24->_padding_ + 0x30) + (longlong)iVar16 * 8) !=
             &pUVar19->_padding_)) goto LAB_149b87a84;
        }
        if (((local_660.Data <= (FScriptContainerElement *)&local_630) &&
            ((FScriptContainerElement *)&local_630 < local_660.Data + (longlong)local_658._4_4_ * 8)
            ) && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar14)) {
          pcVar6 = (code *)swi(3);
          uVar15 = (*pcVar6)();
          return (bool)uVar15;
        }
        iVar16 = (int)local_658;
        if ((int)local_658 == local_658._4_4_) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_660,(int *)((longlong)&local_658 + 4));
        }
        this_01 = (FSoftObjectPath *)&this_01[1].AssetPath.AssetName;
        local_658 = CONCAT44(local_658._4_4_,iVar16 + 1);
        *(AActor **)(local_660.Data + (longlong)iVar16 * 8) = local_630;
      }
    }
    FVar39.Data = local_660.Data;
    iVar17 = (int)local_658;
    if (((int)local_658 < 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar14)) {
      pcVar6 = (code *)swi(3);
      uVar15 = (*pcVar6)();
      return (bool)uVar15;
    }
    uStack_604 = local_2ac;
    iStack_608 = iVar17;
    local_158 = &
                ___7__TFunction_OwnedObject_P6A_NPEBVAActor___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_610 = FVar39.Data;
    local_478._12_4_ = local_2ac;
    local_478.ArrayNum = iVar17;
    local_150 = `FPCGGetActorPropertyElement::ExecuteInternal'::__l2::<lambda_2>::
                <lambda_invoker_cdecl>;
    local_140 = (undefined ***)0x0;
    local_168[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<bool_(__cdecl*)(AActor_const_*),bool,AActor_const_*>::Call;
    local_478.DataPtr = (AActor **)FVar39.Data;
    PCGActorSelector::FindActors
              (&local_5e8,(FPCGActorSelectorSettings *)((longlong)IVar18 + 200),
               (UPCGComponent *)IVar21,(TFunction<bool___cdecl(AActor_const_*)> *)local_1c8,
               (TFunction<bool___cdecl(AActor_const_*)> *)local_168,&local_478);
    if (local_168[0] != (code *)0x0) {
      pppuVar34 = &local_158;
      if (local_140 != (undefined ***)0x0) {
        pppuVar34 = local_140;
      }
      (*(code *)(*pppuVar34)[2])();
    }
    if (local_5e8.ArrayNum != 0) {
      uVar35 = (ulonglong)local_5e8.ArrayNum;
      local_5fc = local_5e8.ArrayNum;
      IVar18 = (ITextData)((longlong)local_5e8.AllocatorInstance.Data + uVar35 * 8);
      FVar39.Data = local_5e8.AllocatorInstance.Data;
      local_618 = IVar18;
      do {
        local_638 = (ITextData)FVar39.Data;
        if (local_5e8.ArrayNum != (uint)uVar35) {
          local_676 = 0;
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_676);
        }
        IVar21 = local_640;
        if ((ITextData)FVar39.Data == IVar18) goto LAB_149b8893d;
        pAVar24 = *(AActor **)FVar39.Data;
        local_648 = pAVar24;
        if (pAVar24 != (AActor *)0x0) {
          TVar41.DebugPtr = (UClass *)0x0;
          local_670.Data = (FScriptContainerElement *)0x0;
          local_668 = 0;
          if (*(bool *)((longlong)local_640 + 0x140) == false) {
            iVar17 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_670,(int *)((longlong)&local_668 + 4));
            local_668 = CONCAT44(local_668._4_4_,iVar17 + 1);
            *(AActor **)(local_670.Data + (longlong)iVar17 * 8) = pAVar24;
          }
          else {
            local_578 = (TObjectPtr<UClass>_u_0)
                        ((TObjectPtr<UClass>_u_0 *)((longlong)local_640 + 0x148))->DebugPtr;
            local_100.AllocatorInstance.SecondaryData = (ForElementType<UActorComponent_*>)0x0;
            local_100.ArrayNum = 0;
            local_100.ArrayMax = 0x18;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_578 != (TObjectPtr<UClass>_u_0)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_578.DebugPtr);
            }
            AActor::
            GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>,UActorComponent>
                      (pAVar24,(TSubclassOf<UActorComponent>)&local_578,&local_100,false);
            iVar17 = local_100.ArrayNum;
            if (local_100.ArrayNum == 0) {
              if (1 < (byte)LogPCG._0_1_) {
                local_590._4_8_ = pAVar24->_padding_;
                ::FName::ToString((FName *)(local_590 + 4),&local_528);
                pFVar20 = FText::FromString(&local_1e8,&local_528);
                TVar5 = (TObjectPtr<UClass>_u_0)
                        ((TObjectPtr<UClass>_u_0 *)((longlong)IVar21 + 0x148))->DebugPtr;
                if ((TVar5 != (TObjectPtr<UClass>_u_0)0x0) &&
                   (pUVar19 = Z_Construct_UClass_UActorComponent_NoRegister(),
                   pUVar19 != (UClass *)0x0)) {
                  iVar17 = (int)pUVar19->_padding_;
                  if (((int)(TVar5.DebugPtr)->_padding_ < iVar17) ||
                     ((longlong *)
                      *(undefined1 **)((TVar5.DebugPtr)->_padding_ + (longlong)iVar17 * 8) !=
                      &pUVar19->_padding_)) {
                    bVar14 = false;
                  }
                  else {
                    bVar14 = true;
                  }
                  if (bVar14) {
                    TVar41 = (TObjectPtr<UClass>_u_0)
                             ((TObjectPtr<UClass>_u_0 *)((longlong)IVar21 + 0x148))->DebugPtr;
                  }
                }
                local_584 = (FName)(TVar41.DebugPtr)->_padding_;
                ::FName::ToString(&local_584,&local_538);
                pFVar31 = FText::FromString(&local_1d8,&local_538);
                pFVar33 = FText::AsLocalizable_Advanced_LocText
                                    (&local_348,L"PCGPropertyToParamDataElement",
                                     L"ComponentDoesNotExist",
                                     L"Component class \'{0}\' does not exist in the found actor {1}"
                                    );
                pFVar32 = FTextFormat::FTextFormat(&local_238,pFVar33,Default);
                pFVar20 = FText::Format<FText,FText>(&local_358,pFVar32,pFVar31,pFVar20);
                FText::ToString(pFVar20);
                pFVar7 = local_620;
                FPCGContext::GetTaskName(local_620,&local_368);
                FPCGContext::GetExecutionSourceName(pFVar7,&local_378);
                UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_378.Data.AllocatorInstance.Data);
                }
                if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_368.Data.AllocatorInstance.Data);
                }
                if (local_358.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_358.TextData.Reference + 0x10))();
                }
                if (local_348.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_348.TextData.Reference + 0x10))();
                }
                if (local_538.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_538.Data.AllocatorInstance.Data);
                }
                if (local_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_528.Data.AllocatorInstance.Data);
                }
              }
              if (local_100.AllocatorInstance.SecondaryData !=
                  (ForElementType<UActorComponent_*>)0x0) {
                FMemory::Free((void *)local_100.AllocatorInstance.SecondaryData);
              }
              if (local_670.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_670.Data);
              }
              goto LAB_149b8893d;
            }
            if (*(bool *)((longlong)IVar21 + 0x150) == false) {
              if ((local_100.ArrayNum < 1) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar6 = (code *)swi(3);
                uVar15 = (*pcVar6)();
                return (bool)uVar15;
              }
              FVar36 = (ForElementType<UActorComponent_*>)&local_100;
              if (local_100.AllocatorInstance.SecondaryData !=
                  (ForElementType<UActorComponent_*>)0x0) {
                FVar36 = local_100.AllocatorInstance.SecondaryData;
              }
              local_628 = *(UActorComponent **)FVar36;
              if (((local_670.Data <= (FScriptContainerElement *)&local_628) &&
                  ((FScriptContainerElement *)&local_628 <
                   local_670.Data + (longlong)local_668._4_4_ * 8)) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar14)) {
                pcVar6 = (code *)swi(3);
                uVar15 = (*pcVar6)();
                return (bool)uVar15;
              }
              iVar17 = (uint)local_668;
              if ((uint)local_668 == local_668._4_4_) {
                iVar17 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_670,(int *)((longlong)&local_668 + 4));
              }
              local_668 = CONCAT44(local_668._4_4_,iVar17 + 1);
              *(UActorComponent **)(local_670.Data + (longlong)iVar17 * 8) = local_628;
            }
            else {
              iVar16 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (8,8,local_100.ArrayNum,&local_670,(int *)&local_668,
                                  (int *)((longlong)&local_668 + 4));
              FVar36 = (ForElementType<UActorComponent_*>)&local_100;
              if (local_100.AllocatorInstance.SecondaryData !=
                  (ForElementType<UActorComponent_*>)0x0) {
                FVar36 = local_100.AllocatorInstance.SecondaryData;
              }
              ConstructItems<UObject_*,UActorComponent_*,int>
                        (local_670.Data + (longlong)iVar16 * 8,(UActorComponent **)FVar36,iVar17);
            }
            if (local_100.AllocatorInstance.SecondaryData != (ForElementType<UActorComponent_*>)0x0)
            {
              FMemory::Free((void *)local_100.AllocatorInstance.SecondaryData);
            }
          }
          uVar37 = (ulonglong)(int)(uint)local_668;
          local_600 = (uint)local_668;
          local_610 = local_670.Data + uVar37 * 8;
          uVar35 = uVar37;
          FVar39.Data = local_670.Data;
          uVar40 = local_650;
          while( true ) {
            pFVar8 = local_610;
            local_5f0 = FVar39.Data;
            if ((int)uVar37 != (int)uVar35) {
              local_675 = 0;
              `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_675);
            }
            if (FVar39.Data == pFVar8) break;
            pAVar4 = *(AActor **)FVar39.Data;
            local_560._0_8_ = pAVar4;
            FPCGAttributePropertySelector::GetName
                      ((FPCGAttributePropertySelector *)((longlong)local_640 + 0x160));
            FVar30 = local_570;
            bVar14 = *(bool *)((longlong)local_640 + 0x15c);
            pFVar25 = ::FName::ToString((FName *)((longlong)local_640 + 0x154),&local_438);
            PCGPropertyHelpers::FExtractorParameters::FExtractorParameters
                      (&local_2a8,pAVar4,(UStruct *)pAVar4->_padding_,pFVar25,FVar30,bVar14,true);
            if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_438.Data.AllocatorInstance.Data);
            }
            pFVar7 = local_620;
            local_2a8.bStrictSanitizeOutputAttributeNames = *(bool *)((longlong)local_640 + 0x1a0);
            pUVar26 = PCGPropertyHelpers::ExtractPropertyAsAttributeSet
                                (&local_2a8,local_620,
                                 (TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>
                                  *)0x0,false);
            if (pUVar26 == (UPCGParamData *)0x0) {
              if (local_2a8.PropertySelectors.ArrayNum != 0) {
                if ((local_2a8.PropertySelectors.ArrayNum < 1) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar6 = (code *)swi(3);
                  uVar15 = (*pcVar6)();
                  return (bool)uVar15;
                }
                FVar30 = FPCGAttributePropertySelector::GetName
                                   ((FPCGAttributePropertySelector *)
                                    local_2a8.PropertySelectors.AllocatorInstance.Data);
                local_5f8 = 0;
                if (*(longlong *)FVar30 != 0) {
                  if (1 < (byte)LogPCG._0_1_) {
                    local_550 = (FName)pAVar24->_padding_;
                    ::FName::ToString(&local_550,&local_518);
                    pFVar20 = FText::FromString(&local_228,&local_518);
                    if ((local_2a8.PropertySelectors.ArrayNum < 1) &&
                       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar14)) {
                      pcVar6 = (code *)swi(3);
                      uVar15 = (*pcVar6)();
                      return (bool)uVar15;
                    }
                    pFVar25 = FPCGAttributePropertySelector::ToString
                                        ((FPCGAttributePropertySelector *)
                                         local_2a8.PropertySelectors.AllocatorInstance.Data,
                                         &local_418,false);
                    FText::FromString(&local_408,pFVar25);
                    if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_418.Data.AllocatorInstance.Data);
                    }
                    pFVar31 = FText::AsLocalizable_Advanced_LocText
                                        (&local_3c8,L"PCGPropertyToParamDataElement",
                                         L"FailedToExtract",
                                         L"Fail to extract the property \'{0}\' on actor {1}.");
                    pFVar32 = FTextFormat::FTextFormat(&local_218,pFVar31,Default);
                    pFVar20 = FText::Format<FText,FText>(&local_3d8,pFVar32,&local_408,pFVar20);
                    FText::ToString(pFVar20);
                    FPCGContext::GetTaskName(pFVar7,&local_3e8);
                    FPCGContext::GetExecutionSourceName(pFVar7,&local_3f8);
                    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                    if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
                    }
                    uVar40 = uVar40 & 0xfffff3ff;
                    if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
                    }
                    if (local_3d8.TextData.Reference != (ITextData *)0x0) {
                      (**(code **)((longlong)*local_3d8.TextData.Reference + 0x10))();
                    }
                    if (local_3c8.TextData.Reference != (ITextData *)0x0) {
                      (**(code **)((longlong)*local_3c8.TextData.Reference + 0x10))();
                    }
                    if (local_518.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_518.Data.AllocatorInstance.Data);
                    }
                  }
                  goto LAB_149b88327;
                }
              }
              if (1 < (byte)LogPCG._0_1_) {
                local_598 = (FName)pAVar24->_padding_;
                ::FName::ToString(&local_598,&local_548);
                pFVar20 = FText::FromString(&local_208,&local_548);
                pFVar31 = FText::AsLocalizable_Advanced_LocText
                                    (&local_388,L"PCGPropertyToParamDataElement",
                                     L"FailedToExtractActor",L"Fail to extract actor {0}.");
                pFVar32 = FTextFormat::FTextFormat(&local_1f8,pFVar31,Default);
                pFVar20 = FText::Format<FText>(&local_398,pFVar32,pFVar20);
                FText::ToString(pFVar20);
                FPCGContext::GetTaskName(pFVar7,&local_3a8);
                FPCGContext::GetExecutionSourceName(pFVar7,&local_3b8);
                UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
                }
                uVar40 = uVar40 & 0xfffffcff;
                if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
                }
                if (local_398.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_398.TextData.Reference + 0x10))();
                }
                if (local_388.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_388.TextData.Reference + 0x10))();
                }
                if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_548.Data.AllocatorInstance.Data);
                }
              }
            }
            else {
              iVar17 = (pFVar7->OutputData).TaggedData.ArrayNum;
              piVar1 = &(pFVar7->OutputData).TaggedData.ArrayMax;
              if (iVar17 == *piVar1) {
                iVar17 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x878,(ForAnyElementType *)&pFVar7->OutputData,piVar1);
              }
              (pFVar7->OutputData).TaggedData.ArrayNum = iVar17 + 1;
              this_00 = (FPCGDataPtrWrapper *)
                        ((pFVar7->OutputData).TaggedData.AllocatorInstance.Data +
                        (longlong)iVar17 * 0x78);
              this_00[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
              this_00[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
              this_00[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
              this_00[5].WeakData.WeakPtr.ObjectSerialNumber = 0;
              *(undefined2 *)((longlong)&this_00[6].WeakData.WeakPtr.ObjectIndex + 2) = 0;
              (this_00->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
              (this_00->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
              *(undefined8 *)
               &((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(this_00 + 1))->
                Elements = 0;
              this_00[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
              this_00[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
              this_00[3].WeakData.WeakPtr.ObjectIndex = 0;
              this_00[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
              *(undefined4 *)&this_00[4].Data.field0_0x0 = 0xffffffff;
              *(undefined4 *)((longlong)&this_00[4].Data.field0_0x0 + 4) = 0;
              this_00[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
              this_00[5].WeakData.WeakPtr.ObjectIndex = 0;
              this_00[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
              *(undefined2 *)&this_00[6].WeakData.WeakPtr.ObjectIndex = 0x100;
              *(undefined8 *)&this_00[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
              *(undefined4 *)((longlong)&this_00[7].Data.field0_0x0 + 4) = 0xffffffff;
              FPCGDataPtrWrapper::operator=(this_00,(UPCGData *)pUVar26);
              pAVar4 = local_648;
              pFVar38 = (FName *)(pAVar24->Tags).AllocatorInstance.Data;
              iVar17 = (pAVar24->Tags).ArrayNum;
              pFVar3 = pFVar38 + iVar17;
              while( true ) {
                if ((pAVar4->Tags).ArrayNum != iVar17) {
                  local_674[0] = 0;
                  `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                            (local_674);
                }
                IVar18 = local_640;
                if (pFVar38 == pFVar3) break;
                local_568 = *pFVar38;
                pFVar25 = ::FName::ToString(&local_568,&local_428);
                TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
                          ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                           (this_00 + 1),(FString *)local_590,(bool *)pFVar25);
                if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_428.Data.AllocatorInstance.Data);
                }
                pFVar38 = pFVar38 + 1;
              }
              if (*(bool *)((longlong)local_640 + 0x1a1) != false) {
                lVar27 = (**(code **)(pUVar26->_padding_ + 0x328))(pUVar26);
                if ((lVar27 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("ParamData->MutableMetadata()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetActorProperty.cpp"
                                        ,0x178,L""), bVar14)) {
                  pcVar6 = (code *)swi(3);
                  uVar15 = (*pcVar6)();
                  return (bool)uVar15;
                }
                pUVar28 = (UPCGMetadata *)(**(code **)(pUVar26->_padding_ + 0x328))(pUVar26);
                local_5d8.AssetPath.PackageName.ComparisonIndex.Value = 0;
                local_5d8.AssetPath.PackageName.Number = 0;
                local_5d8.AssetPath.AssetName.ComparisonIndex.Value = 0;
                local_5d8.AssetPath.AssetName.Number = 0;
                local_5d8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
                ;
                local_5d8.SubPathString.Data.ArrayNum = 0;
                local_5d8.SubPathString.Data.ArrayMax = 0;
                FSoftObjectPath::SetPath(&local_5d8,(UObject *)local_648);
                local_4e8 = PCGPointDataConstants::ActorReferenceAttribute;
                local_4e0 = PCGMetadataDomainID::Default;
                pFVar29 = UPCGMetadata::FindOrCreateMetadataDomain(pUVar28,&local_4e0);
                if (pFVar29 != (FPCGMetadataDomain *)0x0) {
                  FPCGMetadataDomain::FindOrCreateAttribute<FSoftObjectPath>
                            (pFVar29,local_4e8,&local_5d8,false,false,true);
                }
                if (local_5d8.SubPathString.Data.AllocatorInstance.Data !=
                    (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_5d8.SubPathString.Data.AllocatorInstance.Data);
                }
              }
              pAVar24 = local_648;
              if ((*(bool *)((longlong)IVar18 + 0x140) != false) &&
                 (*(bool *)((longlong)IVar18 + 0x151) != false)) {
                lVar27 = (**(code **)(pUVar26->_padding_ + 0x328))(pUVar26);
                if ((lVar27 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("ParamData->MutableMetadata()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetActorProperty.cpp"
                                        ,0x17e,L""), bVar14)) {
                  pcVar6 = (code *)swi(3);
                  uVar15 = (*pcVar6)();
                  return (bool)uVar15;
                }
                pUVar28 = (UPCGMetadata *)(**(code **)(pUVar26->_padding_ + 0x328))(pUVar26);
                local_5b8.AssetPath.PackageName.ComparisonIndex.Value = 0;
                local_5b8.AssetPath.PackageName.Number = 0;
                local_5b8.AssetPath.AssetName.ComparisonIndex.Value = 0;
                local_5b8.AssetPath.AssetName.Number = 0;
                local_5b8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
                ;
                local_5b8.SubPathString.Data.ArrayNum = 0;
                local_5b8.SubPathString.Data.ArrayMax = 0;
                FSoftObjectPath::SetPath(&local_5b8,(UObject *)local_560._0_8_);
                local_560 = PCGMetadataDomainID::Default;
                ::FName::FName(&local_2f0,L"ComponentReference");
                FVar9 = local_560;
                FStack_2e8.Flag = local_560.Flag;
                FStack_2e8._1_3_ = local_560._1_3_;
                FStack_2e8.CustomFlag = local_560.CustomFlag;
                FStack_2e8.DebugName = local_560.DebugName;
                local_508 = local_2f0;
                FStack_500.Flag = local_560.Flag;
                FStack_500._1_3_ = local_560._1_3_;
                FStack_500.CustomFlag = local_560.CustomFlag;
                FStack_500.DebugName = local_560.DebugName;
                local_560 = FVar9;
                pFVar29 = UPCGMetadata::FindOrCreateMetadataDomain(pUVar28,&FStack_500);
                if (pFVar29 != (FPCGMetadataDomain *)0x0) {
                  FPCGMetadataDomain::FindOrCreateAttribute<FSoftObjectPath>
                            (pFVar29,local_508,&local_5b8,false,false,true);
                }
                pAVar24 = local_648;
                if (local_5b8.SubPathString.Data.AllocatorInstance.Data !=
                    (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_5b8.SubPathString.Data.AllocatorInstance.Data);
                  pAVar24 = local_648;
                }
              }
            }
LAB_149b88327:
            DestructItems<FPCGAttributePropertySelector,int>
                      ((FPCGAttributePropertySelector *)
                       local_2a8.PropertySelectors.AllocatorInstance.Data,
                       local_2a8.PropertySelectors.ArrayNum);
            if ((FPCGAttributePropertySelector *)local_2a8.PropertySelectors.AllocatorInstance.Data
                != (FPCGAttributePropertySelector *)0x0) {
              FMemory::Free(local_2a8.PropertySelectors.AllocatorInstance.Data);
            }
            DestructItems<FString,int>
                      ((FString *)local_2a8.PropertySelector.ExtraNames.AllocatorInstance.Data,
                       local_2a8.PropertySelector.ExtraNames.ArrayNum);
            if (local_2a8.PropertySelector.ExtraNames.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2a8.PropertySelector.ExtraNames.AllocatorInstance.Data);
            }
            uVar37 = local_668 & 0xffffffff;
            FVar39.Data = local_5f0 + 8;
            uVar35 = (ulonglong)local_600;
          }
          IVar18 = local_618;
          local_650 = uVar40;
          if (local_670.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_670.Data);
            IVar18 = local_618;
          }
        }
        uVar35 = (ulonglong)local_5fc;
        FVar39.Data = (FScriptContainerElement *)((longlong)local_638 + 8);
      } while( true );
    }
    if (5 < (byte)LogPCG._0_1_) {
      pFVar20 = FText::AsLocalizable_Advanced_LocText
                          (&local_448,L"PCGPropertyToParamDataElement",L"NoActorFound",
                           L"No matching actor was found");
      FText::ToString(pFVar20);
      pFVar7 = local_620;
      FPCGContext::GetTaskName(local_620,&local_458);
      FPCGContext::GetExecutionSourceName(pFVar7,&local_468);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_468.Data.AllocatorInstance.Data);
      }
      if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_458.Data.AllocatorInstance.Data);
      }
      if (local_448.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_448.TextData.Reference + 0x10))();
      }
    }
LAB_149b8893d:
    if ((ITextData)local_5e8.AllocatorInstance.Data != (ITextData)0x0) {
      FMemory::Free(local_5e8.AllocatorInstance.Data);
    }
    if (local_660.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_660.Data);
    }
    if (local_1c8[0] == (code *)0x0) goto LAB_149b88a4d;
    local_320.TextData.Reference = &local_1b8;
    if (pIStack_1a0 != (ITextData *)0x0) {
      local_320.TextData.Reference = pIStack_1a0;
    }
  }
  else {
    TVar41 = (TObjectPtr<UClass>_u_0)
             ((TObjectPtr<UClass>_u_0 *)((longlong)IVar18 + 0x148))->DebugPtr;
    if ((TVar41 != (TObjectPtr<UClass>_u_0)0x0) &&
       (pUVar19 = Z_Construct_UClass_UActorComponent_NoRegister(), pUVar19 != (UClass *)0x0)) {
      iVar17 = (int)pUVar19->_padding_;
      if (((int)(TVar41.DebugPtr)->_padding_ < iVar17) ||
         ((longlong *)*(undefined1 **)((TVar41.DebugPtr)->_padding_ + (longlong)iVar17 * 8) !=
          &pUVar19->_padding_)) {
        bVar14 = false;
      }
      else {
        bVar14 = true;
      }
      if ((bVar14) &&
         ((TObjectPtr<UClass>_u_0)((TObjectPtr<UClass>_u_0 *)((longlong)IVar18 + 0x148))->DebugPtr
          != (TObjectPtr<UClass>_u_0)0x0)) goto LAB_149b87808;
    }
    if ((byte)LogPCG._0_1_ < 3) goto LAB_149b88a4d;
    pFVar20 = FText::AsLocalizable_Advanced_LocText
                        (&local_2c8,L"PCGPropertyToParamDataElement",L"ParametersMissing",
                         L"Some parameters are missing, aborting");
    FText::ToString(pFVar20);
    bVar14 = param_1 != (FPCGContext *)0x0;
    if (bVar14) {
      FPCGContext::GetTaskName(param_1,&local_2d8);
      FPCGContext::GetExecutionSourceName(param_1,&local_310);
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if ((bVar14) && (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_310.Data.AllocatorInstance.Data);
    }
    local_320.TextData.Reference = local_2c8.TextData.Reference;
    if ((bVar14) && (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
      local_320.TextData.Reference = local_2c8.TextData.Reference;
    }
LAB_149b88a42:
    if (local_320.TextData.Reference == (ITextData *)0x0) goto LAB_149b88a4d;
  }
  (**(code **)((longlong)*local_320.TextData.Reference + 0x10))();
LAB_149b88a4d:
  if (bVar42) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// GetDependenciesCrc @ 149b8ee70

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
FPCGGetActorPropertyElement::GetDependenciesCrc
          (FPCGGetActorPropertyElement *this,FPCGGetDependenciesCrcParams *param_1,FPCGCrc *param_2)

{
  char cVar1;
  int iVar2;
  UPCGSettings *pUVar3;
  bool bVar4;
  UClass *pUVar5;
  UPCGComponent *this_00;
  FPCGCrc local_res10 [3];
  
  local_res10[0].Value = 0;
  local_res10[0].bValid = false;
  IPCGElement::GetDependenciesCrc((IPCGElement *)this,param_1,local_res10);
  pUVar3 = param_1->Settings;
  if (pUVar3 == (UPCGSettings *)0x0) {
    return;
  }
  pUVar5 = UPCGGetActorPropertySettings::StaticClass();
  iVar2 = (int)pUVar5->_padding_;
  if (*(int *)(pUVar3->_padding_ + 0x38) < iVar2) {
    return;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
      &pUVar5->_padding_) {
    return;
  }
  if (*(char *)((longlong)&pUVar3[2]._padding_ + 2) != '\0') {
    return;
  }
  if (param_1->ExecutionSource == (IPCGGraphExecutionSource *)0x0) {
    return;
  }
  this_00 = (UPCGComponent *)(**(code **)((longlong)*param_1->ExecutionSource + 8))();
  if (this_00 == (UPCGComponent *)0x0) {
    return;
  }
  pUVar5 = Z_Construct_UClass_UPCGComponent_NoRegister();
  iVar2 = (int)pUVar5->_padding_;
  if (*(int *)(this_00->_padding_ + 0x38) < iVar2) {
    return;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8)
      != &pUVar5->_padding_) {
    return;
  }
  cVar1 = (char)pUVar3[1]._padding_;
  if ((cVar1 == '\0') || (cVar1 == '\x04')) {
    bVar4 = true;
    if (cVar1 == '\x04') {
      this_00 = UPCGComponent::GetOriginalComponent(this_00);
      goto LAB_149b8ef20;
    }
  }
  else {
    bVar4 = false;
  }
  if (!bVar4) {
    return;
  }
LAB_149b8ef20:
  if ((this_00 != (UPCGComponent *)0x0) && ((AActor *)this_00->_padding_ != (AActor *)0x0)) {
    UPCGActorHelpers::ComputeHashFromActorTagsAndReference((AActor *)this_00->_padding_,true,true);
  }
  return;
}

// IsCacheable @ 149b93260

bool __thiscall
FPCGGetActorPropertyElement::IsCacheable(FPCGGetActorPropertyElement *this,UPCGSettings *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UPCGSettings *)0x0) {
    pUVar2 = UPCGGetActorPropertySettings::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return *(char *)((longlong)&param_1[2]._padding_ + 2) == '\0';
    }
  }
  return false;
}

// PrepareDataInternal @ 149b96370

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
FPCGGetActorPropertyElement::PrepareDataInternal
          (FPCGGetActorPropertyElement *this,FPCGContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UPCGGetActorPropertySettings *pUVar4;
  bool bVar5;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_18;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId212,"FPCGGetActorPropertyElement::PrepareData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetActorProperty.cpp"
               ,0xd4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId212);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetActorProperty.cpp"
                         ,0xd5,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pUVar4 = FPCGContext::GetInputSettings<UPCGGetActorPropertySettings>(param_1);
  if ((pUVar4 == (UPCGGetActorPropertySettings *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetActorProperty.cpp"
                         ,0xd8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((pUVar4->ActorSelector).ActorFilter == FromInput) {
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    bVar2 = FPCGLoadObjectsFromPathContext::InitializeAndRequestLoad
                      ((FPCGLoadObjectsFromPathContext *)param_1,PCGPinConstants::DefaultInputLabel,
                       &(pUVar4->ActorSelector).ActorReferenceSelector,&local_18,false,true,false);
    DestructItems<FSoftObjectPath,int>
              ((FSoftObjectPath *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
    if ((FSoftObjectPath *)local_18.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  else {
    bVar2 = true;
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar2;
}

// SupportsBasePointDataInputs @ 149b98ae0

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
FPCGGetActorPropertyElement::SupportsBasePointDataInputs
          (FPCGGetActorPropertyElement *this,FPCGContext *param_1)

{
  return true;
}

