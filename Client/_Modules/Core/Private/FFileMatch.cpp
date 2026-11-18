// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// ShouldVisitLeafPathname @ 1416c1410

bool __thiscall
FileManagerGenericImpl::FFileMatch::ShouldVisitLeafPathname
          (FFileMatch *this,TStringView<wchar_t> *param_1)

{
  int iVar1;
  bool bVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  int iVar5;
  FString local_28;
  FString local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  pFVar3 = ::FString::ConstructFromPtrSize
                     (&local_18,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
  if (&local_28 != pFVar3) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    local_28.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = (pFVar3->Data).ArrayNum;
    local_28.Data.ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  iVar1 = (this->WildCard).Data.ArrayNum;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar5 = 0;
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(this->WildCard).Data.AllocatorInstance.Data;
  }
  bVar2 = ::FString::MatchesWildcard(&local_28,pwVar4,iVar5,IgnoreCase);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// Visit @ 1416c7f40

bool __thiscall
FileManagerGenericImpl::FFileMatch::Visit(FFileMatch *this,wchar_t *param_1,bool param_2)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FString *pFVar8;
  FScriptContainerElement *pFVar9;
  uint local_res18 [4];
  FScriptContainerElement *local_88;
  undefined8 local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  undefined8 local_48;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  FString local_28;
  
  local_res18[0] = 0;
  if (param_2) {
    cVar4 = this->bDirectories;
  }
  else {
    cVar4 = this->bFiles;
  }
  if (cVar4 == '\0') {
    return true;
  }
  ::FString::FString(&local_58,param_1);
  FPaths::GetCleanFilename(&local_78,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_48 = local_78.Data.AllocatorInstance.Data;
  pFVar9 = local_48;
  iStack_40 = local_78.Data.ArrayNum + -1;
  if (local_78.Data.ArrayNum == 0) {
    iStack_40 = 0;
  }
  local_48._0_4_ = SUB84(local_78.Data.AllocatorInstance.Data,0);
  local_48._4_4_ = (undefined4)((ulonglong)local_78.Data.AllocatorInstance.Data >> 0x20);
  local_38 = (undefined4)local_48;
  uStack_34 = local_48._4_4_;
  uStack_2c = uStack_3c;
  local_48 = pFVar9;
  iStack_30 = iStack_40;
  cVar4 = (**(code **)(this->_padding_ + 8))(this,&local_38);
  if (cVar4 == '\0') {
    local_res18[0] = local_res18[0] & 0xffffff00;
    bVar5 = `FileManagerGenericImpl::FFileMatch::Visit'::__l6::<lambda_1>::operator()(local_res18);
    if (!bVar5) goto LAB_1416c819b;
  }
  bVar5 = this->bStoreFullPath == false;
  if (bVar5) {
    pFVar8 = &local_68;
    local_68.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
    local_68.Data.ArrayNum = local_78.Data.ArrayNum;
    local_68.Data.ArrayMax = local_78.Data.ArrayMax;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    pFVar8 = ::FString::FString(&local_28,param_1);
  }
  local_88 = (pFVar8->Data).AllocatorInstance.Data;
  (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80._0_4_ = (pFVar8->Data).ArrayNum;
  local_80._4_4_ = (pFVar8->Data).ArrayMax;
  (pFVar8->Data).ArrayNum = 0;
  (pFVar8->Data).ArrayMax = 0;
  if ((bVar5) && (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if ((!bVar5) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  this_00 = &this->ResultLock;
  if ((this_00 == (FMutex *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  LOCK();
  bVar5 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar5) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar5) {
    UE::FMutex::LockSlow(this_00);
  }
  pTVar2 = this->Result;
  pFVar9 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar9 <= (FScriptContainerElement *)&local_88) &&
      ((FScriptContainerElement *)&local_88 < pFVar9 + (longlong)pTVar2->ArrayMax * 0x10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  iVar7 = pTVar2->ArrayNum;
  if (iVar7 == pTVar2->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
  }
  pTVar2->ArrayNum = iVar7 + 1;
  pFVar9 = (pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
  *(undefined8 *)pFVar9 = 0;
  *(FScriptContainerElement **)pFVar9 = local_88;
  local_88 = (void *)0x0;
  *(undefined4 *)(pFVar9 + 8) = (undefined4)local_80;
  *(undefined4 *)(pFVar9 + 0xc) = local_80._4_4_;
  local_80 = 0;
  if (this_00 != (FMutex *)0x0) {
    LOCK();
    aVar1 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(this_00);
    }
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
LAB_1416c819b:
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return true;
}

// operator() @ 150479bc0

bool __thiscall
`FileManagerGenericImpl::FFileMatch::Visit'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8198451591439711813>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8198451591439711813>,
                       &`public:___cdecl_`public:_virtual_bool___cdecl_FileManagerGenericImpl::FFileMatch::Visit(wchar_t_const*___ptr64,bool)___ptr64'::`6'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

