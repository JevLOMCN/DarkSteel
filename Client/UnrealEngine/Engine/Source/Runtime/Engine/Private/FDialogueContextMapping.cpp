// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// StaticStruct @ 147aa7df0

UScriptStruct * __cdecl FDialogueContextMapping::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDialogueContextMapping.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FDialogueContextMapping.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDialogueContextMapping,(UObject *)pUVar1,
                         L"DialogueContextMapping");
  }
  return Z_Registration_Info_UScriptStruct_FDialogueContextMapping.OuterSingleton;
}

// FDialogueContextMapping @ 147abb690

FDialogueContextMapping * __thiscall
FDialogueContextMapping::FDialogueContextMapping
          (FDialogueContextMapping *this,FDialogueContextMapping *param_1)

{
  UDialogueVoice *pUVar1;
  USoundWave *pUVar2;
  UDialogueSoundWaveProxy *pUVar3;
  
  pUVar1 = (param_1->Context).Speaker.field0_0x0.DebugPtr;
  (this->Context).Speaker.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDialogueVoice *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->Context).Targets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Context).Targets.AllocatorInstance.Data = (param_1->Context).Targets.AllocatorInstance.Data
  ;
  (param_1->Context).Targets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Context).Targets.ArrayNum = (param_1->Context).Targets.ArrayNum;
  (this->Context).Targets.ArrayMax = (param_1->Context).Targets.ArrayMax;
  (param_1->Context).Targets.ArrayNum = 0;
  (param_1->Context).Targets.ArrayMax = 0;
  pUVar2 = (param_1->SoundWave).field0_0x0.DebugPtr;
  (this->SoundWave).field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (USoundWave *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->LocalizationKeyFormat).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocalizationKeyFormat).Data.AllocatorInstance.Data =
       (param_1->LocalizationKeyFormat).Data.AllocatorInstance.Data;
  (param_1->LocalizationKeyFormat).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocalizationKeyFormat).Data.ArrayNum = (param_1->LocalizationKeyFormat).Data.ArrayNum;
  (this->LocalizationKeyFormat).Data.ArrayMax = (param_1->LocalizationKeyFormat).Data.ArrayMax;
  (param_1->LocalizationKeyFormat).Data.ArrayNum = 0;
  (param_1->LocalizationKeyFormat).Data.ArrayMax = 0;
  pUVar3 = (param_1->Proxy).field0_0x0.DebugPtr;
  (this->Proxy).field0_0x0.DebugPtr = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 != (UDialogueSoundWaveProxy *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  return this;
}

// FDialogueContextMapping @ 147abb750

FDialogueContextMapping * __thiscall
FDialogueContextMapping::FDialogueContextMapping(FDialogueContextMapping *this)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = &(this->Context).Targets.ArrayMax;
  (this->Context).Speaker.field0_0x0.DebugPtr = (UDialogueVoice *)0x0;
  (this->Context).Targets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Context).Targets.ArrayNum = 0;
  *piVar1 = 0;
  iVar2 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x808,&(this->Context).Targets.AllocatorInstance,piVar1);
  (this->Context).Targets.ArrayNum = iVar2 + 1;
  *(undefined8 *)((this->Context).Targets.AllocatorInstance.Data + (longlong)iVar2 * 8) = 0;
  (this->SoundWave).field0_0x0.DebugPtr = (USoundWave *)0x0;
  ::FString::FString(&this->LocalizationKeyFormat,L"{ContextHash}");
  (this->Proxy).field0_0x0.DebugPtr = (UDialogueSoundWaveProxy *)0x0;
  return this;
}

// GetLocalizationKey @ 147ae9050

FString * __thiscall
FDialogueContextMapping::GetLocalizationKey
          (FDialogueContextMapping *this,FString *__return_storage_ptr__,FString *param_1)

{
  FString local_18;
  
  GetLocalizationKey(this,&local_18);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s_%s");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetLocalizationKey @ 147ae90c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FDialogueContextMapping::GetLocalizationKey
          (FDialogueContextMapping *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UDialogueVoice *pUVar3;
  uint uVar4;
  ulonglong uVar5;
  wchar_t *pwVar6;
  FScriptContainerElement *pFVar7;
  undefined1 auVar8 [8];
  FGuid *pFVar9;
  undefined1 auStackY_128 [32];
  FIdentityFunctor local_f8 [8];
  undefined1 local_f0 [8];
  ulonglong local_e8;
  undefined1 local_e0 [8];
  FString local_d8;
  FString local_c8;
  FStringFormatArg local_b8;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  uVar4 = 0;
  local_6c = 0x80;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  pUVar3 = (this->Context).Speaker.field0_0x0.DebugPtr;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  if (pUVar3 != (UDialogueVoice *)0x0) {
    (*FCrc::MemCrc32Func)(&pUVar3->LocalizationGUID,0x10,0);
  }
  pFVar7 = (this->Context).Targets.AllocatorInstance.Data;
  iVar2 = (this->Context).Targets.ArrayNum;
  local_f0 = (undefined1  [8])0x0;
  local_e8 = 0;
  pFVar1 = pFVar7 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Context).Targets.ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDialogueVoice>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_f8);
    }
    if (pFVar7 == pFVar1) break;
    if (*(longlong *)pFVar7 != 0) {
      TArray<FGuid,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FGuid_const_&>
                ((TArray<FGuid,TSizedDefaultAllocator<32>_> *)local_f0,
                 (FGuid *)(*(longlong *)pFVar7 + 0x2c));
    }
    pFVar7 = pFVar7 + 8;
  }
  AlgoImpl::
  IntroSortInternal<FGuid,int,FIdentityFunctor,TDereferenceWrapper<FGuid,_FDialogueContext::GetContextHash_::__l2::<lambda_1>_>_>
            ((FGuid *)local_f0,(int)local_e8,local_f8[0],(<lambda_1> *)local_f8);
  iVar2 = (int)local_e8;
  uVar5 = (ulonglong)(int)local_e8;
  pFVar9 = (FGuid *)((longlong)local_f0 + uVar5 * 0x10);
  auVar8 = local_f0;
  while( true ) {
    if ((int)uVar5 != iVar2) {
      `TCheckedPointerIterator<FGuid,int,0>::operator!='::__l2::<lambda_1>::operator()(local_f8);
    }
    if (auVar8 == (undefined1  [8])pFVar9) break;
    uVar4 = (*FCrc::MemCrc32Func)((void *)auVar8,0x10,uVar4);
    auVar8 = (undefined1  [8])((longlong)auVar8 + 0x10);
    uVar5 = local_e8 & 0xffffffff;
  }
  ::FString::PrintfImpl(&local_c8,L"%08X%08X");
  if (local_f0 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_f0);
  }
  FStringFormatArg::FStringFormatArg(&local_b8,&local_c8);
  ::FString::FString(&local_d8,L"ContextHash");
  local_f0 = (undefined1  [8])&local_d8;
  local_e8 = (ulonglong)&local_b8;
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
            ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
              *)local_98,(TPairInitializer<FString_&&,FStringFormatArg_&&> *)local_e0,
             (bool *)local_f0);
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (local_b8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.StringValue.Data.AllocatorInstance.Data);
  }
  if ((this->LocalizationKeyFormat).Data.ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(this->LocalizationKeyFormat).Data.AllocatorInstance.Data;
  }
  ::FString::FormatImpl
            (__return_storage_ptr__,pwVar6,
             (TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
              *)local_98);
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,0,local_98._8_4_);
  iVar2 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  return __return_storage_ptr__;
}

