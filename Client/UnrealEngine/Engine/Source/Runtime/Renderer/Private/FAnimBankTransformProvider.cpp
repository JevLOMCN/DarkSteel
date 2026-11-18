// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 8

// InitExtension @ 145651d30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FAnimBankTransformProvider::InitExtension(FAnimBankTransformProvider *this,FScene *param_1)

{
  FSkinningTransformProvider *this_00;
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  undefined1 *puVar5;
  undefined1 local_b8 [8];
  FDelegateAllocation local_b0;
  undefined1 local_a0 [8];
  FDelegateAllocation local_98;
  FDestructionSentinel local_88;
  FDestructionSentinel local_70;
  FDestructionSentinel local_58;
  FDelegateAllocation *local_40;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  if ((-1 < (int)FSkinningTransformProvider::ExtensionRegistration._8_4_) &&
     ((int)FSkinningTransformProvider::ExtensionRegistration._8_4_ <
      *(int *)&(param_1->SceneExtensions).Extensions.field_0x28)) {
    puVar5 = *(undefined1 **)&(param_1->SceneExtensions).Extensions.field_0x20;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(param_1->SceneExtensions).Extensions.field_0x10;
    }
    if (((*(uint *)(puVar5 + (longlong)
                             ((int)(FSkinningTransformProvider::ExtensionRegistration._8_4_ +
                                   ((int)FSkinningTransformProvider::ExtensionRegistration._8_4_ >>
                                    0x1f & 0x1fU)) >> 5) * 4) >>
          (FSkinningTransformProvider::ExtensionRegistration._8_4_ & 0x1f) & 1) != 0) &&
       (this_00 = *(FSkinningTransformProvider **)
                   (*(longlong *)&(param_1->SceneExtensions).Extensions +
                   (longlong)(int)FSkinningTransformProvider::ExtensionRegistration._8_4_ * 8),
       this_00 != (FSkinningTransformProvider *)0x0)) {
      local_b8 = (undefined1  [8])0x0;
      local_b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_b0.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b8,
                 (FWriteAccessScope *)&local_58);
      local_40 = &local_b0;
      puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_b0);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEAUFProviderContext_FSkinningTransformProvider___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar4 = FDelegateHandle::GenerateNewID();
        puVar3[2] = uVar4;
        puVar3[4] = ProvideGPUBankTransforms;
        *puVar3 = &
                  ___7__TBaseRawMethodDelegateInstance__0A_VFAnimBankTransformProvider____A6AXAEAUFProviderContext_FSkinningTransformProvider___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar3[3] = this;
        if ((this == (FAnimBankTransformProvider *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("InUserObject != nullptr && MethodPtr != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                               ,0x1d8,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (local_58.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
      }
      FSkinningTransformProvider::RegisterProvider
                (this_00,&AnimBankGPUProviderId,
                 (TDelegate<void___cdecl(FSkinningTransformProvider::FProviderContext_&),FDefaultDelegateUserPolicy>
                  *)local_b8,false);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b8,
                 (FWriteAccessScope *)&local_88);
      if ((local_b0.DelegateSize != 0) &&
         (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_b0.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_b0,0,0,0x10);
        local_b0.DelegateSize = 0;
      }
      if (local_88.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
      }
      if (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_b0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_b8);
      local_a0 = (undefined1  [8])0x0;
      local_98.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_98.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a0,
                 (FWriteAccessScope *)&local_38);
      local_20 = &local_98;
      puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_98);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEAUFProviderContext_FSkinningTransformProvider___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar4 = FDelegateHandle::GenerateNewID();
        puVar3[2] = uVar4;
        puVar3[4] = ProvideCPUBankTransforms;
        *puVar3 = &
                  ___7__TBaseRawMethodDelegateInstance__0A_VFAnimBankTransformProvider____A6AXAEAUFProviderContext_FSkinningTransformProvider___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar3[3] = this;
        if ((this == (FAnimBankTransformProvider *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("InUserObject != nullptr && MethodPtr != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                               ,0x1d8,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (local_38.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
      }
      FSkinningTransformProvider::RegisterProvider
                (this_00,&AnimBankCPUProviderId,
                 (TDelegate<void___cdecl(FSkinningTransformProvider::FProviderContext_&),FDefaultDelegateUserPolicy>
                  *)local_a0,false);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a0,
                 (FWriteAccessScope *)&local_70);
      if ((local_98.DelegateSize != 0) &&
         (local_98.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_98.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_98,0,0,0x10);
        local_98.DelegateSize = 0;
      }
      if (local_70.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
      }
      if (local_98.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_98.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_a0);
    }
  }
  return;
}

// AdvanceAnimation @ 1456732a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FAnimBankTransformProvider::AdvanceAnimation
          (FAnimBankTransformProvider *this,FProviderContext *param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  code *pcVar4;
  TConsoleVariableData<float> *pTVar5;
  bool bVar6;
  FIteratorState FVar7;
  TKeyValue<FAnimBankDesc,FAnimBankRecord> *pTVar8;
  undefined4 extraout_var;
  TRobinHoodHashMap<FAnimBankDesc,FAnimBankRecord,FAnimBankDescKeyFuncs,TSizedDefaultAllocator<32>_>
  *this_00;
  uint local_res8 [2];
  undefined1 local_res18 [16];
  
  pTVar5 = CVarAnimBankTimeScale.Ref;
  bVar6 = IsInParallelRenderingThread();
  if (!bVar6) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  fVar1 = pTVar5->ShadowedValue[1];
  this_00 = &this->BankRecordMap;
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FAnimBankDesc,FAnimBankRecord,FAnimBankDescKeyFuncs,TSizedDefaultAllocator<32>_>
  ::FData::Next((FData *)this_00,(FIteratorState)(uint)local_res8);
  uVar3 = *(uint *)&(this->BankRecordMap).field_0x8;
  while (local_res8[0] != uVar3) {
    pTVar8 = Experimental::RobinHoodHashTable_Private::
             TRobinHoodHashTable<FAnimBankDesc,FAnimBankRecord,FAnimBankDescKeyFuncs,TSizedDefaultAllocator<32>_>
             ::FData::Get((FData *)this_00,local_res8[0]);
    if (((pTVar8->Pair).field_0xe0 & 1) != 0) {
      fVar2 = *(float *)&(pTVar8->Pair).field_0xe4;
      *(float *)&(pTVar8->Pair).field_0xe8 = fVar2;
      *(float *)&(pTVar8->Pair).field_0xe4 =
           *(float *)&(pTVar8->Pair).field_0x38 * param_1->DeltaTime * fVar1 + fVar2;
    }
    FVar7 = Experimental::RobinHoodHashTable_Private::
            TRobinHoodHashTable<FAnimBankDesc,FAnimBankRecord,FAnimBankDescKeyFuncs,TSizedDefaultAllocator<32>_>
            ::FData::Next((FData *)this_00,(uint)local_res18);
    local_res8[0] = *(uint *)CONCAT44(extraout_var,FVar7.Index);
  }
  return;
}

// ProvideCPUBankTransforms @ 1456907f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FAnimBankTransformProvider::ProvideCPUBankTransforms
          (FAnimBankTransformProvider *this,FProviderContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_int_const_,int> local_48;
  FAnimBankCPUData local_38;
  
  AdvanceAnimation(this,param_1);
  BuildAnimBankCPUData(&local_38,&this->BankRecordMap,param_1->GraphBuilder);
  if (local_38.bValid != false) {
    if (local_38.IdToOffsetMapping.ArrayNum < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_48.DataPtr = local_38.IdToOffsetMapping.AllocatorInstance.Data;
    ScatterAnimation(this,param_1,&local_48,local_38.TransformBuffer);
  }
  if (local_38.IdToOffsetMapping.AllocatorInstance.Data != (uint *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
              (local_38.IdToOffsetMapping.AllocatorInstance.Data);
    return;
  }
  return;
}

// ProvideGPUBankTransforms @ 1456908d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FAnimBankTransformProvider::ProvideGPUBankTransforms
          (FAnimBankTransformProvider *this,FProviderContext *param_1)

{
  int *piVar1;
  FRDGBuilder *this_00;
  code *pcVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  undefined8 *puVar6;
  FRDGBufferUAV *pFVar7;
  FRDGBufferSRV *pFVar8;
  FGlobalShaderMap *this_01;
  FGlobalShaderType *pFVar9;
  FShaderType *pFVar10;
  FName this_02;
  FRDGEventName *pFVar11;
  FShaderParametersMetadata *pFVar12;
  undefined8 *puVar13;
  undefined1 local_res8 [8];
  undefined1 local_res10 [16];
  undefined8 *local_158;
  FRDGBufferUAVDesc local_150;
  TIntVector3<int>_u_0 local_138;
  FRDGBufferSRVDesc local_128;
  FRDGBufferSRVDesc local_108;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_e8;
  uint *local_d8;
  int iStack_d0;
  FAnimBankGPUData local_c8;
  FString local_88;
  TShaderRefBase<FAnimBankEvaluateCS,FShaderMapPointerTable> local_78;
  TArrayView<unsigned_int_const_,int> local_68;
  FRDGEventName local_58;
  
  puVar13 = (undefined8 *)0x0;
  AdvanceAnimation(this,param_1);
  this_00 = param_1->GraphBuilder;
  BuildAnimBankGPUData(&local_c8,&this->BankRecordMap,this_00);
  if (local_c8.bValid != false) {
    puVar6 = FMemStackBase::Alloc((FMemStackBase *)&this_00->_padding_,0x30,0x10);
    if (puVar6 == (undefined8 *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                         ,0x61,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      puVar6[2] = 0;
      *puVar6 = &___7__TObject_VFParameters_FAnimBankEvaluateCS___FRDGAllocator__6B_;
      puVar6[3] = 0;
      puVar6[4] = 0;
      puVar13 = puVar6;
    }
    local_158 = puVar13;
    if ((((undefined8 **)this_00->_padding_ <= &local_158) &&
        (&local_158 <
         (undefined8 **)this_00->_padding_ + *(int *)((longlong)&this_00->_padding_ + 4))) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = (int)this_00->_padding_;
    piVar1 = (int *)((longlong)&this_00->_padding_ + 4);
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&this_00->_padding_,piVar1);
    }
    *(int *)&this_00->_padding_ = iVar5 + 1;
    local_150.Buffer = local_c8.TransformBuffer;
    *(undefined8 **)(this_00->_padding_ + (longlong)iVar5 * 8) = local_158;
    local_150._padding_._2_1_ = 0;
    bVar4 = 0;
    if ((((local_c8.TransformBuffer)->Desc).Usage & DrawIndirect) != None) {
      bVar4 = 0x1c;
    }
    local_150._padding_._0_2_ = (ushort)bVar4;
    pFVar7 = FRDGBuilder::CreateUAV(this_00,&local_150,None);
    puVar13[4] = pFVar7;
    local_128._padding_._0_1_ = 0;
    local_128.Buffer = local_c8.BankDataBuffer;
    local_128._padding_._4_4_ = 0;
    local_128._padding_._0_4_ = 0xffffffff;
    local_128._padding_ = 0;
    if ((((local_c8.BankDataBuffer)->Desc).Usage & DrawIndirect) != None) {
      local_128._padding_._0_1_ = 0x1c;
    }
    pFVar8 = FRDGBuilder::CreateSRV(this_00,&local_128);
    puVar13[3] = pFVar8;
    local_108._padding_._0_1_ = 0;
    local_108.Buffer = local_c8.BoneBlockBuffer;
    local_108._padding_._4_4_ = 0;
    local_108._padding_._0_4_ = 0xffffffff;
    local_108._padding_ = 0;
    if ((((local_c8.BoneBlockBuffer)->Desc).Usage & DrawIndirect) != None) {
      local_108._padding_._0_1_ = 0x1c;
    }
    pFVar8 = FRDGBuilder::CreateSRV(this_00,&local_108);
    ((FParameters *)(puVar13 + 2))->HeaderBuffer = pFVar8;
    this_01 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]
                                );
    pFVar9 = FAnimBankEvaluateCS::GetStaticType();
    if (*(int *)&pFVar9->field_0x50 != 1) {
      local_res8[0] = 0;
      `FGlobalShaderMap::GetShader<FAnimBankEvaluateCS>'::__l2::<lambda_1>::operator()(local_res8);
    }
    pFVar10 = (FShaderType *)FAnimBankEvaluateCS::GetStaticType();
    FGlobalShaderMap::GetShader(this_01,&local_e8,pFVar10,0);
    if (local_e8.ShaderContent == (FShader *)0x0) {
      this_02 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
      ::FName::ToString((FName *)this_02,&local_88);
      FAnimBankEvaluateCS::GetStaticType();
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                         ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FAnimBankEvaluateCS::GetStaticType();
    local_78.ShaderContent = (FAnimBankEvaluateCS *)local_e8.ShaderContent;
    local_78.ShaderMap = local_e8.ShaderMap;
    pFVar11 = FRDGEventName::FRDGEventName(&local_58,1,L"AnimBankEvaluate");
    pFVar12 = FAnimBankEvaluateCS::FParameters::FTypeInfo::GetStructMetadata();
    local_138._s_0.X = local_c8.BlockCount;
    local_138._s_0.Y = 1;
    local_138._s_0.Z = 1;
    FComputeShaderUtils::AddPass<FAnimBankEvaluateCS>
              (this_00,pFVar11,Compute,&local_78,pFVar12,(FParameters *)(puVar13 + 2),
               (TIntVector3<int> *)&local_138._s_0);
    if (local_58.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.FormattedEventName.Data.AllocatorInstance.Data);
    }
    local_d8 = local_c8.IdToOffsetMapping.AllocatorInstance.Data;
    if ((local_c8.IdToOffsetMapping.ArrayNum < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iStack_d0 = local_c8.IdToOffsetMapping.ArrayNum;
    local_68.DataPtr = local_d8;
    ScatterAnimation(this,param_1,&local_68,local_c8.TransformBuffer);
  }
  if (local_c8.IdToOffsetMapping.AllocatorInstance.Data != (uint *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
              (local_c8.IdToOffsetMapping.AllocatorInstance.Data);
  }
  return;
}

// RegisterBank @ 1456912a0

FAnimBankRecordHandle __thiscall
FAnimBankTransformProvider::RegisterBank(FAnimBankTransformProvider *this,FAnimBankDesc *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  FWeakObjectPtr FVar3;
  FWeakObjectPtr FVar4;
  undefined4 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TKeyValue<FAnimBankDesc,FAnimBankRecord> *pTVar9;
  UObject *pUVar10;
  FAnimBankRecordHandle FVar11;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar12;
  uint uVar13;
  FAnimBankRecord *in_R8;
  float fVar14;
  float fVar15;
  uint local_res10 [2];
  bool local_128 [56];
  void *local_f0;
  undefined8 local_e8;
  void *local_e0;
  undefined8 local_d8;
  void *local_d0;
  undefined8 local_c8;
  void *local_c0;
  undefined8 local_b8;
  void *local_b0;
  undefined8 local_a8;
  void *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  void *local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  
  (param_1->BankAsset).WeakPtr.ObjectIndex = -1;
  (param_1->BankAsset).WeakPtr.ObjectSerialNumber = 0;
  uVar7 = FAnimBankDesc::GetHash(&in_R8->Desc);
  local_128[0x10] = false;
  local_128[0x11] = false;
  local_128[0x12] = false;
  local_128[0x13] = false;
  local_128[0x14] = false;
  local_128[0x15] = false;
  local_128[0x16] = false;
  local_128[0x17] = false;
  local_128[0x30] = false;
  local_128[0x31] = false;
  local_128[0x32] = false;
  local_128[0x33] = false;
  local_128[0x34] = false;
  local_128[0x35] = false;
  local_128[0x36] = false;
  local_128[0x37] = false;
  local_128[0x18] = false;
  local_128[0x19] = false;
  local_128[0x1a] = true;
  local_128[0x1b] = true;
  local_128[0x1c] = true;
  local_128[0x1d] = false;
  local_128[0x1e] = false;
  local_128[0x1f] = false;
  local_90 = 0;
  local_60 = 0;
  local_6c = 0;
  local_64 = 0;
  local_128[0x20] = true;
  local_128[0x21] = true;
  local_128[0x22] = true;
  local_128[0x23] = true;
  local_128[0x24] = true;
  local_128[0x25] = true;
  local_128[0x26] = true;
  local_128[0x27] = true;
  local_128[0x28] = false;
  local_128[0x29] = false;
  local_128[0x2a] = false;
  local_128[0x2b] = false;
  local_128[0x2c] = false;
  local_128[0x2d] = false;
  local_128[0x2e] = false;
  local_128[0x2f] = false;
  local_f0 = (void *)0x0;
  local_128[0] = false;
  local_128[1] = false;
  local_128[2] = false;
  local_128[3] = false;
  local_128[4] = false;
  local_128[5] = false;
  local_128[6] = false;
  local_128[7] = false;
  local_128[8] = false;
  local_128[9] = false;
  local_128[10] = false;
  local_128[0xb] = false;
  local_128[0xc] = false;
  local_128[0xd] = false;
  local_128[0xe] = false;
  local_128[0xf] = false;
  local_e8 = 0;
  local_e0 = (void *)0x0;
  local_d8 = 0;
  local_d0 = (void *)0x0;
  local_c8 = 0;
  local_c0 = (void *)0x0;
  local_b8 = 0;
  local_b0 = (void *)0x0;
  local_a8 = 0;
  local_a0 = (void *)0x0;
  local_98 = 0;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FAnimBankDesc,FAnimBankRecord,FAnimBankDescKeyFuncs,TSizedDefaultAllocator<32>_>
  ::FindOrUpdateIdByHashInternal<0,FAnimBankDesc_const_&,FAnimBankRecord>
            ((TRobinHoodHashTable<FAnimBankDesc,FAnimBankRecord,FAnimBankDescKeyFuncs,TSizedDefaultAllocator<32>_>
              *)&this->BankRecordMap,(FHashType)(uint)local_res10,
             (FAnimBankDesc *)(ulonglong)(uVar7 & 0x7fffffff),in_R8,local_128);
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  if (local_a0 != (void *)0x0) {
    FMemory::Free(local_a0);
  }
  if (local_b0 != (void *)0x0) {
    FMemory::Free(local_b0);
  }
  if (local_c0 != (void *)0x0) {
    FMemory::Free(local_c0);
  }
  if (local_d0 != (void *)0x0) {
    FMemory::Free(local_d0);
  }
  if (local_e0 != (void *)0x0) {
    FMemory::Free(local_e0);
  }
  if (local_f0 != (void *)0x0) {
    FMemory::Free(local_f0);
  }
  (param_1->BankAsset).WeakPtr.ObjectIndex = local_res10[0];
  (param_1->BankAsset).WeakPtr.ObjectSerialNumber = uVar7 & 0x7fffffff;
  pTVar9 = Experimental::RobinHoodHashTable_Private::
           TRobinHoodHashTable<FAnimBankDesc,FAnimBankRecord,FAnimBankDescKeyFuncs,TSizedDefaultAllocator<32>_>
           ::FData::Get((FData *)&this->BankRecordMap,local_res10[0]);
  if (*(int *)&(pTVar9->Pair).field_0x50 == 0) {
    FVar3 = (in_R8->Desc).BankAsset.WeakPtr;
    FVar4 = (in_R8->Desc).Asset.WeakPtr;
    iVar8 = (param_1->BankAsset).WeakPtr.ObjectIndex;
    *(int *)&(pTVar9->Pair).field_0x20 = FVar3.ObjectIndex;
    *(int *)&(pTVar9->Pair).field_0x24 = FVar3.ObjectSerialNumber;
    *(int *)&(pTVar9->Pair).field_0x28 = FVar4.ObjectIndex;
    *(int *)&(pTVar9->Pair).field_0x2c = FVar4.ObjectSerialNumber;
    uVar7 = (in_R8->Desc).SequenceIndex;
    fVar14 = (in_R8->Desc).Position;
    fVar15 = (in_R8->Desc).PlayRate;
    uVar5 = *(undefined4 *)&(in_R8->Desc).field_0x1c;
    *(int *)&(pTVar9->Pair).field_0x40 = iVar8;
    *(uint *)&(pTVar9->Pair).field_0x30 = uVar7;
    *(float *)&(pTVar9->Pair).field_0x34 = fVar14;
    *(float *)&(pTVar9->Pair).field_0x38 = fVar15;
    *(undefined4 *)&(pTVar9->Pair).field_0x3c = uVar5;
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)in_R8);
    if (*(uint *)&pUVar10[6].field_0x10 <= (in_R8->Desc).SequenceIndex) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Desc.SequenceIndex < uint32(BankData.Entries.Num())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Skinning\\AnimBankTransformProvider.cpp"
                         ,0xb5,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        FVar11 = (FAnimBankRecordHandle)(*pcVar2)();
        return FVar11;
      }
    }
    uVar7 = (in_R8->Desc).SequenceIndex;
    uVar13 = 0;
    if ((int)uVar7 < *(int *)&pUVar10[6].field_0x10) {
      uVar13 = ~uVar7 >> 0x1f;
    }
    if (uVar13 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        FVar11 = (FAnimBankRecordHandle)(*pcVar2)();
        return FVar11;
      }
    }
    pTVar12 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
              ((longlong)(int)uVar7 * 0x80 + *(longlong *)&pUVar10[6].field_0x8);
    fVar15 = (float)(*(int *)&pTVar12[7].AllocatorInstance.Data - 1) * __real_3d088889;
    iVar8 = FSpanAllocator::Allocate
                      (&this->BankAllocator,
                       *(int *)((longlong)&pTVar12[7].AllocatorInstance.Data + 4));
    *(int *)&(pTVar9->Pair).field_0x44 = iVar8;
    *(undefined4 *)&(pTVar9->Pair).field_0x48 =
         *(undefined4 *)((longlong)&pTVar12[7].AllocatorInstance.Data + 4);
    fVar14 = (float)pTVar12[6].ArrayNum;
    if (fVar15 <= (float)pTVar12[6].ArrayNum) {
      fVar14 = fVar15;
    }
    if (fVar14 <= 0.0) {
      fVar14 = 0.0;
    }
    *(float *)&(pTVar9->Pair).field_0xe4 = fVar14;
    *(float *)&(pTVar9->Pair).field_0xe8 = fVar14;
    (pTVar9->Pair).field_0xe0 =
         (byte)((uint)pTVar12[7].ArrayNum >> 1) & 1 | (pTVar9->Pair).field_0xe0 & 0xfe;
    *(undefined4 *)&(pTVar9->Pair).field_0x4c = *(undefined4 *)&pTVar12[7].AllocatorInstance.Data;
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
               &(pTVar9->Pair).field_0xc0,pTVar12);
    TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *)
               &(pTVar9->Pair).field_0xd0,
               (TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *)(pTVar12 + 1));
    FSkinnedAssetMapping::operator=
              ((FSkinnedAssetMapping *)&(pTVar9->Pair).field_0x58,
               (FSkinnedAssetMapping *)&pUVar10[3].field_0x18);
    iVar8 = *(int *)((longlong)&pTVar12[7].AllocatorInstance.Data + 4);
    if ((iVar8 != *(int *)&(pTVar9->Pair).field_0xc8) ||
       (iVar8 != *(int *)&(pTVar9->Pair).field_0xd8)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("BankEntry.KeyCount == BankRecord.PositionKeys.Num() && BankEntry.KeyCount == BankRecord.RotationKeys.Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Skinning\\AnimBankTransformProvider.cpp"
                         ,0xc5,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        FVar11 = (FAnimBankRecordHandle)(*pcVar2)();
        return FVar11;
      }
    }
    puVar1 = &(pTVar9->Pair).field_0x50;
    *(int *)puVar1 = *(int *)puVar1 + 1;
  }
  else {
    puVar1 = &(pTVar9->Pair).field_0x50;
    *(int *)puVar1 = *(int *)puVar1 + 1;
  }
  return (FAnimBankRecordHandle)param_1;
}

// ScatterAnimation @ 14569eaa0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FAnimBankTransformProvider::ScatterAnimation
          (FAnimBankTransformProvider *this,FProviderContext *param_1,
          TArrayView<unsigned_int_const_,int> *param_2,FRDGBuffer *param_3)

{
  int *piVar1;
  FProviderIndirection *pFVar2;
  uint *puVar3;
  undefined8 uVar4;
  ushort uVar5;
  FSkinningSceneExtensionProxy *pFVar6;
  code *pcVar7;
  FRDGBuilder *this_00;
  bool bVar8;
  uint uVar9;
  void *pvVar10;
  ulonglong *puVar11;
  FRDGBuffer *pFVar12;
  undefined8 *puVar13;
  FRDGBufferUAV *pFVar14;
  FRDGBufferSRV *pFVar15;
  FGlobalShaderMap *this_01;
  FGlobalShaderType *pFVar16;
  FShaderType *pFVar17;
  FName this_02;
  FRDGEventName *pFVar18;
  FShaderParametersMetadata *pFVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  longlong lVar23;
  uint uVar24;
  ulonglong uVar25;
  uint uVar26;
  FProviderIndirection *pFVar27;
  uint uVar28;
  int iVar29;
  byte bVar30;
  uint uVar31;
  TArrayView<FSkinningSceneExtensionProxy_*_const,int> *pTVar32;
  uint uVar33;
  char local_198;
  byte local_197;
  undefined1 local_196 [6];
  void *local_190;
  uint local_188;
  uint local_184;
  TArrayView<FSkinningSceneExtensionProxy_*_const,int> *local_180;
  uint local_178;
  int local_174;
  uint local_170;
  uint local_16c;
  undefined8 *local_168;
  FProviderIndirection *local_160;
  uint local_158;
  ulonglong *local_150;
  FProviderIndirection *local_148;
  ulonglong local_140;
  FRDGBuilder *local_138;
  FRDGBufferUAVDesc local_130;
  TIntVector3<int>_u_0 local_118;
  undefined4 local_108;
  ulonglong *local_100;
  undefined8 local_f8;
  ulonglong *local_e8;
  uint local_e0;
  FRDGBufferSRVDesc local_d8;
  FRDGBufferSRVDesc local_b8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_98;
  undefined1 local_88 [8];
  FString local_80;
  TShaderRefBase<FAnimBankScatterCS,FShaderMapPointerTable> local_68;
  FRDGEventName local_58;
  
  pFVar27 = (param_1->Indirections).DataPtr;
  local_138 = param_1->GraphBuilder;
  uVar25 = 0;
  uVar28 = 0;
  pFVar2 = pFVar27 + (param_1->Indirections).ArrayNum;
  pTVar32 = &param_1->Proxies;
  local_180 = pTVar32;
  if (pFVar27 == pFVar2) {
    local_140 = 0;
    pvVar10 = FMemStackBase::Alloc((FMemStackBase *)&local_138->_padding_,0,4);
    local_190 = pvVar10;
  }
  else {
    do {
      local_158 = pFVar27->HierarchyOffset;
      uVar4._0_4_ = pFVar27->Index;
      uVar4._4_4_ = pFVar27->TransformOffset;
      local_160 = (FProviderIndirection *)uVar4;
      if (((int)(undefined4)uVar4 < 0 || (param_1->Primitives).ArrayNum <= (int)(undefined4)uVar4)
         && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (((int)(undefined4)uVar4 < 0 || (param_1->Proxies).ArrayNum <= (int)(undefined4)uVar4) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar27 = pFVar27 + 1;
      uVar28 = (int)uVar25 +
               (pTVar32->DataPtr[(int)(undefined4)uVar4]->MaxBoneTransformCount + 0x3f >> 6) *
               (uint)pTVar32->DataPtr[(int)(undefined4)uVar4]->UniqueAnimationCount;
      uVar25 = (ulonglong)uVar28;
    } while (pFVar27 != pFVar2);
    local_140 = uVar25;
    pvVar10 = FMemStackBase::Alloc((FMemStackBase *)&local_138->_padding_,uVar25 * 0x14,4);
    pTVar32 = local_180;
    local_190 = pvVar10;
    if (((int)uVar28 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), pTVar32 = local_180, bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  uVar26 = 0;
  local_148 = (param_1->Indirections).DataPtr;
  local_160 = local_148 + (param_1->Indirections).ArrayNum;
  if (local_148 != local_160) {
    do {
      local_16c = local_148->HierarchyOffset;
      local_f8._0_4_ = local_148->Index;
      local_f8._4_4_ = local_148->TransformOffset;
      lVar23 = (longlong)(int)(undefined4)local_f8;
      if (((int)(undefined4)local_f8 < 0 || pTVar32->ArrayNum <= (int)(undefined4)local_f8) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = pTVar32->DataPtr[lVar23];
      uVar5 = pFVar6->MaxBoneTransformCount;
      local_184 = (uint)uVar5;
      if ((pFVar6->bUseInstancing == '\0') &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Proxy->UseInstancing()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Skinning\\AnimBankTransformProvider.cpp"
                             ,0x269,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_198 = '\0';
      (**(code **)(pFVar6->_padding_ + 0x20))(pFVar6,&local_e8,&local_198);
      if (((local_198 == '\0') || (local_e0 != pFVar6->UniqueAnimationCount)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("bIsValid && BankIds.Num() == Proxy->GetUniqueAnimationCount()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Skinning\\AnimBankTransformProvider.cpp"
                             ,0x26d,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_188 = (uint)(uVar5 >> 6);
      bVar30 = pFVar6->field_0x3e;
      local_174 = (uint)uVar5 + local_188 * -0x40;
      local_150 = local_e8;
      puVar11 = local_e8 + (int)local_e0;
      iVar29 = local_f8._4_4_;
      local_197 = bVar30;
      local_100 = puVar11;
      if (local_e8 != puVar11) {
        do {
          uVar25 = *local_150;
          if (uVar25 != 0xffffffffffffffff) {
            if (((ulonglong)(longlong)param_2->ArrayNum <= uVar25) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("BankId < uint64(IdToOffsetMapping.Num())",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Skinning\\AnimBankTransformProvider.cpp"
                                   ,0x27c,L""), bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar21 = (uint)uVar25;
            uVar31 = 0;
            if ((int)uVar21 < param_2->ArrayNum) {
              uVar31 = ~uVar21 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar31 = 0xffffffff;
            if ((bVar30 & 4) != 0) {
              uVar31 = local_16c;
            }
            uVar20 = 0;
            uVar21 = param_2->DataPtr[(int)uVar21];
            pvVar10 = local_190;
            uVar33 = uVar21;
            local_178 = uVar21;
            local_170 = uVar26;
            if (local_188 != 0) {
              uVar24 = local_184 << 8;
              if ((local_197 & 4) == 0) {
                do {
                  uVar21 = 0;
                  if ((int)uVar26 < (int)uVar28) {
                    uVar21 = ~uVar26 >> 0x1f;
                  }
                  if ((uVar21 == 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                         ,0x14f,
                                         L"Array index out of bounds: %lld from an array of size %lld"
                                        ), pvVar10 = local_190, bVar8)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  lVar23 = (longlong)(int)uVar26;
                  uVar26 = uVar26 + 1;
                  *(undefined1 *)((longlong)pvVar10 + lVar23 * 0x14 + 0x10) = 0x40;
                  puVar3 = (uint *)((longlong)pvVar10 + lVar23 * 0x14 + 0x10);
                  *puVar3 = *puVar3 & 0xff;
                  puVar3 = (uint *)((longlong)pvVar10 + lVar23 * 0x14 + 0x10);
                  *puVar3 = *puVar3 | uVar24;
                  *(uint *)((longlong)pvVar10 + lVar23 * 0x14) = uVar20;
                  uVar20 = uVar20 + 1;
                  *(uint *)((longlong)pvVar10 + lVar23 * 0x14 + 8) = uVar33;
                  uVar33 = uVar33 + 0xc00;
                  *(int *)((longlong)pvVar10 + lVar23 * 0x14 + 0xc) = iVar29;
                  iVar29 = iVar29 + 0xc00;
                  *(uint *)((longlong)pvVar10 + lVar23 * 0x14 + 4) = uVar31;
                  uVar21 = local_178;
                } while (uVar20 < local_188);
              }
              else {
                do {
                  uVar9 = 0;
                  if ((int)uVar26 < (int)uVar28) {
                    uVar9 = ~uVar26 >> 0x1f;
                  }
                  if ((uVar9 == 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                         ,0x14f,
                                         L"Array index out of bounds: %lld from an array of size %lld"
                                        ), pvVar10 = local_190, bVar8)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  lVar23 = (longlong)(int)uVar26;
                  uVar26 = uVar26 + 1;
                  *(undefined1 *)((longlong)pvVar10 + lVar23 * 0x14 + 0x10) = 0x40;
                  puVar3 = (uint *)((longlong)pvVar10 + lVar23 * 0x14 + 0x10);
                  *puVar3 = *puVar3 & 0xff;
                  puVar3 = (uint *)((longlong)pvVar10 + lVar23 * 0x14 + 0x10);
                  *puVar3 = *puVar3 | uVar24;
                  *(uint *)((longlong)pvVar10 + lVar23 * 0x14) = uVar20;
                  uVar20 = uVar20 + 1;
                  *(uint *)((longlong)pvVar10 + lVar23 * 0x14 + 4) = uVar31;
                  uVar31 = uVar31 + 0x100;
                  *(int *)((longlong)pvVar10 + lVar23 * 0x14 + 0xc) = iVar29;
                  iVar29 = iVar29 + 0xc00;
                  *(uint *)((longlong)pvVar10 + lVar23 * 0x14 + 8) = uVar21;
                } while (uVar20 < local_188);
              }
            }
            iVar22 = local_174;
            if (local_174 != 0) {
              uVar20 = 0;
              if ((int)uVar26 < (int)uVar28) {
                uVar20 = ~uVar26 >> 0x1f;
              }
              if ((uVar20 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 pvVar10 = local_190, bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              lVar23 = (longlong)(int)uVar26;
              *(uint *)((longlong)pvVar10 + lVar23 * 0x14) = local_188;
              *(char *)((longlong)pvVar10 + lVar23 * 0x14 + 0x10) = (char)iVar22;
              puVar3 = (uint *)((longlong)pvVar10 + lVar23 * 0x14 + 0x10);
              *puVar3 = *puVar3 & 0xff;
              puVar3 = (uint *)((longlong)pvVar10 + lVar23 * 0x14 + 0x10);
              *puVar3 = *puVar3 | local_184 << 8;
              *(int *)((longlong)pvVar10 + lVar23 * 0x14 + 0xc) = iVar29;
              iVar29 = iVar29 + iVar22 * 0x30;
              uVar26 = uVar26 + 1;
              *(uint *)((longlong)pvVar10 + lVar23 * 0x14 + 8) = uVar33;
              *(uint *)((longlong)pvVar10 + lVar23 * 0x14 + 4) = uVar31;
            }
            uVar31 = local_170;
            uVar33 = local_188;
            if (uVar21 == 0xffffffff) {
              if (local_188 != 0) {
                uVar25 = (ulonglong)local_188;
                uVar21 = local_170;
                do {
                  uVar20 = 0;
                  if ((int)uVar21 < (int)uVar28) {
                    uVar20 = ~uVar21 >> 0x1f;
                  }
                  if ((uVar20 == 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                         ,0x14f,
                                         L"Array index out of bounds: %lld from an array of size %lld"
                                        ), pvVar10 = local_190, bVar8)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  lVar23 = (longlong)(int)uVar21;
                  uVar21 = uVar21 + 1;
                  *(undefined4 *)((longlong)pvVar10 + lVar23 * 0x14 + 8) = 0xffffffff;
                  uVar25 = uVar25 - 1;
                  iVar22 = local_174;
                } while (uVar25 != 0);
              }
              if (iVar22 != 0) {
                uVar31 = uVar31 + uVar33;
                uVar21 = 0;
                if ((int)uVar31 < (int)uVar28) {
                  uVar21 = ~uVar31 >> 0x1f;
                }
                if ((uVar21 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                       ,0x14f,
                                       L"Array index out of bounds: %lld from an array of size %lld"
                                      ), pvVar10 = local_190, bVar8)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                *(undefined4 *)((longlong)pvVar10 + (longlong)(int)uVar31 * 0x14 + 8) = 0xffffffff;
              }
            }
            iVar29 = iVar29 + local_184 * 0x30;
            puVar11 = local_100;
            bVar30 = local_197;
          }
          local_150 = local_150 + 1;
        } while (local_150 != puVar11);
      }
      local_148 = local_148 + 1;
      pvVar10 = local_190;
      pTVar32 = local_180;
    } while (local_148 != local_160);
  }
  this_00 = local_138;
  iVar29 = 1;
  if ((uVar28 * 5 & 0x3fffffff) != 0) {
    iVar29 = uVar28 * 0x14;
  }
  uVar25 = (ulonglong)(iVar29 - 1) * 2 + 1;
  lVar23 = 0x3f;
  if (uVar25 != 0) {
    for (; uVar25 >> lVar23 == 0; lVar23 = lVar23 + -1) {
    }
  }
  local_108 = (undefined4)lVar23;
  pFVar12 = CreateByteAddressBuffer
                      (local_138,L"AnimBank.ScatterHeaders",1 << ((byte)lVar23 & 0x1f),pvVar10,
                       local_140 * 0x14,NoCopy);
  if (param_3 == (FRDGBuffer *)0x0) {
    param_3 = FSystemTextures::GetDefaultByteAddressBuffer
                        ((FSystemTextures *)&GSystemTextures,this_00,8);
  }
  puVar13 = FMemStackBase::Alloc((FMemStackBase *)&this_00->_padding_,0x30,0x10);
  if (puVar13 == (undefined8 *)0x0) {
    puVar13 = (undefined8 *)0x0;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    *puVar13 = &___7__TObject_VFParameters_FAnimBankScatterCS___FRDGAllocator__6B_;
    puVar13[2] = 0;
    puVar13[3] = 0;
    puVar13[4] = 0;
    puVar13[5] = 0;
  }
  local_168 = puVar13;
  if ((((undefined8 **)this_00->_padding_ <= &local_168) &&
      (&local_168 < (undefined8 **)this_00->_padding_ + *(int *)((longlong)&this_00->_padding_ + 4))
      ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar29 = (int)this_00->_padding_;
  piVar1 = (int *)((longlong)&this_00->_padding_ + 4);
  if (iVar29 == *piVar1) {
    iVar29 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&this_00->_padding_,piVar1);
  }
  *(int *)&this_00->_padding_ = iVar29 + 1;
  *(undefined8 **)(this_00->_padding_ + (longlong)iVar29 * 8) = local_168;
  local_130.Buffer = param_1->TransformBuffer;
  local_130._padding_._2_1_ = 0;
  bVar30 = 0;
  if ((((local_130.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar30 = 0x1c;
  }
  local_130._padding_._0_2_ = (ushort)bVar30;
  pFVar14 = FRDGBuilder::CreateUAV(this_00,&local_130,None);
  puVar13[5] = pFVar14;
  local_d8._padding_._4_4_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_._0_4_ = 0xffffffff;
  local_d8._padding_._0_1_ = 0;
  if (((param_3->Desc).Usage & DrawIndirect) != None) {
    local_d8._padding_._0_1_ = 0x1c;
  }
  local_d8.Buffer = param_3;
  pFVar15 = FRDGBuilder::CreateSRV(this_00,&local_d8);
  puVar13[3] = pFVar15;
  puVar13[4] = param_1->HierarchyBufferSRV;
  local_b8._padding_._0_1_ = 0;
  local_b8._padding_._4_4_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_._0_4_ = 0xffffffff;
  if (((pFVar12->Desc).Usage & DrawIndirect) != None) {
    local_b8._padding_._0_1_ = 0x1c;
  }
  local_b8.Buffer = pFVar12;
  pFVar15 = FRDGBuilder::CreateSRV(this_00,&local_b8);
  ((FParameters *)(puVar13 + 2))->HeaderBuffer = pFVar15;
  this_01 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar16 = FAnimBankScatterCS::GetStaticType();
  if (*(int *)&pFVar16->field_0x50 != 1) {
    local_196[0] = 0;
    `FGlobalShaderMap::GetShader<FAnimBankScatterCS>'::__l2::<lambda_1>::operator()(local_196);
  }
  pFVar17 = (FShaderType *)FAnimBankScatterCS::GetStaticType();
  FGlobalShaderMap::GetShader(this_01,&local_98,pFVar17,0);
  if (local_98.ShaderContent == (FShader *)0x0) {
    this_02 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_88);
    ::FName::ToString((FName *)this_02,&local_80);
    FAnimBankScatterCS::GetStaticType();
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  FAnimBankScatterCS::GetStaticType();
  local_68.ShaderContent = (FAnimBankScatterCS *)local_98.ShaderContent;
  local_68.ShaderMap = local_98.ShaderMap;
  pFVar18 = FRDGEventName::FRDGEventName(&local_58,1,L"AnimBankScatter");
  pFVar19 = FAnimBankScatterCS::FParameters::FTypeInfo::GetStructMetadata();
  local_118._s_0.Y = 1;
  local_118._s_0.Z = 1;
  local_118._0_4_ = uVar28;
  FComputeShaderUtils::AddPass<FAnimBankScatterCS>
            (this_00,pFVar18,Compute,&local_68,pFVar19,(FParameters *)(puVar13 + 2),
             (TIntVector3<int> *)&local_118._s_0);
  if (local_58.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.FormattedEventName.Data.AllocatorInstance.Data);
  }
  return;
}

// ShouldCreateExtension @ 1456a1110

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

bool __cdecl FAnimBankTransformProvider::ShouldCreateExtension(FScene *param_1)

{
  bool bVar1;
  EShaderPlatform EVar2;
  
  bVar1 = NaniteSkinnedMeshesSupported();
  if (bVar1) {
    if (*(int *)&param_1->field_0x8 == 5) {
      EVar2 = SP_NumPlatforms;
    }
    else {
      EVar2 = GRHIGlobals.ShaderPlatformForFeatureLevel[*(int *)&param_1->field_0x8];
    }
    bVar1 = DoesRuntimeSupportNanite(EVar2,true,true);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// UnregisterBank @ 1456a5550

void __thiscall
FAnimBankTransformProvider::UnregisterBank
          (FAnimBankTransformProvider *this,FAnimBankRecordHandle *param_1)

{
  undefined1 *puVar1;
  FHashElementId FVar2;
  code *pcVar3;
  bool bVar4;
  TKeyValue<FAnimBankDesc,FAnimBankRecord> *pTVar5;
  
  FVar2.Index = param_1->Id;
  if (FVar2.Index == -1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RecordId.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Skinning\\AnimBankTransformProvider.cpp"
                       ,0xcf,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar5 = Experimental::RobinHoodHashTable_Private::
           TRobinHoodHashTable<FAnimBankDesc,FAnimBankRecord,FAnimBankDescKeyFuncs,TSizedDefaultAllocator<32>_>
           ::FData::Get((FData *)&this->BankRecordMap,FVar2.Index);
  if (*(int *)&(pTVar5->Pair).field_0x50 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("BankRecord.ReferenceCount > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Skinning\\AnimBankTransformProvider.cpp"
                       ,0xd2,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  puVar1 = &(pTVar5->Pair).field_0x50;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (*(int *)puVar1 == 0) {
    FSpanAllocator::Free
              (&this->BankAllocator,*(int *)&(pTVar5->Pair).field_0x44,
               *(int *)&(pTVar5->Pair).field_0x48);
    Experimental::RobinHoodHashTable_Private::
    TRobinHoodHashTable<FAnimBankDesc,FAnimBankRecord,FAnimBankDescKeyFuncs,TSizedDefaultAllocator<32>_>
    ::RemoveByElementId((TRobinHoodHashTable<FAnimBankDesc,FAnimBankRecord,FAnimBankDescKeyFuncs,TSizedDefaultAllocator<32>_>
                         *)&this->BankRecordMap,FVar2);
  }
  return;
}

