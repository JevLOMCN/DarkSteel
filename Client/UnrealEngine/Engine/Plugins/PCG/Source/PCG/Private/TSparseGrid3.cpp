// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// operator= @ 149892190

TSparseGrid3<unsigned_int> * __thiscall
UE::Geometry::TSparseGrid3<unsigned_int>::operator=
          (TSparseGrid3<unsigned_int> *this,TSparseGrid3<unsigned_int> *param_1)

{
  undefined1 *puVar1;
  undefined1 *_Src;
  undefined1 *_Dst;
  void *pvVar2;
  undefined8 uVar3;
  
  if (this != param_1) {
    if (*(void **)&this->Elements != (void *)0x0) {
      FMemory::Free(*(void **)&this->Elements);
    }
    puVar1 = &(param_1->Elements).field_0xc;
    *(undefined8 *)&this->Elements = *(undefined8 *)&param_1->Elements;
    _Src = &(param_1->Elements).field_0x10;
    _Dst = &(this->Elements).field_0x10;
    *(undefined8 *)&param_1->Elements = 0;
    *(undefined4 *)&(this->Elements).field_0x8 = *(undefined4 *)&(param_1->Elements).field_0x8;
    *(undefined4 *)&(this->Elements).field_0xc = *(undefined4 *)puVar1;
    *(undefined4 *)&(param_1->Elements).field_0x8 = 0;
    *(undefined4 *)puVar1 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->Elements).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar2 = *(void **)&(this->Elements).field_0x20;
      if (pvVar2 != (void *)0x0) {
        FMemory::Free(pvVar2);
      }
      *(undefined8 *)&(this->Elements).field_0x20 = *(undefined8 *)&(param_1->Elements).field_0x20;
      *(undefined8 *)&(param_1->Elements).field_0x20 = 0;
      *(undefined4 *)&(this->Elements).field_0x28 = *(undefined4 *)&(param_1->Elements).field_0x28;
      *(undefined4 *)&(this->Elements).field_0x2c = *(undefined4 *)&(param_1->Elements).field_0x2c;
      *(undefined8 *)&(param_1->Elements).field_0x28 = 0;
    }
    *(undefined4 *)&(this->Elements).field_0x30 = *(undefined4 *)&(param_1->Elements).field_0x30;
    *(undefined4 *)&(this->Elements).field_0x34 = *(undefined4 *)&(param_1->Elements).field_0x34;
    *(undefined4 *)&(param_1->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Elements).field_0x34 = 0;
    if (*(longlong *)&(param_1->Elements).field_0x40 == 0) {
      *(undefined4 *)&(this->Elements).field_0x38 = *(undefined4 *)&(param_1->Elements).field_0x38;
    }
    pvVar2 = *(void **)&(this->Elements).field_0x40;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    *(undefined8 *)&(this->Elements).field_0x40 = *(undefined8 *)&(param_1->Elements).field_0x40;
    *(undefined8 *)&(param_1->Elements).field_0x40 = 0;
    *(undefined4 *)&(this->Elements).field_0x48 = *(undefined4 *)&(param_1->Elements).field_0x48;
    *(undefined4 *)&(param_1->Elements).field_0x48 = 0;
    uVar3 = *(undefined8 *)((longlong)&(param_1->Bounds).Min.field0_0x0 + 8);
    *(undefined8 *)&(this->Bounds).Min.field0_0x0 = *(undefined8 *)&(param_1->Bounds).Min.field0_0x0
    ;
    *(undefined8 *)((longlong)&(this->Bounds).Min.field0_0x0 + 8) = uVar3;
    *(undefined8 *)((longlong)&(this->Bounds).Max.field0_0x0 + 4) =
         *(undefined8 *)((longlong)&(param_1->Bounds).Max.field0_0x0 + 4);
    if (*(int *)&(param_1->Elements).field_0x8 != *(int *)&(param_1->Elements).field_0x34) {
      TSet<TTuple<UE::Geometry::FVector3i,unsigned_int_*>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,unsigned_int_*,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<UE::Geometry::FVector3i,unsigned_int_*>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,unsigned_int_*,0>,FDefaultSetAllocator>
                        *)param_1);
      *(undefined4 *)&(param_1->Elements).field_0x8 = 0;
      if (*(int *)puVar1 < 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,(ForAnyElementType *)param_1,0,(int *)puVar1);
      }
      *(undefined4 *)&(param_1->Elements).field_0x30 = 0xffffffff;
      *(undefined4 *)&(param_1->Elements).field_0x34 = 0;
      *(undefined4 *)&(param_1->Elements).field_0x28 = 0;
    }
    return this;
  }
  return this;
}

