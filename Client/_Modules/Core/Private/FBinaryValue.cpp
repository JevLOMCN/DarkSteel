// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// FBinaryValue<FSharedBuffer,0> @ 1419b42d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FBinaryValue * __thiscall
FCbAttachment::FBinaryValue::FBinaryValue<FSharedBuffer,0>
          (FBinaryValue *this,FSharedBuffer *param_1)

{
  undefined8 uVar1;
  FSharedBuffer FVar2;
  FBlake3Hash *pFVar3;
  undefined1 auStack_58 [32];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_38;
  FBlake3Hash local_30;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  FVar2 = FSharedBuffer::MakeOwned(param_1);
  FCompositeBuffer::FCompositeBuffer<FSharedBuffer,0>
            (&this->Buffer,(FSharedBuffer *)FVar2.Owner.Owner);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_38);
  pFVar3 = FBlake3::HashBuffer(&local_30,&this->Buffer);
  (this->Hash).Hash[0] = '\0';
  (this->Hash).Hash[1] = '\0';
  (this->Hash).Hash[2] = '\0';
  (this->Hash).Hash[3] = '\0';
  (this->Hash).Hash[4] = '\0';
  (this->Hash).Hash[5] = '\0';
  (this->Hash).Hash[6] = '\0';
  (this->Hash).Hash[7] = '\0';
  (this->Hash).Hash[8] = '\0';
  (this->Hash).Hash[9] = '\0';
  (this->Hash).Hash[10] = '\0';
  (this->Hash).Hash[0xb] = '\0';
  (this->Hash).Hash[0xc] = '\0';
  (this->Hash).Hash[0xd] = '\0';
  (this->Hash).Hash[0xe] = '\0';
  (this->Hash).Hash[0xf] = '\0';
  (this->Hash).Hash[0x10] = '\0';
  (this->Hash).Hash[0x11] = '\0';
  (this->Hash).Hash[0x12] = '\0';
  (this->Hash).Hash[0x13] = '\0';
  uVar1 = *(undefined8 *)(pFVar3->Hash + 8);
  *(undefined8 *)(this->Hash).Hash = *(undefined8 *)pFVar3->Hash;
  *(undefined8 *)((this->Hash).Hash + 8) = uVar1;
  *(undefined4 *)((this->Hash).Hash + 0x10) = *(undefined4 *)(pFVar3->Hash + 0x10);
  return this;
}

