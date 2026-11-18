// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 1

// TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_> @ 14e6b5290

TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_> * __thiscall
TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>::
TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>
          (TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_> *this,
          TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_> *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  void *_Src;
  
  puVar1 = &this->field_0x8;
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined8 *)puVar1 = 0;
  iVar2 = *(int *)&param_1->field_0x10;
  _Src = *(void **)&param_1->field_0x8;
  *(int *)&this->field_0x10 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&this->field_0x14 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar2,0,(ForAnyElementType *)puVar1,iVar2,(int *)&this->field_0x14);
    memcpy(*(void **)puVar1,_Src,(longlong)iVar2 << 2);
  }
  return this;
}

