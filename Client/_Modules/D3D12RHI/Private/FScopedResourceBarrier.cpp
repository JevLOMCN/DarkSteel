// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 2

// FScopedResourceBarrier @ 1459aa7c0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FScopedResourceBarrier * __thiscall
FScopedResourceBarrier::FScopedResourceBarrier
          (FScopedResourceBarrier *this,FD3D12ContextCommon *param_1,FD3D12Resource *param_2,
          ED3D12Access param_3,ED3D12Access param_4,uint param_5)

{
  uint uVar1;
  ED3D12Access EVar2;
  FD3D12Resource *this_00;
  FD3D12ContextCommon *pFVar3;
  ID3D12BarriersForContext *pIVar4;
  FD3D12CommandList *this_01;
  code *pcVar5;
  bool bVar6;
  FScopedResourceBarrier *pFVar7;
  TArrayView<FD3D12ResidencyHandle_*_const,int> *pTVar8;
  ED3D12Access EVar9;
  FD3D12Resource *local_res8;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_38;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_28;
  
  this->Context = param_1;
  this->pResource = param_2;
  this->BeforeD3D12Access = param_3;
  this->DesiredD3D12Access = param_4;
  this->Subresource = param_5;
  this->bRestoreState = false;
  if (((((param_4 & ReadOnlyExclusiveMask) != Unknown) && ((param_4 & WritableMask) != Unknown)) ||
      (((param_4 & WriteOnlyExclusiveMask) != Unknown && ((param_4 & ReadableMask) != Unknown)))) ||
     (((param_4 >> 0x14 & 1) != 0 &&
      ((param_4 == Unknown || ((param_4 & param_4 - CPURead) != Unknown)))))) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAccess(DesiredD3D12Access)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHIPrivate.h"
                       ,0x2e6,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FScopedResourceBarrier *)(*pcVar5)();
      return pFVar7;
    }
  }
  if (this->DesiredD3D12Access == Unknown) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DesiredD3D12Access != ED3D12Access::Unknown",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHIPrivate.h"
                       ,0x2e7,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FScopedResourceBarrier *)(*pcVar5)();
      return pFVar7;
    }
  }
  EVar9 = this->BeforeD3D12Access;
  if (this->pResource->bRequiresResourceStateTracking) {
    if (EVar9 == Unknown) {
      return this;
    }
  }
  else if (EVar9 == Unknown) {
    EVar9 = this->pResource->DefaultD3D12Access;
  }
  this->BeforeD3D12Access = EVar9;
  if (((((EVar9 & ReadOnlyExclusiveMask) != Unknown) && ((EVar9 & WritableMask) != Unknown)) ||
      (((EVar9 & WriteOnlyExclusiveMask) != Unknown && ((EVar9 & ReadableMask) != Unknown)))) ||
     (((EVar9 >> 0x14 & 1) != 0 && ((EVar9 == Unknown || ((EVar9 & EVar9 - CPURead) != Unknown))))))
  {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAccess(BeforeD3D12Access)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHIPrivate.h"
                       ,0x2ed,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FScopedResourceBarrier *)(*pcVar5)();
      return pFVar7;
    }
  }
  if (this->BeforeD3D12Access == Unknown) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("BeforeD3D12Access != ED3D12Access::Unknown",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHIPrivate.h"
                       ,0x2ee,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FScopedResourceBarrier *)(*pcVar5)();
      return pFVar7;
    }
  }
  this_00 = this->pResource;
  pFVar3 = this->Context;
  uVar1 = this->Subresource;
  EVar9 = this->DesiredD3D12Access;
  EVar2 = this->BeforeD3D12Access;
  if (this_00 == (FD3D12Resource *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("pResource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandList.cpp"
                       ,0x41,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FScopedResourceBarrier *)(*pcVar5)();
      return pFVar7;
    }
  }
  pIVar4 = (pFVar3->Barriers).Ptr;
  (**(code **)((longlong)*pIVar4 + 0x20))(pIVar4,pFVar3,this_00,EVar2,EVar9,uVar1);
  if (this_00 == (FD3D12Resource *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Resource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                       ,0x1a5,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FScopedResourceBarrier *)(*pcVar5)();
      return pFVar7;
    }
  }
  if (pFVar3->CommandList == (FD3D12CommandList *)0x0) {
    (**(code **)(pFVar3->_padding_ + 8))(pFVar3);
  }
  this_01 = pFVar3->CommandList;
  local_res8 = this_00;
  if ((this_00->ReservedResourceData).Ptr == (FD3D12ReservedResourceData *)0x0) {
    pTVar8 = FD3D12Resource::GetResidencyHandles(this_00,&local_28);
    local_38.DataPtr = pTVar8->DataPtr;
    local_38.ArrayNum = pTVar8->ArrayNum;
    local_38._12_4_ = *(undefined4 *)&pTVar8->field_0xc;
    FD3D12CommandList::AddToResidencySet(this_01,&local_38);
  }
  else {
    TSet<FD3D12Resource_const_*,DefaultKeyFuncs<FD3D12Resource_const_*,0>,FDefaultSetAllocator>::
    Emplace<FD3D12Resource_const_*_const_&>
              (&(this_01->State).DeferredResidencyUpdateSet,(FD3D12Resource **)&param_4,
               (bool *)&local_res8);
  }
  this->bRestoreState = true;
  return this;
}

// ~FScopedResourceBarrier @ 1459ace30

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FScopedResourceBarrier::~FScopedResourceBarrier(FScopedResourceBarrier *this)

{
  ED3D12Access EVar1;
  uint uVar2;
  ED3D12Access EVar3;
  FD3D12ContextCommon *pFVar4;
  FD3D12Resource *this_00;
  ID3D12BarriersForContext *pIVar5;
  FD3D12CommandList *this_01;
  code *pcVar6;
  bool bVar7;
  TArrayView<FD3D12ResidencyHandle_*_const,int> *pTVar8;
  FD3D12Resource *local_res8;
  FD3D12Resource *local_res10;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_38;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_28;
  
  if (this->bRestoreState != false) {
    pFVar4 = this->Context;
    EVar1 = this->BeforeD3D12Access;
    uVar2 = this->Subresource;
    this_00 = this->pResource;
    EVar3 = this->DesiredD3D12Access;
    if (this_00 == (FD3D12Resource *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("pResource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandList.cpp"
                         ,0x41,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pIVar5 = (pFVar4->Barriers).Ptr;
    (**(code **)((longlong)*pIVar5 + 0x20))(pIVar5,pFVar4,this_00,EVar3,EVar1,uVar2);
    if (this_00 == (FD3D12Resource *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                         ,0x1a5,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (pFVar4->CommandList == (FD3D12CommandList *)0x0) {
      (**(code **)(pFVar4->_padding_ + 8))(pFVar4);
    }
    this_01 = pFVar4->CommandList;
    local_res10 = this_00;
    if ((this_00->ReservedResourceData).Ptr != (FD3D12ReservedResourceData *)0x0) {
      TSet<FD3D12Resource_const_*,DefaultKeyFuncs<FD3D12Resource_const_*,0>,FDefaultSetAllocator>::
      Emplace<FD3D12Resource_const_*_const_&>
                (&(this_01->State).DeferredResidencyUpdateSet,&local_res8,(bool *)&local_res10);
      return;
    }
    pTVar8 = FD3D12Resource::GetResidencyHandles(this_00,&local_28);
    local_38.DataPtr = pTVar8->DataPtr;
    local_38.ArrayNum = pTVar8->ArrayNum;
    local_38._12_4_ = *(undefined4 *)&pTVar8->field_0xc;
    FD3D12CommandList::AddToResidencySet(this_01,&local_38);
  }
  return;
}

