// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// CountBytes @ 1418d2d10

void __thiscall
FObjectFullNameAndThumbnail::CountBytes(FObjectFullNameAndThumbnail *this,FArchive *param_1)

{
  FObjectThumbnail *pFVar1;
  
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,0x18,0x18);
  pFVar1 = this->ObjectThumbnail;
  if (pFVar1 != (FObjectThumbnail *)0x0) {
    (**(code **)(*(longlong *)param_1 + 0x10))(param_1,0x30,0x30);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)(pFVar1->CompressedImageData).ArrayNum,
               (longlong)(pFVar1->CompressedImageData).ArrayMax);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)(pFVar1->ImageData).ArrayNum,(longlong)(pFVar1->ImageData).ArrayMax
              );
  }
  return;
}

