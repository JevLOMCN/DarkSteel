// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GPUTextureTransfer
// Functions: 26

// DVPSync @ 14d7574d0

/* WARNING: Enum "Type": Some values do not have unique names */

DVPSync * __thiscall
UE::GPUTextureTransfer::Private::FTextureTransferBase::DVPSync::DVPSync
          (DVPSync *this,uint param_1,uint param_2)

{
  DVPStatus DVar1;
  uint *puVar2;
  DVPSyncObjectDescRec local_28;
  
  this->Semaphore = (uint *)0x0;
  this->ReleaseValue = 0;
  this->AcquireValue = 0;
  this->DVPSyncObject = 0;
  puVar2 = FMemory::Malloc((ulonglong)param_1,param_2);
  this->Semaphore = puVar2;
  if (puVar2 != (uint *)0x0) {
    *puVar2 = 0;
  }
  local_28.sem = this->Semaphore;
  local_28.flags = 0;
  local_28._12_4_ = 0;
  local_28.externalClientWaitFunc = (_func___cdecl_DVPStatus_ulong64_uint_bool_ulong64 *)0x0;
  DVar1 = dvpImportSyncObject(&local_28,&this->DVPSyncObject);
  if ((DVar1 != DVP_STATUS_OK) && (1 < (byte)LogGPUTextureTransfer._0_1_)) {
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGPUTextureTransfer);
  }
  return this;
}

// FTextureTransferBase @ 14d757570

FTextureTransferBase * __thiscall
UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureTransferBase
          (FTextureTransferBase *this)

{
  this->bInitialized = false;
  this->_padding_ = (longlong)&___7FTextureTransferBase_Private_GPUTextureTransfer_UE__6B_;
  *(undefined8 *)&this->RegisteredBuffers = 0;
  *(undefined8 *)&(this->RegisteredBuffers).field_0x8 = 0;
  *(undefined8 *)&(this->RegisteredBuffers).field_0x20 = 0;
  *(undefined4 *)&(this->RegisteredBuffers).field_0x28 = 0;
  *(undefined4 *)&(this->RegisteredBuffers).field_0x2c = 0x80;
  *(undefined4 *)&(this->RegisteredBuffers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RegisteredBuffers).field_0x34 = 0;
  *(undefined8 *)&(this->RegisteredBuffers).field_0x40 = 0;
  *(undefined4 *)&(this->RegisteredBuffers).field_0x48 = 0;
  *(undefined8 *)&this->RegisteredTextures = 0;
  *(undefined8 *)&(this->RegisteredTextures).field_0x8 = 0;
  *(undefined8 *)&(this->RegisteredTextures).field_0x20 = 0;
  *(undefined4 *)&(this->RegisteredTextures).field_0x28 = 0;
  *(undefined4 *)&(this->RegisteredTextures).field_0x2c = 0x80;
  *(undefined4 *)&(this->RegisteredTextures).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RegisteredTextures).field_0x34 = 0;
  *(undefined8 *)&(this->RegisteredTextures).field_0x40 = 0;
  *(undefined4 *)&(this->RegisteredTextures).field_0x48 = 0;
  this->BufferAddressAlignment = 0;
  this->BufferGpuStrideAlignment = 0;
  this->SemaphoreAddressAlignment = 0;
  this->SemaphoreAllocSize = 0;
  this->SemaphorePayloadOffset = 0;
  this->SemaphorePayloadSize = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  return this;
}

// ~DVPSync @ 14d757790

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GPUTextureTransfer::Private::FTextureTransferBase::DVPSync::~DVPSync(DVPSync *this)

{
  DVPStatus DVar1;
  
  DVar1 = dvpFreeSyncObject(this->DVPSyncObject);
  if ((DVar1 != DVP_STATUS_OK) && (1 < (byte)LogGPUTextureTransfer._0_1_)) {
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGPUTextureTransfer);
  }
  FMemory::Free(this->Semaphore);
  return;
}

// ~FTextureTransferBase @ 14d7578a0

void __thiscall
UE::GPUTextureTransfer::Private::FTextureTransferBase::~FTextureTransferBase
          (FTextureTransferBase *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FTextureTransferBase_Private_GPUTextureTransfer_UE__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  *(undefined4 *)&(this->RegisteredTextures).field_0x48 = 0;
  pvVar1 = *(void **)&(this->RegisteredTextures).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FRHITexture_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRHITexture_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRHITexture_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RegisteredTextures);
  *(undefined4 *)&(this->RegisteredBuffers).field_0x48 = 0;
  pvVar1 = *(void **)&(this->RegisteredBuffers).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<void_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FExternalBufferInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<void_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FExternalBufferInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<void_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FExternalBufferInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RegisteredBuffers);
  this->_padding_ = (longlong)&___7ITextureTransfer_GPUTextureTransfer_UE__6B_;
  return;
}

// BeginSync @ 14d758090

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::GPUTextureTransfer::Private::FTextureTransferBase::BeginSync
          (FTextureTransferBase *this,void *param_1,ETransferDirection param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  DVPSync *pDVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  DVPStatus DVar5;
  FExternalBufferInfo *pFVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  bool bVar9;
  FString local_28;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId130,"BeginSync",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\GPUTextureTransfer\\Private\\TextureTransferBase.cpp"
               ,0x82);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId130);
  }
  lpCriticalSection = &this->CriticalSection;
  bVar8 = true;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar6 = TMapBase<void_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FExternalBufferInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FExternalBufferInfo,0>_>
           ::Find((TMapBase<void_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FExternalBufferInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FExternalBufferInfo,0>_>
                   *)&this->RegisteredBuffers,param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (pFVar6 == (FExternalBufferInfo *)0x0) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7017882467520479092>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\GPUTextureTransfer\\Private\\TextureTransferBase.cpp"
                       ,0x8c,"Info");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  else if (((pFVar6->GPUMemorySync).Ptr == (DVPSync *)0x0) ||
          ((pFVar6->SystemMemorySync).Ptr == (DVPSync *)0x0)) {
    bVar8 = false;
    if (1 < (byte)LogGPUTextureTransfer._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGPUTextureTransfer);
    }
  }
  else {
    ::FString::PrintfImpl(&local_28,L"BeginSync Texture: %llu, Buffer %llu");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar7.Data = local_28.Data.AllocatorInstance.Data;
    }
    bVar3 = -1 < CpuChannel->Enabled;
    if (bVar3) {
      FCpuProfilerTrace::OutputBeginDynamicEvent
                ((wchar_t *)FVar7.Data,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\GPUTextureTransfer\\Private\\TextureTransferBase.cpp"
                 ,0x90);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pDVar1 = (pFVar6->GPUMemorySync).Ptr;
    pDVar1->AcquireValue = pDVar1->AcquireValue + 1;
    pDVar1 = (pFVar6->SystemMemorySync).Ptr;
    pDVar1->ReleaseValue = pDVar1->ReleaseValue + 1;
    bVar8 = true;
    if (((param_2 == GPU_TO_CPU) &&
        (DVar5 = dvpSyncObjClientWaitPartial
                           (((pFVar6->GPUMemorySync).Ptr)->DVPSyncObject,
                            ((pFVar6->GPUMemorySync).Ptr)->AcquireValue,500000000),
        DVar5 != DVP_STATUS_OK)) && (bVar8 = false, 1 < (byte)LogGPUTextureTransfer._0_1_)) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGPUTextureTransfer);
    }
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar8;
}

// ClearBufferInfo @ 14d758530

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GPUTextureTransfer::Private::FTextureTransferBase::ClearBufferInfo
          (FTextureTransferBase *this,FExternalBufferInfo *param_1)

{
  DVPSync *pDVar1;
  int iVar2;
  DVPStatus DVar3;
  
  iVar2 = (**(code **)(this->_padding_ + 0xa8))(this,param_1->DVPHandle);
  if ((iVar2 != 0) && (1 < (byte)LogGPUTextureTransfer._0_1_)) {
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGPUTextureTransfer);
  }
  DVar3 = dvpDestroyBuffer(param_1->DVPHandle);
  if ((DVar3 != DVP_STATUS_OK) && (1 < (byte)LogGPUTextureTransfer._0_1_)) {
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGPUTextureTransfer);
  }
  pDVar1 = (param_1->SystemMemorySync).Ptr;
  if (pDVar1 != (DVPSync *)0x0) {
    (param_1->SystemMemorySync).Ptr = (DVPSync *)0x0;
    DVar3 = dvpFreeSyncObject(pDVar1->DVPSyncObject);
    if ((DVar3 != DVP_STATUS_OK) && (1 < (byte)LogGPUTextureTransfer._0_1_)) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGPUTextureTransfer);
    }
    FMemory::Free(pDVar1->Semaphore);
    ::operator_delete(pDVar1,0x18);
  }
  pDVar1 = (param_1->GPUMemorySync).Ptr;
  if (pDVar1 != (DVPSync *)0x0) {
    (param_1->GPUMemorySync).Ptr = (DVPSync *)0x0;
    DVar3 = dvpFreeSyncObject(pDVar1->DVPSyncObject);
    if ((DVar3 != DVP_STATUS_OK) && (1 < (byte)LogGPUTextureTransfer._0_1_)) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGPUTextureTransfer);
    }
    FMemory::Free(pDVar1->Semaphore);
    ::operator_delete(pDVar1,0x18);
  }
  return;
}

// ClearRegisteredBuffers @ 14d758670

void __thiscall
UE::GPUTextureTransfer::Private::FTextureTransferBase::ClearRegisteredBuffers
          (FTextureTransferBase *this)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar11 = 0;
  iVar3 = *(int *)&(this->RegisteredBuffers).field_0x28;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->RegisteredBuffers).field_0x10;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->RegisteredBuffers).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)TStack_60.Array;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14d75870e;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar1 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14d75870e:
  uVar10 = *(uint *)&(this->RegisteredBuffers).field_0x28;
  puVar2 = &(this->RegisteredBuffers).field_0x10;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->RegisteredBuffers).field_0x8 -
                       *(int *)&(this->RegisteredBuffers).field_0x34);
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->RegisteredBuffers).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->RegisteredBuffers).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar2;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14d758810;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14d758810:
  while( true ) {
    if (*(int *)&(this->RegisteredBuffers).field_0x8 - *(int *)&(this->RegisteredBuffers).field_0x34
        != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<void_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FExternalBufferInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    ClearBufferInfo(this,(FExternalBufferInfo *)
                         (*(longlong *)&(this->RegisteredBuffers).field_0x0 + 8 +
                         (longlong)TStack_60.CurrentBitIndex * 0x40));
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  TSet<TTuple<void_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FExternalBufferInfo>,TDefaultMapHashableKeyFuncs<void_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FExternalBufferInfo,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<void_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FExternalBufferInfo>,TDefaultMapHashableKeyFuncs<void_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FExternalBufferInfo,0>,FDefaultSetAllocator>
           *)&this->RegisteredBuffers);
  return;
}

// ClearRegisteredTextures @ 14d758890

void __thiscall
UE::GPUTextureTransfer::Private::FTextureTransferBase::ClearRegisteredTextures
          (FTextureTransferBase *this)

{
  TMap<FRHITexture_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHITexture_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo,0>_>
  *this_00;
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  __uint64 _Var4;
  HANDLE hObject;
  longlong lVar5;
  uint *puVar6;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  TMap<FRHITexture_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHITexture_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo,0>_>
  *local_40;
  int iStack_38;
  uint uStack_34;
  undefined1 *local_30;
  undefined4 uStack_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  
  iStack_38 = 0;
  this_00 = &this->RegisteredTextures;
  iVar2 = *(int *)&(this->RegisteredTextures).field_0x28;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->RegisteredTextures).field_0x10;
  uStack_34 = 1;
  local_20 = 0;
  iStack_24 = 0;
  if (iVar2 != 0) {
    puVar6 = *(uint **)&(this->RegisteredTextures).field_0x20;
    if (puVar6 == (uint *)0x0) {
      puVar6 = (uint *)TStack_60.Array;
    }
    uVar3 = *puVar6;
    while (uVar3 == 0) {
      lVar5 = (longlong)iStack_38;
      local_20 = local_20 + 0x20;
      iStack_38 = iStack_38 + 1;
      iStack_24 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_38) goto LAB_14d758928;
      uVar3 = puVar6[lVar5 + 1];
    }
    uStack_34 = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_34 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iStack_24 = (int)lVar5 + -1 + local_20;
    if (iVar2 < iStack_24) {
      iStack_24 = iVar2;
    }
  }
LAB_14d758928:
  uStack_28 = 0xffffffff;
  iStack_1c = TStack_60.CurrentBitIndex;
  TStack_60._padding_ = CONCAT44(uStack_34,iStack_38);
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._28_4_ = TStack_60.CurrentBitIndex;
  TStack_60.BaseBitIndex = local_20;
  local_40 = this_00;
  local_30 = (undefined1 *)TStack_60.Array;
  TStack_60.CurrentBitIndex = iStack_24;
  if (iStack_24 < iVar2) {
    do {
      iVar2 = TStack_60.CurrentBitIndex;
      _Var4 = *(__uint64 *)
               ((longlong)TStack_60.CurrentBitIndex * 0x20 + 8 + *(longlong *)&this_00->field_0x0);
      if (_Var4 != 0) {
        dvpFreeBuffer(_Var4);
        hObject = *(HANDLE *)((longlong)iVar2 * 0x20 + 0x10 + *(longlong *)&this_00->field_0x0);
        if (hObject != (HANDLE)0x0) {
          CloseHandle(hObject);
        }
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  TSet<TTuple<FRHITexture_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo>,TDefaultMapHashableKeyFuncs<FRHITexture_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FRHITexture_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo>,TDefaultMapHashableKeyFuncs<FRHITexture_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo,0>,FDefaultSetAllocator>
           *)this_00);
  return;
}

// EndSync @ 14d7591f0

void __thiscall
UE::GPUTextureTransfer::Private::FTextureTransferBase::EndSync
          (FTextureTransferBase *this,void *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  DVPSync *pDVar1;
  FExternalBufferInfo *pFVar2;
  bool bVar3;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId173,"EndSync",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\GPUTextureTransfer\\Private\\TextureTransferBase.cpp"
               ,0xad);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId173);
  }
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar2 = TMapBase<void_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FExternalBufferInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FExternalBufferInfo,0>_>
           ::Find((TMapBase<void_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FExternalBufferInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FExternalBufferInfo,0>_>
                   *)&this->RegisteredBuffers,param_1);
  if (pFVar2 != (FExternalBufferInfo *)0x0) {
    pDVar1 = (pFVar2->SystemMemorySync).Ptr;
    if (pDVar1 != (DVPSync *)0x0) {
      *pDVar1->Semaphore = pDVar1->ReleaseValue;
    }
    pFVar2->PendingTextureHandle = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetBufferAlignment @ 14d759750

uint __thiscall
UE::GPUTextureTransfer::Private::FTextureTransferBase::GetBufferAlignment
          (FTextureTransferBase *this)

{
  return this->BufferAddressAlignment;
}

// GetTextureStride @ 14d759960

uint __thiscall
UE::GPUTextureTransfer::Private::FTextureTransferBase::GetTextureStride(FTextureTransferBase *this)

{
  return this->BufferGpuStrideAlignment;
}

// Initialize @ 14d75a260

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::GPUTextureTransfer::Private::FTextureTransferBase::Initialize
          (FTextureTransferBase *this,FInitializeDMAArgs *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  bool bVar2;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (this->bInitialized == false) {
    iVar1 = (**(code **)(this->_padding_ + 0x88))(this,param_1);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(this->_padding_ + 0x90))
                        (this,&this->BufferAddressAlignment,&this->BufferGpuStrideAlignment,
                         &this->SemaphoreAddressAlignment,&this->SemaphoreAllocSize,
                         &this->SemaphorePayloadOffset,&this->SemaphorePayloadSize);
      if ((iVar1 != 0) && (1 < (byte)LogGPUTextureTransfer._0_1_)) {
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGPUTextureTransfer);
      }
      this->bInitialized = true;
      bVar2 = true;
      goto LAB_14d75a2c5;
    }
    if (3 < (byte)LogGPUTextureTransfer._0_1_) {
      Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogGPUTextureTransfer);
    }
  }
  bVar2 = false;
LAB_14d75a2c5:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar2;
}

// LockTexture @ 14d75aab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GPUTextureTransfer::Private::FTextureTransferBase::LockTexture
          (FTextureTransferBase *this,FRHITexture *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  FTextureInfo *pFVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  bool bVar5;
  FString local_18;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId369,"L\"LockTexture\"",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\GPUTextureTransfer\\Private\\TextureTransferBase.cpp"
               ,0x171);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId369);
  }
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar2 = TMapBase<FRHITexture_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHITexture_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo,0>_>
           ::Find((TMapBase<FRHITexture_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHITexture_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo,0>_>
                   *)&this->RegisteredTextures,param_1);
  if (pFVar2 != (FTextureInfo *)0x0) {
    ::FString::PrintfImpl(&local_18,L"MapBufferWaitAPI_Impl (%llu)");
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar3.Data = local_18.Data.AllocatorInstance.Data;
    }
    bVar5 = -1 < CpuChannel->Enabled;
    if (bVar5) {
      FCpuProfilerTrace::OutputBeginDynamicEvent
                ((wchar_t *)FVar3.Data,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\GPUTextureTransfer\\Private\\TextureTransferBase.cpp"
                 ,0x176);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    iVar1 = (**(code **)(this->_padding_ + 0xb8))(this,pFVar2->DVPHandle);
    if ((iVar1 != 0) && (1 < (byte)LogGPUTextureTransfer._0_1_)) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGPUTextureTransfer);
    }
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// MapBufferEndAPI_Impl @ 14d75ac60

DVPStatus __thiscall
UE::GPUTextureTransfer::Private::FTextureTransferBase::MapBufferEndAPI_Impl
          (FTextureTransferBase *this,ulong64 param_1)

{
  DVPStatus DVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"dvpMapBufferEndAPI (%llu)");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar2.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\GPUTextureTransfer\\Private\\TextureTransferBase.cpp"
               ,0x1a2);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  DVar1 = dvpMapBufferEndAPI(param_1);
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return DVar1;
}

// MapBufferWaitAPI_Impl @ 14d75ad60

DVPStatus __thiscall
UE::GPUTextureTransfer::Private::FTextureTransferBase::MapBufferWaitAPI_Impl
          (FTextureTransferBase *this,ulong64 param_1)

{
  DVPStatus DVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"dvpMapBufferWaitAPI (%llu)");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar2.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\GPUTextureTransfer\\Private\\TextureTransferBase.cpp"
               ,0x19c);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  DVar1 = dvpMapBufferWaitAPI(param_1);
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return DVar1;
}

// RegisterBuffer @ 14d75ae70

/* WARNING: Removing unreachable block (ram,0x00014d75b23a) */
/* WARNING: Removing unreachable block (ram,0x00014d75b247) */
/* WARNING: Removing unreachable block (ram,0x00014d75b250) */
/* WARNING: Removing unreachable block (ram,0x00014d75b26d) */
/* WARNING: Removing unreachable block (ram,0x00014d75afa2) */
/* WARNING: Removing unreachable block (ram,0x00014d75afaf) */
/* WARNING: Removing unreachable block (ram,0x00014d75afb8) */
/* WARNING: Removing unreachable block (ram,0x00014d75afd5) */
/* WARNING: Removing unreachable block (ram,0x00014d75b020) */
/* WARNING: Removing unreachable block (ram,0x00014d75b02d) */
/* WARNING: Removing unreachable block (ram,0x00014d75b036) */
/* WARNING: Removing unreachable block (ram,0x00014d75b053) */
/* WARNING: Removing unreachable block (ram,0x00014d75b28b) */
/* WARNING: Removing unreachable block (ram,0x00014d75b298) */
/* WARNING: Removing unreachable block (ram,0x00014d75b2a1) */
/* WARNING: Removing unreachable block (ram,0x00014d75b2be) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GPUTextureTransfer::Private::FTextureTransferBase::RegisterBuffer
          (FTextureTransferBase *this,FRegisterDMABufferArgs *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  DVPStatus DVar4;
  int iVar5;
  DVPSync *pDVar6;
  DVPSync *pDVar7;
  DVPSync *pDVar8;
  uint uVar9;
  undefined1 *puVar10;
  __uint64 local_a8;
  undefined8 local_a0;
  DVPSysmemBufferDescRec local_98;
  void *local_78;
  uint local_70;
  uint local_6c;
  uint local_68;
  DVPSync *local_60;
  DVPSync *local_58;
  __uint64 local_50;
  undefined8 local_48;
  void **local_40;
  uint *local_38;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pvVar3 = param_1->Buffer;
  if (pvVar3 != (void *)0x0) {
    uVar9 = ((uint)((ulonglong)pvVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pvVar3 >> 4)) *
            -0x7a143595;
    uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
    if (*(int *)&(this->RegisteredBuffers).field_0x8 !=
        *(int *)&(this->RegisteredBuffers).field_0x34) {
      puVar10 = *(undefined1 **)&(this->RegisteredBuffers).field_0x40;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = &(this->RegisteredBuffers).field_0x38;
      }
      iVar5 = *(int *)(puVar10 +
                      (ulonglong)
                      (*(int *)&(this->RegisteredBuffers).field_0x48 - 1U & (uVar9 >> 0x10 ^ uVar9))
                      * 4);
      if (iVar5 != -1) {
        do {
          if (*(void **)((longlong)iVar5 * 0x40 + *(longlong *)&this->RegisteredBuffers) == pvVar3)
          {
            if (iVar5 != -1) goto LAB_14d75b2db;
            break;
          }
          iVar5 = *(int *)((longlong)iVar5 * 0x40 + 0x38 + *(longlong *)&this->RegisteredBuffers);
        } while (iVar5 != -1);
      }
    }
    uVar9 = param_1->Width;
    uVar1 = param_1->Stride;
    uVar2 = param_1->Height;
    pDVar8 = (DVPSync *)0x0;
    local_a8 = 0;
    local_a0 = 0;
    pDVar6 = ::operator_new(0x18);
    pDVar7 = pDVar8;
    if (pDVar6 != (DVPSync *)0x0) {
      pDVar7 = DVPSync::DVPSync(pDVar6,this->SemaphoreAllocSize,this->SemaphoreAddressAlignment);
    }
    pDVar6 = ::operator_new(0x18);
    if (pDVar6 != (DVPSync *)0x0) {
      pDVar8 = DVPSync::DVPSync(pDVar6,this->SemaphoreAllocSize,this->SemaphoreAddressAlignment);
    }
    local_98.width = param_1->Width;
    local_98.height = param_1->Height;
    local_98.stride = param_1->Stride;
    local_98.format = DVP_RGBA_INTEGER;
    if (param_1->PixelFormat == PF_8Bit) {
      local_98.format = DVP_BGRA;
    }
    local_98.size = 0;
    local_98.type = -(uint)(param_1->PixelFormat != PF_8Bit) & DVP_INT;
    local_98.bufAddr = param_1->Buffer;
    DVar4 = dvpCreateBuffer(&local_98,&local_a8);
    if ((DVar4 != DVP_STATUS_OK) && (1 < (byte)LogGPUTextureTransfer._0_1_)) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGPUTextureTransfer);
    }
    iVar5 = (**(code **)(this->_padding_ + 0x98))(this,local_a8);
    if ((iVar5 != 0) && (1 < (byte)LogGPUTextureTransfer._0_1_)) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGPUTextureTransfer);
    }
    local_78 = param_1->Buffer;
    local_50 = local_a8;
    local_48 = local_a0;
    local_40 = &local_78;
    local_38 = &local_70;
    local_70 = uVar9;
    local_6c = uVar2;
    local_68 = uVar1;
    local_60 = pDVar7;
    local_58 = pDVar8;
    TSet<TTuple<void_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FExternalBufferInfo>,TDefaultMapHashableKeyFuncs<void_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FExternalBufferInfo,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<void_*_&&,UE::GPUTextureTransfer::Private::FTextureTransferBase::FExternalBufferInfo_&&>_>
              ((TSet<TTuple<void_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FExternalBufferInfo>,TDefaultMapHashableKeyFuncs<void_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FExternalBufferInfo,0>,FDefaultSetAllocator>
                *)&this->RegisteredBuffers,
               (TPairInitializer<void_*_&&,UE::GPUTextureTransfer::Private::FTextureTransferBase::FExternalBufferInfo_&&>
                *)&stack0x00000008,(bool *)&local_40);
    pDVar7 = local_58;
    if (local_58 != (DVPSync *)0x0) {
      DVar4 = dvpFreeSyncObject(local_58->DVPSyncObject);
      if ((DVar4 != DVP_STATUS_OK) && (1 < (byte)LogGPUTextureTransfer._0_1_)) {
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGPUTextureTransfer);
      }
      FMemory::Free(pDVar7->Semaphore);
      ::operator_delete(pDVar7,0x18);
    }
    pDVar7 = local_60;
    if (local_60 != (DVPSync *)0x0) {
      DVar4 = dvpFreeSyncObject(local_60->DVPSyncObject);
      if ((DVar4 != DVP_STATUS_OK) && (1 < (byte)LogGPUTextureTransfer._0_1_)) {
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGPUTextureTransfer);
      }
      FMemory::Free(pDVar7->Semaphore);
      ::operator_delete(pDVar7,0x18);
    }
  }
LAB_14d75b2db:
                    /* WARNING: Could not recover jumptable at 0x00014d75b2ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// RegisterTexture @ 14d75b300

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GPUTextureTransfer::Private::FTextureTransferBase::RegisterTexture
          (FTextureTransferBase *this,FRegisterDMATextureArgs *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FRHITexture *pFVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  bool bVar5;
  undefined8 local_58;
  undefined8 uStack_50;
  FRHITexture **local_48;
  undefined8 *local_40;
  FRHITexture *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar1 = param_1->RHITexture;
  uVar3 = ((uint)((ulonglong)pFVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar1 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  if (*(int *)&(this->RegisteredTextures).field_0x8 !=
      *(int *)&(this->RegisteredTextures).field_0x34) {
    puVar4 = *(undefined1 **)&(this->RegisteredTextures).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->RegisteredTextures).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->RegisteredTextures).field_0x48 - 1U &
                              (uVar3 >> 0x10 ^ uVar3)) * 4);
    if (iVar2 != -1) {
      do {
        if (*(FRHITexture **)((longlong)iVar2 * 0x20 + *(longlong *)&this->RegisteredTextures) ==
            pFVar1) goto LAB_14d75b4a0;
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + 0x18 + *(longlong *)&this->RegisteredTextures);
      } while (iVar2 != -1);
    }
  }
  local_58 = 0;
  uStack_50 = 0;
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId314,"CreateGPUResource_Impl",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\GPUTextureTransfer\\Private\\TextureTransferBase.cpp"
               ,0x13a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId314);
  }
  iVar2 = (**(code **)(this->_padding_ + 0xa0))(this,param_1,&local_58);
  if ((iVar2 != 0) && (1 < (byte)LogGPUTextureTransfer._0_1_)) {
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGPUTextureTransfer);
  }
  local_38 = param_1->RHITexture;
  local_48 = &local_38;
  local_40 = &local_30;
  local_30 = local_58;
  uStack_28 = uStack_50;
  TSet<TTuple<FRHITexture_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo>,TDefaultMapHashableKeyFuncs<FRHITexture_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FRHITexture_*_&&,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo_&&>_>
            ((TSet<TTuple<FRHITexture_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo>,TDefaultMapHashableKeyFuncs<FRHITexture_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo,0>,FDefaultSetAllocator>
              *)&this->RegisteredTextures,
             (TPairInitializer<FRHITexture_*_&&,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo_&&>
              *)&stack0x00000008,(bool *)&local_48);
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
LAB_14d75b4a0:
                    /* WARNING: Could not recover jumptable at 0x00014d75b4b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// SetValue @ 14d75baf0

void __thiscall
UE::GPUTextureTransfer::Private::FTextureTransferBase::DVPSync::SetValue(DVPSync *this,uint param_1)

{
  *this->Semaphore = param_1;
  return;
}

// ThreadCleanup @ 14d75bb00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GPUTextureTransfer::Private::FTextureTransferBase::ThreadCleanup(FTextureTransferBase *this)

{
  DVPStatus DVar1;
  bool bVar2;
  
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId124,"dvpEnd",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\GPUTextureTransfer\\Private\\TextureTransferBase.cpp"
               ,0x7c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId124);
  }
  DVar1 = dvpEnd();
  if ((DVar1 != DVP_STATUS_OK) && (1 < (byte)LogGPUTextureTransfer._0_1_)) {
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGPUTextureTransfer);
  }
  if (!bVar2) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// ThreadPrep @ 14d75bba0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GPUTextureTransfer::Private::FTextureTransferBase::ThreadPrep(FTextureTransferBase *this)

{
  DVPStatus DVar1;
  bool bVar2;
  
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId118,"dvpBegin",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\GPUTextureTransfer\\Private\\TextureTransferBase.cpp"
               ,0x76);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId118);
  }
  DVar1 = dvpBegin();
  if ((DVar1 != DVP_STATUS_OK) && (1 < (byte)LogGPUTextureTransfer._0_1_)) {
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGPUTextureTransfer);
  }
  if (!bVar2) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// TransferTexture @ 14d75bc40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::GPUTextureTransfer::Private::FTextureTransferBase::TransferTexture
          (FTextureTransferBase *this,void *param_1,FRHITexture *param_2,ETransferDirection param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  DVPSync *pDVar1;
  DVPStatus DVar2;
  DVPStatus DVar3;
  FExternalBufferInfo *pFVar4;
  FTextureInfo *pFVar5;
  ForAnyElementType FVar6;
  FTextureInfo *pFVar7;
  ulong64 uVar8;
  bool bVar9;
  bool bVar10;
  FString local_38;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId189,"TransferTexture",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\GPUTextureTransfer\\Private\\TextureTransferBase.cpp"
               ,0xbd);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId189);
  }
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar4 = TMapBase<void_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FExternalBufferInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FExternalBufferInfo,0>_>
           ::Find((TMapBase<void_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FExternalBufferInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FExternalBufferInfo,0>_>
                   *)&this->RegisteredBuffers,param_1);
  pFVar5 = TMapBase<FRHITexture_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHITexture_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo,0>_>
           ::Find((TMapBase<FRHITexture_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHITexture_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo,0>_>
                   *)&this->RegisteredTextures,param_2);
  if (pFVar4 == (FExternalBufferInfo *)0x0) {
    if (1 < (byte)LogGPUTextureTransfer._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGPUTextureTransfer);
    }
  }
  else if (pFVar5 == (FTextureInfo *)0x0) {
    if (1 < (byte)LogGPUTextureTransfer._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGPUTextureTransfer);
    }
  }
  else {
    pDVar1 = (pFVar4->GPUMemorySync).Ptr;
    if ((pDVar1 == (DVPSync *)0x0) || ((pFVar4->SystemMemorySync).Ptr == (DVPSync *)0x0)) {
      if (2 < (byte)LogGPUTextureTransfer._0_1_) {
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGPUTextureTransfer);
      }
    }
    else {
      pDVar1->ReleaseValue = pDVar1->ReleaseValue + 1;
      pFVar4->PendingTextureHandle = pFVar5->DVPHandle;
      ::FString::PrintfImpl(&local_38,L"dvpMemcpy2D (%llu)");
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar6.Data = local_38.Data.AllocatorInstance.Data;
      }
      bVar10 = -1 < CpuChannel->Enabled;
      if (bVar10) {
        FCpuProfilerTrace::OutputBeginDynamicEvent
                  ((wchar_t *)FVar6.Data,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\GPUTextureTransfer\\Private\\TextureTransferBase.cpp"
                   ,0xda);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      pFVar7 = (FTextureInfo *)&pFVar4->DVPHandle;
      if (param_3 == GPU_TO_CPU) {
        uVar8 = *(ulong64 *)pFVar7;
        pFVar7 = pFVar5;
      }
      else {
        uVar8 = pFVar5->DVPHandle;
      }
      DVar2 = dvpMemcpy2D(pFVar7->DVPHandle,((pFVar4->SystemMemorySync).Ptr)->DVPSyncObject,
                          ((pFVar4->SystemMemorySync).Ptr)->AcquireValue,0xffffffffffffffff,uVar8,
                          ((pFVar4->GPUMemorySync).Ptr)->DVPSyncObject,
                          ((pFVar4->GPUMemorySync).Ptr)->ReleaseValue,0,0,pFVar4->Height,
                          pFVar4->Width);
      if (bVar10) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      pDVar1 = (pFVar4->SystemMemorySync).Ptr;
      pDVar1->AcquireValue = pDVar1->AcquireValue + 1;
      ::FString::PrintfImpl(&local_38,L"dvpMapBufferEndDVP (%llu)");
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar6.Data = local_38.Data.AllocatorInstance.Data;
      }
      bVar10 = -1 < CpuChannel->Enabled;
      if (bVar10) {
        FCpuProfilerTrace::OutputBeginDynamicEvent
                  ((wchar_t *)FVar6.Data,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\GPUTextureTransfer\\Private\\TextureTransferBase.cpp"
                   ,0xed);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      DVar3 = dvpMapBufferEndDVP(pFVar5->DVPHandle);
      if ((DVar3 != DVP_STATUS_OK) && (1 < (byte)LogGPUTextureTransfer._0_1_)) {
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGPUTextureTransfer);
      }
      if (bVar10) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (DVar2 == DVP_STATUS_OK) {
        bVar10 = true;
        goto LAB_14d75bf3f;
      }
      if (1 < (byte)LogGPUTextureTransfer._0_1_) {
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGPUTextureTransfer);
      }
    }
  }
  bVar10 = false;
LAB_14d75bf3f:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar10;
}

// Uninitialize @ 14d75c550

bool __thiscall
UE::GPUTextureTransfer::Private::FTextureTransferBase::Uninitialize(FTextureTransferBase *this)

{
  TMap<FRHITexture_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHITexture_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo,0>_>
  *this_00;
  FWindowsRecursiveMutex *lpCriticalSection;
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  __uint64 _Var4;
  HANDLE hObject;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  uint *puVar9;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  TMap<FRHITexture_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHITexture_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo,0>_>
  *local_50;
  int iStack_48;
  uint uStack_44;
  undefined1 *local_40;
  undefined4 uStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (this->bInitialized == false) {
    bVar8 = false;
  }
  else {
    iStack_48 = 0;
    uStack_44 = 1;
    this_00 = &this->RegisteredTextures;
    local_30 = 0;
    iVar2 = *(int *)&(this->RegisteredTextures).field_0x28;
    TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->RegisteredTextures).field_0x10
    ;
    iVar6 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->RegisteredTextures).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)TStack_70.Array;
      }
      uVar3 = *puVar9;
      while (uVar3 == 0) {
        lVar7 = (longlong)iStack_48;
        local_30 = local_30 + 0x20;
        iStack_48 = iStack_48 + 1;
        iVar6 = iVar2;
        if ((int)((iVar2 + -1 >> 0x1f & 0x1fU) + iVar2 + -1) >> 5 < iStack_48) goto LAB_14d75c629;
        uVar3 = puVar9[lVar7 + 1];
      }
      uStack_44 = -uVar3 & uVar3;
      uVar1 = (ulonglong)uStack_44 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = (int)lVar7 + -1 + local_30;
      if (iVar2 < iVar6) {
        iVar6 = iVar2;
      }
    }
LAB_14d75c629:
    uStack_38 = 0xffffffff;
    iStack_2c = TStack_70.CurrentBitIndex;
    TStack_70._padding_ = CONCAT44(uStack_44,iStack_48);
    uVar5._4_4_ = iVar6;
    uVar5._0_4_ = 0xffffffff;
    TStack_70._28_4_ = TStack_70.CurrentBitIndex;
    TStack_70.BaseBitIndex = local_30;
    TStack_70._16_8_ = uVar5;
    local_50 = this_00;
    local_40 = (undefined1 *)TStack_70.Array;
    iStack_34 = iVar6;
    if (iVar6 < iVar2) {
      do {
        _Var4 = *(__uint64 *)((longlong)iVar6 * 0x20 + 8 + *(longlong *)&this_00->field_0x0);
        if (_Var4 != 0) {
          dvpFreeBuffer(_Var4);
          hObject = *(HANDLE *)((longlong)iVar6 * 0x20 + 0x10 + *(longlong *)&this_00->field_0x0);
          if (hObject != (HANDLE)0x0) {
            CloseHandle(hObject);
          }
        }
        TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
        bVar8 = TStack_70.CurrentBitIndex < (TStack_70.Array)->NumBits;
        iVar6 = TStack_70.CurrentBitIndex;
      } while (bVar8);
    }
    TSet<TTuple<FRHITexture_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo>,TDefaultMapHashableKeyFuncs<FRHITexture_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FRHITexture_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo>,TDefaultMapHashableKeyFuncs<FRHITexture_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo,0>,FDefaultSetAllocator>
             *)this_00);
    ClearRegisteredBuffers(this);
    (**(code **)(this->_padding_ + 0xb0))(this);
    bVar8 = true;
    this->bInitialized = false;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar8;
}

// UnlockTexture @ 14d75c7f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GPUTextureTransfer::Private::FTextureTransferBase::UnlockTexture
          (FTextureTransferBase *this,FRHITexture *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  FTextureInfo *pFVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  bool bVar5;
  FString local_18;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId381,"L\"UnlockTexture\"",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\GPUTextureTransfer\\Private\\TextureTransferBase.cpp"
               ,0x17d);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId381);
  }
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar2 = TMapBase<FRHITexture_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHITexture_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo,0>_>
           ::Find((TMapBase<FRHITexture_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHITexture_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo,0>_>
                   *)&this->RegisteredTextures,param_1);
  if (pFVar2 != (FTextureInfo *)0x0) {
    ::FString::PrintfImpl(&local_18,L"MapBufferEndAPI_Impl (%llu)");
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar3.Data = local_18.Data.AllocatorInstance.Data;
    }
    bVar5 = -1 < CpuChannel->Enabled;
    if (bVar5) {
      FCpuProfilerTrace::OutputBeginDynamicEvent
                ((wchar_t *)FVar3.Data,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\GPUTextureTransfer\\Private\\TextureTransferBase.cpp"
                 ,0x183);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    iVar1 = (**(code **)(this->_padding_ + 0xc0))(this,pFVar2->DVPHandle);
    if ((iVar1 != 0) && (1 < (byte)LogGPUTextureTransfer._0_1_)) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGPUTextureTransfer);
    }
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// UnregisterBuffer @ 14d75c970

void __thiscall
UE::GPUTextureTransfer::Private::FTextureTransferBase::UnregisterBuffer
          (FTextureTransferBase *this,void *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FExternalBufferInfo *pFVar1;
  uint uVar2;
  void *local_res8;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar1 = TMapBase<void_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FExternalBufferInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FExternalBufferInfo,0>_>
             ::Find((TMapBase<void_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FExternalBufferInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FExternalBufferInfo,0>_>
                     *)&this->RegisteredBuffers,param_1);
    if (pFVar1 != (FExternalBufferInfo *)0x0) {
      ClearBufferInfo(this,pFVar1);
      local_res8 = param_1;
      if (*(int *)&(this->RegisteredBuffers).field_0x8 !=
          *(int *)&(this->RegisteredBuffers).field_0x34) {
        uVar2 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
                -0x7a143595;
        uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
        TSet<TTuple<void_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FExternalBufferInfo>,TDefaultMapHashableKeyFuncs<void_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FExternalBufferInfo,0>,FDefaultSetAllocator>
        ::RemoveImpl<void_const_*>
                  ((TSet<TTuple<void_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FExternalBufferInfo>,TDefaultMapHashableKeyFuncs<void_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FExternalBufferInfo,0>,FDefaultSetAllocator>
                    *)&this->RegisteredBuffers,uVar2 >> 0x10 ^ uVar2,&local_res8);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014d75ca19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// UnregisterTexture @ 14d75ca30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GPUTextureTransfer::Private::FTextureTransferBase::UnregisterTexture
          (FTextureTransferBase *this,FRHITexture *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  DVPStatus DVar1;
  FTextureInfo *pFVar2;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar2 = TMapBase<FRHITexture_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHITexture_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo,0>_>
             ::Find((TMapBase<FRHITexture_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHITexture_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo,0>_>
                     *)&this->RegisteredTextures,param_1);
    if (pFVar2 != (FTextureInfo *)0x0) {
      DVar1 = dvpFreeBuffer(pFVar2->DVPHandle);
      if ((DVar1 != DVP_STATUS_OK) && (1 < (byte)LogGPUTextureTransfer._0_1_)) {
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGPUTextureTransfer);
      }
      if ((pFVar2->External).Handle != (HANDLE)0x0) {
        CloseHandle((pFVar2->External).Handle);
      }
      TSet<TTuple<FRHITexture_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo>,TDefaultMapHashableKeyFuncs<FRHITexture_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo,0>,FDefaultSetAllocator>
      ::Remove((TSet<TTuple<FRHITexture_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo>,TDefaultMapHashableKeyFuncs<FRHITexture_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo,0>,FDefaultSetAllocator>
                *)&this->RegisteredTextures,param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x00014d75cadd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// WaitForGPU @ 14d75caf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GPUTextureTransfer::Private::FTextureTransferBase::WaitForGPU
          (FTextureTransferBase *this,FRHITexture *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  DVPStatus DVar1;
  FTextureInfo *pFVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  FString local_18;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar2 = TMapBase<FRHITexture_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHITexture_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo,0>_>
           ::Find((TMapBase<FRHITexture_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHITexture_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo,0>_>
                   *)&this->RegisteredTextures,param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  ::FString::PrintfImpl(&local_18,L"GPUDirect::WaitForGPU (%llu)");
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar3.Data = local_18.Data.AllocatorInstance.Data;
  }
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar3.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\GPUTextureTransfer\\Private\\TextureTransferBase.cpp"
               ,0x6e);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  DVar1 = dvpBegin();
  if ((DVar1 != DVP_STATUS_OK) && (1 < (byte)LogGPUTextureTransfer._0_1_)) {
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGPUTextureTransfer);
  }
  DVar1 = dvpMapBufferWaitDVP(pFVar2->DVPHandle);
  if ((DVar1 != DVP_STATUS_OK) && (1 < (byte)LogGPUTextureTransfer._0_1_)) {
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGPUTextureTransfer);
  }
  DVar1 = dvpEnd();
  if ((DVar1 != DVP_STATUS_OK) && (1 < (byte)LogGPUTextureTransfer._0_1_)) {
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGPUTextureTransfer);
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

