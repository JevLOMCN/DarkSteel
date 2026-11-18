// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsCore
// Functions: 3

// Emplace<Chaos::TGeometryParticle<double,3>_*_const_&,TArray<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>_const_&> @ 144138fc0

TArray<TTuple<Chaos::FPerShapeData_*,ECollisionQueryHitType>,TSizedDefaultAllocator<32>_> *
__thiscall
TMapBase<Chaos::TGeometryParticle<double,3>_*,TArray<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticle<double,3>_*,TArray<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>,0>_>
::
Emplace<Chaos::TGeometryParticle<double,3>_*_const_&,TArray<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>_const_&>
          (void *this,TGeometryParticle<double,3> **param_1,
          TArray<TTuple<Chaos::FPerShapeData_*,ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar4 = *(int *)((longlong)this + 0x30);
    iVar2 = *(int *)((longlong)iVar4 * 0x20 + 4 + *(longlong *)this);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    *(int *)((longlong)this + 0x30) = iVar2;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *(longlong *)this) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_28,iVar4);
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<Chaos::TGeometryParticle<double,3>_*,TArray<TTuple<Chaos::FPerShapeData_*,ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>_>_>
       *)0x0) {
    *(TGeometryParticle<double,3> **)local_28.Pointer = *param_1;
    UE::Core::Private::Tuple::
    TTupleBaseElement<TArray<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>,1,2>
    ::
    TTupleBaseElement<TArray<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>,1,2><TArray<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>_const_&>
              ((undefined1 *)((longlong)local_28.Pointer + 8),ForwardingConstructor,param_2);
    *(undefined4 *)((longlong)local_28.Pointer + 0x18) = 0xffffffff;
  }
  local_res8[0] = local_28.Index;
  uVar5 = ((uint)(*(ulonglong *)local_28.Pointer >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)local_28.Pointer >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  bVar3 = TSet<TTuple<Chaos::TGeometryParticle<double,3>_*,TArray<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticle<double,3>_*,TArray<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(this,uVar5,local_28.Pointer,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<Chaos::TGeometryParticle<double,3>_*,TArray<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticle<double,3>_*,TArray<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(this,uVar5,local_28.Pointer,local_res8[0]);
  }
  return (TArray<TTuple<Chaos::FPerShapeData_*,ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>
          *)(*(longlong *)this + 8 + lVar6 * 0x20);
}

// Emplace<Chaos::TGeometryParticle<double,3>_*,TArray<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>_const_&> @ 144139110

TArray<TTuple<Chaos::FPerShapeData_*,ECollisionQueryHitType>,TSizedDefaultAllocator<32>_> *
__thiscall
TMapBase<Chaos::TGeometryParticle<double,3>_*,TArray<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticle<double,3>_*,TArray<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>,0>_>
::
Emplace<Chaos::TGeometryParticle<double,3>_*,TArray<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>_const_&>
          (void *this,TGeometryParticle<double,3> **param_1,
          TArray<TTuple<Chaos::FPerShapeData_*,ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar4 = *(int *)((longlong)this + 0x30);
    iVar2 = *(int *)((longlong)iVar4 * 0x20 + 4 + *(longlong *)this);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    *(int *)((longlong)this + 0x30) = iVar2;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *(longlong *)this) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_28,iVar4);
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<Chaos::TGeometryParticle<double,3>_*,TArray<TTuple<Chaos::FPerShapeData_*,ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>_>_>
       *)0x0) {
    *(TGeometryParticle<double,3> **)local_28.Pointer = *param_1;
    UE::Core::Private::Tuple::
    TTupleBaseElement<TArray<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>,1,2>
    ::
    TTupleBaseElement<TArray<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>,1,2><TArray<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>_const_&>
              ((undefined1 *)((longlong)local_28.Pointer + 8),ForwardingConstructor,param_2);
    *(undefined4 *)((longlong)local_28.Pointer + 0x18) = 0xffffffff;
  }
  local_res8[0] = local_28.Index;
  uVar5 = ((uint)(*(ulonglong *)local_28.Pointer >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)local_28.Pointer >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  bVar3 = TSet<TTuple<Chaos::TGeometryParticle<double,3>_*,TArray<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticle<double,3>_*,TArray<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(this,uVar5,local_28.Pointer,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<Chaos::TGeometryParticle<double,3>_*,TArray<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticle<double,3>_*,TArray<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(this,uVar5,local_28.Pointer,local_res8[0]);
  }
  return (TArray<TTuple<Chaos::FPerShapeData_*,ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>
          *)(*(longlong *)this + 8 + lVar6 * 0x20);
}

// Find @ 1441acae0

TArray<TTuple<Chaos::FPerShapeData_*,ECollisionQueryHitType>,TSizedDefaultAllocator<32>_> *
__thiscall
TMapBase<Chaos::TGeometryParticle<double,3>_*,TArray<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticle<double,3>_*,TArray<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>,0>_>
::Find(void *this,TGeometryParticle<double,3> *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  TArray<TTuple<Chaos::FPerShapeData_*,ECollisionQueryHitType>,TSizedDefaultAllocator<32>_> *pTVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar3 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar3 = (longlong)this + 0x38;
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)((longlong)this + 0x48) - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)this);
        if ((TGeometryParticle<double,3> *)*plVar2 == param_1) {
          pTVar4 = (TArray<TTuple<Chaos::FPerShapeData_*,ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>
                    *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TArray<TTuple<Chaos::FPerShapeData_*,ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>
                      *)(plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TArray<TTuple<Chaos::FPerShapeData_*,ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>
          *)0x0;
}

