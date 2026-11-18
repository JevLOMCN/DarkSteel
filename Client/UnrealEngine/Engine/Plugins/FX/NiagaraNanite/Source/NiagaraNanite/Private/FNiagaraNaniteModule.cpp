// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraNanite
// Functions: 2

// StartupModule @ 14da3da80

void __thiscall FNiagaraNaniteModule::StartupModule(FNiagaraNaniteModule *this)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  UClass *pUVar3;
  UNiagaraNaniteRendererProperties *pUVar4;
  FString *pFVar5;
  ulonglong uVar6;
  ForAnyElementType this_00;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  undefined1 local_res10 [8];
  FString local_28;
  FString local_18;
  
  pUVar3 = UNiagaraNaniteRendererProperties::StaticClass();
  if ((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar3);
  }
  pUVar4 = (UNiagaraNaniteRendererProperties *)(pUVar3->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar4 != (UNiagaraNaniteRendererProperties *)0x0) {
    pUVar3 = UNiagaraNaniteRendererProperties::StaticClass();
    iVar2 = (int)pUVar3->_padding_;
    if ((iVar2 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar3->_padding_)) {
      NiagaraNaniteRendererPropertiesLocal::SetupBindings(pUVar4);
      iVar2 = NiagaraNaniteRendererPropertiesLocal::RendererPropertiesToDeferredInit.ArrayNum;
      uVar6 = (ulonglong)
              NiagaraNaniteRendererPropertiesLocal::RendererPropertiesToDeferredInit.ArrayNum;
      pFVar1 = (FWeakObjectPtr *)
               (NiagaraNaniteRendererPropertiesLocal::RendererPropertiesToDeferredInit.
                AllocatorInstance.Data + uVar6 * 8);
      this_00 = NiagaraNaniteRendererPropertiesLocal::RendererPropertiesToDeferredInit.
                AllocatorInstance;
      while( true ) {
        if ((int)uVar6 != iVar2) {
          `TCheckedPointerIterator<TWeakObjectPtr<UNiagaraNaniteRendererProperties,FWeakObjectPtr>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if ((FWeakObjectPtr *)this_00.Data == pFVar1) break;
        pUVar4 = (UNiagaraNaniteRendererProperties *)
                 FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.Data);
        if (pUVar4 != (UNiagaraNaniteRendererProperties *)0x0) {
          NiagaraNaniteRendererPropertiesLocal::SetupBindings(pUVar4);
        }
        uVar6 = (ulonglong)
                (uint)NiagaraNaniteRendererPropertiesLocal::RendererPropertiesToDeferredInit.
                      ArrayNum;
        this_00.Data = this_00.Data + 8;
      }
      return;
    }
    pFVar5 = GetTypeName<UNiagaraNaniteRendererProperties>(&local_28);
    pwVar7 = L"";
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    pFVar5 = GetFullNameForCastLogError<UObject>(&local_18,(UObject *)pUVar4);
    if ((pFVar5->Data).ArrayNum != 0) {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar7,pwVar8);
  }
  pFVar5 = GetTypeName<UNiagaraNaniteRendererProperties>(&local_28);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar7);
}

// ShutdownModule @ 14da3dbc0

void __thiscall FNiagaraNaniteModule::ShutdownModule(FNiagaraNaniteModule *this)

{
  return;
}

