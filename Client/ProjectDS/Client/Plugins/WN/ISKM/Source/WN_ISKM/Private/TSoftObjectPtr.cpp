// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_ISKM
// Functions: 4

// Get @ 14a849ea0

UAnimSequenceBase * __thiscall
TSoftObjectPtr<UAnimSequenceBase>::Get(TSoftObjectPtr<UAnimSequenceBase> *this)

{
  int iVar1;
  UAnimSequenceBase *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UAnimSequenceBase *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 != (UAnimSequenceBase *)0x0) {
    pUVar3 = Z_Construct_UClass_UAnimSequenceBase_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UAnimSequenceBase *)0x0;
}

// Get @ 14a849ef0

UWN_ISKM_Profile * __thiscall
TSoftObjectPtr<UWN_ISKM_Profile>::Get(TSoftObjectPtr<UWN_ISKM_Profile> *this)

{
  int iVar1;
  UWN_ISKM_Profile *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UWN_ISKM_Profile *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 != (UWN_ISKM_Profile *)0x0) {
    pUVar3 = UWN_ISKM_Profile::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UWN_ISKM_Profile *)0x0;
}

// LoadSynchronous @ 14a850240

USkeletalMesh * __thiscall
TSoftObjectPtr<USkeletalMesh>::LoadSynchronous(TSoftObjectPtr<USkeletalMesh> *this)

{
  int iVar1;
  USkeletalMesh *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (USkeletalMesh *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 == (USkeletalMesh *)0x0) {
    if (*(longlong *)&(this->SoftObjectPtr).field_0x8 == 0) {
      return (USkeletalMesh *)0x0;
    }
    FSoftObjectPath::TryLoad
              ((FSoftObjectPath *)&(this->SoftObjectPtr).field_0x8,(FUObjectSerializeContext *)0x0);
    pUVar2 = (USkeletalMesh *)
             TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)this);
  }
  if (pUVar2 != (USkeletalMesh *)0x0) {
    pUVar3 = Z_Construct_UClass_USkeletalMesh_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (USkeletalMesh *)0x0;
}

// LoadSynchronous @ 14a8502c0

UWN_ISKM_Profile * __thiscall
TSoftObjectPtr<UWN_ISKM_Profile>::LoadSynchronous(TSoftObjectPtr<UWN_ISKM_Profile> *this)

{
  int iVar1;
  UWN_ISKM_Profile *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UWN_ISKM_Profile *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 == (UWN_ISKM_Profile *)0x0) {
    if (*(longlong *)&(this->SoftObjectPtr).field_0x8 == 0) {
      return (UWN_ISKM_Profile *)0x0;
    }
    FSoftObjectPath::TryLoad
              ((FSoftObjectPath *)&(this->SoftObjectPtr).field_0x8,(FUObjectSerializeContext *)0x0);
    pUVar2 = (UWN_ISKM_Profile *)
             TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)this);
  }
  if (pUVar2 != (UWN_ISKM_Profile *)0x0) {
    pUVar3 = UWN_ISKM_Profile::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UWN_ISKM_Profile *)0x0;
}

