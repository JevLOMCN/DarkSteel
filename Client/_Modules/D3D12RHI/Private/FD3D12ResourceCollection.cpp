// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 3

// FD3D12ResourceCollection @ 145a44b40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12ResourceCollection * __thiscall
FD3D12ResourceCollection::FD3D12ResourceCollection
          (FD3D12ResourceCollection *this,FD3D12Device *param_1,FD3D12Buffer *param_2,
          TArrayView<FRHIResourceCollectionMember_const_,int> *param_3,
          FD3D12ResourceCollection *param_4)

{
  TArray<FD3D12ShaderResourceView_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FD3D12RHITextureReference_*,TSizedDefaultAllocator<32>_> *pTVar2;
  char cVar3;
  FD3D12Buffer *pFVar4;
  code *pcVar5;
  TSharedPtr<FD3D12ShaderResourceView,1> *pTVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  FD3D12ResourceCollection *pFVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  FD3D12ShaderResourceView *pFVar16;
  FD3D12ViewRange local_res20;
  D3D12_SHADER_RESOURCE_VIEW_DESC local_c8;
  FD3D12ShaderResourceView *local_a0;
  FSharedReferencer<1> FStack_98;
  longlong *local_90;
  longlong *local_88;
  longlong lStack_80;
  TSharedPtr<FD3D12ShaderResourceView,1> *local_70;
  longlong *local_68;
  longlong lStack_60;
  TArrayView<FRHIResourceCollectionMember_const_,int> local_58;
  
  local_58.DataPtr = param_3->DataPtr;
  local_58.ArrayNum = param_3->ArrayNum;
  local_58._12_4_ = *(undefined4 *)&param_3->field_0xc;
  local_res20 = (FD3D12ViewRange)param_3;
  FRHIResourceCollection::FRHIResourceCollection((FRHIResourceCollection *)this,&local_58);
  this->_padding_ = (longlong)param_1;
  *(undefined4 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FD3D12ResourceCollection__6B_;
  pFVar4 = (FD3D12Buffer *)(&param_2->_padding_)[*(uint *)&param_1->field_0x8];
  (this->Buffer).Reference = pFVar4;
  if (pFVar4 != (FD3D12Buffer *)0x0) {
    (**(code **)(pFVar4->_padding_ + 8))();
  }
  local_70 = &this->BufferSRV;
  local_70->Object = (FD3D12ShaderResourceView *)0x0;
  pTVar1 = &this->AllSrvs;
  (this->BufferSRV).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar2 = &this->AllTextureReferences;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->AllSrvs).ArrayNum = 0;
  (this->AllSrvs).ArrayMax = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  plVar15 = *(longlong **)local_res20;
  local_68 = plVar15 + (longlong)*(int *)((longlong)local_res20 + 8) * 2;
  (this->AllTextureReferences).ArrayNum = 0;
  (this->AllTextureReferences).ArrayMax = 0;
  uVar13 = (ulonglong)*(uint *)&param_1->field_0x8;
  if (plVar15 != local_68) {
    do {
      lVar9 = 0;
      cVar3 = (char)plVar15[1];
      if (cVar3 == '\0') {
        lVar9 = (**(code **)(*(longlong *)*plVar15 + 0x28))();
        if (lVar9 != 0) {
          lVar9 = *(longlong *)(lVar9 + 0x160 + uVar13 * 8);
          goto LAB_145a44cc5;
        }
        if (((longlong *)*plVar15 == (longlong *)0x0) ||
           (lVar9 = (**(code **)(*(longlong *)*plVar15 + 0x48))(), lVar9 == 0)) {
          lVar9 = 0;
        }
        else {
          lVar9 = *(longlong *)(lVar9 + 0x200 + uVar13 * 8);
        }
        lVar9 = *(longlong *)(lVar9 + 0x240);
        iVar8 = (this->AllSrvs).ArrayNum;
        if (iVar8 == (this->AllSrvs).ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar1->AllocatorInstance,&(this->AllSrvs).ArrayMax);
        }
        (this->AllSrvs).ArrayNum = iVar8 + 1;
        pFVar10 = (pTVar1->AllocatorInstance).Data;
LAB_145a44d54:
        *(longlong *)(pFVar10 + (longlong)iVar8 * 8) = lVar9;
      }
      else {
        if (cVar3 == '\x01') {
          if (*plVar15 != 0) {
            lVar9 = *(longlong *)(*plVar15 + 0x160 + uVar13 * 8);
          }
LAB_145a44cc5:
          iVar8 = (this->AllTextureReferences).ArrayNum;
          if (iVar8 == (this->AllTextureReferences).ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&pTVar2->AllocatorInstance,
                               &(this->AllTextureReferences).ArrayMax);
          }
          (this->AllTextureReferences).ArrayNum = iVar8 + 1;
          pFVar10 = (pTVar2->AllocatorInstance).Data;
          goto LAB_145a44d54;
        }
        if (cVar3 == '\x02') {
          if (*plVar15 != 0) {
            lVar9 = *(longlong *)(*plVar15 + 0xd0 + uVar13 * 8);
          }
          iVar8 = (this->AllSrvs).ArrayNum;
          if (iVar8 == (this->AllSrvs).ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&pTVar1->AllocatorInstance,&(this->AllSrvs).ArrayMax);
          }
          (this->AllSrvs).ArrayNum = iVar8 + 1;
          lVar14 = lVar9 + 0x30;
          if (lVar9 == 0) {
            lVar14 = 0;
          }
          *(longlong *)((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 8) = lVar14;
        }
      }
      plVar15 = plVar15 + 2;
    } while (plVar15 != local_68);
  }
  pFVar16 = (FD3D12ShaderResourceView *)0x0;
  local_c8.field3_0x10.Buffer.FirstElement = (ulonglong)param_2->_padding_ >> 2;
  local_c8._8_8_ = 0x1688;
  local_c8.field3_0x10.Buffer.StructureByteStride = 0;
  local_c8.field3_0x10._16_8_ = &DAT_00000001;
  local_68 = *(longlong **)local_res20;
  lStack_60 = *(longlong *)((longlong)local_res20 + 8);
  local_c8.field3_0x10.Buffer.NumElements = (int)*(longlong *)((longlong)local_res20 + 8) + 1;
  local_c8.Format = DXGI_FORMAT_R32_TYPELESS;
  local_c8.ViewDimension = D3D12_SRV_DIMENSION_BUFFER;
  if (param_4 != (FD3D12ResourceCollection *)0x0) {
    pFVar16 = (param_4->BufferSRV).Object;
  }
  pTVar11 = ::operator_new(0xa8);
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)0x0;
    local_a0 = ___xmm_00000000000000000000000000000010;
    pFVar16 = (FD3D12ShaderResourceView *)&DAT_00000010;
    FStack_98.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar11->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11->WeakReferenceCount = (atomic<int>)0x1;
    pTVar11->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFD3D12ShaderResourceView___00_SharedPointerInternals__6B_
    ;
    FD3D12View::FD3D12View
              ((FD3D12View *)(pTVar11 + 1),param_1,BufferSRV,Standard,(FD3D12View *)pFVar16);
    pFVar16 = (FD3D12ShaderResourceView *)(pTVar11 + 1);
    pTVar11[9]._padding_ = 0;
    pTVar11[1]._padding_ = (longlong)&___7FD3D12ShaderResourceView__6B_;
    pTVar11[9].SharedReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)&pTVar11[9].WeakReferenceCount = 0;
    pTVar11[10]._padding_ = 0;
    if ((pFVar16 == (FD3D12ShaderResourceView *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar12 = (FD3D12ResourceCollection *)(*pcVar5)();
      return pFVar12;
    }
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
    FStack_98.ReferenceController = pTVar11;
    local_a0 = pFVar16;
  }
  pTVar6 = local_70;
  if (local_70 != (TSharedPtr<FD3D12ShaderResourceView,1> *)&local_a0) {
    local_70->Object = pFVar16;
    local_a0 = (FD3D12ShaderResourceView *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_70->SharedReferenceCount,&FStack_98);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_98.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  if ((pTVar6->Object == (FD3D12ShaderResourceView *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar12 = (FD3D12ResourceCollection *)(*pcVar5)();
    return pFVar12;
  }
  pFVar16 = pTVar6->Object;
  local_90 = &param_2->_padding_;
  if (param_2 == (FD3D12Buffer *)0x0) {
    local_90 = (longlong *)0x0;
  }
  if (local_90 == (longlong *)0x0) {
    local_88 = (longlong *)0x0;
    lStack_80 = 0;
  }
  else {
    local_88 = local_90 + 9;
    lStack_80 = local_90[0xb];
  }
  pFVar16->OffsetInBytes = 0;
  pFVar16->StrideInBytes = 0;
  pFVar16->Flags = None;
  if (local_c8.ViewDimension == D3D12_SRV_DIMENSION_BUFFER) {
    if (local_c8.Format == DXGI_FORMAT_UNKNOWN) {
      plVar15 = (longlong *)(ulonglong)local_c8.field3_0x10.Buffer.StructureByteStride;
    }
    else {
      plVar15 = (longlong *)&DAT_00000010;
      switch(local_c8.Format) {
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
        break;
      case DXGI_FORMAT_R32G32B32_TYPELESS:
      case DXGI_FORMAT_R32G32B32_FLOAT:
      case DXGI_FORMAT_R32G32B32_UINT:
      case DXGI_FORMAT_R32G32B32_SINT:
        plVar15 = (longlong *)&DAT_0000000c;
        break;
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
        plVar15 = (longlong *)&DAT_00000008;
        break;
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
        plVar15 = (longlong *)&DAT_00000004;
        break;
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
        plVar15 = (longlong *)&DAT_00000002;
        break;
      case DXGI_FORMAT_R8_TYPELESS:
      case DXGI_FORMAT_R8_UNORM:
      case DXGI_FORMAT_R8_UINT:
      case DXGI_FORMAT_R8_SNORM:
      case DXGI_FORMAT_R8_SINT:
      case DXGI_FORMAT_A8_UNORM:
        plVar15 = (longlong *)&DAT_00000001;
        break;
      default:
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Internal\\DXGIUtilities.h"
                           ,0x159,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pFVar12 = (FD3D12ResourceCollection *)(*pcVar5)();
          return pFVar12;
        }
      case DXGI_FORMAT_R1_UNORM:
        plVar15 = (longlong *)0x0;
      }
    }
    pFVar16->StrideInBytes = (uint)plVar15;
    if (((uint)plVar15 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StrideInBytes > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12SRV.cpp"
                           ,0x1e,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar12 = (FD3D12ResourceCollection *)(*pcVar5)();
      return pFVar12;
    }
    uVar13 = pFVar16->StrideInBytes * local_c8.field3_0x10.Buffer.FirstElement - local_88[0xc];
    pFVar16->OffsetInBytes = uVar13;
    if ((uVar13 % (ulonglong)pFVar16->StrideInBytes != 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(OffsetInBytes % StrideInBytes) == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12SRV.cpp"
                           ,0x21,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar12 = (FD3D12ResourceCollection *)(*pcVar5)();
      return pFVar12;
    }
  }
  else if (local_c8.ViewDimension == D3D12_SRV_DIMENSION_RAYTRACING_ACCELERATION_STRUCTURE) {
    pFVar16->OffsetInBytes = local_c8.field3_0x10.Buffer.FirstElement - local_88[0xb];
    pFVar16->StrideInBytes = 1;
  }
  pFVar16->_padding_ = CONCAT44(local_c8.ViewDimension,local_c8.Format);
  pFVar16->_padding_ = local_c8._8_8_;
  pFVar16->_padding_ = local_c8.field3_0x10.Buffer.FirstElement;
  pFVar16->_padding_ =
       CONCAT44(local_c8.field3_0x10.Buffer.StructureByteStride,
                local_c8.field3_0x10.Buffer.NumElements);
  pFVar16->_padding_ = local_c8.field3_0x10._16_8_;
  FD3D12ViewRange::FD3D12ViewRange(&local_res20,&local_c8);
  ((FD3D12ViewSubset *)&pFVar16->_padding_)->Range = local_res20;
  FD3D12View::CreateView((FD3D12View *)pFVar16,&local_90,0);
  return this;
}

// ~FD3D12ResourceCollection @ 145a48840

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall FD3D12ResourceCollection::~FD3D12ResourceCollection(FD3D12ResourceCollection *this)

{
  FScriptContainerElement *pFVar1;
  FD3D12Buffer *pFVar2;
  
  this->_padding_ = (longlong)&___7FD3D12ResourceCollection__6B_;
  pFVar1 = (this->AllTextureReferences).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AllSrvs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BufferSRV).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->Buffer).Reference;
  if (pFVar2 != (FD3D12Buffer *)0x0) {
    (**(code **)(pFVar2->_padding_ + 0x10))();
  }
  FD3D12LinkedAdapterObject<FD3D12ResourceCollection>::
  ~FD3D12LinkedAdapterObject<FD3D12ResourceCollection>
            ((FD3D12LinkedAdapterObject<FD3D12ResourceCollection> *)&this->_padding_);
  FRHIResourceCollection::~FRHIResourceCollection((FRHIResourceCollection *)this);
  return;
}

// GetBindlessHandle @ 145a68c50

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

FRHIDescriptorHandle __thiscall
FD3D12ResourceCollection::GetBindlessHandle(FD3D12ResourceCollection *this)

{
  code *pcVar1;
  bool bVar2;
  FRHIDescriptorHandle FVar3;
  FRHIDescriptorHandle in_RDX;
  
  if ((this->BufferSRV).Object == (FD3D12ShaderResourceView *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FRHIDescriptorHandle)(*pcVar1)();
      return FVar3;
    }
  }
  *(longlong *)in_RDX = ((this->BufferSRV).Object)->_padding_;
  return in_RDX;
}

