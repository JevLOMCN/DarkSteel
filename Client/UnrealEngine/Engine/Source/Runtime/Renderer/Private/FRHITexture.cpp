// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// GetSizeXYZ @ 1449e1970

TIntVector3<int> * __thiscall
FRHITexture::GetSizeXYZ(FRHITexture *this,TIntVector3<int> *__return_storage_ptr__)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(this->_padding_ + 0x20))();
  cVar1 = *(char *)(lVar2 + 0x32);
  if (cVar1 != '\0') {
    if (cVar1 != '\x01') {
      if (cVar1 == '\x02') {
        (__return_storage_ptr__->field0_0x0)._s_0.X = *(int *)(lVar2 + 0x24);
        (__return_storage_ptr__->field0_0x0)._s_0.Y = *(int *)(lVar2 + 0x28);
        *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) =
             (uint)*(ushort *)(lVar2 + 0x2c);
        return __return_storage_ptr__;
      }
      if (cVar1 == '\x03') goto LAB_1449e19e5;
      if (cVar1 != '\x04') {
        *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = 0;
        return __return_storage_ptr__;
      }
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = *(int *)(lVar2 + 0x24);
    (__return_storage_ptr__->field0_0x0)._s_0.Y = *(int *)(lVar2 + 0x28);
    *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (uint)*(ushort *)(lVar2 + 0x2e);
    return __return_storage_ptr__;
  }
LAB_1449e19e5:
  (__return_storage_ptr__->field0_0x0)._s_0.X = *(int *)(lVar2 + 0x24);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = *(int *)(lVar2 + 0x28);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 1;
  return __return_storage_ptr__;
}

