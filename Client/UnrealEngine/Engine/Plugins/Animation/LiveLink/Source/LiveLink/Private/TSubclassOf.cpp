// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 4

// operator= @ 14d0183c0

TSubclassOf<ULiveLinkRole> * __thiscall
TSubclassOf<ULiveLinkRole>::operator=
          (TSubclassOf<ULiveLinkRole> *this,TSubclassOf<ULiveLinkRole> *param_1)

{
  UClass *pUVar1;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (param_1->Class).field0_0x0.DebugPtr, pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->Class).field0_0x0 = (param_1->Class).field0_0x0;
  return this;
}

// operator* @ 14d018900

UClass * __thiscall
TSubclassOf<ULiveLinkFrameInterpolationProcessor>::operator*
          (TSubclassOf<ULiveLinkFrameInterpolationProcessor> *this)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  
  pUVar2 = (this->Class).field0_0x0.DebugPtr;
  if (pUVar2 != (UClass *)0x0) {
    pUVar4 = Z_Construct_UClass_ULiveLinkFrameInterpolationProcessor_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return (this->Class).field0_0x0.DebugPtr;
      }
    }
  }
  return (UClass *)0x0;
}

// operator* @ 14d018970

UClass * __thiscall TSubclassOf<ULiveLinkRole>::operator*(TSubclassOf<ULiveLinkRole> *this)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  
  pUVar2 = (this->Class).field0_0x0.DebugPtr;
  if (pUVar2 != (UClass *)0x0) {
    pUVar4 = Z_Construct_UClass_ULiveLinkRole_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return (this->Class).field0_0x0.DebugPtr;
      }
    }
  }
  return (UClass *)0x0;
}

// GetDefaultObject @ 14d04b080

ULiveLinkRole * __thiscall
TSubclassOf<ULiveLinkRole>::GetDefaultObject(TSubclassOf<ULiveLinkRole> *this)

{
  int iVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  ULiveLinkRole *pUVar6;
  
  pUVar5 = (this->Class).field0_0x0.DebugPtr;
  if (pUVar5 == (UClass *)0x0) {
    return (ULiveLinkRole *)0x0;
  }
  if ((pUVar5->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar5);
  }
  pUVar2 = (pUVar5->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar2 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_ULiveLinkRole_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      return (ULiveLinkRole *)pUVar2;
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result && Result->IsA(T::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Templates\\SubclassOf.h"
                     ,0x93,L"");
  if (!bVar4) {
    return (ULiveLinkRole *)pUVar2;
  }
  pcVar3 = (code *)swi(3);
  pUVar6 = (ULiveLinkRole *)(*pcVar3)();
  return pUVar6;
}

