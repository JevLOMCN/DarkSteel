// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 2

// StaticStruct @ 14a787c20

UScriptStruct * __cdecl FCommonRegisteredTabInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCommonRegisteredTabInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CommonUI();
    Z_Registration_Info_UScriptStruct_FCommonRegisteredTabInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCommonRegisteredTabInfo,(UObject *)pUVar1,
                         L"CommonRegisteredTabInfo");
  }
  return Z_Registration_Info_UScriptStruct_FCommonRegisteredTabInfo.OuterSingleton;
}

// FCommonRegisteredTabInfo @ 14a7aa560

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FCommonRegisteredTabInfo * __thiscall
FCommonRegisteredTabInfo::FCommonRegisteredTabInfo
          (FCommonRegisteredTabInfo *this,FCommonRegisteredTabInfo *param_1)

{
  UClass *pUVar1;
  UCommonButtonBase *pUVar2;
  UWidget *pUVar3;
  
  this->TabIndex = param_1->TabIndex;
  pUVar1 = (param_1->TabButtonClass).Class.field0_0x0.DebugPtr;
  (this->TabButtonClass).Class.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  pUVar2 = (param_1->TabButton).field0_0x0.DebugPtr;
  (this->TabButton).field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UCommonButtonBase *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  pUVar3 = (param_1->ContentInstance).field0_0x0.DebugPtr;
  (this->ContentInstance).field0_0x0.DebugPtr = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  return this;
}

