// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// ~FSharedCache @ 142013680

void __thiscall UE::GC::FPageAllocator::FSharedCache::~FSharedCache(FSharedCache *this)

{
  int iVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Pages).ArrayNum;
  pFVar6 = (this->Pages).AllocatorInstance.Data;
  pFVar3 = pFVar6 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->Pages).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar3) break;
    pvVar2 = *(void **)pFVar6;
    if ((pvVar2 == (void *)0x0) || (((ulonglong)pvVar2 & 0xfff) != 0)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidPage(Page)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0x562,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FMemory::Free(pvVar2);
    pFVar6 = pFVar6 + 8;
  }
  pFVar3 = (this->Pages).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x000142013738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

