// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// ExecuteInternal @ 149c0d530

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
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGGetStaticMeshResourceDataElement::ExecuteInternal
          (FPCGGetStaticMeshResourceDataElement *this,FPCGContext *param_1)

{
  FScriptContainerElement *pFVar1;
  UPCGNode *this_00;
  TSoftObjectPtr<UStaticMesh> *pTVar2;
  UPCGData *pUVar3;
  code *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 this_01;
  FPCGCrc FVar9;
  FSharedReferencer<1> FVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  UClass *pUVar16;
  UPCGSettings *pUVar17;
  TObjectPtr<UPCGSettings>_u_0 TVar18;
  FPCGTaggedData *pFVar19;
  FText *pFVar20;
  FSoftObjectPath *pFVar21;
  UObject *pUVar22;
  long alVar23 [2];
  ulonglong uVar24;
  FPCGDataPtrWrapper *this_02;
  FPCGCrc FVar25;
  longlong lVar26;
  long (*palVar27) [2];
  FSoftObjectPath *pFVar28;
  FSoftObjectPath *pFVar29;
  bool bVar30;
  undefined1 auStackY_2e8 [32];
  <lambda_1> local_2a7;
  undefined1 local_2a6;
  undefined1 local_2a5;
  undefined1 local_2a4 [4];
  undefined1 local_2a0 [40];
  ulonglong local_278;
  undefined1 local_270 [16];
  FPCGCrc local_260;
  uint local_258;
  TObjectPtr<UPCGSettings>_u_0 local_250;
  FPCGCrc local_248;
  undefined1 local_240 [16];
  FSharedReferencer<1> local_230;
  undefined1 local_228 [8];
  long local_220 [2];
  FPCGAttributePropertySelector local_218;
  FSoftObjectPath *local_1d8;
  int iStack_1d0;
  undefined4 uStack_1cc;
  UPCGSettings *local_1c8;
  undefined1 *local_1c0;
  undefined1 local_1b8 [24];
  void *local_1a0;
  undefined1 local_190 [24];
  void *local_178;
  TArrayView<FSoftObjectPath,int> local_168;
  FText local_158;
  undefined1 local_148 [24];
  void *local_130;
  undefined1 local_118 [48];
  int local_e8;
  undefined1 local_d8 [40];
  FSoftObjectPath local_b0;
  TSet<TTuple<TSoftObjectPtr<UStaticMesh>,UPCGStaticMeshResourceData_*>,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UStaticMesh>,UPCGStaticMeshResourceData_*,0>,FDefaultSetAllocator>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  bVar30 = -1 < CpuChannel->Enabled;
  local_230.ReferenceController = (TReferenceControllerBase<1> *)param_1;
  if (bVar30) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId85,"FPCGGetStaticMeshResourceDataElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetStaticMeshResourceData.cpp"
               ,0x55);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId85);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InContext",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetStaticMeshResourceData.cpp"
                          ,0x56,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    uVar12 = (*pcVar4)();
    return (bool)uVar12;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar17 = UPCGNode::GetSettings(this_00), pUVar17 == (UPCGSettings *)0x0)) {
      pFVar19 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGGetStaticMeshResourceDataSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_2a7);
      if (pFVar19 != (FPCGTaggedData *)0x0) {
        local_250.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar19->Data).Data.field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_250.DebugPtr != (UPCGSettings *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_250.DebugPtr);
        }
        if (local_250.DebugPtr != (UPCGSettings *)0x0) {
          pUVar16 = UPCGGetStaticMeshResourceDataSettings::StaticClass();
          bVar11 = FObjectPtr::IsA(&local_250.ObjectPtr,pUVar16);
          if (bVar11) {
            local_2a0._16_8_ = local_250;
            TVar18 = local_250;
            goto LAB_149c0d6f7;
          }
        }
      }
    }
    else {
      pUVar17 = UPCGNode::GetSettings(this_00);
      TVar18.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar17);
      if (TVar18.DebugPtr != (UPCGSettings *)0x0) {
        local_2a0._16_8_ = TVar18.DebugPtr;
        pUVar16 = UPCGGetStaticMeshResourceDataSettings::StaticClass();
        iVar15 = (int)pUVar16->_padding_;
        if ((iVar15 <= *(int *)((TVar18.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar18.DebugPtr)->_padding_ + 0x30) + (longlong)iVar15 * 8) ==
            &pUVar16->_padding_)) goto LAB_149c0d6f7;
      }
    }
    local_2a0._16_8_ = (UPCGSettings *)0x0;
    TVar18.DebugPtr = (UPCGSettings *)0x0;
  }
  else {
    pUVar16 = UPCGGetStaticMeshResourceDataSettings::StaticClass();
    bVar11 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar16);
    if (bVar11) {
      local_2a0._16_8_ = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
      TVar18 = (TObjectPtr<UPCGSettings>_u_0)local_2a0._16_8_;
    }
    else {
      local_2a0._16_8_ = (UPCGSettings *)0x0;
      TVar18.DebugPtr = (UPCGSettings *)0x0;
    }
  }
LAB_149c0d6f7:
  if ((TVar18.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetStaticMeshResourceData.cpp"
                          ,0x59,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    uVar12 = (*pcVar4)();
    return (bool)uVar12;
  }
  local_2a0._0_8_ = (UPCGSettings *)0x0;
  local_2a0._8_8_ = 0;
  if ((char)TVar18.DebugPtr[1]._padding_ == '\0') {
    if ((UPCGSettings *)local_2a0 != TVar18.DebugPtr + 1) {
      DestructItems<TSoftObjectPtr<UStaticMesh>,int>((TSoftObjectPtr<UStaticMesh> *)0x0,0);
      iVar15 = (int)TVar18.DebugPtr[1]._padding_;
      pTVar2 = (TSoftObjectPtr<UStaticMesh> *)TVar18.DebugPtr[1]._padding_;
      local_2a0._8_4_ = iVar15;
      if ((iVar15 == 0) && (local_2a0._12_4_ == 0)) {
        local_2a0._8_8_ = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,iVar15,local_2a0._12_4_,(ForAnyElementType *)local_2a0,iVar15,
                   (int *)(local_2a0 + 0xc));
        ConstructItems<TSoftObjectPtr<UStaticMesh>,TSoftObjectPtr<UStaticMesh>,int>
                  ((void *)local_2a0._0_8_,pTVar2,iVar15);
      }
    }
  }
  else {
    FPCGDataCollection::GetInputsByPin
              (&param_1->InputData,(TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)local_240,
               &PCGGetStaticMeshResourceDataConstants::MeshOverridesPinLabel);
    uVar7 = local_2a0._16_8_;
    uVar24 = (ulonglong)(int)local_240._8_4_;
    local_2a0._32_8_ = (FSoftObjectPath *)0x0;
    local_248 = (FPCGCrc)(uVar24 * 0x78 + local_240._0_8_);
    local_278 = 0;
    local_258 = local_240._8_4_;
    FVar25 = (FPCGCrc)local_240._0_8_;
    while( true ) {
      FVar9 = local_248;
      local_260 = FVar25;
      if (local_240._8_4_ != (uint)uVar24) {
        local_2a6 = 0;
        `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_2a6);
      }
      if (FVar25 == FVar9) break;
      pUVar3 = *(UPCGData **)FVar25;
      if (pUVar3 != (UPCGData *)0x0) {
        FPCGAttributePropertyInputSelector::CopyAndFixLast
                  ((FPCGAttributePropertyInputSelector *)&((UPCGSettings *)(uVar7 + 200))->_padding_
                   ,(FPCGAttributePropertyInputSelector *)local_118,pUVar3);
        FPCGAttributePropertyInputSelector::CopyAndFixLast
                  ((FPCGAttributePropertyInputSelector *)local_118,
                   (FPCGAttributePropertyInputSelector *)&local_218,pUVar3);
        PCGAttributeAccessorHelpers::CreateConstAccessor
                  ((UPCGData *)(local_270 + 8),(FPCGAttributePropertySelector *)pUVar3,
                   SUB81(&local_218,0));
        PCGAttributeAccessorHelpers::CreateConstKeys
                  ((UPCGData *)local_270,(FPCGAttributePropertySelector *)pUVar3);
        this_01 = local_270._8_8_;
        uVar8 = local_270._0_8_;
        if (((IPCGAttributeAccessor *)local_270._8_8_ == (IPCGAttributeAccessor *)0x0) ||
           ((IPCGAttributeAccessorKeys *)local_270._0_8_ == (IPCGAttributeAccessorKeys *)0x0)) {
          PCGLog::Metadata::LogFailToCreateAccessorError(&local_218,param_1);
          if ((IPCGAttributeAccessorKeys *)local_270._0_8_ != (IPCGAttributeAccessorKeys *)0x0) {
            (**(code **)*(longlong *)local_270._0_8_)(local_270._0_8_,1);
          }
          if ((IPCGAttributeAccessor *)local_270._8_8_ != (IPCGAttributeAccessor *)0x0) {
            (**(code **)*(longlong *)local_270._8_8_)(local_270._8_8_,1);
          }
          DestructItems<FString,int>
                    ((FString *)local_218.ExtraNames.AllocatorInstance.Data,
                     local_218.ExtraNames.ArrayNum);
          if ((UPropertyBag *)local_218.ExtraNames.AllocatorInstance.Data != (UPropertyBag *)0x0) {
            FMemory::Free(local_218.ExtraNames.AllocatorInstance.Data);
          }
LAB_149c0d8c8:
          pFVar20 = FText::AsLocalizable_Advanced_LocText
                              (&local_158,L"PCGGetStaticMeshResourceDataElement",
                               L"FailExtractMeshOverrides",
                               L"Failed to extract static mesh overrides.");
          PCGLog::LogWarningOnGraph(pFVar20,param_1);
          if (local_158.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
          }
        }
        else {
          iVar15 = (**(code **)(*(longlong *)local_270._0_8_ + 0x10))(local_270._0_8_);
          if (iVar15 < 1) {
            bVar11 = true;
          }
          else {
            iVar15 = (**(code **)(*(longlong *)uVar8 + 0x10))(uVar8);
            TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>::SetNum
                      ((TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *)(local_2a0 + 0x20),
                       iVar15,Default);
            iVar15 = (int)local_278;
            local_1d8 = (FSoftObjectPath *)local_2a0._32_8_;
            if (((int)local_278 < 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar11)) {
              pcVar4 = (code *)swi(3);
              uVar12 = (*pcVar4)();
              return (bool)uVar12;
            }
            iStack_1d0 = iVar15;
            local_168._12_4_ = uStack_1cc;
            local_168.ArrayNum = iVar15;
            local_168.DataPtr = local_1d8;
            bVar11 = IPCGAttributeAccessor::GetRange<FSoftObjectPath>
                               ((IPCGAttributeAccessor *)this_01,&local_168,0,
                                (IPCGAttributeAccessorKeys *)uVar8,AllowBroadcastAndConstructible);
            FVar25 = local_260;
            if (!bVar11) {
              PCGLog::Metadata::LogFailToGetAttributeError(&local_218,param_1);
              FVar25 = local_260;
            }
          }
          if ((IPCGAttributeAccessorKeys *)local_270._0_8_ != (IPCGAttributeAccessorKeys *)0x0) {
            (**(code **)*(longlong *)local_270._0_8_)(local_270._0_8_,1);
          }
          if ((IPCGAttributeAccessor *)local_270._8_8_ != (IPCGAttributeAccessor *)0x0) {
            (**(code **)*(longlong *)local_270._8_8_)(local_270._8_8_,1);
          }
          DestructItems<FString,int>
                    ((FString *)local_218.ExtraNames.AllocatorInstance.Data,
                     local_218.ExtraNames.ArrayNum);
          if ((UPropertyBag *)local_218.ExtraNames.AllocatorInstance.Data != (UPropertyBag *)0x0) {
            FMemory::Free(local_218.ExtraNames.AllocatorInstance.Data);
          }
          if (bVar11 == false) goto LAB_149c0d8c8;
          iVar15 = (int)local_278;
          uVar24 = (ulonglong)(int)local_278;
          pFVar29 = (FSoftObjectPath *)(local_2a0._32_8_ + uVar24 * 0x20);
          pFVar28 = (FSoftObjectPath *)local_2a0._32_8_;
          while( true ) {
            if ((int)uVar24 != iVar15) {
              local_2a5 = 0;
              `TCheckedPointerIterator<FSoftObjectPath,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_2a5);
            }
            FVar25 = local_260;
            param_1 = (FPCGContext *)local_230.ReferenceController;
            if (pFVar28 == pFVar29) break;
            iVar13 = local_2a0._8_4_;
            if (local_2a0._8_4_ == local_2a0._12_4_) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x828,(ForAnyElementType *)local_2a0,(int *)(local_2a0 + 0xc));
            }
            local_2a0._8_4_ = iVar13 + 1;
            pFVar1 = (FScriptContainerElement *)(local_2a0._0_8_ + (longlong)iVar13 * 0x28);
            pFVar21 = FSoftObjectPath::FSoftObjectPath(&local_b0,pFVar28);
            *(undefined8 *)pFVar1 = 0;
            FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)(pFVar1 + 8),pFVar21);
            pFVar1 = (pFVar21->SubPathString).Data.AllocatorInstance.Data;
            if (pFVar1 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar1);
            }
            uVar24 = local_278 & 0xffffffff;
            pFVar28 = pFVar28 + 1;
          }
        }
        DestructItems<FString,int>((FString *)local_118._40_8_,local_e8);
        if ((FString *)local_118._40_8_ != (FString *)0x0) {
          FMemory::Free((void *)local_118._40_8_);
        }
      }
      FVar25 = (FPCGCrc)((longlong)FVar25 + 0x78);
      uVar24 = (ulonglong)local_258;
    }
    DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)local_2a0._32_8_,(int)local_278);
    if ((FSoftObjectPath *)local_2a0._32_8_ != (FSoftObjectPath *)0x0) {
      FMemory::Free((void *)local_2a0._32_8_);
    }
    DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_240._0_8_,local_240._8_4_);
    if ((FPCGCrc)local_240._0_8_ != (FPCGCrc)0x0) {
      FMemory::Free((void *)local_240._0_8_);
    }
  }
  FVar10.ReferenceController = local_230.ReferenceController;
  uVar6 = local_2a0._8_4_;
  local_88.Elements._0_8_ = 0;
  local_88.Elements._8_8_ = 0;
  local_88.Elements._32_8_ = 0;
  local_88.Elements._40_4_ = 0;
  local_88.Elements._44_4_ = 0x80;
  local_88.Elements._48_4_ = 0xffffffff;
  FVar25 = (FPCGCrc)(local_2a0._0_8_ + (longlong)(int)local_2a0._8_4_ * 0x28);
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  pUVar17 = (UPCGSettings *)local_2a0._0_8_;
  local_248 = FVar25;
  do {
    if (local_2a0._8_4_ != uVar6) {
      local_2a4[0] = 0;
      `TCheckedPointerIterator<TSoftObjectPtr<UStaticMesh>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_2a4);
    }
    if ((FPCGCrc)pUVar17 == FVar25) {
      local_88.HashSize = 0;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_88.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<TSoftObjectPtr<UStaticMesh>,UPCGStaticMeshResourceData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<TSoftObjectPtr<UStaticMesh>,UPCGStaticMeshResourceData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_88.Elements);
      DestructItems<TSoftObjectPtr<UStaticMesh>,int>
                ((TSoftObjectPtr<UStaticMesh> *)local_2a0._0_8_,local_2a0._8_4_);
      if ((UPCGSettings *)local_2a0._0_8_ != (UPCGSettings *)0x0) {
        FMemory::Free((void *)local_2a0._0_8_);
      }
      if (bVar30) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return true;
    }
    if (pUVar17->_padding_ != 0) {
      local_190._0_8_ = *(undefined8 *)&pUVar17->_padding_;
      FSoftObjectPath::FSoftObjectPath
                ((FSoftObjectPath *)(local_190 + 8),(FSoftObjectPath *)&pUVar17->_padding_);
      local_1b8._0_8_ = local_190._0_8_;
      FSoftObjectPath::FSoftObjectPath
                ((FSoftObjectPath *)(local_1b8 + 8),(FSoftObjectPath *)(local_190 + 8));
      local_148._0_8_ = local_1b8._0_8_;
      FSoftObjectPath::FSoftObjectPath
                ((FSoftObjectPath *)(local_148 + 8),(FSoftObjectPath *)(local_1b8 + 8));
      uVar14 = ::GetTypeHash((FSoftObjectPath *)(local_148 + 8));
      if (local_130 != (void *)0x0) {
        FMemory::Free(local_130);
      }
      iVar15 = TSet<TTuple<TSoftObjectPtr<UStaticMesh>,UPCGStaticMeshResourceData_*>,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UStaticMesh>,UPCGStaticMeshResourceData_*,0>,FDefaultSetAllocator>
               ::FindIndexByHash<TSoftObjectPtr<UStaticMesh_const_>_>
                         (&local_88,uVar14,(TSoftObjectPtr<UStaticMesh_const_> *)local_1b8);
      if (iVar15 == -1) {
        if (local_1a0 != (void *)0x0) {
          FMemory::Free(local_1a0);
        }
LAB_149c0dc8d:
        if (local_178 != (void *)0x0) {
          FMemory::Free(local_178);
        }
LAB_149c0dca0:
        local_2a0._24_8_ = 0;
        bVar11 = IsInGameThread();
        if (bVar11) {
          pUVar22 = GetTransientPackageAsObject();
          alVar23 = (long  [2])NewObject<UPCGStaticMeshResourceData>(pUVar22);
        }
        else {
          if ((*(bool *)&FVar10.ReferenceController[0x11]._padding_ != false) &&
             (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<4331830188552749348>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                  ,0x124,"!AsyncState.bIsRunningOnMainThread"), bVar11)) {
            pcVar4 = (code *)swi(3);
            uVar12 = (*pcVar4)();
            return (bool)uVar12;
          }
          FGCScopeGuard::FGCScopeGuard((FGCScopeGuard *)&local_2a7);
          pUVar22 = GetTransientPackageAsObject();
          alVar23 = (long  [2])NewObject<UPCGStaticMeshResourceData>(pUVar22);
          FGCScopeGuard::~FGCScopeGuard((FGCScopeGuard *)&local_2a7);
          if ((alVar23 == (long  [2])0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Object",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                  ,0x12a,L""), bVar11)) {
            pcVar4 = (code *)swi(3);
            uVar12 = (*pcVar4)();
            return (bool)uVar12;
          }
          local_220 = alVar23;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (alVar23 != (long  [2])0x0)) {
            UE::GC::MarkAsReachable((UObject *)alVar23);
          }
          TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
          Emplace<TObjectPtr<UObject>_>
                    ((TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                      *)(FVar10.ReferenceController + 0x1d),(TObjectPtr<UObject> *)local_228,
                     (bool *)local_220);
        }
        local_d8._0_8_ = *(undefined8 *)&pUVar17->_padding_;
        local_2a0._24_8_ = alVar23;
        FSoftObjectPath::FSoftObjectPath
                  ((FSoftObjectPath *)(local_d8 + 8),(FSoftObjectPath *)&pUVar17->_padding_);
        UPCGStaticMeshResourceData::Initialize
                  ((UPCGStaticMeshResourceData *)local_2a0._24_8_,
                   (TSoftObjectPtr<UStaticMesh> *)local_d8);
        local_1c0 = local_2a0 + 0x18;
        local_1c8 = pUVar17;
        TSet<TTuple<TSoftObjectPtr<UStaticMesh>,UPCGStaticMeshResourceData_*>,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UStaticMesh>,UPCGStaticMeshResourceData_*,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<TSoftObjectPtr<UStaticMesh>_const_&,UPCGStaticMeshResourceData_*_const_&>_>
                  (&local_88,
                   (TPairInitializer<TSoftObjectPtr<UStaticMesh>_const_&,UPCGStaticMeshResourceData_*_const_&>
                    *)(local_228 + 4),(bool *)&local_1c8);
      }
      else {
        lVar26 = (longlong)iVar15 * 0x38 + local_88.Elements._0_8_;
        if (local_1a0 != (void *)0x0) {
          FMemory::Free(local_1a0);
        }
        if (lVar26 == 0) goto LAB_149c0dc8d;
        palVar27 = (long (*) [2])(lVar26 + 0x28);
        if (local_178 != (void *)0x0) {
          FMemory::Free(local_178);
        }
        if (palVar27 == (long (*) [2])0x0) goto LAB_149c0dca0;
        local_2a0._24_8_ = *palVar27;
      }
      uVar7 = local_2a0._24_8_;
      iVar15 = (int)FVar10.ReferenceController[4]._padding_;
      piVar5 = (int *)((longlong)&FVar10.ReferenceController[4]._padding_ + 4);
      if (iVar15 == *piVar5) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x878,(ForAnyElementType *)
                                  &FVar10.ReferenceController[3].SharedReferenceCount,piVar5);
      }
      *(int *)&FVar10.ReferenceController[4]._padding_ = iVar15 + 1;
      this_02 = (FPCGDataPtrWrapper *)
                ((longlong)iVar15 * 0x78 +
                *(longlong *)&FVar10.ReferenceController[3].SharedReferenceCount);
      this_02[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      this_02[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      this_02[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      this_02[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      this_02[6].WeakData.WeakPtr.ObjectIndex = 0x100;
      (this_02->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
      (this_02->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
      this_02[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      this_02[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      this_02[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      this_02[3].WeakData.WeakPtr.ObjectIndex = 0;
      this_02[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
      *(undefined4 *)&this_02[4].Data.field0_0x0 = 0xffffffff;
      *(undefined4 *)((longlong)&this_02[4].Data.field0_0x0 + 4) = 0;
      this_02[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      this_02[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      *(undefined8 *)&this_02[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
      *(undefined4 *)((longlong)&this_02[7].Data.field0_0x0 + 4) = 0xffffffff;
      FPCGDataPtrWrapper::operator=(this_02,(UPCGData *)uVar7);
      FVar25 = local_248;
    }
    pUVar17 = (UPCGSettings *)&pUVar17->_padding_;
  } while( true );
}

