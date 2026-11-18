// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 12

// StaticClass @ 149a16740

UClass * __cdecl UPCGMetadataPartitionKernel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMetadataPartitionKernel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeKernel::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMetadataPartitionKernel",
               &Z_Registration_Info_UClass_UPCGMetadataPartitionKernel.InnerSingleton,
               StaticRegisterNativesUPCGMetadataPartitionKernel,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMetadataPartitionKernel>,
               InternalVTableHelperCtorCaller<UPCGMetadataPartitionKernel>,local_res8,
               UPCGComputeKernel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMetadataPartitionKernel.InnerSingleton;
}

// UPCGMetadataPartitionKernel @ 149ad1d70

UPCGMetadataPartitionKernel * __thiscall
UPCGMetadataPartitionKernel::UPCGMetadataPartitionKernel
          (UPCGMetadataPartitionKernel *this,FVTableHelper *param_1)

{
  UPCGComputeKernel::UPCGComputeKernel((UPCGComputeKernel *)this,param_1);
  *(undefined ***)this = &___7UPCGMetadataPartitionKernel__6B_;
  return this;
}

// UPCGMetadataPartitionKernel @ 149ad1da0

UPCGMetadataPartitionKernel * __thiscall
UPCGMetadataPartitionKernel::UPCGMetadataPartitionKernel
          (UPCGMetadataPartitionKernel *this,FObjectInitializer *param_1)

{
  UPCGComputeKernel::UPCGComputeKernel((UPCGComputeKernel *)this,param_1);
  *(undefined ***)this = &___7UPCGMetadataPartitionKernel__6B_;
  return this;
}

// ~UPCGMetadataPartitionKernel @ 149ad37e0

void __thiscall
UPCGMetadataPartitionKernel::~UPCGMetadataPartitionKernel(UPCGMetadataPartitionKernel *this)

{
  *(undefined ***)this = &___7UPCGMetadataPartitionKernel__6B_;
  UPCGComputeKernel::~UPCGComputeKernel((UPCGComputeKernel *)this);
  return;
}

// ComputeOutputBindingDataDesc @ 149afa170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TSharedPtr<FPCGDataCollectionDesc_const_,1> * __thiscall
UPCGMetadataPartitionKernel::ComputeOutputBindingDataDesc
          (UPCGMetadataPartitionKernel *this,
          TSharedPtr<FPCGDataCollectionDesc_const_,1> *__return_storage_ptr__,FName param_1,
          UPCGDataBinding *param_2)

{
  int *piVar1;
  TArray<FPCGKernelAttributeDesc,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FPCGMetadataDomainID FVar6;
  FPCGDataCollectionDesc *pFVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> *pTVar13;
  UPCGSettings *pUVar14;
  UPCGMetadataPartitionSettings *pUVar15;
  FPCGDataCollection *pFVar16;
  UClass *pUVar17;
  UPCGMetadata *this_00;
  FPCGMetadataAttribute<int> *this_01;
  ulonglong uVar18;
  FPCGDataTypeIdentifier *pFVar19;
  FPCGDataDesc *pFVar20;
  FPCGDataDesc *pFVar21;
  uint uVar22;
  longlong lVar23;
  FPCGKernelAttributeDesc *pFVar24;
  FPCGKernelAttributeDesc *pFVar25;
  uint uVar26;
  ulonglong uVar27;
  undefined4 uVar28;
  FNameEntryId FVar29;
  uint uVar30;
  undefined1 local_res8 [8];
  TSharedPtr<FPCGDataCollectionDesc_const_,1> *local_res10;
  uint local_res18 [2];
  UPCGDataBinding *local_res20;
  ForAnyElementType local_1f8;
  undefined8 local_1f0;
  int local_1e8 [2];
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_1e0;
  uint local_1d0;
  TArray<int,TSizedDefaultAllocator<32>_> local_1c8;
  TSharedPtr<FPCGDataCollectionDesc,1> local_1b8;
  FObjectPtr_u_0 local_1a8;
  UPCGMetadataPartitionSettings *local_1a0;
  longlong local_198;
  FPCGKernelPin local_190;
  FPCGMetadataDomainID local_180;
  TArrayView<FPCGDataDesc_const_,int> local_170;
  TArrayView<FPCGDataDesc_const_,int> local_160;
  TArrayView<int_const_,int> local_150;
  undefined1 local_140 [40];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  FName local_e0;
  FPCGMetadataDomainID FStack_d8;
  FPCGAttributeIdentifier local_c8;
  FName local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  uint uStack_98;
  uint uStack_94;
  FPCGAttributeIdentifier local_88;
  FPCGDataTypeIdentifier local_68;
  
  local_res10 = __return_storage_ptr__;
  local_res20 = param_2;
  if ((param_2 == (UPCGDataBinding *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InBinding",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataPartitionKernel.cpp"
                         ,0x56,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pTVar13 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar5)();
    return pTVar13;
  }
  pUVar14 = (UPCGSettings *)(**(code **)(*(longlong *)this + 0x2b0))(this);
  pUVar15 = CastChecked<UPCGMetadataPartitionSettings,UPCGSettings_const_>(pUVar14);
  local_1a0 = pUVar15;
  if (param_1 != PCGPinConstants::DefaultOutputLabel) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6997787187420856411>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataPartitionKernel.cpp"
                       ,0x5b,"InOutputPinLabel == PCGPinConstants::DefaultOutputLabel");
    if (!bVar8) {
      __return_storage_ptr__->Object = (FPCGDataCollectionDesc *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      return __return_storage_ptr__;
    }
    pcVar5 = (code *)swi(3);
    pTVar13 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar5)();
    return pTVar13;
  }
  local_190.KernelIndex = *(int *)&this->field_0x3c;
  local_190.PinLabel = PCGPinConstants::DefaultInputLabel;
  local_190.bIsInput = true;
  UPCGDataBinding::ComputeKernelPinDataDesc(param_2,&local_1e0,&local_190);
  if (local_1e0.Object == (FPCGDataCollectionDesc *)0x0) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6997787187420856419>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataPartitionKernel.cpp"
                       ,99,"InputPinDesc");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar5)();
      return pTVar13;
    }
LAB_149afa28e:
    __return_storage_ptr__->Object = (FPCGDataCollectionDesc *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    iVar11 = ((local_1e0.Object)->DataDescs).ArrayNum;
    if (iVar11 < 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar5)();
        return pTVar13;
      }
    }
    else if (iVar11 == 0) {
      if (5 < (byte)LogPCG._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      }
      goto LAB_149afa28e;
    }
    UPCGDataBinding::GetPinInputDataIndices
              (param_2,&local_1c8,(UPCGComputeKernel *)this,
               PCGMetadataPartitionConstants::ElementCountsPinLabel);
    if ((local_1e0.Object == (FPCGDataCollectionDesc *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar5)();
      return pTVar13;
    }
    iVar11 = ((local_1e0.Object)->DataDescs).ArrayNum;
    if ((iVar11 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar5)();
      return pTVar13;
    }
    if (local_1c8.ArrayNum == iVar11) {
      if (local_1c8.ArrayNum != 0) {
        FPCGDataCollectionDesc::MakeShared(&local_1b8);
        uVar27 = 0;
        local_1d0 = 0;
        if (0 < local_1c8.ArrayNum) {
          local_198 = 0;
          uVar18 = uVar27;
          do {
            lVar23 = local_198;
            uVar26 = (uint)uVar18;
            uVar9 = 0;
            uVar30 = uVar9;
            if ((int)uVar26 < local_1c8.ArrayNum) {
              uVar30 = ~uVar26 >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              pTVar13 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar5)();
              return pTVar13;
            }
            uVar30 = *(uint *)(local_1c8.AllocatorInstance.Data + lVar23);
            pFVar16 = UPCGDataBinding::GetInputDataCollection(param_2);
            if ((((int)uVar30 < 0) || ((pFVar16->TaggedData).ArrayNum <= (int)uVar30)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InBinding->GetInputDataCollection().TaggedData.IsValidIndex(AnalysisDataIndex)"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataPartitionKernel.cpp"
                                   ,0x82,L""), bVar8)) {
              pcVar5 = (code *)swi(3);
              pTVar13 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar5)();
              return pTVar13;
            }
            pFVar16 = UPCGDataBinding::GetInputDataCollection(param_2);
            uVar22 = uVar9;
            if ((int)uVar30 < (pFVar16->TaggedData).ArrayNum) {
              uVar22 = ~uVar30 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              pTVar13 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar5)();
              return pTVar13;
            }
            local_1a8 = (FObjectPtr_u_0)
                        ((FObjectPtr_u_0 *)
                        ((pFVar16->TaggedData).AllocatorInstance.Data + (longlong)(int)uVar30 * 0x78
                        ))->Handle;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              if (local_1a8.Handle != (UObject *)0x0) {
                UE::GC::MarkAsReachable(local_1a8.Handle);
                goto LAB_149afa57a;
              }
LAB_149afaca9:
              local_1f0 = 0;
              local_1f8.Data = (FScriptContainerElement *)0x0;
              if (2 < (byte)LogPCG._0_1_) {
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
              }
              pFVar16 = UPCGDataBinding::GetInputDataCollection(param_2);
              if ((int)uVar30 < (pFVar16->TaggedData).ArrayNum) {
                uVar9 = ~uVar30 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar5 = (code *)swi(3);
                pTVar13 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar5)();
                return pTVar13;
              }
              lVar23 = *(longlong *)
                        ((pFVar16->TaggedData).AllocatorInstance.Data + (longlong)(int)uVar30 * 0x78
                        );
              pUVar17 = Z_Construct_UClass_UPCGProxyForGPUData_NoRegister();
              lVar23 = *(longlong *)(lVar23 + 0x10);
              iVar11 = (int)pUVar17->_padding_;
              if (((iVar11 <= *(int *)(lVar23 + 0x38)) &&
                  ((longlong *)*(undefined1 **)(*(longlong *)(lVar23 + 0x30) + (longlong)iVar11 * 8)
                   == &pUVar17->_padding_)) && (1 < (byte)LogPCG._0_1_)) {
                UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
              }
              __return_storage_ptr__->Object = (FPCGDataCollectionDesc *)0x0;
              (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
                   (TReferenceControllerBase<1> *)0x0;
              if (local_1f8.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1f8.Data);
              }
              goto LAB_149afac5f;
            }
LAB_149afa57a:
            if (local_1a8.Handle == (UObject *)0x0) goto LAB_149afaca9;
            pUVar17 = Z_Construct_UClass_UPCGParamData_NoRegister();
            bVar8 = FObjectPtr::IsA((FObjectPtr *)&local_1a8,pUVar17);
            if (((!bVar8) || (local_1a8.Handle == (UObject *)0x0)) ||
               (this_00 = (UPCGMetadata *)(**(code **)(*(longlong *)local_1a8.Handle + 800))(),
               this_00 == (UPCGMetadata *)0x0)) goto LAB_149afaca9;
            local_e0 = PCGCountUniqueAttributeValuesConstants::ValueCountAttributeName;
            FStack_d8 = PCGMetadataDomainID::Default;
            FVar6 = FStack_d8;
            FStack_d8._0_8_ = PCGMetadataDomainID::Default._0_8_;
            local_c8.Name = PCGCountUniqueAttributeValuesConstants::ValueCountAttributeName;
            local_c8.MetadataDomain.Flag = FStack_d8.Flag;
            local_c8.MetadataDomain._1_3_ = FStack_d8._1_3_;
            local_c8.MetadataDomain.CustomFlag = FStack_d8.CustomFlag;
            local_c8.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
            FStack_d8 = FVar6;
            this_01 = (FPCGMetadataAttribute<int> *)
                      UPCGMetadata::GetConstAttribute(this_00,&local_c8);
            local_1f8.Data = (FScriptContainerElement *)0x0;
            local_1f0 = 0;
            if ((this_01 == (FPCGMetadataAttribute<int> *)0x0) || ((short)this_01->_padding_ != 2))
            goto LAB_149afaca9;
            uVar18 = UPCGMetadata::GetItemCountForChild(this_00);
            iVar11 = (int)uVar18;
            if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum(uVar18 & 0xffffffff);
            }
            if (local_1f0._4_4_ < iVar11) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar11,&local_1f8,(int)local_1f0,(int *)((longlong)&local_1f0 + 4));
            }
            uVar18 = uVar27;
            if (0 < (longlong)iVar11) {
              do {
                local_1e8[0] = FPCGMetadataAttribute<int>::GetValue(this_01,(int)uVar18);
                if (((local_1f8.Data <= (FScriptContainerElement *)local_1e8) &&
                    ((FScriptContainerElement *)local_1e8 <
                     local_1f8.Data + (longlong)local_1f0._4_4_ * 4)) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar8)) {
                  pcVar5 = (code *)swi(3);
                  pTVar13 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar5)();
                  return pTVar13;
                }
                iVar10 = (int)local_1f0;
                if ((int)local_1f0 == local_1f0._4_4_) {
                  iVar10 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&local_1f8,(int *)((longlong)&local_1f0 + 4));
                }
                uVar18 = uVar18 + 1;
                local_1f0 = CONCAT44(local_1f0._4_4_,iVar10 + 1);
                *(int *)(local_1f8.Data + (longlong)iVar10 * 4) = local_1e8[0];
              } while ((longlong)uVar18 < (longlong)iVar11);
            }
            pUVar15 = local_1a0;
            local_180 = PCGMetadataDomainID::Default;
            uVar28 = PCGMetadataDomainID::Default._0_4_;
            iVar11 = PCGMetadataDomainID::Default.CustomFlag;
            FVar29.Value = PCGMetadataDomainID::Default.DebugName.ComparisonIndex.Value;
            uVar30 = PCGMetadataDomainID::Default.DebugName.Number;
            if ((local_1a0->PartitionAttributeSelectors).ArrayNum < 1) {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                pTVar13 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar5)();
                return pTVar13;
              }
              uVar28 = local_180._0_4_;
              iVar11 = local_180.CustomFlag;
              FVar29.Value = local_180.DebugName.ComparisonIndex.Value;
              uVar30 = local_180.DebugName.Number;
            }
            local_a8 = *(FName *)((pUVar15->PartitionAttributeSelectors).AllocatorInstance.Data +
                                 0x14);
            uStack_a0 = uVar28;
            iStack_9c = iVar11;
            uStack_98 = FVar29.Value;
            uStack_94 = uVar30;
            if ((param_2->bTablesInitialized == (atomic<bool>)0x0) &&
               (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_8122861073268211627>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Compute\\PCGDataBinding.h"
                                   ,0x55,"bTablesInitialized"), bVar8)) {
              pcVar5 = (code *)swi(3);
              pTVar13 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar5)();
              return pTVar13;
            }
            local_88.MetadataDomain.CustomFlag = iStack_9c;
            local_88.MetadataDomain._0_4_ = uStack_a0;
            local_88.Name = local_a8;
            local_88.MetadataDomain.DebugName = local_180.DebugName;
            iVar11 = FPCGKernelAttributeTable::GetAttributeId
                               (&param_2->AttributeTable,&local_88,StringKey);
            uVar30 = local_1d0;
            local_res18[0] = 0;
            uVar18 = uVar27;
            if (0 < (int)local_1f0) {
              do {
                uVar22 = (uint)uVar18;
                uVar26 = uVar9;
                if ((int)uVar22 < (int)local_1f0) {
                  uVar26 = ~uVar22 >> 0x1f;
                }
                if ((uVar26 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar5 = (code *)swi(3);
                  pTVar13 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar5)();
                  return pTVar13;
                }
                if (*(int *)(local_1f8.Data + (longlong)(int)uVar22 * 4) != 0) {
                  if ((local_1b8.Object == (FPCGDataCollectionDesc *)0x0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsValid()",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                         ,0x458,L""), bVar8)) {
                    pcVar5 = (code *)swi(3);
                    pTVar13 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar5)();
                    return pTVar13;
                  }
                  pFVar7 = local_1b8.Object;
                  lVar23 = (longlong)(int)local_res18[0];
                  uVar26 = uVar9;
                  if ((int)local_res18[0] < (int)local_1f0) {
                    uVar26 = ~local_res18[0] >> 0x1f;
                  }
                  if ((uVar26 == 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar8)) {
                    pcVar5 = (code *)swi(3);
                    pTVar13 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar5)();
                    return pTVar13;
                  }
                  piVar1 = &(pFVar7->DataDescs).ArrayMax;
                  pFVar3 = local_1f8.Data + lVar23 * 4;
                  iVar10 = (pFVar7->DataDescs).ArrayNum;
                  if (iVar10 == *piVar1) {
                    iVar10 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x868,(ForAnyElementType *)pFVar7,piVar1);
                  }
                  (pFVar7->DataDescs).ArrayNum = iVar10 + 1;
                  pFVar4 = (pFVar7->DataDescs).AllocatorInstance.Data;
                  iVar12 = *(int *)pFVar3;
                  pFVar19 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_68,Point);
                  pFVar20 = FPCGDataDesc::FPCGDataDesc
                                      ((FPCGDataDesc *)(pFVar4 + (longlong)iVar10 * 0x68),pFVar19,
                                       iVar12);
                  pTVar2 = &pFVar20->AttributeDescs;
                  if ((local_1e0.Object == (FPCGDataCollectionDesc *)0x0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsValid()",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                         ,0x458,L""), bVar8)) {
                    pcVar5 = (code *)swi(3);
                    pTVar13 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar5)();
                    return pTVar13;
                  }
                  local_170.DataPtr =
                       (FPCGDataDesc *)((local_1e0.Object)->DataDescs).AllocatorInstance.Data;
                  iVar10 = ((local_1e0.Object)->DataDescs).ArrayNum;
                  if ((iVar10 < 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("InCount >= 0",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                         ,0xeb,L""), bVar8)) {
                    pcVar5 = (code *)swi(3);
                    pTVar13 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar5)();
                    return pTVar13;
                  }
                  local_170.ArrayNum = iVar10;
                  pFVar21 = TArrayView<FPCGDataDesc_const_,int>::operator[](&local_170,uVar30);
                  iVar10 = (pFVar21->AttributeDescs).ArrayNum;
                  pFVar24 = (FPCGKernelAttributeDesc *)
                            (pFVar21->AttributeDescs).AllocatorInstance.Data;
                  if (iVar10 < 0) {
                    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("InCount >= 0",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                       ,0xeb,L"");
                    if (bVar8) {
                      pcVar5 = (code *)swi(3);
                      pTVar13 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar5)();
                      return pTVar13;
                    }
                    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                                       ,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x9a9,L"Invalid range size: %lld");
                    if (bVar8) {
                      pcVar5 = (code *)swi(3);
                      pTVar13 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar5)();
                      return pTVar13;
                    }
LAB_149afaa41:
                    iVar12 = UE::Core::Private::
                             ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x78,8,iVar10,&pTVar2->AllocatorInstance,
                                        &(pFVar20->AttributeDescs).ArrayNum,
                                        &(pFVar20->AttributeDescs).ArrayMax);
                    ConstructItems<FPCGKernelAttributeDesc,FPCGKernelAttributeDesc,int>
                              ((pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 0x78,pFVar24,
                               iVar10);
                  }
                  else if (iVar10 != 0) goto LAB_149afaa41;
                  if ((local_1e0.Object == (FPCGDataCollectionDesc *)0x0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsValid()",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                         ,0x458,L""), bVar8)) {
                    pcVar5 = (code *)swi(3);
                    pTVar13 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar5)();
                    return pTVar13;
                  }
                  local_160.DataPtr =
                       (FPCGDataDesc *)((local_1e0.Object)->DataDescs).AllocatorInstance.Data;
                  iVar10 = ((local_1e0.Object)->DataDescs).ArrayNum;
                  if ((iVar10 < 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("InCount >= 0",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                         ,0xeb,L""), bVar8)) {
                    pcVar5 = (code *)swi(3);
                    pTVar13 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar5)();
                    return pTVar13;
                  }
                  local_160.ArrayNum = iVar10;
                  pFVar21 = TArrayView<FPCGDataDesc_const_,int>::operator[](&local_160,uVar30);
                  pFVar20->AllocatedPointProperties =
                       pFVar20->AllocatedPointProperties | pFVar21->AllocatedPointProperties;
                  iVar10 = (pFVar20->AttributeDescs).ArrayNum;
                  pFVar24 = (FPCGKernelAttributeDesc *)(pTVar2->AllocatorInstance).Data;
                  pFVar25 = pFVar24 + iVar10;
                  while( true ) {
                    if ((pFVar20->AttributeDescs).ArrayNum != iVar10) {
                      local_res8[0] = 0;
                      `TCheckedPointerIterator<FPCGKernelAttributeDesc,int,0>::operator!='::__l2::
                      <lambda_1>::operator()(local_res8);
                    }
                    if (pFVar24 == pFVar25) goto LAB_149afab57;
                    if (pFVar24->AttributeId == iVar11) break;
                    pFVar24 = pFVar24 + 1;
                  }
                  local_150.DataPtr = (int *)local_res18;
                  local_150.ArrayNum = 1;
                  FPCGKernelAttributeDesc::SetStringKeys(pFVar24,&local_150);
                }
LAB_149afab57:
                local_res18[0] = local_res18[0] + 1;
                uVar18 = (ulonglong)local_res18[0];
                pUVar15 = local_1a0;
                __return_storage_ptr__ = local_res10;
                uVar26 = local_1d0;
              } while ((int)local_res18[0] < (int)local_1f0);
            }
            if (local_1f8.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1f8.Data);
            }
            local_1d0 = uVar26 + 1;
            uVar18 = (ulonglong)local_1d0;
            local_198 = local_198 + 4;
            param_2 = local_res20;
          } while ((int)local_1d0 < local_1c8.ArrayNum);
        }
        if (pUVar15->bAssignIndexPartition != false) {
          if ((local_1b8.Object == (FPCGDataCollectionDesc *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            pTVar13 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar5)();
            return pTVar13;
          }
          FVar6 = PCGMetadataDomainID::Default;
          local_140._0_8_ = pUVar15->PartitionIndexAttributeName;
          local_140[0x18] = Int;
          local_140._32_8_ = &___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
          local_140[8] = PCGMetadataDomainID::Default.Flag;
          local_140._9_3_ = PCGMetadataDomainID::Default._1_3_;
          local_140._12_4_ = PCGMetadataDomainID::Default.CustomFlag;
          local_140._16_4_ = PCGMetadataDomainID::Default.DebugName.ComparisonIndex.Value;
          local_140._20_4_ = PCGMetadataDomainID::Default.DebugName.Number;
          local_118 = 0;
          local_110 = 0;
          local_108 = 0;
          local_100 = 0;
          local_f8 = 0;
          local_f0 = 0;
          local_e8 = 0;
          PCGMetadataDomainID::Default = FVar6;
          FPCGDataCollectionDesc::AddAttributeToAllData
                    (local_1b8.Object,(FPCGKernelAttributeKey *)local_140,param_2,
                     (TArray<int,TSizedDefaultAllocator<32>_> *)0x0);
        }
        __return_storage_ptr__->Object = local_1b8.Object;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             local_1b8.SharedReferenceCount.ReferenceController;
        if (local_1b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_1b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_1b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
LAB_149afac5f:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1b8.SharedReferenceCount.ReferenceController);
        if (local_1c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1e0.SharedReferenceCount.ReferenceController);
        return __return_storage_ptr__;
      }
    }
    else if (1 < (byte)LogPCG._0_1_) {
      if ((local_1e0.Object == (FPCGDataCollectionDesc *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar5)();
        return pTVar13;
      }
      if ((((local_1e0.Object)->DataDescs).ArrayNum < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar5)();
        return pTVar13;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    __return_storage_ptr__->Object = (FPCGDataCollectionDesc *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (local_1c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.AllocatorInstance.Data);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1e0.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e0.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// ComputeThreadCount @ 149afada0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
UPCGMetadataPartitionKernel::ComputeThreadCount
          (UPCGMetadataPartitionKernel *this,UPCGDataBinding *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_18;
  
  UPCGDataBinding::GetCachedKernelPinDataDesc
            (param_1,&local_18,(UPCGComputeKernel *)this,PCGPinConstants::DefaultOutputLabel,false);
  if (local_18.Object == (FPCGDataCollectionDesc *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6997787187420856521>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataPartitionKernel.cpp"
                       ,0xc9,"OutputPinDesc");
    if (!bVar2) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      return 0;
    }
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  if ((local_18.Object == (FPCGDataCollectionDesc *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  uVar4 = FPCGDataCollectionDesc::ComputeTotalElementCount(local_18.Object);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return uVar4;
}

// GetInputPins @ 149b16160

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

void __thiscall
UPCGMetadataPartitionKernel::GetInputPins
          (UPCGMetadataPartitionKernel *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FText *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
  FPCGDataTypeIdentifier local_28;
  
  iVar2 = param_1->ArrayNum;
  if (iVar2 == param_1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar2 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  pFVar3 = FText::GetEmpty();
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Point);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPinConstants::DefaultInputLabel,pFVar4,true,true,pFVar3);
  iVar2 = param_1->ArrayNum;
  if (iVar2 == param_1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar2 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  pFVar3 = FText::GetEmpty();
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Param);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGMetadataPartitionConstants::ElementCountsPinLabel,pFVar4,true,true,pFVar3);
  return;
}

// GetKernelAttributeKeys @ 149b16540

void __thiscall
UPCGMetadataPartitionKernel::GetKernelAttributeKeys
          (UPCGMetadataPartitionKernel *this,
          TArray<FPCGKernelAttributeKey,TSizedDefaultAllocator<32>_> *param_1)

{
  uint uVar1;
  FName *pFVar2;
  code *pcVar3;
  FString *pFVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  UPCGSettings *pUVar8;
  UPCGMetadataPartitionSettings *pUVar9;
  ulonglong uVar10;
  FPCGAttributePropertySelector *pFVar11;
  FName *pFVar12;
  FPCGAttributePropertySelector *this_00;
  undefined1 local_res8 [8];
  FName local_118;
  FName FStack_110;
  FName local_108;
  undefined1 local_100;
  undefined **local_f8;
  uint local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  FString *local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined1 local_b8 [40];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  FString *local_70;
  undefined8 local_68;
  undefined1 local_60;
  FName local_58;
  undefined1 auStack_50 [16];
  
  pUVar8 = (UPCGSettings *)(**(code **)(*(longlong *)this + 0x2b0))();
  pUVar9 = CastChecked<UPCGMetadataPartitionSettings,UPCGSettings_const_>(pUVar8);
  this_00 = (FPCGAttributePropertySelector *)
            (pUVar9->PartitionAttributeSelectors).AllocatorInstance.Data;
  uVar1 = (pUVar9->PartitionAttributeSelectors).ArrayNum;
  uVar10 = (ulonglong)(int)uVar1;
  pFVar11 = this_00 + uVar10;
  while( true ) {
    if ((pUVar9->PartitionAttributeSelectors).ArrayNum != (int)uVar10) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FPCGAttributePropertyInputSelector_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar11) break;
    bVar6 = FPCGAttributePropertySelector::IsBasicAttribute(this_00);
    if (bVar6) {
      auStack_50._8_4_ = PCGMetadataDomainID::Default.DebugName.ComparisonIndex.Value;
      auStack_50._12_4_ = PCGMetadataDomainID::Default.DebugName.Number;
      auStack_50[0] = PCGMetadataDomainID::Default.Flag;
      auStack_50._1_3_ = PCGMetadataDomainID::Default._1_3_;
      auStack_50._4_4_ = PCGMetadataDomainID::Default.CustomFlag;
      local_118 = this_00->AttributeName;
      pFVar2 = (FName *)(param_1->AllocatorInstance).Data;
      local_108 = PCGMetadataDomainID::Default.DebugName;
      local_100 = 10;
      local_f0 = 0;
      uStack_ec = 0;
      local_e8 = 0;
      uStack_e4 = 0;
      local_e0 = 0;
      uStack_dc = 0;
      local_d8 = 0;
      local_d0 = (FString *)0x0;
      local_c8 = 0;
      local_c0 = 0;
      local_f8 = &___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
      FStack_110 = (FName)PCGMetadataDomainID::Default._0_8_;
      local_58 = local_118;
      if (((pFVar2 <= &local_118) && (&local_118 < pFVar2 + (longlong)param_1->ArrayMax * 0xc)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = param_1->ArrayNum;
      if (iVar7 == param_1->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x860,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      pFVar4 = local_d0;
      param_1->ArrayNum = iVar7 + 1;
      pFVar12 = (FName *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x60);
      *pFVar12 = local_118;
      pFVar12[1] = FStack_110;
      pFVar2 = pFVar12 + 9;
      pFVar12[2] = local_108;
      *(undefined1 *)&pFVar12[3].ComparisonIndex.Value = local_100;
      pFVar12[4] = (FName)&___7FPCGAttributePropertySelector__6B_;
      pFVar12[5].ComparisonIndex.Value = local_f0;
      *(ulonglong *)&pFVar12[5].Number = CONCAT44(local_e8,uStack_ec);
      *(ulonglong *)&pFVar12[6].Number = CONCAT44(local_e0,uStack_e4);
      *(ulonglong *)&pFVar12[7].Number = CONCAT44(local_d8,uStack_dc);
      pFVar2->ComparisonIndex = 0;
      pFVar2->Number = 0;
      uVar5 = (uint)local_c8;
      pFVar12[10].ComparisonIndex.Value = (uint)local_c8;
      if ((uint)local_c8 == 0) {
        pFVar12[10].Number = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,(uint)local_c8,0,(ForAnyElementType *)pFVar2,(uint)local_c8,
                   (int *)&pFVar12[10].Number);
        ConstructItems<FString,FString,int>((void *)*pFVar2,pFVar4,uVar5);
      }
      *(undefined1 *)&pFVar12[0xb].ComparisonIndex.Value = local_c0;
      pFVar12[4] = (FName)&___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
      DestructItems<FString,int>(local_d0,(uint)local_c8);
      if (local_d0 != (FString *)0x0) {
        FMemory::Free(local_d0);
      }
    }
    uVar10 = (ulonglong)uVar1;
    this_00 = this_00 + 1;
  }
  if (pUVar9->bAssignIndexPartition != false) {
    local_b8._0_8_ = pUVar9->PartitionIndexAttributeName;
    local_b8[8] = PCGMetadataDomainID::Default.Flag;
    local_b8._9_3_ = PCGMetadataDomainID::Default._1_3_;
    local_b8._12_4_ = PCGMetadataDomainID::Default.CustomFlag;
    local_b8._16_4_ = PCGMetadataDomainID::Default.DebugName.ComparisonIndex.Value;
    local_b8._20_4_ = PCGMetadataDomainID::Default.DebugName.Number;
    local_b8[0x18] = Int;
    local_90 = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = (FString *)0x0;
    local_68 = 0;
    local_60 = 0;
    local_b8._32_8_ = &___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
    TArray<FPCGKernelAttributeKey,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<FPCGKernelAttributeKey>(param_1,(FPCGKernelAttributeKey *)local_b8);
    DestructItems<FString,int>(local_70,(int)local_68);
    if (local_70 != (FString *)0x0) {
      FMemory::Free(local_70);
    }
  }
  return;
}

// GetOutputPins @ 149b169b0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

void __thiscall
UPCGMetadataPartitionKernel::GetOutputPins
          (UPCGMetadataPartitionKernel *this,
          TArray<FPCGPinPropertiesGPU,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FPCGDataTypeIdentifier *pFVar3;
  FPCGDataTypeIdentifier local_28;
  
  iVar2 = param_1->ArrayNum;
  if (iVar2 == param_1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x878,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar2 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  pFVar3 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Point);
  FPCGPinPropertiesGPU::FPCGPinPropertiesGPU
            ((FPCGPinPropertiesGPU *)(pFVar1 + (longlong)iVar2 * 0x78),
             &PCGPinConstants::DefaultOutputLabel,pFVar3);
  return;
}

// GetPrivateStaticClass @ 149b181b0

UClass * __cdecl UPCGMetadataPartitionKernel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMetadataPartitionKernel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeKernel::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMetadataPartitionKernel",
               &Z_Registration_Info_UClass_UPCGMetadataPartitionKernel.InnerSingleton,
               StaticRegisterNativesUPCGMetadataPartitionKernel,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMetadataPartitionKernel>,
               InternalVTableHelperCtorCaller<UPCGMetadataPartitionKernel>,local_res8,
               UPCGComputeKernel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMetadataPartitionKernel.InnerSingleton;
}

// IsKernelDataValid @ 149b1cfd0

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
UPCGMetadataPartitionKernel::IsKernelDataValid
          (UPCGMetadataPartitionKernel *this,FPCGContext *param_1)

{
  int iVar1;
  code *pcVar2;
  FPCGMetadataDomainID FVar3;
  bool bVar4;
  char cVar5;
  undefined1 uVar6;
  UPCGSettings *pUVar7;
  UPCGMetadataPartitionSettings *pUVar8;
  FText *pFVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  FPCGContext *pFVar12;
  bool bVar13;
  bool local_res18 [8];
  bool local_res20 [8];
  FName local_1c8;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_1c0;
  undefined1 local_1a8 [48];
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  FString *pFStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  ForAnyElementType local_140;
  undefined8 local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FText local_e8;
  FText local_d8;
  FName local_c8;
  FPCGMetadataDomainID FStack_c0;
  FPCGAttributeIdentifier local_a8;
  FText local_88;
  FTextFormat local_78;
  FText local_68;
  FTextFormat local_58;
  FText local_48;
  FTextFormat local_38;
  
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId26,"UPCGMetadataPartitionKernel::IsKernelDataValid",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataPartitionKernel.cpp"
               ,0x1a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId26);
  }
  bVar4 = UPCGComputeKernel::IsKernelDataValid((UPCGComputeKernel *)this,param_1);
  if (!bVar4) {
    bVar4 = false;
    goto LAB_149b1d506;
  }
  cVar5 = (**(code **)(param_1->_padding_ + 0x10))(param_1);
  pFVar12 = (FPCGContext *)0x0;
  if (cVar5 != '\0') {
    pFVar12 = param_1;
  }
  if ((pFVar12 == (FPCGContext *)0x0) || (pFVar12[1]._padding_ == 0)) {
LAB_149b1d4f3:
    bVar4 = true;
    goto LAB_149b1d506;
  }
  pUVar7 = (UPCGSettings *)(**(code **)(*(longlong *)this + 0x2b0))(this);
  pUVar8 = CastChecked<UPCGMetadataPartitionSettings,UPCGSettings_const_>(pUVar7);
  if (((pUVar8->PartitionAttributeSelectors).ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  local_1c8 = *(FName *)((pUVar8->PartitionAttributeSelectors).AllocatorInstance.Data + 0x14);
  UPCGDataBinding::GetCachedKernelPinDataDesc
            ((UPCGDataBinding *)pFVar12[1]._padding_,&local_1c0,(UPCGComputeKernel *)this,
             PCGPinConstants::DefaultInputLabel,true);
  if (local_1c0.Object == (FPCGDataCollectionDesc *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6997787187420856362>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataPartitionKernel.cpp"
                       ,0x2a,"InputDesc");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  else {
    local_1a8._0_4_ = -1;
    local_140.Data = (FScriptContainerElement *)0x0;
    local_138._0_4_ = 0;
    local_138._4_4_ = 0;
    local_res20[0] = false;
    local_res18[0] = false;
    local_1a8._8_4_ = 0;
    local_1a8._12_4_ = 0;
    local_1a8[0x10] = Default;
    local_1a8._17_3_ = 0;
    local_1a8._20_4_ = -1;
    local_1a8._24_4_ = 0;
    local_1a8._28_4_ = 0;
    local_1a8[0x20] = Float;
    local_1a8._33_3_ = 0;
    local_1a8._36_4_ = 0;
    uStack_178 = 0;
    local_1a8._40_8_ = &___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
    local_170 = 0;
    uStack_168 = 0;
    local_160 = 0;
    pFStack_158 = (FString *)0x0;
    local_150 = 0;
    uStack_148 = 0;
    if ((local_1c0.Object == (FPCGDataCollectionDesc *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    local_c8 = local_1c8;
    FStack_c0 = PCGMetadataDomainID::Default;
    FVar3 = FStack_c0;
    FStack_c0._0_8_ = PCGMetadataDomainID::Default._0_8_;
    local_a8.Name = local_1c8;
    local_a8.MetadataDomain.Flag = FStack_c0.Flag;
    local_a8.MetadataDomain._1_3_ = FStack_c0._1_3_;
    local_a8.MetadataDomain.CustomFlag = FStack_c0.CustomFlag;
    local_a8.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
    FStack_c0 = FVar3;
    FPCGDataCollectionDesc::GetAttributeDesc
              (local_1c0.Object,&local_a8,(FPCGKernelAttributeDesc *)local_1a8,local_res20,
               local_res18);
    if (local_res18[0] == false) {
      if ((local_1c0.Object == (FPCGDataCollectionDesc *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      iVar1 = ((local_1c0.Object)->DataDescs).ArrayNum;
      if (iVar1 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return (bool)uVar6;
        }
LAB_149b1d2d1:
        pFVar9 = FText::FromName(&local_88,&local_1c8);
        pFVar10 = FText::AsLocalizable_Advanced_LocText
                            (&local_118,L"PCGMetadataPartitionKernel",L"PartitionAttributeMissing",
                             L"Partition attribute was not present on all incoming data.");
        pFVar11 = FTextFormat::FTextFormat(&local_78,pFVar10,Default);
        pFVar9 = FText::Format<FText>(&local_128,pFVar11,pFVar9);
        pUVar7 = (UPCGSettings *)(**(code **)(*(longlong *)this + 0x2b0))(this);
        PCGComputeHelpers::LogKernelError(param_1,pUVar7,pFVar9);
        local_d8.TextData.Reference = local_118.TextData.Reference;
        if (local_128.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
          local_d8.TextData.Reference = local_118.TextData.Reference;
        }
        goto LAB_149b1d47f;
      }
      if (iVar1 != 0) goto LAB_149b1d2d1;
    }
    else {
      if (local_res20[0] == false) {
        if (local_1a8[0x20] == StringKey) {
          if (local_140.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_140.Data);
          }
          DestructItems<FString,int>(pFStack_158,(int)local_150);
          if (pFStack_158 != (FString *)0x0) {
            FMemory::Free(pFStack_158);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1c0.SharedReferenceCount.ReferenceController);
          goto LAB_149b1d4f3;
        }
        pFVar9 = FText::FromName(&local_48,&local_1c8);
        pFVar10 = FText::AsLocalizable_Advanced_LocText
                            (&local_d8,L"PCGMetadataPartitionKernel",
                             L"PartitionAttributeTypeInvalid",
                             L"Attribute \'{0}\' not usable for partitioning, only attributes of type String Key are currently supported."
                            );
        pFVar11 = FTextFormat::FTextFormat(&local_38,pFVar10,Default);
        pFVar9 = FText::Format<FText>(&local_e8,pFVar11,pFVar9);
        pUVar7 = (UPCGSettings *)(**(code **)(*(longlong *)this + 0x2b0))(this);
        PCGComputeHelpers::LogKernelError(pFVar12,pUVar7,pFVar9);
        if (local_e8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
        }
      }
      else {
        pFVar9 = FText::FromName(&local_68,&local_1c8);
        pFVar10 = FText::AsLocalizable_Advanced_LocText
                            (&local_f8,L"PCGMetadataPartitionKernel",
                             L"PartitionAttributeTypeConflict",
                             L"Attribute \'{0}\' encountered with multiple different types in input data."
                            );
        pFVar11 = FTextFormat::FTextFormat(&local_58,pFVar10,Default);
        pFVar9 = FText::Format<FText>(&local_108,pFVar11,pFVar9);
        pUVar7 = (UPCGSettings *)(**(code **)(*(longlong *)this + 0x2b0))(this);
        PCGComputeHelpers::LogKernelError(param_1,pUVar7,pFVar9);
        local_d8.TextData.Reference = local_f8.TextData.Reference;
        if (local_108.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
          local_d8.TextData.Reference = local_f8.TextData.Reference;
        }
      }
LAB_149b1d47f:
      if (local_d8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
      }
    }
    if (local_140.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data);
    }
    DestructItems<FString,int>(pFStack_158,(int)local_150);
    if (pFStack_158 != (FString *)0x0) {
      FMemory::Free(pFStack_158);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c0.SharedReferenceCount.ReferenceController);
  bVar4 = false;
LAB_149b1d506:
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar4;
}

// StaticRegisterNativesUPCGMetadataPartitionKernel @ 149b2cfc0

void __cdecl UPCGMetadataPartitionKernel::StaticRegisterNativesUPCGMetadataPartitionKernel(void)

{
  return;
}

