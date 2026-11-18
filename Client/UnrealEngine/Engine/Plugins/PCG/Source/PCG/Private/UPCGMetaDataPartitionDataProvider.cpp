// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 14972c6e0

UClass * __cdecl UPCGMetaDataPartitionDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMetaDataPartitionDataProvider.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMetaDataPartitionDataProvider",
               &Z_Registration_Info_UClass_UPCGMetaDataPartitionDataProvider.InnerSingleton,
               StaticRegisterNativesUPCGMetaDataPartitionDataProvider,0xd0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMetaDataPartitionDataProvider>,
               InternalVTableHelperCtorCaller<UPCGMetaDataPartitionDataProvider>,local_res8,
               UPCGComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMetaDataPartitionDataProvider.InnerSingleton;
}

// UPCGMetaDataPartitionDataProvider @ 14973bfc0

UPCGMetaDataPartitionDataProvider * __thiscall
UPCGMetaDataPartitionDataProvider::UPCGMetaDataPartitionDataProvider
          (UPCGMetaDataPartitionDataProvider *this,FVTableHelper *param_1)

{
  UPCGComputeDataProvider::UPCGComputeDataProvider((UPCGComputeDataProvider *)this,param_1);
  this->PartitionAttributeId = -1;
  this->NumInputData = -1;
  this->_padding_ = (longlong)&___7UPCGMetaDataPartitionDataProvider__6B_;
  (this->MaxAttributeValuePerInputData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaxAttributeValuePerInputData).ArrayNum = 0;
  (this->MaxAttributeValuePerInputData).ArrayMax = 0;
  (this->UniqueStringKeyValuesPerInputData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UniqueStringKeyValuesPerInputData).ArrayNum = 0;
  (this->UniqueStringKeyValuesPerInputData).ArrayMax = 0;
  (this->AnalysisDataIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnalysisDataIndices).ArrayNum = 0;
  (this->AnalysisDataIndices).ArrayMax = 0;
  return this;
}

// UPCGMetaDataPartitionDataProvider @ 14973c020

UPCGMetaDataPartitionDataProvider * __thiscall
UPCGMetaDataPartitionDataProvider::UPCGMetaDataPartitionDataProvider
          (UPCGMetaDataPartitionDataProvider *this,FObjectInitializer *param_1)

{
  UPCGComputeDataProvider::UPCGComputeDataProvider((UPCGComputeDataProvider *)this,param_1);
  this->PartitionAttributeId = -1;
  this->NumInputData = -1;
  this->_padding_ = (longlong)&___7UPCGMetaDataPartitionDataProvider__6B_;
  (this->MaxAttributeValuePerInputData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaxAttributeValuePerInputData).ArrayNum = 0;
  (this->MaxAttributeValuePerInputData).ArrayMax = 0;
  (this->UniqueStringKeyValuesPerInputData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UniqueStringKeyValuesPerInputData).ArrayNum = 0;
  (this->UniqueStringKeyValuesPerInputData).ArrayMax = 0;
  (this->AnalysisDataIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnalysisDataIndices).ArrayNum = 0;
  (this->AnalysisDataIndices).ArrayMax = 0;
  return this;
}

// ~UPCGMetaDataPartitionDataProvider @ 14973e480

void __thiscall
UPCGMetaDataPartitionDataProvider::~UPCGMetaDataPartitionDataProvider
          (UPCGMetaDataPartitionDataProvider *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGMetaDataPartitionDataProvider__6B_;
  pFVar1 = (this->AnalysisDataIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->UniqueStringKeyValuesPerInputData).AllocatorInstance.Data,
             (this->UniqueStringKeyValuesPerInputData).ArrayNum);
  pFVar1 = (this->UniqueStringKeyValuesPerInputData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaxAttributeValuePerInputData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UPCGComputeDataProvider__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  return;
}

// GetPrivateStaticClass @ 14975c340

UClass * __cdecl UPCGMetaDataPartitionDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMetaDataPartitionDataProvider.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMetaDataPartitionDataProvider",
               &Z_Registration_Info_UClass_UPCGMetaDataPartitionDataProvider.InnerSingleton,
               StaticRegisterNativesUPCGMetaDataPartitionDataProvider,0xd0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMetaDataPartitionDataProvider>,
               InternalVTableHelperCtorCaller<UPCGMetaDataPartitionDataProvider>,local_res8,
               UPCGComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMetaDataPartitionDataProvider.InnerSingleton;
}

// GetRenderProxy @ 14975e7f0

FComputeDataProviderRenderProxy * __thiscall
UPCGMetaDataPartitionDataProvider::GetRenderProxy(UPCGMetaDataPartitionDataProvider *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FComputeDataProviderRenderProxy *pFVar6;
  int *piVar7;
  int iVar8;
  FComputeDataProviderRenderProxy FVar9;
  FComputeDataProviderRenderProxy FVar10;
  undefined1 local_res10 [8];
  ForAnyElementType local_38;
  undefined8 local_30;
  
  pFVar6 = ::operator_new(0x38);
  if (pFVar6 != (FComputeDataProviderRenderProxy *)0x0) {
    pTVar4 = (TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->UniqueStringKeyValuesPerInputData).AllocatorInstance.Data;
    iVar2 = (this->UniqueStringKeyValuesPerInputData).ArrayNum;
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30 = CONCAT44(local_30._4_4_,iVar2);
    if (iVar2 == 0) {
      local_30 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar2,0,&local_38,iVar2,(int *)((longlong)&local_30 + 4));
      ConstructItems<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,int>
                (local_38.Data,pTVar4,iVar2);
    }
    iVar2 = this->PartitionAttributeId;
    iVar3 = this->NumInputData;
    iVar8 = -1;
    *(undefined4 *)(pFVar6 + 2) = 0xffffffff;
    *pFVar6 = (FComputeDataProviderRenderProxy)&___7FPCGMetaDataPartitionProviderProxy__6B_;
    *(int *)(pFVar6 + 1) = iVar2;
    *(int *)&pFVar6[1].field_0x4 = iVar3;
    pFVar6[3] = (FComputeDataProviderRenderProxy)local_38.Data;
    local_38.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar6 + 4) = (int)local_30;
    *(undefined4 *)&pFVar6[4].field_0x4 = local_30._4_4_;
    local_30 = 0;
    pFVar6[5] = (FComputeDataProviderRenderProxy)0x0;
    pFVar6[6] = (FComputeDataProviderRenderProxy)0x0;
    iVar2 = *(int *)(pFVar6 + 4);
    FVar9 = pFVar6[3];
    FVar10 = (FComputeDataProviderRenderProxy)((longlong)iVar2 * 0x10 + (longlong)FVar9);
    while( true ) {
      if (*(int *)(pFVar6 + 4) != iVar2) {
        `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (FVar9 == FVar10) break;
      piVar7 = *(int **)FVar9;
      iVar3 = *(int *)((longlong)FVar9 + 8);
      piVar1 = piVar7 + iVar3;
      while( true ) {
        if (*(int *)((longlong)FVar9 + 8) != iVar3) {
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (piVar7 == piVar1) break;
        iVar5 = *piVar7;
        if (*piVar7 < iVar8) {
          iVar5 = iVar8;
        }
        iVar8 = iVar5;
        piVar7 = piVar7 + 1;
      }
      FVar9 = (FComputeDataProviderRenderProxy)((longlong)FVar9 + 0x10);
    }
    *(int *)(pFVar6 + 2) = iVar8 + 1;
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)local_38.Data,(int)local_30);
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_38.Data !=
        (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_38.Data);
    }
    return pFVar6;
  }
  return (FComputeDataProviderRenderProxy *)0x0;
}

// PerformPreExecuteReadbacks_GameThread @ 14976d7a0

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
UPCGMetaDataPartitionDataProvider::PerformPreExecuteReadbacks_GameThread
          (UPCGMetaDataPartitionDataProvider *this,UPCGDataBinding *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  UPCGComputeKernel *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  bool bVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_res10 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_38;
  
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId91,
               "UPCGMetaDataPartitionDataProvider::PerformPreExecuteReadbacks_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGMetadataPartitionDataInterface.cpp"
               ,0x5b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId91);
  }
  if ((param_1 == (UPCGDataBinding *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InBinding",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGMetadataPartitionDataInterface.cpp"
                         ,0x5c,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  FVar5 = PCGMetadataPartitionConstants::ElementCountsPinLabel;
  iVar12 = (this->AnalysisDataIndices).ArrayNum;
  if (iVar12 == 0) {
    pUVar2 = (UPCGComputeKernel *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UPCGComputeKernel *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    pTVar9 = UPCGDataBinding::GetPinInputDataIndices(param_1,&local_38,pUVar2,FVar5);
    pTVar1 = &this->AnalysisDataIndices;
    if (pTVar1 != pTVar9) {
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pTVar1->AllocatorInstance).Data = (pTVar9->AllocatorInstance).Data;
      (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->AnalysisDataIndices).ArrayNum = pTVar9->ArrayNum;
      (this->AnalysisDataIndices).ArrayMax = pTVar9->ArrayMax;
      pTVar9->ArrayNum = 0;
      pTVar9->ArrayMax = 0;
    }
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
    iVar12 = (this->AnalysisDataIndices).ArrayNum;
    if (iVar12 == 0) {
      if (5 < (byte)LogPCG._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      }
      bVar6 = true;
      goto LAB_14976d948;
    }
  }
  pFVar11 = (this->AnalysisDataIndices).AllocatorInstance.Data;
  pFVar3 = pFVar11 + (longlong)iVar12 * 4;
  bVar6 = true;
  while( true ) {
    if ((this->AnalysisDataIndices).ArrayNum != iVar12) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar11 == pFVar3) break;
    bVar8 = UPCGDataBinding::ReadbackInputDataToCPU(param_1,*(int *)pFVar11);
    bVar10 = false;
    if (bVar8) {
      bVar10 = bVar6;
    }
    pFVar11 = pFVar11 + 4;
    bVar6 = bVar10;
  }
LAB_14976d948:
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar6;
}

// PrepareForExecute_GameThread @ 149770fa0

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
UPCGMetaDataPartitionDataProvider::PrepareForExecute_GameThread
          (UPCGMetaDataPartitionDataProvider *this,UPCGDataBinding *param_1)

{
  int *piVar1;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  UPCGComputeKernel *pUVar4;
  FScriptContainerElement *pFVar5;
  UObject *pUVar6;
  code *pcVar7;
  FName FVar8;
  FPCGMetadataDomainID FVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  FPCGDataCollection *pFVar15;
  UClass *pUVar16;
  UPCGMetadata *this_00;
  FPCGMetadataAttribute<int> *this_01;
  long64 lVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  int local_res20 [2];
  FObjectPtr_u_0 local_118;
  longlong local_110;
  int *local_108;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_100;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_f0;
  FPCGMetadataDomainID local_e0;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *local_d0;
  FName local_c8;
  FPCGMetadataDomainID FStack_c0;
  FPCGAttributeIdentifier local_a8;
  FName local_88;
  undefined4 uStack_80;
  int iStack_7c;
  uint uStack_78;
  uint uStack_74;
  FPCGAttributeIdentifier local_68;
  
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId127,
               "UPCGMetadataPartitionDataInterface::PrepareForExecute_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGMetadataPartitionDataInterface.cpp"
               ,0x7f);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId127);
  }
  if ((param_1 == (UPCGDataBinding *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InBinding",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGMetadataPartitionDataInterface.cpp"
                          ,0x80,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    uVar11 = (*pcVar7)();
    return (bool)uVar11;
  }
  FVar8 = PCGPinConstants::DefaultInputLabel;
  if ((this->AnalysisDataIndices).ArrayNum == 0) {
    if (5 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    goto LAB_149771a35;
  }
  pUVar4 = (UPCGComputeKernel *)this->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UPCGComputeKernel *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  UPCGDataBinding::GetCachedKernelPinDataDesc(param_1,&local_f0,pUVar4,FVar8,true);
  if (local_f0.Object == (FPCGDataCollectionDesc *)0x0) {
    if (1 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
  }
  else {
    uVar21 = ((local_f0.Object)->DataDescs).ArrayNum;
    if (((int)uVar21 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
    uVar20 = (this->AnalysisDataIndices).ArrayNum;
    if (uVar20 == uVar21) {
      pTVar2 = &this->UniqueStringKeyValuesPerInputData;
      iVar13 = (this->UniqueStringKeyValuesPerInputData).ArrayNum;
      piVar1 = &(this->UniqueStringKeyValuesPerInputData).ArrayNum;
      local_d0 = pTVar2;
      if (iVar13 < (int)uVar20) {
        iVar12 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10,8,uVar20 - iVar13,&pTVar2->AllocatorInstance,piVar1,
                            &(this->UniqueStringKeyValuesPerInputData).ArrayMax);
        memset((pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 0x10,0,
               (longlong)(int)(uVar20 - iVar13) << 4);
      }
      else {
        if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
        }
        if ((int)uVar20 < iVar13) {
          iVar13 = iVar13 - uVar20;
          if (iVar13 < 0) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar7 = (code *)swi(3);
              uVar11 = (*pcVar7)();
              return (bool)uVar11;
            }
          }
          else if (iVar13 == 0) goto LAB_149771293;
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                    (pTVar2,uVar20,iVar13);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,&pTVar2->AllocatorInstance,*piVar1,
                     &(this->UniqueStringKeyValuesPerInputData).ArrayMax);
        }
      }
LAB_149771293:
      uVar21 = (this->AnalysisDataIndices).ArrayNum;
      pTVar3 = &this->MaxAttributeValuePerInputData;
      iVar13 = (this->MaxAttributeValuePerInputData).ArrayNum;
      piVar1 = &(this->MaxAttributeValuePerInputData).ArrayNum;
      local_108 = piVar1;
      if (iVar13 < (int)uVar21) {
        iVar12 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,uVar21 - iVar13,&pTVar3->AllocatorInstance,piVar1,
                            &(this->MaxAttributeValuePerInputData).ArrayMax);
        memset((pTVar3->AllocatorInstance).Data + (longlong)iVar12 * 4,0,
               (longlong)(int)(uVar21 - iVar13) << 2);
      }
      else {
        if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
        }
        if ((int)uVar21 < iVar13) {
          iVar13 = iVar13 - uVar21;
          if (iVar13 < 0) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar7 = (code *)swi(3);
              uVar11 = (*pcVar7)();
              return (bool)uVar11;
            }
          }
          else if (iVar13 == 0) goto LAB_149771388;
          pFVar5 = (pTVar3->AllocatorInstance).Data + (longlong)(int)uVar21 * 4;
          iVar12 = (*piVar1 - iVar13) - uVar21;
          if (iVar12 != 0) {
            memmove(pFVar5,pFVar5 + (longlong)iVar13 * 4,(longlong)iVar12 << 2);
          }
          *piVar1 = *piVar1 - iVar13;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&pTVar3->AllocatorInstance,*piVar1,
                     &(this->MaxAttributeValuePerInputData).ArrayMax);
        }
      }
LAB_149771388:
      uVar21 = 0;
      if (0 < (this->AnalysisDataIndices).ArrayNum) {
        local_110 = 0;
        do {
          lVar18 = local_110;
          uVar20 = 0;
          if ((int)uVar21 < (this->AnalysisDataIndices).ArrayNum) {
            uVar20 = ~uVar21 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            uVar11 = (*pcVar7)();
            return (bool)uVar11;
          }
          iVar13 = *(int *)((this->AnalysisDataIndices).AllocatorInstance.Data + lVar18);
          pFVar15 = UPCGDataBinding::GetInputDataCollection(param_1);
          if ((-1 < iVar13) && (iVar13 < (pFVar15->TaggedData).ArrayNum)) {
            pFVar15 = UPCGDataBinding::GetInputDataCollection(param_1);
            if (((pFVar15->TaggedData).ArrayNum <= iVar13) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar7 = (code *)swi(3);
              uVar11 = (*pcVar7)();
              return (bool)uVar11;
            }
            local_118 = (FObjectPtr_u_0)
                        ((FObjectPtr_u_0 *)
                        ((pFVar15->TaggedData).AllocatorInstance.Data + (longlong)iVar13 * 0x78))->
                        Handle;
            if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149771496:
              if (local_118.Handle != (UObject *)0x0) {
                pUVar16 = Z_Construct_UClass_UPCGParamData_NoRegister();
                bVar10 = FObjectPtr::IsA((FObjectPtr *)&local_118,pUVar16);
                if (((bVar10) && (local_118.Handle != (UObject *)0x0)) &&
                   (this_00 = (UPCGMetadata *)(**(code **)(*(longlong *)local_118.Handle + 800))(),
                   this_00 != (UPCGMetadata *)0x0)) {
                  local_c8 = PCGCountUniqueAttributeValuesConstants::ValueCountAttributeName;
                  FStack_c0 = PCGMetadataDomainID::Default;
                  FVar9 = FStack_c0;
                  FStack_c0._0_8_ = PCGMetadataDomainID::Default._0_8_;
                  local_a8.Name = PCGCountUniqueAttributeValuesConstants::ValueCountAttributeName;
                  local_a8.MetadataDomain.Flag = FStack_c0.Flag;
                  local_a8.MetadataDomain._1_3_ = FStack_c0._1_3_;
                  local_a8.MetadataDomain.CustomFlag = FStack_c0.CustomFlag;
                  local_a8.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
                  FStack_c0 = FVar9;
                  this_01 = (FPCGMetadataAttribute<int> *)
                            UPCGMetadata::GetConstAttribute(this_00,&local_a8);
                  local_e0._0_8_ = this_01;
                  if ((this_01 != (FPCGMetadataAttribute<int> *)0x0) &&
                     ((short)this_01->_padding_ == 2)) {
                    lVar17 = UPCGMetadata::GetItemCountForChild(this_00);
                    lVar18 = local_110;
                    lVar19 = 0;
                    if (0 < (int)lVar17) {
                      uVar20 = ~uVar21 >> 0x1f;
                      do {
                        iVar12 = (int)lVar19;
                        iVar13 = FPCGMetadataAttribute<int>::GetValue(this_01,iVar12);
                        pTVar2 = local_d0;
                        if (0 < iVar13) {
                          uVar14 = 0;
                          if ((int)uVar21 < local_d0->ArrayNum) {
                            uVar14 = uVar20;
                          }
                          local_res20[0] = iVar12;
                          if ((uVar14 == 0) &&
                             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar10)) {
                            pcVar7 = (code *)swi(3);
                            uVar11 = (*pcVar7)();
                            return (bool)uVar11;
                          }
                          TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                                    ((TArray<int,TSizedDefaultAllocator<32>_> *)
                                     ((pTVar2->AllocatorInstance).Data +
                                     (longlong)(int)uVar21 * 0x10),local_res20);
                          iVar13 = local_res20[0];
                          uVar14 = 0;
                          if ((int)uVar21 < *local_108) {
                            uVar14 = uVar20;
                          }
                          if ((uVar14 == 0) &&
                             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar10)) {
                            pcVar7 = (code *)swi(3);
                            uVar11 = (*pcVar7)();
                            return (bool)uVar11;
                          }
                          pFVar5 = (this->MaxAttributeValuePerInputData).AllocatorInstance.Data;
                          if (iVar13 < *(int *)(pFVar5 + lVar18)) {
                            iVar13 = *(int *)(pFVar5 + lVar18);
                          }
                          uVar14 = 0;
                          if ((int)uVar21 < *local_108) {
                            uVar14 = uVar20;
                          }
                          if ((uVar14 == 0) &&
                             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar10)) {
                            pcVar7 = (code *)swi(3);
                            uVar11 = (*pcVar7)();
                            return (bool)uVar11;
                          }
                          *(int *)((this->MaxAttributeValuePerInputData).AllocatorInstance.Data +
                                  lVar18) = iVar13;
                          this_01 = (FPCGMetadataAttribute<int> *)local_e0._0_8_;
                        }
                        lVar19 = lVar19 + 1;
                      } while (lVar19 < (int)lVar17);
                    }
                    goto LAB_149771697;
                  }
                }
              }
            }
            else if (local_118.Handle != (UObject *)0x0) {
              UE::GC::MarkAsReachable(local_118.Handle);
              goto LAB_149771496;
            }
            pFVar15 = UPCGDataBinding::GetInputDataCollection(param_1);
            if (((pFVar15->TaggedData).ArrayNum <= iVar13) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar7 = (code *)swi(3);
              uVar11 = (*pcVar7)();
              return (bool)uVar11;
            }
            lVar18 = *(longlong *)
                      ((pFVar15->TaggedData).AllocatorInstance.Data + (longlong)iVar13 * 0x78);
            pUVar16 = Z_Construct_UClass_UPCGProxyForGPUData_NoRegister();
            lVar18 = *(longlong *)(lVar18 + 0x10);
            iVar13 = (int)pUVar16->_padding_;
            if ((*(int *)(lVar18 + 0x38) < iVar13) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar18 + 0x30) + (longlong)iVar13 * 8) !=
                &pUVar16->_padding_)) {
              if (1 < (byte)LogPCG._0_1_) {
                UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
              }
            }
            else if (1 < (byte)LogPCG._0_1_) {
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
            }
            goto LAB_149771a2b;
          }
          bVar10 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_2308853751223418718>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGMetadataPartitionDataInterface.cpp"
                              ,0xa2,
                              "InBinding->GetInputDataCollection().TaggedData.IsValidIndex(AnalysisDataIndex)"
                             );
          if (bVar10) {
            pcVar7 = (code *)swi(3);
            uVar11 = (*pcVar7)();
            return (bool)uVar11;
          }
LAB_149771697:
          uVar21 = uVar21 + 1;
          local_110 = local_110 + 4;
        } while ((int)uVar21 < (this->AnalysisDataIndices).ArrayNum);
      }
      pUVar6 = (UObject *)this->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      lVar18 = (**(code **)(*(longlong *)pUVar6 + 0x2b0))(pUVar6);
      if (lVar18 == 0) {
LAB_149771708:
        lVar18 = 0;
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Settings",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGMetadataPartitionDataInterface.cpp"
                            ,0xd1,L"");
        if (bVar10) {
          pcVar7 = (code *)swi(3);
          uVar11 = (*pcVar7)();
          return (bool)uVar11;
        }
      }
      else {
        pUVar16 = Z_Construct_UClass_UPCGMetadataPartitionSettings_NoRegister();
        iVar13 = (int)pUVar16->_padding_;
        if ((*(int *)(*(longlong *)(lVar18 + 0x10) + 0x38) < iVar13) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x30) + (longlong)iVar13 * 8) !=
            &pUVar16->_padding_)) goto LAB_149771708;
      }
      if (*(int *)(lVar18 + 0xd0) == 1) {
        if ((*(int *)(lVar18 + 0xd0) < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          uVar11 = (*pcVar7)();
          return (bool)uVar11;
        }
        bVar10 = FPCGAttributePropertySelector::IsBasicAttribute
                           (*(FPCGAttributePropertySelector **)(lVar18 + 200));
        FVar8 = PCGPinConstants::DefaultInputLabel;
        if (bVar10) {
          pUVar4 = (UPCGComputeKernel *)this->_padding_;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar4 != (UPCGComputeKernel *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar4);
          }
          UPCGDataBinding::GetCachedKernelPinDataDesc(param_1,&local_100,pUVar4,FVar8,true);
          if (local_100.Object == (FPCGDataCollectionDesc *)0x0) {
            bVar10 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_2308853751223418665>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGMetadataPartitionDataInterface.cpp"
                                ,0xd7,"InputDataDesc");
            if (bVar10) {
              pcVar7 = (code *)swi(3);
              uVar11 = (*pcVar7)();
              return (bool)uVar11;
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_100.SharedReferenceCount.ReferenceController);
          }
          else {
            local_e0 = PCGMetadataDomainID::Default;
            uStack_80 = PCGMetadataDomainID::Default._0_4_;
            iStack_7c = PCGMetadataDomainID::Default.CustomFlag;
            uStack_78 = PCGMetadataDomainID::Default.DebugName.ComparisonIndex.Value;
            uStack_74 = PCGMetadataDomainID::Default.DebugName.Number;
            if (*(int *)(lVar18 + 0xd0) < 1) {
              bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar10) {
                pcVar7 = (code *)swi(3);
                uVar11 = (*pcVar7)();
                return (bool)uVar11;
              }
              uStack_80 = local_e0._0_4_;
              iStack_7c = local_e0.CustomFlag;
              uStack_78 = local_e0.DebugName.ComparisonIndex.Value;
              uStack_74 = local_e0.DebugName.Number;
            }
            local_88 = *(FName *)(*(longlong *)(lVar18 + 200) + 0x14);
            local_68.MetadataDomain.CustomFlag = iStack_7c;
            local_68.MetadataDomain._0_4_ = uStack_80;
            local_68.MetadataDomain.DebugName.Number = uStack_74;
            local_68.MetadataDomain.DebugName.ComparisonIndex.Value = uStack_78;
            local_68.Name = local_88;
            iVar13 = UPCGDataBinding::GetAttributeId(param_1,&local_68,StringKey);
            this->PartitionAttributeId = iVar13;
            if ((local_100.Object == (FPCGDataCollectionDesc *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar10)) {
              pcVar7 = (code *)swi(3);
              uVar11 = (*pcVar7)();
              return (bool)uVar11;
            }
            iVar13 = ((local_100.Object)->DataDescs).ArrayNum;
            if ((iVar13 < 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar10)) {
              pcVar7 = (code *)swi(3);
              uVar11 = (*pcVar7)();
              return (bool)uVar11;
            }
            this->NumInputData = iVar13;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_100.SharedReferenceCount.ReferenceController);
          }
          goto LAB_149771a2b;
        }
      }
      bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_2308853751223418669>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGMetadataPartitionDataInterface.cpp"
                          ,0xd3,
                          "Settings->PartitionAttributeSelectors.Num() == 1 && Settings->PartitionAttributeSelectors[0].IsBasicAttribute()"
                         );
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        uVar11 = (*pcVar7)();
        return (bool)uVar11;
      }
    }
    else if (1 < (byte)LogPCG._0_1_) {
      if ((local_f0.Object == (FPCGDataCollectionDesc *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        uVar11 = (*pcVar7)();
        return (bool)uVar11;
      }
      if ((((local_f0.Object)->DataDescs).ArrayNum < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        uVar11 = (*pcVar7)();
        return (bool)uVar11;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
  }
LAB_149771a2b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f0.SharedReferenceCount.ReferenceController);
LAB_149771a35:
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// Reset @ 149774e10

void __thiscall UPCGMetaDataPartitionDataProvider::Reset(UPCGMetaDataPartitionDataProvider *this)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = (this->MaxAttributeValuePerInputData).ArrayNum;
  this->PartitionAttributeId = -1;
  this->NumInputData = -1;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  piVar1 = &(this->MaxAttributeValuePerInputData).ArrayMax;
  (this->MaxAttributeValuePerInputData).ArrayNum = 0;
  if (*piVar1 != uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar2,&(this->MaxAttributeValuePerInputData).AllocatorInstance,0,piVar1);
  }
  uVar2 = (this->UniqueStringKeyValuesPerInputData).ArrayNum;
  if (-1 < (int)uVar2) {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)
               (this->UniqueStringKeyValuesPerInputData).AllocatorInstance.Data,uVar2);
    piVar1 = &(this->UniqueStringKeyValuesPerInputData).ArrayMax;
    (this->UniqueStringKeyValuesPerInputData).ArrayNum = 0;
    if (*piVar1 != uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar2,&(this->UniqueStringKeyValuesPerInputData).AllocatorInstance,0,piVar1)
      ;
    }
    uVar2 = (this->AnalysisDataIndices).ArrayNum;
    if (-1 < (int)uVar2) {
      piVar1 = &(this->AnalysisDataIndices).ArrayMax;
      (this->AnalysisDataIndices).ArrayNum = 0;
      if (*piVar1 != uVar2) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar2,&(this->AnalysisDataIndices).AllocatorInstance,0,piVar1);
      }
      UPCGComputeDataProvider::Reset((UPCGComputeDataProvider *)this);
      return;
    }
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// StaticRegisterNativesUPCGMetaDataPartitionDataProvider @ 1497787d0

void __cdecl
UPCGMetaDataPartitionDataProvider::StaticRegisterNativesUPCGMetaDataPartitionDataProvider(void)

{
  return;
}

