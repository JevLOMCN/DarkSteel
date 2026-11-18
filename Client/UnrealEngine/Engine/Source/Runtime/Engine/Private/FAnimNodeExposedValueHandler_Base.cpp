// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 147515e80

UScriptStruct * __cdecl FAnimNodeExposedValueHandler_Base::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNodeExposedValueHandler_Base.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimNodeExposedValueHandler_Base.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_Base,
                         (UObject *)pUVar1,L"AnimNodeExposedValueHandler_Base");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNodeExposedValueHandler_Base.OuterSingleton;
}

// Initialize @ 147515ec0

void __thiscall
FAnimNodeExposedValueHandler_Base::Initialize
          (FAnimNodeExposedValueHandler_Base *this,UClass *param_1)

{
  code *pcVar1;
  bool bVar2;
  UFunction *pUVar3;
  
  if (this->BoundFunction == (FName)0x0) {
    (this->Function).field0_0x0.DebugPtr = (UFunction *)0x0;
    return;
  }
  if ((this->Function).field0_0x0.DebugPtr == (UFunction *)0x0) {
    pUVar3 = UClass::FindFunctionByName(param_1,this->BoundFunction,IncludeSuper);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar3 == (UFunction *)0x0)) {
      (this->Function).field0_0x0.DebugPtr = pUVar3;
      if ((pUVar3 == (UFunction *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Function",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\ExposedValueHandler.cpp"
                             ,0x3e,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
      (this->Function).field0_0x0.DebugPtr = pUVar3;
    }
  }
  return;
}

// Execute @ 147515fe0

void __thiscall
FAnimNodeExposedValueHandler_Base::Execute
          (FAnimNodeExposedValueHandler_Base *this,FAnimationBaseContext *param_1)

{
  UFunction *pUVar1;
  UObject *pUVar2;
  
  pUVar1 = (this->Function).field0_0x0.DebugPtr;
  if (pUVar1 != (UFunction *)0x0) {
    pUVar2 = param_1->AnimInstanceProxy->AnimInstanceObject;
                    /* WARNING: Could not recover jumptable at 0x000147515ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 0x260))(pUVar2,pUVar1,0);
    return;
  }
  return;
}

