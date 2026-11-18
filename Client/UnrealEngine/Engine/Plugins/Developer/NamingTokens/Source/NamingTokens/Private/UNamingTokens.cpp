// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NamingTokens
// Functions: 36

// StaticClass @ 14d0d1080

UClass * __cdecl UNamingTokens::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNamingTokens.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NamingTokens",L"NamingTokens",
               &Z_Registration_Info_UClass_UNamingTokens.InnerSingleton,
               StaticRegisterNativesUNamingTokens,0x118,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UNamingTokens>,
               InternalVTableHelperCtorCaller<UNamingTokens>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNamingTokens.InnerSingleton;
}

// UNamingTokens @ 14d0d4c80

UNamingTokens * __thiscall UNamingTokens::UNamingTokens(UNamingTokens *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNamingTokens__6B_;
  *(undefined8 *)&(this->OnPreEvaluateEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnPreEvaluateEvent = 0;
  *(undefined8 *)&(this->OnPreEvaluateEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnPreEvaluateEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnPostEvaluateEvent = 0;
  *(undefined8 *)&(this->OnPostEvaluateEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnPostEvaluateEvent).field_0x10 = 0;
  (this->DefaultTokens).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultTokens).ArrayNum = 0;
  (this->DefaultTokens).ArrayMax = 0;
  *(undefined8 *)&this->ExternalTokens = 0;
  *(undefined8 *)&(this->ExternalTokens).field_0x8 = 0;
  *(undefined8 *)&(this->ExternalTokens).field_0x20 = 0;
  *(undefined8 *)&(this->OnPostEvaluateEvent).field_0x18 = 2;
  *(undefined4 *)&(this->ExternalTokens).field_0x28 = 0;
  *(undefined4 *)&(this->ExternalTokens).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExternalTokens).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExternalTokens).field_0x34 = 0;
  *(undefined8 *)&(this->ExternalTokens).field_0x40 = 0;
  *(undefined4 *)&(this->ExternalTokens).field_0x48 = 0;
  (this->CustomTokens).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomTokens).ArrayNum = 0;
  (this->CustomTokens).ArrayMax = 0;
  (this->CurrentEvaluationData).CurrentDateTime.Ticks = 0;
  (this->CurrentEvaluationData).Contexts.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentEvaluationData).Contexts.ArrayNum = 0;
  (this->CurrentEvaluationData).Contexts.ArrayMax = 0;
  (this->CurrentEvaluationData).bForceCaseSensitive = false;
  (this->Namespace).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Namespace).Data.ArrayNum = 0;
  (this->Namespace).Data.ArrayMax = 0;
  FText::FText(&this->NamespaceDisplayName);
  return this;
}

// UNamingTokens @ 14d0d4d60

UNamingTokens * __thiscall UNamingTokens::UNamingTokens(UNamingTokens *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UNamingTokens__6B_;
  *(undefined8 *)&(this->OnPreEvaluateEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnPreEvaluateEvent = 0;
  *(undefined8 *)&(this->OnPreEvaluateEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnPreEvaluateEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnPostEvaluateEvent = 0;
  *(undefined8 *)&(this->OnPostEvaluateEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnPostEvaluateEvent).field_0x10 = 0;
  (this->DefaultTokens).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultTokens).ArrayNum = 0;
  (this->DefaultTokens).ArrayMax = 0;
  *(undefined8 *)&this->ExternalTokens = 0;
  *(undefined8 *)&(this->ExternalTokens).field_0x8 = 0;
  *(undefined8 *)&(this->ExternalTokens).field_0x20 = 0;
  *(undefined8 *)&(this->OnPostEvaluateEvent).field_0x18 = 2;
  *(undefined4 *)&(this->ExternalTokens).field_0x28 = 0;
  *(undefined4 *)&(this->ExternalTokens).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExternalTokens).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExternalTokens).field_0x34 = 0;
  *(undefined8 *)&(this->ExternalTokens).field_0x40 = 0;
  *(undefined4 *)&(this->ExternalTokens).field_0x48 = 0;
  (this->CustomTokens).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomTokens).ArrayNum = 0;
  (this->CustomTokens).ArrayMax = 0;
  (this->CurrentEvaluationData).CurrentDateTime.Ticks = 0;
  (this->CurrentEvaluationData).Contexts.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentEvaluationData).Contexts.ArrayNum = 0;
  (this->CurrentEvaluationData).Contexts.ArrayMax = 0;
  (this->CurrentEvaluationData).bForceCaseSensitive = false;
  (this->Namespace).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Namespace).Data.ArrayNum = 0;
  (this->Namespace).Data.ArrayMax = 0;
  FText::FText(&this->NamespaceDisplayName);
  return this;
}

// ~UNamingTokens @ 14d0d52d0

void __thiscall UNamingTokens::~UNamingTokens(UNamingTokens *this)

{
  ITextData *pIVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&___7UNamingTokens__6B_;
  pIVar1 = (this->NamespaceDisplayName).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pFVar2 = (this->Namespace).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->CurrentEvaluationData).Contexts.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FNamingTokenData,int>
            ((FNamingTokenData *)(this->CustomTokens).AllocatorInstance.Data,
             (this->CustomTokens).ArrayNum);
  pFVar2 = (this->CustomTokens).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->ExternalTokens).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ExternalTokens).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,TArray<FNamingTokenData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,TArray<FNamingTokenData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,TArray<FNamingTokenData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExternalTokens);
  DestructItems<FNamingTokenData,int>
            ((FNamingTokenData *)(this->DefaultTokens).AllocatorInstance.Data,
             (this->DefaultTokens).ArrayNum);
  pFVar2 = (this->DefaultTokens).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPostEvaluateEvent).field_0x8,*(int *)&(this->OnPostEvaluateEvent).field_0x10
            );
  pvVar3 = *(void **)&(this->OnPostEvaluateEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPostEvaluateEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPreEvaluateEvent).field_0x8,*(int *)&(this->OnPreEvaluateEvent).field_0x10);
  pvVar3 = *(void **)&(this->OnPreEvaluateEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPreEvaluateEvent);
  UObject::~UObject((UObject *)this);
  return;
}

// AreExternalTokensRegistered @ 14d0d73c0

bool __thiscall UNamingTokens::AreExternalTokensRegistered(UNamingTokens *this,FGuid *param_1)

{
  int iVar1;
  ulong64 uVar2;
  
  uVar2 = CityHash64((char *)param_1,0x10);
  iVar1 = TSet<TTuple<FGuid,TArray<FNamingTokenData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TArray<FNamingTokenData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,TArray<FNamingTokenData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TArray<FNamingTokenData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&this->ExternalTokens,(uint)uVar2,param_1);
  return iVar1 != -1;
}

// CreateDefaultTokens @ 14d0d9680

void __thiscall UNamingTokens::CreateDefaultTokens(UNamingTokens *this)

{
  int *piVar1;
  
  DestructItems<FNamingTokenData,int>
            ((FNamingTokenData *)(this->DefaultTokens).AllocatorInstance.Data,
             (this->DefaultTokens).ArrayNum);
  piVar1 = &(this->DefaultTokens).ArrayMax;
  (this->DefaultTokens).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,&(this->DefaultTokens).AllocatorInstance,0,piVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00014d0d96d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2b0))(this,&this->DefaultTokens);
  return;
}

// EvaluateTokenText @ 14d0d9f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FNamingTokenResultData * __thiscall
UNamingTokens::EvaluateTokenText
          (UNamingTokens *this,FNamingTokenResultData *__return_storage_ptr__,FText *param_1,
          FNamingTokensEvaluationData *param_2)

{
  TMap<FGuid,TArray<FNamingTokenData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<FNamingTokenData,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar1;
  undefined1 *puVar2;
  ITextData _Src;
  ITextData *pIVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  TBitArray<FDefaultBitArrayAllocator> *pTVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  FNamingTokensEvaluationData *pFVar10;
  undefined4 uVar11;
  TRefCountPtr<ITextData> TVar12;
  TMap<FGuid,TArray<FNamingTokenData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<FNamingTokenData,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar13;
  bool bVar14;
  bool bVar15;
  char cVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  FString *pFVar21;
  FNamingTokenResultData *pFVar22;
  ulonglong uVar23;
  FText *pFVar24;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar25;
  UFunction *this_00;
  UClass *pUVar26;
  ForAnyElementType FVar27;
  wchar_t *pwVar28;
  ForAnyElementType FVar29;
  uint uVar30;
  undefined8 *puVar31;
  FScriptContainerElement *pFVar32;
  longlong lVar33;
  FNamingTokenData *this_01;
  ulonglong uVar34;
  FNamingTokenData *pFVar35;
  FScriptContainerElement *pFVar36;
  uint uVar37;
  ulonglong uVar38;
  ForElementType<FSetElementId> FVar39;
  ulonglong uVar40;
  ForElementType<unsigned_int> FVar41;
  undefined1 auStackY_538 [32];
  uint local_4e8;
  undefined1 local_4e4;
  undefined1 local_4e3;
  undefined1 local_4e2 [2];
  FNamingTokensEvaluationData *local_4e0;
  undefined1 local_4d8 [24];
  undefined1 local_4c0 [8];
  TRefCountPtr<ITextData> local_4b8;
  undefined1 local_4b0 [8];
  FName local_4a8;
  FText local_4a0;
  FScriptContainerElement local_490;
  FString local_488;
  FString local_478;
  ForAnyElementType local_468;
  int local_460;
  int local_45c;
  uint local_458;
  UNamingTokens *local_450;
  FNamingTokenData *local_448;
  FNameEntryId local_440;
  uint uStack_43c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_438;
  undefined4 local_430;
  uint uStack_42c;
  uint uStack_428;
  undefined4 uStack_424;
  TArray<FString,TSizedDefaultAllocator<32>_> local_420;
  FText local_410;
  FString local_400;
  FNamingTokenResultData *local_3f0;
  FNamingTokenData local_3e8;
  FString local_398;
  FString local_388;
  FText local_378;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_368;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_348;
  undefined1 local_328 [4];
  int local_324;
  undefined1 local_320 [24];
  void *local_308;
  TRefCountPtr<ITextData> local_300;
  longlong *local_2f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2f0;
  ITextData *local_2d0;
  TMap<FGuid,TArray<FNamingTokenData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<FNamingTokenData,TSizedDefaultAllocator<32>_>,0>_>
  *local_2c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2c0;
  undefined8 uStack_2a0;
  TMap<FGuid,TArray<FNamingTokenData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<FNamingTokenData,TSizedDefaultAllocator<32>_>,0>_>
  *local_298;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_290;
  undefined8 uStack_270;
  FNamingTokenData *local_268;
  int iStack_260;
  undefined4 uStack_25c;
  FDestructionSentinel local_258;
  undefined1 local_240 [40];
  int local_218;
  undefined4 uStack_214;
  undefined1 local_210 [40];
  int local_1e8;
  undefined4 uStack_1e4;
  longlong local_1d8;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  TArrayView<FNamingTokenData_const_,int> local_1a8;
  FString local_190;
  FString local_180;
  FText local_170;
  FText local_160;
  undefined1 local_148 [32];
  ForElementType<unsigned_int> local_128;
  uint local_120;
  int local_11c;
  int local_118;
  int local_114;
  FScriptContainerElement local_110 [8];
  ForAnyElementType local_108;
  uint local_100;
  TSet<FString,FLocKeySetFuncs,FDefaultSetAllocator> local_f8;
  TSet<FNamingTokenData,DefaultKeyFuncs<FNamingTokenData,0>,FDefaultSetAllocator> local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_538;
  uVar34 = 0;
  local_4e8 = 0;
  local_4e0 = param_2;
  local_450 = this;
  local_3f0 = __return_storage_ptr__;
  PreEvaluate(this,param_2);
  FText::FText(&__return_storage_ptr__->OriginalText);
  FText::FText(&__return_storage_ptr__->EvaluatedText);
  (__return_storage_ptr__->TokenValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->TokenValues).ArrayNum = 0;
  (__return_storage_ptr__->TokenValues).ArrayMax = 0;
  FText::operator=(&__return_storage_ptr__->OriginalText,param_1);
  local_410.TextData.Reference = (param_1->TextData).Reference;
  if (local_410.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_410.TextData.Reference + 8))
              (local_410.TextData.Reference,local_328);
  }
  local_410.Flags = param_1->Flags;
  pFVar21 = FText::ToString(&local_410);
  UE::NamingTokens::Utils::GetTokenKeysFromString(&local_420,pFVar21);
  local_268 = (FNamingTokenData *)(this->DefaultTokens).AllocatorInstance.Data;
  iStack_260 = (this->DefaultTokens).ArrayNum;
  if ((iStack_260 < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    pFVar22 = (FNamingTokenResultData *)(*pcVar6)();
    return pFVar22;
  }
  local_1a8._12_4_ = uStack_25c;
  local_1a8.ArrayNum = iStack_260;
  local_1a8.DataPtr = local_268;
  local_a8.Elements._0_8_ = 0;
  local_a8.Elements._8_8_ = 0;
  local_a8.Elements._32_8_ = 0;
  local_a8.Elements._40_4_ = 0;
  local_a8.Elements._44_4_ = 0x80;
  local_a8.Elements._48_4_ = 0xffffffff;
  local_a8.Elements._52_4_ = 0;
  local_a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_a8.HashSize = 0;
  TSet<FNamingTokenData,DefaultKeyFuncs<FNamingTokenData,0>,FDefaultSetAllocator>::Append
            (&local_a8,&local_1a8);
  uVar17 = (this->CustomTokens).ArrayNum;
  pFVar36 = (this->CustomTokens).AllocatorInstance.Data;
  if (((int)uVar17 < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    pFVar22 = (FNamingTokenResultData *)(*pcVar6)();
    return pFVar22;
  }
  local_148._0_8_ = (FScriptContainerElement *)0x0;
  local_148._8_8_ = 0;
  local_128 = (ForElementType<unsigned_int>)0x0;
  local_120 = 0;
  local_11c = 0x80;
  local_118 = -1;
  local_114 = 0;
  local_108.Data = (FScriptContainerElement *)0x0;
  local_100 = 0;
  if (uVar17 == 0) goto LAB_14d0da365;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar17);
  }
  TSparseArrayBase<88,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<88,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_148,uVar17);
  uVar30 = 1;
  if (3 < uVar17) {
    uVar38 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
    lVar33 = 0x3f;
    if (uVar38 != 0) {
      for (; uVar38 >> lVar33 == 0; lVar33 = lVar33 + -1) {
      }
    }
    local_320._16_4_ = (int)lVar33;
    uVar30 = 1 << ((byte)lVar33 & 0x1f);
  }
  if ((local_100 != 0) && ((int)uVar30 <= (int)local_100)) goto LAB_14d0da365;
  local_100 = uVar30;
  if (local_108.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_108,0,0,4);
  }
  if (uVar30 != 0) {
    uVar37 = uVar30;
    if (uVar30 < 2) {
      if (local_108.Data != (FScriptContainerElement *)0x0) {
        uVar37 = 0;
        goto LAB_14d0da16b;
      }
    }
    else {
LAB_14d0da16b:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_108,0,uVar37,4);
    }
    if (0 < (int)uVar30) {
      uVar40 = (ulonglong)uVar30;
      uVar38 = uVar34;
      do {
        FVar27.Data = local_110;
        if (local_108.Data != (FScriptContainerElement *)0x0) {
          FVar27.Data = local_108.Data;
        }
        uVar23 = uVar38 & (longlong)(int)uVar30 - 1U;
        uVar38 = uVar38 + 1;
        *(undefined4 *)(FVar27.Data + uVar23 * 4) = 0xffffffff;
        uVar40 = uVar40 - 1;
      } while (uVar40 != 0);
    }
  }
  if (local_100 != 0) {
    pTStack_438 = (TBitArray<FDefaultBitArrayAllocator> *)(local_148 + 0x10);
    local_440.Value = 0;
    uStack_43c = 1;
    local_430 = 0xffffffff;
    uStack_42c = 0;
    uStack_428 = 0;
    uVar38 = uVar34;
    if (local_120 != 0) {
      FVar41 = (ForElementType<unsigned_int>)((longlong)local_148 + 0x10);
      if (local_128 != (ForElementType<unsigned_int>)0x0) {
        FVar41 = local_128;
      }
      uVar30 = *(uint *)FVar41;
      uVar40 = uVar34;
      while (uVar30 == 0) {
        uStack_428 = (int)uVar40 + 0x20;
        uVar40 = (ulonglong)uStack_428;
        iVar19 = (int)uVar38;
        local_440.Value = iVar19 + 1;
        uVar38 = (ulonglong)local_440.Value;
        if ((int)((local_120 - 1) + ((int)(local_120 - 1) >> 0x1f & 0x1fU)) >> 5 <
            (int)local_440.Value) goto LAB_14d0da28e;
        uVar30 = ((uint *)((longlong)FVar41 + 4))[iVar19];
        local_430 = 0xffffffff;
      }
      uStack_43c = -uVar30 & uVar30;
      uVar38 = (ulonglong)(-uVar30 & uVar30) * 2 + 1;
      lVar33 = 0x3f;
      if (uVar38 != 0) {
        for (; uVar38 >> lVar33 == 0; lVar33 = lVar33 + -1) {
        }
      }
      local_324 = (int)lVar33;
      uStack_42c = (int)lVar33 + -1 + (int)uVar40;
      uVar38 = (ulonglong)uStack_42c;
      if ((int)local_120 < (int)uStack_42c) {
LAB_14d0da28e:
        uVar38 = (ulonglong)local_120;
        uStack_42c = local_120;
      }
    }
    local_430 = 0xffffffff;
    local_2f8 = (longlong *)local_148;
    local_2f0._padding_._0_4_ = local_440.Value;
    local_2f0._padding_._4_4_ = uStack_43c;
    local_2f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_148 + 0x10);
    local_2f0.UnvisitedBitMask = 0xffffffff;
    local_2f0.CurrentBitIndex = uStack_42c;
    local_2f0.BaseBitIndex = uStack_428;
    local_2f0._28_4_ = uStack_424;
    if ((int)uVar38 < (int)local_120) {
      do {
        puVar31 = (undefined8 *)((longlong)(int)uVar38 * 0x58 + *local_2f8);
        if (*(int *)(puVar31 + 1) == 0) {
          pwVar28 = L"";
        }
        else {
          pwVar28 = (wchar_t *)*puVar31;
        }
        uVar30 = FCrc::StrCrc32<wchar_t>(pwVar28,0);
        uVar30 = uVar30 & local_100 - 1;
        *(uint *)((longlong)puVar31 + 0x54) = uVar30;
        FVar27.Data = local_110;
        if (local_108.Data != (FScriptContainerElement *)0x0) {
          FVar27.Data = local_108.Data;
        }
        uVar40 = (longlong)(int)local_100 - 1U & (longlong)(int)uVar30;
        *(undefined4 *)(puVar31 + 10) = *(undefined4 *)(FVar27.Data + uVar40 * 4);
        *(int *)(FVar27.Data + uVar40 * 4) = (int)uVar38;
        local_2f0.UnvisitedBitMask = local_2f0.UnvisitedBitMask & ~local_2f0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2f0);
        uVar38 = (ulonglong)(uint)local_2f0.CurrentBitIndex;
      } while (local_2f0.CurrentBitIndex < (local_2f0.Array)->NumBits);
    }
  }
LAB_14d0da365:
  pFVar32 = pFVar36 + (longlong)(int)uVar17 * 0x50;
  FVar27.Data = local_420.AllocatorInstance.Data;
  local_458 = local_420.ArrayNum;
  for (; local_420.AllocatorInstance.Data = FVar27.Data, local_420.ArrayNum = local_458,
      pFVar36 != pFVar32; pFVar36 = pFVar36 + 0x50) {
    TSet<FNamingTokenData,DefaultKeyFuncs<FNamingTokenData,0>,FDefaultSetAllocator>::
    Emplace<FNamingTokenData_const_&>
              ((TSet<FNamingTokenData,DefaultKeyFuncs<FNamingTokenData,0>,FDefaultSetAllocator> *)
               local_148,(FNamingTokenData *)local_320,(bool *)pFVar36);
    FVar27.Data = local_420.AllocatorInstance.Data;
    local_458 = local_420.ArrayNum;
  }
  uVar38 = (ulonglong)(int)local_458;
  local_f8.Elements._0_8_ = 0;
  local_2d0 = (ITextData *)((longlong)FVar27.Data + uVar38 * 2 * 8);
  local_f8.Elements._8_8_ = 0;
  local_f8.Elements._32_8_ = 0;
  local_f8.Elements._40_4_ = 0;
  local_f8.Elements._44_4_ = 0x80;
  local_f8.Elements._48_4_ = 0xffffffff;
  local_f8.Elements._52_4_ = 0;
  local_f8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_f8.HashSize = 0;
  do {
    pIVar3 = local_2d0;
    local_4d8._16_8_ = FVar27.Data;
    if (local_420.ArrayNum != (uint)uVar38) {
      local_4e4 = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_4e4);
    }
    pFVar22 = local_3f0;
    if ((ITextData *)FVar27.Data == pIVar3) {
      pIVar3 = (local_3f0->EvaluatedText).TextData.Reference;
      if (pIVar3 != local_410.TextData.Reference) {
        (local_3f0->EvaluatedText).TextData.Reference = local_410.TextData.Reference;
        if (local_410.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_410.TextData.Reference + 8))
                    (local_410.TextData.Reference,local_320 + 0xc);
        }
        if (pIVar3 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
        }
      }
      (pFVar22->EvaluatedText).Flags = local_410.Flags;
      this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UNamingTokens_OnPostEvaluate);
      pUVar26 = UField::GetOwnerClass((UField *)this_00);
      if ((pUVar26->ClassFlags & CLASS_Native) == CLASS_None) {
        (**(code **)(this->_padding_ + 0x260))(this,this_00,0);
      }
      else {
        (**(code **)(this->_padding_ + 0x2c8))(this);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnPostEvaluateEvent,(FWriteAccessScope *)&local_258);
      puVar2 = &(this->OnPostEvaluateEvent).field_0x1c;
      *(int *)puVar2 = *(int *)puVar2 + 1;
      bVar14 = false;
      uVar17 = *(int *)&(this->OnPostEvaluateEvent).field_0x10 - 1;
      if (-1 < (int)uVar17) {
        lVar33 = (longlong)(int)uVar17 << 4;
        bVar14 = false;
        do {
          uVar30 = 0;
          if ((int)uVar17 < *(int *)&(this->OnPostEvaluateEvent).field_0x10) {
            uVar30 = ~uVar17 >> 0x1f;
          }
          if ((uVar30 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar6 = (code *)swi(3);
            pFVar22 = (FNamingTokenResultData *)(*pcVar6)();
            return pFVar22;
          }
          lVar4 = *(longlong *)&(this->OnPostEvaluateEvent).field_0x8;
          if (((*(int *)(lVar33 + 8 + lVar4) == 0) ||
              (plVar5 = *(longlong **)(lVar33 + lVar4), plVar5 == (longlong *)0x0)) ||
             (cVar16 = (**(code **)(*plVar5 + 0x68))(), cVar16 == '\0')) {
            bVar14 = true;
          }
          lVar33 = lVar33 + -0x10;
          uVar17 = uVar17 - 1;
        } while (-1 < (int)uVar17);
      }
      puVar2 = &(this->OnPostEvaluateEvent).field_0x1c;
      *(int *)puVar2 = *(int *)puVar2 + -1;
      if (bVar14) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnPostEvaluateEvent,
                   false);
      }
      if (local_258.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_258.Accessor,&local_258);
      }
      local_f8.HashSize = 0;
      if (local_f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_f8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_f8.Elements);
      local_100 = 0;
      if (local_108.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data);
      }
      TSparseArray<TSparseSetElement<FNamingTokenData>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FNamingTokenData>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FNamingTokenData>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_148);
      local_a8.HashSize = 0;
      if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_a8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FNamingTokenData>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FNamingTokenData>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_a8.Elements);
      DestructItems<FString,int>((FString *)local_420.AllocatorInstance.Data,local_420.ArrayNum);
      if (local_420.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_420.AllocatorInstance.Data);
      }
      if (local_410.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_410.TextData.Reference + 0x10))();
      }
      return pFVar22;
    }
    local_478.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_478.Data.ArrayNum = 0;
    local_478.Data.ArrayMax = 0;
    local_398.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_398.Data.ArrayNum = 0;
    local_398.Data.ArrayMax = 0;
    pFVar21 = UE::NamingTokens::Utils::GetNamespaceDelimiter(&local_190);
    ::FString::Split((FString *)FVar27.Data,pFVar21,&local_478,&local_398);
    if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.Data.AllocatorInstance.Data);
    }
    if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_398.Data.AllocatorInstance.Data);
    }
    if (local_478.Data.ArrayNum < 2) {
LAB_14d0da4c5:
      local_4d8._8_4_ = *(undefined4 *)((longlong)FVar27.Data + 8);
      lVar33 = (longlong)(int)local_4d8._8_4_;
      _Src = *(ITextData *)FVar27.Data;
      local_4d8._0_8_ = (FScriptContainerElement *)0x0;
      if (local_4d8._8_4_ == 0) {
        local_4d8._12_4_ = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_4d8._8_4_,0,(ForAnyElementType *)local_4d8,local_4d8._8_4_,
                   (int *)(local_4d8 + 0xc));
        memcpy((void *)local_4d8._0_8_,(void *)_Src,lVar33 * 2);
      }
      local_388.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_388.Data.ArrayNum = 0;
      local_388.Data.ArrayMax = 0;
      local_400.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_400.Data.ArrayNum = 0;
      local_400.Data.ArrayMax = 0;
      pFVar21 = UE::NamingTokens::Utils::GetNamespaceDelimiter(&local_180);
      bVar14 = ::FString::Split((FString *)FVar27.Data,pFVar21,&local_388,&local_400);
      if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.Data.AllocatorInstance.Data);
      }
      if (bVar14) {
        iVar19 = local_400.Data.ArrayNum + -1;
        if (local_400.Data.ArrayNum == 0) {
          iVar19 = 0;
        }
        ::FString::AssignRange
                  ((FString *)local_4d8,(wchar_t *)local_400.Data.AllocatorInstance.Data,iVar19);
      }
      if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_400.Data.AllocatorInstance.Data);
      }
      if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_388.Data.AllocatorInstance.Data);
      }
      uVar11 = local_4d8._8_4_;
      uVar8 = local_4d8._0_8_;
      pFVar36 = (FScriptContainerElement *)L"";
      if (local_4d8._8_4_ != 0) {
        pFVar36 = (FScriptContainerElement *)local_4d8._0_8_;
      }
      uVar17 = FCrc::StrCrc32<wchar_t>((wchar_t *)pFVar36,0);
      uVar9 = local_f8.Elements._0_8_;
      if (local_f8.Elements._8_4_ != local_f8.Elements._52_4_) {
        FVar39 = (ForElementType<FSetElementId>)&local_f8.Hash;
        if (local_f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar39 = local_f8.Hash.SecondaryData;
        }
        iVar19 = *(int *)((longlong)FVar39 + (ulonglong)(local_f8.HashSize - 1U & uVar17) * 4);
        while (iVar19 != -1) {
          iVar20 = *(int *)(uVar9 + 8 + (longlong)iVar19 * 0x18);
          puVar31 = (undefined8 *)(uVar9 + (longlong)iVar19 * 0x18);
          if (iVar20 == uVar11) {
            if (1 < iVar20) {
              iVar20 = wcscmp((wchar_t *)*puVar31,(wchar_t *)uVar8);
              bVar14 = iVar20 == 0;
              goto LAB_14d0da641;
            }
LAB_14d0da6c2:
            if (iVar19 != -1) {
              if ((FScriptContainerElement *)uVar8 != (FScriptContainerElement *)0x0) {
                FMemory::Free((void *)uVar8);
              }
              FVar27.Data = (FScriptContainerElement *)local_4d8._16_8_;
              if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_478.Data.AllocatorInstance.Data);
                FVar27.Data = (FScriptContainerElement *)local_4d8._16_8_;
              }
              goto LAB_14d0da6e7;
            }
            break;
          }
          bVar14 = iVar20 + uVar11 == 1;
LAB_14d0da641:
          if (bVar14) goto LAB_14d0da6c2;
          iVar19 = *(int *)(puVar31 + 2);
        }
      }
      TSet<FString,FLocKeySetFuncs,FDefaultSetAllocator>::Emplace<FString_const_&>
                (&local_f8,(FString *)(local_320 + 4),(bool *)local_4d8);
      local_448 = (FNamingTokenData *)0x0;
      local_3e8.TokenKey.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3e8.TokenKey.Data.ArrayNum = 0;
      local_3e8.TokenKey.Data.ArrayMax = 0;
      FText::FText(&local_3e8.DisplayName);
      FText::FText(&local_3e8.Description);
      uVar11 = local_4d8._8_4_;
      uVar8 = local_4d8._0_8_;
      lVar33 = (longlong)(int)local_4d8._8_4_;
      local_3e8.FunctionName.ComparisonIndex.Value = 0;
      local_3e8.FunctionName.Number = 0;
      local_3e8.TokenProcessorNative._16_4_ = 0;
      local_3e8.TokenKey.Data.ArrayNum = local_4d8._8_4_;
      local_3e8.TokenProcessorNative._0_8_ = 0;
      local_3e8.TokenProcessorNative._8_8_ = 0;
      if ((local_4d8._8_4_ == 0) && (local_3e8.TokenKey.Data.ArrayMax == 0)) {
        local_3e8.TokenKey.Data.ArrayNum = 0;
        local_3e8.TokenKey.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_4d8._8_4_,local_3e8.TokenKey.Data.ArrayMax,
                   (ForAnyElementType *)&local_3e8,local_4d8._8_4_,&local_3e8.TokenKey.Data.ArrayMax
                  );
        if (uVar11 != 0) {
          memcpy(local_3e8.TokenKey.Data.AllocatorInstance.Data,(void *)uVar8,lVar33 * 2);
        }
      }
      pFVar24 = FText::FromString(&local_170,(FString *)local_4d8);
      FText::operator=(&local_3e8.DisplayName,pFVar24);
      if (local_170.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_170.TextData.Reference + 0x10))();
      }
      FVar27.Data = local_3e8.TokenKey.Data.AllocatorInstance.Data;
      iVar19 = local_3e8.TokenKey.Data.ArrayNum;
      FVar29.Data = (FScriptContainerElement *)L"";
      if (local_3e8.TokenKey.Data.ArrayNum != 0) {
        FVar29.Data = local_3e8.TokenKey.Data.AllocatorInstance.Data;
      }
      uVar17 = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar29.Data,0);
      uVar8 = local_a8.Elements._0_8_;
      if (local_a8.Elements._8_4_ != local_a8.Elements._52_4_) {
        FVar39 = (ForElementType<FSetElementId>)&local_a8.Hash;
        if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar39 = local_a8.Hash.SecondaryData;
        }
        iVar20 = *(int *)((longlong)FVar39 + (ulonglong)(local_a8.HashSize - 1U & uVar17) * 4);
        while (iVar20 != -1) {
          this_01 = (FNamingTokenData *)((longlong)iVar20 * 0x58 + uVar8);
          iVar18 = (this_01->TokenKey).Data.ArrayNum;
          if (iVar18 == iVar19) {
            if (1 < iVar18) {
              iVar18 = wcscmp((wchar_t *)(this_01->TokenKey).Data.AllocatorInstance.Data,
                              (wchar_t *)FVar27.Data);
              bVar14 = iVar18 == 0;
              goto LAB_14d0da7fa;
            }
LAB_14d0da84b:
            if ((iVar20 != -1) && (this_01 != (FNamingTokenData *)0x0)) goto LAB_14d0daa29;
            break;
          }
          bVar14 = iVar18 + iVar19 == 1;
LAB_14d0da7fa:
          if (bVar14) goto LAB_14d0da84b;
          iVar20 = *(int *)&this_01[1].TokenKey.Data.AllocatorInstance.Data;
        }
      }
      FVar29.Data = (FScriptContainerElement *)L"";
      if (iVar19 != 0) {
        FVar29.Data = FVar27.Data;
      }
      uVar17 = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar29.Data,0);
      iVar19 = TSet<FNamingTokenData,DefaultKeyFuncs<FNamingTokenData,0>,FDefaultSetAllocator>::
               FindIndexByHash<FNamingTokenData>
                         ((TSet<FNamingTokenData,DefaultKeyFuncs<FNamingTokenData,0>,FDefaultSetAllocator>
                           *)local_148,uVar17,&local_3e8);
      if ((iVar19 == -1) ||
         (this_01 = (FNamingTokenData *)(local_148._0_8_ + (longlong)iVar19 * 0x58),
         this_01 == (FNamingTokenData *)0x0)) {
        local_368._padding_._4_4_ = 1;
        puVar2 = &(this->ExternalTokens).field_0x10;
        local_368._padding_._0_4_ = 0;
        pTVar1 = &this->ExternalTokens;
        local_368.UnvisitedBitMask = 0xffffffff;
        local_368.CurrentBitIndex = 0;
        local_368.BaseBitIndex = 0;
        local_368.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
        if (*(int *)&(this->ExternalTokens).field_0x28 != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_368);
        }
        TStack_2c0._padding_ = CONCAT44(local_368._padding_._4_4_,(undefined4)local_368._padding_);
        TStack_2c0.CurrentBitIndex = local_368.CurrentBitIndex;
        TStack_2c0.UnvisitedBitMask = local_368.UnvisitedBitMask;
        TStack_2c0._28_4_ = local_368._28_4_;
        TStack_2c0.BaseBitIndex = local_368.BaseBitIndex;
        local_218 = *(int *)&(this->ExternalTokens).field_0x8 -
                    *(int *)&(this->ExternalTokens).field_0x34;
        local_240._16_8_ = local_368.Array;
        uStack_2a0 = CONCAT44(uStack_214,local_218);
        TStack_2c0.Array = local_368.Array;
        local_2c8 = pTVar1;
        local_240._0_8_ = pTVar1;
        local_240._8_8_ = TStack_2c0._padding_;
        local_240._24_8_ = TStack_2c0._16_8_;
        local_240._32_8_ = TStack_2c0._24_8_;
        pTVar25 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                  TConstSetBitIterator<FDefaultBitArrayAllocator>
                            ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_240,
                             (TBitArray<FDefaultBitArrayAllocator> *)puVar2,
                             *(int *)&(this->ExternalTokens).field_0x28);
        local_1d8 = pTVar25->_padding_;
        pTVar7 = pTVar25->Array;
        uVar8._0_4_ = pTVar25->UnvisitedBitMask;
        uVar8._4_4_ = pTVar25->CurrentBitIndex;
        uStack_1c0 = *(undefined8 *)&pTVar25->BaseBitIndex;
        pTStack_1d0 = pTVar7;
        local_1c8 = uVar8;
        while( true ) {
          pTVar13 = local_2c8;
          if (*(int *)&local_2c8->field_0x8 - *(int *)&local_2c8->field_0x34 != (int)uStack_2a0) {
            local_4e3 = 0;
            `TSparseArray<TSparseSetElement<TTuple<FGuid,TArray<FNamingTokenData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_4e3);
          }
          FVar27.Data = local_3e8.TokenKey.Data.AllocatorInstance.Data;
          iVar19 = local_3e8.TokenKey.Data.ArrayNum;
          if (((TStack_2c0.CurrentBitIndex == uVar8._4_4_) && (TStack_2c0.Array == pTVar7)) &&
             (pTVar13 == pTVar1)) break;
          lVar33 = *(longlong *)pTVar13;
          this_01 = *(FNamingTokenData **)
                     (lVar33 + 0x10 + (longlong)TStack_2c0.CurrentBitIndex * 0x28);
          pFVar35 = this_01 + *(int *)(lVar33 + 0x18 + (longlong)TStack_2c0.CurrentBitIndex * 0x28);
          for (; this_01 != pFVar35; this_01 = this_01 + 1) {
            iVar20 = (this_01->TokenKey).Data.ArrayNum;
            if (iVar20 == iVar19) {
              if (1 < iVar20) {
                iVar20 = wcscmp((wchar_t *)(this_01->TokenKey).Data.AllocatorInstance.Data,
                                (wchar_t *)FVar27.Data);
                bVar14 = iVar20 == 0;
                goto LAB_14d0da9e0;
              }
LAB_14d0daa0f:
              this = local_450;
              local_448 = this_01;
              if (this_01 == (FNamingTokenData *)0x0) goto LAB_14d0daa95;
              goto LAB_14d0daa1f;
            }
            bVar14 = iVar20 + iVar19 == 1;
LAB_14d0da9e0:
            if (bVar14) goto LAB_14d0daa0f;
          }
          TStack_2c0._padding_._4_4_ = (uint)((ulonglong)TStack_2c0._padding_ >> 0x20);
          TStack_2c0.UnvisitedBitMask = TStack_2c0.UnvisitedBitMask & ~TStack_2c0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2c0);
        }
LAB_14d0daa95:
        this = local_450;
        if (local_4e0->bForceCaseSensitive == false) {
          this_01 = (FNamingTokenData *)(local_450->DefaultTokens).AllocatorInstance.Data;
          pFVar35 = this_01 + (local_450->DefaultTokens).ArrayNum;
          for (; this_01 != pFVar35; this_01 = this_01 + 1) {
            iVar20 = (this_01->TokenKey).Data.ArrayNum;
            if (iVar20 == iVar19) {
              if (iVar20 < 2) goto LAB_14d0daa1f;
              iVar19 = FGenericPlatformStricmp::Stricmp
                                 ((wchar_t *)(this_01->TokenKey).Data.AllocatorInstance.Data,
                                  (wchar_t *)FVar27.Data);
              bVar14 = iVar19 == 0;
              FVar27.Data = local_3e8.TokenKey.Data.AllocatorInstance.Data;
              iVar19 = local_3e8.TokenKey.Data.ArrayNum;
            }
            else {
              bVar14 = iVar20 + iVar19 == 1;
            }
            if (bVar14) goto LAB_14d0daa1f;
          }
          this_01 = (FNamingTokenData *)(this->CustomTokens).AllocatorInstance.Data;
          pFVar35 = this_01 + (this->CustomTokens).ArrayNum;
          for (; this_01 != pFVar35; this_01 = this_01 + 1) {
            bVar14 = ::FString::Equals(&this_01->TokenKey,&local_3e8.TokenKey,IgnoreCase);
            if (bVar14) {
              if (this_01 != (FNamingTokenData *)0x0) goto LAB_14d0daa1f;
              break;
            }
          }
          local_348._padding_._4_4_ = 1;
          puVar2 = &(this->ExternalTokens).field_0x10;
          local_348._padding_._0_4_ = 0;
          pTVar1 = &this->ExternalTokens;
          local_348.UnvisitedBitMask = 0xffffffff;
          local_348.CurrentBitIndex = 0;
          local_348.BaseBitIndex = 0;
          local_348.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
          if (*(int *)&(this->ExternalTokens).field_0x28 != 0) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_348);
          }
          TStack_290._padding_ = CONCAT44(local_348._padding_._4_4_,(undefined4)local_348._padding_)
          ;
          TStack_290.CurrentBitIndex = local_348.CurrentBitIndex;
          TStack_290.UnvisitedBitMask = local_348.UnvisitedBitMask;
          TStack_290._28_4_ = local_348._28_4_;
          TStack_290.BaseBitIndex = local_348.BaseBitIndex;
          local_1e8 = *(int *)&(this->ExternalTokens).field_0x8 -
                      *(int *)&(this->ExternalTokens).field_0x34;
          local_210._16_8_ = local_348.Array;
          uStack_270 = CONCAT44(uStack_1e4,local_1e8);
          TStack_290.Array = local_348.Array;
          local_298 = pTVar1;
          local_210._0_8_ = pTVar1;
          local_210._8_8_ = TStack_290._padding_;
          local_210._24_8_ = TStack_290._16_8_;
          local_210._32_8_ = TStack_290._24_8_;
          pTVar25 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                    TConstSetBitIterator<FDefaultBitArrayAllocator>
                              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_210,
                               (TBitArray<FDefaultBitArrayAllocator> *)puVar2,
                               *(int *)&(this->ExternalTokens).field_0x28);
          local_1d8 = pTVar25->_padding_;
          pTVar7 = pTVar25->Array;
          uVar9._0_4_ = pTVar25->UnvisitedBitMask;
          uVar9._4_4_ = pTVar25->CurrentBitIndex;
          uStack_1c0 = *(undefined8 *)&pTVar25->BaseBitIndex;
          pTStack_1d0 = pTVar7;
          local_1c8 = uVar9;
          while( true ) {
            pTVar13 = local_298;
            if (*(int *)&local_298->field_0x8 - *(int *)&local_298->field_0x34 != (int)uStack_270) {
              local_4e2[0] = 0;
              `TSparseArray<TSparseSetElement<TTuple<FGuid,TArray<FNamingTokenData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_4e2);
            }
            if ((((TStack_290.CurrentBitIndex == uVar9._4_4_) && (TStack_290.Array == pTVar7)) &&
                (this_01 = local_448, pTVar13 == pTVar1)) ||
               (this_01 = TArray<FNamingTokenData,TSizedDefaultAllocator<32>_>::
                          FindByPredicate<_UNamingTokens::EvaluateTokenText_::__l46::<lambda_3>_>
                                    ((TArray<FNamingTokenData,TSizedDefaultAllocator<32>_> *)
                                     (*(longlong *)pTVar13 +
                                     ((longlong)TStack_290.CurrentBitIndex * 5 + 2) * 8),&local_3e8)
               , this_01 != (FNamingTokenData *)0x0)) break;
            TStack_290.UnvisitedBitMask = TStack_290.UnvisitedBitMask & ~TStack_290._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_290);
          }
LAB_14d0daa1f:
          uVar34 = (ulonglong)local_4e8;
        }
        else {
          uVar34 = (ulonglong)local_4e8;
          this_01 = local_448;
        }
      }
LAB_14d0daa29:
      pFVar10 = local_4e0;
      local_4c0 = (undefined1  [8])0x0;
      local_4b8.Reference = (ITextData *)0x0;
      local_4b0 = (undefined1  [8])0x0;
      local_4a8.ComparisonIndex.Value = 0;
      local_4a8.Number = 0;
      FText::FText(&local_4a0);
      local_490 = (FScriptContainerElement)0x0;
      FText::FText(&local_378);
      FVar27.Data = local_478.Data.AllocatorInstance.Data;
      if (this_01 == (FNamingTokenData *)0x0) {
        local_490 = (FScriptContainerElement)0x0;
        this_01 = (FNamingTokenData *)local_4d8;
LAB_14d0dae36:
        iVar19 = (this_01->TokenKey).Data.ArrayNum;
        pFVar36 = (this_01->TokenKey).Data.AllocatorInstance.Data;
        local_4b8.Reference._0_4_ = iVar19;
        if ((iVar19 == 0) && (local_4b8.Reference._4_4_ == 0)) {
          local_4b8.Reference = (ITextData *)0x0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar19,local_4b8.Reference._4_4_,(ForAnyElementType *)local_4c0,iVar19,
                     (int *)((longlong)&local_4b8.Reference + 4));
          if (iVar19 != 0) {
            memcpy((void *)local_4c0,pFVar36,(longlong)iVar19 * 2);
          }
        }
      }
      else {
        if (pFVar10->bForceCaseSensitive == false) {
          lVar33 = (longlong)local_478.Data.ArrayNum;
          local_4e8 = (uint)uVar34 | 2;
          uVar34 = (ulonglong)local_4e8;
          local_468.Data = (FScriptContainerElement *)0x0;
          local_460 = local_478.Data.ArrayNum;
          if (local_478.Data.ArrayNum == 0) {
            local_45c = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_478.Data.ArrayNum,0,&local_468,local_478.Data.ArrayNum,&local_45c);
            memcpy(local_468.Data,FVar27.Data,lVar33 * 2);
          }
          iVar19 = local_460;
          FVar27.Data = local_468.Data;
          local_488.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_488.Data.ArrayNum = local_460;
          if (local_460 == 0) {
            local_488.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_460,0,(ForAnyElementType *)&local_488,local_460,
                       &local_488.Data.ArrayMax);
            memcpy(local_488.Data.AllocatorInstance.Data,FVar27.Data,(longlong)iVar19 * 2);
          }
        }
        else {
          local_4e8 = (uint)uVar34 | 1;
          uVar34 = (ulonglong)local_4e8;
          local_308 = (void *)0x0;
          local_300.Reference = (ITextData *)0x0;
          local_488.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_488.Data.ArrayNum = 0;
          local_488.Data.ArrayMax = 0;
        }
        if ((uVar34 & 2) != 0) {
          local_4e8 = (uint)uVar34 & 0xfffffffd;
          uVar34 = (ulonglong)local_4e8;
          if (local_468.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_468.Data);
          }
        }
        if ((uVar34 & 1) != 0) {
          local_4e8 = (uint)uVar34 & 0xfffffffe;
          uVar34 = (ulonglong)local_4e8;
          if (local_308 != (void *)0x0) {
            FMemory::Free(local_308);
          }
        }
        pFVar24 = ProcessToken(this,&local_160,this_01,&local_488,(FString *)local_4d8,&local_410);
        FText::operator=(&local_378,pFVar24);
        if (local_160.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_160.TextData.Reference + 0x10))();
        }
        local_490 = (FScriptContainerElement)0x1;
        if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_488.Data.AllocatorInstance.Data);
        }
        if ((FNamingTokenData *)local_4c0 != this_01) goto LAB_14d0dae36;
      }
      iVar19 = (this->Namespace).Data.ArrayNum;
      iVar20 = iVar19 + -1;
      if (iVar19 == 0) {
        iVar20 = 0;
      }
      ::FString::AssignRange
                ((FString *)local_4b0,(wchar_t *)(this->Namespace).Data.AllocatorInstance.Data,
                 iVar20);
      TVar12.Reference = local_4a0.TextData.Reference;
      if (local_4a0.TextData.Reference != local_378.TextData.Reference) {
        local_4a0.TextData.Reference = local_378.TextData.Reference;
        if (local_378.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_378.TextData.Reference + 8))
                    (local_378.TextData.Reference,local_320 + 8);
        }
        if (TVar12.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar12.Reference + 0x10))(TVar12.Reference);
        }
      }
      pFVar22 = local_3f0;
      local_4a0.Flags = local_378.Flags;
      pFVar36 = (local_3f0->TokenValues).AllocatorInstance.Data;
      if (((pFVar36 <= (FScriptContainerElement *)local_4c0) &&
          ((FScriptContainerElement *)local_4c0 <
           pFVar36 + (longlong)(local_3f0->TokenValues).ArrayMax * 0x38)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar14)) {
        pcVar6 = (code *)swi(3);
        pFVar22 = (FNamingTokenResultData *)(*pcVar6)();
        return pFVar22;
      }
      iVar19 = (pFVar22->TokenValues).ArrayNum;
      if (iVar19 == (pFVar22->TokenValues).ArrayMax) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x838,&(pFVar22->TokenValues).AllocatorInstance,
                            &(pFVar22->TokenValues).ArrayMax);
      }
      (pFVar22->TokenValues).ArrayNum = iVar19 + 1;
      pFVar36 = (pFVar22->TokenValues).AllocatorInstance.Data + (longlong)iVar19 * 0x38;
      *(undefined8 *)pFVar36 = 0;
      *(undefined1 (*) [8])pFVar36 = local_4c0;
      local_4c0 = (undefined1  [8])0x0;
      *(int *)(pFVar36 + 8) = (int)local_4b8.Reference;
      *(int *)(pFVar36 + 0xc) = local_4b8.Reference._4_4_;
      local_4b8.Reference = (ITextData *)0x0;
      *(undefined8 *)(pFVar36 + 0x10) = 0;
      *(undefined1 (*) [8])(pFVar36 + 0x10) = local_4b0;
      local_4b0 = (undefined1  [8])0x0;
      *(uint *)(pFVar36 + 0x18) = local_4a8.ComparisonIndex.Value;
      *(uint *)(pFVar36 + 0x1c) = local_4a8.Number;
      local_4a8.ComparisonIndex.Value = 0;
      local_4a8.Number = 0;
      FText::FText((FText *)(pFVar36 + 0x20),&local_4a0);
      pFVar36[0x30] = local_490;
      if (local_378.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_378.TextData.Reference + 0x10))();
      }
      if (local_4a0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_4a0.TextData.Reference + 0x10))();
      }
      if (local_4b0 != (undefined1  [8])0x0) {
        FMemory::Free((void *)local_4b0);
      }
      if (local_4c0 != (undefined1  [8])0x0) {
        FMemory::Free((void *)local_4c0);
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_3e8.TokenProcessorNative);
      if (local_3e8.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_3e8.Description.TextData.Reference + 0x10))();
      }
      if (local_3e8.DisplayName.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_3e8.DisplayName.TextData.Reference + 0x10))();
      }
      if (local_3e8.TokenKey.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3e8.TokenKey.Data.AllocatorInstance.Data);
      }
      FVar27.Data = (FScriptContainerElement *)local_4d8._16_8_;
      if ((FScriptContainerElement *)local_4d8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_4d8._0_8_);
        FVar27.Data = (FScriptContainerElement *)local_4d8._16_8_;
      }
    }
    else {
      iVar19 = (this->Namespace).Data.ArrayNum;
      if (local_478.Data.ArrayNum == iVar19) {
        iVar19 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)local_478.Data.AllocatorInstance.Data,
                            (wchar_t *)(this->Namespace).Data.AllocatorInstance.Data);
        bVar14 = iVar19 == 0;
      }
      else {
        bVar14 = local_478.Data.ArrayNum + iVar19 == 1;
      }
      if (bVar14) goto LAB_14d0da4c5;
    }
    if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_478.Data.AllocatorInstance.Data);
    }
LAB_14d0da6e7:
    FVar27.Data = FVar27.Data + 0x10;
    uVar38 = (ulonglong)local_458;
  } while( true );
}

// EvaluateTokenText @ 14d0db2b0

FNamingTokenResultData * __thiscall
UNamingTokens::EvaluateTokenText
          (UNamingTokens *this,FNamingTokenResultData *__return_storage_ptr__,FText *param_1,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FNamingTokensEvaluationData local_38;
  
  local_38.Contexts.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Contexts.ArrayMax = 0;
  local_38.bForceCaseSensitive = false;
  local_38.CurrentDateTime = FDateTime::Now();
  iVar1 = param_2->ArrayNum;
  pFVar2 = (param_2->AllocatorInstance).Data;
                    /* WARNING: Load size is inaccurate */
  local_38.CurrentDateTime.Ticks = *local_38.CurrentDateTime.Ticks;
  local_38.Contexts.ArrayNum = iVar1;
  if ((iVar1 != 0) || (local_38.Contexts.ArrayMax != 0)) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,local_38.Contexts.ArrayMax,&local_38.Contexts.AllocatorInstance,iVar1,
               &local_38.Contexts.ArrayMax);
    ConstructItems<TObjectPtr<UObject>,UObject_*,int>
              (local_38.Contexts.AllocatorInstance.Data,(UObject **)pFVar2,iVar1);
  }
  EvaluateTokenText(this,__return_storage_ptr__,param_1,&local_38);
  if (local_38.Contexts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Contexts.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FindBlueprintFunctionForToken @ 14d0dd200

/* WARNING: Enum "Type": Some values do not have unique names */

UFunction * __thiscall
UNamingTokens::FindBlueprintFunctionForToken(UNamingTokens *this,FNamingTokenData *param_1)

{
  code *pcVar1;
  bool bVar2;
  UFunction *pUVar3;
  UClass *this_00;
  FName *pFVar4;
  UFunction *pUVar5;
  FName local_res8;
  FName local_res10;
  FString local_28;
  
  local_res8 = param_1->FunctionName;
  pUVar3 = UClass::FindFunctionByName((UClass *)this->_padding_,local_res8,IncludeSuper);
  if (pUVar3 != (UFunction *)0x0) {
    this_00 = StaticClass();
    pFVar4 = ::FName::FName(&local_res10,0x1c,L"ProcessTokenTemplateFunction",FNAME_Add);
    pUVar5 = UClass::FindFunctionByName(this_00,*pFVar4,IncludeSuper);
    if ((pUVar5 == (UFunction *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FunctionSignature",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\NamingTokens\\Source\\NamingTokens\\Private\\Utils\\NamingTokenUtils.cpp"
                           ,0x15,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UFunction *)(*pcVar1)();
      return pUVar3;
    }
    bVar2 = UFunction::IsSignatureCompatibleWith(pUVar3,pUVar5,0x17e04904008061e);
    if (((bVar2) && ((pUVar3->FunctionFlags >> 0x1a & 1) != 0)) &&
       ((pUVar3->FunctionFlags >> 0x12 & 1) == 0)) {
      return pUVar3;
    }
    if (2 < (byte)LogNamingTokens._0_1_) {
      ::FName::ToString(&local_res8,&local_28);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNamingTokens);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  return (UFunction *)0x0;
}

// GetAllTokens @ 14d0dd770

TArray<FNamingTokenData,TSizedDefaultAllocator<32>_> * __thiscall
UNamingTokens::GetAllTokens
          (UNamingTokens *this,
          TArray<FNamingTokenData,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  TMap<FGuid,TArray<FNamingTokenData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<FNamingTokenData,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  code *pcVar6;
  TMap<FGuid,TArray<FNamingTokenData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<FNamingTokenData,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  TArray<FNamingTokenData,TSizedDefaultAllocator<32>_> *pTVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  TMap<FGuid,TArray<FNamingTokenData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<FNamingTokenData,TSizedDefaultAllocator<32>_>,0>_>
  *local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar13 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar14 = (this->CustomTokens).ArrayNum + (this->DefaultTokens).ArrayNum;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  if (0 < (int)uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,uVar14,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  TArray<FNamingTokenData,TSizedDefaultAllocator<32>_>::
  Append<FNamingTokenData,TSizedDefaultAllocator<32>_>(__return_storage_ptr__,&this->DefaultTokens);
  TArray<FNamingTokenData,TSizedDefaultAllocator<32>_>::
  Append<FNamingTokenData,TSizedDefaultAllocator<32>_>(__return_storage_ptr__,&this->CustomTokens);
  puVar3 = &(this->ExternalTokens).field_0x10;
  uVar14 = 1;
  iVar10 = *(int *)&(this->ExternalTokens).field_0x28;
  pTVar2 = &this->ExternalTokens;
  iVar15 = 0;
  iVar9 = iVar13;
  if (iVar10 != 0) {
    puVar17 = *(uint **)&(this->ExternalTokens).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar3;
    }
    uVar18 = *puVar17;
    iVar15 = 0;
    iVar13 = 0;
    while (uVar18 == 0) {
      lVar12 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar9 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14d0dd87d;
      uVar18 = puVar17[lVar12 + 1];
    }
    uVar14 = -uVar18 & uVar18;
    uVar4 = (ulonglong)uVar14 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res10 = (int)lVar12;
    iVar9 = iVar15 + -1 + local_res10;
    if (iVar10 < iVar9) {
      iVar9 = iVar10;
    }
  }
LAB_14d0dd87d:
  TStack_70._padding_ = CONCAT44(uVar14,iVar13);
  uVar14 = *(uint *)&(this->ExternalTokens).field_0x28;
  uVar18 = uVar14 & 0xffffffe0;
  TStack_70.CurrentBitIndex = iVar9;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar14 >> 5;
  TStack_70._28_4_ = iVar9;
  TStack_70.BaseBitIndex = iVar15;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(this->ExternalTokens).field_0x8 -
                       *(int *)&(this->ExternalTokens).field_0x34);
  local_res20 = pTVar2;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar14 < 0) || (iVar10 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TArray<FNamingTokenData,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar11;
  }
  pTVar7 = local_res20;
  uVar5 = *(uint *)&(this->ExternalTokens).field_0x28;
  if (uVar14 != uVar5) {
    puVar16 = *(undefined1 **)&(this->ExternalTokens).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar3;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar13 * 4);
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar13;
      uVar18 = uVar18 + 0x20;
      iVar13 = iVar13 + 1;
      uVar14 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14d0dd990;
      uVar14 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res18 = (int)lVar12;
    uVar14 = local_res18 + -1 + uVar18;
    if ((int)uVar5 < (int)uVar14) {
      uVar14 = uVar5;
    }
  }
LAB_14d0dd990:
  while( true ) {
    if (*(int *)&(this->ExternalTokens).field_0x8 - *(int *)&(this->ExternalTokens).field_0x34 !=
        (int)uStack_50) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FGuid,TArray<FNamingTokenData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar14) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pTVar2 == pTVar7))
    break;
    pTVar11 = (TArray<FNamingTokenData,TSizedDefaultAllocator<32>_> *)
              (*(longlong *)pTVar2 + ((longlong)TStack_70.CurrentBitIndex * 5 + 2) * 8);
    if ((__return_storage_ptr__ == pTVar11) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pTVar11 = (TArray<FNamingTokenData,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
      return pTVar11;
    }
    iVar13 = pTVar11->ArrayNum;
    if (iVar13 != 0) {
      iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x50,8,iVar13,&__return_storage_ptr__->AllocatorInstance,
                          &__return_storage_ptr__->ArrayNum,piVar1);
      ConstructItems<FNamingTokenData,FNamingTokenData,int>
                ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar10 * 0x50,
                 (FNamingTokenData *)(pTVar11->AllocatorInstance).Data,iVar13);
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return __return_storage_ptr__;
}

// GetCurrentDateTime @ 14d0ddbe0

FDateTime __thiscall UNamingTokens::GetCurrentDateTime(UNamingTokens *this)

{
  UFunction *this_00;
  UClass *pUVar1;
  undefined8 *in_RDX;
  undefined8 local_res18 [2];
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UNamingTokens_GetCurrentDateTime);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res18[0] = 0;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,local_res18);
    *in_RDX = local_res18[0];
    return (FDateTime)(long64)in_RDX;
  }
  (**(code **)(this->_padding_ + 0x2b8))(this);
  return (FDateTime)(long64)in_RDX;
}

// GetCurrentDateTime_Implementation @ 14d0ddc80

FDateTime __thiscall UNamingTokens::GetCurrentDateTime_Implementation(UNamingTokens *this)

{
  long64 *in_RDX;
  
  *in_RDX = (this->CurrentEvaluationData).CurrentDateTime.Ticks;
  return (FDateTime)(long64)in_RDX;
}

// GetCustomTokens @ 14d0ddca0

TArray<FNamingTokenData,TSizedDefaultAllocator<32>_> * __thiscall
UNamingTokens::GetCustomTokens(UNamingTokens *this)

{
  return &this->CustomTokens;
}

// GetDefaultTokens @ 14d0ddcb0

TArray<FNamingTokenData,TSizedDefaultAllocator<32>_> * __thiscall
UNamingTokens::GetDefaultTokens(UNamingTokens *this)

{
  return &this->DefaultTokens;
}

// GetExternalTokensChecked @ 14d0ddcc0

TArray<FNamingTokenData,TSizedDefaultAllocator<32>_> * __thiscall
UNamingTokens::GetExternalTokensChecked(UNamingTokens *this,FGuid *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ulong64 uVar5;
  TArray<FNamingTokenData,TSizedDefaultAllocator<32>_> *pTVar6;
  
  uVar5 = CityHash64((char *)param_1,0x10);
  iVar4 = TSet<TTuple<FGuid,TArray<FNamingTokenData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TArray<FNamingTokenData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,TArray<FNamingTokenData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TArray<FNamingTokenData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&this->ExternalTokens,(uint)uVar5,param_1);
  if ((iVar4 != -1) &&
     (lVar1 = *(longlong *)&(this->ExternalTokens).field_0x0 + (longlong)iVar4 * 0x28, lVar1 != 0))
  {
    return (TArray<FNamingTokenData,TSizedDefaultAllocator<32>_> *)(lVar1 + 0x10);
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar3) {
    return (TArray<FNamingTokenData,TSizedDefaultAllocator<32>_> *)&DAT_00000010;
  }
  pcVar2 = (code *)swi(3);
  pTVar6 = (TArray<FNamingTokenData,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
  return pTVar6;
}

// GetFormattedTokensStringForDisplay @ 14d0ddd50

FString * __thiscall
UNamingTokens::GetFormattedTokensStringForDisplay
          (UNamingTokens *this,FString *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_48;
  FString local_38;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar1 = (this->DefaultTokens).ArrayNum;
  pFVar2 = (this->DefaultTokens).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x50;
  while( true ) {
    if ((this->DefaultTokens).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FNamingTokenData_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    FText::ToString((FText *)(pFVar2 + 0x10));
    ::FString::PrintfImpl(&local_38,L"{%s}");
    ::FString::PrintfImpl(&local_48,L"%s - %s\n");
    iVar4 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar4);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar2 = pFVar2 + 0x50;
  }
  iVar1 = (this->CustomTokens).ArrayNum;
  pFVar2 = (this->CustomTokens).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x50;
  while( true ) {
    if ((this->CustomTokens).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FNamingTokenData_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    FText::ToString((FText *)(pFVar2 + 0x10));
    ::FString::PrintfImpl(&local_48,L"{%s}");
    ::FString::PrintfImpl(&local_38,L"%s - %s\n");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    pFVar2 = pFVar2 + 0x50;
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14d0e02d0

UClass * __cdecl UNamingTokens::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNamingTokens.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NamingTokens",L"NamingTokens",
               &Z_Registration_Info_UClass_UNamingTokens.InnerSingleton,
               StaticRegisterNativesUNamingTokens,0x118,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UNamingTokens>,
               InternalVTableHelperCtorCaller<UNamingTokens>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNamingTokens.InnerSingleton;
}

// GetWorld @ 14d0e0900

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UNamingTokens::GetWorld(UNamingTokens *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res10 [8];
  
  piVar1 = &(GEngine->WorldList).Array.ArrayNum;
  pFVar4 = (GEngine->WorldList).Array.AllocatorInstance.Data;
  iVar3 = *piVar1;
  pFVar2 = pFVar4 + (longlong)iVar3 * 8;
  while( true ) {
    if (*piVar1 != iVar3) {
      `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar4 == pFVar2) break;
    if (**(char **)pFVar4 == '\x01') {
      return *(UWorld **)(*(char **)pFVar4 + 0x2c0);
    }
    pFVar4 = pFVar4 + 8;
  }
  return (UWorld *)0x0;
}

// OnCreateDefaultTokens @ 14d0e46e0

void __thiscall
UNamingTokens::OnCreateDefaultTokens
          (UNamingTokens *this,TArray<FNamingTokenData,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// OnPostEvaluate @ 14d0e4780

void __thiscall UNamingTokens::OnPostEvaluate(UNamingTokens *this)

{
  UFunction *this_00;
  UClass *pUVar1;
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UNamingTokens_OnPostEvaluate);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
                    /* WARNING: Could not recover jumptable at 0x00014d0e47c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x260))(this,this_00,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014d0e47d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2c8))(this);
  return;
}

// OnPostEvaluate_Implementation @ 14d0e47f0

void __thiscall UNamingTokens::OnPostEvaluate_Implementation(UNamingTokens *this)

{
  return;
}

// OnPreEvaluate @ 14d0e4800

void __thiscall
UNamingTokens::OnPreEvaluate(UNamingTokens *this,FNamingTokensEvaluationData *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  UFunction *this_00;
  UClass *pUVar3;
  long64 local_28;
  ForAnyElementType local_20;
  undefined8 local_18;
  undefined1 local_10;
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UNamingTokens_OnPreEvaluate);
  pUVar3 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar3->ClassFlags & CLASS_Native) == CLASS_None) {
    local_28 = (param_1->CurrentDateTime).Ticks;
    local_20.Data = (FScriptContainerElement *)0x0;
    local_18 = 0;
    local_10 = 0;
    if ((TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *)&local_20 != &param_1->Contexts)
    {
      uVar1 = (param_1->Contexts).ArrayNum;
      pFVar2 = (param_1->Contexts).AllocatorInstance.Data;
      local_18 = (ulonglong)uVar1;
      if (uVar1 != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar1,0,&local_20,uVar1,(int *)((longlong)&local_18 + 4));
        ConstructItems<TObjectPtr<UObject>,TObjectPtr<UObject>,int>
                  (local_20.Data,(TObjectPtr<UObject> *)pFVar2,uVar1);
      }
    }
    local_10 = param_1->bForceCaseSensitive;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_28);
    if (local_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data);
      return;
    }
  }
  else {
    (**(code **)(this->_padding_ + 0x2c0))(this,param_1);
  }
  return;
}

// OnPreEvaluate_Implementation @ 14d0e4920

void __thiscall
UNamingTokens::OnPreEvaluate_Implementation
          (UNamingTokens *this,FNamingTokensEvaluationData *param_1)

{
  return;
}

// PostEvaluate @ 14d0e4930

void __thiscall UNamingTokens::PostEvaluate(UNamingTokens *this,FNamingTokenResultData *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  UFunction *this_00;
  UClass *pUVar9;
  uint uVar10;
  longlong lVar11;
  FDestructionSentinel local_38;
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UNamingTokens_OnPostEvaluate);
  pUVar9 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar9->ClassFlags & CLASS_Native) == CLASS_None) {
    (**(code **)(this->_padding_ + 0x260))(this,this_00,0);
  }
  else {
    (**(code **)(this->_padding_ + 0x2c8))(this);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnPostEvaluateEvent,
             (FWriteAccessScope *)&local_38);
  puVar1 = &(this->OnPostEvaluateEvent).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar10 = *(int *)&(this->OnPostEvaluateEvent).field_0x10 - 1;
  if (-1 < (int)uVar10) {
    lVar11 = (longlong)(int)uVar10 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar10 < *(int *)&(this->OnPostEvaluateEvent).field_0x10) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->OnPostEvaluateEvent).field_0x8;
      if (((*(int *)(lVar2 + 8 + lVar11) == 0) ||
          (plVar3 = *(longlong **)(lVar2 + lVar11), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar11 = lVar11 + -0x10;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  puVar1 = &(this->OnPostEvaluateEvent).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnPostEvaluateEvent,
               false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// PostInitProperties @ 14d0e4a90

void __thiscall UNamingTokens::PostInitProperties(UNamingTokens *this)

{
  int *piVar1;
  
  UObject::PostInitProperties((UObject *)this);
  DestructItems<FNamingTokenData,int>
            ((FNamingTokenData *)(this->DefaultTokens).AllocatorInstance.Data,
             (this->DefaultTokens).ArrayNum);
  piVar1 = &(this->DefaultTokens).ArrayMax;
  (this->DefaultTokens).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,&(this->DefaultTokens).AllocatorInstance,0,piVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00014d0e4aee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2b0))(this,&this->DefaultTokens);
  return;
}

// PreEvaluate @ 14d0e4b00

void __thiscall UNamingTokens::PreEvaluate(UNamingTokens *this,FNamingTokensEvaluationData *param_1)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  UFunction *this_00;
  UClass *pUVar10;
  uint uVar11;
  longlong lVar12;
  FDestructionSentinel local_58;
  long64 local_40;
  ForAnyElementType local_38;
  undefined8 local_30;
  undefined1 local_28;
  
  FNamingTokensEvaluationData::operator=(&this->CurrentEvaluationData,param_1);
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UNamingTokens_OnPreEvaluate);
  pUVar10 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar10->ClassFlags & CLASS_Native) == CLASS_None) {
    local_40 = (param_1->CurrentDateTime).Ticks;
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30 = 0;
    local_28 = 0;
    if ((TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *)&local_38 != &param_1->Contexts)
    {
      uVar11 = (param_1->Contexts).ArrayNum;
      pFVar2 = (param_1->Contexts).AllocatorInstance.Data;
      local_30 = (ulonglong)uVar11;
      if (uVar11 != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar11,0,&local_38,uVar11,(int *)((longlong)&local_30 + 4));
        ConstructItems<TObjectPtr<UObject>,TObjectPtr<UObject>,int>
                  (local_38.Data,(TObjectPtr<UObject> *)pFVar2,uVar11);
      }
    }
    local_28 = param_1->bForceCaseSensitive;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_40);
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data);
    }
  }
  else {
    (**(code **)(this->_padding_ + 0x2c0))(this,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnPreEvaluateEvent,
             (FWriteAccessScope *)&local_58);
  puVar1 = &(this->OnPreEvaluateEvent).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar6 = false;
  uVar11 = *(int *)&(this->OnPreEvaluateEvent).field_0x10 - 1;
  if (-1 < (int)uVar11) {
    lVar12 = (longlong)(int)uVar11 << 4;
    bVar6 = false;
    do {
      uVar9 = 0;
      if ((int)uVar11 < *(int *)&(this->OnPreEvaluateEvent).field_0x10) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      lVar3 = *(longlong *)&(this->OnPreEvaluateEvent).field_0x8;
      if ((*(int *)(lVar12 + 8 + lVar3) == 0) ||
         (plVar4 = *(longlong **)(lVar12 + lVar3), plVar4 == (longlong *)0x0)) {
LAB_14d0e4ca7:
        bVar6 = true;
      }
      else {
        cVar8 = (**(code **)(*plVar4 + 0x68))();
        if (cVar8 == '\0') goto LAB_14d0e4ca7;
      }
      lVar12 = lVar12 + -0x10;
      uVar11 = uVar11 - 1;
    } while (-1 < (int)uVar11);
  }
  puVar1 = &(this->OnPreEvaluateEvent).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar6) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnPreEvaluateEvent,false
              );
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  return;
}

// ProcessToken @ 14d0e4d20

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
UNamingTokens::ProcessToken
          (UNamingTokens *this,FText *__return_storage_ptr__,FNamingTokenData *param_1,
          FString *param_2,FString *param_3,FText *param_4)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  FText *pFVar5;
  UFunction *this_00;
  UClass *this_01;
  FName *pFVar6;
  UFunction *pUVar7;
  FTextFormat *pFVar8;
  longlong *plVar9;
  ForAnyElementType FVar10;
  wchar_t *pwVar11;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FString local_188;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_178
  ;
  FText local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  undefined1 local_128 [8];
  FName local_120;
  FString local_118;
  FText local_108;
  FFormatArgumentValue local_f8;
  FFormatArgumentValue local_d8;
  FName local_b8;
  FString local_b0;
  FString local_a0;
  FText local_90;
  FReadAccessScope local_80;
  FReadAccessScope local_68;
  FTextFormat local_50;
  
  ::FString::PrintfImpl(&local_118,L"{%s}");
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_118.Data.ArrayNum != 0) {
    FVar10.Data = local_118.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_138,(wchar_t *)FVar10.Data);
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  pFVar5 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar5->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = pFVar5->Flags;
  local_120 = param_1->FunctionName;
  this_00 = UClass::FindFunctionByName((UClass *)this->_padding_,local_120,IncludeSuper);
  if (this_00 == (UFunction *)0x0) {
LAB_14d0e4f2d:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->TokenProcessorNative,&local_80);
    if (((*(int *)&(param_1->TokenProcessorNative).field_0x10 == 0) ||
        (plVar9 = *(longlong **)&(param_1->TokenProcessorNative).field_0x8,
        plVar9 == (longlong *)0x0)) || (cVar4 = (**(code **)(*plVar9 + 0x38))(), cVar4 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_80);
      if (1 < (byte)LogNamingTokens._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNamingTokens);
      }
      goto LAB_14d0e526e;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_80);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->TokenProcessorNative,&local_68);
    if (*(int *)&(param_1->TokenProcessorNative).field_0x10 == 0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = *(longlong **)&(param_1->TokenProcessorNative).field_0x8;
    }
    (**(code **)(*plVar9 + 0x60))(plVar9,&local_108);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
    FText::operator=(__return_storage_ptr__,&local_108);
    local_168.TextData.Reference = local_108.TextData.Reference;
  }
  else {
    this_01 = StaticClass();
    pFVar6 = ::FName::FName(&local_b8,0x1c,L"ProcessTokenTemplateFunction",FNAME_Add);
    pUVar7 = UClass::FindFunctionByName(this_01,*pFVar6,IncludeSuper);
    if ((pUVar7 == (UFunction *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("FunctionSignature",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\NamingTokens\\Source\\NamingTokens\\Private\\Utils\\NamingTokenUtils.cpp"
                           ,0x15,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar2)();
      return pFVar5;
    }
    bVar3 = UFunction::IsSignatureCompatibleWith(this_00,pUVar7,0x17e04904008061e);
    if (((!bVar3) || ((this_00->FunctionFlags >> 0x1a & 1) == 0)) ||
       ((this_00->FunctionFlags >> 0x12 & 1) != 0)) {
      if (2 < (byte)LogNamingTokens._0_1_) {
        ::FName::ToString(&local_120,&local_b0);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNamingTokens);
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
      }
      goto LAB_14d0e4f2d;
    }
    FText::FText(&local_168);
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_168);
    pIVar1 = (__return_storage_ptr__->TextData).Reference;
    if (pIVar1 != local_168.TextData.Reference) {
      (__return_storage_ptr__->TextData).Reference = local_168.TextData.Reference;
      if (local_168.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_168.TextData.Reference + 8))
                  (local_168.TextData.Reference,local_res10);
      }
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
      }
    }
    __return_storage_ptr__->Flags = local_168.Flags;
  }
  if (local_168.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
  }
  local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(__return_storage_ptr__->TextData).Reference;
  local_178.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.Pairs.ArrayNum = 0;
  local_178.Pairs.ArrayMax = 0;
  local_f8.Type = Text;
  if (local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 8))(local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference,local_res18);
  }
  local_f8.TextValue.field0_0x0.TypedValue.Flags = __return_storage_ptr__->Flags;
  if ((local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FText *)(*pcVar2)();
    return pFVar5;
  }
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString_const_&,FFormatArgumentValue>(&local_178,param_3,&local_f8);
  if (local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  local_d8.TextValue.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(__return_storage_ptr__->TextData).Reference;
  local_d8.Type = Text;
  if (local_d8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_d8.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 8))(local_d8.TextValue.field0_0x0.TypedValue.TextData.Reference,local_128);
  }
  local_d8.TextValue.field0_0x0.TypedValue.Flags = __return_storage_ptr__->Flags;
  if ((local_d8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FText *)(*pcVar2)();
    return pFVar5;
  }
  if ((param_3->Data).ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_158,pwVar11);
  if ((param_2->Data).ArrayNum < 2) {
    if ((this->Namespace).Data.ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(this->Namespace).Data.AllocatorInstance.Data;
    }
  }
  else {
    pwVar11 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_148,pwVar11);
  FVar10.Data = local_158.Data.AllocatorInstance.Data;
  if (local_148.Data.ArrayNum < 2) {
    local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_158.Data.ArrayNum == 0) {
      local_188.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_158.Data.ArrayNum,0,(ForAnyElementType *)&local_188,
                 local_158.Data.ArrayNum,&local_188.Data.ArrayMax);
      memcpy(local_188.Data.AllocatorInstance.Data,FVar10.Data,(longlong)local_158.Data.ArrayNum * 2
            );
    }
  }
  else {
    UE::NamingTokens::Utils::GetNamespaceDelimiter(&local_a0);
    ::FString::PrintfImpl(&local_188,L"%s%s%s");
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
  }
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_178,&local_188,&local_d8);
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  if (local_d8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_d8.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  pFVar8 = FTextFormat::FTextFormat(&local_50,param_4,Default);
  pFVar5 = FText::Format(&local_90,pFVar8,&local_178);
  FText::operator=(param_4,pFVar5);
  if (local_90.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
  }
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_178.Pairs.AllocatorInstance.Data,
             local_178.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_178.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_178.Pairs.AllocatorInstance.Data);
  }
LAB_14d0e526e:
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ProcessTokenTemplateFunction @ 14d0e52a0

FText * __thiscall
UNamingTokens::ProcessTokenTemplateFunction(UNamingTokens *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  FText *pFVar2;
  undefined1 local_res10 [24];
  
  pFVar2 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar2->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
  }
  __return_storage_ptr__->Flags = pFVar2->Flags;
  return __return_storage_ptr__;
}

// RegisterExternalTokens @ 14d0e52f0

TArray<FNamingTokenData,TSizedDefaultAllocator<32>_> * __thiscall
UNamingTokens::RegisterExternalTokens(UNamingTokens *this,FGuid *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FGuid *pFVar4;
  TKeyInitializer<FGuid_const_&> local_res8;
  FGuid *local_res10;
  FGuid local_18;
  
  pFVar4 = FGuid::NewGuid(&local_18);
  uVar1 = pFVar4->B;
  uVar2 = pFVar4->C;
  uVar3 = pFVar4->D;
  param_1->A = pFVar4->A;
  param_1->B = uVar1;
  param_1->C = uVar2;
  param_1->D = uVar3;
  local_res10 = param_1;
  TSet<TTuple<FGuid,TArray<FNamingTokenData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TArray<FNamingTokenData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FGuid_const_&>_>
            ((TSet<TTuple<FGuid,TArray<FNamingTokenData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TArray<FNamingTokenData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&this->ExternalTokens,&local_res8,(bool *)&local_res10);
  return (TArray<FNamingTokenData,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&this->ExternalTokens + (longlong)(int)local_res8.Key * 0x28 + 0x10);
}

// StaticRegisterNativesUNamingTokens @ 14d0e5cc0

void __cdecl UNamingTokens::StaticRegisterNativesUNamingTokens(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UNamingTokens_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UnregisterExternalTokens @ 14d0e6320

void __thiscall UNamingTokens::UnregisterExternalTokens(UNamingTokens *this,FGuid *param_1)

{
  ulong64 uVar1;
  
  if (*(int *)&(this->ExternalTokens).field_0x8 != *(int *)&(this->ExternalTokens).field_0x34) {
    uVar1 = CityHash64((char *)param_1,0x10);
    TSet<TTuple<FGuid,TArray<FNamingTokenData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TArray<FNamingTokenData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FGuid>((TSet<TTuple<FGuid,TArray<FNamingTokenData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TArray<FNamingTokenData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                         *)&this->ExternalTokens,(uint)uVar1,param_1);
  }
  return;
}

// Validate @ 14d0e6420

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UNamingTokens::Validate(UNamingTokens *this)

{
  int iVar1;
  bool bVar2;
  ForAnyElementType FVar3;
  FNamingTokenData *pFVar4;
  undefined1 local_res8 [8];
  TArray<FNamingTokenData,TSizedDefaultAllocator<32>_> local_38;
  FText local_28;
  
  FText::FText(&local_28);
  bVar2 = UE::NamingTokens::Utils::ValidateName(&this->Namespace,&local_28);
  if ((!bVar2) && (1 < (byte)LogNamingTokens._0_1_)) {
    FText::ToString(&local_28);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNamingTokens);
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  GetAllTokens(this,&local_38);
  iVar1 = local_38.ArrayNum;
  pFVar4 = (FNamingTokenData *)
           (local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 0x50);
  FVar3.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if (local_38.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FNamingTokenData_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if ((FNamingTokenData *)FVar3.Data == pFVar4) break;
    FText::FText(&local_28);
    bVar2 = UE::NamingTokens::Utils::ValidateName((FString *)FVar3.Data,&local_28);
    if ((!bVar2) && (1 < (byte)LogNamingTokens._0_1_)) {
      FText::ToString(&local_28);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNamingTokens);
    }
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    FVar3.Data = FVar3.Data + 0x50;
  }
  DestructItems<FNamingTokenData,int>
            ((FNamingTokenData *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if ((FNamingTokenData *)local_38.AllocatorInstance.Data != (FNamingTokenData *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// execGetCurrentDateTime @ 14d0e7960

void __cdecl UNamingTokens::execGetCurrentDateTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x2b8))(param_1,local_res8);
  *(undefined8 *)param_3 = *puVar1;
  return;
}

// execOnPostEvaluate @ 14d0e7da0

void __cdecl UNamingTokens::execOnPostEvaluate(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014d0e7db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2c8))();
  return;
}

// execOnPreEvaluate @ 14d0e7dd0

void __cdecl UNamingTokens::execOnPreEvaluate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar local_28 [8];
  void *pvStack_20;
  undefined8 local_18;
  undefined1 local_10;
  
  local_18 = 0;
  local_28[0] = '\0';
  local_28[1] = '\0';
  local_28[2] = '\0';
  local_28[3] = '\0';
  local_28[4] = '\0';
  local_28[5] = '\0';
  local_28[6] = '\0';
  local_28[7] = '\0';
  pvStack_20 = (void *)0x0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  puVar2 = local_28;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2c0))(param_1,puVar2);
  if (pvStack_20 != (void *)0x0) {
    FMemory::Free(pvStack_20);
  }
  return;
}

// execProcessTokenTemplateFunction @ 14d0e7e90

void __cdecl
UNamingTokens::execProcessTokenTemplateFunction(UObject *param_1,FFrame *param_2,void *param_3)

{
  FText *pFVar1;
  undefined1 local_res10 [24];
  FText local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = FText::GetEmpty();
  local_18.TextData.Reference = (pFVar1->TextData).Reference;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 8))
              (local_18.TextData.Reference,local_res10);
  }
  local_18.Flags = pFVar1->Flags;
  FText::operator=(param_3,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

