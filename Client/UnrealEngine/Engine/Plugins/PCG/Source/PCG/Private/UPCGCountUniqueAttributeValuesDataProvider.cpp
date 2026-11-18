// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 14972a670

UClass * __cdecl UPCGCountUniqueAttributeValuesDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCountUniqueAttributeValuesDataProvider.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCountUniqueAttributeValuesDataProvider",
               &Z_Registration_Info_UClass_UPCGCountUniqueAttributeValuesDataProvider.InnerSingleton
               ,StaticRegisterNativesUPCGCountUniqueAttributeValuesDataProvider,0xb0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGCountUniqueAttributeValuesDataProvider>,
               InternalVTableHelperCtorCaller<UPCGCountUniqueAttributeValuesDataProvider>,local_res8
               ,UPCGComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCountUniqueAttributeValuesDataProvider.InnerSingleton;
}

// UPCGCountUniqueAttributeValuesDataProvider @ 14973afa0

UPCGCountUniqueAttributeValuesDataProvider * __thiscall
UPCGCountUniqueAttributeValuesDataProvider::UPCGCountUniqueAttributeValuesDataProvider
          (UPCGCountUniqueAttributeValuesDataProvider *this,FVTableHelper *param_1)

{
  UPCGComputeDataProvider::UPCGComputeDataProvider((UPCGComputeDataProvider *)this,param_1);
  this->AttributeToCountId = -1;
  this->OutputValueAttributeId = -1;
  this->_padding_ = (longlong)&___7UPCGCountUniqueAttributeValuesDataProvider__6B_;
  (this->AttributeToCountName).ComparisonIndex = 0;
  (this->AttributeToCountName).Number = 0;
  this->OutputCountAttributeId = -1;
  this->bEmitPerDataCounts = true;
  this->bOutputRawBuffer = false;
  return this;
}

// UPCGCountUniqueAttributeValuesDataProvider @ 14973aff0

UPCGCountUniqueAttributeValuesDataProvider * __thiscall
UPCGCountUniqueAttributeValuesDataProvider::UPCGCountUniqueAttributeValuesDataProvider
          (UPCGCountUniqueAttributeValuesDataProvider *this,FObjectInitializer *param_1)

{
  UPCGComputeDataProvider::UPCGComputeDataProvider((UPCGComputeDataProvider *)this,param_1);
  this->AttributeToCountId = -1;
  this->OutputValueAttributeId = -1;
  this->_padding_ = (longlong)&___7UPCGCountUniqueAttributeValuesDataProvider__6B_;
  (this->AttributeToCountName).ComparisonIndex = 0;
  (this->AttributeToCountName).Number = 0;
  this->OutputCountAttributeId = -1;
  this->bEmitPerDataCounts = true;
  this->bOutputRawBuffer = false;
  return this;
}

// ~UPCGCountUniqueAttributeValuesDataProvider @ 14973dbe0

void __thiscall
UPCGCountUniqueAttributeValuesDataProvider::~UPCGCountUniqueAttributeValuesDataProvider
          (UPCGCountUniqueAttributeValuesDataProvider *this)

{
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

// GetPrivateStaticClass @ 14975afc0

UClass * __cdecl UPCGCountUniqueAttributeValuesDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCountUniqueAttributeValuesDataProvider.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCountUniqueAttributeValuesDataProvider",
               &Z_Registration_Info_UClass_UPCGCountUniqueAttributeValuesDataProvider.InnerSingleton
               ,StaticRegisterNativesUPCGCountUniqueAttributeValuesDataProvider,0xb0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGCountUniqueAttributeValuesDataProvider>,
               InternalVTableHelperCtorCaller<UPCGCountUniqueAttributeValuesDataProvider>,local_res8
               ,UPCGComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCountUniqueAttributeValuesDataProvider.InnerSingleton;
}

// GetRenderProxy @ 14975dc10

FComputeDataProviderRenderProxy * __thiscall
UPCGCountUniqueAttributeValuesDataProvider::GetRenderProxy
          (UPCGCountUniqueAttributeValuesDataProvider *this)

{
  int iVar1;
  FComputeDataProviderRenderProxy FVar2;
  FComputeDataProviderRenderProxy FVar3;
  FComputeDataProviderRenderProxy *pFVar4;
  undefined4 uStack_c;
  
  FVar3 = *(FComputeDataProviderRenderProxy *)&this->AttributeToCountId;
  iVar1 = this->OutputCountAttributeId;
  uStack_c = CONCAT31(uStack_c._1_3_,this->bEmitPerDataCounts);
  pFVar4 = ::operator_new(0x18);
  if (pFVar4 != (FComputeDataProviderRenderProxy *)0x0) {
    FVar2._4_4_ = uStack_c;
    FVar2._0_4_ = iVar1;
    *pFVar4 = (FComputeDataProviderRenderProxy)&___7FPCGCountUniqueAttributeValuesProviderProxy__6B_
    ;
    pFVar4[1] = FVar3;
    pFVar4[2] = FVar2;
    return pFVar4;
  }
  return (FComputeDataProviderRenderProxy *)0x0;
}

// Initialize @ 149768e50

void __thiscall
UPCGCountUniqueAttributeValuesDataProvider::Initialize
          (UPCGCountUniqueAttributeValuesDataProvider *this,UComputeDataInterface *param_1,
          UObject *param_2,ulong64 param_3,ulong64 param_4)

{
  int iVar1;
  undefined4 uVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  bool bVar7;
  FString local_28;
  FString local_18;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId96,"UPCGCountUniqueAttributeValuesDataProvider::Initialize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\BuiltInKernels\\PCGCountUniqueAttributeValuesDataInterface.cpp"
               ,0x60);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId96);
  }
  UPCGComputeDataProvider::Initialize
            ((UPCGComputeDataProvider *)this,param_1,param_2,param_3,param_4);
  if (param_1 == (UComputeDataInterface *)0x0) {
    pFVar4 = GetTypeName<UPCGCountUniqueAttributeValuesDataInterface>(&local_28);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar5);
  }
  pUVar3 = UPCGCountUniqueAttributeValuesDataInterface::StaticClass();
  iVar1 = (int)pUVar3->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar3->_padding_)) {
    uVar2 = *(undefined4 *)&param_1[3].field_0x1c;
    (this->AttributeToCountName).ComparisonIndex =
         (FNameEntryId)*(undefined4 *)&param_1[3].field_0x18;
    (this->AttributeToCountName).Number = uVar2;
    this->bEmitPerDataCounts = (bool)param_1[3].field_0x20;
    this->bOutputRawBuffer = (bool)param_1[3].field_0x21;
    if (bVar7) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return;
  }
  pFVar4 = GetTypeName<UPCGCountUniqueAttributeValuesDataInterface>(&local_28);
  pwVar5 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UComputeDataInterface_const_>(&local_18,param_1);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar5,pwVar6);
}

// PrepareForExecute_GameThread @ 14976f500

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
UPCGCountUniqueAttributeValuesDataProvider::PrepareForExecute_GameThread
          (UPCGCountUniqueAttributeValuesDataProvider *this,UPCGDataBinding *param_1)

{
  UPCGComputeKernel *pUVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int *piVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  int *piVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  bool bVar13;
  ForAnyElementType local_d8;
  undefined8 local_d0;
  TArray<int,TSizedDefaultAllocator<32>_> local_c8;
  FName local_b8;
  FPCGMetadataDomainID FStack_b0;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_98;
  FPCGAttributeIdentifier local_88;
  FPCGAttributeIdentifier local_68;
  FPCGAttributeIdentifier local_48;
  
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId109,
               "UPCGCountUniqueAttributeValuesDataInterface::PrepareForExecute_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\BuiltInKernels\\PCGCountUniqueAttributeValuesDataInterface.cpp"
               ,0x6d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId109);
  }
  if ((param_1 == (UPCGDataBinding *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InBinding",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\BuiltInKernels\\PCGCountUniqueAttributeValuesDataInterface.cpp"
                         ,0x6e,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  if (this->bOutputRawBuffer == false) {
    local_b8 = PCGCountUniqueAttributeValuesConstants::ValueAttributeName;
    FStack_b0.Flag = PCGMetadataDomainID::Default.Flag;
    FStack_b0._1_3_ = PCGMetadataDomainID::Default._1_3_;
    FStack_b0.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
    FStack_b0.DebugName = PCGMetadataDomainID::Default.DebugName;
    if ((param_1->bTablesInitialized == (atomic<bool>)0x0) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8122861073268211627>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Compute\\PCGDataBinding.h"
                           ,0x55,"bTablesInitialized"), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    local_88.Name = local_b8;
    local_88.MetadataDomain.Flag = FStack_b0.Flag;
    local_88.MetadataDomain._1_3_ = FStack_b0._1_3_;
    local_88.MetadataDomain.CustomFlag = FStack_b0.CustomFlag;
    local_88.MetadataDomain.DebugName = FStack_b0.DebugName;
    iVar6 = FPCGKernelAttributeTable::GetAttributeId(&param_1->AttributeTable,&local_88,Int);
    this->OutputValueAttributeId = iVar6;
    if ((iVar6 == -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("OutputValueAttributeId != -1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\BuiltInKernels\\PCGCountUniqueAttributeValuesDataInterface.cpp"
                           ,0x78,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    local_b8 = PCGCountUniqueAttributeValuesConstants::ValueCountAttributeName;
    FStack_b0.Flag = PCGMetadataDomainID::Default.Flag;
    FStack_b0._1_3_ = PCGMetadataDomainID::Default._1_3_;
    FStack_b0.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
    FStack_b0.DebugName = PCGMetadataDomainID::Default.DebugName;
    if ((param_1->bTablesInitialized == (atomic<bool>)0x0) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8122861073268211627>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Compute\\PCGDataBinding.h"
                           ,0x55,"bTablesInitialized"), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    local_68.Name = local_b8;
    local_68.MetadataDomain.Flag = FStack_b0.Flag;
    local_68.MetadataDomain._1_3_ = FStack_b0._1_3_;
    local_68.MetadataDomain.CustomFlag = FStack_b0.CustomFlag;
    local_68.MetadataDomain.DebugName = FStack_b0.DebugName;
    iVar6 = FPCGKernelAttributeTable::GetAttributeId(&param_1->AttributeTable,&local_68,Int);
    this->OutputCountAttributeId = iVar6;
    if ((iVar6 == -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("OutputCountAttributeId != -1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\BuiltInKernels\\PCGCountUniqueAttributeValuesDataInterface.cpp"
                           ,0x7a,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  FVar3 = PCGPinConstants::DefaultInputLabel;
  pUVar1 = (UPCGComputeKernel *)this->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UPCGComputeKernel *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  UPCGDataBinding::GetCachedKernelPinDataDesc(param_1,&local_98,pUVar1,FVar3,true);
  if (local_98.Object == (FPCGDataCollectionDesc *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1374751780851679359>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\BuiltInKernels\\PCGCountUniqueAttributeValuesDataInterface.cpp"
                       ,0x7f,"InputDataDesc");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  else {
    local_b8 = this->AttributeToCountName;
    FStack_b0.Flag = PCGMetadataDomainID::Default.Flag;
    FStack_b0._1_3_ = PCGMetadataDomainID::Default._1_3_;
    FStack_b0.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
    FStack_b0.DebugName = PCGMetadataDomainID::Default.DebugName;
    if ((param_1->bTablesInitialized == (atomic<bool>)0x0) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8122861073268211627>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Compute\\PCGDataBinding.h"
                           ,0x55,"bTablesInitialized"), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    local_48.Name = local_b8;
    local_48.MetadataDomain.Flag = FStack_b0.Flag;
    local_48.MetadataDomain._1_3_ = FStack_b0._1_3_;
    local_48.MetadataDomain.CustomFlag = FStack_b0.CustomFlag;
    local_48.MetadataDomain.DebugName = FStack_b0.DebugName;
    iVar6 = FPCGKernelAttributeTable::GetAttributeId(&param_1->AttributeTable,&local_48,StringKey);
    this->AttributeToCountId = iVar6;
    local_d8.Data = (FScriptContainerElement *)0x0;
    local_d0 = 0;
    if (iVar6 != -1) {
      if (this->bEmitPerDataCounts == false) {
        if ((local_98.Object == (FPCGDataCollectionDesc *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        if ((int)local_d0 == local_d0._4_4_) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_d8,(int *)((longlong)&local_d0 + 4));
          local_d0 = CONCAT44(local_d0._4_4_,iVar6);
        }
        pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                 (local_d8.Data + (longlong)(int)local_d0 * 0x10);
        local_d0 = CONCAT44(local_d0._4_4_,(int)local_d0 + 1);
        (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        pTVar8->ArrayNum = 0;
        pTVar8->ArrayMax = 0;
        FPCGDataCollectionDesc::GetUniqueStringKeyValues
                  (local_98.Object,this->AttributeToCountId,pTVar8);
      }
      else {
        if ((local_98.Object == (FPCGDataCollectionDesc *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        iVar6 = ((local_98.Object)->DataDescs).ArrayNum;
        pFVar10 = ((local_98.Object)->DataDescs).AllocatorInstance.Data;
        if ((iVar6 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        pFVar12 = pFVar10 + (longlong)iVar6 * 0x68;
        for (; pFVar10 != pFVar12; pFVar10 = pFVar10 + 0x68) {
          iVar6 = *(int *)(pFVar10 + 0x38);
          piVar9 = *(int **)(pFVar10 + 0x30);
          local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_c8.ArrayNum = 0;
          local_c8.ArrayMax = 0;
          iVar11 = 0;
          if (iVar6 < 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L"");
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              uVar5 = (*pcVar2)();
              return (bool)uVar5;
            }
            iVar11 = local_c8.ArrayMax;
          }
          piVar7 = piVar9 + (longlong)iVar6 * 0x1e;
          if (piVar9 != piVar7) {
            do {
              if (*piVar9 == this->AttributeToCountId) {
                if (&local_c8 != (TArray<int,TSizedDefaultAllocator<32>_> *)(piVar9 + 0x1a)) {
                  iVar6 = piVar9[0x1c];
                  _Src = (((TArray<int,TSizedDefaultAllocator<32>_> *)(piVar9 + 0x1a))->
                         AllocatorInstance).Data;
                  local_c8.ArrayNum = iVar6;
                  if ((iVar6 == 0) && (iVar11 == 0)) {
                    local_c8.ArrayNum = 0;
                    local_c8.ArrayMax = 0;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (4,4,iVar6,iVar11,&local_c8.AllocatorInstance,iVar6,&local_c8.ArrayMax
                              );
                    if (iVar6 != 0) {
                      memcpy(local_c8.AllocatorInstance.Data,_Src,(longlong)iVar6 << 2);
                    }
                  }
                }
                break;
              }
              piVar9 = piVar9 + 0x1e;
            } while (piVar9 != piVar7);
          }
          if ((int)local_d0 == local_d0._4_4_) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_d8,(int *)((longlong)&local_d0 + 4));
            local_d0 = CONCAT44(local_d0._4_4_,iVar6);
          }
          pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                   (local_d8.Data + (longlong)(int)local_d0 * 0x10);
          local_d0 = CONCAT44(local_d0._4_4_,(int)local_d0 + 1);
          (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          pTVar8->ArrayNum = 0;
          pTVar8->ArrayMax = 0;
          if (pTVar8 != &local_c8) {
            (pTVar8->AllocatorInstance).Data = local_c8.AllocatorInstance.Data;
            local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            pTVar8->ArrayNum = local_c8.ArrayNum;
            pTVar8->ArrayMax = local_c8.ArrayMax;
            local_c8.ArrayNum = 0;
            local_c8.ArrayMax = 0;
          }
          if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.AllocatorInstance.Data);
          }
        }
      }
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)local_d8.Data,(int)local_d0);
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_d8.Data !=
        (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_d8.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// Reset @ 149774840

void __thiscall
UPCGCountUniqueAttributeValuesDataProvider::Reset(UPCGCountUniqueAttributeValuesDataProvider *this)

{
  this->AttributeToCountId = -1;
  this->OutputValueAttributeId = -1;
  (this->AttributeToCountName).ComparisonIndex = 0;
  (this->AttributeToCountName).Number = 0;
  this->OutputCountAttributeId = -1;
  this->bEmitPerDataCounts = true;
  this->bOutputRawBuffer = false;
  UPCGComputeDataProvider::Reset((UPCGComputeDataProvider *)this);
  return;
}

// StaticRegisterNativesUPCGCountUniqueAttributeValuesDataProvider @ 149778630

void __cdecl
UPCGCountUniqueAttributeValuesDataProvider::
StaticRegisterNativesUPCGCountUniqueAttributeValuesDataProvider(void)

{
  return;
}

