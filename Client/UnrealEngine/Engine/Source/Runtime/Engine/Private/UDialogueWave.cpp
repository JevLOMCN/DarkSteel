// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 31

// StaticClass @ 147aa7ef0

UClass * __cdecl UDialogueWave::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDialogueWave.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DialogueWave",
               &Z_Registration_Info_UClass_UDialogueWave.InnerSingleton,
               StaticRegisterNativesUDialogueWave,0x70,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDialogueWave>,InternalVTableHelperCtorCaller<UDialogueWave>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDialogueWave.InnerSingleton;
}

// UDialogueWave @ 147abdea0

UDialogueWave * __thiscall UDialogueWave::UDialogueWave(UDialogueWave *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDialogueWave__6B_;
  (this->SpokenText).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpokenText).Data.ArrayNum = 0;
  (this->SpokenText).Data.ArrayMax = 0;
  (this->SubtitleOverride).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubtitleOverride).Data.ArrayNum = 0;
  (this->SubtitleOverride).Data.ArrayMax = 0;
  (this->ContextMappings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContextMappings).ArrayNum = 0;
  (this->ContextMappings).ArrayMax = 0;
  (this->LocalizationGUID).A = 0;
  (this->LocalizationGUID).B = 0;
  (this->LocalizationGUID).C = 0;
  (this->LocalizationGUID).D = 0;
  return this;
}

// UDialogueWave @ 147abdef0

UDialogueWave * __thiscall
UDialogueWave::UDialogueWave(UDialogueWave *this,FObjectInitializer *param_1)

{
  TObjectPtr<UDialogueVoice>_u_0 *pTVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  FGuid *pFVar9;
  UDialogueWave *pUVar10;
  FGuid local_68;
  FGuid local_58;
  TObjectPtr<UDialogueVoice>_u_0 local_48;
  ForAnyElementType FStack_40;
  undefined8 local_38;
  undefined8 local_30;
  FString local_28;
  undefined8 local_18;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDialogueWave__6B_;
  (this->SpokenText).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpokenText).Data.ArrayNum = 0;
  (this->SpokenText).Data.ArrayMax = 0;
  (this->SubtitleOverride).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubtitleOverride).Data.ArrayNum = 0;
  (this->SubtitleOverride).Data.ArrayMax = 0;
  (this->ContextMappings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContextMappings).ArrayNum = 0;
  (this->ContextMappings).ArrayMax = 0;
  bVar7 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (bVar7) {
    local_68.A = 0;
    local_68.B = 0;
    pFVar9 = &local_68;
    local_68.C = 0;
    local_68.D = 0;
  }
  else {
    pFVar9 = FGuid::NewGuid(&local_58);
  }
  uVar3 = pFVar9->A;
  uVar4 = pFVar9->B;
  uVar5 = pFVar9->C;
  uVar6 = pFVar9->D;
  this->bOverride_SubtitleOverride = 0;
  local_38 = 0;
  (this->LocalizationGUID).A = uVar3;
  (this->LocalizationGUID).B = uVar4;
  (this->LocalizationGUID).C = uVar5;
  (this->LocalizationGUID).D = uVar6;
  local_48.DebugPtr = (UDialogueVoice *)0x0;
  FStack_40.Data = (FScriptContainerElement *)0x0;
  iVar8 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x808,&FStack_40,(int *)((longlong)&local_38 + 4));
  local_38 = CONCAT44(local_38._4_4_,iVar8 + 1);
  *(undefined8 *)(FStack_40.Data + (longlong)iVar8 * 8) = 0;
  local_30 = 0;
  ::FString::FString(&local_28,L"{ContextHash}");
  pTVar1 = (TObjectPtr<UDialogueVoice>_u_0 *)(this->ContextMappings).AllocatorInstance.Data;
  local_18 = 0;
  if ((pTVar1 <= &local_48) && (&local_48 < pTVar1 + (longlong)(this->ContextMappings).ArrayMax * 7)
     ) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pUVar10 = (UDialogueWave *)(*pcVar2)();
      return pUVar10;
    }
  }
  iVar8 = (this->ContextMappings).ArrayNum;
  if (iVar8 == (this->ContextMappings).ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&(this->ContextMappings).AllocatorInstance,
                       &(this->ContextMappings).ArrayMax);
  }
  (this->ContextMappings).ArrayNum = iVar8 + 1;
  FDialogueContextMapping::FDialogueContextMapping
            ((FDialogueContextMapping *)
             ((this->ContextMappings).AllocatorInstance.Data + (longlong)iVar8 * 0x38),
             (FDialogueContextMapping *)&local_48.ObjectPtr);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (FStack_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_40.Data);
  }
  return this;
}

// ~UDialogueWave @ 147abfca0

void __thiscall UDialogueWave::~UDialogueWave(UDialogueWave *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDialogueWave__6B_;
  DestructItems<FDialogueContextMapping,int>
            ((FDialogueContextMapping *)(this->ContextMappings).AllocatorInstance.Data,
             (this->ContextMappings).ArrayNum);
  pFVar1 = (this->ContextMappings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SubtitleOverride).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SpokenText).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// BuildRecordedAudioFilename @ 147ac8730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
UDialogueWave::BuildRecordedAudioFilename
          (FString *__return_storage_ptr__,FString *param_1,FGuid *param_2,FString *param_3,
          FString *param_4,int param_5)

{
  FScriptContainerElement *_Src;
  ForAnyElementType FVar1;
  bool bVar2;
  FString *pFVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  undefined1 auStackY_168 [32];
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  FString local_f0;
  int local_e0;
  FStringFormatArg local_d8;
  FString local_b8;
  undefined1 local_a8 [32];
  void *local_88;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  ForElementType<FSetElementId> local_68;
  int local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_e0 = param_5;
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar5 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&DialogueWaveSuffix,L"_DialogueWave");
    atexit(`UDialogueWave::BuildRecordedAudioFilename'::__l2::
           _dynamic_atexit_destructor_for__DialogueWaveSuffix__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar5 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FString::FString(&DialogueSuffix,L"_Dialogue");
    atexit(`UDialogueWave::BuildRecordedAudioFilename'::__l2::
           _dynamic_atexit_destructor_for__DialogueSuffix__);
    _Init_thread_footer(&::_TSS1);
  }
  (*FCrc::MemCrc32Func)(param_2,0x10,0);
  ::FString::PrintfImpl(&local_b8,L"%08X");
  local_f0.Data.ArrayNum = (param_3->Data).ArrayNum;
  lVar6 = (longlong)local_f0.Data.ArrayNum;
  _Src = (param_3->Data).AllocatorInstance.Data;
  local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_f0.Data.ArrayNum == 0) {
    local_f0.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_f0.Data.ArrayNum,0,(ForAnyElementType *)&local_f0,local_f0.Data.ArrayNum,
               &local_f0.Data.ArrayMax);
    memcpy(local_f0.Data.AllocatorInstance.Data,_Src,lVar6 * 2);
  }
  pwVar7 = L"";
  iVar4 = DialogueWaveSuffix.Data.ArrayNum + -1;
  FVar1.Data = DialogueWaveSuffix.Data.AllocatorInstance.Data;
  if (DialogueWaveSuffix.Data.ArrayNum == 0) {
    iVar4 = 0;
    FVar1.Data = (FScriptContainerElement *)L"";
  }
  bVar2 = ::FString::RemoveFromEnd(&local_f0,(wchar_t *)FVar1.Data,iVar4,IgnoreCase);
  if (!bVar2) {
    iVar4 = DialogueSuffix.Data.ArrayNum + -1;
    FVar1 = DialogueSuffix.Data.AllocatorInstance;
    if (DialogueSuffix.Data.ArrayNum == 0) {
      iVar4 = 0;
      FVar1.Data = (FScriptContainerElement *)L"";
    }
    ::FString::RemoveFromEnd(&local_f0,(wchar_t *)FVar1.Data,iVar4,IgnoreCase);
  }
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._8_8_ = 0;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_7c = 0x80;
  local_78 = 0xffffffff;
  local_74 = 0;
  local_68 = (ForElementType<FSetElementId>)0x0;
  local_60 = 0;
  local_128._8_8_ = (FStringFormatArg *)0x0;
  local_118 = 0;
  FGuid::AppendString(param_2,(FString *)(local_128 + 8),Digits);
  FStringFormatArg::FStringFormatArg(&local_d8,(FString *)(local_128 + 8));
  ::FString::FString((FString *)local_100,L"DialogueGuid");
  local_110._0_8_ = local_100;
  local_110._8_8_ = &local_d8;
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
            ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
              *)local_a8,(TPairInitializer<FString_&&,FStringFormatArg_&&> *)local_128,
             (bool *)local_110);
  if ((FScriptContainerElement *)local_100._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_100._0_8_);
  }
  if (local_d8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.StringValue.Data.AllocatorInstance.Data);
  }
  FVar1.Data = local_b8.Data.AllocatorInstance.Data;
  local_128._8_8_ = (FStringFormatArg *)0x0;
  iVar4 = local_b8.Data.ArrayNum;
  local_118 = CONCAT44(local_118._4_4_,iVar4);
  if (iVar4 == 0) {
    local_118 = local_b8.Data._8_8_ & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar4,0,(ForAnyElementType *)(local_128 + 8),iVar4,
               (int *)((longlong)&local_118 + 4));
    memcpy((void *)local_128._8_8_,FVar1.Data,(longlong)iVar4 * 2);
  }
  FStringFormatArg::FStringFormatArg(&local_d8,(FString *)(local_128 + 8));
  ::FString::FString((FString *)local_110,L"DialogueHash");
  local_100._0_8_ = local_110;
  local_100._8_8_ = &local_d8;
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
            ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
              *)local_a8,(TPairInitializer<FString_&&,FStringFormatArg_&&> *)local_128,
             (bool *)local_100);
  if ((FScriptContainerElement *)local_110._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_110._0_8_);
  }
  if (local_d8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.StringValue.Data.AllocatorInstance.Data);
  }
  FVar1.Data = local_f0.Data.AllocatorInstance.Data;
  lVar6 = (longlong)local_f0.Data.ArrayNum;
  local_128._8_8_ = (FStringFormatArg *)0x0;
  local_118 = CONCAT44(local_118._4_4_,local_f0.Data.ArrayNum);
  if (local_f0.Data.ArrayNum == 0) {
    local_118 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_f0.Data.ArrayNum,0,(ForAnyElementType *)(local_128 + 8),
               local_f0.Data.ArrayNum,(int *)((longlong)&local_118 + 4));
    memcpy((void *)local_128._8_8_,FVar1.Data,lVar6 * 2);
  }
  FStringFormatArg::FStringFormatArg(&local_d8,(FString *)(local_128 + 8));
  ::FString::FString((FString *)local_110,L"DialogueName");
  local_100._0_8_ = local_110;
  local_100._8_8_ = &local_d8;
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
            ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
              *)local_a8,(TPairInitializer<FString_&&,FStringFormatArg_&&> *)local_128,
             (bool *)local_100);
  if ((FScriptContainerElement *)local_110._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_110._0_8_);
  }
  if (local_d8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.StringValue.Data.AllocatorInstance.Data);
  }
  pFVar3 = ::FString::FString((FString *)(local_128 + 8),param_4);
  FStringFormatArg::FStringFormatArg(&local_d8,pFVar3);
  ::FString::FString((FString *)local_110,L"ContextId");
  local_100._0_8_ = local_110;
  local_100._8_8_ = &local_d8;
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
            ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
              *)local_a8,(TPairInitializer<FString_&&,FStringFormatArg_&&> *)local_128,
             (bool *)local_100);
  if ((FScriptContainerElement *)local_110._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_110._0_8_);
  }
  if (local_d8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.StringValue.Data.AllocatorInstance.Data);
  }
  FStringFormatArg::FStringFormatArg(&local_d8,local_e0);
  ::FString::FString((FString *)local_110,L"ContextIndex");
  local_100._0_8_ = local_110;
  local_100._8_8_ = &local_d8;
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
            ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
              *)local_a8,(TPairInitializer<FString_&&,FStringFormatArg_&&> *)local_128,
             (bool *)local_100);
  if ((FScriptContainerElement *)local_110._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_110._0_8_);
  }
  if (local_d8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.StringValue.Data.AllocatorInstance.Data);
  }
  if ((param_1->Data).ArrayNum != 0) {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FString::FormatImpl
            (__return_storage_ptr__,pwVar7,
             (TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
              *)local_a8);
  local_60 = 0;
  if (local_68 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_68);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_a8,0,local_a8._8_4_);
  bVar2 = local_a8._12_4_ != 0;
  local_a8._8_8_ = (ulonglong)(uint)local_a8._12_4_ << 0x20;
  if (bVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)local_a8,0,(int *)(local_a8 + 0xc));
  }
  local_78 = 0xffffffff;
  local_74 = 0;
  local_80 = 0;
  if (0x80 < local_7c) {
    local_7c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),0);
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a8._0_8_);
  }
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// CopySoundBasePropertiesToProxy @ 147acbeb0

void __thiscall
UDialogueWave::CopySoundBasePropertiesToProxy
          (UDialogueWave *this,USoundBase *param_1,USoundBase *param_2)

{
  int *piVar1;
  TArray<FSoundSubmixSendInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  USoundClass *pUVar4;
  USoundAttenuation *pUVar5;
  USoundSubmixBase *pUVar6;
  FSoundSubmixSendInfo *pFVar7;
  USoundEffectSourcePresetChain *pUVar8;
  undefined1 uVar9;
  TEnumAsByte<EMaxConcurrentResolutionRule::Type> TVar10;
  undefined2 uVar11;
  float fVar12;
  FPerPlatformInt FVar13;
  EConcurrencyVolumeScaleMode EVar14;
  float fVar15;
  byte bVar16;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar4 = (param_1->SoundClassObject).field0_0x0.DebugPtr, pUVar4 != (USoundClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (param_2->SoundClassObject).field0_0x0 = (param_1->SoundClassObject).field0_0x0;
  bVar16 = (param_2->bDebug ^ param_1->bDebug) & 1 ^ param_2->field_0x40;
  param_2->field_0x40 = bVar16;
  bVar16 = (bVar16 ^ param_1->field_0x40) & 2 ^ bVar16;
  param_2->field_0x40 = bVar16;
  bVar16 = (bVar16 ^ param_1->field_0x40) & 4 ^ bVar16;
  param_2->field_0x40 = bVar16;
  bVar16 = (bVar16 ^ param_1->field_0x40) & 8 ^ bVar16;
  param_2->field_0x40 = bVar16;
  bVar16 = (bVar16 ^ param_1->field_0x40) & 0x10 ^ bVar16;
  param_2->field_0x40 = bVar16;
  bVar16 = (bVar16 ^ param_1->field_0x40) & 0x20 ^ bVar16;
  param_2->field_0x40 = bVar16;
  bVar16 = (bVar16 ^ param_1->field_0x40) & 0x40 ^ bVar16;
  param_2->field_0x40 = bVar16;
  param_2->VirtualizationMode = param_1->VirtualizationMode;
  param_2->field_0x40 = (bVar16 ^ param_1->field_0x40) & 0x7f ^ param_1->field_0x40;
  if (&param_2->ConcurrencySet != &param_1->ConcurrencySet) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              (&(param_2->ConcurrencySet).Hash,&(param_2->ConcurrencySet).HashSize,
               &(param_1->ConcurrencySet).Hash,(param_1->ConcurrencySet).HashSize);
    TSparseArray<TSparseSetElement<TObjectPtr<USoundConcurrency>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=(&(param_2->ConcurrencySet).Elements,&(param_1->ConcurrencySet).Elements);
  }
  uVar9 = (param_1->ConcurrencyOverrides).field_0x4;
  TVar10.Value = (param_1->ConcurrencyOverrides).ResolutionRule.Value;
  uVar11 = *(undefined2 *)&(param_1->ConcurrencyOverrides).field_0x6;
  fVar12 = (param_1->ConcurrencyOverrides).RetriggerTime;
  FVar13.Default = (param_1->ConcurrencyOverrides).PlatformMaxCount.Default;
  (param_2->ConcurrencyOverrides).MaxCount = (param_1->ConcurrencyOverrides).MaxCount;
  (param_2->ConcurrencyOverrides).field_0x4 = uVar9;
  (param_2->ConcurrencyOverrides).ResolutionRule =
       (TEnumAsByte<EMaxConcurrentResolutionRule::Type>)TVar10.Value;
  *(undefined2 *)&(param_2->ConcurrencyOverrides).field_0x6 = uVar11;
  (param_2->ConcurrencyOverrides).RetriggerTime = fVar12;
  (param_2->ConcurrencyOverrides).PlatformMaxCount = (FPerPlatformInt)FVar13.Default;
  EVar14 = (param_1->ConcurrencyOverrides).VolumeScaleMode;
  fVar12 = (param_1->ConcurrencyOverrides).VolumeScaleAttackTime;
  fVar15 = (param_1->ConcurrencyOverrides).VolumeScaleReleaseTime;
  (param_2->ConcurrencyOverrides).VolumeScale = (param_1->ConcurrencyOverrides).VolumeScale;
  (param_2->ConcurrencyOverrides).VolumeScaleMode = EVar14;
  (param_2->ConcurrencyOverrides).VolumeScaleAttackTime = fVar12;
  (param_2->ConcurrencyOverrides).VolumeScaleReleaseTime = fVar15;
  (param_2->ConcurrencyOverrides).VoiceStealReleaseTime =
       (param_1->ConcurrencyOverrides).VoiceStealReleaseTime;
  param_2->Duration = param_1->Duration;
  param_2->MaxDistance = param_1->MaxDistance;
  param_2->TotalSamples = param_1->TotalSamples;
  param_2->Priority = param_1->Priority;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 = (param_1->AttenuationSettings).field0_0x0.DebugPtr,
     pUVar5 != (USoundAttenuation *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (param_2->AttenuationSettings).field0_0x0 = (param_1->AttenuationSettings).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 = (param_1->SoundSubmixObject).field0_0x0.DebugPtr, pUVar6 != (USoundSubmixBase *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  pTVar2 = &param_2->SoundSubmixSends;
  (param_2->SoundSubmixObject).field0_0x0 = (param_1->SoundSubmixObject).field0_0x0;
  if (pTVar2 != &param_1->SoundSubmixSends) {
    DestructItems<FSoundSubmixSendInfo,int>
              ((FSoundSubmixSendInfo *)(pTVar2->AllocatorInstance).Data,
               (param_2->SoundSubmixSends).ArrayNum);
    iVar3 = (param_1->SoundSubmixSends).ArrayNum;
    piVar1 = &(param_2->SoundSubmixSends).ArrayMax;
    pFVar7 = (FSoundSubmixSendInfo *)(param_1->SoundSubmixSends).AllocatorInstance.Data;
    (param_2->SoundSubmixSends).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xb8,8,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
      ConstructItems<FSoundSubmixSendInfo,FSoundSubmixSendInfo,int>
                ((pTVar2->AllocatorInstance).Data,pFVar7,iVar3);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar8 = (param_1->SourceEffectChain).field0_0x0.DebugPtr,
     pUVar8 != (USoundEffectSourcePresetChain *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  (param_2->SourceEffectChain).field0_0x0 = (param_1->SourceEffectChain).field0_0x0;
  TArray<FSoundSourceBusSendInfo,TSizedDefaultAllocator<32>_>::operator=
            (&param_2->BusSends,&param_1->BusSends);
  TArray<FSoundSourceBusSendInfo,TSizedDefaultAllocator<32>_>::operator=
            (&param_2->PreEffectBusSends,&param_1->PreEffectBusSends);
  return;
}

// GetAssetRegistryTags @ 147ae3ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UDialogueWave::GetAssetRegistryTags
          (UDialogueWave *this,
          TArray<UObject::FAssetRegistryTag,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<UObject_const_*> *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  uchar *puVar6;
  bool bVar7;
  int iVar8;
  FAssetRegistryTagsContext *pFVar9;
  byte bVar10;
  ForElementType<UObject_const_*> *pFVar11;
  longlong lVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 auStackY_1d8 [32];
  undefined1 auStack_188 [8];
  UDialogueWave *pUStack_180;
  int iStack_178;
  int iStack_174;
  ForElementType<UObject_const_*> FStack_170;
  longlong *plStack_168;
  int iStack_160;
  uint uStack_15c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_158;
  undefined4 uStack_150;
  uint uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  longlong *plStack_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  FAssetRegistryTagsContext FStack_108;
  FString aFStack_100 [2];
  undefined4 uStack_d4;
  undefined1 auStack_c8 [32];
  uint *puStack_a8;
  uint uStack_a0;
  int iStack_94;
  void *pvStack_88;
  undefined4 uStack_80;
  FAssetBundleData *pFStack_68;
  bool bStack_53;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pFVar3 = (ForElementType<UObject_const_*> *)(lVar13 + 0xcb8);
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  puVar6 = pFVar11->InlineData;
  for (; pFVar11 !=
         (ForElementType<UObject_const_*> *)(puVar6 + (longlong)*(int *)(lVar13 + 0xcd0) * 8);
      pFVar11 = (ForElementType<UObject_const_*> *)(pFVar11->InlineData + 8)) {
    if (*(UDialogueWave **)pFVar11->InlineData == this) {
      return;
    }
  }
  FStack_170 = (ForElementType<UObject_const_*>)this;
  FAssetRegistryTagsContextData::FAssetRegistryTagsContextData
            ((FAssetRegistryTagsContextData *)auStack_c8,(UObject *)this,Uncategorized);
  bStack_53 = *(longlong *)(lVar13 + 0xcb0) != 0;
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  pUStack_180 = this;
  if (((pFVar11 <= (ForElementType<UObject_const_*> *)&pUStack_180) &&
      (&pUStack_180 < pFVar11->InlineData + (longlong)*(int *)(lVar13 + 0xcd4) * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = *(int *)(lVar13 + 0xcd0);
  if (iVar8 == *(int *)(lVar13 + 0xcd4)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_const_*>_>
                      (0x808,pFVar3,(int *)(lVar13 + 0xcd4));
  }
  *(int *)(lVar13 + 0xcd0) = iVar8 + 1;
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  *(UDialogueWave **)(pFVar11->InlineData + (longlong)iVar8 * 8) = pUStack_180;
  pcVar5 = *(code **)(this->_padding_ + 0x1b8);
  pFVar9 = FAssetRegistryTagsContext::FAssetRegistryTagsContext
                     (&FStack_108,(FAssetRegistryTagsContextData *)auStack_c8);
  (*pcVar5)(this,pFVar9);
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar13 + 0xcd0);
  if (iVar8 != 0) {
    uVar16 = 0;
    if ((int)(iVar8 - 1U) < iVar8) {
      uVar16 = ~(iVar8 - 1U) >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar12 = *(longlong *)(lVar13 + 0xcc8);
    if (*(longlong *)(lVar13 + 0xcc8) == 0) {
      lVar12 = lVar13 + 0xcb8;
    }
    if (*(UDialogueWave **)(lVar12 + -8 + (longlong)*(int *)(lVar13 + 0xcd0) * 8) == this)
    goto LAB_1420f919b;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("!GAssetRegistryTagsObjectsBeingForwarded.IsEmpty() && GAssetRegistryTagsObjectsBeingForwarded.Last() == this"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                     ,0x966,L"");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1420f919b:
  TArray<UObject_const_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::Pop
            ((TArray<UObject_const_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xcb8
             ),No);
  uVar16 = (auStack_c8._8_4_ - iStack_94) + param_1->ArrayNum;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  piVar1 = &param_1->ArrayMax;
  if (*piVar1 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar16,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar16 = uStack_a0;
  iStack_160 = 0;
  iStack_148 = 0;
  uStack_15c = 1;
  uStack_14c = 0;
  if (uStack_a0 != 0) {
    puVar17 = (uint *)(auStack_c8 + 0x10);
    if (puStack_a8 != (uint *)0x0) {
      puVar17 = puStack_a8;
    }
    uVar18 = *puVar17;
    while (uVar18 == 0) {
      lVar13 = (longlong)iStack_160;
      iStack_148 = iStack_148 + 0x20;
      iStack_160 = iStack_160 + 1;
      uStack_14c = uStack_a0;
      if ((int)((uStack_a0 - 1) + ((int)(uStack_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_160)
      goto LAB_1420f9291;
      uVar18 = puVar17[lVar13 + 1];
    }
    uStack_15c = -uVar18 & uVar18;
    uVar15 = (ulonglong)uStack_15c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_178 = (int)lVar13;
    uStack_14c = iStack_178 + -1 + iStack_148;
    if ((int)uStack_a0 < (int)uStack_14c) {
      uStack_14c = uStack_a0;
    }
  }
LAB_1420f9291:
  iStack_140 = auStack_c8._8_4_ - iStack_94;
  plStack_168 = (longlong *)auStack_c8;
  pTStack_158 = (TBitArray<FDefaultBitArrayAllocator> *)(auStack_c8 + 0x10);
  uStack_150 = 0xffffffff;
  TStack_130.CurrentBitIndex = uStack_14c;
  TStack_130.UnvisitedBitMask = 0xffffffff;
  uVar18 = uStack_a0 & 0xffffffe0;
  TStack_130._padding_ = CONCAT44(uStack_15c,iStack_160);
  uStack_144 = uStack_d4;
  iVar8 = (int)uStack_a0 >> 5;
  TStack_130._28_4_ = uStack_d4;
  TStack_130.BaseBitIndex = iStack_148;
  uStack_110 = CONCAT44(uStack_13c,iStack_140);
  bVar10 = (byte)uStack_a0;
  plStack_138 = plStack_168;
  TStack_130.Array = pTStack_158;
  if (((int)uStack_a0 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (uVar16 != uStack_a0) {
    puVar17 = (uint *)(auStack_c8 + 0x10);
    if (puStack_a8 != (uint *)0x0) {
      puVar17 = puStack_a8;
    }
    uVar16 = -1 << (bVar10 & 0x1f) & puVar17[iVar8];
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar8;
      uVar18 = uVar18 + 0x20;
      iVar8 = iVar8 + 1;
      uVar16 = uStack_a0;
      if ((int)((uStack_a0 - 1) + ((int)(uStack_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
      goto LAB_1420f9392;
      uVar16 = puVar17[lVar13 + 1];
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_174 = (int)lVar13;
    uVar16 = iStack_174 + -1 + uVar18;
    if ((int)uStack_a0 < (int)uVar16) {
      uVar16 = uStack_a0;
    }
  }
LAB_1420f9392:
  while( true ) {
    plVar4 = plStack_138;
    if ((int)plStack_138[1] - *(int *)((longlong)plStack_138 + 0x34) != (int)uStack_110) {
      auStack_188[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStack_188);
    }
    if (((TStack_130.CurrentBitIndex == uVar16) &&
        (TStack_130.Array == (TBitArray<FDefaultBitArrayAllocator> *)(auStack_c8 + 0x10))) &&
       (plVar4 == (longlong *)auStack_c8)) break;
    pFVar14 = (param_1->AllocatorInstance).Data;
    lVar13 = (longlong)TStack_130.CurrentBitIndex * 0x30 + *plVar4;
    pFVar2 = (FScriptContainerElement *)(lVar13 + 8);
    if (((pFVar14 <= pFVar2) && (pFVar2 < pFVar14 + (longlong)*piVar1 * 0x20)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = param_1->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&param_1->AllocatorInstance,piVar1);
    }
    param_1->ArrayNum = iVar8 + 1;
    pFVar14 = (param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x20;
    *(undefined8 *)pFVar14 = *(undefined8 *)pFVar2;
    *(undefined8 *)(pFVar14 + 8) = 0;
    *(undefined8 *)(pFVar14 + 8) = *(undefined8 *)(lVar13 + 0x10);
    *(undefined8 *)(lVar13 + 0x10) = 0;
    *(undefined4 *)(pFVar14 + 0x10) = *(undefined4 *)(lVar13 + 0x18);
    *(undefined4 *)(pFVar14 + 0x14) = *(undefined4 *)(lVar13 + 0x1c);
    *(undefined8 *)(lVar13 + 0x18) = 0;
    *(undefined4 *)(pFVar14 + 0x18) = *(undefined4 *)(lVar13 + 0x20);
    *(undefined4 *)(pFVar14 + 0x1c) = *(undefined4 *)(lVar13 + 0x24);
    TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
  }
  uVar15 = (ulonglong)_tls_index;
  plVar4 = *(longlong **)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0xcb0);
  if (plVar4 != (longlong *)0x0) {
    if (*plVar4 != 0) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)FStack_170,aFStack_100,(UObject *)0x0);
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("*TLegacyGetAssetRegistryTags_OutBundles == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                         ,0x970,L"Object %s has more than one FAssetBundleData!");
      if (aFStack_100[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(aFStack_100[0].Data.AllocatorInstance.Data);
      }
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    **(undefined8 **)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0xcb0) =
         pFStack_68;
  }
  uStack_80 = 0;
  if (pvStack_88 != (void *)0x0) {
    FMemory::Free(pvStack_88);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)auStack_c8);
  return;
}

// GetAssetRegistryTags @ 147ae3ad0

void __thiscall
UDialogueWave::GetAssetRegistryTags(UDialogueWave *this,FAssetRegistryTagsContext param_1)

{
  FAssetRegistryTagsContext FVar1;
  FAssetRegistryTagsContext local_res18 [2];
  
  FVar1.Data = (FAssetRegistryTagsContextData *)
               FAssetRegistryTagsContext::FAssetRegistryTagsContext(local_res18,param_1.Data);
  UObject::GetAssetRegistryTags((UObject *)this,FVar1);
  return;
}

// GetContextLocalizationKey @ 147ae4c30

FString * __thiscall
UDialogueWave::GetContextLocalizationKey
          (UDialogueWave *this,FString *__return_storage_ptr__,FDialogueContext *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  FDialogueContextMapping *pFVar4;
  FDialogueContextMapping *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->ContextMappings).ArrayNum;
  pFVar4 = (FDialogueContextMapping *)(this->ContextMappings).AllocatorInstance.Data;
  pFVar5 = pFVar4 + iVar1;
  while( true ) {
    if ((this->ContextMappings).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FDialogueContextMapping_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    if ((((pFVar4->Context).Speaker.field0_0x0.DebugPtr == (param_1->Speaker).field0_0x0.DebugPtr)
        && (iVar2 = (pFVar4->Context).Targets.ArrayNum, iVar2 == (param_1->Targets).ArrayNum)) &&
       (bVar3 = CompareItems<TObjectPtr<UDialogueVoice>,int>
                          ((TObjectPtr<UDialogueVoice> *)
                           (pFVar4->Context).Targets.AllocatorInstance.Data,
                           (TObjectPtr<UDialogueVoice> *)(param_1->Targets).AllocatorInstance.Data,
                           iVar2), bVar3)) {
      GetContextLocalizationKey(this,__return_storage_ptr__,pFVar4);
      return __return_storage_ptr__;
    }
    pFVar4 = pFVar4 + 1;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetContextLocalizationKey @ 147ae4ce0

FString * __thiscall
UDialogueWave::GetContextLocalizationKey
          (UDialogueWave *this,FString *__return_storage_ptr__,FDialogueContextMapping *param_1)

{
  FString local_28;
  FString local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FGuid::AppendString(&this->LocalizationGUID,&local_28,Digits);
  FDialogueContextMapping::GetLocalizationKey(param_1,&local_18);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s_%s");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetContextRecordedAudioFilename @ 147ae4d80

FString * __thiscall
UDialogueWave::GetContextRecordedAudioFilename
          (UDialogueWave *this,FString *__return_storage_ptr__,FDialogueContext *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  UObject *pUVar3;
  UDialogueVoice *pUVar4;
  bool bVar5;
  UClass *this_00;
  FString *pFVar6;
  FDialogueContextMapping *this_01;
  FDialogueContextMapping *pFVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FName local_res8;
  FString local_58;
  FString local_48;
  FString local_38;
  
  iVar8 = (this->ContextMappings).ArrayNum;
  this_01 = (FDialogueContextMapping *)(this->ContextMappings).AllocatorInstance.Data;
  pFVar7 = this_01 + iVar8;
  while( true ) {
    if ((this->ContextMappings).ArrayNum != iVar8) {
      `TCheckedPointerIterator<FDialogueContextMapping_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_res8);
    }
    if (this_01 == pFVar7) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      return __return_storage_ptr__;
    }
    if ((((this_01->Context).Speaker.field0_0x0.DebugPtr == (param_1->Speaker).field0_0x0.DebugPtr)
        && (iVar1 = (this_01->Context).Targets.ArrayNum, iVar1 == (param_1->Targets).ArrayNum)) &&
       (bVar5 = CompareItems<TObjectPtr<UDialogueVoice>,int>
                          ((TObjectPtr<UDialogueVoice> *)
                           (this_01->Context).Targets.AllocatorInstance.Data,
                           (TObjectPtr<UDialogueVoice> *)(param_1->Targets).AllocatorInstance.Data,
                           iVar1), bVar5)) break;
    this_01 = this_01 + 1;
  }
  this_00 = Z_Construct_UClass_UAudioSettings_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pFVar2 = (this->ContextMappings).AllocatorInstance.Data;
  iVar8 = (this->ContextMappings).ArrayNum;
  pUVar3 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pFVar2 != pFVar2 + (longlong)iVar8 * 0x38) {
    pUVar4 = (this_01->Context).Speaker.field0_0x0.DebugPtr;
    pFVar9 = pFVar2;
    do {
      if (((*(UDialogueVoice **)pFVar9 == pUVar4) &&
          (*(int *)(pFVar9 + 0x10) == (this_01->Context).Targets.ArrayNum)) &&
         ((bVar5 = CompareItems<TObjectPtr<UDialogueVoice>,int>
                             (*(TObjectPtr<UDialogueVoice> **)(pFVar9 + 8),
                              (TObjectPtr<UDialogueVoice> *)
                              (this_01->Context).Targets.AllocatorInstance.Data,
                              *(int *)(pFVar9 + 0x10)), bVar5 &&
          (*(USoundWave **)(pFVar9 + 0x18) == (this_01->SoundWave).field0_0x0.DebugPtr)))) {
        iVar8 = (int)(((longlong)pFVar9 - (longlong)pFVar2) / 0x38);
        goto LAB_147ae4e74;
      }
      pFVar9 = pFVar9 + 0x38;
    } while (pFVar9 != pFVar2 + (longlong)iVar8 * 0x38);
  }
  iVar8 = -1;
LAB_147ae4e74:
  pFVar6 = FDialogueContextMapping::GetLocalizationKey(this_01,&local_38);
  local_res8 = (FName)this->_padding_;
  ::FName::ToString(&local_res8,&local_48);
  BuildRecordedAudioFilename
            (&local_58,(FString *)&pUVar3[10].field_0x8,&this->LocalizationGUID,&local_48,pFVar6,
             iVar8);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s.wav");
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetContextRecordedAudioFilename @ 147ae4f80

FString * __thiscall
UDialogueWave::GetContextRecordedAudioFilename
          (UDialogueWave *this,FString *__return_storage_ptr__,FDialogueContextMapping *param_1)

{
  UObject *pUVar1;
  UDialogueVoice *pUVar2;
  bool bVar3;
  UClass *this_00;
  FString *pFVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FName local_res8;
  FString local_58;
  FString local_48;
  FString local_38;
  
  this_00 = Z_Construct_UClass_UAudioSettings_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar1 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  pFVar5 = (this->ContextMappings).AllocatorInstance.Data;
  pFVar7 = pFVar5 + (longlong)(this->ContextMappings).ArrayNum * 0x38;
  if (pFVar5 != pFVar7) {
    pUVar2 = (param_1->Context).Speaker.field0_0x0.DebugPtr;
    do {
      if ((((*(UDialogueVoice **)pFVar5 == pUVar2) &&
           (*(int *)(pFVar5 + 0x10) == (param_1->Context).Targets.ArrayNum)) &&
          (bVar3 = CompareItems<TObjectPtr<UDialogueVoice>,int>
                             (*(TObjectPtr<UDialogueVoice> **)(pFVar5 + 8),
                              (TObjectPtr<UDialogueVoice> *)
                              (param_1->Context).Targets.AllocatorInstance.Data,
                              *(int *)(pFVar5 + 0x10)), bVar3)) &&
         (*(USoundWave **)(pFVar5 + 0x18) == (param_1->SoundWave).field0_0x0.DebugPtr)) {
        iVar6 = (int)(((longlong)pFVar5 - (longlong)(this->ContextMappings).AllocatorInstance.Data)
                     / 0x38);
        goto LAB_147ae502c;
      }
      pFVar5 = pFVar5 + 0x38;
    } while (pFVar5 != pFVar7);
  }
  iVar6 = -1;
LAB_147ae502c:
  pFVar4 = FDialogueContextMapping::GetLocalizationKey(param_1,&local_38);
  local_res8 = (FName)this->_padding_;
  ::FName::ToString(&local_res8,&local_48);
  BuildRecordedAudioFilename
            (&local_58,(FString *)&pUVar1[10].field_0x8,&this->LocalizationGUID,&local_48,pFVar4,
             iVar6);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s.wav");
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetDesc @ 147ae64c0

FString * __thiscall UDialogueWave::GetDesc(UDialogueWave *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"Dialogue Wave Description");
  return __return_storage_ptr__;
}

// GetLocalizedSpokenText @ 147ae9360

FText * __thiscall
UDialogueWave::GetLocalizedSpokenText
          (UDialogueWave *this,FText *__return_storage_ptr__,FDialogueContext *param_1)

{
  int iVar1;
  int iVar2;
  ITextData *pIVar3;
  bool bVar4;
  FText *pFVar5;
  FDialogueContextMapping *pFVar6;
  FDialogueContextMapping *pFVar7;
  undefined1 local_res8 [8];
  
  iVar1 = (this->ContextMappings).ArrayNum;
  pFVar6 = (FDialogueContextMapping *)(this->ContextMappings).AllocatorInstance.Data;
  pFVar7 = pFVar6 + iVar1;
  while( true ) {
    if ((this->ContextMappings).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FDialogueContextMapping_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar6 == pFVar7) break;
    if ((((pFVar6->Context).Speaker.field0_0x0.DebugPtr == (param_1->Speaker).field0_0x0.DebugPtr)
        && (iVar2 = (pFVar6->Context).Targets.ArrayNum, iVar2 == (param_1->Targets).ArrayNum)) &&
       (bVar4 = CompareItems<TObjectPtr<UDialogueVoice>,int>
                          ((TObjectPtr<UDialogueVoice> *)
                           (pFVar6->Context).Targets.AllocatorInstance.Data,
                           (TObjectPtr<UDialogueVoice> *)(param_1->Targets).AllocatorInstance.Data,
                           iVar2), bVar4)) {
      GetLocalizedSpokenText(this,__return_storage_ptr__,pFVar6);
      return __return_storage_ptr__;
    }
    pFVar6 = pFVar6 + 1;
  }
  pFVar5 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar3 = (pFVar5->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar3;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res8);
  }
  __return_storage_ptr__->Flags = pFVar5->Flags;
  return __return_storage_ptr__;
}

// GetLocalizedSpokenText @ 147ae9430

FText * __thiscall
UDialogueWave::GetLocalizedSpokenText
          (UDialogueWave *this,FText *__return_storage_ptr__,FDialogueContextMapping *param_1)

{
  int iVar1;
  bool bVar2;
  FTextKey local_res18 [2];
  FTextKey local_res20 [2];
  FString local_58;
  FText local_48;
  FString local_38;
  TStringView<wchar_t> local_28;
  
  if ((param_1->Context).Speaker.field0_0x0.DebugPtr != (UDialogueVoice *)0x0) {
    FText::FText(&local_48);
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    FGuid::AppendString(&this->LocalizationGUID,&local_58,Digits);
    FDialogueContextMapping::GetLocalizationKey(param_1,&local_38);
    ::FString::PrintfImpl((FString *)&local_28,L"%s_%s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    FTextKey::FTextKey(local_res18,(FString *)&local_28);
    FTextKey::FTextKey(local_res20,&FDialogueConstants::DialogueNamespace);
    bVar2 = FText::FindTextInLiveTable_Advanced(local_res20,local_res18,&local_48,&this->SpokenText)
    ;
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
    if (bVar2) {
      FText::FText(__return_storage_ptr__,&local_48);
      if (local_48.TextData.Reference == (ITextData *)0x0) {
        return __return_storage_ptr__;
      }
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      return __return_storage_ptr__;
    }
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
  }
  local_28.DataPtr = (wchar_t *)(this->SpokenText).Data.AllocatorInstance.Data;
  iVar1 = (this->SpokenText).Data.ArrayNum;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_28.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_28.Size = 0;
  }
  FGuid::AppendString(&this->LocalizationGUID,&local_58,Digits);
  FTextKey::FTextKey(local_res18,&local_58);
  FTextKey::FTextKey(local_res20,&FDialogueConstants::DialogueNamespace);
  FText::AsLocalizable_Advanced(__return_storage_ptr__,local_res20,local_res18,&local_28);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetLocalizedSpokenText @ 147ae95e0

FText * __thiscall
UDialogueWave::GetLocalizedSpokenText(UDialogueWave *this,FText *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  FTextKey local_res8 [2];
  FTextKey local_res10 [6];
  FString local_28;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = (wchar_t *)(this->SpokenText).Data.AllocatorInstance.Data;
  iVar1 = (this->SpokenText).Data.ArrayNum;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  local_18.Size = iVar2;
  FGuid::AppendString(&this->LocalizationGUID,&local_28,Digits);
  FTextKey::FTextKey(local_res8,&local_28);
  FTextKey::FTextKey(local_res10,&FDialogueConstants::DialogueNamespace);
  FText::AsLocalizable_Advanced(__return_storage_ptr__,local_res10,local_res8,&local_18);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetLocalizedSubtitle @ 147ae9690

FText * __thiscall
UDialogueWave::GetLocalizedSubtitle
          (UDialogueWave *this,FText *__return_storage_ptr__,FDialogueContext *param_1)

{
  int iVar1;
  int iVar2;
  ITextData *pIVar3;
  bool bVar4;
  FText *pFVar5;
  FDialogueContextMapping *pFVar6;
  FDialogueContextMapping *pFVar7;
  undefined1 local_res8 [8];
  
  iVar1 = (this->ContextMappings).ArrayNum;
  pFVar6 = (FDialogueContextMapping *)(this->ContextMappings).AllocatorInstance.Data;
  pFVar7 = pFVar6 + iVar1;
  while( true ) {
    if ((this->ContextMappings).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FDialogueContextMapping_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar6 == pFVar7) break;
    if ((((pFVar6->Context).Speaker.field0_0x0.DebugPtr == (param_1->Speaker).field0_0x0.DebugPtr)
        && (iVar2 = (pFVar6->Context).Targets.ArrayNum, iVar2 == (param_1->Targets).ArrayNum)) &&
       (bVar4 = CompareItems<TObjectPtr<UDialogueVoice>,int>
                          ((TObjectPtr<UDialogueVoice> *)
                           (pFVar6->Context).Targets.AllocatorInstance.Data,
                           (TObjectPtr<UDialogueVoice> *)(param_1->Targets).AllocatorInstance.Data,
                           iVar2), bVar4)) {
      GetLocalizedSubtitle(this,__return_storage_ptr__,pFVar6);
      return __return_storage_ptr__;
    }
    pFVar6 = pFVar6 + 1;
  }
  pFVar5 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar3 = (pFVar5->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar3;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res8);
  }
  __return_storage_ptr__->Flags = pFVar5->Flags;
  return __return_storage_ptr__;
}

// GetLocalizedSubtitle @ 147ae9760

FText * __thiscall
UDialogueWave::GetLocalizedSubtitle
          (UDialogueWave *this,FText *__return_storage_ptr__,FDialogueContextMapping *param_1)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  FTextKey local_res18 [2];
  FTextKey local_res20 [2];
  FString local_58;
  FText local_48;
  FString local_38;
  TStringView<wchar_t> local_28;
  
  if ((param_1->Context).Speaker.field0_0x0.DebugPtr != (UDialogueVoice *)0x0) {
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    FGuid::AppendString(&this->LocalizationGUID,&local_58,Digits);
    FDialogueContextMapping::GetLocalizationKey(param_1,(FString *)&local_28);
    ::FString::PrintfImpl(&local_38,L"%s_%s");
    if ((ITextData *)local_28.DataPtr != (ITextData *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (this->bOverride_SubtitleOverride == 0) {
      lVar3 = 0x30;
    }
    else {
      iVar4 = FDialogueConstants::SubtitleKeySuffix.Data.ArrayNum + -1;
      if (FDialogueConstants::SubtitleKeySuffix.Data.ArrayNum == 0) {
        iVar4 = 0;
      }
      ::FString::AppendChars
                (&local_38,
                 (wchar_t *)FDialogueConstants::SubtitleKeySuffix.Data.AllocatorInstance.Data,iVar4)
      ;
      lVar3 = 0x40;
    }
    FText::FText(&local_48);
    FTextKey::FTextKey(local_res18,&local_38);
    FTextKey::FTextKey(local_res20,&FDialogueConstants::DialogueNamespace);
    bVar1 = FText::FindTextInLiveTable_Advanced
                      (local_res20,local_res18,&local_48,
                       (FString *)((longlong)&this->_padding_ + lVar3));
    if (bVar1) {
      FText::FText(__return_storage_ptr__,&local_48);
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      }
      goto LAB_147ae9958;
    }
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  local_48.TextData.Reference = (ITextData *)(this->SpokenText).Data.AllocatorInstance.Data;
  iVar4 = (this->SpokenText).Data.ArrayNum;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  uVar2 = 0;
  local_48.Flags = iVar4 - 1;
  if (iVar4 == 0) {
    local_48.Flags = uVar2;
  }
  FGuid::AppendString(&this->LocalizationGUID,&local_58,Digits);
  if (this->bOverride_SubtitleOverride != 0) {
    iVar4 = (this->SubtitleOverride).Data.ArrayNum;
    local_48.TextData.Reference = (ITextData *)(this->SubtitleOverride).Data.AllocatorInstance.Data;
    local_48.Flags = iVar4 - 1;
    if (iVar4 == 0) {
      local_48.Flags = uVar2;
    }
    local_48._12_4_ = local_28._12_4_;
    uVar5 = FDialogueConstants::SubtitleKeySuffix.Data.ArrayNum - 1;
    if (FDialogueConstants::SubtitleKeySuffix.Data.ArrayNum == 0) {
      uVar5 = uVar2;
    }
    ::FString::AppendChars
              (&local_58,
               (wchar_t *)FDialogueConstants::SubtitleKeySuffix.Data.AllocatorInstance.Data,uVar5);
  }
  FTextKey::FTextKey(local_res18,&local_58);
  FTextKey::FTextKey(local_res20,&FDialogueConstants::DialogueNamespace);
  local_28._12_4_ = local_48._12_4_;
  local_28.Size = local_48.Flags;
  local_28.DataPtr = (wchar_t *)local_48.TextData.Reference;
  FText::AsLocalizable_Advanced(__return_storage_ptr__,local_res20,local_res18,&local_28);
  local_38.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
LAB_147ae9958:
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetLocalizedSubtitle @ 147ae9980

FText * __thiscall
UDialogueWave::GetLocalizedSubtitle(UDialogueWave *this,FText *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FTextKey local_res8 [2];
  FTextKey local_res10 [2];
  FString local_28;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = (wchar_t *)(this->SpokenText).Data.AllocatorInstance.Data;
  iVar3 = (this->SpokenText).Data.ArrayNum;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  iVar1 = 0;
  iVar2 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar2 = iVar1;
  }
  local_18.Size = iVar2;
  FGuid::AppendString(&this->LocalizationGUID,&local_28,Digits);
  if (this->bOverride_SubtitleOverride != 0) {
    iVar3 = (this->SubtitleOverride).Data.ArrayNum;
    local_18.DataPtr = (wchar_t *)(this->SubtitleOverride).Data.AllocatorInstance.Data;
    local_18.Size = iVar3 + -1;
    if (iVar3 == 0) {
      local_18.Size = iVar1;
    }
    iVar3 = FDialogueConstants::SubtitleKeySuffix.Data.ArrayNum + -1;
    if (FDialogueConstants::SubtitleKeySuffix.Data.ArrayNum == 0) {
      iVar3 = iVar1;
    }
    ::FString::AppendChars
              (&local_28,
               (wchar_t *)FDialogueConstants::SubtitleKeySuffix.Data.AllocatorInstance.Data,iVar3);
  }
  FTextKey::FTextKey(local_res8,&local_28);
  FTextKey::FTextKey(local_res10,&FDialogueConstants::DialogueNamespace);
  FText::AsLocalizable_Advanced(__return_storage_ptr__,local_res10,local_res8,&local_18);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 147aebb70

UClass * __cdecl UDialogueWave::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDialogueWave.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DialogueWave",
               &Z_Registration_Info_UClass_UDialogueWave.InnerSingleton,
               StaticRegisterNativesUDialogueWave,0x70,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDialogueWave>,InternalVTableHelperCtorCaller<UDialogueWave>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDialogueWave.InnerSingleton;
}

// GetWaveFromContext @ 147aef110

/* WARNING: Enum "Type": Some values do not have unique names */

USoundBase * __thiscall
UDialogueWave::GetWaveFromContext(UDialogueWave *this,FDialogueContext *param_1)

{
  int iVar1;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res10 [8];
  FString local_28;
  
  if ((param_1->Speaker).field0_0x0.DebugPtr == (UDialogueVoice *)0x0) {
    if (2 < (byte)LogAudio._0_1_) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_28,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    return (USoundBase *)0x0;
  }
  pFVar3 = (this->ContextMappings).AllocatorInstance.Data;
  iVar1 = (this->ContextMappings).ArrayNum;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x38;
  while( true ) {
    if ((this->ContextMappings).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FDialogueContextMapping_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    if (pFVar3 == pFVar4) break;
    if (((*(UDialogueVoice **)pFVar3 == (param_1->Speaker).field0_0x0.DebugPtr) &&
        (*(int *)(pFVar3 + 0x10) == (param_1->Targets).ArrayNum)) &&
       (bVar2 = CompareItems<TObjectPtr<UDialogueVoice>,int>
                          (*(TObjectPtr<UDialogueVoice> **)(pFVar3 + 8),
                           (TObjectPtr<UDialogueVoice> *)(param_1->Targets).AllocatorInstance.Data,
                           *(int *)(pFVar3 + 0x10)), bVar2)) {
      return *(USoundBase **)(pFVar3 + 0x30);
    }
    pFVar3 = pFVar3 + 0x38;
  }
  return (USoundBase *)0x0;
}

// GetWaveFromContext @ 147aef210

/* WARNING: Enum "Type": Some values do not have unique names */

USoundBase * __thiscall
UDialogueWave::GetWaveFromContext(UDialogueWave *this,FDialogueContextMapping *param_1)

{
  FString local_18;
  
  if ((param_1->Context).Speaker.field0_0x0.DebugPtr == (UDialogueVoice *)0x0) {
    if (2 < (byte)LogAudio._0_1_) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    return (USoundBase *)0x0;
  }
  return (USoundBase *)(param_1->Proxy).field0_0x0.DebugPtr;
}

// IsReadyForFinishDestroy @ 147af4ab0

bool __thiscall UDialogueWave::IsReadyForFinishDestroy(UDialogueWave *this)

{
  return true;
}

// PostDuplicate @ 147afca40

void __thiscall UDialogueWave::PostDuplicate(UDialogueWave *this,bool param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FGuid *pFVar4;
  FGuid local_18;
  
  if (!param_1) {
    pFVar4 = FGuid::NewGuid(&local_18);
    uVar1 = pFVar4->B;
    uVar2 = pFVar4->C;
    uVar3 = pFVar4->D;
    (this->LocalizationGUID).A = pFVar4->A;
    (this->LocalizationGUID).B = uVar1;
    (this->LocalizationGUID).C = uVar2;
    (this->LocalizationGUID).D = uVar3;
  }
  return;
}

// PostLoad @ 147afcc40

void __thiscall UDialogueWave::PostLoad(UDialogueWave *this)

{
  int iVar1;
  FDialogueContextMapping *pFVar2;
  FDialogueContextMapping *pFVar3;
  undefined1 local_res8 [8];
  
  UObject::PostLoad((UObject *)this);
  iVar1 = (this->ContextMappings).ArrayNum;
  pFVar2 = (FDialogueContextMapping *)(this->ContextMappings).AllocatorInstance.Data;
  pFVar3 = pFVar2 + iVar1;
  while( true ) {
    if ((this->ContextMappings).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FDialogueContextMapping,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    UpdateMappingProxy(this,pFVar2);
    pFVar2 = pFVar2 + 1;
  }
  return;
}

// Serialize @ 147b11390

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDialogueWave::Serialize(UDialogueWave *this,FArchive *param_1)

{
  undefined1 *puVar1;
  uint *puVar2;
  ulonglong *puVar3;
  uint uVar4;
  bool bVar5;
  uint local_res10 [2];
  FString local_18;
  
  UObject::Serialize((UObject *)this,param_1);
  FArchiveState::ThisRequiresLocalizationGather((FArchiveState *)param_1);
  if ((*(longlong *)&param_1->field_0x68 == 0) ||
     (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  bVar5 = SUB41(uVar4,0);
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = &param_1->field_0x28;
  puVar2 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar2) {
    local_res10[0] = 0;
    if ((*puVar1 & 1) == 0) {
      local_res10[0] = uVar4;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10);
    if (1 < local_res10[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar4 = local_res10[0];
    if ((*puVar1 & 1) == 0) goto LAB_147b11439;
  }
  else {
    uVar4 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar2;
  }
  bVar5 = uVar4 != 0;
LAB_147b11439:
  if ((bVar5 == false) && ((*puVar1 & 1) != 0)) {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0,None);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Serialize @ 147b114b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDialogueWave::Serialize(UDialogueWave *this,FStructuredArchiveRecord param_1)

{
  undefined1 *puVar1;
  uint *puVar2;
  FFastPathLoadBuffer *pFVar3;
  FArchiveState *this_00;
  uint uVar4;
  bool bVar5;
  uint local_res10 [2];
  FSlotBase local_res18 [2];
  FString local_28;
  
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
  UObject::Serialize((UObject *)this,(FArchive *)this_00);
  FArchiveState::ThisRequiresLocalizationGather(this_00);
  if ((this_00->SavePackageData == (FArchiveSavePackageData *)0x0) ||
     (this_00->SavePackageData->CookContext == (FArchiveCookContext *)0x0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  bVar5 = SUB41(uVar4,0);
  pFVar3 = this_00->ActiveFPLB;
  puVar2 = (uint *)((longlong)pFVar3->StartFastPathLoadBuffer + 4);
  if (pFVar3->EndFastPathLoadBuffer < puVar2) {
    local_res10[0] = 0;
    if (this_00->ArIsLoading == 0) {
      local_res10[0] = uVar4;
    }
    (**(code **)(this_00->_padding_ + 0x188))(this_00,local_res10);
    if (1 < local_res10[0]) {
      FArchiveState::SetError(this_00);
    }
    uVar4 = local_res10[0];
    if (this_00->ArIsLoading == 0) goto LAB_147b1156e;
  }
  else {
    uVar4 = *(uint *)pFVar3->StartFastPathLoadBuffer;
    pFVar3->StartFastPathLoadBuffer = (uchar *)puVar2;
  }
  bVar5 = uVar4 != 0;
LAB_147b1156e:
  if ((bVar5 == false) && (this_00->ArIsLoading != 0)) {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_28,(UObject *)0x0,None);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// StaticRegisterNativesUDialogueWave @ 147b17330

void __cdecl UDialogueWave::StaticRegisterNativesUDialogueWave(void)

{
  return;
}

// SupportsContext @ 147b17820

bool __thiscall UDialogueWave::SupportsContext(UDialogueWave *this,FDialogueContext *param_1)

{
  int iVar1;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->ContextMappings).ArrayNum;
  pFVar3 = (this->ContextMappings).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x38;
  while( true ) {
    if ((this->ContextMappings).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FDialogueContextMapping_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    if (((*(UDialogueVoice **)pFVar3 == (param_1->Speaker).field0_0x0.DebugPtr) &&
        (*(int *)(pFVar3 + 0x10) == (param_1->Targets).ArrayNum)) &&
       (bVar2 = CompareItems<TObjectPtr<UDialogueVoice>,int>
                          (*(TObjectPtr<UDialogueVoice> **)(pFVar3 + 8),
                           (TObjectPtr<UDialogueVoice> *)(param_1->Targets).AllocatorInstance.Data,
                           *(int *)(pFVar3 + 0x10)), bVar2)) {
      return true;
    }
    pFVar3 = pFVar3 + 0x38;
  }
  return false;
}

// UpdateContext @ 147b22180

void __thiscall
UDialogueWave::UpdateContext
          (UDialogueWave *this,FDialogueContextMapping *param_1,USoundWave *param_2,
          UDialogueVoice *param_3,TArray<UDialogueVoice_*,TSizedDefaultAllocator<32>_> *param_4)

{
  TArray<TObjectPtr<UDialogueVoice>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_2 != (USoundWave *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (param_1->SoundWave).field0_0x0.DebugPtr = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UDialogueVoice *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_3);
  }
  (param_1->Context).Speaker.field0_0x0.DebugPtr = param_3;
  pTVar1 = &(param_1->Context).Targets;
  iVar3 = (param_1->Context).Targets.ArrayMax;
  piVar2 = &(param_1->Context).Targets.ArrayMax;
  iVar4 = param_4->ArrayNum;
  pFVar5 = (param_4->AllocatorInstance).Data;
  (param_1->Context).Targets.ArrayNum = iVar4;
  if ((iVar4 == 0) && (iVar3 == 0)) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar4,iVar3,&pTVar1->AllocatorInstance,iVar4,piVar2);
    ConstructItems<TObjectPtr<UDialogueVoice>,UDialogueVoice_*,int>
              ((pTVar1->AllocatorInstance).Data,(UDialogueVoice **)pFVar5,iVar4);
  }
  UpdateMappingProxy(this,param_1);
  return;
}

// UpdateMappingProxy @ 147b22290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDialogueWave::UpdateMappingProxy(UDialogueWave *this,FDialogueContextMapping *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UDialogueSoundWaveProxy *pUVar8;
  FText *pFVar9;
  longlong lVar10;
  TArray<FSubtitleCue,TSizedDefaultAllocator<32>_> *pTVar11;
  longlong *plVar12;
  undefined1 auStackY_128 [32];
  FText local_d8;
  undefined4 local_c8;
  undefined1 local_c0 [8];
  FText local_b8;
  FText local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if ((param_1->SoundWave).field0_0x0.DebugPtr == (USoundWave *)0x0) {
    (param_1->Proxy).field0_0x0.DebugPtr = (UDialogueSoundWaveProxy *)0x0;
  }
  else {
    pUVar8 = (param_1->Proxy).field0_0x0.DebugPtr;
    if (pUVar8 == (UDialogueSoundWaveProxy *)0x0) {
      pUVar6 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar6,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar7 = Z_Construct_UClass_UDialogueSoundWaveProxy_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_98,pUVar7);
      local_98._8_8_ = pUVar6;
      pUVar8 = (UDialogueSoundWaveProxy *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
      if (local_98._64_8_ != 0) {
        plVar12 = (longlong *)(local_98 + 0x50);
        if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
          plVar12 = (longlong *)local_98._104_8_;
        }
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar8 != (UDialogueSoundWaveProxy *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      (param_1->Proxy).field0_0x0.DebugPtr = pUVar8;
      if (pUVar8 == (UDialogueSoundWaveProxy *)0x0) {
        return;
      }
    }
    pUVar8->SoundWave = (USoundWave *)(param_1->SoundWave).field0_0x0;
    CopySoundBasePropertiesToProxy
              (this,(USoundBase *)(param_1->SoundWave).field0_0x0.DebugPtr,
               (USoundBase *)(param_1->Proxy).field0_0x0.DebugPtr);
    pFVar9 = GetLocalizedSubtitle(this,&local_b8,param_1);
    FText::operator=(&((param_1->Proxy).field0_0x0.DebugPtr)->SubtitleText,pFVar9);
    if (local_b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
    }
    FText::FText(&local_d8);
    local_c8 = 0;
    pFVar9 = GetLocalizedSubtitle(this,&local_a8,param_1);
    FText::operator=(&local_d8,pFVar9);
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
    }
    pUVar8 = (param_1->Proxy).field0_0x0.DebugPtr;
    local_c8 = 0;
    DestructItems<FSubtitleCue,int>
              ((FSubtitleCue *)(pUVar8->Subtitles).AllocatorInstance.Data,
               (pUVar8->Subtitles).ArrayNum);
    piVar1 = &(pUVar8->Subtitles).ArrayMax;
    (pUVar8->Subtitles).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&(pUVar8->Subtitles).AllocatorInstance,0,piVar1);
    }
    pUVar8 = (param_1->Proxy).field0_0x0.DebugPtr;
    pTVar11 = &pUVar8->Subtitles;
    pFVar9 = (FText *)(pTVar11->AllocatorInstance).Data;
    if (((pFVar9 <= &local_d8) &&
        (&local_d8 < (FText *)((longlong)pFVar9 + (longlong)(pUVar8->Subtitles).ArrayMax * 0x18)))
       && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = (pUVar8->Subtitles).ArrayNum;
    piVar1 = &(pUVar8->Subtitles).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&pTVar11->AllocatorInstance,piVar1);
    }
    lVar10 = (longlong)iVar5;
    (pUVar8->Subtitles).ArrayNum = iVar5 + 1;
    pFVar2 = (pTVar11->AllocatorInstance).Data;
    *(undefined8 *)(pFVar2 + lVar10 * 0x18) = 0;
    *(ITextData **)(pFVar2 + lVar10 * 0x18) = local_d8.TextData.Reference;
    if (local_d8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_d8.TextData.Reference + 8))
                (local_d8.TextData.Reference,local_c0);
    }
    *(uint *)(pFVar2 + lVar10 * 0x18 + 8) = local_d8.Flags;
    *(undefined4 *)(pFVar2 + lVar10 * 0x18 + 0x10) = local_c8;
    if (local_d8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
    }
  }
  return;
}

