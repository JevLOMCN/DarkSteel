// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 141

// GetSafeBreadcrumbPath<FD3D12CommandContext_&> @ 1459a4000

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FString * __cdecl
UE::RHI::Breadcrumbs::Private::GetSafeBreadcrumbPath<FD3D12CommandContext_&>
          (FString *__return_storage_ptr__,FD3D12CommandContext *param_1)

{
  FRHIBreadcrumbNode *this;
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  FString local_28;
  FString local_18;
  
  if (*(longlong *)&param_1->field_0x1d8 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExecutingCmdList",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                       ,0x221,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  this = *(FRHIBreadcrumbNode **)(*(longlong *)&param_1->field_0x1d8 + 0x2f8);
  bVar2 = this == (FRHIBreadcrumbNode *)0x0;
  if (bVar2) {
    pFVar3 = ::FString::FString(&local_28,L"NoBreadcrumb");
  }
  else {
    pFVar3 = FRHIBreadcrumbNode::GetFullPath(this,&local_18);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
  (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar3->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar3->Data).ArrayMax;
  (pFVar3->Data).ArrayNum = 0;
  (pFVar3->Data).ArrayMax = 0;
  if (bVar2) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_D3D12_MESSAGE_ID>_> @ 1459a6140

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_D3D12_MESSAGE_ID>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<D3D12_MESSAGE_ID> *param_5,int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x11) {
      iVar1 = 0x10;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_D3D12_MESSAGE_ID>::
  ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*>_> @ 1459a61e0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*>_>
          (ushort param_1,ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TArray<FD3D12SegListAllocator::FRetiredBlock,TSizedDefaultAllocator<32>_>_>_> @ 1459a62b0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TArray<FD3D12SegListAllocator::FRetiredBlock,TSizedDefaultAllocator<32>_>_>_>
          (ushort param_1,
          ForElementType<TArray<FD3D12SegListAllocator::FRetiredBlock,TSizedDefaultAllocator<32>_>_>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TArray<FD3D12SegListAllocator::FRetiredBlock,TSizedDefaultAllocator<32>_>_>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12Buffer>::FLinkedObjectIterator>_> @ 1459a6380

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12Buffer>::FLinkedObjectIterator>_>
          (ushort param_1,
          ForElementType<FD3D12LinkedAdapterObject<FD3D12Buffer>::FLinkedObjectIterator> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FD3D12LinkedAdapterObject<FD3D12Buffer>::FLinkedObjectIterator>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_D3D12_MESSAGE_ID>_> @ 1459a6450

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_D3D12_MESSAGE_ID>_>
          (ushort param_1,ForElementType<D3D12_MESSAGE_ID> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x11) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_D3D12_MESSAGE_ID>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12Buffer>::FLinkedObjectIterator>_> @ 1459a6520

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12Buffer>::FLinkedObjectIterator>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FD3D12LinkedAdapterObject<FD3D12Buffer>::FLinkedObjectIterator> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FD3D12LinkedAdapterObject<FD3D12Buffer>::FLinkedObjectIterator>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// SetUniformBufferResourcesFromTables<FD3D12ResourceBinder_&,FD3D12UniformBuffer_*_[16],unsigned_short,0> @ 1459a6a90

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __cdecl
UE::RHI::Private::
SetUniformBufferResourcesFromTables<FD3D12ResourceBinder_&,FD3D12UniformBuffer_*_[16],unsigned_short,0>
          (FD3D12ResourceBinder *param_1,FRHIShader *param_2,ushort *param_3,
          FD3D12UniformBuffer *(*param_4) [16],FTracker *param_5)

{
  int *piVar1;
  EShaderFrequency EVar2;
  FScriptContainerElement *pFVar3;
  FRHIUniformBufferLayout *pFVar4;
  FRHIResourceCollection *pFVar5;
  FRHISamplerState *pFVar6;
  FRHIUnorderedAccessView *pFVar7;
  FD3D12CommandContext *pFVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  FString *pFVar18;
  FD3D12UnorderedAccessView *pFVar19;
  FRHIUnorderedAccessView **ppFVar20;
  FScriptContainerElement *pFVar21;
  FD3D12UniformBuffer *pFVar22;
  uint *puVar23;
  FD3D12UnorderedAccessView *pFVar24;
  int iVar25;
  uint uVar26;
  longlong lVar27;
  FD3D12UnorderedAccessView *pFVar28;
  longlong lVar29;
  undefined1 local_134 [4];
  uint local_130;
  longlong local_128;
  FD3D12UniformBuffer *local_120;
  int local_118;
  float local_114;
  uint local_110;
  FString local_108;
  longlong local_f8;
  longlong local_f0;
  TRefCountPtr<FRHIUniformBufferLayout_const_> *local_e8;
  uint local_e0;
  FString local_d8;
  <lambda_2> local_c8;
  <lambda_1> local_b0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  bVar14 = false;
  bVar11 = false;
  bVar13 = false;
  bVar10 = false;
  local_114 = (float)(double)FApp::CurrentTime;
  local_110 = (uint)param_2->_padding_ & (uint)*param_3;
  if (local_110 == 0) {
    *param_3 = 0;
    return;
  }
  do {
    uVar15 = -local_110 & local_110;
    local_e0 = 0;
    if (uVar15 != 0) {
      for (; (uVar15 >> local_e0 & 1) == 0; local_e0 = local_e0 + 1) {
      }
    }
    uVar26 = 0x20;
    if (uVar15 != 0) {
      uVar26 = local_e0;
    }
    local_110 = local_110 & local_110 - 1;
    local_130 = uVar26;
    if (((int)param_2->_padding_ <= (int)uVar26) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("BufferIndex < SRT.ResourceTableLayoutHashes.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                            ,0x61,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    lVar29 = (longlong)(int)uVar26;
    pFVar22 = (*param_4)[lVar29];
    local_120 = pFVar22;
    local_f8 = lVar29;
    if (pFVar22 == (FD3D12UniformBuffer *)0x0) {
      if (((int)uVar26 < 0) || ((param_2->Debug).UniformBufferNames.ArrayNum <= (int)uVar26)) {
        bVar10 = true;
        pFVar18 = ::FString::FString(&local_90,L"<unknown>");
      }
      else {
        if (((int)uVar26 < 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        bVar13 = true;
        pFVar18 = ::FName::ToString((FName *)((param_2->Debug).UniformBufferNames.AllocatorInstance.
                                              Data + lVar29 * 8),&local_80);
      }
      pFVar3 = (pFVar18->Data).AllocatorInstance.Data;
      (pFVar18->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar18->Data).ArrayNum = 0;
      (pFVar18->Data).ArrayMax = 0;
      if ((bVar10) &&
         (bVar10 = false, local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      if ((bVar13) &&
         (bVar13 = false, local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
      Logging::Private::BasicFatalLog
                (&`void___cdecl_UE::RHI::Private::SetUniformBufferResourcesFromTables<FD3D12ResourceBinder&___ptr64,class_FD3D12UniformBuffer*___ptr64_[16],unsigned_short,0>(FD3D12ResourceBinder&___ptr64,FRHIShader_const&___ptr64,unsigned_short&___ptr64,class_FD3D12UniformBuffer*___ptr64_(&___ptr64)[16],RHIValidation::FTracker*___ptr64)'
                  ::__l15::LOG_Static,(FLogCategoryBase *)&LogRHI);
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      local_128 = lVar29 * 4;
    }
    else {
      uVar15 = 0;
      if ((int)uVar26 < (int)param_2->_padding_) {
        uVar15 = ~uVar26 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      local_e8 = (TRefCountPtr<FRHIUniformBufferLayout_const_> *)&pFVar22->_padding_;
      local_128 = lVar29 * 4;
      pFVar4 = local_e8->Reference;
      local_f0 = local_128;
      if (pFVar4->Hash != *(uint *)(local_128 + param_2->_padding_)) {
        local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_108.Data.ArrayNum = 0;
        local_108.Data.ArrayMax = 0;
        pFVar21 = (pFVar4->Resources).AllocatorInstance.Data;
        iVar17 = (pFVar4->Resources).ArrayNum;
        pFVar3 = pFVar21 + (longlong)iVar17 * 4;
        while( true ) {
          if ((pFVar4->Resources).ArrayNum != iVar17) {
            local_134[0] = 0;
            `TCheckedPointerIterator<FRHIUniformBufferResource_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_134);
          }
          uVar15 = local_130;
          if (pFVar21 == pFVar3) break;
          ::FString::PrintfImpl(&local_d8,L"%s%d");
          iVar25 = local_d8.Data.ArrayNum + -1;
          if (local_d8.Data.ArrayNum == 0) {
            iVar25 = 0;
          }
          ::FString::AppendChars(&local_108,(wchar_t *)local_d8.Data.AllocatorInstance.Data,iVar25);
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
          pFVar21 = pFVar21 + 4;
        }
        local_118 = (pFVar4->Resources).ArrayNum;
        local_128 = CONCAT44(local_128._4_4_,pFVar4->ConstantBufferSize);
        uVar16 = 0;
        if ((int)local_130 < (int)param_2->_padding_) {
          uVar16 = ~uVar26 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar29 = local_f8;
        if (((int)uVar15 < 0) || ((param_2->Debug).UniformBufferNames.ArrayNum <= (int)uVar15)) {
          bVar11 = true;
          pFVar18 = ::FString::FString(&local_70,L"<unknown>");
        }
        else {
          if (((int)uVar26 < 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          bVar14 = true;
          pFVar18 = ::FName::ToString((FName *)((param_2->Debug).UniformBufferNames.
                                                AllocatorInstance.Data + lVar29 * 8),local_60);
        }
        pFVar3 = (pFVar18->Data).AllocatorInstance.Data;
        (pFVar18->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar18->Data).ArrayNum = 0;
        (pFVar18->Data).ArrayMax = 0;
        if ((bVar11) &&
           (bVar11 = false, local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
        if ((bVar14) &&
           (bVar14 = false,
           local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
        }
        Logging::Private::BasicFatalLog
                  (&`void___cdecl_UE::RHI::Private::SetUniformBufferResourcesFromTables<FD3D12ResourceBinder&___ptr64,class_FD3D12UniformBuffer*___ptr64_[16],unsigned_short,0>(FD3D12ResourceBinder&___ptr64,FRHIShader_const&___ptr64,unsigned_short&___ptr64,class_FD3D12UniformBuffer*___ptr64_(&___ptr64)[16],RHIValidation::FTracker*___ptr64)'
                    ::__l28::LOG_Static,(FLogCategoryBase *)&LogRHI);
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        lVar29 = local_f0;
        local_128 = local_f0;
        pFVar22 = local_120;
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
          pFVar22 = local_120;
          local_128 = lVar29;
        }
      }
    }
    lVar27 = local_128;
    local_b0.Tracker = &param_5;
    local_b0.CurrentTimeForTextureTimes = &local_114;
    local_b0.Shader = param_2;
    local_b0.Binder = param_1;
    EnumerateUniformBufferResources<FRHITexture,_UE::RHI::Private::SetUniformBufferResourcesFromTables<FD3D12ResourceBinder_&,FD3D12UniformBuffer_*_[16],unsigned_short,0>_::__l4::<lambda_1>_>
              ((FRHIUniformBuffer *)pFVar22,local_130,(uint *)param_2->_padding_,&local_b0);
    local_c8.Tracker = &param_5;
    local_c8.Shader = param_2;
    local_c8.Binder = param_1;
    EnumerateUniformBufferResources<FRHIShaderResourceView,_UE::RHI::Private::SetUniformBufferResourcesFromTables<FD3D12ResourceBinder_&,FD3D12UniformBuffer_*_[16],unsigned_short,0>_::__l4::<lambda_2>_>
              ((FRHIUniformBuffer *)pFVar22,local_130,(uint *)param_2->_padding_,&local_c8);
    uVar26 = local_130;
    lVar29 = param_2->_padding_;
    pFVar3 = (((TArray<TRefCountPtr<FRHIResource>,TSizedDefaultAllocator<32>_> *)&pFVar22->_padding_
              )->AllocatorInstance).Data;
    uVar15 = *(uint *)(lVar29 + lVar27);
    if (uVar15 != 0) {
      uVar16 = *(uint *)(lVar29 + (ulonglong)uVar15 * 4);
      puVar23 = (uint *)(lVar29 + ((ulonglong)uVar15 + 1) * 4);
      do {
        pFVar5 = *(FRHIResourceCollection **)(pFVar3 + (ulonglong)(uVar16 >> 8 & 0xffff) * 8);
        if ((pFVar5 == (FRHIResourceCollection *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Resource",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                                ,0x2d,L"Null %s (resource %d bind %d) on UB Layout %s"), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FD3D12ResourceBinder::SetResourceCollection(param_1,pFVar5,uVar16 & 0xff);
        uVar16 = *puVar23;
        puVar23 = puVar23 + 1;
        pFVar22 = local_120;
        lVar27 = local_128;
      } while (uVar16 >> 0x18 == uVar26);
    }
    uVar26 = local_130;
    pFVar3 = (((TArray<TRefCountPtr<FRHIResource>,TSizedDefaultAllocator<32>_> *)&pFVar22->_padding_
              )->AllocatorInstance).Data;
    lVar29 = param_2->_padding_;
    uVar15 = *(uint *)(lVar27 + lVar29);
    if (uVar15 != 0) {
      uVar16 = *(uint *)(lVar29 + (ulonglong)uVar15 * 4);
      puVar23 = (uint *)(lVar29 + 4 + (ulonglong)uVar15 * 4);
      do {
        pFVar6 = *(FRHISamplerState **)(pFVar3 + (ulonglong)(uVar16 >> 8 & 0xffff) * 8);
        if ((pFVar6 == (FRHISamplerState *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Resource",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                                ,0x2d,L"Null %s (resource %d bind %d) on UB Layout %s"), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FD3D12ResourceBinder::SetSampler(param_1,pFVar6,uVar16 & 0xff);
        uVar16 = *puVar23;
        puVar23 = puVar23 + 1;
        pFVar22 = local_120;
        lVar27 = local_128;
      } while (uVar16 >> 0x18 == uVar26);
    }
    pFVar28 = (FD3D12UnorderedAccessView *)0x0;
    lVar29 = param_2->_padding_;
    pFVar3 = (((TArray<TRefCountPtr<FRHIResource>,TSizedDefaultAllocator<32>_> *)&pFVar22->_padding_
              )->AllocatorInstance).Data;
    uVar15 = *(uint *)(lVar27 + lVar29);
    if (uVar15 != 0) {
      uVar26 = *(uint *)(lVar29 + (ulonglong)uVar15 * 4);
      puVar23 = (uint *)(lVar29 + ((ulonglong)uVar15 + 1) * 4);
      do {
        pFVar7 = *(FRHIUnorderedAccessView **)(pFVar3 + (ulonglong)(uVar26 >> 8 & 0xffff) * 8);
        if ((pFVar7 == (FRHIUnorderedAccessView *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Resource",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                                ,0x2d,L"Null %s (resource %d bind %d) on UB Layout %s"), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (param_5 != (FTracker *)0x0) {
          EVar2 = param_2->Frequency;
          if ((((EVar2 == SF_Compute) || (EVar2 == SF_NumStandardFrequencies)) ||
              (EVar2 == SF_RayMiss)) ||
             ((EVar2 == SF_RayHitGroup || (pFVar19 = pFVar28, EVar2 == SF_RayCallable)))) {
            pFVar19 = (FD3D12UnorderedAccessView *)&DAT_00000010;
          }
          ppFVar20 = RHIValidation::FTracker::FUAVTracker::operator[]
                               ((FUAVTracker *)
                                ((longlong)&pFVar19->_padding_ +
                                (longlong)&param_5->UAVTrackers[0].UAVs),uVar26 & 0xff);
          *ppFVar20 = pFVar7;
        }
        pFVar19 = pFVar28;
        if (pFVar7 != (FRHIUnorderedAccessView *)0x0) {
          pFVar19 = *(FD3D12UnorderedAccessView **)
                     (&pFVar7[4].field_0x10 + (ulonglong)param_1->GpuIndex * 8);
        }
        pFVar8 = param_1->Context;
        if (param_1->bBindlessResources == false) {
          pFVar24 = (FD3D12UnorderedAccessView *)&pFVar19->_padding_;
          if (pFVar19 == (FD3D12UnorderedAccessView *)0x0) {
            pFVar24 = pFVar28;
          }
          FD3D12StateCache::SetUAV
                    (&pFVar8->StateCache,param_1->Frequency,uVar26 & 0xff,pFVar24,0xffffffff);
        }
        else {
          EVar2 = param_1->Frequency;
          pFVar24 = (FD3D12UnorderedAccessView *)&pFVar19->_padding_;
          if (pFVar19 == (FD3D12UnorderedAccessView *)0x0) {
            pFVar24 = pFVar28;
          }
          iVar17 = (pFVar8->StateCache).PipelineState.Common.QueuedBindlessUAVs[EVar2].ArrayNum;
          piVar1 = &(pFVar8->StateCache).PipelineState.Common.QueuedBindlessUAVs[EVar2].ArrayMax;
          if (iVar17 == *piVar1) {
            iVar17 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&(pFVar8->StateCache).PipelineState.Common.QueuedBindlessUAVs
                                       [EVar2].AllocatorInstance,piVar1);
          }
          (pFVar8->StateCache).PipelineState.Common.QueuedBindlessUAVs[EVar2].ArrayNum = iVar17 + 1;
          *(FD3D12UnorderedAccessView **)
           (*(longlong *)
             &(pFVar8->StateCache).PipelineState.Common.QueuedBindlessUAVs[EVar2].AllocatorInstance
           + (longlong)iVar17 * 8) = pFVar24;
        }
        uVar26 = *puVar23;
        puVar23 = puVar23 + 1;
      } while (uVar26 >> 0x18 == local_130);
    }
    if (local_110 == 0) {
      *param_3 = 0;
      return;
    }
  } while( true );
}

// CreateCpuHeap @ 1459b9ec0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12DescriptorHeap * __cdecl
UE::D3D12BindlessDescriptors::CreateCpuHeap
          (FD3D12Device *param_1,ERHIDescriptorHeapType param_2,uint param_3)

{
  FD3D12DescriptorHeap *pFVar1;
  wchar_t *pwVar2;
  FMemScope local_res8;
  FLLMScope local_res10 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name34,L"RHIMisc/BindlessDescriptorHeap/CPU");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res10,LLMScope_Name34,false,None,Default,true);
  FMemScope::FMemScope(&local_res8,&LLMScope_Name34,true);
  pwVar2 = L"BindlessSamplersCPU";
  if (param_2 == Standard) {
    pwVar2 = L"BindlessResourcesCPU";
  }
  pFVar1 = FD3D12DescriptorHeapManager::AllocateIndependentHeap
                     (&param_1->DescriptorHeapManager,pwVar2,param_2,param_3,None);
  FMemScope::~FMemScope(&local_res8);
  FLLMScope::~FLLMScope(local_res10);
  return pFVar1;
}

// CreateGpuHeap @ 1459bac80

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12DescriptorHeap * __cdecl
UE::D3D12BindlessDescriptors::CreateGpuHeap
          (FD3D12Device *param_1,ERHIDescriptorHeapType param_2,uint param_3)

{
  FD3D12DescriptorHeap *pFVar1;
  ForAnyElementType FVar2;
  wchar_t *pwVar3;
  bool bVar4;
  FMemScope local_res8;
  FLLMScope local_res10 [2];
  FString local_28;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name48,L"RHIMisc/BindlessDescriptorHeap/GPU");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res10,LLMScope_Name48,false,None,Default,true);
  FMemScope::FMemScope(&local_res8,&LLMScope_Name48,true);
  ::FString::PrintfImpl(&local_28,L"CreateNewBindlessHeap (%d)");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar2.Data = local_28.Data.AllocatorInstance.Data;
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Turquoise,(wchar_t *)FVar2.Data);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_28,L"CreateNewBindlessHeap (%d)");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar2.Data = local_28.Data.AllocatorInstance.Data;
  }
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar2.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12BindlessDescriptors.cpp"
               ,0x31);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pwVar3 = L"BindlessSamplers";
  if (param_2 == Standard) {
    pwVar3 = L"BindlessResources";
  }
  pFVar1 = FD3D12DescriptorHeapManager::AllocateIndependentHeap
                     (&param_1->DescriptorHeapManager,pwVar3,param_2,param_3,GpuVisible);
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  FMemScope::~FMemScope(&local_res8);
  FLLMScope::~FLLMScope(local_res10);
  return pFVar1;
}

// DeferredFreeHeap @ 1459bd070

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __cdecl
UE::D3D12BindlessDescriptors::DeferredFreeHeap(FD3D12Device *param_1,FD3D12DescriptorHeap *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FD3D12DynamicRHI *pFVar3;
  int iVar4;
  
  pFVar3 = FD3D12DynamicRHI::SingleD3DRHI;
  lpCriticalSection = &FD3D12DynamicRHI::SingleD3DRHI->ObjectsToDeleteCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar4 = (pFVar3->ObjectsToDelete).ArrayNum;
    piVar1 = &(pFVar3->ObjectsToDelete).ArrayMax;
    if (iVar4 == *piVar1) {
      iVar4 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&(pFVar3->ObjectsToDelete).AllocatorInstance,piVar1);
    }
    (pFVar3->ObjectsToDelete).ArrayNum = iVar4 + 1;
    pFVar2 = (pFVar3->ObjectsToDelete).AllocatorInstance.Data;
    *(undefined4 *)(pFVar2 + (longlong)iVar4 * 0x30) = 5;
    *(FD3D12DescriptorHeap **)(pFVar2 + (longlong)iVar4 * 0x30 + 8) = param_2;
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// ConditionallyAddShader<FD3D12AmplificationShader> @ 1459e2040

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __cdecl
UE::RHICore::Nvidia::Aftermath::D3D12::ConditionallyAddShader<FD3D12AmplificationShader>
          (FD3D12AmplificationShader *param_1,
          TArray<FRHIShader_*,TSizedDefaultAllocator<32>_> *param_2,
          TSet<FRHIShader_*,DefaultKeyFuncs<FRHIShader_*,0>,FDefaultSetAllocator> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  FRHIShader *local_res8;
  FD3D12AmplificationShader *local_res20;
  FD3D12AmplificationShader *local_18 [2];
  
  if (param_1 != (FD3D12AmplificationShader *)0x0) {
    uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    if (*(int *)&(param_3->Elements).field_0x8 != *(int *)&(param_3->Elements).field_0x34) {
      FVar5 = (param_3->Hash).SecondaryData;
      if (FVar5 == (ForElementType<FSetElementId>)0x0) {
        FVar5 = (ForElementType<FSetElementId>)&param_3->Hash;
      }
      iVar4 = *(int *)((longlong)FVar5 +
                      (ulonglong)(param_3->HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
      if (iVar4 != -1) {
        do {
          if (*(FD3D12AmplificationShader **)
               (*(longlong *)&param_3->Elements + (longlong)iVar4 * 0x10) == param_1) {
            return;
          }
          iVar4 = *(int *)(*(longlong *)&param_3->Elements + 8 + (longlong)iVar4 * 0x10);
        } while (iVar4 != -1);
      }
    }
    pFVar1 = (param_2->AllocatorInstance).Data;
    local_18[0] = param_1;
    if (((pFVar1 <= (FScriptContainerElement *)local_18) &&
        ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)param_2->ArrayMax * 8)) &&
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
    iVar4 = param_2->ArrayNum;
    if (iVar4 == param_2->ArrayMax) {
      iVar4 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar4 + 1;
    *(FD3D12AmplificationShader **)((param_2->AllocatorInstance).Data + (longlong)iVar4 * 8) =
         local_18[0];
    local_res20 = param_1;
    TSet<FRHIShader_*,DefaultKeyFuncs<FRHIShader_*,0>,FDefaultSetAllocator>::Emplace<FRHIShader_*>
              (param_3,&local_res8,(bool *)&local_res20);
  }
  return;
}

// ConditionallyAddShader<FD3D12ComputeShader> @ 1459e21b0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __cdecl
UE::RHICore::Nvidia::Aftermath::D3D12::ConditionallyAddShader<FD3D12ComputeShader>
          (FD3D12ComputeShader *param_1,TArray<FRHIShader_*,TSizedDefaultAllocator<32>_> *param_2,
          TSet<FRHIShader_*,DefaultKeyFuncs<FRHIShader_*,0>,FDefaultSetAllocator> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  FRHIShader *local_res8;
  FD3D12ComputeShader *local_res20;
  FD3D12ComputeShader *local_18 [2];
  
  if (param_1 != (FD3D12ComputeShader *)0x0) {
    uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    if (*(int *)&(param_3->Elements).field_0x8 != *(int *)&(param_3->Elements).field_0x34) {
      FVar5 = (param_3->Hash).SecondaryData;
      if (FVar5 == (ForElementType<FSetElementId>)0x0) {
        FVar5 = (ForElementType<FSetElementId>)&param_3->Hash;
      }
      iVar4 = *(int *)((longlong)FVar5 +
                      (ulonglong)(param_3->HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
      if (iVar4 != -1) {
        do {
          if (*(FD3D12ComputeShader **)(*(longlong *)&param_3->Elements + (longlong)iVar4 * 0x10) ==
              param_1) {
            return;
          }
          iVar4 = *(int *)(*(longlong *)&param_3->Elements + 8 + (longlong)iVar4 * 0x10);
        } while (iVar4 != -1);
      }
    }
    pFVar1 = (param_2->AllocatorInstance).Data;
    local_18[0] = param_1;
    if (((pFVar1 <= (FScriptContainerElement *)local_18) &&
        ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)param_2->ArrayMax * 8)) &&
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
    iVar4 = param_2->ArrayNum;
    if (iVar4 == param_2->ArrayMax) {
      iVar4 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar4 + 1;
    *(FD3D12ComputeShader **)((param_2->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_18[0]
    ;
    local_res20 = param_1;
    TSet<FRHIShader_*,DefaultKeyFuncs<FRHIShader_*,0>,FDefaultSetAllocator>::Emplace<FRHIShader_*>
              (param_3,&local_res8,(bool *)&local_res20);
  }
  return;
}

// ConditionallyAddShader<FD3D12GeometryShader> @ 1459e2320

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __cdecl
UE::RHICore::Nvidia::Aftermath::D3D12::ConditionallyAddShader<FD3D12GeometryShader>
          (FD3D12GeometryShader *param_1,TArray<FRHIShader_*,TSizedDefaultAllocator<32>_> *param_2,
          TSet<FRHIShader_*,DefaultKeyFuncs<FRHIShader_*,0>,FDefaultSetAllocator> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  FRHIShader *local_res8;
  FD3D12GeometryShader *local_res20;
  FD3D12GeometryShader *local_18 [2];
  
  if (param_1 != (FD3D12GeometryShader *)0x0) {
    uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    if (*(int *)&(param_3->Elements).field_0x8 != *(int *)&(param_3->Elements).field_0x34) {
      FVar5 = (param_3->Hash).SecondaryData;
      if (FVar5 == (ForElementType<FSetElementId>)0x0) {
        FVar5 = (ForElementType<FSetElementId>)&param_3->Hash;
      }
      iVar4 = *(int *)((longlong)FVar5 +
                      (ulonglong)(param_3->HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
      if (iVar4 != -1) {
        do {
          if (*(FD3D12GeometryShader **)(*(longlong *)&param_3->Elements + (longlong)iVar4 * 0x10)
              == param_1) {
            return;
          }
          iVar4 = *(int *)(*(longlong *)&param_3->Elements + 8 + (longlong)iVar4 * 0x10);
        } while (iVar4 != -1);
      }
    }
    pFVar1 = (param_2->AllocatorInstance).Data;
    local_18[0] = param_1;
    if (((pFVar1 <= (FScriptContainerElement *)local_18) &&
        ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)param_2->ArrayMax * 8)) &&
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
    iVar4 = param_2->ArrayNum;
    if (iVar4 == param_2->ArrayMax) {
      iVar4 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar4 + 1;
    *(FD3D12GeometryShader **)((param_2->AllocatorInstance).Data + (longlong)iVar4 * 8) =
         local_18[0];
    local_res20 = param_1;
    TSet<FRHIShader_*,DefaultKeyFuncs<FRHIShader_*,0>,FDefaultSetAllocator>::Emplace<FRHIShader_*>
              (param_3,&local_res8,(bool *)&local_res20);
  }
  return;
}

// ConditionallyAddShader<FD3D12MeshShader> @ 1459e2490

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __cdecl
UE::RHICore::Nvidia::Aftermath::D3D12::ConditionallyAddShader<FD3D12MeshShader>
          (FD3D12MeshShader *param_1,TArray<FRHIShader_*,TSizedDefaultAllocator<32>_> *param_2,
          TSet<FRHIShader_*,DefaultKeyFuncs<FRHIShader_*,0>,FDefaultSetAllocator> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  FRHIShader *local_res8;
  FD3D12MeshShader *local_res20;
  FD3D12MeshShader *local_18 [2];
  
  if (param_1 != (FD3D12MeshShader *)0x0) {
    uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    if (*(int *)&(param_3->Elements).field_0x8 != *(int *)&(param_3->Elements).field_0x34) {
      FVar5 = (param_3->Hash).SecondaryData;
      if (FVar5 == (ForElementType<FSetElementId>)0x0) {
        FVar5 = (ForElementType<FSetElementId>)&param_3->Hash;
      }
      iVar4 = *(int *)((longlong)FVar5 +
                      (ulonglong)(param_3->HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
      if (iVar4 != -1) {
        do {
          if (*(FD3D12MeshShader **)(*(longlong *)&param_3->Elements + (longlong)iVar4 * 0x10) ==
              param_1) {
            return;
          }
          iVar4 = *(int *)(*(longlong *)&param_3->Elements + 8 + (longlong)iVar4 * 0x10);
        } while (iVar4 != -1);
      }
    }
    pFVar1 = (param_2->AllocatorInstance).Data;
    local_18[0] = param_1;
    if (((pFVar1 <= (FScriptContainerElement *)local_18) &&
        ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)param_2->ArrayMax * 8)) &&
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
    iVar4 = param_2->ArrayNum;
    if (iVar4 == param_2->ArrayMax) {
      iVar4 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar4 + 1;
    *(FD3D12MeshShader **)((param_2->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_18[0];
    local_res20 = param_1;
    TSet<FRHIShader_*,DefaultKeyFuncs<FRHIShader_*,0>,FDefaultSetAllocator>::Emplace<FRHIShader_*>
              (param_3,&local_res8,(bool *)&local_res20);
  }
  return;
}

// ConditionallyAddShader<FD3D12PixelShader> @ 1459e2600

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __cdecl
UE::RHICore::Nvidia::Aftermath::D3D12::ConditionallyAddShader<FD3D12PixelShader>
          (FD3D12PixelShader *param_1,TArray<FRHIShader_*,TSizedDefaultAllocator<32>_> *param_2,
          TSet<FRHIShader_*,DefaultKeyFuncs<FRHIShader_*,0>,FDefaultSetAllocator> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  FRHIShader *local_res8;
  FD3D12PixelShader *local_res20;
  FD3D12PixelShader *local_18 [2];
  
  if (param_1 != (FD3D12PixelShader *)0x0) {
    uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    if (*(int *)&(param_3->Elements).field_0x8 != *(int *)&(param_3->Elements).field_0x34) {
      FVar5 = (param_3->Hash).SecondaryData;
      if (FVar5 == (ForElementType<FSetElementId>)0x0) {
        FVar5 = (ForElementType<FSetElementId>)&param_3->Hash;
      }
      iVar4 = *(int *)((longlong)FVar5 +
                      (ulonglong)(param_3->HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
      if (iVar4 != -1) {
        do {
          if (*(FD3D12PixelShader **)(*(longlong *)&param_3->Elements + (longlong)iVar4 * 0x10) ==
              param_1) {
            return;
          }
          iVar4 = *(int *)(*(longlong *)&param_3->Elements + 8 + (longlong)iVar4 * 0x10);
        } while (iVar4 != -1);
      }
    }
    pFVar1 = (param_2->AllocatorInstance).Data;
    local_18[0] = param_1;
    if (((pFVar1 <= (FScriptContainerElement *)local_18) &&
        ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)param_2->ArrayMax * 8)) &&
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
    iVar4 = param_2->ArrayNum;
    if (iVar4 == param_2->ArrayMax) {
      iVar4 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar4 + 1;
    *(FD3D12PixelShader **)((param_2->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_18[0];
    local_res20 = param_1;
    TSet<FRHIShader_*,DefaultKeyFuncs<FRHIShader_*,0>,FDefaultSetAllocator>::Emplace<FRHIShader_*>
              (param_3,&local_res8,(bool *)&local_res20);
  }
  return;
}

// ConditionallyAddShader<FD3D12RayTracingShader> @ 1459e2770

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __cdecl
UE::RHICore::Nvidia::Aftermath::D3D12::ConditionallyAddShader<FD3D12RayTracingShader>
          (FD3D12RayTracingShader *param_1,TArray<FRHIShader_*,TSizedDefaultAllocator<32>_> *param_2
          ,TSet<FRHIShader_*,DefaultKeyFuncs<FRHIShader_*,0>,FDefaultSetAllocator> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  FRHIShader *local_res8;
  FD3D12RayTracingShader *local_res20;
  FD3D12RayTracingShader *local_18 [2];
  
  if (param_1 != (FD3D12RayTracingShader *)0x0) {
    uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    if (*(int *)&(param_3->Elements).field_0x8 != *(int *)&(param_3->Elements).field_0x34) {
      FVar5 = (param_3->Hash).SecondaryData;
      if (FVar5 == (ForElementType<FSetElementId>)0x0) {
        FVar5 = (ForElementType<FSetElementId>)&param_3->Hash;
      }
      iVar4 = *(int *)((longlong)FVar5 +
                      (ulonglong)(param_3->HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
      if (iVar4 != -1) {
        do {
          if (*(FD3D12RayTracingShader **)(*(longlong *)&param_3->Elements + (longlong)iVar4 * 0x10)
              == param_1) {
            return;
          }
          iVar4 = *(int *)(*(longlong *)&param_3->Elements + 8 + (longlong)iVar4 * 0x10);
        } while (iVar4 != -1);
      }
    }
    pFVar1 = (param_2->AllocatorInstance).Data;
    local_18[0] = param_1;
    if (((pFVar1 <= (FScriptContainerElement *)local_18) &&
        ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)param_2->ArrayMax * 8)) &&
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
    iVar4 = param_2->ArrayNum;
    if (iVar4 == param_2->ArrayMax) {
      iVar4 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar4 + 1;
    *(FD3D12RayTracingShader **)((param_2->AllocatorInstance).Data + (longlong)iVar4 * 8) =
         local_18[0];
    local_res20 = param_1;
    TSet<FRHIShader_*,DefaultKeyFuncs<FRHIShader_*,0>,FDefaultSetAllocator>::Emplace<FRHIShader_*>
              (param_3,&local_res8,(bool *)&local_res20);
  }
  return;
}

// ConditionallyAddShader<FD3D12VertexShader> @ 1459e28e0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __cdecl
UE::RHICore::Nvidia::Aftermath::D3D12::ConditionallyAddShader<FD3D12VertexShader>
          (FD3D12VertexShader *param_1,TArray<FRHIShader_*,TSizedDefaultAllocator<32>_> *param_2,
          TSet<FRHIShader_*,DefaultKeyFuncs<FRHIShader_*,0>,FDefaultSetAllocator> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  FRHIShader *local_res8;
  FD3D12VertexShader *local_res20;
  FD3D12VertexShader *local_18 [2];
  
  if (param_1 != (FD3D12VertexShader *)0x0) {
    uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    if (*(int *)&(param_3->Elements).field_0x8 != *(int *)&(param_3->Elements).field_0x34) {
      FVar5 = (param_3->Hash).SecondaryData;
      if (FVar5 == (ForElementType<FSetElementId>)0x0) {
        FVar5 = (ForElementType<FSetElementId>)&param_3->Hash;
      }
      iVar4 = *(int *)((longlong)FVar5 +
                      (ulonglong)(param_3->HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
      if (iVar4 != -1) {
        do {
          if (*(FD3D12VertexShader **)(*(longlong *)&param_3->Elements + (longlong)iVar4 * 0x10) ==
              param_1) {
            return;
          }
          iVar4 = *(int *)(*(longlong *)&param_3->Elements + 8 + (longlong)iVar4 * 0x10);
        } while (iVar4 != -1);
      }
    }
    pFVar1 = (param_2->AllocatorInstance).Data;
    local_18[0] = param_1;
    if (((pFVar1 <= (FScriptContainerElement *)local_18) &&
        ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)param_2->ArrayMax * 8)) &&
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
    iVar4 = param_2->ArrayNum;
    if (iVar4 == param_2->ArrayMax) {
      iVar4 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar4 + 1;
    *(FD3D12VertexShader **)((param_2->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_18[0];
    local_res20 = param_1;
    TSet<FRHIShader_*,DefaultKeyFuncs<FRHIShader_*,0>,FDefaultSetAllocator>::Emplace<FRHIShader_*>
              (param_3,&local_res8,(bool *)&local_res20);
  }
  return;
}

// ConditionallyAddShader<FD3D12WorkGraphShader> @ 1459e2a50

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __cdecl
UE::RHICore::Nvidia::Aftermath::D3D12::ConditionallyAddShader<FD3D12WorkGraphShader>
          (FD3D12WorkGraphShader *param_1,TArray<FRHIShader_*,TSizedDefaultAllocator<32>_> *param_2,
          TSet<FRHIShader_*,DefaultKeyFuncs<FRHIShader_*,0>,FDefaultSetAllocator> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  FRHIShader *local_res8;
  FD3D12WorkGraphShader *local_res20;
  FD3D12WorkGraphShader *local_18 [2];
  
  if (param_1 != (FD3D12WorkGraphShader *)0x0) {
    uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    if (*(int *)&(param_3->Elements).field_0x8 != *(int *)&(param_3->Elements).field_0x34) {
      FVar5 = (param_3->Hash).SecondaryData;
      if (FVar5 == (ForElementType<FSetElementId>)0x0) {
        FVar5 = (ForElementType<FSetElementId>)&param_3->Hash;
      }
      iVar4 = *(int *)((longlong)FVar5 +
                      (ulonglong)(param_3->HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
      if (iVar4 != -1) {
        do {
          if (*(FD3D12WorkGraphShader **)(*(longlong *)&param_3->Elements + (longlong)iVar4 * 0x10)
              == param_1) {
            return;
          }
          iVar4 = *(int *)(*(longlong *)&param_3->Elements + 8 + (longlong)iVar4 * 0x10);
        } while (iVar4 != -1);
      }
    }
    pFVar1 = (param_2->AllocatorInstance).Data;
    local_18[0] = param_1;
    if (((pFVar1 <= (FScriptContainerElement *)local_18) &&
        ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)param_2->ArrayMax * 8)) &&
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
    iVar4 = param_2->ArrayNum;
    if (iVar4 == param_2->ArrayMax) {
      iVar4 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar4 + 1;
    *(FD3D12WorkGraphShader **)((param_2->AllocatorInstance).Data + (longlong)iVar4 * 8) =
         local_18[0];
    local_res20 = param_1;
    TSet<FRHIShader_*,DefaultKeyFuncs<FRHIShader_*,0>,FDefaultSetAllocator>::Emplace<FRHIShader_*>
              (param_3,&local_res8,(bool *)&local_res20);
  }
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<D3D12_RAYTRACING_GEOMETRY_DESC>_> @ 1459e78d0

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<D3D12_RAYTRACING_GEOMETRY_DESC>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<D3D12_RAYTRACING_GEOMETRY_DESC> *param_5,int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 2) {
      iVar1 = 1;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
  ForElementType<D3D12_RAYTRACING_GEOMETRY_DESC>::ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<FRHITransientAliasingInfo>_> @ 1459e7970

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<FRHITransientAliasingInfo>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FRHITransientAliasingInfo> *param_5,int param_6,int *param_7)

{
  FRHITransientAliasingInfo *pFVar1;
  uint uVar2;
  
  uVar2 = param_3;
  if ((param_3 != 0) && (uVar2 = 4, 4 < (uint)param_3)) {
    uVar2 = param_3;
  }
  if (param_4 < (int)uVar2) {
    pFVar1 = (param_5->SecondaryData).Data;
    if (4 < uVar2) {
      TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::
      ForElementType<FRHITransientAliasingInfo>::ResizeAllocation
                (&param_5->SecondaryData,0,uVar2,(ulonglong)param_1);
      *param_7 = uVar2;
      return;
    }
    param_4 = uVar2;
    if (pFVar1 != (FRHITransientAliasingInfo *)0x0) {
      if (0x7ffffffe < param_1 - 1) {
                    /* WARNING: Subroutine does not return */
        OnInvalidConcurrentLinearArrayAllocatorNum(0,(ulonglong)param_1);
      }
      TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(pFVar1);
      (param_5->SecondaryData).Data = (FRHITransientAliasingInfo *)0x0;
      *param_7 = uVar2;
      return;
    }
  }
  *param_7 = param_4;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<FRHITransitionInfo>_> @ 1459e7a30

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<FRHITransitionInfo>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FRHITransitionInfo> *param_5,int param_6,int *param_7)

{
  FRHITransitionInfo *pFVar1;
  uint uVar2;
  
  uVar2 = param_3;
  if ((param_3 != 0) && (uVar2 = 4, 4 < (uint)param_3)) {
    uVar2 = param_3;
  }
  if (param_4 < (int)uVar2) {
    pFVar1 = (param_5->SecondaryData).Data;
    if (4 < uVar2) {
      TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHITransitionInfo>::
      ResizeAllocation(&param_5->SecondaryData,0,uVar2,(ulonglong)param_1);
      *param_7 = uVar2;
      return;
    }
    param_4 = uVar2;
    if (pFVar1 != (FRHITransitionInfo *)0x0) {
      if (0x7ffffffe < param_1 - 1) {
                    /* WARNING: Subroutine does not return */
        OnInvalidConcurrentLinearArrayAllocatorNum(0,(ulonglong)param_1);
      }
      TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(pFVar1);
      (param_5->SecondaryData).Data = (FRHITransitionInfo *)0x0;
      *param_7 = uVar2;
      return;
    }
  }
  *param_7 = param_4;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FD3D12SyncPoint>_>_> @ 1459e7af0

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FD3D12SyncPoint>_>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<TRefCountPtr<FD3D12SyncPoint>_> *param_5,int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
  ForElementType<TRefCountPtr<FD3D12SyncPoint>_>::ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocGrow1_DoAlloc<0,TFixedAllocator<3>::ForElementType<FD3D12Queue>_> @ 1459e7b90

int __cdecl
UE::Core::Private::ReallocGrow1_DoAlloc<0,TFixedAllocator<3>::ForElementType<FD3D12Queue>_>
          (uint param_1,uint param_2,ForElementType<FD3D12Queue> *param_3,int *param_4)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = *param_4;
  uVar1 = iVar4 + 1;
  if ((int)uVar1 < iVar4) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (3 < uVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewMax <= NumInlineElements",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                       ,0x536,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  *param_4 = 3;
  return iVar4;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12Buffer_*>_> @ 1459e7c00

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12Buffer_*>_>
          (ushort param_1,ForElementType<FD3D12Buffer_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12Buffer_*>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12RayTracingScene_*>_> @ 1459e7cd0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12RayTracingScene_*>_>
          (ushort param_1,ForElementType<FD3D12RayTracingScene_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12RayTracingScene_*>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC>_> @ 1459e7da0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC>_>
          (ushort param_1,
          ForElementType<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC>_> @ 1459e7e70

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC>_>
          (ushort param_1,
          ForElementType<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x21) {
      iVar8 = 0x20;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x21) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TRHIPipelineArray<TRefCountPtr<FD3D12SyncPoint>_>_>_> @ 1459e8010

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TRHIPipelineArray<TRefCountPtr<FD3D12SyncPoint>_>_>_>
          (ushort param_1,
          ForElementType<TRHIPipelineArray<TRefCountPtr<FD3D12SyncPoint>_>_> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TRHIPipelineArray<TRefCountPtr<FD3D12SyncPoint>_>_>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FD3D12SyncPoint>_>_> @ 1459e80e0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FD3D12SyncPoint>_>_>
          (ushort param_1,ForElementType<TRefCountPtr<FD3D12SyncPoint>_> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 4) {
      iVar8 = 3;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 4) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TRefCountPtr<FD3D12SyncPoint>_>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12RenderQuery>::FLinkedObjectIterator>_> @ 1459e81b0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12RenderQuery>::FLinkedObjectIterator>_>
          (ushort param_1,
          ForElementType<FD3D12LinkedAdapterObject<FD3D12RenderQuery>::FLinkedObjectIterator>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FD3D12LinkedAdapterObject<FD3D12RenderQuery>::FLinkedObjectIterator>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<3>::ForElementType<wchar_t_const_*>_> @ 1459e8280

int __cdecl
UE::Core::Private::ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<3>::ForElementType<wchar_t_const_*>_>
          (ushort param_1,ForElementType<wchar_t_const_*> *param_2,int *param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = *param_3;
  uVar1 = iVar4 + 1;
  if ((int)uVar1 < iVar4) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (3 < uVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewMax <= NumInlineElements",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                       ,0x536,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  *param_3 = 3;
  return iVar4;
}

// ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<2>::ForElementType<FD3D12DescriptorManager>_> @ 1459e82f0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<2>::ForElementType<FD3D12DescriptorManager>_>
          (ushort param_1,ForElementType<FD3D12DescriptorManager> *param_2,int *param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = *param_3;
  uVar1 = iVar4 + 1;
  if ((int)uVar1 < iVar4) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (2 < uVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewMax <= NumInlineElements",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                       ,0x536,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  *param_3 = 2;
  return iVar4;
}

// ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<4>::ForElementType<FD3D12OfflineDescriptorManager>_> @ 1459e8360

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<4>::ForElementType<FD3D12OfflineDescriptorManager>_>
          (ushort param_1,ForElementType<FD3D12OfflineDescriptorManager> *param_2,int *param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = *param_3;
  uVar1 = iVar4 + 1;
  if ((int)uVar1 < iVar4) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (4 < uVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewMax <= NumInlineElements",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                       ,0x536,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  *param_3 = 4;
  return iVar4;
}

// ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<4>::ForElementType<FString>_> @ 1459e83d0

int __cdecl
UE::Core::Private::ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<4>::ForElementType<FString>_>
          (ushort param_1,ForElementType<FString> *param_2,int *param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = *param_3;
  uVar1 = iVar4 + 1;
  if ((int)uVar1 < iVar4) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (4 < uVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewMax <= NumInlineElements",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                       ,0x536,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  *param_3 = 4;
  return iVar4;
}

// ReallocGrow<1,TMemoryImageAllocator<64>::ForAnyElementType> @ 1459e8440

int __cdecl
UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<64>::ForAnyElementType>
          (uint param_1,uint param_2,int param_3,ForAnyElementType *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  int iVar6;
  
  iVar2 = *param_5;
  iVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar6 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar5 = (ulonglong)(int)uVar1;
    if (iVar6 == 0) {
      uVar3 = 4;
      if (4 < uVar5) {
        uVar3 = uVar5;
      }
    }
    else {
      uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
    }
    uVar4 = FMemory::QuantizeSize((longlong)(int)param_1 * uVar3,param_2);
    iVar6 = (int)(uVar4 / (ulonglong)(longlong)(int)param_1);
    if (iVar6 < (int)uVar1) {
      iVar6 = 0x7fffffff;
    }
    FMemoryImageAllocatorBase::ResizeAllocation
              ((FMemoryImageAllocatorBase *)param_4,iVar2,iVar6,(ulonglong)param_1,param_2);
    *param_6 = iVar6;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<D3D12_EXPORT_DESC>_> @ 1459e8520

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<D3D12_EXPORT_DESC>_>
          (uint param_1,uint param_2,int param_3,ForElementType<D3D12_EXPORT_DESC> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 4) {
      iVar8 = 3;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 4) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<D3D12_EXPORT_DESC>::
    ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<D3D12_RAYTRACING_GEOMETRY_DESC>_> @ 1459e8600

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<D3D12_RAYTRACING_GEOMETRY_DESC>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<D3D12_RAYTRACING_GEOMETRY_DESC> *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 2) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<D3D12_RAYTRACING_GEOMETRY_DESC>::ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<D3D12_RAYTRACING_GEOMETRY_DESC>_> @ 1459e86e0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<D3D12_RAYTRACING_GEOMETRY_DESC>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<D3D12_RAYTRACING_GEOMETRY_DESC> *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 0x21) {
      iVar8 = 0x20;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x21) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<D3D12_RAYTRACING_GEOMETRY_DESC>::ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<FRHITransientAliasingOverlap>_> @ 1459e87c0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<FRHITransientAliasingOverlap>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FRHITransientAliasingOverlap> *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  uVar4 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar4 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar3 = 4;
    if (4 < uVar1) {
      if (uVar4 < 5) {
        uVar4 = 0;
      }
      if (uVar4 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::
    ForElementType<FRHITransientAliasingOverlap>::ResizeAllocation
              (param_4,iVar2,uVar3,(ulonglong)param_1);
    *param_6 = uVar3;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FD3D12SyncPoint>_>_> @ 1459e8870

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FD3D12SyncPoint>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TRefCountPtr<FD3D12SyncPoint>_> *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 9) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TRefCountPtr<FD3D12SyncPoint>_>::ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_> @ 1459e8950

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FString> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 4) {
      iVar8 = 3;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 4) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>::
    ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocShrink<1,TMemoryImageAllocator<64>::ForAnyElementType> @ 1459e8b60

void __cdecl
UE::Core::Private::ReallocShrink<1,TMemoryImageAllocator<64>::ForAnyElementType>
          (uint param_1,uint param_2,ForAnyElementType *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(int)param_1;
  iVar1 = *param_5;
  if (((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
     ((0x40 < iVar1 - param_4 || (param_4 == 0)))) {
    iVar2 = param_4;
    if (0 < param_4) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,param_2);
      iVar2 = (int)(uVar3 / uVar4);
    }
    if (iVar2 != iVar1) {
      *param_5 = iVar2;
      FMemoryImageAllocatorBase::ResizeAllocation
                ((FMemoryImageAllocatorBase *)param_3,param_4,iVar2,(ulonglong)param_1,param_2);
    }
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<D3D12_EXPORT_DESC>_> @ 1459e8c20

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<D3D12_EXPORT_DESC>_>
          (uint param_1,uint param_2,ForElementType<D3D12_EXPORT_DESC> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 4) {
    iVar2 = 3;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<D3D12_EXPORT_DESC>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<D3D12_RAYTRACING_GEOMETRY_DESC>_> @ 1459e8ce0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<D3D12_RAYTRACING_GEOMETRY_DESC>_>
          (uint param_1,uint param_2,ForElementType<D3D12_RAYTRACING_GEOMETRY_DESC> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 2) {
    iVar2 = 1;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<D3D12_RAYTRACING_GEOMETRY_DESC>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<D3D12_RAYTRACING_GEOMETRY_DESC>_> @ 1459e8da0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<D3D12_RAYTRACING_GEOMETRY_DESC>_>
          (uint param_1,uint param_2,ForElementType<D3D12_RAYTRACING_GEOMETRY_DESC> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x21) {
    iVar2 = 0x20;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<D3D12_RAYTRACING_GEOMETRY_DESC>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_> @ 1459e8e60

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_>
          (uint param_1,uint param_2,ForElementType<FString> *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 4) {
    iVar2 = 3;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocTo<1,TMemoryImageAllocator<64>::ForAnyElementType> @ 1459e8f20

void __cdecl
UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<64>::ForAnyElementType>
          (uint param_1,uint param_2,int param_3,ForAnyElementType *param_4,int param_5,int *param_6
          )

{
  int iVar1;
  ulong64 uVar2;
  
  iVar1 = 0;
  if (param_3 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_3 * (longlong)(int)param_1,param_2);
    iVar1 = (int)(uVar2 / (ulonglong)(longlong)(int)param_1);
    if (iVar1 < param_3) {
      iVar1 = 0x7fffffff;
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    FMemoryImageAllocatorBase::ResizeAllocation
              ((FMemoryImageAllocatorBase *)param_4,param_5,iVar1,(ulonglong)param_1,param_2);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12Buffer_*>_> @ 1459e8fb0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12Buffer_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FD3D12Buffer_*> *param_4,int param_5
          ,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 2) {
      iVar1 = 1;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12Buffer_*>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC>_> @ 1459e9030

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC>_> @ 1459e90b0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x21) {
      iVar1 = 0x20;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<FRHITransientAliasingOverlap>_> @ 1459e9130

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<FRHITransientAliasingOverlap>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FRHITransientAliasingOverlap> *param_4,int param_5,int *param_6)

{
  int iVar1;
  
  iVar1 = param_3;
  if ((param_3 != 0) && (iVar1 = 4, 4 < (uint)param_3)) {
    iVar1 = param_3;
  }
  if (iVar1 == *param_6) {
    return;
  }
  *param_6 = iVar1;
  TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::
  ForElementType<FRHITransientAliasingOverlap>::ResizeAllocation
            (param_4,param_5,iVar1,(ulonglong)param_1);
  return;
}

// ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FD3D12SyncPoint>_>_> @ 1459e9170

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FD3D12SyncPoint>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TRefCountPtr<FD3D12SyncPoint>_> *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TRefCountPtr<FD3D12SyncPoint>_>::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12RenderQuery>::FLinkedObjectIterator>_> @ 1459e91f0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12RenderQuery>::FLinkedObjectIterator>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FD3D12LinkedAdapterObject<FD3D12RenderQuery>::FLinkedObjectIterator>
          *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FD3D12LinkedAdapterObject<FD3D12RenderQuery>::FLinkedObjectIterator>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// RegisterShader<FD3D12AmplificationShader> @ 1459e9270

void __cdecl
UE::RHICore::Nvidia::Aftermath::D3D12::RegisterShader<FD3D12AmplificationShader>
          (FD3D12AmplificationShader *param_1)

{
  size_t sVar1;
  TStringView<wchar_t> local_18;
  
  if (*(int *)&param_1->field_0x98 < 2) {
    local_18.Size = 0;
    local_18.DataPtr = (wchar_t *)0x0;
  }
  else {
    local_18.DataPtr = *(wchar_t **)&param_1->field_0x90;
    local_18.Size = 0;
    if (local_18.DataPtr != (wchar_t *)0x0) {
      sVar1 = wcslen(local_18.DataPtr);
      local_18.Size = (int)sVar1;
    }
  }
  RegisterShaderBinary(*(void **)&param_1->field_0x108,*(uint *)&param_1->field_0x110,&local_18);
  return;
}

// RegisterShader<FD3D12ComputeShader> @ 1459e92d0

void __cdecl
UE::RHICore::Nvidia::Aftermath::D3D12::RegisterShader<FD3D12ComputeShader>
          (FD3D12ComputeShader *param_1)

{
  size_t sVar1;
  TStringView<wchar_t> local_18;
  
  if ((int)param_1->_padding_ < 2) {
    local_18.Size = 0;
    local_18.DataPtr = (wchar_t *)0x0;
  }
  else {
    local_18.DataPtr = (wchar_t *)param_1->_padding_;
    local_18.Size = 0;
    if (local_18.DataPtr != (wchar_t *)0x0) {
      sVar1 = wcslen(local_18.DataPtr);
      local_18.Size = (int)sVar1;
    }
  }
  RegisterShaderBinary((void *)param_1->_padding_,(uint)param_1->_padding_,&local_18);
  return;
}

// RegisterShader<FD3D12GeometryShader> @ 1459e9330

void __cdecl
UE::RHICore::Nvidia::Aftermath::D3D12::RegisterShader<FD3D12GeometryShader>
          (FD3D12GeometryShader *param_1)

{
  size_t sVar1;
  TStringView<wchar_t> local_18;
  
  if (*(int *)&param_1->field_0x98 < 2) {
    local_18.Size = 0;
    local_18.DataPtr = (wchar_t *)0x0;
  }
  else {
    local_18.DataPtr = *(wchar_t **)&param_1->field_0x90;
    local_18.Size = 0;
    if (local_18.DataPtr != (wchar_t *)0x0) {
      sVar1 = wcslen(local_18.DataPtr);
      local_18.Size = (int)sVar1;
    }
  }
  RegisterShaderBinary(*(void **)&param_1->field_0x108,*(uint *)&param_1->field_0x110,&local_18);
  return;
}

// RegisterShader<FD3D12MeshShader> @ 1459e9390

void __cdecl
UE::RHICore::Nvidia::Aftermath::D3D12::RegisterShader<FD3D12MeshShader>(FD3D12MeshShader *param_1)

{
  size_t sVar1;
  TStringView<wchar_t> local_18;
  
  if (*(int *)&param_1->field_0x98 < 2) {
    local_18.Size = 0;
    local_18.DataPtr = (wchar_t *)0x0;
  }
  else {
    local_18.DataPtr = *(wchar_t **)&param_1->field_0x90;
    local_18.Size = 0;
    if (local_18.DataPtr != (wchar_t *)0x0) {
      sVar1 = wcslen(local_18.DataPtr);
      local_18.Size = (int)sVar1;
    }
  }
  RegisterShaderBinary(*(void **)&param_1->field_0x108,*(uint *)&param_1->field_0x110,&local_18);
  return;
}

// RegisterShader<FD3D12PixelShader> @ 1459e93f0

void __cdecl
UE::RHICore::Nvidia::Aftermath::D3D12::RegisterShader<FD3D12PixelShader>(FD3D12PixelShader *param_1)

{
  size_t sVar1;
  TStringView<wchar_t> local_18;
  
  if (*(int *)&param_1->field_0x98 < 2) {
    local_18.Size = 0;
    local_18.DataPtr = (wchar_t *)0x0;
  }
  else {
    local_18.DataPtr = *(wchar_t **)&param_1->field_0x90;
    local_18.Size = 0;
    if (local_18.DataPtr != (wchar_t *)0x0) {
      sVar1 = wcslen(local_18.DataPtr);
      local_18.Size = (int)sVar1;
    }
  }
  RegisterShaderBinary(*(void **)&param_1->field_0x108,*(uint *)&param_1->field_0x110,&local_18);
  return;
}

// RegisterShader<FD3D12RayTracingShader> @ 1459e9450

void __cdecl
UE::RHICore::Nvidia::Aftermath::D3D12::RegisterShader<FD3D12RayTracingShader>
          (FD3D12RayTracingShader *param_1)

{
  size_t sVar1;
  TStringView<wchar_t> local_18;
  
  if ((int)param_1->_padding_ < 2) {
    local_18.Size = 0;
    local_18.DataPtr = (wchar_t *)0x0;
  }
  else {
    local_18.DataPtr = (wchar_t *)param_1->_padding_;
    local_18.Size = 0;
    if (local_18.DataPtr != (wchar_t *)0x0) {
      sVar1 = wcslen(local_18.DataPtr);
      local_18.Size = (int)sVar1;
    }
  }
  RegisterShaderBinary((void *)param_1->_padding_,(uint)param_1->_padding_,&local_18);
  return;
}

// RegisterShader<FD3D12VertexShader> @ 1459e94b0

void __cdecl
UE::RHICore::Nvidia::Aftermath::D3D12::RegisterShader<FD3D12VertexShader>
          (FD3D12VertexShader *param_1)

{
  size_t sVar1;
  TStringView<wchar_t> local_18;
  
  if (*(int *)&param_1->field_0x98 < 2) {
    local_18.Size = 0;
    local_18.DataPtr = (wchar_t *)0x0;
  }
  else {
    local_18.DataPtr = *(wchar_t **)&param_1->field_0x90;
    local_18.Size = 0;
    if (local_18.DataPtr != (wchar_t *)0x0) {
      sVar1 = wcslen(local_18.DataPtr);
      local_18.Size = (int)sVar1;
    }
  }
  RegisterShaderBinary(*(void **)&param_1->field_0x108,*(uint *)&param_1->field_0x110,&local_18);
  return;
}

// RegisterShader<FD3D12WorkGraphShader> @ 1459e9510

void __cdecl
UE::RHICore::Nvidia::Aftermath::D3D12::RegisterShader<FD3D12WorkGraphShader>
          (FD3D12WorkGraphShader *param_1)

{
  size_t sVar1;
  TStringView<wchar_t> local_18;
  
  if ((int)param_1->_padding_ < 2) {
    local_18.Size = 0;
    local_18.DataPtr = (wchar_t *)0x0;
  }
  else {
    local_18.DataPtr = (wchar_t *)param_1->_padding_;
    local_18.Size = 0;
    if (local_18.DataPtr != (wchar_t *)0x0) {
      sVar1 = wcslen(local_18.DataPtr);
      local_18.Size = (int)sVar1;
    }
  }
  RegisterShaderBinary((void *)param_1->_padding_,(uint)param_1->_padding_,&local_18);
  return;
}

// operator() @ 1459fa3f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UE::RHICore::Nvidia::Aftermath::D3D12::CreateShaderAssociations'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  size_t sVar6;
  int iVar7;
  TStringView<wchar_t> *pTVar9;
  LARGE_INTEGER local_res8;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28 [2];
  int iVar8;
  
  QueryPerformanceCounter(&local_res8);
  if (*(float *)((longlong)this + 8) <=
      (float)((double)(ulonglong)(local_res8.QuadPart - *(longlong *)this) *
             FGenericPlatformTime::SecondsPerCycle64)) {
    if (::_TSS0 <=
        *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c)) {
      return;
    }
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 != -1) {
      return;
    }
    if (2 < (byte)LogD3D12RHI._0_1_) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_Late_shader_ass_15107b828,
                 (FLogCategoryBase *)&LogD3D12RHI);
    }
    ThreadSafeOnce248 = 1;
    _Init_thread_footer(&::_TSS0);
    return;
  }
  plVar1 = *(longlong **)((longlong)this + 0x10);
  iVar8 = 0;
  iVar7 = 0;
  uVar5 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar2 = *(longlong *)(*plVar1 + (longlong)param_1 * 8);
  switch(*(undefined1 *)(lVar2 + 0x104)) {
  case 0:
    if (*(int *)(lVar2 + 0x98) < 2) {
      local_98.DataPtr = (wchar_t *)0x0;
    }
    else {
      local_98.DataPtr = *(wchar_t **)(lVar2 + 0x90);
      if (local_98.DataPtr != (wchar_t *)0x0) {
        sVar6 = wcslen(local_98.DataPtr);
        local_98.Size = (int)sVar6;
        pTVar9 = &local_98;
        break;
      }
    }
    local_98.Size = 0;
    pTVar9 = &local_98;
    break;
  case 1:
    if (*(int *)(lVar2 + 0x98) < 2) {
      local_78.DataPtr = (wchar_t *)0x0;
    }
    else {
      local_78.DataPtr = *(wchar_t **)(lVar2 + 0x90);
      if (local_78.DataPtr != (wchar_t *)0x0) {
        sVar6 = wcslen(local_78.DataPtr);
        local_78.Size = (int)sVar6;
        pTVar9 = &local_78;
        break;
      }
    }
    local_78.Size = 0;
    pTVar9 = &local_78;
    break;
  case 2:
    if (*(int *)(lVar2 + 0x98) < 2) {
      local_88.DataPtr = (wchar_t *)0x0;
    }
    else {
      local_88.DataPtr = *(wchar_t **)(lVar2 + 0x90);
      if (local_88.DataPtr != (wchar_t *)0x0) {
        sVar6 = wcslen(local_88.DataPtr);
        local_88.Size = (int)sVar6;
        pTVar9 = &local_88;
        break;
      }
    }
    local_88.Size = 0;
    pTVar9 = &local_88;
    break;
  case 3:
    if (*(int *)(lVar2 + 0x98) < 2) {
      local_58.DataPtr = (wchar_t *)0x0;
    }
    else {
      local_58.DataPtr = *(wchar_t **)(lVar2 + 0x90);
      if (local_58.DataPtr != (wchar_t *)0x0) {
        sVar6 = wcslen(local_58.DataPtr);
        local_58.Size = (int)sVar6;
        pTVar9 = &local_58;
        break;
      }
    }
    local_58.Size = 0;
    pTVar9 = &local_58;
    break;
  case 4:
    if (*(int *)(lVar2 + 0x98) < 2) {
      local_68.DataPtr = (wchar_t *)0x0;
    }
    else {
      local_68.DataPtr = *(wchar_t **)(lVar2 + 0x90);
      if (local_68.DataPtr != (wchar_t *)0x0) {
        sVar6 = wcslen(local_68.DataPtr);
        local_68.Size = (int)sVar6;
        pTVar9 = &local_68;
        break;
      }
    }
    local_68.Size = 0;
    pTVar9 = &local_68;
    break;
  case 5:
    if (*(int *)(lVar2 + 0x98) < 2) {
      local_48.DataPtr = (wchar_t *)0x0;
    }
    else {
      local_48.DataPtr = *(wchar_t **)(lVar2 + 0x90);
      if (local_48.DataPtr != (wchar_t *)0x0) {
        sVar6 = wcslen(local_48.DataPtr);
        iVar7 = (int)sVar6;
      }
    }
    local_48.Size = iVar7;
    UE::RHICore::Nvidia::Aftermath::RegisterShaderBinary
              (*(void **)(lVar2 + 0x110),*(uint *)(lVar2 + 0x118),&local_48);
    return;
  case 6:
  case 7:
  case 8:
  case 9:
    if (*(int *)(lVar2 + 0x98) < 2) {
      local_38.DataPtr = (wchar_t *)0x0;
    }
    else {
      local_38.DataPtr = *(wchar_t **)(lVar2 + 0x90);
      if (local_38.DataPtr != (wchar_t *)0x0) {
        sVar6 = wcslen(local_38.DataPtr);
        iVar7 = (int)sVar6;
      }
    }
    local_38.Size = iVar7;
    UE::RHICore::Nvidia::Aftermath::RegisterShaderBinary
              (*(void **)(lVar2 + 0x118),*(uint *)(lVar2 + 0x120),&local_38);
    return;
  case 10:
  case 0xb:
    if (*(int *)(lVar2 + 0x98) < 2) {
      local_28[0].DataPtr = (wchar_t *)0x0;
    }
    else {
      local_28[0].DataPtr = *(wchar_t **)(lVar2 + 0x90);
      if (local_28[0].DataPtr != (wchar_t *)0x0) {
        sVar6 = wcslen(local_28[0].DataPtr);
        iVar8 = (int)sVar6;
      }
    }
    pTVar9 = local_28;
    local_28[0].Size = iVar8;
    break;
  default:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12NvidiaExtensions.cpp"
                       ,0xbf,L"");
    if (!bVar4) {
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  UE::RHICore::Nvidia::Aftermath::RegisterShaderBinary
            (*(void **)(lVar2 + 0x108),*(uint *)(lVar2 + 0x110),pTVar9);
  return;
}

// BeginBreadcrumb @ 145a040a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::RHICore::Nvidia::Aftermath::D3D12::BeginBreadcrumb
          (GFSDK_Aftermath_ContextHandle__ *param_1,FRHIBreadcrumbNode *param_2)

{
  bool bVar1;
  int iVar2;
  wchar_t *_Str;
  size_t sVar3;
  undefined1 auStack_148 [32];
  undefined1 local_128 [256];
  wchar_t *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_28 = (wchar_t *)0x0;
  local_20 = 0;
  bVar1 = AreMarkersEnabled();
  _Str = local_28;
  if (bVar1) {
    if (param_2 == (FRHIBreadcrumbNode *)0x0) {
      _Str = L"<root>";
    }
    else {
      _Str = (wchar_t *)(**(code **)(param_2->_padding_ + 0x10))(param_2,local_128);
    }
    local_28 = _Str;
    sVar3 = wcslen(_Str);
    local_20 = (int)sVar3 * 2 + 2;
  }
  if (((_Str != (wchar_t *)0x0) &&
      (iVar2 = GFSDK_Aftermath_SetEventMarker(param_1,_Str,local_20), 6 < (byte)LogD3D12RHI._0_1_))
     && (iVar2 != 1)) {
    Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
  }
  return;
}

// BeginBreadcrumb @ 145a04190

void __cdecl
UE::RHICore::Intel::GPUCrashDumps::D3D12::BeginBreadcrumb
          (ID3D12GraphicsCommandList *param_1,FRHIBreadcrumbNode *param_2)

{
  bool bVar1;
  FRHIBreadcrumbNode *pFVar2;
  
  bVar1 = GPUCrashDumps::IsEnabled();
  if (bVar1) {
    pFVar2 = FRHIBreadcrumbNode::Sentinel;
    if (param_2 != (FRHIBreadcrumbNode *)0x0) {
      pFVar2 = param_2;
    }
    if (pFVar2 != (FRHIBreadcrumbNode *)0x0) {
      INTC_D3D12_SetEventMarker
                (FD3D12DynamicRHI::SingleD3DRHI->IntelExtensionContext,param_1,0x42,pFVar2,8);
    }
  }
  return;
}

// CopyDescriptor @ 145a094d0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __cdecl
UE::D3D12Descriptors::CopyDescriptor
          (FD3D12Device *param_1,FD3D12DescriptorHeap *param_2,FRHIDescriptorHandle param_3,
          D3D12_CPU_DESCRIPTOR_HANDLE param_4)

{
  uint uVar1;
  CD3DX12_CPU_DESCRIPTOR_HANDLE CVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  ushort uVar6;
  undefined4 uVar7;
  
  if (param_3.Index == 0xffffffff) {
    return;
  }
  if (param_3.Type == Invalid) {
    return;
  }
  uVar1 = param_2->DescriptorSize;
  CVar2 = param_2->CpuBase;
  uVar6 = 1 << (param_3.Type & 0x1f);
  if ((uVar6 & 0x7f) == 0) {
    if ((char)uVar6 < '\0') {
      uVar7 = 1;
      goto LAB_145a09555;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Descriptors.h"
                       ,0x2c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar7 = 0;
LAB_145a09555:
  if ((*(longlong *)&param_1->field_0x10 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  plVar3 = *(longlong **)(*(longlong *)&param_1->field_0x10 + 8);
  (**(code **)(*plVar3 + 0xc0))
            (plVar3,1,(ulonglong)uVar1 * (longlong)(int)param_3.Index + (longlong)CVar2,param_4.ptr,
             uVar7);
  return;
}

// CopyDescriptors @ 145a095c0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __cdecl
UE::D3D12Descriptors::CopyDescriptors
          (FD3D12Device *param_1,FD3D12DescriptorHeap *param_2,FD3D12DescriptorHeap *param_3,
          uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  CD3DX12_CPU_DESCRIPTOR_HANDLE CVar3;
  CD3DX12_CPU_DESCRIPTOR_HANDLE CVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  D3D12_DESCRIPTOR_HEAP_TYPE DVar8;
  bool bVar9;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId22,"CopyDescriptors HeapToHeap",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Descriptors.cpp"
               ,0x16);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId22);
  }
  uVar1 = param_3->DescriptorSize;
  uVar2 = param_2->DescriptorSize;
  CVar3 = param_2->CpuBase;
  CVar4 = param_3->CpuBase;
  DVar8 = ::Translate(param_2->Type);
  if ((*(longlong *)&param_1->field_0x10 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  plVar5 = *(longlong **)(*(longlong *)&param_1->field_0x10 + 8);
  (**(code **)(*plVar5 + 0xc0))
            (plVar5,param_5,(ulonglong)uVar2 * (longlong)(int)param_4 + (longlong)CVar3,
             (ulonglong)uVar1 * (longlong)(int)param_4 + (longlong)CVar4,DVar8);
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CopyDescriptors @ 145a096d0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::D3D12Descriptors::CopyDescriptors
          (FD3D12Device *param_1,FD3D12DescriptorHeap *param_2,FD3D12DescriptorHeap *param_3,
          TArrayView<FRHIDescriptorHandle_const_,int> *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  CD3DX12_CPU_DESCRIPTOR_HANDLE CVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  D3D12_DESCRIPTOR_HEAP_TYPE DVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  bool bVar15;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_78;
  TArray<D3D12_CPU_DESCRIPTOR_HANDLE,TSizedDefaultAllocator<32>_> local_68;
  TArray<D3D12_CPU_DESCRIPTOR_HANDLE,TSizedDefaultAllocator<32>_> local_58;
  
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId40,"CopyDescriptors HeapToHeap Scattered",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Descriptors.cpp"
               ,0x28);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId40);
  }
  iVar1 = param_4->ArrayNum;
  DVar8 = ::Translate(param_2->Type);
  uVar13 = 0;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  TArray<D3D12_CPU_DESCRIPTOR_HANDLE,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_58,iVar1,Default);
  TArray<D3D12_CPU_DESCRIPTOR_HANDLE,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_68,iVar1,Default);
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_78,iVar1,Default);
  uVar14 = uVar13;
  if (0 < iVar1) {
    do {
      uVar12 = (uint)uVar13;
      uVar11 = ~uVar12 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar12 < param_4->ArrayNum) {
        uVar9 = uVar11;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar9 = param_4->DataPtr[uVar14].Index;
      uVar2 = param_2->DescriptorSize;
      CVar4 = param_2->CpuBase;
      uVar10 = 0;
      if ((int)uVar12 < local_58.ArrayNum) {
        uVar10 = uVar11;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar3 = param_4->ArrayNum;
      *(ulonglong *)(local_58.AllocatorInstance.Data + uVar14 * 8) =
           (longlong)(int)uVar9 * (ulonglong)uVar2 + (longlong)CVar4;
      uVar9 = 0;
      if ((int)uVar12 < iVar3) {
        uVar9 = uVar11;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar9 = param_4->DataPtr[uVar14].Index;
      uVar2 = param_3->DescriptorSize;
      CVar4 = param_3->CpuBase;
      uVar10 = 0;
      if ((int)uVar12 < local_68.ArrayNum) {
        uVar10 = uVar11;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(ulonglong *)(local_68.AllocatorInstance.Data + uVar14 * 8) =
           (longlong)(int)uVar9 * (ulonglong)uVar2 + (longlong)CVar4;
      uVar9 = 0;
      if ((int)uVar12 < local_78.ArrayNum) {
        uVar9 = uVar11;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar13 = (ulonglong)(uVar12 + 1);
      *(undefined4 *)(local_78.AllocatorInstance.Data + uVar14 * 4) = 1;
      uVar14 = uVar14 + 1;
    } while ((longlong)uVar14 < (longlong)iVar1);
  }
  if ((*(longlong *)&param_1->field_0x10 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  plVar5 = *(longlong **)(*(longlong *)&param_1->field_0x10 + 8);
  (**(code **)(*plVar5 + 0xb8))
            (plVar5,iVar1,local_58.AllocatorInstance.Data,local_78.AllocatorInstance.Data,iVar1,
             local_68.AllocatorInstance.Data,local_78.AllocatorInstance.Data,DVar8);
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CopyDescriptors @ 145a09a40

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::D3D12Descriptors::CopyDescriptors
          (FD3D12Device *param_1,FD3D12DescriptorHeap *param_2,
          TArrayView<FRHIDescriptorHandle_const_,int> *param_3,
          TArrayView<FD3D12OfflineDescriptor_const_,int> *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  CD3DX12_CPU_DESCRIPTOR_HANDLE CVar4;
  undefined8 uVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  D3D12_DESCRIPTOR_HEAP_TYPE DVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  bool bVar18;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_78;
  TArray<D3D12_CPU_DESCRIPTOR_HANDLE,TSizedDefaultAllocator<32>_> local_68;
  TArray<D3D12_CPU_DESCRIPTOR_HANDLE,TSizedDefaultAllocator<32>_> local_58;
  
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId71,"CopyDescriptors Scattered",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Descriptors.cpp"
               ,0x47);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId71);
  }
  if ((param_3->ArrayNum != param_4->ArrayNum) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("DstHandles.Num() == SrcOfflineDescriptors.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Descriptors.cpp"
                         ,0x4a,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar1 = param_3->ArrayNum;
  uVar12 = (ulonglong)(int)uVar1;
  DVar9 = ::Translate(param_2->Type);
  uVar14 = 0;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  TArray<D3D12_CPU_DESCRIPTOR_HANDLE,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_58,uVar1,Default);
  TArray<D3D12_CPU_DESCRIPTOR_HANDLE,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_68,uVar1,Default);
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_78,uVar1,Default);
  uVar15 = uVar14;
  uVar17 = uVar14;
  if (0 < (int)uVar1) {
    do {
      uVar13 = (uint)uVar14;
      uVar16 = ~uVar13 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar13 < param_3->ArrayNum) {
        uVar10 = uVar16;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar10 = param_3->DataPtr[uVar17].Index;
      uVar2 = param_2->DescriptorSize;
      CVar4 = param_2->CpuBase;
      uVar11 = 0;
      if ((int)uVar13 < local_58.ArrayNum) {
        uVar11 = uVar16;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar3 = param_4->ArrayNum;
      *(ulonglong *)(local_58.AllocatorInstance.Data + uVar17 * 8) =
           (longlong)(int)uVar10 * (ulonglong)uVar2 + (longlong)CVar4;
      uVar10 = 0;
      if ((int)uVar13 < iVar3) {
        uVar10 = uVar16;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar10 = 0;
      if ((int)uVar13 < local_68.ArrayNum) {
        uVar10 = uVar16;
      }
      uVar5 = *(undefined8 *)((longlong)&param_4->DataPtr->_padding_ + uVar15);
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(undefined8 *)(local_68.AllocatorInstance.Data + uVar17 * 8) = uVar5;
      uVar10 = 0;
      if ((int)uVar13 < local_78.ArrayNum) {
        uVar10 = uVar16;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar14 = (ulonglong)(uVar13 + 1);
      *(undefined4 *)(local_78.AllocatorInstance.Data + uVar17 * 4) = 1;
      uVar17 = uVar17 + 1;
      uVar15 = uVar15 + 0x10;
    } while ((longlong)uVar17 < (longlong)uVar12);
    uVar12 = (ulonglong)uVar1;
  }
  if ((*(longlong *)&param_1->field_0x10 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  plVar6 = *(longlong **)(*(longlong *)&param_1->field_0x10 + 8);
  (**(code **)(*plVar6 + 0xb8))
            (plVar6,uVar12 & 0xffffffff,local_58.AllocatorInstance.Data,
             local_78.AllocatorInstance.Data,uVar12 & 0xffffffff,local_68.AllocatorInstance.Data,
             local_78.AllocatorInstance.Data,DVar9);
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CreateOfflineCopy @ 145a0bb20

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12OfflineDescriptor * __cdecl
UE::D3D12Descriptors::CreateOfflineCopy
          (FD3D12OfflineDescriptor *__return_storage_ptr__,FD3D12Device *param_1,
          FD3D12DescriptorHeap *param_2,FRHIDescriptorHandle param_3)

{
  ERHIDescriptorHeapType EVar1;
  uint uVar2;
  CD3DX12_CPU_DESCRIPTOR_HANDLE CVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  D3D12_DESCRIPTOR_HEAP_TYPE DVar7;
  FD3D12OfflineDescriptorManager *this;
  FD3D12OfflineDescriptor *pFVar8;
  
  uVar2 = param_2->DescriptorSize;
  EVar1 = param_2->Type;
  CVar3 = param_2->CpuBase;
  this = FD3D12Device::GetOfflineDescriptorManager(param_1,EVar1);
  FD3D12OfflineDescriptorManager::AllocateHeapSlot(this,__return_storage_ptr__);
  if (*(longlong *)&param_1->field_0x10 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentAdapter != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x41,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FD3D12OfflineDescriptor *)(*pcVar5)();
      return pFVar8;
    }
  }
  plVar4 = *(longlong **)(*(longlong *)&param_1->field_0x10 + 8);
  pcVar5 = *(code **)(*plVar4 + 0xc0);
  DVar7 = ::Translate(EVar1);
  (*pcVar5)(plVar4,1,__return_storage_ptr__->_padding_,
            (ulonglong)uVar2 * (longlong)(int)param_3.Index + (longlong)CVar3,DVar7);
  __return_storage_ptr__->Version = __return_storage_ptr__->Version + 1;
  return __return_storage_ptr__;
}

// CreateOfflineCopy @ 145a0bbf0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12OfflineDescriptor * __cdecl
UE::D3D12Descriptors::CreateOfflineCopy
          (FD3D12OfflineDescriptor *__return_storage_ptr__,FD3D12Device *param_1,
          D3D12_CPU_DESCRIPTOR_HANDLE param_2,ERHIDescriptorHeapType param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  D3D12_DESCRIPTOR_HEAP_TYPE DVar4;
  FD3D12OfflineDescriptorManager *this;
  FD3D12OfflineDescriptor *pFVar5;
  
  this = FD3D12Device::GetOfflineDescriptorManager(param_1,param_3);
  FD3D12OfflineDescriptorManager::AllocateHeapSlot(this,__return_storage_ptr__);
  if (*(longlong *)&param_1->field_0x10 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentAdapter != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x41,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FD3D12OfflineDescriptor *)(*pcVar2)();
      return pFVar5;
    }
  }
  plVar1 = *(longlong **)(*(longlong *)&param_1->field_0x10 + 8);
  pcVar2 = *(code **)(*plVar1 + 0xc0);
  DVar4 = ::Translate(param_3);
  (*pcVar2)(plVar1,1,__return_storage_ptr__->_padding_,param_2.ptr,DVar4);
  __return_storage_ptr__->Version = __return_storage_ptr__->Version + 1;
  return __return_storage_ptr__;
}

// CreateShaderAssociations @ 145a0dc50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __cdecl
UE::RHICore::Nvidia::Aftermath::D3D12::CreateShaderAssociations(float param_1,uint param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  ERHIResourceType EVar3;
  atomic<unsigned_int> aVar4;
  TRefCountPtr<FRHIResource> TVar5;
  FName FVar6;
  FName FVar7;
  code *pcVar8;
  double dVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  byte bVar14;
  uint uVar15;
  ulonglong uVar16;
  ForAnyElementType FVar17;
  uint uVar18;
  longlong lVar19;
  FRHIShader **ppFVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  undefined8 *puVar23;
  FName FVar24;
  ForElementType<unsigned_int> FVar25;
  FName *pFVar26;
  ulonglong uVar27;
  longlong lVar28;
  ForAnyElementType FVar29;
  undefined1 auVar30 [16];
  undefined1 auStackY_278 [32];
  TArray<FRHIShader_*,TSizedDefaultAllocator<32>_> local_228;
  <lambda_1> local_218;
  undefined1 local_217;
  undefined1 local_216;
  undefined1 local_215;
  undefined1 local_214;
  undefined1 local_213 [3];
  FScriptContainerElement *local_210;
  FName local_208;
  TArray<TRefCountPtr<FRHIResource>,TSizedDefaultAllocator<32>_> local_200;
  FName local_1f0;
  FName local_1e8;
  FName local_1e0;
  FName local_1d8;
  FName local_1d0;
  FName local_1c8;
  uint local_1c0;
  uint local_1bc;
  int local_1b8;
  uint uStack_1b4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1b0;
  undefined4 local_1a8;
  int iStack_1a4;
  int iStack_1a0;
  undefined4 uStack_19c;
  undefined1 local_198 [8];
  FRHIShader *local_190;
  undefined4 local_188;
  int local_184;
  undefined1 local_180 [8];
  LARGE_INTEGER local_178;
  FName local_170;
  FName local_168;
  FName local_160;
  FName local_158;
  FName local_150;
  FName local_148;
  LARGE_INTEGER local_140;
  LARGE_INTEGER local_138;
  FRHIShader *local_130;
  LARGE_INTEGER local_128;
  longlong *local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_118;
  LARGE_INTEGER local_f8;
  longlong local_f0;
  FSparseArrayAllocationInfo local_e8;
  TArrayView<std::nullptr_t,int> local_d8;
  code *local_c8;
  LARGE_INTEGER *local_c0;
  LARGE_INTEGER local_b8;
  float local_b0;
  TArray<FRHIShader_*,TSizedDefaultAllocator<32>_> *local_a8;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined1 local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_1c0 = param_2;
  QueryPerformanceCounter(&local_128);
  local_140 = local_128;
  if (4 < (byte)LogD3D12RHI._0_1_) {
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
  }
  auVar30._8_8_ = 0;
  auVar30._0_8_ = __real_416312d010000000;
  auVar30 = roundpd(auVar30,auVar30,1);
  local_228.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_228.ArrayNum = 0;
  local_228.ArrayMax = 0;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_200.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_200.ArrayNum = 0;
  local_200.ArrayMax = 0;
  QueryPerformanceCounter(&local_178);
  if ((longlong)auVar30._0_8_ == 0x7fffffffffffffff) {
    local_f0 = -1;
  }
  else {
    dVar9 = (double)(longlong)auVar30._0_8_ * __real_3e7ad7f29abcaf48;
    if (0.0 < dVar9) {
      dVar9 = dVar9 / FGenericPlatformTime::SecondsPerCycle64;
      local_f0 = 0;
      if ((__real_43e0000000000000 <= dVar9) &&
         (dVar9 = dVar9 - __real_43e0000000000000, dVar9 < __real_43e0000000000000)) {
        local_f0 = -0x8000000000000000;
      }
      local_f0 = (longlong)dVar9 + local_f0;
    }
    else {
      local_f0 = 0;
    }
  }
  local_f8 = local_178;
  PipelineStateCache::GetPipelineStates(&local_200,true,(FTimeout *)&local_f8.s);
  uVar16 = (ulonglong)local_200.ArrayNum;
  local_1bc = local_200.ArrayNum;
  local_210 = local_200.AllocatorInstance.Data + uVar16 * 8;
  pFVar22 = local_210;
  FVar29.Data = local_200.AllocatorInstance.Data;
LAB_145a0de07:
  if (local_200.ArrayNum != (int)uVar16) {
    local_213[0] = 0;
    `TCheckedPointerIterator<TRefCountPtr<FRHIResource>,int,0>::operator!='::__l2::<lambda_1>::
    operator()(local_213);
  }
  if (FVar29.Data == pFVar22) {
    if (4 < (byte)LogD3D12RHI._0_1_) {
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
    local_a8 = &local_228;
    local_c8 = Core::Private::Function::
               TFunctionRefCaller<`UE::RHICore::Nvidia::Aftermath::D3D12::CreateShaderAssociations'::__l2::<lambda_1>,void,int>
               ::Call;
    local_c0 = &local_b8;
    local_b8.s = local_140.s;
    local_d8.DataPtr = (void **)0x0;
    local_d8.ArrayNum = 0;
    local_b0 = param_1;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",local_228.ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_c8
               ,local_218,None,&local_d8);
    QueryPerformanceCounter(&local_138);
    if (4 < (byte)LogD3D12RHI._0_1_) {
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
    DestructItems<TRefCountPtr<FRHIResource>,int>
              ((TRefCountPtr<FRHIResource> *)local_200.AllocatorInstance.Data,local_200.ArrayNum);
    if (local_200.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_200.AllocatorInstance.Data);
    }
    local_50 = 0;
    if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free(local_58.Data);
    }
    TSparseArray<TSparseSetElement<FRHIShader_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FRHIShader_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FRHIShader_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98);
    if ((FName *)local_228.AllocatorInstance.Data != (FName *)0x0) {
      FMemory::Free(local_228.AllocatorInstance.Data);
    }
    return;
  }
  TVar5.Reference = *(FRHIResource **)FVar29.Data;
  if (TVar5.Reference != (FRHIResource *)0x0) {
    EVar3 = (TVar5.Reference)->ResourceType;
    if (EVar3 == RRT_GraphicsPipelineState) {
LAB_145a0de7b:
      lVar19 = TVar5.Reference[2]._padding_;
      if ((*(longlong *)(lVar19 + 0x10) == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("ParentAdapter != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                              ,0x41,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      bVar10 = IsPipelineUnused(*(FD3D12Adapter **)(lVar19 + 0x10),
                                (D3D12ResourceFrameCounter *)&TVar5.Reference[2].AtomicFlags,param_2
                               );
      if (!bVar10) {
        FVar7 = (FName)TVar5.Reference[3]._padding_;
        if (FVar7 != (FName)0x0) {
          uVar15 = ((uint)((ulonglong)FVar7 >> 0x14) & 0xffff ^ (uint)((ulonglong)FVar7 >> 4)) *
                   -0x7a143595;
          uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
          if (local_98._8_4_ != local_64) {
            FVar17.Data = (FScriptContainerElement *)local_60;
            if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar17.Data = local_58.Data;
            }
            for (iVar11 = *(int *)((longlong)FVar17.Data +
                                  (ulonglong)(local_50 - 1 & (uVar15 >> 0x10 ^ uVar15)) * 4);
                iVar11 != -1; iVar11 = *(int *)(local_98._0_8_ + (longlong)iVar11 * 0x10 + 8)) {
              if (*(FName *)(local_98._0_8_ + (longlong)iVar11 * 0x10) == FVar7) goto LAB_145a0e56b;
            }
          }
          local_1e0 = FVar7;
          if (((local_228.AllocatorInstance.Data <= &local_1e0) &&
              (&local_1e0 <
               (FName *)(local_228.AllocatorInstance.Data + (longlong)local_228.ArrayMax * 8))) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar11 = local_228.ArrayNum;
          if (local_228.ArrayNum == local_228.ArrayMax) {
            iVar11 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_228.AllocatorInstance,&local_228.ArrayMax);
          }
          local_228.ArrayNum = iVar11 + 1;
          *(FName *)(local_228.AllocatorInstance.Data + (longlong)iVar11 * 8) = local_1e0;
          local_160 = FVar7;
          TSet<FRHIShader_*,DefaultKeyFuncs<FRHIShader_*,0>,FDefaultSetAllocator>::
          Emplace<FRHIShader_*>
                    ((TSet<FRHIShader_*,DefaultKeyFuncs<FRHIShader_*,0>,FDefaultSetAllocator> *)
                     local_98,&local_190,(bool *)&local_160);
        }
LAB_145a0e56b:
        FVar7 = *(FName *)&TVar5.Reference[4].AtomicFlags;
        if (FVar7 != (FName)0x0) {
          uVar15 = ((uint)((ulonglong)FVar7 >> 0x14) & 0xffff ^ (uint)((ulonglong)FVar7 >> 4)) *
                   -0x7a143595;
          uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
          if (local_98._8_4_ != local_64) {
            FVar17.Data = (FScriptContainerElement *)local_60;
            if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar17.Data = local_58.Data;
            }
            for (iVar11 = *(int *)((longlong)FVar17.Data +
                                  (ulonglong)(local_50 - 1 & (uVar15 >> 0x10 ^ uVar15)) * 4);
                iVar11 != -1; iVar11 = *(int *)(local_98._0_8_ + (longlong)iVar11 * 0x10 + 8)) {
              if (*(FName *)(local_98._0_8_ + (longlong)iVar11 * 0x10) == FVar7) goto LAB_145a0eb33;
            }
          }
          local_1d8 = FVar7;
          if (((local_228.AllocatorInstance.Data <= &local_1d8) &&
              (&local_1d8 <
               (FName *)(local_228.AllocatorInstance.Data + (longlong)local_228.ArrayMax * 8))) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar11 = local_228.ArrayNum;
          if (local_228.ArrayNum == local_228.ArrayMax) {
            iVar11 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_228.AllocatorInstance,&local_228.ArrayMax);
          }
          local_228.ArrayNum = iVar11 + 1;
          *(FName *)(local_228.AllocatorInstance.Data + (longlong)iVar11 * 8) = local_1d8;
          if (local_64 == 0) {
            iVar11 = Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x10,8,1,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                                (int *)(local_98 + 0xc));
            iVar12 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                               ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),1);
            FVar25 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
            if (local_78 != (ForElementType<unsigned_int>)0x0) {
              FVar25 = local_78;
            }
            bVar14 = (byte)iVar12 & 0x1f;
            if (iVar12 < 0) {
              iVar12 = iVar12 + 0x1f;
              bVar14 = bVar14 - 0x20;
            }
            puVar2 = (uint *)((longlong)FVar25 + (longlong)(iVar12 >> 5) * 4);
            *puVar2 = *puVar2 & ~(1 << (bVar14 & 0x1f));
            iVar12 = local_68;
          }
          else {
            local_64 = local_64 + -1;
            iVar12 = *(int *)(local_98._0_8_ + (longlong)local_68 * 0x10 + 4);
            iVar11 = local_68;
            if (local_64 != 0) {
              *(undefined4 *)(local_98._0_8_ + (longlong)iVar12 * 0x10) = 0xffffffff;
            }
          }
          local_68 = iVar12;
          TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_98,&local_e8,iVar11);
          if (local_e8.Pointer != (FName *)0x0) {
            *(FName *)local_e8.Pointer = FVar7;
            (((FName *)((longlong)local_e8.Pointer + 8))->ComparisonIndex).Value = 0xffffffff;
          }
          FVar7 = *(FName *)local_e8.Pointer;
          uVar15 = ((uint)((ulonglong)FVar7 >> 0x14) & 0xffff ^ (uint)((ulonglong)FVar7 >> 4)) *
                   -0x7a143595;
          uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
          uVar15 = uVar15 >> 0x10 ^ uVar15;
          if ((local_98._8_4_ - local_64 != 1) && (local_98._8_4_ != local_64)) {
            FVar17.Data = (FScriptContainerElement *)local_60;
            if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar17.Data = local_58.Data;
            }
            for (iVar11 = *(int *)((longlong)FVar17.Data + (ulonglong)(local_50 - 1 & uVar15) * 4);
                iVar11 != -1; iVar11 = *(int *)(local_98._0_8_ + (longlong)iVar11 * 0x10 + 8)) {
              if (*(FName *)(local_98._0_8_ + (longlong)iVar11 * 0x10) == FVar7) {
                if (iVar11 != -1) {
                  *(FName *)(local_98._0_8_ + (longlong)iVar11 * 0x10) = FVar7;
                  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::RemoveAtUninitialized
                            ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              *)local_98,local_e8.Index,1);
                  goto LAB_145a0eb33;
                }
                break;
              }
            }
          }
          uVar21 = 1;
          uVar18 = local_98._8_4_ - local_64;
          if (3 < uVar18) {
            uVar16 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
            lVar19 = 0x3f;
            if (uVar16 != 0) {
              for (; uVar16 >> lVar19 == 0; lVar19 = lVar19 + -1) {
              }
            }
            local_188 = (undefined4)lVar19;
            uVar21 = 1 << ((byte)lVar19 & 0x1f);
          }
          if (((int)uVar18 < 1) || ((int)uVar21 <= (int)local_50)) {
            uVar15 = local_50 - 1 & uVar15;
            ((FName *)((longlong)local_e8.Pointer + 8))->Number = uVar15;
            FVar17.Data = (FScriptContainerElement *)local_60;
            if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar17.Data = local_58.Data;
            }
            uVar16 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar15;
            (((FName *)((longlong)local_e8.Pointer + 8))->ComparisonIndex).Value =
                 *(uint *)((longlong)FVar17.Data + uVar16 * 4);
            *(int *)((longlong)FVar17.Data + uVar16 * 4) = local_e8.Index;
          }
          else {
            local_50 = uVar21;
            if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0)
            {
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
            }
            if (uVar21 != 0) {
              uVar15 = uVar21;
              if (uVar21 < 2) {
                if ((ForElementType<FSetElementId>)local_58.Data !=
                    (ForElementType<FSetElementId>)0x0) {
                  uVar15 = 0;
                  goto LAB_145a0e901;
                }
              }
              else {
LAB_145a0e901:
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_58,0,uVar15,4);
              }
              if (0 < (int)uVar21) {
                uVar27 = (ulonglong)uVar21;
                uVar16 = 0;
                do {
                  FVar17.Data = (FScriptContainerElement *)local_60;
                  if ((ForElementType<FSetElementId>)local_58.Data !=
                      (ForElementType<FSetElementId>)0x0) {
                    FVar17.Data = local_58.Data;
                  }
                  uVar13 = uVar16 & (longlong)(int)uVar21 - 1U;
                  uVar16 = uVar16 + 1;
                  *(undefined4 *)((longlong)FVar17.Data + uVar13 * 4) = 0xffffffff;
                  uVar27 = uVar27 - 1;
                } while (uVar27 != 0);
              }
            }
            if (local_50 != 0) {
              pTStack_1b0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
              uStack_1b4 = 1;
              local_1b8 = 0;
              iStack_1a4 = 0;
              iStack_1a0 = 0;
              if (local_70 != 0) {
                FVar25 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
                if (local_78 != (ForElementType<unsigned_int>)0x0) {
                  FVar25 = local_78;
                }
                uVar15 = *(uint *)FVar25;
                iStack_1a0 = 0;
                local_1b8 = 0;
                while (uVar15 == 0) {
                  iStack_1a0 = iStack_1a0 + 0x20;
                  lVar19 = (longlong)local_1b8;
                  local_1b8 = local_1b8 + 1;
                  if ((int)(local_70 + -1 + (local_70 + -1 >> 0x1f & 0x1fU)) >> 5 < local_1b8)
                  goto LAB_145a0ea1d;
                  uVar15 = ((uint *)((longlong)FVar25 + 4))[lVar19];
                }
                uStack_1b4 = -uVar15 & uVar15;
                uVar16 = (ulonglong)uStack_1b4 * 2 + 1;
                lVar19 = 0x3f;
                if (uVar16 != 0) {
                  for (; uVar16 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                  }
                }
                local_184 = (int)lVar19;
                iStack_1a4 = local_184 + -1 + iStack_1a0;
                if (local_70 < iStack_1a4) {
LAB_145a0ea1d:
                  iStack_1a4 = local_70;
                }
              }
              local_1a8 = 0xffffffff;
              local_120 = (longlong *)local_98;
              local_118._padding_ = CONCAT44(uStack_1b4,local_1b8);
              local_118.CurrentBitIndex = iStack_1a4;
              local_118.UnvisitedBitMask = 0xffffffff;
              local_118._28_4_ = uStack_19c;
              local_118.BaseBitIndex = iStack_1a0;
              local_118.Array = pTStack_1b0;
              iVar11 = iStack_1a4;
              if (iStack_1a4 < local_70) {
                do {
                  lVar19 = *local_120;
                  lVar28 = (longlong)iVar11;
                  uVar16 = *(ulonglong *)(lVar19 + lVar28 * 0x10);
                  uVar15 = ((uint)(uVar16 >> 0x14) & 0xffff ^ (uint)(uVar16 >> 4)) * -0x7a143595;
                  uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
                  uVar15 = (uVar15 >> 0x10 ^ uVar15) & local_50 - 1;
                  *(uint *)(lVar19 + 0xc + lVar28 * 0x10) = uVar15;
                  FVar17.Data = (FScriptContainerElement *)local_60;
                  if ((ForElementType<FSetElementId>)local_58.Data !=
                      (ForElementType<FSetElementId>)0x0) {
                    FVar17.Data = local_58.Data;
                  }
                  uVar16 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar15;
                  *(undefined4 *)(lVar19 + 8 + lVar28 * 0x10) =
                       *(undefined4 *)((longlong)FVar17.Data + uVar16 * 4);
                  *(int *)((longlong)FVar17.Data + uVar16 * 4) = iVar11;
                  local_118.UnvisitedBitMask =
                       local_118.UnvisitedBitMask & ~local_118._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_118);
                  iVar11 = local_118.CurrentBitIndex;
                } while (local_118.CurrentBitIndex < (local_118.Array)->NumBits);
              }
            }
          }
        }
LAB_145a0eb33:
        FVar7 = (FName)TVar5.Reference[4]._padding_;
        if (FVar7 != (FName)0x0) {
          uVar15 = ((uint)((ulonglong)FVar7 >> 0x14) & 0xffff ^ (uint)((ulonglong)FVar7 >> 4)) *
                   -0x7a143595;
          uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
          if (local_98._8_4_ != local_64) {
            FVar17.Data = (FScriptContainerElement *)local_60;
            if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar17.Data = local_58.Data;
            }
            for (iVar11 = *(int *)((longlong)FVar17.Data +
                                  (ulonglong)(local_50 - 1 & (uVar15 >> 0x10 ^ uVar15)) * 4);
                iVar11 != -1; iVar11 = *(int *)(local_98._0_8_ + (longlong)iVar11 * 0x10 + 8)) {
              if (*(FName *)(local_98._0_8_ + (longlong)iVar11 * 0x10) == FVar7) goto LAB_145a0ec8b;
            }
          }
          local_1d0 = FVar7;
          if (((local_228.AllocatorInstance.Data <= &local_1d0) &&
              (&local_1d0 <
               (FName *)(local_228.AllocatorInstance.Data + (longlong)local_228.ArrayMax * 8))) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar11 = local_228.ArrayNum;
          if (local_228.ArrayNum == local_228.ArrayMax) {
            iVar11 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_228.AllocatorInstance,&local_228.ArrayMax);
          }
          local_228.ArrayNum = iVar11 + 1;
          *(FName *)(local_228.AllocatorInstance.Data + (longlong)iVar11 * 8) = local_1d0;
          local_158 = FVar7;
          TSet<FRHIShader_*,DefaultKeyFuncs<FRHIShader_*,0>,FDefaultSetAllocator>::
          Emplace<FRHIShader_*>
                    ((TSet<FRHIShader_*,DefaultKeyFuncs<FRHIShader_*,0>,FDefaultSetAllocator> *)
                     local_98,(FRHIShader **)local_180,(bool *)&local_158);
        }
LAB_145a0ec8b:
        FVar7 = TVar5.Reference[3].OwnerName;
        if (FVar7 != (FName)0x0) {
          uVar15 = ((uint)((ulonglong)FVar7 >> 0x14) & 0xffff ^ (uint)((ulonglong)FVar7 >> 4)) *
                   -0x7a143595;
          uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
          if (local_98._8_4_ != local_64) {
            FVar17.Data = (FScriptContainerElement *)local_60;
            if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar17.Data = local_58.Data;
            }
            for (iVar11 = *(int *)((longlong)FVar17.Data +
                                  (ulonglong)(local_50 - 1 & (uVar15 >> 0x10 ^ uVar15)) * 4);
                iVar11 != -1; iVar11 = *(int *)(local_98._0_8_ + (longlong)iVar11 * 0x10 + 8)) {
              if (*(FName *)(local_98._0_8_ + (longlong)iVar11 * 0x10) == FVar7) goto LAB_145a0edeb;
            }
          }
          local_1c8 = FVar7;
          if (((local_228.AllocatorInstance.Data <= &local_1c8) &&
              (&local_1c8 <
               (FName *)(local_228.AllocatorInstance.Data + (longlong)local_228.ArrayMax * 8))) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar11 = local_228.ArrayNum;
          if (local_228.ArrayNum == local_228.ArrayMax) {
            iVar11 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_228.AllocatorInstance,&local_228.ArrayMax);
          }
          local_228.ArrayNum = iVar11 + 1;
          *(FName *)(local_228.AllocatorInstance.Data + (longlong)iVar11 * 8) = local_1c8;
          local_150 = FVar7;
          TSet<FRHIShader_*,DefaultKeyFuncs<FRHIShader_*,0>,FDefaultSetAllocator>::
          Emplace<FRHIShader_*>
                    ((TSet<FRHIShader_*,DefaultKeyFuncs<FRHIShader_*,0>,FDefaultSetAllocator> *)
                     local_98,(FRHIShader **)(local_180 + 4),(bool *)&local_150);
        }
LAB_145a0edeb:
        FVar7 = *(FName *)&TVar5.Reference[3].AtomicFlags;
        pFVar22 = local_210;
        if (FVar7 != (FName)0x0) {
          uVar15 = ((uint)((ulonglong)FVar7 >> 0x14) & 0xffff ^ (uint)((ulonglong)FVar7 >> 4)) *
                   -0x7a143595;
          uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
          if (local_98._8_4_ != local_64) {
            FVar17.Data = (FScriptContainerElement *)local_60;
            if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar17.Data = local_58.Data;
            }
            for (iVar11 = *(int *)((longlong)FVar17.Data +
                                  (ulonglong)(local_50 - 1 & (uVar15 >> 0x10 ^ uVar15)) * 4);
                iVar11 != -1; iVar11 = *(int *)(local_98._0_8_ + (longlong)iVar11 * 0x10 + 8)) {
              if (*(FName *)(local_98._0_8_ + (longlong)iVar11 * 0x10) == FVar7) goto LAB_145a0ef4e;
            }
          }
          local_208 = FVar7;
          if (((local_228.AllocatorInstance.Data <= &local_208) &&
              (&local_208 <
               (FName *)(local_228.AllocatorInstance.Data + (longlong)local_228.ArrayMax * 8))) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar11 = local_228.ArrayNum;
          if (local_228.ArrayNum == local_228.ArrayMax) {
            iVar11 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_228.AllocatorInstance,&local_228.ArrayMax);
          }
          local_228.ArrayNum = iVar11 + 1;
          pFVar26 = &local_148;
          *(FName *)(local_228.AllocatorInstance.Data + (longlong)iVar11 * 8) = local_208;
          ppFVar20 = &local_130;
          local_148 = FVar7;
LAB_145a0ef3a:
          TSet<FRHIShader_*,DefaultKeyFuncs<FRHIShader_*,0>,FDefaultSetAllocator>::
          Emplace<FRHIShader_*>
                    ((TSet<FRHIShader_*,DefaultKeyFuncs<FRHIShader_*,0>,FDefaultSetAllocator> *)
                     local_98,ppFVar20,(bool *)pFVar26);
          pFVar22 = local_210;
        }
        goto LAB_145a0ef4e;
      }
      FVar29.Data = FVar29.Data + 8;
      uVar16 = (ulonglong)local_1bc;
      pFVar22 = local_210;
      param_2 = local_1c0;
      goto LAB_145a0de07;
    }
    if (EVar3 == RRT_ComputePipelineState) {
      lVar19 = TVar5.Reference[2]._padding_;
      if ((*(longlong *)(lVar19 + 0x10) == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("ParentAdapter != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                              ,0x41,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      bVar10 = IsPipelineUnused(*(FD3D12Adapter **)(lVar19 + 0x10),
                                (D3D12ResourceFrameCounter *)&TVar5.Reference[2].AtomicFlags,param_2
                               );
      pFVar22 = local_210;
      if (!bVar10) {
        FVar7 = (FName)TVar5.Reference[1]._padding_;
        if (FVar7 == (FName)0x0) goto LAB_145a0ef4e;
        uVar15 = ((uint)((ulonglong)FVar7 >> 0x14) & 0xffff ^ (uint)((ulonglong)FVar7 >> 4)) *
                 -0x7a143595;
        uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
        if (local_98._8_4_ != local_64) {
          FVar17.Data = (FScriptContainerElement *)local_60;
          if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
            FVar17.Data = local_58.Data;
          }
          for (iVar11 = *(int *)((longlong)FVar17.Data +
                                (ulonglong)(local_50 - 1 & (uVar15 >> 0x10 ^ uVar15)) * 4);
              iVar11 != -1; iVar11 = *(int *)(local_98._0_8_ + (longlong)iVar11 * 0x10 + 8)) {
            if (*(FName *)(local_98._0_8_ + (longlong)iVar11 * 0x10) == FVar7) goto LAB_145a0ef4e;
          }
        }
        local_1e8 = FVar7;
        if (((local_228.AllocatorInstance.Data <= &local_1e8) &&
            (&local_1e8 <
             (FName *)(local_228.AllocatorInstance.Data + (longlong)local_228.ArrayMax * 8))) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar11 = local_228.ArrayNum;
        if (local_228.ArrayNum == local_228.ArrayMax) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_228.AllocatorInstance,&local_228.ArrayMax);
        }
        local_228.ArrayNum = iVar11 + 1;
        pFVar26 = &local_168;
        *(FName *)(local_228.AllocatorInstance.Data + (longlong)iVar11 * 8) = local_1e8;
        ppFVar20 = (FRHIShader **)(local_198 + 4);
        local_168 = FVar7;
        goto LAB_145a0ef3a;
      }
      FVar29.Data = FVar29.Data + 8;
      uVar16 = (ulonglong)local_1bc;
      param_2 = local_1c0;
      goto LAB_145a0de07;
    }
    if (EVar3 != RRT_RayTracingPipelineState) {
      if (EVar3 != RRT_WorkGraphPipelineState) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("!\"Enclosing block should never be called\"",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12NvidiaExtensions.cpp"
                            ,0x58,L"");
        if (bVar10) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        goto LAB_145a0de7b;
      }
      lVar19 = TVar5.Reference[1]._padding_;
      if ((*(longlong *)(lVar19 + 0x10) == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("ParentAdapter != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                              ,0x41,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      bVar10 = IsPipelineUnused(*(FD3D12Adapter **)(lVar19 + 0x10),
                                (D3D12ResourceFrameCounter *)&TVar5.Reference[8].ResourceType,
                                param_2);
      if (!bVar10) {
        FVar24 = TVar5.Reference[8].OwnerName;
        iVar11 = (int)TVar5.Reference[9]._padding_;
        FVar7 = (FName)((longlong)FVar24 + (longlong)iVar11 * 8);
        while( true ) {
          if ((int)TVar5.Reference[9]._padding_ != iVar11) {
            local_217 = 0;
            `TCheckedPointerIterator<TRefCountPtr<FRHIShader>,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(&local_217);
          }
          pFVar22 = local_210;
          if (FVar24 == FVar7) break;
          FVar6 = *(FName *)FVar24;
          if (FVar6 != (FName)0x0) {
            uVar15 = ((uint)((ulonglong)FVar6 >> 0x14) & 0xffff ^ (uint)((ulonglong)FVar6 >> 4)) *
                     -0x7a143595;
            uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
            if (local_98._8_4_ != local_64) {
              FVar17.Data = (FScriptContainerElement *)local_60;
              if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0
                 ) {
                FVar17.Data = local_58.Data;
              }
              for (iVar12 = *(int *)((longlong)FVar17.Data +
                                    (ulonglong)(local_50 - 1 & (uVar15 >> 0x10 ^ uVar15)) * 4);
                  iVar12 != -1; iVar12 = *(int *)(local_98._0_8_ + (longlong)iVar12 * 0x10 + 8)) {
                if (*(FName *)(local_98._0_8_ + (longlong)iVar12 * 0x10) == FVar6)
                goto LAB_145a0e0d4;
              }
            }
            local_1f0 = FVar6;
            if (((local_228.AllocatorInstance.Data <= &local_1f0) &&
                (&local_1f0 <
                 (FName *)(local_228.AllocatorInstance.Data + (longlong)local_228.ArrayMax * 8))) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar12 = local_228.ArrayNum;
            if (local_228.ArrayNum == local_228.ArrayMax) {
              iVar12 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_228.AllocatorInstance,&local_228.ArrayMax);
            }
            local_228.ArrayNum = iVar12 + 1;
            *(FName *)(local_228.AllocatorInstance.Data + (longlong)iVar12 * 8) = local_1f0;
            local_170 = FVar6;
            TSet<FRHIShader_*,DefaultKeyFuncs<FRHIShader_*,0>,FDefaultSetAllocator>::
            Emplace<FRHIShader_*>
                      ((TSet<FRHIShader_*,DefaultKeyFuncs<FRHIShader_*,0>,FDefaultSetAllocator> *)
                       local_98,(FRHIShader **)local_198,(bool *)&local_170);
          }
LAB_145a0e0d4:
          FVar24 = (FName)((longlong)FVar24 + 8);
        }
        goto LAB_145a0ef4e;
      }
      FVar29.Data = FVar29.Data + 8;
      uVar16 = (ulonglong)local_1bc;
      pFVar22 = local_210;
      param_2 = local_1c0;
      goto LAB_145a0de07;
    }
    lVar19 = TVar5.Reference[3]._padding_;
    if ((*(longlong *)(lVar19 + 0x10) == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ParentAdapter != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                            ,0x41,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    bVar10 = IsPipelineUnused(*(FD3D12Adapter **)(lVar19 + 0x10),
                              (D3D12ResourceFrameCounter *)&TVar5.Reference[0xf].OwnerName,param_2);
    if (bVar10) {
      FVar29.Data = FVar29.Data + 8;
      uVar16 = (ulonglong)local_1bc;
      pFVar22 = local_210;
      param_2 = local_1c0;
      goto LAB_145a0de07;
    }
    puVar23 = *(undefined8 **)&TVar5.Reference[3].AtomicFlags;
    uVar15 = TVar5.Reference[3].OwnerName.ComparisonIndex.Value;
    puVar1 = puVar23 + (int)uVar15;
    while( true ) {
      if (TVar5.Reference[3].OwnerName.ComparisonIndex.Value != uVar15) {
        local_216 = 0;
        `TCheckedPointerIterator<TRefCountPtr<FD3D12RayTracingShader>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_216);
      }
      if (puVar23 == puVar1) break;
      ConditionallyAddShader<FD3D12RayTracingShader>
                ((FD3D12RayTracingShader *)*puVar23,&local_228,
                 (TSet<FRHIShader_*,DefaultKeyFuncs<FRHIShader_*,0>,FDefaultSetAllocator> *)local_98
                );
      puVar23 = puVar23 + 1;
    }
    puVar23 = *(undefined8 **)&TVar5.Reference[7].AtomicFlags;
    uVar15 = TVar5.Reference[7].OwnerName.ComparisonIndex.Value;
    puVar1 = puVar23 + (int)uVar15;
    while( true ) {
      if (TVar5.Reference[7].OwnerName.ComparisonIndex.Value != uVar15) {
        local_215 = 0;
        `TCheckedPointerIterator<TRefCountPtr<FD3D12RayTracingShader>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_215);
      }
      if (puVar23 == puVar1) break;
      ConditionallyAddShader<FD3D12RayTracingShader>
                ((FD3D12RayTracingShader *)*puVar23,&local_228,
                 (TSet<FRHIShader_*,DefaultKeyFuncs<FRHIShader_*,0>,FDefaultSetAllocator> *)local_98
                );
      puVar23 = puVar23 + 1;
    }
    puVar23 = (undefined8 *)TVar5.Reference[6]._padding_;
    aVar4 = TVar5.Reference[6].AtomicFlags.Packed;
    puVar1 = puVar23 + (int)aVar4;
    while( true ) {
      if (TVar5.Reference[6].AtomicFlags.Packed != aVar4) {
        local_214 = 0;
        `TCheckedPointerIterator<TRefCountPtr<FD3D12RayTracingShader>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_214);
      }
      if (puVar23 == puVar1) break;
      ConditionallyAddShader<FD3D12RayTracingShader>
                ((FD3D12RayTracingShader *)*puVar23,&local_228,
                 (TSet<FRHIShader_*,DefaultKeyFuncs<FRHIShader_*,0>,FDefaultSetAllocator> *)local_98
                );
      puVar23 = puVar23 + 1;
    }
    FVar24 = TVar5.Reference[4].OwnerName;
    iVar11 = (int)TVar5.Reference[5]._padding_;
    FVar7 = (FName)((longlong)FVar24 + (longlong)iVar11 * 8);
    while( true ) {
      if ((int)TVar5.Reference[5]._padding_ != iVar11) {
        local_218 = (<lambda_1>)0x0;
        `TCheckedPointerIterator<TRefCountPtr<FD3D12RayTracingShader>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_218);
      }
      pFVar22 = local_210;
      if (FVar24 == FVar7) break;
      ConditionallyAddShader<FD3D12RayTracingShader>
                (*(FD3D12RayTracingShader **)FVar24,&local_228,
                 (TSet<FRHIShader_*,DefaultKeyFuncs<FRHIShader_*,0>,FDefaultSetAllocator> *)local_98
                );
      FVar24 = (FName)((longlong)FVar24 + 8);
    }
  }
LAB_145a0ef4e:
  FVar29.Data = FVar29.Data + 8;
  uVar16 = (ulonglong)local_1bc;
  param_2 = local_1c0;
  goto LAB_145a0de07;
}

// EndBreadcrumb @ 145a145b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::RHICore::Nvidia::Aftermath::D3D12::EndBreadcrumb
          (GFSDK_Aftermath_ContextHandle__ *param_1,FRHIBreadcrumbNode *param_2)

{
  FRHIBreadcrumbNode *pFVar1;
  bool bVar2;
  int iVar3;
  wchar_t *_Str;
  size_t sVar4;
  undefined1 auStack_148 [32];
  undefined1 local_128 [256];
  wchar_t *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_148;
  pFVar1 = param_2->Parent;
  local_28 = (wchar_t *)0x0;
  local_20 = 0;
  bVar2 = AreMarkersEnabled();
  _Str = local_28;
  if (bVar2) {
    if (pFVar1 == (FRHIBreadcrumbNode *)0x0) {
      _Str = L"<root>";
    }
    else {
      _Str = (wchar_t *)(**(code **)(pFVar1->_padding_ + 0x10))(pFVar1,local_128);
    }
    local_28 = _Str;
    sVar4 = wcslen(_Str);
    local_20 = (int)sVar4 * 2 + 2;
  }
  if (((_Str != (wchar_t *)0x0) &&
      (iVar3 = GFSDK_Aftermath_SetEventMarker(param_1,_Str,local_20), 6 < (byte)LogD3D12RHI._0_1_))
     && (iVar3 != 1)) {
    Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
  }
  return;
}

// EndBreadcrumb @ 145a146a0

void __cdecl
UE::RHICore::Intel::GPUCrashDumps::D3D12::EndBreadcrumb
          (ID3D12GraphicsCommandList *param_1,FRHIBreadcrumbNode *param_2)

{
  bool bVar1;
  FRHIBreadcrumbNode *pFVar2;
  
  bVar1 = GPUCrashDumps::IsEnabled();
  if (bVar1) {
    pFVar2 = FRHIBreadcrumbNode::Sentinel;
    if (param_2 != (FRHIBreadcrumbNode *)0x0) {
      pFVar2 = param_2;
    }
    if (pFVar2 != (FRHIBreadcrumbNode *)0x0) {
      INTC_D3D12_SetEventMarker
                (FD3D12DynamicRHI::SingleD3DRHI->IntelExtensionContext,param_1,0x44,pFVar2,8);
    }
  }
  return;
}

// FreeOfflineCopy @ 145a17b50

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __cdecl
UE::D3D12Descriptors::FreeOfflineCopy
          (FD3D12Device *param_1,FD3D12OfflineDescriptor *param_2,ERHIDescriptorHeapType param_3)

{
  FD3D12OfflineDescriptorManager *this;
  
  this = FD3D12Device::GetOfflineDescriptorManager(param_1,param_3);
  FD3D12OfflineDescriptorManager::FreeHeapSlot(this,param_2);
  return;
}

// GetPlatformTextureResourceFormat @ 145a1a500

DXGI_FORMAT __cdecl
UE::DXGIUtilities::GetPlatformTextureResourceFormat(DXGI_FORMAT param_1,ETextureCreateFlags param_2)

{
  DXGI_FORMAT DVar1;
  
  if ((param_2 >> 0x19 & 1) == 0) {
    if ((param_2 & DepthStencilTargetable) != None) {
      if (param_1 == DXGI_FORMAT_R32_FLOAT) {
        return DXGI_FORMAT_R32_TYPELESS;
      }
      DVar1 = DXGI_FORMAT_R16_TYPELESS;
      if (param_1 != DXGI_FORMAT_R16_FLOAT) {
        DVar1 = param_1;
      }
      return DVar1;
    }
  }
  else {
    if (param_1 - DXGI_FORMAT_R8G8B8A8_TYPELESS < 0x47) {
      if ((param_2 & SRGB) == None) {
        switch(param_1) {
        case DXGI_FORMAT_R8G8B8A8_TYPELESS:
          return DXGI_FORMAT_R8G8B8A8_UNORM;
        case DXGI_FORMAT_BC1_TYPELESS:
          return DXGI_FORMAT_BC1_UNORM;
        case DXGI_FORMAT_BC2_TYPELESS:
          return DXGI_FORMAT_BC2_UNORM;
        case DXGI_FORMAT_BC3_TYPELESS:
          return DXGI_FORMAT_BC3_UNORM;
        case DXGI_FORMAT_B8G8R8A8_TYPELESS:
          return DXGI_FORMAT_B8G8R8A8_UNORM;
        case DXGI_FORMAT_B8G8R8X8_TYPELESS:
          return DXGI_FORMAT_B8G8R8X8_UNORM;
        case DXGI_FORMAT_BC7_TYPELESS:
          return DXGI_FORMAT_BC7_UNORM;
        }
      }
      else {
        switch(param_1) {
        case DXGI_FORMAT_R8G8B8A8_TYPELESS:
          return DXGI_FORMAT_R8G8B8A8_UNORM_SRGB;
        case DXGI_FORMAT_BC1_TYPELESS:
          return DXGI_FORMAT_BC1_UNORM_SRGB;
        case DXGI_FORMAT_BC2_TYPELESS:
          return DXGI_FORMAT_BC2_UNORM_SRGB;
        case DXGI_FORMAT_BC3_TYPELESS:
          return DXGI_FORMAT_BC3_UNORM_SRGB;
        case DXGI_FORMAT_B8G8R8A8_TYPELESS:
          return DXGI_FORMAT_B8G8R8A8_UNORM_SRGB;
        case DXGI_FORMAT_B8G8R8X8_TYPELESS:
          return DXGI_FORMAT_B8G8R8X8_UNORM_SRGB;
        case DXGI_FORMAT_BC7_TYPELESS:
          return DXGI_FORMAT_BC7_UNORM_SRGB;
        }
      }
    }
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(param_1) {
    case DXGI_FORMAT_R32G32B32A32_FLOAT:
      return DXGI_FORMAT_R32G32B32A32_UINT;
    case DXGI_FORMAT_R32G32B32_FLOAT:
      return DXGI_FORMAT_R32G32B32_UINT;
    case DXGI_FORMAT_R16G16B16A16_FLOAT:
      return DXGI_FORMAT_R16G16B16A16_UNORM;
    case DXGI_FORMAT_R32G32_FLOAT:
      return DXGI_FORMAT_R32G32_UINT;
    case DXGI_FORMAT_D32_FLOAT_S8X24_UINT:
      return DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS;
    case DXGI_FORMAT_R10G10B10A2_UNORM:
      return DXGI_FORMAT_R10G10B10A2_UNORM;
    }
  }
  return param_1;
}

// InitializeDevice @ 145a1f340

void __cdecl UE::RHICore::Nvidia::Aftermath::D3D12::InitializeDevice(ID3D12Device *param_1)

{
  ID3D12Device *local_res8;
  ID3D12Device **local_res10 [3];
  code *local_18;
  undefined8 **local_10;
  
  local_res10[0] = &local_res8;
  local_10 = local_res10;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::RHICore::Nvidia::Aftermath::D3D12::InitializeDevice'::__l2::<lambda_1>,unsigned_int,unsigned_int>
             ::Call;
  local_res8 = param_1;
  Aftermath::InitializeDevice((TFunctionRef<unsigned_int___cdecl(unsigned_int)> *)&local_18);
  return;
}

// IsPipelineUnused @ 145a1f9b0

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

bool __cdecl
UE::RHICore::Nvidia::Aftermath::D3D12::IsPipelineUnused
          (FD3D12Adapter *param_1,D3D12ResourceFrameCounter *param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  atomic<unsigned_int> aVar4;
  
  if ((param_1->FrameFence).Ptr == (FD3D12ManualFence *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FrameFence",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                       ,0xff,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  aVar4 = (atomic<unsigned_int>)((((param_1->FrameFence).Ptr)->NextFenceValueTOP).Counter + 1);
  if (((uint)param_2->LastUsedFrame <= (uint)aVar4) &&
     (param_3 < (uint)((int)aVar4 - (int)param_2->LastUsedFrame))) {
    return true;
  }
  return false;
}

// RegisterCommandList @ 145a28920

/* WARNING: Enum "Type": Some values do not have unique names */

GFSDK_Aftermath_ContextHandle__ * __cdecl
UE::RHICore::Nvidia::Aftermath::D3D12::RegisterCommandList(ID3D12CommandList *param_1)

{
  bool bVar1;
  int iVar2;
  GFSDK_Aftermath_ContextHandle__ *local_res10 [3];
  
  local_res10[0] = (GFSDK_Aftermath_ContextHandle__ *)0x0;
  bVar1 = Aftermath::IsEnabled();
  if (bVar1) {
    iVar2 = GFSDK_Aftermath_DX12_CreateContextHandle(param_1,local_res10);
    if (iVar2 != 1) {
      if (6 < (byte)LogD3D12RHI._0_1_) {
        Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
      }
      return (GFSDK_Aftermath_ContextHandle__ *)0x0;
    }
  }
  return local_res10[0];
}

// RegisterCommandList @ 145a28990

ulong64 __cdecl
UE::RHICore::Intel::GPUCrashDumps::D3D12::RegisterCommandList(ID3D12CommandList *param_1)

{
  bool bVar1;
  ulong64 uVar2;
  
  bVar1 = GPUCrashDumps::IsEnabled();
  if (!bVar1) {
    return 0;
  }
  uVar2 = INTC_D3D12_GetCommandListHandle
                    (FD3D12DynamicRHI::SingleD3DRHI->IntelExtensionContext,param_1);
  return uVar2;
}

// RegisterResource @ 145a28a70

/* WARNING: Enum "Type": Some values do not have unique names */

GFSDK_Aftermath_ResourceHandle__ * __cdecl
UE::RHICore::Nvidia::Aftermath::D3D12::RegisterResource(ID3D12Resource *param_1)

{
  bool bVar1;
  int iVar2;
  GFSDK_Aftermath_ResourceHandle__ *local_res10 [3];
  
  local_res10[0] = (GFSDK_Aftermath_ResourceHandle__ *)0x0;
  bVar1 = Aftermath::IsEnabled();
  if (bVar1) {
    iVar2 = GFSDK_Aftermath_DX12_RegisterResource(param_1,local_res10);
    if (iVar2 != 1) {
      if (6 < (byte)LogD3D12RHI._0_1_) {
        Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
      }
      return (GFSDK_Aftermath_ResourceHandle__ *)0x0;
    }
  }
  return local_res10[0];
}

// UnregisterCommandList @ 145a364c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::RHICore::Nvidia::Aftermath::D3D12::UnregisterCommandList
          (GFSDK_Aftermath_ContextHandle__ *param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = Aftermath::IsEnabled();
  if ((bVar1) && (param_1 != (GFSDK_Aftermath_ContextHandle__ *)0x0)) {
    iVar2 = GFSDK_Aftermath_ReleaseContextHandle(param_1);
    if ((6 < (byte)LogD3D12RHI._0_1_) && (iVar2 != 1)) {
      Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
      return;
    }
  }
  return;
}

// UnregisterResource @ 145a365a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::RHICore::Nvidia::Aftermath::D3D12::UnregisterResource(GFSDK_Aftermath_ResourceHandle__ *param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = Aftermath::IsEnabled();
  if ((bVar1) && (param_1 != (GFSDK_Aftermath_ResourceHandle__ *)0x0)) {
    iVar2 = GFSDK_Aftermath_DX12_UnregisterResource(param_1);
    if ((6 < (byte)LogD3D12RHI._0_1_) && (iVar2 != 1)) {
      Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
      return;
    }
  }
  return;
}

// ReallocForCopy<0,TFixedAllocator<17>::ForElementType<D3D12_INPUT_ELEMENT_DESC>_> @ 145a412a0

void __cdecl
UE::Core::Private::ReallocForCopy<0,TFixedAllocator<17>::ForElementType<D3D12_INPUT_ELEMENT_DESC>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<D3D12_INPUT_ELEMENT_DESC> *param_5,int param_6,int *param_7)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_3 != 0) {
    if ((0x11 < (uint)param_3) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewMax <= NumInlineElements",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                           ,0x52a,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar3 = 0x11;
  }
  if ((int)uVar3 <= param_4) {
    *param_7 = param_4;
    return;
  }
  if ((0x11 < uVar3) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewMax >= 0 && NewMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x524,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *param_7 = uVar3;
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12Payload_*>_> @ 145a41350

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12Payload_*>_>
          (ushort param_1,ForElementType<FD3D12Payload_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    iVar8 = 0x80;
    uVar7 = (ulonglong)(byte)param_1;
    if (0x80 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x81) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12Payload_*>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12ResidencyHandle_*>_> @ 145a41420

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12ResidencyHandle_*>_>
          (ushort param_1,ForElementType<FD3D12ResidencyHandle_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12ResidencyHandle_*>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<ID3D12CommandList_*>_> @ 145a414f0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<ID3D12CommandList_*>_>
          (ushort param_1,ForElementType<ID3D12CommandList_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    iVar8 = 0x80;
    uVar7 = (ulonglong)(byte)param_1;
    if (0x80 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x81) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<ID3D12CommandList_*>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<D3DX12Residency::ResidencySet_*>_> @ 145a415c0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<D3DX12Residency::ResidencySet_*>_>
          (ushort param_1,ForElementType<D3DX12Residency::ResidencySet_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    iVar8 = 0x80;
    uVar7 = (ulonglong)(byte)param_1;
    if (0x80 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x81) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::
    ForElementType<D3DX12Residency::ResidencySet_*>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12PayloadBase::FQueueFence>_> @ 145a41690

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12PayloadBase::FQueueFence>_>
          (ushort param_1,ForElementType<FD3D12PayloadBase::FQueueFence> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x19) {
      iVar8 = 0x18;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x19) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FD3D12PayloadBase::FQueueFence>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniquePtr<FD3D12Timing,TDefaultDelete<FD3D12Timing>_>_>_> @ 145a41760

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniquePtr<FD3D12Timing,TDefaultDelete<FD3D12Timing>_>_>_>
          (ushort param_1,
          ForElementType<TUniquePtr<FD3D12Timing,TDefaultDelete<FD3D12Timing>_>_> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x19) {
      iVar8 = 0x18;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x19) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TUniquePtr<FD3D12Timing,TDefaultDelete<FD3D12Timing>_>_>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::RHI::GPUProfiler::FEventStream>_> @ 145a41830

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::RHI::GPUProfiler::FEventStream>_>
          (ushort param_1,ForElementType<UE::RHI::GPUProfiler::FEventStream> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x19) {
      iVar8 = 0x18;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x19) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::RHI::GPUProfiler::FEventStream>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12ResourceCollection>::FLinkedObjectIterator>_> @ 145a41900

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12ResourceCollection>::FLinkedObjectIterator>_>
          (ushort param_1,
          ForElementType<FD3D12LinkedAdapterObject<FD3D12ResourceCollection>::FLinkedObjectIterator>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FD3D12LinkedAdapterObject<FD3D12ResourceCollection>::FLinkedObjectIterator>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12SamplerState>::FLinkedObjectIterator>_> @ 145a419d0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12SamplerState>::FLinkedObjectIterator>_>
          (ushort param_1,
          ForElementType<FD3D12LinkedAdapterObject<FD3D12SamplerState>::FLinkedObjectIterator>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FD3D12LinkedAdapterObject<FD3D12SamplerState>::FLinkedObjectIterator>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12ShaderResourceView_RHI>::FLinkedObjectIterator>_> @ 145a41aa0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12ShaderResourceView_RHI>::FLinkedObjectIterator>_>
          (ushort param_1,
          ForElementType<FD3D12LinkedAdapterObject<FD3D12ShaderResourceView_RHI>::FLinkedObjectIterator>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FD3D12LinkedAdapterObject<FD3D12ShaderResourceView_RHI>::FLinkedObjectIterator>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12Texture>::FLinkedObjectIterator>_> @ 145a41b70

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12Texture>::FLinkedObjectIterator>_>
          (ushort param_1,
          ForElementType<FD3D12LinkedAdapterObject<FD3D12Texture>::FLinkedObjectIterator> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FD3D12LinkedAdapterObject<FD3D12Texture>::FLinkedObjectIterator>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_DXGI_FORMAT>_> @ 145a41c40

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_DXGI_FORMAT>_>
          (ushort param_1,ForElementType<DXGI_FORMAT> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar6 = 4;
    uVar7 = (ulonglong)(byte)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_DXGI_FORMAT>::
    ResizeAllocation(param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12ResidencyHandle_*>_> @ 145a41d00

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12ResidencyHandle_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FD3D12ResidencyHandle_*> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 3) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12ResidencyHandle_*>
    ::ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12CommandList_*>_> @ 145a41de0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12CommandList_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FD3D12CommandList_*> *param_4,
          int *param_5,int *param_6)

{
  ForElementType<FD3D12CommandList_*> *this;
  int iVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  ForElementType<FD3D12CommandList_*> _Src;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  iVar1 = *param_5;
  uVar6 = *param_6;
  uVar8 = iVar1 + param_3;
  *param_5 = uVar8;
  if ((uint)param_3 <= uVar6 - iVar1) {
    return iVar1;
  }
  if ((int)uVar8 < iVar1) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar8);
  }
  uVar7 = (ulonglong)param_1;
  if (uVar8 < 0x81) {
    _Src = param_4->SecondaryData;
    uVar8 = 0x80;
LAB_145a41ea4:
    uVar6 = uVar8;
    if (_Src == (ForElementType<FD3D12CommandList_*>)0x0) goto LAB_145a41ef8;
    memmove(param_4,(void *)_Src,(longlong)iVar1 << 3);
    uVar6 = 0;
    iVar5 = 0;
  }
  else {
    uVar4 = (ulonglong)(int)uVar8;
    if (uVar6 < 0x81) {
      uVar6 = 0;
    }
    if (uVar6 == 0) {
      uVar2 = 4;
      if (4 < uVar4) {
        uVar2 = uVar4;
      }
    }
    else {
      uVar2 = (uVar4 * 3 >> 3) + 0x10 + uVar4;
    }
    uVar3 = FMemory::QuantizeSize(uVar7 * uVar2,0);
    uVar6 = (uint)(uVar3 / uVar7);
    this = &param_4->SecondaryData;
    if ((int)uVar6 < (int)uVar8) {
      uVar6 = 0x7fffffff;
    }
    _Src = *this;
    uVar8 = uVar6;
    if (uVar6 < 0x81) goto LAB_145a41ea4;
    iVar5 = iVar1;
    if (_Src == (ForElementType<FD3D12CommandList_*>)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)this,0,uVar6,uVar7);
      memmove((void *)*this,param_4,(longlong)iVar1 << 3);
      goto LAB_145a41ef8;
    }
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&param_4->SecondaryData,iVar5,uVar6,uVar7);
  uVar6 = uVar8;
LAB_145a41ef8:
  *param_6 = uVar6;
  return iVar1;
}

// ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<D3D12_SUBRESOURCE_TILING>_> @ 145a41f30

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<D3D12_SUBRESOURCE_TILING>_>
          (uint param_1,uint param_2,int param_3,ForElementType<D3D12_SUBRESOURCE_TILING> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x11) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<D3D12_SUBRESOURCE_TILING>::ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_>_> @ 145a42010

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_> *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 2) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_>::ResizeAllocation
              (param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<D3D12_SUBRESOURCE_TILING>_> @ 145a420f0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<D3D12_SUBRESOURCE_TILING>_>
          (uint param_1,uint param_2,ForElementType<D3D12_SUBRESOURCE_TILING> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x11) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<D3D12_SUBRESOURCE_TILING>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_>_> @ 145a421b0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_>_>
          (uint param_1,uint param_2,ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 2) {
    iVar2 = 1;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12Payload_*>_> @ 145a42270

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12Payload_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FD3D12Payload_*> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x81) {
      iVar1 = 0x80;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12Payload_*>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12ResourceCollection>::FLinkedObjectIterator>_> @ 145a422f0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12ResourceCollection>::FLinkedObjectIterator>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FD3D12LinkedAdapterObject<FD3D12ResourceCollection>::FLinkedObjectIterator>
          *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FD3D12LinkedAdapterObject<FD3D12ResourceCollection>::FLinkedObjectIterator>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12SamplerState>::FLinkedObjectIterator>_> @ 145a42370

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12SamplerState>::FLinkedObjectIterator>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FD3D12LinkedAdapterObject<FD3D12SamplerState>::FLinkedObjectIterator>
          *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FD3D12LinkedAdapterObject<FD3D12SamplerState>::FLinkedObjectIterator>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12ShaderResourceView_RHI>::FLinkedObjectIterator>_> @ 145a423f0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12ShaderResourceView_RHI>::FLinkedObjectIterator>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FD3D12LinkedAdapterObject<FD3D12ShaderResourceView_RHI>::FLinkedObjectIterator>
          *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FD3D12LinkedAdapterObject<FD3D12ShaderResourceView_RHI>::FLinkedObjectIterator>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12Texture>::FLinkedObjectIterator>_> @ 145a42470

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12Texture>::FLinkedObjectIterator>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FD3D12LinkedAdapterObject<FD3D12Texture>::FLinkedObjectIterator> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FD3D12LinkedAdapterObject<FD3D12Texture>::FLinkedObjectIterator>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// operator() @ 145a4c3a0

/* WARNING: Removing unreachable block (ram,0x000145a4c3c4) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
`UE::D3D12RHI::TextureUtils::ReconcileInitialState'::__l5::<lambda_1>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  ERHIPipeline EVar1;
  undefined4 uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong *plVar7;
  FD3D12ContextCommon *this_00;
  uint *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  
  puVar8 = (uint *)(*(longlong *)this + 0x1f8);
  if (*(longlong *)this == 0) {
    puVar8 = (uint *)0x0;
  }
  if (puVar8 != (uint *)0x0) {
    uVar11 = *puVar8;
    uVar3 = 0;
    if (uVar11 != 0) {
      for (; (uVar11 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
      }
    }
    uVar6 = 0x20;
    if (uVar11 != 0) {
      uVar6 = uVar3;
    }
    lVar9 = *(longlong *)(puVar8 + (ulonglong)uVar6 * 2 + 2);
    if (lVar9 != 0) {
      uVar10 = (ulonglong)uVar6;
      do {
        if ((*(longlong *)(lVar9 + 0x140) == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Parent != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                               ,0x59,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        EVar1 = param_1->ActivePipelines;
        uVar2 = *(undefined4 *)(*(longlong *)(lVar9 + 0x140) + 8);
        if (((EVar1 == None) || ((EVar1 & EVar1 - Graphics) != None)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSingleRHIPipeline(ActivePipelines)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                               ,0x2b7,
                               L"Exactly one pipeline must be active to call GetComputeContext(). Current pipeline mask is \'0x%02x\'."
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((param_1->ComputeContext == (IRHIComputeContext *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ComputeContext",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                               ,0x2b8,
                               L"There is no active compute context on this command list. There may be a missing call to SwitchPipeline()."
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        plVar7 = (longlong *)(**(code **)(param_1->ComputeContext->_padding_ + 0x148))();
        this_00 = (FD3D12ContextCommon *)(**(code **)(*plVar7 + 0x290))(plVar7,uVar2);
        FD3D12ContextCommon::AddBarrier
                  (this_00,*(FD3D12Resource **)(lVar9 + 400),*(ED3D12Access *)((longlong)this + 8),
                   *(ED3D12Access *)((longlong)this + 0xc),0xffffffff);
        uVar11 = uVar11 & ~(1 << ((byte)uVar10 & 0x1f));
        uVar3 = 0;
        if (uVar11 != 0) {
          for (; (uVar11 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
        if (uVar11 == 0) {
          return;
        }
        uVar10 = (ulonglong)uVar3;
        lVar9 = *(longlong *)(lVar9 + 0x200 + uVar10 * 8);
      } while (lVar9 != 0);
    }
  }
  return;
}

// CalculateResourceSize @ 145a54100

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

ulong64 __cdecl UE::D3D12RHI::TextureUtils::CalculateResourceSize(FD3D12Texture *param_1)

{
  char cVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  ulong64 uVar6;
  ID3D12Device *pIVar7;
  ushort uVar8;
  ulong64 local_res8;
  
  lVar5 = (**(code **)(param_1->_padding_ + 0x20))();
  cVar1 = *(char *)(lVar5 + 0x32);
  if ((cVar1 == '\x01') || (cVar1 == '\x04')) {
    uVar8 = *(ushort *)(lVar5 + 0x2e);
  }
  else {
    uVar8 = 1;
  }
  if ((byte)(cVar1 - 3U) < 2) {
    uVar8 = uVar8 * 6;
  }
  bVar2 = *(byte *)(lVar5 + 0x30);
  lVar5 = param_1->_padding_;
  local_res8 = 0;
  if (param_1->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x59,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return uVar6;
    }
  }
  pIVar7 = FD3D12Device::GetDevice((FD3D12Device *)param_1->_padding_);
  (**(code **)((longlong)*pIVar7 + 0x130))
            (pIVar7,lVar5 + 0x50,0,(uint)bVar2 * (uint)uVar8,0,0,0,0,&local_res8);
  return local_res8;
}

// CopyBulkData @ 145a5aea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __cdecl
UE::D3D12RHI::TextureUtils::CopyBulkData
          (void *param_1,ulong64 param_2,FD3D12Texture *param_3,FResourceBulkDataInterface *param_4)

{
  char cVar1;
  FD3D12Device *this;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  ID3D12Device *pIVar6;
  void *_Src;
  uint uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  void *pvVar10;
  FResourceBulkDataInterface *pFVar11;
  ulonglong uVar12;
  uint *puVar13;
  int *piVar14;
  uint *puVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 auStack_b8 [80];
  void *local_68;
  void *local_60;
  uint *local_58;
  ulonglong local_50;
  FResourceBulkDataInterface *local_48;
  void *local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  puVar9 = auStack_b8;
  local_30 = __security_cookie.value ^ (ulonglong)&local_68;
  local_60 = (void *)param_2;
  local_48 = param_4;
  local_40 = param_1;
  lVar5 = (**(code **)(param_3->_padding_ + 0x20))(param_3);
  cVar1 = *(char *)(lVar5 + 0x32);
  if ((cVar1 == '\x01') || (cVar1 == '\x04')) {
    uVar16 = (uint)*(ushort *)(lVar5 + 0x2e);
  }
  else {
    uVar16 = 1;
  }
  if ((byte)(cVar1 - 3U) < 2) {
    uVar16 = (uint)(ushort)((short)uVar16 * 6);
  }
  uVar16 = *(byte *)(lVar5 + 0x30) * uVar16;
  uVar17 = (ulonglong)uVar16;
  uVar12 = uVar17 * 0x2c;
  local_50 = uVar17;
  local_38 = uVar12;
  if (uVar12 < 0x1000) {
    if (uVar12 == 0) {
      pvVar10 = (void *)0x0;
      puVar9 = auStack_b8;
    }
    else {
      uVar8 = uVar12 + 0x1e;
      if (uVar8 <= uVar12 + 0xf) {
        uVar8 = 0xffffffffffffff0;
      }
      puVar9 = auStack_b8 + -(uVar8 & 0xfffffffffffffff0);
      pvVar10 = (void *)((longlong)&local_60 + -(uVar8 & 0xfffffffffffffff0));
    }
  }
  else {
    pvVar10 = FMemory::Malloc(uVar12,0);
  }
  piVar14 = (int *)(uVar17 * 0x20 + (longlong)pvVar10);
  puVar15 = (uint *)(piVar14 + uVar17);
  local_68 = pvVar10;
  local_58 = puVar15;
  if (param_3->_padding_ == 0) {
    *(undefined8 *)(puVar9 + -8) = 0x145a5afd4;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x59,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this = (FD3D12Device *)param_3->_padding_;
  lVar5 = param_3->_padding_;
  *(undefined8 *)(puVar9 + -8) = 0x145a5afed;
  pIVar6 = FD3D12Device::GetDevice(this);
  pcVar2 = *(code **)((longlong)*pIVar6 + 0x130);
  *(undefined8 *)(puVar9 + 0x40) = 0;
  *(uint **)(puVar9 + 0x38) = puVar15;
  *(int **)(puVar9 + 0x30) = piVar14;
  *(void **)(puVar9 + 0x28) = pvVar10;
  *(undefined8 *)(puVar9 + 0x20) = 0;
  *(undefined8 *)(puVar9 + -8) = 0x145a5b022;
  (*pcVar2)(pIVar6,lVar5 + 0x50,0,uVar17);
  pFVar11 = local_48;
  pcVar2 = *(code **)((longlong)*local_48 + 0x10);
  *(undefined8 *)(puVar9 + -8) = 0x145a5b02f;
  uVar4 = (*pcVar2)(pFVar11);
  if (local_60 < (void *)(ulonglong)uVar4) {
    *(undefined8 *)(puVar9 + -8) = 0x145a5b057;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("UploadMemorySize >= BulkData->GetResourceBulkDataSize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                       ,0x380,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pcVar2 = *(code **)((longlong)*pFVar11 + 8);
  *(undefined8 *)(puVar9 + -8) = 0x145a5b066;
  _Src = (void *)(*pcVar2)(pFVar11);
  local_60 = _Src;
  if (uVar16 != 0) {
    puVar13 = (uint *)((longlong)pvVar10 + 0x18);
    do {
      pvVar10 = (void *)((longlong)local_40 + *(longlong *)(puVar13 + -6));
      uVar7 = puVar13[-1] * *piVar14;
      uVar16 = *puVar15;
      uVar4 = *puVar13;
      if (uVar16 == uVar4) {
        *(undefined8 *)(puVar9 + -8) = 0x145a5b0b1;
        memcpy(pvVar10,_Src,(ulonglong)(uVar16 * uVar7));
        _Src = (void *)((longlong)_Src + (ulonglong)(uVar16 * uVar7));
      }
      else if (uVar7 != 0) {
        uVar12 = (ulonglong)uVar7;
        do {
          *(undefined8 *)(puVar9 + -8) = 0x145a5b0de;
          memcpy(pvVar10,_Src,(ulonglong)uVar16);
          _Src = (void *)((longlong)_Src + (ulonglong)uVar16);
          pvVar10 = (void *)((longlong)pvVar10 + (ulonglong)uVar4);
          uVar12 = uVar12 - 1;
          puVar15 = local_58;
          uVar17 = local_50;
        } while (uVar12 != 0);
      }
      puVar15 = puVar15 + 2;
      piVar14 = piVar14 + 1;
      puVar13 = puVar13 + 8;
      uVar17 = uVar17 - 1;
      local_58 = puVar15;
      local_50 = uVar17;
    } while (uVar17 != 0);
    local_50 = 0;
    pvVar10 = local_68;
    pFVar11 = local_48;
    uVar12 = local_38;
  }
  pcVar2 = *(code **)((longlong)*pFVar11 + 0x10);
  *(undefined8 *)(puVar9 + -8) = 0x145a5b125;
  uVar16 = (*pcVar2)(pFVar11);
  if (_Src != (void *)((ulonglong)uVar16 + (longlong)local_60)) {
    *(undefined8 *)(puVar9 + -8) = 0x145a5b150;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SrcData == SourceDataStart + BulkData->GetResourceBulkDataSize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                       ,0x3a1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (0xfff < uVar12) {
    *(undefined8 *)(puVar9 + -8) = 0x145a5b167;
    FMemory::Free(pvVar10);
  }
  *(undefined8 *)(puVar9 + -8) = 0x145a5b173;
  return;
}

// CreateResourceCollectionBuffer @ 145a5e440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000145a5e627) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffeb8 : 0x000145a5e62b */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRHIBuffer * __cdecl
UE::RHICore::CreateResourceCollectionBuffer
          (FRHICommandListBase *param_1,TArrayView<FRHIResourceCollectionMember_const_,int> *param_2
          )

{
  ERHIPipeline EVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  FRHIBuffer *pFVar6;
  TRefCountPtr<FRHIBuffer> TVar7;
  longlong *plVar8;
  undefined1 auStack_1b8 [32];
  int local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  int iStack_18c;
  wchar_t *local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined8 uStack_170;
  undefined8 local_168;
  FRHIResource *local_160;
  longlong local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  TArrayView<FRHIResourceCollectionMember_const_,int> local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  wchar_t *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  FRHIResourceCollectionMember *local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  longlong *plStack_a0;
  FRHICommandListBase *local_98;
  FRHIBuffer *pFStack_90;
  undefined4 *local_88;
  ulong64 local_80;
  undefined1 local_78 [48];
  FRHICommandListBase *local_48;
  FRHIBuffer *local_40;
  undefined4 *local_38;
  ulong64 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  local_d8 = param_2->DataPtr;
  uStack_d0 = *(undefined8 *)&param_2->ArrayNum;
  uStack_194 = 4;
  local_198 = (int)*(undefined8 *)&param_2->ArrayNum * 4 + 4;
  iStack_18c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  uStack_190 = 0x11;
  local_118 = CONCAT44(4,local_198);
  uStack_110 = CONCAT44(iStack_18c,0x11);
  local_188 = L"ResourceCollection";
  EVar1 = param_1->ActivePipelines;
  uStack_180 = 0;
  uStack_170 = 0;
  local_178 = 0x70;
  uStack_174 = 3;
  local_168 = 0;
  local_f8 = 0x300000070;
  local_108 = L"ResourceCollection";
  uStack_100 = 0;
  local_e8 = 0;
  uStack_f0 = 0;
  if (((EVar1 != None) && ((EVar1 & EVar1 - Graphics) != None)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x2a5,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FRHIBuffer *)(*pcVar2)();
    return pFVar6;
  }
  if (param_1->ActivePipelines == None) {
    FRHICommandListBase::SwitchPipeline(param_1,Graphics);
    (**(code **)(GDynamicRHI->_padding_ + 0x140))(GDynamicRHI,&local_c8,param_1,&local_118);
    FRHICommandListBase::SwitchPipeline(param_1,None);
  }
  else {
    (**(code **)(GDynamicRHI->_padding_ + 0x140))(GDynamicRHI,&local_c8,param_1,&local_118);
  }
  uVar4 = local_a8;
  uVar3 = uStack_c0;
  local_78._32_8_ = local_a8;
  local_78._0_8_ = local_c8;
  local_78._40_8_ = plStack_a0;
  if (local_c8 != 0) {
    local_c8 = 0;
  }
  local_158 = local_c8;
  local_48 = local_98;
  local_40 = pFStack_90;
  local_30 = local_80;
  local_c8 = 0;
  uStack_c0 = uStack_150;
  local_38 = local_88;
  local_b8 = (undefined4)local_148;
  uStack_b4 = local_148._4_4_;
  uStack_b0 = uStack_140;
  uStack_ac = uStack_13c;
  local_a8 = local_138;
  plStack_a0 = (longlong *)0x0;
  uStack_150 = uVar3;
  local_138 = uVar4;
  uStack_130 = 0;
  if (local_158 != 0) {
    (**(code **)(local_148 + 0x10))();
  }
  local_88 = (undefined4 *)0x0;
  local_98 = (FRHICommandListBase *)0x0;
  pFStack_90 = (FRHIBuffer *)0x0;
  local_80 = 0;
  if (local_c8 != 0) {
    plVar8 = (longlong *)&local_b8;
    if (plStack_a0 != (longlong *)0x0) {
      plVar8 = plStack_a0;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  *local_38 = (int)*(undefined8 *)&param_2->ArrayNum;
  local_128.DataPtr = param_2->DataPtr;
  local_128.ArrayNum = param_2->ArrayNum;
  local_128._12_4_ = *(undefined4 *)&param_2->field_0xc;
  FillResourceCollectionUpdateMemory(local_38 + 1,&local_128);
  TVar7 = FRHIBufferInitializer::Finalize((FRHIBufferInitializer *)local_78);
  pFVar6 = (FRHIBuffer *)(TVar7.Reference)->_padding_;
  if (local_160 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_160);
  }
  if ((local_48 != (FRHICommandListBase *)0x0) && (local_40 != (FRHIBuffer *)0x0)) {
    FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_78);
  }
  if (local_78._0_8_ != 0) {
    plVar8 = (longlong *)(local_78 + 0x10);
    if ((longlong *)local_78._40_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_78._40_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  return pFVar6;
}

// FillClearValue @ 145a66160

D3D12_CLEAR_VALUE * __cdecl
UE::D3D12RHI::TextureUtils::FillClearValue
          (D3D12_CLEAR_VALUE *param_1,FD3D12ResourceDesc *param_2,FRHITextureDesc *param_3)

{
  byte bVar1;
  ETextureCreateFlags EVar2;
  float fVar3;
  undefined8 uVar4;
  longlong lVar5;
  DXGI_FORMAT_conflict DVar6;
  DXGI_FORMAT_conflict DVar7;
  
  lVar5 = param_2->_padding_;
  EVar2 = param_3->Flags;
  DVar6 = DXGIUtilities::GetPlatformTextureResourceFormat
                    (GPixelFormats[param_3->Format].PlatformFormat,EVar2);
  if (((lVar5 & 2) == 0) || ((param_3->ClearValue).ColorBinding != EDepthStencilBound)) {
    if (((lVar5 & 1) == 0) || ((param_3->ClearValue).ColorBinding != EColorBound)) {
      param_1 = (D3D12_CLEAR_VALUE *)0x0;
    }
    else {
      DVar6 = DXGIUtilities::FindShaderResourceFormat(DVar6,(bool)((byte)(EVar2 >> 4) & 1));
      uVar4 = *(undefined8 *)((longlong)&(param_3->ClearValue).Value + 4);
      fVar3 = (param_3->ClearValue).Value.Color[3];
      *(ulonglong *)param_1 = CONCAT44((param_3->ClearValue).Value.Color[0],DVar6);
      *(undefined8 *)((longlong)&param_1->field1_0x4 + 4) = uVar4;
      (param_1->field1_0x4).Color[3] = fVar3;
    }
  }
  else {
    if (DVar6 == DXGI_FORMAT_R32G8X24_TYPELESS) {
      DVar7 = DXGI_FORMAT_D32_FLOAT_S8X24_UINT;
    }
    else if (DVar6 == DXGI_FORMAT_R32_TYPELESS) {
      DVar7 = DXGI_FORMAT_D32_FLOAT;
    }
    else if (DVar6 == DXGI_FORMAT_R24G8_TYPELESS) {
      DVar7 = DXGI_FORMAT_D24_UNORM_S8_UINT;
    }
    else {
      DVar7 = DXGI_FORMAT_D16_UNORM;
      if (DVar6 != DXGI_FORMAT_R16_TYPELESS) {
        DVar7 = DVar6;
      }
    }
    bVar1 = *(byte *)((longlong)&(param_3->ClearValue).Value + 4);
    *(ulonglong *)param_1 = CONCAT44((param_3->ClearValue).Value.Color[0],DVar7);
    *(ulonglong *)((longlong)&param_1->field1_0x4 + 4) = (ulonglong)bVar1;
    (param_1->field1_0x4).Color[3] = 0.0;
  }
  return param_1;
}

// FillResourceCollectionUpdateMemory @ 145a66280

void __cdecl
UE::RHICore::FillResourceCollectionUpdateMemory
          (uint *param_1,TArrayView<FRHIResourceCollectionMember_const_,int> *param_2)

{
  EType EVar1;
  FRHIResource *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIResourceCollectionMember *pFVar5;
  uint uVar6;
  FRHIResourceCollectionMember *pFVar7;
  undefined8 local_res10;
  
  pFVar5 = param_2->DataPtr;
  pFVar7 = pFVar5 + param_2->ArrayNum;
  do {
    if (pFVar5 == pFVar7) {
      return;
    }
    EVar1 = pFVar5->Type;
    if (EVar1 == Texture) {
      (**(code **)(pFVar5->Resource->_padding_ + 0x30))(pFVar5->Resource,&local_res10);
LAB_145a66305:
      if (((uint)local_res10 == 0xffffffff) || (local_res10._4_1_ == '\t')) goto LAB_145a66315;
    }
    else {
      if (EVar1 == TextureReference) {
        pFVar2 = pFVar5->Resource;
        local_res10._0_4_ = *(uint *)&pFVar2[0xd].AtomicFlags;
        local_res10._4_1_ = pFVar2[0xd].ResourceType;
        local_res10._5_1_ = pFVar2[0xd].field_0xd;
        local_res10._6_2_ = pFVar2[0xd]._padding_;
        goto LAB_145a66305;
      }
      if (EVar1 == ShaderResourceView) {
        (**(code **)(pFVar5->Resource->_padding_ + 0x10))(pFVar5->Resource,&local_res10);
        goto LAB_145a66305;
      }
      local_res10 = 0x9ffffffff;
LAB_145a66315:
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Handle.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Internal\\RHICoreResourceCollection.h"
                         ,0x30,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (((uint)local_res10 == 0xffffffff) || (uVar6 = (uint)local_res10, local_res10._4_1_ == '\t'))
    {
      uVar6 = 0;
    }
    *param_1 = uVar6;
    pFVar5 = pFVar5 + 1;
    param_1 = param_1 + 1;
  } while( true );
}

// FindDepthStencilParentDXGIFormat @ 145a67b80

DXGI_FORMAT __cdecl UE::DXGIUtilities::FindDepthStencilParentDXGIFormat(DXGI_FORMAT param_1)

{
  switch(param_1) {
  case DXGI_FORMAT_D32_FLOAT_S8X24_UINT:
  case DXGI_FORMAT_X32_TYPELESS_G8X24_UINT:
    return DXGI_FORMAT_R32G8X24_TYPELESS;
  default:
    return param_1;
  case DXGI_FORMAT_D32_FLOAT:
    return DXGI_FORMAT_R32_TYPELESS;
  case DXGI_FORMAT_D24_UNORM_S8_UINT:
  case DXGI_FORMAT_X24_TYPELESS_G8_UINT:
    return DXGI_FORMAT_R24G8_TYPELESS;
  case DXGI_FORMAT_D16_UNORM:
    return DXGI_FORMAT_R16_TYPELESS;
  }
}

// GetFormatSizeInBytes @ 145a69020

uint __cdecl UE::DXGIUtilities::GetFormatSizeInBytes(DXGI_FORMAT param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  switch(param_1) {
  case DXGI_FORMAT_UNKNOWN:
  case DXGI_FORMAT_R1_UNORM:
    goto switchD_145a69045_caseD_0;
  case DXGI_FORMAT_R32G32B32A32_TYPELESS:
  case DXGI_FORMAT_R32G32B32A32_FLOAT:
  case DXGI_FORMAT_R32G32B32A32_UINT:
  case DXGI_FORMAT_R32G32B32A32_SINT:
  case DXGI_FORMAT_BC2_TYPELESS:
  case DXGI_FORMAT_BC2_UNORM:
  case DXGI_FORMAT_BC2_UNORM_SRGB:
  case DXGI_FORMAT_BC3_TYPELESS:
  case DXGI_FORMAT_BC3_UNORM:
  case DXGI_FORMAT_BC3_UNORM_SRGB:
  case DXGI_FORMAT_BC5_TYPELESS:
  case DXGI_FORMAT_BC5_UNORM:
  case DXGI_FORMAT_BC5_SNORM:
  case DXGI_FORMAT_BC6H_TYPELESS:
  case DXGI_FORMAT_BC6H_UF16:
  case DXGI_FORMAT_BC6H_SF16:
  case DXGI_FORMAT_BC7_TYPELESS:
  case DXGI_FORMAT_BC7_UNORM:
  case DXGI_FORMAT_BC7_UNORM_SRGB:
    return 0x10;
  case DXGI_FORMAT_R32G32B32_TYPELESS:
  case DXGI_FORMAT_R32G32B32_FLOAT:
  case DXGI_FORMAT_R32G32B32_UINT:
  case DXGI_FORMAT_R32G32B32_SINT:
    return 0xc;
  case DXGI_FORMAT_R16G16B16A16_TYPELESS:
  case DXGI_FORMAT_R16G16B16A16_FLOAT:
  case DXGI_FORMAT_R16G16B16A16_UNORM:
  case DXGI_FORMAT_R16G16B16A16_UINT:
  case DXGI_FORMAT_R16G16B16A16_SNORM:
  case DXGI_FORMAT_R16G16B16A16_SINT:
  case DXGI_FORMAT_R32G32_TYPELESS:
  case DXGI_FORMAT_R32G32_FLOAT:
  case DXGI_FORMAT_R32G32_UINT:
  case DXGI_FORMAT_R32G32_SINT:
  case DXGI_FORMAT_R32G8X24_TYPELESS:
  case DXGI_FORMAT_D32_FLOAT_S8X24_UINT:
  case DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS:
  case DXGI_FORMAT_X32_TYPELESS_G8X24_UINT:
  case DXGI_FORMAT_BC1_TYPELESS:
  case DXGI_FORMAT_BC1_UNORM:
  case DXGI_FORMAT_BC1_UNORM_SRGB:
  case DXGI_FORMAT_BC4_TYPELESS:
  case DXGI_FORMAT_BC4_UNORM:
  case DXGI_FORMAT_BC4_SNORM:
  case DXGI_FORMAT_Y416:
  case DXGI_FORMAT_Y210:
  case DXGI_FORMAT_Y216:
    return 8;
  case DXGI_FORMAT_R10G10B10A2_TYPELESS:
  case DXGI_FORMAT_R10G10B10A2_UNORM:
  case DXGI_FORMAT_R10G10B10A2_UINT:
  case DXGI_FORMAT_R11G11B10_FLOAT:
  case DXGI_FORMAT_R8G8B8A8_TYPELESS:
  case DXGI_FORMAT_R8G8B8A8_UNORM:
  case DXGI_FORMAT_R8G8B8A8_UNORM_SRGB:
  case DXGI_FORMAT_R8G8B8A8_UINT:
  case DXGI_FORMAT_R8G8B8A8_SNORM:
  case DXGI_FORMAT_R8G8B8A8_SINT:
  case DXGI_FORMAT_R16G16_TYPELESS:
  case DXGI_FORMAT_R16G16_FLOAT:
  case DXGI_FORMAT_R16G16_UNORM:
  case DXGI_FORMAT_R16G16_UINT:
  case DXGI_FORMAT_R16G16_SNORM:
  case DXGI_FORMAT_R16G16_SINT:
  case DXGI_FORMAT_R32_TYPELESS:
  case DXGI_FORMAT_D32_FLOAT:
  case DXGI_FORMAT_R32_FLOAT:
  case DXGI_FORMAT_R32_UINT:
  case DXGI_FORMAT_R32_SINT:
  case DXGI_FORMAT_R24G8_TYPELESS:
  case DXGI_FORMAT_D24_UNORM_S8_UINT:
  case DXGI_FORMAT_R24_UNORM_X8_TYPELESS:
  case DXGI_FORMAT_X24_TYPELESS_G8_UINT:
  case DXGI_FORMAT_R9G9B9E5_SHAREDEXP:
  case DXGI_FORMAT_R8G8_B8G8_UNORM:
  case DXGI_FORMAT_G8R8_G8B8_UNORM:
  case DXGI_FORMAT_B8G8R8A8_UNORM:
  case DXGI_FORMAT_B8G8R8X8_UNORM:
  case DXGI_FORMAT_R10G10B10_XR_BIAS_A2_UNORM:
  case DXGI_FORMAT_B8G8R8A8_TYPELESS:
  case DXGI_FORMAT_B8G8R8A8_UNORM_SRGB:
  case DXGI_FORMAT_B8G8R8X8_TYPELESS:
  case DXGI_FORMAT_B8G8R8X8_UNORM_SRGB:
  case DXGI_FORMAT_AYUV:
  case DXGI_FORMAT_Y410:
  case DXGI_FORMAT_P010:
  case DXGI_FORMAT_P016:
  case DXGI_FORMAT_YUY2:
    return 4;
  case DXGI_FORMAT_R8G8_TYPELESS:
  case DXGI_FORMAT_R8G8_UNORM:
  case DXGI_FORMAT_R8G8_UINT:
  case DXGI_FORMAT_R8G8_SNORM:
  case DXGI_FORMAT_R8G8_SINT:
  case DXGI_FORMAT_R16_TYPELESS:
  case DXGI_FORMAT_R16_FLOAT:
  case DXGI_FORMAT_D16_UNORM:
  case DXGI_FORMAT_R16_UNORM:
  case DXGI_FORMAT_R16_UINT:
  case DXGI_FORMAT_R16_SNORM:
  case DXGI_FORMAT_R16_SINT:
  case DXGI_FORMAT_B5G6R5_UNORM:
  case DXGI_FORMAT_B5G5R5A1_UNORM:
  case DXGI_FORMAT_NV12:
  case DXGI_FORMAT_NV11:
  case DXGI_FORMAT_B4G4R4A4_UNORM:
    return 2;
  case DXGI_FORMAT_R8_TYPELESS:
  case DXGI_FORMAT_R8_UNORM:
  case DXGI_FORMAT_R8_UINT:
  case DXGI_FORMAT_R8_SNORM:
  case DXGI_FORMAT_R8_SINT:
  case DXGI_FORMAT_A8_UNORM:
    return 1;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Internal\\DXGIUtilities.h"
                       ,0x159,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
switchD_145a69045_caseD_0:
    return 0;
  }
}

// GetHeightAlignment @ 145a69160

uint __cdecl UE::DXGIUtilities::GetHeightAlignment(DXGI_FORMAT param_1)

{
  switch(param_1) {
  case DXGI_FORMAT_BC1_TYPELESS:
  case DXGI_FORMAT_BC1_UNORM:
  case DXGI_FORMAT_BC1_UNORM_SRGB:
  case DXGI_FORMAT_BC2_TYPELESS:
  case DXGI_FORMAT_BC2_UNORM:
  case DXGI_FORMAT_BC2_UNORM_SRGB:
  case DXGI_FORMAT_BC3_TYPELESS:
  case DXGI_FORMAT_BC3_UNORM:
  case DXGI_FORMAT_BC3_UNORM_SRGB:
  case DXGI_FORMAT_BC4_TYPELESS:
  case DXGI_FORMAT_BC4_UNORM:
  case DXGI_FORMAT_BC4_SNORM:
  case DXGI_FORMAT_BC5_TYPELESS:
  case DXGI_FORMAT_BC5_UNORM:
  case DXGI_FORMAT_BC5_SNORM:
  case DXGI_FORMAT_BC6H_TYPELESS:
  case DXGI_FORMAT_BC6H_UF16:
  case DXGI_FORMAT_BC6H_SF16:
  case DXGI_FORMAT_BC7_TYPELESS:
  case DXGI_FORMAT_BC7_UNORM:
  case DXGI_FORMAT_BC7_UNORM_SRGB:
    return 4;
  default:
    return 1;
  case DXGI_FORMAT_NV12:
  case DXGI_FORMAT_P010:
  case DXGI_FORMAT_P016:
  case DXGI_FORMAT_420_OPAQUE:
    return 2;
  }
}

// GetInitializerSubresourceFootprint @ 145a69480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

D3D12_PLACED_SUBRESOURCE_FOOTPRINT * __cdecl
UE::D3D12RHI::TextureUtils::GetInitializerSubresourceFootprint
          (D3D12_PLACED_SUBRESOURCE_FOOTPRINT *__return_storage_ptr__,FD3D12Texture *param_1,
          uint param_2,uint *param_3)

{
  ulong64 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  code *pcVar4;
  ulong64 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  FD3D12Device *this;
  bool bVar8;
  D3D12_PLACED_SUBRESOURCE_FOOTPRINT *pDVar9;
  longlong lVar10;
  void *pvVar11;
  ID3D12Device *pIVar12;
  ushort uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  void *pvVar17;
  undefined1 *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined1 auStack_98 [80];
  FD3D12Device *local_48;
  uint *local_40 [2];
  ulonglong local_30;
  
  puVar18 = auStack_98;
  local_30 = __security_cookie.value ^ (ulonglong)&local_48;
  local_40[0] = param_3;
  if (param_1->_padding_ == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x59,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pDVar9 = (D3D12_PLACED_SUBRESOURCE_FOOTPRINT *)(*pcVar4)();
      return pDVar9;
    }
  }
  local_48 = (FD3D12Device *)param_1->_padding_;
  lVar16 = param_1->_padding_;
  lVar10 = (**(code **)(param_1->_padding_ + 0x20))(param_1);
  cVar3 = *(char *)(lVar10 + 0x32);
  if ((cVar3 == '\x01') || (cVar3 == '\x04')) {
    uVar13 = *(ushort *)(lVar10 + 0x2e);
  }
  else {
    uVar13 = 1;
  }
  if ((byte)(cVar3 - 3U) < 2) {
    uVar13 = uVar13 * 6;
  }
  uVar15 = (uint)*(byte *)(lVar10 + 0x30) * (uint)uVar13;
  if (uVar15 <= param_2) {
    param_2 = uVar15 - 1;
  }
  uVar20 = (ulonglong)(param_2 + 1);
  uVar19 = uVar20 * 0x24;
  if (uVar19 < 0x1000) {
    if (uVar20 * 9 == 0) {
      pvVar11 = (void *)0x0;
      puVar18 = auStack_98;
    }
    else {
      uVar14 = uVar19 + 0x1e;
      if (uVar14 <= uVar19 + 0xf) {
        uVar14 = 0xffffffffffffff0;
      }
      puVar18 = auStack_98 + -(uVar14 & 0xfffffffffffffff0);
      pvVar11 = (void *)((longlong)local_40 + -(uVar14 & 0xfffffffffffffff0));
    }
  }
  else {
    pvVar11 = FMemory::Malloc(uVar19,0);
  }
  this = local_48;
  pvVar17 = (void *)(uVar20 * 0x20 + (longlong)pvVar11);
  *(undefined8 *)(puVar18 + -8) = 0x145a695c3;
  pIVar12 = FD3D12Device::GetDevice(this);
  pcVar4 = *(code **)((longlong)*pIVar12 + 0x130);
  *(undefined8 *)(puVar18 + 0x40) = 0;
  *(undefined8 *)(puVar18 + 0x38) = 0;
  *(void **)(puVar18 + 0x30) = pvVar17;
  *(void **)(puVar18 + 0x28) = pvVar11;
  *(undefined8 *)(puVar18 + 0x20) = 0;
  *(undefined8 *)(puVar18 + -8) = 0x145a695f9;
  (*pcVar4)(pIVar12,lVar16 + 0x50,0,param_2 + 1);
  lVar16 = (ulonglong)param_2 * 0x20;
  *local_40[0] = *(uint *)((longlong)pvVar17 + (ulonglong)param_2 * 4);
  puVar1 = (ulong64 *)(lVar16 + (longlong)pvVar11);
  uVar5 = puVar1[1];
  puVar2 = (undefined8 *)(lVar16 + 0x10 + (longlong)pvVar11);
  uVar6 = *puVar2;
  uVar7 = puVar2[1];
  __return_storage_ptr__->Offset = *puVar1;
  (__return_storage_ptr__->Footprint).Format = (int)uVar5;
  (__return_storage_ptr__->Footprint).Width = (int)(uVar5 >> 0x20);
  (__return_storage_ptr__->Footprint).Height = (int)uVar6;
  (__return_storage_ptr__->Footprint).Depth = (int)((ulonglong)uVar6 >> 0x20);
  *(undefined8 *)&(__return_storage_ptr__->Footprint).RowPitch = uVar7;
  if (0xfff < uVar19) {
    *(undefined8 *)(puVar18 + -8) = 0x145a6962c;
    FMemory::Free(pvVar11);
  }
  *(undefined8 *)(puVar18 + -8) = 0x145a6963b;
  return __return_storage_ptr__;
}

// GetPlaneSliceFromViewFormat @ 145a69a20

uchar __cdecl
UE::DXGIUtilities::GetPlaneSliceFromViewFormat(DXGI_FORMAT param_1,DXGI_FORMAT param_2)

{
  DXGI_FORMAT DVar1;
  bool bVar2;
  
  DVar1 = FindDepthStencilParentDXGIFormat(param_1);
  if (DVar1 == DXGI_FORMAT_R32G8X24_TYPELESS) {
    if ((param_2 != DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS) &&
       (param_2 == DXGI_FORMAT_X32_TYPELESS_G8X24_UINT)) {
      return '\x01';
    }
  }
  else {
    if (DVar1 == DXGI_FORMAT_R24G8_TYPELESS) {
      if (param_2 == DXGI_FORMAT_R24_UNORM_X8_TYPELESS) {
        return '\0';
      }
      bVar2 = param_2 == DXGI_FORMAT_X24_TYPELESS_G8_UINT;
    }
    else if (DVar1 == DXGI_FORMAT_NV12) {
      bVar2 = param_2 == DXGI_FORMAT_R8G8_UNORM;
    }
    else {
      if (DVar1 != DXGI_FORMAT_P010) {
        return '\0';
      }
      bVar2 = param_2 == DXGI_FORMAT_R16G16_UNORM;
    }
    if (bVar2) {
      return '\x01';
    }
  }
  return '\0';
}

// GetWidthAlignment @ 145a6b470

uint __cdecl UE::DXGIUtilities::GetWidthAlignment(DXGI_FORMAT param_1)

{
  switch(param_1) {
  case DXGI_FORMAT_R1_UNORM:
    return 8;
  default:
    return 1;
  case DXGI_FORMAT_R8G8_B8G8_UNORM:
  case DXGI_FORMAT_G8R8_G8B8_UNORM:
  case DXGI_FORMAT_NV12:
  case DXGI_FORMAT_P010:
  case DXGI_FORMAT_P016:
  case DXGI_FORMAT_420_OPAQUE:
  case DXGI_FORMAT_YUY2:
  case DXGI_FORMAT_Y210:
  case DXGI_FORMAT_Y216:
    return 2;
  case DXGI_FORMAT_BC1_TYPELESS:
  case DXGI_FORMAT_BC1_UNORM:
  case DXGI_FORMAT_BC1_UNORM_SRGB:
  case DXGI_FORMAT_BC2_TYPELESS:
  case DXGI_FORMAT_BC2_UNORM:
  case DXGI_FORMAT_BC2_UNORM_SRGB:
  case DXGI_FORMAT_BC3_TYPELESS:
  case DXGI_FORMAT_BC3_UNORM:
  case DXGI_FORMAT_BC3_UNORM_SRGB:
  case DXGI_FORMAT_BC4_TYPELESS:
  case DXGI_FORMAT_BC4_UNORM:
  case DXGI_FORMAT_BC4_SNORM:
  case DXGI_FORMAT_BC5_TYPELESS:
  case DXGI_FORMAT_BC5_UNORM:
  case DXGI_FORMAT_BC5_SNORM:
  case DXGI_FORMAT_BC6H_TYPELESS:
  case DXGI_FORMAT_BC6H_UF16:
  case DXGI_FORMAT_BC6H_SF16:
  case DXGI_FORMAT_BC7_TYPELESS:
  case DXGI_FORMAT_BC7_UNORM:
  case DXGI_FORMAT_BC7_UNORM_SRGB:
  case DXGI_FORMAT_NV11:
    return 4;
  }
}

// ReconcileInitialState @ 145a7a7b0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::D3D12RHI::TextureUtils::ReconcileInitialState
          (FRHICommandListBase *param_1,FD3D12Texture *param_2,ED3D12Access param_3,
          ED3D12Access param_4)

{
  FRHICommandBase *pFVar1;
  FD3D12Texture *local_18;
  ED3D12Access local_10;
  ED3D12Access local_c;
  
  if (param_3 != param_4) {
    local_18 = param_2;
    local_10 = param_3;
    local_c = param_4;
    if (((GRHICommandList.bLatchedBypass) && ((param_1->PersistentState).bImmediate != '\0')) ||
       (param_1->bExecuting != false)) {
      `UE::D3D12RHI::TextureUtils::ReconcileInitialState'::__l5::<lambda_1>::operator()
                (&local_18,param_1);
    }
    else {
      pFVar1 = FMemStackBase::Alloc(&param_1->MemManager,0x28,8);
      param_1->NumCommands = param_1->NumCommands + 1;
      *param_1->CommandLink = pFVar1;
      param_1->CommandLink = &pFVar1->Next;
      pFVar1->Next = (FRHICommandBase *)0x0;
      pFVar1->_padding_ =
           (longlong)
           &TRHILambdaCommand<FRHICommandListBase,`UE::D3D12RHI::TextureUtils::ReconcileInitialState'::`5'::<lambda_1>_>
            ::_vftable_;
      pFVar1[1]._padding_ = (longlong)param_2;
      *(ED3D12Access *)&pFVar1[1].Next = param_3;
      *(ED3D12Access *)((longlong)&pFVar1[1].Next + 4) = param_4;
      pFVar1[2]._padding_ = (longlong)L"TRHILambdaCommand";
    }
  }
  return;
}

// UpdateReservedResourceStatsOnCommit @ 145a817b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::RHICore::UpdateReservedResourceStatsOnCommit(long64 param_1,bool param_2,bool param_3)

{
  FName FVar1;
  FName *pFVar2;
  FThreadSafeStaticStat<FStat_STAT_ReservedCommittedBufferMemory> FVar3;
  FThreadStats *pFVar4;
  FThreadStatsPool *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_ReservedCommittedTextureMemory> FVar6;
  FThreadSafeStaticStat<FStat_STAT_ReservedUncommittedTextureMemory> FVar7;
  FThreadSafeStaticStat<FStat_STAT_ReservedUncommittedBufferMemory> *this;
  wchar_t *pwVar8;
  FName local_res20;
  FStatMessage local_38;
  
  if (!param_3) {
    param_1 = -param_1;
  }
  if ((uchar  [8])param_1 == (uchar  [8])0x0) {
    return;
  }
  if (param_2) {
    FVar3 = StatPtr_STAT_ReservedCommittedBufferMemory;
    if (StatPtr_STAT_ReservedCommittedBufferMemory ==
        (FThreadSafeStaticStat<FStat_STAT_ReservedCommittedBufferMemory>)0x0) {
      pFVar2 = ::FName::FName(&local_res20,"STAT_ReservedCommittedBufferMemory");
      FVar3 = (FThreadSafeStaticStat<FStat_STAT_ReservedCommittedBufferMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ReservedCommittedBufferMemory,
                         *pFVar2,L"Reserved Buffer Memory (Committed)","STATGROUP_RHI",
                         "STATCAT_Advanced",L"RHI",true,false,ST_int64,false,false,MCR_GPU);
    }
    FVar1 = *(FName *)FVar3;
    local_res20 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar4 == (FThreadStats *)0x0) {
        pFVar5 = FThreadStatsPool::Get();
        pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_res20 = FVar1;
      local_38.StatData.Pad = (uchar  [8])param_1;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_38);
      FStatsTrace::Add(&local_res20,param_1);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_ReservedUncommittedTextureMemory>)
            StatPtr_STAT_ReservedUncommittedBufferMemory;
    if (StatPtr_STAT_ReservedUncommittedBufferMemory !=
        (FThreadSafeStaticStat<FStat_STAT_ReservedUncommittedBufferMemory>)0x0) goto LAB_145a81ae7;
    pFVar2 = ::FName::FName(&local_res20,"STAT_ReservedUncommittedBufferMemory");
    pwVar8 = L"Reserved Buffer Memory (Uncommitted)";
    this = &StatPtr_STAT_ReservedUncommittedBufferMemory;
  }
  else {
    FVar6 = StatPtr_STAT_ReservedCommittedTextureMemory;
    if (StatPtr_STAT_ReservedCommittedTextureMemory ==
        (FThreadSafeStaticStat<FStat_STAT_ReservedCommittedTextureMemory>)0x0) {
      pFVar2 = ::FName::FName(&local_res20,"STAT_ReservedCommittedTextureMemory");
      FVar6 = (FThreadSafeStaticStat<FStat_STAT_ReservedCommittedTextureMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ReservedCommittedTextureMemory,
                         *pFVar2,L"Reserved Texture Memory (Committed)","STATGROUP_RHI",
                         "STATCAT_Advanced",L"RHI",true,false,ST_int64,false,false,MCR_GPU);
    }
    FVar1 = *(FName *)FVar6;
    local_res20 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar4 == (FThreadStats *)0x0) {
        pFVar5 = FThreadStatsPool::Get();
        pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_res20 = FVar1;
      local_38.StatData.Pad = (uchar  [8])param_1;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_38);
      FStatsTrace::Add(&local_res20,param_1);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
    FVar7 = StatPtr_STAT_ReservedUncommittedTextureMemory;
    if (StatPtr_STAT_ReservedUncommittedTextureMemory !=
        (FThreadSafeStaticStat<FStat_STAT_ReservedUncommittedTextureMemory>)0x0) goto LAB_145a81ae7;
    pFVar2 = ::FName::FName(&local_res20,"STAT_ReservedUncommittedTextureMemory");
    pwVar8 = L"Reserved Texture Memory (Uncommitted)";
    this = (FThreadSafeStaticStat<FStat_STAT_ReservedUncommittedBufferMemory> *)
           &StatPtr_STAT_ReservedUncommittedTextureMemory;
  }
  FVar7 = (FThreadSafeStaticStat<FStat_STAT_ReservedUncommittedTextureMemory>)
          FThreadSafeStaticStatBase::DoSetup
                    ((FThreadSafeStaticStatBase *)this,*pFVar2,pwVar8,"STATGROUP_RHI",
                     "STATCAT_Advanced",L"RHI",true,false,ST_int64,false,false,MCR_GPU);
LAB_145a81ae7:
  FVar1 = *(FName *)FVar7;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    local_res20 = FVar1;
    pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar4 == (FThreadStats *)0x0) {
      pFVar5 = FThreadStatsPool::Get();
      pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
    }
    local_38.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
    local_res20 = FVar1;
    local_38.StatData.Pad = (uchar  [8])param_1;
    local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar4,&local_38);
    FStatsTrace::Add(&local_res20,-param_1);
    if (pFVar4->ScopeCount == 0) {
      FThreadStats::Flush(pFVar4,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar4,false,false);
    }
  }
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FShaderCodeVendorExtension>_> @ 145a8c0d0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FShaderCodeVendorExtension>_>
          (ushort param_1,ForElementType<FShaderCodeVendorExtension> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FShaderCodeVendorExtension>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12RHITextureReference>::FLinkedObjectIterator>_> @ 145a8c320

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12RHITextureReference>::FLinkedObjectIterator>_>
          (ushort param_1,
          ForElementType<FD3D12LinkedAdapterObject<FD3D12RHITextureReference>::FLinkedObjectIterator>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FD3D12LinkedAdapterObject<FD3D12RHITextureReference>::FLinkedObjectIterator>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12TransientHeap>::FLinkedObjectIterator>_> @ 145a8c3f0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12TransientHeap>::FLinkedObjectIterator>_>
          (ushort param_1,
          ForElementType<FD3D12LinkedAdapterObject<FD3D12TransientHeap>::FLinkedObjectIterator>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FD3D12LinkedAdapterObject<FD3D12TransientHeap>::FLinkedObjectIterator>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12UniformBuffer>::FLinkedObjectIterator>_> @ 145a8c4c0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12UniformBuffer>::FLinkedObjectIterator>_>
          (ushort param_1,
          ForElementType<FD3D12LinkedAdapterObject<FD3D12UniformBuffer>::FLinkedObjectIterator>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FD3D12LinkedAdapterObject<FD3D12UniformBuffer>::FLinkedObjectIterator>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12UnorderedAccessView_RHI>::FLinkedObjectIterator>_> @ 145a8c590

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12UnorderedAccessView_RHI>::FLinkedObjectIterator>_>
          (ushort param_1,
          ForElementType<FD3D12LinkedAdapterObject<FD3D12UnorderedAccessView_RHI>::FLinkedObjectIterator>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FD3D12LinkedAdapterObject<FD3D12UnorderedAccessView_RHI>::FLinkedObjectIterator>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<D3D12_INPUT_ELEMENT_DESC>_> @ 145a8c660

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<D3D12_INPUT_ELEMENT_DESC>_>
          (ushort param_1,ForElementType<D3D12_INPUT_ELEMENT_DESC> *param_2,int *param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = *param_3;
  uVar1 = iVar4 + 1;
  if ((int)uVar1 < iVar4) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (0x11 < uVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewMax <= NumInlineElements",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                       ,0x536,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  *param_3 = 0x11;
  return iVar4;
}

// ReallocGrow<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12Viewport::FBackBufferData>_> @ 145a8c6d0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12Viewport::FBackBufferData>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FD3D12Viewport::FBackBufferData> *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 4) {
      iVar8 = 3;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 4) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FD3D12Viewport::FBackBufferData>::ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FShaderBundleBinderOps>_> @ 145a8c7b0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FShaderBundleBinderOps>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FShaderBundleBinderOps> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  iVar2 = *param_5;
  uVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar3 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar6 = 4;
    uVar7 = (ulonglong)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar3 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FShaderBundleBinderOps>
    ::ResizeAllocation(param_4,iVar2,(int)uVar6,uVar7);
    *param_6 = (int)uVar6;
  }
  return iVar2;
}

// ReallocGrow<0,TFixedAllocator<17>::ForElementType<FVertexElement>_> @ 145a8c880

int __cdecl
UE::Core::Private::ReallocGrow<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FVertexElement> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = *param_5;
  iVar2 = *param_6;
  uVar1 = iVar5 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar2 - iVar5) < (uint)param_3) {
    if ((int)uVar1 < iVar5) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (0x11 < uVar1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x536,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    *param_6 = 0x11;
  }
  return iVar5;
}

// ReallocShrink<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12Viewport::FBackBufferData>_> @ 145a8c900

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12Viewport::FBackBufferData>_>
          (uint param_1,uint param_2,ForElementType<FD3D12Viewport::FBackBufferData> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 4) {
    iVar2 = 3;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FD3D12Viewport::FBackBufferData>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FShaderBundleBinderOps>_> @ 145a8c9c0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FShaderBundleBinderOps>_>
          (uint param_1,uint param_2,ForElementType<FShaderBundleBinderOps> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 5) {
    iVar2 = 4;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FShaderBundleBinderOps>
    ::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType> @ 145a8ca80

void __cdecl
UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
          (uint param_1,uint param_2,int param_3,ForAnyElementType *param_4,int param_5,int *param_6
          )

{
  int iVar1;
  ulong64 uVar2;
  
  iVar1 = 0;
  if (param_3 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_3 * (longlong)(int)param_1,param_2);
    iVar1 = (int)(uVar2 / (ulonglong)(longlong)(int)param_1);
    if (iVar1 < param_3) {
      iVar1 = 0x7fffffff;
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    FMemoryImageAllocatorBase::ResizeAllocation
              ((FMemoryImageAllocatorBase *)param_4,param_5,iVar1,(ulonglong)param_1,param_2);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12RHITextureReference>::FLinkedObjectIterator>_> @ 145a8cb10

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12RHITextureReference>::FLinkedObjectIterator>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FD3D12LinkedAdapterObject<FD3D12RHITextureReference>::FLinkedObjectIterator>
          *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FD3D12LinkedAdapterObject<FD3D12RHITextureReference>::FLinkedObjectIterator>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12TransientHeap>::FLinkedObjectIterator>_> @ 145a8cb90

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12TransientHeap>::FLinkedObjectIterator>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FD3D12LinkedAdapterObject<FD3D12TransientHeap>::FLinkedObjectIterator>
          *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FD3D12LinkedAdapterObject<FD3D12TransientHeap>::FLinkedObjectIterator>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12UniformBuffer>::FLinkedObjectIterator>_> @ 145a8cc10

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12UniformBuffer>::FLinkedObjectIterator>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FD3D12LinkedAdapterObject<FD3D12UniformBuffer>::FLinkedObjectIterator>
          *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FD3D12LinkedAdapterObject<FD3D12UniformBuffer>::FLinkedObjectIterator>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12UnorderedAccessView_RHI>::FLinkedObjectIterator>_> @ 145a8cc90

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12UnorderedAccessView_RHI>::FLinkedObjectIterator>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FD3D12LinkedAdapterObject<FD3D12UnorderedAccessView_RHI>::FLinkedObjectIterator>
          *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FD3D12LinkedAdapterObject<FD3D12UnorderedAccessView_RHI>::FLinkedObjectIterator>
    ::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<0,TFixedAllocator<17>::ForElementType<FVertexElement>_> @ 145a8cd10

void __cdecl
UE::Core::Private::ReallocTo<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FVertexElement> *param_4,int param_5
          ,int *param_6)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_3 != 0) {
    if ((0x11 < (uint)param_3) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewMax <= NumInlineElements",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                           ,0x52a,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar3 = 0x11;
  }
  if (((uVar3 != *param_6) && (*param_6 = uVar3, 0x11 < uVar3)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewMax >= 0 && NewMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x524,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// SetUniformBufferResourcesFromTables<FWorkGraphShaderBundleBinder_&,FD3D12UniformBuffer_*_[16],unsigned_int,0> @ 145a8cf60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __cdecl
UE::RHI::Private::
SetUniformBufferResourcesFromTables<FWorkGraphShaderBundleBinder_&,FD3D12UniformBuffer_*_[16],unsigned_int,0>
          (FWorkGraphShaderBundleBinder *param_1,FRHIShader *param_2,uint *param_3,
          FD3D12UniformBuffer *(*param_4) [16],FTracker *param_5)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  FRHIResourceCollection *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  FString *pFVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  uint *puVar19;
  FD3D12UniformBuffer *pFVar20;
  uint uVar21;
  undefined1 local_154 [4];
  uint local_150;
  longlong local_148;
  uint local_140;
  undefined4 local_13c;
  float local_138;
  uint local_134;
  FD3D12UniformBuffer *local_130;
  FString local_128;
  longlong local_118;
  longlong local_110;
  uint local_108;
  longlong *local_100;
  FString local_f8;
  <lambda_2> local_e8;
  <lambda_5> local_d0;
  <lambda_1> local_b8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  
  bVar11 = false;
  bVar7 = false;
  bVar10 = false;
  bVar6 = false;
  local_138 = (float)(double)FApp::CurrentTime;
  local_134 = (uint)param_2->_padding_ & *param_3;
  if (local_134 == 0) {
    *param_3 = 0;
    return;
  }
  do {
    uVar12 = -local_134 & local_134;
    local_108 = 0;
    if (uVar12 != 0) {
      for (; (uVar12 >> local_108 & 1) == 0; local_108 = local_108 + 1) {
      }
    }
    uVar21 = 0x20;
    if (uVar12 != 0) {
      uVar21 = local_108;
    }
    local_134 = local_134 & local_134 - 1;
    local_150 = uVar21;
    if (((int)param_2->_padding_ <= (int)uVar21) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("BufferIndex < SRT.ResourceTableLayoutHashes.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                           ,0x61,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar18 = (longlong)(int)uVar21;
    pFVar20 = (*param_4)[lVar18];
    local_130 = pFVar20;
    local_118 = lVar18;
    if (pFVar20 == (FD3D12UniformBuffer *)0x0) {
      if (((int)uVar21 < 0) || ((param_2->Debug).UniformBufferNames.ArrayNum <= (int)uVar21)) {
        bVar6 = true;
        pFVar14 = ::FString::FString(&local_98,L"<unknown>");
      }
      else {
        if (((int)uVar21 < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        bVar10 = true;
        pFVar14 = ::FName::ToString((FName *)((param_2->Debug).UniformBufferNames.AllocatorInstance.
                                              Data + lVar18 * 8),&local_88);
      }
      pFVar2 = (pFVar14->Data).AllocatorInstance.Data;
      (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar14->Data).ArrayNum = 0;
      (pFVar14->Data).ArrayMax = 0;
      if ((bVar6) &&
         (bVar6 = false, local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if ((bVar10) &&
         (bVar10 = false, local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      Logging::Private::BasicFatalLog
                (&`void___cdecl_UE::RHI::Private::SetUniformBufferResourcesFromTables<FWorkGraphShaderBundleBinder&___ptr64,class_FD3D12UniformBuffer*___ptr64_[16],unsigned_int,0>(FWorkGraphShaderBundleBinder&___ptr64,FRHIShader_const&___ptr64,unsigned_int&___ptr64,class_FD3D12UniformBuffer*___ptr64_(&___ptr64)[16],RHIValidation::FTracker*___ptr64)'
                  ::__l15::LOG_Static,(FLogCategoryBase *)&LogRHI);
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      local_148 = lVar18 * 4;
    }
    else {
      local_140 = ~uVar21 >> 0x1f;
      uVar12 = 0;
      if ((int)uVar21 < (int)param_2->_padding_) {
        uVar12 = local_140;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_148 = lVar18 * 4;
      lVar18 = pFVar20->_padding_;
      local_100 = &pFVar20->_padding_;
      local_110 = local_148;
      if (*(int *)(lVar18 + 0x88) != *(int *)(local_148 + param_2->_padding_)) {
        local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_128.Data.ArrayNum = 0;
        local_128.Data.ArrayMax = 0;
        lVar17 = *(longlong *)(lVar18 + 0x28);
        iVar1 = *(int *)(lVar18 + 0x30);
        lVar3 = lVar17 + (longlong)iVar1 * 4;
        while( true ) {
          if (*(int *)(lVar18 + 0x30) != iVar1) {
            local_154[0] = 0;
            `TCheckedPointerIterator<FRHIUniformBufferResource_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_154);
          }
          lVar8 = local_118;
          uVar21 = local_140;
          uVar12 = local_150;
          if (lVar17 == lVar3) break;
          ::FString::PrintfImpl(&local_f8,L"%s%d");
          uVar12 = local_f8.Data.ArrayNum - 1;
          if (local_f8.Data.ArrayNum == 0) {
            uVar12 = 0;
          }
          ::FString::AppendChars(&local_128,(wchar_t *)local_f8.Data.AllocatorInstance.Data,uVar12);
          if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f8.Data.AllocatorInstance.Data);
          }
          lVar17 = lVar17 + 4;
        }
        local_13c = *(undefined4 *)(lVar18 + 0x30);
        local_148 = CONCAT44(local_148._4_4_,*(undefined4 *)(lVar18 + 0x8c));
        uVar13 = 0;
        if ((int)local_150 < (int)param_2->_padding_) {
          uVar13 = local_140;
        }
        if ((uVar13 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (((int)uVar12 < 0) || ((param_2->Debug).UniformBufferNames.ArrayNum <= (int)uVar12)) {
          bVar7 = true;
          pFVar14 = ::FString::FString(&local_78,L"<unknown>");
        }
        else {
          if ((uVar21 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          bVar11 = true;
          pFVar14 = ::FName::ToString((FName *)((param_2->Debug).UniformBufferNames.
                                                AllocatorInstance.Data + lVar8 * 8),&local_68);
        }
        pFVar2 = (pFVar14->Data).AllocatorInstance.Data;
        (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar14->Data).ArrayNum = 0;
        (pFVar14->Data).ArrayMax = 0;
        if ((bVar7) &&
           (bVar7 = false, local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if ((bVar11) &&
           (bVar11 = false, local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        Logging::Private::BasicFatalLog
                  (&`void___cdecl_UE::RHI::Private::SetUniformBufferResourcesFromTables<FWorkGraphShaderBundleBinder&___ptr64,class_FD3D12UniformBuffer*___ptr64_[16],unsigned_int,0>(FWorkGraphShaderBundleBinder&___ptr64,FRHIShader_const&___ptr64,unsigned_int&___ptr64,class_FD3D12UniformBuffer*___ptr64_(&___ptr64)[16],RHIValidation::FTracker*___ptr64)'
                    ::__l28::LOG_Static,(FLogCategoryBase *)&LogRHI);
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        lVar18 = local_110;
        local_148 = local_110;
        if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.Data.AllocatorInstance.Data);
          local_148 = lVar18;
        }
      }
    }
    pFVar20 = local_130;
    lVar17 = local_148;
    uVar21 = local_150;
    local_b8.Tracker = &param_5;
    local_b8.CurrentTimeForTextureTimes = &local_138;
    local_b8.Shader = param_2;
    local_b8.Binder = param_1;
    EnumerateUniformBufferResources<FRHITexture,_UE::RHI::Private::SetUniformBufferResourcesFromTables<FWorkGraphShaderBundleBinder_&,FD3D12UniformBuffer_*_[16],unsigned_int,0>_::__l4::<lambda_1>_>
              ((FRHIUniformBuffer *)local_130,local_150,(uint *)param_2->_padding_,&local_b8);
    local_e8.Tracker = &param_5;
    local_e8.Shader = param_2;
    local_e8.Binder = param_1;
    EnumerateUniformBufferResources<FRHIShaderResourceView,_UE::RHI::Private::SetUniformBufferResourcesFromTables<FWorkGraphShaderBundleBinder_&,FD3D12UniformBuffer_*_[16],unsigned_int,0>_::__l4::<lambda_2>_>
              ((FRHIUniformBuffer *)pFVar20,uVar21,(uint *)param_2->_padding_,&local_e8);
    uVar13 = local_150;
    lVar18 = param_2->_padding_;
    lVar3 = pFVar20->_padding_;
    uVar12 = *(uint *)(lVar17 + lVar18);
    if (uVar12 != 0) {
      uVar16 = *(uint *)(lVar18 + (ulonglong)uVar12 * 4);
      puVar19 = (uint *)(lVar18 + ((ulonglong)uVar12 + 1) * 4);
      do {
        pFVar4 = *(FRHIResourceCollection **)(lVar3 + (ulonglong)(uVar16 >> 8 & 0xffff) * 8);
        if ((pFVar4 == (FRHIResourceCollection *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Resource",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                               ,0x2d,L"Null %s (resource %d bind %d) on UB Layout %s"), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FWorkGraphShaderBundleBinder::SetResourceCollection(param_1,pFVar4,uVar16 & 0xff);
        uVar16 = *puVar19;
        puVar19 = puVar19 + 1;
        pFVar20 = local_130;
        lVar17 = local_148;
        uVar21 = local_150;
      } while (uVar16 >> 0x18 == uVar13);
    }
    lVar18 = param_2->_padding_;
    pFVar2 = (((TArray<TRefCountPtr<FRHIResource>,TSizedDefaultAllocator<32>_> *)&pFVar20->_padding_
              )->AllocatorInstance).Data;
    uVar12 = *(uint *)(lVar18 + lVar17);
    if (uVar12 != 0) {
      uVar13 = *(uint *)(lVar18 + (ulonglong)uVar12 * 4);
      puVar19 = (uint *)(lVar18 + ((ulonglong)uVar12 + 1) * 4);
      do {
        lVar18 = *(longlong *)(pFVar2 + (ulonglong)(uVar13 >> 8 & 0xffff) * 8);
        if (lVar18 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Resource",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                             ,0x2d,L"Null %s (resource %d bind %d) on UB Layout %s");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar18 = 0;
LAB_145a8d6ae:
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Sampler != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12WorkGraph.cpp"
                             ,0x1ca,L"");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        else {
          lVar18 = *(longlong *)(lVar18 + 0x28 + (ulonglong)param_1->GPUIndex * 8);
          if (lVar18 == 0) goto LAB_145a8d6ae;
        }
        if (param_1->bBindlessSamplers == false) {
          local_58 = *(undefined4 *)(lVar18 + 0x68);
          uStack_54 = *(undefined4 *)(lVar18 + 0x6c);
          uStack_50 = *(undefined4 *)(lVar18 + 0x70);
          uStack_4c = *(uint *)(lVar18 + 0x74);
          uVar15 = (ulonglong)(uVar13 & 0xff);
          param_1->LocalSamplers[uVar15].ptr = *(ulong64 *)(lVar18 + 0x68);
          param_1->SamplerVersions[uVar15] = uStack_4c;
          param_1->BoundSamplerMask = param_1->BoundSamplerMask | 1L << (uVar15 & 0x3f);
        }
        uVar13 = *puVar19;
        puVar19 = puVar19 + 1;
        pFVar20 = local_130;
        uVar21 = local_150;
      } while (uVar13 >> 0x18 == local_150);
    }
    local_d0.Tracker = &param_5;
    local_d0.Shader = param_2;
    local_d0.Binder = param_1;
    EnumerateUniformBufferResources<FRHIUnorderedAccessView,_UE::RHI::Private::SetUniformBufferResourcesFromTables<FWorkGraphShaderBundleBinder_&,FD3D12UniformBuffer_*_[16],unsigned_int,0>_::__l4::<lambda_5>_>
              ((FRHIUniformBuffer *)pFVar20,uVar21,(uint *)param_2->_padding_,&local_d0);
    if (local_134 == 0) {
      *param_3 = 0;
      return;
    }
  } while( true );
}

// GetSwapChainFormat @ 145aab120

DXGI_FORMAT __cdecl UE::DXGIUtilities::GetSwapChainFormat(EPixelFormat param_1)

{
  switch(GPixelFormats[param_1].PlatformFormat) {
  case 0x1b:
    return DXGI_FORMAT_R8G8B8A8_UNORM;
  default:
    return GPixelFormats[param_1].PlatformFormat;
  case 0x35:
    return DXGI_FORMAT_R16_UNORM;
  case 0x46:
    return DXGI_FORMAT_BC1_UNORM;
  case 0x49:
    return DXGI_FORMAT_BC2_UNORM;
  case 0x4c:
    return DXGI_FORMAT_BC3_UNORM;
  case 0x5a:
    return DXGI_FORMAT_B8G8R8A8_UNORM;
  }
}

// UpdateUniformBufferConstants @ 145abbb30

void __cdecl
UE::RHICore::UpdateUniformBufferConstants
          (void *param_1,void *param_2,FRHIUniformBufferLayout *param_3,bool param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  FRDGResource *pFVar4;
  FRHIResource *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 *puVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 local_res20 [8];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90 [8];
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [24];
  
  if ((param_1 == (void *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("DestinationData != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Internal\\RHIUniformBufferDataShared.h"
                         ,0x5e,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((param_2 == (void *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("SourceData != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Internal\\RHIUniformBufferDataShared.h"
                         ,0x5f,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  memcpy(param_1,param_2,(ulonglong)param_3->ConstantBufferSize);
  if (param_4) {
    pFVar10 = (param_3->Resources).AllocatorInstance.Data;
    iVar2 = (param_3->Resources).ArrayNum;
    pFVar1 = pFVar10 + (longlong)iVar2 * 4;
    while( true ) {
      if ((param_3->Resources).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FRHIUniformBufferResource_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (pFVar10 == pFVar1) break;
      switch(pFVar10[2]) {
      case (FScriptContainerElement)0x5:
        plVar3 = *(longlong **)((ulonglong)*(ushort *)pFVar10 + (longlong)param_2);
        if (plVar3 == (longlong *)0x0) {
          puVar8 = &local_res8;
          local_res8 = 0x9ffffffff;
        }
        else {
          puVar8 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,local_90);
        }
        break;
      case (FScriptContainerElement)0x6:
        plVar3 = *(longlong **)((ulonglong)*(ushort *)pFVar10 + (longlong)param_2);
        if (plVar3 == (longlong *)0x0) {
          puVar8 = &local_res10;
          local_res10 = 0x9ffffffff;
        }
        else {
          puVar8 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3,local_88);
        }
        break;
      case (FScriptContainerElement)0x7:
        plVar3 = *(longlong **)((ulonglong)*(ushort *)pFVar10 + (longlong)param_2);
        if (plVar3 == (longlong *)0x0) {
          puVar8 = &local_a0;
          local_a0 = 0x9ffffffff;
        }
        else {
          puVar8 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3,local_60);
        }
        break;
      case (FScriptContainerElement)0x8:
        plVar3 = *(longlong **)((ulonglong)*(ushort *)pFVar10 + (longlong)param_2);
        if (plVar3 == (longlong *)0x0) {
          puVar8 = &local_res18;
          local_res18 = 0x9ffffffff;
        }
        else {
          puVar8 = (undefined8 *)(**(code **)(*plVar3 + 0x18))(plVar3,local_80);
        }
        break;
      case (FScriptContainerElement)0x9:
        pFVar4 = *(FRDGResource **)((ulonglong)*(ushort *)pFVar10 + (longlong)param_2);
        if (pFVar4 != (FRDGResource *)0x0) {
          FRDGResource::ValidateRHIAccess(pFVar4);
          pFVar5 = pFVar4->ResourceRHI;
          if (pFVar5 != (FRHIResource *)0x0) {
            puVar8 = (undefined8 *)(**(code **)(pFVar5->_padding_ + 0x30))(pFVar5,local_70);
            break;
          }
        }
        puVar8 = &local_b0;
        local_b0 = 0x9ffffffff;
        break;
      default:
        goto switchD_145abbc27_caseD_a;
      case (FScriptContainerElement)0xc:
      case (FScriptContainerElement)0xd:
      case (FScriptContainerElement)0x11:
        pFVar4 = *(FRDGResource **)((ulonglong)*(ushort *)pFVar10 + (longlong)param_2);
        if (pFVar4 != (FRDGResource *)0x0) {
          (**(code **)(pFVar4->_padding_ + 8))(pFVar4);
          FRDGResource::ValidateRHIAccess(pFVar4);
          pFVar5 = pFVar4->ResourceRHI;
          if (pFVar5 != (FRHIResource *)0x0) {
            puVar8 = (undefined8 *)(**(code **)(pFVar5->_padding_ + 0x10))(pFVar5,local_68);
            break;
          }
        }
        puVar8 = &local_a8;
        local_a8 = 0x9ffffffff;
        break;
      case (FScriptContainerElement)0xe:
      case (FScriptContainerElement)0x12:
        pFVar4 = *(FRDGResource **)((ulonglong)*(ushort *)pFVar10 + (longlong)param_2);
        if (pFVar4 != (FRDGResource *)0x0) {
          FRDGResource::ValidateRHIAccess(pFVar4);
          pFVar5 = pFVar4->ResourceRHI;
          if (pFVar5 != (FRHIResource *)0x0) {
            puVar8 = (undefined8 *)(**(code **)(pFVar5->_padding_ + 0x10))(pFVar5,local_58);
            break;
          }
        }
        puVar8 = &local_98;
        local_98 = 0x9ffffffff;
        break;
      case (FScriptContainerElement)0x18:
        plVar3 = *(longlong **)((ulonglong)*(ushort *)pFVar10 + (longlong)param_2);
        if (plVar3 == (longlong *)0x0) {
          puVar8 = &local_b8;
          local_b8 = 0x9ffffffff;
        }
        else {
          puVar8 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3,local_78);
        }
      }
      iVar9 = (int)*puVar8;
      if ((iVar9 != -1) && ((char)((ulonglong)*puVar8 >> 0x20) != '\t')) {
        *(int *)((ulonglong)*(ushort *)pFVar10 + (longlong)param_1) = iVar9;
      }
switchD_145abbc27_caseD_a:
      pFVar10 = pFVar10 + 4;
    }
  }
  return;
}

