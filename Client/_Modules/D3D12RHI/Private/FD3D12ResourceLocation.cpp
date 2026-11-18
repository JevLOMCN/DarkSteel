// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 18

// GetAllocator @ 1459c1d00

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

FD3D12BuddyAllocator * __thiscall FD3D12ResourceLocation::GetAllocator(FD3D12ResourceLocation *this)

{
  code *pcVar1;
  bool bVar2;
  FD3D12BuddyAllocator *pFVar3;
  
  if (this->AllocatorType == AT_Default) {
    return (this->field3_0x18).Allocator;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("AT_Default == AllocatorType",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.h"
                     ,0x2b9,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FD3D12BuddyAllocator *)(*pcVar1)();
    return pFVar3;
  }
  return (this->field3_0x18).Allocator;
}

// InternalClear<1> @ 145a3e1c0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall FD3D12ResourceLocation::InternalClear<1>(FD3D12ResourceLocation *this)

{
  ReleaseResource(this);
  this->Type = eUndefined;
  this->AllocatorType = AT_Unknown;
  this->UnderlyingResource = (FD3D12Resource *)0x0;
  this->MappedBaseAddress = (void *)0x0;
  this->GPUVirtualAddress = 0;
  this->Size = 0;
  this->OffsetFromBaseOfResource = 0;
  (this->AllocatorData).BlockAllocatorPrivateData.FrameFence = 0;
  *(undefined8 *)((longlong)&this->AllocatorData + 8) = 0;
  (this->AllocatorData).BlockAllocatorPrivateData.ResourceHeap = (FD3D12Resource *)0x0;
  *(undefined8 *)((longlong)&this->AllocatorData + 0x18) = 0;
  *(undefined8 *)((longlong)&this->AllocatorData + 0x20) = 0;
  *(undefined8 *)((longlong)&this->AllocatorData + 0x28) = 0;
  (this->field3_0x18).Allocator = (FD3D12BuddyAllocator *)0x0;
  return;
}

// InternalClear<0> @ 145a3e210

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall FD3D12ResourceLocation::InternalClear<0>(FD3D12ResourceLocation *this)

{
  this->Type = eUndefined;
  this->AllocatorType = AT_Unknown;
  this->UnderlyingResource = (FD3D12Resource *)0x0;
  this->MappedBaseAddress = (void *)0x0;
  this->GPUVirtualAddress = 0;
  this->Size = 0;
  this->OffsetFromBaseOfResource = 0;
  (this->AllocatorData).BlockAllocatorPrivateData.FrameFence = 0;
  *(undefined8 *)((longlong)&this->AllocatorData + 8) = 0;
  (this->AllocatorData).BlockAllocatorPrivateData.ResourceHeap = (FD3D12Resource *)0x0;
  *(undefined8 *)((longlong)&this->AllocatorData + 0x18) = 0;
  *(undefined8 *)((longlong)&this->AllocatorData + 0x20) = 0;
  *(undefined8 *)((longlong)&this->AllocatorData + 0x28) = 0;
  (this->field3_0x18).Allocator = (FD3D12BuddyAllocator *)0x0;
  return;
}

// FD3D12ResourceLocation @ 145a45170

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

FD3D12ResourceLocation * __thiscall
FD3D12ResourceLocation::FD3D12ResourceLocation
          (FD3D12ResourceLocation *this,FD3D12ResourceLocation *param_1)

{
  code *pcVar1;
  bool bVar2;
  FD3D12ResourceLocation *pFVar3;
  
  if (param_1->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x59,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FD3D12ResourceLocation *)(*pcVar1)();
      return pFVar3;
    }
  }
  this->_padding_ = param_1->_padding_;
  this->Type = eUndefined;
  this->AllocatorType = AT_Unknown;
  this->Owner = (FD3D12BaseShaderResource *)0x0;
  this->UnderlyingResource = (FD3D12Resource *)0x0;
  (this->field3_0x18).Allocator = (FD3D12BuddyAllocator *)0x0;
  this->MappedBaseAddress = (void *)0x0;
  this->GPUVirtualAddress = 0;
  this->OffsetFromBaseOfResource = 0;
  this->Size = 0;
  this->bTransient = false;
  (this->AllocatorData).BlockAllocatorPrivateData.FrameFence = 0;
  *(undefined8 *)((longlong)&this->AllocatorData + 8) = 0;
  (this->AllocatorData).BlockAllocatorPrivateData.ResourceHeap = (FD3D12Resource *)0x0;
  *(undefined8 *)((longlong)&this->AllocatorData + 0x18) = 0;
  *(undefined8 *)((longlong)&this->AllocatorData + 0x20) = 0;
  *(undefined8 *)((longlong)&this->AllocatorData + 0x28) = 0;
  TransferOwnership(this,param_1);
  return this;
}

// FD3D12ResourceLocation @ 145a45210

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12ResourceLocation * __thiscall
FD3D12ResourceLocation::FD3D12ResourceLocation(FD3D12ResourceLocation *this,FD3D12Device *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->Owner = (FD3D12BaseShaderResource *)0x0;
  this->UnderlyingResource = (FD3D12Resource *)0x0;
  (this->field3_0x18).Allocator = (FD3D12BuddyAllocator *)0x0;
  this->MappedBaseAddress = (void *)0x0;
  this->GPUVirtualAddress = 0;
  this->OffsetFromBaseOfResource = 0;
  this->Size = 0;
  this->bTransient = false;
  this->Type = eUndefined;
  this->AllocatorType = AT_Unknown;
  (this->AllocatorData).BlockAllocatorPrivateData.FrameFence = 0;
  *(undefined8 *)((longlong)&this->AllocatorData + 8) = 0;
  (this->AllocatorData).BlockAllocatorPrivateData.ResourceHeap = (FD3D12Resource *)0x0;
  *(undefined8 *)((longlong)&this->AllocatorData + 0x18) = 0;
  *(undefined8 *)((longlong)&this->AllocatorData + 0x20) = 0;
  *(undefined8 *)((longlong)&this->AllocatorData + 0x28) = 0;
  return this;
}

// ~FD3D12ResourceLocation @ 145a488c0

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

void __thiscall FD3D12ResourceLocation::~FD3D12ResourceLocation(FD3D12ResourceLocation *this)

{
  longlong *plVar1;
  ResourceLocationType RVar2;
  longlong lVar3;
  FD3D12Adapter *this_00;
  FRHIPoolAllocationData *this_01;
  code *pcVar4;
  bool bVar5;
  FD3D12Resource *pFVar6;
  int iVar7;
  
  if (this->bTransient != false) {
    if ((this->_padding_ == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Parent != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                           ,0x59,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar3 = this->_padding_;
    if ((*(longlong *)(lVar3 + 0x10) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ParentAdapter != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                           ,0x41,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this_00 = *(FD3D12Adapter **)(lVar3 + 0x10);
    if (this_00->bTrackAllAllocation != false) {
      FD3D12Adapter::ReleaseTrackedAllocationData(this_00,this,false);
    }
  }
  RVar2 = this->Type;
  if (RVar2 == eStandAlone) {
    UpdateStandAloneStats(this,false);
    if ((1 < GNumExplicitGPUsForRendering) && (1 < (uint)this->UnderlyingResource->_padding_)) {
      if ((GNumExplicitGPUsForRendering < (uint)this->UnderlyingResource->_padding_) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("UnderlyingResource->GetRefCount() <= GNumExplicitGPUsForRendering",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                             ,0x518,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FThreadSafeRefCountedObject::Release((FThreadSafeRefCountedObject *)this->UnderlyingResource);
      return;
    }
    if ((int)this->UnderlyingResource->_padding_ != 1) {
      iVar7 = 0x51d;
LAB_145a7b25c:
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("UnderlyingResource->GetRefCount() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                         ,iVar7,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  else {
    if (RVar2 == eSubAllocation) {
      if (((this->field3_0x18).Allocator == (FD3D12BuddyAllocator *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Allocator != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                             ,0x52c,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (this->AllocatorType == AT_SegList) {
        FD3D12SegListAllocator::Deallocate
                  ((this->field3_0x18).SegListAllocator,this->UnderlyingResource,
                   (this->AllocatorData).BuddyAllocatorPrivateData.Offset,(uint)this->Size);
        return;
      }
      if (this->AllocatorType != AT_Pool) {
        FD3D12BuddyAllocator::Deallocate((this->field3_0x18).Allocator,this);
        return;
      }
      this_01 = *(FRHIPoolAllocationData **)((longlong)&this->AllocatorData + 0x20);
      while (this_01 != (FRHIPoolAllocationData *)0x0) {
        FRHIPoolAllocationData::RemoveAlias(this_01);
        this_01 = *(FRHIPoolAllocationData **)((longlong)&this->AllocatorData + 0x20);
      }
                    /* WARNING: Could not recover jumptable at 0x000145a7b1d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(((this->field3_0x18).Allocator)->_padding_ + 0x18))
                ((this->field3_0x18).Allocator,this,0);
      return;
    }
    if ((RVar2 == eAliased) || (RVar2 == eNodeReference)) {
      if (this->AllocatorType == AT_Pool) {
        FRHIPoolAllocationData::RemoveAlias
                  ((FRHIPoolAllocationData *)&(this->AllocatorData).BuddyAllocatorPrivateData);
      }
      if ((!this->UnderlyingResource->bDeferDelete) ||
         ((int)this->UnderlyingResource->_padding_ != 1)) {
        pFVar6 = this->UnderlyingResource;
        plVar1 = &pFVar6->_padding_;
        LOCK();
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 != 1) {
          return;
        }
        if (plVar1 == (longlong *)0x0) {
          return;
        }
        if (pFVar6 == (FD3D12Resource *)0x0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x000145a7b14c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)pFVar6->_padding_)(pFVar6,1);
        return;
      }
      pFVar6 = this->UnderlyingResource;
      goto LAB_145a7b109;
    }
    if (RVar2 != eHeapAliased) {
      return;
    }
    if ((int)this->UnderlyingResource->_padding_ != 1) {
      iVar7 = 0x55b;
      goto LAB_145a7b25c;
    }
  }
  pFVar6 = this->UnderlyingResource;
  if (!pFVar6->bDeferDelete) {
    FThreadSafeRefCountedObject::Release((FThreadSafeRefCountedObject *)pFVar6);
    return;
  }
LAB_145a7b109:
  FD3D12Resource::DeferDelete(pFVar6);
  return;
}

// Alias @ 145a51620

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __cdecl
FD3D12ResourceLocation::Alias(FD3D12ResourceLocation *param_1,FD3D12ResourceLocation *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_2->AllocatorType == AT_Pool) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Source.GetAllocatorType() != FD3D12ResourceLocation::AT_Pool",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                       ,0x4dd,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_2->UnderlyingResource == (FD3D12Resource *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Source.GetResource() != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                       ,0x4df,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  ReleaseResource(param_1);
  param_1->Type = eUndefined;
  param_1->AllocatorType = AT_Unknown;
  param_1->UnderlyingResource = (FD3D12Resource *)0x0;
  param_1->MappedBaseAddress = (void *)0x0;
  param_1->GPUVirtualAddress = 0;
  param_1->Size = 0;
  param_1->OffsetFromBaseOfResource = 0;
  (param_1->AllocatorData).BlockAllocatorPrivateData.FrameFence = 0;
  *(undefined8 *)((longlong)&param_1->AllocatorData + 8) = 0;
  (param_1->AllocatorData).BlockAllocatorPrivateData.ResourceHeap = (FD3D12Resource *)0x0;
  *(undefined8 *)((longlong)&param_1->AllocatorData + 0x18) = 0;
  *(undefined8 *)((longlong)&param_1->AllocatorData + 0x20) = 0;
  *(undefined8 *)((longlong)&param_1->AllocatorData + 0x28) = 0;
  (param_1->field3_0x18).Allocator = (FD3D12BuddyAllocator *)0x0;
  memmove(param_1,param_2,0x78);
  param_1->Type = eAliased;
  param_2->Type = eAliased;
  LOCK();
  plVar1 = &param_2->UnderlyingResource->_padding_;
  *(int *)plVar1 = (int)*plVar1 + 1;
  UNLOCK();
  return;
}

// AsStandAlone @ 145a53740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12ResourceLocation::AsStandAlone
          (FD3D12ResourceLocation *this,FD3D12Resource *param_1,ulong64 param_2,bool param_3,
          D3D12_HEAP_PROPERTIES *param_4)

{
  D3D12_CPU_PAGE_PROPERTY DVar1;
  ID3D12Resource *pIVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined1 auStackY_88 [32];
  FString local_58;
  undefined8 local_48;
  ulong64 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_88;
  this->Type = eStandAlone;
  if ((this->UnderlyingResource != (FD3D12Resource *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("UnderlyingResource == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                         ,0x5b3,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this->GPUVirtualAddress = param_1->GPUVirtualAddress;
  this->UnderlyingResource = param_1;
  this->Size = param_2;
  DVar1 = param_1->HeapType;
  if (DVar1 == 4) {
    if ((param_4 == (D3D12_HEAP_PROPERTIES *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("HeapType == D3D12_HEAP_TYPE_CUSTOM ? pCustomHeapProperties != nullptr : true"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.h"
                           ,0x176,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    DVar1 = param_4->CPUPageProperty;
  }
  if (DVar1 == D3D12_CPU_PAGE_PROPERTY_NOT_AVAILABLE) goto LAB_145a53948;
  local_48 = 0;
  bVar4 = false;
  if (param_1->HeapType == D3D12_HEAP_TYPE_CUSTOM) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("HeapType == D3D12_HEAP_TYPE_CUSTOM ? pCustomHeapProperties != nullptr : true"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.h"
                       ,0x16e,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (_DAT_00000004 != 2) {
      bVar5 = _DAT_00000004 == 3;
      goto LAB_145a53841;
    }
LAB_145a53845:
    bVar4 = true;
  }
  else {
    bVar5 = param_1->HeapType == D3D12_HEAP_TYPE_UPLOAD;
LAB_145a53841:
    if (bVar5) goto LAB_145a53845;
  }
  local_40 = param_2;
  if (bVar4) {
    local_40 = 0;
  }
  if (param_1->NumMapCalls == 0) {
    if (((param_1->Resource).Reference == (ID3D12Resource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.h"
                           ,0x11a,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((param_1->ResourceBaseAddress != (void *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ResourceBaseAddress == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.h"
                           ,0x11b,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar2 = (param_1->Resource).Reference;
    iVar6 = (**(code **)((longlong)*pIVar2 + 0x40))
                      (pIVar2,0,&local_48,&param_1->ResourceBaseAddress);
    if (iVar6 < 0) {
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      D3D12RHI::VerifyD3D12Result
                (iVar6,"Resource->Map(0, ReadRange, &ResourceBaseAddress)",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.h"
                 ,0x11c,(ID3D12Device *)0x0,&local_58);
    }
  }
  else if ((param_1->ResourceBaseAddress == (void *)0x0) &&
          (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("ResourceBaseAddress",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.h"
                              ,0x120,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  param_1->NumMapCalls = param_1->NumMapCalls + 1;
  this->MappedBaseAddress = param_1->ResourceBaseAddress;
LAB_145a53948:
  this->GPUVirtualAddress = param_1->GPUVirtualAddress;
  this->bTransient = param_3;
  UpdateStandAloneStats(this,true);
  return;
}

// Clear @ 145a545b0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall FD3D12ResourceLocation::Clear(FD3D12ResourceLocation *this)

{
  ReleaseResource(this);
  this->Type = eUndefined;
  this->AllocatorType = AT_Unknown;
  this->UnderlyingResource = (FD3D12Resource *)0x0;
  this->MappedBaseAddress = (void *)0x0;
  this->GPUVirtualAddress = 0;
  this->Size = 0;
  this->OffsetFromBaseOfResource = 0;
  (this->AllocatorData).BlockAllocatorPrivateData.FrameFence = 0;
  *(undefined8 *)((longlong)&this->AllocatorData + 8) = 0;
  (this->AllocatorData).BlockAllocatorPrivateData.ResourceHeap = (FD3D12Resource *)0x0;
  *(undefined8 *)((longlong)&this->AllocatorData + 0x18) = 0;
  *(undefined8 *)((longlong)&this->AllocatorData + 0x20) = 0;
  *(undefined8 *)((longlong)&this->AllocatorData + 0x28) = 0;
  (this->field3_0x18).Allocator = (FD3D12BuddyAllocator *)0x0;
  return;
}

// IsStandaloneOrPooledPlacedResource @ 145a6cc70

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

bool __thiscall
FD3D12ResourceLocation::IsStandaloneOrPooledPlacedResource(FD3D12ResourceLocation *this)

{
  bool bVar1;
  
  if ((this->Type == eStandAlone) || (this->AllocatorType != AT_Pool)) {
    bVar1 = false;
    if (this->Type == eStandAlone) {
      return true;
    }
  }
  else {
    bVar1 = ((this->field3_0x18).SegListAllocator)->MinPoolSize == 0;
  }
  if (bVar1) {
    return true;
  }
  return false;
}

// OnAllocationMoved @ 145a6e2a0

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

bool __thiscall
FD3D12ResourceLocation::OnAllocationMoved
          (FD3D12ResourceLocation *this,FD3D12ContextArray *param_1,FRHIPoolAllocationData *param_2,
          ED3D12Access *param_3)

{
  FD3D12Resource *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  FD3D12Heap *pFVar6;
  ulong64 uVar7;
  FD3D12Adapter *this_00;
  longlong lVar8;
  FD3D12BaseShaderResource *pFVar9;
  code *pcVar10;
  FD3D12ResourceLocation_u_24 this_01;
  bool bVar11;
  undefined1 uVar12;
  bool bVar13;
  bool bVar14;
  ED3D12Access EVar15;
  int iVar16;
  TEventRef<unsigned_int> TVar17;
  FD3D12Resource *pFVar18;
  FString *pFVar19;
  PrivateAllocatorData *pPVar20;
  FWriteBuffer *pFVar21;
  wchar_t *pwVar22;
  ED3D12Access *pEVar23;
  undefined1 auStackY_158 [32];
  undefined8 local_f4;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined8 local_dc;
  ED3D12Access *local_d0;
  FD3D12Resource *local_c8;
  FName local_c0;
  FD3D12ResourceLocation_u_24 local_b8;
  FName local_b0;
  FD3D12ContextArray *local_a8;
  FString local_a0;
  FD3D12HeapAndOffset local_90;
  FName local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  FString local_60;
  undefined4 *local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_158;
  pPVar20 = &this->AllocatorData;
  local_d0 = param_3;
  local_a8 = param_1;
  if ((param_2 != (FRHIPoolAllocationData *)pPVar20) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InNewData == &AllocationData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                          ,0x5d5,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    uVar12 = (*pcVar10)();
    return (bool)uVar12;
  }
  if (((*(byte *)((longlong)&this->AllocatorData + 0xe) & 0xf) != 2) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("AllocationData.IsAllocated()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                          ,0x5d6,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    uVar12 = (*pcVar10)();
    return (bool)uVar12;
  }
  if (((ulonglong)(pPVar20->BuddyAllocatorPrivateData).Offset != this->Size) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("AllocationData.GetSize() == Size",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                          ,0x5d7,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    uVar12 = (*pcVar10)();
    return (bool)uVar12;
  }
  if ((this->Type != eSubAllocation) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Type == ResourceLocationType::eSubAllocation",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                          ,0x5d8,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    uVar12 = (*pcVar10)();
    return (bool)uVar12;
  }
  if ((this->MappedBaseAddress != (void *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("GetMappedBaseAddress() == nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                          ,0x5d9,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    uVar12 = (*pcVar10)();
    return (bool)uVar12;
  }
  pFVar1 = this->UnderlyingResource;
  if ((this->AllocatorType != AT_Pool) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("AT_Pool == AllocatorType",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.h"
                          ,699,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    uVar12 = (*pcVar10)();
    return (bool)uVar12;
  }
  local_b8 = this->field3_0x18;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_f4 = 0;
    TVar17 = (TEventRef<unsigned_int>)&local_f4;
  }
  else {
    local_c0 = pFVar1->DebugName;
    TVar17 = FStringTrace::GetNameRef(&local_80);
  }
  uVar2 = *(undefined8 *)TVar17;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_ec = 0;
    TVar17 = (TEventRef<unsigned_int>)&local_ec;
  }
  else {
    ::FName::FName(&local_78,L"FD3D12ResourceLocation::OnAllocationMoved");
    TVar17 = FStringTrace::GetNameRef(&local_70);
  }
  uVar3 = *(undefined8 *)TVar17;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_dc = 0;
    TVar17 = (TEventRef<unsigned_int>)&local_dc;
  }
  else {
    local_e4 = 0;
    TVar17 = FStringTrace::GetNameRef(&local_68);
  }
  uVar4 = *(undefined8 *)TVar17;
  bVar11 = false;
  if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>((TLogScope<0> *)&local_50);
    bVar11 = true;
    *local_50 = (int)uVar2;
    local_50[1] = (int)uVar3;
    local_50[2] = (int)uVar4;
    *(undefined8 *)(local_48 + 0x28) = *(undefined8 *)(local_48 + 0x20);
  }
  if ((this->_padding_ == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Parent != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x59,L""), bVar13)) {
    pcVar10 = (code *)swi(3);
    uVar12 = (*pcVar10)();
    return (bool)uVar12;
  }
  lVar5 = this->_padding_;
  if ((*(longlong *)(lVar5 + 0x10) == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParentAdapter != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x41,L""), bVar13)) {
    pcVar10 = (code *)swi(3);
    uVar12 = (*pcVar10)();
    return (bool)uVar12;
  }
  this_01 = local_b8;
  if ((*(char *)(*(longlong *)(lVar5 + 0x10) + 0x6d8) == '\0') && (this->GPUVirtualAddress == 0)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  pFVar6 = (pFVar1->Heap).Reference;
  if ((local_b8.SegListAllocator)->MinPoolSize == 1) {
    if ((pFVar6 != (FD3D12Heap *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("!CurrentResource->IsPlacedResource()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                            ,0x5e8,L""), bVar14)) {
      pcVar10 = (code *)swi(3);
      uVar12 = (*pcVar10)();
      return (bool)uVar12;
    }
    uVar7 = this->GPUVirtualAddress;
    this->OffsetFromBaseOfResource =
         (ulonglong)(this->AllocatorData).BlockAllocatorPrivateData.BucketIndex;
    pFVar18 = FD3D12PoolAllocator::GetBackingResource(this_01.PoolAllocator,this);
    this->UnderlyingResource = pFVar18;
    this->GPUVirtualAddress = pFVar18->GPUVirtualAddress + this->OffsetFromBaseOfResource;
    pEVar23 = local_d0;
    if (bVar13) {
      MemoryTrace_ReallocFree(uVar7,1,0);
      MemoryTrace_ReallocAlloc
                (this->GPUVirtualAddress,(ulonglong)(pPVar20->BuddyAllocatorPrivateData).Offset,
                 (this->AllocatorData).BuddyAllocatorPrivateData.Order,1,0);
      pEVar23 = local_d0;
    }
  }
  else {
    if ((pFVar6 == (FD3D12Heap *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("CurrentResource->IsPlacedResource()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                            ,0x5f8,L""), bVar14)) {
      pcVar10 = (code *)swi(3);
      uVar12 = (*pcVar10)();
      return (bool)uVar12;
    }
    if ((this->OffsetFromBaseOfResource != 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("OffsetFromBaseOfResource == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                            ,0x5f9,L""), bVar14)) {
      pcVar10 = (code *)swi(3);
      uVar12 = (*pcVar10)();
      return (bool)uVar12;
    }
    if (bVar13) {
      MemoryTrace_Free(this->GPUVirtualAddress,1,0);
    }
    FD3D12PoolAllocator::GetBackingHeapAndAllocationOffsetInBytes
              (this_01.PoolAllocator,&local_90,this);
    pEVar23 = local_d0;
    EVar15 = CopyDest;
    *local_d0 = Unknown;
    bVar13 = pFVar1->bRequiresResourceStateTracking;
    if (bVar13 == false) {
      EVar15 = pFVar1->DefaultD3D12Access;
    }
    *local_d0 = EVar15;
    local_b0 = pFVar1->DebugName;
    local_c8 = (FD3D12Resource *)0x0;
    if ((pFVar1->_padding_ == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Parent != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                            ,0x59,L""), bVar14)) {
      pcVar10 = (code *)swi(3);
      uVar12 = (*pcVar10)();
      return (bool)uVar12;
    }
    lVar5 = pFVar1->_padding_;
    if ((*(longlong *)(lVar5 + 0x10) == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("ParentAdapter != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                            ,0x41,L""), bVar14)) {
      pcVar10 = (code *)swi(3);
      uVar12 = (*pcVar10)();
      return (bool)uVar12;
    }
    this_00 = *(FD3D12Adapter **)(lVar5 + 0x10);
    pFVar19 = ::FName::ToString(&local_b0,&local_60);
    if ((pFVar19->Data).ArrayNum == 0) {
      pwVar22 = L"";
    }
    else {
      pwVar22 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
    }
    EVar15 = *pEVar23;
    iVar16 = FD3D12Adapter::CreatePlacedResource
                       (this_00,&pFVar1->Desc,local_90.Heap,local_90.Offset,EVar15,(uint)bVar13 * 2,
                        EVar15,(D3D12_CLEAR_VALUE *)0x0,&local_c8,pwVar22,true);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    if (iVar16 < 0) {
      local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a0.Data.ArrayNum = 0;
      local_a0.Data.ArrayMax = 0;
      D3D12RHI::VerifyD3D12Result
                (iVar16,
                 "Adapter->CreatePlacedResource( CurrentResource->GetDesc(), HeapAndOffset.Heap, HeapAndOffset.Offset, OutD3D12Access, ResourceStateMode, OutD3D12Access, ClearValue, &NewResource, *Name.ToString())"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                 ,0x625,(ID3D12Device *)0x0,&local_a0);
    }
    this->UnderlyingResource = local_c8;
    this->GPUVirtualAddress = this->OffsetFromBaseOfResource + local_c8->GPUVirtualAddress;
  }
  for (lVar5 = *(longlong *)((longlong)&this->AllocatorData + 0x20); lVar5 != 0;
      lVar5 = *(longlong *)(lVar5 + 0x18)) {
    lVar8 = *(longlong *)(lVar5 + 0x28);
    *(ulong64 *)(lVar8 + 0x60) = this->OffsetFromBaseOfResource;
    *(FD3D12Resource **)(lVar8 + 0x10) = this->UnderlyingResource;
    *(ulong64 *)(lVar8 + 0x58) = this->GPUVirtualAddress;
  }
  FD3D12BaseShaderResource::ResourceRenamed(this->Owner,local_a8);
  EVar15 = *pEVar23;
  if (EVar15 == Unknown) {
    pFVar9 = this->Owner;
    pPVar20 = (PrivateAllocatorData *)&pFVar9[-2].ResourceLocation.Type;
    if ((int)(pFVar1->Desc)._padding_ != 1) {
      pPVar20 = &pFVar9[-2].ResourceLocation.AllocatorData;
    }
    if (pFVar9 == (FD3D12BaseShaderResource *)0x0) {
      pPVar20 = (PrivateAllocatorData *)&DAT_00000020;
    }
    EVar15 = (pPVar20->BuddyAllocatorPrivateData).Offset;
    *pEVar23 = EVar15;
  }
  if ((((((EVar15 & ReadOnlyExclusiveMask) != Unknown) && ((EVar15 & WritableMask) != Unknown)) ||
       (((EVar15 & WriteOnlyExclusiveMask) != Unknown && ((EVar15 & ReadableMask) != Unknown)))) ||
      (((EVar15 >> 0x14 & 1) != 0 &&
       ((EVar15 == Unknown || ((EVar15 & EVar15 - CPURead) != Unknown)))))) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidAccess(OutD3D12Access)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                          ,0x648,L""), bVar13)) {
    pcVar10 = (code *)swi(3);
    uVar12 = (*pcVar10)();
    return (bool)uVar12;
  }
  if ((*pEVar23 == Unknown) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("OutD3D12Access != ED3D12Access::Unknown",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                          ,0x649,L""), bVar13)) {
    pcVar10 = (code *)swi(3);
    uVar12 = (*pcVar10)();
    return (bool)uVar12;
  }
  if (bVar11) {
    lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar5 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar21 = *(FWriteBuffer **)(lVar5 + 0x20);
    if ((int)pFVar21 - *(int *)&pFVar21->Cursor < 1) {
      pFVar21 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar21->Cursor = '\n';
    pFVar21->Cursor = pFVar21->Cursor + 1;
    pFVar21->Committed = pFVar21->Cursor;
  }
  return true;
}

// ReferenceNode @ 145a7a880

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __cdecl
FD3D12ResourceLocation::ReferenceNode
          (FD3D12Device *param_1,FD3D12ResourceLocation *param_2,FD3D12ResourceLocation *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_3->UnderlyingResource == (FD3D12Resource *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Source.GetResource() != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                       ,0x4ec,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  ReleaseResource(param_2);
  param_2->Type = eUndefined;
  param_2->AllocatorType = AT_Unknown;
  param_2->UnderlyingResource = (FD3D12Resource *)0x0;
  param_2->MappedBaseAddress = (void *)0x0;
  param_2->GPUVirtualAddress = 0;
  param_2->Size = 0;
  param_2->OffsetFromBaseOfResource = 0;
  (param_2->AllocatorData).BlockAllocatorPrivateData.FrameFence = 0;
  *(undefined8 *)((longlong)&param_2->AllocatorData + 8) = 0;
  (param_2->AllocatorData).BlockAllocatorPrivateData.ResourceHeap = (FD3D12Resource *)0x0;
  *(undefined8 *)((longlong)&param_2->AllocatorData + 0x18) = 0;
  *(undefined8 *)((longlong)&param_2->AllocatorData + 0x20) = 0;
  *(undefined8 *)((longlong)&param_2->AllocatorData + 0x28) = 0;
  (param_2->field3_0x18).Allocator = (FD3D12BuddyAllocator *)0x0;
  memmove(param_2,param_3,0x78);
  param_2->Type = eNodeReference;
  param_2->_padding_ = (longlong)param_1;
  LOCK();
  plVar1 = &param_3->UnderlyingResource->_padding_;
  *(int *)plVar1 = (int)*plVar1 + 1;
  UNLOCK();
  if (param_3->AllocatorType == AT_Pool) {
    FRHIPoolAllocationData::AddAlias
              ((FRHIPoolAllocationData *)&(param_3->AllocatorData).BuddyAllocatorPrivateData,
               (FRHIPoolAllocationData *)&(param_2->AllocatorData).BuddyAllocatorPrivateData);
  }
  return;
}

// ReleaseResource @ 145a7b010

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

void __thiscall FD3D12ResourceLocation::ReleaseResource(FD3D12ResourceLocation *this)

{
  longlong *plVar1;
  ResourceLocationType RVar2;
  longlong lVar3;
  FD3D12Adapter *this_00;
  FRHIPoolAllocationData *this_01;
  code *pcVar4;
  bool bVar5;
  FD3D12Resource *pFVar6;
  int iVar7;
  
  if (this->bTransient != false) {
    if ((this->_padding_ == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Parent != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                           ,0x59,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar3 = this->_padding_;
    if ((*(longlong *)(lVar3 + 0x10) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ParentAdapter != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                           ,0x41,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this_00 = *(FD3D12Adapter **)(lVar3 + 0x10);
    if (this_00->bTrackAllAllocation != false) {
      FD3D12Adapter::ReleaseTrackedAllocationData(this_00,this,false);
    }
  }
  RVar2 = this->Type;
  if (RVar2 == eStandAlone) {
    UpdateStandAloneStats(this,false);
    if ((1 < GNumExplicitGPUsForRendering) && (1 < (uint)this->UnderlyingResource->_padding_)) {
      if ((GNumExplicitGPUsForRendering < (uint)this->UnderlyingResource->_padding_) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("UnderlyingResource->GetRefCount() <= GNumExplicitGPUsForRendering",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                             ,0x518,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FThreadSafeRefCountedObject::Release((FThreadSafeRefCountedObject *)this->UnderlyingResource);
      return;
    }
    if ((int)this->UnderlyingResource->_padding_ != 1) {
      iVar7 = 0x51d;
LAB_145a7b25c:
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("UnderlyingResource->GetRefCount() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                         ,iVar7,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  else {
    if (RVar2 == eSubAllocation) {
      if (((this->field3_0x18).Allocator == (FD3D12BuddyAllocator *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Allocator != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                             ,0x52c,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (this->AllocatorType == AT_SegList) {
        FD3D12SegListAllocator::Deallocate
                  ((this->field3_0x18).SegListAllocator,this->UnderlyingResource,
                   (this->AllocatorData).BuddyAllocatorPrivateData.Offset,(uint)this->Size);
        return;
      }
      if (this->AllocatorType != AT_Pool) {
        FD3D12BuddyAllocator::Deallocate((this->field3_0x18).Allocator,this);
        return;
      }
      this_01 = *(FRHIPoolAllocationData **)((longlong)&this->AllocatorData + 0x20);
      while (this_01 != (FRHIPoolAllocationData *)0x0) {
        FRHIPoolAllocationData::RemoveAlias(this_01);
        this_01 = *(FRHIPoolAllocationData **)((longlong)&this->AllocatorData + 0x20);
      }
                    /* WARNING: Could not recover jumptable at 0x000145a7b1d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(((this->field3_0x18).Allocator)->_padding_ + 0x18))
                ((this->field3_0x18).Allocator,this,0);
      return;
    }
    if ((RVar2 == eAliased) || (RVar2 == eNodeReference)) {
      if (this->AllocatorType == AT_Pool) {
        FRHIPoolAllocationData::RemoveAlias
                  ((FRHIPoolAllocationData *)&(this->AllocatorData).BuddyAllocatorPrivateData);
      }
      if ((!this->UnderlyingResource->bDeferDelete) ||
         ((int)this->UnderlyingResource->_padding_ != 1)) {
        pFVar6 = this->UnderlyingResource;
        plVar1 = &pFVar6->_padding_;
        LOCK();
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 != 1) {
          return;
        }
        if (plVar1 == (longlong *)0x0) {
          return;
        }
        if (pFVar6 == (FD3D12Resource *)0x0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x000145a7b14c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)pFVar6->_padding_)(pFVar6,1);
        return;
      }
      pFVar6 = this->UnderlyingResource;
      goto LAB_145a7b109;
    }
    if (RVar2 != eHeapAliased) {
      return;
    }
    if ((int)this->UnderlyingResource->_padding_ != 1) {
      iVar7 = 0x55b;
      goto LAB_145a7b25c;
    }
  }
  pFVar6 = this->UnderlyingResource;
  if (!pFVar6->bDeferDelete) {
    FThreadSafeRefCountedObject::Release((FThreadSafeRefCountedObject *)pFVar6);
    return;
  }
LAB_145a7b109:
  FD3D12Resource::DeferDelete(pFVar6);
  return;
}

// SetResource @ 145a7dc70

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12ResourceLocation::SetResource(FD3D12ResourceLocation *this,FD3D12Resource *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->UnderlyingResource != (FD3D12Resource *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UnderlyingResource == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                       ,0x5b3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->GPUVirtualAddress = param_1->GPUVirtualAddress;
  this->UnderlyingResource = param_1;
  return;
}

// TransferOwnership @ 145a7f750

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __cdecl
FD3D12ResourceLocation::TransferOwnership
          (FD3D12ResourceLocation *param_1,FD3D12ResourceLocation *param_2)

{
  FD3D12BaseShaderResource *pFVar1;
  FD3D12BaseShaderResource *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  if ((param_1->bTransient != false) || (param_2->bTransient != false)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Destination.bTransient && !Source.bTransient",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                       ,0x4bb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = param_1->Owner;
  pFVar2 = param_2->Owner;
  ReleaseResource(param_1);
  param_1->Type = eUndefined;
  param_1->AllocatorType = AT_Unknown;
  param_1->UnderlyingResource = (FD3D12Resource *)0x0;
  param_1->MappedBaseAddress = (void *)0x0;
  param_1->GPUVirtualAddress = 0;
  param_1->Size = 0;
  param_1->OffsetFromBaseOfResource = 0;
  (param_1->AllocatorData).BlockAllocatorPrivateData.FrameFence = 0;
  *(undefined8 *)((longlong)&param_1->AllocatorData + 8) = 0;
  (param_1->AllocatorData).BlockAllocatorPrivateData.ResourceHeap = (FD3D12Resource *)0x0;
  *(undefined8 *)((longlong)&param_1->AllocatorData + 0x18) = 0;
  *(undefined8 *)((longlong)&param_1->AllocatorData + 0x20) = 0;
  *(undefined8 *)((longlong)&param_1->AllocatorData + 0x28) = 0;
  (param_1->field3_0x18).Allocator = (FD3D12BuddyAllocator *)0x0;
  memmove(param_1,param_2,0x78);
  if (param_2->AllocatorType == AT_Pool) {
    FD3D12PoolAllocator::TransferOwnership((param_2->field3_0x18).PoolAllocator,param_2,param_1);
  }
  param_2->Type = eUndefined;
  param_2->AllocatorType = AT_Unknown;
  param_2->UnderlyingResource = (FD3D12Resource *)0x0;
  param_2->MappedBaseAddress = (void *)0x0;
  param_2->GPUVirtualAddress = 0;
  param_2->Size = 0;
  param_2->OffsetFromBaseOfResource = 0;
  (param_2->AllocatorData).BlockAllocatorPrivateData.FrameFence = 0;
  *(undefined8 *)((longlong)&param_2->AllocatorData + 8) = 0;
  (param_2->AllocatorData).BlockAllocatorPrivateData.ResourceHeap = (FD3D12Resource *)0x0;
  *(undefined8 *)((longlong)&param_2->AllocatorData + 0x18) = 0;
  *(undefined8 *)((longlong)&param_2->AllocatorData + 0x20) = 0;
  *(undefined8 *)((longlong)&param_2->AllocatorData + 0x28) = 0;
  (param_2->field3_0x18).Allocator = (FD3D12BuddyAllocator *)0x0;
  param_1->Owner = pFVar1;
  param_2->Owner = pFVar2;
  return;
}

// UnlockPoolData @ 145a809c0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall FD3D12ResourceLocation::UnlockPoolData(FD3D12ResourceLocation *this)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  
  if (this->AllocatorType == AT_Pool) {
    if (((this->AllocatorData).BlockAllocatorPrivateData.Offset & 0x100000) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Locked == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Public\\RHIPoolAllocator.h"
                         ,0x50,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    puVar1 = &(this->AllocatorData).BlockAllocatorPrivateData.Offset;
    *puVar1 = *puVar1 & 0xffefffff;
  }
  return;
}

// UpdateStandAloneStats @ 145a81e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */

void __thiscall
FD3D12ResourceLocation::UpdateStandAloneStats(FD3D12ResourceLocation *this,bool param_1)

{
  FD3D12Resource *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_D3D12UAVBufferStandAloneCount> FVar6;
  FThreadSafeStaticStat<FStat_STAT_D3D12BufferStandAloneCount> FVar7;
  FThreadSafeStaticStat<FStat_STAT_D3D12RenderTargetStandAloneCount> FVar8;
  FThreadSafeStaticStat<FStat_STAT_D3D12UAVTextureStandAloneCount> FVar9;
  FThreadSafeStaticStat<FStat_STAT_D3D12TextureStandAloneCount> FVar10;
  FThreadSafeStaticStat<FStat_STAT_D3D12BufferStandAloneAllocated> FVar11;
  FThreadSafeStaticStat<FStat_STAT_D3D12UAVBufferStandAloneAllocated> *this_00;
  ulong64 uVar12;
  uint uVar13;
  wchar_t *pwVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStackY_158 [32];
  FName local_f0;
  FName local_e8;
  FName local_e0;
  FName local_d8;
  FName local_d0;
  FName local_c8;
  FName local_c0;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  D3D12_RESOURCE_ALLOCATION_INFO local_a0;
  FD3D12ResourceDesc local_88;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  pFVar1 = this->UnderlyingResource;
  if (pFVar1->HeapType != D3D12_HEAP_TYPE_DEFAULT) {
    return;
  }
  local_88._padding_._0_4_ = (int)(pFVar1->Desc)._padding_;
  local_88._padding_._4_4_ = *(undefined4 *)((longlong)&(pFVar1->Desc)._padding_ + 4);
  local_88._padding_._0_4_ = (undefined4)(pFVar1->Desc)._padding_;
  local_88._padding_._4_4_ = *(undefined4 *)((longlong)&(pFVar1->Desc)._padding_ + 4);
  local_88._padding_ = (pFVar1->Desc)._padding_;
  local_88._padding_ = (pFVar1->Desc)._padding_;
  local_88._padding_ = (pFVar1->Desc)._padding_;
  local_88._padding_ = (pFVar1->Desc)._padding_;
  bVar16 = (int)local_88._padding_ != 1;
  local_88._padding_._0_4_ = (uint)(pFVar1->Desc)._padding_;
  local_88._padding_._4_4_ = *(undefined4 *)((longlong)&(pFVar1->Desc)._padding_ + 4);
  local_88.PixelFormat = (pFVar1->Desc).PixelFormat;
  local_88.UAVPixelFormat = (pFVar1->Desc).UAVPixelFormat;
  local_88._58_2_ = *(undefined2 *)&(pFVar1->Desc).field_0x3a;
  local_88._60_4_ = *(undefined4 *)&(pFVar1->Desc).field_0x3c;
  if ((((uint)local_88._padding_ & 1) == 0) && (((uint)local_88._padding_ & 2) == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  uVar13 = (uint)local_88._padding_ & 4;
  if (!bVar16) {
    local_88._padding_._0_4_ = (uint)local_88._padding_ & 0xffffffdf;
  }
  if ((pFVar1->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FD3D12Device::GetResourceAllocationInfoUncached
            ((FD3D12Device *)pFVar1->_padding_,&local_a0,&local_88);
  uVar12 = local_a0.SizeInBytes;
  if (!param_1) {
    uVar12 = -local_a0.SizeInBytes;
  }
  lVar15 = (ulonglong)((uint)param_1 + (uint)param_1) - 1;
  if (bVar16) {
    if (bVar3) {
      FVar8 = StatPtr_STAT_D3D12RenderTargetStandAloneCount;
      if (StatPtr_STAT_D3D12RenderTargetStandAloneCount ==
          (FThreadSafeStaticStat<FStat_STAT_D3D12RenderTargetStandAloneCount>)0x0) {
        pFVar5 = ::FName::FName(&local_d0,"STAT_D3D12RenderTargetStandAloneCount");
        FVar8 = (FThreadSafeStaticStat<FStat_STAT_D3D12RenderTargetStandAloneCount>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)
                           &StatPtr_STAT_D3D12RenderTargetStandAloneCount,*pFVar5,
                           L"RenderTarget StandAlone Allocated","STATGROUP_D3D12MemoryDetails",
                           "STATCAT_Advanced",L"D3D12RHI: Memory Details",true,false,ST_int64,false,
                           false,MCR_Invalid);
      }
      FThreadStats::AddMessage<__int64>(*(FName *)FVar8,Add,lVar15,false);
      if (uVar12 == 0) goto LAB_145a823d1;
      FVar11 = (FThreadSafeStaticStat<FStat_STAT_D3D12BufferStandAloneAllocated>)
               StatPtr_STAT_D3D12RenderTargetStandAloneAllocated;
      if (StatPtr_STAT_D3D12RenderTargetStandAloneAllocated ==
          (FThreadSafeStaticStat<FStat_STAT_D3D12RenderTargetStandAloneAllocated>)0x0) {
        pFVar5 = ::FName::FName(&local_c8,"STAT_D3D12RenderTargetStandAloneAllocated");
        pwVar14 = L"RenderTarget StandAlone Allocated";
        this_00 = (FThreadSafeStaticStat<FStat_STAT_D3D12UAVBufferStandAloneAllocated> *)
                  &StatPtr_STAT_D3D12RenderTargetStandAloneAllocated;
        goto LAB_145a8236f;
      }
    }
    else if (uVar13 == 0) {
      FVar10 = StatPtr_STAT_D3D12TextureStandAloneCount;
      if (StatPtr_STAT_D3D12TextureStandAloneCount ==
          (FThreadSafeStaticStat<FStat_STAT_D3D12TextureStandAloneCount>)0x0) {
        pFVar5 = ::FName::FName(&local_b0,"STAT_D3D12TextureStandAloneCount");
        FVar10 = (FThreadSafeStaticStat<FStat_STAT_D3D12TextureStandAloneCount>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12TextureStandAloneCount,
                            *pFVar5,L"Texture StandAlone Allocated","STATGROUP_D3D12MemoryDetails",
                            "STATCAT_Advanced",L"D3D12RHI: Memory Details",true,false,ST_int64,false
                            ,false,MCR_Invalid);
      }
      FThreadStats::AddMessage<__int64>(*(FName *)FVar10,Add,lVar15,false);
      if (uVar12 == 0) goto LAB_145a823d1;
      FVar11 = (FThreadSafeStaticStat<FStat_STAT_D3D12BufferStandAloneAllocated>)
               StatPtr_STAT_D3D12TextureStandAloneAllocated;
      if (StatPtr_STAT_D3D12TextureStandAloneAllocated ==
          (FThreadSafeStaticStat<FStat_STAT_D3D12TextureStandAloneAllocated>)0x0) {
        pFVar5 = ::FName::FName(&local_a8,"STAT_D3D12TextureStandAloneAllocated");
        pwVar14 = L"Texture StandAlone Allocated";
        this_00 = (FThreadSafeStaticStat<FStat_STAT_D3D12UAVBufferStandAloneAllocated> *)
                  &StatPtr_STAT_D3D12TextureStandAloneAllocated;
        goto LAB_145a8236f;
      }
    }
    else {
      FVar9 = StatPtr_STAT_D3D12UAVTextureStandAloneCount;
      if (StatPtr_STAT_D3D12UAVTextureStandAloneCount ==
          (FThreadSafeStaticStat<FStat_STAT_D3D12UAVTextureStandAloneCount>)0x0) {
        pFVar5 = ::FName::FName(&local_c0,"STAT_D3D12UAVTextureStandAloneCount");
        FVar9 = (FThreadSafeStaticStat<FStat_STAT_D3D12UAVTextureStandAloneCount>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12UAVTextureStandAloneCount
                           ,*pFVar5,L"UAVTexture StandAlone Allocated",
                           "STATGROUP_D3D12MemoryDetails","STATCAT_Advanced",
                           L"D3D12RHI: Memory Details",true,false,ST_int64,false,false,MCR_Invalid);
      }
      FThreadStats::AddMessage<__int64>(*(FName *)FVar9,Add,lVar15,false);
      if (uVar12 == 0) goto LAB_145a823d1;
      FVar11 = (FThreadSafeStaticStat<FStat_STAT_D3D12BufferStandAloneAllocated>)
               StatPtr_STAT_D3D12UAVTextureStandAloneAllocated;
      if (StatPtr_STAT_D3D12UAVTextureStandAloneAllocated ==
          (FThreadSafeStaticStat<FStat_STAT_D3D12UAVTextureStandAloneAllocated>)0x0) {
        pFVar5 = ::FName::FName(&local_b8,"STAT_D3D12UAVTextureStandAloneAllocated");
        pwVar14 = L"UAVTexture StandAlone Allocated";
        this_00 = (FThreadSafeStaticStat<FStat_STAT_D3D12UAVBufferStandAloneAllocated> *)
                  &StatPtr_STAT_D3D12UAVTextureStandAloneAllocated;
        goto LAB_145a8236f;
      }
    }
  }
  else if (uVar13 == 0) {
    FVar7 = StatPtr_STAT_D3D12BufferStandAloneCount;
    if (StatPtr_STAT_D3D12BufferStandAloneCount ==
        (FThreadSafeStaticStat<FStat_STAT_D3D12BufferStandAloneCount>)0x0) {
      pFVar5 = ::FName::FName(&local_e0,"STAT_D3D12BufferStandAloneCount");
      FVar7 = (FThreadSafeStaticStat<FStat_STAT_D3D12BufferStandAloneCount>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12BufferStandAloneCount,
                         *pFVar5,L"Buffer StandAlone Allocated","STATGROUP_D3D12MemoryDetails",
                         "STATCAT_Advanced",L"D3D12RHI: Memory Details",true,false,ST_int64,false,
                         false,MCR_Invalid);
    }
    FThreadStats::AddMessage<__int64>(*(FName *)FVar7,Add,lVar15,false);
    if (uVar12 == 0) goto LAB_145a823d1;
    FVar11 = StatPtr_STAT_D3D12BufferStandAloneAllocated;
    if (StatPtr_STAT_D3D12BufferStandAloneAllocated ==
        (FThreadSafeStaticStat<FStat_STAT_D3D12BufferStandAloneAllocated>)0x0) {
      pFVar5 = ::FName::FName(&local_d8,"STAT_D3D12BufferStandAloneAllocated");
      pwVar14 = L"Buffer StandAlone Allocated";
      this_00 = (FThreadSafeStaticStat<FStat_STAT_D3D12UAVBufferStandAloneAllocated> *)
                &StatPtr_STAT_D3D12BufferStandAloneAllocated;
      goto LAB_145a8236f;
    }
  }
  else {
    FVar6 = StatPtr_STAT_D3D12UAVBufferStandAloneCount;
    if (StatPtr_STAT_D3D12UAVBufferStandAloneCount ==
        (FThreadSafeStaticStat<FStat_STAT_D3D12UAVBufferStandAloneCount>)0x0) {
      pFVar5 = ::FName::FName(&local_f0,"STAT_D3D12UAVBufferStandAloneCount");
      FVar6 = (FThreadSafeStaticStat<FStat_STAT_D3D12UAVBufferStandAloneCount>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12UAVBufferStandAloneCount,
                         *pFVar5,L"UAVBuffer StandAlone Allocated","STATGROUP_D3D12MemoryDetails",
                         "STATCAT_Advanced",L"D3D12RHI: Memory Details",true,false,ST_int64,false,
                         false,MCR_Invalid);
    }
    FThreadStats::AddMessage<__int64>(*(FName *)FVar6,Add,lVar15,false);
    if (uVar12 == 0) goto LAB_145a823d1;
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_D3D12BufferStandAloneAllocated>)
             StatPtr_STAT_D3D12UAVBufferStandAloneAllocated;
    if (StatPtr_STAT_D3D12UAVBufferStandAloneAllocated ==
        (FThreadSafeStaticStat<FStat_STAT_D3D12UAVBufferStandAloneAllocated>)0x0) {
      pFVar5 = ::FName::FName(&local_e8,"STAT_D3D12UAVBufferStandAloneAllocated");
      pwVar14 = L"UAVBuffer StandAlone Allocated";
      this_00 = &StatPtr_STAT_D3D12UAVBufferStandAloneAllocated;
LAB_145a8236f:
      FVar11 = (FThreadSafeStaticStat<FStat_STAT_D3D12BufferStandAloneAllocated>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)this_00,*pFVar5,pwVar14,
                          "STATGROUP_D3D12MemoryDetails","STATCAT_Advanced",
                          L"D3D12RHI: Memory Details",true,false,ST_int64,false,false,MCR_Physical);
    }
  }
  FThreadStats::AddMessage<__int64>(*(FName *)FVar11,Add,uVar12,false);
LAB_145a823d1:
  pFVar1 = this->UnderlyingResource;
  if (param_1) {
    if ((pFVar1->_padding_ == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Parent != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                            ,0x59,L""), bVar16)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar15 = pFVar1->_padding_;
    if ((*(longlong *)(lVar15 + 0x10) == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("ParentAdapter != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                            ,0x41,L""), bVar16)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FD3D12Adapter::TrackAllocationData
              (*(FD3D12Adapter **)(lVar15 + 0x10),this,local_a0.SizeInBytes,true);
  }
  else {
    if ((pFVar1->_padding_ == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Parent != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                            ,0x59,L""), bVar16)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar15 = pFVar1->_padding_;
    if ((*(longlong *)(lVar15 + 0x10) == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("ParentAdapter != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                            ,0x41,L""), bVar16)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FD3D12Adapter::ReleaseTrackedAllocationData(*(FD3D12Adapter **)(lVar15 + 0x10),this,false);
  }
  return;
}

// AsHeapAliased @ 145a9cb10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12ResourceLocation::AsHeapAliased(FD3D12ResourceLocation *this,FD3D12Resource *param_1)

{
  ID3D12Resource *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined1 auStackY_78 [32];
  FString local_48;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_78;
  if ((param_1->HeapType == D3D12_HEAP_TYPE_READBACK) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource->GetHeapType() != D3D12_HEAP_TYPE_READBACK",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.h"
                         ,0x2d1,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this->Type = eHeapAliased;
  SetResource(this,param_1);
  this->Size = 0;
  if (param_1->HeapType == D3D12_HEAP_TYPE_CUSTOM) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HeapType == D3D12_HEAP_TYPE_CUSTOM ? pCustomHeapProperties != nullptr : true"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.h"
                       ,0x16e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((_DAT_00000004 != 2) && (_DAT_00000004 != 3)) goto LAB_145a9ccce;
  }
  else if (param_1->HeapType != D3D12_HEAP_TYPE_UPLOAD) goto LAB_145a9ccce;
  local_38 = 0;
  local_30 = 0;
  if (param_1->NumMapCalls == 0) {
    if (((param_1->Resource).Reference == (ID3D12Resource *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.h"
                           ,0x11a,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((param_1->ResourceBaseAddress != (void *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ResourceBaseAddress == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.h"
                           ,0x11b,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pIVar1 = (param_1->Resource).Reference;
    iVar4 = (**(code **)((longlong)*pIVar1 + 0x40))
                      (pIVar1,0,&local_38,&param_1->ResourceBaseAddress);
    if (iVar4 < 0) {
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      D3D12RHI::VerifyD3D12Result
                (iVar4,"Resource->Map(0, ReadRange, &ResourceBaseAddress)",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.h"
                 ,0x11c,(ID3D12Device *)0x0,&local_48);
    }
  }
  else if ((param_1->ResourceBaseAddress == (void *)0x0) &&
          (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("ResourceBaseAddress",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.h"
                              ,0x120,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  param_1->NumMapCalls = param_1->NumMapCalls + 1;
  this->MappedBaseAddress = param_1->ResourceBaseAddress;
LAB_145a9ccce:
  this->GPUVirtualAddress = param_1->GPUVirtualAddress;
  return;
}

