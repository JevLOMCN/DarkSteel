// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// AllocIndexBuffer @ 147b2ac60

/* WARNING: Enum "Type": Some values do not have unique names */

TRefCountPtr<FRHIBuffer> __thiscall
FDynamicMeshBufferAllocator::AllocIndexBuffer(FDynamicMeshBufferAllocator *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<FRHIBuffer> TVar3;
  undefined4 in_register_00000014;
  undefined4 in_R8D;
  
  pcVar1 = *(code **)((longlong)*this + 0x10);
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Reference = (FRHIBuffer *)(*pcVar1)();
      return (TRefCountPtr<FRHIBuffer>)TVar3.Reference;
    }
  }
  (*pcVar1)(this,(FRHIBuffer *)CONCAT44(in_register_00000014,param_1),0x154be5ed0,in_R8D);
  return (TRefCountPtr<FRHIBuffer>)(FRHIBuffer *)CONCAT44(in_register_00000014,param_1);
}

// AllocVertexBuffer @ 147b2ad30

/* WARNING: Enum "Type": Some values do not have unique names */

TRefCountPtr<FRHIBuffer> __thiscall
FDynamicMeshBufferAllocator::AllocVertexBuffer
          (FDynamicMeshBufferAllocator *this,uint param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<FRHIBuffer> TVar3;
  undefined4 in_register_00000014;
  undefined4 in_R9D;
  
  pcVar1 = *(code **)((longlong)*this + 0x28);
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Reference = (FRHIBuffer *)(*pcVar1)();
      return (TRefCountPtr<FRHIBuffer>)TVar3.Reference;
    }
  }
  (*pcVar1)(this,(FRHIBuffer *)CONCAT44(in_register_00000014,param_1),0x154be5ed0,param_2,in_R9D);
  return (TRefCountPtr<FRHIBuffer>)(FRHIBuffer *)CONCAT44(in_register_00000014,param_1);
}

// ~FDynamicMeshBufferAllocator @ 147b3cc00

void __thiscall
FDynamicMeshBufferAllocator::~FDynamicMeshBufferAllocator(FDynamicMeshBufferAllocator *this)

{
  *this = (FDynamicMeshBufferAllocator)&___7FDynamicMeshBufferAllocator__6B_;
  return;
}

// AllocIndexBuffer @ 147b44da0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIBuffer> __thiscall
FDynamicMeshBufferAllocator::AllocIndexBuffer
          (FDynamicMeshBufferAllocator *this,FRHICommandListBase *param_1,uint param_2)

{
  undefined4 in_register_00000084;
  
  RHIGetDefaultResourceState(IndexBuffer|Volatile,false);
  FRHICommandListBase::CreateBuffer
            ((FRHICommandListBase *)CONCAT44(in_register_00000084,param_2),
             (FRHIBufferCreateDesc *)param_1);
  return (TRefCountPtr<FRHIBuffer>)(FRHIBuffer *)param_1;
}

// AllocVertexBuffer @ 147b44e70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIBuffer> __thiscall
FDynamicMeshBufferAllocator::AllocVertexBuffer
          (FDynamicMeshBufferAllocator *this,FRHICommandListBase *param_1,uint param_2,uint param_3)

{
  undefined4 in_register_00000084;
  
  RHIGetDefaultResourceState(VertexBuffer|ShaderResource|Volatile,false);
  FRHICommandListBase::CreateBuffer
            ((FRHICommandListBase *)CONCAT44(in_register_00000084,param_2),
             (FRHIBufferCreateDesc *)param_1);
  return (TRefCountPtr<FRHIBuffer>)(FRHIBuffer *)param_1;
}

// GetIndexBufferSize @ 147b66030

int __thiscall
FDynamicMeshBufferAllocator::GetIndexBufferSize(FDynamicMeshBufferAllocator *this,uint param_1)

{
  return param_1 * 4;
}

// GetVertexBufferSize @ 147b729e0

int __thiscall
FDynamicMeshBufferAllocator::GetVertexBufferSize
          (FDynamicMeshBufferAllocator *this,uint param_1,uint param_2)

{
  return param_1 * param_2;
}

// ReleaseIndexBuffer @ 147b832a0

void __thiscall
FDynamicMeshBufferAllocator::ReleaseIndexBuffer
          (FDynamicMeshBufferAllocator *this,TRefCountPtr<FRHIBuffer> *param_1)

{
  FRHIBuffer *this_00;
  
  this_00 = param_1->Reference;
  if (this_00 != (FRHIBuffer *)0x0) {
    param_1->Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
    return;
  }
  return;
}

// ReleaseVertexBuffer @ 147b837d0

void __thiscall
FDynamicMeshBufferAllocator::ReleaseVertexBuffer
          (FDynamicMeshBufferAllocator *this,TRefCountPtr<FRHIBuffer> *param_1)

{
  FRHIBuffer *this_00;
  
  this_00 = param_1->Reference;
  if (this_00 != (FRHIBuffer *)0x0) {
    param_1->Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
    return;
  }
  return;
}

