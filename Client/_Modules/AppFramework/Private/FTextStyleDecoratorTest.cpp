// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 4

// ~FTextStyleDecoratorTest @ 143061ed0

void __thiscall FTextStyleDecoratorTest::~FTextStyleDecoratorTest(FTextStyleDecoratorTest *this)

{
  this->_padding_ = (longlong)&___7FTextStyleDecoratorTest__6B_;
  ITextDecorator::~ITextDecorator((ITextDecorator *)this);
  return;
}

// Create @ 1430a6c30

TSharedRef<FTextStyleDecoratorTest,1> * __cdecl
FTextStyleDecoratorTest::Create
          (TSharedRef<FTextStyleDecoratorTest,1> *__return_storage_ptr__,FTextStyles *param_1)

{
  undefined8 *puVar1;
  TRawPtrProxy<FTextStyleDecoratorTest> TVar2;
  FTextStyleDecoratorTest local_10;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7ITextDecorator__6B_;
    *puVar1 = &___7FTextStyleDecoratorTest__6B_;
    puVar1[1] = param_1;
  }
  TVar2 = MakeShareable<FTextStyleDecoratorTest>(&local_10);
  TSharedRef<FTextStyleDecoratorTest,1>::
  TSharedRef<FTextStyleDecoratorTest,1><FTextStyleDecoratorTest>
            (__return_storage_ptr__,(TRawPtrProxy<FTextStyleDecoratorTest> *)TVar2.Object);
  return __return_storage_ptr__;
}

// Create @ 1430a6cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<ISlateRun,1> * __thiscall
FTextStyleDecoratorTest::Create
          (FTextStyleDecoratorTest *this,TSharedRef<ISlateRun,1> *__return_storage_ptr__,
          TSharedRef<FTextLayout,1> *param_1,FTextRunParseResults *param_2,FString *param_3,
          TSharedRef<FString,1> *param_4,ISlateStyle *param_5)

{
  TSparseArray<TSparseSetElement<TTuple<FString,FTextRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar1;
  bool bVar2;
  FString *pFVar3;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar4;
  TSparseSetElement<TTuple<FString,FTextRange>_> *pTVar5;
  TSharedRef<FSlateTextRun,1> *pTVar6;
  longlong lVar7;
  TRangedForConstIterator *pTVar8;
  TRangedForConstIterator *pTVar9;
  undefined1 auStackY_5c8 [32];
  int local_594;
  int local_590;
  FTextRange local_550;
  TSparseArray<TSparseSetElement<TTuple<FString,FTextRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_548;
  TSparseArray<TSparseSetElement<TTuple<FString,FTextRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_540;
  TRangedForConstIterator *local_538;
  FString *local_530;
  FString *local_528;
  FString *local_520;
  TMap<FString,FTextRange,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>_>
  *local_518;
  TSparseArray<TSparseSetElement<TTuple<FString,FTextRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_510;
  TRangedForConstIterator *local_508;
  TSparseSetElement<TTuple<FString,FTextRange>_> *local_4f8;
  TSparseSetElement<TTuple<FString,FTextRange>_> *local_4f0;
  FString *local_4e8;
  FString *local_4e0;
  FString *local_4d8;
  FTextStyles *local_4d0;
  FTextBlockStyle *local_4c8;
  TSharedRef<FString_const_,1> local_4c0;
  FString local_4b0;
  FString local_4a0;
  TSharedRef<FSlateTextRun,1> local_490;
  TRangedForConstIterator local_480;
  FString local_450;
  TRangedForConstIterator local_440;
  TRangedForConstIterator local_410;
  TRangedForConstIterator local_3e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_390;
  FTextBlockStyle local_368;
  FRunInfo local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_5c8;
  local_520 = &local_450;
  pFVar3 = ::FString::FString(local_520,&param_2->Name);
  FRunInfo::FRunInfo(&local_88,pFVar3);
  local_548 = (TSparseArray<TSparseSetElement<TTuple<FString,FTextRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)&param_2->MetaData;
  local_540 = local_548;
  local_518 = (TMap<FString,FTextRange,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>_>
               *)local_548;
  pTVar4 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
           TConstSetBitIterator<FDefaultBitArrayAllocator>
                     (&local_3b0,
                      (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->MetaData).field_0x10);
  TSparseArray<TSparseSetElement<TTuple<FString,FTextRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::TRangedForConstIterator::TRangedForConstIterator(&local_440,local_548,pTVar4);
  pTVar1 = local_540;
  pTVar8 = &local_440;
  pTVar9 = &local_480;
  for (lVar7 = 0x30; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(char *)&pTVar9->_padding_ = (char)pTVar8->_padding_;
    pTVar8 = (TRangedForConstIterator *)((longlong)&pTVar8->_padding_ + 1);
    pTVar9 = (TRangedForConstIterator *)((longlong)&pTVar9->_padding_ + 1);
  }
  local_510 = local_540;
  pTVar4 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
           TConstSetBitIterator<FDefaultBitArrayAllocator>
                     (&local_390,(TBitArray<FDefaultBitArrayAllocator> *)&local_540->field_0x10,
                      *(int *)&local_540->field_0x28);
  TSparseArray<TSparseSetElement<TTuple<FString,FTextRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::TRangedForConstIterator::TRangedForConstIterator(&local_410,pTVar1,pTVar4);
  pTVar8 = &local_410;
  pTVar9 = &local_3e0;
  for (lVar7 = 0x30; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(char *)&pTVar9->_padding_ = (char)pTVar8->_padding_;
    pTVar8 = (TRangedForConstIterator *)((longlong)&pTVar8->_padding_ + 1);
    pTVar9 = (TRangedForConstIterator *)((longlong)&pTVar9->_padding_ + 1);
  }
  while( true ) {
    local_508 = &local_480;
    bVar2 = TSparseArray<TSparseSetElement<TTuple<FString,FTextRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!=(local_508,&local_3e0);
    if (!bVar2) break;
    local_538 = &local_480;
    pTVar5 = TSparseArray<TSparseSetElement<TTuple<FString,FTextRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             ::operator[]((TSparseArray<TSparseSetElement<TTuple<FString,FTextRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_480._padding_,local_480._padding_._4_4_);
    local_4f8 = pTVar5;
    local_4f0 = pTVar5;
    local_4e8 = ::FString::Mid(param_3,&local_4b0,*(int *)&pTVar5->field_0x10,
                               *(int *)&pTVar5->field_0x14 - *(int *)&pTVar5->field_0x10);
    TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
    Emplace<FString_const_&,FString>
              ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                *)&local_88.MetaData,(FString *)pTVar5,local_4e8);
    ::FString::~FString(&local_4b0);
    TSparseArray<TSparseSetElement<TTuple<FString,FTextRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TBaseIterator<1>::operator++((TBaseIterator<1> *)&local_480);
  }
  FTextRange::FTextRange(&local_550);
  local_530 = TSharedRef<FString,1>::operator->(param_4);
  if ((local_530->Data).ArrayNum == 0) {
    local_594 = 0;
  }
  else {
    local_594 = (local_530->Data).ArrayNum + -1;
  }
  local_550.BeginIndex = local_594;
  local_4e0 = ::FString::Mid(param_3,&local_4a0,(param_2->ContentRange).BeginIndex,
                             (param_2->ContentRange).EndIndex - (param_2->ContentRange).BeginIndex);
  local_4d8 = TSharedRef<FString,1>::operator*(param_4);
  ::FString::Append<FString,wchar_t>(local_4d8,local_4e0);
  ::FString::~FString(&local_4a0);
  local_528 = TSharedRef<FString,1>::operator->(param_4);
  if ((local_528->Data).ArrayNum == 0) {
    local_590 = 0;
  }
  else {
    local_590 = (local_528->Data).ArrayNum + -1;
  }
  local_550.EndIndex = local_590;
  local_4d0 = this->TextStyles;
  local_4c8 = FTextStyles::CreateTextBlockStyle(local_4d0,&local_368,&local_88);
  TSharedRef<FString_const_,1>::TSharedRef<FString_const_,1><FString>(&local_4c0,param_4);
  pTVar6 = FSlateTextRun::Create(&local_490,&local_88,&local_4c0,local_4c8,&local_550);
  TSharedRef<ISlateRun,1>::TSharedRef<ISlateRun,1><FSlateTextRun>(__return_storage_ptr__,pTVar6);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_490.SharedReferenceCount);
  TSharedRef<FString_const_,1>::~TSharedRef<FString_const_,1>(&local_4c0);
  FTextBlockStyle::~FTextBlockStyle(&local_368);
  FRunInfo::~FRunInfo(&local_88);
  return __return_storage_ptr__;
}

// Supports @ 1430faf70

bool __thiscall
FTextStyleDecoratorTest::Supports
          (FTextStyleDecoratorTest *this,FTextRunParseResults *param_1,FString *param_2)

{
  int iVar1;
  undefined1 local_46 [6];
  int local_40;
  FTextRunParseResults *local_38;
  FScriptContainerElement *local_30;
  FScriptContainerElement *local_28;
  FScriptContainerElement *local_20;
  FScriptContainerElement *local_18;
  FScriptContainerElement *local_10;
  
  local_40 = (param_1->Name).Data.ArrayNum;
  local_38 = param_1;
  if (local_40 == 0) {
    local_30 = (FScriptContainerElement *)
               `FString::operator*'::__l2::<lambda_1>::operator()(local_46);
  }
  else {
    local_30 = (param_1->Name).Data.AllocatorInstance.Data;
    local_28 = local_30;
    local_20 = local_30;
    local_18 = local_30;
  }
  local_10 = local_30;
  iVar1 = FGenericPlatformStricmp::Stricmp((wchar_t *)local_30,L"TextStyle");
  return iVar1 == 0;
}

