// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 19

// FRawStaticIndexBuffer @ 1483e4690

FRawStaticIndexBuffer * __thiscall
FRawStaticIndexBuffer::FRawStaticIndexBuffer(FRawStaticIndexBuffer *this,bool param_1)

{
  FIndexBuffer::FIndexBuffer((FIndexBuffer *)this);
  this->CachedNumIndices = -1;
  this->_padding_ = (longlong)&___7FRawStaticIndexBuffer__6B_;
  (this->IndexStorage)._padding_ = 0;
  (this->IndexStorage)._padding_ = 0;
  (this->IndexStorage)._padding_ = (longlong)&___7__TResourceArray_E_0A___6B_;
  (this->IndexStorage).bNeedsCPUAccess = param_1;
  this->b32Bit = false;
  return this;
}

// ~FRawStaticIndexBuffer @ 1483e8cd0

void __thiscall FRawStaticIndexBuffer::~FRawStaticIndexBuffer(FRawStaticIndexBuffer *this)

{
  this->_padding_ = (longlong)&___7FRawStaticIndexBuffer__6B_;
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->IndexStorage)._padding_);
  (this->IndexStorage)._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  FIndexBuffer::~FIndexBuffer((FIndexBuffer *)this);
  return;
}

// AccessStream16 @ 1483ef180

ushort * __thiscall FRawStaticIndexBuffer::AccessStream16(FRawStaticIndexBuffer *this)

{
  ushort *puVar1;
  
  if (this->b32Bit == false) {
    puVar1 = (ushort *)(this->IndexStorage)._padding_;
    if (((ulonglong)puVar1 & 1) != 0) {
      return (ushort *)((longlong)&(this->IndexStorage)._padding_ + ((longlong)puVar1 >> 0x18));
    }
  }
  else {
    puVar1 = (ushort *)0x0;
  }
  return puVar1;
}

// AccessStream32 @ 1483ef1b0

uint * __thiscall FRawStaticIndexBuffer::AccessStream32(FRawStaticIndexBuffer *this)

{
  uint *puVar1;
  
  if (this->b32Bit == false) {
    puVar1 = (uint *)0x0;
  }
  else {
    puVar1 = (uint *)(this->IndexStorage)._padding_;
    if (((ulonglong)puVar1 & 1) != 0) {
      return (uint *)((longlong)&(this->IndexStorage)._padding_ + ((longlong)puVar1 >> 0x18));
    }
  }
  return puVar1;
}

// AppendIndices @ 1483ef9c0

void __thiscall
FRawStaticIndexBuffer::AppendIndices(FRawStaticIndexBuffer *this,uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)(this->IndexStorage)._padding_;
  uVar2 = (int)((iVar1 >> 0x1f & 3U) + iVar1) >> 2;
  if (this->b32Bit == false) {
    uVar2 = (int)(this->IndexStorage)._padding_ / 2;
  }
  InsertIndices(this,uVar2,param_1,param_2);
  return;
}

// ClearMetaData @ 1483f4950

void __thiscall FRawStaticIndexBuffer::ClearMetaData(FRawStaticIndexBuffer *this)

{
  this->CachedNumIndices = -1;
  return;
}

// CreateRHIBuffer @ 1483f9fe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TRefCountPtr<FRHIBuffer> __thiscall
FRawStaticIndexBuffer::CreateRHIBuffer(FRawStaticIndexBuffer *this,FRHICommandListBase *param_1)

{
  int iVar1;
  EShaderPlatform EVar2;
  bool bVar3;
  int iVar4;
  FLazyName *this_00;
  FRHICommandListBase *in_R8;
  
  EVar2 = GMaxRHIShaderPlatform;
  iVar1 = (int)(this->IndexStorage)._padding_;
  iVar4 = this->CachedNumIndices;
  if (iVar4 < 0) {
    if (this->b32Bit == false) {
      iVar4 = iVar1 / 2;
    }
    else {
      iVar4 = (int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2;
    }
  }
  if (iVar4 < 1) {
    (param_1->MemManager).Top = (uchar *)0x0;
  }
  else {
    bVar3 = AreBufferSRVsAlwaysCreatedByDefault(GMaxRHIShaderPlatform);
    if (!bVar3) {
      IsGPUSkinPassThroughSupported(EVar2);
    }
    (**(code **)((this->IndexStorage)._padding_ + 0x30))(&this->IndexStorage);
    this_00 = &ClassName16;
    if (this->b32Bit != false) {
      this_00 = &ClassName32;
    }
    FLazyName::Resolve(this_00);
    FRHICommandListBase::CreateBuffer(in_R8,(FRHIBufferCreateDesc *)param_1);
  }
  return (TRefCountPtr<FRHIBuffer>)(FRHIBuffer *)param_1;
}

// Discard @ 1483fb880

void __thiscall FRawStaticIndexBuffer::Discard(FRawStaticIndexBuffer *this)

{
  TResourceArray<unsigned_char,0> *pTVar1;
  
  pTVar1 = &this->IndexStorage;
  (**(code **)((this->IndexStorage)._padding_ + 0x38))(pTVar1,0);
                    /* WARNING: Could not recover jumptable at 0x0001483fb8a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pTVar1->_padding_ + 0x18))(pTVar1);
  return;
}

// ExpandTo32Bit @ 148401140

void __thiscall FRawStaticIndexBuffer::ExpandTo32Bit(FRawStaticIndexBuffer *this)

{
  longlong *this_00;
  int *piVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  ushort *puVar5;
  TMemoryImagePtr<FScriptContainerElement>_u_0 TVar6;
  int iVar7;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_20;
  undefined8 local_18;
  bool local_10;
  
  if (this->b32Bit == false) {
    lVar4 = (this->IndexStorage)._padding_;
    this->b32Bit = true;
    local_10 = (bool)(**(code **)(lVar4 + 0x30))(&this->IndexStorage);
    uVar3 = this->CachedNumIndices;
    iVar7 = 0;
    local_20.Packed = 0;
    local_18 = (ulonglong)(uint)local_18;
    if ((int)(uVar3 << 2) < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uVar3 << 2));
    }
    local_18 = 0;
    if ((uVar3 & 0x3fffffff) != 0) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (1,1,uVar3 << 2,(ForAnyElementType *)&local_20.Frozen,0,
                 (int *)((longlong)&local_18 + 4));
    }
    UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (1,1,this->CachedNumIndices << 2,(ForAnyElementType *)&local_20.Frozen,
               (int *)&local_18,(int *)((longlong)&local_18 + 4));
    puVar5 = (ushort *)(this->IndexStorage)._padding_;
    this_00 = &(this->IndexStorage)._padding_;
    if (((ulonglong)puVar5 & 1) != 0) {
      puVar5 = (ushort *)((longlong)this_00 + ((longlong)puVar5 >> 0x18));
    }
    TVar6 = local_20;
    if ((local_20.Packed & 1) != 0) {
      TVar6.UnfrozenPtr =
           (FScriptContainerElement *)((longlong)&local_20 + ((longlong)local_20.Packed >> 0x18));
    }
    if (0 < this->CachedNumIndices) {
      do {
        uVar2 = *puVar5;
        puVar5 = puVar5 + 1;
        *(uint *)TVar6.UnfrozenPtr = (uint)uVar2;
        TVar6.UnfrozenPtr = (FScriptContainerElement *)(TVar6.Packed + 4);
        iVar7 = iVar7 + 1;
      } while (iVar7 < this->CachedNumIndices);
    }
    piVar1 = (int *)((longlong)&(this->IndexStorage)._padding_ + 4);
    *(undefined4 *)&(this->IndexStorage)._padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (1,1,0,(ForAnyElementType *)this_00,0,piVar1);
    }
    if ((TMemoryImagePtr<FScriptContainerElement>_u_0 *)this_00 != &local_20) {
      FMemoryImageAllocatorBase::MoveToEmpty
                ((FMemoryImageAllocatorBase *)this_00,(FMemoryImageAllocatorBase *)&local_20.Frozen)
      ;
      *(uint *)&(this->IndexStorage)._padding_ = (uint)local_18;
      *piVar1 = local_18._4_4_;
      local_18 = 0;
    }
    (this->IndexStorage).bNeedsCPUAccess = local_10;
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)&local_20.Frozen);
  }
  return;
}

// GetArrayView @ 148405250

FIndexArrayView * __thiscall
FRawStaticIndexBuffer::GetArrayView
          (FRawStaticIndexBuffer *this,FIndexArrayView *__return_storage_ptr__)

{
  bool bVar1;
  int iVar2;
  void *pvVar3;
  
  bVar1 = this->b32Bit;
  iVar2 = (int)(this->IndexStorage)._padding_;
  pvVar3 = (void *)(this->IndexStorage)._padding_;
  iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2;
  if (bVar1 == false) {
    iVar2 = (int)(this->IndexStorage)._padding_ / 2;
  }
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)((longlong)&(this->IndexStorage)._padding_ + ((longlong)pvVar3 >> 0x18));
  }
  __return_storage_ptr__->NumIndices = iVar2;
  __return_storage_ptr__->UntypedIndexData = pvVar3;
  __return_storage_ptr__->b32Bit = bVar1;
  return __return_storage_ptr__;
}

// GetCopy @ 1484063d0

void __thiscall
FRawStaticIndexBuffer::GetCopy
          (FRawStaticIndexBuffer *this,TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int *piVar2;
  ushort uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  void *_Src;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  
  iVar4 = (int)(this->IndexStorage)._padding_;
  uVar10 = (int)((iVar4 >> 0x1f & 3U) + iVar4) >> 2;
  if (this->b32Bit == false) {
    uVar10 = (int)(this->IndexStorage)._padding_ / 2;
  }
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  piVar1 = &param_1->ArrayMax;
  piVar2 = &param_1->ArrayNum;
  *piVar2 = 0;
  if (*piVar1 != uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar10,&param_1->AllocatorInstance,0,piVar1);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,uVar10,&param_1->AllocatorInstance,piVar2,piVar1);
  if (this->b32Bit == false) {
    if (((longlong)(int)(this->IndexStorage)._padding_ != (longlong)*piVar2 * 2) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IndexStorage.Num() == OutIndices.Num() * sizeof(uint16)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RawIndexBuffer.cpp"
                           ,0x11c,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar11 = (this->IndexStorage)._padding_;
    if ((uVar11 & 1) != 0) {
      uVar11 = (longlong)&(this->IndexStorage)._padding_ + ((longlong)uVar11 >> 0x18);
    }
    uVar12 = 0;
    if (0 < (int)uVar10) {
      lVar9 = 0;
      do {
        uVar3 = *(ushort *)(uVar11 + lVar9 * 2);
        uVar7 = 0;
        if ((int)uVar12 < *piVar2) {
          uVar7 = ~uVar12 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar12 = uVar12 + 1;
        *(uint *)((param_1->AllocatorInstance).Data + lVar9 * 4) = (uint)uVar3;
        lVar9 = lVar9 + 1;
      } while (lVar9 < (int)uVar10);
    }
  }
  else {
    if (((int)(this->IndexStorage)._padding_ != *piVar2 << 2) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IndexStorage.Num() == OutIndices.Num() * OutIndices.GetTypeSize()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RawIndexBuffer.cpp"
                           ,0x116,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    plVar8 = &(this->IndexStorage)._padding_;
    _Src = (void *)*plVar8;
    if (((ulonglong)_Src & 1) != 0) {
      _Src = (void *)(((longlong)_Src >> 0x18) + (longlong)plVar8);
    }
    memcpy((param_1->AllocatorInstance).Data,_Src,(longlong)(int)(this->IndexStorage)._padding_);
  }
  return;
}

// InitRHI @ 14840dc10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRawStaticIndexBuffer::InitRHI(FRawStaticIndexBuffer *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  FRHIResource *this_00;
  TRefCountPtr<FRHIBuffer> TVar2;
  bool bVar3;
  FRHIResource *local_res8;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId395,"FRawStaticIndexBuffer::InitRHI",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RawIndexBuffer.cpp"
               ,0x18b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId395);
  }
  TVar2 = CreateRHIBuffer(this,(FRHICommandListBase *)&local_res8);
  plVar1 = &this->_padding_;
  if ((FRHIBuffer *)plVar1 != TVar2.Reference) {
    this_00 = (FRHIResource *)*plVar1;
    *plVar1 = (TVar2.Reference)->_padding_;
    (TVar2.Reference)->_padding_ = 0;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// InitRHIForStreaming @ 14840dea0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRawStaticIndexBuffer::InitRHIForStreaming
          (FRawStaticIndexBuffer *this,FRHIBuffer *param_1,FRHIResourceReplaceBatcher *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  
  if ((this->_padding_ != 0) && (param_1 != (FRHIBuffer *)0x0)) {
    iVar2 = (param_2->Infos).ArrayNum;
    if (iVar2 == (param_2->Infos).ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&(param_2->Infos).AllocatorInstance,&(param_2->Infos).ArrayMax);
    }
    (param_2->Infos).ArrayNum = iVar2 + 1;
    pFVar1 = (param_2->Infos).AllocatorInstance.Data + (longlong)iVar2 * 0x18;
    *(longlong *)pFVar1 = this->_padding_;
    *(FRHIBuffer **)(pFVar1 + 8) = param_1;
    pFVar1[0x10] = (FScriptContainerElement)0x0;
  }
  return;
}

// InsertIndices @ 14840eb30

void __thiscall
FRawStaticIndexBuffer::InsertIndices
          (FRawStaticIndexBuffer *this,uint param_1,uint *param_2,uint param_3)

{
  longlong *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined2 *puVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  undefined1 in_XMM1 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar14 [16];
  
  if (param_3 == 0) {
    return;
  }
  this_00 = &(this->IndexStorage)._padding_;
  iVar5 = 2;
  if (this->b32Bit != false) {
    iVar5 = 4;
  }
  uVar7 = iVar5 * param_1;
  uVar11 = iVar5 * param_3;
  TArray<unsigned_char,TMemoryImageAllocator<0>_>::InsertUninitializedImpl
            ((TArray<unsigned_char,TMemoryImageAllocator<0>_> *)this_00,uVar7,uVar11);
  iVar1 = (int)(this->IndexStorage)._padding_;
  uVar6 = 0;
  this->CachedNumIndices = iVar1 / iVar5;
  uVar10 = 0;
  if ((int)uVar7 < iVar1) {
    uVar10 = ~uVar7 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar8 = *this_00;
  if ((uVar8 & 1) != 0) {
    uVar8 = (longlong)this_00 + ((longlong)uVar8 >> 0x18);
  }
  puVar9 = (uint *)((longlong)(int)uVar7 + uVar8);
  if (param_2 == (uint *)0x0) {
    memset(puVar9,0,(ulonglong)uVar11);
    return;
  }
  if (this->b32Bit != false) {
    memcpy(puVar9,param_2,(ulonglong)uVar11);
    return;
  }
  if ((param_3 < 2) ||
     ((puVar9 <= param_2 + (param_3 - 1) &&
      (param_2 <= (uint *)((longlong)puVar9 + (ulonglong)(param_3 - 1) * 2))))) goto LAB_14840ed15;
  if (param_3 < 0x10) {
LAB_14840ece4:
    do {
      auVar13._8_8_ = 0;
      auVar13._0_8_ = *(ulonglong *)(param_2 + uVar6);
      in_XMM1 = pshufhw(in_XMM1,auVar13,0xd8);
      in_XMM2 = pshuflw(in_XMM2,in_XMM1,0xd8);
      *(int *)((longlong)puVar9 + uVar6 * 2) = in_XMM2._0_4_;
      uVar10 = (int)uVar6 + 2;
      uVar6 = (ulonglong)uVar10;
    } while (uVar10 < (param_3 & 0xfffffffe));
  }
  else {
    uVar10 = 8;
    do {
      auVar12 = pshufhw(in_XMM1,*(undefined1 (*) [16])(param_2 + uVar6),0xd8);
      auVar13 = *(undefined1 (*) [16])(param_2 + (uVar10 - 4));
      auVar14 = pshuflw(in_XMM2,auVar12,0xd8);
      *(ulonglong *)((longlong)puVar9 + uVar6 * 2) = CONCAT44(auVar14._8_4_,auVar14._0_4_);
      uVar11 = (int)uVar6 + 0x10;
      uVar6 = (ulonglong)uVar11;
      auVar13 = pshufhw(auVar12,auVar13,0xd8);
      auVar12 = pshuflw(auVar14,auVar13,0xd8);
      *(ulonglong *)((longlong)puVar9 + (ulonglong)(uVar10 - 4) * 2) =
           CONCAT44(auVar12._8_4_,auVar12._0_4_);
      auVar13 = pshufhw(auVar13,*(undefined1 (*) [16])(param_2 + uVar10),0xd8);
      auVar12 = pshuflw(auVar12,auVar13,0xd8);
      *(ulonglong *)((longlong)puVar9 + (ulonglong)uVar10 * 2) =
           CONCAT44(auVar12._8_4_,auVar12._0_4_);
      uVar7 = uVar10 + 4;
      uVar10 = uVar10 + 0x10;
      in_XMM1 = pshufhw(auVar13,*(undefined1 (*) [16])(param_2 + uVar7),0xd8);
      in_XMM2 = pshuflw(auVar12,in_XMM1,0xd8);
      *(ulonglong *)((longlong)puVar9 + (ulonglong)uVar7 * 2) =
           CONCAT44(in_XMM2._8_4_,in_XMM2._0_4_);
    } while (uVar11 < param_3 - (param_3 & 0xf));
    if (1 < (param_3 & 0xf)) goto LAB_14840ece4;
  }
  if (param_3 <= (uint)uVar6) {
    return;
  }
LAB_14840ed15:
  puVar4 = (undefined2 *)((longlong)puVar9 + uVar6 * 2);
  uVar8 = (ulonglong)(param_3 - (int)uVar6);
  puVar9 = param_2 + uVar6;
  do {
    uVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    *puVar4 = (short)uVar10;
    puVar4 = puVar4 + 1;
    uVar8 = uVar8 - 1;
  } while (uVar8 != 0);
  return;
}

// ReleaseRHIForStreaming @ 14841f620

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRawStaticIndexBuffer::ReleaseRHIForStreaming
          (FRawStaticIndexBuffer *this,FRHIResourceReplaceBatcher *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  
  if (this->_padding_ != 0) {
    iVar2 = (param_1->Infos).ArrayNum;
    if (iVar2 == (param_1->Infos).ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&(param_1->Infos).AllocatorInstance,&(param_1->Infos).ArrayMax);
    }
    (param_1->Infos).ArrayNum = iVar2 + 1;
    pFVar1 = (param_1->Infos).AllocatorInstance.Data + (longlong)iVar2 * 0x18;
    *(longlong *)pFVar1 = this->_padding_;
    *(longlong *)(pFVar1 + 8) = 0;
    pFVar1[0x10] = (FScriptContainerElement)0x0;
  }
  return;
}

// RemoveIndicesAt @ 1484200f0

void __thiscall
FRawStaticIndexBuffer::RemoveIndicesAt(FRawStaticIndexBuffer *this,uint param_1,uint param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  if (param_2 != 0) {
    plVar1 = &(this->IndexStorage)._padding_;
    iVar8 = 2;
    if (this->b32Bit != false) {
      iVar8 = 4;
    }
    uVar10 = iVar8 * param_1;
    uVar9 = iVar8 * param_2;
    uVar5 = 0;
    if ((int)(uVar10 + uVar9) <= (int)(this->IndexStorage)._padding_) {
      uVar5 = ~(uVar10 | uVar9) >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (uVar9 != 0) {
      uVar7 = *plVar1;
      if ((uVar7 & 1) != 0) {
        uVar7 = (longlong)plVar1 + ((longlong)uVar7 >> 0x18);
      }
      iVar6 = ((int)(this->IndexStorage)._padding_ - uVar10) - uVar9;
      if (iVar6 != 0) {
        memmove((void *)((longlong)(int)uVar10 + uVar7),
                (void *)((longlong)(int)uVar9 + (longlong)((longlong)(int)uVar10 + uVar7)),
                (longlong)iVar6);
      }
      plVar2 = &(this->IndexStorage)._padding_;
      *(uint *)plVar2 = (int)*plVar2 - uVar9;
      UE::Core::Private::ReallocShrink<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (1,1,(ForAnyElementType *)plVar1,(int)(this->IndexStorage)._padding_,
                 (int *)((longlong)&(this->IndexStorage)._padding_ + 4));
    }
    this->CachedNumIndices = (int)(this->IndexStorage)._padding_ / iVar8;
  }
  return;
}

// Serialize @ 148423200

void __thiscall
FRawStaticIndexBuffer::Serialize(FRawStaticIndexBuffer *this,FArchive *param_1,bool param_2)

{
  longlong *this_00;
  uint *puVar1;
  longlong lVar2;
  ulonglong *puVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  void *_Dst;
  longlong *plVar7;
  TMemoryImagePtr<FScriptContainerElement>_u_0 _Src;
  ulonglong uVar8;
  uint local_res8 [2];
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_40;
  undefined8 local_38;
  undefined1 local_30;
  
  (**(code **)((this->IndexStorage)._padding_ + 0x38))(&this->IndexStorage,param_2);
  this_00 = &(this->IndexStorage)._padding_;
  if (*(int *)&param_1->field_0x40 < 0x115) {
    local_40.Packed = 0;
    local_38 = 0;
    local_30 = 0;
    this->b32Bit = false;
    TArray<unsigned_short,TMemoryImageAllocator<0>_>::BulkSerialize
              ((TArray<unsigned_short,TMemoryImageAllocator<0>_> *)&local_40.Frozen,param_1,false);
    uVar4 = (int)local_38 * 2;
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    puVar1 = (uint *)((longlong)&(this->IndexStorage)._padding_ + 4);
    plVar7 = &(this->IndexStorage)._padding_;
    *(undefined4 *)plVar7 = 0;
    if (*puVar1 != uVar4) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (1,1,uVar4,(ForAnyElementType *)this_00,0,(int *)puVar1);
    }
    UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (1,1,uVar4,(ForAnyElementType *)this_00,(int *)plVar7,(int *)puVar1);
    _Src = local_40;
    if ((local_40.Packed & 1) != 0) {
      _Src.UnfrozenPtr =
           (FScriptContainerElement *)((longlong)&local_40 + ((longlong)local_40.Packed >> 0x18));
    }
    _Dst = (void *)*this_00;
    if (((ulonglong)_Dst & 1) != 0) {
      _Dst = (void *)((longlong)this_00 + ((longlong)_Dst >> 0x18));
    }
    memcpy(_Dst,_Src.UnfrozenPtr,(longlong)(int)(this->IndexStorage)._padding_);
    iVar6 = 2;
    if (this->b32Bit != false) {
      iVar6 = 4;
    }
    this->CachedNumIndices = (int)(this->IndexStorage)._padding_ / iVar6;
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)&local_40.Frozen);
  }
  else {
    ::operator<<(param_1,&this->b32Bit);
    TArray<unsigned_char,TMemoryImageAllocator<0>_>::BulkSerialize
              ((TArray<unsigned_char,TMemoryImageAllocator<0>_> *)this_00,param_1,false);
    iVar6 = 2;
    if (this->b32Bit != false) {
      iVar6 = 4;
    }
    cVar5 = '\0';
    iVar6 = (int)(this->IndexStorage)._padding_ / iVar6;
    this->CachedNumIndices = iVar6;
    lVar2 = *(longlong *)&param_1->field_0x68;
    if ((((lVar2 != 0) && (*(longlong *)(lVar2 + 0x10) != 0)) && (0 < iVar6)) &&
       (this->b32Bit == false)) {
      uVar8 = *this_00;
      plVar7 = (longlong *)(*(longlong *)(lVar2 + 8) + 8);
      if ((uVar8 & 1) != 0) {
        uVar8 = (longlong)this_00 + ((longlong)uVar8 >> 0x18);
      }
      cVar5 = (**(code **)(*plVar7 + 0x1c0))(plVar7,uVar8);
    }
    puVar3 = *(ulonglong **)&param_1->field_0x8;
    if (puVar3[1] < *puVar3 + 4) {
      local_res8[0] = 0;
      if ((param_1->field_0x28 & 1) == 0) {
        local_res8[0] = (uint)(cVar5 != '\0');
      }
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      if (1 < local_res8[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
    }
    else {
      *puVar3 = *puVar3 + 4;
    }
  }
  return;
}

// SerializeMetaData @ 148423ba0

void __thiscall
FRawStaticIndexBuffer::SerializeMetaData(FRawStaticIndexBuffer *this,FArchive *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = &this->CachedNumIndices;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  ::operator<<(param_1,&this->b32Bit);
  return;
}

// SetIndices @ 148424bd0

void __thiscall
FRawStaticIndexBuffer::SetIndices
          (FRawStaticIndexBuffer *this,TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_1,
          Type param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint *puVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  void *_Dst;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  
  iVar4 = param_1->ArrayNum;
  lVar8 = (longlong)iVar4;
  bVar6 = false;
  if (param_2 == Force32Bit) {
    bVar6 = true;
  }
  else if (param_2 == AutoDetect) {
    uVar10 = 0;
    lVar9 = 0;
    do {
      if (lVar8 <= lVar9) break;
      uVar7 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar7 = *(uint *)((param_1->AllocatorInstance).Data + lVar9 * 4);
      bVar6 = 0xffff < uVar7;
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 1;
    } while (uVar7 < 0x10000);
  }
  plVar1 = &(this->IndexStorage)._padding_;
  uVar10 = (bVar6 + 1) * iVar4 * 2;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  plVar2 = &(this->IndexStorage)._padding_;
  puVar3 = (uint *)((longlong)&(this->IndexStorage)._padding_ + 4);
  *(undefined4 *)plVar2 = 0;
  if (*puVar3 != uVar10) {
    UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (1,1,uVar10,(ForAnyElementType *)plVar1,0,(int *)puVar3);
  }
  UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
            (1,1,uVar10,(ForAnyElementType *)plVar1,(int *)plVar2,(int *)puVar3);
  this->CachedNumIndices = iVar4;
  if (bVar6 == false) {
    if (((longlong)(int)(this->IndexStorage)._padding_ != (longlong)param_1->ArrayNum * 2) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IndexStorage.Num() == InIndices.Num() * sizeof(uint16)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RawIndexBuffer.cpp"
                           ,0xd1,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar11 = *plVar1;
    if ((uVar11 & 1) != 0) {
      uVar11 = (longlong)plVar1 + ((longlong)uVar11 >> 0x18);
    }
    uVar10 = 0;
    if (0 < lVar8) {
      lVar9 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar10 < param_1->ArrayNum) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar10 = uVar10 + 1;
        *(undefined2 *)(uVar11 + lVar9 * 2) =
             *(undefined2 *)((param_1->AllocatorInstance).Data + lVar9 * 4);
        lVar9 = lVar9 + 1;
      } while (lVar9 < lVar8);
    }
    this->b32Bit = false;
  }
  else {
    if (((int)(this->IndexStorage)._padding_ != param_1->ArrayNum << 2) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IndexStorage.Num() == InIndices.Num() * InIndices.GetTypeSize()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RawIndexBuffer.cpp"
                           ,0xca,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    _Dst = (void *)*plVar1;
    if (((ulonglong)_Dst & 1) != 0) {
      _Dst = (void *)((longlong)plVar1 + ((longlong)_Dst >> 0x18));
    }
    memcpy(_Dst,(param_1->AllocatorInstance).Data,(longlong)(int)(this->IndexStorage)._padding_);
    this->b32Bit = true;
  }
  return;
}

