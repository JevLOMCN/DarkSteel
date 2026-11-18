// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 5

// FD3D12SubAllocatedOnlineHeap @ 1459a9ee0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12SubAllocatedOnlineHeap * __thiscall
FD3D12SubAllocatedOnlineHeap::FD3D12SubAllocatedOnlineHeap
          (FD3D12SubAllocatedOnlineHeap *this,FD3D12DescriptorCache *param_1,
          FD3D12CommandContext *param_2)

{
  this->_padding_ = *(longlong *)&param_2->field_0x8;
  this->_padding_ = (longlong)&___7FD3D12SubAllocatedOnlineHeap__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->CurrentBlock = (FD3D12OnlineDescriptorBlock *)0x0;
  this->DescriptorCache = param_1;
  this->Context = param_2;
  return this;
}

// AllocateBlock @ 1459b15d0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

bool __thiscall FD3D12SubAllocatedOnlineHeap::AllocateBlock(FD3D12SubAllocatedOnlineHeap *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  FD3D12DescriptorCache *this_00;
  ID3D12DescriptorHeap *pIVar8;
  code *pcVar9;
  bool bVar10;
  undefined1 uVar11;
  char cVar12;
  FD3D12OnlineDescriptorBlock *pFVar13;
  FD3D12DescriptorHeap *pFVar14;
  FD3D12DescriptorHeap *pFVar15;
  FD3D12LocalOnlineHeap *pFVar16;
  longlong lVar17;
  
  if ((this->_padding_ == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Parent != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x59,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  lVar6 = this->_padding_;
  pFVar15 = (FD3D12DescriptorHeap *)0x0;
  if (this->CurrentBlock != (FD3D12OnlineDescriptorBlock *)0x0) {
    if ((*(int *)((longlong)&this->_padding_ + 4) != 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("FirstUsedSlot == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                            ,0x473,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      uVar11 = (*pcVar9)();
      return (bool)uVar11;
    }
    this->CurrentBlock->SizeUsed = (uint)this->_padding_;
    FD3D12OnlineDescriptorManager::FreeHeapBlock
              ((FD3D12OnlineDescriptorManager *)(lVar6 + 0x960),this->CurrentBlock);
    this->CurrentBlock = (FD3D12OnlineDescriptorBlock *)0x0;
  }
  pFVar13 = FD3D12OnlineDescriptorManager::AllocateHeapBlock
                      ((FD3D12OnlineDescriptorManager *)(lVar6 + 0x960));
  this->CurrentBlock = pFVar13;
  this->_padding_ = 0;
  puVar7 = (undefined8 *)this->_padding_;
  if (puVar7 != (undefined8 *)0x0) {
    this->_padding_ = 0;
    piVar1 = (int *)(puVar7 + 1);
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar7)(puVar7);
    }
  }
  if (this->CurrentBlock != (FD3D12OnlineDescriptorBlock *)0x0) {
    pFVar14 = ::operator_new(0x40);
    if (pFVar14 != (FD3D12DescriptorHeap *)0x0) {
      pFVar13 = this->CurrentBlock;
      uVar4 = pFVar13->Size;
      uVar5 = pFVar13->BaseSlot;
      cVar12 = (**(code **)(*(longlong *)&this->Context->field_0x1c0 + 8))();
      if ((cVar12 == '\x01') || (lVar17 = 0x10, cVar12 != '\x02')) {
        lVar17 = 8;
      }
      pFVar15 = FD3D12DescriptorHeap::FD3D12DescriptorHeap
                          (pFVar14,*(FD3D12DescriptorHeap **)(lVar17 + 0x960 + lVar6),uVar5,uVar4);
    }
    pFVar14 = (FD3D12DescriptorHeap *)this->_padding_;
    if (pFVar14 != pFVar15) {
      this->_padding_ = (longlong)pFVar15;
      if (pFVar15 != (FD3D12DescriptorHeap *)0x0) {
        LOCK();
        *(int *)&pFVar15->_padding_ = (int)pFVar15->_padding_ + 1;
        UNLOCK();
      }
      if (pFVar14 != (FD3D12DescriptorHeap *)0x0) {
        plVar2 = &pFVar14->_padding_;
        LOCK();
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if (((int)lVar6 == 1) && (plVar2 != (longlong *)0x0)) {
          (**(code **)pFVar14->_padding_)(pFVar14,1);
        }
      }
    }
    goto LAB_1459b18b6;
  }
  if (2 < (byte)LogD3D12RHI._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
  }
  this_00 = this->DescriptorCache;
  if ((this_00->bFullyBindless != false) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!IsFullyBindless()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                          ,0x302,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  if (this_00->LocalViewHeap == (FD3D12LocalOnlineHeap *)0x0) {
    if (4 < (byte)LogD3D12RHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
    pFVar16 = ::operator_new(0x70);
    if (pFVar16 == (FD3D12LocalOnlineHeap *)0x0) {
      this_00->LocalViewHeap = (FD3D12LocalOnlineHeap *)0x0;
    }
    else {
      pFVar16 = FD3D12LocalOnlineHeap::FD3D12LocalOnlineHeap(pFVar16,this_00,this_00->Context);
      this_00->LocalViewHeap = pFVar16;
      if (pFVar16 != (FD3D12LocalOnlineHeap *)0x0) {
        if ((this_00->NumLocalViewDescriptors == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("NumLocalViewDescriptors",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                                ,0x30c,L""), bVar10)) {
          pcVar9 = (code *)swi(3);
          uVar11 = (*pcVar9)();
          return (bool)uVar11;
        }
        FD3D12LocalOnlineHeap::Init
                  (this_00->LocalViewHeap,this_00->NumLocalViewDescriptors,Standard);
        goto LAB_1459b1856;
      }
    }
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                        ,0x311,L"");
    if (bVar10) {
code_r0x0001459b18b5:
      pcVar9 = (code *)swi(3);
      uVar11 = (*pcVar9)();
      return (bool)uVar11;
    }
  }
  else {
LAB_1459b1856:
    (**(code **)(this_00->CurrentViewHeap->_padding_ + 0x20))();
    this_00->CurrentViewHeap = (FD3D12OnlineHeap *)this_00->LocalViewHeap;
    (**(code **)(this_00->LocalViewHeap->_padding_ + 0x18))();
    FD3D12DescriptorCache::SetDescriptorHeaps(this_00,None);
    pIVar8 = *(ID3D12DescriptorHeap **)(this_00->LocalViewHeap->_padding_ + 0x18);
    if (((pIVar8 != this_00->LastSetViewHeap) && (pIVar8 != this_00->LastSetSamplerHeap)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsHeapSet(LocalViewHeap->GetHeap())",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                            ,0x31b,L""), bVar10)) goto code_r0x0001459b18b5;
  }
LAB_1459b18b6:
  return this->CurrentBlock != (FD3D12OnlineDescriptorBlock *)0x0;
}

// GetTotalSize @ 1459c3620

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

uint __thiscall FD3D12SubAllocatedOnlineHeap::GetTotalSize(FD3D12SubAllocatedOnlineHeap *this)

{
  if (this->CurrentBlock != (FD3D12OnlineDescriptorBlock *)0x0) {
    return this->CurrentBlock->Size;
  }
  return 0;
}

// OpenCommandList @ 1459c8dc0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12SubAllocatedOnlineHeap::OpenCommandList(FD3D12SubAllocatedOnlineHeap *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  FD3D12DescriptorCache *this_00;
  ID3D12DescriptorHeap *pIVar8;
  code *pcVar9;
  bool bVar10;
  char cVar11;
  FD3D12OnlineDescriptorBlock *pFVar12;
  FD3D12DescriptorHeap *pFVar13;
  FD3D12DescriptorHeap *pFVar14;
  FD3D12LocalOnlineHeap *pFVar15;
  longlong lVar16;
  
  if (this->CurrentBlock != (FD3D12OnlineDescriptorBlock *)0x0) {
    return;
  }
  if ((this->_padding_ == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Parent != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x59,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  lVar6 = this->_padding_;
  pFVar14 = (FD3D12DescriptorHeap *)0x0;
  if (this->CurrentBlock != (FD3D12OnlineDescriptorBlock *)0x0) {
    if ((*(int *)((longlong)&this->_padding_ + 4) != 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("FirstUsedSlot == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                            ,0x473,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    this->CurrentBlock->SizeUsed = (uint)this->_padding_;
    FD3D12OnlineDescriptorManager::FreeHeapBlock
              ((FD3D12OnlineDescriptorManager *)(lVar6 + 0x960),this->CurrentBlock);
    this->CurrentBlock = (FD3D12OnlineDescriptorBlock *)0x0;
  }
  pFVar12 = FD3D12OnlineDescriptorManager::AllocateHeapBlock
                      ((FD3D12OnlineDescriptorManager *)(lVar6 + 0x960));
  this->CurrentBlock = pFVar12;
  this->_padding_ = 0;
  puVar7 = (undefined8 *)this->_padding_;
  if (puVar7 != (undefined8 *)0x0) {
    this->_padding_ = 0;
    piVar1 = (int *)(puVar7 + 1);
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar7)(puVar7);
    }
  }
  if (this->CurrentBlock != (FD3D12OnlineDescriptorBlock *)0x0) {
    pFVar13 = ::operator_new(0x40);
    if (pFVar13 != (FD3D12DescriptorHeap *)0x0) {
      pFVar12 = this->CurrentBlock;
      uVar4 = pFVar12->Size;
      uVar5 = pFVar12->BaseSlot;
      cVar11 = (**(code **)(*(longlong *)&this->Context->field_0x1c0 + 8))();
      if ((cVar11 == '\x01') || (lVar16 = 0x10, cVar11 != '\x02')) {
        lVar16 = 8;
      }
      pFVar14 = FD3D12DescriptorHeap::FD3D12DescriptorHeap
                          (pFVar13,*(FD3D12DescriptorHeap **)(lVar16 + 0x960 + lVar6),uVar5,uVar4);
    }
    pFVar13 = (FD3D12DescriptorHeap *)this->_padding_;
    if (pFVar13 == pFVar14) {
      return;
    }
    this->_padding_ = (longlong)pFVar14;
    if (pFVar14 != (FD3D12DescriptorHeap *)0x0) {
      LOCK();
      *(int *)&pFVar14->_padding_ = (int)pFVar14->_padding_ + 1;
      UNLOCK();
    }
    if (pFVar13 == (FD3D12DescriptorHeap *)0x0) {
      return;
    }
    plVar2 = &pFVar13->_padding_;
    LOCK();
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 != 1) {
      return;
    }
    if (plVar2 == (longlong *)0x0) {
      return;
    }
    (**(code **)pFVar13->_padding_)(pFVar13,1);
    return;
  }
  if (2 < (byte)LogD3D12RHI._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
  }
  this_00 = this->DescriptorCache;
  if ((this_00->bFullyBindless != false) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!IsFullyBindless()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                          ,0x302,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (this_00->LocalViewHeap == (FD3D12LocalOnlineHeap *)0x0) {
    if (4 < (byte)LogD3D12RHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
    pFVar15 = ::operator_new(0x70);
    if (pFVar15 == (FD3D12LocalOnlineHeap *)0x0) {
      this_00->LocalViewHeap = (FD3D12LocalOnlineHeap *)0x0;
    }
    else {
      pFVar15 = FD3D12LocalOnlineHeap::FD3D12LocalOnlineHeap(pFVar15,this_00,this_00->Context);
      this_00->LocalViewHeap = pFVar15;
      if (pFVar15 != (FD3D12LocalOnlineHeap *)0x0) {
        if ((this_00->NumLocalViewDescriptors == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("NumLocalViewDescriptors",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                                ,0x30c,L""), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FD3D12LocalOnlineHeap::Init
                  (this_00->LocalViewHeap,this_00->NumLocalViewDescriptors,Standard);
        goto LAB_1459b1856;
      }
    }
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                        ,0x311,L"");
    if (bVar10) {
code_r0x0001459b18b5:
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  else {
LAB_1459b1856:
    (**(code **)(this_00->CurrentViewHeap->_padding_ + 0x20))();
    this_00->CurrentViewHeap = (FD3D12OnlineHeap *)this_00->LocalViewHeap;
    (**(code **)(this_00->LocalViewHeap->_padding_ + 0x18))();
    FD3D12DescriptorCache::SetDescriptorHeaps(this_00,None);
    pIVar8 = *(ID3D12DescriptorHeap **)(this_00->LocalViewHeap->_padding_ + 0x18);
    if (((pIVar8 != this_00->LastSetViewHeap) && (pIVar8 != this_00->LastSetSamplerHeap)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsHeapSet(LocalViewHeap->GetHeap())",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                            ,0x31b,L""), bVar10)) goto code_r0x0001459b18b5;
  }
  return;
}

// RollOver @ 1459d7700

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

bool __thiscall FD3D12SubAllocatedOnlineHeap::RollOver(FD3D12SubAllocatedOnlineHeap *this)

{
  AllocateBlock(this);
  return this->CurrentBlock == (FD3D12OnlineDescriptorBlock *)0x0;
}

