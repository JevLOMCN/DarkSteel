// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 2

// GetDefaultObject<UNavigationSystemV1> @ 146d6bf70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UNavigationSystemV1 * __thiscall UClass::GetDefaultObject<UNavigationSystemV1>(UClass *this)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UNavigationSystemV1 *pUVar6;
  
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    InternalCreateDefaultObjectWrapper(this);
  }
  pUVar6 = (UNavigationSystemV1 *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar5 = UNavigationSystemV1::StaticClass();
  lVar2 = *(longlong *)&pUVar6->field_0x10;
  iVar1 = (int)pUVar5->_padding_;
  if ((*(int *)(lVar2 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar5->_padding_)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ret->IsA(T::StaticClass())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0x1181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (UNavigationSystemV1 *)(*pcVar3)();
      return pUVar6;
    }
  }
  return pUVar6;
}

// GetDefaultObject<UNavArea> @ 146dcf0b0

UNavArea * __thiscall UClass::GetDefaultObject<UNavArea>(UClass *this)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UNavArea *pUVar6;
  
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    InternalCreateDefaultObjectWrapper(this);
  }
  pUVar6 = (UNavArea *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar5 = Z_Construct_UClass_UNavArea_NoRegister();
  lVar2 = pUVar6->_padding_;
  iVar1 = (int)pUVar5->_padding_;
  if ((*(int *)(lVar2 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar5->_padding_)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ret->IsA(T::StaticClass())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0x1181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (UNavArea *)(*pcVar3)();
      return pUVar6;
    }
  }
  return pUVar6;
}

