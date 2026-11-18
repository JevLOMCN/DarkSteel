// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 6

// FD3D12UploadHeapAllocator @ 1459aa290

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

FD3D12UploadHeapAllocator * __thiscall
FD3D12UploadHeapAllocator::FD3D12UploadHeapAllocator
          (FD3D12UploadHeapAllocator *this,FD3D12Adapter *param_1,FD3D12Device *param_2,
          FString *param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  uint uVar10;
  FD3D12UploadHeapAllocator *pFVar11;
  ForAnyElementType FVar12;
  ulong64 uVar13;
  int iVar14;
  undefined1 auStackY_118 [32];
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FD3D12ResourceInitConfig local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_118;
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)param_2;
  uVar10 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  uVar3 = *(uint *)param_2;
  *(uint *)&this->_padding_ = uVar3;
  *(uint *)((longlong)&this->_padding_ + 4) = uVar10;
  if ((uVar10 & uVar3) == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("NodeMask.Intersects(VisibiltyMask)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x9e,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      pFVar11 = (FD3D12UploadHeapAllocator *)(*pcVar5)();
      return pFVar11;
    }
  }
  ::FString::ConcatFC(&local_78,param_3,L" (UploadHeapAllocator)");
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar12.Data = local_78.Data.AllocatorInstance.Data;
  }
  uVar10 = MemoryTrace_HeapSpec(1,(wchar_t *)FVar12.Data,None);
  this->TraceHeapId = uVar10;
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  iVar7 = GD3D12UploadHeapSmallBlockPoolSize;
  iVar6 = GD3D12UploadHeapSmallBlockMaxAllocationSize;
  uVar10 = this->TraceHeapId;
  ::FString::FString(&local_98,L"Small Block Multi Buddy Allocator");
  uVar3 = *(uint *)((longlong)&this->_padding_ + 4);
  (this->SmallBlockAllocator)._padding_ = (longlong)param_2;
  uVar4 = *(uint *)param_2;
  *(uint *)&(this->SmallBlockAllocator)._padding_ = uVar4;
  *(uint *)((longlong)&(this->SmallBlockAllocator)._padding_ + 4) = uVar3;
  if ((uVar4 & uVar3) == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("NodeMask.Intersects(VisibiltyMask)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x9e,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      pFVar11 = (FD3D12UploadHeapAllocator *)(*pcVar5)();
      return pFVar11;
    }
  }
  iVar14 = local_98.Data.ArrayNum;
  FVar12.Data = local_98.Data.AllocatorInstance.Data;
  plVar1 = &(this->SmallBlockAllocator)._padding_;
  piVar2 = (int *)((longlong)&(this->SmallBlockAllocator)._padding_ + 4);
  *(undefined4 *)&(this->SmallBlockAllocator)._padding_ = 2;
  *(undefined4 *)((longlong)&(this->SmallBlockAllocator)._padding_ + 4) = 0xc0;
  *(undefined4 *)&(this->SmallBlockAllocator)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->SmallBlockAllocator)._padding_ + 4) = 0x200000;
  *plVar1 = 0;
  *(int *)&(this->SmallBlockAllocator)._padding_ = local_98.Data.ArrayNum;
  if (local_98.Data.ArrayNum == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_98.Data.ArrayNum,0,(ForAnyElementType *)plVar1,local_98.Data.ArrayNum,
               piVar2);
    memcpy((void *)*plVar1,FVar12.Data,(longlong)iVar14 * 2);
  }
  *(int *)((longlong)&(this->SmallBlockAllocator)._padding_ + 4) = iVar6;
  *(undefined1 *)&(this->SmallBlockAllocator)._padding_ = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->SmallBlockAllocator)._padding_,4000);
  (this->SmallBlockAllocator)._padding_ = 0;
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_98.Data.ArrayNum != 0) {
    FVar12.Data = local_98.Data.AllocatorInstance.Data;
  }
  (this->SmallBlockAllocator)._padding_ = 0;
  *(undefined4 *)&(this->SmallBlockAllocator)._padding_ = 0;
  (this->SmallBlockAllocator).Allocators.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SmallBlockAllocator).Allocators.ArrayNum = 0;
  (this->SmallBlockAllocator).Allocators.ArrayMax = 0;
  (this->SmallBlockAllocator).AllocationStrategy = kManualSubAllocation;
  (this->SmallBlockAllocator).MinBlockSize = 0x200;
  (this->SmallBlockAllocator).DefaultPoolSize = iVar7;
  uVar10 = MemoryTrace_HeapSpec(uVar10,(wchar_t *)FVar12.Data,None);
  (this->SmallBlockAllocator).TraceHeapId = uVar10;
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->BigBlockCS,4000);
  iVar6 = GD3D12UploadHeapBigBlockMaxAllocationSize;
  uVar10 = this->TraceHeapId;
  uVar13 = (ulong64)GD3D12UploadHeapBigBlockPoolSize;
  ::FString::FString(&local_68,L"Big Block Pool Allocator");
  local_58.HeapType = D3D12_HEAP_TYPE_UPLOAD;
  local_58.HeapFlags = D3D12_HEAP_FLAG_ALLOW_ONLY_BUFFERS;
  local_58.ResourceFlags = D3D12_RESOURCE_FLAG_NONE;
  local_58.InitialD3D12Access = GenericRead;
  FD3D12PoolAllocator::FD3D12PoolAllocator
            (&this->BigBlockAllocator,param_2,(FRHIGPUMask)*(uint *)((longlong)&this->_padding_ + 4)
             ,&local_58,&local_68,kManualSubAllocation,uVar13,0x200,iVar6,SortByOffset,false,uVar10)
  ;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  iVar7 = GD3D12FastConstantAllocatorPageSize;
  iVar6 = GD3D12UploadHeapSmallBlockPoolSize;
  uVar10 = this->TraceHeapId;
  iVar14 = GD3D12FastConstantAllocatorPageSize << 6;
  ::FString::FString(&local_88,L"Fast Constant Page Multi Buddy Allocator");
  uVar3 = *(uint *)((longlong)&this->_padding_ + 4);
  (this->FastConstantPageAllocator)._padding_ = (longlong)param_2;
  uVar4 = *(uint *)param_2;
  *(uint *)&(this->FastConstantPageAllocator)._padding_ = uVar4;
  *(uint *)((longlong)&(this->FastConstantPageAllocator)._padding_ + 4) = uVar3;
  if ((uVar4 & uVar3) == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("NodeMask.Intersects(VisibiltyMask)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x9e,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      pFVar11 = (FD3D12UploadHeapAllocator *)(*pcVar5)();
      return pFVar11;
    }
  }
  iVar8 = local_88.Data.ArrayNum;
  FVar12.Data = local_88.Data.AllocatorInstance.Data;
  plVar1 = &(this->FastConstantPageAllocator)._padding_;
  piVar2 = (int *)((longlong)&(this->FastConstantPageAllocator)._padding_ + 4);
  *(undefined4 *)&(this->FastConstantPageAllocator)._padding_ = 2;
  *(undefined4 *)((longlong)&(this->FastConstantPageAllocator)._padding_ + 4) = 0xc0;
  *(undefined4 *)&(this->FastConstantPageAllocator)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->FastConstantPageAllocator)._padding_ + 4) = 0x200000;
  *plVar1 = 0;
  *(int *)&(this->FastConstantPageAllocator)._padding_ = local_88.Data.ArrayNum;
  if (local_88.Data.ArrayNum == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_88.Data.ArrayNum,0,(ForAnyElementType *)plVar1,local_88.Data.ArrayNum,
               piVar2);
    memcpy((void *)*plVar1,FVar12.Data,(longlong)iVar8 * 2);
  }
  *(undefined1 *)&(this->FastConstantPageAllocator)._padding_ = 0;
  *(int *)((longlong)&(this->FastConstantPageAllocator)._padding_ + 4) = iVar14;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->FastConstantPageAllocator)._padding_,4000);
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_88.Data.ArrayNum != 0) {
    FVar12.Data = local_88.Data.AllocatorInstance.Data;
  }
  (this->FastConstantPageAllocator).MinBlockSize = iVar7;
  (this->FastConstantPageAllocator)._padding_ = 0;
  (this->FastConstantPageAllocator)._padding_ = 0;
  *(undefined4 *)&(this->FastConstantPageAllocator)._padding_ = 0;
  (this->FastConstantPageAllocator).AllocationStrategy = kManualSubAllocation;
  (this->FastConstantPageAllocator).DefaultPoolSize = iVar6;
  (this->FastConstantPageAllocator).Allocators.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FastConstantPageAllocator).Allocators.ArrayNum = 0;
  (this->FastConstantPageAllocator).Allocators.ArrayMax = 0;
  uVar10 = MemoryTrace_HeapSpec(uVar10,(wchar_t *)FVar12.Data,None);
  (this->FastConstantPageAllocator).TraceHeapId = uVar10;
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return this;
}

// AllocFastConstantAllocationPage @ 1459b0520

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void * __thiscall
FD3D12UploadHeapAllocator::AllocFastConstantAllocationPage
          (FD3D12UploadHeapAllocator *this,uint param_1,uint param_2,FD3D12ResourceLocation *param_3
          )

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  if (param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSize > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                       ,0x4ab,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  if (*(uint *)((longlong)&(this->FastConstantPageAllocator)._padding_ + 4) < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSize <= FastConstantPageAllocator.GetMaximumAllocationSizeForPooling()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                       ,0x4ac,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  FD3D12ResourceLocation::Clear(param_3);
  bVar2 = FD3D12MultiBuddyAllocator::TryAllocate
                    (&this->FastConstantPageAllocator,param_1,param_2,param_3);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FastConstantPageAllocator.TryAllocate(InSize, InAlignment, ResourceLocation)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                       ,0x4af,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  return param_3->MappedBaseAddress;
}

// AllocUploadResource @ 1459b0600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void * __thiscall
FD3D12UploadHeapAllocator::AllocUploadResource
          (FD3D12UploadHeapAllocator *this,uint param_1,uint param_2,FD3D12ResourceLocation *param_3
          )

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined1 auStack_138 [32];
  ulonglong local_118;
  uint local_110;
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  FD3D12ResourceLocation *local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  ulonglong local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined8 uStack_b4;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  uint uStack_a4;
  code *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined2 local_60;
  undefined4 local_5e;
  undefined2 local_5a;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_138;
  uVar4 = (ulonglong)param_1;
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1158,"FD3D12UploadHeapAllocator::AllocUploadResource",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
               ,0x486);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1158);
  }
  if ((param_1 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                         ,0x488,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  FD3D12ResourceLocation::Clear(param_3);
  if (*(uint *)((longlong)&(this->SmallBlockAllocator)._padding_ + 4) < param_1) {
    EnterCriticalSection((LPCRITICAL_SECTION)&this->BigBlockCS);
    uStack_bc = 0x10001;
    uStack_b8 = 0;
    uStack_d0 = 0;
    uStack_ac = 1;
    uStack_a8 = 0;
    local_d8 = 1;
    local_98 = CONCAT44(uStack_d4,1);
    uStack_c0 = 1;
    uStack_b4 = 1;
    uStack_80 = 0x1000100000001;
    local_a0 = *(code **)(this->BigBlockAllocator)._padding_;
    uStack_90 = 0;
    local_5a = 0;
    local_68 = (ulonglong)uStack_a4 << 0x20;
    local_78 = 0;
    uStack_74 = 1;
    uStack_70 = 0;
    uStack_6c = 1;
    local_60 = 0;
    local_5e = 0;
    local_c8 = uVar4;
    local_88 = uVar4;
    if ((this->_padding_ == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Parent != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                           ,0x59,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
    local_e8 = 0;
    local_f0 = 0;
    local_f8 = 0x200000;
    local_100 = 1;
    local_108 = 0x200000;
    local_118 = uVar4;
    local_110 = param_2;
    local_e0 = param_3;
    (*local_a0)(&(this->BigBlockAllocator)._padding_,*(undefined4 *)(this->_padding_ + 8),2,
                &local_98);
    FD3D12ResourceLocation::UnlockPoolData(param_3);
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->BigBlockCS);
  }
  else {
    bVar2 = FD3D12MultiBuddyAllocator::TryAllocate
                      (&this->SmallBlockAllocator,param_1,param_2,param_3);
    if ((!bVar2) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("SmallBlockAllocator.TryAllocate(InSize, InAlignment, ResourceLocation)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                           ,0x48e,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  pvVar3 = param_3->MappedBaseAddress;
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pvVar3;
}

// CleanUpAllocations @ 1459b5e40

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12UploadHeapAllocator::CleanUpAllocations(FD3D12UploadHeapAllocator *this,ulong64 param_1)

{
  FD3D12MultiBuddyAllocator::CleanUpAllocations(&this->SmallBlockAllocator,param_1);
  EnterCriticalSection((LPCRITICAL_SECTION)&this->BigBlockCS);
  FD3D12PoolAllocator::CleanUpAllocations(&this->BigBlockAllocator,param_1,false);
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->BigBlockCS);
  FD3D12MultiBuddyAllocator::CleanUpAllocations(&this->FastConstantPageAllocator,param_1);
  return;
}

// Destroy @ 1459bd9f0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall FD3D12UploadHeapAllocator::Destroy(FD3D12UploadHeapAllocator *this)

{
  FD3D12MultiBuddyAllocator::ReleaseAllResources(&this->SmallBlockAllocator);
  FRHIPoolAllocator::Destroy((FRHIPoolAllocator *)&this->BigBlockAllocator);
  FD3D12MultiBuddyAllocator::ReleaseAllResources(&this->FastConstantPageAllocator);
  return;
}

// UpdateMemoryStats @ 1459df790

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FD3D12UploadHeapAllocator::UpdateMemoryStats(FD3D12UploadHeapAllocator *this)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  FName FVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_D3D12UploadPoolMemoryAllocated> FVar7;
  FThreadStats *pFVar8;
  FThreadStatsPool *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_D3D12UploadPoolMemoryUsed> FVar10;
  FThreadSafeStaticStat<FStat_STAT_D3D12UploadPoolMemoryFree> FVar11;
  FThreadSafeStaticStat<FStat_STAT_D3D12UploadPoolAlignmentWaste> FVar12;
  FThreadSafeStaticStat<FStat_STAT_D3D12UploadPoolPageCount> FVar13;
  FThreadSafeStaticStat<FStat_STAT_D3D12UploadPoolFullPages> FVar14;
  FScriptContainerElement *pFVar15;
  uchar auVar16 [8];
  uchar auVar17 [8];
  uchar auVar18 [8];
  uchar auVar19 [8];
  uchar auVar20 [8];
  uchar auVar21 [8];
  FName local_res8;
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_68;
  uint local_64;
  uint local_60 [2];
  FStatMessage local_58;
  
  plVar1 = &(this->SmallBlockAllocator)._padding_;
  local_res10[0] = 0;
  local_res18[0] = 0;
  local_res20[0] = 0;
  local_60[1] = 0;
  local_68 = 0;
  local_64 = 0;
  local_60[0] = 0;
  if (plVar1 != (longlong *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)plVar1);
    pFVar15 = (this->SmallBlockAllocator).Allocators.AllocatorInstance.Data;
    iVar3 = (this->SmallBlockAllocator).Allocators.ArrayNum;
    pFVar2 = pFVar15 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->SmallBlockAllocator).Allocators.ArrayNum != iVar3) {
        `TCheckedPointerIterator<FD3D12BuddyAllocator_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (pFVar15 == pFVar2) break;
      lVar4 = *(longlong *)pFVar15;
      local_res10[0] = local_res10[0] + *(int *)(lVar4 + 0x78);
      local_res18[0] = local_res18[0] + *(int *)(lVar4 + 100);
      local_res20[0] = local_res20[0] + (*(int *)(lVar4 + 0x78) - *(int *)(lVar4 + 0x60));
      local_68 = local_68 + (*(int *)(lVar4 + 0x60) - *(int *)(lVar4 + 100));
      local_64 = local_64 + 1;
      if (*(int *)(lVar4 + 0x78) == *(int *)(lVar4 + 0x60)) {
        local_60[0] = local_60[0] + 1;
      }
      pFVar15 = pFVar15 + 8;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)plVar1);
    EnterCriticalSection((LPCRITICAL_SECTION)&this->BigBlockCS);
    FRHIPoolAllocator::UpdateMemoryStats
              ((FRHIPoolAllocator *)&this->BigBlockAllocator,local_res10,local_res18,local_res20,
               local_60 + 1,&local_68,&local_64,local_60);
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->BigBlockCS);
    plVar1 = &(this->FastConstantPageAllocator)._padding_;
    if (plVar1 != (longlong *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)plVar1);
      pFVar15 = (this->FastConstantPageAllocator).Allocators.AllocatorInstance.Data;
      iVar3 = (this->FastConstantPageAllocator).Allocators.ArrayNum;
      pFVar2 = pFVar15 + (longlong)iVar3 * 8;
      while( true ) {
        if ((this->FastConstantPageAllocator).Allocators.ArrayNum != iVar3) {
          `TCheckedPointerIterator<FD3D12BuddyAllocator_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_res8);
        }
        if (pFVar15 == pFVar2) break;
        lVar4 = *(longlong *)pFVar15;
        local_res10[0] = local_res10[0] + *(int *)(lVar4 + 0x78);
        local_res18[0] = local_res18[0] + *(int *)(lVar4 + 100);
        local_res20[0] = local_res20[0] + (*(int *)(lVar4 + 0x78) - *(int *)(lVar4 + 0x60));
        local_68 = local_68 + (*(int *)(lVar4 + 0x60) - *(int *)(lVar4 + 100));
        local_64 = local_64 + 1;
        if (*(int *)(lVar4 + 0x78) == *(int *)(lVar4 + 0x60)) {
          local_60[0] = local_60[0] + 1;
        }
        pFVar15 = pFVar15 + 8;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)plVar1);
      FVar7 = StatPtr_STAT_D3D12UploadPoolMemoryAllocated;
      if (StatPtr_STAT_D3D12UploadPoolMemoryAllocated ==
          (FThreadSafeStaticStat<FStat_STAT_D3D12UploadPoolMemoryAllocated>)0x0) {
        pFVar6 = ::FName::FName(&local_res8,"STAT_D3D12UploadPoolMemoryAllocated");
        FVar7 = (FThreadSafeStaticStat<FStat_STAT_D3D12UploadPoolMemoryAllocated>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12UploadPoolMemoryAllocated
                           ,*pFVar6,L"UploadPool Memory Allocated","STATGROUP_D3D12MemoryDetails",
                           "STATCAT_Advanced",L"D3D12RHI: Memory Details",true,false,ST_int64,false,
                           false,MCR_Physical);
      }
      FVar5 = *(FName *)FVar7;
      auVar16[4] = '\0';
      auVar16[5] = '\0';
      auVar16[6] = '\0';
      auVar16[7] = '\0';
      auVar16[0] = (undefined1)local_res10[0];
      auVar16[1] = local_res10[0]._1_1_;
      auVar16[2] = local_res10[0]._2_1_;
      auVar16[3] = local_res10[0]._3_1_;
      local_res8 = FVar5;
      if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar8 == (FThreadStats *)0x0) {
          pFVar9 = FThreadStatsPool::Get();
          pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
        }
        local_58.NameAndInfo.Number = FVar5.Number & 0xffff8fff | 0x8000;
        local_res8 = FVar5;
        local_58.StatData.Pad = auVar16;
        local_58.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar8,&local_58);
        FStatsTrace::Set(&local_res8,(long64)auVar16);
        if (pFVar8->ScopeCount == 0) {
          FThreadStats::Flush(pFVar8,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar8,false,false);
        }
      }
      FVar10 = StatPtr_STAT_D3D12UploadPoolMemoryUsed;
      if (StatPtr_STAT_D3D12UploadPoolMemoryUsed ==
          (FThreadSafeStaticStat<FStat_STAT_D3D12UploadPoolMemoryUsed>)0x0) {
        pFVar6 = ::FName::FName(&local_res8,"STAT_D3D12UploadPoolMemoryUsed");
        FVar10 = (FThreadSafeStaticStat<FStat_STAT_D3D12UploadPoolMemoryUsed>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12UploadPoolMemoryUsed,
                            *pFVar6,L"UploadPool Memory Used","STATGROUP_D3D12MemoryDetails",
                            "STATCAT_Advanced",L"D3D12RHI: Memory Details",true,false,ST_int64,false
                            ,false,MCR_Physical);
      }
      FVar5 = *(FName *)FVar10;
      auVar17[4] = '\0';
      auVar17[5] = '\0';
      auVar17[6] = '\0';
      auVar17[7] = '\0';
      auVar17[0] = (undefined1)local_res18[0];
      auVar17[1] = local_res18[0]._1_1_;
      auVar17[2] = local_res18[0]._2_1_;
      auVar17[3] = local_res18[0]._3_1_;
      local_res8 = FVar5;
      if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar8 == (FThreadStats *)0x0) {
          pFVar9 = FThreadStatsPool::Get();
          pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
        }
        local_58.NameAndInfo.Number = FVar5.Number & 0xffff8fff | 0x8000;
        local_res8 = FVar5;
        local_58.StatData.Pad = auVar17;
        local_58.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar8,&local_58);
        FStatsTrace::Set(&local_res8,(long64)auVar17);
        if (pFVar8->ScopeCount == 0) {
          FThreadStats::Flush(pFVar8,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar8,false,false);
        }
      }
      FVar11 = StatPtr_STAT_D3D12UploadPoolMemoryFree;
      if (StatPtr_STAT_D3D12UploadPoolMemoryFree ==
          (FThreadSafeStaticStat<FStat_STAT_D3D12UploadPoolMemoryFree>)0x0) {
        pFVar6 = ::FName::FName(&local_res8,"STAT_D3D12UploadPoolMemoryFree");
        FVar11 = (FThreadSafeStaticStat<FStat_STAT_D3D12UploadPoolMemoryFree>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12UploadPoolMemoryFree,
                            *pFVar6,L"UploadPool Memory Free","STATGROUP_D3D12BufferDetails",
                            "STATCAT_Advanced",L"D3D12RHI: Buffer Details",true,false,ST_int64,false
                            ,false,MCR_Physical);
      }
      FVar5 = *(FName *)FVar11;
      auVar18[4] = '\0';
      auVar18[5] = '\0';
      auVar18[6] = '\0';
      auVar18[7] = '\0';
      auVar18[0] = (undefined1)local_res20[0];
      auVar18[1] = local_res20[0]._1_1_;
      auVar18[2] = local_res20[0]._2_1_;
      auVar18[3] = local_res20[0]._3_1_;
      local_res8 = FVar5;
      if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar8 == (FThreadStats *)0x0) {
          pFVar9 = FThreadStatsPool::Get();
          pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
        }
        local_58.NameAndInfo.Number = FVar5.Number & 0xffff8fff | 0x8000;
        local_res8 = FVar5;
        local_58.StatData.Pad = auVar18;
        local_58.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar8,&local_58);
        FStatsTrace::Set(&local_res8,(long64)auVar18);
        if (pFVar8->ScopeCount == 0) {
          FThreadStats::Flush(pFVar8,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar8,false,false);
        }
      }
      FVar12 = StatPtr_STAT_D3D12UploadPoolAlignmentWaste;
      if (StatPtr_STAT_D3D12UploadPoolAlignmentWaste ==
          (FThreadSafeStaticStat<FStat_STAT_D3D12UploadPoolAlignmentWaste>)0x0) {
        pFVar6 = ::FName::FName(&local_res8,"STAT_D3D12UploadPoolAlignmentWaste");
        FVar12 = (FThreadSafeStaticStat<FStat_STAT_D3D12UploadPoolAlignmentWaste>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12UploadPoolAlignmentWaste
                            ,*pFVar6,L"UploadPool Memory Alignment Waste",
                            "STATGROUP_D3D12BufferDetails","STATCAT_Advanced",
                            L"D3D12RHI: Buffer Details",true,false,ST_int64,false,false,MCR_Physical
                           );
      }
      FVar5 = *(FName *)FVar12;
      auVar19[4] = '\0';
      auVar19[5] = '\0';
      auVar19[6] = '\0';
      auVar19[7] = '\0';
      auVar19[0] = (undefined1)local_68;
      auVar19[1] = local_68._1_1_;
      auVar19[2] = local_68._2_1_;
      auVar19[3] = local_68._3_1_;
      local_res8 = FVar5;
      if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar8 == (FThreadStats *)0x0) {
          pFVar9 = FThreadStatsPool::Get();
          pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
        }
        local_58.NameAndInfo.Number = FVar5.Number & 0xffff8fff | 0x8000;
        local_res8 = FVar5;
        local_58.StatData.Pad = auVar19;
        local_58.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar8,&local_58);
        FStatsTrace::Set(&local_res8,(long64)auVar19);
        if (pFVar8->ScopeCount == 0) {
          FThreadStats::Flush(pFVar8,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar8,false,false);
        }
      }
      FVar13 = StatPtr_STAT_D3D12UploadPoolPageCount;
      if (StatPtr_STAT_D3D12UploadPoolPageCount ==
          (FThreadSafeStaticStat<FStat_STAT_D3D12UploadPoolPageCount>)0x0) {
        pFVar6 = ::FName::FName(&local_res8,"STAT_D3D12UploadPoolPageCount");
        FVar13 = (FThreadSafeStaticStat<FStat_STAT_D3D12UploadPoolPageCount>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12UploadPoolPageCount,
                            *pFVar6,L"UploadPool Page Count","STATGROUP_D3D12BufferDetails",
                            "STATCAT_Advanced",L"D3D12RHI: Buffer Details",true,false,ST_int64,false
                            ,false,MCR_Invalid);
      }
      FVar5 = *(FName *)FVar13;
      auVar20[4] = '\0';
      auVar20[5] = '\0';
      auVar20[6] = '\0';
      auVar20[7] = '\0';
      auVar20[0] = (undefined1)local_64;
      auVar20[1] = local_64._1_1_;
      auVar20[2] = local_64._2_1_;
      auVar20[3] = local_64._3_1_;
      local_res8 = FVar5;
      if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar8 == (FThreadStats *)0x0) {
          pFVar9 = FThreadStatsPool::Get();
          pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
        }
        local_58.NameAndInfo.Number = FVar5.Number & 0xffff8fff | 0x8000;
        local_res8 = FVar5;
        local_58.StatData.Pad = auVar20;
        local_58.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar8,&local_58);
        FStatsTrace::Set(&local_res8,(long64)auVar20);
        if (pFVar8->ScopeCount == 0) {
          FThreadStats::Flush(pFVar8,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar8,false,false);
        }
      }
      FVar14 = StatPtr_STAT_D3D12UploadPoolFullPages;
      if (StatPtr_STAT_D3D12UploadPoolFullPages ==
          (FThreadSafeStaticStat<FStat_STAT_D3D12UploadPoolFullPages>)0x0) {
        pFVar6 = ::FName::FName(&local_res8,"STAT_D3D12UploadPoolFullPages");
        FVar14 = (FThreadSafeStaticStat<FStat_STAT_D3D12UploadPoolFullPages>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12UploadPoolFullPages,
                            *pFVar6,L"UploadPool Full Pages","STATGROUP_D3D12BufferDetails",
                            "STATCAT_Advanced",L"D3D12RHI: Buffer Details",true,false,ST_int64,false
                            ,false,MCR_Invalid);
      }
      FVar5 = *(FName *)FVar14;
      auVar21[4] = '\0';
      auVar21[5] = '\0';
      auVar21[6] = '\0';
      auVar21[7] = '\0';
      auVar21[0] = (undefined1)local_60[0];
      auVar21[1] = local_60[0]._1_1_;
      auVar21[2] = local_60[0]._2_1_;
      auVar21[3] = local_60[0]._3_1_;
      if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        local_res8 = FVar5;
        pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar8 == (FThreadStats *)0x0) {
          pFVar9 = FThreadStatsPool::Get();
          pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
        }
        local_58.NameAndInfo.Number = FVar5.Number & 0xffff8fff | 0x8000;
        local_res8 = FVar5;
        local_58.StatData.Pad = auVar21;
        local_58.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar8,&local_58);
        FStatsTrace::Set(&local_res8,(long64)auVar21);
        if (pFVar8->ScopeCount == 0) {
          FThreadStats::Flush(pFVar8,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar8,false,false);
        }
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

