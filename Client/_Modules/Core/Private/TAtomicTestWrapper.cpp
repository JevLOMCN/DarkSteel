// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 30

// Check @ 141c909b0

void __thiscall _anon_EAE22394::TAtomicTestWrapper<short>::Check(TAtomicTestWrapper<short> *this)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  TAtomic<short> TVar4;
  
  TVar4 = (TAtomic<short>)0x0;
  lVar3 = 2;
  do {
    TVar4 = (TAtomic<short>)((short)TVar4 << 8 | 0xcd);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if ((TAtomic<short>)this->NativeArray[0] != TVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[0] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x52,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(TAtomic<short> *)(this->NativeArray + 2) != TVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[2] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x53,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->AtomicArray[0] != TVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[0].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x54,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->AtomicArray[2] != TVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[2].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x55,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(TAtomic<short> *)(this->NativeArray + 1) != this->AtomicArray[1]) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[1] == AtomicArray[1].Load()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x57,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Check @ 141c90ae0

void __thiscall `anonymous_namespace'::TAtomicTestWrapper<unsigned_short>::Check(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  ushort uVar4;
  
  uVar4 = 0;
  lVar3 = 2;
  do {
    uVar4 = uVar4 << 8 | 0xcd;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (*(ushort *)this != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[0] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x52,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ushort *)((longlong)this + 4) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[2] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x53,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ushort *)((longlong)this + 6) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[0].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x54,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ushort *)((longlong)this + 10) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[2].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x55,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(short *)((longlong)this + 2) != *(short *)((longlong)this + 8)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[1] == AtomicArray[1].Load()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x57,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Check @ 141c90c10

void __thiscall _anon_EAE22394::TAtomicTestWrapper<int>::Check(TAtomicTestWrapper<int> *this)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  TAtomic<int> TVar4;
  
  TVar4 = (TAtomic<int>)0x0;
  lVar3 = 4;
  do {
    TVar4 = (TAtomic<int>)((int)TVar4 << 8 | 0xcd);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if ((TAtomic<int>)this->NativeArray[0] != TVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[0] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x52,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(TAtomic<int> *)(this->NativeArray + 2) != TVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[2] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x53,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->AtomicArray[0] != TVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[0].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x54,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->AtomicArray[2] != TVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[2].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x55,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(TAtomic<int> *)(this->NativeArray + 1) != this->AtomicArray[1]) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[1] == AtomicArray[1].Load()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x57,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Check @ 141c90d30

void __thiscall `anonymous_namespace'::TAtomicTestWrapper<unsigned_int>::Check(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  uint uVar4;
  
  uVar4 = 0;
  lVar3 = 4;
  do {
    uVar4 = uVar4 << 8 | 0xcd;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (*(uint *)this != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[0] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x52,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(uint *)((longlong)this + 8) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[2] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x53,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(uint *)((longlong)this + 0xc) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[0].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x54,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(uint *)((longlong)this + 0x14) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[2].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x55,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(int *)((longlong)this + 4) != *(int *)((longlong)this + 0x10)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[1] == AtomicArray[1].Load()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x57,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Check @ 141c90e50

void __thiscall `anonymous_namespace'::TAtomicTestWrapper<signed_char_*>::Check(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  lVar3 = 8;
  do {
    uVar4 = uVar4 << 8 | 0xcd;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (*(ulonglong *)this != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[0] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x52,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x10) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[2] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x53,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x18) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[0].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x54,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x28) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[2].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x55,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)((longlong)this + 8) != *(longlong *)((longlong)this + 0x20)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[1] == AtomicArray[1].Load()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x57,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Check @ 141c90f80

void __thiscall `anonymous_namespace'::TAtomicTestWrapper<short_*>::Check(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  lVar3 = 8;
  do {
    uVar4 = uVar4 << 8 | 0xcd;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (*(ulonglong *)this != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[0] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x52,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x10) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[2] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x53,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x18) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[0].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x54,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x28) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[2].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x55,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)((longlong)this + 8) != *(longlong *)((longlong)this + 0x20)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[1] == AtomicArray[1].Load()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x57,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Check @ 141c910b0

void __thiscall `anonymous_namespace'::TAtomicTestWrapper<int_*>::Check(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  lVar3 = 8;
  do {
    uVar4 = uVar4 << 8 | 0xcd;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (*(ulonglong *)this != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[0] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x52,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x10) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[2] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x53,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x18) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[0].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x54,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x28) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[2].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x55,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)((longlong)this + 8) != *(longlong *)((longlong)this + 0x20)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[1] == AtomicArray[1].Load()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x57,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Check @ 141c911e0

void __thiscall `anonymous_namespace'::TAtomicTestWrapper<FString_*>::Check(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  lVar3 = 8;
  do {
    uVar4 = uVar4 << 8 | 0xcd;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (*(ulonglong *)this != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[0] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x52,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x10) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[2] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x53,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x18) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[0].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x54,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x28) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[2].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x55,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)((longlong)this + 8) != *(longlong *)((longlong)this + 0x20)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[1] == AtomicArray[1].Load()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x57,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Check @ 141c91310

void __thiscall `anonymous_namespace'::TAtomicTestWrapper<void_*>::Check(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  lVar3 = 8;
  do {
    uVar4 = uVar4 << 8 | 0xcd;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (*(ulonglong *)this != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[0] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x52,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x10) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[2] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x53,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x18) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[0].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x54,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x28) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[2].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x55,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)((longlong)this + 8) != *(longlong *)((longlong)this + 0x20)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[1] == AtomicArray[1].Load()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x57,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Check @ 141c91440

void __thiscall `anonymous_namespace'::TAtomicTestWrapper<__int64_*>::Check(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  lVar3 = 8;
  do {
    uVar4 = uVar4 << 8 | 0xcd;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (*(ulonglong *)this != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[0] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x52,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x10) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[2] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x53,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x18) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[0].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x54,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x28) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[2].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x55,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)((longlong)this + 8) != *(longlong *)((longlong)this + 0x20)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[1] == AtomicArray[1].Load()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x57,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Check @ 141c91570

void __thiscall `anonymous_namespace'::TAtomicTestWrapper<signed_char_const_*>::Check(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  lVar3 = 8;
  do {
    uVar4 = uVar4 << 8 | 0xcd;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (*(ulonglong *)this != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[0] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x52,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x10) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[2] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x53,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x18) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[0].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x54,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x28) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[2].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x55,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)((longlong)this + 8) != *(longlong *)((longlong)this + 0x20)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[1] == AtomicArray[1].Load()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x57,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Check @ 141c916a0

void __thiscall `anonymous_namespace'::TAtomicTestWrapper<short_const_*>::Check(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  lVar3 = 8;
  do {
    uVar4 = uVar4 << 8 | 0xcd;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (*(ulonglong *)this != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[0] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x52,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x10) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[2] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x53,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x18) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[0].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x54,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x28) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[2].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x55,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)((longlong)this + 8) != *(longlong *)((longlong)this + 0x20)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[1] == AtomicArray[1].Load()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x57,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Check @ 141c917d0

void __thiscall `anonymous_namespace'::TAtomicTestWrapper<int_const_*>::Check(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  lVar3 = 8;
  do {
    uVar4 = uVar4 << 8 | 0xcd;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (*(ulonglong *)this != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[0] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x52,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x10) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[2] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x53,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x18) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[0].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x54,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x28) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[2].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x55,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)((longlong)this + 8) != *(longlong *)((longlong)this + 0x20)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[1] == AtomicArray[1].Load()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x57,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Check @ 141c91900

void __thiscall `anonymous_namespace'::TAtomicTestWrapper<FString_const_*>::Check(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  lVar3 = 8;
  do {
    uVar4 = uVar4 << 8 | 0xcd;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (*(ulonglong *)this != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[0] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x52,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x10) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[2] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x53,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x18) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[0].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x54,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x28) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[2].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x55,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)((longlong)this + 8) != *(longlong *)((longlong)this + 0x20)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[1] == AtomicArray[1].Load()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x57,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Check @ 141c91a30

void __thiscall `anonymous_namespace'::TAtomicTestWrapper<void_const_*>::Check(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  lVar3 = 8;
  do {
    uVar4 = uVar4 << 8 | 0xcd;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (*(ulonglong *)this != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[0] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x52,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x10) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[2] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x53,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x18) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[0].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x54,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x28) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[2].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x55,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)((longlong)this + 8) != *(longlong *)((longlong)this + 0x20)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[1] == AtomicArray[1].Load()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x57,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Check @ 141c91b60

void __thiscall `anonymous_namespace'::TAtomicTestWrapper<__int64_const_*>::Check(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  lVar3 = 8;
  do {
    uVar4 = uVar4 << 8 | 0xcd;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (*(ulonglong *)this != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[0] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x52,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x10) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[2] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x53,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x18) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[0].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x54,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x28) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[2].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x55,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)((longlong)this + 8) != *(longlong *)((longlong)this + 0x20)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[1] == AtomicArray[1].Load()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x57,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Check @ 141c91c90

void __thiscall `anonymous_namespace'::TAtomicTestWrapper<signed_char_volatile_*>::Check(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  lVar3 = 8;
  do {
    uVar4 = uVar4 << 8 | 0xcd;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (*(ulonglong *)this != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[0] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x52,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x10) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[2] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x53,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x18) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[0].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x54,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x28) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[2].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x55,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)((longlong)this + 8) != *(longlong *)((longlong)this + 0x20)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[1] == AtomicArray[1].Load()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x57,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Check @ 141c91dc0

void __thiscall `anonymous_namespace'::TAtomicTestWrapper<short_volatile_*>::Check(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  lVar3 = 8;
  do {
    uVar4 = uVar4 << 8 | 0xcd;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (*(ulonglong *)this != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[0] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x52,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x10) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[2] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x53,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x18) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[0].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x54,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x28) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[2].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x55,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)((longlong)this + 8) != *(longlong *)((longlong)this + 0x20)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[1] == AtomicArray[1].Load()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x57,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Check @ 141c91ef0

void __thiscall `anonymous_namespace'::TAtomicTestWrapper<int_volatile_*>::Check(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  lVar3 = 8;
  do {
    uVar4 = uVar4 << 8 | 0xcd;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (*(ulonglong *)this != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[0] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x52,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x10) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[2] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x53,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x18) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[0].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x54,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x28) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[2].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x55,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)((longlong)this + 8) != *(longlong *)((longlong)this + 0x20)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[1] == AtomicArray[1].Load()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x57,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Check @ 141c92020

void __thiscall `anonymous_namespace'::TAtomicTestWrapper<FString_volatile_*>::Check(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  lVar3 = 8;
  do {
    uVar4 = uVar4 << 8 | 0xcd;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (*(ulonglong *)this != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[0] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x52,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x10) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[2] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x53,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x18) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[0].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x54,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x28) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[2].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x55,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)((longlong)this + 8) != *(longlong *)((longlong)this + 0x20)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[1] == AtomicArray[1].Load()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x57,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Check @ 141c92150

void __thiscall `anonymous_namespace'::TAtomicTestWrapper<void_volatile_*>::Check(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  lVar3 = 8;
  do {
    uVar4 = uVar4 << 8 | 0xcd;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (*(ulonglong *)this != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[0] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x52,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x10) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[2] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x53,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x18) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[0].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x54,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x28) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[2].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x55,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)((longlong)this + 8) != *(longlong *)((longlong)this + 0x20)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[1] == AtomicArray[1].Load()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x57,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Check @ 141c92280

void __thiscall `anonymous_namespace'::TAtomicTestWrapper<__int64_volatile_*>::Check(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  lVar3 = 8;
  do {
    uVar4 = uVar4 << 8 | 0xcd;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (*(ulonglong *)this != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[0] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x52,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x10) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[2] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x53,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x18) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[0].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x54,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x28) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[2].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x55,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)((longlong)this + 8) != *(longlong *)((longlong)this + 0x20)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[1] == AtomicArray[1].Load()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x57,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Check @ 141c923b0

void __thiscall
`anonymous_namespace'::TAtomicTestWrapper<signed_char_const_volatile_*>::Check(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  lVar3 = 8;
  do {
    uVar4 = uVar4 << 8 | 0xcd;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (*(ulonglong *)this != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[0] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x52,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x10) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[2] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x53,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x18) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[0].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x54,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x28) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[2].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x55,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)((longlong)this + 8) != *(longlong *)((longlong)this + 0x20)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[1] == AtomicArray[1].Load()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x57,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Check @ 141c924e0

void __thiscall `anonymous_namespace'::TAtomicTestWrapper<short_const_volatile_*>::Check(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  lVar3 = 8;
  do {
    uVar4 = uVar4 << 8 | 0xcd;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (*(ulonglong *)this != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[0] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x52,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x10) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[2] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x53,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x18) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[0].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x54,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x28) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[2].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x55,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)((longlong)this + 8) != *(longlong *)((longlong)this + 0x20)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[1] == AtomicArray[1].Load()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x57,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Check @ 141c92610

void __thiscall `anonymous_namespace'::TAtomicTestWrapper<int_const_volatile_*>::Check(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  lVar3 = 8;
  do {
    uVar4 = uVar4 << 8 | 0xcd;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (*(ulonglong *)this != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[0] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x52,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x10) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[2] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x53,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x18) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[0].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x54,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x28) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[2].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x55,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)((longlong)this + 8) != *(longlong *)((longlong)this + 0x20)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[1] == AtomicArray[1].Load()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x57,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Check @ 141c92740

void __thiscall
`anonymous_namespace'::TAtomicTestWrapper<FString_const_volatile_*>::Check(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  lVar3 = 8;
  do {
    uVar4 = uVar4 << 8 | 0xcd;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (*(ulonglong *)this != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[0] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x52,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x10) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[2] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x53,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x18) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[0].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x54,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x28) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[2].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x55,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)((longlong)this + 8) != *(longlong *)((longlong)this + 0x20)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[1] == AtomicArray[1].Load()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x57,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Check @ 141c92870

void __thiscall `anonymous_namespace'::TAtomicTestWrapper<void_const_volatile_*>::Check(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  lVar3 = 8;
  do {
    uVar4 = uVar4 << 8 | 0xcd;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (*(ulonglong *)this != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[0] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x52,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x10) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[2] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x53,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x18) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[0].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x54,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x28) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[2].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x55,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)((longlong)this + 8) != *(longlong *)((longlong)this + 0x20)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[1] == AtomicArray[1].Load()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x57,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Check @ 141c929a0

void __thiscall
`anonymous_namespace'::TAtomicTestWrapper<__int64_const_volatile_*>::Check(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  lVar3 = 8;
  do {
    uVar4 = uVar4 << 8 | 0xcd;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (*(ulonglong *)this != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[0] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x52,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x10) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[2] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x53,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x18) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[0].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x54,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x28) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[2].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x55,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)((longlong)this + 8) != *(longlong *)((longlong)this + 0x20)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[1] == AtomicArray[1].Load()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x57,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Check @ 141c92ad0

void __thiscall
_anon_EAE22394::TAtomicTestWrapper<__int64>::Check(TAtomicTestWrapper<__int64> *this)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  TAtomic<__int64> TVar4;
  
  TVar4 = (TAtomic<__int64>)0x0;
  lVar3 = 8;
  do {
    TVar4 = (TAtomic<__int64>)((longlong)TVar4 << 8 | 0xcd);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if ((TAtomic<__int64>)this->NativeArray[0] != TVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[0] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x52,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(TAtomic<__int64> *)(this->NativeArray + 2) != TVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[2] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x53,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->AtomicArray[0] != TVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[0].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x54,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->AtomicArray[2] != TVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[2].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x55,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(TAtomic<__int64> *)(this->NativeArray + 1) != this->AtomicArray[1]) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[1] == AtomicArray[1].Load()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x57,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Check @ 141c92c00

void __thiscall `anonymous_namespace'::TAtomicTestWrapper<unsigned___int64>::Check(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  lVar3 = 8;
  do {
    uVar4 = uVar4 << 8 | 0xcd;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (*(ulonglong *)this != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[0] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x52,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x10) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[2] == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x53,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x18) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[0].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x54,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x28) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicArray[2].Load() == DebugCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x55,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)((longlong)this + 8) != *(longlong *)((longlong)this + 0x20)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NativeArray[1] == AtomicArray[1].Load()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                       ,0x57,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

