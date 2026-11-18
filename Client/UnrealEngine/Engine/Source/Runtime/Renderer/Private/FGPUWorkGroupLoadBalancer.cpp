// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// FinalizeParametersAsync @ 1449192e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FGPUWorkGroupLoadBalancer::FinalizeParametersAsync
          (FGPUWorkGroupLoadBalancer *this,FShaderParameters *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->CurrentWorkGroupNumItems != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentWorkGroupNumItems == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUWorkGroupLoadBalancer.cpp"
                       ,0x18,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  param_1->NumWorkGroupInfos = (this->WorkGroupInfos).ArrayNum;
  param_1->NumItems = (this->Items).ArrayNum;
  return;
}

// GetParametersAsync @ 14491c8c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGPUWorkGroupLoadBalancer::GetParametersAsync
          (FGPUWorkGroupLoadBalancer *this,FRDGBuilder *param_1,FShaderParameters *param_2)

{
  undefined1 uVar1;
  FRDGBuffer *pFVar2;
  FRDGBuffer *pFVar3;
  FRDGBufferSRV *pFVar4;
  longlong *plVar5;
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  longlong local_58;
  FRDGBuffer *local_50;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_58 = (longlong)
             &UE::Core::Private::Function::
              TFunction_OwnedObject<`FGPUWorkGroupLoadBalancer::GetParametersAsync'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FGPUWorkGroupLoadBalancer::GetParametersAsync'::__l2::<lambda_1>,TArray<FGPUWorkGroupLoadBalancer::FWorkGroupInfo,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>
       ::Call;
  local_40 = (longlong *)0x0;
  local_50 = (FRDGBuffer *)this;
  pFVar2 = CreateStructuredBuffer_Impl<TArray<FGPUWorkGroupLoadBalancer::FWorkGroupInfo,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>
                     (param_1,L"GPUWorkGroupLoadBalancer.WorkGroupInfos",
                      (TFunction<TArray<FGPUWorkGroupLoadBalancer::FWorkGroupInfo,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&___cdecl(void)>
                       *)local_68);
  if ((code *)local_68._0_8_ != (code *)0x0) {
    plVar5 = &local_58;
    if (local_40 != (longlong *)0x0) {
      plVar5 = local_40;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  local_40 = (longlong *)0x0;
  local_58 = (longlong)
             &UE::Core::Private::Function::
              TFunction_OwnedObject<`FGPUWorkGroupLoadBalancer::GetParametersAsync'::`2'::<lambda_2>,0,0>
              ::_vftable_;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FGPUWorkGroupLoadBalancer::GetParametersAsync'::__l2::<lambda_2>,TArray<FGPUWorkGroupLoadBalancer::FPackedItem,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>
       ::Call;
  local_50 = (FRDGBuffer *)this;
  pFVar3 = CreateStructuredBuffer_Impl<TArray<FGPUWorkGroupLoadBalancer::FPackedItem,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>
                     (param_1,L"GPUWorkGroupLoadBalancer.Items",
                      (TFunction<TArray<FGPUWorkGroupLoadBalancer::FPackedItem,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&___cdecl(void)>
                       *)local_68);
  if ((code *)local_68._0_8_ != (code *)0x0) {
    plVar5 = &local_58;
    if (local_40 != (longlong *)0x0) {
      plVar5 = local_40;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  local_68._8_4_ = 0xffffffff;
  local_58 = 0;
  uVar1 = 0;
  if (((pFVar2->Desc).Usage & DrawIndirect) != None) {
    uVar1 = 0x1c;
  }
  local_68._0_8_ = CONCAT71(SUB87(local_68._0_8_,1),uVar1) & 0xffffffff;
  local_50 = pFVar2;
  pFVar4 = FRDGBuilder::CreateSRV(param_1,(FRDGBufferSRVDesc *)local_68);
  param_2->WorkGroupInfoBuffer = pFVar4;
  uVar1 = 0;
  local_68._8_4_ = 0xffffffff;
  local_58 = 0;
  if (((pFVar3->Desc).Usage & DrawIndirect) != None) {
    uVar1 = 0x1c;
  }
  local_68._0_8_ = CONCAT71(SUB87(local_68._0_8_,1),uVar1) & 0xffffffff;
  local_50 = pFVar3;
  pFVar4 = FRDGBuilder::CreateSRV(param_1,(FRDGBufferSRVDesc *)local_68);
  param_2->ItemBuffer = pFVar4;
  param_2->NumWorkGroupInfos = 0xffffffff;
  param_2->NumItems = 0xffffffff;
  return;
}

// GetWrappedCsGroupCount @ 144928d90

TIntVector3<int> * __thiscall
FGPUWorkGroupLoadBalancer::GetWrappedCsGroupCount
          (FGPUWorkGroupLoadBalancer *this,TIntVector3<int> *__return_storage_ptr__)

{
  FComputeShaderUtils::GetGroupCountWrapped(__return_storage_ptr__,(this->WorkGroupInfos).ArrayNum);
  return __return_storage_ptr__;
}

// SetShaderDefines @ 1449311c0

void __cdecl FGPUWorkGroupLoadBalancer::SetShaderDefines(FShaderCompilerEnvironment *param_1)

{
  FShaderCompilerEnvironment::SetDefine(param_1,L"WGLB_ENABLE",1);
  FShaderCompilerEnvironment::SetDefine(param_1,L"WGLB_NUM_THREADS_PER_GROUP",0x40);
  FShaderCompilerEnvironment::SetDefine(param_1,L"WGLB_NUM_ITEM_BITS",6);
  FShaderCompilerEnvironment::SetDefine(param_1,L"WGLB_NUM_ITEM_MASK",0x3f);
  FShaderCompilerEnvironment::SetDefine(param_1,L"WGLB_PREFIX_BITS",6);
  FShaderCompilerEnvironment::SetDefine(param_1,L"WGLB_PREFIX_BIT_MASK",0x3f);
  return;
}

// Add<TGPUWorkGroupLoadBalancer<UE::HLSL::FCellChunkDraw>::FPayloadGenerator> @ 14546b750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FGPUWorkGroupLoadBalancer::
Add<TGPUWorkGroupLoadBalancer<UE::HLSL::FCellChunkDraw>::FPayloadGenerator>
          (FGPUWorkGroupLoadBalancer *this,FPayloadGenerator *param_1,uint param_2)

{
  int *piVar1;
  FWorkGroupInfo *pFVar2;
  TIntPoint<unsigned_int>_u_0 *pTVar3;
  ulong64 uVar4;
  FWorkGroupInfo *pFVar5;
  code *pcVar6;
  uint uVar7;
  TIntPoint<unsigned_int>_u_0 TVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  undefined1 auStack_a8 [32];
  TIntPoint<unsigned_int>_u_0 *local_88;
  TIntPoint<unsigned_int>_u_0 *local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  TIntPoint<unsigned_int>_u_0 local_58;
  TIntPoint<unsigned_int>_u_0 local_50;
  uint uStack_48;
  uint uStack_44;
  uint local_40;
  uint uStack_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_a8;
  uVar13 = 0;
  if (param_2 == 0) {
    this->TotalChildren = this->TotalChildren;
  }
  else {
    do {
      uVar10 = 0x40 - this->CurrentWorkGroupPrefixSum;
      if (uVar10 == 0) {
LAB_14546b89b:
        uVar4 = this->CurrentWorkGroupWorkBoundary;
        uStack_3c = param_1->CurrentWorkGroupFirstParentItem;
        local_40 = this->CurrentWorkGroupCarryOver;
        param_1->CurrentWorkGroupFirstParentItem = param_1->ParentItemOffset;
        uStack_48 = this->CurrentWorkGroupFirstItem;
        uStack_44 = this->CurrentWorkGroupNumItems;
        local_50._s_0.X = (uint)uVar4;
        pTVar3 = (TIntPoint<unsigned_int>_u_0 *)(this->WorkGroupInfos).AllocatorInstance.Data;
        local_50._s_0.Y = (uint)(uVar4 >> 0x20);
        if ((pTVar3 <= &local_50) &&
           (lVar12 = (longlong)(this->WorkGroupInfos).ArrayMax, &local_50 < pTVar3 + lVar12 * 3)) {
          local_70 = (longlong)(this->WorkGroupInfos).ArrayNum;
          local_68 = 0x18;
          local_88 = &local_50;
          local_80 = pTVar3;
          local_78 = lVar12;
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar9) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        iVar11 = (this->WorkGroupInfos).ArrayNum;
        piVar1 = &(this->WorkGroupInfos).ArrayMax;
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FGPUWorkGroupLoadBalancer::FWorkGroupInfo>_>
                             (0x418,(ForElementType<FGPUWorkGroupLoadBalancer::FWorkGroupInfo> *)
                                    this,piVar1);
        }
        TVar8._s_0.Y = local_50._s_0.Y;
        TVar8._s_0.X = local_50._s_0.X;
        (this->WorkGroupInfos).ArrayNum = iVar11 + 1;
        pFVar5 = (this->WorkGroupInfos).AllocatorInstance.Data;
        pFVar2 = pFVar5 + iVar11;
        (pFVar2->WorkGroupWorkBoundary).field0_0x0 = TVar8;
        pFVar2->FirstItem = uStack_48;
        pFVar2->NumItems = uStack_44;
        pFVar5 = pFVar5 + iVar11;
        pFVar5->CarryOverStartOffset = local_40;
        pFVar5->Payload = uStack_3c;
        this->CurrentWorkGroupFirstItem = (this->Items).ArrayNum;
        this->CurrentWorkGroupPrefixSum = 0;
        this->CurrentWorkGroupNumItems = 0;
        this->CurrentWorkGroupCarryOver = uVar13;
        this->CurrentWorkGroupWorkBoundary = 0;
      }
      else {
        uVar7 = param_2 - uVar13;
        if (uVar10 < param_2 - uVar13) {
          uVar7 = uVar10;
        }
        pTVar3 = (TIntPoint<unsigned_int>_u_0 *)(this->Items).AllocatorInstance.Data;
        local_58._s_0.X =
             (uVar7 - 1 | this->CurrentWorkGroupPrefixSum << 6) * 2 |
             (param_1->ParentItemOffset - param_1->CurrentWorkGroupFirstParentItem) * 0x2000 |
             (uint)(uVar13 != 0);
        if ((pTVar3 <= &local_58) &&
           (lVar12 = (longlong)(this->Items).ArrayMax,
           &local_58 <
           (TIntPoint<unsigned_int>_u_0 *)
           ((((TIntPoint<unsigned_int> *)&(pTVar3->_s_0).X)->field0_0x0).XY + lVar12))) {
          local_70 = (longlong)(this->Items).ArrayNum;
          local_68 = 4;
          local_88 = &local_58;
          local_80 = pTVar3;
          local_78 = lVar12;
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar9) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        iVar11 = (this->Items).ArrayNum;
        piVar1 = &(this->Items).ArrayMax;
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FGPUWorkGroupLoadBalancer::FPackedItem>_>
                             (0x404,&(this->Items).AllocatorInstance,piVar1);
        }
        uVar13 = uVar13 + uVar7;
        (this->Items).ArrayNum = iVar11 + 1;
        (this->Items).AllocatorInstance.Data[iVar11].Packed = local_58._s_0.X;
        this->CurrentWorkGroupPrefixSum = this->CurrentWorkGroupPrefixSum + uVar7;
        this->CurrentWorkGroupNumItems = this->CurrentWorkGroupNumItems + 1;
        this->CurrentWorkGroupWorkBoundary =
             this->CurrentWorkGroupWorkBoundary |
             1L << ((ulonglong)(this->CurrentWorkGroupPrefixSum - 1) & 0x3f);
        if (0x3f < this->CurrentWorkGroupPrefixSum) goto LAB_14546b89b;
      }
    } while (uVar13 < param_2);
    this->TotalChildren = this->TotalChildren + uVar13;
  }
  return;
}

