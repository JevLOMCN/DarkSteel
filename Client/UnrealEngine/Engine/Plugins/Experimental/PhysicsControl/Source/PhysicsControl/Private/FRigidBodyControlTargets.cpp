// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsControl
// Functions: 2

// StaticStruct @ 14d9b23c0

UScriptStruct * __cdecl FRigidBodyControlTargets::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigidBodyControlTargets.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsControl();
    Z_Registration_Info_UScriptStruct_FRigidBodyControlTargets.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigidBodyControlTargets,(UObject *)pUVar1,
                         L"RigidBodyControlTargets");
  }
  return Z_Registration_Info_UScriptStruct_FRigidBodyControlTargets.OuterSingleton;
}

// operator= @ 14d9c31b0

FRigidBodyControlTargets * __thiscall
FRigidBodyControlTargets::operator=
          (FRigidBodyControlTargets *this,FRigidBodyControlTargets *param_1)

{
  undefined1 *puVar1;
  undefined1 *this_00;
  int iVar2;
  
  if (this != param_1) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->Targets).field_0x38,
               (int *)&(this->Targets).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->Targets).field_0x38,
               *(int *)&(param_1->Targets).field_0x48);
    iVar2 = *(int *)&(param_1->Targets).field_0x8;
    TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyControlTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyControlTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this,iVar2);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,iVar2,(ForAnyElementType *)this,(int *)&(this->Targets).field_0x8,
               (int *)&(this->Targets).field_0xc);
    puVar1 = &(param_1->Targets).field_0x10;
    this_00 = &(this->Targets).field_0x10;
    *(undefined4 *)&(this->Targets).field_0x30 = *(undefined4 *)&(param_1->Targets).field_0x30;
    *(undefined4 *)&(this->Targets).field_0x34 = *(undefined4 *)&(param_1->Targets).field_0x34;
    if (this_00 != puVar1) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)this_00,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
    }
    if (iVar2 != 0) {
      memcpy(*(void **)&this->Targets,*(void **)&param_1->Targets,(longlong)iVar2 << 6);
    }
    return this;
  }
  return this;
}

