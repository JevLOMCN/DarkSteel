// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 13

// GetData @ 14eedc210

void * __thiscall
UE::Online::Private::FOnlineOperationData::
TData<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::GetData
          (TData<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_> *this)

{
  return &this->Data;
}

// GetTypeName @ 14eee5ec0

FOnlineTypeName __thiscall
UE::Online::Private::FOnlineOperationData::
TData<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::GetTypeName
          (TData<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_> *this)

{
  wchar_t *in_RDX;
  
  *(wchar_t **)in_RDX =
       L"class UE::Online::TOnlineId<struct UE::Online::OnlineIdHandleTags::FAccount>";
  return (FOnlineTypeName)in_RDX;
}

// TData<UE::Online::FFindLobbies::Result> @ 14efe2810

TData<UE::Online::FFindLobbies::Result> * __thiscall
UE::Online::Private::FOnlineOperationData::TData<UE::Online::FFindLobbies::Result>::
TData<UE::Online::FFindLobbies::Result>
          (TData<UE::Online::FFindLobbies::Result> *this,Result *param_1)

{
  Result *pRVar1;
  int *piVar2;
  int iVar3;
  TSharedRef<UE::Online::FLobby_const_,1> *pTVar4;
  
  pRVar1 = &this->Data;
  this->_padding_ =
       (longlong)
       &___7__TData_UResult_FFindLobbies_Online_UE___FOnlineOperationData_Private_Online_UE__6B_;
  (pRVar1->Lobbies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Data).Lobbies.ArrayMax;
  iVar3 = (param_1->Lobbies).ArrayNum;
  pTVar4 = (TSharedRef<UE::Online::FLobby_const_,1> *)(param_1->Lobbies).AllocatorInstance.Data;
  (this->Data).Lobbies.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,(ForAnyElementType *)pRVar1,iVar3,piVar2);
    ConstructItems<TSharedRef<UE::Online::FLobby_const_,1>,TSharedRef<UE::Online::FLobby_const_,1>,int>
              ((pRVar1->Lobbies).AllocatorInstance.Data,pTVar4,iVar3);
  }
  return this;
}

// GetData @ 14effea00

void * __thiscall
UE::Online::Private::FOnlineOperationData::TData<UE::Online::FCreateLobby::Result>::GetData
          (TData<UE::Online::FCreateLobby::Result> *this)

{
  return &this->Data;
}

// GetData @ 14effea10

void * __thiscall
UE::Online::Private::FOnlineOperationData::TData<UE::Online::FFindLobbies::Result>::GetData
          (TData<UE::Online::FFindLobbies::Result> *this)

{
  return &this->Data;
}

// GetData @ 14effea20

void * __thiscall
UE::Online::Private::FOnlineOperationData::
TData<UE::Online::Private::FFunctionalTestLoginUser::Result>::GetData
          (TData<UE::Online::Private::FFunctionalTestLoginUser::Result> *this)

{
  return &this->Data;
}

// GetData @ 14effea30

void * __thiscall
UE::Online::Private::FOnlineOperationData::
TData<TSharedRef<`UE::Online::RunLobbyFunctionalTest'::__l2::FSearchParams,1>_>::GetData(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetData @ 14effea40

void * __thiscall
UE::Online::Private::FOnlineOperationData::TData<TSharedRef<UE::Online::FLobbyEventCapture,1>_>::
GetData(TData<TSharedRef<UE::Online::FLobbyEventCapture,1>_> *this)

{
  return &this->Data;
}

// GetTypeName @ 14efff1d0

FOnlineTypeName __thiscall
UE::Online::Private::FOnlineOperationData::TData<UE::Online::FCreateLobby::Result>::GetTypeName
          (TData<UE::Online::FCreateLobby::Result> *this)

{
  wchar_t *in_RDX;
  
  *(wchar_t **)in_RDX = L"struct UE::Online::FCreateLobby::Result";
  return (FOnlineTypeName)in_RDX;
}

// GetTypeName @ 14efff1f0

FOnlineTypeName __thiscall
UE::Online::Private::FOnlineOperationData::TData<UE::Online::FFindLobbies::Result>::GetTypeName
          (TData<UE::Online::FFindLobbies::Result> *this)

{
  wchar_t *in_RDX;
  
  *(wchar_t **)in_RDX = L"struct UE::Online::FFindLobbies::Result";
  return (FOnlineTypeName)in_RDX;
}

// GetTypeName @ 14efff210

FOnlineTypeName __thiscall
UE::Online::Private::FOnlineOperationData::
TData<UE::Online::Private::FFunctionalTestLoginUser::Result>::GetTypeName
          (TData<UE::Online::Private::FFunctionalTestLoginUser::Result> *this)

{
  wchar_t *in_RDX;
  
  *(wchar_t **)in_RDX = L"struct UE::Online::Private::FFunctionalTestLoginUser::Result";
  return (FOnlineTypeName)in_RDX;
}

// GetTypeName @ 14efff230

FOnlineTypeName __thiscall
UE::Online::Private::FOnlineOperationData::
TData<TSharedRef<`UE::Online::RunLobbyFunctionalTest'::__l2::FSearchParams,1>_>::GetTypeName
          (void *this)

{
  wchar_t *in_RDX;
  
  *(wchar_t **)in_RDX =
       L"class TSharedRef<struct `class UE::Online::TOnlineAsyncOpHandle<struct UE::Online::FFunctionalTestLobbies> __cdecl UE::Online::RunLobbyFunctionalTest(class UE::Online::IAuth &,class UE::Online::FLobbiesCommon &,struct UE::Online::FLobbyEvents &)\'::`2\'::FSearchParams,1>"
  ;
  return (FOnlineTypeName)in_RDX;
}

// GetTypeName @ 14efff250

FOnlineTypeName __thiscall
UE::Online::Private::FOnlineOperationData::TData<TSharedRef<UE::Online::FLobbyEventCapture,1>_>::
GetTypeName(TData<TSharedRef<UE::Online::FLobbyEventCapture,1>_> *this)

{
  wchar_t *in_RDX;
  
  *(wchar_t **)in_RDX = L"class TSharedRef<class UE::Online::FLobbyEventCapture,1>";
  return (FOnlineTypeName)in_RDX;
}

