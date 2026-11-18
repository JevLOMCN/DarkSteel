// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// SetWorldTileInfo @ 148a69ca0

void __thiscall
UPackage::SetWorldTileInfo
          (UPackage *this,TUniquePtr<FWorldTileInfo,TDefaultDelete<FWorldTileInfo>_> param_1)

{
  FWorldTileInfo *pFVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  FAdditionalInfo *pFVar4;
  FAdditionalInfo *pFVar5;
  TUniquePtr<UPackage::FAdditionalInfo,TDefaultDelete<UPackage::FAdditionalInfo>_> *pTVar6;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  longlong local_28 [2];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_void___cdecl_UPackage::SetWorldTileInfo(TUniquePtr<FWorldTileInfo,TDefaultDelete<FWorldTileInfo>_>)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_UPackage::SetWorldTileInfo(TUniquePtr<FWorldTileInfo,TDefaultDelete<FWorldTileInfo>_>)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_void___cdecl_UPackage::SetWorldTileInfo(TUniquePtr<FWorldTileInfo,TDefaultDelete<FWorldTileInfo>_>)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_void___cdecl_UPackage::SetWorldTileInfo(TUniquePtr<FWorldTileInfo,TDefaultDelete<FWorldTileInfo>_>)___ptr64'
                    ::__l2::LLMScope_Name1076,L"Package/AdditionalInfo");
    _Init_thread_footer(&`public:_void___cdecl_UPackage::SetWorldTileInfo(TUniquePtr<FWorldTileInfo,TDefaultDelete<FWorldTileInfo>_>)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_void___cdecl_UPackage::SetWorldTileInfo(TUniquePtr<FWorldTileInfo,TDefaultDelete<FWorldTileInfo>_>)___ptr64'
             ::__l2::LLMScope_Name1076,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res10,
             &`public:_void___cdecl_UPackage::SetWorldTileInfo(TUniquePtr<FWorldTileInfo,TDefaultDelete<FWorldTileInfo>_>)___ptr64'
              ::__l2::LLMScope_Name1076,true);
  pFVar4 = (this->AdditionalInfo).Ptr;
  pTVar6 = &this->AdditionalInfo;
  if (pFVar4 != (FAdditionalInfo *)0x0) {
    TUniquePtr<FWorldTileInfo,TDefaultDelete<FWorldTileInfo>_>::operator=
              (&pFVar4->WorldTileInfo,
               (TUniquePtr<FWorldTileInfo,TDefaultDelete<FWorldTileInfo>_> *)param_1.Ptr);
    goto LAB_148a69e6f;
  }
  if (*(longlong *)&((param_1.Ptr)->Position).field0_0x0 == 0) goto LAB_148a69e6f;
  pFVar4 = ::operator_new(0x38);
  if (pFVar4 != (FAdditionalInfo *)0x0) {
    *(undefined4 *)&pFVar4->field_0xc = 0;
    pFVar4->LinkerPackageVersion = GPackageFileUEVersion;
    pFVar4->LinkerLicenseeVersion = GPackageFileLicenseeUEVersion;
    (pFVar4->LinkerCustomVersion).Versions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar4->LinkerCustomVersion).Versions.ArrayNum = 0;
    (pFVar4->LinkerCustomVersion).Versions.ArrayMax = 0;
    pFVar4->LinkerLoad = (FLinkerLoad *)0x0;
    pFVar4->FileSize = 0;
    (pFVar4->WorldTileInfo).Ptr = (FWorldTileInfo *)0x0;
  }
  if (pTVar6 == (TUniquePtr<UPackage::FAdditionalInfo,TDefaultDelete<UPackage::FAdditionalInfo>_> *)
                local_28) {
    if (pFVar4 != (FAdditionalInfo *)0x0) {
      pFVar1 = (pFVar4->WorldTileInfo).Ptr;
      if (pFVar1 != (FWorldTileInfo *)0x0) {
        pFVar2 = (pFVar1->LODList).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        pFVar2 = (pFVar1->ParentTilePackageName).Data.AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        pFVar2 = (pFVar1->Layer).Name.Data.AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        ::operator_delete(pFVar1,0xa8);
      }
      pFVar2 = (pFVar4->LinkerCustomVersion).Versions.AllocatorInstance.Data;
      pFVar5 = pFVar4;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      goto LAB_148a69e51;
    }
  }
  else {
    pFVar5 = pTVar6->Ptr;
    pTVar6->Ptr = pFVar4;
    if (pFVar5 != (FAdditionalInfo *)0x0) {
      pFVar1 = (pFVar5->WorldTileInfo).Ptr;
      if (pFVar1 != (FWorldTileInfo *)0x0) {
        pFVar2 = (pFVar1->LODList).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        pFVar2 = (pFVar1->ParentTilePackageName).Data.AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        pFVar2 = (pFVar1->Layer).Name.Data.AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        ::operator_delete(pFVar1,0xa8);
      }
      pFVar2 = (pFVar5->LinkerCustomVersion).Versions.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
LAB_148a69e51:
      ::operator_delete(pFVar5,0x38);
    }
  }
  TUniquePtr<FWorldTileInfo,TDefaultDelete<FWorldTileInfo>_>::operator=
            (&pTVar6->Ptr->WorldTileInfo,
             (TUniquePtr<FWorldTileInfo,TDefaultDelete<FWorldTileInfo>_> *)param_1.Ptr);
LAB_148a69e6f:
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  pvVar3 = *(void **)&((param_1.Ptr)->Position).field0_0x0;
  if (pvVar3 != (void *)0x0) {
    if (*(void **)((longlong)pvVar3 + 0x90) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)pvVar3 + 0x90));
    }
    if (*(void **)((longlong)pvVar3 + 0x80) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)pvVar3 + 0x80));
    }
    if (*(void **)((longlong)pvVar3 + 0x50) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)pvVar3 + 0x50));
    }
    ::operator_delete(pvVar3,0xa8);
  }
  return;
}

