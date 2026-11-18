// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FPackageStoreReadScope @ 141f21bd0

FPackageStoreReadScope * __thiscall
FPackageStoreReadScope::FPackageStoreReadScope(FPackageStoreReadScope *this,FPackageStore *param_1)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  void *pvVar5;
  FScriptContainerElement *pFVar6;
  ulonglong uVar7;
  undefined1 local_res8 [8];
  
  pvVar5 = ThreadLocalStoragePointer;
  uVar7 = (ulonglong)_tls_index;
  this->PackageStore = param_1;
  lVar4 = *(longlong *)((longlong)pvVar5 + uVar7 * 8);
  if (*(int *)(lVar4 + 0xc88) == 0) {
    pFVar6 = (param_1->Backends).AllocatorInstance.Data;
    iVar3 = (param_1->Backends).ArrayNum;
    pFVar1 = pFVar6 + (longlong)iVar3 * 0x18;
    while( true ) {
      if ((param_1->Backends).ArrayNum != iVar3) {
        `TCheckedPointerIterator<TTuple<int,TSharedRef<IPackageStoreBackend,1>_>,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar6 == pFVar1) break;
      (**(code **)(**(longlong **)(pFVar6 + 8) + 0x18))();
      pFVar6 = pFVar6 + 0x18;
    }
  }
  piVar2 = (int *)(lVar4 + 0xc88);
  *piVar2 = *piVar2 + 1;
  return this;
}

// ~FPackageStoreReadScope @ 141f23b20

void __thiscall FPackageStoreReadScope::~FPackageStoreReadScope(FPackageStoreReadScope *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FPackageStore *pFVar4;
  code *pcVar5;
  bool bVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  
  uVar7 = (ulonglong)_tls_index;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar7 * 8) + 0xc88) < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("PackageStore.ThreadReadCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\PackageStore.cpp"
                         ,0x1ba,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar7 * 8) + 0xc88);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    pFVar4 = this->PackageStore;
    iVar3 = (pFVar4->Backends).ArrayNum;
    pFVar8 = (pFVar4->Backends).AllocatorInstance.Data;
    pFVar2 = pFVar8 + (longlong)iVar3 * 0x18;
    while( true ) {
      if ((pFVar4->Backends).ArrayNum != iVar3) {
        `TCheckedPointerIterator<TTuple<int,TSharedRef<IPackageStoreBackend,1>_>,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar8 == pFVar2) break;
      (**(code **)(**(longlong **)(pFVar8 + 8) + 0x20))();
      pFVar8 = pFVar8 + 0x18;
    }
  }
  return;
}

