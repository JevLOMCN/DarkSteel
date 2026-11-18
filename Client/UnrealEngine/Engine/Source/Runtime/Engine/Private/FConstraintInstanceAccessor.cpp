// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 14822cde0

UScriptStruct * __cdecl FConstraintInstanceAccessor::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FConstraintInstanceAccessor.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FConstraintInstanceAccessor.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConstraintInstanceAccessor,(UObject *)pUVar1,
                         L"ConstraintInstanceAccessor");
  }
  return Z_Registration_Info_UScriptStruct_FConstraintInstanceAccessor.OuterSingleton;
}

// Get @ 148283a40

FConstraintInstance * __thiscall FConstraintInstanceAccessor::Get(FConstraintInstanceAccessor *this)

{
  int iVar1;
  bool bVar2;
  USkeletalMeshComponent *this_00;
  UClass *pUVar3;
  FConstraintInstance *pFVar4;
  UObject *pUVar5;
  
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
  if (bVar2) {
    this_00 = (USkeletalMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    if (this_00 != (USkeletalMeshComponent *)0x0) {
      pUVar3 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        pFVar4 = USkeletalMeshComponent::GetConstraintInstanceByIndex(this_00,this->Index);
        return pFVar4;
      }
    }
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    if (pUVar5 != (UObject *)0x0) {
      pUVar3 = Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return (FConstraintInstance *)&pUVar5[0x11].field_0x10;
      }
    }
  }
  return (FConstraintInstance *)0x0;
}

// Modify @ 148296c00

void __thiscall FConstraintInstanceAccessor::Modify(FConstraintInstanceAccessor *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
  if (bVar1) {
    FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    return;
  }
  return;
}

