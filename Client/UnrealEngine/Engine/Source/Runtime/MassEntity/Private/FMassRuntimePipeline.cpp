// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 30

// StaticStruct @ 1471b64b0

UScriptStruct * __cdecl FMassRuntimePipeline::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMassRuntimePipeline.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_MassEntity();
    Z_Registration_Info_UScriptStruct_FMassRuntimePipeline.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMassRuntimePipeline,(UObject *)pUVar1,
                         L"MassRuntimePipeline");
  }
  return Z_Registration_Info_UScriptStruct_FMassRuntimePipeline.OuterSingleton;
}

// FMassRuntimePipeline @ 1471db530

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

FMassRuntimePipeline * __thiscall
FMassRuntimePipeline::FMassRuntimePipeline
          (FMassRuntimePipeline *this,TArrayView<TObjectPtr<UMassProcessor>_const_,int> *param_1,
          EProcessorExecutionFlags param_2)

{
  int *piVar1;
  int iVar2;
  TObjectPtr<UMassProcessor> *pTVar3;
  
  iVar2 = param_1->ArrayNum;
  pTVar3 = param_1->DataPtr;
  (this->Processors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Processors).ArrayMax;
  (this->Processors).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
    ConstructItems<TObjectPtr<UMassProcessor>,TObjectPtr<UMassProcessor>,int>
              ((this->Processors).AllocatorInstance.Data,pTVar3,iVar2);
  }
  this->ExecutionFlags = param_2;
  return this;
}

// FMassRuntimePipeline @ 1471db5c0

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

FMassRuntimePipeline * __thiscall
FMassRuntimePipeline::FMassRuntimePipeline
          (FMassRuntimePipeline *this,TArrayView<UMassProcessor_*_const,int> *param_1,
          EProcessorExecutionFlags param_2)

{
  int *piVar1;
  int iVar2;
  UMassProcessor **ppUVar3;
  
  iVar2 = param_1->ArrayNum;
  ppUVar3 = param_1->DataPtr;
  piVar1 = &(this->Processors).ArrayMax;
  *piVar1 = 0;
  (this->Processors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ExecutionFlags = param_2;
  (this->Processors).ArrayNum = iVar2;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
    ConstructItems<TObjectPtr<UMassProcessor>,UMassProcessor_*,int>
              ((this->Processors).AllocatorInstance.Data,ppUVar3,iVar2);
  }
  return this;
}

// AppendOrOverrideRuntimeProcessorCopies @ 1471f2a50

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */
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
FMassRuntimePipeline::AppendOrOverrideRuntimeProcessorCopies
          (FMassRuntimePipeline *this,TArrayView<UMassProcessor_const_*_const,int> *param_1,
          UObject *param_2)

{
  int *piVar1;
  UMassProcessor **ppUVar2;
  UMassProcessor *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  ENetMode EVar7;
  int iVar8;
  UWorld *this_00;
  UMassProcessor *pUVar9;
  FScriptContainerElement *pFVar10;
  EProcessorExecutionFlags EVar11;
  UMassProcessor **ppUVar12;
  FName local_res8;
  UMassProcessor *local_48;
  UMassProcessor *local_40;
  FString local_38;
  
  this_00 = (UWorld *)(**(code **)(*(longlong *)param_2 + 0x180))(param_2);
  EVar11 = this->ExecutionFlags;
  if (EVar11 == None) {
    if (this_00 == (UWorld *)0x0) {
      EVar11 = All;
    }
    else {
      EVar7 = UWorld::InternalGetNetMode(this_00);
      if (EVar7 == NM_Standalone) {
        EVar11 = Standalone;
      }
      else if (EVar7 == NM_DedicatedServer) {
        EVar11 = Server;
      }
      else if (EVar7 == NM_ListenServer) {
        EVar11 = Client|Server;
      }
      else if (EVar7 == NM_Client) {
        EVar11 = Client;
      }
      else {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityUtils.cpp"
                           ,0x24,
                           L"Unsupported ENetMode type (%i) found while determining MASS processor execution flags."
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        EVar11 = None;
      }
    }
  }
  ppUVar12 = param_1->DataPtr;
  ppUVar2 = ppUVar12 + param_1->ArrayNum;
  do {
    if (ppUVar12 == ppUVar2) {
      return;
    }
    pUVar3 = *ppUVar12;
    if ((pUVar3 == (UMassProcessor *)0x0) || ((pUVar3->ExecutionFlags & EVar11) == None)) {
      if ((FVisualLogger::bIsRecording != 0) &&
         ((pUVar3 != (UMassProcessor *)0x0 && (FVisualLogger::bIsRecording != 0)))) {
        local_res8 = (FName)pUVar3->_padding_;
        ::FName::ToString(&local_res8,&local_38);
        FVisualLogger::CategorizedLogfImpl
                  (param_2,(FName *)&LogMass.field_0x4,Log,L"Skipping %s due to ExecutionFlags");
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      pUVar9 = NewObject<UMassProcessor>
                         (param_2,(UClass *)pUVar3->_padding_,(FName)0x0,RF_NoFlags,
                          (UObject *)pUVar3,false,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      if ((pUVar9 == (UMassProcessor *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ProcCopy",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessingTypes.cpp"
                             ,0xae,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (pUVar9->bAllowMultipleInstances == '\0') {
        pFVar10 = (this->Processors).AllocatorInstance.Data;
        pFVar4 = pFVar10 + (longlong)(this->Processors).ArrayNum * 8;
        for (; pFVar10 != pFVar4; pFVar10 = pFVar10 + 8) {
          if ((*(longlong *)pFVar10 != 0) &&
             (*(longlong *)(*(longlong *)pFVar10 + 0x10) == pUVar3->_padding_)) {
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar9);
            }
            *(UMassProcessor **)pFVar10 = pUVar9;
            goto LAB_1471f2def;
          }
        }
        local_40 = pUVar9;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar9);
        }
        pFVar4 = (this->Processors).AllocatorInstance.Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_40) &&
            ((FScriptContainerElement *)&local_40 <
             pFVar4 + (longlong)(this->Processors).ArrayMax * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (this->Processors).ArrayNum;
        piVar1 = &(this->Processors).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)this,piVar1);
        }
        (this->Processors).ArrayNum = iVar8 + 1;
        *(UMassProcessor **)((this->Processors).AllocatorInstance.Data + (longlong)iVar8 * 8) =
             local_40;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_40 != (UMassProcessor *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_40);
        }
      }
      else {
        local_48 = pUVar9;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar9);
        }
        pFVar4 = (this->Processors).AllocatorInstance.Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_48) &&
            ((FScriptContainerElement *)&local_48 <
             pFVar4 + (longlong)(this->Processors).ArrayMax * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (this->Processors).ArrayNum;
        piVar1 = &(this->Processors).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)this,piVar1);
        }
        (this->Processors).ArrayNum = iVar8 + 1;
        *(UMassProcessor **)((this->Processors).AllocatorInstance.Data + (longlong)iVar8 * 8) =
             local_48;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_48 != (UMassProcessor *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_48);
        }
      }
    }
LAB_1471f2def:
    ppUVar12 = ppUVar12 + 1;
  } while( true );
}

// AppendProcessor @ 1471f2e30

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall
FMassRuntimePipeline::AppendProcessor(FMassRuntimePipeline *this,UMassProcessor *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UMassProcessor *local_18 [2];
  
  local_18[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMassProcessor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar2 = (this->Processors).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Processors).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->Processors).ArrayNum;
  piVar1 = &(this->Processors).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,piVar1);
  }
  (this->Processors).ArrayNum = iVar5 + 1;
  *(UMassProcessor **)((this->Processors).AllocatorInstance.Data + (longlong)iVar5 * 8) =
       local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18[0] != (UMassProcessor *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
  return;
}

// AppendProcessor @ 1471f2f20

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall
FMassRuntimePipeline::AppendProcessor
          (FMassRuntimePipeline *this,TSubclassOf<UMassProcessor> param_1,UObject *param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UMassProcessor *pUVar7;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if ((lVar2 != 0) && (pUVar5 = UMassProcessor::StaticClass(), pUVar5 != (UClass *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (*(longlong *)param_1.Class.field0_0x0 != 0)) goto LAB_1471f2f9d;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("ProcessorClass",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessingTypes.cpp"
                     ,0xec,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_1471f2f9d:
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  pUVar5 = (UClass *)0x0;
  if ((lVar2 != 0) && (pUVar6 = UMassProcessor::StaticClass(), pUVar6 != (UClass *)0x0)) {
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pUVar5 = *(UClass **)param_1.Class.field0_0x0;
    }
  }
  pUVar7 = NewObject<UMassProcessor>
                     (param_2,pUVar5,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                      (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  AppendProcessor(this,pUVar7);
  return;
}

// AppendProcessors @ 1471f3030

void __thiscall
FMassRuntimePipeline::AppendProcessors
          (FMassRuntimePipeline *this,
          TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  piVar1 = &(this->Processors).ArrayNum;
  if ((this->Processors).ArrayNum == 0) {
    if (this != (FMassRuntimePipeline *)param_1) {
      pFVar3 = (this->Processors).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (this->Processors).AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
      (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      *piVar1 = param_1->ArrayNum;
      (this->Processors).ArrayMax = param_1->ArrayMax;
      param_1->ArrayNum = 0;
      param_1->ArrayMax = 0;
      return;
    }
  }
  else {
    if ((this == (FMassRuntimePipeline *)param_1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x986,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar2 = param_1->ArrayNum;
    if (iVar2 != 0) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar2,(ForAnyElementType *)this,piVar1,&(this->Processors).ArrayMax);
      memmove((this->Processors).AllocatorInstance.Data + (longlong)iVar6 * 8,
              (param_1->AllocatorInstance).Data,(longlong)iVar2 << 3);
      param_1->ArrayNum = 0;
    }
  }
  return;
}

// AppendProcessors @ 1471f3120

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall
FMassRuntimePipeline::AppendProcessors
          (FMassRuntimePipeline *this,TArrayView<TObjectPtr<UMassProcessor>,int> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9a9,L"Invalid range size: %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (iVar1 == 0) {
    return;
  }
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar1,(ForAnyElementType *)this,&(this->Processors).ArrayNum,
                     &(this->Processors).ArrayMax);
  ConstructItems<TObjectPtr<UMassProcessor>,TObjectPtr<UMassProcessor>,int>
            ((this->Processors).AllocatorInstance.Data + (longlong)iVar4 * 8,param_1->DataPtr,iVar1)
  ;
  return;
}

// AppendUniqueProcessor @ 1471f31c0

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

bool __thiscall
FMassRuntimePipeline::AppendUniqueProcessor(FMassRuntimePipeline *this,UMassProcessor *param_1)

{
  int iVar1;
  TObjectPtr<UMassProcessor>_u_0 local_res8;
  
  iVar1 = (this->Processors).ArrayNum;
  local_res8.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMassProcessor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<TObjectPtr<UMassProcessor>_>
            (&this->Processors,(TObjectPtr<UMassProcessor> *)&local_res8.ObjectPtr);
  return iVar1 != (this->Processors).ArrayNum;
}

// AppendUniqueRuntimeProcessorCopies @ 1471f3210

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassRuntimePipeline::AppendUniqueRuntimeProcessorCopies
          (FMassRuntimePipeline *this,TArrayView<UMassProcessor_const_*_const,int> *param_1,
          UObject *param_2)

{
  code *pcVar1;
  bool bVar2;
  UWorld *this_00;
  UMassEntitySubsystem *pUVar3;
  TSharedRef<FMassEntityManager,1> *pTVar4;
  FMassEntityManager *pFVar5;
  undefined1 local_res18 [8];
  TArrayView<UMassProcessor_const_*_const,int> local_28;
  TSharedRef<FMassEntityManager,1> local_18;
  
  if (param_2 == (UObject *)0x0) {
    pFVar5 = (FMassEntityManager *)0x0;
  }
  else {
    this_00 = (UWorld *)(**(code **)(*(longlong *)param_2 + 0x180))(param_2);
    if ((this_00 == (UWorld *)0x0) ||
       (pUVar3 = UWorld::GetSubsystem<UMassEntitySubsystem>(this_00),
       pUVar3 == (UMassEntitySubsystem *)0x0)) {
      pFVar5 = (FMassEntityManager *)0x0;
    }
    else {
      if (((pUVar3->EntityManager).Object == (FMassEntityManager *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("EntityManager",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntitySubsystem.h"
                             ,0x24,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar5 = (pUVar3->EntityManager).Object;
    }
    if (pFVar5 != (FMassEntityManager *)0x0) goto LAB_1471f329f;
  }
  bVar2 = `FMassRuntimePipeline::AppendUniqueRuntimeProcessorCopies'::__l3::<lambda_1>::operator()
                    (local_res18);
  if (!bVar2) {
    return;
  }
LAB_1471f329f:
  pTVar4 = TSharedFromThis<FMassEntityManager,1>::AsShared
                     ((TSharedFromThis<FMassEntityManager,1> *)&pFVar5->_padding_,&local_18);
  local_28.DataPtr = param_1->DataPtr;
  local_28.ArrayNum = param_1->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  AppendUniqueRuntimeProcessorCopies(this,&local_28,param_2,pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// AppendUniqueRuntimeProcessorCopies @ 1471f32f0

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
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
FMassRuntimePipeline::AppendUniqueRuntimeProcessorCopies
          (FMassRuntimePipeline *this,TArrayView<UMassProcessor_const_*_const,int> *param_1,
          UObject *param_2,TSharedRef<FMassEntityManager,1> *param_3)

{
  int *piVar1;
  FPlatformRWLock *SRWLock;
  UMassProcessor **ppUVar2;
  int iVar3;
  UMassProcessor *pUVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  ENetMode EVar8;
  int iVar9;
  uint uVar10;
  UWorld *this_00;
  UClass *pUVar11;
  FScriptContainerElement *pFVar12;
  FVisualLogger *this_01;
  UObject *pUVar13;
  ForAnyElementType FVar14;
  UMassProcessor **ppUVar15;
  uint uVar16;
  ulonglong uVar17;
  EProcessorExecutionFlags EVar18;
  longlong lVar19;
  FName local_res10;
  FName local_res18;
  TSharedRef<FMassEntityManager,1> *local_res20;
  UMassProcessor *local_a8;
  FName local_a0;
  FName local_98;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  local_res20 = param_3;
  this_00 = (UWorld *)(**(code **)(*(longlong *)param_2 + 0x180))(param_2);
  EVar18 = this->ExecutionFlags;
  if (EVar18 == None) {
    if (this_00 == (UWorld *)0x0) {
      EVar18 = All;
    }
    else {
      EVar8 = UWorld::InternalGetNetMode(this_00);
      if (EVar8 == NM_Standalone) {
        EVar18 = Standalone;
      }
      else if (EVar8 == NM_DedicatedServer) {
        EVar18 = Server;
      }
      else if (EVar8 == NM_ListenServer) {
        EVar18 = Client|Server;
      }
      else if (EVar8 == NM_Client) {
        EVar18 = Client;
      }
      else {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityUtils.cpp"
                           ,0x24,
                           L"Unsupported ENetMode type (%i) found while determining MASS processor execution flags."
                          );
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        EVar18 = None;
      }
    }
  }
  ppUVar15 = param_1->DataPtr;
  iVar3 = (this->Processors).ArrayNum;
  uVar17 = (ulonglong)iVar3;
  ppUVar2 = ppUVar15 + param_1->ArrayNum;
  do {
    if (ppUVar15 == ppUVar2) {
      iVar9 = (this->Processors).ArrayNum;
      if (iVar3 < iVar9) {
        lVar19 = uVar17 * 8;
        do {
          uVar16 = (uint)uVar17;
          uVar10 = 0;
          if ((int)uVar16 < iVar9) {
            uVar10 = ~uVar16 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pUVar4 = *(UMassProcessor **)((this->Processors).AllocatorInstance.Data + lVar19);
          if ((pUVar4 == (UMassProcessor *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Proc",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessingTypes.cpp"
                                 ,0x99,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (pUVar4->bInitialized == '\0') {
            this_01 = FVisualLogger::Get();
            SRWLock = &this_01->RedirectRWLock;
            if ((SRWLock == (FPlatformRWLock *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Mutex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                                   ,0x43,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
            pUVar13 = FVisualLogger::RedirectInternal(this_01,(UObject *)pUVar4,param_2);
            if (SRWLock != (FPlatformRWLock *)0x0) {
              ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
            }
            if (((FVisualLogger::bIsRecording != 0) && (pUVar13 != (UObject *)0x0)) &&
               (FVisualLogger::bIsRecording != 0)) {
              local_a0.ComparisonIndex.Value = *(uint *)&pUVar13->field_0x18;
              local_a0.Number = *(uint *)&pUVar13->field_0x1c;
              ::FName::ToString(&local_a0,local_60);
              local_98 = (FName)pUVar4->_padding_;
              ::FName::ToString(&local_98,&local_70);
              FVisualLogger::CategorizedLogfImpl
                        ((UObject *)pUVar4,(FName *)&LogVisual.field_0x4,Log,
                         L"Redirected \'%s\' to \'%s\'");
              if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_70.Data.AllocatorInstance.Data);
              }
              if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
              }
            }
            UMassProcessor::CallInitialize(pUVar4,(TNotNull<UObject_*>)param_2,local_res20);
          }
          iVar9 = (this->Processors).ArrayNum;
          uVar17 = (ulonglong)(uVar16 + 1);
          lVar19 = lVar19 + 8;
        } while ((int)(uVar16 + 1) < iVar9);
      }
      return;
    }
    pUVar4 = *ppUVar15;
    if (pUVar4 != (UMassProcessor *)0x0) {
      if ((pUVar4->ExecutionFlags & EVar18) == None) {
LAB_1471f3557:
        if (FVisualLogger::bIsRecording != 0) {
          local_res10 = (FName)pUVar4->_padding_;
          ::FName::ToString(&local_res10,&local_90);
          FVisualLogger::CategorizedLogfImpl
                    (param_2,(FName *)&LogMass.field_0x4,Log,L"Skipping %s due to ExecutionFlags");
          FVar14.Data = local_90.Data.AllocatorInstance.Data;
LAB_1471f3609:
          if (FVar14.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar14.Data);
          }
        }
      }
      else {
        pUVar13 = (UObject *)pUVar4->_padding_;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar13 != (UObject *)0x0) goto LAB_1471f33f7;
LAB_1471f3425:
          pUVar13 = (UObject *)0x0;
        }
        else {
          if (pUVar13 == (UObject *)0x0) goto LAB_1471f3425;
          UE::GC::MarkAsReachable(pUVar13);
LAB_1471f33f7:
          pUVar11 = UMassProcessor::StaticClass();
          if (pUVar11 == (UClass *)0x0) goto LAB_1471f3425;
          iVar9 = (int)pUVar11->_padding_;
          if ((*(int *)&pUVar13[1].field_0x10 < iVar9) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar13[1].field_0x8 + (longlong)iVar9 * 8)
              != &pUVar11->_padding_)) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          if (!bVar7) goto LAB_1471f3425;
        }
        pFVar12 = (this->Processors).AllocatorInstance.Data;
        pFVar5 = pFVar12 + (longlong)(this->Processors).ArrayNum * 8;
        for (; pFVar12 != pFVar5; pFVar12 = pFVar12 + 8) {
          if ((*(longlong *)pFVar12 != 0) && (*(UObject **)(*(longlong *)pFVar12 + 0x10) == pUVar13)
             ) {
            if ((pUVar4->ExecutionFlags & EVar18) == None) goto LAB_1471f3557;
            if ((pUVar4->bAllowMultipleInstances != '\0') || (FVisualLogger::bIsRecording == 0))
            goto LAB_1471f3617;
            local_res18 = (FName)pUVar4->_padding_;
            ::FName::ToString(&local_res18,&local_80);
            FVisualLogger::CategorizedLogfImpl
                      (param_2,(FName *)&LogMass.field_0x4,Log,
                       L"Skipping %s due to it being a duplicate");
            FVar14.Data = local_80.Data.AllocatorInstance.Data;
            goto LAB_1471f3609;
          }
        }
        local_a8 = NewObject<UMassProcessor>
                             (param_2,(UClass *)pUVar4->_padding_,(FName)0x0,RF_NoFlags,
                              (UObject *)pUVar4,false,(FObjectInstancingGraph *)0x0,(UPackage *)0x0)
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_a8 != (UMassProcessor *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_a8);
        }
        pFVar5 = (this->Processors).AllocatorInstance.Data;
        if (((pFVar5 <= (FScriptContainerElement *)&local_a8) &&
            ((FScriptContainerElement *)&local_a8 <
             pFVar5 + (longlong)(this->Processors).ArrayMax * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar9 = (this->Processors).ArrayNum;
        piVar1 = &(this->Processors).ArrayMax;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)this,piVar1);
        }
        (this->Processors).ArrayNum = iVar9 + 1;
        *(UMassProcessor **)((this->Processors).AllocatorInstance.Data + (longlong)iVar9 * 8) =
             local_a8;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_a8 != (UMassProcessor *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_a8);
        }
      }
    }
LAB_1471f3617:
    ppUVar15 = ppUVar15 + 1;
  } while( true );
}

// CreateFromArray @ 14720b220

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall
FMassRuntimePipeline::CreateFromArray
          (FMassRuntimePipeline *this,TArrayView<UMassProcessor_const_*_const,int> *param_1,
          UObject *param_2)

{
  TArrayView<UMassProcessor_const_*_const,int> local_18;
  
  (this->Processors).ArrayNum = 0;
  if ((this->Processors).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,&(this->Processors).ArrayMax);
  }
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  AppendOrOverrideRuntimeProcessorCopies(this,&local_18,param_2);
  return;
}

// FindTopLevelGroupByName @ 14721ac80

UMassCompositeProcessor * __thiscall
FMassRuntimePipeline::FindTopLevelGroupByName(FMassRuntimePipeline *this,FName param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  UMassCompositeProcessor *pUVar4;
  UClass *pUVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  pFVar6 = (this->Processors).AllocatorInstance.Data;
  iVar2 = (this->Processors).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Processors).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMassProcessor>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    pUVar4 = *(UMassCompositeProcessor **)pFVar6;
    if (pUVar4 != (UMassCompositeProcessor *)0x0) {
      pUVar5 = UMassCompositeProcessor::StaticClass();
      iVar3 = (int)pUVar5->_padding_;
      if (((iVar3 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
           &pUVar5->_padding_)) && (pUVar4->GroupName == param_1)) {
        return pUVar4;
      }
    }
    pFVar6 = pFVar6 + 8;
  }
  return (UMassCompositeProcessor *)0x0;
}

// HasProcessorOfExactClass @ 14722ada0

bool __thiscall
FMassRuntimePipeline::HasProcessorOfExactClass
          (FMassRuntimePipeline *this,TSubclassOf<UMassProcessor> param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  UClass *pUVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if ((lVar6 != 0) && (pUVar4 = UMassProcessor::StaticClass(), pUVar4 != (UClass *)0x0)) {
    iVar2 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar6 = *(longlong *)param_1.Class.field0_0x0;
      goto LAB_14722adf2;
    }
  }
  lVar6 = 0;
LAB_14722adf2:
  pFVar5 = (this->Processors).AllocatorInstance.Data;
  pFVar1 = pFVar5 + (longlong)(this->Processors).ArrayNum * 8;
  for (; pFVar5 != pFVar1; pFVar5 = pFVar5 + 8) {
    if ((*(longlong *)pFVar5 != 0) && (*(longlong *)(*(longlong *)pFVar5 + 0x10) == lVar6))
    goto LAB_14722ae1b;
  }
  pFVar5 = (FScriptContainerElement *)0x0;
LAB_14722ae1b:
  return pFVar5 != (FScriptContainerElement *)0x0;
}

// Initialize @ 14722d7d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall FMassRuntimePipeline::Initialize(FMassRuntimePipeline *this,UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  UWorld *this_00;
  UMassEntitySubsystem *pUVar3;
  TSharedRef<FMassEntityManager,1> *pTVar4;
  FMassEntityManager *pFVar5;
  undefined1 local_res10 [8];
  TSharedRef<FMassEntityManager,1> local_18;
  
  this_00 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
  if ((this_00 == (UWorld *)0x0) ||
     (pUVar3 = UWorld::GetSubsystem<UMassEntitySubsystem>(this_00),
     pUVar3 == (UMassEntitySubsystem *)0x0)) {
    pFVar5 = (FMassEntityManager *)0x0;
  }
  else {
    if (((pUVar3->EntityManager).Object == (FMassEntityManager *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("EntityManager",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntitySubsystem.h"
                           ,0x24,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar5 = (pUVar3->EntityManager).Object;
    if (pFVar5 != (FMassEntityManager *)0x0) goto LAB_14722d84e;
  }
  bVar2 = `FMassRuntimePipeline::Initialize'::__l3::<lambda_1>::operator()(local_res10);
  if (!bVar2) {
    return;
  }
LAB_14722d84e:
  pTVar4 = TSharedFromThis<FMassEntityManager,1>::AsShared
                     ((TSharedFromThis<FMassEntityManager,1> *)&pFVar5->_padding_,&local_18);
  Initialize(this,param_1,pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// Initialize @ 14722d890

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall
FMassRuntimePipeline::Initialize
          (FMassRuntimePipeline *this,UObject *param_1,TSharedRef<FMassEntityManager,1> *param_2)

{
  FPlatformRWLock *SRWLock;
  int iVar1;
  UMassProcessor *this_00;
  code *pcVar2;
  bool bVar3;
  FVisualLogger *this_01;
  UObject *pUVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  bool bVar11;
  undefined1 local_res8 [8];
  FName local_res20;
  FName local_68;
  FScriptContainerElement *local_60;
  FString local_58;
  FString local_48;
  
  pFVar9 = (this->Processors).AllocatorInstance.Data;
  iVar1 = (this->Processors).ArrayNum;
  bVar11 = false;
  local_60 = pFVar9 + (longlong)iVar1 * 8;
  pFVar5 = local_60;
LAB_14722d8d0:
  do {
    if ((this->Processors).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UMassProcessor>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar9 == pFVar5) {
      if ((bVar11) && (iVar1 = (this->Processors).ArrayNum, iVar1 != 0)) {
        pFVar9 = (this->Processors).AllocatorInstance.Data;
        iVar10 = 0;
        bVar11 = *(longlong *)pFVar9 != 0;
        lVar6 = 0;
        iVar7 = 0;
        do {
          iVar8 = iVar7;
          do {
            lVar6 = lVar6 + 1;
            iVar8 = iVar8 + 1;
            if (iVar1 <= lVar6) break;
          } while (bVar11 == (*(longlong *)(pFVar9 + lVar6 * 8) != 0));
          if (bVar11 != false) {
            if (iVar10 != iVar7) {
              memmove(pFVar9 + (longlong)iVar10 * 8,pFVar9 + (longlong)iVar7 * 8,
                      (longlong)(iVar8 - iVar7) << 3);
            }
            iVar10 = iVar10 + (iVar8 - iVar7);
          }
          bVar11 = (bool)(bVar11 ^ 1);
          iVar7 = iVar8;
        } while (lVar6 < iVar1);
        (this->Processors).ArrayNum = iVar10;
      }
      return;
    }
    this_00 = *(UMassProcessor **)pFVar9;
    if (this_00 == (UMassProcessor *)0x0) {
      bVar11 = true;
LAB_14722da77:
      pFVar9 = pFVar9 + 8;
      goto LAB_14722d8d0;
    }
    if (this_00->bInitialized != '\0') goto LAB_14722da77;
    this_01 = FVisualLogger::Get();
    SRWLock = &this_01->RedirectRWLock;
    if ((SRWLock == (FPlatformRWLock *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x43,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    pUVar4 = FVisualLogger::RedirectInternal(this_01,(UObject *)this_00,param_1);
    if (SRWLock != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
    if (((FVisualLogger::bIsRecording != 0) && (pUVar4 != (UObject *)0x0)) &&
       (FVisualLogger::bIsRecording != 0)) {
      local_res20.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
      local_res20.Number = *(uint *)&pUVar4->field_0x1c;
      ::FName::ToString(&local_res20,&local_48);
      local_68 = (FName)this_00->_padding_;
      ::FName::ToString(&local_68,&local_58);
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this_00,(FName *)&LogVisual.field_0x4,Log,L"Redirected \'%s\' to \'%s\'"
                );
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    if (param_1 == (UObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    UMassProcessor::CallInitialize(this_00,(TNotNull<UObject_*>)param_1,param_2);
    pFVar9 = pFVar9 + 8;
    pFVar5 = local_60;
  } while( true );
}

// InitializeFromArray @ 14722f710

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassRuntimePipeline::InitializeFromArray
          (FMassRuntimePipeline *this,TArrayView<UMassProcessor_const_*_const,int> *param_1,
          UObject *param_2)

{
  code *pcVar1;
  bool bVar2;
  UWorld *this_00;
  UMassEntitySubsystem *pUVar3;
  TSharedRef<FMassEntityManager,1> *pTVar4;
  FMassEntityManager *pFVar5;
  undefined1 local_res18 [8];
  TArrayView<UMassProcessor_const_*_const,int> local_38;
  TSharedRef<FMassEntityManager,1> local_28 [2];
  
  if (param_2 == (UObject *)0x0) {
    pFVar5 = (FMassEntityManager *)0x0;
  }
  else {
    this_00 = (UWorld *)(**(code **)(*(longlong *)param_2 + 0x180))(param_2);
    if ((this_00 == (UWorld *)0x0) ||
       (pUVar3 = UWorld::GetSubsystem<UMassEntitySubsystem>(this_00),
       pUVar3 == (UMassEntitySubsystem *)0x0)) {
      pFVar5 = (FMassEntityManager *)0x0;
    }
    else {
      if (((pUVar3->EntityManager).Object == (FMassEntityManager *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("EntityManager",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntitySubsystem.h"
                             ,0x24,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar5 = (pUVar3->EntityManager).Object;
    }
    if (pFVar5 != (FMassEntityManager *)0x0) goto LAB_14722f7a2;
  }
  bVar2 = `FMassRuntimePipeline::InitializeFromArray'::__l3::<lambda_1>::operator()(local_res18);
  if (!bVar2) {
    return;
  }
LAB_14722f7a2:
  pTVar4 = TSharedFromThis<FMassEntityManager,1>::AsShared
                     ((TSharedFromThis<FMassEntityManager,1> *)&pFVar5->_padding_,local_28);
  local_38.DataPtr = param_1->DataPtr;
  local_38.ArrayNum = param_1->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  (this->Processors).ArrayNum = 0;
  if ((this->Processors).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,&(this->Processors).ArrayMax);
  }
  AppendOrOverrideRuntimeProcessorCopies(this,&local_38,param_2);
  Initialize(this,param_2,pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28[0].SharedReferenceCount.ReferenceController);
  return;
}

// InitializeFromArray @ 14722f840

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall
FMassRuntimePipeline::InitializeFromArray
          (FMassRuntimePipeline *this,TArrayView<UMassProcessor_const_*_const,int> *param_1,
          UObject *param_2,TSharedRef<FMassEntityManager,1> *param_3)

{
  UMassProcessor **ppUVar1;
  undefined8 uVar2;
  TArrayView<UMassProcessor_const_*_const,int> local_28 [2];
  
  ppUVar1 = param_1->DataPtr;
  uVar2._0_4_ = param_1->ArrayNum;
  uVar2._4_4_ = *(undefined4 *)&param_1->field_0xc;
  (this->Processors).ArrayNum = 0;
  if ((this->Processors).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,&(this->Processors).ArrayMax);
  }
  local_28[0].DataPtr = ppUVar1;
  local_28[0]._8_8_ = uVar2;
  AppendOrOverrideRuntimeProcessorCopies(this,local_28,param_2);
  Initialize(this,param_2,param_3);
  return;
}

// InitializeFromClassArray @ 14722f8d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassRuntimePipeline::InitializeFromClassArray
          (FMassRuntimePipeline *this,TArrayView<TSubclassOf<UMassProcessor>_const_,int> *param_1,
          UObject *param_2)

{
  code *pcVar1;
  bool bVar2;
  UWorld *this_00;
  UMassEntitySubsystem *pUVar3;
  TSharedRef<FMassEntityManager,1> *pTVar4;
  FMassEntityManager *pFVar5;
  undefined1 local_res18 [8];
  TArrayView<TSubclassOf<UMassProcessor>_const_,int> local_28;
  TSharedRef<FMassEntityManager,1> local_18;
  
  if (param_2 == (UObject *)0x0) {
    pFVar5 = (FMassEntityManager *)0x0;
  }
  else {
    this_00 = (UWorld *)(**(code **)(*(longlong *)param_2 + 0x180))(param_2);
    if ((this_00 == (UWorld *)0x0) ||
       (pUVar3 = UWorld::GetSubsystem<UMassEntitySubsystem>(this_00),
       pUVar3 == (UMassEntitySubsystem *)0x0)) {
      pFVar5 = (FMassEntityManager *)0x0;
    }
    else {
      if (((pUVar3->EntityManager).Object == (FMassEntityManager *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("EntityManager",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntitySubsystem.h"
                             ,0x24,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar5 = (pUVar3->EntityManager).Object;
    }
    if (pFVar5 != (FMassEntityManager *)0x0) goto LAB_14722f95f;
  }
  bVar2 = `FMassRuntimePipeline::InitializeFromClassArray'::__l3::<lambda_1>::operator()
                    (local_res18);
  if (!bVar2) {
    return;
  }
LAB_14722f95f:
  pTVar4 = TSharedFromThis<FMassEntityManager,1>::AsShared
                     ((TSharedFromThis<FMassEntityManager,1> *)&pFVar5->_padding_,&local_18);
  local_28.DataPtr = param_1->DataPtr;
  local_28.ArrayNum = param_1->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  InitializeFromClassArray(this,&local_28,param_2,pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// InitializeFromClassArray @ 14722f9b0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall
FMassRuntimePipeline::InitializeFromClassArray
          (FMassRuntimePipeline *this,TArrayView<TSubclassOf<UMassProcessor>_const_,int> *param_1,
          UObject *param_2,TSharedRef<FMassEntityManager,1> *param_3)

{
  int *piVar1;
  TSubclassOf<UMassProcessor> *pTVar2;
  UObject *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  ENetMode EVar7;
  int iVar8;
  UWorld *this_00;
  UClass *pUVar9;
  UClass *pUVar10;
  EProcessorExecutionFlags EVar11;
  TSubclassOf<UMassProcessor> *pTVar12;
  FName local_res10;
  UMassProcessor *local_58;
  FString local_50;
  
  piVar1 = &(this->Processors).ArrayMax;
  (this->Processors).ArrayNum = 0;
  if ((this->Processors).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  this_00 = (UWorld *)(**(code **)(*(longlong *)param_2 + 0x180))(param_2);
  EVar11 = this->ExecutionFlags;
  if (EVar11 == None) {
    if (this_00 == (UWorld *)0x0) {
      EVar11 = All;
    }
    else {
      EVar7 = UWorld::InternalGetNetMode(this_00);
      if (EVar7 == NM_Standalone) {
        EVar11 = Standalone;
      }
      else if (EVar7 == NM_DedicatedServer) {
        EVar11 = Server;
      }
      else if (EVar7 == NM_ListenServer) {
        EVar11 = Client|Server;
      }
      else if (EVar7 == NM_Client) {
        EVar11 = Client;
      }
      else {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityUtils.cpp"
                           ,0x24,
                           L"Unsupported ENetMode type (%i) found while determining MASS processor execution flags."
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        EVar11 = None;
      }
    }
  }
  pTVar12 = param_1->DataPtr;
  pTVar2 = pTVar12 + param_1->ArrayNum;
  do {
    if (pTVar12 == pTVar2) {
      Initialize(this,param_2,param_3);
      return;
    }
    pUVar10 = (pTVar12->Class).field0_0x0.DebugPtr;
    if ((pUVar10 != (UClass *)0x0) &&
       (pUVar9 = UMassProcessor::StaticClass(), pUVar9 != (UClass *)0x0)) {
      iVar8 = (int)pUVar9->_padding_;
      if (((int)pUVar10->_padding_ < iVar8) ||
         ((longlong *)*(undefined1 **)(pUVar10->_padding_ + (longlong)iVar8 * 8) !=
          &pUVar9->_padding_)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if ((bVar6) && (pUVar10 = (pTVar12->Class).field0_0x0.DebugPtr, pUVar10 != (UClass *)0x0)) {
        if ((pUVar10->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(pUVar10);
        }
        pUVar3 = (pUVar10->ClassDefaultObject).field0_0x0.DebugPtr;
        if (pUVar3 == (UObject *)0x0) {
LAB_14722fb1f:
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result && Result->IsA(T::StaticClass())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Templates\\SubclassOf.h"
                             ,0x93,L"");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (pUVar3 != (UObject *)0x0) goto LAB_14722fb4e;
        }
        else {
          pUVar10 = UMassProcessor::StaticClass();
          iVar8 = (int)pUVar10->_padding_;
          if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar8) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar8 * 8) !=
              &pUVar10->_padding_)) goto LAB_14722fb1f;
LAB_14722fb4e:
          if ((pUVar3[2].field_0x11 & EVar11) != None) {
            pUVar10 = (pTVar12->Class).field0_0x0.DebugPtr;
            if ((pUVar10 == (UClass *)0x0) ||
               (pUVar9 = UMassProcessor::StaticClass(), pUVar9 == (UClass *)0x0)) {
LAB_14722fba1:
              pUVar10 = (UClass *)0x0;
            }
            else {
              iVar8 = (int)pUVar9->_padding_;
              if (((int)pUVar10->_padding_ < iVar8) ||
                 ((longlong *)*(undefined1 **)(pUVar10->_padding_ + (longlong)iVar8 * 8) !=
                  &pUVar9->_padding_)) {
                bVar6 = false;
              }
              else {
                bVar6 = true;
              }
              if (!bVar6) goto LAB_14722fba1;
              pUVar10 = (pTVar12->Class).field0_0x0.DebugPtr;
            }
            local_58 = NewObject<UMassProcessor>
                                 (param_2,pUVar10,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                                  (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_58 != (UMassProcessor *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_58);
            }
            pFVar4 = (this->Processors).AllocatorInstance.Data;
            if (((pFVar4 <= (FScriptContainerElement *)&local_58) &&
                ((FScriptContainerElement *)&local_58 < pFVar4 + (longlong)*piVar1 * 8)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar8 = (this->Processors).ArrayNum;
            if (iVar8 == *piVar1) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,(ForAnyElementType *)this,piVar1);
            }
            (this->Processors).ArrayNum = iVar8 + 1;
            *(UMassProcessor **)((this->Processors).AllocatorInstance.Data + (longlong)iVar8 * 8) =
                 local_58;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_58 != (UMassProcessor *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_58);
            }
            goto LAB_14722fd05;
          }
        }
        if ((FVisualLogger::bIsRecording != 0) && (pUVar3 != (UObject *)0x0)) {
          local_res10.ComparisonIndex.Value = *(uint *)&pUVar3->field_0x18;
          local_res10.Number = *(uint *)&pUVar3->field_0x1c;
          ::FName::ToString(&local_res10,&local_50);
          FVisualLogger::CategorizedLogfImpl
                    (param_2,(FName *)&LogMass.field_0x4,Log,L"Skipping %s due to ExecutionFlags");
          if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.Data.AllocatorInstance.Data);
          }
        }
      }
    }
LAB_14722fd05:
    pTVar12 = pTVar12 + 1;
  } while( true );
}

// RemoveProcessor @ 147247870

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

bool __thiscall
FMassRuntimePipeline::RemoveProcessor(FMassRuntimePipeline *this,UMassProcessor *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  bool bVar10;
  bool bVar11;
  uint local_res10;
  
  uVar4 = 0;
  iVar7 = 0;
  iVar1 = (this->Processors).ArrayNum;
  lVar5 = (longlong)iVar1;
  if (iVar1 != 0) {
    pFVar2 = (this->Processors).AllocatorInstance.Data;
    local_res10 = 0;
    if (*(UMassProcessor **)pFVar2 == (UMassProcessor *)0x0) {
      bVar10 = param_1 == (UMassProcessor *)0x0;
    }
    else {
      bVar10 = *(UMassProcessor **)pFVar2 == param_1;
    }
    bVar10 = !bVar10;
    uVar6 = uVar4;
    uVar9 = uVar4;
    do {
      uVar8 = (uint)uVar9;
      uVar6 = uVar6 + 1;
      uVar9 = (ulonglong)(uVar8 + 1);
      if ((longlong)uVar6 < lVar5) {
        do {
          if (*(UMassProcessor **)(pFVar2 + uVar6 * 8) == (UMassProcessor *)0x0) {
            bVar11 = param_1 == (UMassProcessor *)0x0;
          }
          else {
            bVar11 = *(UMassProcessor **)(pFVar2 + uVar6 * 8) == param_1;
          }
          if (bVar10 != !bVar11) break;
          uVar9 = (ulonglong)((int)uVar9 + 1);
          uVar6 = uVar6 + 1;
        } while ((longlong)uVar6 < lVar5);
        uVar4 = (ulonglong)local_res10;
      }
      uVar3 = (uint)uVar4;
      iVar7 = (int)uVar9 - uVar8;
      if (bVar10 != false) {
        if (uVar3 != uVar8) {
          memmove(pFVar2 + (longlong)(int)uVar3 * 8,pFVar2 + (longlong)(int)uVar8 * 8,
                  (longlong)iVar7 << 3);
          uVar3 = local_res10;
        }
        local_res10 = uVar3 + iVar7;
        uVar4 = (ulonglong)local_res10;
      }
      bVar10 = (bool)(bVar10 ^ 1);
    } while ((longlong)uVar6 < lVar5);
    iVar7 = iVar1 - (int)uVar4;
    (this->Processors).ArrayNum = (int)uVar4;
  }
  return 0 < iVar7;
}

// Reset @ 147248d50

void __thiscall FMassRuntimePipeline::Reset(FMassRuntimePipeline *this)

{
  (this->Processors).ArrayNum = 0;
  if ((this->Processors).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,&(this->Processors).ArrayMax);
  }
  return;
}

// SetProcessors @ 14724cf70

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall
FMassRuntimePipeline::SetProcessors
          (FMassRuntimePipeline *this,TArray<UMassProcessor_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  
  iVar2 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (iVar2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  piVar1 = &(this->Processors).ArrayMax;
  (this->Processors).ArrayNum = 0;
  if ((this->Processors).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  (this->Processors).ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar2,*piVar1,(ForAnyElementType *)this,iVar2,piVar1);
    ConstructItems<TObjectPtr<UMassProcessor>,UMassProcessor_*,int>
              ((this->Processors).AllocatorInstance.Data,(UMassProcessor **)pFVar3,iVar2);
  }
  return;
}

// SetProcessors @ 14724d050

void __thiscall
FMassRuntimePipeline::SetProcessors
          (FMassRuntimePipeline *this,
          TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  
  piVar1 = &(this->Processors).ArrayMax;
  (this->Processors).ArrayNum = 0;
  if ((this->Processors).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  if (this != (FMassRuntimePipeline *)param_1) {
    pFVar2 = (this->Processors).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (this->Processors).AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Processors).ArrayNum = param_1->ArrayNum;
    *piVar1 = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  return;
}

// SetProcessors @ 14724d0e0

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall
FMassRuntimePipeline::SetProcessors
          (FMassRuntimePipeline *this,TArrayView<UMassProcessor_*,int> *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = &(this->Processors).ArrayMax;
  (this->Processors).ArrayNum = 0;
  if ((this->Processors).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  iVar2 = param_1->ArrayNum;
  (this->Processors).ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar2,*piVar1,(ForAnyElementType *)this,iVar2,piVar1);
    ConstructItems<TObjectPtr<UMassProcessor>,UMassProcessor_*,int>
              ((this->Processors).AllocatorInstance.Data,param_1->DataPtr,iVar2);
  }
  return;
}

// SortByExecutionPriority @ 147250160

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall FMassRuntimePipeline::SortByExecutionPriority(FMassRuntimePipeline *this)

{
  FIdentityFunctor local_res8 [32];
  
  if ((this->Processors).ArrayNum != 0) {
    TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_>::
    RemoveAllSwap<_FMassRuntimePipeline::SortByExecutionPriority_::__l2::<lambda_1>_>
              (&this->Processors,(<lambda_1> *)local_res8,Default);
    AlgoImpl::
    IntroSortInternal<TObjectPtr<UMassProcessor>,int,FIdentityFunctor,TDereferenceWrapper<TObjectPtr<UMassProcessor>,_FMassRuntimePipeline::SortByExecutionPriority_::__l2::<lambda_2>_>_>
              ((TObjectPtr<UMassProcessor> *)(this->Processors).AllocatorInstance.Data,
               (this->Processors).ArrayNum,local_res8[0],(<lambda_2> *)local_res8);
  }
  return;
}

// operator() @ 150503590

bool __thiscall
`FMassRuntimePipeline::AppendUniqueRuntimeProcessorCopies'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1337695103669502274>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1337695103669502274>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150503990

bool __thiscall `FMassRuntimePipeline::Initialize'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1337695103669502247>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1337695103669502247>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150503a10

bool __thiscall
`FMassRuntimePipeline::InitializeFromArray'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1337695103669502256>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1337695103669502256>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150503a50

bool __thiscall
`FMassRuntimePipeline::InitializeFromClassArray'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1337695103669502265>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1337695103669502265>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

