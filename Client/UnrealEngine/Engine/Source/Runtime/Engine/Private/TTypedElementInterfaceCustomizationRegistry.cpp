// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// TTypedElementInterfaceCustomizationRegistry<FTypedElementCommonActionsCustomization,FTypedElementCommonActionsCustomization><> @ 147b2c940

TTypedElementInterfaceCustomizationRegistry<FTypedElementCommonActionsCustomization,FTypedElementCommonActionsCustomization>
* __thiscall
TTypedElementInterfaceCustomizationRegistry<FTypedElementCommonActionsCustomization,FTypedElementCommonActionsCustomization>
::
TTypedElementInterfaceCustomizationRegistry<FTypedElementCommonActionsCustomization,FTypedElementCommonActionsCustomization><>
          (TTypedElementInterfaceCustomizationRegistry<FTypedElementCommonActionsCustomization,FTypedElementCommonActionsCustomization>
           *this)

{
  TUniquePtr<FTypedElementCommonActionsCustomization,TDefaultDelete<FTypedElementCommonActionsCustomization>_>
  *pTVar1;
  FTypedElementCommonActionsCustomization *pFVar2;
  FTypedElementCommonActionsCustomization *pFVar3;
  TUniquePtr<FTypedElementCommonActionsCustomization,TDefaultDelete<FTypedElementCommonActionsCustomization>_>
  *pTVar4;
  longlong lVar5;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TTypedElementInterfaceCustomizationRegistry_VFTypedElementCommonActionsCustomization__V1___6B_
  ;
  pFVar2 = ::operator_new(8);
  pFVar3 = (FTypedElementCommonActionsCustomization *)0x0;
  if (pFVar2 != (FTypedElementCommonActionsCustomization *)0x0) {
    *pFVar2 = (FTypedElementCommonActionsCustomization)
              &___7FTypedElementCommonActionsCustomization__6B_;
    pFVar3 = pFVar2;
  }
  (this->DefaultInterfaceCustomization).Ptr = pFVar3;
  lVar5 = 0x1f;
  pTVar1 = this->RegisteredInterfaceCustomizations;
  do {
    pTVar4 = pTVar1;
    pTVar4->Ptr = (FTypedElementCommonActionsCustomization *)0x0;
    pTVar4[1].Ptr = (FTypedElementCommonActionsCustomization *)0x0;
    pTVar4[2].Ptr = (FTypedElementCommonActionsCustomization *)0x0;
    pTVar4[3].Ptr = (FTypedElementCommonActionsCustomization *)0x0;
    pTVar4[4].Ptr = (FTypedElementCommonActionsCustomization *)0x0;
    pTVar4[5].Ptr = (FTypedElementCommonActionsCustomization *)0x0;
    pTVar4[6].Ptr = (FTypedElementCommonActionsCustomization *)0x0;
    pTVar4[7].Ptr = (FTypedElementCommonActionsCustomization *)0x0;
    lVar5 = lVar5 + -1;
    pTVar1 = pTVar4 + 8;
  } while (lVar5 != 0);
  pTVar4[8].Ptr = (FTypedElementCommonActionsCustomization *)0x0;
  pTVar4[9].Ptr = (FTypedElementCommonActionsCustomization *)0x0;
  pTVar4[10].Ptr = (FTypedElementCommonActionsCustomization *)0x0;
  pTVar4[0xb].Ptr = (FTypedElementCommonActionsCustomization *)0x0;
  pTVar4[0xc].Ptr = (FTypedElementCommonActionsCustomization *)0x0;
  pTVar4[0xd].Ptr = (FTypedElementCommonActionsCustomization *)0x0;
  return this;
}

// ~TTypedElementInterfaceCustomizationRegistry<FTypedElementCommonActionsCustomization,FTypedElementCommonActionsCustomization> @ 147b3c620

void __thiscall
TTypedElementInterfaceCustomizationRegistry<FTypedElementCommonActionsCustomization,FTypedElementCommonActionsCustomization>
::
~TTypedElementInterfaceCustomizationRegistry<FTypedElementCommonActionsCustomization,FTypedElementCommonActionsCustomization>
          (TTypedElementInterfaceCustomizationRegistry<FTypedElementCommonActionsCustomization,FTypedElementCommonActionsCustomization>
           *this)

{
  FTypedElementCommonActionsCustomization *pFVar1;
  longlong lVar2;
  TTypedElementInterfaceCustomizationRegistry<FTypedElementCommonActionsCustomization,FTypedElementCommonActionsCustomization>
  *pTVar3;
  
  pTVar3 = this + 1;
  lVar2 = 0xfe;
  do {
    pFVar1 = pTVar3[-1].RegisteredInterfaceCustomizations[0xfd].Ptr;
    pTVar3 = (TTypedElementInterfaceCustomizationRegistry<FTypedElementCommonActionsCustomization,FTypedElementCommonActionsCustomization>
              *)(pTVar3[-1].RegisteredInterfaceCustomizations + 0xfd);
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FTypedElementCommonActionsCustomization *)0x0) {
      (**(code **)*pFVar1)(pFVar1,1);
    }
  } while (lVar2 != 0);
  pFVar1 = (this->DefaultInterfaceCustomization).Ptr;
  if (pFVar1 != (FTypedElementCommonActionsCustomization *)0x0) {
    (**(code **)*pFVar1)(pFVar1,1);
  }
  return;
}

