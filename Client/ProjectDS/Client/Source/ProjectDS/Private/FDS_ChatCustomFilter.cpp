// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// Init @ 14b9f3940

void __thiscall FDS_ChatCustomFilter::Init(FDS_ChatCustomFilter *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement FVar3;
  int iVar4;
  int iVar5;
  ForAnyElementType FVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  TArray<EDS_ChattingType,TSizedDefaultAllocator<32>_> local_28;
  
  EDS_ChattingTypeValues(&local_28);
  iVar5 = local_28.ArrayNum;
  pFVar2 = local_28.AllocatorInstance.Data + local_28.ArrayNum;
  FVar6.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if (local_28.ArrayNum != iVar5) {
      `TCheckedPointerIterator<enum_EDS_ChattingType,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar6.Data == pFVar2) break;
    FVar3 = *FVar6.Data;
    if ((FVar3 != (FScriptContainerElement)0x0) &&
       ((0x18 < (byte)FVar3 || ((0x1003a00U >> ((byte)FVar3 & 0x1f) & 1) == 0)))) {
      iVar4 = (this->NormalTypes).ArrayNum;
      piVar1 = &(this->NormalTypes).ArrayMax;
      if (iVar4 == *piVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&(this->NormalTypes).AllocatorInstance,piVar1);
      }
      (this->NormalTypes).ArrayNum = iVar4 + 1;
      (this->NormalTypes).AllocatorInstance.Data[iVar4] = *FVar6.Data;
    }
    FVar6.Data = FVar6.Data + 1;
  }
  iVar5 = (this->SystemTypes).ArrayNum;
  if (iVar5 == (this->SystemTypes).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&(this->SystemTypes).AllocatorInstance,&(this->SystemTypes).ArrayMax);
  }
  (this->SystemTypes).ArrayNum = iVar5 + 1;
  (this->SystemTypes).AllocatorInstance.Data[iVar5] = (FScriptContainerElement)0x9;
  iVar5 = (this->SystemTypes).ArrayNum;
  if (iVar5 == (this->SystemTypes).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&(this->SystemTypes).AllocatorInstance,&(this->SystemTypes).ArrayMax);
  }
  (this->SystemTypes).ArrayNum = iVar5 + 1;
  (this->SystemTypes).AllocatorInstance.Data[iVar5] = (FScriptContainerElement)0xd;
  this->AllNormalTypeFlags = 0;
  pFVar7 = (this->NormalTypes).AllocatorInstance.Data;
  iVar5 = (this->NormalTypes).ArrayNum;
  pFVar2 = pFVar7 + iVar5;
  while( true ) {
    if ((this->NormalTypes).ArrayNum != iVar5) {
      `TCheckedPointerIterator<enum_EDS_ChattingType,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar7 == pFVar2) break;
    this->AllNormalTypeFlags = this->AllNormalTypeFlags | 1L << ((ulonglong)(byte)*pFVar7 & 0x3f);
    pFVar7 = pFVar7 + 1;
  }
  this->AllSystemTypeFlags = 0;
  pFVar7 = (this->SystemTypes).AllocatorInstance.Data;
  iVar5 = (this->SystemTypes).ArrayNum;
  pFVar2 = pFVar7 + iVar5;
  while( true ) {
    if ((this->SystemTypes).ArrayNum != iVar5) {
      `TCheckedPointerIterator<enum_EDS_ChattingType,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar7 == pFVar2) break;
    this->AllSystemTypeFlags = this->AllSystemTypeFlags | 1L << ((ulonglong)(byte)*pFVar7 & 0x3f);
    pFVar7 = pFVar7 + 1;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// IsAllNormalTypeChecked @ 14b9f8fb0

bool __thiscall FDS_ChatCustomFilter::IsAllNormalTypeChecked(FDS_ChatCustomFilter *this)

{
  return (this->AllNormalTypeFlags & this->ChatTypeFlags) == this->AllNormalTypeFlags;
}

// IsAllSystemTypeChecked @ 14b9f8fd0

bool __thiscall FDS_ChatCustomFilter::IsAllSystemTypeChecked(FDS_ChatCustomFilter *this)

{
  return (this->AllSystemTypeFlags & this->ChatTypeFlags) == this->AllSystemTypeFlags;
}

// IsChattingTypeChecked @ 14b9f9100

bool __thiscall
FDS_ChatCustomFilter::IsChattingTypeChecked(FDS_ChatCustomFilter *this,EDS_ChattingType param_1)

{
  return (this->ChatTypeFlags >> ((ulonglong)param_1 & 0x3f) & 1) != 0;
}

// SetAllChecked @ 14ba1a220

void __thiscall FDS_ChatCustomFilter::SetAllChecked(FDS_ChatCustomFilter *this)

{
  bool bVar1;
  UDS_ChatEvent *pUVar2;
  
  this->ChatTypeFlags = this->ChatTypeFlags | this->AllNormalTypeFlags;
  pUVar2 = UDS_ChatEvent::GetEvent();
  if (pUVar2 != (UDS_ChatEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar2->OnChangedCustomFilter);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar2->OnChangedCustomFilter).Delegate);
    }
  }
  this->ChatTypeFlags = this->ChatTypeFlags | this->AllSystemTypeFlags;
  pUVar2 = UDS_ChatEvent::GetEvent();
  if (pUVar2 != (UDS_ChatEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar2->OnChangedCustomFilter);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar2->OnChangedCustomFilter).Delegate);
      return;
    }
  }
  return;
}

// SetAllNormalTypeChecked @ 14ba1a2a0

void __thiscall
FDS_ChatCustomFilter::SetAllNormalTypeChecked(FDS_ChatCustomFilter *this,bool param_1)

{
  bool bVar1;
  UDS_ChatEvent *pUVar2;
  ulong64 uVar3;
  
  if (param_1) {
    uVar3 = this->ChatTypeFlags | this->AllNormalTypeFlags;
  }
  else {
    uVar3 = this->ChatTypeFlags & ~this->AllNormalTypeFlags;
  }
  this->ChatTypeFlags = uVar3;
  pUVar2 = UDS_ChatEvent::GetEvent();
  if (pUVar2 != (UDS_ChatEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar2->OnChangedCustomFilter);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar2->OnChangedCustomFilter).Delegate);
      return;
    }
  }
  return;
}

// SetAllSystemTypeChecked @ 14ba1a310

void __thiscall
FDS_ChatCustomFilter::SetAllSystemTypeChecked(FDS_ChatCustomFilter *this,bool param_1)

{
  bool bVar1;
  UDS_ChatEvent *pUVar2;
  ulong64 uVar3;
  
  if (param_1) {
    uVar3 = this->ChatTypeFlags | this->AllSystemTypeFlags;
  }
  else {
    uVar3 = this->ChatTypeFlags & ~this->AllSystemTypeFlags;
  }
  this->ChatTypeFlags = uVar3;
  pUVar2 = UDS_ChatEvent::GetEvent();
  if (pUVar2 != (UDS_ChatEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar2->OnChangedCustomFilter);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar2->OnChangedCustomFilter).Delegate);
      return;
    }
  }
  return;
}

// SetChattingTypeChecked @ 14ba1b020

void __thiscall
FDS_ChatCustomFilter::SetChattingTypeChecked
          (FDS_ChatCustomFilter *this,EDS_ChattingType param_1,bool param_2)

{
  bool bVar1;
  ulonglong uVar2;
  UDS_ChatEvent *pUVar3;
  ulong64 uVar4;
  
  uVar2 = 1L << (param_1 & 0x3f);
  if (param_2) {
    uVar4 = this->ChatTypeFlags | uVar2;
  }
  else {
    uVar4 = this->ChatTypeFlags & ~uVar2;
  }
  this->ChatTypeFlags = uVar4;
  pUVar3 = UDS_ChatEvent::GetEvent();
  if (pUVar3 != (UDS_ChatEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar3->OnChangedCustomFilter);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar3->OnChangedCustomFilter).Delegate);
      return;
    }
  }
  return;
}

