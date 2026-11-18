// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// ~FNDIArrayInstanceData_RenderThreadBase @ 1490b7450

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNDIArrayInstanceData_RenderThreadBase::~FNDIArrayInstanceData_RenderThreadBase
          (FNDIArrayInstanceData_RenderThreadBase *this)

{
  FNiagaraGpuComputeDispatchInterface *pFVar1;
  FRHIShaderResourceView *this_00;
  FRHIUnorderedAccessView *this_01;
  FRHIBuffer *this_02;
  code *pcVar2;
  bool bVar3;
  
  if (this->CountOffset != 0xffffffff) {
    pFVar1 = this->ComputeInterface;
    bVar3 = IsInParallelRenderingThread();
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInParallelRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                         ,0x6a,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FNiagaraGPUInstanceCountManager::FreeEntry
              (&pFVar1->GPUInstanceCounterManager,&this->CountOffset);
    this->CountOffset = 0xffffffff;
  }
  ReleaseData(this);
  this_00 = (this->ArraySRV).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->ArrayUAV).Reference;
  if (this_01 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  this_02 = (this->ArrayBuffer).Reference;
  if (this_02 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_02);
    return;
  }
  return;
}

// operator() @ 1490bd8c0

void __thiscall
`FNDIArrayInstanceData_RenderThreadBase::SimCacheWriteFrame'::__l2::<lambda_1>::operator()
          (void *this,TArrayView<TTuple<void_*,unsigned_int>_const_,int> *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  UNDIArraySimCacheData *this_00;
  bool bVar3;
  int iVar4;
  TTuple<void_*,unsigned_int> *pTVar5;
  ForAnyElementType local_38;
  int local_30 [2];
  FScriptContainerElement *local_28;
  int iStack_20;
  undefined4 uStack_1c;
  TArrayView<unsigned_char_const_,int> local_18;
  
  if (*(char *)((longlong)this + 0x10) == '\0') {
    pTVar5 = TArrayView<TTuple<void_*,unsigned_int>_const_,int>::operator[](param_1,1);
    **(undefined4 **)((longlong)this + 8) = **(undefined4 **)pTVar5;
  }
  if (0 < **(int **)((longlong)this + 8)) {
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30[0] = 0;
    local_30[1] = 0;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,**(int **)((longlong)this + 8) * *(int *)((longlong)this + 0x14),&local_38,
               local_30,local_30 + 1);
    pcVar2 = *(code **)((longlong)this + 0x18);
    uVar1 = **(undefined4 **)((longlong)this + 8);
    pTVar5 = TArrayView<TTuple<void_*,unsigned_int>_const_,int>::operator[](param_1,0);
    (*pcVar2)(local_38.Data,*(undefined8 *)pTVar5,uVar1);
    local_28 = local_38.Data;
    iStack_20 = local_30[0];
    this_00 = *(UNDIArraySimCacheData **)this;
    if (local_30[0] < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_18._12_4_ = uStack_1c;
    local_18.ArrayNum = iStack_20;
    local_18.DataPtr = (uchar *)local_28;
    iVar4 = UNDIArraySimCacheData::FindOrAddData(this_00,&local_18);
    *(int *)(*(longlong *)((longlong)this + 8) + 4) = iVar4;
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data);
    }
  }
  return;
}

// Initialize @ 1491171d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNDIArrayInstanceData_RenderThreadBase::Initialize
          (FNDIArrayInstanceData_RenderThreadBase *this,FRHICommandListImmediate *param_1,
          FNiagaraGpuComputeDispatchInterface *param_2,int param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  this->ComputeInterface = param_2;
  this->DefaultElements = 0;
  this->NumElements = -1;
  this->CountOffset = 0xffffffff;
  if (param_4) {
    this->DefaultElements = param_3;
    bVar2 = IsInParallelRenderingThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInParallelRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                         ,0x6a,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar3 = FNiagaraGPUInstanceCountManager::AcquireOrAllocateEntry
                      (&param_2->GPUInstanceCounterManager,param_1);
    this->CountOffset = uVar3;
  }
  return;
}

// ReleaseData @ 14912a8a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNDIArrayInstanceData_RenderThreadBase::ReleaseData(FNDIArrayInstanceData_RenderThreadBase *this)

{
  FName FVar1;
  FRHIBuffer *this_00;
  FRHIUnorderedAccessView *this_01;
  FRHIShaderResourceView *this_02;
  FName *pFVar2;
  FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory> FVar3;
  FThreadStats *this_03;
  FThreadStatsPool *this_04;
  uchar auVar4 [8];
  FName local_res8;
  FStatMessage local_28;
  
  auVar4[4] = '\0';
  auVar4[5] = '\0';
  auVar4[6] = '\0';
  auVar4[7] = '\0';
  auVar4._0_4_ = this->ArrayNumBytes;
  if (auVar4 != (uchar  [8])0x0) {
    FVar3 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
    if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
      pFVar2 = ::FName::FName(&local_res8,"STAT_NiagaraGPUDataInterfaceMemory");
      FVar3 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,
                         *pFVar2,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                         "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar3;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_03 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_03 == (FThreadStats *)0x0) {
        this_04 = FThreadStatsPool::Get();
        this_03 = FThreadStatsPool::GetFromPool(this_04);
      }
      local_28.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar1;
      local_28.StatData.Pad = auVar4;
      local_28.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_03,&local_28);
      FStatsTrace::Add(&local_res8,-(longlong)auVar4);
      if (this_03->ScopeCount == 0) {
        FThreadStats::Flush(this_03,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_03,false,false);
      }
    }
  }
  this_00 = (this->ArrayBuffer).Reference;
  if (this_00 != (FRHIBuffer *)0x0) {
    (this->ArrayBuffer).Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->ArrayUAV).Reference;
  if (this_01 != (FRHIUnorderedAccessView *)0x0) {
    (this->ArrayUAV).Reference = (FRHIUnorderedAccessView *)0x0;
    FRHIResource::Release((FRHIResource *)this_01);
  }
  this_02 = (this->ArraySRV).Reference;
  if (this_02 != (FRHIShaderResourceView *)0x0) {
    (this->ArraySRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)this_02);
  }
  this->ArrayNumBytes = 0;
  return;
}

// SimCacheWriteFrame @ 149139650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNDIArrayInstanceData_RenderThreadBase::SimCacheWriteFrame
          (FNDIArrayInstanceData_RenderThreadBase *this,FRHICommandListImmediate *param_1,
          UNDIArraySimCacheData *param_2,int param_3,int param_4,
          _func___cdecl_void_void_ptr_void_ptr_int *param_5)

{
  FScriptContainerElement *pFVar1;
  uchar *puVar2;
  int iVar3;
  FNiagaraGpuComputeDispatchInterface *pFVar4;
  FRHIUnorderedAccessView *pFVar5;
  FNiagaraGpuReadbackManager *this_00;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  undefined4 uVar9;
  FRWBuffer *pFVar10;
  longlong lVar11;
  ForElementType<FNiagaraGpuReadbackManager::FBufferRequest> FVar12;
  ForElementType<FRHITransitionInfo> FVar13;
  FNiagaraGPUInstanceCountManager *this_01;
  undefined4 *puVar14;
  undefined1 auStack_248 [32];
  longlong local_228;
  longlong local_220;
  UNDIArraySimCacheData *local_218;
  FScriptContainerElement *pFStack_210;
  undefined4 local_208;
  int iStack_204;
  _func___cdecl_void_void_ptr_void_ptr_int *p_Stack_200;
  ForElementType<FRHITransitionInfo> local_1f8;
  int iStack_1f0;
  undefined4 uStack_1ec;
  ForElementType<FNiagaraGpuReadbackManager::FBufferRequest> local_1e8;
  int iStack_1e0;
  undefined4 uStack_1dc;
  ForElementType<FRHITransitionInfo> local_1d8;
  int iStack_1d0;
  undefined4 uStack_1cc;
  TArrayView<FRHITransitionInfo_const_,int> local_1c8;
  TArrayView<FNiagaraGpuReadbackManager::FBufferRequest_const_,int> local_1b8;
  TArrayView<FRHITransitionInfo_const_,int> local_1a8;
  code *local_198 [5];
  undefined8 *local_170;
  ForElementType<FNiagaraGpuReadbackManager::FBufferRequest> local_168;
  int local_140;
  int local_13c;
  undefined1 local_138 [16];
  uchar local_128;
  uchar local_124 [8];
  uchar local_11c;
  uchar local_110;
  ForElementType<FRHITransitionInfo> local_d8;
  int local_d0;
  int local_cc;
  undefined1 local_c8 [16];
  uchar local_b8;
  uchar local_b4 [4];
  uchar local_b0 [16];
  uchar local_a0;
  ForElementType<FRHITransitionInfo> local_68;
  int local_60;
  int local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_248;
  if (this->ArrayNumBytes != 0) {
    iVar3 = (param_2->GpuFrameData).ArrayNum;
    if (iVar3 <= param_3) {
      TArray<FNDIArraySimCacheDataFrame,TSizedDefaultAllocator<32>_>::AddDefaulted
                (&param_2->GpuFrameData,(param_3 - iVar3) + 1);
    }
    iVar3 = (param_2->GpuFrameData).ArrayNum;
    uVar8 = 0;
    if (param_3 < iVar3) {
      uVar8 = (uint)~param_3 >> 0x1f;
    }
    if (uVar8 == 0) {
      local_228 = (longlong)param_3;
      local_220 = (longlong)iVar3;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    local_168.InlineData._0_8_ = (this->ArrayBuffer).Reference;
    bVar7 = this->CountOffset != 0xffffffff;
    local_168.SecondaryData = (ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>)0x0;
    local_13c = 2;
    pFVar1 = (param_2->GpuFrameData).AllocatorInstance.Data + (longlong)param_3 * 8;
    local_68 = (ForElementType<FRHITransitionInfo>)0x0;
    local_5c = 2;
    uVar9._0_1_ = '\x10';
    uVar9._1_1_ = '\0';
    uVar9._2_1_ = '\0';
    uVar9._3_1_ = '\0';
    local_124[4] = '\0';
    local_124[5] = '\x04';
    local_124[6] = '\0';
    local_124[7] = '\0';
    if (!bVar7) {
      local_124._4_4_ = uVar9;
    }
    local_d8 = (ForElementType<FRHITransitionInfo>)0x0;
    local_168.InlineData._12_4_ = this->ArrayNumBytes;
    local_c8[4] = 0xff;
    local_c8[5] = 0xff;
    local_138[4] = 0xff;
    local_138[5] = 0xff;
    local_cc = 2;
    local_140 = 1;
    local_168.InlineData[8] = '\0';
    local_168.InlineData[9] = '\0';
    local_168.InlineData[10] = '\0';
    local_168.InlineData[0xb] = '\0';
    local_60 = 1;
    local_c8[0] = 0xff;
    local_c8[1] = 0xff;
    local_c8[2] = 0xff;
    local_c8[3] = 0xff;
    local_b8 = '\x02';
    local_b0[0] = 0x80;
    local_b0[1] = '\0';
    local_b0[2] = '\0';
    local_b0[3] = '\0';
    local_b0[4] = '\0';
    local_a0 = '\0';
    local_d0 = 1;
    local_138[0] = 0xff;
    local_138[1] = 0xff;
    local_138[2] = 0xff;
    local_138[3] = 0xff;
    local_128 = '\x02';
    local_124[0] = 0x80;
    local_124[1] = '\0';
    local_124[2] = '\0';
    local_124[3] = '\0';
    local_11c = '\0';
    local_110 = '\0';
    local_138._8_8_ = local_168.InlineData._0_8_;
    local_c8._8_8_ = local_168.InlineData._0_8_;
    local_b4 = (uchar  [4])local_124._4_4_;
    if (bVar7) {
      pFVar4 = this->ComputeInterface;
      bVar7 = IsInParallelRenderingThread();
      if (!bVar7) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInParallelRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                           ,0x6a,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      uVar8 = this->CountOffset;
      this_01 = &pFVar4->GPUInstanceCounterManager;
      pFVar10 = FNiagaraGPUInstanceCountManager::GetInstanceCountBuffer(this_01);
      if (local_140 == local_13c) {
        local_140 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>_>
                              (0x810,&local_168,&local_13c);
      }
      FVar12 = (ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>)&local_168;
      if (local_168.SecondaryData != (ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>)0x0
         ) {
        FVar12 = local_168.SecondaryData;
      }
      lVar11 = (longlong)local_140;
      local_140 = local_140 + 1;
      *(FRHIBuffer **)((longlong)FVar12 + lVar11 * 0x10) = (pFVar10->Buffer).Reference;
      *(uint *)((uchar *)((longlong)FVar12 + 8) + lVar11 * 0x10) = uVar8 << 2;
      puVar2 = (uchar *)((longlong)FVar12 + 0xc) + lVar11 * 0x10;
      puVar2[0] = '\x04';
      puVar2[1] = '\0';
      puVar2[2] = '\0';
      puVar2[3] = '\0';
      pFVar10 = FNiagaraGPUInstanceCountManager::GetInstanceCountBuffer(this_01);
      if (local_60 == local_5c) {
        local_60 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransitionInfo>_>
                             (0x830,(ForElementType<FRHITransitionInfo> *)local_c8,&local_5c);
      }
      FVar13 = (ForElementType<FRHITransitionInfo>)local_c8;
      if (local_68 != (ForElementType<FRHITransitionInfo>)0x0) {
        FVar13 = local_68;
      }
      pFVar5 = (pFVar10->UAV).Reference;
      puVar14 = (undefined4 *)((longlong)local_60 * 0x30 + (longlong)FVar13);
      local_60 = local_60 + 1;
      *puVar14 = 0xffffffff;
      *(undefined2 *)(puVar14 + 1) = 0xffff;
      *(FRHIUnorderedAccessView **)(puVar14 + 2) = pFVar5;
      *(undefined1 *)(puVar14 + 4) = 3;
      puVar14[5] = FNiagaraGPUInstanceCountManager::kCountBufferDefaultState;
      puVar14[6] = 0x80;
      *(undefined1 *)(puVar14 + 7) = 0;
      *(undefined1 *)(puVar14 + 10) = 0;
      pFVar10 = FNiagaraGPUInstanceCountManager::GetInstanceCountBuffer(this_01);
      if (local_d0 == local_cc) {
        local_d0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransitionInfo>_>
                             (0x830,(ForElementType<FRHITransitionInfo> *)local_138,&local_cc);
      }
      pFVar5 = (pFVar10->UAV).Reference;
      FVar13 = (ForElementType<FRHITransitionInfo>)local_138;
      if (local_d8 != (ForElementType<FRHITransitionInfo>)0x0) {
        FVar13 = local_d8;
      }
      puVar14 = (undefined4 *)((longlong)local_d0 * 0x30 + (longlong)FVar13);
      local_d0 = local_d0 + 1;
      *(undefined2 *)(puVar14 + 1) = 0xffff;
      *puVar14 = 0xffffffff;
      *(FRHIUnorderedAccessView **)(puVar14 + 2) = pFVar5;
      *(undefined1 *)(puVar14 + 4) = 3;
      puVar14[5] = 0x80;
      puVar14[6] = FNiagaraGPUInstanceCountManager::kCountBufferDefaultState;
      *(undefined1 *)(puVar14 + 7) = 0;
      *(undefined1 *)(puVar14 + 10) = 0;
    }
    else {
      *(int *)pFVar1 = this->NumElements;
    }
    iVar3 = local_60;
    this_00 = (this->ComputeInterface->GpuReadbackManagerPtr).Ptr;
    local_1f8 = (ForElementType<FRHITransitionInfo>)local_c8;
    if (local_68 != (ForElementType<FRHITransitionInfo>)0x0) {
      local_1f8 = local_68;
    }
    if (local_60 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iStack_1f0 = iVar3;
    local_1c8._12_4_ = uStack_1ec;
    local_1c8.ArrayNum = iVar3;
    local_1c8.DataPtr = (FRHITransitionInfo *)local_1f8;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_1c8,None);
    iStack_204 = param_4;
    local_208 = CONCAT31(local_208._1_3_,this->CountOffset == 0xffffffff);
    p_Stack_200 = param_5;
    local_198[0] = (code *)0x0;
    local_218 = param_2;
    pFStack_210 = pFVar1;
    local_170 = FMemory::Malloc(0x28,8);
    iStack_1e0 = local_140;
    *local_170 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FNDIArrayInstanceData_RenderThreadBase::SimCacheWriteFrame'::`2'::<lambda_1>,0,1>
                  ::_vftable_;
    local_170[1] = local_218;
    local_170[2] = pFStack_210;
    local_170[3] = CONCAT44(iStack_204,local_208);
    local_170[4] = p_Stack_200;
    if (local_170 + 1 != (undefined8 *)0x0) {
      local_198[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`FNDIArrayInstanceData_RenderThreadBase::SimCacheWriteFrame'::__l2::<lambda_1>,void,TArrayView<TTuple<void_*,unsigned_int>_const_,int>_>
                     ::Call;
    }
    local_1e8 = (ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>)&local_168;
    if (local_168.SecondaryData != (ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>)0x0)
    {
      local_1e8 = local_168.SecondaryData;
    }
    if (local_140 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    local_1b8._12_4_ = uStack_1dc;
    local_1b8.ArrayNum = iStack_1e0;
    local_1b8.DataPtr = (FBufferRequest *)local_1e8;
    FNiagaraGpuReadbackManager::EnqueueReadbacks
              (this_00,(FRHICommandList *)param_1,&local_1b8,
               (TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)> *)
               local_198);
    iStack_1d0 = local_d0;
    local_1d8 = (ForElementType<FRHITransitionInfo>)local_138;
    if (local_d8 != (ForElementType<FRHITransitionInfo>)0x0) {
      local_1d8 = local_d8;
    }
    if (local_d0 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    local_1a8._12_4_ = uStack_1cc;
    local_1a8.ArrayNum = iStack_1d0;
    local_1a8.DataPtr = (FRHITransitionInfo *)local_1d8;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_1a8,None);
    FNiagaraGpuReadbackManager::WaitCompletion(this_00,param_1);
    if (local_d8 != (ForElementType<FRHITransitionInfo>)0x0) {
      FMemory::Free((void *)local_d8);
    }
    if (local_68 != (ForElementType<FRHITransitionInfo>)0x0) {
      FMemory::Free((void *)local_68);
    }
    if (local_168.SecondaryData != (ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>)0x0)
    {
      FMemory::Free((void *)local_168.SecondaryData);
    }
  }
  return;
}

// UpdateDataInternal @ 14913f190

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNDIArrayInstanceData_RenderThreadBase::UpdateDataInternal
          (FNDIArrayInstanceData_RenderThreadBase *this,FRHICommandList *param_1,int param_2,
          int param_3,uint param_4,EPixelFormat param_5)

{
  TRefCountPtr<FRHIBuffer> *pTVar1;
  TRefCountPtr<FRHIShaderResourceView> *pTVar2;
  TRefCountPtr<FRHIUnorderedAccessView> *pTVar3;
  FName FVar4;
  FRHIBuffer *pFVar5;
  FRHIShaderResourceView *this_00;
  FRHIUnorderedAccessView *this_01;
  FNiagaraGpuComputeDispatchInterface *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  ERHIBufferInitAction EVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory> FVar12;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  TRefCountPtr<FRHIBuffer> TVar13;
  TRefCountPtr<FRHIShaderResourceView> TVar14;
  uchar auVar15 [8];
  FNameEntryId FVar16;
  TTuple<unsigned_int,unsigned_int> local_res8;
  FLLMScope local_res20 [2];
  int iStack_1a0;
  undefined4 uStack_19c;
  TRefCountPtr<FRHIUnorderedAccessView> local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  uint local_180;
  int iStack_17c;
  undefined4 uStack_178;
  int iStack_174;
  wchar_t *local_170;
  undefined8 uStack_168;
  uint local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  FName local_148;
  undefined1 local_140 [16];
  FMemScope local_130;
  FStatMessage local_128;
  FNameEntryId local_118;
  undefined2 local_114;
  FRHITransitionInfo_u_8 local_110;
  EType local_108;
  ERHIAccess local_104;
  ERHIAccess local_100;
  EResourceTransitionFlags local_fc;
  bool local_f0;
  FRHITransitionInfo local_e8;
  FName local_b8 [2];
  TArrayView<FRHITransitionInfo_const_,int> local_a8;
  TArrayView<TTuple<unsigned_int,unsigned_int>_const_,int> local_98;
  TArrayView<FRHITransitionInfo_const_,int> local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  wchar_t *local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if (param_3 != this->NumElements) {
    uVar9 = (param_3 + 1) * param_4;
    this->NumElements = param_3;
    auVar15[4] = '\0';
    auVar15[5] = '\0';
    auVar15[6] = '\0';
    auVar15[7] = '\0';
    auVar15._0_4_ = uVar9;
    this->ArrayNumBytes = uVar9;
    if (uVar9 != 0) {
      FVar12 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
      if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
          (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
        pFVar11 = ::FName::FName(local_b8,"STAT_NiagaraGPUDataInterfaceMemory");
        FVar12 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory
                            ,*pFVar11,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                            "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,
                            MCR_Physical);
      }
      FVar4 = *(FName *)FVar12;
      FVar16 = FVar4.ComparisonIndex.Value;
      EVar10 = FVar4.Number;
      local_res8._0_4_ = FVar16.Value;
      local_res8._4_4_ = EVar10;
      if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        this_02 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_02 == (FThreadStats *)0x0) {
          this_03 = FThreadStatsPool::Get();
          this_02 = FThreadStatsPool::GetFromPool(this_03);
        }
        local_128.NameAndInfo.Number = EVar10 & 0xffffafff | 0xa000;
        local_148 = FVar4;
        local_128.StatData.Pad = auVar15;
        local_128.NameAndInfo.Index.Value = FVar16.Value;
        FThreadStats::AddStatMessage(this_02,&local_128);
        FStatsTrace::Add(&local_148,(long64)auVar15);
        if (this_02->ScopeCount == 0) {
          FThreadStats::Flush(this_02,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_02,false,false);
        }
      }
    }
    local_180 = this->ArrayNumBytes;
    iStack_17c = GPixelFormats[param_5].BlockBytes;
    uStack_178 = 0x4129;
    if (this->CountOffset == 0xffffffff) {
      uStack_178 = 0x4121;
    }
    uStack_154 = 0;
    uStack_150 = 0;
    iStack_174 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    uStack_168 = 0;
    local_78 = CONCAT44(iStack_17c,local_180);
    uStack_70 = CONCAT44(iStack_174,uStack_178);
    local_170 = L"NiagaraDataInterfaceArray";
    local_160 = 0x400;
    if (this->CountOffset == 0xffffffff) {
      local_160 = 0x10;
    }
    uStack_15c = 0;
    uStack_158 = 0;
    uStack_14c = 0;
    local_58 = (ulonglong)local_160;
    uStack_50 = 0;
    local_68 = L"NiagaraDataInterfaceArray";
    uStack_60 = 0;
    local_48 = 0;
    TVar13 = FRHICommandListBase::CreateBuffer
                       ((FRHICommandListBase *)param_1,(FRHIBufferCreateDesc *)local_140);
    pTVar1 = &this->ArrayBuffer;
    if ((FRHIBuffer *)pTVar1 != TVar13.Reference) {
      pFVar5 = pTVar1->Reference;
      pTVar1->Reference = (FRHIBuffer *)(TVar13.Reference)->_padding_;
      (TVar13.Reference)->_padding_ = 0;
      if (pFVar5 != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar5);
      }
    }
    if ((FRHIResource *)local_140._0_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_140._0_8_);
    }
    uStack_19c = 0;
    TVar14 = FRHICommandListBase::CreateShaderResourceView
                       ((FRHICommandListBase *)param_1,(FRHIBuffer *)(local_140 + 8),
                        (FInitializer *)pTVar1->Reference);
    pTVar2 = &this->ArraySRV;
    if ((FRHIShaderResourceView *)pTVar2 != TVar14.Reference) {
      this_00 = pTVar2->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar2->Reference = *TVar14.Reference;
      *(undefined8 *)TVar14.Reference = 0;
      if (this_00 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
      }
    }
    if ((FRHIResource *)local_140._8_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_140._8_8_);
    }
    if (this->CountOffset != 0xffffffff) {
      pFVar5 = pTVar1->Reference;
      uStack_188 = 0;
      local_190._0_2_ = CONCAT11(param_5,1);
      local_190 = (ulonglong)CONCAT12(1,(undefined2)local_190);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        ::FName::FName(&`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
                        ::__l2::LLMScope_Name991,L"RHIMisc/CreateUnorderedAccessView");
        _Init_thread_footer(&`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      FLLMScope::FLLMScope
                (local_res20,
                 `public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
                 ::__l2::LLMScope_Name991,false,None,Default,true);
      FMemScope::FMemScope
                (&local_130,
                 &`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
                  ::__l2::LLMScope_Name991,true);
      (**(code **)(GDynamicRHI->_padding_ + 0x1b8))
                (GDynamicRHI,&local_198,param_1,pFVar5,&local_190);
      FMemScope::~FMemScope(&local_130);
      FLLMScope::~FLLMScope(local_res20);
      pTVar3 = &this->ArrayUAV;
      if (pTVar3 != &local_198) {
        this_01 = pTVar3->Reference;
        pTVar3->Reference = local_198.Reference;
        local_198.Reference = (FRHIUnorderedAccessView *)0x0;
        if (this_01 == (FRHIUnorderedAccessView *)0x0) goto LAB_14913f562;
        FRHIResource::Release((FRHIResource *)this_01);
      }
      if (local_198.Reference != (FRHIUnorderedAccessView *)0x0) {
        FRHIResource::Release((FRHIResource *)local_198.Reference);
      }
    }
  }
LAB_14913f562:
  if (this->CountOffset != 0xffffffff) {
    pFVar6 = this->ComputeInterface;
    bVar8 = IsInParallelRenderingThread();
    if ((!bVar8) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInParallelRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                           ,0x6a,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (((pFVar6->GPUInstanceCounterManager).AllocatedInstanceCounts <
         (pFVar6->GPUInstanceCounterManager).UsedInstanceCounts) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("UsedInstanceCounts <= AllocatedInstanceCounts",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraGPUInstanceCountManager.h"
                           ,0x44,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_res8._0_4_ = this->CountOffset;
    local_110 = (FRHITransitionInfo_u_8)
                (pFVar6->GPUInstanceCounterManager).CountBuffer.UAV.Reference;
    local_104 = FNiagaraGPUInstanceCountManager::kCountBufferDefaultState;
    local_a8.DataPtr = (FRHITransitionInfo *)&local_118;
    local_a8.ArrayNum = 1;
    local_a8._12_4_ = uStack_19c;
    local_118.Value = 0xffffffff;
    local_114 = 0xffff;
    local_108 = UAV;
    local_100 = UAVCompute;
    local_fc = None;
    local_f0 = false;
    local_res8._4_4_ = param_2;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_a8,None);
    local_98.DataPtr = &local_res8;
    local_98.ArrayNum = 1;
    local_98._12_4_ = uStack_19c;
    NiagaraClearCounts::ClearCountsUInt
              (param_1,(pFVar6->GPUInstanceCounterManager).CountBuffer.UAV.Reference,&local_98);
    local_e8.field1_0x8 =
         (FRHITransitionInfo_u_8)(pFVar6->GPUInstanceCounterManager).CountBuffer.UAV.Reference;
    local_e8.AccessAfter = FNiagaraGPUInstanceCountManager::kCountBufferDefaultState;
    local_88.DataPtr = &local_e8;
    local_88.ArrayNum = 1;
    local_88._12_4_ = uStack_19c;
    local_e8._padding_._0_4_ = 0xffffffff;
    local_e8._padding_._4_2_ = 0xffff;
    local_e8.Type = UAV;
    local_e8.AccessBefore = UAVCompute;
    local_e8.Flags = None;
    local_e8.CommitInfo.bIsSet = false;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_88,None);
  }
  return;
}

