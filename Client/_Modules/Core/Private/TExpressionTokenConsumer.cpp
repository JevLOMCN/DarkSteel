// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 15

// TExpressionTokenConsumer<char> @ 1418b9f70

TExpressionTokenConsumer<char> * __thiscall
TExpressionTokenConsumer<char>::TExpressionTokenConsumer<char>
          (TExpressionTokenConsumer<char> *this,char *param_1)

{
  size_t sVar1;
  
  (this->Tokens).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tokens).ArrayNum = 0;
  (this->Tokens).ArrayMax = 0;
  (this->Stream).Start = param_1;
  sVar1 = strlen(param_1);
  (this->Stream).ReadPos = param_1;
  (this->Stream).End = param_1 + (int)sVar1;
  return this;
}

// TExpressionTokenConsumer<char8_t> @ 1418b9fc0

TExpressionTokenConsumer<char8_t> * __thiscall
TExpressionTokenConsumer<char8_t>::TExpressionTokenConsumer<char8_t>
          (TExpressionTokenConsumer<char8_t> *this,uchar *param_1)

{
  size_t sVar1;
  
  (this->Tokens).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tokens).ArrayNum = 0;
  (this->Tokens).ArrayMax = 0;
  (this->Stream).Start = param_1;
  sVar1 = strlen((char *)param_1);
  (this->Stream).ReadPos = param_1;
  (this->Stream).End = param_1 + (int)sVar1;
  return this;
}

// TExpressionTokenConsumer<wchar_t> @ 1418ba010

TExpressionTokenConsumer<wchar_t> * __thiscall
TExpressionTokenConsumer<wchar_t>::TExpressionTokenConsumer<wchar_t>
          (TExpressionTokenConsumer<wchar_t> *this,wchar_t *param_1)

{
  size_t sVar1;
  
  (this->Tokens).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tokens).ArrayNum = 0;
  (this->Tokens).ArrayMax = 0;
  (this->Stream).Start = param_1;
  sVar1 = wcslen(param_1);
  (this->Stream).ReadPos = param_1;
  (this->Stream).End = param_1 + (int)sVar1;
  return this;
}

// ~TExpressionTokenConsumer<char> @ 1418bdd90

void __thiscall
TExpressionTokenConsumer<char>::~TExpressionTokenConsumer<char>
          (TExpressionTokenConsumer<char> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TExpressionToken<char>,int>
            ((TExpressionToken<char> *)(this->Tokens).AllocatorInstance.Data,(this->Tokens).ArrayNum
            );
  pFVar1 = (this->Tokens).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TExpressionTokenConsumer<char8_t> @ 1418bddd0

void __thiscall
TExpressionTokenConsumer<char8_t>::~TExpressionTokenConsumer<char8_t>
          (TExpressionTokenConsumer<char8_t> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TExpressionToken<char8_t>,int>
            ((TExpressionToken<char8_t> *)(this->Tokens).AllocatorInstance.Data,
             (this->Tokens).ArrayNum);
  pFVar1 = (this->Tokens).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TExpressionTokenConsumer<wchar_t> @ 1418bde10

void __thiscall
TExpressionTokenConsumer<wchar_t>::~TExpressionTokenConsumer<wchar_t>
          (TExpressionTokenConsumer<wchar_t> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TExpressionToken<wchar_t>,int>
            ((TExpressionToken<wchar_t> *)(this->Tokens).AllocatorInstance.Data,
             (this->Tokens).ArrayNum);
  pFVar1 = (this->Tokens).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Add @ 1418c5d30

void __thiscall
TExpressionTokenConsumer<char>::Add
          (TExpressionTokenConsumer<char> *this,TStringToken<char> *param_1,FExpressionNode *param_2
          )

{
  int *piVar1;
  char *pcVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FExpressionNode local_48;
  
  pcVar2 = param_1->TokenEnd;
  if ((pcVar2 < (this->Stream).Start) || ((this->Stream).End < pcVar2)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6855721686587670253>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\ExpressionParser.cpp"
                       ,0x113,"IsReadPosValid(Token.TokenEnd, 0)");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    (this->Stream).ReadPos = pcVar2;
  }
  iVar6 = (this->Tokens).ArrayNum;
  piVar1 = &(this->Tokens).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1060,(ForAnyElementType *)this,piVar1);
  }
  (this->Tokens).ArrayNum = iVar6 + 1;
  pFVar3 = (this->Tokens).AllocatorInstance.Data;
  local_48.TypeId.A = 0;
  local_48.TypeId.B = 0;
  local_48.TypeId.C = 0;
  local_48.TypeId.D = 0;
  FExpressionNode::operator=(&local_48,param_2);
  TExpressionToken<char>::TExpressionToken<char>
            ((TExpressionToken<char> *)(pFVar3 + (longlong)iVar6 * 0x60),param_1,&local_48);
  return;
}

// Add @ 1418c5e00

void __thiscall
TExpressionTokenConsumer<char8_t>::Add
          (TExpressionTokenConsumer<char8_t> *this,TStringToken<char8_t> *param_1,
          FExpressionNode *param_2)

{
  int *piVar1;
  uchar *puVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FExpressionNode local_48;
  
  puVar2 = param_1->TokenEnd;
  if ((puVar2 < (this->Stream).Start) || ((this->Stream).End < puVar2)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6855721686587670253>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\ExpressionParser.cpp"
                       ,0x113,"IsReadPosValid(Token.TokenEnd, 0)");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    (this->Stream).ReadPos = puVar2;
  }
  iVar6 = (this->Tokens).ArrayNum;
  piVar1 = &(this->Tokens).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1060,(ForAnyElementType *)this,piVar1);
  }
  (this->Tokens).ArrayNum = iVar6 + 1;
  pFVar3 = (this->Tokens).AllocatorInstance.Data;
  local_48.TypeId.A = 0;
  local_48.TypeId.B = 0;
  local_48.TypeId.C = 0;
  local_48.TypeId.D = 0;
  FExpressionNode::operator=(&local_48,param_2);
  TExpressionToken<char8_t>::TExpressionToken<char8_t>
            ((TExpressionToken<char8_t> *)(pFVar3 + (longlong)iVar6 * 0x60),param_1,&local_48);
  return;
}

// Add @ 1418c5ed0

void __thiscall
TExpressionTokenConsumer<wchar_t>::Add
          (TExpressionTokenConsumer<wchar_t> *this,TStringToken<wchar_t> *param_1,
          FExpressionNode *param_2)

{
  int *piVar1;
  wchar_t *pwVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FExpressionNode local_48;
  
  pwVar2 = param_1->TokenEnd;
  if ((pwVar2 < (this->Stream).Start) || ((this->Stream).End < pwVar2)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6855721686587670253>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\ExpressionParser.cpp"
                       ,0x113,"IsReadPosValid(Token.TokenEnd, 0)");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    (this->Stream).ReadPos = pwVar2;
  }
  iVar6 = (this->Tokens).ArrayNum;
  piVar1 = &(this->Tokens).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1060,(ForAnyElementType *)this,piVar1);
  }
  (this->Tokens).ArrayNum = iVar6 + 1;
  pFVar3 = (this->Tokens).AllocatorInstance.Data;
  local_48.TypeId.A = 0;
  local_48.TypeId.B = 0;
  local_48.TypeId.C = 0;
  local_48.TypeId.D = 0;
  FExpressionNode::operator=(&local_48,param_2);
  TExpressionToken<wchar_t>::TExpressionToken<wchar_t>
            ((TExpressionToken<wchar_t> *)(pFVar3 + (longlong)iVar6 * 0x60),param_1,&local_48);
  return;
}

// Extract @ 1418da810

TArray<TExpressionToken<char>,TSizedDefaultAllocator<32>_> * __thiscall
TExpressionTokenConsumer<char>::Extract
          (TExpressionTokenConsumer<char> *this,
          TArray<TExpressionToken<char>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar2 = (this->Tokens).ArrayNum;
  iVar3 = (this->Tokens).ArrayMax;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  iVar4 = __return_storage_ptr__->ArrayNum;
  iVar5 = __return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (this->Tokens).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar2;
  __return_storage_ptr__->ArrayMax = iVar3;
  (this->Tokens).AllocatorInstance.Data = pFVar1;
  (this->Tokens).ArrayNum = iVar4;
  (this->Tokens).ArrayMax = iVar5;
  return __return_storage_ptr__;
}

// Extract @ 1418da830

TArray<TExpressionToken<char8_t>,TSizedDefaultAllocator<32>_> * __thiscall
TExpressionTokenConsumer<char8_t>::Extract
          (TExpressionTokenConsumer<char8_t> *this,
          TArray<TExpressionToken<char8_t>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar2 = (this->Tokens).ArrayNum;
  iVar3 = (this->Tokens).ArrayMax;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  iVar4 = __return_storage_ptr__->ArrayNum;
  iVar5 = __return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (this->Tokens).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar2;
  __return_storage_ptr__->ArrayMax = iVar3;
  (this->Tokens).AllocatorInstance.Data = pFVar1;
  (this->Tokens).ArrayNum = iVar4;
  (this->Tokens).ArrayMax = iVar5;
  return __return_storage_ptr__;
}

// Extract @ 1418da850

TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_> * __thiscall
TExpressionTokenConsumer<wchar_t>::Extract
          (TExpressionTokenConsumer<wchar_t> *this,
          TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar2 = (this->Tokens).ArrayNum;
  iVar3 = (this->Tokens).ArrayMax;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  iVar4 = __return_storage_ptr__->ArrayNum;
  iVar5 = __return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (this->Tokens).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar2;
  __return_storage_ptr__->ArrayMax = iVar3;
  (this->Tokens).AllocatorInstance.Data = pFVar1;
  (this->Tokens).ArrayNum = iVar4;
  (this->Tokens).ArrayMax = iVar5;
  return __return_storage_ptr__;
}

// GetStream @ 1418e18d0

TTokenStream<char> * __thiscall
TExpressionTokenConsumer<char>::GetStream(TExpressionTokenConsumer<char> *this)

{
  return &this->Stream;
}

// GetStream @ 1418e18e0

TTokenStream<char8_t> * __thiscall
TExpressionTokenConsumer<char8_t>::GetStream(TExpressionTokenConsumer<char8_t> *this)

{
  return &this->Stream;
}

// GetStream @ 1418e18f0

TTokenStream<wchar_t> * __thiscall
TExpressionTokenConsumer<wchar_t>::GetStream(TExpressionTokenConsumer<wchar_t> *this)

{
  return &this->Stream;
}

