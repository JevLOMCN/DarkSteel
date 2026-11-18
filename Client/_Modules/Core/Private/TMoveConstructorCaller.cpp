// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 30

// Construct @ 14174daa0

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FEmptyType>
::Construct(void *param_1,void *param_2)

{
  return;
}

// Construct @ 14174dab0

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType>
::Construct(void *param_1,void *param_2)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FText *pFVar3;
  undefined1 auStackX_8 [8];
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
  pFVar3 = FText::GetEmpty();
  pIVar1 = *(ITextData **)param_2;
  pIVar2 = (pFVar3->TextData).Reference;
  if (pIVar1 != pIVar2) {
    *(ITextData **)param_2 = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,auStackX_8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  *(undefined4 *)((longlong)param_2 + 8) = 0;
  return;
}

// Construct @ 14174dac0

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>_>::Construct
          (void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  return;
}

// Construct @ 1417bc1b0

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<TValueOrError<FExpressionNode,FExpressionError>::FEmptyType>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 1417bc1c0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<FEmptyVariantState>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 1417bc1d0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<FIoStoreTocResourceStorage::FMappedFile>::Construct
          (void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  if (*(longlong *)((longlong)param_2 + 0x58) == 0) {
    memmove((void *)((longlong)param_1 + 8),(void *)((longlong)param_2 + 8),0x50);
  }
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  *(undefined8 *)((longlong)param_1 + 0x58) = *(undefined8 *)((longlong)param_2 + 0x58);
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60) = *(undefined4 *)((longlong)param_2 + 0x60);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 100);
  *(undefined4 *)((longlong)param_2 + 0x60) = 0;
  *(undefined4 *)((longlong)param_2 + 100) = 10;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  if (*(longlong *)((longlong)param_2 + 0x108) == 0) {
    memmove((void *)((longlong)param_1 + 0x68),(void *)((longlong)param_2 + 0x68),0xa0);
  }
  if (*(void **)((longlong)param_1 + 0x108) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x108));
  }
  *(undefined8 *)((longlong)param_1 + 0x108) = *(undefined8 *)((longlong)param_2 + 0x108);
  *(undefined8 *)((longlong)param_2 + 0x108) = 0;
  *(undefined4 *)((longlong)param_1 + 0x110) = *(undefined4 *)((longlong)param_2 + 0x110);
  *(undefined4 *)((longlong)param_1 + 0x114) = *(undefined4 *)((longlong)param_2 + 0x114);
  *(undefined4 *)((longlong)param_2 + 0x110) = 0;
  *(undefined4 *)((longlong)param_2 + 0x114) = 10;
  *(undefined4 *)((longlong)param_1 + 0x118) = *(undefined4 *)((longlong)param_2 + 0x118);
  *(undefined1 *)((longlong)param_1 + 0x11c) = *(undefined1 *)((longlong)param_2 + 0x11c);
  return;
}

// Construct @ 1417bc1e0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<FIoStoreTocResourceStorage::FReadBlocks>::Construct
          (void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  if (*(longlong *)((longlong)param_2 + 0xa8) == 0) {
    memmove((void *)((longlong)param_1 + 8),(void *)((longlong)param_2 + 8),0xa0);
  }
  if (*(void **)((longlong)param_1 + 0xa8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xa8));
  }
  *(undefined8 *)((longlong)param_1 + 0xa8) = *(undefined8 *)((longlong)param_2 + 0xa8);
  *(undefined8 *)((longlong)param_2 + 0xa8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb0) = *(undefined4 *)((longlong)param_2 + 0xb0);
  *(undefined4 *)((longlong)param_1 + 0xb4) = *(undefined4 *)((longlong)param_2 + 0xb4);
  *(undefined4 *)((longlong)param_2 + 0xb0) = 0;
  *(undefined4 *)((longlong)param_2 + 0xb4) = 10;
  return;
}

// Construct @ 1417bc1f0

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType>::Construct
          (void *param_1,void *param_2)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FText *pFVar3;
  undefined1 auStackX_8 [8];
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
  pFVar3 = FText::GetEmpty();
  pIVar1 = *(ITextData **)param_2;
  pIVar2 = (pFVar3->TextData).Reference;
  if (pIVar1 != pIVar2) {
    *(ITextData **)param_2 = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,auStackX_8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  *(undefined4 *)((longlong)param_2 + 8) = 0;
  return;
}

// Construct @ 1417bc200

void __cdecl
UE::Core::Private::TMoveConstructorCaller<FExpressionNode>::Construct(void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FExpressionNode::operator=(param_1,param_2);
  return;
}

// Construct @ 1418d11b0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Private::FOutputDeviceLine>::Construct
          (void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
  *(undefined1 *)((longlong)param_1 + 0x18) = *(undefined1 *)((longlong)param_2 + 0x18);
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  return;
}

// Construct @ 1418d11e0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::FLogRecord>::Construct(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_2 + 0x10);
  *(undefined8 *)((longlong)param_1 + 0x14) = *(undefined8 *)((longlong)param_2 + 0x14);
  *(undefined1 *)((longlong)param_1 + 0x1c) = *(undefined1 *)((longlong)param_2 + 0x1c);
  *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x30);
  *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_2 + 0x28);
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x38);
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_2 + 0x40);
  *(undefined8 *)((longlong)param_1 + 0x48) = *(undefined8 *)((longlong)param_2 + 0x48);
  *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)((longlong)param_2 + 0x50);
  return;
}

// Construct @ 1418d1250

void __cdecl
UE::Core::Private::TMoveConstructorCaller<unsigned___int64>::Construct(void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  return;
}

// Construct @ 14192e430

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FEmptyType>
::Construct(void *param_1,void *param_2)

{
  return;
}

// Construct @ 14192e440

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType>
::Construct(void *param_1,void *param_2)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FText *pFVar3;
  undefined1 auStackX_8 [8];
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
  pFVar3 = FText::GetEmpty();
  pIVar1 = *(ITextData **)param_2;
  pIVar2 = (pFVar3->TextData).Reference;
  if (pIVar1 != pIVar2) {
    *(ITextData **)param_2 = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,auStackX_8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  *(undefined4 *)((longlong)param_2 + 8) = 0;
  return;
}

// Construct @ 14192e450

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>_>::Construct
          (void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  return;
}

// Construct @ 1419e61a0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<std::nullptr_t>::Construct(void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  return;
}

// Construct @ 1419e61b0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<FCbAttachment::FBinaryValue>::Construct
          (void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  FCompositeBuffer::FCompositeBuffer<FCompositeBuffer,0>(param_1,param_2);
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x20);
  *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x28) = *(undefined4 *)((longlong)param_2 + 0x28);
  return;
}

// Construct @ 1419e61f0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<FCbAttachment::FCompressedBinaryValue>::Construct
          (void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  FCompositeBuffer::FCompositeBuffer<FCompositeBuffer,0>(param_1,param_2);
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x20);
  *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x28) = *(undefined4 *)((longlong)param_2 + 0x28);
  return;
}

// Construct @ 1419e6230

void __cdecl
UE::Core::Private::TMoveConstructorCaller<FCbAttachment::FObjectValue>::Construct
          (void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x10);
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x20);
  *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x28) = *(undefined4 *)((longlong)param_2 + 0x28);
  return;
}

// Construct @ 141cfb330

void __cdecl UE::Core::Private::TMoveConstructorCaller<int>::Construct(void *param_1,void *param_2)

{
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  return;
}

// Construct @ 141cfb340

void __cdecl
UE::Core::Private::TMoveConstructorCaller<float>::Construct(void *param_1,void *param_2)

{
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  return;
}

// Construct @ 141cfb350

void __cdecl
UE::Core::Private::TMoveConstructorCaller<double>::Construct(void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  return;
}

// Construct @ 141cfb360

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<`FTVariantMoveAssignNonCopyableTest::TestBody'::__l2::FNoCopy>::Construct
          (void *param_1,void *param_2)

{
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  return;
}

// Construct @ 141cfb370

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<TSharedPtr<`FTVariantDestructorTest::TestBody'::__l2::FTestItem,1>_>::
Construct(void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  *(undefined8 *)param_2 = 0;
  return;
}

// Construct @ 141cfb390

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<TUniquePtr<`FTVariantDestructorTest::TestBody'::__l2::FTestItem,TDefaultDelete<`FTVariantDestructorTest::TestBody'::__l2::FTestItem>_>_>
::Construct(void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = 0;
  return;
}

// Construct @ 141d78c70

void __cdecl
UE::Core::Private::TMoveConstructorCaller<TValueOrError<int,int>::FEmptyType>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 141d78c80

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<TValueOrError<`FTemplatesValueOrErrorTest::TestBody'::__l2::FTestValue,`FTemplatesValueOrErrorTest::TestBody'::__l2::FTestError>::FEmptyType>
::Construct(void *param_1,void *param_2)

{
  return;
}

// Construct @ 141d78c90

void __cdecl
UE::Core::Private::TMoveConstructorCaller<`FTemplatesValueOrErrorTest::TestBody'::__l2::FTestValue>
::Construct(void *param_1,void *param_2)

{
  ValueCount = ValueCount + 1;
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  return;
}

// Construct @ 141d78cb0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<TValueOrError<int,int>::FWrapErrorType>::Construct
          (void *param_1,void *param_2)

{
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  return;
}

// Construct @ 141d78cc0

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<TValueOrError<`FTemplatesValueOrErrorTest::TestBody'::__l2::FTestValue,`FTemplatesValueOrErrorTest::TestBody'::__l2::FTestError>::FWrapErrorType>
::Construct(void *param_1,void *param_2)

{
  ErrorCount = ErrorCount + 1;
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  return;
}

