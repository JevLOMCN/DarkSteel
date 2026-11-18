// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 7

// FD3D12DefaultBufferPool @ 1459a93d0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12DefaultBufferPool * __thiscall
FD3D12DefaultBufferPool::FD3D12DefaultBufferPool
          (FD3D12DefaultBufferPool *this,FD3D12Device *param_1,FD3D12MultiBuddyAllocator *param_2)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  FD3D12DefaultBufferPool *pFVar5;
  
  this->_padding_ = (longlong)param_1;
  uVar1 = *(uint *)((longlong)&param_2->_padding_ + 4);
  uVar2 = (uint)param_2->_padding_;
  *(uint *)&this->_padding_ = uVar2;
  *(uint *)((longlong)&this->_padding_ + 4) = uVar1;
  if ((uVar1 & uVar2) != 0) {
    this->Allocator = param_2;
    return this;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("NodeMask.Intersects(VisibiltyMask)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                     ,0x9e,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FD3D12DefaultBufferPool *)(*pcVar3)();
    return pFVar5;
  }
  this->Allocator = param_2;
  return this;
}

// AllocDefaultResource @ 1459b00c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12DefaultBufferPool::AllocDefaultResource
          (FD3D12DefaultBufferPool *this,D3D12_HEAP_TYPE param_1,D3D12_RESOURCE_DESC *param_2,
          EBufferUsageFlags param_3,ED3D12ResourceStateMode param_4,ED3D12Access param_5,
          uint param_6,wchar_t *param_7,FD3D12ResourceLocation *param_8)

{
  EResourceAllocationStrategy EVar1;
  D3D12_RESOURCE_FLAGS DVar2;
  longlong lVar3;
  FD3D12MultiBuddyAllocator *pFVar4;
  FD3D12Heap *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FD3D12BuddyAllocator *pFVar9;
  undefined1 auStackY_128 [32];
  FD3D12Resource *local_c8;
  wchar_t *local_c0;
  FD3D12Adapter *local_b8;
  FD3D12Resource *local_b0;
  FString local_a8;
  FString local_98;
  FD3D12ResourceDesc local_88;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_c0 = param_7;
  if ((this->_padding_ == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar3 = this->_padding_;
  if ((*(longlong *)(lVar3 + 0x10) == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_b8 = *(FD3D12Adapter **)(lVar3 + 0x10);
  FD3D12ResourceLocation::Clear(param_8);
  if (param_2->Width != 0) {
    if (param_1 == D3D12_HEAP_TYPE_READBACK) {
      if ((param_5 != CopyDest) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCreateD3D12Access == ED3D12Access::CopyDest",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                             ,0x551,L""), bVar7)) {
code_r0x0001459b025e:
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else if (param_1 == D3D12_HEAP_TYPE_UPLOAD) {
      if ((param_5 != GenericRead) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCreateD3D12Access == ED3D12Access::GenericRead",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                             ,0x555,L""), bVar7)) goto code_r0x0001459b025e;
    }
    else if ((param_3 >> 0xd & 1) != 0) {
      if ((param_4 != SingleState) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InResourceStateMode == ED3D12ResourceStateMode::SingleState",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                             ,0x55e,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (((param_5 & (BVHWrite|BVHRead)) == Unknown) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("EnumHasAnyFlags(InCreateD3D12Access, ED3D12Access::BVHRead | ED3D12Access::BVHWrite)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                             ,0x55f,L""), bVar7)) goto code_r0x0001459b025e;
    }
    pFVar4 = this->Allocator;
    if (param_2->Width < (ulonglong)*(uint *)((longlong)&pFVar4->_padding_ + 4)) {
      EVar1 = pFVar4->AllocationStrategy;
      DVar2 = (D3D12_RESOURCE_FLAGS)pFVar4->_padding_;
      if (EVar1 == kPlacedResource) {
        if (((DVar2 & param_2->Flags & D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS) ==
             D3D12_RESOURCE_FLAG_NONE) &&
           ((((param_1 != D3D12_HEAP_TYPE_READBACK && (param_6 < 0x101)) && (param_4 != MultiState))
            && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Desc.Flags & Allocator->GetInitConfig().ResourceFlags & D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS) != 0 || InHeapType == D3D12_HEAP_TYPE_READBACK || Alignment > kD3D12ManualSubAllocationAlignment || InResourceStateMode == ED3D12ResourceStateMode::MultiState"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                                   ,0x56e,L""), bVar7)))) {
code_r0x0001459b02e9:
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else if ((param_2->Flags != DVar2) &&
              (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Desc.Flags == Allocator->GetInitConfig().ResourceFlags",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                                  ,0x573,L""), bVar7)) goto code_r0x0001459b02e9;
      bVar7 = FD3D12MultiBuddyAllocator::TryAllocate
                        (this->Allocator,(uint)param_2->Width,param_6,param_8);
      if (bVar7) {
        if (EVar1 != kPlacedResource) {
          return;
        }
        if ((param_8->UnderlyingResource != (FD3D12Resource *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("ResourceLocation.GetResource() == nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                               ,0x57a,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar9 = FD3D12ResourceLocation::GetAllocator(param_8);
        if ((pFVar9->AllocationStrategy != kPlacedResource) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("AllocationStrategy == EResourceAllocationStrategy::kPlacedResource",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.h"
                               ,0xb5,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (pFVar9->BackingHeap).Reference;
        pFVar9 = FD3D12ResourceLocation::GetAllocator(param_8);
        local_88._padding_ = param_2->Width;
        local_88._padding_._0_4_ = param_2->Height;
        local_88._padding_._4_2_ = param_2->DepthOrArraySize;
        local_88._padding_._6_2_ = param_2->MipLevels;
        local_88._padding_ = *(longlong *)param_2;
        local_88._padding_ = param_2->Alignment;
        local_88._padding_._0_4_ = param_2->Format;
        local_88._padding_._4_4_ = (param_2->SampleDesc).Count;
        local_88._padding_ = *(longlong *)&(param_2->SampleDesc).Quality;
        local_88._padding_ = *(longlong *)&param_2->Flags;
        local_c8 = (FD3D12Resource *)0x0;
        local_88.PixelFormat = PF_Unknown;
        local_88.UAVPixelFormat = PF_Unknown;
        local_88._58_6_ = 0;
        iVar8 = FD3D12Adapter::CreatePlacedResource
                          (local_b8,&local_88,pFVar5,
                           (ulonglong)(param_8->AllocatorData).BuddyAllocatorPrivateData.Offset *
                           (ulonglong)pFVar9->MinBlockSize,param_5,MultiState,Unknown,
                           (D3D12_CLEAR_VALUE *)0x0,&local_c8,local_c0,true);
        if (iVar8 < 0) {
          local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_a8.Data.ArrayNum = 0;
          local_a8.Data.ArrayMax = 0;
          D3D12RHI::VerifyD3D12Result
                    (iVar8,
                     "Adapter->CreatePlacedResource( Desc, BackingHeap, HeapOffset, InCreateD3D12Access, ED3D12ResourceStateMode::MultiState, ED3D12Access::Unknown, nullptr, &NewResource, Name)"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                     ,0x58a,(ID3D12Device *)0x0,&local_a8);
        }
        FD3D12ResourceLocation::SetResource(param_8,local_c8);
        return;
      }
    }
    local_b0 = (FD3D12Resource *)0x0;
    iVar8 = FD3D12Adapter::CreateBuffer
                      (local_b8,param_1,(FRHIGPUMask)(uint)this->_padding_,
                       (FRHIGPUMask)*(uint *)((longlong)&this->_padding_ + 4),param_5,param_4,
                       param_5,param_2->Width,&local_b0,local_c0,param_2->Flags);
    if (iVar8 < 0) {
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.Data.ArrayNum = 0;
      local_98.Data.ArrayMax = 0;
      D3D12RHI::VerifyD3D12Result
                (iVar8,
                 "Adapter->CreateBuffer( InHeapType, GetGPUMask(), GetVisibilityMask(), InCreateD3D12Access, InResourceStateMode, InCreateD3D12Access, Desc.Width, &NewResource, Name, Desc.Flags)"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                 ,0x5a5,(ID3D12Device *)0x0,&local_98);
    }
    FD3D12ResourceLocation::AsStandAlone
              (param_8,local_b0,param_2->Width,false,(D3D12_HEAP_PROPERTIES *)0x0);
  }
  return;
}

// CleanUpAllocations @ 1459b5490

void __thiscall
FD3D12DefaultBufferPool::CleanUpAllocations(FD3D12DefaultBufferPool *this,ulong64 param_1)

{
  FD3D12MultiBuddyAllocator::CleanUpAllocations(this->Allocator,param_1);
  return;
}

// GetResourceAllocationStrategy @ 1459c2b90

EResourceAllocationStrategy __cdecl
FD3D12DefaultBufferPool::GetResourceAllocationStrategy
          (D3D12_RESOURCE_FLAGS param_1,ED3D12ResourceStateMode param_2,uint param_3)

{
  EResourceAllocationStrategy EVar1;
  
  EVar1 = kPlacedResource;
  if (param_3 < 0x101) {
    if (param_2 == Default) {
      param_2 = ((param_1 & D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS) != D3D12_RESOURCE_FLAG_NONE)
                + SingleState;
    }
    EVar1 = (EResourceAllocationStrategy)(param_2 != MultiState);
  }
  return EVar1;
}

// GetResourceAllocatorInitConfig @ 1459c2bc0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

FD3D12ResourceInitConfig * __cdecl
FD3D12DefaultBufferPool::GetResourceAllocatorInitConfig
          (FD3D12ResourceInitConfig *__return_storage_ptr__,D3D12_HEAP_TYPE param_1,
          D3D12_RESOURCE_FLAGS param_2,EBufferUsageFlags param_3)

{
  code *pcVar1;
  bool bVar2;
  FD3D12ResourceInitConfig *pFVar3;
  
  __return_storage_ptr__->HeapType = param_1;
  __return_storage_ptr__->ResourceFlags = param_2;
  if ((param_3 >> 0xd & 1) == 0) {
    if (param_1 == D3D12_HEAP_TYPE_READBACK) {
      __return_storage_ptr__->InitialD3D12Access = CopyDest;
    }
    else if ((param_3 & UnorderedAccess) == None) {
      __return_storage_ptr__->InitialD3D12Access = GenericRead;
    }
    else {
      if ((param_2 & D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS) == D3D12_RESOURCE_FLAG_NONE) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InResourceFlags & D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                           ,0x4f7,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar3 = (FD3D12ResourceInitConfig *)(*pcVar1)();
          return pFVar3;
        }
      }
      __return_storage_ptr__->InitialD3D12Access = UAVMask;
    }
  }
  else {
    if (param_3 != AccelerationStructure) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InBufferUsage == EBufferUsageFlags::AccelerationStructure",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                         ,0x4eb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FD3D12ResourceInitConfig *)(*pcVar1)();
        return pFVar3;
      }
    }
    if ((param_2 >> 8 & 1) == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("EnumHasAnyFlags(InResourceFlags, D3D12_RESOURCE_FLAG_RAYTRACING_ACCELERATION_STRUCTURE)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                         ,0x4ec,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FD3D12ResourceInitConfig *)(*pcVar1)();
        return pFVar3;
      }
    }
    __return_storage_ptr__->InitialD3D12Access = BVHWrite|BVHRead;
  }
  __return_storage_ptr__->HeapFlags = D3D12_HEAP_FLAG_ALLOW_ONLY_BUFFERS;
  if (((char)param_3 < '\0') &&
     ((param_2 & D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS) == D3D12_RESOURCE_FLAG_NONE)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InResourceFlags & D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                       ,0x502,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FD3D12ResourceInitConfig *)(*pcVar1)();
      return pFVar3;
    }
  }
  return __return_storage_ptr__;
}

// SupportsAllocation @ 1459db8b0

bool __thiscall
FD3D12DefaultBufferPool::SupportsAllocation
          (FD3D12DefaultBufferPool *this,D3D12_HEAP_TYPE param_1,D3D12_RESOURCE_FLAGS param_2,
          EBufferUsageFlags param_3,ED3D12ResourceStateMode param_4,uint param_5)

{
  FD3D12MultiBuddyAllocator *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  EResourceAllocationStrategy EVar5;
  int iVar6;
  
  iVar6 = 0x2000;
  if ((param_3 & AccelerationStructure) == None) {
    if (param_1 != D3D12_HEAP_TYPE_READBACK) {
      if ((param_3 & UnorderedAccess) == None) {
        iVar6 = 0x200000;
      }
      else {
        if ((param_2 & D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS) == D3D12_RESOURCE_FLAG_NONE) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InResourceFlags & D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                             ,0x4f7,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
        }
        iVar6 = 0xc00;
      }
    }
  }
  else {
    if (param_3 != AccelerationStructure) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InBufferUsage == EBufferUsageFlags::AccelerationStructure",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                         ,0x4eb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    if ((param_2 >> 8 & 1) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("EnumHasAnyFlags(InResourceFlags, D3D12_RESOURCE_FLAG_RAYTRACING_ACCELERATION_STRUCTURE)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                         ,0x4ec,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar6 = 0x30000;
  }
  if (((char)param_3 < '\0') &&
     ((param_2 & D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS) == D3D12_RESOURCE_FLAG_NONE)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InResourceFlags & D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                       ,0x502,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  EVar5 = kPlacedResource;
  if (param_5 < 0x101) {
    if (param_4 == Default) {
      param_4 = ((param_2 & D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS) != D3D12_RESOURCE_FLAG_NONE)
                + SingleState;
    }
    EVar5 = (EResourceAllocationStrategy)(param_4 != MultiState);
  }
  pFVar1 = this->Allocator;
  if (((((D3D12_HEAP_TYPE)pFVar1->_padding_ == param_1) &&
       (*(int *)((longlong)&pFVar1->_padding_ + 4) == 0xc0)) &&
      ((D3D12_RESOURCE_FLAGS)pFVar1->_padding_ == param_2)) &&
     ((*(int *)((longlong)&pFVar1->_padding_ + 4) == iVar6 && (pFVar1->AllocationStrategy == EVar5))
     )) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

// UpdateMemoryStats @ 1459def10

void __thiscall
FD3D12DefaultBufferPool::UpdateMemoryStats
          (FD3D12DefaultBufferPool *this,uint *param_1,uint *param_2,uint *param_3,uint *param_4,
          uint *param_5,uint *param_6,uint *param_7)

{
  FD3D12MultiBuddyAllocator::UpdateMemoryStats
            (this->Allocator,param_1,param_2,param_3,param_5,param_6,param_7);
  return;
}

