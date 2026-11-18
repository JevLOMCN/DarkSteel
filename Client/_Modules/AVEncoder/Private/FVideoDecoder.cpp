// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AVEncoder
// Functions: 7

// ~FVideoDecoder @ 148d013f0

void __thiscall AVEncoder::FVideoDecoder::~FVideoDecoder(FVideoDecoder *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  
  *(undefined ***)this = &___7FVideoDecoder_AVEncoder__6B_;
  if (this->PlatformDecoderAllocInterface != (FPlatformDecoderAllocInterface *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PlatformDecoderAllocInterface == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\VideoDecoder.cpp"
                       ,0x18,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(longlong *)&this->ReleaseDecoderAllocationInterfaceFN != 0) {
    plVar1 = *(longlong **)&(this->ReleaseDecoderAllocationInterfaceFN).field_0x28;
    plVar4 = (longlong *)&(this->ReleaseDecoderAllocationInterfaceFN).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)&this->CreateDecoderAllocationInterfaceFN != 0) {
    plVar1 = *(longlong **)&(this->CreateDecoderAllocationInterfaceFN).field_0x28;
    plVar4 = (longlong *)&(this->CreateDecoderAllocationInterfaceFN).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)&this->OnDecodedFrame != 0) {
    plVar1 = *(longlong **)&(this->OnDecodedFrame).field_0x28;
    plVar4 = (longlong *)&(this->OnDecodedFrame).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x000148d0148c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x10))();
    return;
  }
  return;
}

// AllocateOutputFrameBuffer @ 148d03840

EFrameBufferAllocReturn __thiscall
AVEncoder::FVideoDecoder::AllocateOutputFrameBuffer
          (FVideoDecoder *this,FVideoDecoderAllocFrameBufferResult *param_1,
          FVideoDecoderAllocFrameBufferParams *param_2)

{
  FPlatformDecoderAllocInterface *pFVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  EFrameBufferAllocReturn EVar6;
  longlong *plVar7;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  if ((param_2 == (FVideoDecoderAllocFrameBufferParams *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InAllocParams",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\VideoDecoder.cpp"
                         ,0x55,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    EVar6 = (*pcVar3)();
    return EVar6;
  }
  if ((param_1 == (FVideoDecoderAllocFrameBufferResult *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutBuffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\VideoDecoder.cpp"
                         ,0x56,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    EVar6 = (*pcVar3)();
    return EVar6;
  }
  pFVar1 = this->PlatformDecoderAllocInterface;
  if (pFVar1 != (FPlatformDecoderAllocInterface *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(pFVar1->AllocMethods).AllocateFrameBuffer,&local_38);
    if (((*(int *)&(pFVar1->AllocMethods).AllocateFrameBuffer.field_0x10 != 0) &&
        (plVar7 = *(longlong **)&(pFVar1->AllocMethods).AllocateFrameBuffer.field_0x8,
        plVar7 != (longlong *)0x0)) && (cVar5 = (**(code **)(*plVar7 + 0x38))(), cVar5 != '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      pFVar1 = this->PlatformDecoderAllocInterface;
      pvVar2 = (pFVar1->AllocMethods).This;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &(pFVar1->AllocMethods).AllocateFrameBuffer,&local_20);
      if (*(int *)&(pFVar1->AllocMethods).AllocateFrameBuffer.field_0x10 == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = *(longlong **)&(pFVar1->AllocMethods).AllocateFrameBuffer.field_0x8;
      }
      EVar6 = (**(code **)(*plVar7 + 0x60))(plVar7,pvVar2,param_2,param_1);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      return EVar6;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
  }
  return CODEC_Failure;
}

// ClearOnDecodedFrame @ 148d03c30

void __thiscall AVEncoder::FVideoDecoder::ClearOnDecodedFrame(FVideoDecoder *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->OnDecodedFrame != 0) {
    plVar1 = *(longlong **)&(this->OnDecodedFrame).field_0x28;
    plVar2 = (longlong *)&(this->OnDecodedFrame).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
    *(undefined8 *)&this->OnDecodedFrame = 0;
  }
  return;
}

// CreateDecoderAllocationInterface @ 148d068a0

bool __thiscall AVEncoder::FVideoDecoder::CreateDecoderAllocationInterface(FVideoDecoder *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  code *pcVar3;
  longlong *plVar4;
  ForAnyElementType FVar5;
  int iVar6;
  bool bVar7;
  FPlatformDecoderAllocInterface *pFVar8;
  undefined8 uVar9;
  longlong *plVar10;
  FPlatformDecoderAllocInterface *pFVar11;
  FPlatformDecoderAllocInterface *local_res18;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_128;
  ForAnyElementType local_120;
  int local_118;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_110;
  ForAnyElementType local_108;
  int local_100;
  FDestructionSentinel local_f8;
  FDestructionSentinel local_e0;
  FDestructionSentinel local_c8;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDestructionSentinel local_50;
  
  pFVar11 = (FPlatformDecoderAllocInterface *)0x0;
  if (this->PlatformDecoderAllocInterface != (FPlatformDecoderAllocInterface *)0x0) {
    return true;
  }
  pFVar8 = ::operator_new(0x48);
  if (pFVar8 != (FPlatformDecoderAllocInterface *)0x0) {
    *(undefined4 *)&(pFVar8->AllocMethods).field_0x4 = 0;
    *(undefined8 *)&(pFVar8->AllocMethods).AllocateFrameBuffer.field_0x10 = 0;
    *(undefined8 *)&(pFVar8->AllocMethods).AllocateFrameBuffer = 0;
    *(undefined8 *)&(pFVar8->AllocMethods).AllocateFrameBuffer.field_0x8 = 0;
    *(undefined8 *)&(pFVar8->AllocMethods).GetD3DDevice.field_0x10 = 0;
    *(undefined8 *)&(pFVar8->AllocMethods).GetD3DDevice = 0;
    *(undefined8 *)&(pFVar8->AllocMethods).GetD3DDevice.field_0x8 = 0;
    pFVar8->ClientData = (void *)0x0;
    pFVar11 = pFVar8;
  }
  (pFVar11->AllocMethods).MagicCookie = 0x57696e58;
  (pFVar11->AllocMethods).This = (void *)0x0;
  local_128.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_120.Data = (FScriptContainerElement *)0x0;
  local_118 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_128,(FWriteAccessScope *)&local_f8);
  iVar6 = local_118;
  FVar5.Data = local_120.Data;
  local_120.Data = (FScriptContainerElement *)0x0;
  local_118 = 0;
  if (local_f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f8.Accessor,&local_f8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(pFVar11->AllocMethods).GetD3DDevice,(FWriteAccessScope *)&local_e0);
  if ((*(int *)&(pFVar11->AllocMethods).GetD3DDevice.field_0x10 != 0) &&
     (puVar1 = *(undefined8 **)&(pFVar11->AllocMethods).GetD3DDevice.field_0x8,
     puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(pFVar11->AllocMethods).GetD3DDevice.field_0x8,0,0,0x10);
    *(undefined4 *)&(pFVar11->AllocMethods).GetD3DDevice.field_0x10 = 0;
  }
  pvVar2 = *(void **)&(pFVar11->AllocMethods).GetD3DDevice.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(FScriptContainerElement **)&(pFVar11->AllocMethods).GetD3DDevice.field_0x8 = FVar5.Data;
  *(int *)&(pFVar11->AllocMethods).GetD3DDevice.field_0x10 = iVar6;
  if (local_e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e0.Accessor,&local_e0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_128,(FWriteAccessScope *)&local_c8);
  if ((local_118 != 0) && (local_120.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_120.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_120,0,0,0x10);
    local_118 = 0;
  }
  if (local_c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
  }
  if (local_120.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_128.AccessDetector);
  local_110.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_108.Data = (FScriptContainerElement *)0x0;
  local_100 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_110,(FWriteAccessScope *)&local_b0);
  iVar6 = local_100;
  FVar5.Data = local_108.Data;
  local_100 = 0;
  local_108.Data = (FScriptContainerElement *)0x0;
  if (local_b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(pFVar11->AllocMethods).AllocateFrameBuffer,(FWriteAccessScope *)&local_98);
  if ((*(int *)&(pFVar11->AllocMethods).AllocateFrameBuffer.field_0x10 != 0) &&
     (puVar1 = *(undefined8 **)&(pFVar11->AllocMethods).AllocateFrameBuffer.field_0x8,
     puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(pFVar11->AllocMethods).AllocateFrameBuffer.field_0x8,0,0,0x10)
    ;
    *(undefined4 *)&(pFVar11->AllocMethods).AllocateFrameBuffer.field_0x10 = 0;
  }
  pvVar2 = *(void **)&(pFVar11->AllocMethods).AllocateFrameBuffer.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(FScriptContainerElement **)&(pFVar11->AllocMethods).AllocateFrameBuffer.field_0x8 = FVar5.Data;
  *(int *)&(pFVar11->AllocMethods).AllocateFrameBuffer.field_0x10 = iVar6;
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_110,(FWriteAccessScope *)&local_80);
  if ((local_100 != 0) && (local_108.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_108.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_108,0,0,0x10);
    local_100 = 0;
  }
  if (local_80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
  }
  if (local_108.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_110.AccessDetector);
  local_res18 = pFVar11;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->CreateDecoderAllocationInterfaceFN);
  pcVar3 = *(code **)&this->CreateDecoderAllocationInterfaceFN;
  plVar4 = *(longlong **)&(this->CreateDecoderAllocationInterfaceFN).field_0x28;
  plVar10 = (longlong *)&(this->CreateDecoderAllocationInterfaceFN).field_0x10;
  if (plVar4 != (longlong *)0x0) {
    plVar10 = plVar4;
  }
  uVar9 = (**(code **)(*plVar10 + 8))();
  (*pcVar3)(uVar9,&local_res18);
  if (pFVar11->ClientData == (void *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(pFVar11->AllocMethods).GetD3DDevice,(FWriteAccessScope *)&local_68);
    if ((*(int *)&(pFVar11->AllocMethods).GetD3DDevice.field_0x10 != 0) &&
       (puVar1 = *(undefined8 **)&(pFVar11->AllocMethods).GetD3DDevice.field_0x8,
       puVar1 != (undefined8 *)0x0)) {
      (**(code **)*puVar1)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(pFVar11->AllocMethods).GetD3DDevice.field_0x8,0,0,0x10);
      *(undefined4 *)&(pFVar11->AllocMethods).GetD3DDevice.field_0x10 = 0;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    pvVar2 = *(void **)&(pFVar11->AllocMethods).GetD3DDevice.field_0x8;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&(pFVar11->AllocMethods).GetD3DDevice);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(pFVar11->AllocMethods).AllocateFrameBuffer,(FWriteAccessScope *)&local_50);
    if ((*(int *)&(pFVar11->AllocMethods).AllocateFrameBuffer.field_0x10 != 0) &&
       (puVar1 = *(undefined8 **)&(pFVar11->AllocMethods).AllocateFrameBuffer.field_0x8,
       puVar1 != (undefined8 *)0x0)) {
      (**(code **)*puVar1)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(pFVar11->AllocMethods).AllocateFrameBuffer.field_0x8,0,0,
                 0x10);
      *(undefined4 *)&(pFVar11->AllocMethods).AllocateFrameBuffer.field_0x10 = 0;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    pvVar2 = *(void **)&(pFVar11->AllocMethods).AllocateFrameBuffer.field_0x8;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&(pFVar11->AllocMethods).AllocateFrameBuffer);
    ::operator_delete(pFVar11,0x48);
    bVar7 = false;
  }
  else {
    this->PlatformDecoderAllocInterface = pFVar11;
    bVar7 = true;
  }
  return bVar7;
}

// GetAllocationInterfaceMethods @ 148d0ade0

void * __thiscall AVEncoder::FVideoDecoder::GetAllocationInterfaceMethods(FVideoDecoder *this)

{
  FPlatformDecoderAllocInterface *pFVar1;
  
  pFVar1 = (FPlatformDecoderAllocInterface *)0x0;
  if (this->PlatformDecoderAllocInterface != (FPlatformDecoderAllocInterface *)0x0) {
    pFVar1 = this->PlatformDecoderAllocInterface;
  }
  return pFVar1;
}

// ReleaseDecoderAllocationInterface @ 148d11a60

void __thiscall AVEncoder::FVideoDecoder::ReleaseDecoderAllocationInterface(FVideoDecoder *this)

{
  code *pcVar1;
  longlong *plVar2;
  FPlatformDecoderAllocInterface *pFVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 local_res8;
  undefined8 *local_res10;
  void *local_res18;
  
  if (this->PlatformDecoderAllocInterface != (FPlatformDecoderAllocInterface *)0x0) {
    local_res10 = &local_res8;
    local_res8 = 0;
    local_res18 = this->PlatformDecoderAllocInterface->ClientData;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->ReleaseDecoderAllocationInterfaceFN)
    ;
    pcVar1 = *(code **)&this->ReleaseDecoderAllocationInterfaceFN;
    plVar2 = *(longlong **)&(this->ReleaseDecoderAllocationInterfaceFN).field_0x28;
    plVar5 = (longlong *)&(this->ReleaseDecoderAllocationInterfaceFN).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar5 = plVar2;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar1)(uVar4,&local_res18,&local_res10);
    pFVar3 = this->PlatformDecoderAllocInterface;
    if (pFVar3 != (FPlatformDecoderAllocInterface *)0x0) {
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar3->AllocMethods).GetD3DDevice);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                 &(pFVar3->AllocMethods).AllocateFrameBuffer);
      ::operator_delete(pFVar3,0x48);
    }
    this->PlatformDecoderAllocInterface = (FPlatformDecoderAllocInterface *)0x0;
  }
  return;
}

// SetOnDecodedFrame @ 148d12450

void __thiscall
AVEncoder::FVideoDecoder::SetOnDecodedFrame
          (FVideoDecoder *this,
          TFunction<void___cdecl(AVEncoder::FVideoDecoderOutput_const_*)> *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  
  uVar12 = *(undefined8 *)&param_1->field_0x8;
  uVar1 = *(undefined4 *)&this->OnDecodedFrame;
  uVar2 = *(undefined4 *)&(this->OnDecodedFrame).field_0x4;
  uVar3 = *(undefined4 *)&(this->OnDecodedFrame).field_0x8;
  uVar4 = *(undefined4 *)&(this->OnDecodedFrame).field_0xc;
  uVar5 = *(undefined4 *)&(this->OnDecodedFrame).field_0x10;
  uVar6 = *(undefined4 *)&(this->OnDecodedFrame).field_0x14;
  uVar7 = *(undefined4 *)&(this->OnDecodedFrame).field_0x18;
  uVar8 = *(undefined4 *)&(this->OnDecodedFrame).field_0x1c;
  uVar13 = *(undefined8 *)&(this->OnDecodedFrame).field_0x20;
  uVar14 = *(undefined8 *)&(this->OnDecodedFrame).field_0x28;
  *(undefined8 *)&this->OnDecodedFrame = *(undefined8 *)param_1;
  *(undefined8 *)&(this->OnDecodedFrame).field_0x8 = uVar12;
  uVar9 = *(undefined4 *)&param_1->field_0x14;
  uVar10 = *(undefined4 *)&param_1->field_0x18;
  uVar11 = *(undefined4 *)&param_1->field_0x1c;
  *(undefined4 *)&(this->OnDecodedFrame).field_0x10 = *(undefined4 *)&param_1->field_0x10;
  *(undefined4 *)&(this->OnDecodedFrame).field_0x14 = uVar9;
  *(undefined4 *)&(this->OnDecodedFrame).field_0x18 = uVar10;
  *(undefined4 *)&(this->OnDecodedFrame).field_0x1c = uVar11;
  uVar9 = *(undefined4 *)&param_1->field_0x24;
  uVar10 = *(undefined4 *)&param_1->field_0x28;
  uVar11 = *(undefined4 *)&param_1->field_0x2c;
  *(undefined4 *)&(this->OnDecodedFrame).field_0x20 = *(undefined4 *)&param_1->field_0x20;
  *(undefined4 *)&(this->OnDecodedFrame).field_0x24 = uVar9;
  *(undefined4 *)&(this->OnDecodedFrame).field_0x28 = uVar10;
  *(undefined4 *)&(this->OnDecodedFrame).field_0x2c = uVar11;
  *(undefined4 *)param_1 = uVar1;
  *(undefined4 *)&param_1->field_0x4 = uVar2;
  *(undefined4 *)&param_1->field_0x8 = uVar3;
  *(undefined4 *)&param_1->field_0xc = uVar4;
  *(undefined4 *)&param_1->field_0x10 = uVar5;
  *(undefined4 *)&param_1->field_0x14 = uVar6;
  *(undefined4 *)&param_1->field_0x18 = uVar7;
  *(undefined4 *)&param_1->field_0x1c = uVar8;
  *(undefined8 *)&param_1->field_0x20 = uVar13;
  *(undefined8 *)&param_1->field_0x28 = uVar14;
  if (*(longlong *)param_1 != 0) {
    plVar15 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar15 = *(longlong **)&param_1->field_0x28;
    }
                    /* WARNING: Could not recover jumptable at 0x000148d12496. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar15 + 0x10))();
    return;
  }
  return;
}

