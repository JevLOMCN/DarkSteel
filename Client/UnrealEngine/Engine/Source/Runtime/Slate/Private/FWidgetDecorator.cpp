// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 5

// FWidgetDecorator @ 142846d70

FWidgetDecorator * __thiscall
FWidgetDecorator::FWidgetDecorator
          (FWidgetDecorator *this,FString *param_1,
          TDelegate<FSlateWidgetRun::FWidgetRunInfo___cdecl(FTextRunInfo_const_&,ISlateStyle_const_*),FDefaultDelegateUserPolicy>
          *param_2)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FWidgetDecorator__6B_;
  ::FString::FString(&this->RunName,param_1);
  TDelegate<FSlateWidgetRun::FWidgetRunInfo___cdecl(FTextRunInfo_const_&,ISlateStyle_const_*),FDefaultDelegateUserPolicy>
  ::
  TDelegate<FSlateWidgetRun::FWidgetRunInfo___cdecl(FTextRunInfo_const_&,ISlateStyle_const_*),FDefaultDelegateUserPolicy>
            (&this->CreateWidgetDelegate,param_2);
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// ~FWidgetDecorator @ 14284a0c0

void __thiscall FWidgetDecorator::~FWidgetDecorator(FWidgetDecorator *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FWidgetDecorator__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CreateWidgetDelegate);
  pvVar1 = *(void **)&(this->CreateWidgetDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->CreateWidgetDelegate);
  pFVar2 = (this->RunName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7ITextDecorator__6B_;
  return;
}

// Create @ 142865d20

TSharedRef<FWidgetDecorator,1> * __cdecl
FWidgetDecorator::Create
          (TSharedRef<FWidgetDecorator,1> *__return_storage_ptr__,FString *param_1,
          TDelegate<FSlateWidgetRun::FWidgetRunInfo___cdecl(FTextRunInfo_const_&,ISlateStyle_const_*),FDefaultDelegateUserPolicy>
          *param_2)

{
  FScriptContainerElement *pFVar1;
  FWidgetDecorator *pFVar2;
  FString *pFVar3;
  TRawPtrProxy<FWidgetDecorator> local_res8;
  FString local_28;
  
  pFVar2 = ::operator_new(0x30);
  if (pFVar2 == (FWidgetDecorator *)0x0) {
    pFVar2 = (FWidgetDecorator *)0x0;
  }
  else {
    pFVar3 = ::FString::FString(&local_28,param_1);
    pFVar2->_padding_ = (longlong)&___7FWidgetDecorator__6B_;
    ::FString::FString(&pFVar2->RunName,pFVar3);
    TDelegate<FSlateWidgetRun::FWidgetRunInfo___cdecl(FTextRunInfo_const_&,ISlateStyle_const_*),FDefaultDelegateUserPolicy>
    ::
    TDelegate<FSlateWidgetRun::FWidgetRunInfo___cdecl(FTextRunInfo_const_&,ISlateStyle_const_*),FDefaultDelegateUserPolicy>
              (&pFVar2->CreateWidgetDelegate,param_2);
    pFVar1 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  }
  local_res8.Object = pFVar2;
  TSharedRef<FWidgetDecorator,1>::TSharedRef<FWidgetDecorator,1><FWidgetDecorator>
            (__return_storage_ptr__,&local_res8);
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// Create @ 142865de0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<ISlateRun,1> * __thiscall
FWidgetDecorator::Create
          (FWidgetDecorator *this,TSharedRef<ISlateRun,1> *__return_storage_ptr__,
          TSharedRef<FTextLayout,1> *param_1,FTextRunParseResults *param_2,FString *param_3,
          TSharedRef<FString,1> *param_4,ISlateStyle *param_5)

{
  undefined1 *puVar1;
  TMap<FString,FTextRange,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  code *pcVar8;
  undefined8 this_00;
  undefined8 uVar9;
  TMap<FString,FTextRange,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>_>
  *pTVar10;
  bool bVar11;
  FString *pFVar12;
  FText *pFVar13;
  longlong lVar14;
  TSharedRef<ISlateRun,1> *pTVar15;
  FSlateWidgetRun *this_01;
  undefined1 *puVar16;
  longlong *plVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  uint *puVar23;
  undefined1 auStackY_278 [32];
  undefined1 local_248 [8];
  FTextRange local_240;
  TMap<FString,FTextRange,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>_>
  *local_238;
  int iStack_230;
  uint uStack_22c;
  undefined1 *local_228;
  undefined4 uStack_220;
  int iStack_21c;
  int local_218;
  int iStack_214;
  int iStack_210;
  undefined4 uStack_20c;
  undefined1 local_208 [4];
  int local_204;
  int local_200;
  undefined1 local_1fc [20];
  ISlateStyle *local_1e8;
  TSharedRef<FString,1> *local_1e0;
  TSharedRef<FTextLayout,1> *local_1d8;
  TRawPtrProxy<FSlateWidgetRun> local_1d0;
  TSharedRef<FString_const_,1> local_1c8;
  TMap<FString,FTextRange,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>_>
  *local_1b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1b0;
  undefined8 uStack_190;
  longlong local_188;
  FString *local_180;
  TSharedRef<FSlateWidgetRun,1> local_178;
  FText local_168;
  FString local_158;
  FString local_148;
  FReadAccessScope local_138;
  undefined1 local_120 [24];
  undefined1 local_108 [48];
  FString local_d8;
  undefined1 local_c8 [16];
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  local_b8;
  ITextData *local_68;
  uint local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_1e8 = param_5;
  local_1e0 = param_4;
  local_1fc._4_8_ = param_3;
  iVar4 = (param_4->Object->Data).ArrayNum;
  iVar21 = 0;
  iVar22 = 0;
  local_240.BeginIndex = iVar4 + -1;
  if (iVar4 == 0) {
    local_240.BeginIndex = iVar22;
  }
  local_1fc._12_8_ = this;
  local_1d8 = param_1;
  ::FString::AppendChar(param_4->Object,L'\xa0');
  iVar4 = (param_2->ContentRange).BeginIndex;
  iVar18 = (param_4->Object->Data).ArrayNum;
  local_240.EndIndex = iVar18 + -1;
  if (iVar18 == 0) {
    local_240.EndIndex = iVar22;
  }
  pFVar12 = ::FString::Mid(param_3,&local_158,iVar4,(param_2->ContentRange).EndIndex - iVar4);
  pFVar13 = FText::FromString(&local_168,pFVar12);
  pFVar12 = ::FString::FString(&local_d8,&param_2->Name);
  local_c8._0_8_ = (pFVar12->Data).AllocatorInstance.Data;
  (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8._8_4_ = (pFVar12->Data).ArrayNum;
  local_c8._12_4_ = (pFVar12->Data).ArrayMax;
  (pFVar12->Data).ArrayNum = 0;
  (pFVar12->Data).ArrayMax = 0;
  local_b8.Elements._32_8_ = 0;
  local_b8.Elements._0_8_ = 0;
  local_b8.Hash.InlineData[0] = 0;
  local_b8.Hash.InlineData[1] = 0;
  local_b8.Hash.InlineData[2] = 0;
  local_b8.Hash.InlineData[3] = 0;
  local_b8.Hash._padding_ = 0;
  local_b8.Elements._8_8_ = 0;
  local_b8.Elements._40_8_ = 0x8000000000;
  local_b8.Elements._48_8_ = 0xffffffff;
  local_b8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_b8._72_8_ = 0;
  local_b8.Elements._16_8_ = 0;
  local_b8.Elements._24_8_ = 0;
  local_68 = (pFVar13->TextData).Reference;
  if (local_68 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68 + 8))(local_68,local_208);
  }
  local_60 = pFVar13->Flags;
  pFVar6 = (pFVar12->Data).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  if (local_168.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
  }
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  iVar4 = *(int *)&(param_2->MetaData).field_0x28;
  puVar1 = &(param_2->MetaData).field_0x10;
  pTVar2 = &param_2->MetaData;
  uStack_22c = 1;
  iStack_21c = iVar22;
  if (iVar4 != 0) {
    puVar23 = *(uint **)&(param_2->MetaData).field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)puVar1;
    }
    uVar20 = *puVar23;
    iVar22 = 0;
    iVar21 = 0;
    while (uVar20 == 0) {
      lVar14 = (longlong)iVar21;
      iVar22 = iVar22 + 0x20;
      iVar21 = iVar21 + 1;
      iStack_21c = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iVar21) goto LAB_142865ffe;
      uVar20 = puVar23[lVar14 + 1];
    }
    uStack_22c = -uVar20 & uVar20;
    uVar3 = (ulonglong)uStack_22c * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_204 = (int)lVar14;
    iStack_21c = iVar22 + -1 + local_204;
    if (iVar4 < iStack_21c) {
      iStack_21c = iVar4;
    }
  }
LAB_142865ffe:
  iStack_210 = *(int *)&(param_2->MetaData).field_0x8 - *(int *)&(param_2->MetaData).field_0x34;
  uVar20 = *(uint *)&(param_2->MetaData).field_0x28;
  uStack_220 = 0xffffffff;
  uVar19 = uVar20 & 0xffffffe0;
  TStack_1b0._padding_ = CONCAT44(uStack_22c,iVar21);
  TStack_1b0.CurrentBitIndex = iStack_21c;
  TStack_1b0.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar20 >> 5;
  TStack_1b0._28_4_ = iStack_21c;
  TStack_1b0.BaseBitIndex = iVar22;
  uStack_190 = CONCAT44(uStack_20c,iStack_210);
  local_238 = pTVar2;
  iStack_230 = iVar21;
  local_228 = puVar1;
  local_218 = iVar22;
  iStack_214 = iStack_21c;
  local_1b8 = pTVar2;
  TStack_1b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar20 < 0) || (iVar4 < (int)uVar20)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    pTVar15 = (TSharedRef<ISlateRun,1> *)(*pcVar8)();
    return pTVar15;
  }
  this_00 = local_1fc._4_8_;
  uVar5 = *(uint *)&(param_2->MetaData).field_0x28;
  if (uVar20 != uVar5) {
    puVar16 = *(undefined1 **)&(param_2->MetaData).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar18 * 4);
    while (uVar20 == 0) {
      lVar14 = (longlong)iVar18;
      uVar19 = uVar19 + 0x20;
      iVar18 = iVar18 + 1;
      uVar20 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar18) goto LAB_142866110;
      uVar20 = *(uint *)(puVar16 + lVar14 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_200 = (int)lVar14;
    uVar20 = local_200 + -1 + uVar19;
    if ((int)uVar5 < (int)uVar20) {
      uVar20 = uVar5;
    }
  }
LAB_142866110:
  while( true ) {
    pTVar10 = local_1b8;
    if (*(int *)&local_1b8->field_0x8 - *(int *)&local_1b8->field_0x34 != (int)uStack_190) {
      local_248[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FTextRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_248);
    }
    uVar9 = local_1fc._12_8_;
    if (((TStack_1b0.CurrentBitIndex == uVar20) &&
        (TStack_1b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar10 == pTVar2)
       ) break;
    local_188 = (longlong)TStack_1b0.CurrentBitIndex * 0x20 + *(longlong *)pTVar10;
    local_180 = ::FString::Mid((FString *)this_00,&local_148,*(int *)(local_188 + 0x10),
                               *(int *)(local_188 + 0x14) - *(int *)(local_188 + 0x10));
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)(local_c8 + 0x10),(TPairInitializer<FString_const_&,FString_&&> *)local_1fc,
               (bool *)&local_188);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
    TStack_1b0.UnvisitedBitMask = TStack_1b0.UnvisitedBitMask & ~TStack_1b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1b0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(local_1fc._12_8_ + 0x18),
             &local_138);
  if (*(int *)&((TDelegate<FSlateWidgetRun::FWidgetRunInfo___cdecl(FTextRunInfo_const_&,ISlateStyle_const_*),FDefaultDelegateUserPolicy>
                 *)(uVar9 + 0x18))->field_0x10 == 0) {
    plVar17 = (longlong *)0x0;
  }
  else {
    plVar17 = *(longlong **)
               &((TDelegate<FSlateWidgetRun::FWidgetRunInfo___cdecl(FTextRunInfo_const_&,ISlateStyle_const_*),FDefaultDelegateUserPolicy>
                  *)(uVar9 + 0x18))->field_0x8;
  }
  (**(code **)(*plVar17 + 0x60))(plVar17,local_120,local_c8,local_1e8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_138);
  local_1c8.Object = local_1e0->Object;
  pTVar7 = (local_1e0->SharedReferenceCount).ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1c8.SharedReferenceCount.ReferenceController = pTVar7;
  this_01 = ::operator_new(0x108);
  if (this_01 == (FSlateWidgetRun *)0x0) {
    local_1d0.Object = (FSlateWidgetRun *)0x0;
  }
  else {
    local_1d0.Object =
         FSlateWidgetRun::FSlateWidgetRun
                   (this_01,local_1d8,(FRunInfo *)local_c8,&local_1c8,(FWidgetRunInfo *)local_120,
                    &local_240);
    if (((local_1d0.Object != (FSlateWidgetRun *)0x0) && ((local_1d0.Object)->_padding_ != 0)) &&
       (((local_1d0.Object)->_padding_ != 0 &&
        ((0 < *(int *)((local_1d0.Object)->_padding_ + 8) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("!InObject || !InObject->DoesSharedInstanceExist()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x7a5,L"Trying to share an already-shared object"), bVar11)))))) {
      pcVar8 = (code *)swi(3);
      pTVar15 = (TSharedRef<ISlateRun,1> *)(*pcVar8)();
      return pTVar15;
    }
  }
  TSharedRef<FSlateWidgetRun,1>::TSharedRef<FSlateWidgetRun,1><FSlateWidgetRun>
            (&local_178,&local_1d0);
  __return_storage_ptr__->Object = (ISlateRun *)local_178.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_178.SharedReferenceCount.ReferenceController;
  if (local_178.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_108);
  if ((void *)local_108._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_108._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_108);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_120._8_8_);
  if (local_68 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68 + 0x10))();
  }
  local_b8._72_8_ = local_b8._72_8_ & 0xffffffff00000000;
  if (local_b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_b8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_c8 + 0x10));
  if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._0_8_);
  }
  return __return_storage_ptr__;
}

// Supports @ 14289d240

bool __thiscall
FWidgetDecorator::Supports(FWidgetDecorator *this,FTextRunParseResults *param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1->Name).Data.ArrayNum;
  iVar1 = (this->RunName).Data.ArrayNum;
  if (iVar2 != iVar1) {
    return iVar2 + iVar1 == 1;
  }
  if (1 < iVar2) {
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_1->Name).Data.AllocatorInstance.Data,
                       (wchar_t *)(this->RunName).Data.AllocatorInstance.Data);
    return iVar2 == 0;
  }
  return true;
}

