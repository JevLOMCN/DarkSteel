// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// Get @ 1450ceb60

FDenoiserManager * __cdecl FDenoiserManager::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FDenoiserManager&___ptr64___cdecl_FDenoiserManager::Get(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FDenoiserManager&___ptr64___cdecl_FDenoiserManager::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FDenoiserManager&___ptr64___cdecl_FDenoiserManager::Get(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      atexit(`FDenoiserManager::Get'::__l2::_dynamic_atexit_destructor_for__DenoiserManager__);
      _Init_thread_footer(&`public:_static_class_FDenoiserManager&___ptr64___cdecl_FDenoiserManager::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FDenoiserManager&___ptr64___cdecl_FDenoiserManager::Get(void)'::__l2
          ::DenoiserManager;
}

// GetSpatialDenoiser @ 1450d1eb0

IPathTracingDenoiser * __thiscall
FDenoiserManager::GetSpatialDenoiser(FDenoiserManager *this,FString *param_1,bool param_2)

{
  ulonglong uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  TUniquePtr<UE::Renderer::Private::IPathTracingDenoiser,TDefaultDelete<UE::Renderer::Private::IPathTracingDenoiser>_>
  *pTVar5;
  IPathTracingDenoiser *pIVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  
  iVar4 = (param_1->Data).ArrayNum;
  if (iVar4 == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar9 = 0;
  iVar11 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar11 = 0;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,pwVar8);
  iVar4 = TSet<TTuple<FString,TUniquePtr<UE::Renderer::Private::IPathTracingDenoiser,TDefaultDelete<UE::Renderer::Private::IPathTracingDenoiser>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Renderer::Private::IPathTracingDenoiser,TDefaultDelete<UE::Renderer::Private::IPathTracingDenoiser>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TUniquePtr<UE::Renderer::Private::IPathTracingDenoiser,TDefaultDelete<UE::Renderer::Private::IPathTracingDenoiser>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Renderer::Private::IPathTracingDenoiser,TDefaultDelete<UE::Renderer::Private::IPathTracingDenoiser>_>,0>,FDefaultSetAllocator>
                      *)this,uVar3,param_1);
  if (iVar4 == -1) {
    if ((*(int *)&(this->SpatialDenoiser).field_0x8 - *(int *)&(this->SpatialDenoiser).field_0x34 <
         1) || (param_2)) {
      pFVar2 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pIVar6 = (IPathTracingDenoiser *)0x0;
    }
    else {
      iVar4 = *(int *)&(this->SpatialDenoiser).field_0x28;
      iVar11 = 0;
      iVar10 = iVar9;
      if (iVar4 != 0) {
        puVar12 = *(uint **)&(this->SpatialDenoiser).field_0x20;
        if (puVar12 == (uint *)0x0) {
          puVar12 = (uint *)&(this->SpatialDenoiser).field_0x10;
        }
        uVar3 = *puVar12;
        while (uVar3 == 0) {
          lVar7 = (longlong)iVar9;
          iVar11 = iVar11 + 0x20;
          iVar9 = iVar9 + 1;
          iVar10 = iVar4;
          if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_1450d1fa8;
          uVar3 = puVar12[lVar7 + 1];
        }
        uVar1 = (ulonglong)(-uVar3 & uVar3) * 2 + 1;
        lVar7 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        iVar10 = iVar11 + -1 + (int)lVar7;
        if (iVar4 < iVar10) {
          iVar10 = iVar4;
        }
      }
LAB_1450d1fa8:
      pIVar6 = *(IPathTracingDenoiser **)
                ((longlong)iVar10 * 0x20 + 0x10 + *(longlong *)&this->SpatialDenoiser);
      pFVar2 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
    }
  }
  else {
    pTVar5 = TMapBase<FString,TUniquePtr<UE::Renderer::Private::IPathTracingDenoiser,TDefaultDelete<UE::Renderer::Private::IPathTracingDenoiser>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Renderer::Private::IPathTracingDenoiser,TDefaultDelete<UE::Renderer::Private::IPathTracingDenoiser>_>,0>_>
             ::FindChecked((TMapBase<FString,TUniquePtr<UE::Renderer::Private::IPathTracingDenoiser,TDefaultDelete<UE::Renderer::Private::IPathTracingDenoiser>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Renderer::Private::IPathTracingDenoiser,TDefaultDelete<UE::Renderer::Private::IPathTracingDenoiser>_>,0>_>
                            *)this,param_1);
    pFVar2 = (param_1->Data).AllocatorInstance.Data;
    pIVar6 = pTVar5->Ptr;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  }
  return pIVar6;
}

// GetSpatialTemporalDenoiser @ 1450d2100

IPathTracingSpatialTemporalDenoiser * __thiscall
FDenoiserManager::GetSpatialTemporalDenoiser(FDenoiserManager *this,FString *param_1,bool param_2)

{
  ulonglong uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  TUniquePtr<UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser,TDefaultDelete<UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser>_>
  *pTVar5;
  IPathTracingSpatialTemporalDenoiser *pIVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  
  iVar4 = (param_1->Data).ArrayNum;
  if (iVar4 == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar9 = 0;
  iVar11 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar11 = 0;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,pwVar8);
  iVar4 = TSet<TTuple<FString,TUniquePtr<UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser,TDefaultDelete<UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser,TDefaultDelete<UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TUniquePtr<UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser,TDefaultDelete<UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser,TDefaultDelete<UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser>_>,0>,FDefaultSetAllocator>
                      *)&this->PathTracingSpatialTemporalDenoisers,uVar3,param_1);
  if (iVar4 == -1) {
    if ((*(int *)&(this->PathTracingSpatialTemporalDenoisers).field_0x8 -
         *(int *)&(this->PathTracingSpatialTemporalDenoisers).field_0x34 < 1) || (param_2)) {
      pFVar2 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pIVar6 = (IPathTracingSpatialTemporalDenoiser *)0x0;
    }
    else {
      iVar4 = *(int *)&(this->PathTracingSpatialTemporalDenoisers).field_0x28;
      iVar11 = 0;
      iVar10 = iVar9;
      if (iVar4 != 0) {
        puVar12 = *(uint **)&(this->PathTracingSpatialTemporalDenoisers).field_0x20;
        if (puVar12 == (uint *)0x0) {
          puVar12 = (uint *)&(this->PathTracingSpatialTemporalDenoisers).field_0x10;
        }
        uVar3 = *puVar12;
        while (uVar3 == 0) {
          lVar7 = (longlong)iVar9;
          iVar11 = iVar11 + 0x20;
          iVar9 = iVar9 + 1;
          iVar10 = iVar4;
          if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_1450d21f8;
          uVar3 = puVar12[lVar7 + 1];
        }
        uVar1 = (ulonglong)(-uVar3 & uVar3) * 2 + 1;
        lVar7 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        iVar10 = iVar11 + -1 + (int)lVar7;
        if (iVar4 < iVar10) {
          iVar10 = iVar4;
        }
      }
LAB_1450d21f8:
      pIVar6 = *(IPathTracingSpatialTemporalDenoiser **)
                ((longlong)iVar10 * 0x20 + 0x10 +
                *(longlong *)&this->PathTracingSpatialTemporalDenoisers);
      pFVar2 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
    }
  }
  else {
    pTVar5 = TMapBase<FString,TUniquePtr<UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser,TDefaultDelete<UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser,TDefaultDelete<UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser>_>,0>_>
             ::FindChecked((TMapBase<FString,TUniquePtr<UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser,TDefaultDelete<UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser,TDefaultDelete<UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser>_>,0>_>
                            *)&this->PathTracingSpatialTemporalDenoisers,param_1);
    pFVar2 = (param_1->Data).AllocatorInstance.Data;
    pIVar6 = pTVar5->Ptr;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  }
  return pIVar6;
}

