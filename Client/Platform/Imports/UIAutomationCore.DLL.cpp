// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Imports
// Functions: 5

// UiaClientsAreListening @ 15015aab6

BOOL __stdcall UiaClientsAreListening(void)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015aab6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UiaClientsAreListening();
  return BVar1;
}

// UiaRaiseAutomationPropertyChangedEvent @ 15015aac2

HRESULT __stdcall
UiaRaiseAutomationPropertyChangedEvent
          (IRawElementProviderSimple *pProvider,PROPERTYID id,VARIANT *oldValue,VARIANT *newValue)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015aac2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = UiaRaiseAutomationPropertyChangedEvent(pProvider,id,oldValue,newValue);
  return HVar1;
}

// UiaRaiseAutomationEvent @ 15015aace

HRESULT __stdcall UiaRaiseAutomationEvent(IRawElementProviderSimple *pProvider,EVENTID id)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015aace. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = UiaRaiseAutomationEvent(pProvider,id);
  return HVar1;
}

// UiaReturnRawElementProvider @ 15015aada

LRESULT __stdcall
UiaReturnRawElementProvider(HWND hwnd,WPARAM wParam,LPARAM lParam,IRawElementProviderSimple *el)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015aada. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = UiaReturnRawElementProvider(hwnd,wParam,lParam,el);
  return LVar1;
}

// UiaHostProviderFromHwnd @ 15015aae6

HRESULT __stdcall UiaHostProviderFromHwnd(HWND hwnd,IRawElementProviderSimple **pProvider)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015aae6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = UiaHostProviderFromHwnd(hwnd,pProvider);
  return HVar1;
}

