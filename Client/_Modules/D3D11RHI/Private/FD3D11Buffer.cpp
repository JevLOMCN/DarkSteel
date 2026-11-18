// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D11RHI
// Functions: 7

// ~FD3D11Buffer @ 14596ebe0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FD3D11Buffer::~FD3D11Buffer(FD3D11Buffer *this)

{
  ID3D11Buffer *pIVar1;
  code *pcVar2;
  bool bVar3;
  FLLMPauseScope local_18;
  
  pIVar1 = (this->Resource).Reference;
  this->_padding_ = (longlong)&___7FD3D11Buffer__6B_;
  if (pIVar1 != (ID3D11Buffer *)0x0) {
    UE::RHICore::UpdateGlobalBufferStats
              ((FRHIBufferDesc *)&this->_padding_,-(ulonglong)(uint)this->_padding_);
    FLLMPauseScope::FLLMPauseScope
              (&local_18,GraphicsPlatform,false,-(ulonglong)(uint)this->_padding_,Platform,None);
    MemoryTrace_Free((ulong64)pIVar1,1,0);
    FLLMPauseScope::~FLLMPauseScope(&local_18);
  }
  pIVar1 = (this->Resource).Reference;
  if (pIVar1 != (ID3D11Buffer *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  if (this->_padding_ != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasLinkedViews()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Public\\D3D11Resources.h"
                       ,0x88,
                       L"All linked views must have been removed before the underlying resource can be deleted."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  RHIValidation::FResource::~FResource((FResource *)&this->_padding_);
  FRHIResource::~FRHIResource((FRHIResource *)this);
  return;
}

// AddRef @ 145971ac0

uint __thiscall FD3D11Buffer::AddRef(FD3D11Buffer *this)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  
  LOCK();
  plVar1 = &this->_padding_;
  lVar3 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + 1;
  UNLOCK();
  if ((int)(uint)lVar3 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(OldPacked & DeletingBit) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x99,L"Resource is being deleted.");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
  }
  uVar5 = ((uint)lVar3 & 0x3fffffff) + 1;
  if (0x3ffffffe < uVar5) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRefs < NumRefsMask",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x9b,L"Reference count has overflowed.");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
  }
  return uVar5;
}

// GetRefCount @ 1459831d0

uint __thiscall FD3D11Buffer::GetRefCount(FD3D11Buffer *this)

{
  return (uint)this->_padding_ & 0x3fffffff;
}

// GetResourceInfo @ 145983500

bool __thiscall FD3D11Buffer::GetResourceInfo(FD3D11Buffer *this,FRHIResourceInfo *param_1)

{
  undefined4 uVar1;
  uint7 uStack_2f;
  undefined5 uStack_15;
  
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  *(ulonglong *)&param_1->Type = (ulonglong)uStack_2f << 8;
  (param_1->VRamAllocation).AllocationStart = 0;
  (param_1->VRamAllocation).AllocationSize = 0;
  param_1->IsTransient = (bool)(char)0x10100;
  param_1->bValid = (bool)(char)(0x10100 >> 8);
  param_1->bResident = (bool)(char)(0x10100 >> 0x10);
  *(undefined5 *)&param_1->field_0x23 = uStack_15;
  uVar1 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  (param_1->Name).ComparisonIndex = (FNameEntryId)*(undefined4 *)&this->_padding_;
  (param_1->Name).Number = uVar1;
  param_1->Type = *(ERHIResourceType *)((longlong)&this->_padding_ + 4);
  (param_1->VRamAllocation).AllocationSize = (ulonglong)(uint)this->_padding_;
  return true;
}

// Release @ 145996f40

uint __thiscall FD3D11Buffer::Release(FD3D11Buffer *this)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  
  LOCK();
  plVar1 = &this->_padding_;
  lVar3 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)(uint)lVar3 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(OldPacked & DeletingBit) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa2,L"Resource is being deleted.");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
  }
  uVar5 = ((uint)lVar3 & 0x3fffffff) - 1;
  if ((int)uVar5 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRefs >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa4,L"Reference count has underflowed.");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewValue >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x53,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
  }
  else if (uVar5 == 0) {
    FRHIResource::MarkForDelete((FRHIResource *)this);
  }
  return uVar5;
}

// ReleaseOwnership @ 145996f50

void __thiscall FD3D11Buffer::ReleaseOwnership(FD3D11Buffer *this)

{
  ID3D11Buffer *pIVar1;
  byte bVar2;
  uint uStackX_c;
  FLLMPauseScope local_18;
  
  uStackX_c = uStackX_c & 0xffffff00;
  this->_padding_ = (ulonglong)uStackX_c << 0x20;
  bVar2 = (byte)GNumExplicitGPUsForRendering;
  this->_padding_ = 0;
  *(int *)((longlong)&this->_padding_ + 4) = (1 << (bVar2 & 0x1f)) + -1;
  *(undefined4 *)&this->_padding_ = 0x100000;
  pIVar1 = (this->Resource).Reference;
  if (pIVar1 != (ID3D11Buffer *)0x0) {
    UE::RHICore::UpdateGlobalBufferStats((FRHIBufferDesc *)&this->_padding_,0);
    FLLMPauseScope::FLLMPauseScope
              (&local_18,GraphicsPlatform,false,-(ulonglong)(uint)this->_padding_,Platform,None);
    MemoryTrace_Free((ulong64)pIVar1,1,0);
    FLLMPauseScope::~FLLMPauseScope(&local_18);
  }
  pIVar1 = (this->Resource).Reference;
  if (pIVar1 != (ID3D11Buffer *)0x0) {
    (this->Resource).Reference = (ID3D11Buffer *)0x0;
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return;
}

// TakeOwnership @ 14599ba40

void __thiscall FD3D11Buffer::TakeOwnership(FD3D11Buffer *this,FD3D11Buffer *param_1)

{
  TRefCountPtr<ID3D11Buffer> *pTVar1;
  ID3D11Buffer *pIVar2;
  TRefCountPtr<ID3D11Buffer> *pTVar3;
  
  pTVar1 = &this->Resource;
  this->_padding_ = param_1->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  pTVar3 = &param_1->Resource;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  if (pTVar1 != pTVar3) {
    pIVar2 = pTVar1->Reference;
    pTVar1->Reference = pTVar3->Reference;
    pTVar3->Reference = (ID3D11Buffer *)0x0;
    if (pIVar2 != (ID3D11Buffer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014599baa3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*pIVar2 + 0x10))();
      return;
    }
  }
  return;
}

