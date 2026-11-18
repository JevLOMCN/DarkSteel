// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 1

// operator<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue>_TTuple<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue> @ 145bd6530

TTuple<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue> * __thiscall
TKeyInitializer<FOpenGLCompiledShaderKey_const_&>::
operator<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue>_TTuple<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue>
          (TKeyInitializer<FOpenGLCompiledShaderKey_const_&> *this,
          TTuple<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue> *__return_storage_ptr__)

{
  uint uVar1;
  FOpenGLCompiledShaderKey *pFVar2;
  uint uVar3;
  FNameEntryId FVar4;
  undefined4 extraout_var;
  undefined1 local_res8 [8];
  
  FVar4 = FNameEntryId::FromValidEName((EName)local_res8);
  uVar1 = *(uint *)CONCAT44(extraout_var,FVar4.Value);
  pFVar2 = this->Key;
  uVar3 = pFVar2->CodeSize;
  *(uint *)&__return_storage_ptr__->field_0x0 = pFVar2->TypeEnum;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar3;
  *(uint *)&__return_storage_ptr__->field_0x8 = pFVar2->CodeCRC;
  *(ulonglong *)&__return_storage_ptr__->field_0x10 = (ulonglong)uVar1;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  LOCK();
  UNLOCK();
  LOCK();
  UNLOCK();
  return __return_storage_ptr__;
}

