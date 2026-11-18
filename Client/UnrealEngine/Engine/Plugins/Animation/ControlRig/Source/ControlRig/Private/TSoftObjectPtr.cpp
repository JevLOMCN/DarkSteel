// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 5

// Get @ 14a25d930

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UControlRig * __thiscall TSoftObjectPtr<UControlRig>::Get(TSoftObjectPtr<UControlRig> *this)

{
  int iVar1;
  UControlRig *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UControlRig *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 != (UControlRig *)0x0) {
    pUVar3 = UControlRig::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UControlRig *)0x0;
}

// Get @ 14a25d980

UControlRigShapeLibrary * __thiscall
TSoftObjectPtr<UControlRigShapeLibrary>::Get(TSoftObjectPtr<UControlRigShapeLibrary> *this)

{
  int iVar1;
  UControlRigShapeLibrary *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UControlRigShapeLibrary *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 != (UControlRigShapeLibrary *)0x0) {
    pUVar3 = UControlRigShapeLibrary::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UControlRigShapeLibrary *)0x0;
}

// Get @ 14a25d9d0

UModularRig * __thiscall TSoftObjectPtr<UModularRig>::Get(TSoftObjectPtr<UModularRig> *this)

{
  int iVar1;
  UModularRig *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UModularRig *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 != (UModularRig *)0x0) {
    pUVar3 = UModularRig::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UModularRig *)0x0;
}

// Get @ 14a530400

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

URigHierarchy * __thiscall TSoftObjectPtr<URigHierarchy>::Get(TSoftObjectPtr<URigHierarchy> *this)

{
  int iVar1;
  URigHierarchy *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (URigHierarchy *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 != (URigHierarchy *)0x0) {
    pUVar3 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (URigHierarchy *)0x0;
}

// Get @ 14a530450

URigHierarchyController * __thiscall
TSoftObjectPtr<URigHierarchyController>::Get(TSoftObjectPtr<URigHierarchyController> *this)

{
  int iVar1;
  URigHierarchyController *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (URigHierarchyController *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 != (URigHierarchyController *)0x0) {
    pUVar3 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (URigHierarchyController *)0x0;
}

