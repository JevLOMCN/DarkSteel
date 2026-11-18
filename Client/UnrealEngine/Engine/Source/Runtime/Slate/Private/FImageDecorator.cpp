// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 5

// FImageDecorator @ 142844180

FImageDecorator * __thiscall
FImageDecorator::FImageDecorator(FImageDecorator *this,FString *param_1,ISlateStyle *param_2)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FImageDecorator__6B_;
  ::FString::FString(&this->RunName,param_1);
  this->OverrideStyle = param_2;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// ~FImageDecorator @ 1428497b0

void __thiscall FImageDecorator::~FImageDecorator(FImageDecorator *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FImageDecorator__6B_;
  pFVar1 = (this->RunName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7ITextDecorator__6B_;
  return;
}

// Create @ 142863b10

TSharedRef<FImageDecorator,1> * __cdecl
FImageDecorator::Create
          (TSharedRef<FImageDecorator,1> *__return_storage_ptr__,FString *param_1,
          ISlateStyle *param_2)

{
  FScriptContainerElement *pFVar1;
  FImageDecorator *pFVar2;
  FString *pFVar3;
  TRawPtrProxy<FImageDecorator> local_res8;
  FString local_28;
  
  pFVar2 = ::operator_new(0x20);
  if (pFVar2 == (FImageDecorator *)0x0) {
    pFVar2 = (FImageDecorator *)0x0;
  }
  else {
    pFVar3 = ::FString::FString(&local_28,param_1);
    pFVar2->_padding_ = (longlong)&___7FImageDecorator__6B_;
    ::FString::FString(&pFVar2->RunName,pFVar3);
    pFVar2->OverrideStyle = param_2;
    pFVar1 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  }
  local_res8.Object = pFVar2;
  TSharedRef<FImageDecorator,1>::TSharedRef<FImageDecorator,1><FImageDecorator>
            (__return_storage_ptr__,&local_res8);
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// Create @ 142863bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<ISlateRun,1> * __thiscall
FImageDecorator::Create
          (FImageDecorator *this,TSharedRef<ISlateRun,1> *__return_storage_ptr__,
          TSharedRef<FTextLayout,1> *param_1,FTextRunParseResults *param_2,FString *param_3,
          TSharedRef<FString,1> *param_4,ISlateStyle *param_5)

{
  TMap<FString,FTextRange,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>_>
  *this_00;
  undefined1 *puVar1;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar2
  ;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  TBitArray<FDefaultBitArrayAllocator> *pTVar6;
  bool bVar7;
  int iVar8;
  FString *pFVar9;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar10;
  longlong lVar11;
  FInlineTextImageStyle *pFVar12;
  FSlateBrush *pFVar13;
  FSlateImageRun *pFVar14;
  TSharedRef<ISlateRun,1> *pTVar15;
  FTextRange FVar16;
  FMRSWRecursiveAccessDetector *this_01;
  ForAnyElementType FVar17;
  TRawPtrProxy<FSlateImageRun> TVar18;
  atomic<int> *paVar19;
  undefined1 auStack_298 [32];
  undefined1 local_278;
  undefined1 local_268 [8];
  FTextRange local_260;
  FName local_258;
  short local_250;
  bool local_24e;
  undefined1 local_248 [8];
  ForAnyElementType FStack_240;
  ulonglong local_238;
  TRawPtrProxy<FSlateImageRun> local_230;
  TRawPtrProxy<FSlateImageRun> local_228;
  short local_220;
  bool local_21e;
  undefined1 local_218 [8];
  void *pvStack_210;
  undefined8 local_208;
  short local_200;
  undefined1 local_1fe;
  undefined1 local_1f8 [8];
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1f0;
  undefined8 local_1e8;
  int iStack_1e0;
  undefined4 uStack_1dc;
  FString local_1d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1c0;
  TPairInitializer<FString_const_&,FString_&&> local_1a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_190;
  undefined8 uStack_170;
  FString local_168;
  longlong local_158;
  FString *local_150;
  TSharedRef<FSlateImageRun,1> local_148;
  TSharedRef<FSlateImageRun,1> local_138;
  TSharedRef<FSlateImageRun,1> local_128;
  FDestructionSentinel local_118;
  undefined1 local_100 [40];
  int local_d8;
  undefined4 uStack_d4;
  FString local_d0;
  FString local_c0;
  undefined1 local_a8 [16];
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_298;
  local_228.Object = (FSlateImageRun *)param_5;
  local_230.Object = (FSlateImageRun *)this;
  ::FString::FString(&local_168,L"src");
  this_00 = &param_2->MetaData;
  local_258 = (FName)TMapBase<FString,FTextRange,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>_>
                     ::Find((TMapBase<FString,FTextRange,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>_>
                             *)this_00,&local_168);
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  iVar8 = (param_4->Object->Data).ArrayNum;
  local_260.BeginIndex = iVar8 + -1;
  if (iVar8 == 0) {
    local_260.BeginIndex = 0;
  }
  ::FString::AppendChar(param_4->Object,L'\x200b');
  iVar3 = (param_4->Object->Data).ArrayNum;
  iVar8 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar8 = 0;
  }
  local_260.EndIndex = iVar8;
  pFVar9 = ::FString::FString(&local_c0,&param_2->Name);
  FRunInfo::FRunInfo((FRunInfo *)local_a8,pFVar9);
  puVar1 = &(param_2->MetaData).field_0x10;
  local_1c0._padding_._0_4_ = 0;
  local_1c0._padding_._4_4_ = 1;
  local_1c0.UnvisitedBitMask = 0xffffffff;
  local_1c0.CurrentBitIndex = 0;
  local_1c0.BaseBitIndex = 0;
  local_1c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if (*(int *)&(param_2->MetaData).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1c0);
  }
  TStack_190._padding_ = CONCAT44(local_1c0._padding_._4_4_,(undefined4)local_1c0._padding_);
  TStack_190.CurrentBitIndex = local_1c0.CurrentBitIndex;
  TStack_190.UnvisitedBitMask = local_1c0.UnvisitedBitMask;
  TStack_190._28_4_ = local_1c0._28_4_;
  TStack_190.BaseBitIndex = local_1c0.BaseBitIndex;
  local_d8 = *(int *)&(param_2->MetaData).field_0x8 - *(int *)&(param_2->MetaData).field_0x34;
  local_100._16_8_ = local_1c0.Array;
  uStack_170 = CONCAT44(uStack_d4,local_d8);
  TStack_190.Array = local_1c0.Array;
  local_1a0.Value = (FString *)this_00;
  local_100._0_8_ = this_00;
  local_100._8_8_ = TStack_190._padding_;
  local_100._24_8_ = TStack_190._16_8_;
  local_100._32_8_ = TStack_190._24_8_;
  pTVar10 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_100,
                       (TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                       *(int *)&(param_2->MetaData).field_0x28);
  local_1f8 = (undefined1  [8])pTVar10->_padding_;
  pTVar6 = pTVar10->Array;
  iVar8 = pTVar10->CurrentBitIndex;
  local_1e8._0_4_ = pTVar10->UnvisitedBitMask;
  local_1e8._4_4_ = pTVar10->CurrentBitIndex;
  iStack_1e0 = pTVar10->BaseBitIndex;
  uStack_1dc = *(undefined4 *)&pTVar10->field_0x1c;
  pTStack_1f0 = pTVar6;
  while( true ) {
    pFVar9 = local_1a0.Value;
    if (*(int *)((longlong)local_1a0.Value + 8) - *(int *)((longlong)local_1a0.Value + 0x34) !=
        (int)uStack_170) {
      local_268[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FTextRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_268);
    }
    if (((TStack_190.CurrentBitIndex == iVar8) && (TStack_190.Array == pTVar6)) &&
       ((TMap<FString,FTextRange,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>_>
         *)pFVar9 == this_00)) break;
    local_158 = (longlong)TStack_190.CurrentBitIndex * 0x20 + *(longlong *)pFVar9;
    local_150 = ::FString::Mid(param_3,&local_d0,*(int *)(local_158 + 0x10),
                               *(int *)(local_158 + 0x14) - *(int *)(local_158 + 0x10));
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)(local_a8 + 0x10),&local_1a0,(bool *)&local_158);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    TStack_190.UnvisitedBitMask = TStack_190.UnvisitedBitMask & ~TStack_190._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_190);
  }
  if (local_258 == (FName)0x0) {
    pFVar12 = FInlineTextImageStyle::GetDefault();
    pFVar9 = param_4->Object;
    pTVar4 = (param_4->SharedReferenceCount).ReferenceController;
    local_1fe = 1;
    local_200 = pFVar12->Baseline;
    local_1e8 = 0;
    local_1f8 = (undefined1  [8])0x0;
    pTStack_1f0 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      paVar19 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar19 = &pTVar4->SharedReferenceCount;
      LOCK();
      *paVar19 = (atomic<int>)((int)*paVar19 + 1);
      UNLOCK();
    }
    pFVar13 = &pFVar12->Image;
    if (pFVar13 == (FSlateBrush *)0x0) {
      pFVar13 = FStyleDefaults::GetNoBrush();
    }
    FVar16 = (FTextRange)::operator_new(200);
    if (FVar16 == (FTextRange)0x0) {
      FVar16.BeginIndex = 0;
      FVar16.EndIndex = 0;
    }
    else {
      *(undefined8 *)((longlong)FVar16 + 8) = 0;
      *(undefined8 *)((longlong)FVar16 + 0x10) = 0;
      *(undefined ***)FVar16 = &___7FSlateImageRun__6B_;
      ::FString::FString((FString *)((longlong)FVar16 + 0x18),(FString *)local_a8);
      *(undefined8 *)
       &((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          *)((longlong)FVar16 + 0x28))->Elements = 0;
      *(undefined8 *)((longlong)FVar16 + 0x30) = 0;
      *(undefined8 *)((longlong)FVar16 + 0x48) = 0;
      *(undefined4 *)((longlong)FVar16 + 0x50) = 0;
      *(undefined4 *)((longlong)FVar16 + 0x54) = 0x80;
      *(undefined4 *)((longlong)FVar16 + 0x58) = 0xffffffff;
      *(undefined4 *)((longlong)FVar16 + 0x5c) = 0;
      *(undefined8 *)((longlong)FVar16 + 0x68) = 0;
      *(undefined4 *)((longlong)FVar16 + 0x70) = 0;
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                   *)((longlong)FVar16 + 0x28),
                  (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                   *)(local_a8 + 0x10));
      *(FString **)((longlong)FVar16 + 0x78) = pFVar9;
      *(TReferenceControllerBase<1> **)((longlong)FVar16 + 0x80) = pTVar4;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar19 = (atomic<int>)((int)*paVar19 + 1);
        UNLOCK();
      }
      *(FTextRange *)((longlong)FVar16 + 0x88) = local_260;
      *(FSlateBrush **)((longlong)FVar16 + 0x90) = pFVar13;
      *(short *)((longlong)FVar16 + 0x98) = local_200;
      *(undefined1 *)((longlong)FVar16 + 0x9a) = local_1fe;
      TDelegate<short___cdecl(void),FDefaultDelegateUserPolicy>::
      TDelegate<short___cdecl(void),FDefaultDelegateUserPolicy>
                ((TDelegate<short___cdecl(void),FDefaultDelegateUserPolicy> *)
                 ((longlong)FVar16 + 0xa0),
                 (TDelegate<short___cdecl(void),FDefaultDelegateUserPolicy> *)local_1f8);
      *(undefined8 *)((longlong)FVar16 + 0xb8) = 0;
      *(undefined8 *)((longlong)FVar16 + 0xc0) = 0;
      if (*(longlong *)((longlong)FVar16 + 0x90) == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Image != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\SlateImageRun.cpp"
                           ,0x32,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar15 = (TSharedRef<ISlateRun,1> *)(*pcVar5)();
          return pTVar15;
        }
      }
      if (((*(longlong *)((longlong)FVar16 + 8) != 0) &&
          (*(longlong *)((longlong)FVar16 + 0x10) != 0)) &&
         (0 < *(int *)(*(longlong *)((longlong)FVar16 + 0x10) + 8))) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar15 = (TSharedRef<ISlateRun,1> *)(*pcVar5)();
          return pTVar15;
        }
      }
    }
    local_260 = FVar16;
    TSharedRef<FSlateImageRun,1>::TSharedRef<FSlateImageRun,1><FSlateImageRun>
              (&local_128,(TRawPtrProxy<FSlateImageRun> *)&local_260);
    __return_storage_ptr__->Object = (ISlateRun *)local_128.Object;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         local_128.SharedReferenceCount.ReferenceController;
    if (local_128.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_128.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f8);
    if (pTStack_1f0 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      FMemory::Free(pTStack_1f0);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1f8);
  }
  else {
    ::FString::Mid(param_3,&local_1d0,*(int *)local_258,
                   *(int *)((longlong)local_258 + 4) - *(int *)local_258);
    pFVar14 = (FSlateImageRun *)((local_230.Object)->RunInfo).Name.Data.AllocatorInstance.Data;
    TVar18.Object = local_228.Object;
    if (pFVar14 != (FSlateImageRun *)0x0) {
      TVar18.Object = pFVar14;
    }
    FVar17.Data = (FScriptContainerElement *)L"";
    if (local_1d0.Data.ArrayNum != 0) {
      FVar17.Data = local_1d0.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_258,(wchar_t *)FVar17.Data);
    local_278 = 0;
    lVar11 = (**(code **)((TVar18.Object)->_padding_ + 0xa0))
                       (TVar18.Object,FInlineTextImageStyle::TypeName,local_258,0);
    if (lVar11 == 0) {
      local_220 = 0;
      local_208 = 0;
      local_21e = true;
      local_218 = (undefined1  [8])0x0;
      pvStack_210 = (void *)0x0;
      pFVar13 = (FSlateBrush *)
                (**(code **)((TVar18.Object)->_padding_ + 0x50))(TVar18.Object,local_258,0,0);
      pFVar9 = param_4->Object;
      pTVar4 = (param_4->SharedReferenceCount).ReferenceController;
      if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
        paVar19 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar19 = &pTVar4->SharedReferenceCount;
        LOCK();
        *paVar19 = (atomic<int>)((int)*paVar19 + 1);
        UNLOCK();
      }
      if (pFVar13 == (FSlateBrush *)0x0) {
        pFVar13 = FStyleDefaults::GetNoBrush();
      }
      pFVar14 = ::operator_new(200);
      if (pFVar14 == (FSlateImageRun *)0x0) {
        pFVar14 = (FSlateImageRun *)0x0;
      }
      else {
        (((FString *)&pFVar14->_padding_)->Data).AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        pFVar14->_padding_ = 0;
        pFVar14->_padding_ = (longlong)&___7FSlateImageRun__6B_;
        ::FString::FString(&(pFVar14->RunInfo).Name,(FString *)local_a8);
        pTVar2 = &(pFVar14->RunInfo).MetaData;
        *(undefined8 *)&pTVar2->field_0x0 = 0;
        *(undefined8 *)&(pFVar14->RunInfo).MetaData.field_0x8 = 0;
        *(undefined8 *)&(pFVar14->RunInfo).MetaData.field_0x20 = 0;
        *(undefined4 *)&(pFVar14->RunInfo).MetaData.field_0x28 = 0;
        *(undefined4 *)&(pFVar14->RunInfo).MetaData.field_0x2c = 0x80;
        *(undefined4 *)&(pFVar14->RunInfo).MetaData.field_0x30 = 0xffffffff;
        *(undefined4 *)&(pFVar14->RunInfo).MetaData.field_0x34 = 0;
        *(undefined8 *)&(pFVar14->RunInfo).MetaData.field_0x40 = 0;
        *(undefined4 *)&(pFVar14->RunInfo).MetaData.field_0x48 = 0;
        TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
        ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                     *)pTVar2,
                    (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                     *)(local_a8 + 0x10));
        (pFVar14->Text).Object = pFVar9;
        (pFVar14->Text).SharedReferenceCount.ReferenceController = pTVar4;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          *paVar19 = (atomic<int>)((int)*paVar19 + 1);
          UNLOCK();
        }
        pFVar14->Range = local_260;
        pFVar14->Image = pFVar13;
        (pFVar14->Baseline).Value = local_220;
        (pFVar14->Baseline).bIsSet = local_21e;
        TDelegate<short___cdecl(void),FDefaultDelegateUserPolicy>::
        TDelegate<short___cdecl(void),FDefaultDelegateUserPolicy>
                  (&(pFVar14->Baseline).Getter,
                   (TDelegate<short___cdecl(void),FDefaultDelegateUserPolicy> *)local_218);
        (pFVar14->DynamicBrush).Object = (FSlateDynamicImageBrush *)0x0;
        (pFVar14->DynamicBrush).SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        if (pFVar14->Image == (FSlateBrush *)0x0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Image != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\SlateImageRun.cpp"
                             ,0x32,L"");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            pTVar15 = (TSharedRef<ISlateRun,1> *)(*pcVar5)();
            return pTVar15;
          }
        }
        if ((((((FString *)&pFVar14->_padding_)->Data).AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) && (pFVar14->_padding_ != 0)) &&
           (0 < *(int *)(pFVar14->_padding_ + 8))) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InObject || !InObject->DoesSharedInstanceExist()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x7a5,L"Trying to share an already-shared object");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            pTVar15 = (TSharedRef<ISlateRun,1> *)(*pcVar5)();
            return pTVar15;
          }
        }
      }
      local_230.Object = pFVar14;
      TSharedRef<FSlateImageRun,1>::TSharedRef<FSlateImageRun,1><FSlateImageRun>
                (&local_138,&local_230);
      __return_storage_ptr__->Object = (ISlateRun *)local_138.Object;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           local_138.SharedReferenceCount.ReferenceController;
      if (local_138.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_138.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_218);
      if (pvStack_210 != (void *)0x0) {
        FMemory::Free(pvStack_210);
      }
      this_01 = (FMRSWRecursiveAccessDetector *)local_218;
    }
    else {
      local_278 = 1;
      pFVar12 = (FInlineTextImageStyle *)
                (**(code **)((TVar18.Object)->_padding_ + 0xa0))
                          (TVar18.Object,FInlineTextImageStyle::TypeName);
      if (pFVar12 == (FInlineTextImageStyle *)0x0) {
        pFVar12 = FInlineTextImageStyle::GetDefault();
      }
      local_250 = pFVar12->Baseline;
      pFVar9 = param_4->Object;
      pTVar4 = (param_4->SharedReferenceCount).ReferenceController;
      local_238 = 0;
      local_24e = true;
      local_248 = (undefined1  [8])0x0;
      FStack_240.Data = (FScriptContainerElement *)0x0;
      if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
        paVar19 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar19 = &pTVar4->SharedReferenceCount;
        LOCK();
        *paVar19 = (atomic<int>)((int)*paVar19 + 1);
        UNLOCK();
      }
      pFVar13 = &pFVar12->Image;
      if (pFVar13 == (FSlateBrush *)0x0) {
        pFVar13 = FStyleDefaults::GetNoBrush();
      }
      pFVar14 = ::operator_new(200);
      if (pFVar14 == (FSlateImageRun *)0x0) {
        pFVar14 = (FSlateImageRun *)0x0;
      }
      else {
        pFVar14->_padding_ = 0;
        pFVar14->_padding_ = 0;
        pFVar14->_padding_ = (longlong)&___7FSlateImageRun__6B_;
        ::FString::FString(&(pFVar14->RunInfo).Name,(FString *)local_a8);
        pTVar2 = &(pFVar14->RunInfo).MetaData;
        *(undefined8 *)&pTVar2->field_0x0 = 0;
        *(undefined8 *)&(pFVar14->RunInfo).MetaData.field_0x8 = 0;
        *(undefined8 *)&(pFVar14->RunInfo).MetaData.field_0x20 = 0;
        *(undefined4 *)&(pFVar14->RunInfo).MetaData.field_0x28 = 0;
        *(undefined4 *)&(pFVar14->RunInfo).MetaData.field_0x2c = 0x80;
        *(undefined4 *)&(pFVar14->RunInfo).MetaData.field_0x30 = 0xffffffff;
        *(undefined4 *)&(pFVar14->RunInfo).MetaData.field_0x34 = 0;
        *(undefined8 *)&(pFVar14->RunInfo).MetaData.field_0x40 = 0;
        *(undefined4 *)&(pFVar14->RunInfo).MetaData.field_0x48 = 0;
        TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
        ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                     *)pTVar2,
                    (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                     *)(local_a8 + 0x10));
        (pFVar14->Text).Object = pFVar9;
        (pFVar14->Text).SharedReferenceCount.ReferenceController = pTVar4;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          *paVar19 = (atomic<int>)((int)*paVar19 + 1);
          UNLOCK();
        }
        pFVar14->Range = local_260;
        pFVar14->Image = pFVar13;
        (pFVar14->Baseline).Value = local_250;
        (pFVar14->Baseline).bIsSet = local_24e;
        TDelegate<short___cdecl(void),FDefaultDelegateUserPolicy>::
        TDelegate<short___cdecl(void),FDefaultDelegateUserPolicy>
                  (&(pFVar14->Baseline).Getter,
                   (TDelegate<short___cdecl(void),FDefaultDelegateUserPolicy> *)local_248);
        (pFVar14->DynamicBrush).Object = (FSlateDynamicImageBrush *)0x0;
        (pFVar14->DynamicBrush).SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        if (pFVar14->Image == (FSlateBrush *)0x0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Image != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\SlateImageRun.cpp"
                             ,0x32,L"");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            pTVar15 = (TSharedRef<ISlateRun,1> *)(*pcVar5)();
            return pTVar15;
          }
        }
        if (((pFVar14->_padding_ != 0) && (pFVar14->_padding_ != 0)) &&
           (0 < *(int *)(pFVar14->_padding_ + 8))) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InObject || !InObject->DoesSharedInstanceExist()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x7a5,L"Trying to share an already-shared object");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            pTVar15 = (TSharedRef<ISlateRun,1> *)(*pcVar5)();
            return pTVar15;
          }
        }
      }
      local_228.Object = pFVar14;
      TSharedRef<FSlateImageRun,1>::TSharedRef<FSlateImageRun,1><FSlateImageRun>
                (&local_148,&local_228);
      __return_storage_ptr__->Object = (ISlateRun *)local_148.Object;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           local_148.SharedReferenceCount.ReferenceController;
      if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_148.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_248,
                 (FWriteAccessScope *)&local_118);
      if (((int)local_238 != 0) && (FStack_240.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_240.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_240,0,0,0x10);
        local_238 = local_238 & 0xffffffff00000000;
      }
      if (local_118.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_118.Accessor,&local_118);
      }
      if (FStack_240.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_240.Data);
      }
      this_01 = (FMRSWRecursiveAccessDetector *)local_248;
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this_01);
    if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
    }
  }
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_a8 + 0x10));
  if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a8._0_8_);
  }
  return __return_storage_ptr__;
}

// Supports @ 14289d1f0

bool __thiscall
FImageDecorator::Supports(FImageDecorator *this,FTextRunParseResults *param_1,FString *param_2)

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

