// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 12

// StaticClass @ 149c3a830

UClass * __cdecl UPCGStaticMeshSpawnerKernel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGStaticMeshSpawnerKernel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeKernel::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGStaticMeshSpawnerKernel",
               &Z_Registration_Info_UClass_UPCGStaticMeshSpawnerKernel.InnerSingleton,
               StaticRegisterNativesUPCGStaticMeshSpawnerKernel,0xa0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGStaticMeshSpawnerKernel>,
               InternalVTableHelperCtorCaller<UPCGStaticMeshSpawnerKernel>,local_res8,
               UPCGComputeKernel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGStaticMeshSpawnerKernel.InnerSingleton;
}

// UPCGStaticMeshSpawnerKernel @ 149c4bf90

UPCGStaticMeshSpawnerKernel * __thiscall
UPCGStaticMeshSpawnerKernel::UPCGStaticMeshSpawnerKernel
          (UPCGStaticMeshSpawnerKernel *this,FVTableHelper *param_1)

{
  UPCGComputeKernel::UPCGComputeKernel((UPCGComputeKernel *)this,param_1);
  this->bUseRawInstanceCountsBuffer = false;
  this->_padding_ = (longlong)&___7UPCGStaticMeshSpawnerKernel__6B_;
  return this;
}

// UPCGStaticMeshSpawnerKernel @ 149c4bfc0

UPCGStaticMeshSpawnerKernel * __thiscall
UPCGStaticMeshSpawnerKernel::UPCGStaticMeshSpawnerKernel
          (UPCGStaticMeshSpawnerKernel *this,FObjectInitializer *param_1)

{
  UPCGComputeKernel::UPCGComputeKernel((UPCGComputeKernel *)this,param_1);
  this->bUseRawInstanceCountsBuffer = false;
  this->_padding_ = (longlong)&___7UPCGStaticMeshSpawnerKernel__6B_;
  return this;
}

// ~UPCGStaticMeshSpawnerKernel @ 149c4dd90

void __thiscall
UPCGStaticMeshSpawnerKernel::~UPCGStaticMeshSpawnerKernel(UPCGStaticMeshSpawnerKernel *this)

{
  this->_padding_ = (longlong)&___7UPCGStaticMeshSpawnerKernel__6B_;
  UPCGComputeKernel::~UPCGComputeKernel((UPCGComputeKernel *)this);
  return;
}

// AddStaticCreatedStrings @ 149c5c6e0

void __thiscall
UPCGStaticMeshSpawnerKernel::AddStaticCreatedStrings
          (UPCGStaticMeshSpawnerKernel *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  TObjectPtr<UPCGMeshSelectorBase> *this_00;
  int iVar1;
  UPCGMeshSelectorBase *pUVar2;
  bool bVar3;
  UPCGSettings *pUVar4;
  UPCGStaticMeshSpawnerSettings *pUVar5;
  UClass *pUVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  FString local_28;
  
  pUVar4 = (UPCGSettings *)(**(code **)(this->_padding_ + 0x2b0))();
  pUVar5 = CastChecked<UPCGStaticMeshSpawnerSettings,UPCGSettings_const_>(pUVar4);
  this_00 = &pUVar5->MeshSelectorParameters;
  if ((this_00->field0_0x0).DebugPtr != (UPCGMeshSelectorBase *)0x0) {
    pUVar6 = Z_Construct_UClass_UPCGMeshSelectorWeighted_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar6);
    if ((bVar3) && (pUVar2 = (this_00->field0_0x0).DebugPtr, pUVar2 != (UPCGMeshSelectorBase *)0x0))
    {
      lVar7 = *(longlong *)(pUVar2 + 1);
      iVar1 = *(int *)&pUVar2[1].field_0x8;
      lVar8 = (longlong)iVar1 * 0x288 + lVar7;
      while( true ) {
        if (*(int *)&pUVar2[1].field_0x8 != iVar1) {
          `TCheckedPointerIterator<FPCGMeshSelectorWeightedEntry,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (lVar7 == lVar8) break;
        FSoftObjectPath::ToString((FSoftObjectPath *)(lVar7 + 0x1f8),&local_28);
        TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_1,&local_28);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        lVar7 = lVar7 + 0x288;
      }
    }
  }
  return;
}

// ComputeOutputBindingDataDesc @ 149c5eb20

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

TSharedPtr<FPCGDataCollectionDesc_const_,1> * __thiscall
UPCGStaticMeshSpawnerKernel::ComputeOutputBindingDataDesc
          (UPCGStaticMeshSpawnerKernel *this,
          TSharedPtr<FPCGDataCollectionDesc_const_,1> *__return_storage_ptr__,FName param_1,
          UPCGDataBinding *param_2)

{
  TObjectPtr<UPCGMeshSelectorBase> *this_00;
  int iVar1;
  int iVar2;
  UPCGMeshSelectorBase *pUVar3;
  code *pcVar4;
  FPCGDataCollectionDesc *pFVar5;
  FPCGDataDesc *pFVar6;
  FPCGMetadataDomainID FVar7;
  bool bVar8;
  int iVar9;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> *pTVar10;
  UPCGSettings *pUVar11;
  UPCGStaticMeshSpawnerSettings *pUVar12;
  UClass *pUVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  ForAnyElementType FVar18;
  longlong lVar19;
  longlong lVar20;
  FPCGDataDesc *this_01;
  undefined1 local_res18 [8];
  UPCGDataBinding *local_res20;
  undefined1 local_1d8;
  undefined1 local_1d7 [7];
  TArray<int,TSizedDefaultAllocator<32>_> local_1d0;
  int local_1c0 [2];
  TSharedPtr<FPCGDataCollectionDesc,1> local_1b8;
  int local_1a8;
  uint local_1a4;
  TArray<int,TSizedDefaultAllocator<32>_> local_1a0;
  UPCGStaticMeshSpawnerSettings *local_190;
  FString local_188;
  FPCGDataDesc *local_178;
  FName local_170;
  FPCGKernelPin local_168;
  FString local_158;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_148;
  undefined1 local_138 [40];
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined1 local_d8 [40];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_78;
  FName local_68;
  FPCGMetadataDomainID FStack_60;
  FName local_50;
  FPCGMetadataDomainID FStack_48;
  
  local_res20 = param_2;
  if ((param_2 == (UPCGDataBinding *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InBinding",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGStaticMeshSpawnerKernel.cpp"
                         ,0x26,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    pTVar10 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar4)();
    return pTVar10;
  }
  if (param_1 != PCGPinConstants::DefaultOutputLabel) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7514093267726630871>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGStaticMeshSpawnerKernel.cpp"
                       ,0x29,"InOutputPinLabel == PCGPinConstants::DefaultOutputLabel");
    if (!bVar8) {
      __return_storage_ptr__->Object = (FPCGDataCollectionDesc *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      return __return_storage_ptr__;
    }
    pcVar4 = (code *)swi(3);
    pTVar10 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar4)();
    return pTVar10;
  }
  local_168.KernelIndex = *(int *)((longlong)&this->_padding_ + 4);
  local_168.PinLabel = PCGPinConstants::DefaultInputLabel;
  local_168.bIsInput = true;
  UPCGDataBinding::ComputeKernelPinDataDesc(param_2,&local_148,&local_168);
  local_78.Object = local_148.Object;
  local_78.SharedReferenceCount.ReferenceController =
       local_148.SharedReferenceCount.ReferenceController;
  if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FPCGDataCollectionDesc::MakeSharedFrom(&local_1b8,&local_78);
  pUVar11 = (UPCGSettings *)(**(code **)(this->_padding_ + 0x2b0))(this);
  pUVar12 = CastChecked<UPCGStaticMeshSpawnerSettings,UPCGSettings_const_>(pUVar11);
  local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a0.ArrayNum = 0;
  local_1a0.ArrayMax = 0;
  this_00 = &pUVar12->MeshSelectorParameters;
  local_190 = pUVar12;
  if ((this_00->field0_0x0).DebugPtr != (UPCGMeshSelectorBase *)0x0) {
    pUVar13 = Z_Construct_UClass_UPCGMeshSelectorWeighted_NoRegister();
    bVar8 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar13);
    if ((bVar8) && (pUVar3 = (this_00->field0_0x0).DebugPtr, pUVar3 != (UPCGMeshSelectorBase *)0x0))
    {
      iVar1 = *(int *)&pUVar3[1].field_0x8;
      lVar20 = *(longlong *)(pUVar3 + 1);
      lVar19 = (longlong)iVar1 * 0x288 + lVar20;
      while( true ) {
        if (*(int *)&pUVar3[1].field_0x8 != iVar1) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FPCGMeshSelectorWeightedEntry,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res18);
        }
        if (lVar20 == lVar19) break;
        FSoftObjectPath::ToString((FSoftObjectPath *)(lVar20 + 0x1f8),&local_188);
        if ((param_2->bTablesInitialized == (atomic<bool>)0x0) &&
           (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_8122861073268211622>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Compute\\PCGDataBinding.h"
                               ,0x5a,"bTablesInitialized"), bVar8)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar4)();
          return pTVar10;
        }
        pFVar17 = (param_2->StringTable).AllocatorInstance.Data;
        iVar2 = (local_res20->StringTable).ArrayNum;
        uVar14 = local_188.Data._8_8_;
        for (pFVar16 = pFVar17; pFVar16 != pFVar17 + (longlong)iVar2 * 0x10;
            pFVar16 = pFVar16 + 0x10) {
          iVar9 = *(int *)(pFVar16 + 8);
          if (iVar9 == (int)uVar14) {
            if (1 < iVar9) {
              iVar9 = FGenericPlatformStricmp::Stricmp
                                (*(wchar_t **)pFVar16,
                                 (wchar_t *)local_188.Data.AllocatorInstance.Data);
              bVar8 = iVar9 == 0;
              uVar14 = local_188.Data._8_8_;
              goto LAB_149c5ed4d;
            }
LAB_149c5edb3:
            local_1c0[0] = (int)((longlong)pFVar16 - (longlong)pFVar17 >> 4);
            if (local_1c0[0] == -1) goto LAB_149c5ed65;
            TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                      (&local_1a0,local_1c0);
            goto LAB_149c5ed92;
          }
          bVar8 = iVar9 + (int)uVar14 == 1;
LAB_149c5ed4d:
          if (bVar8) goto LAB_149c5edb3;
        }
        local_1c0[0] = -1;
LAB_149c5ed65:
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_7514093267726630846>,true,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGStaticMeshSpawnerKernel.cpp"
                           ,0x42,"StringIndex != INDEX_NONE");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar4)();
          return pTVar10;
        }
LAB_149c5ed92:
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
        lVar20 = lVar20 + 0x288;
        param_2 = local_res20;
      }
      if ((local_1b8.Object == (FPCGDataCollectionDesc *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar4)();
        return pTVar10;
      }
      pUVar12 = local_190;
      FStack_60 = PCGMetadataDomainID::Default;
      FVar7 = FStack_60;
      local_138[0x18] = StringKey;
      local_138._0_8_ = local_190->OutAttributeName;
      FStack_60._0_8_ = PCGMetadataDomainID::Default._0_8_;
      local_110 = 0;
      local_138._16_8_ = PCGMetadataDomainID::Default.DebugName;
      local_138[8] = FStack_60.Flag;
      local_138._9_3_ = FStack_60._1_3_;
      local_138._12_4_ = FStack_60.CustomFlag;
      local_108 = 0;
      local_100 = 0;
      local_f8 = 0;
      local_f0 = 0;
      local_e8 = 0;
      local_e0 = 0;
      local_138._32_8_ = &___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
      local_68 = (FName)local_138._0_8_;
      FStack_60 = FVar7;
      FPCGDataCollectionDesc::AddAttributeToAllData
                (local_1b8.Object,(FPCGKernelAttributeKey *)local_138,param_2,&local_1a0);
      goto LAB_149c5ee84;
    }
    if ((this_00->field0_0x0).DebugPtr != (UPCGMeshSelectorBase *)0x0) {
      pUVar13 = Z_Construct_UClass_UPCGMeshSelectorByAttribute_NoRegister();
      bVar8 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar13);
      if ((bVar8) &&
         (pUVar3 = (this_00->field0_0x0).DebugPtr, pUVar3 != (UPCGMeshSelectorBase *)0x0)) {
        if (*(longlong *)(pUVar3 + 1) != 0) {
          local_1d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1d0.ArrayNum = 0;
          local_1d0.ArrayMax = 0;
          if ((local_1b8.Object == (FPCGDataCollectionDesc *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            pTVar10 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar4)();
            return pTVar10;
          }
          pFVar5 = local_1b8.Object;
          local_1a4 = ((local_1b8.Object)->DataDescs).ArrayNum;
          uVar15 = (ulonglong)(int)local_1a4;
          this_01 = (FPCGDataDesc *)((local_1b8.Object)->DataDescs).AllocatorInstance.Data;
          local_178 = this_01 + uVar15;
          while( true ) {
            pFVar6 = local_178;
            if ((pFVar5->DataDescs).ArrayNum != (int)uVar15) {
              local_1d8 = 0;
              `TCheckedPointerIterator<FPCGDataDesc,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_1d8);
            }
            if (this_01 == pFVar6) break;
            iVar1 = local_1d0.ArrayMax;
            local_1d0._8_8_ = local_1d0._8_8_ & 0xffffffff00000000;
            if (iVar1 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,0,&local_1d0.AllocatorInstance,0,&local_1d0.ArrayMax);
            }
            iVar1 = (this_01->AttributeDescs).ArrayNum;
            pFVar17 = (this_01->AttributeDescs).AllocatorInstance.Data;
            if ((iVar1 < 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar8)) {
              pcVar4 = (code *)swi(3);
              pTVar10 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar4)();
              return pTVar10;
            }
            pFVar16 = pFVar17 + (longlong)iVar1 * 0x78;
            if (pFVar17 != pFVar16) {
              do {
                if (*(longlong *)(pFVar17 + 8) == *(longlong *)(pUVar3 + 1)) {
                  if (&local_1d0 != (TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar17 + 0x68)) {
                    iVar1 = *(int *)(pFVar17 + 0x70);
                    pFVar17 = (((TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar17 + 0x68))->
                              AllocatorInstance).Data;
                    local_1d0.ArrayNum = iVar1;
                    if ((iVar1 == 0) && (local_1d0.ArrayMax == 0)) {
                      local_1d0.ArrayNum = 0;
                      local_1d0.ArrayMax = 0;
                    }
                    else {
                      UE::Core::Private::
                      ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (4,4,iVar1,local_1d0.ArrayMax,&local_1d0.AllocatorInstance,iVar1,
                                 &local_1d0.ArrayMax);
                      if (iVar1 != 0) {
                        memcpy(local_1d0.AllocatorInstance.Data,pFVar17,(longlong)iVar1 << 2);
                      }
                    }
                  }
                  break;
                }
                pFVar17 = pFVar17 + 0x78;
              } while (pFVar17 != pFVar16);
            }
            iVar1 = local_1d0.ArrayNum;
            pFVar17 = local_1d0.AllocatorInstance.Data + (longlong)local_1d0.ArrayNum * 4;
            FVar18.Data = local_1d0.AllocatorInstance.Data;
            while( true ) {
              if (local_1d0.ArrayNum != iVar1) {
                local_1d7[0] = 0;
                `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (local_1d7);
              }
              pUVar12 = local_190;
              if (FVar18.Data == pFVar17) break;
              local_1a8 = *(int *)FVar18.Data;
              TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                        (&local_1a0,&local_1a8);
              FVar18.Data = FVar18.Data + 4;
            }
            FStack_48 = PCGMetadataDomainID::Default;
            FVar7 = FStack_48;
            local_d8[0x18] = StringKey;
            local_d8._0_8_ = local_190->OutAttributeName;
            FStack_48._0_8_ = PCGMetadataDomainID::Default._0_8_;
            local_b0 = 0;
            local_d8._16_8_ = PCGMetadataDomainID::Default.DebugName;
            local_d8[8] = FStack_48.Flag;
            local_d8._9_3_ = FStack_48._1_3_;
            local_d8._12_4_ = FStack_48.CustomFlag;
            local_a8 = 0;
            local_a0 = 0;
            local_98 = 0;
            local_90 = 0;
            local_88 = 0;
            local_80 = 0;
            local_d8._32_8_ = &___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
            local_50 = (FName)local_d8._0_8_;
            FStack_48 = FVar7;
            FPCGDataDesc::AddAttribute
                      (this_01,(FPCGKernelAttributeKey *)local_d8,local_res20,&local_1d0);
            uVar15 = (ulonglong)local_1a4;
            this_01 = this_01 + 1;
          }
          if (local_1d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d0.AllocatorInstance.Data);
          }
        }
        goto LAB_149c5ee84;
      }
    }
  }
  pUVar3 = (pUVar12->MeshSelectorParameters).field0_0x0.DebugPtr;
  if ((pUVar3 != (UPCGMeshSelectorBase *)0x0) && (1 < (byte)LogPCG._0_1_)) {
    local_170.ComparisonIndex.Value = *(uint *)&pUVar3->field_0x18;
    local_170.Number = *(uint *)&pUVar3->field_0x1c;
    ::FName::ToString(&local_170,&local_158);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
  }
LAB_149c5ee84:
  if ((pUVar12->bApplyMeshBoundsToPoints != false) && (1 < local_1a0.ArrayNum)) {
    if ((local_1b8.Object == (FPCGDataCollectionDesc *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar4)();
      return pTVar10;
    }
    FPCGDataCollectionDesc::AllocatePropertiesForAllData(local_1b8.Object,BoundsMax|BoundsMin);
  }
  if (local_1a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.AllocatorInstance.Data);
  }
  __return_storage_ptr__->Object = local_1b8.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_1b8.SharedReferenceCount.ReferenceController;
  if (local_1b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// ComputeThreadCount @ 149c5f240

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
UPCGStaticMeshSpawnerKernel::ComputeThreadCount
          (UPCGStaticMeshSpawnerKernel *this,UPCGDataBinding *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_18;
  
  UPCGDataBinding::GetCachedKernelPinDataDesc
            (param_1,&local_18,(UPCGComputeKernel *)this,PCGPinConstants::DefaultInputLabel,true);
  if (local_18.Object == (FPCGDataCollectionDesc *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7514093267726630791>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGStaticMeshSpawnerKernel.cpp"
                       ,0x79,"InputPinDesc");
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

// GetInputPins @ 149c77610

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

void __thiscall
UPCGStaticMeshSpawnerKernel::GetInputPins
          (UPCGStaticMeshSpawnerKernel *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FText *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
  UScriptStruct *pUVar5;
  int *piVar6;
  FPCGDataTypeBaseId *pFVar7;
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
  iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (this->bUseRawInstanceCountsBuffer == false) {
    pFVar7 = &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoParam::AsId(void)'
              ::__l2::Id;
    if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoParam::AsId(void)'
        ::__l2::_thread_safe_static_guard_0__ <= iVar2) goto LAB_149c77731;
    _Init_thread_header(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoParam::AsId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoParam::AsId(void)'
        ::__l2::_thread_safe_static_guard_0__ != -1) goto LAB_149c77731;
    pUVar5 = FPCGDataTypeInfoParam::StaticStruct();
    FPCGDataTypeBaseId::FPCGDataTypeBaseId
              (&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoParam::AsId(void)'
                ::__l2::Id,pUVar5);
    piVar6 = &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoParam::AsId(void)'
              ::__l2::_thread_safe_static_guard_0__;
  }
  else {
    pFVar7 = &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoRawBuffer::AsId(void)'
              ::__l2::Id;
    if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoRawBuffer::AsId(void)'
        ::__l2::_thread_safe_static_guard_0__ <= iVar2) goto LAB_149c77731;
    _Init_thread_header(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoRawBuffer::AsId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoRawBuffer::AsId(void)'
        ::__l2::_thread_safe_static_guard_0__ != -1) goto LAB_149c77731;
    pUVar5 = FPCGDataTypeInfoRawBuffer::StaticStruct();
    FPCGDataTypeBaseId::FPCGDataTypeBaseId
              (&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoRawBuffer::AsId(void)'
                ::__l2::Id,pUVar5);
    piVar6 = &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoRawBuffer::AsId(void)'
              ::__l2::_thread_safe_static_guard_0__;
  }
  _Init_thread_footer(piVar6);
LAB_149c77731:
  iVar2 = param_1->ArrayNum;
  if (iVar2 == param_1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar2 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  pFVar3 = FText::GetEmpty();
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,pFVar7);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGStaticMeshSpawnerKernelConstants::InstanceCountsPinLabel,pFVar4,true,true,pFVar3);
  return;
}

// GetKernelAttributeKeys @ 149c777c0

void __thiscall
UPCGStaticMeshSpawnerKernel::GetKernelAttributeKeys
          (UPCGStaticMeshSpawnerKernel *this,
          TArray<FPCGKernelAttributeKey,TSizedDefaultAllocator<32>_> *param_1)

{
  UPCGSettings *pUVar1;
  UPCGStaticMeshSpawnerSettings *pUVar2;
  undefined1 local_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  FString *local_20;
  undefined8 local_18;
  undefined1 local_10;
  
  pUVar1 = (UPCGSettings *)(**(code **)(this->_padding_ + 0x2b0))();
  pUVar2 = CastChecked<UPCGStaticMeshSpawnerSettings,UPCGSettings_const_>(pUVar1);
  local_68[0x18] = StringKey;
  local_68._0_8_ = pUVar2->OutAttributeName;
  local_68[8] = PCGMetadataDomainID::Default.Flag;
  local_68._9_3_ = PCGMetadataDomainID::Default._1_3_;
  local_68._12_4_ = PCGMetadataDomainID::Default.CustomFlag;
  local_68._16_4_ = PCGMetadataDomainID::Default.DebugName.ComparisonIndex.Value;
  local_68._20_4_ = PCGMetadataDomainID::Default.DebugName.Number;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = (FString *)0x0;
  local_18 = 0;
  local_10 = 0;
  local_68._32_8_ = &___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
  TArray<FPCGKernelAttributeKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FPCGKernelAttributeKey>
            (param_1,(FPCGKernelAttributeKey *)local_68);
  DestructItems<FString,int>(local_20,(int)local_18);
  if (local_20 != (FString *)0x0) {
    FMemory::Free(local_20);
  }
  return;
}

// GetOutputPins @ 149c77a80

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

void __thiscall
UPCGStaticMeshSpawnerKernel::GetOutputPins
          (UPCGStaticMeshSpawnerKernel *this,
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

// GetPrivateStaticClass @ 149c789f0

UClass * __cdecl UPCGStaticMeshSpawnerKernel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGStaticMeshSpawnerKernel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeKernel::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGStaticMeshSpawnerKernel",
               &Z_Registration_Info_UClass_UPCGStaticMeshSpawnerKernel.InnerSingleton,
               StaticRegisterNativesUPCGStaticMeshSpawnerKernel,0xa0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGStaticMeshSpawnerKernel>,
               InternalVTableHelperCtorCaller<UPCGStaticMeshSpawnerKernel>,local_res8,
               UPCGComputeKernel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGStaticMeshSpawnerKernel.InnerSingleton;
}

// StaticRegisterNativesUPCGStaticMeshSpawnerKernel @ 149c92010

void __cdecl UPCGStaticMeshSpawnerKernel::StaticRegisterNativesUPCGStaticMeshSpawnerKernel(void)

{
  return;
}

