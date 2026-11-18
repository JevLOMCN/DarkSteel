// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// AllocIndexBuffer @ 147b290c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIBuffer> __thiscall
FPooledDynamicMeshBufferAllocator::AllocIndexBuffer
          (FPooledDynamicMeshBufferAllocator *this,FRHICommandListBase *param_1,uint param_2)

{
  undefined4 in_register_00000084;
  int in_R9D;
  
  if (FGlobalDynamicMeshPoolPolicy::BucketSizes[0xf] < (uint)(in_R9D * 4)) {
    RHIGetDefaultResourceState(IndexBuffer|Volatile,false);
    FRHICommandListBase::CreateBuffer
              ((FRHICommandListBase *)CONCAT44(in_register_00000084,param_2),
               (FRHIBufferCreateDesc *)param_1);
  }
  else if (GDynamicMeshIndexPool._368_4_ == -1) {
    (param_1->MemManager).Top = (uchar *)0x0;
  }
  else {
    TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>::
    CreatePooledResource
              ((TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int> *
               )&GDynamicMeshIndexPool,param_1,param_2);
  }
  return (TRefCountPtr<FRHIBuffer>)(FRHIBuffer *)param_1;
}

// ReleaseIndexBuffer @ 147b291c0

void __thiscall
FPooledDynamicMeshBufferAllocator::ReleaseIndexBuffer
          (FPooledDynamicMeshBufferAllocator *this,TRefCountPtr<FRHIBuffer> *param_1)

{
  FRHIBuffer *this_00;
  
  if (param_1->Reference != (FRHIBuffer *)0x0) {
    if ((param_1->Reference->Desc).Size <= FGlobalDynamicMeshPoolPolicy::BucketSizes[0xf]) {
      TRenderResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>::
      ReleasePooledResource
                ((TRenderResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>
                  *)&GDynamicMeshIndexPool,param_1);
    }
    this_00 = param_1->Reference;
    if (this_00 != (FRHIBuffer *)0x0) {
      param_1->Reference = (FRHIBuffer *)0x0;
      FRHIResource::Release((FRHIResource *)this_00);
      return;
    }
  }
  return;
}

// AllocVertexBuffer @ 147b29210

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIBuffer> __thiscall
FPooledDynamicMeshBufferAllocator::AllocVertexBuffer
          (FPooledDynamicMeshBufferAllocator *this,FRHICommandListBase *param_1,uint param_2,
          uint param_3)

{
  undefined4 in_register_00000084;
  int in_stack_00000028;
  
  if (FGlobalDynamicMeshPoolPolicy::BucketSizes[0xf] < param_3 * in_stack_00000028) {
    RHIGetDefaultResourceState(VertexBuffer|ShaderResource|Volatile,false);
    FRHICommandListBase::CreateBuffer
              ((FRHICommandListBase *)CONCAT44(in_register_00000084,param_2),
               (FRHIBufferCreateDesc *)param_1);
  }
  else if (GDynamicMeshVertexPool._368_4_ == -1) {
    (param_1->MemManager).Top = (uchar *)0x0;
  }
  else {
    TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int>::
    CreatePooledResource
              ((TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int>
                *)&GDynamicMeshVertexPool,param_1,param_2);
  }
  return (TRefCountPtr<FRHIBuffer>)(FRHIBuffer *)param_1;
}

// ReleaseVertexBuffer @ 147b29310

void __thiscall
FPooledDynamicMeshBufferAllocator::ReleaseVertexBuffer
          (FPooledDynamicMeshBufferAllocator *this,TRefCountPtr<FRHIBuffer> *param_1)

{
  FRHIBuffer *this_00;
  
  if (param_1->Reference != (FRHIBuffer *)0x0) {
    if ((param_1->Reference->Desc).Size <= FGlobalDynamicMeshPoolPolicy::BucketSizes[0xf]) {
      TRenderResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int>::
      ReleasePooledResource
                ((TRenderResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int>
                  *)&GDynamicMeshVertexPool,param_1);
    }
    this_00 = param_1->Reference;
    if (this_00 != (FRHIBuffer *)0x0) {
      param_1->Reference = (FRHIBuffer *)0x0;
      FRHIResource::Release((FRHIResource *)this_00);
      return;
    }
  }
  return;
}

