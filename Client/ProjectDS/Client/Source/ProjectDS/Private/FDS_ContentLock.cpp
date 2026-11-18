// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 4

// IsOpenContentLock @ 14bca8290

bool __thiscall FDS_ContentLock::IsOpenContentLock(FDS_ContentLock *this,uint *param_1)

{
  int iVar1;
  bool bVar2;
  UDS_ContentManager *this_00;
  UDS_DataSetBase *this_01;
  UObject *pUVar3;
  UClass *pUVar4;
  UObject *local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_18;
  FWeakObjectPtr local_10;
  
  this_00 = UDS_ContentManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_00 != (UDS_ContentManager *)0x0) goto LAB_14bca82c2;
  }
  else if (this_00 != (UDS_ContentManager *)0x0) {
    UE::GC::MarkAsReachable((UObject *)this_00);
LAB_14bca82c2:
    local_res18 = (UObject *)CONCAT44(local_res18._4_4_,*param_1);
    bVar2 = UDS_ContentManager::HasContentLock(this_00,(EDS_ContentsBaseType *)&local_res18);
    return bVar2;
  }
  TDS_DataSetGetter<UDS_ContentDataSet>::Get((ulong64)&local_18);
  bVar2 = TWeakObjectPtr<UDS_ContentDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_ContentDataSet,FWeakObjectPtr> *)&local_18,(void *)0x0);
  if (bVar2) {
    return false;
  }
  this_01 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_18);
  UDS_DataSetBase::GetData(this_01,(ulong64)&local_10);
  bVar2 = FWeakObjectPtr::IsValid(&local_10);
  if (!bVar2) {
    return false;
  }
  pUVar3 = FWeakObjectPtr::Get(&local_10);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_ContentData_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14bca836b;
  }
  pUVar3 = (UObject *)0x0;
LAB_14bca836b:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_res18 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_res18);
  bVar2 = FWeakObjectPtr::IsValid(&local_res20);
  return bVar2;
}

// OnEventContentLock @ 14bcb4c80

void __thiscall FDS_ContentLock::OnEventContentLock(FDS_ContentLock *this)

{
  return;
}

// OnRegisterContentLock @ 14bcba140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDS_ContentLock::OnRegisterContentLock
          (FDS_ContentLock *this,TWeakObjectPtr<UObject,FWeakObjectPtr> param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_ContentManager *this_00;
  FWeakObjectPtr local_res10;
  undefined1 auStackY_168 [32];
  uint uVar3;
  wchar_t *pwVar4;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_res10 = param_1.WeakPtr;
  bVar1 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_ContentLock::OnRegisterContentLock",0x26,Yes);
    pwVar4 = L"InUserWidget is nullptr";
    uVar3 = 0x13;
LAB_14bcba1d1:
    UDS_LogManager::PrintLog(pUVar2,1,Display,local_138.Ptr,uVar3,pwVar4);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  else {
    this_00 = UDS_ContentManager::GetInst();
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_00 == (UDS_ContentManager *)0x0) goto LAB_14bcba25f;
    }
    else {
      if (this_00 == (UDS_ContentManager *)0x0) {
LAB_14bcba25f:
        pUVar2 = UDS_LogManager::GetInst();
        if (pUVar2 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar2 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"FDS_ContentLock::OnRegisterContentLock",0x26,Yes);
        pwVar4 = L"contentManager is nullptr";
        uVar3 = 0x1a;
        goto LAB_14bcba1d1;
      }
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    UDS_ContentManager::OnRegisterContentLock
              (this_00,(TWeakObjectPtr<UObject,FWeakObjectPtr>)local_res10,this);
    (**(code **)*this)(this);
  }
  return;
}

// OnUnregisterContentLock @ 14bcbc670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDS_ContentLock::OnUnregisterContentLock
          (FDS_ContentLock *this,TWeakObjectPtr<UObject,FWeakObjectPtr> param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_ContentManager *this_00;
  FWeakObjectPtr local_res10 [3];
  undefined1 auStackY_168 [32];
  uint uVar3;
  wchar_t *pwVar4;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_res10[0] = param_1.WeakPtr;
  bVar1 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UObject,FWeakObjectPtr> *)local_res10,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_ContentLock::OnUnregisterContentLock",0x28,Yes);
    pwVar4 = L"InUserWidget is nullptr";
    uVar3 = 0x26;
LAB_14bcbc6f9:
    UDS_LogManager::PrintLog(pUVar2,1,Display,local_138.Ptr,uVar3,pwVar4);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  else {
    this_00 = UDS_ContentManager::GetInst();
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_00 == (UDS_ContentManager *)0x0) goto LAB_14bcbc774;
    }
    else {
      if (this_00 == (UDS_ContentManager *)0x0) {
LAB_14bcbc774:
        pUVar2 = UDS_LogManager::GetInst();
        if (pUVar2 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar2 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"FDS_ContentLock::OnUnregisterContentLock",0x28,Yes);
        pwVar4 = L"contentManager is nullptr";
        uVar3 = 0x2d;
        goto LAB_14bcbc6f9;
      }
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    UDS_ContentManager::OnUnregisterContentLock
              (this_00,(TWeakObjectPtr<UObject,FWeakObjectPtr>)local_res10[0]);
  }
  return;
}

