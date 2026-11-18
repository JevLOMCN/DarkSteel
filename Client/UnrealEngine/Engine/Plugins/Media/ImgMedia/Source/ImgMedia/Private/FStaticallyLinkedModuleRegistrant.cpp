// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMedia
// Functions: 1

// InitializeModule @ 14ea51750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FImgMediaModule>::InitializeModule(void)

{
  ulonglong *puVar1;
  IModuleInterface *pIVar2;
  IModuleInterface *pIVar3;
  longlong lVar4;
  ulonglong *puVar5;
  undefined1 auStackY_b8 [32];
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStackY_b8;
  pIVar2 = ::operator_new(0x58);
  pIVar3 = (IModuleInterface *)0x0;
  if (pIVar2 != (IModuleInterface *)0x0) {
    pIVar2[1] = (IModuleInterface)0x0;
    pIVar2[2] = (IModuleInterface)0x0;
    pIVar2[3] = (IModuleInterface)0x0;
    pIVar2[4] = (IModuleInterface)0x2;
    pIVar3 = pIVar2 + 9;
    *pIVar2 = (IModuleInterface)&___7FImgMediaModule__6B_;
    pIVar2[5] = (IModuleInterface)0x0;
    pIVar2[6] = (IModuleInterface)0x0;
    pIVar2[7] = (IModuleInterface)0x0;
    pIVar2[8] = (IModuleInterface)0x0;
    ::FString::FString(&local_78,L"bmp");
    ::FString::FString(&local_68,L"exr");
    ::FString::FString(&local_58,L"jpg");
    ::FString::FString(&local_48,L"jpeg");
    ::FString::FString(&local_38,L"png");
    ::FString::FString(&local_28,L"dds");
    *pIVar3 = (IModuleInterface)0x0;
    lVar4 = 6;
    *(undefined4 *)(pIVar2 + 10) = 6;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,6,0,(ForAnyElementType *)pIVar3,6,(int *)&pIVar2[10].field_0x4);
    ConstructItems<FString,FString,int>(*(FScriptContainerElement **)pIVar3,&local_78,6);
    puVar5 = local_18;
    do {
      puVar1 = puVar5 + -2;
      puVar5 = puVar5 + -2;
      lVar4 = lVar4 + -1;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      pIVar3 = pIVar2;
    } while (lVar4 != 0);
  }
  return pIVar3;
}

