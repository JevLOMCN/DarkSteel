// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 3

// FD3D12DescriptorHeap @ 1459ed460

FD3D12DescriptorHeap * __thiscall
FD3D12DescriptorHeap::FD3D12DescriptorHeap
          (FD3D12DescriptorHeap *this,FD3D12DescriptorHeap *param_1,uint param_2,uint param_3)

{
  ID3D12DescriptorHeap *pIVar1;
  code *pcVar2;
  bool bVar3;
  FD3D12DescriptorHeap *pFVar4;
  
  if (param_1->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x59,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FD3D12DescriptorHeap *)(*pcVar2)();
      return pFVar4;
    }
  }
  this->_padding_ = param_1->_padding_;
  this->_padding_ = (longlong)&___7FD3D12DescriptorHeap__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  (this->Heap).Reference = (ID3D12DescriptorHeap *)0x0;
  pIVar1 = (param_1->Heap).Reference;
  (this->Heap).Reference = pIVar1;
  if (pIVar1 != (ID3D12DescriptorHeap *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))();
  }
  this->CpuBase =
       (CD3DX12_CPU_DESCRIPTOR_HANDLE)
       ((ulonglong)param_1->DescriptorSize * (longlong)(int)param_2 + (longlong)param_1->CpuBase);
  this->GpuBase =
       (CD3DX12_GPU_DESCRIPTOR_HANDLE)
       ((ulonglong)param_1->DescriptorSize * (longlong)(int)param_2 + (longlong)param_1->GpuBase);
  this->Offset = param_2;
  this->NumDescriptors = param_3;
  this->DescriptorSize = param_1->DescriptorSize;
  this->Type = param_1->Type;
  this->Flags = param_1->Flags;
  this->bIsGlobal = param_1->bIsGlobal;
  this->bIsSuballocation = true;
  return this;
}

// FD3D12DescriptorHeap @ 1459ed540

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12DescriptorHeap * __thiscall
FD3D12DescriptorHeap::FD3D12DescriptorHeap
          (FD3D12DescriptorHeap *this,FD3D12Device *param_1,
          TRefCountPtr<ID3D12DescriptorHeap> *param_2,uint param_3,ERHIDescriptorHeapType param_4,
          ED3D12DescriptorHeapFlags param_5,bool param_6)

{
  ID3D12DescriptorHeap *pIVar1;
  longlong *plVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  D3D12_DESCRIPTOR_HEAP_TYPE DVar6;
  uint uVar7;
  CD3DX12_CPU_DESCRIPTOR_HANDLE *pCVar8;
  CD3DX12_GPU_DESCRIPTOR_HANDLE *pCVar9;
  FD3D12DescriptorHeap *pFVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_BindlessResourceHeapMemory> FVar12;
  FThreadStats *this_00;
  FThreadStatsPool *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_BindlessSamplerHeapMemory> FVar14;
  CD3DX12_GPU_DESCRIPTOR_HANDLE CVar15;
  uchar auVar16 [8];
  FName local_res8;
  FName local_res10;
  undefined1 local_res18 [16];
  undefined1 local_68 [8];
  FName local_60;
  FName local_58;
  FStatMessage local_50;
  FStatMessage local_40;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7FD3D12DescriptorHeap__6B_;
  CVar15 = (CD3DX12_GPU_DESCRIPTOR_HANDLE)0x0;
  (this->Heap).Reference = (ID3D12DescriptorHeap *)0x0;
  *(undefined4 *)&this->_padding_ = 0;
  (this->Heap).Reference = param_2->Reference;
  param_2->Reference = (ID3D12DescriptorHeap *)0x0;
  pIVar1 = (this->Heap).Reference;
  pCVar8 = (CD3DX12_CPU_DESCRIPTOR_HANDLE *)
           (**(code **)((longlong)*pIVar1 + 0x48))(pIVar1,local_res18);
  this->CpuBase = *pCVar8;
  if ((param_5 & GpuVisible) != None) {
    pIVar1 = (this->Heap).Reference;
    pCVar9 = (CD3DX12_GPU_DESCRIPTOR_HANDLE *)
             (**(code **)((longlong)*pIVar1 + 0x50))(pIVar1,local_68);
    CVar15 = *pCVar9;
  }
  this->GpuBase = CVar15;
  this->Offset = 0;
  this->NumDescriptors = param_3;
  if ((*(longlong *)&param_1->field_0x10 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FD3D12DescriptorHeap *)(*pcVar4)();
    return pFVar10;
  }
  plVar2 = *(longlong **)(*(longlong *)&param_1->field_0x10 + 8);
  pcVar4 = *(code **)(*plVar2 + 0x78);
  DVar6 = ::Translate(param_4);
  uVar7 = (*pcVar4)(plVar2,DVar6);
  this->DescriptorSize = uVar7;
  uVar7 = uVar7 * this->NumDescriptors;
  this->Flags = param_5;
  this->Type = param_4;
  this->bIsGlobal = param_6;
  this->bIsSuballocation = false;
  auVar16[4] = '\0';
  auVar16[5] = '\0';
  auVar16[6] = '\0';
  auVar16[7] = '\0';
  auVar16._0_4_ = uVar7;
  if (param_4 == Standard) {
    if (uVar7 == 0) {
      return this;
    }
    FVar12 = StatPtr_STAT_BindlessResourceHeapMemory;
    if (StatPtr_STAT_BindlessResourceHeapMemory ==
        (FThreadSafeStaticStat<FStat_STAT_BindlessResourceHeapMemory>)0x0) {
      pFVar11 = ::FName::FName(&local_60,"STAT_BindlessResourceHeapMemory");
      FVar12 = (FThreadSafeStaticStat<FStat_STAT_BindlessResourceHeapMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BindlessResourceHeapMemory,
                          *pFVar11,L"Bindless Resource Heap","STATGROUP_RHI","STATCAT_Advanced",
                          L"RHI",true,false,ST_int64,false,false,MCR_GPU);
    }
    FVar3 = *(FName *)FVar12;
    if (FVar3 == (FName)0x0) {
      return this;
    }
    if (FThreadStats::bPrimaryDisableForever != false) {
      return this;
    }
    if (FThreadStats::TlsSlot == 0xffffffff) {
      return this;
    }
    local_res8 = FVar3;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      pFVar13 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(pFVar13);
    }
    local_50.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
    local_res8 = FVar3;
    local_50.StatData.Pad = auVar16;
    local_50.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_50);
    pFVar11 = &local_res8;
  }
  else {
    if (param_4 != Sampler) {
      return this;
    }
    if (uVar7 == 0) {
      return this;
    }
    FVar14 = StatPtr_STAT_BindlessSamplerHeapMemory;
    if (StatPtr_STAT_BindlessSamplerHeapMemory ==
        (FThreadSafeStaticStat<FStat_STAT_BindlessSamplerHeapMemory>)0x0) {
      pFVar11 = ::FName::FName(&local_58,"STAT_BindlessSamplerHeapMemory");
      FVar14 = (FThreadSafeStaticStat<FStat_STAT_BindlessSamplerHeapMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BindlessSamplerHeapMemory,
                          *pFVar11,L"Bindless Sampler Heap","STATGROUP_RHI","STATCAT_Advanced",
                          L"RHI",true,false,ST_int64,false,false,MCR_GPU);
    }
    FVar3 = *(FName *)FVar14;
    if (FVar3 == (FName)0x0) {
      return this;
    }
    if (FThreadStats::bPrimaryDisableForever != false) {
      return this;
    }
    if (FThreadStats::TlsSlot == 0xffffffff) {
      return this;
    }
    local_res8 = FVar3;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      pFVar13 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(pFVar13);
    }
    local_40.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
    local_res10 = FVar3;
    local_40.StatData.Pad = auVar16;
    local_40.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_40);
    pFVar11 = &local_res10;
  }
  FStatsTrace::Add(pFVar11,(long64)auVar16);
  if (this_00->ScopeCount == 0) {
    FThreadStats::Flush(this_00,false,false);
  }
  else if (FThreadStats::bIsRawStatsActive != false) {
    FThreadStats::FlushRawStats(this_00,false,false);
  }
  return this;
}

// ~FD3D12DescriptorHeap @ 1459f6f60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FD3D12DescriptorHeap::~FD3D12DescriptorHeap(FD3D12DescriptorHeap *this)

{
  LPCRITICAL_SECTION lpCriticalSection;
  ED3D12DescriptorHeapFlags EVar1;
  ERHIDescriptorHeapType EVar2;
  uint uVar3;
  longlong lVar4;
  FName FVar5;
  ID3D12DescriptorHeap *pIVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_BindlessResourceHeapMemory> FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_BindlessSamplerHeapMemory> FVar13;
  uchar auVar14 [8];
  undefined8 *puVar15;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_68;
  FStatMessage local_60;
  FStatMessage local_50 [2];
  
  this->_padding_ = (longlong)&___7FD3D12DescriptorHeap__6B_;
  if ((this->Flags & Poolable) != None) {
    if (this->_padding_ == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    lVar4 = this->_padding_;
    EVar1 = this->Flags;
    uVar3 = this->NumDescriptors;
    EVar2 = this->Type;
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar4 + 0x700);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection);
    iVar9 = *(int *)(lVar4 + 0x6f8);
    if (iVar9 == *(int *)(lVar4 + 0x6fc)) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)(lVar4 + 0x6f0),(int *)(lVar4 + 0x6fc));
    }
    puVar15 = (undefined8 *)((longlong)iVar9 * 0x10 + *(longlong *)(lVar4 + 0x6f0));
    *(int *)(lVar4 + 0x6f8) = iVar9 + 1;
    *puVar15 = 0;
    *puVar15 = (this->Heap).Reference;
    (this->Heap).Reference = (ID3D12DescriptorHeap *)0x0;
    *(uint *)(puVar15 + 1) = uVar3;
    *(ERHIDescriptorHeapType *)((longlong)puVar15 + 0xc) = EVar2;
    *(ED3D12DescriptorHeapFlags *)((longlong)puVar15 + 0xd) = EVar1;
    LeaveCriticalSection(lpCriticalSection);
  }
  if (this->bIsSuballocation != false) goto LAB_1459f72e0;
  auVar14._0_4_ = this->DescriptorSize * this->NumDescriptors;
  auVar14[4] = '\0';
  auVar14[5] = '\0';
  auVar14[6] = '\0';
  auVar14[7] = '\0';
  if (this->Type == Standard) {
    if (auVar14 == (uchar  [8])0x0) goto LAB_1459f72e0;
    FVar11 = StatPtr_STAT_BindlessResourceHeapMemory;
    if (StatPtr_STAT_BindlessResourceHeapMemory ==
        (FThreadSafeStaticStat<FStat_STAT_BindlessResourceHeapMemory>)0x0) {
      pFVar10 = ::FName::FName(&local_res20,"STAT_BindlessResourceHeapMemory");
      FVar11 = (FThreadSafeStaticStat<FStat_STAT_BindlessResourceHeapMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BindlessResourceHeapMemory,
                          *pFVar10,L"Bindless Resource Heap","STATGROUP_RHI","STATCAT_Advanced",
                          L"RHI",true,false,ST_int64,false,false,MCR_GPU);
    }
    FVar5 = *(FName *)FVar11;
    if (((FVar5 == (FName)0x0) || (FThreadStats::bPrimaryDisableForever != false)) ||
       (FThreadStats::TlsSlot == 0xffffffff)) goto LAB_1459f72e0;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      pFVar12 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(pFVar12);
    }
    local_60.NameAndInfo.Number = FVar5.Number & 0xffffbfff | 0xb000;
    local_res10 = FVar5;
    local_60.StatData.Pad = auVar14;
    local_60.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_60);
    pFVar10 = &local_res10;
  }
  else {
    if ((this->Type != Sampler) || (auVar14 == (uchar  [8])0x0)) goto LAB_1459f72e0;
    FVar13 = StatPtr_STAT_BindlessSamplerHeapMemory;
    if (StatPtr_STAT_BindlessSamplerHeapMemory ==
        (FThreadSafeStaticStat<FStat_STAT_BindlessSamplerHeapMemory>)0x0) {
      pFVar10 = ::FName::FName(&local_68,"STAT_BindlessSamplerHeapMemory");
      FVar13 = (FThreadSafeStaticStat<FStat_STAT_BindlessSamplerHeapMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BindlessSamplerHeapMemory,
                          *pFVar10,L"Bindless Sampler Heap","STATGROUP_RHI","STATCAT_Advanced",
                          L"RHI",true,false,ST_int64,false,false,MCR_GPU);
    }
    FVar5 = *(FName *)FVar13;
    if (((FVar5 == (FName)0x0) || (FThreadStats::bPrimaryDisableForever != false)) ||
       (FThreadStats::TlsSlot == 0xffffffff)) goto LAB_1459f72e0;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      pFVar12 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(pFVar12);
    }
    local_50[0].NameAndInfo.Number = FVar5.Number & 0xffffbfff | 0xb000;
    local_res18 = FVar5;
    local_50[0].StatData.Pad = auVar14;
    local_50[0].NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,local_50);
    pFVar10 = &local_res18;
  }
  FStatsTrace::Add(pFVar10,-(longlong)auVar14);
  if (this_00->ScopeCount == 0) {
    FThreadStats::Flush(this_00,false,false);
  }
  else if (FThreadStats::bIsRawStatsActive != false) {
    FThreadStats::FlushRawStats(this_00,false,false);
  }
LAB_1459f72e0:
  pIVar6 = (this->Heap).Reference;
  if (pIVar6 != (ID3D12DescriptorHeap *)0x0) {
    (**(code **)((longlong)*pIVar6 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FThreadSafeRefCountedObject__6B_;
  if ((int)this->_padding_ != 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Super::GetRefCount() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0x124,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  return;
}

