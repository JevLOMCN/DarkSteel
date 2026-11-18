// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// StaticStruct @ 14a49bbc0

UScriptStruct * __cdecl FRigUnit_TransformConstraint_WorkData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_TransformConstraint_WorkData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_TransformConstraint_WorkData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData,
                         (UObject *)pUVar1,L"RigUnit_TransformConstraint_WorkData");
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_TransformConstraint_WorkData.OuterSingleton;
}

// operator= @ 14a51ae50

FRigUnit_TransformConstraint_WorkData * __thiscall
FRigUnit_TransformConstraint_WorkData::operator=
          (FRigUnit_TransformConstraint_WorkData *this,
          FRigUnit_TransformConstraint_WorkData *param_1)

{
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *this_00;
  undefined1 *puVar1;
  undefined1 *this_01;
  int iVar2;
  
  TArray<FConstraintData,TSizedDefaultAllocator<32>_>::operator=
            (&this->ConstraintData,&param_1->ConstraintData);
  this_00 = &this->ConstraintDataToTargets;
  if (this_00 != &param_1->ConstraintDataToTargets) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->ConstraintDataToTargets).field_0x38,
               (int *)&(this->ConstraintDataToTargets).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->ConstraintDataToTargets).field_0x38,
               *(int *)&(param_1->ConstraintDataToTargets).field_0x48);
    iVar2 = *(int *)&(param_1->ConstraintDataToTargets).field_0x8;
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_00,iVar2);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar2,(ForAnyElementType *)this_00,
               (int *)&(this->ConstraintDataToTargets).field_0x8,
               (int *)&(this->ConstraintDataToTargets).field_0xc);
    puVar1 = &(param_1->ConstraintDataToTargets).field_0x10;
    this_01 = &(this->ConstraintDataToTargets).field_0x10;
    *(undefined4 *)&(this->ConstraintDataToTargets).field_0x30 =
         *(undefined4 *)&(param_1->ConstraintDataToTargets).field_0x30;
    *(undefined4 *)&(this->ConstraintDataToTargets).field_0x34 =
         *(undefined4 *)&(param_1->ConstraintDataToTargets).field_0x34;
    if (this_01 != puVar1) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)this_01,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
    }
    if (iVar2 != 0) {
      memcpy(*(void **)this_00,*(void **)&param_1->ConstraintDataToTargets,(longlong)iVar2 << 4);
    }
    return this;
  }
  return this;
}

