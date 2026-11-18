// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 3

// operator* @ 14a7b4b60

UClass * __thiscall TSubclassOf<UCommonTextStyle>::operator*(TSubclassOf<UCommonTextStyle> *this)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  
  pUVar2 = (this->Class).field0_0x0.DebugPtr;
  if (pUVar2 != (UClass *)0x0) {
    pUVar4 = UCommonTextStyle::StaticClass();
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

// GetDefaultObject @ 14a7e19b0

UCommonTextStyle * __thiscall
TSubclassOf<UCommonTextStyle>::GetDefaultObject(TSubclassOf<UCommonTextStyle> *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UCommonTextStyle *pUVar5;
  
  pUVar4 = (this->Class).field0_0x0.DebugPtr;
  if (pUVar4 == (UClass *)0x0) {
    return (UCommonTextStyle *)0x0;
  }
  if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar4);
  }
  pUVar5 = (UCommonTextStyle *)(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar5 != (UCommonTextStyle *)0x0) {
    pUVar4 = UCommonTextStyle::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      return pUVar5;
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result && Result->IsA(T::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Templates\\SubclassOf.h"
                     ,0x93,L"");
  if (!bVar3) {
    return pUVar5;
  }
  pcVar2 = (code *)swi(3);
  pUVar5 = (UCommonTextStyle *)(*pcVar2)();
  return pUVar5;
}

// GetDefaultObject @ 14a7e1a40

UCommonUIHoldData * __thiscall
TSubclassOf<UCommonUIHoldData>::GetDefaultObject(TSubclassOf<UCommonUIHoldData> *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UCommonUIHoldData *pUVar5;
  
  pUVar4 = (this->Class).field0_0x0.DebugPtr;
  if (pUVar4 == (UClass *)0x0) {
    return (UCommonUIHoldData *)0x0;
  }
  if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar4);
  }
  pUVar5 = (UCommonUIHoldData *)(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar5 != (UCommonUIHoldData *)0x0) {
    pUVar4 = Z_Construct_UClass_UCommonUIHoldData_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      return pUVar5;
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result && Result->IsA(T::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Templates\\SubclassOf.h"
                     ,0x93,L"");
  if (!bVar3) {
    return pUVar5;
  }
  pcVar2 = (code *)swi(3);
  pUVar5 = (UCommonUIHoldData *)(*pcVar2)();
  return pUVar5;
}

