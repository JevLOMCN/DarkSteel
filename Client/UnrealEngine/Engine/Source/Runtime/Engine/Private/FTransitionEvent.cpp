// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FTransitionEvent @ 1474b37a0

FTransitionEvent * __thiscall
FTransitionEvent::FTransitionEvent(FTransitionEvent *this,FTransitionEvent *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<int> FVar3;
  ForElementType<int> _Dst;
  ForElementType<int> _Src;
  
  (this->ConsumedTransitions).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  FVar3 = (param_1->ConsumedTransitions).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->ConsumedTransitions).ArrayNum;
  (this->ConsumedTransitions).ArrayNum = iVar2;
  _Src = (ForElementType<int>)param_1;
  if (FVar3 != (ForElementType<int>)0x0) {
    _Src = FVar3;
  }
  piVar1 = &(this->ConsumedTransitions).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 8;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,iVar2,0,(ForElementType<int> *)this,iVar2,piVar1);
    FVar3 = (this->ConsumedTransitions).AllocatorInstance.SecondaryData;
    _Dst = (ForElementType<int>)this;
    if (FVar3 != (ForElementType<int>)0x0) {
      _Dst = FVar3;
    }
    memcpy((void *)_Dst,(void *)_Src,(longlong)iVar2 << 2);
  }
  this->CreationTime = param_1->CreationTime;
  this->TimeToLive = param_1->TimeToLive;
  this->EventName = param_1->EventName;
  this->QueueMode = param_1->QueueMode;
  this->OverwriteMode = param_1->OverwriteMode;
  return this;
}

// ToDebugString @ 1474fc130

FString * __thiscall
FTransitionEvent::ToDebugString(FTransitionEvent *this,FString *__return_storage_ptr__)

{
  int iVar1;
  ForElementType<int> FVar2;
  bool bVar3;
  ForAnyElementType FVar4;
  ForElementType<int> FVar5;
  int iVar6;
  LARGE_INTEGER local_res8;
  FString local_68;
  FString local_58;
  FString local_48 [2];
  
  FVar2 = (this->ConsumedTransitions).AllocatorInstance.SecondaryData;
  iVar1 = (this->ConsumedTransitions).ArrayNum;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  bVar3 = true;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  FVar5 = (ForElementType<int>)this;
  if (FVar2 != (ForElementType<int>)0x0) {
    FVar5 = FVar2;
  }
  FVar2 = (ForElementType<int>)((longlong)FVar5 + (longlong)iVar1 * 4);
  while( true ) {
    if ((this->ConsumedTransitions).ArrayNum != iVar1) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (FVar5 == FVar2) break;
    if (bVar3) {
      bVar3 = false;
    }
    else {
      ::FString::AppendChars(&local_68,L", ",2);
    }
    ::FString::PrintfImpl(&local_58,L"%d");
    iVar6 = local_58.Data.ArrayNum + -1;
    if (local_58.Data.ArrayNum == 0) {
      iVar6 = 0;
    }
    ::FString::AppendChars(&local_68,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar6);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    FVar5 = (ForElementType<int>)((longlong)FVar5 + 4);
  }
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar4.Data = local_68.Data.AllocatorInstance.Data;
  }
  ::FString::FString(local_48,(wchar_t *)FVar4.Data);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  QueryPerformanceCounter(&local_res8);
  ::FName::ToString(&this->EventName,&local_58);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s (%.2fs) [Handled by: %s]");
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

