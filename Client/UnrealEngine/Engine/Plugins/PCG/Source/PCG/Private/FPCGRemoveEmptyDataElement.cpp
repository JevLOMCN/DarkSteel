// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// ExecuteInternal @ 149c190c0

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
FPCGRemoveEmptyDataElement::ExecuteInternal(FPCGRemoveEmptyDataElement *this,FPCGContext *param_1)

{
  int *piVar1;
  int iVar2;
  UPCGNode *this_00;
  FPCGTaggedData *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  UClass *pUVar8;
  UPCGSettings *pUVar9;
  TObjectPtr<UPCGSettings>_u_0 TVar10;
  FPCGTaggedData *pFVar11;
  FPCGTaggedData *pFVar12;
  <lambda_1> <Var13;
  undefined1 local_res18 [8];
  TObjectPtr<UPCGSettings>_u_0 local_res20;
  undefined1 local_98 [24];
  int local_80;
  FPCGAttributePropertySelector local_78;
  
  <Var13 = (<lambda_1>)(-1 < CpuChannel->Enabled);
  if ((bool)<Var13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId51,"FPCGRemoveEmptyDataElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGRemoveEmptyData.cpp"
               ,0x33);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId51);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGRemoveEmptyData.cpp"
                         ,0x35,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar9 = UPCGNode::GetSettings(this_00), pUVar9 == (UPCGSettings *)0x0)) {
      pFVar11 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGRemoveEmptyDataSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,<Var13);
      if (pFVar11 != (FPCGTaggedData *)0x0) {
        local_res20.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar11->Data).Data.field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_res20.DebugPtr != (UPCGSettings *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_res20.DebugPtr);
        }
        if (local_res20.DebugPtr != (UPCGSettings *)0x0) {
          pUVar8 = UPCGRemoveEmptyDataSettings::StaticClass();
          bVar5 = FObjectPtr::IsA(&local_res20.ObjectPtr,pUVar8);
          TVar10 = local_res20;
          if (bVar5) goto LAB_149c19259;
        }
      }
    }
    else {
      pUVar9 = UPCGNode::GetSettings(this_00);
      TVar10.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar9);
      if (TVar10.DebugPtr != (UPCGSettings *)0x0) {
        pUVar8 = UPCGRemoveEmptyDataSettings::StaticClass();
        iVar2 = (int)pUVar8->_padding_;
        if ((iVar2 <= *(int *)((TVar10.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar10.DebugPtr)->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar8->_padding_)) goto LAB_149c19259;
      }
    }
    TVar10.DebugPtr = (UPCGSettings *)0x0;
  }
  else {
    pUVar8 = UPCGRemoveEmptyDataSettings::StaticClass();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar8);
    TVar10.DebugPtr = (UPCGSettings *)0x0;
    if (bVar5) {
      TVar10.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
  }
LAB_149c19259:
  if ((TVar10.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGRemoveEmptyData.cpp"
                         ,0x38,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,
             (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(local_98 + 0x10),
             &PCGPinConstants::DefaultInputLabel);
  iVar2 = local_80;
  pFVar12 = (FPCGTaggedData *)(local_98._16_8_ + (longlong)local_80 * 0x78);
  pFVar11 = (FPCGTaggedData *)local_98._16_8_;
  while( true ) {
    if (local_80 != iVar2) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar11 == pFVar12) break;
    if ((pFVar11->Data).Data.field0_0x0.DebugPtr != (UPCGData *)0x0) {
      local_98._8_8_ = 0;
      local_78._padding_ = (longlong)&___7FPCGAttributePropertySelector__6B_;
      local_78.Selection = Attribute;
      local_78.DomainName.ComparisonIndex.Value = 0;
      local_78._16_8_ = (FPCGCrc)0x0;
      local_78._24_8_ = (UPCGMetadata *)0x0;
      local_78.PropertyName.Number = 0;
      local_78.ExtraNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.ExtraNames.ArrayNum = 0;
      local_78.ExtraNames.ArrayMax = 0;
      local_78.ExtraProperty = Index;
      FPCGAttributePropertySelector::SetDomainName(&local_78,(FName)0x0,true);
      FPCGAttributePropertySelector::SetExtraProperty(&local_78,Index,true);
      DestructItems<FString,int>
                ((FString *)local_78.ExtraNames.AllocatorInstance.Data,local_78.ExtraNames.ArrayNum)
      ;
      iVar7 = local_78.ExtraNames.ArrayMax;
      local_78.ExtraNames._8_8_ = (ulonglong)(uint)local_78.ExtraNames.ArrayMax << 0x20;
      if (iVar7 == 0) {
        local_78.ExtraNames.ArrayNum = 0;
        local_78.ExtraNames.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,iVar7,&local_78.ExtraNames.AllocatorInstance,0,
                   &local_78.ExtraNames.ArrayMax);
        ConstructItems<FString,FString,int>
                  (local_78.ExtraNames.AllocatorInstance.Data,(FString *)0x0,0);
      }
      PCGAttributeAccessorHelpers::CreateConstKeys
                ((UPCGData *)local_98,
                 (FPCGAttributePropertySelector *)(pFVar11->Data).Data.field0_0x0.DebugPtr);
      DestructItems<FString,int>
                ((FString *)local_78.ExtraNames.AllocatorInstance.Data,local_78.ExtraNames.ArrayNum)
      ;
      if (local_78.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.ExtraNames.AllocatorInstance.Data);
      }
      if ((longlong *)local_98._0_8_ != (longlong *)0x0) {
        iVar7 = (**(code **)(*(longlong *)local_98._0_8_ + 0x10))();
        if (iVar7 != 0) {
          pFVar3 = (FPCGTaggedData *)(param_1->OutputData).TaggedData.AllocatorInstance.Data;
          if (((pFVar3 <= pFVar11) && (pFVar11 < pFVar3 + (param_1->OutputData).TaggedData.ArrayMax)
              ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          iVar7 = (param_1->OutputData).TaggedData.ArrayNum;
          piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
          if (iVar7 == *piVar1) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
          }
          (param_1->OutputData).TaggedData.ArrayNum = iVar7 + 1;
          FPCGTaggedData::FPCGTaggedData
                    ((FPCGTaggedData *)
                     ((param_1->OutputData).TaggedData.AllocatorInstance.Data +
                     (longlong)iVar7 * 0x78),pFVar11);
        }
        if ((longlong *)local_98._0_8_ != (longlong *)0x0) {
          (*(code *)**(undefined8 **)local_98._0_8_)(local_98._0_8_,1);
        }
      }
    }
    pFVar11 = pFVar11 + 1;
  }
  DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_98._16_8_,local_80);
  if ((FPCGTaggedData *)local_98._16_8_ != (FPCGTaggedData *)0x0) {
    FMemory::Free((void *)local_98._16_8_);
  }
  if ((bool)<Var13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

