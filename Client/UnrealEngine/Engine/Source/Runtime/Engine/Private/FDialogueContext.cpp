// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// StaticStruct @ 147aa4e00

UScriptStruct * __cdecl FDialogueContext::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDialogueContext.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FDialogueContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDialogueContext,(UObject *)pUVar1,
                         L"DialogueContext");
  }
  return Z_Registration_Info_UScriptStruct_FDialogueContext.OuterSingleton;
}

// FDialogueContext @ 147abb630

FDialogueContext * __thiscall FDialogueContext::FDialogueContext(FDialogueContext *this)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = &(this->Targets).ArrayMax;
  (this->Speaker).field0_0x0.DebugPtr = (UDialogueVoice *)0x0;
  (this->Targets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Targets).ArrayNum = 0;
  *piVar1 = 0;
  iVar2 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x808,&(this->Targets).AllocatorInstance,piVar1);
  (this->Targets).ArrayNum = iVar2 + 1;
  *(undefined8 *)((this->Targets).AllocatorInstance.Data + (longlong)iVar2 * 8) = 0;
  return this;
}

// operator= @ 147ac0790

FDialogueContext * __thiscall
FDialogueContext::operator=(FDialogueContext *this,FDialogueContext *param_1)

{
  TArray<TObjectPtr<UDialogueVoice>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  UDialogueVoice *pUVar5;
  FScriptContainerElement *pFVar6;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar5 = (param_1->Speaker).field0_0x0.DebugPtr, pUVar5 != (UDialogueVoice *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->Speaker).field0_0x0 = (param_1->Speaker).field0_0x0;
  pTVar1 = &this->Targets;
  if (pTVar1 != &param_1->Targets) {
    iVar3 = (this->Targets).ArrayMax;
    piVar2 = &(this->Targets).ArrayMax;
    pFVar6 = (param_1->Targets).AllocatorInstance.Data;
    iVar4 = (param_1->Targets).ArrayNum;
    (this->Targets).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar4,iVar3,&pTVar1->AllocatorInstance,iVar4,piVar2);
      ConstructItems<TObjectPtr<UDialogueVoice>,TObjectPtr<UDialogueVoice>,int>
                ((pTVar1->AllocatorInstance).Data,(TObjectPtr<UDialogueVoice> *)pFVar6,iVar4);
    }
  }
  return this;
}

// operator() @ 147ac1c80

bool __thiscall
`FDialogueContext::GetContextHash'::__l2::<lambda_1>::operator()
          (void *this,FGuid *param_1,FGuid *param_2)

{
  int iVar1;
  ForAnyElementType FVar2;
  ForAnyElementType FVar3;
  FString local_28;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FGuid::AppendString(param_2,&local_18,Digits);
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FGuid::AppendString(param_1,&local_28,Digits);
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar3.Data = local_18.Data.AllocatorInstance.Data;
  }
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar2.Data = local_28.Data.AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar2.Data,(wchar_t *)FVar3.Data);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return SUB41((uint)iVar1 >> 0x1f,0);
}

// GetContextHash @ 147ae4b00

FString * __thiscall
FDialogueContext::GetContextHash(FDialogueContext *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UDialogueVoice *pUVar3;
  uint uVar4;
  ulonglong uVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  FGuid *pFVar8;
  FIdentityFunctor local_res8 [8];
  TArray<FGuid,TSizedDefaultAllocator<32>_> local_38;
  
  uVar4 = 0;
  pUVar3 = (this->Speaker).field0_0x0.DebugPtr;
  if (pUVar3 != (UDialogueVoice *)0x0) {
    (*FCrc::MemCrc32Func)(&pUVar3->LocalizationGUID,0x10,0);
  }
  pFVar6 = (this->Targets).AllocatorInstance.Data;
  iVar2 = (this->Targets).ArrayNum;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Targets).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDialogueVoice>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    if (*(longlong *)pFVar6 != 0) {
      TArray<FGuid,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FGuid_const_&>
                (&local_38,(FGuid *)(*(longlong *)pFVar6 + 0x2c));
    }
    pFVar6 = pFVar6 + 8;
  }
  AlgoImpl::
  IntroSortInternal<FGuid,int,FIdentityFunctor,TDereferenceWrapper<FGuid,_FDialogueContext::GetContextHash_::__l2::<lambda_1>_>_>
            ((FGuid *)local_38.AllocatorInstance.Data,local_38.ArrayNum,local_res8[0],
             (<lambda_1> *)local_res8);
  iVar2 = local_38.ArrayNum;
  uVar5 = (ulonglong)local_38.ArrayNum;
  pFVar8 = (FGuid *)(local_38.AllocatorInstance.Data + uVar5 * 0x10);
  FVar7.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar5 != iVar2) {
      `TCheckedPointerIterator<FGuid,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((FGuid *)FVar7.Data == pFVar8) break;
    uVar4 = (*FCrc::MemCrc32Func)(FVar7.Data,0x10,uVar4);
    FVar7.Data = FVar7.Data + 0x10;
    uVar5 = local_38._8_8_ & 0xffffffff;
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"%08X%08X");
  if ((FGuid *)local_38.AllocatorInstance.Data != (FGuid *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

