// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 6

// FD3D12TransientResourceHeapAllocator @ 145a8ff40

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12TransientResourceHeapAllocator * __thiscall
FD3D12TransientResourceHeapAllocator::FD3D12TransientResourceHeapAllocator
          (FD3D12TransientResourceHeapAllocator *this,FD3D12TransientHeapCache *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FD3D12TransientResourceHeapAllocator *pFVar4;
  
  FRHITransientResourceHeapAllocator::FRHITransientResourceHeapAllocator
            ((FRHITransientResourceHeapAllocator *)this,(FRHITransientHeapCache *)param_1);
  if (*(longlong *)&param_1->field_0xc0 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentAdapter != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x41,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FD3D12TransientResourceHeapAllocator *)(*pcVar2)();
      return pFVar4;
    }
  }
  lVar1 = *(longlong *)&param_1->field_0xc0;
  this->_padding_ = lVar1;
  this->_padding_ = (longlong)&___7FD3D12TransientResourceHeapAllocator__6B_;
  if (lVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentAdapter != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x41,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FD3D12TransientResourceHeapAllocator *)(*pcVar2)();
      return pFVar4;
    }
  }
  lVar1 = this->_padding_;
  if (GNumExplicitGPUsForRendering == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GPUIndex < GNumExplicitGPUsForRendering",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                       ,0x103,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FD3D12TransientResourceHeapAllocator *)(*pcVar2)();
      return pFVar4;
    }
  }
  this->AllocationInfoQueryDevice = *(FD3D12Device **)(lVar1 + 0x800);
  return this;
}

// operator() @ 145a97290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
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

FRHITransientBuffer * __thiscall
`FD3D12TransientResourceHeapAllocator::CreateBuffer'::__l2::<lambda_1>::operator()
          (void *this,FResourceInitializer *param_1)

{
  FRHITransientResourceHeapAllocator *this_00;
  FD3D12TransientHeap *pFVar1;
  FRHIBufferCreateDesc *pFVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  FRHITransientHeapAllocation *pFVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  code *pcVar8;
  bool bVar9;
  FRHITransientBuffer *pFVar10;
  undefined1 auStackY_118 [32];
  <lambda_1> local_e8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  this_00 = *(FRHITransientResourceHeapAllocator **)this;
  pFVar1 = (FD3D12TransientHeap *)param_1->Heap;
  pFVar2 = *(FRHIBufferCreateDesc **)((longlong)this + 0x10);
  uVar3 = **(ulong64 **)((longlong)this + 0x20);
  uVar4 = param_1->Hash;
  if (this_00[1]._padding_ == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentAdapter != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x41,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pFVar10 = (FRHITransientBuffer *)(*pcVar8)();
      return pFVar10;
    }
  }
  local_e8.Adapter = (FD3D12Adapter *)this_00[1]._padding_;
  pFVar5 = param_1->Allocation;
  local_e8.Allocation.Heap = pFVar5->Heap;
  local_e8.Allocation.Size = pFVar5->Size;
  local_e8.Allocation.Offset = pFVar5->Offset;
  local_e8.Allocation.AlignmentPad = pFVar5->AlignmentPad;
  local_e8.Allocation._28_4_ = *(undefined4 *)&pFVar5->field_0x1c;
  puVar6 = *(undefined8 **)((longlong)this + 8);
  local_e8.Desc._0_8_ = *puVar6;
  local_e8.Desc.Alignment = puVar6[1];
  local_e8.Desc.Width = puVar6[2];
  local_e8.Desc._24_8_ = puVar6[3];
  local_e8.Desc._32_8_ = puVar6[4];
  local_e8.Desc._40_8_ = puVar6[5];
  local_e8.Desc._48_8_ = puVar6[6];
  plVar7 = *(longlong **)((longlong)this + 0x10);
  local_e8.CreateDesc._padding_ = *plVar7;
  local_e8.CreateDesc._padding_ = plVar7[1];
  local_e8.CreateDesc.DebugName = (wchar_t *)plVar7[2];
  local_e8.CreateDesc.InitialData = (FResourceArrayUploadInterface *)plVar7[3];
  local_e8.CreateDesc._32_8_ = plVar7[4];
  local_e8.CreateDesc.ClassName = *(FName *)(plVar7 + 5);
  local_e8.CreateDesc.OwnerName = *(FName *)(plVar7 + 6);
  local_e8.InDebugName = (wchar_t *)**(undefined8 **)((longlong)this + 0x18);
  local_e8.Heap = pFVar1;
  pFVar10 = FRHITransientResourceHeapAllocator::
            CreateTransientResource<FRHITransientBuffer,__FD3D12TransientResourceHeapAllocator::CreateBuffer_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>,FRHIBufferCreateDesc>
                      (this_00,&local_e8,uVar4,uVar3,pFVar2);
  return pFVar10;
}

// operator() @ 145a973f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

FRHITransientTexture * __thiscall
`FD3D12TransientResourceHeapAllocator::CreateTexture'::__l2::<lambda_1>::operator()
          (void *this,FResourceInitializer *param_1)

{
  FRHITransientResourceHeapAllocator *this_00;
  FRHITextureDesc *pFVar1;
  undefined8 *puVar2;
  FD3D12TransientHeap *pFVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  undefined8 *puVar6;
  FRHITransientHeapAllocation *pFVar7;
  longlong *plVar8;
  code *pcVar9;
  bool bVar10;
  FRHITransientTexture *pFVar11;
  undefined1 auStackY_158 [32];
  <lambda_1> local_118;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  this_00 = *(FRHITransientResourceHeapAllocator **)this;
  pFVar1 = *(FRHITextureDesc **)((longlong)this + 0x18);
  puVar2 = *(undefined8 **)((longlong)this + 8);
  pFVar3 = (FD3D12TransientHeap *)param_1->Heap;
  uVar4 = **(ulong64 **)((longlong)this + 0x28);
  uVar5 = param_1->Hash;
  if (this_00[1]._padding_ == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("ParentAdapter != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                        ,0x41,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      pFVar11 = (FRHITransientTexture *)(*pcVar9)();
      return pFVar11;
    }
  }
  local_118.Adapter = (FD3D12Adapter *)this_00[1]._padding_;
  puVar6 = *(undefined8 **)((longlong)this + 0x20);
  local_118.DynamicRHI = (FD3D12DynamicRHI *)*puVar2;
  pFVar7 = param_1->Allocation;
  local_118.Allocation.Heap = pFVar7->Heap;
  local_118.Allocation.Size = pFVar7->Size;
  local_118.Allocation.Offset = pFVar7->Offset;
  local_118.Allocation.AlignmentPad = pFVar7->AlignmentPad;
  local_118.Allocation._28_4_ = *(undefined4 *)&pFVar7->field_0x1c;
  plVar8 = *(longlong **)((longlong)this + 0x10);
  local_118.Desc._padding_ = *plVar8;
  local_118.Desc._padding_ = plVar8[1];
  local_118.Desc._padding_ = plVar8[2];
  local_118.Desc._padding_ = plVar8[3];
  local_118.Desc._padding_ = plVar8[4];
  local_118.Desc._padding_ = plVar8[5];
  local_118.Desc._padding_ = plVar8[6];
  local_118.Desc._56_8_ = plVar8[7];
  local_118.Heap = pFVar3;
  FRHITextureDesc::FRHITextureDesc
            (&local_118.InCreateInfo,*(FRHITextureDesc **)((longlong)this + 0x18));
  local_118.InDebugName = (wchar_t *)*puVar6;
  pFVar11 = FRHITransientResourceHeapAllocator::
            CreateTransientResource<FRHITransientTexture,__FD3D12TransientResourceHeapAllocator::CreateTexture_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>,FRHITextureDesc>
                      (this_00,&local_118,uVar5,uVar4,pFVar1);
  if (local_118.InCreateInfo.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_118.InCreateInfo.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  return pFVar11;
}

// CreateBuffer @ 145a9e8a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FRHITransientBuffer * __thiscall
FD3D12TransientResourceHeapAllocator::CreateBuffer
          (FD3D12TransientResourceHeapAllocator *this,FRHIBufferDesc *param_1,wchar_t *param_2,
          FRHITransientAllocationFences *param_3)

{
  undefined8 *puVar1;
  FRHITransientBuffer *pFVar2;
  undefined1 auStackY_148 [32];
  uint local_108 [2];
  ulonglong local_100;
  wchar_t *local_f8 [2];
  code *local_e8 [2];
  wchar_t *local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  FRHIBufferCreateDesc local_a8;
  D3D12_RESOURCE_DESC local_70;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_a8._padding_._0_4_ = param_1->Size;
  local_a8._padding_._4_4_ = param_1->Stride;
  local_a8._padding_._0_4_ = param_1->Usage;
  local_a8._padding_._4_4_ = param_1->GPUMask;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_d0 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  local_c8 = 0x40000;
  local_a8.InitialState = Discard;
  local_a8.InitAction = Default;
  local_a8.ClassName.ComparisonIndex.Value = 0;
  local_a8.ClassName.Number = 0;
  uStack_b4 = 0;
  local_a8.InitialData = (FResourceArrayUploadInterface *)0x0;
  local_70.Flags = D3D12_RESOURCE_FLAG_NONE;
  local_70._52_4_ = 0;
  local_a8.OwnerName.ComparisonIndex.Value = 0;
  local_a8.OwnerName.Number = 0;
  local_108[0] = 0;
  local_70.Dimension = D3D12_RESOURCE_DIMENSION_UNKNOWN;
  local_70._4_4_ = 0;
  local_70.Alignment = 0;
  local_70.Width = 0;
  local_70.Height = 0;
  local_70.DepthOrArraySize = 0;
  local_70.MipLevels = 0;
  local_70.Format = DXGI_FORMAT_UNKNOWN;
  local_70.SampleDesc.Count = 0;
  local_70.SampleDesc.Quality = 0;
  local_70.Layout = D3D12_TEXTURE_LAYOUT_UNKNOWN;
  local_f8[0] = param_2;
  local_d8 = param_2;
  local_a8.DebugName = param_2;
  FD3D12Buffer::GetResourceDescAndAlignment(&local_a8,&local_70,local_108);
  local_108[0] = 0x10000;
  local_100 = local_70.Width + 0xffff & 0xffffffffffff0000;
  local_e8[0] = (code *)0x0;
  puVar1 = FMemory::Malloc(0x30,8);
  uStack_c0 = SUB84(puVar1,0);
  uStack_bc = (undefined4)((ulonglong)puVar1 >> 0x20);
  *puVar1 = &UE::Core::Private::Function::
             TFunction_OwnedObject<`FD3D12TransientResourceHeapAllocator::CreateBuffer'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  puVar1[1] = this;
  puVar1[2] = &local_70;
  puVar1[3] = &local_a8;
  puVar1[4] = local_f8;
  puVar1[5] = &local_100;
  if (puVar1 + 1 != (undefined8 *)0x0) {
    local_e8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FD3D12TransientResourceHeapAllocator::CreateBuffer'::__l2::<lambda_1>,FRHITransientBuffer_*,FRHITransientHeap::FResourceInitializer_const_&>
                  ::Call;
  }
  pFVar2 = FRHITransientResourceHeapAllocator::CreateBufferInternal
                     ((FRHITransientResourceHeapAllocator *)this,(FRHIBufferDesc *)&local_a8,
                      local_f8[0],param_3,(uint)local_100,local_108[0],
                      (TFunction<FRHITransientBuffer_*___cdecl(FRHITransientHeap::FResourceInitializer_const_&)>
                       *)local_e8);
  return pFVar2;
}

// CreateTexture @ 145aa02b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRHITransientTexture * __thiscall
FD3D12TransientResourceHeapAllocator::CreateTexture
          (FD3D12TransientResourceHeapAllocator *this,FRHITextureDesc *param_1,wchar_t *param_2,
          FRHITransientAllocationFences *param_3)

{
  uint uVar1;
  FRHITransientTexture *pFVar2;
  undefined1 auStackY_f8 [32];
  wchar_t *local_b8;
  FD3D12DynamicRHI *local_b0;
  code *local_a8 [5];
  undefined8 *local_80;
  D3D12_RESOURCE_ALLOCATION_INFO local_78;
  FD3D12ResourceDesc local_68;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_b0 = FD3D12DynamicRHI::SingleD3DRHI;
  local_b8 = param_2;
  (**(code **)(FD3D12DynamicRHI::SingleD3DRHI->_padding_ + 0x5f8))
            (FD3D12DynamicRHI::SingleD3DRHI,&local_68,param_1);
  FD3D12Device::GetResourceAllocationInfo(this->AllocationInfoQueryDevice,&local_78,&local_68);
  uVar1 = (uint)local_78.Alignment;
  local_a8[0] = (code *)0x0;
  local_78.Alignment = local_78.Alignment & 0xffffffff;
  if (uVar1 < 0x10000) {
    local_78.Alignment = 0x10000;
  }
  local_80 = FMemory::Malloc(0x38,8);
  *local_80 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FD3D12TransientResourceHeapAllocator::CreateTexture'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_80[1] = this;
  local_80[2] = &local_b0;
  local_80[3] = &local_68;
  local_80[4] = param_1;
  local_80[5] = &local_b8;
  local_80[6] = &local_78;
  if (local_80 + 1 != (undefined8 *)0x0) {
    local_a8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FD3D12TransientResourceHeapAllocator::CreateTexture'::__l2::<lambda_1>,FRHITransientTexture_*,FRHITransientHeap::FResourceInitializer_const_&>
                  ::Call;
  }
  pFVar2 = FRHITransientResourceHeapAllocator::CreateTextureInternal
                     ((FRHITransientResourceHeapAllocator *)this,param_1,local_b8,param_3,
                      local_78.SizeInBytes,(uint)local_78.Alignment,
                      (TFunction<FRHITransientTexture_*___cdecl(FRHITransientHeap::FResourceInitializer_const_&)>
                       *)local_a8);
  return pFVar2;
}

// SupportsResourceType @ 145aba100

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

bool __thiscall
FD3D12TransientResourceHeapAllocator::SupportsResourceType
          (FD3D12TransientResourceHeapAllocator *this,ERHITransientResourceType param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_1 != Texture) && (param_1 != Buffer)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12TransientResourceAllocator.h"
                       ,0x33,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
    return false;
  }
  return true;
}

