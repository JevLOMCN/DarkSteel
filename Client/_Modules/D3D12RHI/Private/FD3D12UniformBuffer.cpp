// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 2

// RemoveUpdateListener @ 145a2e0b0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12UniformBuffer::RemoveUpdateListener
          (FD3D12UniformBuffer *this,ID3D12UniformBufferUpdateListener *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  ID3D12UniformBufferUpdateListener *pIVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  ID3D12UniformBufferUpdateListener *local_res10;
  int local_res18;
  
  lpCriticalSection = &this->UpdateListenersCS;
  local_res10 = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar1 = (this->UpdateListeners).AllocatorInstance.Data;
  if (((pFVar1 <= (FScriptContainerElement *)&local_res10) &&
      ((FScriptContainerElement *)&local_res10 <
       pFVar1 + (longlong)(this->UpdateListeners).ArrayMax * 8)) &&
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
  local_res18 = (this->UpdateListeners).ArrayNum;
  lVar4 = (longlong)local_res18;
  if (local_res18 != 0) {
    iVar9 = 0;
    pFVar1 = (this->UpdateListeners).AllocatorInstance.Data;
    bVar3 = *(ID3D12UniformBufferUpdateListener **)pFVar1 != local_res10;
    lVar8 = 0;
    pIVar5 = local_res10;
    iVar6 = 0;
    do {
      iVar7 = iVar6;
      do {
        lVar8 = lVar8 + 1;
        iVar7 = iVar7 + 1;
        if (lVar4 <= lVar8) break;
      } while (bVar3 == (*(ID3D12UniformBufferUpdateListener **)(pFVar1 + lVar8 * 8) != pIVar5));
      if (bVar3 != false) {
        if (iVar9 != iVar6) {
          memmove(pFVar1 + (longlong)iVar9 * 8,pFVar1 + (longlong)iVar6 * 8,
                  (longlong)(iVar7 - iVar6) << 3);
          pIVar5 = local_res10;
        }
        iVar9 = iVar9 + (iVar7 - iVar6);
      }
      bVar3 = (bool)(bVar3 ^ 1);
      iVar6 = iVar7;
    } while (lVar8 < lVar4);
    (this->UpdateListeners).ArrayNum = iVar9;
    if (local_res18 - iVar9 == 1) goto LAB_145a2e279;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Removed == 1",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.h"
                     ,0x3e5,
                     L"Should have exactly one registered listener during remove (same listener shouldn\'t registered twice and we shouldn\'t call this if not registered"
                    );
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_145a2e279:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// ~FD3D12UniformBuffer @ 145a95070

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FD3D12UniformBuffer::~FD3D12UniformBuffer(FD3D12UniformBuffer *this)

{
  int *piVar1;
  int iVar2;
  uchar auVar3 [8];
  FName FVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_UniformBufferMemory> FVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FScriptContainerElement *pFVar11;
  FNameEntryId FVar12;
  uint local_res8;
  uint uStackX_c;
  FName local_res10;
  FName local_res18;
  FStatMessage local_38;
  
  this->_padding_ = (longlong)&___7FD3D12UniformBuffer__6B_;
  bVar7 = IsInRHIThread();
  if (!bVar7) {
    bVar7 = IsInRenderingThread();
    if (!bVar7) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRHIThread() || IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12UniformBuffer.cpp"
                         ,0xec,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  }
  iVar2 = (this->UpdateListeners).ArrayNum;
  if (iVar2 != 0) {
    pFVar11 = (this->UpdateListeners).AllocatorInstance.Data;
    pFVar5 = pFVar11 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->UpdateListeners).ArrayNum != iVar2) {
        `TCheckedPointerIterator<ID3D12UniformBufferUpdateListener_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res8);
      }
      if (pFVar11 == pFVar5) break;
      (**(code **)**(undefined8 **)pFVar11)(*(undefined8 **)pFVar11,this);
      pFVar11 = pFVar11 + 8;
    }
    piVar1 = &(this->UpdateListeners).ArrayMax;
    (this->UpdateListeners).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->UpdateListeners).AllocatorInstance,0,piVar1);
    }
  }
  auVar3 = (uchar  [8])(this->ResourceLocation).Size;
  if (auVar3 != (uchar  [8])0x0) {
    FVar10 = StatPtr_STAT_UniformBufferMemory;
    if (StatPtr_STAT_UniformBufferMemory ==
        (FThreadSafeStaticStat<FStat_STAT_UniformBufferMemory>)0x0) {
      pFVar9 = ::FName::FName(&local_res18,"STAT_UniformBufferMemory");
      FVar10 = (FThreadSafeStaticStat<FStat_STAT_UniformBufferMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UniformBufferMemory,*pFVar9,
                          L"Uniform Buffer Memory","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,
                          false,ST_int64,false,false,MCR_GPU);
    }
    FVar4 = *(FName *)FVar10;
    FVar12 = FVar4.ComparisonIndex.Value;
    uVar8 = FVar4.Number;
    local_res8 = FVar12.Value;
    uStackX_c = uVar8;
    if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_38.NameAndInfo.Number = uVar8 & 0xffffbfff | 0xb000;
      local_res10 = FVar4;
      local_38.StatData.Pad = auVar3;
      local_38.NameAndInfo.Index.Value = FVar12.Value;
      FThreadStats::AddStatMessage(this_00,&local_38);
      FStatsTrace::Add(&local_res10,-(longlong)auVar3);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  FD3D12ResourceLocation::~FD3D12ResourceLocation(&this->ResourceLocation);
  pFVar5 = (this->UpdateListeners).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->UpdateListenersCS);
  FD3D12LinkedAdapterObject<FD3D12UniformBuffer>::~FD3D12LinkedAdapterObject<FD3D12UniformBuffer>
            ((FD3D12LinkedAdapterObject<FD3D12UniformBuffer> *)&this->_padding_);
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  DestructItems<TRefCountPtr<FRHIResource>,int>
            ((TRefCountPtr<FRHIResource> *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FRHIResource::~FRHIResource((FRHIResource *)this);
  return;
}

