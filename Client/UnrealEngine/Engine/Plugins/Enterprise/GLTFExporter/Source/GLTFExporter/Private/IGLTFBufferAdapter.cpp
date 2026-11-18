// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 9

// ~IGLTFBufferAdapter @ 14e5d7eb0

void __thiscall IGLTFBufferAdapter::~IGLTFBufferAdapter(IGLTFBufferAdapter *this)

{
  return;
}

// GetColors @ 14e5f5b80

TUniquePtr<IGLTFBufferAdapter,TDefaultDelete<IGLTFBufferAdapter>_> __cdecl
IGLTFBufferAdapter::GetColors(FColorVertexBuffer *param_1)

{
  uchar *puVar1;
  FRHIBuffer *pFVar2;
  bool bVar3;
  undefined8 *puVar4;
  FColorVertexBuffer *in_RDX;
  
  puVar1 = in_RDX->Data;
  if ((puVar1 != (uchar *)0x0) && (bVar3 = FColorVertexBuffer::GetAllowCPUAccess(in_RDX), bVar3)) {
    puVar4 = ::operator_new(0x10);
    if (puVar4 == (undefined8 *)0x0) {
      param_1->_padding_ = 0;
      return (TUniquePtr<IGLTFBufferAdapter,TDefaultDelete<IGLTFBufferAdapter>_>)
             (IGLTFBufferAdapter *)param_1;
    }
    puVar4[1] = puVar1;
    *puVar4 = &___7FGLTFBufferAdapterCPU__6B_;
    param_1->_padding_ = (longlong)puVar4;
    return (TUniquePtr<IGLTFBufferAdapter,TDefaultDelete<IGLTFBufferAdapter>_>)
           (IGLTFBufferAdapter *)param_1;
  }
  puVar4 = ::operator_new(0x18);
  if (puVar4 != (undefined8 *)0x0) {
    pFVar2 = (FRHIBuffer *)in_RDX->_padding_;
    *puVar4 = &___7FGLTFBufferAdapterGPU__6B_;
    (((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(puVar4 + 1))->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    puVar4[2] = 0;
    FGLTFBufferUtilities::ReadRHIBuffer
              (pFVar2,(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(puVar4 + 1));
  }
  param_1->_padding_ = (longlong)puVar4;
  return (TUniquePtr<IGLTFBufferAdapter,TDefaultDelete<IGLTFBufferAdapter>_>)
         (IGLTFBufferAdapter *)param_1;
}

// GetIndices @ 14e5f6630

TUniquePtr<IGLTFBufferAdapter,TDefaultDelete<IGLTFBufferAdapter>_> __cdecl
IGLTFBufferAdapter::GetIndices(FRawStaticIndexBuffer16or32Interface *param_1)

{
  FRHIBuffer *pFVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *in_RDX;
  
  iVar3 = (**(code **)(*in_RDX + 0x88))();
  if (((0 < iVar3) && (lVar4 = (**(code **)(*in_RDX + 0x68))(), lVar4 != 0)) &&
     (cVar2 = (**(code **)(*in_RDX + 0x48))(), cVar2 != '\0')) {
    puVar5 = ::operator_new(0x10);
    if (puVar5 == (undefined8 *)0x0) {
      param_1->_padding_ = 0;
      return (TUniquePtr<IGLTFBufferAdapter,TDefaultDelete<IGLTFBufferAdapter>_>)
             (IGLTFBufferAdapter *)param_1;
    }
    puVar5[1] = lVar4;
    *puVar5 = &___7FGLTFBufferAdapterCPU__6B_;
    param_1->_padding_ = (longlong)puVar5;
    return (TUniquePtr<IGLTFBufferAdapter,TDefaultDelete<IGLTFBufferAdapter>_>)
           (IGLTFBufferAdapter *)param_1;
  }
  puVar5 = ::operator_new(0x18);
  if (puVar5 != (undefined8 *)0x0) {
    pFVar1 = (FRHIBuffer *)in_RDX[4];
    *puVar5 = &___7FGLTFBufferAdapterGPU__6B_;
    (((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(puVar5 + 1))->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    puVar5[2] = 0;
    FGLTFBufferUtilities::ReadRHIBuffer
              (pFVar1,(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(puVar5 + 1));
  }
  param_1->_padding_ = (longlong)puVar5;
  return (TUniquePtr<IGLTFBufferAdapter,TDefaultDelete<IGLTFBufferAdapter>_>)
         (IGLTFBufferAdapter *)param_1;
}

// GetIndices @ 14e5f6720

TUniquePtr<IGLTFBufferAdapter,TDefaultDelete<IGLTFBufferAdapter>_> __cdecl
IGLTFBufferAdapter::GetIndices(FRawStaticIndexBuffer *param_1)

{
  FRHIBuffer *pFVar1;
  char cVar2;
  uint *puVar3;
  undefined8 *puVar4;
  FRawStaticIndexBuffer *in_RDX;
  
  if (in_RDX->b32Bit == false) {
    puVar3 = (uint *)FRawStaticIndexBuffer::AccessStream16(in_RDX);
  }
  else {
    puVar3 = FRawStaticIndexBuffer::AccessStream32(in_RDX);
  }
  if ((puVar3 != (uint *)0x0) &&
     (cVar2 = (**(code **)((in_RDX->IndexStorage)._padding_ + 0x30))(&in_RDX->IndexStorage),
     cVar2 != '\0')) {
    puVar4 = ::operator_new(0x10);
    if (puVar4 == (undefined8 *)0x0) {
      param_1->_padding_ = 0;
      return (TUniquePtr<IGLTFBufferAdapter,TDefaultDelete<IGLTFBufferAdapter>_>)
             (IGLTFBufferAdapter *)param_1;
    }
    puVar4[1] = puVar3;
    *puVar4 = &___7FGLTFBufferAdapterCPU__6B_;
    param_1->_padding_ = (longlong)puVar4;
    return (TUniquePtr<IGLTFBufferAdapter,TDefaultDelete<IGLTFBufferAdapter>_>)
           (IGLTFBufferAdapter *)param_1;
  }
  puVar4 = ::operator_new(0x18);
  if (puVar4 != (undefined8 *)0x0) {
    pFVar1 = (FRHIBuffer *)in_RDX->_padding_;
    *puVar4 = &___7FGLTFBufferAdapterGPU__6B_;
    (((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(puVar4 + 1))->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    puVar4[2] = 0;
    FGLTFBufferUtilities::ReadRHIBuffer
              (pFVar1,(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(puVar4 + 1));
  }
  param_1->_padding_ = (longlong)puVar4;
  return (TUniquePtr<IGLTFBufferAdapter,TDefaultDelete<IGLTFBufferAdapter>_>)
         (IGLTFBufferAdapter *)param_1;
}

// GetInfluences @ 14e5f6800

TUniquePtr<IGLTFBufferAdapter,TDefaultDelete<IGLTFBufferAdapter>_> __cdecl
IGLTFBufferAdapter::GetInfluences(FSkinWeightVertexBuffer *param_1)

{
  longlong lVar1;
  FRHIBuffer *pFVar2;
  undefined8 *puVar3;
  longlong in_RDX;
  
  lVar1 = *(longlong *)(in_RDX + 0x48);
  if ((lVar1 != 0) && (*(char *)(in_RDX + 0x30) != '\0')) {
    puVar3 = ::operator_new(0x10);
    if (puVar3 == (undefined8 *)0x0) {
      (param_1->DataVertexBuffer)._padding_ = 0;
      return (TUniquePtr<IGLTFBufferAdapter,TDefaultDelete<IGLTFBufferAdapter>_>)
             (IGLTFBufferAdapter *)param_1;
    }
    puVar3[1] = lVar1;
    *puVar3 = &___7FGLTFBufferAdapterCPU__6B_;
    (param_1->DataVertexBuffer)._padding_ = (longlong)puVar3;
    return (TUniquePtr<IGLTFBufferAdapter,TDefaultDelete<IGLTFBufferAdapter>_>)
           (IGLTFBufferAdapter *)param_1;
  }
  puVar3 = ::operator_new(0x18);
  if (puVar3 != (undefined8 *)0x0) {
    pFVar2 = *(FRHIBuffer **)(in_RDX + 0x20);
    *puVar3 = &___7FGLTFBufferAdapterGPU__6B_;
    (((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(puVar3 + 1))->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    puVar3[2] = 0;
    FGLTFBufferUtilities::ReadRHIBuffer
              (pFVar2,(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(puVar3 + 1));
  }
  (param_1->DataVertexBuffer)._padding_ = (longlong)puVar3;
  return (TUniquePtr<IGLTFBufferAdapter,TDefaultDelete<IGLTFBufferAdapter>_>)
         (IGLTFBufferAdapter *)param_1;
}

// GetLookups @ 14e5f7380

TUniquePtr<IGLTFBufferAdapter,TDefaultDelete<IGLTFBufferAdapter>_> __cdecl
IGLTFBufferAdapter::GetLookups(FSkinWeightVertexBuffer *param_1)

{
  longlong lVar1;
  FRHIBuffer *pFVar2;
  undefined8 *puVar3;
  longlong in_RDX;
  
  lVar1 = *(longlong *)(in_RDX + 0x98);
  if ((lVar1 != 0) && (*(char *)(in_RDX + 0x30) != '\0')) {
    puVar3 = ::operator_new(0x10);
    if (puVar3 == (undefined8 *)0x0) {
      (param_1->DataVertexBuffer)._padding_ = 0;
      return (TUniquePtr<IGLTFBufferAdapter,TDefaultDelete<IGLTFBufferAdapter>_>)
             (IGLTFBufferAdapter *)param_1;
    }
    puVar3[1] = lVar1;
    *puVar3 = &___7FGLTFBufferAdapterCPU__6B_;
    (param_1->DataVertexBuffer)._padding_ = (longlong)puVar3;
    return (TUniquePtr<IGLTFBufferAdapter,TDefaultDelete<IGLTFBufferAdapter>_>)
           (IGLTFBufferAdapter *)param_1;
  }
  puVar3 = ::operator_new(0x18);
  if (puVar3 != (undefined8 *)0x0) {
    pFVar2 = *(FRHIBuffer **)(in_RDX + 0x78);
    *puVar3 = &___7FGLTFBufferAdapterGPU__6B_;
    (((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(puVar3 + 1))->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    puVar3[2] = 0;
    FGLTFBufferUtilities::ReadRHIBuffer
              (pFVar2,(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(puVar3 + 1));
  }
  (param_1->DataVertexBuffer)._padding_ = (longlong)puVar3;
  return (TUniquePtr<IGLTFBufferAdapter,TDefaultDelete<IGLTFBufferAdapter>_>)
         (IGLTFBufferAdapter *)param_1;
}

// GetPositions @ 14e5fc080

TUniquePtr<IGLTFBufferAdapter,TDefaultDelete<IGLTFBufferAdapter>_> __cdecl
IGLTFBufferAdapter::GetPositions(FPositionVertexBuffer *param_1)

{
  uchar *puVar1;
  FRHIBuffer *pFVar2;
  bool bVar3;
  undefined8 *puVar4;
  FPositionVertexBuffer *in_RDX;
  
  puVar1 = in_RDX->Data;
  if ((puVar1 != (uchar *)0x0) && (bVar3 = FPositionVertexBuffer::GetAllowCPUAccess(in_RDX), bVar3))
  {
    puVar4 = ::operator_new(0x10);
    if (puVar4 == (undefined8 *)0x0) {
      param_1->_padding_ = 0;
      return (TUniquePtr<IGLTFBufferAdapter,TDefaultDelete<IGLTFBufferAdapter>_>)
             (IGLTFBufferAdapter *)param_1;
    }
    puVar4[1] = puVar1;
    *puVar4 = &___7FGLTFBufferAdapterCPU__6B_;
    param_1->_padding_ = (longlong)puVar4;
    return (TUniquePtr<IGLTFBufferAdapter,TDefaultDelete<IGLTFBufferAdapter>_>)
           (IGLTFBufferAdapter *)param_1;
  }
  puVar4 = ::operator_new(0x18);
  if (puVar4 != (undefined8 *)0x0) {
    pFVar2 = (FRHIBuffer *)in_RDX->_padding_;
    *puVar4 = &___7FGLTFBufferAdapterGPU__6B_;
    (((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(puVar4 + 1))->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    puVar4[2] = 0;
    FGLTFBufferUtilities::ReadRHIBuffer
              (pFVar2,(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(puVar4 + 1));
  }
  param_1->_padding_ = (longlong)puVar4;
  return (TUniquePtr<IGLTFBufferAdapter,TDefaultDelete<IGLTFBufferAdapter>_>)
         (IGLTFBufferAdapter *)param_1;
}

// GetTangents @ 14e5feaa0

TUniquePtr<IGLTFBufferAdapter,TDefaultDelete<IGLTFBufferAdapter>_> __cdecl
IGLTFBufferAdapter::GetTangents(FStaticMeshVertexBuffer *param_1)

{
  longlong lVar1;
  FRHIBuffer *pFVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong in_RDX;
  
  lVar1 = *(longlong *)(in_RDX + 0x90);
  if ((((lVar1 != 0) && (*(longlong **)(in_RDX + 0x70) != (longlong *)0x0)) &&
      (*(longlong *)(in_RDX + 0x80) != 0)) &&
     ((cVar3 = (**(code **)(**(longlong **)(in_RDX + 0x70) + 0x58))(), cVar3 != '\0' &&
      (cVar3 = (**(code **)(**(longlong **)(in_RDX + 0x80) + 0x58))(), cVar3 != '\0')))) {
    puVar4 = ::operator_new(0x10);
    if (puVar4 == (undefined8 *)0x0) {
      param_1->_padding_ = 0;
      return (TUniquePtr<IGLTFBufferAdapter,TDefaultDelete<IGLTFBufferAdapter>_>)
             (IGLTFBufferAdapter *)param_1;
    }
    puVar4[1] = lVar1;
    *puVar4 = &___7FGLTFBufferAdapterCPU__6B_;
    param_1->_padding_ = (longlong)puVar4;
    return (TUniquePtr<IGLTFBufferAdapter,TDefaultDelete<IGLTFBufferAdapter>_>)
           (IGLTFBufferAdapter *)param_1;
  }
  puVar4 = ::operator_new(0x18);
  if (puVar4 != (undefined8 *)0x0) {
    pFVar2 = *(FRHIBuffer **)(in_RDX + 0x40);
    *puVar4 = &___7FGLTFBufferAdapterGPU__6B_;
    (((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(puVar4 + 1))->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    puVar4[2] = 0;
    FGLTFBufferUtilities::ReadRHIBuffer
              (pFVar2,(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(puVar4 + 1));
  }
  param_1->_padding_ = (longlong)puVar4;
  return (TUniquePtr<IGLTFBufferAdapter,TDefaultDelete<IGLTFBufferAdapter>_>)
         (IGLTFBufferAdapter *)param_1;
}

// GetUVs @ 14e5ff3a0

TUniquePtr<IGLTFBufferAdapter,TDefaultDelete<IGLTFBufferAdapter>_> __cdecl
IGLTFBufferAdapter::GetUVs(FStaticMeshVertexBuffer *param_1)

{
  longlong lVar1;
  FRHIBuffer *pFVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong in_RDX;
  
  lVar1 = *(longlong *)(in_RDX + 0x98);
  if ((((lVar1 != 0) && (*(longlong **)(in_RDX + 0x70) != (longlong *)0x0)) &&
      (*(longlong *)(in_RDX + 0x80) != 0)) &&
     ((cVar3 = (**(code **)(**(longlong **)(in_RDX + 0x70) + 0x58))(), cVar3 != '\0' &&
      (cVar3 = (**(code **)(**(longlong **)(in_RDX + 0x80) + 0x58))(), cVar3 != '\0')))) {
    puVar4 = ::operator_new(0x10);
    if (puVar4 == (undefined8 *)0x0) {
      param_1->_padding_ = 0;
      return (TUniquePtr<IGLTFBufferAdapter,TDefaultDelete<IGLTFBufferAdapter>_>)
             (IGLTFBufferAdapter *)param_1;
    }
    puVar4[1] = lVar1;
    *puVar4 = &___7FGLTFBufferAdapterCPU__6B_;
    param_1->_padding_ = (longlong)puVar4;
    return (TUniquePtr<IGLTFBufferAdapter,TDefaultDelete<IGLTFBufferAdapter>_>)
           (IGLTFBufferAdapter *)param_1;
  }
  puVar4 = ::operator_new(0x18);
  if (puVar4 != (undefined8 *)0x0) {
    pFVar2 = *(FRHIBuffer **)(in_RDX + 0x68);
    *puVar4 = &___7FGLTFBufferAdapterGPU__6B_;
    (((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(puVar4 + 1))->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    puVar4[2] = 0;
    FGLTFBufferUtilities::ReadRHIBuffer
              (pFVar2,(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(puVar4 + 1));
  }
  param_1->_padding_ = (longlong)puVar4;
  return (TUniquePtr<IGLTFBufferAdapter,TDefaultDelete<IGLTFBufferAdapter>_>)
         (IGLTFBufferAdapter *)param_1;
}

