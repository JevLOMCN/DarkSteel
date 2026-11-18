// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 17

// ResizeAllocation @ 14478d050

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGArrayAllocator<0>::ForElementType<FRDGBuffer_*>::ResizeAllocation
          (ForElementType<FRDGBuffer_*> *this,int param_1,int param_2,ulong64 param_3)

{
  FRDGBuffer **_Src;
  FRDGAllocator *this_00;
  FRDGBuffer **_Dst;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    iVar2 = (int)param_3 * param_2;
    uVar1 = 8;
    if (0xf < iVar2) {
      uVar1 = 0x10;
    }
    this_00 = FRDGAllocator::GetTLS();
    uVar3 = 8;
    if (8 < uVar1) {
      uVar3 = uVar1;
    }
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar2,(ulonglong)uVar3);
    this->Data = _Dst;
    if ((_Src != (FRDGBuffer **)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 14478d130

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRDGArrayAllocator<0>::ForElementType<FRDGDispatchPass_*>::ResizeAllocation
          (ForElementType<FRDGDispatchPass_*> *this,int param_1,int param_2,ulong64 param_3)

{
  FRDGDispatchPass **_Src;
  FRDGAllocator *this_00;
  FRDGDispatchPass **_Dst;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    iVar2 = (int)param_3 * param_2;
    uVar1 = 8;
    if (0xf < iVar2) {
      uVar1 = 0x10;
    }
    this_00 = FRDGAllocator::GetTLS();
    uVar3 = 8;
    if (8 < uVar1) {
      uVar3 = uVar1;
    }
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar2,(ulonglong)uVar3);
    this->Data = _Dst;
    if ((_Src != (FRDGDispatchPass **)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 14478d210

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>::ResizeAllocation
          (ForElementType<FRDGPass_*> *this,int param_1,int param_2,ulong64 param_3)

{
  FRDGPass **_Src;
  FRDGAllocator *this_00;
  FRDGPass **_Dst;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    iVar2 = (int)param_3 * param_2;
    uVar1 = 8;
    if (0xf < iVar2) {
      uVar1 = 0x10;
    }
    this_00 = FRDGAllocator::GetTLS();
    uVar3 = 8;
    if (8 < uVar1) {
      uVar3 = uVar1;
    }
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar2,(ulonglong)uVar3);
    this->Data = _Dst;
    if ((_Src != (FRDGPass **)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 14478d2f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGArrayAllocator<0>::ForElementType<FRDGTexture_*>::ResizeAllocation
          (ForElementType<FRDGTexture_*> *this,int param_1,int param_2,ulong64 param_3)

{
  FRDGTexture **_Src;
  FRDGAllocator *this_00;
  FRDGTexture **_Dst;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    iVar2 = (int)param_3 * param_2;
    uVar1 = 8;
    if (0xf < iVar2) {
      uVar1 = 0x10;
    }
    this_00 = FRDGAllocator::GetTLS();
    uVar3 = 8;
    if (8 < uVar1) {
      uVar3 = uVar1;
    }
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar2,(ulonglong)uVar3);
    this->Data = _Dst;
    if ((_Src != (FRDGTexture **)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 14478d3d0

void __thiscall
TRDGArrayAllocator<0>::ForElementType<FRDGUniformBuffer_*>::ResizeAllocation
          (ForElementType<FRDGUniformBuffer_*> *this,int param_1,int param_2,ulong64 param_3)

{
  FRDGUniformBuffer **_Src;
  FRDGAllocator *this_00;
  FRDGUniformBuffer **_Dst;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    iVar2 = (int)param_3 * param_2;
    uVar1 = 8;
    if (0xf < iVar2) {
      uVar1 = 0x10;
    }
    this_00 = FRDGAllocator::GetTLS();
    uVar3 = 8;
    if (8 < uVar1) {
      uVar3 = uVar1;
    }
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar2,(ulonglong)uVar3);
    this->Data = _Dst;
    if ((_Src != (FRDGUniformBuffer **)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 14478d4b0

void __thiscall
TRDGArrayAllocator<0>::ForElementType<FRDGView_*>::ResizeAllocation
          (ForElementType<FRDGView_*> *this,int param_1,int param_2,ulong64 param_3)

{
  FRDGView **_Src;
  FRDGAllocator *this_00;
  FRDGView **_Dst;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    iVar2 = (int)param_3 * param_2;
    uVar1 = 8;
    if (0xf < iVar2) {
      uVar1 = 0x10;
    }
    this_00 = FRDGAllocator::GetTLS();
    uVar3 = 8;
    if (8 < uVar1) {
      uVar3 = uVar1;
    }
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar2,(ulonglong)uVar3);
    this->Data = _Dst;
    if ((_Src != (FRDGView **)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 14478d630

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGArrayAllocator<0>::ForElementType<FRDGBuilder::FAsyncSetupOp>::ResizeAllocation
          (ForElementType<FRDGBuilder::FAsyncSetupOp> *this,int param_1,int param_2,ulong64 param_3)

{
  FAsyncSetupOp *_Src;
  FRDGAllocator *this_00;
  FAsyncSetupOp *_Dst;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    iVar2 = (int)param_3 * param_2;
    uVar1 = 8;
    if (0xf < iVar2) {
      uVar1 = 0x10;
    }
    this_00 = FRDGAllocator::GetTLS();
    uVar3 = 8;
    if (8 < uVar1) {
      uVar3 = uVar1;
    }
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar2,(ulonglong)uVar3);
    this->Data = _Dst;
    if ((_Src != (FAsyncSetupOp *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 14478d710

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGArrayAllocator<0>::ForElementType<FRDGBuilder::FExtractedTexture>::ResizeAllocation
          (ForElementType<FRDGBuilder::FExtractedTexture> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FExtractedTexture *_Src;
  FRDGAllocator *this_00;
  FExtractedTexture *_Dst;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    iVar2 = (int)param_3 * param_2;
    uVar1 = 8;
    if (0xf < iVar2) {
      uVar1 = 0x10;
    }
    this_00 = FRDGAllocator::GetTLS();
    uVar3 = 8;
    if (8 < uVar1) {
      uVar3 = uVar1;
    }
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar2,(ulonglong)uVar3);
    this->Data = _Dst;
    if ((_Src != (FExtractedTexture *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 14482e450

void __thiscall
TRDGArrayAllocator<0>::ForElementType<FRDGBlackboard::FStruct_*>::ResizeAllocation
          (ForElementType<FRDGBlackboard::FStruct_*> *this,int param_1,int param_2,ulong64 param_3)

{
  FStruct **_Src;
  FRDGAllocator *this_00;
  FStruct **_Dst;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    iVar2 = (int)param_3 * param_2;
    uVar1 = 8;
    if (0xf < iVar2) {
      uVar1 = 0x10;
    }
    this_00 = FRDGAllocator::GetTLS();
    uVar3 = 8;
    if (8 < uVar1) {
      uVar3 = uVar1;
    }
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar2,(ulonglong)uVar3);
    this->Data = _Dst;
    if ((_Src != (FStruct **)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 14482eb40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
TRDGArrayAllocator<0>::ForElementType<FDecalVisibilityViewPacket>::ResizeAllocation
          (ForElementType<FDecalVisibilityViewPacket> *this,int param_1,int param_2,ulong64 param_3)

{
  FDecalVisibilityViewPacket *_Src;
  FRDGAllocator *this_00;
  FDecalVisibilityViewPacket *_Dst;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    iVar2 = (int)param_3 * param_2;
    uVar1 = 8;
    if (0xf < iVar2) {
      uVar1 = 0x10;
    }
    this_00 = FRDGAllocator::GetTLS();
    uVar3 = 8;
    if (8 < uVar1) {
      uVar3 = uVar1;
    }
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar2,(ulonglong)uVar3);
    this->Data = _Dst;
    if ((_Src != (FDecalVisibilityViewPacket *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 14482ec20

void __thiscall
TRDGArrayAllocator<0>::ForElementType<UE::Tasks::Private::FTaskHandle>::ResizeAllocation
          (ForElementType<UE::Tasks::Private::FTaskHandle> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FTaskHandle *_Src;
  FRDGAllocator *this_00;
  FTaskHandle *_Dst;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    iVar2 = (int)param_3 * param_2;
    uVar1 = 8;
    if (0xf < iVar2) {
      uVar1 = 0x10;
    }
    this_00 = FRDGAllocator::GetTLS();
    uVar3 = 8;
    if (8 < uVar1) {
      uVar3 = uVar1;
    }
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar2,(ulonglong)uVar3);
    this->Data = _Dst;
    if ((_Src != (FTaskHandle *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 14489d290

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TRDGArrayAllocator<0>::ForElementType<FRDGExternalAccessQueue::FResource>::ResizeAllocation
          (ForElementType<FRDGExternalAccessQueue::FResource> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FResource *_Src;
  FRDGAllocator *this_00;
  FResource *_Dst;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    iVar2 = (int)param_3 * param_2;
    uVar1 = 8;
    if (0xf < iVar2) {
      uVar1 = 0x10;
    }
    this_00 = FRDGAllocator::GetTLS();
    uVar3 = 8;
    if (8 < uVar1) {
      uVar3 = uVar1;
    }
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar2,(ulonglong)uVar3);
    this->Data = _Dst;
    if ((_Src != (FResource *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 144930420

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGArrayAllocator<0>::ForElementType<FRDGBuilder::FUploadedBuffer>::ResizeAllocation
          (ForElementType<FRDGBuilder::FUploadedBuffer> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FUploadedBuffer *_Src;
  FRDGAllocator *this_00;
  FUploadedBuffer *_Dst;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    this_00 = FRDGAllocator::GetTLS();
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)((int)param_3 * param_2),0x10);
    this->Data = _Dst;
    if ((_Src != (FUploadedBuffer *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 144aad6f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGArrayAllocator<0>::ForElementType<FRDGBuilder::FExtractedBuffer>::ResizeAllocation
          (ForElementType<FRDGBuilder::FExtractedBuffer> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FExtractedBuffer *_Src;
  FRDGAllocator *this_00;
  FExtractedBuffer *_Dst;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    iVar2 = (int)param_3 * param_2;
    uVar1 = 8;
    if (0xf < iVar2) {
      uVar1 = 0x10;
    }
    this_00 = FRDGAllocator::GetTLS();
    uVar3 = 8;
    if (8 < uVar1) {
      uVar3 = uVar1;
    }
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar2,(ulonglong)uVar3);
    this->Data = _Dst;
    if ((_Src != (FExtractedBuffer *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 144d99400

void __thiscall
TRDGArrayAllocator<0>::ForElementType<TUniqueFunction<void___cdecl(void)>_>::ResizeAllocation
          (ForElementType<TUniqueFunction<void___cdecl(void)>_> *this,int param_1,int param_2,
          ulong64 param_3)

{
  TUniqueFunction<void___cdecl(void)> *_Src;
  FRDGAllocator *this_00;
  TUniqueFunction<void___cdecl(void)> *_Dst;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    this_00 = FRDGAllocator::GetTLS();
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)((int)param_3 * param_2),0x10);
    this->Data = _Dst;
    if ((_Src != (TUniqueFunction<void___cdecl(void)> *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 1450ee7a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGArrayAllocator<0>::ForElementType<FRDGBufferAccess>::ResizeAllocation
          (ForElementType<FRDGBufferAccess> *this,int param_1,int param_2,ulong64 param_3)

{
  FRDGBufferAccess *_Src;
  FRDGAllocator *this_00;
  FRDGBufferAccess *_Dst;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    iVar2 = (int)param_3 * param_2;
    uVar1 = 8;
    if (0xf < iVar2) {
      uVar1 = 0x10;
    }
    this_00 = FRDGAllocator::GetTLS();
    uVar3 = 8;
    if (8 < uVar1) {
      uVar3 = uVar1;
    }
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar2,(ulonglong)uVar3);
    this->Data = _Dst;
    if ((_Src != (FRDGBufferAccess *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 145504a30

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGArrayAllocator<0>::ForElementType<FRDGTextureAccess>::ResizeAllocation
          (ForElementType<FRDGTextureAccess> *this,int param_1,int param_2,ulong64 param_3)

{
  FRDGTextureAccess *_Src;
  FRDGAllocator *this_00;
  FRDGTextureAccess *_Dst;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    iVar2 = (int)param_3 * param_2;
    uVar1 = 8;
    if (0xf < iVar2) {
      uVar1 = 0x10;
    }
    this_00 = FRDGAllocator::GetTLS();
    uVar3 = 8;
    if (8 < uVar1) {
      uVar3 = uVar1;
    }
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar2,(ulonglong)uVar3);
    this->Data = _Dst;
    if ((_Src != (FRDGTextureAccess *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

