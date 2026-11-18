// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 1

// Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_> @ 14ede20b0

void __thiscall
UE::Online::Private::FOnlineOperationData::
Set<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
          (FOnlineOperationData *this,FString *param_1,
          TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *param_2)

{
  FScriptContainerElement *_Src;
  TUniquePtr<UE::Online::Private::FOnlineOperationData::IData,TDefaultDelete<UE::Online::Private::FOnlineOperationData::IData>_>
  *pTVar1;
  longlong lVar2;
  TPairInitializer<UE::Online::Private::FOnlineOperationData::FOperationDataKey_&&,TUniquePtr<UE::Online::Private::FOnlineOperationData::IData,TDefaultDelete<UE::Online::Private::FOnlineOperationData::IData>_>_&&>
  local_res8;
  wchar_t **local_38;
  TUniquePtr<UE::Online::Private::FOnlineOperationData::IData,TDefaultDelete<UE::Online::Private::FOnlineOperationData::IData>_>
  **local_30;
  wchar_t *local_28;
  ForAnyElementType local_20;
  int local_18;
  int local_14 [3];
  
  pTVar1 = ::operator_new(0x10);
  local_res8.Value =
       (TUniquePtr<UE::Online::Private::FOnlineOperationData::IData,TDefaultDelete<UE::Online::Private::FOnlineOperationData::IData>_>
        *)0x0;
  if (pTVar1 != (TUniquePtr<UE::Online::Private::FOnlineOperationData::IData,TDefaultDelete<UE::Online::Private::FOnlineOperationData::IData>_>
                 *)0x0) {
    pTVar1->Ptr = (IData *)&
                           ___7__TData_V__TOnlineId_UFAccount_OnlineIdHandleTags_Online_UE___Online_UE___FOnlineOperationData_Private_Online_UE__6B_
    ;
    *(uint *)&pTVar1[1].Ptr = param_2->Value;
    local_res8.Value = pTVar1;
  }
  local_18 = (param_1->Data).ArrayNum;
  lVar2 = (longlong)local_18;
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_28 = L"class UE::Online::TOnlineId<struct UE::Online::OnlineIdHandleTags::FAccount>";
  local_20.Data = (FScriptContainerElement *)0x0;
  if (local_18 == 0) {
    local_14[0] = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18,0,&local_20,local_18,local_14);
    memcpy(local_20.Data,_Src,lVar2 * 2);
  }
  local_38 = &local_28;
  local_30 = &local_res8.Value;
  TSet<TTuple<UE::Online::Private::FOnlineOperationData::FOperationDataKey,TUniquePtr<UE::Online::Private::FOnlineOperationData::IData,TDefaultDelete<UE::Online::Private::FOnlineOperationData::IData>_>_>,TDefaultMapHashableKeyFuncs<UE::Online::Private::FOnlineOperationData::FOperationDataKey,TUniquePtr<UE::Online::Private::FOnlineOperationData::IData,TDefaultDelete<UE::Online::Private::FOnlineOperationData::IData>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<UE::Online::Private::FOnlineOperationData::FOperationDataKey_&&,TUniquePtr<UE::Online::Private::FOnlineOperationData::IData,TDefaultDelete<UE::Online::Private::FOnlineOperationData::IData>_>_&&>_>
            ((TSet<TTuple<UE::Online::Private::FOnlineOperationData::FOperationDataKey,TUniquePtr<UE::Online::Private::FOnlineOperationData::IData,TDefaultDelete<UE::Online::Private::FOnlineOperationData::IData>_>_>,TDefaultMapHashableKeyFuncs<UE::Online::Private::FOnlineOperationData::FOperationDataKey,TUniquePtr<UE::Online::Private::FOnlineOperationData::IData,TDefaultDelete<UE::Online::Private::FOnlineOperationData::IData>_>,0>,FDefaultSetAllocator>
              *)this,&local_res8,(bool *)&local_38);
  if (local_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data);
  }
  if (local_res8.Value !=
      (TUniquePtr<UE::Online::Private::FOnlineOperationData::IData,TDefaultDelete<UE::Online::Private::FOnlineOperationData::IData>_>
       *)0x0) {
    (*(code *)*(local_res8.Value)->Ptr)(local_res8.Value,1);
  }
  return;
}

