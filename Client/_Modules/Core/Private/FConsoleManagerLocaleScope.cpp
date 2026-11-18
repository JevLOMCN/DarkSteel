// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// operator() @ 141622c60

void __thiscall
`UE::ConsoleManager::Private::FConsoleManagerLocaleScope::FConsoleManagerLocaleScope'::__l2::
<lambda_2>::operator()(void *this)

{
  ForAnyElementType *pFVar1;
  char *_Str;
  size_t sVar2;
  uint uVar3;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  _Str = setlocale(4,(char *)0x0);
  if (_Str != (char *)0x0) {
    sVar2 = strlen(_Str);
    local_18.Data = (FScriptContainerElement *)0x0;
    uVar3 = (int)sVar2 + 1;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    local_10 = CONCAT44(local_10._4_4_,uVar3);
    if (uVar3 == 0) {
      local_10 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar3,0,&local_18,uVar3,(int *)((longlong)&local_10 + 4));
      memcpy(local_18.Data,_Str,(longlong)(int)uVar3);
    }
    pFVar1 = *(ForAnyElementType **)this;
    if (pFVar1 != &local_18) {
      if (pFVar1->Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1->Data);
      }
      pFVar1->Data = local_18.Data;
      local_18.Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)&pFVar1[1].Data = (undefined4)local_10;
      *(undefined4 *)((longlong)&pFVar1[1].Data + 4) = local_10._4_4_;
      local_10 = 0;
    }
    if (local_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141622d65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  setlocale(4,"C");
  return;
}

