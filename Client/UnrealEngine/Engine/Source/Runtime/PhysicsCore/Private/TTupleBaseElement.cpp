// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsCore
// Functions: 1

// TTupleBaseElement<TArray<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>,1,2><TArray<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>_const_&> @ 144135300

TTupleBaseElement<TArray<TTuple<Chaos::FPerShapeData_*,ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>,1,2>
* __thiscall
UE::Core::Private::Tuple::
TTupleBaseElement<TArray<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>,1,2>
::
TTupleBaseElement<TArray<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>,1,2><TArray<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>_const_&>
          (void *this,EForwardingConstructor param_1,
          TArray<TTuple<Chaos::FPerShapeData_*,ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = param_2->ArrayNum;
  _Src = (param_2->AllocatorInstance).Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
    return this;
  }
  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
  memcpy(*(void **)this,_Src,(longlong)iVar1 << 4);
  return this;
}

