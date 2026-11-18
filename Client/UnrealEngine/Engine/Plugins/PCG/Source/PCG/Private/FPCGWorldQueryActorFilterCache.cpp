// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// StaticStruct @ 149854dd0

UScriptStruct * __cdecl FPCGWorldQueryActorFilterCache::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGWorldQueryActorFilterCache.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGWorldQueryActorFilterCache.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGWorldQueryActorFilterCache,(UObject *)pUVar1,
                         L"PCGWorldQueryActorFilterCache");
  }
  return Z_Registration_Info_UScriptStruct_FPCGWorldQueryActorFilterCache.OuterSingleton;
}

// GetCachedFilterActors @ 1498b6220

TSet<TObjectKey<AActor>,DefaultKeyFuncs<TObjectKey<AActor>,0>,FDefaultSetAllocator> * __thiscall
FPCGWorldQueryActorFilterCache::GetCachedFilterActors(FPCGWorldQueryActorFilterCache *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TPersistentObjectPtr<FSoftObjectPath> *pTVar1;
  int iVar2;
  int iVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  TPersistentObjectPtr<FSoftObjectPath> *this_00;
  UObject *local_res8;
  TObjectKey<AActor> local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  
  if (((this->FilterActors).ArrayNum != 0) && (this->CachedFilterActorsDirty != false)) {
    lpCriticalSection = &this->CachedFilterActorsLock;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (this->CachedFilterActorsDirty != false) {
      TSet<TObjectKey<AActor>,DefaultKeyFuncs<TObjectKey<AActor>,0>,FDefaultSetAllocator>::Empty
                (&this->CachedFilterActors,(this->FilterActors).ArrayNum);
      iVar2 = (this->FilterActors).ArrayNum;
      this_00 = (TPersistentObjectPtr<FSoftObjectPath> *)(this->FilterActors).AllocatorInstance.Data
      ;
      pTVar1 = this_00 + iVar2;
      while( true ) {
        if ((this->FilterActors).ArrayNum != iVar2) {
          `TCheckedPointerIterator<TSoftObjectPtr<AActor>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_res8);
        }
        if (this_00 == pTVar1) break;
        pUVar4 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
        if (pUVar4 == (UObject *)0x0) {
LAB_1498b6349:
          local_res20.ObjectIndex = 0;
          local_res20.ObjectSerialNumber = 0;
        }
        else {
          pUVar5 = Z_Construct_UClass_AActor_NoRegister();
          iVar3 = (int)pUVar5->_padding_;
          if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar3) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
              &pUVar5->_padding_)) goto LAB_1498b6349;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar4);
          }
          local_res18.ObjectIndex = 0;
          local_res18.ObjectSerialNumber = 0;
          local_res8 = pUVar4;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar4);
          }
          FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res8);
          local_res20 = local_res18;
        }
        TSet<TObjectKey<AActor>,DefaultKeyFuncs<TObjectKey<AActor>,0>,FDefaultSetAllocator>::
        Emplace<TObjectKey<AActor>_>(&this->CachedFilterActors,&local_res10,(bool *)&local_res20);
        this_00 = this_00 + 1;
      }
      this->CachedFilterActorsDirty = false;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return &this->CachedFilterActors;
}

