// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreHttpClient
// Functions: 9

// ~FActivityList @ 14456bd10

void __thiscall UE::IoStore::HTTP::FActivityList::~FActivityList(FActivityList *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Head != (FActivityNode *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Head == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                       ,0xc5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Append @ 14456f5a0

void __thiscall UE::IoStore::HTTP::FActivityList::Append(FActivityList *this,FActivityNode *param_1)

{
  FActivityNode *pFVar1;
  code *pcVar2;
  FActivityNode *pFVar3;
  bool bVar4;
  
  if ((param_1->Next != (FActivityNode *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Node->Next == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                         ,0x10a,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = this->Head;
  if (pFVar1 == (FActivityNode *)0x0) {
    this->Head = param_1;
    return;
  }
  for (pFVar3 = pFVar1->Next; pFVar3 != (FActivityNode *)0x0; pFVar3 = pFVar3->Next) {
    pFVar1 = pFVar3;
  }
  pFVar1->Next = param_1;
  return;
}

// Join @ 144578bd0

void __thiscall UE::IoStore::HTTP::FActivityList::Join(FActivityList *this,FActivityList *param_1)

{
  FActivityNode *pFVar1;
  FActivityNode *pFVar2;
  
  pFVar1 = this->Head;
  if (pFVar1 != (FActivityNode *)0x0) {
    for (pFVar2 = pFVar1->Next; pFVar2 != (FActivityNode *)0x0; pFVar2 = pFVar2->Next) {
      pFVar1 = pFVar2;
    }
    pFVar2 = pFVar1->Next;
    pFVar1->Next = param_1->Head;
    param_1->Head = pFVar2;
    return;
  }
  this->Head = param_1->Head;
  param_1->Head = (FActivityNode *)0x0;
  return;
}

// Pop @ 14457c340

FActivityNode * __thiscall UE::IoStore::HTTP::FActivityList::Pop(FActivityList *this)

{
  FActivityNode *pFVar1;
  
  pFVar1 = this->Head;
  if (pFVar1 == (FActivityNode *)0x0) {
    return pFVar1;
  }
  this->Head = pFVar1->Next;
  pFVar1->Next = (FActivityNode *)0x0;
  return pFVar1;
}

// PopAppend @ 14457c440

void __thiscall
UE::IoStore::HTTP::FActivityList::PopAppend(FActivityList *this,FActivityList *param_1)

{
  FActivityNode *pFVar1;
  FActivityNode *pFVar2;
  code *pcVar3;
  FActivityNode *pFVar4;
  bool bVar5;
  
  if ((this->Head == (FActivityNode *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Head != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                         ,0x134,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = this->Head;
  this->Head = pFVar1->Next;
  pFVar1->Next = (FActivityNode *)0x0;
  pFVar2 = param_1->Head;
  if (pFVar2 == (FActivityNode *)0x0) {
    param_1->Head = pFVar1;
    return;
  }
  for (pFVar4 = pFVar2->Next; pFVar4 != (FActivityNode *)0x0; pFVar4 = pFVar4->Next) {
    pFVar2 = pFVar4;
  }
  pFVar2->Next = pFVar1;
  return;
}

// PopImpl @ 14457c4f0

FActivityNode * __thiscall UE::IoStore::HTTP::FActivityList::PopImpl(FActivityList *this)

{
  FActivityNode *pFVar1;
  
  pFVar1 = this->Head;
  this->Head = pFVar1->Next;
  pFVar1->Next = (FActivityNode *)0x0;
  return pFVar1;
}

// PopPrepend @ 14457c510

void __thiscall
UE::IoStore::HTTP::FActivityList::PopPrepend(FActivityList *this,FActivityList *param_1)

{
  FActivityNode *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if (this->Head == (FActivityNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Head != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                       ,300,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = this->Head;
  this->Head = pFVar1->Next;
  pFVar1->Next = (FActivityNode *)0x0;
  pFVar1->Next = param_1->Head;
  param_1->Head = pFVar1;
  return;
}

// Prepend @ 14457c590

void __thiscall
UE::IoStore::HTTP::FActivityList::Prepend(FActivityList *this,FActivityNode *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1->Next != (FActivityNode *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Node->Next == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                       ,0x102,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  param_1->Next = this->Head;
  this->Head = param_1;
  return;
}

// Reverse @ 144580770

void __thiscall UE::IoStore::HTTP::FActivityList::Reverse(FActivityList *this)

{
  FActivityNode **ppFVar1;
  FActivityNode *pFVar2;
  FActivityNode *pFVar3;
  
  pFVar2 = this->Head;
  pFVar3 = (FActivityNode *)0x0;
  while (pFVar2 != (FActivityNode *)0x0) {
    ppFVar1 = &pFVar2->Next;
    pFVar2 = *ppFVar1;
    *ppFVar1 = pFVar3;
    pFVar3 = this->Head;
    this->Head = pFVar2;
  }
  this->Head = pFVar3;
  return;
}

