// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 7

// FRDGTrace @ 145d8d240

FRDGTrace * __thiscall FRDGTrace::FRDGTrace(FRDGTrace *this)

{
  (this->TransientAllocationStats).MemoryRanges.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TransientAllocationStats).MemoryRanges.ArrayNum = 0;
  (this->TransientAllocationStats).MemoryRanges.ArrayMax = 0;
  *(undefined8 *)&(this->TransientAllocationStats).Resources = 0;
  *(undefined8 *)&(this->TransientAllocationStats).Resources.field_0x8 = 0;
  *(undefined8 *)&(this->TransientAllocationStats).Resources.field_0x20 = 0;
  *(undefined4 *)&(this->TransientAllocationStats).Resources.field_0x28 = 0;
  *(undefined4 *)&(this->TransientAllocationStats).Resources.field_0x2c = 0x80;
  *(undefined4 *)&(this->TransientAllocationStats).Resources.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TransientAllocationStats).Resources.field_0x34 = 0;
  *(undefined8 *)&(this->TransientAllocationStats).Resources.field_0x40 = 0;
  *(undefined4 *)&(this->TransientAllocationStats).Resources.field_0x48 = 0;
  this->GraphStartCycles = 0;
  this->ResourceOrder = 0;
  if ((-1 < RDGChannel->Enabled) && (GRDGImmediateMode == 0)) {
    this->bEnabled = true;
    return this;
  }
  this->bEnabled = false;
  return this;
}

// AddBufferPassDependency @ 145d9a6c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FRDGTrace::AddBufferPassDependency(FRDGTrace *this,FRDGBuffer *param_1,FRDGPass *param_2)

{
  TRDGHandle<FRDGPass,unsigned_int> *pTVar1;
  int *piVar2;
  TArray<TRDGHandle<FRDGBuffer,unsigned_int>,TRDGArrayAllocator<0>_> *pTVar3;
  TRDGHandle<FRDGBuffer,unsigned_int> *pTVar4;
  TRDGHandle<FRDGBuffer,unsigned_int> *pTVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  
  if (this->bEnabled != false) {
    pTVar3 = &param_2->TraceBuffers;
    pTVar5 = (pTVar3->AllocatorInstance).Data;
    pTVar4 = &param_1->Handle;
    if ((pTVar5 <= pTVar4) && (pTVar4 < pTVar5 + (param_2->TraceBuffers).ArrayMax)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar8 = (param_2->TraceBuffers).ArrayNum;
    piVar2 = &(param_2->TraceBuffers).ArrayMax;
    if (iVar8 == *piVar2) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<TRDGHandle<FRDGBuffer,unsigned_int>_>_>
                        (0x404,&pTVar3->AllocatorInstance,piVar2);
    }
    (param_2->TraceBuffers).ArrayNum = iVar8 + 1;
    pTVar1 = &param_2->Handle;
    (pTVar3->AllocatorInstance).Data[iVar8].Index = pTVar4->Index;
    if (((undefined1 *)param_1->_padding_ <= pTVar1) &&
       (pTVar1 < (undefined1 *)param_1->_padding_ +
                 (longlong)*(int *)((longlong)&param_1->_padding_ + 4) * 4)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar8 = (int)param_1->_padding_;
    piVar2 = (int *)((longlong)&param_1->_padding_ + 4);
    if (iVar8 == *piVar2) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<TRDGHandle<FRDGPass,unsigned_int>_>_>
                        (0x404,(ForElementType<TRDGHandle<FRDGPass,unsigned_int>_> *)
                               &param_1->_padding_,piVar2);
    }
    *(int *)&param_1->_padding_ = iVar8 + 1;
    *(uint *)(param_1->_padding_ + (longlong)iVar8 * 4) = pTVar1->Index;
  }
  return;
}

// AddResource @ 145d9f980

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FRDGTrace::AddResource(FRDGTrace *this,FRDGViewableResource *param_1)

{
  uint uVar1;
  
  uVar1 = this->ResourceOrder;
  this->ResourceOrder = uVar1 + 1;
  param_1->TraceOrder = uVar1;
  return;
}

// AddTexturePassDependency @ 145d9fb10

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRDGTrace::AddTexturePassDependency(FRDGTrace *this,FRDGTexture *param_1,FRDGPass *param_2)

{
  TRDGHandle<FRDGPass,unsigned_int> *pTVar1;
  int *piVar2;
  TArray<TRDGHandle<FRDGTexture,unsigned_int>,TRDGArrayAllocator<0>_> *pTVar3;
  TRDGHandle<FRDGTexture,unsigned_int> *pTVar4;
  TRDGHandle<FRDGTexture,unsigned_int> *pTVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  
  if (this->bEnabled != false) {
    pTVar3 = &param_2->TraceTextures;
    pTVar5 = (pTVar3->AllocatorInstance).Data;
    pTVar4 = &param_1->Handle;
    if ((pTVar5 <= pTVar4) && (pTVar4 < pTVar5 + (param_2->TraceTextures).ArrayMax)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar8 = (param_2->TraceTextures).ArrayNum;
    piVar2 = &(param_2->TraceTextures).ArrayMax;
    if (iVar8 == *piVar2) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<TRDGHandle<FRDGTexture,unsigned_int>_>_>
                        (0x404,&pTVar3->AllocatorInstance,piVar2);
    }
    (param_2->TraceTextures).ArrayNum = iVar8 + 1;
    pTVar1 = &param_2->Handle;
    (pTVar3->AllocatorInstance).Data[iVar8].Index = pTVar4->Index;
    if (((undefined1 *)param_1->_padding_ <= pTVar1) &&
       (pTVar1 < (undefined1 *)param_1->_padding_ +
                 (longlong)*(int *)((longlong)&param_1->_padding_ + 4) * 4)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar8 = (int)param_1->_padding_;
    piVar2 = (int *)((longlong)&param_1->_padding_ + 4);
    if (iVar8 == *piVar2) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<TRDGHandle<FRDGPass,unsigned_int>_>_>
                        (0x404,(ForElementType<TRDGHandle<FRDGPass,unsigned_int>_> *)
                               &param_1->_padding_,piVar2);
    }
    *(int *)&param_1->_padding_ = iVar8 + 1;
    *(uint *)(param_1->_padding_ + (longlong)iVar8 * 4) = pTVar1->Index;
  }
  return;
}

// IsEnabled @ 145dc0eb0

bool __thiscall FRDGTrace::IsEnabled(FRDGTrace *this)

{
  return this->bEnabled;
}

// OutputGraphBegin @ 145dc2a50

void __thiscall FRDGTrace::OutputGraphBegin(FRDGTrace *this)

{
  LARGE_INTEGER local_res8 [4];
  
  if (this->bEnabled != false) {
    QueryPerformanceCounter(local_res8);
    this->GraphStartCycles = (ulong64)local_res8[0];
  }
  return;
}

// OutputGraphEnd @ 145dc2a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FRDGTrace::OutputGraphEnd(FRDGTrace *this,FRDGBuilder *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement FVar2;
  FRDGPass *pFVar3;
  uchar *puVar4;
  FRDGScope *pFVar5;
  FRDGScope *pFVar6;
  FRDGScope *pFVar7;
  FRDGTexture *pFVar8;
  FRHITransientTexture *pFVar9;
  FRDGBuffer *pFVar10;
  FRHITransientBuffer *pFVar11;
  code *pcVar12;
  FRDGTrace *pFVar13;
  TMap<FRHITransientResource_const_*,TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHITransientResource_const_*,TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,0>_>
  *pTVar14;
  FRHITransientResource *pFVar15;
  undefined8 uVar16;
  EBufferUsageFlags *pEVar17;
  undefined4 *puVar18;
  bool bVar19;
  int iVar20;
  size_t sVar21;
  FWriteBuffer *pFVar22;
  FRDGScope_RHI *pFVar23;
  wchar_t *_Str;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  ForElementType<FRHITransientAllocationStats::FAllocation> _Dst;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  FScriptContainerElement *pFVar31;
  void *pvVar32;
  EBufferUsageFlags EVar33;
  EBufferUsageFlags EVar34;
  uint uVar35;
  FScriptContainerElement *pFVar36;
  undefined1 *puVar37;
  uint *puVar38;
  undefined2 uVar39;
  TBitArray<FDefaultBitArrayAllocator> *pTVar40;
  bool bVar41;
  undefined1 auStackY_388 [32];
  <lambda_1> local_347;
  undefined1 local_346 [6];
  ForAnyElementType local_340;
  undefined8 local_338;
  ForAnyElementType local_330;
  undefined8 local_328;
  ForAnyElementType local_320;
  undefined8 local_318;
  byte local_310;
  FRDGTrace *local_308;
  undefined1 local_300 [8];
  ForAnyElementType local_2f8;
  undefined8 local_2f0;
  ForAnyElementType local_2e8;
  uint local_2e0;
  uint local_2dc;
  ForAnyElementType local_2d8;
  undefined8 local_2d0;
  ulonglong local_2c8;
  TBitArray<FDefaultBitArrayAllocator> *local_2c0;
  int local_2b8;
  LARGE_INTEGER local_2b0;
  FRHITransientTexture *local_2a8;
  FRHITransientBuffer *local_2a0;
  TMap<FRHITransientResource_const_*,TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHITransientResource_const_*,TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,0>_>
  *local_298;
  int iStack_290;
  uint uStack_28c;
  undefined1 *local_288;
  undefined4 uStack_280;
  uint uStack_27c;
  int local_278;
  undefined4 uStack_274;
  int iStack_270;
  undefined4 uStack_26c;
  TMap<FRHITransientResource_const_*,TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHITransientResource_const_*,TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,0>_>
  *local_268;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_260;
  undefined8 uStack_240;
  undefined4 local_21c;
  FRHITransientResource *local_218;
  ForElementType<FRHITransientAllocationStats::FAllocation> local_210;
  int local_1d8;
  int local_1d4;
  FLogScope local_1d0;
  FLogScope local_1c0;
  undefined1 local_1b0 [16];
  TLogScope<1> local_1a0;
  EBufferUsageFlags *local_190;
  longlong local_188;
  TLogScope<1> local_180;
  undefined4 *local_170;
  longlong local_168;
  TLogScope<0> local_160;
  undefined1 local_148 [256];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_388;
  if (this->bEnabled != false) {
    bVar41 = -1 < CpuChannel->Enabled;
    local_308 = this;
    if (bVar41) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId144,"FRDGTrace::OutputGraphEnd",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphTrace.cpp"
                 ,0x90);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId144);
    }
    if ((param_1->BuilderName).FormattedEventName.Data.ArrayNum < 2) {
      pFVar36 = (FScriptContainerElement *)(param_1->BuilderName).EventFormat;
    }
    else {
      pFVar36 = (param_1->BuilderName).FormattedEventName.Data.AllocatorInstance.Data;
    }
    uVar28 = (this->TransientAllocationStats).MemoryRanges.ArrayNum;
    local_2d8.Data = (FScriptContainerElement *)0x0;
    local_2e0 = 0;
    local_2dc = 0;
    local_2d0 = 0;
    local_2e8.Data = (FScriptContainerElement *)0x0;
    local_2f8.Data = (FScriptContainerElement *)0x0;
    local_2f0 = 0;
    if ((int)uVar28 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar28);
    }
    if (0 < (int)uVar28) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar28,&local_2d8,0,(int *)((longlong)&local_2d0 + 4));
    }
    uVar28 = (this->TransientAllocationStats).MemoryRanges.ArrayNum;
    if ((int)uVar28 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar28);
    }
    if ((int)local_2dc < (int)uVar28) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar28,&local_2e8,local_2e0,(int *)&local_2dc);
    }
    uVar28 = (this->TransientAllocationStats).MemoryRanges.ArrayNum;
    if ((int)uVar28 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar28);
    }
    local_2c0 = (TBitArray<FDefaultBitArrayAllocator> *)0x1;
    if (local_2f0._4_4_ < (int)uVar28) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar28,&local_2f8,(int)local_2f0,(int *)((longlong)&local_2f0 + 4));
    }
    pFVar31 = (this->TransientAllocationStats).MemoryRanges.AllocatorInstance.Data;
    iVar30 = (this->TransientAllocationStats).MemoryRanges.ArrayNum;
    pFVar1 = pFVar31 + (longlong)iVar30 * 0x18;
    while( true ) {
      if ((this->TransientAllocationStats).MemoryRanges.ArrayNum != iVar30) {
        local_346[0] = 0;
        `TCheckedPointerIterator<FRHITransientAllocationStats::FMemoryRange,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_346);
      }
      if (pFVar31 == pFVar1) break;
      if ((int)local_2d0 == local_2d0._4_4_) {
        iVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_2d8,(int *)((longlong)&local_2d0 + 4));
        local_2d0 = CONCAT44(local_2d0._4_4_,iVar20);
      }
      lVar25 = (longlong)(int)local_2d0;
      local_2d0 = CONCAT44(local_2d0._4_4_,(int)local_2d0 + 1);
      *(undefined8 *)(local_2d8.Data + lVar25 * 8) = *(undefined8 *)(pFVar31 + 8);
      if (local_2e0 == local_2dc) {
        local_2e0 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_2e8,(int *)&local_2dc);
      }
      uVar28 = local_2e0 + 1;
      *(undefined8 *)(local_2e8.Data + (longlong)(int)local_2e0 * 8) = *(undefined8 *)pFVar31;
      FVar2 = pFVar31[0x10];
      iVar20 = (int)local_2f0;
      local_2e0 = uVar28;
      if ((int)local_2f0 == local_2f0._4_4_) {
        iVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&local_2f8,(int *)((longlong)&local_2f0 + 4));
      }
      pFVar31 = pFVar31 + 0x18;
      local_2f0 = CONCAT44(local_2f0._4_4_,iVar20 + 1);
      local_2f8.Data[iVar20] = FVar2;
    }
    if (-1 < RDGChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<FRDGTraceGraphMessageFields>((TLogScope<1> *)&local_1d0);
      sVar21 = wcslen((wchar_t *)pFVar36);
      UE::Trace::Private::Field_WriteStringWide(0,(wchar_t *)pFVar36,(uint)sVar21 & 0xffff);
      *(ulong64 *)local_1d0.Ptr = this->GraphStartCycles;
      QueryPerformanceCounter(&local_2b0);
      *(LARGE_INTEGER *)((longlong)local_1d0.Ptr + 8) = local_2b0;
      *(int *)((longlong)local_1d0.Ptr + 0x10) = (param_1->Passes).Array.ArrayNum;
      UE::Trace::Private::Field_WriteAuxData(4,(uchar *)local_2d8.Data,(uint)(ushort)local_2d0 << 3)
      ;
      UE::Trace::Private::Field_WriteAuxData(5,(uchar *)local_2e8.Data,(local_2e0 & 0xffff) << 3);
      UE::Trace::Private::Field_WriteAuxData(6,(uchar *)local_2f8.Data,(uint)(ushort)local_2f0);
      UE::Trace::Private::TLogScope<1>::operator+=((TLogScope<1> *)&local_1d0,&local_1d0);
    }
    if (local_2f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data);
    }
    if (local_2e8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e8.Data);
    }
    if (local_2d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d8.Data);
    }
    for (uVar28 = 0; uVar29 = 0, uVar28 != (param_1->Passes).Array.ArrayNum; uVar28 = uVar28 + 1) {
      if ((uVar28 == 0xffffffff) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphDefinitions.h"
                              ,0x166,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar29 = 0;
      if ((int)uVar28 < (param_1->Passes).Array.ArrayNum) {
        uVar29 = ~uVar28 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar3 = (param_1->Passes).Array.AllocatorInstance.Data[(int)uVar28];
      if ((pFVar3->Name).FormattedEventName.Data.ArrayNum < 2) {
        pFVar36 = (FScriptContainerElement *)(pFVar3->Name).EventFormat;
      }
      else {
        pFVar36 = (pFVar3->Name).FormattedEventName.Data.AllocatorInstance.Data;
      }
      if (-1 < RDGChannel->Enabled) {
        UE::Trace::Private::FLogScope::Enter<FRDGTracePassMessageFields>((TLogScope<1> *)local_1b0);
        sVar21 = wcslen((wchar_t *)pFVar36);
        UE::Trace::Private::Field_WriteStringWide(0,(wchar_t *)pFVar36,(uint)sVar21 & 0xffff);
        if ((uVar28 == 0xffffffff) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphDefinitions.h"
                                ,0x166,L""), bVar19)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        uVar16 = local_1b0._0_8_;
        *(uint *)(local_1b0._0_8_ + 0x10) = uVar28;
        *(uint *)(local_1b0._0_8_ + 0x14) = (pFVar3->GraphicsForkPass).Index;
        *(uint *)(local_1b0._0_8_ + 0x18) = (pFVar3->GraphicsJoinPass).Index;
        UE::Trace::Private::Field_WriteAuxData
                  (6,(uchar *)(pFVar3->TraceTextures).AllocatorInstance.Data,
                   ((pFVar3->TraceTextures).ArrayNum & 0x1ffffU) << 2);
        UE::Trace::Private::Field_WriteAuxData
                  (7,(uchar *)(pFVar3->TraceBuffers).AllocatorInstance.Data,
                   ((pFVar3->TraceBuffers).ArrayNum & 0x1ffffU) << 2);
        *(ERDGPassFlags *)(uVar16 + 0x1c) = pFVar3->Flags;
        *(ushort *)(uVar16 + 0x1e) = (ushort)pFVar3->Pipeline;
        *(byte *)(uVar16 + 0x20) = (pFVar3->field10_0x56).PacketBits_AsyncSetupQueue >> 2 & 1;
        *(byte *)(uVar16 + 0x21) = *(byte *)&pFVar3->field9_0x54 >> 2 & 1;
        *(byte *)(uVar16 + 0x22) = *(byte *)&pFVar3->field9_0x54 >> 3 & 1;
        *(byte *)(uVar16 + 0x23) = *(byte *)&pFVar3->field9_0x54 & 1;
        *(byte *)(uVar16 + 0x24) = *(byte *)&pFVar3->field9_0x54 >> 1 & 1;
        *(byte *)(uVar16 + 0x25) = (pFVar3->field11_0x57).PacketBits_ParallelExecute & 1;
        *(byte *)(uVar16 + 0x26) = (pFVar3->field11_0x57).PacketBits_ParallelExecute >> 1 & 1;
        *(byte *)(uVar16 + 0x27) = (pFVar3->field11_0x57).PacketBits_ParallelExecute >> 2 & 1;
        *(bool *)(uVar16 + 0x28) = pFVar3->TaskMode != Inline;
        *(bool *)(uVar16 + 0x29) = pFVar3->TaskMode == Async;
        *(undefined1 *)(uVar16 + 0x2a) = 1;
        pFVar22 = UE::Trace::Private::Writer_GetBuffer();
        *pFVar22->Cursor = '\x06';
        puVar4 = pFVar22->Cursor;
        pFVar22->Cursor = puVar4 + 1;
        if (pFVar22 != (FWriteBuffer *)local_1b0._8_8_) {
          pFVar22->Committed = puVar4 + 1;
        }
        *(uchar **)(local_1b0._8_8_ + 0x28) = *(uchar **)(local_1b0._8_8_ + 0x20);
      }
      if ((uVar28 == 0xffffffff) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphDefinitions.h"
                              ,399,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
    local_347 = (<lambda_1>)0x0;
    for (; uVar28 = 0, uVar29 != (param_1->Passes).Array.ArrayNum; uVar29 = uVar29 + 1) {
      if ((uVar29 == 0xffffffff) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphDefinitions.h"
                              ,0x166,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar35 = 0;
      if ((int)uVar29 < (param_1->Passes).Array.ArrayNum) {
        uVar35 = ~uVar29 >> 0x1f;
      }
      if ((uVar35 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar5 = (param_1->Passes).Array.AllocatorInstance.Data[(int)uVar29]->Scope;
      if ((pFVar5 != (FRDGScope *)0x0) && (pFVar5->bVisited == false)) {
        pFVar5->bVisited = true;
        `FRDGTrace::OutputGraphEnd'::__l25::<lambda_1>::
        operator()<_FRDGTrace::OutputGraphEnd_::__l25::<lambda_1>_>
                  (&local_347,pFVar5->Parent,&local_347);
        if (((pFVar5->Impl).Impl.TypeIndex == '\x02') &&
           (((pFVar23 = TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>
                        ::Get<FRDGScope_RHI>(&(pFVar5->Impl).Impl), pFVar23 != (FRDGScope_RHI *)0x0
             && (pFVar5->CPUFirstPass != (FRDGPass *)0x0)) &&
            (pFVar5->CPULastPass != (FRDGPass *)0x0)))) {
          _Str = (wchar_t *)(**(code **)(pFVar23->Node->_padding_ + 0x10))(pFVar23->Node,local_148);
          uVar39 = 0;
          pFVar6 = pFVar5->Parent;
          pFVar7 = pFVar5;
          while (pFVar6 != (FRDGScope *)0x0) {
            if ((((pFVar7->Impl).Impl.TypeIndex == '\x02') &&
                (pFVar23 = TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>
                           ::Get<FRDGScope_RHI>(&(pFVar7->Impl).Impl),
                pFVar23 != (FRDGScope_RHI *)0x0)) &&
               ((pFVar7->CPUFirstPass != (FRDGPass *)0x0 && (pFVar7->CPULastPass != (FRDGPass *)0x0)
                ))) {
              uVar28 = uVar28 + 1;
            }
            uVar39 = (undefined2)uVar28;
            pFVar7 = pFVar7->Parent;
            pFVar6 = pFVar7->Parent;
          }
          if (-1 < RDGChannel->Enabled) {
            UE::Trace::Private::FLogScope::Enter<FRDGTraceScopeMessageFields>
                      ((TLogScope<1> *)&local_1c0);
            sVar21 = wcslen(_Str);
            UE::Trace::Private::Field_WriteStringWide(0,_Str,(uint)sVar21 & 0xffff);
            *(uint *)local_1c0.Ptr = (pFVar5->CPUFirstPass->Handle).Index;
            *(uint *)((longlong)local_1c0.Ptr + 4) = (pFVar5->CPULastPass->Handle).Index;
            *(undefined2 *)((longlong)local_1c0.Ptr + 8) = uVar39;
            *(undefined1 *)((longlong)local_1c0.Ptr + 10) = 1;
            UE::Trace::Private::TLogScope<1>::operator+=((TLogScope<1> *)&local_1c0,&local_1c0);
          }
        }
      }
      if ((uVar29 == 0xffffffff) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphDefinitions.h"
                              ,399,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
    local_340.Data = (FScriptContainerElement *)0x0;
    local_338 = 0;
    local_330.Data = (FScriptContainerElement *)0x0;
    local_328 = 0;
    local_320.Data = (FScriptContainerElement *)0x0;
    local_318 = 0;
    local_310 = 0;
    while( true ) {
      uVar29 = 0;
      if (uVar28 == (param_1->Textures).Array.ArrayNum) break;
      if ((uVar28 == 0xffffffff) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphDefinitions.h"
                              ,0x166,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar29 = 0;
      if ((int)uVar28 < (param_1->Textures).Array.ArrayNum) {
        uVar29 = ~uVar28 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      local_2c8 = 0;
      pFVar8 = (param_1->Textures).Array.AllocatorInstance.Data[(int)uVar28];
      if (pFVar8->_padding_ != 0) {
        if (pFVar8->TransientTexture == (FRHITransientTexture *)0x0) {
          uVar29 = (**(code **)(GDynamicRHI->_padding_ + 0x1d0))();
          local_2c8 = (ulonglong)uVar29;
        }
        else {
          local_2c8 = pFVar8->TransientTexture->_padding_;
        }
      }
      bVar19 = (longlong)local_338 < 0;
      pFVar9 = pFVar8->TransientTexture;
      local_338 = local_338 & 0xffffffff00000000;
      if (bVar19) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&local_340,0,(int *)((longlong)&local_338 + 4));
      }
      bVar19 = (longlong)local_328 < 0;
      local_328 = local_328 & 0xffffffff00000000;
      if (bVar19) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&local_330,0,(int *)((longlong)&local_328 + 4));
      }
      bVar19 = (longlong)local_318 < 0;
      local_318 = local_318 & 0xffffffff00000000;
      if (bVar19) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,0,&local_320,0,(int *)((longlong)&local_318 + 4));
      }
      local_310 = 0;
      uVar35 = 0xffffffff;
      uVar29 = 0xffffffff;
      if (pFVar9 != (FRHITransientTexture *)0x0) {
        `FRDGTrace::OutputGraphEnd'::__l2::FTransientAllocation::Fill
                  (&local_340,&this->TransientAllocationStats,(FRHITransientResource *)pFVar9);
        uVar29 = ((TInterval<unsigned_int> *)&pFVar9->_padding_)->Min;
        uVar35 = 0xffffffff;
        if (uVar29 != 0xffffffff) {
          uVar35 = uVar29;
        }
        uVar29 = 0xffffffff;
        if (*(uint *)&pFVar9->_padding_ != 0xffffffff) {
          uVar29 = *(uint *)&pFVar9->_padding_;
        }
        local_2a8 = pFVar9;
        if (*(int *)&(this->TransientAllocationStats).Resources.field_0x8 !=
            *(int *)&(this->TransientAllocationStats).Resources.field_0x34) {
          uVar27 = ((uint)((ulonglong)pFVar9 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar9 >> 4)) *
                   -0x7a143595;
          uVar27 = (uVar27 >> 0xd ^ uVar27) * -0x3d4d51cb;
          TSet<TTuple<FRHITransientResource_const_*,TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FRHITransientResource_const_*,TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
          ::RemoveImpl<FRHITransientResource_const_*>
                    ((TSet<TTuple<FRHITransientResource_const_*,TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FRHITransientResource_const_*,TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
                      *)&(this->TransientAllocationStats).Resources,uVar27 >> 0x10 ^ uVar27,
                     (FRHITransientResource **)&local_2a8);
        }
      }
      if (-1 < RDGChannel->Enabled) {
        UE::Trace::Private::FLogScope::Enter<FRDGTraceTextureMessageFields>(&local_1a0);
        sVar21 = wcslen((wchar_t *)pFVar8->_padding_);
        UE::Trace::Private::Field_WriteStringWide
                  (0,(wchar_t *)pFVar8->_padding_,(uint)sVar21 & 0xffff);
        if ((uVar28 == 0xffffffff) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphDefinitions.h"
                                ,0x166,L""), bVar19)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        uVar16 = local_1a0._0_8_;
        *(uint *)(local_1a0._0_8_ + 0x10) = uVar28;
        *(uint *)(local_1a0._0_8_ + 0x14) = (pFVar8->NextOwner).Index;
        *(int *)(local_1a0._0_8_ + 0x18) = (int)pFVar8->_padding_;
        UE::Trace::Private::Field_WriteAuxData
                  (6,(uchar *)pFVar8->_padding_,((uint)pFVar8->_padding_ & 0x1ffff) << 2);
        UE::Trace::Private::Field_WriteAuxData
                  (7,(uchar *)local_340.Data,(int)local_338 * 8 & 0x7fff8);
        UE::Trace::Private::Field_WriteAuxData
                  (8,(uchar *)local_330.Data,(int)local_328 * 8 & 0x7fff8);
        UE::Trace::Private::Field_WriteAuxData
                  (9,(uchar *)local_320.Data,(int)local_318 * 2 & 0x7fffe);
        *(uint *)(uVar16 + 0x1c) = uVar35;
        *(uint *)(uVar16 + 0x20) = uVar29;
        *(ulonglong *)(uVar16 + 0x24) = local_2c8;
        *(ulonglong *)(uVar16 + 0x2c) = (ulonglong)*(uint *)&pFVar8->Desc;
        *(uint *)(uVar16 + 0x34) = (uint)(byte)(pFVar8->Desc).field_0x32;
        *(uint *)(uVar16 + 0x38) = (uint)(byte)(pFVar8->Desc).field_0x33;
        *(undefined4 *)(uVar16 + 0x3c) = *(undefined4 *)&(pFVar8->Desc).field_0x24;
        *(undefined4 *)(uVar16 + 0x40) = *(undefined4 *)&(pFVar8->Desc).field_0x28;
        uVar26 = (ulonglong)_tls_index;
        *(undefined2 *)(uVar16 + 0x44) = *(undefined2 *)&(pFVar8->Desc).field_0x2c;
        *(undefined2 *)(uVar16 + 0x46) = *(undefined2 *)&(pFVar8->Desc).field_0x2e;
        *(undefined1 *)(uVar16 + 0x48) = (pFVar8->Desc).field_0x30;
        *(undefined1 *)(uVar16 + 0x49) = (pFVar8->Desc).field_0x31;
        *(byte *)(uVar16 + 0x4a) = *(byte *)((longlong)&pFVar8->_padding_ + 1) & 1;
        *(byte *)(uVar16 + 0x4b) = *(byte *)((longlong)&pFVar8->_padding_ + 1) >> 1 & 1;
        *(bool *)(uVar16 + 0x4c) = (int)pFVar8->_padding_ == 0;
        *(ERDGTextureFlags *)(uVar16 + 0x4d) = pFVar8->Flags >> 1 & 1;
        *(byte *)(uVar16 + 0x4e) = *(byte *)((longlong)&pFVar8->_padding_ + 1) >> 3 & 1;
        *(undefined1 *)(uVar16 + 0x4f) = 0;
        *(byte *)(uVar16 + 0x50) = local_310;
        pvVar32 = ThreadLocalStoragePointer;
        *(undefined1 *)(uVar16 + 0x51) = 1;
        lVar25 = *(longlong *)((longlong)pvVar32 + uVar26 * 8);
        if (*(char *)(lVar25 + 0x9d48) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar25 = *(longlong *)(lVar25 + 0x20);
        **(undefined1 **)(lVar25 + 0x20) = 6;
        lVar24 = *(longlong *)(lVar25 + 0x20) + 1;
        *(longlong *)(lVar25 + 0x20) = lVar24;
        if (lVar25 != local_1a0._8_8_) {
          *(longlong *)(lVar25 + 0x28) = lVar24;
        }
        *(undefined8 *)(local_1a0._8_8_ + 0x28) = *(undefined8 *)(local_1a0._8_8_ + 0x20);
      }
      if ((uVar28 == 0xffffffff) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphDefinitions.h"
                              ,399,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar28 = uVar28 + 1;
    }
    while( true ) {
      iStack_290 = 0;
      uVar28 = (param_1->Buffers).Array.ArrayNum;
      if (uVar29 == uVar28) break;
      if ((uVar29 == 0xffffffff) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphDefinitions.h"
                              ,0x166,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar28 = 0;
      if ((int)uVar29 < (param_1->Buffers).Array.ArrayNum) {
        uVar28 = ~uVar29 >> 0x1f;
      }
      if ((uVar28 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      bVar19 = (longlong)local_338 < 0;
      pFVar10 = (param_1->Buffers).Array.AllocatorInstance.Data[(int)uVar29];
      pFVar11 = pFVar10->TransientBuffer;
      local_338 = local_338 & 0xffffffff00000000;
      if (bVar19) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&local_340,0,(int *)((longlong)&local_338 + 4));
      }
      bVar19 = (longlong)local_328 < 0;
      local_328 = local_328 & 0xffffffff00000000;
      if (bVar19) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&local_330,0,(int *)((longlong)&local_328 + 4));
      }
      bVar19 = (longlong)local_318 < 0;
      local_318 = local_318 & 0xffffffff00000000;
      if (bVar19) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,0,&local_320,0,(int *)((longlong)&local_318 + 4));
      }
      local_310 = 0;
      EVar34 = ~None;
      EVar33 = ~None;
      if (pFVar11 != (FRHITransientBuffer *)0x0) {
        `FRDGTrace::OutputGraphEnd'::__l2::FTransientAllocation::Fill
                  (&local_340,&this->TransientAllocationStats,(FRHITransientResource *)pFVar11);
        EVar33 = ((TInterval<unsigned_int> *)&pFVar11->_padding_)->Min;
        EVar34 = ~None;
        if (EVar33 != ~None) {
          EVar34 = EVar33;
        }
        EVar33 = ~None;
        if (*(EBufferUsageFlags *)&pFVar11->_padding_ != ~None) {
          EVar33 = *(EBufferUsageFlags *)&pFVar11->_padding_;
        }
        local_2a0 = pFVar11;
        if (*(int *)&(this->TransientAllocationStats).Resources.field_0x8 !=
            *(int *)&(this->TransientAllocationStats).Resources.field_0x34) {
          uVar28 = ((uint)((ulonglong)pFVar11 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar11 >> 4)) *
                   -0x7a143595;
          uVar28 = (uVar28 >> 0xd ^ uVar28) * -0x3d4d51cb;
          TSet<TTuple<FRHITransientResource_const_*,TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FRHITransientResource_const_*,TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
          ::RemoveImpl<FRHITransientResource_const_*>
                    ((TSet<TTuple<FRHITransientResource_const_*,TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FRHITransientResource_const_*,TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
                      *)&(this->TransientAllocationStats).Resources,uVar28 >> 0x10 ^ uVar28,
                     (FRHITransientResource **)&local_2a0);
        }
      }
      if (-1 < RDGChannel->Enabled) {
        UE::Trace::Private::FLogScope::Enter<FRDGTraceBufferMessageFields>
                  ((TLogScope<1> *)&local_190);
        sVar21 = wcslen((wchar_t *)pFVar10->_padding_);
        UE::Trace::Private::Field_WriteStringWide
                  (0,(wchar_t *)pFVar10->_padding_,(uint)sVar21 & 0xffff);
        if (((pFVar10->Handle).Index == 0xffffffff) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphDefinitions.h"
                                ,0x166,L""), bVar19)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pEVar17 = local_190;
        local_190[3] = (pFVar10->Handle).Index;
        local_190[4] = (pFVar10->NextOwner).Index;
        local_190[5] = (EBufferUsageFlags)pFVar10->_padding_;
        UE::Trace::Private::Field_WriteAuxData
                  (7,(uchar *)pFVar10->_padding_,((uint)pFVar10->_padding_ & 0x1ffff) << 2);
        UE::Trace::Private::Field_WriteAuxData
                  (8,(uchar *)local_340.Data,(int)local_338 * 8 & 0x7fff8);
        UE::Trace::Private::Field_WriteAuxData
                  (9,(uchar *)local_330.Data,(int)local_328 * 8 & 0x7fff8);
        UE::Trace::Private::Field_WriteAuxData
                  (10,(uchar *)local_320.Data,(int)local_318 * 2 & 0x7fffe);
        uVar26 = (ulonglong)_tls_index;
        pEVar17[6] = EVar34;
        pEVar17[7] = EVar33;
        *pEVar17 = (pFVar10->Desc).Usage;
        pEVar17[1] = (pFVar10->Desc).BytesPerElement;
        pEVar17[2] = (pFVar10->Desc).NumElements;
        *(undefined1 *)(pEVar17 + 8) = *(byte *)((longlong)&pFVar10->_padding_ + 1) & Static;
        *(byte *)((longlong)pEVar17 + 0x21) = *(byte *)((longlong)&pFVar10->_padding_ + 1) >> 1 & 1;
        *(bool *)((longlong)pEVar17 + 0x22) = (int)pFVar10->_padding_ == 0;
        *(ERDGBufferFlags *)((longlong)pEVar17 + 0x23) = pFVar10->Flags >> 1 & 1;
        *(undefined1 *)(pEVar17 + 9) = *(byte *)((longlong)&pFVar10->_padding_ + 1) >> 3 & Static;
        *(byte *)((longlong)pEVar17 + 0x25) = 0;
        *(byte *)((longlong)pEVar17 + 0x26) = local_310;
        pvVar32 = ThreadLocalStoragePointer;
        *(byte *)((longlong)pEVar17 + 0x27) = 1;
        lVar25 = *(longlong *)((longlong)pvVar32 + uVar26 * 8);
        if (*(char *)(lVar25 + 0x9d48) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar25 = *(longlong *)(lVar25 + 0x20);
        **(undefined1 **)(lVar25 + 0x20) = 6;
        lVar24 = *(longlong *)(lVar25 + 0x20) + 1;
        *(longlong *)(lVar25 + 0x20) = lVar24;
        if (lVar25 != local_188) {
          *(longlong *)(lVar25 + 0x28) = lVar24;
        }
        *(undefined8 *)(local_188 + 0x28) = *(undefined8 *)(local_188 + 0x20);
      }
      if ((uVar29 == 0xffffffff) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphDefinitions.h"
                              ,399,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar29 = uVar29 + 1;
    }
    uVar29 = *(uint *)&(this->TransientAllocationStats).Resources.field_0x28;
    local_288 = &(this->TransientAllocationStats).Resources.field_0x10;
    local_298 = &(this->TransientAllocationStats).Resources;
    local_278 = 0;
    local_2c8 = CONCAT44(local_2c8._4_4_,(param_1->Textures).Array.ArrayNum);
    uStack_27c = 0;
    if (uVar29 == 0) {
LAB_145dc3af0:
      uStack_28c = (uint)local_2c0;
    }
    else {
      puVar38 = *(uint **)&(this->TransientAllocationStats).Resources.field_0x20;
      if (puVar38 == (uint *)0x0) {
        puVar38 = (uint *)local_288;
      }
      uStack_28c = *puVar38;
      while (uStack_28c == 0) {
        lVar25 = (longlong)iStack_290;
        local_278 = local_278 + 0x20;
        iStack_290 = iStack_290 + 1;
        uStack_27c = uVar29;
        if ((int)((uVar29 - 1) + ((int)(uVar29 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_290)
        goto LAB_145dc3af0;
        uStack_28c = puVar38[lVar25 + 1];
      }
      uStack_28c = -uStack_28c & uStack_28c;
      uVar26 = (ulonglong)uStack_28c * 2 + 1;
      lVar25 = 0x3f;
      if (uVar26 != 0) {
        for (; uVar26 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      local_2b8 = (int)lVar25;
      uStack_27c = local_278 + -1 + local_2b8;
      if ((int)uVar29 < (int)uStack_27c) {
        uStack_27c = uVar29;
      }
    }
    uVar35 = *(uint *)&(this->TransientAllocationStats).Resources.field_0x28;
    pTVar40 = (TBitArray<FDefaultBitArrayAllocator> *)
              &(this->TransientAllocationStats).Resources.field_0x10;
    uStack_274 = local_21c;
    iStack_270 = *(int *)&(this->TransientAllocationStats).Resources.field_0x8 -
                 *(int *)&(this->TransientAllocationStats).Resources.field_0x34;
    uVar27 = uVar35 & 0xffffffe0;
    TStack_260._padding_ = CONCAT44(uStack_28c,iStack_290);
    uStack_280 = 0xffffffff;
    TStack_260.CurrentBitIndex = uStack_27c;
    TStack_260.UnvisitedBitMask = 0xffffffff;
    iVar30 = (int)uVar35 >> 5;
    TStack_260._28_4_ = local_21c;
    TStack_260.BaseBitIndex = local_278;
    uStack_240 = CONCAT44(uStack_26c,iStack_270);
    local_2c0 = pTVar40;
    local_268 = local_298;
    TStack_260.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_288;
    if ((((int)uVar35 < 0) || ((int)uVar29 < (int)uVar35)) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar19)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    uVar29 = *(uint *)&(this->TransientAllocationStats).Resources.field_0x28;
    if (uVar35 != uVar29) {
      puVar37 = *(undefined1 **)&(this->TransientAllocationStats).Resources.field_0x20;
      if (puVar37 == (undefined1 *)0x0) {
        puVar37 = (undefined1 *)pTVar40;
      }
      uVar35 = -1 << ((byte)uVar35 & 0x1f) & *(uint *)(puVar37 + (longlong)iVar30 * 4);
      while (uVar35 == 0) {
        lVar25 = (longlong)iVar30;
        uVar27 = uVar27 + 0x20;
        iVar30 = iVar30 + 1;
        uVar35 = uVar29;
        if ((int)((uVar29 - 1) + ((int)(uVar29 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar30)
        goto LAB_145dc3bfa;
        uVar35 = *(uint *)(puVar37 + lVar25 * 4 + 4);
      }
      uVar26 = (ulonglong)(-uVar35 & uVar35) * 2 + 1;
      lVar25 = 0x3f;
      if (uVar26 != 0) {
        for (; uVar26 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      uVar35 = (uVar27 - 1) + (int)lVar25;
      if ((int)uVar29 < (int)uVar35) {
        uVar35 = uVar29;
      }
    }
LAB_145dc3bfa:
    iVar30 = (int)local_2c8;
    while( true ) {
      pTVar14 = local_268;
      if (*(int *)&local_268->field_0x8 - *(int *)&local_268->field_0x34 != (int)uStack_240) {
        `TSparseArray<TSparseSetElement<TTuple<FRHITransientResource_const_*,TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_300);
      }
      pFVar13 = local_308;
      if (((TStack_260.CurrentBitIndex == uVar35) && (TStack_260.Array == pTVar40)) &&
         (pTVar14 == &(local_308->TransientAllocationStats).Resources)) break;
      lVar25 = *(longlong *)pTVar14;
      local_218 = *(FRHITransientResource **)((longlong)TStack_260.CurrentBitIndex * 0x50 + lVar25);
      pvVar32 = (void *)(lVar25 + 8 + (longlong)TStack_260.CurrentBitIndex * 0x50);
      local_210.SecondaryData = (ForElementType<FRHITransientAllocationStats::FAllocation>)0x0;
      local_1d8 = *(int *)((longlong)pvVar32 + 0x38);
      lVar25 = (longlong)local_1d8;
      if (*(void **)((longlong)pvVar32 + 0x30) != (void *)0x0) {
        pvVar32 = *(void **)((longlong)pvVar32 + 0x30);
      }
      if (local_1d8 == 0) {
        local_1d4 = 2;
      }
      else {
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransientAllocationStats::FAllocation>_>
                  (0x18,8,local_1d8,0,&local_210,local_1d8,&local_1d4);
        _Dst = (ForElementType<FRHITransientAllocationStats::FAllocation>)&local_210;
        if (local_210.SecondaryData !=
            (ForElementType<FRHITransientAllocationStats::FAllocation>)0x0) {
          _Dst = local_210.SecondaryData;
        }
        memcpy((void *)_Dst,pvVar32,lVar25 * 0x18);
      }
      pFVar15 = local_218;
      if (local_218->bAcquired != false) {
        bVar19 = (longlong)local_338 < 0;
        local_338 = local_338 & 0xffffffff00000000;
        if (bVar19) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&local_340,0,(int *)((longlong)&local_338 + 4));
        }
        bVar19 = (longlong)local_328 < 0;
        local_328 = local_328 & 0xffffffff00000000;
        if (bVar19) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&local_330,0,(int *)((longlong)&local_328 + 4));
        }
        bVar19 = (longlong)local_318 < 0;
        local_318 = local_318 & 0xffffffff00000000;
        if (bVar19) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,0,&local_320,0,(int *)((longlong)&local_318 + 4));
        }
        local_310 = 0;
        `FRDGTrace::OutputGraphEnd'::__l2::FTransientAllocation::Fill
                  (&local_340,&pFVar13->TransientAllocationStats,pFVar15);
        uVar29 = (pFVar15->AcquirePasses).Min;
        uVar27 = 0xffffffff;
        if (uVar29 != 0xffffffff) {
          uVar27 = uVar29;
        }
        uVar29 = 0xffffffff;
        if (pFVar15->DiscardPass != 0xffffffff) {
          uVar29 = pFVar15->DiscardPass;
        }
        if (pFVar15->ResourceType == Texture) {
          if (-1 < RDGChannel->Enabled) {
            UE::Trace::Private::FLogScope::Enter<FRDGTraceTextureMessageFields>(&local_180);
            sVar21 = wcslen(pFVar15->Name);
            UE::Trace::Private::Field_WriteStringWide(0,pFVar15->Name,(uint)sVar21 & 0xffff);
            uVar16 = local_180._0_8_;
            *(int *)(local_180._0_8_ + 0x10) = iVar30;
            UE::Trace::Private::Field_WriteAuxData
                      (7,(uchar *)local_340.Data,(int)local_338 * 8 & 0x7fff8);
            UE::Trace::Private::Field_WriteAuxData
                      (8,(uchar *)local_330.Data,(int)local_328 * 8 & 0x7fff8);
            UE::Trace::Private::Field_WriteAuxData
                      (9,(uchar *)local_320.Data,(int)local_318 * 2 & 0x7fffe);
            uVar26 = (ulonglong)_tls_index;
            *(uint *)(uVar16 + 0x1c) = uVar27;
            *(uint *)(uVar16 + 0x20) = uVar29;
            *(ulong64 *)(uVar16 + 0x24) = pFVar15->Size;
            *(ulonglong *)(uVar16 + 0x2c) = (ulonglong)(uint)pFVar15[1]._padding_;
            *(uint *)(uVar16 + 0x34) = (uint)*(byte *)((longlong)&pFVar15[1].Alignment + 2);
            *(uint *)(uVar16 + 0x38) = (uint)*(byte *)((longlong)&pFVar15[1].Alignment + 3);
            *(undefined4 *)(uVar16 + 0x3c) = *(undefined4 *)((longlong)&pFVar15[1].Hash + 4);
            *(int *)(uVar16 + 0x40) = (int)pFVar15[1].Size;
            *(undefined2 *)(uVar16 + 0x44) = *(undefined2 *)((longlong)&pFVar15[1].Size + 4);
            *(undefined2 *)(uVar16 + 0x46) = *(undefined2 *)((longlong)&pFVar15[1].Size + 6);
            *(char *)(uVar16 + 0x48) = (char)pFVar15[1].Alignment;
            *(undefined1 *)(uVar16 + 0x49) = *(undefined1 *)((longlong)&pFVar15[1].Alignment + 1);
            *(undefined4 *)(uVar16 + 0x4a) = 0;
            *(undefined2 *)(uVar16 + 0x4e) = 0x101;
            *(byte *)(uVar16 + 0x50) = local_310;
            pvVar32 = ThreadLocalStoragePointer;
            *(undefined1 *)(uVar16 + 0x51) = 1;
            lVar25 = *(longlong *)((longlong)pvVar32 + uVar26 * 8);
            if (*(char *)(lVar25 + 0x9d48) == '\0') {
              __dyn_tls_on_demand_init();
            }
            lVar25 = *(longlong *)(lVar25 + 0x20);
            **(undefined1 **)(lVar25 + 0x20) = 6;
            lVar24 = *(longlong *)(lVar25 + 0x20) + 1;
            *(longlong *)(lVar25 + 0x20) = lVar24;
            if (lVar25 != local_180._8_8_) {
              *(longlong *)(lVar25 + 0x28) = lVar24;
            }
            *(undefined8 *)(local_180._8_8_ + 0x28) = *(undefined8 *)(local_180._8_8_ + 0x20);
          }
          iVar30 = iVar30 + 1;
        }
        else {
          if (-1 < RDGChannel->Enabled) {
            UE::Trace::Private::FLogScope::Enter<FRDGTraceBufferMessageFields>
                      ((TLogScope<1> *)&local_170);
            sVar21 = wcslen(pFVar15->Name);
            UE::Trace::Private::Field_WriteStringWide(0,pFVar15->Name,(uint)sVar21 & 0xffff);
            puVar18 = local_170;
            local_170[3] = uVar28;
            UE::Trace::Private::Field_WriteAuxData
                      (8,(uchar *)local_340.Data,(int)local_338 * 8 & 0x7fff8);
            UE::Trace::Private::Field_WriteAuxData
                      (9,(uchar *)local_330.Data,(int)local_328 * 8 & 0x7fff8);
            UE::Trace::Private::Field_WriteAuxData
                      (10,(uchar *)local_320.Data,(int)local_318 * 2 & 0x7fffe);
            uVar26 = (ulonglong)_tls_index;
            puVar18[6] = uVar27;
            puVar18[7] = uVar29;
            *puVar18 = *(undefined4 *)&pFVar15[1].Resource.Reference;
            puVar18[1] = *(undefined4 *)((longlong)&pFVar15[1]._padding_ + 4);
            puVar18[2] = (uint)pFVar15[1]._padding_ / *(uint *)((longlong)&pFVar15[1]._padding_ + 4)
            ;
            puVar18[8] = 0;
            *(undefined2 *)(puVar18 + 9) = 0x101;
            *(byte *)((longlong)puVar18 + 0x26) = local_310;
            pvVar32 = ThreadLocalStoragePointer;
            *(undefined1 *)((longlong)puVar18 + 0x27) = 1;
            lVar25 = *(longlong *)((longlong)pvVar32 + uVar26 * 8);
            if (*(char *)(lVar25 + 0x9d48) == '\0') {
              __dyn_tls_on_demand_init();
            }
            lVar25 = *(longlong *)(lVar25 + 0x20);
            **(undefined1 **)(lVar25 + 0x20) = 6;
            lVar24 = *(longlong *)(lVar25 + 0x20) + 1;
            *(longlong *)(lVar25 + 0x20) = lVar24;
            if (lVar25 != local_168) {
              *(longlong *)(lVar25 + 0x28) = lVar24;
            }
            *(undefined8 *)(local_168 + 0x28) = *(undefined8 *)(local_168 + 0x20);
          }
          uVar28 = uVar28 + 1;
        }
      }
      if (local_210.SecondaryData != (ForElementType<FRHITransientAllocationStats::FAllocation>)0x0)
      {
        FMemory::Free((void *)local_210.SecondaryData);
      }
      TStack_260.UnvisitedBitMask = TStack_260.UnvisitedBitMask & ~TStack_260._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_260);
      pTVar40 = local_2c0;
    }
    if (-1 < RDGChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<FRDGTraceGraphEndMessageFields>(&local_160);
      *(undefined8 *)(local_160._8_8_ + 0x28) = *(undefined8 *)(local_160._8_8_ + 0x20);
    }
    if (local_320.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_320.Data);
    }
    if (local_330.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_330.Data);
    }
    if (local_340.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_340.Data);
    }
    if (bVar41) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

