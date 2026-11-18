// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InputCore
// Functions: 5

// Get @ 14238fb10

FInputKeyManager * __cdecl FInputKeyManager::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FInputKeyManager *pFVar3;
  FLLMScope local_res8 [2];
  FName local_res10;
  TRawPtrProxy<FInputKeyManager> local_res18;
  FMemScope local_res20;
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_InputCore_KeyManager.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_InputCore_KeyManager.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res10,true);
  if (Instance.Object == (FInputKeyManager *)0x0) {
    local_res18.Object = ::operator_new(0xa0);
    if (local_res18.Object != (FInputKeyManager *)0x0) {
      *(undefined8 *)&(local_res18.Object)->KeyMapVirtualToEnum = 0;
      *(undefined8 *)&((local_res18.Object)->KeyMapVirtualToEnum).field_0x8 = 0;
      *(undefined8 *)&((local_res18.Object)->KeyMapVirtualToEnum).field_0x20 = 0;
      *(undefined4 *)&((local_res18.Object)->KeyMapVirtualToEnum).field_0x28 = 0;
      *(undefined4 *)&((local_res18.Object)->KeyMapVirtualToEnum).field_0x2c = 0x80;
      *(undefined4 *)&((local_res18.Object)->KeyMapVirtualToEnum).field_0x30 = 0xffffffff;
      *(undefined4 *)&((local_res18.Object)->KeyMapVirtualToEnum).field_0x34 = 0;
      *(undefined8 *)&((local_res18.Object)->KeyMapVirtualToEnum).field_0x40 = 0;
      *(undefined4 *)&((local_res18.Object)->KeyMapVirtualToEnum).field_0x48 = 0;
      *(undefined8 *)&(local_res18.Object)->KeyMapCharToEnum = 0;
      *(undefined8 *)&((local_res18.Object)->KeyMapCharToEnum).field_0x8 = 0;
      *(undefined8 *)&((local_res18.Object)->KeyMapCharToEnum).field_0x20 = 0;
      *(undefined4 *)&((local_res18.Object)->KeyMapCharToEnum).field_0x28 = 0;
      *(undefined4 *)&((local_res18.Object)->KeyMapCharToEnum).field_0x2c = 0x80;
      *(undefined4 *)&((local_res18.Object)->KeyMapCharToEnum).field_0x30 = 0xffffffff;
      *(undefined4 *)&((local_res18.Object)->KeyMapCharToEnum).field_0x34 = 0;
      *(undefined8 *)&((local_res18.Object)->KeyMapCharToEnum).field_0x40 = 0;
      *(undefined4 *)&((local_res18.Object)->KeyMapCharToEnum).field_0x48 = 0;
      InitKeyMappings(local_res18.Object);
    }
    TSharedPtr<FInputKeyManager,1>::operator=<FInputKeyManager>(&Instance,&local_res18);
    if ((Instance.Object == (FInputKeyManager *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FInputKeyManager *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar3 = Instance.Object;
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return pFVar3;
}

// GetCodesFromKey @ 14238fca0

void __thiscall
FInputKeyManager::GetCodesFromKey
          (FInputKeyManager *this,FKey *param_1,uint **param_2,uint **param_3)

{
  uint *puVar1;
  
  puVar1 = TMapBase<unsigned_int,FKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FKey,0>_>
           ::FindKey((TMapBase<unsigned_int,FKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FKey,0>_>
                      *)&this->KeyMapCharToEnum,param_1);
  *param_3 = puVar1;
  puVar1 = TMapBase<unsigned_int,FKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FKey,0>_>
           ::FindKey((TMapBase<unsigned_int,FKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FKey,0>_>
                      *)this,param_1);
  *param_2 = puVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return;
}

// GetKeyFromCodes @ 142390d60

FKey * __thiscall
FInputKeyManager::GetKeyFromCodes
          (FInputKeyManager *this,FKey *__return_storage_ptr__,uint param_1,uint param_2)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  int iVar3;
  FKey *pFVar4;
  FString *pFVar5;
  FText *pFVar6;
  FKeyDetails *pFVar7;
  FKey *pFVar8;
  FKey *pFVar9;
  undefined1 *puVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res18 [8];
  uint local_res20;
  undefined1 local_188 [16];
  undefined1 local_178 [24];
  FName local_160;
  FKeyDetails *local_158;
  TReferenceControllerBase<1> *pTStack_150;
  undefined1 local_148 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_130;
  ForAnyElementType FStack_128;
  ulonglong local_120;
  undefined1 local_118 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_100;
  ForAnyElementType FStack_f8;
  ulonglong local_f0;
  FString local_e8;
  FKeyDetails local_d8;
  
  pFVar8 = (FKey *)0x0;
  if (*(int *)&(this->KeyMapVirtualToEnum).field_0x8 !=
      *(int *)&(this->KeyMapVirtualToEnum).field_0x34) {
    puVar10 = *(undefined1 **)&(this->KeyMapVirtualToEnum).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->KeyMapVirtualToEnum).field_0x38;
    }
    iVar3 = *(int *)(puVar10 +
                    (ulonglong)(*(int *)&(this->KeyMapVirtualToEnum).field_0x48 - 1U & param_1) * 4)
    ;
    if (iVar3 != -1) {
      do {
        lVar1 = *(longlong *)&this->KeyMapVirtualToEnum + (longlong)iVar3 * 0x28;
        if (*(uint *)(*(longlong *)&this->KeyMapVirtualToEnum + (longlong)iVar3 * 0x28) == param_1)
        {
          pFVar9 = (FKey *)(lVar1 + 8);
          if (lVar1 == 0) {
            pFVar9 = pFVar8;
          }
          if (pFVar9 != (FKey *)0x0) goto LAB_1423910ef;
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x20);
      } while (iVar3 != -1);
    }
  }
  pFVar4 = pFVar8;
  if (*(int *)&(this->KeyMapCharToEnum).field_0x8 != *(int *)&(this->KeyMapCharToEnum).field_0x34) {
    puVar10 = *(undefined1 **)&(this->KeyMapCharToEnum).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->KeyMapCharToEnum).field_0x38;
    }
    iVar3 = *(int *)(puVar10 +
                    (ulonglong)(*(int *)&(this->KeyMapCharToEnum).field_0x48 - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        pFVar4 = (FKey *)(*(longlong *)&this->KeyMapCharToEnum + (longlong)iVar3 * 0x28);
        if (*(uint *)(*(longlong *)&this->KeyMapCharToEnum + (longlong)iVar3 * 0x28) == param_2)
        break;
        iVar3 = *(int *)&pFVar4[1].KeyDetails.Object;
        pFVar4 = pFVar8;
      } while (iVar3 != -1);
    }
  }
  pFVar9 = (FKey *)&pFVar4->KeyDetails;
  if (pFVar4 == (FKey *)0x0) {
    pFVar9 = pFVar8;
  }
  if ((pFVar9 == (FKey *)0x0) && (0x20 < param_2)) {
    local_res20 = param_2;
    ::FString::PrintfImpl((FString *)local_188,L"%s%d");
    pFVar11 = (FScriptContainerElement *)L"";
    if (local_188._8_4_ != 0) {
      pFVar11 = (FScriptContainerElement *)local_188._0_8_;
    }
    ::FName::FName(&local_160,(wchar_t *)pFVar11);
    local_158 = (FKeyDetails *)0x0;
    pTStack_150 = (TReferenceControllerBase<1> *)0x0;
    if ((FScriptContainerElement *)local_188._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_188._0_8_);
    }
    FText::FText((FText *)local_118);
    local_118[0x10] = false;
    local_f0 = 0;
    local_100.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_f8.Data = (FScriptContainerElement *)0x0;
    pFVar5 = ::FString::Chr(&local_e8,(wchar_t)local_res20);
    pFVar6 = FText::AsCultureInvariant((FText *)local_188,pFVar5);
    FText::FText((FText *)local_148,pFVar6);
    local_148[0x10] = true;
    local_178._0_4_ = local_160.ComparisonIndex.Value;
    local_178._4_4_ = local_160.Number;
    local_178._8_8_ = local_158;
    local_120 = 0;
    local_178._16_8_ = pTStack_150;
    local_130.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_128.Data = (FScriptContainerElement *)0x0;
    if (pTStack_150 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_150->SharedReferenceCount = (atomic<int>)((int)pTStack_150->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar7 = FKeyDetails::FKeyDetails
                       (&local_d8,(FKey *)local_178,(TAttribute<FText> *)local_148,0x110,(FName)0x0,
                        (TAttribute<FText> *)local_118);
    EKeys::AddKey(pFVar7);
    FKeyDetails::~FKeyDetails(&local_d8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_130,(FWriteAccessScope *)local_178);
    if (((int)local_120 != 0) && (FStack_128.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_128.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_128,0,0,0x10);
      local_120 = local_120 & 0xffffffff00000000;
    }
    if (local_178[0x10] == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_178._8_8_,(FDestructionSentinel *)local_178);
    }
    if (FStack_128.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_128.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_130.AccessDetector);
    if ((ITextData *)local_148._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_148._0_8_ + 0x10))();
    }
    if ((FScriptContainerElement *)local_188._0_8_ != (FScriptContainerElement *)0x0) {
      (**(code **)(*(longlong *)local_188._0_8_ + 0x10))();
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_100,(FWriteAccessScope *)local_178);
    if (((int)local_f0 != 0) && (FStack_f8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_f8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_f8,0,0,0x10);
      local_f0 = local_f0 & 0xffffffff00000000;
    }
    if (local_178[0x10] == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_178._8_8_,(FDestructionSentinel *)local_178);
    }
    if (FStack_f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_f8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_100.AccessDetector);
    if ((ITextData *)local_118._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_118._0_8_ + 0x10))();
    }
    local_188._0_8_ = &local_res20;
    local_188._8_8_ = &local_160;
    TSet<TTuple<unsigned_int,FKey>,TDefaultMapHashableKeyFuncs<unsigned_int,FKey,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_int_const_&,FKey_const_&>_>
              ((TSet<TTuple<unsigned_int,FKey>,TDefaultMapHashableKeyFuncs<unsigned_int,FKey,0>,FDefaultSetAllocator>
                *)&this->KeyMapCharToEnum,
               (TPairInitializer<unsigned_int_const_&,FKey_const_&> *)local_res18,(bool *)local_188)
    ;
    __return_storage_ptr__->KeyName = local_160;
    (__return_storage_ptr__->KeyDetails).Object = local_158;
    (__return_storage_ptr__->KeyDetails).SharedReferenceCount.ReferenceController = pTStack_150;
    pTStack_150 = (TReferenceControllerBase<1> *)0x0;
    local_158 = (FKeyDetails *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
LAB_1423910ef:
    pFVar8 = &EKeys::Invalid;
    if (pFVar9 != (FKey *)0x0) {
      pFVar8 = pFVar9;
    }
    __return_storage_ptr__->KeyName = pFVar8->KeyName;
    (__return_storage_ptr__->KeyDetails).Object = (pFVar8->KeyDetails).Object;
    pTVar2 = (pFVar8->KeyDetails).SharedReferenceCount.ReferenceController;
    (__return_storage_ptr__->KeyDetails).SharedReferenceCount.ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  return __return_storage_ptr__;
}

// InitKeyMappings @ 142393540

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FInputKeyManager::InitKeyMappings(FInputKeyManager *this)

{
  TSharedPtr<FKeyDetails,1> *pTVar1;
  ulonglong *puVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  FSharedReferencer<1> FVar5;
  undefined8 this_00;
  bool bVar6;
  FNameEntryId FVar7;
  uint uVar8;
  int *piVar9;
  TTuple<FKey,TSharedPtr<FKeyDetails,1>_> *pTVar10;
  FText *pFVar11;
  FKeyDetails *pFVar12;
  longlong lVar13;
  FName FVar14;
  wchar_t *pwVar15;
  FName FVar16;
  longlong lVar17;
  ulonglong *puVar18;
  FString *pFVar19;
  FKeyDetails *pFVar20;
  ulonglong uVar21;
  FString *pFVar22;
  TSet<TTuple<unsigned_int,FKey>,TDefaultMapHashableKeyFuncs<unsigned_int,FKey,0>,FDefaultSetAllocator>
  *this_01;
  undefined1 auStackY_2a88 [32];
  FName local_2a58;
  FName local_2a50;
  FName local_2a48;
  FSharedReferencer<1> local_2a40;
  FLLMScope local_2a38 [2];
  FName local_2a30;
  undefined1 local_2a28 [8];
  FSharedReferencer<1> local_2a20;
  undefined1 local_2a18 [16];
  FMRSWRecursiveAccessDetector *local_2a08;
  TReferenceControllerBase<1> *local_2a00;
  undefined1 local_29f8 [16];
  FString *local_29e8;
  FName *local_29e0;
  undefined1 local_29d8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_29c0;
  ForAnyElementType FStack_29b8;
  ulonglong local_29b0;
  undefined1 local_29a8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2990;
  ForAnyElementType FStack_2988;
  ulonglong local_2980;
  undefined8 local_2978;
  FSharedReferencer<1> local_2970;
  undefined8 local_2968;
  FSharedReferencer<1> local_2960;
  undefined1 local_2958 [8];
  TSet<TTuple<unsigned_int,FKey>,TDefaultMapHashableKeyFuncs<unsigned_int,FKey,0>,FDefaultSetAllocator>
  *local_2950;
  FMemScope local_2948;
  FKey local_2940;
  FKey local_2928;
  FText local_2910;
  FKeyDetails local_2900;
  FString local_2838 [64];
  ITextData local_2438 [128];
  FString local_2038 [255];
  FScriptContainerElement *local_1048 [2];
  FString local_1038 [255];
  ulonglong local_48 [4];
  
  local_48[2] = __security_cookie.value ^ (ulonglong)auStackY_2a88;
  bVar4 = false;
  bVar6 = false;
  local_2a58.ComparisonIndex.Value = 0;
  local_2a18._0_8_ = this;
  FLLMScope::FLLMScope
            (local_2a38,LLMTagDeclaration_InputCore_KeyManager.UniqueName,false,None,Default,true);
  local_2a30 = LLMTagDeclaration_InputCore_KeyManager.UniqueName;
  FMemScope::FMemScope(&local_2948,&local_2a30,true);
  piVar9 = &local_1038[0].Data.ArrayMax;
  lVar13 = 0x100;
  do {
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(piVar9 + -3))->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    *(undefined8 *)(piVar9 + -1) = 0;
    piVar9 = piVar9 + 4;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  lVar13 = 0x100;
  piVar9 = &local_2038[0].Data.ArrayMax;
  do {
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(piVar9 + -3))->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    *(undefined8 *)(piVar9 + -1) = 0;
    piVar9 = piVar9 + 4;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  FVar7.Value = FGenericPlatformInput::GetStandardPrintableKeyMap
                          ((uint *)local_2438,local_2038,0x100,true,false);
  local_2a58.ComparisonIndex.Value = FVar7.Value;
  uVar8 = FWindowsPlatformInput::GetKeyMap((uint *)local_2838,local_1038,0x100);
  TSet<TTuple<unsigned_int,FKey>,TDefaultMapHashableKeyFuncs<unsigned_int,FKey,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned_int,FKey>,TDefaultMapHashableKeyFuncs<unsigned_int,FKey,0>,FDefaultSetAllocator>
           *)this);
  this_01 = (TSet<TTuple<unsigned_int,FKey>,TDefaultMapHashableKeyFuncs<unsigned_int,FKey,0>,FDefaultSetAllocator>
             *)&this->KeyMapCharToEnum;
  local_2950 = this_01;
  TSet<TTuple<unsigned_int,FKey>,TDefaultMapHashableKeyFuncs<unsigned_int,FKey,0>,FDefaultSetAllocator>
  ::Reset(this_01);
  this_00 = local_2a18._0_8_;
  if (uVar8 != 0) {
    local_29e0 = &local_2a50;
    pFVar19 = local_2838;
    pFVar22 = local_1038;
    uVar21 = (ulonglong)uVar8;
    do {
      FVar16.ComparisonIndex.Value = 0;
      FVar16.Number = 0;
      if ((pFVar22->Data).ArrayNum == 0) {
        pwVar15 = L"";
      }
      else {
        pwVar15 = (wchar_t *)(pFVar22->Data).AllocatorInstance.Data;
      }
      ::FName::FName(&local_2a50,pwVar15);
      local_2a48 = (FName)0x0;
      local_2a40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (local_2a50 == (FName)0x0) {
LAB_14239376d:
        FText::FText((FText *)local_29a8);
        FVar5.ReferenceController = local_2a40.ReferenceController;
        local_2980 = 0;
        local_29a8[0x10] = false;
        local_2a30.ComparisonIndex.Value = 0;
        local_2a30.Number = 0;
        local_2990.AccessDetector.State =
             (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
        FStack_2988.Data = (FScriptContainerElement *)0x0;
        if (local_2a48 == (FName)0x0) {
          local_2a18._8_4_ = local_2a50.ComparisonIndex.Value;
          local_2a18._12_4_ = local_2a50.Number;
          local_2a08 = (FMRSWRecursiveAccessDetector *)0x0;
          local_2a00 = local_2a40.ReferenceController;
          if (local_2a40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_2a40.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(local_2a40.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          pTVar10 = TSet<TTuple<FKey,TSharedPtr<FKeyDetails,1>_>,TDefaultMapHashableKeyFuncs<FKey,TSharedPtr<FKeyDetails,1>,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<FKey,TSharedPtr<FKeyDetails,1>_>,TDefaultMapHashableKeyFuncs<FKey,TSharedPtr<FKeyDetails,1>,0>,FDefaultSetAllocator>
                            *)&EKeys::InputKeys,(FKey *)(local_2a18 + 8));
          FVar14 = (FName)&pTVar10->field_0x18;
          if (pTVar10 == (TTuple<FKey,TSharedPtr<FKeyDetails,1>_> *)0x0) {
            FVar14 = FVar16;
          }
          if (FVar14 == (FName)0x0) {
            local_2960.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          }
          else {
            local_2960.ReferenceController = *(TReferenceControllerBase<1> **)((longlong)FVar14 + 8)
            ;
            FVar16 = *(FName *)FVar14;
            if (local_2960.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_2960.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)(local_2960.ReferenceController)->SharedReferenceCount + 1);
              UNLOCK();
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar5.ReferenceController);
          local_2968 = 0;
          local_2a48 = FVar16;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&local_2a40,&local_2960);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2960.ReferenceController);
          if (local_2a48 != (FName)0x0) goto LAB_142393840;
          bVar6 = true;
          pFVar11 = FText::FromName(&local_2910,&local_2a50);
        }
        else {
LAB_142393840:
          bVar4 = true;
          pFVar11 = TAttribute<FText>::Get((TAttribute<FText> *)((longlong)local_2a48 + 0x60));
          local_2a28 = (undefined1  [8])(pFVar11->TextData).Reference;
          if (local_2a28 != (undefined1  [8])0x0) {
            (**(code **)((longlong)*(ITextData *)local_2a28 + 8))(local_2a28,local_2958);
          }
          local_2a20.ReferenceController._0_4_ = pFVar11->Flags;
          pFVar11 = (FText *)local_2a28;
        }
        FText::FText((FText *)local_29f8,pFVar11);
        if ((bVar6) && (bVar6 = false, local_2910.TextData.Reference != (ITextData *)0x0)) {
          (**(code **)((longlong)*local_2910.TextData.Reference + 0x10))();
        }
        if ((bVar4) && (bVar4 = false, local_2a28 != (undefined1  [8])0x0)) {
          (**(code **)((longlong)*(ITextData *)local_2a28 + 0x10))();
        }
        FText::FText((FText *)local_29d8,(FText *)local_29f8);
        local_29d8[0x10] = true;
        local_2928.KeyName = local_2a50;
        local_2928.KeyDetails.Object = (FKeyDetails *)local_2a48;
        local_29b0 = 0;
        local_2928.KeyDetails.SharedReferenceCount.ReferenceController =
             local_2a40.ReferenceController;
        local_29c0.AccessDetector.State =
             (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
        FStack_29b8.Data = (FScriptContainerElement *)0x0;
        if (local_2a40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_2a40.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_2a40.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar12 = FKeyDetails::FKeyDetails
                            (&local_2900,&local_2928,(TAttribute<FText> *)local_29d8,0,local_2a30,
                             (TAttribute<FText> *)local_29a8);
        EKeys::AddKey(pFVar12);
        FKeyDetails::~FKeyDetails(&local_2900);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_29c0,(FWriteAccessScope *)(local_2a18 + 8));
        if (((int)local_29b0 != 0) && (FStack_29b8.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_29b8.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&FStack_29b8,0,0,0x10);
          local_29b0 = local_29b0 & 0xffffffff00000000;
        }
        if ((char)local_2a00 == '\0') {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                    (local_2a08,(FDestructionSentinel *)(local_2a18 + 8));
        }
        if (FStack_29b8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_29b8.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_29c0.AccessDetector);
        if ((ITextData *)local_29d8._0_8_ != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)local_29d8._0_8_ + 0x10))();
        }
        if ((ITextData *)local_29f8._0_8_ != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)local_29f8._0_8_ + 0x10))();
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_2990,(FWriteAccessScope *)(local_2a18 + 8));
        if (((int)local_2980 != 0) && (FStack_2988.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_2988.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&FStack_2988,0,0,0x10);
          local_2980 = local_2980 & 0xffffffff00000000;
        }
        if ((char)local_2a00 == '\0') {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                    (local_2a08,(FDestructionSentinel *)(local_2a18 + 8));
        }
        if (FStack_2988.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_2988.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2990.AccessDetector);
        if ((ITextData *)local_29a8._0_8_ != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)local_29a8._0_8_ + 0x10))();
        }
      }
      else {
        local_2940.KeyName = local_2a50;
        local_2940.KeyDetails.Object = (FKeyDetails *)0x0;
        local_2940.KeyDetails.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        pTVar10 = TSet<TTuple<FKey,TSharedPtr<FKeyDetails,1>_>,TDefaultMapHashableKeyFuncs<FKey,TSharedPtr<FKeyDetails,1>,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FKey,TSharedPtr<FKeyDetails,1>_>,TDefaultMapHashableKeyFuncs<FKey,TSharedPtr<FKeyDetails,1>,0>,FDefaultSetAllocator>
                          *)&EKeys::InputKeys,&local_2940);
        FVar14 = (FName)&pTVar10->field_0x18;
        if (pTVar10 == (TTuple<FKey,TSharedPtr<FKeyDetails,1>_> *)0x0) {
          FVar14 = FVar16;
        }
        if (FVar14 == (FName)0x0) {
          local_2970.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          FVar14 = FVar16;
        }
        else {
          local_2970.ReferenceController =
               (TReferenceControllerBase<1> *)(((FKeyDetails *)FVar14)->Key).KeyDetails.Object;
          FVar14 = (((FKeyDetails *)FVar14)->Key).KeyName;
          if ((FKeyDetails *)local_2970.ReferenceController != (FKeyDetails *)0x0) {
            LOCK();
            pTVar1 = &(((FKeyDetails *)local_2970.ReferenceController)->Key).KeyDetails;
            *(int *)&pTVar1->Object = *(int *)&pTVar1->Object + 1;
            UNLOCK();
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        local_2978 = 0;
        local_2a48 = FVar14;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&local_2a40,&local_2970);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2970.ReferenceController);
        if (local_2a48 == (FName)0x0) goto LAB_14239376d;
      }
      local_29e8 = pFVar19;
      TSet<TTuple<unsigned_int,FKey>,TDefaultMapHashableKeyFuncs<unsigned_int,FKey,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,FKey_const_&>_>
                ((TSet<TTuple<unsigned_int,FKey>,TDefaultMapHashableKeyFuncs<unsigned_int,FKey,0>,FDefaultSetAllocator>
                  *)this_00,(TPairInitializer<unsigned_int_const_&,FKey_const_&> *)local_2a18,
                 (bool *)&local_29e8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2a40.ReferenceController);
      pFVar22 = pFVar22 + 1;
      pFVar19 = (FString *)((longlong)&(pFVar19->Data).AllocatorInstance.Data + 4);
      uVar21 = uVar21 - 1;
      this_01 = local_2950;
      FVar7.Value = local_2a58.ComparisonIndex.Value;
    } while (uVar21 != 0);
  }
  pFVar20 = (FKeyDetails *)0x0;
  lVar13 = 0x100;
  local_2a58.ComparisonIndex.Value = 0;
  pFVar12 = pFVar20;
  if (FVar7.Value != 0) {
    do {
      if (local_2038[(longlong)pFVar12].Data.ArrayNum == 0) {
        pwVar15 = L"";
      }
      else {
        pwVar15 = (wchar_t *)local_2038[(longlong)pFVar12].Data.AllocatorInstance.Data;
      }
      ::FName::FName(&local_2a50,pwVar15);
      local_2a48 = (FName)0x0;
      local_2a40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (local_2a50 == (FName)0x0) {
LAB_142393b64:
        local_29e8 = local_2038;
        local_29e0 = &local_2a58;
        bVar6 = `FInputKeyManager::InitKeyMappings'::__l10::<lambda_1>::operator()(&local_29e8);
        if (bVar6) goto LAB_142393b85;
      }
      else {
        local_2940.KeyName = local_2a50;
        local_2940.KeyDetails.Object = (FKeyDetails *)0x0;
        local_2940.KeyDetails.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        pTVar10 = TSet<TTuple<FKey,TSharedPtr<FKeyDetails,1>_>,TDefaultMapHashableKeyFuncs<FKey,TSharedPtr<FKeyDetails,1>,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FKey,TSharedPtr<FKeyDetails,1>_>,TDefaultMapHashableKeyFuncs<FKey,TSharedPtr<FKeyDetails,1>,0>,FDefaultSetAllocator>
                          *)&EKeys::InputKeys,&local_2940);
        pFVar12 = (FKeyDetails *)&pTVar10->field_0x18;
        if (pTVar10 == (TTuple<FKey,TSharedPtr<FKeyDetails,1>_> *)0x0) {
          pFVar12 = pFVar20;
        }
        if (pFVar12 == (FKeyDetails *)0x0) {
          local_2a20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          FVar16 = (FName)pFVar20;
        }
        else {
          local_2a20.ReferenceController =
               (TReferenceControllerBase<1> *)(pFVar12->Key).KeyDetails.Object;
          FVar16 = (pFVar12->Key).KeyName;
          if ((FKeyDetails *)local_2a20.ReferenceController != (FKeyDetails *)0x0) {
            LOCK();
            pTVar1 = &(((FKeyDetails *)local_2a20.ReferenceController)->Key).KeyDetails;
            *(int *)&pTVar1->Object = *(int *)&pTVar1->Object + 1;
            UNLOCK();
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        local_2a28 = (undefined1  [8])0x0;
        local_2a48 = FVar16;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&local_2a40,&local_2a20);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2a20.ReferenceController);
        if (local_2a48 == (FName)0x0) goto LAB_142393b64;
LAB_142393b85:
        local_29f8._0_8_ =
             &local_2438[0].field_0x0 + (ulonglong)local_2a58.ComparisonIndex.Value * 4;
        local_29f8._8_8_ = &local_2a50;
        TSet<TTuple<unsigned_int,FKey>,TDefaultMapHashableKeyFuncs<unsigned_int,FKey,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<unsigned_int_const_&,FKey_const_&>_>
                  (this_01,(TPairInitializer<unsigned_int_const_&,FKey_const_&> *)local_2a18,
                   (bool *)local_29f8);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2a40.ReferenceController);
      local_2a58.ComparisonIndex.Value = local_2a58.ComparisonIndex.Value + 1;
      pFVar12 = (FKeyDetails *)(ulonglong)local_2a58.ComparisonIndex.Value;
    } while (local_2a58.ComparisonIndex.Value < FVar7.Value);
  }
  pFVar19 = local_1038;
  lVar17 = 0x100;
  do {
    pFVar3 = pFVar19[-1].Data.AllocatorInstance.Data;
    pFVar19 = pFVar19 + -1;
    lVar17 = lVar17 + -1;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
  } while (lVar17 != 0);
  puVar18 = local_48 + 2;
  do {
    puVar2 = puVar18 + -2;
    puVar18 = puVar18 + -2;
    lVar13 = lVar13 + -1;
    if ((void *)*puVar2 != (void *)0x0) {
      FMemory::Free((void *)*puVar2);
    }
  } while (lVar13 != 0);
  FMemScope::~FMemScope(&local_2948);
  FLLMScope::~FLLMScope(local_2a38);
  return;
}

// operator() @ 15048b420

bool __thiscall `FInputKeyManager::InitKeyMappings'::__l10::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<488820106382542377>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<488820106382542377>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

