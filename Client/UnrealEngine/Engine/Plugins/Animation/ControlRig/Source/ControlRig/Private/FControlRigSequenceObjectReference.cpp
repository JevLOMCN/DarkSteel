// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// StaticStruct @ 14a3821e0

UScriptStruct * __cdecl FControlRigSequenceObjectReference::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FControlRigSequenceObjectReference.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FControlRigSequenceObjectReference.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FControlRigSequenceObjectReference,
                         (UObject *)pUVar1,L"ControlRigSequenceObjectReference");
  }
  return Z_Registration_Info_UScriptStruct_FControlRigSequenceObjectReference.OuterSingleton;
}

// Create @ 14a3ffff0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FControlRigSequenceObjectReference __cdecl
FControlRigSequenceObjectReference::Create(UControlRig *param_1)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  FControlRigSequenceObjectReference FVar4;
  longlong in_RDX;
  
  if (in_RDX == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InControlRig",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Sequencer\\ControlRigSequenceObjectReference.cpp"
                       ,10,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4.ControlRigClass.Class.field0_0x0 = (TSubclassOf<UControlRig>)(*pcVar2)();
      return (FControlRigSequenceObjectReference)FVar4.ControlRigClass.Class.field0_0x0;
    }
  }
  param_1->_padding_ = 0;
  pUVar1 = *(UObject **)(in_RDX + 0x10);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  param_1->_padding_ = (longlong)pUVar1;
  return (TSubclassOf<UControlRig>)(TSubclassOf<UControlRig>)param_1;
}

