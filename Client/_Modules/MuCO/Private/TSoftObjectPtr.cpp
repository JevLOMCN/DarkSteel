// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 6

// Get @ 14abd9360

UStreamableRenderAsset * __thiscall
TSoftObjectPtr<UStreamableRenderAsset_const_>::Get
          (TSoftObjectPtr<UStreamableRenderAsset_const_> *this)

{
  int iVar1;
  UStreamableRenderAsset *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UStreamableRenderAsset *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 != (UStreamableRenderAsset *)0x0) {
    pUVar3 = Z_Construct_UClass_UStreamableRenderAsset_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UStreamableRenderAsset *)0x0;
}

// Get @ 14abd93b0

UTexture * __thiscall TSoftObjectPtr<UTexture_const_>::Get(TSoftObjectPtr<UTexture_const_> *this)

{
  int iVar1;
  UTexture *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UTexture *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 != (UTexture *)0x0) {
    pUVar3 = Z_Construct_UClass_UTexture_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UTexture *)0x0;
}

// Get @ 14abd9400

UPhysicsAsset * __thiscall TSoftObjectPtr<UPhysicsAsset>::Get(TSoftObjectPtr<UPhysicsAsset> *this)

{
  int iVar1;
  UPhysicsAsset *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UPhysicsAsset *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 != (UPhysicsAsset *)0x0) {
    pUVar3 = Z_Construct_UClass_UPhysicsAsset_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UPhysicsAsset *)0x0;
}

// Get @ 14abd9450

USkeleton * __thiscall TSoftObjectPtr<USkeleton>::Get(TSoftObjectPtr<USkeleton> *this)

{
  int iVar1;
  USkeleton *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (USkeleton *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 != (USkeleton *)0x0) {
    pUVar3 = Z_Construct_UClass_USkeleton_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (USkeleton *)0x0;
}

// Get @ 14abd94a0

UStreamableRenderAsset * __thiscall
TSoftObjectPtr<UStreamableRenderAsset>::Get(TSoftObjectPtr<UStreamableRenderAsset> *this)

{
  int iVar1;
  UStreamableRenderAsset *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UStreamableRenderAsset *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 != (UStreamableRenderAsset *)0x0) {
    pUVar3 = Z_Construct_UClass_UStreamableRenderAsset_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UStreamableRenderAsset *)0x0;
}

// Get @ 14ac1d100

UCustomizableObjectResourceDataContainer * __thiscall
TSoftObjectPtr<UCustomizableObjectResourceDataContainer>::Get
          (TSoftObjectPtr<UCustomizableObjectResourceDataContainer> *this)

{
  int iVar1;
  UCustomizableObjectResourceDataContainer *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UCustomizableObjectResourceDataContainer *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 != (UCustomizableObjectResourceDataContainer *)0x0) {
    pUVar3 = Z_Construct_UClass_UCustomizableObjectResourceDataContainer_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UCustomizableObjectResourceDataContainer *)0x0;
}

