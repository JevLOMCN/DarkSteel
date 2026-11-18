// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// CreateRHIBuffer<FStaticMeshVertexDataInterface_*> @ 1484343d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIBuffer> __thiscall
FRenderResource::CreateRHIBuffer<FStaticMeshVertexDataInterface_*>
          (FRenderResource *this,FRHICommandListBase *param_1,
          FStaticMeshVertexDataInterface **param_2,uint param_3,EBufferUsageFlags param_4,
          wchar_t *param_5)

{
  FRHIResource *this_00;
  undefined8 *puVar1;
  bool bVar2;
  FResourceArrayInterface *pFVar3;
  TRefCountPtr<FRHIBuffer> TVar4;
  undefined4 in_register_0000008c;
  longlong *plVar5;
  FName local_res10;
  FRHIResource *local_res20;
  FMemMark *in_stack_00000038;
  undefined4 in_stack_ffffffffffffffd4;
  
  plVar5 = (longlong *)CONCAT44(in_register_0000008c,param_3);
  (param_1->MemManager).Top = (uchar *)0x0;
  if ((longlong *)*plVar5 == (longlong *)0x0) {
    pFVar3 = (FResourceArrayInterface *)0x0;
  }
  else {
    pFVar3 = (FResourceArrayInterface *)(**(code **)(*(longlong *)*plVar5 + 0x38))();
  }
  if (param_4 != None) {
    local_res10 = this->OwnerName;
    TVar4 = CreateRHIBufferInternal
                      ((FRHICommandListBase *)&local_res20,(wchar_t *)param_2,
                       (FName *)in_stack_00000038,(uint)&local_res10,param_4,
                       (FResourceArrayInterface *)CONCAT44(in_stack_ffffffffffffffd4,param_5._0_4_),
                       SUB81(pFVar3,0));
    if (param_1 != (FRHICommandListBase *)TVar4.Reference) {
      this_00 = (FRHIResource *)(param_1->MemManager).Top;
      (param_1->MemManager).Top = (uchar *)(TVar4.Reference)->_padding_;
      (TVar4.Reference)->_padding_ = 0;
      if (this_00 != (FRHIResource *)0x0) {
        FRHIResource::Release(this_00);
      }
    }
    if (local_res20 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res20);
    }
  }
  bVar2 = ShouldFreeResourceObject((void *)*plVar5,pFVar3);
  if (bVar2) {
    puVar1 = (undefined8 *)*plVar5;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *plVar5 = 0;
  }
  return (TRefCountPtr<FRHIBuffer>)(FRHIBuffer *)param_1;
}

