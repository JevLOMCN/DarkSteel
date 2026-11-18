// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementRuntime
// Functions: 2

// TTypedElementInterfaceCustomizationRegistry<FTypedElementSelectionCustomization,FTypedElementSelectionCustomization><> @ 14453d2d0

TTypedElementInterfaceCustomizationRegistry<FTypedElementSelectionCustomization,FTypedElementSelectionCustomization>
* __thiscall
TTypedElementInterfaceCustomizationRegistry<FTypedElementSelectionCustomization,FTypedElementSelectionCustomization>
::
TTypedElementInterfaceCustomizationRegistry<FTypedElementSelectionCustomization,FTypedElementSelectionCustomization><>
          (TTypedElementInterfaceCustomizationRegistry<FTypedElementSelectionCustomization,FTypedElementSelectionCustomization>
           *this)

{
  TUniquePtr<FTypedElementSelectionCustomization,TDefaultDelete<FTypedElementSelectionCustomization>_>
  *pTVar1;
  FTypedElementSelectionCustomization *pFVar2;
  FTypedElementSelectionCustomization *pFVar3;
  TUniquePtr<FTypedElementSelectionCustomization,TDefaultDelete<FTypedElementSelectionCustomization>_>
  *pTVar4;
  longlong lVar5;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TTypedElementInterfaceCustomizationRegistry_VFTypedElementSelectionCustomization__V1___6B_
  ;
  pFVar2 = ::operator_new(8);
  pFVar3 = (FTypedElementSelectionCustomization *)0x0;
  if (pFVar2 != (FTypedElementSelectionCustomization *)0x0) {
    *pFVar2 = (FTypedElementSelectionCustomization)&___7FTypedElementSelectionCustomization__6B_;
    pFVar3 = pFVar2;
  }
  (this->DefaultInterfaceCustomization).Ptr = pFVar3;
  lVar5 = 0x1f;
  pTVar1 = this->RegisteredInterfaceCustomizations;
  do {
    pTVar4 = pTVar1;
    pTVar4->Ptr = (FTypedElementSelectionCustomization *)0x0;
    pTVar4[1].Ptr = (FTypedElementSelectionCustomization *)0x0;
    pTVar4[2].Ptr = (FTypedElementSelectionCustomization *)0x0;
    pTVar4[3].Ptr = (FTypedElementSelectionCustomization *)0x0;
    pTVar4[4].Ptr = (FTypedElementSelectionCustomization *)0x0;
    pTVar4[5].Ptr = (FTypedElementSelectionCustomization *)0x0;
    pTVar4[6].Ptr = (FTypedElementSelectionCustomization *)0x0;
    pTVar4[7].Ptr = (FTypedElementSelectionCustomization *)0x0;
    lVar5 = lVar5 + -1;
    pTVar1 = pTVar4 + 8;
  } while (lVar5 != 0);
  pTVar4[8].Ptr = (FTypedElementSelectionCustomization *)0x0;
  pTVar4[9].Ptr = (FTypedElementSelectionCustomization *)0x0;
  pTVar4[10].Ptr = (FTypedElementSelectionCustomization *)0x0;
  pTVar4[0xb].Ptr = (FTypedElementSelectionCustomization *)0x0;
  pTVar4[0xc].Ptr = (FTypedElementSelectionCustomization *)0x0;
  pTVar4[0xd].Ptr = (FTypedElementSelectionCustomization *)0x0;
  return this;
}

// ~TTypedElementInterfaceCustomizationRegistry<FTypedElementSelectionCustomization,FTypedElementSelectionCustomization> @ 14453f310

void __thiscall
TTypedElementInterfaceCustomizationRegistry<FTypedElementSelectionCustomization,FTypedElementSelectionCustomization>
::
~TTypedElementInterfaceCustomizationRegistry<FTypedElementSelectionCustomization,FTypedElementSelectionCustomization>
          (TTypedElementInterfaceCustomizationRegistry<FTypedElementSelectionCustomization,FTypedElementSelectionCustomization>
           *this)

{
  FTypedElementSelectionCustomization *pFVar1;
  longlong lVar2;
  TTypedElementInterfaceCustomizationRegistry<FTypedElementSelectionCustomization,FTypedElementSelectionCustomization>
  *pTVar3;
  
  pTVar3 = this + 1;
  lVar2 = 0xfe;
  do {
    pFVar1 = pTVar3[-1].RegisteredInterfaceCustomizations[0xfd].Ptr;
    pTVar3 = (TTypedElementInterfaceCustomizationRegistry<FTypedElementSelectionCustomization,FTypedElementSelectionCustomization>
              *)(pTVar3[-1].RegisteredInterfaceCustomizations + 0xfd);
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FTypedElementSelectionCustomization *)0x0) {
      (**(code **)*pFVar1)(pFVar1,1);
    }
  } while (lVar2 != 0);
  pFVar1 = (this->DefaultInterfaceCustomization).Ptr;
  if (pFVar1 != (FTypedElementSelectionCustomization *)0x0) {
    (**(code **)*pFVar1)(pFVar1,1);
  }
  return;
}

