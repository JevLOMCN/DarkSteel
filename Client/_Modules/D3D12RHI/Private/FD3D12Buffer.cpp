// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 14

// FD3D12Buffer @ 1459a7f90

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12Buffer * __thiscall
FD3D12Buffer::FD3D12Buffer(FD3D12Buffer *this,FD3D12Device *param_1,FRHIBufferCreateDesc *param_2)

{
  longlong *plVar1;
  undefined1 *puVar2;
  
  FRHIBuffer::FRHIBuffer((FRHIBuffer *)this,param_2);
  plVar1 = &this->_padding_;
  this->_padding_ = (longlong)param_1;
  *plVar1 = (longlong)&___7FD3D12BaseShaderResource__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->_padding_,4000);
  this->_padding_ = 0;
  this->_padding_ = 0;
  FD3D12ResourceLocation::FD3D12ResourceLocation((FD3D12ResourceLocation *)&this->_padding_,param_1)
  ;
  this->_padding_ = (longlong)plVar1;
  *(undefined4 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__FRHIBuffer__;
  *plVar1 = (longlong)&_vftable__for__FD3D12BaseShaderResource__;
  (this->LockedData)._padding_ = (longlong)param_1;
  FD3D12ResourceLocation::FD3D12ResourceLocation(&(this->LockedData).ResourceLocation,param_1);
  (this->LockedData).Footprint.Format = DXGI_FORMAT_UNKNOWN;
  (this->LockedData).Footprint.Width = 0;
  (this->LockedData).Footprint.Height = 0;
  (this->LockedData).Footprint.Depth = 0;
  *(undefined8 *)&(this->LockedData).Footprint.RowPitch = 0;
  (this->LockedData).bLocked = 0;
  (this->LockedData).bLockedForReadOnly = 0;
  (this->LockedData).bHasNeverBeenLocked = 1;
  (this->LockedData).LockSize = 0;
  this->BufferAlignment = 0;
  return this;
}

// ~FD3D12Buffer @ 1459abf30

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FD3D12Buffer::~FD3D12Buffer(FD3D12Buffer *this)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  this->_padding_ = (longlong)&_vftable__for__FRHIBuffer__;
  this->_padding_ = (longlong)&_vftable__for__FD3D12BaseShaderResource__;
  if ((this->_padding_ & 0x4000) != 0) {
    lVar3 = this->_padding_;
    if (lVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      lVar3 = this->_padding_;
      if (lVar3 == 0) goto LAB_1459abfd8;
    }
    lVar3 = *(longlong *)(lVar3 + 0xb40);
    iVar5 = 0;
    if (-1 < *(int *)(lVar3 + 0x988)) {
      plVar4 = (longlong *)(lVar3 + 0x788);
      do {
        if ((longlong *)*plVar4 == &this->_padding_) {
          *plVar4 = 0;
        }
        iVar5 = iVar5 + 1;
        plVar4 = plVar4 + 1;
      } while (iVar5 <= *(int *)(lVar3 + 0x988));
    }
  }
LAB_1459abfd8:
  if (*(char *)((longlong)&this->_padding_ + 2) == '\0') {
    D3D12BufferStats::UpdateBufferStats(this,false);
  }
  FD3D12ResourceLocation::~FD3D12ResourceLocation(&(this->LockedData).ResourceLocation);
  FD3D12LinkedAdapterObject<FD3D12Buffer>::~FD3D12LinkedAdapterObject<FD3D12Buffer>
            ((FD3D12LinkedAdapterObject<FD3D12Buffer> *)&this->_padding_);
  FD3D12BaseShaderResource::~FD3D12BaseShaderResource((FD3D12BaseShaderResource *)&this->_padding_);
  RHIValidation::FResource::~FResource((FResource *)&this->_padding_);
  FRHIResource::~FRHIResource((FRHIResource *)this);
  return;
}

// AddRef @ 1459afae0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

FReturnedRefCountValue __thiscall FD3D12Buffer::AddRef(FD3D12Buffer *this)

{
  uint uVar1;
  uint *in_RDX;
  
  uVar1 = FRHIResource::AddRef((FRHIResource *)&this[-1]._padding_);
  *in_RDX = uVar1;
  return (FReturnedRefCountValue)(uint)in_RDX;
}

// GetRefCount @ 1459c2940

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

uint __thiscall FD3D12Buffer::GetRefCount(FD3D12Buffer *this)

{
  return (uint)this[-1]._padding_ & 0x3fffffff;
}

// GetResourceDescAndAlignment @ 1459c2d40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __cdecl
FD3D12Buffer::GetResourceDescAndAlignment
          (FRHIBufferCreateDesc *param_1,D3D12_RESOURCE_DESC *param_2,uint *param_3)

{
  longlong *plVar1;
  uint uVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uStack_44;
  uint uStack_14;
  
  uVar9 = 0;
  lVar4 = param_1->_padding_;
  *(ulonglong *)param_2 = CONCAT44(uStack_44,1);
  param_2->Alignment = 0;
  param_2->Width = (ulonglong)(uint)lVar4;
  param_2->Height = 1;
  param_2->DepthOrArraySize = 1;
  param_2->MipLevels = 1;
  param_2->Format = DXGI_FORMAT_UNKNOWN;
  (param_2->SampleDesc).Count = 1;
  *(undefined8 *)&(param_2->SampleDesc).Quality = 0x100000000;
  *(ulonglong *)&param_2->Flags = (ulonglong)uStack_14 << 0x20;
  param_2->Width = param_2->Width + 0xf & 0xfffffffffffffff0;
  if ((param_1->_padding_ & 8) != 0) {
    param_2->Flags = param_2->Flags | D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS;
  }
  if ((param_1->_padding_ & 0x2100) == 0) {
    param_2->Flags = param_2->Flags | D3D12_RESOURCE_FLAG_DENY_SHADER_RESOURCE;
  }
  plVar1 = &param_1->_padding_;
  if ((*plVar1 & 0x1000) != 0) {
    param_2->Flags = param_2->Flags | D3D12_RESOURCE_FLAG_ALLOW_SIMULTANEOUS_ACCESS;
  }
  if ((*plVar1 & 0x2000) != 0) {
    param_2->Flags = param_2->Flags | D3D12_RESOURCE_FLAG_RAYTRACING_ACCELERATION_STRUCTURE;
  }
  uVar6 = (uint)*plVar1;
  uVar2 = *(uint *)((longlong)&param_1->_padding_ + 4);
  if ((uVar6 >> 0x16 & 1) == 0) {
    if ((uVar2 == 0) || (((uVar6 >> 0x10 & 1) == 0 && ((uVar6 & 0x90) != 0)))) {
      uVar9 = 0x10;
    }
    else {
      uVar6 = uVar2;
      uVar8 = 0x10;
      do {
        uVar7 = uVar8;
        uVar8 = (int)uVar6 % (int)uVar7;
        uVar6 = uVar7;
      } while (uVar8 != 0);
      if (uVar7 != 0) {
        *param_3 = (int)uVar2 / (int)uVar7 << 4;
        return;
      }
    }
    *param_3 = uVar9;
    return;
  }
  if ((0x10000 < uVar2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CreateDesc.Stride <= GRHIGlobals.ReservedResources.TileSizeInBytes",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Buffer.cpp"
                         ,0x19d,
                         L"Reserved buffer stride %d must not be greater than the reserved resource tile size %d"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *param_3 = 0x10000;
  return;
}

// GetResourceInfo @ 1459c2ea0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

bool __thiscall FD3D12Buffer::GetResourceInfo(FD3D12Buffer *this,FRHIResourceInfo *param_1)

{
  FD3D12ResidencyHandle **ppFVar1;
  longlong lVar2;
  FD3D12Resource *this_00;
  undefined4 uVar3;
  ulong64 uVar4;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_48;
  undefined8 local_38;
  undefined1 uStack_30;
  uint7 uStack_2f;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined2 local_18;
  undefined1 uStack_16;
  undefined5 uStack_15;
  
  local_18 = 0x100;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  uStack_16 = 1;
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  *(ulonglong *)&param_1->Type = (ulonglong)uStack_2f << 8;
  (param_1->VRamAllocation).AllocationStart = 0;
  (param_1->VRamAllocation).AllocationSize = 0;
  param_1->IsTransient = (bool)(char)0x10100;
  param_1->bValid = (bool)(char)(0x10100 >> 8);
  param_1->bResident = (bool)(char)(0x10100 >> 0x10);
  *(undefined5 *)&param_1->field_0x23 = uStack_15;
  uVar3 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  (param_1->Name).ComparisonIndex = (FNameEntryId)*(undefined4 *)&this->_padding_;
  (param_1->Name).Number = uVar3;
  param_1->Type = *(ERHIResourceType *)((longlong)&this->_padding_ + 4);
  if ((this->_padding_ == 0) || (lVar2 = *(longlong *)(this->_padding_ + 0xb0), lVar2 == 0)) {
    uVar4 = this->_padding_;
  }
  else {
    uVar4 = (ulonglong)*(uint *)(lVar2 + 0x30) << 0x10;
  }
  (param_1->VRamAllocation).AllocationSize = uVar4;
  param_1->IsTransient = *(bool *)((longlong)&this->_padding_ + 2);
  this_00 = (FD3D12Resource *)this->_padding_;
  if (this_00 != (FD3D12Resource *)0x0) {
    if (((this_00->ReservedResourceData).Ptr != (FD3D12ReservedResourceData *)0x0) ||
       (FD3D12Resource::GetResidencyHandles(this_00,&local_48), local_48.ArrayNum == 0)) {
LAB_1459c2f8d:
      param_1->bResident = true;
      return true;
    }
    ppFVar1 = local_48.DataPtr + local_48.ArrayNum;
    for (; local_48.DataPtr != ppFVar1; local_48.DataPtr = local_48.DataPtr + 1) {
      if ((int)(*local_48.DataPtr)->_padding_ == 0) goto LAB_1459c2f8d;
    }
  }
  param_1->bResident = false;
  return true;
}

// Release @ 1459d4020

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

uint __thiscall FD3D12Buffer::Release(FD3D12Buffer *this)

{
  uint uVar1;
  
  uVar1 = FRHIResource::Release((FRHIResource *)&this[-1]._padding_);
  return uVar1;
}

// ReleaseOwnership @ 1459d4cc0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall FD3D12Buffer::ReleaseOwnership(FD3D12Buffer *this)

{
  longlong *plVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  byte bVar7;
  uint uStackX_c;
  
  if ((this->LockedData).bLocked != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!LockedData.bLocked",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Buffer.cpp"
                       ,0x16a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  plVar1 = &this->_padding_;
  uVar2 = 0;
  bVar4 = (int)*plVar1 != 0;
  if (bVar4) {
    for (; ((uint)*plVar1 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
    }
  }
  uVar5 = 0x20;
  if (bVar4) {
    uVar5 = (ulonglong)uVar2;
  }
  puVar6 = (undefined1 *)((&this->_padding_)[uVar5] + 0x1a8);
  if ((&this->_padding_)[uVar5] == 0) {
    puVar6 = (undefined1 *)0x0;
  }
  if ((longlong *)puVar6 != plVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsHeadLink()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Buffer.cpp"
                       ,0x16b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uStackX_c = uStackX_c & 0xffffff00;
  this->_padding_ = (ulonglong)uStackX_c << 0x20;
  bVar7 = (byte)GNumExplicitGPUsForRendering;
  this->_padding_ = 0;
  *(int *)((longlong)&this->_padding_ + 4) = (1 << (bVar7 & 0x1f)) + -1;
  *(undefined4 *)&this->_padding_ = 0x100000;
  if (*(char *)((longlong)&this->_padding_ + 2) == '\0') {
    D3D12BufferStats::UpdateBufferStats(this,false);
  }
  FD3D12ResourceLocation::Clear((FD3D12ResourceLocation *)&this->_padding_);
  return;
}

// Rename @ 1459d5c80

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12Buffer::Rename(FD3D12Buffer *this,FD3D12ContextArray *param_1,FD3D12ResourceLocation *param_2)

{
  FD3D12ResourceLocation::TransferOwnership((FD3D12ResourceLocation *)&this->_padding_,param_2);
  FD3D12BaseShaderResource::ResourceRenamed((FD3D12BaseShaderResource *)&this->_padding_,param_1);
  return;
}

// RenameLDAChain @ 1459d5cc0

/* WARNING: Removing unreachable block (ram,0x0001459d5e24) */
/* WARNING: Removing unreachable block (ram,0x0001459d5e2b) */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12Buffer::RenameLDAChain
          (FD3D12Buffer *this,FD3D12ContextArray *param_1,FD3D12ResourceLocation *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined1 local_res8 [8];
  
  FD3D12ResourceLocation::TransferOwnership((FD3D12ResourceLocation *)&this->_padding_,param_2);
  FD3D12BaseShaderResource::ResourceRenamed((FD3D12BaseShaderResource *)&this->_padding_,param_1);
  if (1 < GNumExplicitGPUsForRendering) {
    if ((this->_padding_ == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Parent != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                           ,0x59,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar3 = this->_padding_;
    if ((param_2->_padding_ == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Parent != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                           ,0x59,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((lVar3 != param_2->_padding_) &&
       (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1769922633605840564>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Buffer.cpp"
                           ,0x14c,"GetParentDevice() == NewLocation.GetParentDevice()"), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((this->_padding_ & 0x20000) == 0) {
      plVar12 = &this->_padding_;
      uVar10 = 0;
      bVar6 = (int)*plVar12 != 0;
      if (bVar6) {
        for (; ((uint)*plVar12 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
        }
      }
      uVar7 = 0x20;
      if (bVar6) {
        uVar7 = (ulonglong)uVar10;
      }
      plVar11 = (longlong *)0x0;
      plVar8 = (longlong *)((&this->_padding_)[uVar7] + 0x1a8);
      if ((&this->_padding_)[uVar7] == 0) {
        plVar8 = plVar11;
      }
      if ((plVar8 != plVar12) &&
         (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_1769922633605840560>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Buffer.cpp"
                             ,0x150,"IsHeadLink()"), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar10 = 0;
      if (this == (FD3D12Buffer *)0x0) {
        plVar12 = plVar11;
      }
      uVar9 = 0;
      if (plVar12 != (longlong *)0x0) {
        uVar10 = (uint)*plVar12;
        uVar4 = 0;
        if (uVar10 != 0) {
          for (; (uVar10 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
          }
        }
        uVar9 = 0x20;
        if (uVar10 != 0) {
          uVar9 = uVar4;
        }
        plVar11 = (longlong *)plVar12[(ulonglong)uVar9 + 1];
      }
      uVar10 = ~(1 << ((byte)uVar9 & 0x1f)) & uVar10;
      uVar9 = 0;
      if (uVar10 != 0) {
        for (; (uVar10 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
        }
      }
      if (uVar10 != 0) {
        uVar7 = (ulonglong)uVar9;
        for (lVar3 = plVar11[uVar7 + 0x36]; lVar3 != 0;
            lVar3 = *(longlong *)(lVar3 + 0x1b0 + uVar7 * 8)) {
          if ((*(longlong *)(lVar3 + 0xf0) == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Parent != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                                 ,0x59,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FD3D12ResourceLocation::ReferenceNode
                    (*(FD3D12Device **)(lVar3 + 0xf0),(FD3D12ResourceLocation *)(lVar3 + 0x130),
                     (FD3D12ResourceLocation *)&this->_padding_);
          lpCriticalSection = (LPCRITICAL_SECTION)(lVar3 + 0xf8);
          if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::ReportNotNullPtr();
          }
          EnterCriticalSection(lpCriticalSection);
          puVar13 = *(undefined8 **)(lVar3 + 0x120);
          iVar2 = *(int *)(lVar3 + 0x128);
          puVar1 = puVar13 + iVar2;
          while( true ) {
            if (*(int *)(lVar3 + 0x128) != iVar2) {
              local_res8[0] = 0;
              `TCheckedPointerIterator<FD3D12ShaderResourceRenameListener_*,int,0>::operator!='::
              __l2::<lambda_1>::operator()(local_res8);
            }
            if (puVar13 == puVar1) break;
            (*(code *)**(undefined8 **)*puVar13)
                      ((undefined8 *)*puVar13,param_1,lVar3 + 0xe8,lVar3 + 0x130);
            puVar13 = puVar13 + 1;
          }
          LeaveCriticalSection(lpCriticalSection);
          uVar10 = uVar10 & ~(1 << ((byte)uVar7 & 0x1f));
          uVar9 = 0;
          if (uVar10 != 0) {
            for (; (uVar10 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
            }
          }
          if (uVar10 == 0) {
            return;
          }
          uVar7 = (ulonglong)uVar9;
        }
      }
    }
  }
  return;
}

// TakeOwnership @ 1459dbda0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall FD3D12Buffer::TakeOwnership(FD3D12Buffer *this,FD3D12Buffer *param_1)

{
  longlong *plVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  byte bVar7;
  uint uStackX_c;
  
  if ((param_1->LockedData).bLocked != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Other.LockedData.bLocked",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Buffer.cpp"
                       ,0x15e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((this->LockedData).bLocked != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!LockedData.bLocked",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Buffer.cpp"
                       ,0x16a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  plVar1 = &this->_padding_;
  uVar2 = 0;
  bVar4 = (int)*plVar1 != 0;
  if (bVar4) {
    for (; ((uint)*plVar1 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
    }
  }
  uVar5 = 0x20;
  if (bVar4) {
    uVar5 = (ulonglong)uVar2;
  }
  puVar6 = (undefined1 *)((&this->_padding_)[uVar5] + 0x1a8);
  if ((&this->_padding_)[uVar5] == 0) {
    puVar6 = (undefined1 *)0x0;
  }
  if ((longlong *)puVar6 != plVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsHeadLink()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Buffer.cpp"
                       ,0x16b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uStackX_c = uStackX_c & 0xffffff00;
  this->_padding_ = (ulonglong)uStackX_c << 0x20;
  bVar7 = (byte)GNumExplicitGPUsForRendering;
  this->_padding_ = 0;
  *(int *)((longlong)&this->_padding_ + 4) = (1 << (bVar7 & 0x1f)) + -1;
  *(undefined4 *)&this->_padding_ = 0x100000;
  if (*(char *)((longlong)&this->_padding_ + 2) == '\0') {
    D3D12BufferStats::UpdateBufferStats(this,false);
  }
  FD3D12ResourceLocation::Clear((FD3D12ResourceLocation *)&this->_padding_);
  this->_padding_ = param_1->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  FD3D12ResourceLocation::TransferOwnership
            ((FD3D12ResourceLocation *)&this->_padding_,
             (FD3D12ResourceLocation *)&param_1->_padding_);
  return;
}

// UpdateAllocationTags @ 1459dda10

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall FD3D12Buffer::UpdateAllocationTags(FD3D12Buffer *this)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    plVar3 = *(longlong **)(lVar2 + 0xb0);
    if (plVar3 == (longlong *)0x0) {
      if (-1 < MemAllocChannel->Enabled) {
        MemoryTrace_UpdateAlloc(this->_padding_,1,0);
      }
    }
    else {
      plVar5 = (longlong *)*plVar3;
      lVar4 = plVar3[1];
      plVar1 = plVar5 + (int)lVar4;
      while( true ) {
        if ((int)plVar3[1] != (int)lVar4) {
          `TCheckedPointerIterator<TRefCountPtr<FD3D12Heap>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (plVar5 == plVar1) break;
        if (-1 < MemAllocChannel->Enabled) {
          MemoryTrace_UpdateAlloc(*(ulong64 *)(*plVar5 + 0x68),1,0);
        }
        plVar5 = plVar5 + 1;
      }
      if (-1 < MemAllocChannel->Enabled) {
        MemoryTrace_UpdateAlloc(*(ulong64 *)(lVar2 + 0xb0),0,0);
        return;
      }
    }
  }
  return;
}

// UploadResourceData @ 1459e0140

/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __cdecl
FD3D12Buffer::UploadResourceData
          (FD3D12CommandContext *param_1,ED3D12Access param_2,FD3D12ResourceLocation *param_3,
          FD3D12ResourceLocation *param_4,uint param_5)

{
  FD3D12Resource *this;
  FD3D12CommandList *pFVar1;
  longlong *plVar2;
  FD3D12Resource *this_00;
  code *pcVar3;
  bool bVar4;
  TArrayView<FD3D12ResidencyHandle_*_const,int> *pTVar5;
  FD3D12Resource *local_res8;
  FD3D12Resource *local_res10;
  FD3D12Resource *local_res18;
  FName local_res20;
  undefined8 in_stack_ffffffffffffff28;
  undefined4 uVar6;
  undefined8 in_stack_ffffffffffffff30;
  undefined4 uVar7;
  FD3D12Resource *local_b8;
  FName local_b0;
  FD3D12Resource *local_a8;
  FD3D12Resource *local_a0;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_98;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_88;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_78;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_68;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_58;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_48;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff30 >> 0x20);
  this = param_3->UnderlyingResource;
  if ((int)(this->Desc)._padding_ != 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Destination->GetDesc().Dimension == D3D12_RESOURCE_DIMENSION_BUFFER",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Buffer.cpp"
                       ,0x26,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (**(code **)(*(longlong *)&param_1->field_0x1c0 + 8))();
  if (!this->bRequiresResourceStateTracking) {
    (**(code **)(**(longlong **)&param_1->field_0x1b8 + 0x20))
              (*(longlong **)&param_1->field_0x1b8,param_1,this,this->InitialD3D12Access,
               CONCAT44(uVar6,0x2000),CONCAT44(uVar7,0xffffffff));
    if (*(longlong *)&param_1->field_0x188 == 0) {
      (**(code **)(*(longlong *)param_1 + 8))(param_1);
    }
    pFVar1 = *(FD3D12CommandList **)&param_1->field_0x188;
    local_b8 = this;
    if ((this->ReservedResourceData).Ptr == (FD3D12ReservedResourceData *)0x0) {
      pTVar5 = FD3D12Resource::GetResidencyHandles(this,&local_68);
      local_98.DataPtr = pTVar5->DataPtr;
      local_98.ArrayNum = pTVar5->ArrayNum;
      local_98._12_4_ = *(undefined4 *)&pTVar5->field_0xc;
      FD3D12CommandList::AddToResidencySet(pFVar1,&local_98);
    }
    else {
      TSet<FD3D12Resource_const_*,DefaultKeyFuncs<FD3D12Resource_const_*,0>,FDefaultSetAllocator>::
      Emplace<FD3D12Resource_const_*_const_&>
                (&(pFVar1->State).DeferredResidencyUpdateSet,&local_res10,(bool *)&local_b8);
    }
  }
  plVar2 = *(longlong **)&param_1->field_0x1b8;
  pcVar3 = *(code **)(*plVar2 + 0x28);
  if (*(longlong *)&param_1->field_0x188 == 0) {
    (**(code **)(*(longlong *)param_1 + 8))(param_1);
  }
  (*pcVar3)(plVar2,*(undefined8 *)&param_1->field_0x188,&param_1->field_0x38);
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  local_b0 = this->DebugName;
  FD3D12CommandContext::CopyBufferRegionChecked
            (param_1,(this->Resource).Reference,&local_b0,param_3->OffsetFromBaseOfResource,
             (param_4->UnderlyingResource->Resource).Reference,&local_res20,
             param_4->OffsetFromBaseOfResource,param_5);
  if (param_2 != CopyDest) {
    (**(code **)(**(longlong **)&param_1->field_0x1b8 + 0x20))
              (*(longlong **)&param_1->field_0x1b8,param_1,this,0x2000,param_2,0xffffffff);
    if (*(longlong *)&param_1->field_0x188 == 0) {
      (**(code **)(*(longlong *)param_1 + 8))(param_1);
    }
    pFVar1 = *(FD3D12CommandList **)&param_1->field_0x188;
    local_a8 = this;
    if ((this->ReservedResourceData).Ptr == (FD3D12ReservedResourceData *)0x0) {
      pTVar5 = FD3D12Resource::GetResidencyHandles(this,&local_58);
      local_88.DataPtr = pTVar5->DataPtr;
      local_88.ArrayNum = pTVar5->ArrayNum;
      local_88._12_4_ = *(undefined4 *)&pTVar5->field_0xc;
      FD3D12CommandList::AddToResidencySet(pFVar1,&local_88);
    }
    else {
      TSet<FD3D12Resource_const_*,DefaultKeyFuncs<FD3D12Resource_const_*,0>,FDefaultSetAllocator>::
      Emplace<FD3D12Resource_const_*_const_&>
                (&(pFVar1->State).DeferredResidencyUpdateSet,&local_res8,(bool *)&local_a8);
    }
  }
  this_00 = param_4->UnderlyingResource;
  if (this_00 == (FD3D12Resource *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Resource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                       ,0x1a5,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(longlong *)&param_1->field_0x188 == 0) {
    (**(code **)(*(longlong *)param_1 + 8))(param_1);
  }
  pFVar1 = *(FD3D12CommandList **)&param_1->field_0x188;
  local_a0 = this_00;
  if ((this_00->ReservedResourceData).Ptr == (FD3D12ReservedResourceData *)0x0) {
    pTVar5 = FD3D12Resource::GetResidencyHandles(this_00,&local_48);
    local_78.DataPtr = pTVar5->DataPtr;
    local_78.ArrayNum = pTVar5->ArrayNum;
    local_78._12_4_ = *(undefined4 *)&pTVar5->field_0xc;
    FD3D12CommandList::AddToResidencySet(pFVar1,&local_78);
  }
  else {
    TSet<FD3D12Resource_const_*,DefaultKeyFuncs<FD3D12Resource_const_*,0>,FDefaultSetAllocator>::
    Emplace<FD3D12Resource_const_*_const_&>
              (&(pFVar1->State).DeferredResidencyUpdateSet,&local_res18,(bool *)&local_a0);
  }
  FD3D12ContextCommon::ConditionalSplitCommandList((FD3D12ContextCommon *)param_1);
  if ((!this->bRequiresResourceStateTracking) && (this->DefaultD3D12Access != param_2)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Destination->RequiresResourceStateTracking() || (Destination->GetDefaultAccess() == InDestinationD3D12Access)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Buffer.cpp"
                       ,0x47,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FD3D12ResourceLocation::UnlockPoolData(param_3);
  return;
}

// UploadResourceDataViaCopyQueue @ 1459e0470

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

TRefCountPtr<FD3D12SyncPoint> __thiscall
FD3D12Buffer::UploadResourceDataViaCopyQueue
          (FD3D12Buffer *this,FD3D12CommandContext *param_1,FResourceArrayUploadInterface *param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint *puVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  FD3D12SyncPoint *pFVar6;
  ID3D12GraphicsCommandList *pIVar7;
  FD3D12Resource *this_00;
  FD3D12CommandList *this_01;
  code *pcVar8;
  longlong lVar9;
  bool bVar10;
  int iVar11;
  TRefCountPtr<FD3D12SyncPoint> TVar12;
  void *_Dst;
  void *_Src;
  FD3D12ContextCommon *this_02;
  TArrayView<FD3D12ResidencyHandle_*_const,int> *pTVar13;
  undefined8 *puVar14;
  FD3D12Device *this_03;
  longlong *in_R9;
  ulonglong _Size;
  bool bVar15;
  FD3D12Resource *local_res8;
  ulonglong local_res10;
  FD3D12CommandContext *local_res18;
  longlong *local_res20;
  undefined8 *local_158;
  FD3D12Device *local_150;
  FD3D12SyncPoint *local_148;
  char local_140;
  FD3D12ContextCommon *local_138;
  TArray<FD3D12Payload_*,TSizedDefaultAllocator<32>_> local_130;
  FD3D12Resource *local_120;
  FD3D12ResourceLocation *local_118;
  FString local_110;
  FString local_100;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_e8;
  FD3D12ResourceLocation local_d8;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_58;
  
  bVar15 = -1 < CpuChannel->Enabled;
  local_res18 = (FD3D12CommandContext *)param_2;
  local_res20 = in_R9;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId117,"UploadResourceDataViaCopyQueue",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Buffer.cpp"
               ,0x75);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId117);
  }
  bVar10 = IsInRHIThread();
  if (((!bVar10) && (bVar10 = IsInRenderingThread(), !bVar10)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInRHIThread() || IsInRenderingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Buffer.cpp"
                          ,0x78,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    TVar12.Reference = (FD3D12SyncPoint *)(*pcVar8)();
    return (TRefCountPtr<FD3D12SyncPoint>)TVar12.Reference;
  }
  if (((this->_padding_ & 6) != 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!(GetUsage() & EBufferUsageFlags::AnyDynamic)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Buffer.cpp"
                          ,0x79,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    TVar12.Reference = (FD3D12SyncPoint *)(*pcVar8)();
    return (TRefCountPtr<FD3D12SyncPoint>)TVar12.Reference;
  }
  uVar4 = (uint)this->_padding_;
  _Size = (ulonglong)uVar4;
  if ((this->_padding_ == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Parent != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x59,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    TVar12.Reference = (FD3D12SyncPoint *)(*pcVar8)();
    return (TRefCountPtr<FD3D12SyncPoint>)TVar12.Reference;
  }
  FD3D12ResourceLocation::FD3D12ResourceLocation(&local_d8,(FD3D12Device *)this->_padding_);
  if ((this->_padding_ == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Parent != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x59,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    TVar12.Reference = (FD3D12SyncPoint *)(*pcVar8)();
    return (TRefCountPtr<FD3D12SyncPoint>)TVar12.Reference;
  }
  _Dst = FD3D12FastAllocator::Allocate
                   ((FD3D12FastAllocator *)(this->_padding_ + 0x1550),uVar4,4,&local_d8);
  if ((_Dst == (void *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("pData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Buffer.cpp"
                          ,0x80,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    TVar12.Reference = (FD3D12SyncPoint *)(*pcVar8)();
    return (TRefCountPtr<FD3D12SyncPoint>)TVar12.Reference;
  }
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId130,"CopyToUploadMemory",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Buffer.cpp"
               ,0x82);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId130);
  }
  _Src = (void *)(**(code **)(*in_R9 + 8))();
  local_res10 = _Size;
  memcpy(_Dst,_Src,_Size);
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  this_03 = (FD3D12Device *)local_d8._padding_;
  if (((FD3D12Device *)local_d8._padding_ == (FD3D12Device *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Parent != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x59,L""), this_03 = (FD3D12Device *)local_d8._padding_, bVar10)) {
    pcVar8 = (code *)swi(3);
    TVar12.Reference = (FD3D12SyncPoint *)(*pcVar8)();
    return (TRefCountPtr<FD3D12SyncPoint>)TVar12.Reference;
  }
  *(undefined8 *)param_1 = 0;
  local_158 = (undefined8 *)0x0;
  local_150 = this_03;
  FD3D12SyncPoint::Create((ED3D12SyncPointType)&local_148,(wchar_t *)0x0);
  local_140 = 0;
  this_02 = FD3D12Device::ObtainContext(this_03,Copy);
  local_138 = this_02;
  if (local_158 != (undefined8 *)0x0) {
    pFVar5 = (this_02->BatchedSyncPoints).ToWait.AllocatorInstance.Data;
    if (((pFVar5 <= (FScriptContainerElement *)&local_158) &&
        ((FScriptContainerElement *)&local_158 <
         pFVar5 + (longlong)(this_02->BatchedSyncPoints).ToWait.ArrayMax * 8)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar8 = (code *)swi(3);
      TVar12.Reference = (FD3D12SyncPoint *)(*pcVar8)();
      return (TRefCountPtr<FD3D12SyncPoint>)TVar12.Reference;
    }
    iVar11 = (this_02->BatchedSyncPoints).ToWait.ArrayNum;
    piVar1 = &(this_02->BatchedSyncPoints).ToWait.ArrayMax;
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)&this_02->BatchedSyncPoints,piVar1);
    }
    (this_02->BatchedSyncPoints).ToWait.ArrayNum = iVar11 + 1;
    pFVar5 = (this_02->BatchedSyncPoints).ToWait.AllocatorInstance.Data;
    *(undefined8 *)(pFVar5 + (longlong)iVar11 * 8) = 0;
    *(undefined8 **)(pFVar5 + (longlong)iVar11 * 8) = local_158;
    if (local_158 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_158 + 1) = *(int *)(local_158 + 1) + 1;
      UNLOCK();
      piVar1 = (int *)(local_158 + 1);
      LOCK();
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        puVar14 = local_158;
        if (piVar1 == (int *)0x0) {
          puVar14 = (undefined8 *)0x0;
        }
        if (puVar14 != (undefined8 *)0x0) {
          (**(code **)*puVar14)(puVar14,1);
        }
      }
    }
  }
  pFVar6 = *(FD3D12SyncPoint **)param_1;
  local_140 = '\x01';
  if (pFVar6 != local_148) {
    *(FD3D12SyncPoint **)param_1 = local_148;
    if (local_148 != (FD3D12SyncPoint *)0x0) {
      LOCK();
      *(int *)&local_148->_padding_ = (int)local_148->_padding_ + 1;
      UNLOCK();
    }
    if (pFVar6 != (FD3D12SyncPoint *)0x0) {
      plVar2 = &pFVar6->_padding_;
      LOCK();
      lVar9 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if (((int)lVar9 == 1) && (plVar2 != (longlong *)0x0)) {
        (**(code **)pFVar6->_padding_)(pFVar6,1);
      }
    }
  }
  local_118 = (FD3D12ResourceLocation *)&this->_padding_;
  if (*(ulonglong *)(this->_padding_ + 0x60) < _Size + this->_padding_) {
    UE::RHI::Breadcrumbs::Private::GetSafeBreadcrumbPath<FD3D12CommandContext_&>
              (&local_110,local_res18);
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("ResourceLocation.GetOffsetFromBaseOfResource() + BufferSize <= ResourceLocation.GetResource()->GetDesc().Width"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Buffer.cpp"
                        ,0x8e,L"\nBreadcrumbs: %s");
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      TVar12.Reference = (FD3D12SyncPoint *)(*pcVar8)();
      return (TRefCountPtr<FD3D12SyncPoint>)TVar12.Reference;
    }
  }
  if ((ulonglong)((local_d8.UnderlyingResource)->Desc)._padding_ <
      local_res10 + local_d8.OffsetFromBaseOfResource) {
    UE::RHI::Breadcrumbs::Private::GetSafeBreadcrumbPath<FD3D12CommandContext_&>
              (&local_100,local_res18);
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("SrcResourceLoc.GetOffsetFromBaseOfResource() + BufferSize <= SrcResourceLoc.GetResource()->GetDesc().Width"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Buffer.cpp"
                        ,0x8f,L"\nBreadcrumbs: %s");
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      TVar12.Reference = (FD3D12SyncPoint *)(*pcVar8)();
      return (TRefCountPtr<FD3D12SyncPoint>)TVar12.Reference;
    }
  }
  if (this_02->CommandList == (FD3D12CommandList *)0x0) {
    (**(code **)(this_02->_padding_ + 8))(this_02);
  }
  pIVar7 = (this_02->CommandList->Interfaces).CopyCommandList.Reference;
  puVar3 = &(this_02->CommandList->State).NumCommands;
  *puVar3 = *puVar3 + 1;
  (**(code **)((longlong)*pIVar7 + 0x78))
            (pIVar7,*(undefined8 *)(this->_padding_ + 0x20),this->_padding_,
             ((local_d8.UnderlyingResource)->Resource).Reference,local_d8.OffsetFromBaseOfResource,
             local_res10);
  this_00 = (FD3D12Resource *)this->_padding_;
  if ((this_00 == (FD3D12Resource *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Resource",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                          ,0x1a5,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    TVar12.Reference = (FD3D12SyncPoint *)(*pcVar8)();
    return (TRefCountPtr<FD3D12SyncPoint>)TVar12.Reference;
  }
  if (this_02->CommandList == (FD3D12CommandList *)0x0) {
    (**(code **)(this_02->_padding_ + 8))(this_02);
  }
  this_01 = this_02->CommandList;
  local_120 = this_00;
  if ((this_00->ReservedResourceData).Ptr == (FD3D12ReservedResourceData *)0x0) {
    pTVar13 = FD3D12Resource::GetResidencyHandles(this_00,&local_58);
    local_e8.DataPtr = pTVar13->DataPtr;
    local_e8.ArrayNum = pTVar13->ArrayNum;
    local_e8._12_4_ = *(undefined4 *)&pTVar13->field_0xc;
    FD3D12CommandList::AddToResidencySet(this_01,&local_e8);
  }
  else {
    TSet<FD3D12Resource_const_*,DefaultKeyFuncs<FD3D12Resource_const_*,0>,FDefaultSetAllocator>::
    Emplace<FD3D12Resource_const_*_const_&>
              (&(this_01->State).DeferredResidencyUpdateSet,&local_res8,(bool *)&local_120);
  }
  if ((local_140 == '\0') &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("bSyncPointRetrieved",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.cpp"
                          ,0x23f,
                          L"The copy sync point must be retrieved before the end of the scope."),
     bVar10)) {
    pcVar8 = (code *)swi(3);
    TVar12.Reference = (FD3D12SyncPoint *)(*pcVar8)();
    return (TRefCountPtr<FD3D12SyncPoint>)TVar12.Reference;
  }
  FD3D12ContextCommon::SignalSyncPoint(this_02,local_148);
  local_130.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_130.ArrayNum = 0;
  local_130.ArrayMax = 0;
  FD3D12ContextCommon::Finalize(this_02,&local_130);
  FD3D12Device::ReleaseContext(local_150,this_02);
  FD3D12DynamicRHI::SubmitPayloads(FD3D12DynamicRHI::SingleD3DRHI,&local_130);
  if (local_130.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.AllocatorInstance.Data);
  }
  if (local_148 != (FD3D12SyncPoint *)0x0) {
    plVar2 = &local_148->_padding_;
    LOCK();
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (((int)lVar9 == 1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)local_148->_padding_)(local_148,1);
    }
  }
  FD3D12ResourceLocation::UnlockPoolData(local_118);
  (**(code **)(*local_res20 + 0x18))();
  FD3D12ResourceLocation::~FD3D12ResourceLocation(&local_d8);
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (TRefCountPtr<FD3D12SyncPoint>)(FD3D12SyncPoint *)param_1;
}

