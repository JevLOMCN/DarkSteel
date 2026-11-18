// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D11RHI
// Functions: 6

// FWinD3D11ConstantBuffer @ 14596e2a0

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FWinD3D11ConstantBuffer * __thiscall
FWinD3D11ConstantBuffer::FWinD3D11ConstantBuffer
          (FWinD3D11ConstantBuffer *this,FD3D11DynamicRHI *param_1)

{
  code *pcVar1;
  bool bVar2;
  FWinD3D11ConstantBuffer *pFVar3;
  
  FRenderResource::FRenderResource((FRenderResource *)this);
  this->_padding_ = (longlong)param_1;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&FD3D11ConstantBuffer::_vftable__for__FRenderResource__;
  this->_padding_ = (longlong)&FD3D11ConstantBuffer::_vftable__for__FRefCountedObject__;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FWinD3D11ConstantBuffer *)(*pcVar1)();
      return pFVar3;
    }
  }
  FRenderResource::InitResource
            ((FRenderResource *)this,(FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
  this->_padding_ = (longlong)&_vftable__for__FRenderResource__;
  this->_padding_ = (longlong)&_vftable__for__FRefCountedObject__;
  (this->SubBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubBuffers).ArrayNum = 0;
  (this->SubBuffers).ArrayMax = 0;
  this->CurrentSubBuffer = 0;
  return this;
}

// CommitConstantsToDevice @ 1459748f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FWinD3D11ConstantBuffer::CommitConstantsToDevice(FWinD3D11ConstantBuffer *this,bool param_1)

{
  TArray<FWinD3D11ConstantBuffer::FSubBuffer,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_D3D11GlobalConstantBufferUpdateTime> FVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  FColor_u_0 local_res8 [2];
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_68;
  FName local_60;
  FStatMessage local_50;
  
  if ((int)this->_padding_ == 0) {
    return false;
  }
  uVar18 = 0;
  FVar12 = StatPtr_STAT_D3D11GlobalConstantBufferUpdateTime;
  if (StatPtr_STAT_D3D11GlobalConstantBufferUpdateTime ==
      (FThreadSafeStaticStat<FStat_STAT_D3D11GlobalConstantBufferUpdateTime>)0x0) {
    pFVar11 = ::FName::FName(&local_68,"STAT_D3D11GlobalConstantBufferUpdateTime");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_D3D11GlobalConstantBufferUpdateTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_D3D11GlobalConstantBufferUpdateTime,*pFVar11,
                        L"Global Constant buffer update time","STATGROUP_D3D11RHI",
                        "STATCAT_Advanced",L"D3D11RHI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar12;
  bVar6 = false;
  bVar8 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar17 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar17 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar14.Value;
        local_res18.Number = uVar17;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\Windows\\WindowsD3D11ConstantBuffer.cpp"
                   ,0x4a);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.s.LowPart = FVar14.Value;
      local_res20.s.HighPart = uVar17;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar7 = true;
      goto LAB_145974a80;
    }
  }
  bVar7 = false;
  FVar15 = local_60;
LAB_145974a80:
  uVar17 = (uint)this->_padding_;
  uVar13 = uVar17;
  if ((!param_1) && (uVar13 = uVar18, uVar17 != 0)) {
    uVar13 = uVar17;
  }
  pTVar1 = &this->SubBuffers;
  uVar16 = (this->SubBuffers).ArrayNum - 1;
  uVar17 = uVar18;
  if (uVar16 != 0) {
    do {
      uVar17 = 0;
      if ((int)uVar16 < (this->SubBuffers).ArrayNum) {
        uVar17 = ~uVar16 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return (bool)uVar10;
      }
      uVar17 = uVar16;
    } while ((*(ulonglong *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar16 * 0x10 + 8) <
              (ulonglong)uVar13) && (uVar16 = uVar16 - 1, uVar17 = uVar18, uVar16 != 0));
  }
  this->CurrentSubBuffer = uVar17;
  if (((this->_padding_ & 0xf) != 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsAligned(ShadowData, 16)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\Windows\\WindowsD3D11ConstantBuffer.cpp"
                         ,0x5e,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    uVar10 = (*pcVar5)();
    return (bool)uVar10;
  }
  uVar17 = this->CurrentSubBuffer;
  uVar13 = 0;
  if ((int)uVar17 < (this->SubBuffers).ArrayNum) {
    uVar13 = ~uVar17 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar5 = (code *)swi(3);
    uVar10 = (*pcVar5)();
    return (bool)uVar10;
  }
  uVar13 = this->CurrentSubBuffer;
  uVar3 = *(undefined4 *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar17 * 0x10 + 8);
  if ((int)uVar13 < (this->SubBuffers).ArrayNum) {
    uVar18 = ~uVar13 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar5 = (code *)swi(3);
    uVar10 = (*pcVar5)();
    return (bool)uVar10;
  }
  plVar4 = *(longlong **)(this->_padding_ + 0x160);
  (**(code **)(*plVar4 + 0x180))
            (plVar4,*(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar13 * 0x10)
             ,0,0,this->_padding_,uVar3,uVar3);
  *(undefined4 *)&this->_padding_ = 0;
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_50.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_50.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_50.StatData.Pad[4] = '\0';
      local_50.StatData.Pad[5] = '\0';
      local_50.StatData.Pad[6] = '\0';
      local_50.StatData.Pad[7] = '\0';
      local_50.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_50.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_50.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_50.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_50);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return true;
}

// FindSubBufferForAllocationSize @ 145980d50

uint __thiscall
FWinD3D11ConstantBuffer::FindSubBufferForAllocationSize
          (FWinD3D11ConstantBuffer *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (this->SubBuffers).ArrayNum;
  while( true ) {
    uVar4 = uVar4 - 1;
    if (uVar4 == 0) {
      return 0;
    }
    uVar3 = 0;
    if ((int)uVar4 < (this->SubBuffers).ArrayNum) {
      uVar3 = ~uVar4 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) break;
    if (param_1 <=
        *(ulonglong *)((this->SubBuffers).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x10 + 8))
    {
      return uVar4;
    }
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return uVar4;
}

// GetConstantBuffer @ 145981850

ID3D11Buffer * __thiscall FWinD3D11ConstantBuffer::GetConstantBuffer(FWinD3D11ConstantBuffer *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ID3D11Buffer *pIVar5;
  
  uVar1 = this->CurrentSubBuffer;
  uVar4 = 0;
  if ((int)uVar1 < (this->SubBuffers).ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pIVar5 = (ID3D11Buffer *)(*pcVar2)();
      return pIVar5;
    }
  }
  return *(ID3D11Buffer **)((this->SubBuffers).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10)
  ;
}

// InitRHI @ 145985530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FWinD3D11ConstantBuffer::InitRHI(FWinD3D11ConstantBuffer *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  int iVar2;
  void *_Dst;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  FScriptContainerElement *pFVar6;
  undefined1 auStackY_68 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_68;
  local_30 = 4;
  uVar5 = 0x10000;
  local_28 = 0;
  local_38 = 0x10000;
  this->CurrentSubBuffer = 0;
  do {
    iVar2 = (this->SubBuffers).ArrayNum;
    if (iVar2 == (this->SubBuffers).ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->SubBuffers).AllocatorInstance,&(this->SubBuffers).ArrayMax);
      uVar5 = local_38 & 0xffffffff;
    }
    (this->SubBuffers).ArrayNum = iVar2 + 1;
    pFVar6 = (this->SubBuffers).AllocatorInstance.Data + (longlong)iVar2 * 0x10;
    *(undefined8 *)pFVar6 = 0;
    *(ulonglong *)(pFVar6 + 8) = uVar5;
    plVar1 = *(longlong **)(this->_padding_ + 0x178);
    iVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,&local_38,0,pFVar6);
    if (iVar2 < 0) {
      VerifyD3D11Result(iVar2,
                        "D3DRHI->GetDevice()->CreateBuffer(&BufferDesc, nullptr, SubBuffer.Buffer.GetInitReference())"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\Windows\\WindowsD3D11ConstantBuffer.cpp"
                        ,0x21,*(ID3D11Device **)(this->_padding_ + 0x178));
    }
    D3D11BufferStats::UpdateUniformBufferStats
              (*(ID3D11Buffer **)pFVar6,*(long64 *)(pFVar6 + 8),true);
    uVar3 = ((uint)local_38 >> 1) + 0xf;
    uVar4 = uVar3 & 0xfffffff0;
    uVar5 = (ulonglong)uVar4;
    local_38 = CONCAT44(local_38._4_4_,uVar3) & 0xfffffffffffffff0;
  } while (0x7f < uVar4);
  _Dst = FMemory::Malloc(0x10000,0x10);
  this->_padding_ = (longlong)_Dst;
  memset(_Dst,0,0x10000);
  return;
}

// ReleaseRHI @ 1459971e0

void __thiscall FWinD3D11ConstantBuffer::ReleaseRHI(FWinD3D11ConstantBuffer *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  iVar2 = (this->SubBuffers).ArrayNum;
  pFVar3 = (this->SubBuffers).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((this->SubBuffers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FWinD3D11ConstantBuffer::FSubBuffer,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    D3D11BufferStats::UpdateUniformBufferStats
              (*(ID3D11Buffer **)pFVar3,*(long64 *)(pFVar3 + 8),false);
    pFVar3 = pFVar3 + 0x10;
  }
  DestructItems<FWinD3D11ConstantBuffer::FSubBuffer,int>
            ((FSubBuffer *)(this->SubBuffers).AllocatorInstance.Data,(this->SubBuffers).ArrayNum);
  piVar1 = &(this->SubBuffers).ArrayMax;
  (this->SubBuffers).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->SubBuffers).AllocatorInstance,0,piVar1);
  }
  return;
}

