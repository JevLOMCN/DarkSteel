// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 6

// ~FCommandList @ 145df09e0

void __thiscall UE::RenderCommandPipe::FCommandList::~FCommandList(FCommandList *this)

{
  FCommand *pFVar1;
  undefined1 local_res8 [8];
  uint uStack_14;
  
  if ((this->Commands).Head != (FCommand *)0x0) {
    `UE::RenderCommandPipe::FCommandList::Release'::__l5::<lambda_1>::operator()(local_res8);
    for (pFVar1 = (this->Commands).Head; pFVar1 != (FCommand *)0x0; pFVar1 = pFVar1->Next) {
      (**(code **)pFVar1->_padding_)(pFVar1,0);
    }
  }
  (this->Commands).Head = (FCommand *)0x0;
  (this->Commands).Tail = (FCommand *)0x0;
  *(ulonglong *)&(this->Commands).Num = (ulonglong)uStack_14 << 0x20;
  return;
}

// Enqueue @ 145e06600

bool __thiscall UE::RenderCommandPipe::FCommandList::Enqueue(FCommandList *this,FCommand *param_1)

{
  int *piVar1;
  FCommand *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  
  if (this->bClosed != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bClosed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderingThread.cpp"
                       ,0x5cc,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  pFVar2 = (this->Commands).Head;
  if (pFVar2 == (FCommand *)0x0) {
    (this->Commands).Head = param_1;
  }
  else {
    ((this->Commands).Tail)->Next = param_1;
  }
  (this->Commands).Tail = param_1;
  piVar1 = &(this->Commands).Num;
  *piVar1 = *piVar1 + 1;
  return pFVar2 == (FCommand *)0x0;
}

// Enqueue @ 145e06680

bool __thiscall
UE::RenderCommandPipe::FCommandList::Enqueue
          (FCommandList *this,
          TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          *param_1,FRenderCommandTag *param_2)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FCommand *pFVar5;
  
  pFVar5 = FMemStackBase::Alloc(this->Allocator,0x90,0x10);
  if (pFVar5 == (FCommand *)0x0) {
    pFVar5 = (FCommand *)0x0;
  }
  else {
    pFVar5->Next = (FCommand *)0x0;
    pFVar5->Type = ExecuteFunction;
    pFVar5->_padding_ =
         (longlong)&___7FExecuteFunctionCommand_FCommandList_RenderCommandPipe_UE__6B_;
    *(FRenderCommandTag **)&pFVar5[2].Type = param_2;
    bVar1 = param_1->TypeIndex;
    *(byte *)&pFVar5[5].Next = bVar1;
    if (2 < bVar1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x105,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                ::__l2::MoveConstructors)[bVar1])(&pFVar5[3].Next,param_1);
    FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)(pFVar5 + 1));
  }
  bVar3 = Enqueue(this,pFVar5);
  return bVar3;
}

// Enqueue @ 145e06760

bool __thiscall
UE::RenderCommandPipe::FCommandList::Enqueue(FCommandList *this,FCommandList *param_1)

{
  bool bVar1;
  FCommand *pFVar2;
  
  pFVar2 = FMemStackBase::Alloc(this->Allocator,0x20,0x10);
  if (pFVar2 != (FCommand *)0x0) {
    pFVar2->Next = (FCommand *)0x0;
    pFVar2->_padding_ =
         (longlong)&___7FExecuteCommandListCommand_FCommandList_RenderCommandPipe_UE__6B_;
    pFVar2->Type = ExecuteCommandList;
    pFVar2[1]._padding_ = (longlong)param_1;
  }
  bVar1 = Enqueue(this,pFVar2);
  return bVar1;
}

// Release @ 145e20c30

void __thiscall UE::RenderCommandPipe::FCommandList::Release(FCommandList *this)

{
  FCommand *pFVar1;
  undefined1 local_res8 [8];
  uint uStack_14;
  
  if ((this->Commands).Head != (FCommand *)0x0) {
    `UE::RenderCommandPipe::FCommandList::Release'::__l5::<lambda_1>::operator()(local_res8);
    for (pFVar1 = (this->Commands).Head; pFVar1 != (FCommand *)0x0; pFVar1 = pFVar1->Next) {
      (**(code **)pFVar1->_padding_)(pFVar1,0);
    }
  }
  (this->Commands).Head = (FCommand *)0x0;
  (this->Commands).Tail = (FCommand *)0x0;
  *(ulonglong *)&(this->Commands).Num = (ulonglong)uStack_14 << 0x20;
  return;
}

// operator() @ 1504dd1a0

bool __thiscall
`UE::RenderCommandPipe::FCommandList::Release'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5173014724773673503>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5173014724773673503>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

