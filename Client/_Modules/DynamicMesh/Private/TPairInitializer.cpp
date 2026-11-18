// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// operator<UE::Geometry::FIndex2i,FInterpCurveVector>_TTuple<UE::Geometry::FIndex2i,FInterpCurveVector> @ 14c6bcff0

TTuple<UE::Geometry::FIndex2i,FInterpCurveVector> * __thiscall
TPairInitializer<UE::Geometry::FIndex2i_&&,FInterpCurveVector_const_&>::
operator<UE::Geometry::FIndex2i,FInterpCurveVector>_TTuple<UE::Geometry::FIndex2i,FInterpCurveVector>
          (TPairInitializer<UE::Geometry::FIndex2i_&&,FInterpCurveVector_const_&> *this,
          TTuple<UE::Geometry::FIndex2i,FInterpCurveVector> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  FInterpCurveVector *pFVar3;
  void *_Src;
  
  pFVar3 = this->Value;
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(FIndex2i_u_0 *)__return_storage_ptr__ = this->Key->field0_0x0;
  *(undefined8 *)puVar1 = 0;
  iVar2 = *(int *)&pFVar3->field_0x8;
  _Src = *(void **)pFVar3;
  *(int *)&__return_storage_ptr__->field_0x10 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x14 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x14);
    memcpy(*(void **)puVar1,_Src,(longlong)iVar2 * 0x58);
  }
  __return_storage_ptr__->field_0x18 = pFVar3->field_0x10;
  *(undefined4 *)&__return_storage_ptr__->field_0x1c = *(undefined4 *)&pFVar3->field_0x14;
  return __return_storage_ptr__;
}

