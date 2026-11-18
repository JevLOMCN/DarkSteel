// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 1

// InitializeModule @ 146c2f190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FMediaAssetsModule>::InitializeModule(void)

{
  ulonglong *puVar1;
  FSelfRegisteringExec *this;
  FSelfRegisteringExec *pFVar2;
  longlong lVar3;
  ulonglong *puVar4;
  undefined1 auStackY_88 [32];
  FString local_48;
  FString local_38;
  FString local_28;
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStackY_88;
  this = ::operator_new(0x68);
  if (this == (FSelfRegisteringExec *)0x0) {
    this = (FSelfRegisteringExec *)0x0;
  }
  else {
    *this = (FSelfRegisteringExec)0x0;
    this[1] = (FSelfRegisteringExec)0x0;
    this[2] = (FSelfRegisteringExec)0x0;
    this[3] = (FSelfRegisteringExec)0x0;
    this[4] = (FSelfRegisteringExec)0x0;
    this[5] = (FSelfRegisteringExec)0x0;
    this[6] = (FSelfRegisteringExec)0x0;
    this[7] = (FSelfRegisteringExec)0x0;
    this[8] = (FSelfRegisteringExec)0x0;
    this[9] = (FSelfRegisteringExec)0x0;
    this[10] = (FSelfRegisteringExec)0x0;
    this[0xb] = (FSelfRegisteringExec)0x0;
    this[0xc] = (FSelfRegisteringExec)0x0;
    FSelfRegisteringExec::FSelfRegisteringExec(this);
    *this = (FSelfRegisteringExec)&FMediaAssetsModule::_vftable__for__FSelfRegisteringExec__;
    this[2] = (FSelfRegisteringExec)0x0;
    this[1] = (FSelfRegisteringExec)&FMediaAssetsModule::_vftable__for__IMediaAssetsModule__;
    this[3] = (FSelfRegisteringExec)0x0;
    pFVar2 = this + 4;
    ::FString::FString(&local_48,L"mov");
    ::FString::FString(&local_38,L"mp4");
    ::FString::FString(&local_28,L"wmv");
    lVar3 = 3;
    *pFVar2 = (FSelfRegisteringExec)0x0;
    *(undefined4 *)(this + 5) = 3;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,3,0,(ForAnyElementType *)pFVar2,3,(int *)&this[5].field_0x4);
    ConstructItems<FString,FString,int>(*(FScriptContainerElement **)pFVar2,&local_48,3);
    puVar4 = local_18;
    do {
      puVar1 = puVar4 + -2;
      puVar4 = puVar4 + -2;
      lVar3 = lVar3 + -1;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
    } while (lVar3 != 0);
    this[6] = (FSelfRegisteringExec)0x0;
    this[7] = (FSelfRegisteringExec)0x0;
    *(undefined4 *)(this + 8) = 0;
    this[9] = (FSelfRegisteringExec)0x0;
    this[10] = (FSelfRegisteringExec)0x0;
    this[0xb] = (FSelfRegisteringExec)0x0;
    this[0xc] = (FSelfRegisteringExec)0x2;
  }
  pFVar2 = this + 1;
  if (this == (FSelfRegisteringExec *)0x0) {
    pFVar2 = (FSelfRegisteringExec *)(IModuleInterface *)0x0;
  }
  return (IModuleInterface *)pFVar2;
}

