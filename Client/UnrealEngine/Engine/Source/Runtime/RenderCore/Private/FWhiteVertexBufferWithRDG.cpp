// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// InitRHI @ 145cf9c80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FWhiteVertexBufferWithRDG::InitRHI(FWhiteVertexBufferWithRDG *this,FRHICommandListBase *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  TRefCountPtr<FRDGPooledBuffer> TVar5;
  int *piVar6;
  undefined8 *puVar7;
  undefined8 *local_res8;
  undefined4 uStack_3c;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  puVar1 = &this->field_0x20;
  if (*(longlong *)&this->field_0x20 == 0) {
    local_30 = 0x100000010;
    uStack_28 = CONCAT44(uStack_3c,0x4109);
    local_20 = 0;
    TVar5 = AllocatePooledBuffer((FRDGBufferDesc *)&local_res8,(wchar_t *)&local_30,0xf0);
    if ((FRDGPooledBuffer *)puVar1 != TVar5.Reference) {
      puVar7 = *(undefined8 **)puVar1;
      *(longlong *)puVar1 = (TVar5.Reference)->_padding_;
      (TVar5.Reference)->_padding_ = 0;
      if (puVar7 != (undefined8 *)0x0) {
        piVar6 = (int *)(puVar7 + 1);
        LOCK();
        iVar2 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          if (piVar6 == (int *)0x0) {
            puVar7 = (undefined8 *)0x0;
          }
          if (puVar7 != (undefined8 *)0x0) {
            (**(code **)*puVar7)(puVar7,1);
          }
        }
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      piVar6 = (int *)(local_res8 + 1);
      LOCK();
      iVar2 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        if (piVar6 == (int *)0x0) {
          local_res8 = (undefined8 *)0x0;
        }
        if (local_res8 != (undefined8 *)0x0) {
          (**(code **)*local_res8)(local_res8,1);
        }
      }
    }
    uVar4 = _UNK_15076b1f8;
    uVar3 = ___xmm_3f8000003f8000003f8000003f800000;
    puVar7 = FRHICommandListBase::LockBuffer
                       (param_1,*(FRHIBuffer **)(*(longlong *)puVar1 + 0x28),0,0x10,RLM_WriteOnly);
    *puVar7 = uVar3;
    puVar7[1] = uVar4;
    FRHICommandListBase::UnlockBuffer(param_1,*(FRHIBuffer **)(*(longlong *)puVar1 + 0x28));
  }
  return;
}

