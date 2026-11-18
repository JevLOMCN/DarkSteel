// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// InitRHI @ 14555c600

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall ShaderPrint::FEmptyBuffer::InitRHI(FEmptyBuffer *this,FRHICommandListBase *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  TRefCountPtr<FRDGPooledBuffer> TVar3;
  int *piVar4;
  undefined8 *puVar5;
  undefined8 *local_res8;
  undefined4 uStack_2c;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  local_20 = 0x400000004;
  uStack_18 = CONCAT44(uStack_2c,0x4109);
  local_10 = 0;
  TVar3 = AllocatePooledBuffer((FRDGBufferDesc *)&local_res8,(wchar_t *)&local_20,200);
  puVar1 = &this->field_0x20;
  if ((FRDGPooledBuffer *)puVar1 != TVar3.Reference) {
    puVar5 = *(undefined8 **)puVar1;
    *(longlong *)puVar1 = (TVar3.Reference)->_padding_;
    (TVar3.Reference)->_padding_ = 0;
    if (puVar5 != (undefined8 *)0x0) {
      piVar4 = (int *)(puVar5 + 1);
      LOCK();
      iVar2 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        if (piVar4 == (int *)0x0) {
          puVar5 = (undefined8 *)0x0;
        }
        if (puVar5 != (undefined8 *)0x0) {
          (**(code **)*puVar5)(puVar5,1);
        }
      }
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    piVar4 = (int *)(local_res8 + 1);
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if (piVar4 == (int *)0x0) {
        local_res8 = (undefined8 *)0x0;
      }
      if (local_res8 != (undefined8 *)0x0) {
        (**(code **)*local_res8)(local_res8,1);
      }
    }
  }
  return;
}

