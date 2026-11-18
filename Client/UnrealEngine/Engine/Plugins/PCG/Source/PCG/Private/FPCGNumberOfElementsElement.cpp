// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// ExecuteInternal @ 149c139f0

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
FPCGNumberOfElementsElement::ExecuteInternal(FPCGNumberOfElementsElement *this,FPCGContext *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  UPCGNode *this_00;
  UPCGData *pUVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  UClass *pUVar13;
  UPCGSettings *pUVar14;
  TObjectPtr<UPCGSettings>_u_0 TVar15;
  FPCGTaggedData *pFVar16;
  UObject *pUVar17;
  UPCGParamData *pUVar18;
  FPCGMetadataDomain *this_01;
  UPCGParamData *this_02;
  long64 lVar19;
  FText *pFVar20;
  FPCGDataPtrWrapper *this_03;
  UPCGParamData *pUVar21;
  bool bVar22;
  <lambda_1> local_res10;
  FGCScopeGuard local_res18 [8];
  uint local_res20;
  int local_108 [2];
  TObjectPtr<UPCGSettings>_u_0 local_100;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_f8;
  int local_e8 [2];
  TObjectPtr<UPCGSettings>_u_0 local_e0;
  longlong local_d8;
  TObjectPtr<UObject> local_d0;
  UPCGParamData *local_c8;
  FName local_c0;
  FString local_b8;
  FText local_a8;
  FTextFormat local_98;
  FName local_88;
  FPCGMetadataDomainID local_80;
  FText local_68;
  FText local_58;
  FText local_48;
  
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId31,"FPCGNumberOfElementsBaseElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGNumberOfElements.cpp"
               ,0x1f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId31);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGNumberOfElements.cpp"
                         ,0x21,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar14 = UPCGNode::GetSettings(this_00), pUVar14 == (UPCGSettings *)0x0)) {
      local_res10 = SUB81(param_1,0);
      pFVar16 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGNumberOfElementsSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_res10);
      if (pFVar16 != (FPCGTaggedData *)0x0) {
        local_e0.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar16->Data).Data.field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_e0.DebugPtr != (UPCGSettings *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_e0.DebugPtr);
        }
        if (local_e0.DebugPtr != (UPCGSettings *)0x0) {
          pUVar13 = UPCGNumberOfElementsSettings::StaticClass();
          bVar9 = FObjectPtr::IsA(&local_e0.ObjectPtr,pUVar13);
          if (bVar9) {
            local_100.DebugPtr = local_e0.DebugPtr;
            TVar15 = local_e0;
            goto LAB_149c13ba8;
          }
        }
      }
    }
    else {
      pUVar14 = UPCGNode::GetSettings(this_00);
      TVar15.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar14);
      if (TVar15.DebugPtr != (UPCGSettings *)0x0) {
        local_100.DebugPtr = TVar15.DebugPtr;
        pUVar13 = UPCGNumberOfElementsSettings::StaticClass();
        iVar12 = (int)pUVar13->_padding_;
        if ((iVar12 <= *(int *)((TVar15.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar15.DebugPtr)->_padding_ + 0x30) + (longlong)iVar12 * 8) ==
            &pUVar13->_padding_)) goto LAB_149c13ba8;
      }
    }
    local_100.DebugPtr = (UPCGSettings *)0x0;
    TVar15.DebugPtr = (UPCGSettings *)0x0;
  }
  else {
    pUVar13 = UPCGNumberOfElementsSettings::StaticClass();
    bVar9 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar13);
    if (bVar9) {
      local_100 = (TObjectPtr<UPCGSettings>_u_0)(param_1->SettingsWithOverride).field0_0x0.DebugPtr;
      TVar15 = local_100;
    }
    else {
      local_100.DebugPtr = (UPCGSettings *)0x0;
      TVar15.DebugPtr = (UPCGSettings *)0x0;
    }
  }
LAB_149c13ba8:
  pUVar21 = (UPCGParamData *)0x0;
  if ((TVar15.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGNumberOfElements.cpp"
                         ,0x24,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_f8,&PCGPinConstants::DefaultInputLabel);
  local_res20 = 0;
  if (0 < local_f8.ArrayNum) {
    local_d8 = 0;
    this_02 = pUVar21;
    pUVar18 = pUVar21;
    do {
      lVar8 = local_d8;
      uVar11 = 0;
      if ((int)(uint)pUVar21 < local_f8.ArrayNum) {
        uVar11 = ~(uint)pUVar21 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      pUVar5 = *(UPCGData **)(local_f8.AllocatorInstance.Data + lVar8);
      if (pUVar5 == (UPCGData *)0x0) {
        PCGLog::InputOutput::LogInvalidInputDataError(param_1);
        local_d8 = lVar8;
      }
      else {
        if (pUVar18 == (UPCGParamData *)0x0) {
          bVar9 = IsInGameThread();
          if (bVar9) {
            pUVar17 = GetTransientPackageAsObject();
            pUVar18 = NewObject<UPCGParamData>(pUVar17);
          }
          else {
            if (((param_1->AsyncState).bIsRunningOnMainThread != false) &&
               (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<4331830188552749348>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                   ,0x124,"!AsyncState.bIsRunningOnMainThread"), bVar9)) {
              pcVar7 = (code *)swi(3);
              uVar10 = (*pcVar7)();
              return (bool)uVar10;
            }
            FGCScopeGuard::FGCScopeGuard(local_res18);
            pUVar17 = GetTransientPackageAsObject();
            pUVar18 = NewObject<UPCGParamData>(pUVar17);
            FGCScopeGuard::~FGCScopeGuard(local_res18);
            if ((pUVar18 == (UPCGParamData *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Object",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                   ,0x12a,L""), bVar9)) {
              pcVar7 = (code *)swi(3);
              uVar10 = (*pcVar7)();
              return (bool)uVar10;
            }
            local_c8 = pUVar18;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar18 != (UPCGParamData *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar18);
            }
            TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
            Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_d0,(bool *)&local_c8);
          }
          TVar15 = local_100;
          local_e8[0] = 0;
          local_80 = PCGMetadataDomainID::Default;
          local_88 = (FName)local_100.DebugPtr[1]._padding_;
          this_01 = UPCGMetadata::FindOrCreateMetadataDomain
                              ((UPCGMetadata *)pUVar18->_padding_,&local_80);
          if ((this_01 == (FPCGMetadataDomain *)0x0) ||
             (this_02 = (UPCGParamData *)
                        FPCGMetadataDomain::CreateAttribute<int>
                                  (this_01,local_88,local_e8,true,false),
             this_02 == (UPCGParamData *)0x0)) {
            local_c0 = (FName)TVar15.DebugPtr[1]._padding_;
            pFVar20 = FText::FromName(&local_48,&local_c0);
            PCG::Private::GetTypeName(&local_b8,2);
            FText::FromString(&local_68,&local_b8);
            if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b8.Data.AllocatorInstance.Data);
            }
            local_a8.TextData.Reference = (pFVar20->TextData).Reference;
            if (local_a8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_a8.TextData.Reference + 8))
                        (local_a8.TextData.Reference,
                         (undefined1 *)((longlong)&local_d0.field0_0x0 + 4));
            }
            local_a8.Flags = pFVar20->Flags;
            local_98.TextFormatData.Object =
                 PCGLog::Metadata::Format::CreateAttributeFailure.TextFormatData.Object;
            local_98.TextFormatData.SharedReferenceCount.ReferenceController =
                 PCGLog::Metadata::Format::CreateAttributeFailure.TextFormatData.
                 SharedReferenceCount.ReferenceController;
            if (PCGLog::Metadata::Format::CreateAttributeFailure.TextFormatData.SharedReferenceCount
                .ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (PCGLog::Metadata::Format::CreateAttributeFailure.TextFormatData.SharedReferenceCount.
              ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(PCGLog::Metadata::Format::CreateAttributeFailure.TextFormatData.
                          SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
              UNLOCK();
            }
            pFVar20 = FText::Format<FText,FText>(&local_58,&local_98,&local_a8,&local_68);
            PCGLog::LogErrorOnGraph(pFVar20,param_1);
            if (local_58.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
            }
            if (local_48.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
            }
            goto LAB_149c13fc9;
          }
        }
        if ((this_02 == (UPCGParamData *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("OutputParamData && NewAttribute",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGNumberOfElements.cpp"
                               ,0x41,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
        local_108[0] = PCGHelpers::GetNumberOfElements(pUVar5);
        lVar19 = UPCGMetadata::AddEntry((UPCGMetadata *)pUVar18->_padding_,-1);
        if ((lVar19 == -1) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("ItemKey != PCGInvalidEntryKey",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                               ,0x24b,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
        AcquireSRWLockExclusive((PSRWLOCK)&(this_02->NameMap).field_0x38);
        puVar3 = &(this_02->NameMap).field_0x40;
        if (((*(int **)puVar3 <= local_108) &&
            (local_108 < *(int **)puVar3 + *(int *)&(this_02->NameMap).field_0x4c)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
        iVar12 = *(int *)&(this_02->NameMap).field_0x48;
        puVar1 = &(this_02->NameMap).field_0x4c;
        if (iVar12 == *(int *)puVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)puVar3,(int *)puVar1);
        }
        *(int *)&(this_02->NameMap).field_0x48 = iVar12 + 1;
        *(int *)(*(longlong *)puVar3 + (longlong)iVar12 * 4) = local_108[0];
        iVar4 = this_02->_padding_;
        ReleaseSRWLockExclusive((PSRWLOCK)&(this_02->NameMap).field_0x38);
        FPCGMetadataAttributeBase::SetValueFromValueKey
                  ((FPCGMetadataAttributeBase *)this_02,lVar19,iVar4 + iVar12,false);
      }
      local_d8 = local_d8 + 0x78;
      local_res20 = local_res20 + 1;
      pUVar21 = (UPCGParamData *)(ulonglong)local_res20;
    } while ((int)local_res20 < local_f8.ArrayNum);
    if (pUVar18 != (UPCGParamData *)0x0) {
      iVar12 = (param_1->OutputData).TaggedData.ArrayNum;
      piVar2 = &(param_1->OutputData).TaggedData.ArrayMax;
      if (iVar12 == *piVar2) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x878,(ForAnyElementType *)&param_1->OutputData,piVar2);
      }
      pFVar6 = (param_1->OutputData).TaggedData.AllocatorInstance.Data;
      (param_1->OutputData).TaggedData.ArrayNum = iVar12 + 1;
      this_03 = (FPCGDataPtrWrapper *)(pFVar6 + (longlong)iVar12 * 0x78);
      this_03[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      this_03[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      this_03[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      this_03[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      this_03[6].WeakData.WeakPtr.ObjectIndex = 0x100;
      (this_03->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
      (this_03->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
      this_03[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      this_03[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      this_03[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      this_03[3].WeakData.WeakPtr.ObjectIndex = 0;
      this_03[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
      *(undefined4 *)&this_03[4].Data.field0_0x0 = 0xffffffff;
      *(undefined4 *)((longlong)&this_03[4].Data.field0_0x0 + 4) = 0;
      this_03[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      this_03[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      *(undefined8 *)&this_03[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
      *(undefined4 *)((longlong)&this_03[7].Data.field0_0x0 + 4) = 0xffffffff;
      FPCGDataPtrWrapper::operator=(this_03,(UPCGData *)pUVar18);
      this_03[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
           (FObjectPtr_u_0)PCGPinConstants::DefaultOutputLabel;
    }
  }
LAB_149c13fc9:
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
  if ((FPCGTaggedData *)local_f8.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// SupportsBasePointDataInputs @ 149c357c0

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
FPCGNumberOfElementsElement::SupportsBasePointDataInputs
          (FPCGNumberOfElementsElement *this,FPCGContext *param_1)

{
  return true;
}

