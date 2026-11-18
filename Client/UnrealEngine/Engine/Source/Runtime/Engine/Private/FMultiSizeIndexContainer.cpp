// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// GetIndexBuffer @ 14817a060

FRawStaticIndexBuffer16or32Interface * __thiscall
FMultiSizeIndexContainer::GetIndexBuffer(FMultiSizeIndexContainer *this)

{
  code *pcVar1;
  bool bVar2;
  FRawStaticIndexBuffer16or32Interface *pFVar3;
  
  if (this->IndexBuffer != (FRawStaticIndexBuffer16or32Interface *)0x0) {
    return this->IndexBuffer;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IndexBuffer != 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                     ,0x51,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FRawStaticIndexBuffer16or32Interface *)(*pcVar1)();
    return pFVar3;
  }
  return this->IndexBuffer;
}

// ~FMultiSizeIndexContainer @ 1483e8a80

void __thiscall FMultiSizeIndexContainer::~FMultiSizeIndexContainer(FMultiSizeIndexContainer *this)

{
  FRawStaticIndexBuffer16or32Interface *pFVar1;
  
  pFVar1 = this->IndexBuffer;
  if (pFVar1 != (FRawStaticIndexBuffer16or32Interface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001483e8a91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// CopyIndexBuffer @ 1483f8a70

void __thiscall
FMultiSizeIndexContainer::CopyIndexBuffer
          (FMultiSizeIndexContainer *this,TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined2 local_28 [4];
  ForAnyElementType local_20;
  int local_18;
  int aiStack_14 [3];
  
  if ((this->IndexBuffer == (FRawStaticIndexBuffer16or32Interface *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IndexBuffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\MultiSizeIndexContainer.cpp"
                         ,0x75,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (this->DataTypeSize == '\x02') {
    iVar5 = param_1->ArrayNum;
    uVar6 = 0;
    local_20.Data = (FScriptContainerElement *)0x0;
    local_18 = 0;
    aiStack_14[0] = 0;
    if (0 < iVar5) {
      lVar7 = 0;
      do {
        uVar3 = 0;
        if ((int)uVar6 < iVar5) {
          uVar3 = ~uVar6 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_28[0] = *(undefined2 *)((param_1->AllocatorInstance).Data + lVar7);
        if (((local_20.Data <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 < local_20.Data + (longlong)aiStack_14[0] * 2)) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (local_18 == aiStack_14[0]) {
          local_18 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x202,&local_20,aiStack_14);
        }
        lVar4 = (longlong)local_18;
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 4;
        local_18 = local_18 + 1;
        *(undefined2 *)(local_20.Data + lVar4 * 2) = local_28[0];
        iVar5 = param_1->ArrayNum;
      } while ((int)uVar6 < iVar5);
    }
    (**(code **)(this->IndexBuffer->_padding_ + 0x98))(this->IndexBuffer,&local_20);
    if (local_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data);
      return;
    }
  }
  else {
    (**(code **)(this->IndexBuffer->_padding_ + 0x98))(this->IndexBuffer,param_1);
  }
  return;
}

// CreateIndexBuffer @ 1483f9650

void __thiscall
FMultiSizeIndexContainer::CreateIndexBuffer(FMultiSizeIndexContainer *this,uchar param_1)

{
  code *pcVar1;
  bool bVar2;
  FRawStaticIndexBuffer16or32Interface *this_00;
  
  if (this->IndexBuffer != (FRawStaticIndexBuffer16or32Interface *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IndexBuffer == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\MultiSizeIndexContainer.cpp"
                       ,0x37,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->DataTypeSize = param_1;
  this_00 = ::operator_new(0x58);
  if (param_1 == '\x02') {
    if (this_00 != (FRawStaticIndexBuffer16or32Interface *)0x0) {
      FIndexBuffer::FIndexBuffer((FIndexBuffer *)this_00);
      *(undefined1 *)&((TRefCountPtr<FRHIBuffer> *)&this_00[1]._padding_)->Reference = 1;
      (this_00->SRVValue).Reference = (FRHIShaderResourceView *)0x0;
      this_00->_padding_ = (longlong)&___7__FRawStaticIndexBuffer16or32_G__6B_;
      this_00[1]._padding_ = (longlong)&___7__TResourceArray_G_0A___6B_;
      this_00[1]._padding_ = 0;
      this_00[1]._padding_ = 0;
      *(undefined4 *)&this_00[1]._padding_ = 0;
      this->IndexBuffer = this_00;
      return;
    }
  }
  else if (this_00 != (FRawStaticIndexBuffer16or32Interface *)0x0) {
    FIndexBuffer::FIndexBuffer((FIndexBuffer *)this_00);
    *(undefined1 *)&((TRefCountPtr<FRHIBuffer> *)&this_00[1]._padding_)->Reference = 1;
    (this_00->SRVValue).Reference = (FRHIShaderResourceView *)0x0;
    this_00->_padding_ = (longlong)&___7__FRawStaticIndexBuffer16or32_I__6B_;
    this_00[1]._padding_ = (longlong)&___7__TResourceArray_I_0A___6B_;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    *(undefined4 *)&this_00[1]._padding_ = 0;
    this->IndexBuffer = this_00;
    return;
  }
  this->IndexBuffer = (FRawStaticIndexBuffer16or32Interface *)0x0;
  return;
}

// CreateRHIBuffer @ 1483f9f90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIBuffer> __thiscall
FMultiSizeIndexContainer::CreateRHIBuffer
          (FMultiSizeIndexContainer *this,FRHICommandListBase *param_1)

{
  FRawStaticIndexBuffer16or32<unsigned_short> *this_00;
  
  this_00 = (FRawStaticIndexBuffer16or32<unsigned_short> *)this->IndexBuffer;
  if (this_00 == (FRawStaticIndexBuffer16or32<unsigned_short> *)0x0) {
    (param_1->MemManager).Top = (uchar *)0x0;
    return (TRefCountPtr<FRHIBuffer>)(FRHIBuffer *)param_1;
  }
  if (this->DataTypeSize == '\x02') {
    FRawStaticIndexBuffer16or32<unsigned_short>::CreateRHIBuffer(this_00,param_1);
    return (TRefCountPtr<FRHIBuffer>)(FRHIBuffer *)param_1;
  }
  FRawStaticIndexBuffer16or32<unsigned_int>::CreateRHIBuffer
            ((FRawStaticIndexBuffer16or32<unsigned_int> *)this_00,param_1);
  return (TRefCountPtr<FRHIBuffer>)(FRHIBuffer *)param_1;
}

// GetIndexBuffer @ 148408600

void __thiscall
FMultiSizeIndexContainer::GetIndexBuffer
          (FMultiSizeIndexContainer *this,TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  
  if ((this->IndexBuffer == (FRawStaticIndexBuffer16or32Interface *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IndexBuffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\MultiSizeIndexContainer.cpp"
                         ,100,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  iVar3 = (**(code **)(this->IndexBuffer->_padding_ + 0x50))();
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar3,&param_1->AllocatorInstance,&param_1->ArrayNum,&param_1->ArrayMax);
  uVar7 = 0;
  if (0 < iVar3) {
    lVar6 = 0;
    do {
      uVar4 = (**(code **)(this->IndexBuffer->_padding_ + 0x60))(this->IndexBuffer,uVar7);
      uVar5 = 0;
      if ((int)uVar7 < param_1->ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar7 = uVar7 + 1;
      *(undefined4 *)((param_1->AllocatorInstance).Data + lVar6 * 4) = uVar4;
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar3);
  }
  return;
}

// InitRHIForStreaming @ 14840dd50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMultiSizeIndexContainer::InitRHIForStreaming
          (FMultiSizeIndexContainer *this,FRHIBuffer *param_1,FRHIResourceReplaceBatcher *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FRawStaticIndexBuffer16or32Interface *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  if (((this->IndexBuffer != (FRawStaticIndexBuffer16or32Interface *)0x0) !=
       (param_1 != (FRHIBuffer *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!((uint32)!!IntermediateBuffer ^ (uint32)!!IndexBuffer)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\MultiSizeIndexContainer.cpp"
                         ,0xd7,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((param_1 != (FRHIBuffer *)0x0) && (pFVar3 = this->IndexBuffer, pFVar3->_padding_ != 0)) {
    iVar6 = (param_2->Infos).ArrayNum;
    piVar1 = &(param_2->Infos).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&(param_2->Infos).AllocatorInstance,piVar1);
    }
    (param_2->Infos).ArrayNum = iVar6 + 1;
    pFVar2 = (param_2->Infos).AllocatorInstance.Data + (longlong)iVar6 * 0x18;
    *(longlong *)pFVar2 = pFVar3->_padding_;
    *(FRHIBuffer **)(pFVar2 + 8) = param_1;
    pFVar2[0x10] = (FScriptContainerElement)0x0;
  }
  return;
}

// InitResources @ 14840df20

void __thiscall FMultiSizeIndexContainer::InitResources(FMultiSizeIndexContainer *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\MultiSizeIndexContainer.cpp"
                       ,0x1f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->IndexBuffer != (FRawStaticIndexBuffer16or32Interface *)0x0) {
    BeginInitResource((FRenderResource *)this->IndexBuffer,&UE::RenderCommandPipe::SkeletalMesh);
    return;
  }
  return;
}

// RebuildIndexBuffer @ 14841cb70

void __thiscall
FMultiSizeIndexContainer::RebuildIndexBuffer
          (FMultiSizeIndexContainer *this,uchar param_1,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_2)

{
  FRawStaticIndexBuffer16or32Interface *pFVar1;
  undefined **ppuVar2;
  
  pFVar1 = this->IndexBuffer;
  if (pFVar1 != (FRawStaticIndexBuffer16or32Interface *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  this->DataTypeSize = param_1;
  pFVar1 = ::operator_new(0x58);
  if (param_1 == '\x02') {
    if (pFVar1 == (FRawStaticIndexBuffer16or32Interface *)0x0) {
LAB_14841cc08:
      pFVar1 = (FRawStaticIndexBuffer16or32Interface *)0x0;
      goto LAB_14841cc0c;
    }
    FIndexBuffer::FIndexBuffer((FIndexBuffer *)pFVar1);
    pFVar1->_padding_ = (longlong)&___7__FRawStaticIndexBuffer16or32_G__6B_;
    ppuVar2 = &___7__TResourceArray_G_0A___6B_;
  }
  else {
    if (pFVar1 == (FRawStaticIndexBuffer16or32Interface *)0x0) goto LAB_14841cc08;
    FIndexBuffer::FIndexBuffer((FIndexBuffer *)pFVar1);
    pFVar1->_padding_ = (longlong)&___7__FRawStaticIndexBuffer16or32_I__6B_;
    ppuVar2 = &___7__TResourceArray_I_0A___6B_;
  }
  *(undefined4 *)&pFVar1[1]._padding_ = 0;
  *(undefined1 *)&((TRefCountPtr<FRHIBuffer> *)&pFVar1[1]._padding_)->Reference = 1;
  pFVar1[1]._padding_ = (longlong)ppuVar2;
  pFVar1[1]._padding_ = 0;
  pFVar1[1]._padding_ = 0;
  (pFVar1->SRVValue).Reference = (FRHIShaderResourceView *)0x0;
LAB_14841cc0c:
  this->IndexBuffer = pFVar1;
  CopyIndexBuffer(this,param_2);
  return;
}

// ReleaseRHIForStreaming @ 14841f540

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMultiSizeIndexContainer::ReleaseRHIForStreaming
          (FMultiSizeIndexContainer *this,FRHIResourceReplaceBatcher *param_1)

{
  FScriptContainerElement *pFVar1;
  FRawStaticIndexBuffer16or32Interface *pFVar2;
  int iVar3;
  
  pFVar2 = this->IndexBuffer;
  if ((pFVar2 != (FRawStaticIndexBuffer16or32Interface *)0x0) && (pFVar2->_padding_ != 0)) {
    iVar3 = (param_1->Infos).ArrayNum;
    if (iVar3 == (param_1->Infos).ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&(param_1->Infos).AllocatorInstance,&(param_1->Infos).ArrayMax);
    }
    (param_1->Infos).ArrayNum = iVar3 + 1;
    pFVar1 = (param_1->Infos).AllocatorInstance.Data + (longlong)iVar3 * 0x18;
    *(longlong *)pFVar1 = pFVar2->_padding_;
    *(longlong *)(pFVar1 + 8) = 0;
    pFVar1[0x10] = (FScriptContainerElement)0x0;
  }
  return;
}

// ReleaseResources @ 14841f690

void __thiscall FMultiSizeIndexContainer::ReleaseResources(FMultiSizeIndexContainer *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\MultiSizeIndexContainer.cpp"
                       ,0x2b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->IndexBuffer != (FRawStaticIndexBuffer16or32Interface *)0x0) {
    BeginReleaseResource((FRenderResource *)this->IndexBuffer,&UE::RenderCommandPipe::SkeletalMesh);
    return;
  }
  return;
}

// Serialize @ 148422d90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMultiSizeIndexContainer::Serialize(FMultiSizeIndexContainer *this,FArchive *param_1,bool param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  uchar *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_public:_void___cdecl_FMultiSizeIndexContainer::Serialize(FArchive_&,bool)_::_2_::FStat_STAT_MultiSizeIndexContainer_Serialize>
  FVar8;
  FRawStaticIndexBuffer16or32Interface *pFVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  FRawStaticIndexBuffer16or32Interface *pFVar13;
  FNameEntryId FVar14;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_48;
  
  pFVar13 = (FRawStaticIndexBuffer16or32Interface *)0x0;
  FVar14.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_MultiSizeIndexContainer_Serialize ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FMultiSizeIndexContainer::Serialize(FArchive_&,bool)_::_2_::FStat_STAT_MultiSizeIndexContainer_Serialize>
         )0x0) {
      pFVar7 = ::FName::FName((FName *)&local_res8.s,"STAT_MultiSizeIndexContainer_Serialize");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MultiSizeIndexContainer_Serialize,
                 *pFVar7,L"FMultiSizeIndexContainer::Serialize","STATGROUP_LoadTime",
                 "STATCAT_Advanced",L"LoadTime",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar8 = StatPtr_STAT_MultiSizeIndexContainer_Serialize;
  if (StatPtr_STAT_MultiSizeIndexContainer_Serialize ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FMultiSizeIndexContainer::Serialize(FArchive_&,bool)_::_2_::FStat_STAT_MultiSizeIndexContainer_Serialize>
       )0x0) {
    pFVar7 = ::FName::FName(&local_res10,"STAT_MultiSizeIndexContainer_Serialize");
    FVar8 = (FThreadSafeStaticStat<_public:_void___cdecl_FMultiSizeIndexContainer::Serialize(FArchive_&,bool)_::_2_::FStat_STAT_MultiSizeIndexContainer_Serialize>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_MultiSizeIndexContainer_Serialize,*pFVar7,
                         L"FMultiSizeIndexContainer::Serialize","STATGROUP_LoadTime",
                         "STATCAT_Advanced",L"LoadTime",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar8;
  bVar4 = false;
  bVar6 = false;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar11.Value;
        local_res8.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\MultiSizeIndexContainer.cpp"
                   ,0x9b);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar11.Value;
      local_res8.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar5 = true;
      FVar14.Value = FVar11.Value;
      goto LAB_148422f27;
    }
  }
  bVar5 = false;
  FVar12.ComparisonIndex.Value = 0;
  FVar12.Number = 0;
LAB_148422f27:
  if (*(int *)&param_1->field_0x40 < 0x11b) {
    puVar2 = *(ulonglong **)&param_1->field_0x8;
    if (puVar2[1] < *puVar2 + 4) {
      local_res8.s.LowPart._1_3_ = 0;
      local_res8.s.LowPart._0_1_ = (param_1->field_0x28 & 1) == 0;
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_res8);
      if (1 < local_res8.s.LowPart) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
    }
    else {
      *puVar2 = *puVar2 + 4;
    }
  }
  puVar3 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this);
  }
  else {
    this->DataTypeSize = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  pFVar9 = this->IndexBuffer;
  if (this->IndexBuffer == (FRawStaticIndexBuffer16or32Interface *)0x0) {
    if (this->DataTypeSize == '\x02') {
      pFVar9 = ::operator_new(0x58);
      if (pFVar9 != (FRawStaticIndexBuffer16or32Interface *)0x0) {
        FIndexBuffer::FIndexBuffer((FIndexBuffer *)pFVar9);
        (pFVar9->SRVValue).Reference = (FRHIShaderResourceView *)0x0;
        pFVar9->_padding_ = (longlong)&___7__FRawStaticIndexBuffer16or32_G__6B_;
        pFVar9[1]._padding_ = (longlong)&___7__TResourceArray_G_0A___6B_;
        pFVar9[1]._padding_ = 0;
        pFVar9[1]._padding_ = 0;
        *(bool *)&((TRefCountPtr<FRHIBuffer> *)&pFVar9[1]._padding_)->Reference = param_2;
        *(undefined4 *)&pFVar9[1]._padding_ = 0;
        pFVar13 = pFVar9;
      }
    }
    else {
      pFVar9 = ::operator_new(0x58);
      if (pFVar9 != (FRawStaticIndexBuffer16or32Interface *)0x0) {
        FIndexBuffer::FIndexBuffer((FIndexBuffer *)pFVar9);
        (pFVar9->SRVValue).Reference = (FRHIShaderResourceView *)0x0;
        pFVar9->_padding_ = (longlong)&___7__FRawStaticIndexBuffer16or32_I__6B_;
        pFVar9[1]._padding_ = (longlong)&___7__TResourceArray_I_0A___6B_;
        pFVar9[1]._padding_ = 0;
        pFVar9[1]._padding_ = 0;
        *(bool *)&((TRefCountPtr<FRHIBuffer> *)&pFVar9[1]._padding_)->Reference = param_2;
        *(undefined4 *)&pFVar9[1]._padding_ = 0;
        pFVar13 = pFVar9;
      }
    }
    this->IndexBuffer = pFVar13;
    pFVar9 = pFVar13;
  }
  (**(code **)(pFVar9->_padding_ + 0x30))(pFVar9,param_1);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar14.Value;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// SerializeMetaData @ 148423a80

void __thiscall
FMultiSizeIndexContainer::SerializeMetaData
          (FMultiSizeIndexContainer *this,FArchive *param_1,bool param_2)

{
  uchar *puVar1;
  FRawStaticIndexBuffer16or32Interface *this_00;
  
  puVar1 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,1);
  }
  else {
    this->DataTypeSize = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  this_00 = this->IndexBuffer;
  if (this_00 != (FRawStaticIndexBuffer16or32Interface *)0x0) goto LAB_148423b73;
  if (this->DataTypeSize == '\x02') {
    this_00 = ::operator_new(0x58);
    if (this_00 == (FRawStaticIndexBuffer16or32Interface *)0x0) {
LAB_148423b6b:
      this_00 = (FRawStaticIndexBuffer16or32Interface *)0x0;
    }
    else {
      FIndexBuffer::FIndexBuffer((FIndexBuffer *)this_00);
      *(bool *)&((TRefCountPtr<FRHIBuffer> *)&this_00[1]._padding_)->Reference = param_2;
      (this_00->SRVValue).Reference = (FRHIShaderResourceView *)0x0;
      this_00->_padding_ = (longlong)&___7__FRawStaticIndexBuffer16or32_G__6B_;
      this_00[1]._padding_ = (longlong)&___7__TResourceArray_G_0A___6B_;
      this_00[1]._padding_ = 0;
      this_00[1]._padding_ = 0;
      *(undefined4 *)&this_00[1]._padding_ = 0;
    }
  }
  else {
    this_00 = ::operator_new(0x58);
    if (this_00 == (FRawStaticIndexBuffer16or32Interface *)0x0) goto LAB_148423b6b;
    FIndexBuffer::FIndexBuffer((FIndexBuffer *)this_00);
    *(bool *)&((TRefCountPtr<FRHIBuffer> *)&this_00[1]._padding_)->Reference = param_2;
    (this_00->SRVValue).Reference = (FRHIShaderResourceView *)0x0;
    this_00->_padding_ = (longlong)&___7__FRawStaticIndexBuffer16or32_I__6B_;
    this_00[1]._padding_ = (longlong)&___7__TResourceArray_I_0A___6B_;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    *(undefined4 *)&this_00[1]._padding_ = 0;
  }
  this->IndexBuffer = this_00;
LAB_148423b73:
                    /* WARNING: Could not recover jumptable at 0x000148423b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this_00->_padding_ + 0x38))(this_00,param_1);
  return;
}

// SetOwnerName @ 1484258f0

void __thiscall
FMultiSizeIndexContainer::SetOwnerName(FMultiSizeIndexContainer *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\MultiSizeIndexContainer.cpp"
                       ,0x13,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->IndexBuffer != (FRawStaticIndexBuffer16or32Interface *)0x0) {
    this->IndexBuffer->_padding_ = (longlong)*param_1;
  }
  return;
}

