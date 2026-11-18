// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 1

// ExecuteInternal @ 14da83ca0

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

bool __thiscall
FPVPresetLoaderElement::ExecuteInternal(FPVPresetLoaderElement *this,FPCGContext *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  UPCGNode *this_00;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  uint uVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 uVar12;
  bool bVar13;
  UClass *pUVar14;
  UPCGSettings *pUVar15;
  TObjectPtr<UPCGSettings>_u_0 TVar16;
  FPCGTaggedData *pFVar17;
  FText *pFVar18;
  UObject *pUVar19;
  UPVGrowthData *pUVar20;
  FString *pFVar21;
  wchar_t *pwVar22;
  uint uVar23;
  FPCGDataPtrWrapper *this_01;
  int iVar24;
  ForElementType<unsigned_int> FVar25;
  int iVar26;
  uint uVar27;
  undefined8 *puVar28;
  bool bVar29;
  undefined1 auStackY_2c8 [32];
  <lambda_1> local_286;
  undefined1 local_285;
  uint local_284;
  ForElementType<unsigned_int> local_280;
  TObjectPtr<UPCGSettings>_u_0 local_278;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_270;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_260;
  TObjectPtr<UPCGSettings>_u_0 local_250;
  undefined8 local_248;
  int local_240;
  int local_23c;
  TObjectPtr<UObject> local_238;
  longlong *local_230;
  UPVGrowthData *local_228;
  TObjectPtr<UPCGData_const_>_u_0 local_220;
  FName local_218;
  longlong *local_210;
  int iStack_208;
  uint uStack_204;
  ForElementType<unsigned_int> local_200;
  undefined4 uStack_1f8;
  int iStack_1f4;
  int local_1f0;
  undefined4 uStack_1ec;
  int iStack_1e8;
  undefined4 uStack_1e4;
  longlong *local_1e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d8;
  undefined8 uStack_1b8;
  FString local_1b0;
  FString local_1a0;
  undefined1 local_190 [8];
  FText local_188;
  FText local_178;
  FText local_168;
  FStringFormatArg local_158;
  FStringFormatArg local_138;
  FString local_118 [2];
  undefined4 local_ec;
  FManagedArrayCollection local_e8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  bVar29 = -1 < CpuChannel->Enabled;
  if (bVar29) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId103,"FPVPresetLoaderElement::ExecuteInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Nodes\\PVPresetLoaderSettings.cpp"
               ,0x67);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId103);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InContext",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Nodes\\PVPresetLoaderSettings.cpp"
                          ,0x69,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    uVar12 = (*pcVar8)();
    return (bool)uVar12;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar15 = UPCGNode::GetSettings(this_00), pUVar15 == (UPCGSettings *)0x0)) {
      pFVar17 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPVPresetLoaderSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_286);
      if (pFVar17 != (FPCGTaggedData *)0x0) {
        local_250.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar17->Data).Data.field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_250.DebugPtr != (UPCGSettings *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_250.DebugPtr);
        }
        if (local_250.DebugPtr != (UPCGSettings *)0x0) {
          pUVar14 = UPVPresetLoaderSettings::StaticClass();
          bVar11 = FObjectPtr::IsA(&local_250.ObjectPtr,pUVar14);
          if (bVar11) {
            local_278.DebugPtr = local_250.DebugPtr;
            TVar16 = local_250;
            goto LAB_14da83e61;
          }
        }
      }
    }
    else {
      pUVar15 = UPCGNode::GetSettings(this_00);
      TVar16.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar15);
      if (TVar16.DebugPtr != (UPCGSettings *)0x0) {
        local_278.DebugPtr = TVar16.DebugPtr;
        pUVar14 = UPVPresetLoaderSettings::StaticClass();
        iVar26 = (int)pUVar14->_padding_;
        if ((iVar26 <= *(int *)((TVar16.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar16.DebugPtr)->_padding_ + 0x30) + (longlong)iVar26 * 8) ==
            &pUVar14->_padding_)) goto LAB_14da83e61;
      }
    }
  }
  else {
    pUVar14 = UPVPresetLoaderSettings::StaticClass();
    bVar11 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar14);
    if (bVar11) {
      local_278 = (TObjectPtr<UPCGSettings>_u_0)(param_1->SettingsWithOverride).field0_0x0.DebugPtr;
      TVar16 = local_278;
      goto LAB_14da83e61;
    }
  }
  local_278.DebugPtr = (UPCGSettings *)0x0;
  TVar16.DebugPtr = (UPCGSettings *)0x0;
LAB_14da83e61:
  iVar26 = 0;
  if ((TVar16.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Nodes\\PVPresetLoaderSettings.cpp"
                          ,0x6c,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    uVar12 = (*pcVar8)();
    return (bool)uVar12;
  }
  lVar5 = TVar16.DebugPtr[1]._padding_;
  if (lVar5 == 0) {
    pFVar18 = FText::AsLocalizable_Advanced_LocText
                        (&local_188,L"PVPresetLoaderSettings",L"MissingDataAsset",
                         L"Preset data asset is not set");
    PCGLog::LogWarningOnGraph(pFVar18,param_1);
    if (local_188.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
    }
  }
  else {
    local_230 = (longlong *)(lVar5 + 0x90);
    bVar11 = false;
    iVar3 = *(int *)(lVar5 + 0xb8);
    local_280 = (ForElementType<unsigned_int>)(lVar5 + 0xa0);
    iStack_208 = 0;
    uStack_204 = 1;
    iStack_1f4 = iStack_208;
    if (iVar3 != 0) {
      FVar25 = (ForElementType<unsigned_int>)
               *(TBitArray<FDefaultBitArrayAllocator> **)(lVar5 + 0xb0);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar5 + 0xb0) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        FVar25 = local_280;
      }
      uVar23 = *(uint *)(((TBitArray<FDefaultBitArrayAllocator> *)FVar25)->AllocatorInstance).
                        InlineData;
      iStack_208 = iVar26;
      while (uVar23 == 0) {
        iStack_208 = iStack_208 + 1;
        iVar26 = iVar26 + 0x20;
        iStack_1f4 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_208) goto LAB_14da83f82;
        uVar23 = *(uint *)((((TBitArray<FDefaultBitArrayAllocator> *)FVar25)->AllocatorInstance).
                           InlineData + (longlong)iStack_208 * 4);
      }
      uStack_204 = -uVar23 & uVar23;
      uVar2 = (ulonglong)uStack_204 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      local_240 = (int)lVar7;
      iStack_1f4 = (int)lVar7 + -1 + iVar26;
      if (iVar3 < iStack_1f4) {
        iStack_1f4 = iVar3;
      }
    }
LAB_14da83f82:
    uVar23 = *(uint *)(lVar5 + 0xb8);
    uStack_1ec = local_ec;
    iStack_1e8 = *(int *)(lVar5 + 0x98) - *(int *)(lVar5 + 0xc4);
    local_210 = local_230;
    uVar27 = uVar23 & 0xffffffe0;
    uStack_1f8 = 0xffffffff;
    local_200 = local_280;
    local_1f0 = iVar26;
    local_1e0 = local_230;
    TStack_1d8._padding_ = CONCAT44(uStack_204,iStack_208);
    iVar24 = (int)uVar23 >> 5;
    TStack_1d8.BaseBitIndex = iVar26;
    TStack_1d8._28_4_ = local_ec;
    uStack_1b8 = CONCAT44(uStack_1e4,iStack_1e8);
    TStack_1d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_280;
    TStack_1d8.UnvisitedBitMask = 0xffffffff;
    TStack_1d8.CurrentBitIndex = iStack_1f4;
    local_284 = uVar23;
    if ((((int)uVar23 < 0) || (iVar3 < (int)uVar23)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar13)) {
      pcVar8 = (code *)swi(3);
      uVar12 = (*pcVar8)();
      return (bool)uVar12;
    }
    uVar4 = *(int *)((longlong)local_280 + 0x18);
    uVar9 = local_284;
    if (uVar23 != uVar4) {
      FVar25 = local_280;
      if (*(ForElementType<unsigned_int> *)((longlong)local_280 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar25 = *(ForElementType<unsigned_int> *)((longlong)local_280 + 0x10);
      }
      uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)((longlong)FVar25 + (longlong)iVar24 * 4);
      while (uVar23 == 0) {
        iVar24 = iVar24 + 1;
        uVar27 = uVar27 + 0x20;
        local_284 = uVar4;
        uVar9 = uVar4;
        if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar24)
        goto LAB_14da840a0;
        uVar23 = *(uint *)((longlong)FVar25 + (longlong)iVar24 * 4);
      }
      uVar2 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
      lVar5 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      local_23c = (int)lVar5;
      local_284 = (int)lVar5 + -1 + uVar27;
      uVar9 = local_284;
      if ((int)uVar4 < (int)local_284) {
        local_284 = uVar4;
        uVar9 = uVar4;
      }
    }
LAB_14da840a0:
    while( true ) {
      plVar10 = local_1e0;
      if ((int)local_1e0[1] - *(int *)((longlong)local_1e0 + 0x34) != (int)uStack_1b8) {
        local_285 = 0;
        `TSparseArray<TSparseSetElement<TTuple<FString,FManagedArrayCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_285);
      }
      if (((TStack_1d8.CurrentBitIndex == uVar9) &&
          ((ForElementType<unsigned_int>)TStack_1d8.Array == local_280)) && (plVar10 == local_230))
      break;
      puVar28 = (undefined8 *)((longlong)TStack_1d8.CurrentBitIndex * 200 + *plVar10);
      bVar13 = PV::Utilities::IsValidPVData((FManagedArrayCollection *)(puVar28 + 2));
      if (bVar13) {
        bVar11 = IsInGameThread();
        if (bVar11) {
          pUVar19 = GetTransientPackageAsObject();
          pUVar20 = NewObject<UPVGrowthData>(pUVar19);
        }
        else {
          if (((param_1->AsyncState).bIsRunningOnMainThread != false) &&
             (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<4331830188552749348>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                  ,0x124,"!AsyncState.bIsRunningOnMainThread"), bVar11)) {
            pcVar8 = (code *)swi(3);
            uVar12 = (*pcVar8)();
            return (bool)uVar12;
          }
          FGCScopeGuard::FGCScopeGuard((FGCScopeGuard *)&local_286);
          pUVar19 = GetTransientPackageAsObject();
          pUVar20 = NewObject<UPVGrowthData>(pUVar19);
          FGCScopeGuard::~FGCScopeGuard((FGCScopeGuard *)&local_286);
          if ((pUVar20 == (UPVGrowthData *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Object",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                  ,0x12a,L""), bVar11)) {
            pcVar8 = (code *)swi(3);
            uVar12 = (*pcVar8)();
            return (bool)uVar12;
          }
          local_228 = pUVar20;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar20 != (UPVGrowthData *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar20);
          }
          TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
          Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_238,(bool *)&local_228);
        }
        FManagedArrayCollection::FManagedArrayCollection
                  (&local_e8,(FManagedArrayCollection *)(puVar28 + 2));
        FManagedArrayCollection::operator=
                  ((FManagedArrayCollection *)&pUVar20->field_0x98,&local_e8);
        FManagedArrayCollection::~FManagedArrayCollection(&local_e8);
        iVar26 = (param_1->OutputData).TaggedData.ArrayNum;
        piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
        if (iVar26 == *piVar1) {
          iVar26 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
        }
        pFVar6 = (param_1->OutputData).TaggedData.AllocatorInstance.Data;
        (param_1->OutputData).TaggedData.ArrayNum = iVar26 + 1;
        this_01 = (FPCGDataPtrWrapper *)(pFVar6 + (longlong)iVar26 * 0x78);
        this_01[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        this_01[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        this_01[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        this_01[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        this_01[6].WeakData.WeakPtr.ObjectIndex = 0x100;
        (this_01->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
        (this_01->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
        this_01[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        this_01[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        this_01[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        this_01[3].WeakData.WeakPtr.ObjectIndex = 0;
        this_01[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
        *(undefined4 *)&this_01[4].Data.field0_0x0 = 0xffffffff;
        *(undefined4 *)((longlong)&this_01[4].Data.field0_0x0 + 4) = 0;
        this_01[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        this_01[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        *(undefined8 *)&this_01[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
        *(undefined4 *)((longlong)&this_01[7].Data.field0_0x0 + 4) = 0xffffffff;
        FPCGDataPtrWrapper::operator=(this_01,(UPCGData *)pUVar20);
        if (*(int *)(puVar28 + 1) == 0) {
          pwVar22 = L"";
        }
        else {
          pwVar22 = (wchar_t *)*puVar28;
        }
        ::FName::FName((FName *)&local_220.ObjectPtr,pwVar22);
        this_01[6].Data.field0_0x0 = local_220;
        bVar11 = true;
      }
      else {
        if (*(int *)(puVar28 + 1) == 0) {
          pwVar22 = L"";
        }
        else {
          pwVar22 = (wchar_t *)*puVar28;
        }
        FStringFormatArg::FStringFormatArg(&local_158,pwVar22);
        local_270.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_270.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,0,&local_270.AllocatorInstance,1,&local_270.ArrayMax);
        ConstructItems<FStringFormatArg,FStringFormatArg,int>
                  (local_270.AllocatorInstance.Data,&local_158,1);
        ::FString::FormatImpl(&local_1b0,L"Skipping variation {0} due to invalid data.",&local_270);
        pFVar18 = FText::FromString(&local_178,&local_1b0);
        PCGLog::LogWarningOnGraph(pFVar18,param_1);
        if (local_178.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
        }
        if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
        }
        DestructItems<FStringFormatArg,int>
                  ((FStringFormatArg *)local_270.AllocatorInstance.Data,local_270.ArrayNum);
        if ((FStringFormatArg *)local_270.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
          FMemory::Free(local_270.AllocatorInstance.Data);
        }
        if (local_158.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_158.StringValue.Data.AllocatorInstance.Data);
        }
      }
      TStack_1d8.UnvisitedBitMask = TStack_1d8.UnvisitedBitMask & ~TStack_1d8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d8);
    }
    if (!bVar11) {
      if (local_278.DebugPtr[1]._padding_ == 0) {
        local_248 = 0;
        local_218 = (FName)&local_248;
      }
      else {
        local_218 = UE::CoreUObject::Private::GetFName((UObject *)local_190);
      }
      local_218 = *(FName *)local_218;
      pFVar21 = ::FName::ToString(&local_218,local_118);
      FStringFormatArg::FStringFormatArg(&local_138,pFVar21);
      local_260.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_260.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,0,&local_260.AllocatorInstance,1,&local_260.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_260.AllocatorInstance.Data,&local_138,1);
      ::FString::FormatImpl(&local_1a0,L"No valid variation found in data asset {0}",&local_260);
      pFVar18 = FText::FromString(&local_168,&local_1a0);
      PCGLog::LogErrorOnGraph(pFVar18,param_1);
      if (local_168.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
      }
      if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
      }
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_260.AllocatorInstance.Data,local_260.ArrayNum);
      if ((FStringFormatArg *)local_260.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_260.AllocatorInstance.Data);
      }
      if (local_138.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.StringValue.Data.AllocatorInstance.Data);
      }
    }
  }
  if (bVar29) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

