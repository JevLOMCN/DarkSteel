// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// GenerateKeys @ 147cf92a0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FGPUSortManager::FSortBatch::GenerateKeys
          (FSortBatch *this,FRHICommandListImmediate *param_1,
          TArray<FGPUSortManager::FCallbackInfo,TSizedDefaultAllocator<32>_> *param_2,
          EGPUSortFlags param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  EGPUSortFlags EVar3;
  int iVar4;
  FRHIUnorderedAccessView *pFVar5;
  ForElementType<void_*> FVar6;
  undefined8 uVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  FRHIBreadcrumbAllocator *this_00;
  FRHIBreadcrumbNode *pFVar11;
  uint uVar12;
  ForElementType<void_*> FVar13;
  undefined8 *puVar14;
  atomic<unsigned___int64> aVar15;
  ulonglong uVar16;
  FScriptContainerElement *this_01;
  uint uVar17;
  undefined1 local_res8 [8];
  FRHITransitionInfo local_148;
  undefined4 local_118;
  undefined2 local_114;
  undefined8 local_110;
  undefined1 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined1 local_fc;
  undefined1 local_f0;
  FRHITransitionInfo *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<10,FName>_const_*,std::tuple<FName_const_&>_>
  local_d8;
  FRHITransitionInfo *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  FRHIBreadcrumbScope local_b8;
  char local_a8;
  TArrayView<FRHITransitionInfo_const_,int> local_98;
  TArrayView<FRHITransitionInfo_const_,int> local_88;
  uint uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  FReadAccessScope local_58;
  
  pFVar5 = this->SortBuffers->KeyBufferUAVs[0].Reference;
  iVar2 = (this->DynamicValueBuffer->ValueBuffers).Array.ArrayNum;
  uVar17 = iVar2 - 1;
  uVar12 = 0;
  if ((int)uVar17 < iVar2) {
    uVar12 = ~uVar17 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVar6 = (ForElementType<void_*>)this->DynamicValueBuffer;
  local_148.field1_0x8 = (FRHITransitionInfo_u_8)this->SortBuffers->KeyBufferUAVs[0].Reference;
  local_148._padding_._0_4_ = 0xffffffff;
  local_148._padding_._4_2_ = 0xffff;
  local_148.Type = UAV;
  local_148.AccessBefore = None;
  local_148.AccessAfter = UAVCompute;
  local_148.Flags = None;
  local_148.CommitInfo.bIsSet = false;
  uVar17 = *(int *)((longlong)FVar6 + 0x28) - 1;
  uVar12 = 0;
  if ((int)uVar17 < *(int *)((longlong)FVar6 + 0x28)) {
    uVar12 = ~uVar17 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uStack_e0 = 2;
  FVar13 = *(ForElementType<void_*> *)((longlong)FVar6 + 0x20);
  if (*(ForElementType<void_*> *)((longlong)FVar6 + 0x20) == (ForElementType<void_*>)0x0) {
    FVar13 = FVar6;
  }
  local_110 = *(undefined8 *)
               (*(longlong *)
                 ((longlong)FVar13 + -8 + (longlong)*(int *)((longlong)FVar6 + 0x28) * 8) + 0x30);
  local_e8 = &local_148;
  local_98._12_4_ = uStack_dc;
  local_98.ArrayNum = 2;
  local_118 = 0xffffffff;
  local_114 = 0xffff;
  local_108 = 3;
  local_104 = 0;
  local_100 = 0x400;
  local_fc = 0;
  local_f0 = 0;
  local_98.DataPtr = local_e8;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_98,None);
  uVar12 = param_2->ArrayNum;
  uVar16 = (ulonglong)(int)uVar12;
  this_01 = (param_2->AllocatorInstance).Data;
  pFVar1 = this_01 + uVar16 * 0x28;
  do {
    if (param_2->ArrayNum != (int)uVar16) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FGPUSortManager::FCallbackInfo_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (this_01 == pFVar1) {
      local_c8 = &local_148;
      uStack_c0 = 2;
      local_88._12_4_ = uStack_bc;
      local_88.ArrayNum = 2;
      local_88.DataPtr = local_c8;
      FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_88,None);
      return;
    }
    if ((*(EGPUSortFlags *)&((FMRSWRecursiveAccessDetector *)&this_01[0x18].field_0x0)->State &
         param_3 & AnyKeyGenLocation) != None) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        local_68 = 0;
        uStack_64 = 0;
        ::Desc._12_8_ = ZEXT48(uStack_6c);
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        ::Desc._padding_._4_4_ = 0;
        ::Desc._padding_ = (longlong)u_GPUSortBatch;
        ::Desc._padding_ = (longlong)u_KeyGen__s;
        ::Desc._padding_._0_4_ = 0x1d5;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(``FGPUSortManager::FSortBatch::GenerateKeys'::__l14::<lambda_1>::
               operator()<FName_const_&>'::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
      local_d8._padding_ = (longlong)(this_01 + 0x1c);
      local_d8._Myfirst._Val = &::Desc;
      this_00 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
      pFVar11 = FRHIBreadcrumbAllocator::
                AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<10,FName>,FName_const_&>
                          (this_00,&local_d8);
      FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_b8,(FRHIComputeCommandList *)param_1,pFVar11);
      FVar6 = (ForElementType<void_*>)this->DynamicValueBuffer;
      iVar2 = *(int *)((longlong)FVar6 + 0x28);
      local_a8 = '\x01';
      uVar17 = iVar2 - 1;
      if ((*(byte *)&((FMRSWRecursiveAccessDetector *)&this_01[0x18].field_0x0)->State & 0x80) == 0)
      {
        uVar10 = 0;
        if ((int)uVar17 < iVar2) {
          uVar10 = ~uVar17 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FVar13 = FVar6;
        if (*(ForElementType<void_*> *)((longlong)FVar6 + 0x20) != (ForElementType<void_*>)0x0) {
          FVar13 = *(ForElementType<void_*> *)((longlong)FVar6 + 0x20);
        }
        puVar14 = (undefined8 *)
                  (*(longlong *)
                    ((longlong)FVar13 + -8 + (longlong)*(int *)((longlong)FVar6 + 0x28) * 8) + 0x50)
        ;
      }
      else {
        uVar10 = 0;
        if ((int)uVar17 < iVar2) {
          uVar10 = ~uVar17 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FVar13 = FVar6;
        if (*(ForElementType<void_*> *)((longlong)FVar6 + 0x20) != (ForElementType<void_*>)0x0) {
          FVar13 = *(ForElementType<void_*> *)((longlong)FVar6 + 0x20);
        }
        puVar14 = (undefined8 *)
                  (*(longlong *)
                    ((longlong)FVar13 + -8 + (longlong)*(int *)((longlong)FVar6 + 0x28) * 8) + 0x40)
        ;
      }
      EVar3 = this->Flags;
      uVar7 = *puVar14;
      iVar2 = this->Id;
      iVar4 = this->NumElements;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_01,&local_58);
      if (*(int *)&((FMRSWRecursiveAccessDetector *)&this_01[0x10].field_0x0)->State == 0) {
        aVar15 = (atomic<unsigned___int64>)0x0;
      }
      else {
        aVar15 = ((FMRSWRecursiveAccessDetector *)&this_01[8].field_0x0)->State;
      }
      (**(code **)(*(longlong *)aVar15 + 0x60))
                (aVar15,param_1,iVar2,iVar4,EVar3 & AnyKeyPrecision | param_3,pFVar5,uVar7);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_58);
      if (local_a8 != '\0') {
        FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_b8);
      }
    }
    uVar16 = (ulonglong)uVar12;
    this_01 = this_01 + 0x28;
  } while( true );
}

// SortAndResolve @ 147d2e770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FGPUSortManager::FSortBatch::SortAndResolve
          (FSortBatch *this,FRHICommandListImmediate *param_1,Type param_2)

{
  ulonglong uVar1;
  ForElementType<void_*> FVar2;
  FRHIUnorderedAccessView *pFVar3;
  code *pcVar4;
  Type TVar5;
  bool bVar6;
  uint uVar7;
  atomic<unsigned_int> aVar8;
  FRHIBreadcrumbAllocator *pFVar9;
  FRHIBreadcrumbNode *pFVar10;
  ForElementType<FRHIUnorderedAccessView_*> FVar11;
  ForElementType<int> FVar12;
  ForElementType<FRHITransitionInfo> FVar13;
  longlong lVar14;
  byte bVar15;
  ForElementType<void_*> FVar16;
  longlong lVar17;
  longlong lVar18;
  ForElementType<int> FVar19;
  uint uVar20;
  ForElementType<FRHIUnorderedAccessView_*> FVar21;
  uint uVar22;
  ForElementType<FRHIUnorderedAccessView_*> FVar23;
  ForElementType<void_*> FVar24;
  int iVar25;
  undefined1 auStackY_528 [32];
  undefined1 local_4d8 [8];
  FRHIUnorderedAccessView *local_4d0;
  Type local_4c8;
  ForElementType<void_*> local_4b8;
  ForElementType<FRHIUnorderedAccessView_*> FStack_4b0;
  int local_4a8;
  undefined4 uStack_4a4;
  ForElementType<FRHITransitionInfo> local_498;
  int iStack_490;
  undefined4 uStack_48c;
  ForElementType<void_*> local_488;
  ForElementType<FRHIUnorderedAccessView_*> FStack_480;
  undefined8 local_478;
  FRHITransitionInfo local_470;
  FRHITransitionInfo local_440;
  uchar local_410 [4];
  uchar local_40c [4];
  FRHITransitionInfo local_408;
  FRHITransitionInfo local_3d8;
  FRHITransitionInfo local_3a8;
  ForElementType<FRHITransitionInfo> local_378;
  int iStack_370;
  undefined4 uStack_36c;
  char *local_368;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined8 local_358;
  wchar_t *pwStack_350;
  FRHIBreadcrumbScope local_348;
  char local_338;
  FGPUSortBuffers local_328;
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  TArrayView<FRHITransitionInfo_const_,int> local_2b8;
  TArrayView<FRHITransitionInfo_const_,int> local_2a8;
  TArrayView<FRHITransitionInfo_const_,int> local_298;
  FGPUSortBuffers local_288;
  ForElementType<int> local_238;
  int local_220;
  int local_21c;
  ForElementType<FRHIUnorderedAccessView_*> local_218;
  uint local_1f0;
  uint local_1ec;
  ForElementType<FRHITransitionInfo> local_1e8;
  int local_120;
  int local_11c;
  ForElementType<FRHITransitionInfo> local_118;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_528;
  local_4c8 = param_2;
  if (((this->SortBuffers == (FParticleSortBuffers *)0x0) ||
      (this->DynamicValueBuffer == (FDynamicValueBuffer *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SortBuffers && DynamicValueBuffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSortManager.cpp"
                         ,0x1e3,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar2 = (ForElementType<void_*>)this->DynamicValueBuffer;
  if (*(int *)((longlong)FVar2 + 0x28) != 0) {
    FParticleSortBuffers::GetSortBuffers(this->SortBuffers,&local_328);
    uVar20 = *(int *)((longlong)FVar2 + 0x28) - 1;
    uVar22 = 0;
    if ((int)uVar20 < *(int *)((longlong)FVar2 + 0x28)) {
      uVar22 = ~uVar20 >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar25 = *(int *)((longlong)FVar2 + 0x28);
    FVar16 = FVar2;
    if (*(ForElementType<void_*> *)((longlong)FVar2 + 0x20) != (ForElementType<void_*>)0x0) {
      FVar16 = *(ForElementType<void_*> *)((longlong)FVar2 + 0x20);
    }
    local_328.FirstValuesSRV =
         *(FRHIShaderResourceView **)
          (*(longlong *)((longlong)FVar16 + ((longlong)iVar25 + -1) * 8) + 0x28);
    uVar22 = 0;
    if ((int)(iVar25 - 1U) < iVar25) {
      uVar22 = ~(iVar25 - 1U) >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FStack_4b0._0_4_ = 1;
    local_408._padding_._0_1_ = 0xff;
    local_408._padding_._1_1_ = 0xff;
    local_408._padding_._2_1_ = 0xff;
    local_408._padding_._3_1_ = 0xff;
    FVar16 = FVar2;
    if (*(ForElementType<void_*> *)((longlong)FVar2 + 0x20) != (ForElementType<void_*>)0x0) {
      FVar16 = *(ForElementType<void_*> *)((longlong)FVar2 + 0x20);
    }
    local_408.Type = UAV;
    local_408._padding_._4_1_ = 0xff;
    local_408._padding_._5_1_ = 0xff;
    local_408.AccessBefore = None;
    local_408.AccessAfter = SRVCompute;
    local_408.Flags = None;
    local_408.CommitInfo.bIsSet = false;
    local_408.field1_0x8 =
         *(FRHITransitionInfo_u_8 *)
          (*(longlong *)((longlong)FVar16 + -8 + (longlong)*(int *)((longlong)FVar2 + 0x28) * 8) +
          0x30);
    local_4b8 = (ForElementType<void_*>)&local_408;
    local_2d8._8_8_ = FStack_4b0;
    local_328.FinalValuesUAV = local_408.field1_0x8.UAV;
    local_2d8._0_8_ = local_4b8;
    FRHIComputeCommandList::Transition
              ((FRHIComputeCommandList *)param_1,
               (TArrayView<FRHITransitionInfo_const_,int> *)local_2d8,None);
    iVar25 = 1;
    if (this->NumElements != 0) {
      iVar25 = this->NumElements;
    }
    uVar1 = (ulonglong)(iVar25 - 1) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    uVar20 = 0xffff;
    uVar22 = (1 << ((byte)lVar17 & 0x1f)) - 1;
    local_410 = SUB84(lVar17,0);
    bVar15 = 0x10;
    if ((this->Flags & HighPrecisionKeys) != None) {
      uVar20 = 1;
      if (1 < uVar22) {
        uVar20 = uVar22;
      }
      uVar22 = uVar20;
      uVar1 = (ulonglong)(uVar22 << 0x10) * 2 + 1;
      lVar17 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_40c = SUB84(lVar17,0);
      bVar15 = 0x30 - (char)lVar17;
      uVar20 = ~(uVar22 << (bVar15 & 0x1f));
    }
    FVar16 = (ForElementType<void_*>)this->DynamicValueBuffer;
    iVar25 = *(int *)((longlong)FVar16 + 0x28);
    if (iVar25 == 0) {
      iVar25 = 0;
    }
    else {
      uVar7 = 0;
      if ((int)(iVar25 - 1U) < iVar25) {
        uVar7 = ~(iVar25 - 1U) >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar24 = FVar16;
      if (*(ForElementType<void_*> *)((longlong)FVar16 + 0x20) != (ForElementType<void_*>)0x0) {
        FVar24 = *(ForElementType<void_*> *)((longlong)FVar16 + 0x20);
      }
      iVar25 = *(int *)(*(longlong *)
                         ((longlong)FVar24 + -8 + (longlong)*(int *)((longlong)FVar16 + 0x28) * 8) +
                       0x5c);
    }
    FVar23 = (ForElementType<FRHIUnorderedAccessView_*>)0x0;
    local_288.RemoteKeySRVs[0] = local_328.RemoteKeySRVs[0];
    local_288.RemoteKeySRVs[1] = local_328.RemoteKeySRVs[1];
    local_288.RemoteValueSRVs[0] = local_328.RemoteValueSRVs[0];
    local_288.RemoteValueSRVs[1] = local_328.RemoteValueSRVs[1];
    local_288.RemoteKeyUAVs[0] = local_328.RemoteKeyUAVs[0];
    local_288.RemoteKeyUAVs[1] = local_328.RemoteKeyUAVs[1];
    local_288.FirstValuesSRV = local_328.FirstValuesSRV;
    local_288.FinalValuesUAV = local_328.FinalValuesUAV;
    local_288.RemoteValueUAVs[0] = local_328.RemoteValueUAVs[0];
    local_288.RemoteValueUAVs[1] = local_328.RemoteValueUAVs[1];
    SortGPUBuffers((FRHICommandList *)param_1,&local_288,0,uVar22 << (bVar15 & 0x1f) | uVar20,iVar25
                   ,param_2);
    if (1 < *(int *)((longlong)FVar2 + 0x28)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        uStack_360 = 0x1f7;
        local_368 = 
        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSortManager.cpp";
        local_358 = 0;
        pwStack_350 = L"CopyResults";
        ::Desc._padding_._0_4_ = 0x518dfa90;
        ::Desc._padding_._4_4_ = 1;
        ::Desc._padding_._0_4_ = 0x1f7;
        ::Desc._padding_._4_4_ = uStack_35c;
        ::Desc._padding_._0_4_ = 0;
        ::Desc._padding_._4_4_ = 0;
        ::Desc._padding_._0_4_ = 0x518dfc50;
        ::Desc._padding_._4_4_ = 1;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(``FGPUSortManager::FSortBatch::SortAndResolve'::__l20::<lambda_1>::operator()<>'::
               __l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
      pFVar9 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
      pFVar10 = FMemStackBase::Alloc(&pFVar9->Inner,0x50,8);
      pFVar10->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
      pFVar10->Parent = FRHIBreadcrumbNode::Sentinel;
      pFVar10->ListLink = (FRHIBreadcrumbNode *)0x0;
      (pFVar10->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
      (pFVar10->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
      pFVar10->Data = (FRHIBreadcrumbData *)&::Desc;
      pFVar10->Allocator = pFVar9;
      pFVar10->TraceCpuSpecId = 0;
      pFVar10->TraceCpuMetadataId = 0;
      LOCK();
      UNLOCK();
      uVar22 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
      FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
      pFVar10->BeginPipes = (atomic<unsigned_char>)0x0;
      pFVar10->EndPipes = (atomic<unsigned_char>)0x0;
      pFVar10->ID = uVar22;
      pFVar10->_padding_ =
           (longlong)
           &
           ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
      ;
      pFVar10[1]._padding_ = (longlong)&::Desc;
      if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
         (bVar6 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar6)) {
        EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
        if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar8 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)
                             CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                             (char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                             (uint)::Desc._padding_);
          LOCK();
          ::Desc.TraceCpuSpecId = aVar8;
          UNLOCK();
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
      }
      pFVar10->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
      FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_348,(FRHIComputeCommandList *)param_1,pFVar10)
      ;
      FVar2 = (ForElementType<void_*>)this->DynamicValueBuffer;
      local_218.SecondaryData = (ForElementType<FRHIUnorderedAccessView_*>)0x0;
      FStack_4b0 = (ForElementType<FRHIUnorderedAccessView_*>)((longlong)FVar2 + 0x28);
      local_1f0 = 0;
      local_1ec = 4;
      local_238.SecondaryData = (ForElementType<int>)0x0;
      local_220 = 0;
      local_21c = 3;
      local_118.SecondaryData = (ForElementType<FRHITransitionInfo>)0x0;
      local_50 = 0;
      local_4c = 4;
      local_1e8.SecondaryData = (ForElementType<FRHITransitionInfo>)0x0;
      local_120 = 0;
      local_11c = 4;
      FVar16 = *(ForElementType<void_*> *)((longlong)FVar2 + 0x20);
      local_4a8 = *(int *)FStack_4b0;
      lVar17 = (longlong)local_4a8;
      FVar24 = FVar16;
      if (FVar16 == (ForElementType<void_*>)0x0) {
        FVar24 = FVar2;
      }
      local_478 = CONCAT44(uStack_4a4,local_4a8);
      if (FVar16 == (ForElementType<void_*>)0x0) {
        FVar16 = FVar2;
      }
      local_338 = '\x01';
      FVar21 = FVar23;
      local_4b8 = FVar24;
      FStack_480 = FStack_4b0;
      while( true ) {
        local_488 = FVar24;
        if (*(int *)FStack_480 != (int)local_478) {
          local_4d8[0] = 0;
          `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_4d8);
          FVar21._4_4_ = 0;
          FVar21._0_4_ = local_1f0;
          FVar23 = local_218.SecondaryData;
        }
        if (FVar24 == (ForElementType<void_*>)((longlong)FVar16 + lVar17 * 8)) break;
        lVar14 = *(longlong *)local_488;
        pFVar3 = *(FRHIUnorderedAccessView **)(lVar14 + 0x30);
        if (pFVar3 != local_328.FinalValuesUAV) {
          FVar11 = (ForElementType<FRHIUnorderedAccessView_*>)&local_218;
          if (FVar23 != (ForElementType<FRHIUnorderedAccessView_*>)0x0) {
            FVar11 = FVar23;
          }
          uVar22 = FVar21._0_4_;
          local_4d0 = pFVar3;
          if ((ulonglong)FVar11 <= &local_4d0) {
            FVar11 = (ForElementType<FRHIUnorderedAccessView_*>)&local_218;
            if (FVar23 != (ForElementType<FRHIUnorderedAccessView_*>)0x0) {
              FVar11 = FVar23;
            }
            if ((&local_4d0 <
                 (FRHIUnorderedAccessView **)((longlong)FVar11 + (longlong)(int)local_1ec * 8)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), FVar23 = local_218.SecondaryData, uVar22 = local_1f0, bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          if (uVar22 == local_1ec) {
            uVar22 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIUnorderedAccessView_*>_>
                               (0x808,&local_218,(int *)&local_1ec);
            FVar23 = local_218.SecondaryData;
          }
          local_1f0 = uVar22 + 1;
          FVar21 = (ForElementType<FRHIUnorderedAccessView_*>)&local_218;
          if (FVar23 != (ForElementType<FRHIUnorderedAccessView_*>)0x0) {
            FVar21 = FVar23;
          }
          FVar19 = (ForElementType<int>)(lVar14 + 0x5c);
          *(FRHIUnorderedAccessView **)((longlong)FVar21 + (longlong)(int)uVar22 * 8) = local_4d0;
          FVar12 = (ForElementType<int>)&local_238;
          if (local_238.SecondaryData != (ForElementType<int>)0x0) {
            FVar12 = local_238.SecondaryData;
          }
          if ((ulonglong)FVar12 <= (ulonglong)FVar19) {
            FVar12 = (ForElementType<int>)&local_238;
            if (local_238.SecondaryData != (ForElementType<int>)0x0) {
              FVar12 = local_238.SecondaryData;
            }
            if (((ulonglong)FVar19 < (ulonglong)((longlong)FVar12 + (longlong)local_21c * 4)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          if (local_220 == local_21c) {
            local_220 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                  (0x404,&local_238,&local_21c);
          }
          local_470._padding_._0_1_ = 0xff;
          local_470._padding_._1_1_ = 0xff;
          local_470._padding_._2_1_ = 0xff;
          local_470._padding_._3_1_ = 0xff;
          lVar18 = (longlong)local_220;
          FVar12 = (ForElementType<int>)&local_238;
          if (local_238.SecondaryData != (ForElementType<int>)0x0) {
            FVar12 = local_238.SecondaryData;
          }
          local_470._padding_._4_1_ = 0xff;
          local_470._padding_._5_1_ = 0xff;
          local_470.Type = UAV;
          local_470.AccessBefore = None;
          local_470.AccessAfter = UAVCompute;
          local_220 = local_220 + 1;
          *(int *)((longlong)FVar12 + lVar18 * 4) = *(int *)FVar19;
          local_470.field1_0x8 = *(FRHITransitionInfo_u_8 *)(lVar14 + 0x30);
          local_470.Flags = None;
          FVar13 = (ForElementType<FRHITransitionInfo>)&local_118;
          if (local_118.SecondaryData != (ForElementType<FRHITransitionInfo>)0x0) {
            FVar13 = local_118.SecondaryData;
          }
          local_470.CommitInfo.bIsSet = false;
          if ((ulonglong)FVar13 <= &local_470) {
            FVar13 = (ForElementType<FRHITransitionInfo>)&local_118;
            if (local_118.SecondaryData != (ForElementType<FRHITransitionInfo>)0x0) {
              FVar13 = local_118.SecondaryData;
            }
            if ((&local_470 < (FRHITransitionInfo *)((longlong)local_4c * 0x30 + (longlong)FVar13))
               && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          if (local_50 == local_4c) {
            local_50 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransitionInfo>_>
                                 (0x830,&local_118,&local_4c);
          }
          FVar13 = (ForElementType<FRHITransitionInfo>)&local_118;
          if (local_118.SecondaryData != (ForElementType<FRHITransitionInfo>)0x0) {
            FVar13 = local_118.SecondaryData;
          }
          lVar18 = (longlong)local_50;
          local_50 = local_50 + 1;
          FRHITransitionInfo::FRHITransitionInfo
                    ((FRHITransitionInfo *)(lVar18 * 0x30 + (longlong)FVar13),&local_470);
          local_440.field1_0x8 = *(FRHITransitionInfo_u_8 *)(lVar14 + 0x30);
          local_440._padding_._0_1_ = 0xff;
          local_440._padding_._1_1_ = 0xff;
          local_440._padding_._2_1_ = 0xff;
          local_440._padding_._3_1_ = 0xff;
          FVar13 = (ForElementType<FRHITransitionInfo>)&local_1e8;
          if (local_1e8.SecondaryData != (ForElementType<FRHITransitionInfo>)0x0) {
            FVar13 = local_1e8.SecondaryData;
          }
          local_440._padding_._4_1_ = 0xff;
          local_440._padding_._5_1_ = 0xff;
          local_440.Type = UAV;
          local_440.AccessBefore = None;
          local_440.AccessAfter = SRVMask;
          local_440.Flags = None;
          local_440.CommitInfo.bIsSet = false;
          if ((ulonglong)FVar13 <= &local_440) {
            FVar13 = (ForElementType<FRHITransitionInfo>)&local_1e8;
            if (local_1e8.SecondaryData != (ForElementType<FRHITransitionInfo>)0x0) {
              FVar13 = local_1e8.SecondaryData;
            }
            if ((&local_440 < (FRHITransitionInfo *)((longlong)local_11c * 0x30 + (longlong)FVar13))
               && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          if (local_120 == local_11c) {
            local_120 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransitionInfo>_>
                                  (0x830,&local_1e8,&local_11c);
          }
          FVar13 = (ForElementType<FRHITransitionInfo>)&local_1e8;
          if (local_1e8.SecondaryData != (ForElementType<FRHITransitionInfo>)0x0) {
            FVar13 = local_1e8.SecondaryData;
          }
          lVar14 = (longlong)local_120;
          local_120 = local_120 + 1;
          FRHITransitionInfo::FRHITransitionInfo
                    ((FRHITransitionInfo *)(lVar14 * 0x30 + (longlong)FVar13),&local_440);
          FVar21._4_4_ = 0;
          FVar21._0_4_ = local_1f0;
          FVar23 = local_218.SecondaryData;
        }
        FVar24 = (ForElementType<void_*>)((longlong)local_488 + 8);
      }
      local_3d8.field1_0x8.UAV = local_328.FinalValuesUAV;
      local_4b8 = (ForElementType<void_*>)&local_3d8;
      FStack_4b0._0_4_ = 1;
      local_2c8._8_8_ = FStack_4b0;
      local_3d8._padding_._0_1_ = 0xff;
      local_3d8._padding_._1_1_ = 0xff;
      local_3d8._padding_._2_1_ = 0xff;
      local_3d8._padding_._3_1_ = 0xff;
      local_3d8._padding_._4_1_ = 0xff;
      local_3d8._padding_._5_1_ = 0xff;
      local_3d8.Type = UAV;
      local_3d8.AccessBefore = None;
      local_3d8.AccessAfter = SRVCompute;
      local_3d8.Flags = None;
      local_3d8.CommitInfo.bIsSet = false;
      local_2c8._0_8_ = local_4b8;
      FRHIComputeCommandList::Transition
                ((FRHIComputeCommandList *)param_1,
                 (TArrayView<FRHITransitionInfo_const_,int> *)local_2c8,None);
      iStack_370 = local_50;
      TVar5 = local_4c8;
      local_378 = (ForElementType<FRHITransitionInfo>)&local_118;
      if (local_118.SecondaryData != (ForElementType<FRHITransitionInfo>)0x0) {
        local_378 = local_118.SecondaryData;
      }
      if ((local_50 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_2b8._12_4_ = uStack_36c;
      local_2b8.ArrayNum = iStack_370;
      local_2b8.DataPtr = (FRHITransitionInfo *)local_378;
      FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_2b8,None);
      FVar19 = (ForElementType<int>)&local_238;
      if (local_238.SecondaryData != (ForElementType<int>)0x0) {
        FVar19 = local_238.SecondaryData;
      }
      FVar23 = (ForElementType<FRHIUnorderedAccessView_*>)&local_218;
      if (local_218.SecondaryData != (ForElementType<FRHIUnorderedAccessView_*>)0x0) {
        FVar23 = local_218.SecondaryData;
      }
      CopyUIntBufferToTargets
                ((FRHICommandList *)param_1,TVar5,local_328.FirstValuesSRV,
                 (FRHIUnorderedAccessView **)FVar23,(int *)FVar19,0,local_1f0);
      iStack_490 = local_120;
      local_498 = (ForElementType<FRHITransitionInfo>)&local_1e8;
      if (local_1e8.SecondaryData != (ForElementType<FRHITransitionInfo>)0x0) {
        local_498 = local_1e8.SecondaryData;
      }
      if ((local_120 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_2a8._12_4_ = uStack_48c;
      local_2a8.ArrayNum = iStack_490;
      local_2a8.DataPtr = (FRHITransitionInfo *)local_498;
      FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_2a8,None);
      if (local_1e8.SecondaryData != (ForElementType<FRHITransitionInfo>)0x0) {
        FMemory::Free((void *)local_1e8.SecondaryData);
      }
      if (local_118.SecondaryData != (ForElementType<FRHITransitionInfo>)0x0) {
        FMemory::Free((void *)local_118.SecondaryData);
      }
      if (local_238.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_238.SecondaryData);
      }
      if (local_218.SecondaryData != (ForElementType<FRHIUnorderedAccessView_*>)0x0) {
        FMemory::Free((void *)local_218.SecondaryData);
      }
      if (local_338 != '\0') {
        FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_348);
      }
    }
    iStack_490 = 1;
    local_3a8._padding_._4_1_ = 0xff;
    local_3a8._padding_._5_1_ = 0xff;
    local_3a8.field1_0x8.UAV = local_328.FinalValuesUAV;
    local_498 = (ForElementType<FRHITransitionInfo>)&local_3a8;
    local_3a8._padding_._0_1_ = 0xff;
    local_3a8._padding_._1_1_ = 0xff;
    local_3a8._padding_._2_1_ = 0xff;
    local_3a8._padding_._3_1_ = 0xff;
    local_298._12_4_ = uStack_48c;
    local_298.ArrayNum = 1;
    local_3a8.Type = UAV;
    local_3a8.AccessBefore = None;
    local_3a8.AccessAfter = SRVMask;
    local_3a8.Flags = None;
    local_3a8.CommitInfo.bIsSet = false;
    local_298.DataPtr = (FRHITransitionInfo *)local_498;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_298,None);
  }
  return;
}

// UpdateProcessingOrder @ 147d38750

void __thiscall FGPUSortManager::FSortBatch::UpdateProcessingOrder(FSortBatch *this)

{
  EGPUSortFlags EVar1;
  code *pcVar2;
  bool bVar3;
  
  EVar1 = this->Flags;
  if ((EVar1 & SortAfterPreRender) == None) {
    if ((EVar1 & SortAfterPostRenderOpaque) == None) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("EnumHasAnyFlags(Flags, EGPUSortFlags::SortAfterPostRenderOpaque)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSortManager.cpp"
                         ,0x1b9,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this->ProcessingOrder = ((byte)~(char)this->Flags & 4 | 8) >> 2;
    return;
  }
  if ((EVar1 & KeyGenAfterPostRenderOpaque) != None) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!EnumHasAnyFlags(Flags, EGPUSortFlags::KeyGenAfterPostRenderOpaque)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSortManager.cpp"
                       ,0x1b4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->ProcessingOrder = KeyGenAndSortAfterPreRender;
  return;
}

