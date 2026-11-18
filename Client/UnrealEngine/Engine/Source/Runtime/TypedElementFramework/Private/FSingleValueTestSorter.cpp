// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 102

// ~FSingleValueTestSorter<signed_char> @ 142ce49c0

void __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<signed_char>::
~FSingleValueTestSorter<signed_char>(FSingleValueTestSorter<signed_char> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~FSingleValueTestSorter<unsigned_char> @ 142ce49e0

void __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_char>::
~FSingleValueTestSorter<unsigned_char>(FSingleValueTestSorter<unsigned_char> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~FSingleValueTestSorter<short> @ 142ce4a00

void __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<short>::~FSingleValueTestSorter<short>
          (FSingleValueTestSorter<short> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~FSingleValueTestSorter<unsigned_short> @ 142ce4a20

void __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_short>::
~FSingleValueTestSorter<unsigned_short>(FSingleValueTestSorter<unsigned_short> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~FSingleValueTestSorter<int> @ 142ce4a40

void __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<int>::~FSingleValueTestSorter<int>
          (FSingleValueTestSorter<int> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~FSingleValueTestSorter<unsigned_int> @ 142ce4a60

void __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_int>::
~FSingleValueTestSorter<unsigned_int>(FSingleValueTestSorter<unsigned_int> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~FSingleValueTestSorter<float> @ 142ce4a80

void __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<float>::~FSingleValueTestSorter<float>
          (FSingleValueTestSorter<float> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~FSingleValueTestSorter<double> @ 142ce4aa0

void __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<double>::~FSingleValueTestSorter<double>
          (FSingleValueTestSorter<double> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>_> @ 142ce4ac0

void __thiscall
UE::Editor::DataStorage::Tests::
FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>_>
::
~FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>_>
          (FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>_>
           *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>,int>
            ((TSortNameView<UE::Editor::DataStorage::TSortByName<0>_> *)
             (this->Values).AllocatorInstance.Data,(this->Values).ArrayNum);
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::FSortById>_> @ 142ce4b00

void __thiscall
UE::Editor::DataStorage::Tests::
FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::FSortById>_>
::
~FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::FSortById>_>
          (FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::FSortById>_>
           *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<char>_>_> @ 142ce4b20

void __thiscall
UE::Editor::DataStorage::Tests::
FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<char>_>_>
::
~FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<char>_>_>
          (FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<char>_>_>
           *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_> @ 142ce4b40

void __thiscall
UE::Editor::DataStorage::Tests::
FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
::
~FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
          (FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
           *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<char>_>_> @ 142ce4b60

void __thiscall
UE::Editor::DataStorage::Tests::
FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<char>_>_>
::
~FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<char>_>_>
          (FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<char>_>_>
           *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_> @ 142ce4b80

void __thiscall
UE::Editor::DataStorage::Tests::
FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
::
~FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
          (FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
           *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~FSingleValueTestSorter<__int64> @ 142ce4ba0

void __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<__int64>::~FSingleValueTestSorter<__int64>
          (FSingleValueTestSorter<__int64> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~FSingleValueTestSorter<unsigned___int64> @ 142ce4bc0

void __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned___int64>::
~FSingleValueTestSorter<unsigned___int64>(FSingleValueTestSorter<unsigned___int64> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~FSingleValueTestSorter<bool> @ 142ce4be0

void __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<bool>::~FSingleValueTestSorter<bool>
          (FSingleValueTestSorter<bool> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// CalculatePrefix @ 142ced680

FPrefixInfo * __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<signed_char>::CalculatePrefix
          (FSingleValueTestSorter<signed_char> *this,FPrefixInfo *__return_storage_ptr__,
          ICoreProvider *param_1,ulong64 param_2,uint param_3)

{
  int iVar1;
  FScriptContainerElement FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FPrefixInfo *pFVar6;
  byte bVar7;
  ulonglong uVar8;
  uint uVar9;
  ulong64 local_18;
  bool bStack_10;
  undefined7 uStack_f;
  
  uVar9 = (uint)param_2;
  uVar5 = 0;
  if ((int)uVar9 < (this->Values).ArrayNum) {
    uVar5 = ~uVar9 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FPrefixInfo *)(*pcVar3)();
      return pFVar6;
    }
  }
  local_18 = 0;
  bStack_10 = true;
  if ((int)-param_3 < 8) {
    FVar2 = (this->Values).AllocatorInstance.Data[(int)uVar9];
    iVar1 = param_3 * 8 + 0x38;
    uVar8 = ((ulonglong)(byte)-((char)FVar2 >> 7) | 0x80) ^ (ulonglong)(byte)FVar2;
    bVar7 = (byte)iVar1;
    if (iVar1 < 0) {
      local_18 = uVar8 >> (-bVar7 & 0x3f);
    }
    else {
      local_18 = uVar8 << (bVar7 & 0x3f);
    }
    bStack_10 = 8 < -param_3 + 1;
  }
  __return_storage_ptr__->Prefix = local_18;
  *(ulonglong *)&__return_storage_ptr__->bHasRemainingBytes = CONCAT71(uStack_f,bStack_10);
  return __return_storage_ptr__;
}

// CalculatePrefix @ 142ced770

FPrefixInfo * __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_char>::CalculatePrefix
          (FSingleValueTestSorter<unsigned_char> *this,FPrefixInfo *__return_storage_ptr__,
          ICoreProvider *param_1,ulong64 param_2,uint param_3)

{
  int iVar1;
  FScriptContainerElement FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FPrefixInfo *pFVar6;
  byte bVar7;
  uint uVar8;
  ulong64 local_18;
  bool bStack_10;
  undefined7 uStack_f;
  
  uVar8 = (uint)param_2;
  uVar5 = 0;
  if ((int)uVar8 < (this->Values).ArrayNum) {
    uVar5 = ~uVar8 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FPrefixInfo *)(*pcVar3)();
      return pFVar6;
    }
  }
  local_18 = 0;
  bStack_10 = true;
  if ((int)-param_3 < 8) {
    FVar2 = (this->Values).AllocatorInstance.Data[(int)uVar8];
    iVar1 = param_3 * 8 + 0x38;
    bVar7 = (byte)iVar1;
    if (iVar1 < 0) {
      local_18 = (ulong64)((byte)FVar2 >> (-bVar7 & 0x3f));
    }
    else {
      local_18 = (ulonglong)(byte)FVar2 << (bVar7 & 0x3f);
    }
    bStack_10 = 8 < -param_3 + 1;
  }
  __return_storage_ptr__->Prefix = local_18;
  *(ulonglong *)&__return_storage_ptr__->bHasRemainingBytes = CONCAT71(uStack_f,bStack_10);
  return __return_storage_ptr__;
}

// CalculatePrefix @ 142ced850

FPrefixInfo * __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<short>::CalculatePrefix
          (FSingleValueTestSorter<short> *this,FPrefixInfo *__return_storage_ptr__,
          ICoreProvider *param_1,ulong64 param_2,uint param_3)

{
  int iVar1;
  ushort uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FPrefixInfo *pFVar6;
  byte bVar7;
  ulonglong uVar8;
  uint uVar9;
  ulong64 local_18;
  bool bStack_10;
  undefined7 uStack_f;
  
  uVar9 = (uint)param_2;
  uVar5 = 0;
  if ((int)uVar9 < (this->Values).ArrayNum) {
    uVar5 = ~uVar9 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FPrefixInfo *)(*pcVar3)();
      return pFVar6;
    }
  }
  local_18 = 0;
  bStack_10 = true;
  if ((int)-param_3 < 8) {
    uVar2 = *(ushort *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar9 * 2);
    iVar1 = param_3 * 8 + 0x30;
    uVar8 = ((ulonglong)(ushort)-((short)uVar2 >> 0xf) | 0x8000) ^ (ulonglong)uVar2;
    bVar7 = (byte)iVar1;
    if (iVar1 < 0) {
      local_18 = uVar8 >> (-bVar7 & 0x3f);
    }
    else {
      local_18 = uVar8 << (bVar7 & 0x3f);
    }
    bStack_10 = 8 < -param_3 + 2;
  }
  __return_storage_ptr__->Prefix = local_18;
  *(ulonglong *)&__return_storage_ptr__->bHasRemainingBytes = CONCAT71(uStack_f,bStack_10);
  return __return_storage_ptr__;
}

// CalculatePrefix @ 142ced940

FPrefixInfo * __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_short>::CalculatePrefix
          (FSingleValueTestSorter<unsigned_short> *this,FPrefixInfo *__return_storage_ptr__,
          ICoreProvider *param_1,ulong64 param_2,uint param_3)

{
  int iVar1;
  ushort uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FPrefixInfo *pFVar6;
  byte bVar7;
  uint uVar8;
  ulong64 local_18;
  bool bStack_10;
  undefined7 uStack_f;
  
  uVar8 = (uint)param_2;
  uVar5 = 0;
  if ((int)uVar8 < (this->Values).ArrayNum) {
    uVar5 = ~uVar8 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FPrefixInfo *)(*pcVar3)();
      return pFVar6;
    }
  }
  local_18 = 0;
  bStack_10 = true;
  if ((int)-param_3 < 8) {
    uVar2 = *(ushort *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar8 * 2);
    iVar1 = param_3 * 8 + 0x30;
    bVar7 = (byte)iVar1;
    if (iVar1 < 0) {
      local_18 = (ulong64)(uVar2 >> (-bVar7 & 0x3f));
    }
    else {
      local_18 = (ulonglong)uVar2 << (bVar7 & 0x3f);
    }
    bStack_10 = 8 < -param_3 + 2;
  }
  __return_storage_ptr__->Prefix = local_18;
  *(ulonglong *)&__return_storage_ptr__->bHasRemainingBytes = CONCAT71(uStack_f,bStack_10);
  return __return_storage_ptr__;
}

// CalculatePrefix @ 142ceda20

FPrefixInfo * __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<int>::CalculatePrefix
          (FSingleValueTestSorter<int> *this,FPrefixInfo *__return_storage_ptr__,
          ICoreProvider *param_1,ulong64 param_2,uint param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FPrefixInfo *pFVar5;
  byte bVar6;
  ulonglong uVar7;
  uint uVar8;
  ulong64 local_18;
  bool bStack_10;
  undefined7 uStack_f;
  
  uVar8 = (uint)param_2;
  uVar4 = 0;
  if ((int)uVar8 < (this->Values).ArrayNum) {
    uVar4 = ~uVar8 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FPrefixInfo *)(*pcVar2)();
      return pFVar5;
    }
  }
  local_18 = 0;
  bStack_10 = true;
  if ((int)-param_3 < 8) {
    uVar4 = *(uint *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar8 * 4);
    iVar1 = param_3 * 8 + 0x20;
    uVar7 = ((ulonglong)(uint)-((int)uVar4 >> 0x1f) | 0x80000000) ^ (ulonglong)uVar4;
    bVar6 = (byte)iVar1;
    if (iVar1 < 0) {
      local_18 = uVar7 >> (-bVar6 & 0x3f);
    }
    else {
      local_18 = uVar7 << (bVar6 & 0x3f);
    }
    bStack_10 = 8 < -param_3 + 4;
  }
  __return_storage_ptr__->Prefix = local_18;
  *(ulonglong *)&__return_storage_ptr__->bHasRemainingBytes = CONCAT71(uStack_f,bStack_10);
  return __return_storage_ptr__;
}

// CalculatePrefix @ 142cedb10

FPrefixInfo * __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_int>::CalculatePrefix
          (FSingleValueTestSorter<unsigned_int> *this,FPrefixInfo *__return_storage_ptr__,
          ICoreProvider *param_1,ulong64 param_2,uint param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FPrefixInfo *pFVar5;
  byte bVar6;
  uint uVar7;
  ulong64 local_18;
  bool bStack_10;
  undefined7 uStack_f;
  
  uVar7 = (uint)param_2;
  uVar4 = 0;
  if ((int)uVar7 < (this->Values).ArrayNum) {
    uVar4 = ~uVar7 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FPrefixInfo *)(*pcVar2)();
      return pFVar5;
    }
  }
  local_18 = 0;
  bStack_10 = true;
  if ((int)-param_3 < 8) {
    uVar4 = *(uint *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar7 * 4);
    iVar1 = param_3 * 8 + 0x20;
    bVar6 = (byte)iVar1;
    if (iVar1 < 0) {
      local_18 = (ulong64)(uVar4 >> (-bVar6 & 0x3f));
    }
    else {
      local_18 = (ulonglong)uVar4 << (bVar6 & 0x3f);
    }
    bStack_10 = 8 < -param_3 + 4;
  }
  __return_storage_ptr__->Prefix = local_18;
  *(ulonglong *)&__return_storage_ptr__->bHasRemainingBytes = CONCAT71(uStack_f,bStack_10);
  return __return_storage_ptr__;
}

// CalculatePrefix @ 142cedbf0

FPrefixInfo * __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<float>::CalculatePrefix
          (FSingleValueTestSorter<float> *this,FPrefixInfo *__return_storage_ptr__,
          ICoreProvider *param_1,ulong64 param_2,uint param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FPrefixInfo *pFVar5;
  byte bVar6;
  ulonglong uVar7;
  uint uVar8;
  ulong64 local_18;
  bool bStack_10;
  undefined7 uStack_f;
  
  uVar8 = (uint)param_2;
  uVar4 = 0;
  if ((int)uVar8 < (this->Values).ArrayNum) {
    uVar4 = ~uVar8 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FPrefixInfo *)(*pcVar2)();
      return pFVar5;
    }
  }
  local_18 = 0;
  bStack_10 = true;
  if ((int)-param_3 < 8) {
    uVar4 = *(uint *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar8 * 4);
    iVar1 = param_3 * 8 + 0x20;
    uVar7 = ((ulonglong)(uint)((int)uVar4 >> 0x1f) | 0x80000000) ^ (ulonglong)uVar4;
    bVar6 = (byte)iVar1;
    if (iVar1 < 0) {
      local_18 = uVar7 >> (-bVar6 & 0x3f);
    }
    else {
      local_18 = uVar7 << (bVar6 & 0x3f);
    }
    bStack_10 = 8 < -param_3 + 4;
  }
  __return_storage_ptr__->Prefix = local_18;
  *(ulonglong *)&__return_storage_ptr__->bHasRemainingBytes = CONCAT71(uStack_f,bStack_10);
  return __return_storage_ptr__;
}

// CalculatePrefix @ 142cedcf0

FPrefixInfo * __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<double>::CalculatePrefix
          (FSingleValueTestSorter<double> *this,FPrefixInfo *__return_storage_ptr__,
          ICoreProvider *param_1,ulong64 param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPrefixInfo *pFVar4;
  byte bVar5;
  ulonglong uVar6;
  uint uVar7;
  ulong64 local_18;
  bool bStack_10;
  undefined7 uStack_f;
  
  uVar7 = (uint)param_2;
  uVar3 = 0;
  if ((int)uVar7 < (this->Values).ArrayNum) {
    uVar3 = ~uVar7 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPrefixInfo *)(*pcVar1)();
      return pFVar4;
    }
  }
  local_18 = 0;
  bStack_10 = true;
  if ((int)-param_3 < 8) {
    uVar6 = *(ulonglong *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar7 * 8);
    uVar6 = ((longlong)uVar6 >> 0x3f | 0x8000000000000000U) ^ uVar6;
    bVar5 = (byte)(param_3 * 8);
    if ((int)(param_3 * 8) < 0) {
      local_18 = uVar6 >> (-bVar5 & 0x3f);
    }
    else {
      local_18 = uVar6 << (bVar5 & 0x3f);
    }
    bStack_10 = 8 < -param_3 + 8;
  }
  __return_storage_ptr__->Prefix = local_18;
  *(ulonglong *)&__return_storage_ptr__->bHasRemainingBytes = CONCAT71(uStack_f,bStack_10);
  return __return_storage_ptr__;
}

// CalculatePrefix @ 142ceddf0

FPrefixInfo * __thiscall
UE::Editor::DataStorage::Tests::
FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>_>
::CalculatePrefix(FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>_>
                  *this,FPrefixInfo *__return_storage_ptr__,ICoreProvider *param_1,ulong64 param_2,
                 uint param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPrefixInfo *pFVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  ulong64 local_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_> local_68;
  undefined4 local_4c;
  FPrefixInfo local_48;
  FName *local_38;
  FString local_30;
  FScriptContainerElement local_20;
  
  uVar6 = (uint)param_2;
  uVar3 = 0;
  if ((int)uVar6 < (this->Values).ArrayNum) {
    uVar3 = ~uVar6 >> 0x1f;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FPrefixInfo *)(*pcVar1)();
    return pFVar4;
  }
  pFVar5 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x20;
  local_88 = 0;
  uStack_80 = 1;
  if ((*(longlong *)pFVar5 != 0) && (pFVar5[0x18] == (FScriptContainerElement)0x0)) {
    ::FString::Reset((FString *)(pFVar5 + 8),0);
    if (**(FName **)pFVar5 != (FName)0x0) {
      ::FName::ToString(*(FName **)pFVar5,(FString *)(pFVar5 + 8));
    }
    pFVar5[0x18] = (FScriptContainerElement)0x1;
  }
  if (1 < (int)(8 - (-param_3 & 7))) {
    local_38 = *(FName **)pFVar5;
    ::FString::FString(&local_30,(FString *)(pFVar5 + 8));
    local_20 = pFVar5[0x18];
    if ((local_38 != (FName *)0x0) && (local_20 == (FScriptContainerElement)0x0)) {
      ::FString::Reset(&local_30,0);
      if (*local_38 != (FName)0x0) {
        ::FName::ToString(local_38,&local_30);
      }
      local_20 = (FScriptContainerElement)0x1;
    }
    uVar3 = local_30.Data.ArrayNum - 1;
    if (local_30.Data.ArrayNum == 0) {
      uVar3 = 0;
    }
    local_68.View._12_4_ = local_4c;
    local_68.View.Size = uVar3;
    local_68.View.DataPtr = (wchar_t *)local_30.Data.AllocatorInstance.Data;
    pFVar4 = TSortTypeInfo<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
             ::CalculatePrefix(&local_48,0,param_3,&local_68);
    local_88 = pFVar4->Prefix;
    uStack_80 = pFVar4->bHasRemainingBytes;
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
  }
  __return_storage_ptr__->Prefix = local_88;
  *(ulonglong *)&__return_storage_ptr__->bHasRemainingBytes = CONCAT71(uStack_7f,uStack_80);
  return __return_storage_ptr__;
}

// CalculatePrefix @ 142cedfd0

FPrefixInfo * __thiscall
UE::Editor::DataStorage::Tests::
FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::FSortById>_>
::CalculatePrefix(FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::FSortById>_>
                  *this,FPrefixInfo *__return_storage_ptr__,ICoreProvider *param_1,ulong64 param_2,
                 uint param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FPrefixInfo *pFVar6;
  byte bVar7;
  ulonglong uVar8;
  uint uVar9;
  ulong64 local_28;
  bool bStack_20;
  undefined7 uStack_1f;
  uint uStack_10;
  
  uVar9 = (uint)param_2;
  uVar5 = 0;
  if ((int)uVar9 < (this->Values).ArrayNum) {
    uVar5 = ~uVar9 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FPrefixInfo *)(*pcVar3)();
      return pFVar6;
    }
  }
  local_28 = 0;
  bStack_20 = true;
  if ((int)-param_3 < 8) {
    auVar2 = *(undefined1 (*) [16])
              ((this->Values).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x10);
    if ((auVar2._0_8_ == 0) || (auVar2[0xc] != '\0')) {
      uStack_10 = auVar2._8_4_;
    }
    else {
      uStack_10 = *(uint *)(auVar2._0_8_ + 4);
    }
    uVar8 = ((ulonglong)(uint)-((int)uStack_10 >> 0x1f) | 0x80000000) ^ (ulonglong)uStack_10;
    iVar1 = param_3 * 8 + 0x20;
    bVar7 = (byte)iVar1;
    if (iVar1 < 0) {
      local_28 = uVar8 >> (-bVar7 & 0x3f);
    }
    else {
      local_28 = uVar8 << (bVar7 & 0x3f);
    }
    bStack_20 = 8 < -param_3 + 4;
  }
  __return_storage_ptr__->Prefix = local_28;
  *(ulonglong *)&__return_storage_ptr__->bHasRemainingBytes = CONCAT71(uStack_1f,bStack_20);
  return __return_storage_ptr__;
}

// CalculatePrefix @ 142cee0f0

FPrefixInfo * __thiscall
UE::Editor::DataStorage::Tests::
FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<char>_>_>
::CalculatePrefix(FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<char>_>_>
                  *this,FPrefixInfo *__return_storage_ptr__,ICoreProvider *param_1,ulong64 param_2,
                 uint param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FPrefixInfo *pFVar5;
  uint uVar6;
  ulong64 local_38;
  undefined1 uStack_30;
  undefined7 uStack_2f;
  TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<char>_> local_28;
  FPrefixInfo local_18;
  
  uVar6 = (uint)param_2;
  uVar4 = 0;
  if ((int)uVar6 < (this->Values).ArrayNum) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FPrefixInfo *)(*pcVar2)();
      return pFVar5;
    }
  }
  local_38 = 0;
  uStack_30 = 1;
  if (0 < (int)(8 - (-param_3 & 7))) {
    pFVar1 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x10;
    local_28.View.DataPtr = *(char **)pFVar1;
    local_28.View._8_8_ = *(undefined8 *)(pFVar1 + 8);
    pFVar5 = TSortTypeInfo<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<char>_>_>
             ::CalculatePrefix(&local_18,0,param_3,&local_28);
    local_38 = pFVar5->Prefix;
    uStack_30 = (undefined1)*(undefined4 *)&pFVar5->bHasRemainingBytes;
  }
  __return_storage_ptr__->Prefix = local_38;
  *(ulonglong *)&__return_storage_ptr__->bHasRemainingBytes = CONCAT71(uStack_2f,uStack_30);
  return __return_storage_ptr__;
}

// CalculatePrefix @ 142cee1e0

FPrefixInfo * __thiscall
UE::Editor::DataStorage::Tests::
FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
::CalculatePrefix(FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
                  *this,FPrefixInfo *__return_storage_ptr__,ICoreProvider *param_1,ulong64 param_2,
                 uint param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FPrefixInfo *pFVar5;
  uint uVar6;
  ulong64 local_38;
  undefined1 uStack_30;
  undefined7 uStack_2f;
  TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_> local_28;
  FPrefixInfo local_18;
  
  uVar6 = (uint)param_2;
  uVar4 = 0;
  if ((int)uVar6 < (this->Values).ArrayNum) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FPrefixInfo *)(*pcVar2)();
      return pFVar5;
    }
  }
  local_38 = 0;
  uStack_30 = 1;
  if (1 < (int)(8 - (-param_3 & 7))) {
    pFVar1 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x10;
    local_28.View.DataPtr = *(wchar_t **)pFVar1;
    local_28.View._8_8_ = *(undefined8 *)(pFVar1 + 8);
    pFVar5 = TSortTypeInfo<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
             ::CalculatePrefix(&local_18,0,param_3,&local_28);
    local_38 = pFVar5->Prefix;
    uStack_30 = (undefined1)*(undefined4 *)&pFVar5->bHasRemainingBytes;
  }
  __return_storage_ptr__->Prefix = local_38;
  *(ulonglong *)&__return_storage_ptr__->bHasRemainingBytes = CONCAT71(uStack_2f,uStack_30);
  return __return_storage_ptr__;
}

// CalculatePrefix @ 142cee2d0

FPrefixInfo * __thiscall
UE::Editor::DataStorage::Tests::
FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<char>_>_>
::CalculatePrefix(FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<char>_>_>
                  *this,FPrefixInfo *__return_storage_ptr__,ICoreProvider *param_1,ulong64 param_2,
                 uint param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FPrefixInfo *pFVar5;
  uint uVar6;
  ulong64 local_38;
  undefined1 uStack_30;
  undefined7 uStack_2f;
  TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<char>_> local_28;
  FPrefixInfo local_18;
  
  uVar6 = (uint)param_2;
  uVar4 = 0;
  if ((int)uVar6 < (this->Values).ArrayNum) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FPrefixInfo *)(*pcVar2)();
      return pFVar5;
    }
  }
  local_38 = 0;
  uStack_30 = 1;
  if (0 < (int)(8 - (-param_3 & 7))) {
    pFVar1 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x10;
    local_28.View.DataPtr = *(char **)pFVar1;
    local_28.View._8_8_ = *(undefined8 *)(pFVar1 + 8);
    pFVar5 = TSortTypeInfo<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<char>_>_>
             ::CalculatePrefix(&local_18,0,param_3,&local_28);
    local_38 = pFVar5->Prefix;
    uStack_30 = (undefined1)*(undefined4 *)&pFVar5->bHasRemainingBytes;
  }
  __return_storage_ptr__->Prefix = local_38;
  *(ulonglong *)&__return_storage_ptr__->bHasRemainingBytes = CONCAT71(uStack_2f,uStack_30);
  return __return_storage_ptr__;
}

// CalculatePrefix @ 142cee3c0

FPrefixInfo * __thiscall
UE::Editor::DataStorage::Tests::
FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
::CalculatePrefix(FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
                  *this,FPrefixInfo *__return_storage_ptr__,ICoreProvider *param_1,ulong64 param_2,
                 uint param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FPrefixInfo *pFVar5;
  uint uVar6;
  ulong64 local_38;
  undefined1 uStack_30;
  undefined7 uStack_2f;
  TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_> local_28;
  FPrefixInfo local_18;
  
  uVar6 = (uint)param_2;
  uVar4 = 0;
  if ((int)uVar6 < (this->Values).ArrayNum) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FPrefixInfo *)(*pcVar2)();
      return pFVar5;
    }
  }
  local_38 = 0;
  uStack_30 = 1;
  if (1 < (int)(8 - (-param_3 & 7))) {
    pFVar1 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x10;
    local_28.View.DataPtr = *(wchar_t **)pFVar1;
    local_28.View._8_8_ = *(undefined8 *)(pFVar1 + 8);
    pFVar5 = TSortTypeInfo<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
             ::CalculatePrefix(&local_18,0,param_3,&local_28);
    local_38 = pFVar5->Prefix;
    uStack_30 = (undefined1)*(undefined4 *)&pFVar5->bHasRemainingBytes;
  }
  __return_storage_ptr__->Prefix = local_38;
  *(ulonglong *)&__return_storage_ptr__->bHasRemainingBytes = CONCAT71(uStack_2f,uStack_30);
  return __return_storage_ptr__;
}

// CalculatePrefix @ 142cee4b0

FPrefixInfo * __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<__int64>::CalculatePrefix
          (FSingleValueTestSorter<__int64> *this,FPrefixInfo *__return_storage_ptr__,
          ICoreProvider *param_1,ulong64 param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPrefixInfo *pFVar4;
  byte bVar5;
  uint uVar6;
  ulonglong local_18;
  bool bStack_10;
  undefined7 uStack_f;
  
  uVar6 = (uint)param_2;
  uVar3 = 0;
  if ((int)uVar6 < (this->Values).ArrayNum) {
    uVar3 = ~uVar6 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPrefixInfo *)(*pcVar1)();
      return pFVar4;
    }
  }
  local_18 = 0;
  bStack_10 = true;
  if ((int)-param_3 < 8) {
    local_18 = *(ulonglong *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar6 * 8);
    local_18 = (-((longlong)local_18 >> 0x3f) | 0x8000000000000000U) ^ local_18;
    bVar5 = (byte)(param_3 * 8);
    if ((int)(param_3 * 8) < 0) {
      local_18 = local_18 >> (-bVar5 & 0x3f);
    }
    else {
      local_18 = local_18 << (bVar5 & 0x3f);
    }
    bStack_10 = 8 < -param_3 + 8;
  }
  __return_storage_ptr__->Prefix = local_18;
  *(ulonglong *)&__return_storage_ptr__->bHasRemainingBytes = CONCAT71(uStack_f,bStack_10);
  return __return_storage_ptr__;
}

// CalculatePrefix @ 142cee5b0

FPrefixInfo * __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned___int64>::CalculatePrefix
          (FSingleValueTestSorter<unsigned___int64> *this,FPrefixInfo *__return_storage_ptr__,
          ICoreProvider *param_1,ulong64 param_2,uint param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FPrefixInfo *pFVar5;
  byte bVar6;
  uint uVar7;
  ulong64 local_18;
  bool bStack_10;
  undefined7 uStack_f;
  
  uVar7 = (uint)param_2;
  uVar4 = 0;
  if ((int)uVar7 < (this->Values).ArrayNum) {
    uVar4 = ~uVar7 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FPrefixInfo *)(*pcVar2)();
      return pFVar5;
    }
  }
  local_18 = 0;
  bStack_10 = true;
  if ((int)-param_3 < 8) {
    uVar1 = *(ulonglong *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar7 * 8);
    bVar6 = (byte)(param_3 * 8);
    if ((int)(param_3 * 8) < 0) {
      local_18 = uVar1 >> (-bVar6 & 0x3f);
    }
    else {
      local_18 = uVar1 << (bVar6 & 0x3f);
    }
    bStack_10 = 8 < -param_3 + 8;
  }
  __return_storage_ptr__->Prefix = local_18;
  *(ulonglong *)&__return_storage_ptr__->bHasRemainingBytes = CONCAT71(uStack_f,bStack_10);
  return __return_storage_ptr__;
}

// CalculatePrefix @ 142cee690

FPrefixInfo * __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<bool>::CalculatePrefix
          (FSingleValueTestSorter<bool> *this,FPrefixInfo *__return_storage_ptr__,
          ICoreProvider *param_1,ulong64 param_2,uint param_3)

{
  int iVar1;
  FScriptContainerElement FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FPrefixInfo *pFVar6;
  byte bVar7;
  uint uVar8;
  ulong64 local_18;
  bool bStack_10;
  undefined7 uStack_f;
  
  uVar8 = (uint)param_2;
  uVar5 = 0;
  if ((int)uVar8 < (this->Values).ArrayNum) {
    uVar5 = ~uVar8 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FPrefixInfo *)(*pcVar3)();
      return pFVar6;
    }
  }
  local_18 = 0;
  bStack_10 = true;
  if ((int)-param_3 < 8) {
    FVar2 = (this->Values).AllocatorInstance.Data[(int)uVar8];
    iVar1 = param_3 * 8 + 0x38;
    bVar7 = (byte)iVar1;
    if (iVar1 < 0) {
      local_18 = (ulong64)((byte)FVar2 >> (-bVar7 & 0x3f));
    }
    else {
      local_18 = (ulonglong)(byte)FVar2 << (bVar7 & 0x3f);
    }
    bStack_10 = 8 < -param_3 + 1;
  }
  __return_storage_ptr__->Prefix = local_18;
  *(ulonglong *)&__return_storage_ptr__->bHasRemainingBytes = CONCAT71(uStack_f,bStack_10);
  return __return_storage_ptr__;
}

// Compare @ 142cf22d0

int __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<signed_char>::Compare
          (FSingleValueTestSorter<signed_char> *this,ICoreProvider *param_1,ulong64 param_2,
          ulong64 param_3)

{
  FScriptContainerElement FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = (uint)param_3;
  uVar5 = 0;
  if ((int)uVar7 < (this->Values).ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  pFVar2 = (this->Values).AllocatorInstance.Data;
  uVar8 = (uint)param_2;
  uVar5 = 0;
  if ((int)uVar8 < (this->Values).ArrayNum) {
    uVar5 = ~uVar8 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  if ((this->Values).AllocatorInstance.Data[(int)uVar8] == pFVar2[(int)uVar7]) {
    iVar6 = 0;
  }
  else {
    uVar5 = 0;
    if ((int)uVar8 < (this->Values).ArrayNum) {
      uVar5 = ~uVar8 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
    }
    FVar1 = (this->Values).AllocatorInstance.Data[(int)uVar8];
    uVar5 = 0;
    if ((int)uVar7 < (this->Values).ArrayNum) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
    }
    iVar6 = 1;
    if ((char)FVar1 < (char)(this->Values).AllocatorInstance.Data[(int)uVar7]) {
      iVar6 = -1;
    }
  }
  return iVar6;
}

// Compare @ 142cf2490

int __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_char>::Compare
          (FSingleValueTestSorter<unsigned_char> *this,ICoreProvider *param_1,ulong64 param_2,
          ulong64 param_3)

{
  FScriptContainerElement FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = (uint)param_3;
  uVar5 = 0;
  if ((int)uVar7 < (this->Values).ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  pFVar2 = (this->Values).AllocatorInstance.Data;
  uVar8 = (uint)param_2;
  uVar5 = 0;
  if ((int)uVar8 < (this->Values).ArrayNum) {
    uVar5 = ~uVar8 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  if ((this->Values).AllocatorInstance.Data[(int)uVar8] == pFVar2[(int)uVar7]) {
    iVar6 = 0;
  }
  else {
    uVar5 = 0;
    if ((int)uVar8 < (this->Values).ArrayNum) {
      uVar5 = ~uVar8 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
    }
    FVar1 = (this->Values).AllocatorInstance.Data[(int)uVar8];
    uVar5 = 0;
    if ((int)uVar7 < (this->Values).ArrayNum) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
    }
    iVar6 = 1;
    if ((byte)FVar1 < (byte)(this->Values).AllocatorInstance.Data[(int)uVar7]) {
      iVar6 = -1;
    }
  }
  return iVar6;
}

// Compare @ 142cf2650

int __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<short>::Compare
          (FSingleValueTestSorter<short> *this,ICoreProvider *param_1,ulong64 param_2,
          ulong64 param_3)

{
  short sVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = (uint)param_3;
  uVar5 = 0;
  if ((int)uVar8 < (this->Values).ArrayNum) {
    uVar5 = ~uVar8 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  pFVar2 = (this->Values).AllocatorInstance.Data;
  uVar7 = (uint)param_2;
  uVar5 = 0;
  if ((int)uVar7 < (this->Values).ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  if (*(short *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar7 * 2) ==
      *(short *)(pFVar2 + (longlong)(int)uVar8 * 2)) {
    iVar6 = 0;
  }
  else {
    uVar5 = 0;
    if ((int)uVar7 < (this->Values).ArrayNum) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
    }
    sVar1 = *(short *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar7 * 2);
    uVar5 = 0;
    if ((int)uVar8 < (this->Values).ArrayNum) {
      uVar5 = ~uVar8 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
    }
    iVar6 = 1;
    if (sVar1 < *(short *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar8 * 2)) {
      iVar6 = -1;
    }
  }
  return iVar6;
}

// Compare @ 142cf2810

int __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_short>::Compare
          (FSingleValueTestSorter<unsigned_short> *this,ICoreProvider *param_1,ulong64 param_2,
          ulong64 param_3)

{
  ushort uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = (uint)param_3;
  uVar5 = 0;
  if ((int)uVar8 < (this->Values).ArrayNum) {
    uVar5 = ~uVar8 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  pFVar2 = (this->Values).AllocatorInstance.Data;
  uVar7 = (uint)param_2;
  uVar5 = 0;
  if ((int)uVar7 < (this->Values).ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  if (*(short *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar7 * 2) ==
      *(short *)(pFVar2 + (longlong)(int)uVar8 * 2)) {
    iVar6 = 0;
  }
  else {
    uVar5 = 0;
    if ((int)uVar7 < (this->Values).ArrayNum) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
    }
    uVar1 = *(ushort *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar7 * 2);
    uVar5 = 0;
    if ((int)uVar8 < (this->Values).ArrayNum) {
      uVar5 = ~uVar8 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
    }
    iVar6 = 1;
    if (uVar1 < *(ushort *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar8 * 2)) {
      iVar6 = -1;
    }
  }
  return iVar6;
}

// Compare @ 142cf29d0

int __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<int>::Compare
          (FSingleValueTestSorter<int> *this,ICoreProvider *param_1,ulong64 param_2,ulong64 param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = (uint)param_3;
  uVar4 = 0;
  if ((int)uVar8 < (this->Values).ArrayNum) {
    uVar4 = ~uVar8 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  pFVar1 = (this->Values).AllocatorInstance.Data;
  uVar7 = (uint)param_2;
  uVar4 = 0;
  if ((int)uVar7 < (this->Values).ArrayNum) {
    uVar4 = ~uVar7 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  if (*(int *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar7 * 4) ==
      *(int *)(pFVar1 + (longlong)(int)uVar8 * 4)) {
    iVar6 = 0;
  }
  else {
    uVar4 = 0;
    if ((int)uVar7 < (this->Values).ArrayNum) {
      uVar4 = ~uVar7 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
    }
    iVar5 = *(int *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar7 * 4);
    uVar4 = 0;
    if ((int)uVar8 < (this->Values).ArrayNum) {
      uVar4 = ~uVar8 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
    }
    iVar6 = 1;
    if (iVar5 < *(int *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar8 * 4)) {
      iVar6 = -1;
    }
  }
  return iVar6;
}

// Compare @ 142cf2b90

int __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_int>::Compare
          (FSingleValueTestSorter<unsigned_int> *this,ICoreProvider *param_1,ulong64 param_2,
          ulong64 param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = (uint)param_3;
  uVar4 = 0;
  if ((int)uVar7 < (this->Values).ArrayNum) {
    uVar4 = ~uVar7 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  pFVar1 = (this->Values).AllocatorInstance.Data;
  uVar6 = (uint)param_2;
  uVar4 = 0;
  if ((int)uVar6 < (this->Values).ArrayNum) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  if (*(int *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar6 * 4) ==
      *(int *)(pFVar1 + (longlong)(int)uVar7 * 4)) {
    iVar5 = 0;
  }
  else {
    uVar4 = 0;
    if ((int)uVar6 < (this->Values).ArrayNum) {
      uVar4 = ~uVar6 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
    }
    uVar4 = *(uint *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar6 * 4);
    uVar6 = 0;
    if ((int)uVar7 < (this->Values).ArrayNum) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
    }
    iVar5 = 1;
    if (uVar4 < *(uint *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar7 * 4)) {
      iVar5 = -1;
    }
  }
  return iVar5;
}

// Compare @ 142cf2d50

int __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<float>::Compare
          (FSingleValueTestSorter<float> *this,ICoreProvider *param_1,ulong64 param_2,
          ulong64 param_3)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = (uint)param_3;
  uVar5 = 0;
  if ((int)uVar7 < (this->Values).ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  pFVar2 = (this->Values).AllocatorInstance.Data;
  uVar8 = (uint)param_2;
  uVar5 = 0;
  if ((int)uVar8 < (this->Values).ArrayNum) {
    uVar5 = ~uVar8 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  if (*(float *)(pFVar2 + (longlong)(int)uVar7 * 4) ==
      *(float *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar8 * 4)) {
    iVar6 = 0;
  }
  else {
    uVar5 = 0;
    if ((int)uVar8 < (this->Values).ArrayNum) {
      uVar5 = ~uVar8 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
    }
    fVar1 = *(float *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar8 * 4);
    uVar5 = 0;
    if ((int)uVar7 < (this->Values).ArrayNum) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
    }
    iVar6 = 1;
    if (fVar1 < *(float *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar7 * 4)) {
      iVar6 = -1;
    }
  }
  return iVar6;
}

// Compare @ 142cf2f10

int __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<double>::Compare
          (FSingleValueTestSorter<double> *this,ICoreProvider *param_1,ulong64 param_2,
          ulong64 param_3)

{
  double dVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = (uint)param_3;
  uVar5 = 0;
  if ((int)uVar7 < (this->Values).ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  pFVar2 = (this->Values).AllocatorInstance.Data;
  uVar8 = (uint)param_2;
  uVar5 = 0;
  if ((int)uVar8 < (this->Values).ArrayNum) {
    uVar5 = ~uVar8 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  if (*(double *)(pFVar2 + (longlong)(int)uVar7 * 8) ==
      *(double *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar8 * 8)) {
    iVar6 = 0;
  }
  else {
    uVar5 = 0;
    if ((int)uVar8 < (this->Values).ArrayNum) {
      uVar5 = ~uVar8 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
    }
    dVar1 = *(double *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar8 * 8);
    uVar5 = 0;
    if ((int)uVar7 < (this->Values).ArrayNum) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
    }
    iVar6 = 1;
    if (dVar1 < *(double *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar7 * 8)) {
      iVar6 = -1;
    }
  }
  return iVar6;
}

// Compare @ 142cf30e0

int __thiscall
UE::Editor::DataStorage::Tests::
FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>_>
::Compare(FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>_>
          *this,ICoreProvider *param_1,ulong64 param_2,ulong64 param_3)

{
  FName *pFVar1;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  uVar9 = (uint)param_2;
  uVar6 = 0;
  if ((int)uVar9 < (this->Values).ArrayNum) {
    uVar6 = ~uVar9 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  uVar8 = (uint)param_3;
  pFVar7 = (this->Values).AllocatorInstance.Data;
  uVar6 = 0;
  if ((int)uVar8 < (this->Values).ArrayNum) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  pFVar1 = *(FName **)(pFVar7 + (longlong)(int)uVar9 * 0x20);
  pFVar7 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x20;
  if ((pFVar1 == (FName *)0x0) || (pFVar2 = *(FName **)pFVar7, pFVar2 == (FName *)0x0)) {
    bVar10 = *(longlong *)pFVar7 == 0;
    bVar4 = pFVar1 == (FName *)0x0;
LAB_142cf3200:
    iVar5 = (uint)bVar4 - (uint)bVar10;
  }
  else {
    if ((*pFVar1 == (FName)0x0) || (*pFVar2 == (FName)0x0)) {
      bVar4 = *pFVar1 != (FName)0x0;
      bVar10 = *pFVar2 != (FName)0x0;
      goto LAB_142cf3200;
    }
    iVar5 = ::FName::Compare(pFVar1,pFVar2);
  }
  if (iVar5 == 0) {
    return 0;
  }
  uVar6 = 0;
  if ((int)uVar9 < (this->Values).ArrayNum) {
    uVar6 = ~uVar9 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  pFVar7 = (this->Values).AllocatorInstance.Data;
  uVar6 = 0;
  if ((int)uVar8 < (this->Values).ArrayNum) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  pFVar1 = *(FName **)(pFVar7 + (longlong)(int)uVar9 * 0x20);
  pFVar7 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x20;
  if ((pFVar1 == (FName *)0x0) || (pFVar2 = *(FName **)pFVar7, pFVar2 == (FName *)0x0)) {
    bVar4 = pFVar1 == (FName *)0x0;
    bVar10 = *(longlong *)pFVar7 == 0;
  }
  else {
    if ((*pFVar1 != (FName)0x0) && (*pFVar2 != (FName)0x0)) {
      iVar5 = ::FName::Compare(pFVar1,pFVar2);
      goto LAB_142cf3301;
    }
    bVar4 = *pFVar1 != (FName)0x0;
    bVar10 = *pFVar2 != (FName)0x0;
  }
  iVar5 = (uint)bVar4 - (uint)bVar10;
LAB_142cf3301:
  return (iVar5 >> 0x1f & 0xfffffffeU) + 1;
}

// Compare @ 142cf3330

int __thiscall
UE::Editor::DataStorage::Tests::
FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::FSortById>_>
::Compare(FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::FSortById>_>
          *this,ICoreProvider *param_1,ulong64 param_2,ulong64 param_3)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = (uint)param_2;
  uVar6 = 0;
  if ((int)uVar9 < (this->Values).ArrayNum) {
    uVar6 = ~uVar9 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  uVar8 = (uint)param_3;
  pFVar7 = (this->Values).AllocatorInstance.Data;
  uVar6 = 0;
  if ((int)uVar8 < (this->Values).ArrayNum) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  piVar1 = *(int **)(pFVar7 + (longlong)(int)uVar9 * 0x10);
  pFVar7 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10;
  if ((piVar1 == (int *)0x0) || (piVar2 = *(int **)pFVar7, piVar2 == (int *)0x0)) {
    iVar5 = (uint)(piVar1 == (int *)0x0) - (uint)(*(longlong *)pFVar7 == 0);
  }
  else {
    iVar5 = *piVar1 - *piVar2;
    if (iVar5 == 0) {
      iVar5 = piVar1[1] - piVar2[1];
    }
  }
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    uVar6 = 0;
    if ((int)uVar9 < (this->Values).ArrayNum) {
      uVar6 = ~uVar9 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    pFVar7 = (this->Values).AllocatorInstance.Data;
    uVar6 = 0;
    if ((int)uVar8 < (this->Values).ArrayNum) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    piVar1 = *(int **)(pFVar7 + (longlong)(int)uVar9 * 0x10);
    pFVar7 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10;
    if ((piVar1 == (int *)0x0) || (piVar2 = *(int **)pFVar7, piVar2 == (int *)0x0)) {
      iVar5 = (uint)(piVar1 == (int *)0x0) - (uint)(*(longlong *)pFVar7 == 0);
    }
    else {
      iVar5 = *piVar1 - *piVar2;
      if (iVar5 == 0) {
        iVar5 = piVar1[1] - piVar2[1];
      }
    }
    iVar5 = (iVar5 >> 0x1f & 0xfffffffeU) + 1;
  }
  return iVar5;
}

// Compare @ 142cf3540

int __thiscall
UE::Editor::DataStorage::Tests::
FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<char>_>_>
::Compare(FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<char>_>_>
          *this,ICoreProvider *param_1,ulong64 param_2,ulong64 param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  uVar10 = (uint)param_2;
  uVar4 = 0;
  if ((int)uVar10 < (this->Values).ArrayNum) {
    uVar4 = ~uVar10 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  uVar9 = (uint)param_3;
  pFVar7 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x10;
  uVar4 = 0;
  if ((int)uVar9 < (this->Values).ArrayNum) {
    uVar4 = ~uVar9 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  pFVar1 = (this->Values).AllocatorInstance.Data;
  iVar5 = *(int *)(pFVar7 + 8);
  iVar8 = (int)*(undefined8 *)(pFVar1 + (longlong)(int)uVar9 * 0x10 + 8);
  if (iVar5 == iVar8) {
    if ((iVar5 != 0) && (iVar8 != 0)) {
      iVar6 = iVar8;
      if (iVar5 < iVar8) {
        iVar6 = iVar5;
      }
      iVar6 = FGenericPlatformStricmp::Strnicmp
                        (*(char **)pFVar7,*(char **)(pFVar1 + (longlong)(int)uVar9 * 0x10),
                         (longlong)iVar6);
      if (iVar6 != 0) goto LAB_142cf3682;
    }
    if (iVar5 == iVar8) {
      return 0;
    }
  }
LAB_142cf3682:
  uVar4 = 0;
  if ((int)uVar10 < (this->Values).ArrayNum) {
    uVar4 = ~uVar10 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  pFVar7 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x10;
  uVar4 = 0;
  if ((int)uVar9 < (this->Values).ArrayNum) {
    uVar4 = ~uVar9 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  pFVar1 = (this->Values).AllocatorInstance.Data;
  iVar5 = *(int *)(pFVar7 + 8);
  iVar8 = (int)*(undefined8 *)(pFVar1 + (longlong)(int)uVar9 * 0x10 + 8);
  if ((iVar5 != 0) && (iVar8 != 0)) {
    iVar6 = iVar8;
    if (iVar5 < iVar8) {
      iVar6 = iVar5;
    }
    iVar6 = FGenericPlatformStricmp::Strnicmp
                      (*(char **)pFVar7,*(char **)(pFVar1 + (longlong)(int)uVar9 * 0x10),
                       (longlong)iVar6);
    if (iVar6 != 0) goto LAB_142cf3769;
  }
  iVar6 = iVar5 - iVar8;
LAB_142cf3769:
  return (iVar6 >> 0x1f & 0xfffffffeU) + 1;
}

// Compare @ 142cf37a0

int __thiscall
UE::Editor::DataStorage::Tests::
FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
::Compare(FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
          *this,ICoreProvider *param_1,ulong64 param_2,ulong64 param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  uVar10 = (uint)param_2;
  uVar4 = 0;
  if ((int)uVar10 < (this->Values).ArrayNum) {
    uVar4 = ~uVar10 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  uVar9 = (uint)param_3;
  pFVar7 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x10;
  uVar4 = 0;
  if ((int)uVar9 < (this->Values).ArrayNum) {
    uVar4 = ~uVar9 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  pFVar1 = (this->Values).AllocatorInstance.Data;
  iVar5 = *(int *)(pFVar7 + 8);
  iVar8 = (int)*(undefined8 *)(pFVar1 + (longlong)(int)uVar9 * 0x10 + 8);
  if (iVar5 == iVar8) {
    if ((iVar5 != 0) && (iVar8 != 0)) {
      iVar6 = iVar8;
      if (iVar5 < iVar8) {
        iVar6 = iVar5;
      }
      iVar6 = FGenericPlatformStricmp::Strnicmp
                        (*(wchar_t **)pFVar7,*(wchar_t **)(pFVar1 + (longlong)(int)uVar9 * 0x10),
                         (longlong)iVar6);
      if (iVar6 != 0) goto LAB_142cf38e2;
    }
    if (iVar5 == iVar8) {
      return 0;
    }
  }
LAB_142cf38e2:
  uVar4 = 0;
  if ((int)uVar10 < (this->Values).ArrayNum) {
    uVar4 = ~uVar10 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  pFVar7 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x10;
  uVar4 = 0;
  if ((int)uVar9 < (this->Values).ArrayNum) {
    uVar4 = ~uVar9 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  pFVar1 = (this->Values).AllocatorInstance.Data;
  iVar5 = *(int *)(pFVar7 + 8);
  iVar8 = (int)*(undefined8 *)(pFVar1 + (longlong)(int)uVar9 * 0x10 + 8);
  if ((iVar5 != 0) && (iVar8 != 0)) {
    iVar6 = iVar8;
    if (iVar5 < iVar8) {
      iVar6 = iVar5;
    }
    iVar6 = FGenericPlatformStricmp::Strnicmp
                      (*(wchar_t **)pFVar7,*(wchar_t **)(pFVar1 + (longlong)(int)uVar9 * 0x10),
                       (longlong)iVar6);
    if (iVar6 != 0) goto LAB_142cf39c9;
  }
  iVar6 = iVar5 - iVar8;
LAB_142cf39c9:
  return (iVar6 >> 0x1f & 0xfffffffeU) + 1;
}

// Compare @ 142cf3a00

int __thiscall
UE::Editor::DataStorage::Tests::
FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<char>_>_>
::Compare(FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<char>_>_>
          *this,ICoreProvider *param_1,ulong64 param_2,ulong64 param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  uVar10 = (uint)param_2;
  uVar4 = 0;
  if ((int)uVar10 < (this->Values).ArrayNum) {
    uVar4 = ~uVar10 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  uVar9 = (uint)param_3;
  pFVar7 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x10;
  uVar4 = 0;
  if ((int)uVar9 < (this->Values).ArrayNum) {
    uVar4 = ~uVar9 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  pFVar1 = (this->Values).AllocatorInstance.Data;
  iVar5 = *(int *)(pFVar7 + 8);
  iVar8 = (int)*(undefined8 *)(pFVar1 + (longlong)(int)uVar9 * 0x10 + 8);
  if (iVar5 == iVar8) {
    if ((iVar5 != 0) && (iVar8 != 0)) {
      iVar6 = iVar8;
      if (iVar5 < iVar8) {
        iVar6 = iVar5;
      }
      iVar6 = strncmp(*(char **)pFVar7,*(char **)(pFVar1 + (longlong)(int)uVar9 * 0x10),
                      (longlong)iVar6);
      if (iVar6 != 0) goto LAB_142cf3b43;
    }
    if (iVar5 == iVar8) {
      return 0;
    }
  }
LAB_142cf3b43:
  uVar4 = 0;
  if ((int)uVar10 < (this->Values).ArrayNum) {
    uVar4 = ~uVar10 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  pFVar7 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x10;
  uVar4 = 0;
  if ((int)uVar9 < (this->Values).ArrayNum) {
    uVar4 = ~uVar9 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  pFVar1 = (this->Values).AllocatorInstance.Data;
  iVar5 = *(int *)(pFVar7 + 8);
  iVar8 = (int)*(undefined8 *)(pFVar1 + (longlong)(int)uVar9 * 0x10 + 8);
  if ((iVar5 != 0) && (iVar8 != 0)) {
    iVar6 = iVar8;
    if (iVar5 < iVar8) {
      iVar6 = iVar5;
    }
    iVar6 = strncmp(*(char **)pFVar7,*(char **)(pFVar1 + (longlong)(int)uVar9 * 0x10),
                    (longlong)iVar6);
    if (iVar6 != 0) goto LAB_142cf3c2b;
  }
  iVar6 = iVar5 - iVar8;
LAB_142cf3c2b:
  return (iVar6 >> 0x1f & 0xfffffffeU) + 1;
}

// Compare @ 142cf3c60

int __thiscall
UE::Editor::DataStorage::Tests::
FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
::Compare(FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
          *this,ICoreProvider *param_1,ulong64 param_2,ulong64 param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  uVar10 = (uint)param_2;
  uVar4 = 0;
  if ((int)uVar10 < (this->Values).ArrayNum) {
    uVar4 = ~uVar10 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  uVar9 = (uint)param_3;
  pFVar7 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x10;
  uVar4 = 0;
  if ((int)uVar9 < (this->Values).ArrayNum) {
    uVar4 = ~uVar9 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  pFVar1 = (this->Values).AllocatorInstance.Data;
  iVar5 = *(int *)(pFVar7 + 8);
  iVar8 = (int)*(undefined8 *)(pFVar1 + (longlong)(int)uVar9 * 0x10 + 8);
  if (iVar5 == iVar8) {
    if ((iVar5 != 0) && (iVar8 != 0)) {
      iVar6 = iVar8;
      if (iVar5 < iVar8) {
        iVar6 = iVar5;
      }
      iVar6 = wcsncmp(*(wchar_t **)pFVar7,*(wchar_t **)(pFVar1 + (longlong)(int)uVar9 * 0x10),
                      (longlong)iVar6);
      if (iVar6 != 0) goto LAB_142cf3da3;
    }
    if (iVar5 == iVar8) {
      return 0;
    }
  }
LAB_142cf3da3:
  uVar4 = 0;
  if ((int)uVar10 < (this->Values).ArrayNum) {
    uVar4 = ~uVar10 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  pFVar7 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x10;
  uVar4 = 0;
  if ((int)uVar9 < (this->Values).ArrayNum) {
    uVar4 = ~uVar9 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  pFVar1 = (this->Values).AllocatorInstance.Data;
  iVar5 = *(int *)(pFVar7 + 8);
  iVar8 = (int)*(undefined8 *)(pFVar1 + (longlong)(int)uVar9 * 0x10 + 8);
  if ((iVar5 != 0) && (iVar8 != 0)) {
    iVar6 = iVar8;
    if (iVar5 < iVar8) {
      iVar6 = iVar5;
    }
    iVar6 = wcsncmp(*(wchar_t **)pFVar7,*(wchar_t **)(pFVar1 + (longlong)(int)uVar9 * 0x10),
                    (longlong)iVar6);
    if (iVar6 != 0) goto LAB_142cf3e8b;
  }
  iVar6 = iVar5 - iVar8;
LAB_142cf3e8b:
  return (iVar6 >> 0x1f & 0xfffffffeU) + 1;
}

// Compare @ 142cf3ec0

int __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<__int64>::Compare
          (FSingleValueTestSorter<__int64> *this,ICoreProvider *param_1,ulong64 param_2,
          ulong64 param_3)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = (uint)param_3;
  uVar5 = 0;
  if ((int)uVar8 < (this->Values).ArrayNum) {
    uVar5 = ~uVar8 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  pFVar1 = (this->Values).AllocatorInstance.Data;
  uVar7 = (uint)param_2;
  uVar5 = 0;
  if ((int)uVar7 < (this->Values).ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  if (*(longlong *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar7 * 8) ==
      *(longlong *)(pFVar1 + (longlong)(int)uVar8 * 8)) {
    iVar6 = 0;
  }
  else {
    uVar5 = 0;
    if ((int)uVar7 < (this->Values).ArrayNum) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
    }
    lVar2 = *(longlong *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar7 * 8);
    uVar5 = 0;
    if ((int)uVar8 < (this->Values).ArrayNum) {
      uVar5 = ~uVar8 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
    }
    iVar6 = 1;
    if (lVar2 < *(longlong *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar8 * 8)) {
      iVar6 = -1;
    }
  }
  return iVar6;
}

// Compare @ 142cf4080

int __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned___int64>::Compare
          (FSingleValueTestSorter<unsigned___int64> *this,ICoreProvider *param_1,ulong64 param_2,
          ulong64 param_3)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = (uint)param_3;
  uVar5 = 0;
  if ((int)uVar8 < (this->Values).ArrayNum) {
    uVar5 = ~uVar8 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  pFVar1 = (this->Values).AllocatorInstance.Data;
  uVar7 = (uint)param_2;
  uVar5 = 0;
  if ((int)uVar7 < (this->Values).ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  if (*(longlong *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar7 * 8) ==
      *(longlong *)(pFVar1 + (longlong)(int)uVar8 * 8)) {
    iVar6 = 0;
  }
  else {
    uVar5 = 0;
    if ((int)uVar7 < (this->Values).ArrayNum) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
    }
    uVar2 = *(ulonglong *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar7 * 8);
    uVar5 = 0;
    if ((int)uVar8 < (this->Values).ArrayNum) {
      uVar5 = ~uVar8 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
    }
    iVar6 = 1;
    if (uVar2 < *(ulonglong *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar8 * 8)) {
      iVar6 = -1;
    }
  }
  return iVar6;
}

// Compare @ 142cf4240

int __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<bool>::Compare
          (FSingleValueTestSorter<bool> *this,ICoreProvider *param_1,ulong64 param_2,ulong64 param_3
          )

{
  FScriptContainerElement FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = (uint)param_3;
  uVar5 = 0;
  if ((int)uVar7 < (this->Values).ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  pFVar2 = (this->Values).AllocatorInstance.Data;
  uVar8 = (uint)param_2;
  uVar5 = 0;
  if ((int)uVar8 < (this->Values).ArrayNum) {
    uVar5 = ~uVar8 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  if ((this->Values).AllocatorInstance.Data[(int)uVar8] == pFVar2[(int)uVar7]) {
    iVar6 = 0;
  }
  else {
    uVar5 = 0;
    if ((int)uVar8 < (this->Values).ArrayNum) {
      uVar5 = ~uVar8 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
    }
    FVar1 = (this->Values).AllocatorInstance.Data[(int)uVar8];
    uVar5 = 0;
    if ((int)uVar7 < (this->Values).ArrayNum) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
    }
    iVar6 = 1;
    if ((byte)FVar1 < (byte)(this->Values).AllocatorInstance.Data[(int)uVar7]) {
      iVar6 = -1;
    }
  }
  return iVar6;
}

// GetShortName @ 142cf5fc0

FText * __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<signed_char>::GetShortName
          (FSingleValueTestSorter<signed_char> *this,FText *__return_storage_ptr__)

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

// GetShortName @ 142cf6010

FText * __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_char>::GetShortName
          (FSingleValueTestSorter<unsigned_char> *this,FText *__return_storage_ptr__)

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

// GetShortName @ 142cf6060

FText * __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<short>::GetShortName
          (FSingleValueTestSorter<short> *this,FText *__return_storage_ptr__)

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

// GetShortName @ 142cf60b0

FText * __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_short>::GetShortName
          (FSingleValueTestSorter<unsigned_short> *this,FText *__return_storage_ptr__)

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

// GetShortName @ 142cf6100

FText * __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<int>::GetShortName
          (FSingleValueTestSorter<int> *this,FText *__return_storage_ptr__)

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

// GetShortName @ 142cf6150

FText * __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_int>::GetShortName
          (FSingleValueTestSorter<unsigned_int> *this,FText *__return_storage_ptr__)

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

// GetShortName @ 142cf61a0

FText * __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<float>::GetShortName
          (FSingleValueTestSorter<float> *this,FText *__return_storage_ptr__)

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

// GetShortName @ 142cf61f0

FText * __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<double>::GetShortName
          (FSingleValueTestSorter<double> *this,FText *__return_storage_ptr__)

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

// GetShortName @ 142cf6240

FText * __thiscall
UE::Editor::DataStorage::Tests::
FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>_>
::GetShortName(FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>_>
               *this,FText *__return_storage_ptr__)

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

// GetShortName @ 142cf6290

FText * __thiscall
UE::Editor::DataStorage::Tests::
FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::FSortById>_>
::GetShortName(FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::FSortById>_>
               *this,FText *__return_storage_ptr__)

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

// GetShortName @ 142cf62e0

FText * __thiscall
UE::Editor::DataStorage::Tests::
FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<char>_>_>
::GetShortName(FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<char>_>_>
               *this,FText *__return_storage_ptr__)

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

// GetShortName @ 142cf6330

FText * __thiscall
UE::Editor::DataStorage::Tests::
FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
::GetShortName(FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
               *this,FText *__return_storage_ptr__)

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

// GetShortName @ 142cf6380

FText * __thiscall
UE::Editor::DataStorage::Tests::
FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<char>_>_>
::GetShortName(FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<char>_>_>
               *this,FText *__return_storage_ptr__)

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

// GetShortName @ 142cf63d0

FText * __thiscall
UE::Editor::DataStorage::Tests::
FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
::GetShortName(FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
               *this,FText *__return_storage_ptr__)

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

// GetShortName @ 142cf6420

FText * __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<__int64>::GetShortName
          (FSingleValueTestSorter<__int64> *this,FText *__return_storage_ptr__)

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

// GetShortName @ 142cf6470

FText * __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned___int64>::GetShortName
          (FSingleValueTestSorter<unsigned___int64> *this,FText *__return_storage_ptr__)

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

// GetShortName @ 142cf64c0

FText * __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<bool>::GetShortName
          (FSingleValueTestSorter<bool> *this,FText *__return_storage_ptr__)

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

// GetSortType @ 142cf65f0

ESortType __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<signed_char>::GetSortType
          (FSingleValueTestSorter<signed_char> *this)

{
  return HybridSort;
}

// GetSortType @ 142cf6600

ESortType __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_char>::GetSortType
          (FSingleValueTestSorter<unsigned_char> *this)

{
  return HybridSort;
}

// GetSortType @ 142cf6610

ESortType __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<short>::GetSortType
          (FSingleValueTestSorter<short> *this)

{
  return HybridSort;
}

// GetSortType @ 142cf6620

ESortType __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_short>::GetSortType
          (FSingleValueTestSorter<unsigned_short> *this)

{
  return HybridSort;
}

// GetSortType @ 142cf6630

ESortType __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<int>::GetSortType
          (FSingleValueTestSorter<int> *this)

{
  return HybridSort;
}

// GetSortType @ 142cf6640

ESortType __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_int>::GetSortType
          (FSingleValueTestSorter<unsigned_int> *this)

{
  return HybridSort;
}

// GetSortType @ 142cf6650

ESortType __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<float>::GetSortType
          (FSingleValueTestSorter<float> *this)

{
  return HybridSort;
}

// GetSortType @ 142cf6660

ESortType __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<double>::GetSortType
          (FSingleValueTestSorter<double> *this)

{
  return HybridSort;
}

// GetSortType @ 142cf6670

ESortType __thiscall
UE::Editor::DataStorage::Tests::
FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>_>
::GetSortType(FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>_>
              *this)

{
  return HybridSort;
}

// GetSortType @ 142cf6680

ESortType __thiscall
UE::Editor::DataStorage::Tests::
FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::FSortById>_>
::GetSortType(FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::FSortById>_>
              *this)

{
  return HybridSort;
}

// GetSortType @ 142cf6690

ESortType __thiscall
UE::Editor::DataStorage::Tests::
FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<char>_>_>
::GetSortType(FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<char>_>_>
              *this)

{
  return HybridSort;
}

// GetSortType @ 142cf66a0

ESortType __thiscall
UE::Editor::DataStorage::Tests::
FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
::GetSortType(FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
              *this)

{
  return HybridSort;
}

// GetSortType @ 142cf66b0

ESortType __thiscall
UE::Editor::DataStorage::Tests::
FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<char>_>_>
::GetSortType(FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<char>_>_>
              *this)

{
  return HybridSort;
}

// GetSortType @ 142cf66c0

ESortType __thiscall
UE::Editor::DataStorage::Tests::
FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
::GetSortType(FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
              *this)

{
  return HybridSort;
}

// GetSortType @ 142cf66d0

ESortType __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<__int64>::GetSortType
          (FSingleValueTestSorter<__int64> *this)

{
  return HybridSort;
}

// GetSortType @ 142cf66e0

ESortType __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned___int64>::GetSortType
          (FSingleValueTestSorter<unsigned___int64> *this)

{
  return HybridSort;
}

// GetSortType @ 142cf66f0

ESortType __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<bool>::GetSortType
          (FSingleValueTestSorter<bool> *this)

{
  return HybridSort;
}

// SortByPrefix @ 142cfae00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<signed_char>::SortByPrefix
          (FSingleValueTestSorter<signed_char> *this,ICoreProvider *param_1,uint param_2)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulong64 *puVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  undefined1 auStackY_e8 [32];
  undefined1 local_98 [8];
  ForAnyElementType local_90;
  undefined8 local_88;
  <lambda_1> local_80 [8];
  ForAnyElementType local_78;
  int local_70 [2];
  undefined1 local_68 [16];
  FData local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  uVar10 = 0;
  uVar7 = (this->Values).ArrayNum;
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = 0;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
  }
  iVar12 = 0;
  if (0 < (int)uVar7) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar7,&local_90,0,(int *)((longlong)&local_88 + 4));
    iVar12 = (int)local_88;
  }
  uVar14 = uVar10;
  if (0 < (this->Values).ArrayNum) {
    do {
      puVar9 = (ulong64 *)(**(code **)(this->_padding_ + 0x20))(this,local_68,param_1,uVar10);
      local_58.Prefix = *puVar9;
      uVar13 = (uint)uVar14;
      uVar7 = 0;
      if ((int)uVar13 < (this->Values).ArrayNum) {
        uVar7 = ~uVar13 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_58.Value = *(schar *)((this->Values).AllocatorInstance.Data + uVar10);
      if (((local_90.Data <= &local_58) &&
          (&local_58 < (FData *)(local_90.Data + (longlong)local_88._4_4_ * 0x10))) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar8 = (int)local_88;
      if ((int)local_88 == local_88._4_4_) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_90,(int *)((longlong)&local_88 + 4));
      }
      iVar12 = iVar8 + 1;
      uVar10 = uVar10 + 1;
      local_88 = CONCAT44(local_88._4_4_,iVar12);
      *(ulong64 *)&local_90.Data[(longlong)iVar8 * 0x10].field_0x0 = local_58.Prefix;
      *(ulonglong *)(local_90.Data + (longlong)iVar8 * 0x10 + 8) =
           CONCAT71(local_58._9_7_,local_58.Value);
      uVar14 = (ulonglong)(uVar13 + 1);
    } while ((int)(uVar13 + 1) < (this->Values).ArrayNum);
  }
  FVar5.Data = local_90.Data;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70[0] = 0;
  local_70[1] = 0;
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar12,&local_78,local_70,local_70 + 1);
  RadixSort64<1,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<signed_char>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<signed_char>::SortByPrefix_::__l2::<lambda_1>_>
            ((FData *)FVar5.Data,(FData *)local_78.Data,iVar12,local_80);
  if ((FData *)local_78.Data != (FData *)0x0) {
    FMemory::Free(local_78.Data);
  }
  piVar1 = &(this->Values).ArrayMax;
  (this->Values).ArrayNum = 0;
  if ((this->Values).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->Values).AllocatorInstance,0,piVar1);
  }
  iVar12 = (int)local_88;
  uVar10 = (ulonglong)(int)local_88;
  pFVar15 = local_90.Data + uVar10 * 0x10;
  pFVar11 = local_90.Data + 8;
  while( true ) {
    if ((int)uVar10 != iVar12) {
      local_98[0] = 0;
      `TCheckedPointerIterator<`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<signed_char>::SortByPrefix'::__l2::FData,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_98);
    }
    if (pFVar11 + -8 == pFVar15) break;
    pFVar3 = (this->Values).AllocatorInstance.Data;
    if (((pFVar3 <= pFVar11) && (pFVar11 < pFVar3 + *piVar1)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = (this->Values).ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&(this->Values).AllocatorInstance,piVar1);
    }
    (this->Values).ArrayNum = iVar8 + 1;
    FVar2 = *pFVar11;
    pFVar11 = pFVar11 + 0x10;
    (this->Values).AllocatorInstance.Data[iVar8] = FVar2;
    uVar10 = local_88 & 0xffffffff;
  }
  if ((FData *)local_90.Data != (FData *)0x0) {
    FMemory::Free(local_90.Data);
  }
  return;
}

// SortByPrefix @ 142cfb150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_char>::SortByPrefix
          (FSingleValueTestSorter<unsigned_char> *this,ICoreProvider *param_1,uint param_2)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulong64 *puVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  undefined1 auStackY_e8 [32];
  undefined1 local_98 [8];
  ForAnyElementType local_90;
  undefined8 local_88;
  <lambda_1> local_80 [8];
  ForAnyElementType local_78;
  int local_70 [2];
  undefined1 local_68 [16];
  FData local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  uVar10 = 0;
  uVar7 = (this->Values).ArrayNum;
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = 0;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
  }
  iVar12 = 0;
  if (0 < (int)uVar7) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar7,&local_90,0,(int *)((longlong)&local_88 + 4));
    iVar12 = (int)local_88;
  }
  uVar14 = uVar10;
  if (0 < (this->Values).ArrayNum) {
    do {
      puVar9 = (ulong64 *)(**(code **)(this->_padding_ + 0x20))(this,local_68,param_1,uVar10);
      local_58.Prefix = *puVar9;
      uVar13 = (uint)uVar14;
      uVar7 = 0;
      if ((int)uVar13 < (this->Values).ArrayNum) {
        uVar7 = ~uVar13 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_58.Value = *(uchar *)((this->Values).AllocatorInstance.Data + uVar10);
      if (((local_90.Data <= &local_58) &&
          (&local_58 < (FData *)(local_90.Data + (longlong)local_88._4_4_ * 0x10))) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar8 = (int)local_88;
      if ((int)local_88 == local_88._4_4_) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_90,(int *)((longlong)&local_88 + 4));
      }
      iVar12 = iVar8 + 1;
      uVar10 = uVar10 + 1;
      local_88 = CONCAT44(local_88._4_4_,iVar12);
      *(ulong64 *)&local_90.Data[(longlong)iVar8 * 0x10].field_0x0 = local_58.Prefix;
      *(ulonglong *)(local_90.Data + (longlong)iVar8 * 0x10 + 8) =
           CONCAT71(local_58._9_7_,local_58.Value);
      uVar14 = (ulonglong)(uVar13 + 1);
    } while ((int)(uVar13 + 1) < (this->Values).ArrayNum);
  }
  FVar5.Data = local_90.Data;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70[0] = 0;
  local_70[1] = 0;
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar12,&local_78,local_70,local_70 + 1);
  RadixSort64<1,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_char>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_char>::SortByPrefix_::__l2::<lambda_1>_>
            ((FData *)FVar5.Data,(FData *)local_78.Data,iVar12,local_80);
  if ((FData *)local_78.Data != (FData *)0x0) {
    FMemory::Free(local_78.Data);
  }
  piVar1 = &(this->Values).ArrayMax;
  (this->Values).ArrayNum = 0;
  if ((this->Values).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->Values).AllocatorInstance,0,piVar1);
  }
  iVar12 = (int)local_88;
  uVar10 = (ulonglong)(int)local_88;
  pFVar15 = local_90.Data + uVar10 * 0x10;
  pFVar11 = local_90.Data + 8;
  while( true ) {
    if ((int)uVar10 != iVar12) {
      local_98[0] = 0;
      `TCheckedPointerIterator<`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_char>::SortByPrefix'::__l2::FData,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_98);
    }
    if (pFVar11 + -8 == pFVar15) break;
    pFVar3 = (this->Values).AllocatorInstance.Data;
    if (((pFVar3 <= pFVar11) && (pFVar11 < pFVar3 + *piVar1)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = (this->Values).ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&(this->Values).AllocatorInstance,piVar1);
    }
    (this->Values).ArrayNum = iVar8 + 1;
    FVar2 = *pFVar11;
    pFVar11 = pFVar11 + 0x10;
    (this->Values).AllocatorInstance.Data[iVar8] = FVar2;
    uVar10 = local_88 & 0xffffffff;
  }
  if ((FData *)local_90.Data != (FData *)0x0) {
    FMemory::Free(local_90.Data);
  }
  return;
}

// SortByPrefix @ 142cfb4a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<short>::SortByPrefix
          (FSingleValueTestSorter<short> *this,ICoreProvider *param_1,uint param_2)

{
  int *piVar1;
  undefined2 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulong64 *puVar9;
  ulonglong uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  undefined1 auStackY_e8 [32];
  undefined1 local_98 [8];
  ForAnyElementType local_90;
  undefined8 local_88;
  <lambda_1> local_80 [8];
  ForAnyElementType local_78;
  int local_70 [2];
  undefined1 local_68 [16];
  FData local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  uVar10 = 0;
  uVar7 = (this->Values).ArrayNum;
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = 0;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
  }
  iVar13 = 0;
  if (0 < (int)uVar7) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar7,&local_90,0,(int *)((longlong)&local_88 + 4));
    iVar13 = (int)local_88;
  }
  uVar14 = uVar10;
  if (0 < (this->Values).ArrayNum) {
    do {
      uVar11 = (uint)uVar10;
      puVar9 = (ulong64 *)
               (**(code **)(this->_padding_ + 0x20))(this,local_68,param_1,(longlong)(int)uVar11);
      local_58.Prefix = *puVar9;
      uVar7 = 0;
      if ((int)uVar11 < (this->Values).ArrayNum) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_58.Value = *(short *)((this->Values).AllocatorInstance.Data + uVar14);
      if (((local_90.Data <= &local_58) &&
          (&local_58 < (FData *)(local_90.Data + (longlong)local_88._4_4_ * 0x10))) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar8 = (int)local_88;
      if ((int)local_88 == local_88._4_4_) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_90,(int *)((longlong)&local_88 + 4));
      }
      iVar13 = iVar8 + 1;
      uVar10 = (ulonglong)(uVar11 + 1);
      local_88 = CONCAT44(local_88._4_4_,iVar13);
      *(ulong64 *)&local_90.Data[(longlong)iVar8 * 0x10].field_0x0 = local_58.Prefix;
      *(ulonglong *)(local_90.Data + (longlong)iVar8 * 0x10 + 8) =
           CONCAT62(local_58._10_6_,local_58.Value);
      uVar14 = uVar14 + 2;
    } while ((int)(uVar11 + 1) < (this->Values).ArrayNum);
  }
  FVar5.Data = local_90.Data;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70[0] = 0;
  local_70[1] = 0;
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar13,&local_78,local_70,local_70 + 1);
  RadixSort64<1,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<short>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<short>::SortByPrefix_::__l2::<lambda_1>_>
            ((FData *)FVar5.Data,(FData *)local_78.Data,iVar13,local_80);
  if ((FData *)local_78.Data != (FData *)0x0) {
    FMemory::Free(local_78.Data);
  }
  piVar1 = &(this->Values).ArrayMax;
  (this->Values).ArrayNum = 0;
  if ((this->Values).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0,&(this->Values).AllocatorInstance,0,piVar1);
  }
  iVar13 = (int)local_88;
  uVar10 = (ulonglong)(int)local_88;
  pFVar15 = local_90.Data + uVar10 * 0x10;
  pFVar12 = local_90.Data + 8;
  while( true ) {
    if ((int)uVar10 != iVar13) {
      local_98[0] = 0;
      `TCheckedPointerIterator<`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<short>::SortByPrefix'::__l2::FData,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_98);
    }
    if (pFVar12 + -8 == pFVar15) break;
    pFVar3 = (this->Values).AllocatorInstance.Data;
    if (((pFVar3 <= pFVar12) && (pFVar12 < pFVar3 + (longlong)*piVar1 * 2)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = (this->Values).ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x202,&(this->Values).AllocatorInstance,piVar1);
    }
    (this->Values).ArrayNum = iVar8 + 1;
    uVar2 = *(undefined2 *)pFVar12;
    pFVar12 = pFVar12 + 0x10;
    *(undefined2 *)((this->Values).AllocatorInstance.Data + (longlong)iVar8 * 2) = uVar2;
    uVar10 = local_88 & 0xffffffff;
  }
  if ((FData *)local_90.Data != (FData *)0x0) {
    FMemory::Free(local_90.Data);
  }
  return;
}

// SortByPrefix @ 142cfb800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_short>::SortByPrefix
          (FSingleValueTestSorter<unsigned_short> *this,ICoreProvider *param_1,uint param_2)

{
  int *piVar1;
  undefined2 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulong64 *puVar9;
  ulonglong uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  undefined1 auStackY_e8 [32];
  undefined1 local_98 [8];
  ForAnyElementType local_90;
  undefined8 local_88;
  <lambda_1> local_80 [8];
  ForAnyElementType local_78;
  int local_70 [2];
  undefined1 local_68 [16];
  FData local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  uVar10 = 0;
  uVar7 = (this->Values).ArrayNum;
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = 0;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
  }
  iVar13 = 0;
  if (0 < (int)uVar7) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar7,&local_90,0,(int *)((longlong)&local_88 + 4));
    iVar13 = (int)local_88;
  }
  uVar14 = uVar10;
  if (0 < (this->Values).ArrayNum) {
    do {
      uVar11 = (uint)uVar10;
      puVar9 = (ulong64 *)
               (**(code **)(this->_padding_ + 0x20))(this,local_68,param_1,(longlong)(int)uVar11);
      local_58.Prefix = *puVar9;
      uVar7 = 0;
      if ((int)uVar11 < (this->Values).ArrayNum) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_58.Value = *(ushort *)((this->Values).AllocatorInstance.Data + uVar14);
      if (((local_90.Data <= &local_58) &&
          (&local_58 < (FData *)(local_90.Data + (longlong)local_88._4_4_ * 0x10))) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar8 = (int)local_88;
      if ((int)local_88 == local_88._4_4_) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_90,(int *)((longlong)&local_88 + 4));
      }
      iVar13 = iVar8 + 1;
      uVar10 = (ulonglong)(uVar11 + 1);
      local_88 = CONCAT44(local_88._4_4_,iVar13);
      *(ulong64 *)&local_90.Data[(longlong)iVar8 * 0x10].field_0x0 = local_58.Prefix;
      *(ulonglong *)(local_90.Data + (longlong)iVar8 * 0x10 + 8) =
           CONCAT62(local_58._10_6_,local_58.Value);
      uVar14 = uVar14 + 2;
    } while ((int)(uVar11 + 1) < (this->Values).ArrayNum);
  }
  FVar5.Data = local_90.Data;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70[0] = 0;
  local_70[1] = 0;
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar13,&local_78,local_70,local_70 + 1);
  RadixSort64<1,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_short>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_short>::SortByPrefix_::__l2::<lambda_1>_>
            ((FData *)FVar5.Data,(FData *)local_78.Data,iVar13,local_80);
  if ((FData *)local_78.Data != (FData *)0x0) {
    FMemory::Free(local_78.Data);
  }
  piVar1 = &(this->Values).ArrayMax;
  (this->Values).ArrayNum = 0;
  if ((this->Values).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0,&(this->Values).AllocatorInstance,0,piVar1);
  }
  iVar13 = (int)local_88;
  uVar10 = (ulonglong)(int)local_88;
  pFVar15 = local_90.Data + uVar10 * 0x10;
  pFVar12 = local_90.Data + 8;
  while( true ) {
    if ((int)uVar10 != iVar13) {
      local_98[0] = 0;
      `TCheckedPointerIterator<`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_short>::SortByPrefix'::__l2::FData,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_98);
    }
    if (pFVar12 + -8 == pFVar15) break;
    pFVar3 = (this->Values).AllocatorInstance.Data;
    if (((pFVar3 <= pFVar12) && (pFVar12 < pFVar3 + (longlong)*piVar1 * 2)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = (this->Values).ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x202,&(this->Values).AllocatorInstance,piVar1);
    }
    (this->Values).ArrayNum = iVar8 + 1;
    uVar2 = *(undefined2 *)pFVar12;
    pFVar12 = pFVar12 + 0x10;
    *(undefined2 *)((this->Values).AllocatorInstance.Data + (longlong)iVar8 * 2) = uVar2;
    uVar10 = local_88 & 0xffffffff;
  }
  if ((FData *)local_90.Data != (FData *)0x0) {
    FMemory::Free(local_90.Data);
  }
  return;
}

// SortByPrefix @ 142cfbb60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<int>::SortByPrefix
          (FSingleValueTestSorter<int> *this,ICoreProvider *param_1,uint param_2)

{
  int *piVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulong64 *puVar9;
  ulonglong uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  undefined1 auStackY_e8 [32];
  undefined1 local_98 [8];
  ForAnyElementType local_90;
  undefined8 local_88;
  <lambda_1> local_80 [8];
  ForAnyElementType local_78;
  int local_70 [2];
  undefined1 local_68 [16];
  FData local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  uVar10 = 0;
  uVar7 = (this->Values).ArrayNum;
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = 0;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
  }
  iVar13 = 0;
  if (0 < (int)uVar7) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar7,&local_90,0,(int *)((longlong)&local_88 + 4));
    iVar13 = (int)local_88;
  }
  uVar14 = uVar10;
  if (0 < (this->Values).ArrayNum) {
    do {
      uVar11 = (uint)uVar10;
      puVar9 = (ulong64 *)
               (**(code **)(this->_padding_ + 0x20))(this,local_68,param_1,(longlong)(int)uVar11);
      local_58.Prefix = *puVar9;
      uVar7 = 0;
      if ((int)uVar11 < (this->Values).ArrayNum) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_58.Value = *(int *)((this->Values).AllocatorInstance.Data + uVar14);
      if (((local_90.Data <= &local_58) &&
          (&local_58 < (FData *)(local_90.Data + (longlong)local_88._4_4_ * 0x10))) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar8 = (int)local_88;
      if ((int)local_88 == local_88._4_4_) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_90,(int *)((longlong)&local_88 + 4));
      }
      iVar13 = iVar8 + 1;
      uVar10 = (ulonglong)(uVar11 + 1);
      local_88 = CONCAT44(local_88._4_4_,iVar13);
      *(ulong64 *)&local_90.Data[(longlong)iVar8 * 0x10].field_0x0 = local_58.Prefix;
      *(ulonglong *)(local_90.Data + (longlong)iVar8 * 0x10 + 8) =
           CONCAT44(local_58._12_4_,local_58.Value);
      uVar14 = uVar14 + 4;
    } while ((int)(uVar11 + 1) < (this->Values).ArrayNum);
  }
  FVar5.Data = local_90.Data;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70[0] = 0;
  local_70[1] = 0;
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar13,&local_78,local_70,local_70 + 1);
  RadixSort64<1,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<int>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<int>::SortByPrefix_::__l2::<lambda_1>_>
            ((FData *)FVar5.Data,(FData *)local_78.Data,iVar13,local_80);
  if ((FData *)local_78.Data != (FData *)0x0) {
    FMemory::Free(local_78.Data);
  }
  piVar1 = &(this->Values).ArrayMax;
  (this->Values).ArrayNum = 0;
  if ((this->Values).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Values).AllocatorInstance,0,piVar1);
  }
  iVar13 = (int)local_88;
  uVar10 = (ulonglong)(int)local_88;
  pFVar15 = local_90.Data + uVar10 * 0x10;
  pFVar12 = local_90.Data + 8;
  while( true ) {
    if ((int)uVar10 != iVar13) {
      local_98[0] = 0;
      `TCheckedPointerIterator<`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<int>::SortByPrefix'::__l2::FData,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_98);
    }
    if (pFVar12 + -8 == pFVar15) break;
    pFVar3 = (this->Values).AllocatorInstance.Data;
    if (((pFVar3 <= pFVar12) && (pFVar12 < pFVar3 + (longlong)*piVar1 * 4)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = (this->Values).ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->Values).AllocatorInstance,piVar1);
    }
    (this->Values).ArrayNum = iVar8 + 1;
    uVar2 = *(undefined4 *)pFVar12;
    pFVar12 = pFVar12 + 0x10;
    *(undefined4 *)((this->Values).AllocatorInstance.Data + (longlong)iVar8 * 4) = uVar2;
    uVar10 = local_88 & 0xffffffff;
  }
  if ((FData *)local_90.Data != (FData *)0x0) {
    FMemory::Free(local_90.Data);
  }
  return;
}

// SortByPrefix @ 142cfbeb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_int>::SortByPrefix
          (FSingleValueTestSorter<unsigned_int> *this,ICoreProvider *param_1,uint param_2)

{
  int *piVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulong64 *puVar9;
  ulonglong uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  undefined1 auStackY_e8 [32];
  undefined1 local_98 [8];
  ForAnyElementType local_90;
  undefined8 local_88;
  <lambda_1> local_80 [8];
  ForAnyElementType local_78;
  int local_70 [2];
  undefined1 local_68 [16];
  FData local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  uVar10 = 0;
  uVar7 = (this->Values).ArrayNum;
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = 0;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
  }
  iVar13 = 0;
  if (0 < (int)uVar7) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar7,&local_90,0,(int *)((longlong)&local_88 + 4));
    iVar13 = (int)local_88;
  }
  uVar14 = uVar10;
  if (0 < (this->Values).ArrayNum) {
    do {
      uVar11 = (uint)uVar10;
      puVar9 = (ulong64 *)
               (**(code **)(this->_padding_ + 0x20))(this,local_68,param_1,(longlong)(int)uVar11);
      local_58.Prefix = *puVar9;
      uVar7 = 0;
      if ((int)uVar11 < (this->Values).ArrayNum) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_58.Value = *(uint *)((this->Values).AllocatorInstance.Data + uVar14);
      if (((local_90.Data <= &local_58) &&
          (&local_58 < (FData *)(local_90.Data + (longlong)local_88._4_4_ * 0x10))) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar8 = (int)local_88;
      if ((int)local_88 == local_88._4_4_) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_90,(int *)((longlong)&local_88 + 4));
      }
      iVar13 = iVar8 + 1;
      uVar10 = (ulonglong)(uVar11 + 1);
      local_88 = CONCAT44(local_88._4_4_,iVar13);
      *(ulong64 *)&local_90.Data[(longlong)iVar8 * 0x10].field_0x0 = local_58.Prefix;
      *(ulonglong *)(local_90.Data + (longlong)iVar8 * 0x10 + 8) =
           CONCAT44(local_58._12_4_,local_58.Value);
      uVar14 = uVar14 + 4;
    } while ((int)(uVar11 + 1) < (this->Values).ArrayNum);
  }
  FVar5.Data = local_90.Data;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70[0] = 0;
  local_70[1] = 0;
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar13,&local_78,local_70,local_70 + 1);
  RadixSort64<1,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_int>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_int>::SortByPrefix_::__l2::<lambda_1>_>
            ((FData *)FVar5.Data,(FData *)local_78.Data,iVar13,local_80);
  if ((FData *)local_78.Data != (FData *)0x0) {
    FMemory::Free(local_78.Data);
  }
  piVar1 = &(this->Values).ArrayMax;
  (this->Values).ArrayNum = 0;
  if ((this->Values).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Values).AllocatorInstance,0,piVar1);
  }
  iVar13 = (int)local_88;
  uVar10 = (ulonglong)(int)local_88;
  pFVar15 = local_90.Data + uVar10 * 0x10;
  pFVar12 = local_90.Data + 8;
  while( true ) {
    if ((int)uVar10 != iVar13) {
      local_98[0] = 0;
      `TCheckedPointerIterator<`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_int>::SortByPrefix'::__l2::FData,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_98);
    }
    if (pFVar12 + -8 == pFVar15) break;
    pFVar3 = (this->Values).AllocatorInstance.Data;
    if (((pFVar3 <= pFVar12) && (pFVar12 < pFVar3 + (longlong)*piVar1 * 4)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = (this->Values).ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->Values).AllocatorInstance,piVar1);
    }
    (this->Values).ArrayNum = iVar8 + 1;
    uVar2 = *(undefined4 *)pFVar12;
    pFVar12 = pFVar12 + 0x10;
    *(undefined4 *)((this->Values).AllocatorInstance.Data + (longlong)iVar8 * 4) = uVar2;
    uVar10 = local_88 & 0xffffffff;
  }
  if ((FData *)local_90.Data != (FData *)0x0) {
    FMemory::Free(local_90.Data);
  }
  return;
}

// SortByPrefix @ 142cfc200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<float>::SortByPrefix
          (FSingleValueTestSorter<float> *this,ICoreProvider *param_1,uint param_2)

{
  int *piVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulong64 *puVar9;
  ulonglong uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  undefined1 auStackY_e8 [32];
  undefined1 local_98 [8];
  ForAnyElementType local_90;
  undefined8 local_88;
  <lambda_1> local_80 [8];
  ForAnyElementType local_78;
  int local_70 [2];
  undefined1 local_68 [16];
  FData local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  uVar10 = 0;
  uVar7 = (this->Values).ArrayNum;
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = 0;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
  }
  iVar13 = 0;
  if (0 < (int)uVar7) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar7,&local_90,0,(int *)((longlong)&local_88 + 4));
    iVar13 = (int)local_88;
  }
  uVar14 = uVar10;
  if (0 < (this->Values).ArrayNum) {
    do {
      uVar11 = (uint)uVar10;
      puVar9 = (ulong64 *)
               (**(code **)(this->_padding_ + 0x20))(this,local_68,param_1,(longlong)(int)uVar11);
      local_58.Prefix = *puVar9;
      uVar7 = 0;
      if ((int)uVar11 < (this->Values).ArrayNum) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_58.Value = *(float *)((this->Values).AllocatorInstance.Data + uVar14);
      if (((local_90.Data <= &local_58) &&
          (&local_58 < (FData *)(local_90.Data + (longlong)local_88._4_4_ * 0x10))) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar8 = (int)local_88;
      if ((int)local_88 == local_88._4_4_) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_90,(int *)((longlong)&local_88 + 4));
      }
      iVar13 = iVar8 + 1;
      uVar10 = (ulonglong)(uVar11 + 1);
      local_88 = CONCAT44(local_88._4_4_,iVar13);
      *(ulong64 *)&local_90.Data[(longlong)iVar8 * 0x10].field_0x0 = local_58.Prefix;
      *(ulonglong *)(local_90.Data + (longlong)iVar8 * 0x10 + 8) =
           CONCAT44(local_58._12_4_,local_58.Value);
      uVar14 = uVar14 + 4;
    } while ((int)(uVar11 + 1) < (this->Values).ArrayNum);
  }
  FVar5.Data = local_90.Data;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70[0] = 0;
  local_70[1] = 0;
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar13,&local_78,local_70,local_70 + 1);
  RadixSort64<1,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<float>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<float>::SortByPrefix_::__l2::<lambda_1>_>
            ((FData *)FVar5.Data,(FData *)local_78.Data,iVar13,local_80);
  if ((FData *)local_78.Data != (FData *)0x0) {
    FMemory::Free(local_78.Data);
  }
  piVar1 = &(this->Values).ArrayMax;
  (this->Values).ArrayNum = 0;
  if ((this->Values).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Values).AllocatorInstance,0,piVar1);
  }
  iVar13 = (int)local_88;
  uVar10 = (ulonglong)(int)local_88;
  pFVar15 = local_90.Data + uVar10 * 0x10;
  pFVar12 = local_90.Data + 8;
  while( true ) {
    if ((int)uVar10 != iVar13) {
      local_98[0] = 0;
      `TCheckedPointerIterator<`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<float>::SortByPrefix'::__l2::FData,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_98);
    }
    if (pFVar12 + -8 == pFVar15) break;
    pFVar3 = (this->Values).AllocatorInstance.Data;
    if (((pFVar3 <= pFVar12) && (pFVar12 < pFVar3 + (longlong)*piVar1 * 4)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = (this->Values).ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->Values).AllocatorInstance,piVar1);
    }
    (this->Values).ArrayNum = iVar8 + 1;
    uVar2 = *(undefined4 *)pFVar12;
    pFVar12 = pFVar12 + 0x10;
    *(undefined4 *)((this->Values).AllocatorInstance.Data + (longlong)iVar8 * 4) = uVar2;
    uVar10 = local_88 & 0xffffffff;
  }
  if ((FData *)local_90.Data != (FData *)0x0) {
    FMemory::Free(local_90.Data);
  }
  return;
}

// SortByPrefix @ 142cfc560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<double>::SortByPrefix
          (FSingleValueTestSorter<double> *this,ICoreProvider *param_1,uint param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulong64 *puVar9;
  ulonglong uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  undefined1 auStackY_e8 [32];
  undefined1 local_98 [8];
  ForAnyElementType local_90;
  undefined8 local_88;
  <lambda_1> local_80 [8];
  ForAnyElementType local_78;
  int local_70 [2];
  undefined1 local_68 [16];
  FData local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  uVar10 = 0;
  uVar7 = (this->Values).ArrayNum;
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = 0;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
  }
  iVar13 = 0;
  if (0 < (int)uVar7) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar7,&local_90,0,(int *)((longlong)&local_88 + 4));
    iVar13 = (int)local_88;
  }
  uVar14 = uVar10;
  if (0 < (this->Values).ArrayNum) {
    do {
      uVar11 = (uint)uVar10;
      puVar9 = (ulong64 *)
               (**(code **)(this->_padding_ + 0x20))(this,local_68,param_1,(longlong)(int)uVar11);
      local_58.Prefix = *puVar9;
      uVar7 = 0;
      if ((int)uVar11 < (this->Values).ArrayNum) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_58.Value = *(double *)((this->Values).AllocatorInstance.Data + uVar14);
      if (((local_90.Data <= &local_58) &&
          (&local_58 < (FData *)(local_90.Data + (longlong)local_88._4_4_ * 0x10))) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar8 = (int)local_88;
      if ((int)local_88 == local_88._4_4_) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_90,(int *)((longlong)&local_88 + 4));
      }
      iVar13 = iVar8 + 1;
      uVar10 = (ulonglong)(uVar11 + 1);
      local_88 = CONCAT44(local_88._4_4_,iVar13);
      *(ulong64 *)&local_90.Data[(longlong)iVar8 * 0x10].field_0x0 = local_58.Prefix;
      *(double *)(local_90.Data + (longlong)iVar8 * 0x10 + 8) = local_58.Value;
      uVar14 = uVar14 + 8;
    } while ((int)(uVar11 + 1) < (this->Values).ArrayNum);
  }
  FVar5.Data = local_90.Data;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70[0] = 0;
  local_70[1] = 0;
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar13,&local_78,local_70,local_70 + 1);
  RadixSort64<1,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<double>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<double>::SortByPrefix_::__l2::<lambda_1>_>
            ((FData *)FVar5.Data,(FData *)local_78.Data,iVar13,local_80);
  if ((FData *)local_78.Data != (FData *)0x0) {
    FMemory::Free(local_78.Data);
  }
  piVar1 = &(this->Values).ArrayMax;
  (this->Values).ArrayNum = 0;
  if ((this->Values).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Values).AllocatorInstance,0,piVar1);
  }
  iVar13 = (int)local_88;
  uVar10 = (ulonglong)(int)local_88;
  pFVar15 = local_90.Data + uVar10 * 0x10;
  pFVar12 = local_90.Data + 8;
  while( true ) {
    if ((int)uVar10 != iVar13) {
      local_98[0] = 0;
      `TCheckedPointerIterator<`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<double>::SortByPrefix'::__l2::FData,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_98);
    }
    if (pFVar12 + -8 == pFVar15) break;
    pFVar2 = (this->Values).AllocatorInstance.Data;
    if (((pFVar2 <= pFVar12) && (pFVar12 < pFVar2 + (longlong)*piVar1 * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = (this->Values).ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->Values).AllocatorInstance,piVar1);
    }
    (this->Values).ArrayNum = iVar8 + 1;
    uVar3 = *(undefined8 *)pFVar12;
    pFVar12 = pFVar12 + 0x10;
    *(undefined8 *)((this->Values).AllocatorInstance.Data + (longlong)iVar8 * 8) = uVar3;
    uVar10 = local_88 & 0xffffffff;
  }
  if ((FData *)local_90.Data != (FData *)0x0) {
    FMemory::Free(local_90.Data);
  }
  return;
}

// SortByPrefix @ 142cfc8c0

/* WARNING: Removing unreachable block (ram,0x000142cfcacf) */

void __thiscall
UE::Editor::DataStorage::Tests::
FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>_>
::SortByPrefix(FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>_>
               *this,ICoreProvider *param_1,uint param_2)

{
  TArray<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  TSortNameView<UE::Editor::DataStorage::TSortByName<0>_> *pTVar5;
  code *pcVar6;
  ForAnyElementType FVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  ulong64 *puVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined1 local_res8 [8];
  <lambda_1> local_res20 [8];
  ForAnyElementType local_98;
  undefined8 local_90;
  ForAnyElementType local_88;
  int local_80 [2];
  undefined1 local_78 [16];
  FData local_68;
  
  uVar10 = (this->Values).ArrayNum;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  iVar18 = 0;
  if (0 < (int)uVar10) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,uVar10,&local_98,0,(int *)((longlong)&local_90 + 4));
    iVar18 = (int)local_90;
  }
  uVar17 = 0;
  pTVar1 = &this->Values;
  uVar19 = uVar17;
  uVar20 = uVar17;
  FVar7.Data = local_68.Value.Cache.Data.AllocatorInstance.Data;
  uVar8 = local_68.Value.Cache.Data._8_8_;
  if (0 < (this->Values).ArrayNum) {
    do {
      local_68.Value.Cache.Data._8_8_ = uVar8;
      local_68.Value.Cache.Data.AllocatorInstance.Data = FVar7.Data;
      puVar12 = (ulong64 *)
                (**(code **)(this->_padding_ + 0x20))(this,local_78,param_1,uVar19,param_2);
      local_68.Prefix = *puVar12;
      uVar16 = (uint)uVar17;
      uVar10 = 0;
      if ((int)uVar16 < (this->Values).ArrayNum) {
        uVar10 = ~uVar16 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar14 = (pTVar1->AllocatorInstance).Data + uVar20;
      local_68.Value.View = *(FName **)pFVar14;
                    /* WARNING: Load size is inaccurate */
      local_68.Value.Cache.Data.AllocatorInstance.Data = pFVar14[8];
      *(undefined8 *)(pFVar14 + 8) = 0;
      local_68.Value.Cache.Data._8_8_ = *(undefined8 *)(pFVar14 + 0x10);
      *(undefined8 *)(pFVar14 + 0x10) = 0;
      local_68.Value.bIsCached = *(bool *)(pFVar14 + 0x18);
      if (((local_98.Data <= &local_68) &&
          (&local_68 < (FData *)(local_98.Data + (longlong)local_90._4_4_ * 0x28))) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar11 = (int)local_90;
      if ((int)local_90 == local_90._4_4_) {
        iVar11 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x828,&local_98,(int *)((longlong)&local_90 + 4));
      }
      iVar18 = iVar11 + 1;
      local_90 = CONCAT44(local_90._4_4_,iVar18);
      lVar13 = (longlong)iVar11;
      *(ulong64 *)&local_98.Data[lVar13 * 0x28].field_0x0 = local_68.Prefix;
      *(FName **)(local_98.Data + lVar13 * 0x28 + 8) = local_68.Value.View;
      *(undefined8 *)(local_98.Data + lVar13 * 0x28 + 0x10) = 0;
      *(FScriptContainerElement **)(local_98.Data + lVar13 * 0x28 + 0x10) =
           local_68.Value.Cache.Data.AllocatorInstance.Data;
      local_68.Value.Cache.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar7.Data = local_68.Value.Cache.Data.AllocatorInstance.Data;
      *(int *)(local_98.Data + lVar13 * 0x28 + 0x18) = local_68.Value.Cache.Data.ArrayNum;
      *(int *)(local_98.Data + lVar13 * 0x28 + 0x1c) = local_68.Value.Cache.Data.ArrayMax;
      local_68.Value.Cache.Data.ArrayNum = 0;
      local_68.Value.Cache.Data.ArrayMax = 0;
      uVar8 = local_68.Value.Cache.Data._8_8_;
      local_98.Data[lVar13 * 0x28 + 0x20] = (FScriptContainerElement)local_68.Value.bIsCached;
      local_68.Value.Cache.Data.ArrayNum = 0;
      local_68.Value.Cache.Data.ArrayMax = 0;
      local_68.Value.Cache.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar17 = (ulonglong)(uVar16 + 1);
      uVar19 = uVar19 + 1;
      uVar20 = uVar20 + 0x20;
    } while ((int)(uVar16 + 1) < (this->Values).ArrayNum);
  }
  FVar7.Data = local_98.Data;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80[0] = 0;
  local_80[1] = 0;
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x28,8,iVar18,&local_88,local_80,local_80 + 1);
  RadixSort64<1,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>_>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>_>::SortByPrefix_::__l2::<lambda_1>_>
            ((FData *)FVar7.Data,(FData *)local_88.Data,iVar18,local_res20);
  DestructItems<_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>_>::SortByPrefix_::__l2::FData,int>
            ((FData *)local_88.Data,local_80[0]);
  if ((FData *)local_88.Data != (FData *)0x0) {
    FMemory::Free(local_88.Data);
  }
  piVar2 = &(this->Values).ArrayMax;
  pTVar5 = (TSortNameView<UE::Editor::DataStorage::TSortByName<0>_> *)
           (pTVar1->AllocatorInstance).Data;
  iVar18 = (this->Values).ArrayNum;
  if ((this->Values).ArrayMax < 0) {
    DestructItems<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>,int>
              (pTVar5,iVar18);
    (this->Values).ArrayNum = 0;
    if (*piVar2 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&pTVar1->AllocatorInstance,0,piVar2);
    }
  }
  else {
    DestructItems<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>,int>
              (pTVar5,iVar18);
    (this->Values).ArrayNum = 0;
  }
  iVar18 = (int)local_90;
  pFVar14 = local_98.Data + 0x18;
  pFVar4 = local_98.Data + (longlong)(int)local_90 * 0x28;
  while( true ) {
    if ((int)local_90 != iVar18) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>_>::SortByPrefix'::__l2::FData,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar14 + -0x18 == pFVar4) break;
    pFVar15 = (pTVar1->AllocatorInstance).Data;
    pFVar3 = pFVar14 + -0x10;
    if (((pFVar15 <= pFVar3) && (pFVar3 < pFVar15 + (longlong)*piVar2 * 0x20)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar11 = (this->Values).ArrayNum;
    if (iVar11 == *piVar2) {
      iVar11 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&pTVar1->AllocatorInstance,piVar2);
      (this->Values).ArrayNum = iVar11;
    }
    (this->Values).ArrayNum = iVar11 + 1;
    pFVar15 = (pTVar1->AllocatorInstance).Data + (longlong)iVar11 * 0x20;
    *(undefined8 *)pFVar15 = *(undefined8 *)pFVar3;
    *(undefined8 *)(pFVar15 + 8) = 0;
    *(FScriptContainerElement **)(pFVar15 + 8) =
         (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(pFVar14 + -8))->AllocatorInstance).Data;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(pFVar14 + -8))->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    *(int *)(pFVar15 + 0x10) = *(int *)pFVar14;
    *(int *)(pFVar15 + 0x14) = *(int *)(pFVar14 + 4);
    *(undefined8 *)pFVar14 = 0;
    pFVar3 = pFVar14 + 8;
    pFVar14 = pFVar14 + 0x28;
    pFVar15[0x18] = *pFVar3;
  }
  DestructItems<_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>_>::SortByPrefix_::__l2::FData,int>
            ((FData *)local_98.Data,(int)local_90);
  if ((FData *)local_98.Data != (FData *)0x0) {
    FMemory::Free(local_98.Data);
  }
  return;
}

// SortByPrefix @ 142cfccf0

void __thiscall
UE::Editor::DataStorage::Tests::
FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::FSortById>_>
::SortByPrefix(FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::FSortById>_>
               *this,ICoreProvider *param_1,uint param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  ulong64 *puVar11;
  ulonglong uVar12;
  TArray<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::FSortById>,TSizedDefaultAllocator<32>_>
  *pTVar13;
  int iVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  ulonglong uVar17;
  undefined1 local_res8 [8];
  <lambda_1> local_res20 [8];
  ForAnyElementType local_88;
  undefined8 local_80;
  ForAnyElementType local_78;
  int local_70 [2];
  undefined1 local_68 [16];
  FData local_58;
  
  uVar12 = 0;
  uVar9 = (this->Values).ArrayNum;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  iVar14 = 0;
  if (0 < (int)uVar9) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar9,&local_88,0,(int *)((longlong)&local_80 + 4));
    iVar14 = (int)local_80;
  }
  uVar17 = uVar12;
  if (0 < (this->Values).ArrayNum) {
    do {
      uVar15 = (uint)uVar12;
      puVar11 = (ulong64 *)
                (**(code **)(this->_padding_ + 0x20))
                          (this,local_68,param_1,(longlong)(int)uVar15,param_2);
      local_58.Prefix = *puVar11;
      uVar9 = 0;
      if ((int)uVar15 < (this->Values).ArrayNum) {
        uVar9 = ~uVar15 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar16 = (this->Values).AllocatorInstance.Data + uVar17;
      local_58.Value.View = *(FName **)pFVar16;
      local_58.Value._8_8_ = *(undefined8 *)(pFVar16 + 8);
      if (((local_88.Data <= &local_58) &&
          (&local_58 < (FData *)(local_88.Data + (longlong)local_80._4_4_ * 0x18))) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar10 = (int)local_80;
      if ((int)local_80 == local_80._4_4_) {
        iVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&local_88,(int *)((longlong)&local_80 + 4));
      }
      iVar14 = iVar10 + 1;
      uVar12 = (ulonglong)(uVar15 + 1);
      local_80 = CONCAT44(local_80._4_4_,iVar14);
      *(ulong64 *)&local_88.Data[(longlong)iVar10 * 0x18].field_0x0 = local_58.Prefix;
      *(FName **)(local_88.Data + (longlong)iVar10 * 0x18 + 8) = local_58.Value.View;
      *(undefined8 *)(local_88.Data + (longlong)iVar10 * 0x18 + 0x10) = local_58.Value._8_8_;
      uVar17 = uVar17 + 0x10;
    } while ((int)(uVar15 + 1) < (this->Values).ArrayNum);
  }
  FVar7.Data = local_88.Data;
  local_78.Data = (FScriptContainerElement *)0x0;
  pTVar13 = &this->Values;
  local_70[0] = 0;
  local_70[1] = 0;
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,iVar14,&local_78,local_70,local_70 + 1);
  RadixSort64<1,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::FSortById>_>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::FSortById>_>::SortByPrefix_::__l2::<lambda_1>_>
            ((FData *)FVar7.Data,(FData *)local_78.Data,iVar14,local_res20);
  if ((FData *)local_78.Data != (FData *)0x0) {
    FMemory::Free(local_78.Data);
  }
  piVar1 = &(this->Values).ArrayMax;
  (this->Values).ArrayNum = 0;
  if ((this->Values).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar13->AllocatorInstance,0,piVar1);
  }
  iVar14 = (int)local_80;
  uVar12 = (ulonglong)(int)local_80;
  pFVar2 = local_88.Data + uVar12 * 0x18;
  pFVar16 = local_88.Data + 8;
  while( true ) {
    if ((int)uVar12 != iVar14) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::FSortById>_>::SortByPrefix'::__l2::FData,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar16 + -8 == pFVar2) break;
    pFVar3 = (pTVar13->AllocatorInstance).Data;
    if (((pFVar3 <= pFVar16) && (pFVar16 < pFVar3 + (longlong)*piVar1 * 0x10)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar10 = (this->Values).ArrayNum;
    if (iVar10 == *piVar1) {
      iVar10 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar13->AllocatorInstance,piVar1);
      (this->Values).ArrayNum = iVar10;
    }
    (this->Values).ArrayNum = iVar10 + 1;
    uVar5 = *(undefined8 *)pFVar16;
    uVar6 = *(undefined8 *)(pFVar16 + 8);
    pFVar16 = pFVar16 + 0x18;
    pFVar3 = (pTVar13->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
    *(undefined8 *)pFVar3 = uVar5;
    *(undefined8 *)(pFVar3 + 8) = uVar6;
    uVar12 = local_80 & 0xffffffff;
  }
  if ((FData *)local_88.Data != (FData *)0x0) {
    FMemory::Free(local_88.Data);
  }
  return;
}

// SortByPrefix @ 142cfd050

void __thiscall
UE::Editor::DataStorage::Tests::
FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<char>_>_>
::SortByPrefix(FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<char>_>_>
               *this,ICoreProvider *param_1,uint param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  ulong64 *puVar11;
  ulonglong uVar12;
  TArray<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<char>_>,TSizedDefaultAllocator<32>_>
  *pTVar13;
  int iVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  ulonglong uVar17;
  undefined1 local_res8 [8];
  <lambda_1> local_res20 [8];
  ForAnyElementType local_88;
  undefined8 local_80;
  ForAnyElementType local_78;
  int local_70 [2];
  undefined1 local_68 [16];
  FData local_58;
  
  uVar12 = 0;
  uVar9 = (this->Values).ArrayNum;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  iVar14 = 0;
  if (0 < (int)uVar9) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar9,&local_88,0,(int *)((longlong)&local_80 + 4));
    iVar14 = (int)local_80;
  }
  uVar17 = uVar12;
  if (0 < (this->Values).ArrayNum) {
    do {
      uVar15 = (uint)uVar12;
      puVar11 = (ulong64 *)
                (**(code **)(this->_padding_ + 0x20))
                          (this,local_68,param_1,(longlong)(int)uVar15,param_2);
      local_58.Prefix = *puVar11;
      uVar9 = 0;
      if ((int)uVar15 < (this->Values).ArrayNum) {
        uVar9 = ~uVar15 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar16 = (this->Values).AllocatorInstance.Data + uVar17;
      local_58.Value.View.DataPtr = *(char **)pFVar16;
      local_58.Value.View._8_8_ = *(undefined8 *)(pFVar16 + 8);
      if (((local_88.Data <= &local_58) &&
          (&local_58 < (FData *)(local_88.Data + (longlong)local_80._4_4_ * 0x18))) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar10 = (int)local_80;
      if ((int)local_80 == local_80._4_4_) {
        iVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&local_88,(int *)((longlong)&local_80 + 4));
      }
      iVar14 = iVar10 + 1;
      uVar12 = (ulonglong)(uVar15 + 1);
      local_80 = CONCAT44(local_80._4_4_,iVar14);
      *(ulong64 *)&local_88.Data[(longlong)iVar10 * 0x18].field_0x0 = local_58.Prefix;
      *(char **)(local_88.Data + (longlong)iVar10 * 0x18 + 8) = local_58.Value.View.DataPtr;
      *(undefined8 *)(local_88.Data + (longlong)iVar10 * 0x18 + 0x10) = local_58.Value.View._8_8_;
      uVar17 = uVar17 + 0x10;
    } while ((int)(uVar15 + 1) < (this->Values).ArrayNum);
  }
  FVar7.Data = local_88.Data;
  local_78.Data = (FScriptContainerElement *)0x0;
  pTVar13 = &this->Values;
  local_70[0] = 0;
  local_70[1] = 0;
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,iVar14,&local_78,local_70,local_70 + 1);
  RadixSort64<1,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<char>_>_>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<char>_>_>::SortByPrefix_::__l2::<lambda_1>_>
            ((FData *)FVar7.Data,(FData *)local_78.Data,iVar14,local_res20);
  if ((FData *)local_78.Data != (FData *)0x0) {
    FMemory::Free(local_78.Data);
  }
  piVar1 = &(this->Values).ArrayMax;
  (this->Values).ArrayNum = 0;
  if ((this->Values).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar13->AllocatorInstance,0,piVar1);
  }
  iVar14 = (int)local_80;
  uVar12 = (ulonglong)(int)local_80;
  pFVar2 = local_88.Data + uVar12 * 0x18;
  pFVar16 = local_88.Data + 8;
  while( true ) {
    if ((int)uVar12 != iVar14) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<char>_>_>::SortByPrefix'::__l2::FData,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar16 + -8 == pFVar2) break;
    pFVar3 = (pTVar13->AllocatorInstance).Data;
    if (((pFVar3 <= pFVar16) && (pFVar16 < pFVar3 + (longlong)*piVar1 * 0x10)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar10 = (this->Values).ArrayNum;
    if (iVar10 == *piVar1) {
      iVar10 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar13->AllocatorInstance,piVar1);
      (this->Values).ArrayNum = iVar10;
    }
    (this->Values).ArrayNum = iVar10 + 1;
    uVar5 = *(undefined8 *)pFVar16;
    uVar6 = *(undefined8 *)(pFVar16 + 8);
    pFVar16 = pFVar16 + 0x18;
    pFVar3 = (pTVar13->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
    *(undefined8 *)pFVar3 = uVar5;
    *(undefined8 *)(pFVar3 + 8) = uVar6;
    uVar12 = local_80 & 0xffffffff;
  }
  if ((FData *)local_88.Data != (FData *)0x0) {
    FMemory::Free(local_88.Data);
  }
  return;
}

// SortByPrefix @ 142cfd3b0

void __thiscall
UE::Editor::DataStorage::Tests::
FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
::SortByPrefix(FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
               *this,ICoreProvider *param_1,uint param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  ulong64 *puVar11;
  ulonglong uVar12;
  TArray<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>,TSizedDefaultAllocator<32>_>
  *pTVar13;
  int iVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  ulonglong uVar17;
  undefined1 local_res8 [8];
  <lambda_1> local_res20 [8];
  ForAnyElementType local_88;
  undefined8 local_80;
  ForAnyElementType local_78;
  int local_70 [2];
  undefined1 local_68 [16];
  FData local_58;
  
  uVar12 = 0;
  uVar9 = (this->Values).ArrayNum;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  iVar14 = 0;
  if (0 < (int)uVar9) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar9,&local_88,0,(int *)((longlong)&local_80 + 4));
    iVar14 = (int)local_80;
  }
  uVar17 = uVar12;
  if (0 < (this->Values).ArrayNum) {
    do {
      uVar15 = (uint)uVar12;
      puVar11 = (ulong64 *)
                (**(code **)(this->_padding_ + 0x20))
                          (this,local_68,param_1,(longlong)(int)uVar15,param_2);
      local_58.Prefix = *puVar11;
      uVar9 = 0;
      if ((int)uVar15 < (this->Values).ArrayNum) {
        uVar9 = ~uVar15 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar16 = (this->Values).AllocatorInstance.Data + uVar17;
      local_58.Value.View.DataPtr = *(wchar_t **)pFVar16;
      local_58.Value.View._8_8_ = *(undefined8 *)(pFVar16 + 8);
      if (((local_88.Data <= &local_58) &&
          (&local_58 < (FData *)(local_88.Data + (longlong)local_80._4_4_ * 0x18))) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar10 = (int)local_80;
      if ((int)local_80 == local_80._4_4_) {
        iVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&local_88,(int *)((longlong)&local_80 + 4));
      }
      iVar14 = iVar10 + 1;
      uVar12 = (ulonglong)(uVar15 + 1);
      local_80 = CONCAT44(local_80._4_4_,iVar14);
      *(ulong64 *)&local_88.Data[(longlong)iVar10 * 0x18].field_0x0 = local_58.Prefix;
      *(wchar_t **)(local_88.Data + (longlong)iVar10 * 0x18 + 8) = local_58.Value.View.DataPtr;
      *(undefined8 *)(local_88.Data + (longlong)iVar10 * 0x18 + 0x10) = local_58.Value.View._8_8_;
      uVar17 = uVar17 + 0x10;
    } while ((int)(uVar15 + 1) < (this->Values).ArrayNum);
  }
  FVar7.Data = local_88.Data;
  local_78.Data = (FScriptContainerElement *)0x0;
  pTVar13 = &this->Values;
  local_70[0] = 0;
  local_70[1] = 0;
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,iVar14,&local_78,local_70,local_70 + 1);
  RadixSort64<1,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>::SortByPrefix_::__l2::<lambda_1>_>
            ((FData *)FVar7.Data,(FData *)local_78.Data,iVar14,local_res20);
  if ((FData *)local_78.Data != (FData *)0x0) {
    FMemory::Free(local_78.Data);
  }
  piVar1 = &(this->Values).ArrayMax;
  (this->Values).ArrayNum = 0;
  if ((this->Values).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar13->AllocatorInstance,0,piVar1);
  }
  iVar14 = (int)local_80;
  uVar12 = (ulonglong)(int)local_80;
  pFVar2 = local_88.Data + uVar12 * 0x18;
  pFVar16 = local_88.Data + 8;
  while( true ) {
    if ((int)uVar12 != iVar14) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>::SortByPrefix'::__l2::FData,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar16 + -8 == pFVar2) break;
    pFVar3 = (pTVar13->AllocatorInstance).Data;
    if (((pFVar3 <= pFVar16) && (pFVar16 < pFVar3 + (longlong)*piVar1 * 0x10)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar10 = (this->Values).ArrayNum;
    if (iVar10 == *piVar1) {
      iVar10 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar13->AllocatorInstance,piVar1);
      (this->Values).ArrayNum = iVar10;
    }
    (this->Values).ArrayNum = iVar10 + 1;
    uVar5 = *(undefined8 *)pFVar16;
    uVar6 = *(undefined8 *)(pFVar16 + 8);
    pFVar16 = pFVar16 + 0x18;
    pFVar3 = (pTVar13->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
    *(undefined8 *)pFVar3 = uVar5;
    *(undefined8 *)(pFVar3 + 8) = uVar6;
    uVar12 = local_80 & 0xffffffff;
  }
  if ((FData *)local_88.Data != (FData *)0x0) {
    FMemory::Free(local_88.Data);
  }
  return;
}

// SortByPrefix @ 142cfd710

void __thiscall
UE::Editor::DataStorage::Tests::
FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<char>_>_>
::SortByPrefix(FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<char>_>_>
               *this,ICoreProvider *param_1,uint param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  ulong64 *puVar11;
  ulonglong uVar12;
  TArray<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<char>_>,TSizedDefaultAllocator<32>_>
  *pTVar13;
  int iVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  ulonglong uVar17;
  undefined1 local_res8 [8];
  <lambda_1> local_res20 [8];
  ForAnyElementType local_88;
  undefined8 local_80;
  ForAnyElementType local_78;
  int local_70 [2];
  undefined1 local_68 [16];
  FData local_58;
  
  uVar12 = 0;
  uVar9 = (this->Values).ArrayNum;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  iVar14 = 0;
  if (0 < (int)uVar9) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar9,&local_88,0,(int *)((longlong)&local_80 + 4));
    iVar14 = (int)local_80;
  }
  uVar17 = uVar12;
  if (0 < (this->Values).ArrayNum) {
    do {
      uVar15 = (uint)uVar12;
      puVar11 = (ulong64 *)
                (**(code **)(this->_padding_ + 0x20))
                          (this,local_68,param_1,(longlong)(int)uVar15,param_2);
      local_58.Prefix = *puVar11;
      uVar9 = 0;
      if ((int)uVar15 < (this->Values).ArrayNum) {
        uVar9 = ~uVar15 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar16 = (this->Values).AllocatorInstance.Data + uVar17;
      local_58.Value.View.DataPtr = *(char **)pFVar16;
      local_58.Value.View._8_8_ = *(undefined8 *)(pFVar16 + 8);
      if (((local_88.Data <= &local_58) &&
          (&local_58 < (FData *)(local_88.Data + (longlong)local_80._4_4_ * 0x18))) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar10 = (int)local_80;
      if ((int)local_80 == local_80._4_4_) {
        iVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&local_88,(int *)((longlong)&local_80 + 4));
      }
      iVar14 = iVar10 + 1;
      uVar12 = (ulonglong)(uVar15 + 1);
      local_80 = CONCAT44(local_80._4_4_,iVar14);
      *(ulong64 *)&local_88.Data[(longlong)iVar10 * 0x18].field_0x0 = local_58.Prefix;
      *(char **)(local_88.Data + (longlong)iVar10 * 0x18 + 8) = local_58.Value.View.DataPtr;
      *(undefined8 *)(local_88.Data + (longlong)iVar10 * 0x18 + 0x10) = local_58.Value.View._8_8_;
      uVar17 = uVar17 + 0x10;
    } while ((int)(uVar15 + 1) < (this->Values).ArrayNum);
  }
  FVar7.Data = local_88.Data;
  local_78.Data = (FScriptContainerElement *)0x0;
  pTVar13 = &this->Values;
  local_70[0] = 0;
  local_70[1] = 0;
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,iVar14,&local_78,local_70,local_70 + 1);
  RadixSort64<1,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<char>_>_>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<char>_>_>::SortByPrefix_::__l2::<lambda_1>_>
            ((FData *)FVar7.Data,(FData *)local_78.Data,iVar14,local_res20);
  if ((FData *)local_78.Data != (FData *)0x0) {
    FMemory::Free(local_78.Data);
  }
  piVar1 = &(this->Values).ArrayMax;
  (this->Values).ArrayNum = 0;
  if ((this->Values).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar13->AllocatorInstance,0,piVar1);
  }
  iVar14 = (int)local_80;
  uVar12 = (ulonglong)(int)local_80;
  pFVar2 = local_88.Data + uVar12 * 0x18;
  pFVar16 = local_88.Data + 8;
  while( true ) {
    if ((int)uVar12 != iVar14) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<char>_>_>::SortByPrefix'::__l2::FData,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar16 + -8 == pFVar2) break;
    pFVar3 = (pTVar13->AllocatorInstance).Data;
    if (((pFVar3 <= pFVar16) && (pFVar16 < pFVar3 + (longlong)*piVar1 * 0x10)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar10 = (this->Values).ArrayNum;
    if (iVar10 == *piVar1) {
      iVar10 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar13->AllocatorInstance,piVar1);
      (this->Values).ArrayNum = iVar10;
    }
    (this->Values).ArrayNum = iVar10 + 1;
    uVar5 = *(undefined8 *)pFVar16;
    uVar6 = *(undefined8 *)(pFVar16 + 8);
    pFVar16 = pFVar16 + 0x18;
    pFVar3 = (pTVar13->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
    *(undefined8 *)pFVar3 = uVar5;
    *(undefined8 *)(pFVar3 + 8) = uVar6;
    uVar12 = local_80 & 0xffffffff;
  }
  if ((FData *)local_88.Data != (FData *)0x0) {
    FMemory::Free(local_88.Data);
  }
  return;
}

// SortByPrefix @ 142cfda70

void __thiscall
UE::Editor::DataStorage::Tests::
FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
::SortByPrefix(FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
               *this,ICoreProvider *param_1,uint param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  ulong64 *puVar11;
  ulonglong uVar12;
  TArray<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>,TSizedDefaultAllocator<32>_>
  *pTVar13;
  int iVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  ulonglong uVar17;
  undefined1 local_res8 [8];
  <lambda_1> local_res20 [8];
  ForAnyElementType local_88;
  undefined8 local_80;
  ForAnyElementType local_78;
  int local_70 [2];
  undefined1 local_68 [16];
  FData local_58;
  
  uVar12 = 0;
  uVar9 = (this->Values).ArrayNum;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  iVar14 = 0;
  if (0 < (int)uVar9) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar9,&local_88,0,(int *)((longlong)&local_80 + 4));
    iVar14 = (int)local_80;
  }
  uVar17 = uVar12;
  if (0 < (this->Values).ArrayNum) {
    do {
      uVar15 = (uint)uVar12;
      puVar11 = (ulong64 *)
                (**(code **)(this->_padding_ + 0x20))
                          (this,local_68,param_1,(longlong)(int)uVar15,param_2);
      local_58.Prefix = *puVar11;
      uVar9 = 0;
      if ((int)uVar15 < (this->Values).ArrayNum) {
        uVar9 = ~uVar15 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar16 = (this->Values).AllocatorInstance.Data + uVar17;
      local_58.Value.View.DataPtr = *(wchar_t **)pFVar16;
      local_58.Value.View._8_8_ = *(undefined8 *)(pFVar16 + 8);
      if (((local_88.Data <= &local_58) &&
          (&local_58 < (FData *)(local_88.Data + (longlong)local_80._4_4_ * 0x18))) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar10 = (int)local_80;
      if ((int)local_80 == local_80._4_4_) {
        iVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&local_88,(int *)((longlong)&local_80 + 4));
      }
      iVar14 = iVar10 + 1;
      uVar12 = (ulonglong)(uVar15 + 1);
      local_80 = CONCAT44(local_80._4_4_,iVar14);
      *(ulong64 *)&local_88.Data[(longlong)iVar10 * 0x18].field_0x0 = local_58.Prefix;
      *(wchar_t **)(local_88.Data + (longlong)iVar10 * 0x18 + 8) = local_58.Value.View.DataPtr;
      *(undefined8 *)(local_88.Data + (longlong)iVar10 * 0x18 + 0x10) = local_58.Value.View._8_8_;
      uVar17 = uVar17 + 0x10;
    } while ((int)(uVar15 + 1) < (this->Values).ArrayNum);
  }
  FVar7.Data = local_88.Data;
  local_78.Data = (FScriptContainerElement *)0x0;
  pTVar13 = &this->Values;
  local_70[0] = 0;
  local_70[1] = 0;
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,iVar14,&local_78,local_70,local_70 + 1);
  RadixSort64<1,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>::SortByPrefix_::__l2::<lambda_1>_>
            ((FData *)FVar7.Data,(FData *)local_78.Data,iVar14,local_res20);
  if ((FData *)local_78.Data != (FData *)0x0) {
    FMemory::Free(local_78.Data);
  }
  piVar1 = &(this->Values).ArrayMax;
  (this->Values).ArrayNum = 0;
  if ((this->Values).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar13->AllocatorInstance,0,piVar1);
  }
  iVar14 = (int)local_80;
  uVar12 = (ulonglong)(int)local_80;
  pFVar2 = local_88.Data + uVar12 * 0x18;
  pFVar16 = local_88.Data + 8;
  while( true ) {
    if ((int)uVar12 != iVar14) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>::SortByPrefix'::__l2::FData,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar16 + -8 == pFVar2) break;
    pFVar3 = (pTVar13->AllocatorInstance).Data;
    if (((pFVar3 <= pFVar16) && (pFVar16 < pFVar3 + (longlong)*piVar1 * 0x10)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar10 = (this->Values).ArrayNum;
    if (iVar10 == *piVar1) {
      iVar10 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar13->AllocatorInstance,piVar1);
      (this->Values).ArrayNum = iVar10;
    }
    (this->Values).ArrayNum = iVar10 + 1;
    uVar5 = *(undefined8 *)pFVar16;
    uVar6 = *(undefined8 *)(pFVar16 + 8);
    pFVar16 = pFVar16 + 0x18;
    pFVar3 = (pTVar13->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
    *(undefined8 *)pFVar3 = uVar5;
    *(undefined8 *)(pFVar3 + 8) = uVar6;
    uVar12 = local_80 & 0xffffffff;
  }
  if ((FData *)local_88.Data != (FData *)0x0) {
    FMemory::Free(local_88.Data);
  }
  return;
}

// SortByPrefix @ 142cfddd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<__int64>::SortByPrefix
          (FSingleValueTestSorter<__int64> *this,ICoreProvider *param_1,uint param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulong64 *puVar9;
  ulonglong uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  undefined1 auStackY_e8 [32];
  undefined1 local_98 [8];
  ForAnyElementType local_90;
  undefined8 local_88;
  <lambda_1> local_80 [8];
  ForAnyElementType local_78;
  int local_70 [2];
  undefined1 local_68 [16];
  FData local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  uVar10 = 0;
  uVar7 = (this->Values).ArrayNum;
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = 0;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
  }
  iVar13 = 0;
  if (0 < (int)uVar7) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar7,&local_90,0,(int *)((longlong)&local_88 + 4));
    iVar13 = (int)local_88;
  }
  uVar14 = uVar10;
  if (0 < (this->Values).ArrayNum) {
    do {
      uVar11 = (uint)uVar10;
      puVar9 = (ulong64 *)
               (**(code **)(this->_padding_ + 0x20))(this,local_68,param_1,(longlong)(int)uVar11);
      local_58.Prefix = *puVar9;
      uVar7 = 0;
      if ((int)uVar11 < (this->Values).ArrayNum) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_58.Value = *(long64 *)((this->Values).AllocatorInstance.Data + uVar14);
      if (((local_90.Data <= &local_58) &&
          (&local_58 < (FData *)(local_90.Data + (longlong)local_88._4_4_ * 0x10))) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar8 = (int)local_88;
      if ((int)local_88 == local_88._4_4_) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_90,(int *)((longlong)&local_88 + 4));
      }
      iVar13 = iVar8 + 1;
      uVar10 = (ulonglong)(uVar11 + 1);
      local_88 = CONCAT44(local_88._4_4_,iVar13);
      *(ulong64 *)&local_90.Data[(longlong)iVar8 * 0x10].field_0x0 = local_58.Prefix;
      *(long64 *)(local_90.Data + (longlong)iVar8 * 0x10 + 8) = local_58.Value;
      uVar14 = uVar14 + 8;
    } while ((int)(uVar11 + 1) < (this->Values).ArrayNum);
  }
  FVar5.Data = local_90.Data;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70[0] = 0;
  local_70[1] = 0;
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar13,&local_78,local_70,local_70 + 1);
  RadixSort64<1,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<__int64>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<__int64>::SortByPrefix_::__l2::<lambda_1>_>
            ((FData *)FVar5.Data,(FData *)local_78.Data,iVar13,local_80);
  if ((FData *)local_78.Data != (FData *)0x0) {
    FMemory::Free(local_78.Data);
  }
  piVar1 = &(this->Values).ArrayMax;
  (this->Values).ArrayNum = 0;
  if ((this->Values).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Values).AllocatorInstance,0,piVar1);
  }
  iVar13 = (int)local_88;
  uVar10 = (ulonglong)(int)local_88;
  pFVar15 = local_90.Data + uVar10 * 0x10;
  pFVar12 = local_90.Data + 8;
  while( true ) {
    if ((int)uVar10 != iVar13) {
      local_98[0] = 0;
      `TCheckedPointerIterator<`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<__int64>::SortByPrefix'::__l2::FData,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_98);
    }
    if (pFVar12 + -8 == pFVar15) break;
    pFVar2 = (this->Values).AllocatorInstance.Data;
    if (((pFVar2 <= pFVar12) && (pFVar12 < pFVar2 + (longlong)*piVar1 * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = (this->Values).ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->Values).AllocatorInstance,piVar1);
    }
    (this->Values).ArrayNum = iVar8 + 1;
    uVar3 = *(undefined8 *)pFVar12;
    pFVar12 = pFVar12 + 0x10;
    *(undefined8 *)((this->Values).AllocatorInstance.Data + (longlong)iVar8 * 8) = uVar3;
    uVar10 = local_88 & 0xffffffff;
  }
  if ((FData *)local_90.Data != (FData *)0x0) {
    FMemory::Free(local_90.Data);
  }
  return;
}

// SortByPrefix @ 142cfe130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned___int64>::SortByPrefix
          (FSingleValueTestSorter<unsigned___int64> *this,ICoreProvider *param_1,uint param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulong64 *puVar9;
  ulonglong uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  undefined1 auStackY_e8 [32];
  undefined1 local_98 [8];
  ForAnyElementType local_90;
  undefined8 local_88;
  <lambda_1> local_80 [8];
  ForAnyElementType local_78;
  int local_70 [2];
  undefined1 local_68 [16];
  FData local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  uVar10 = 0;
  uVar7 = (this->Values).ArrayNum;
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = 0;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
  }
  iVar13 = 0;
  if (0 < (int)uVar7) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar7,&local_90,0,(int *)((longlong)&local_88 + 4));
    iVar13 = (int)local_88;
  }
  uVar14 = uVar10;
  if (0 < (this->Values).ArrayNum) {
    do {
      uVar11 = (uint)uVar10;
      puVar9 = (ulong64 *)
               (**(code **)(this->_padding_ + 0x20))(this,local_68,param_1,(longlong)(int)uVar11);
      local_58.Prefix = *puVar9;
      uVar7 = 0;
      if ((int)uVar11 < (this->Values).ArrayNum) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_58.Value = *(ulong64 *)((this->Values).AllocatorInstance.Data + uVar14);
      if (((local_90.Data <= &local_58) &&
          (&local_58 < (FData *)(local_90.Data + (longlong)local_88._4_4_ * 0x10))) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar8 = (int)local_88;
      if ((int)local_88 == local_88._4_4_) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_90,(int *)((longlong)&local_88 + 4));
      }
      iVar13 = iVar8 + 1;
      uVar10 = (ulonglong)(uVar11 + 1);
      local_88 = CONCAT44(local_88._4_4_,iVar13);
      *(ulong64 *)&local_90.Data[(longlong)iVar8 * 0x10].field_0x0 = local_58.Prefix;
      *(ulong64 *)(local_90.Data + (longlong)iVar8 * 0x10 + 8) = local_58.Value;
      uVar14 = uVar14 + 8;
    } while ((int)(uVar11 + 1) < (this->Values).ArrayNum);
  }
  FVar5.Data = local_90.Data;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70[0] = 0;
  local_70[1] = 0;
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar13,&local_78,local_70,local_70 + 1);
  RadixSort64<1,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned___int64>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned___int64>::SortByPrefix_::__l2::<lambda_1>_>
            ((FData *)FVar5.Data,(FData *)local_78.Data,iVar13,local_80);
  if ((FData *)local_78.Data != (FData *)0x0) {
    FMemory::Free(local_78.Data);
  }
  piVar1 = &(this->Values).ArrayMax;
  (this->Values).ArrayNum = 0;
  if ((this->Values).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Values).AllocatorInstance,0,piVar1);
  }
  iVar13 = (int)local_88;
  uVar10 = (ulonglong)(int)local_88;
  pFVar15 = local_90.Data + uVar10 * 0x10;
  pFVar12 = local_90.Data + 8;
  while( true ) {
    if ((int)uVar10 != iVar13) {
      local_98[0] = 0;
      `TCheckedPointerIterator<`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned___int64>::SortByPrefix'::__l2::FData,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_98);
    }
    if (pFVar12 + -8 == pFVar15) break;
    pFVar2 = (this->Values).AllocatorInstance.Data;
    if (((pFVar2 <= pFVar12) && (pFVar12 < pFVar2 + (longlong)*piVar1 * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = (this->Values).ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->Values).AllocatorInstance,piVar1);
    }
    (this->Values).ArrayNum = iVar8 + 1;
    uVar3 = *(undefined8 *)pFVar12;
    pFVar12 = pFVar12 + 0x10;
    *(undefined8 *)((this->Values).AllocatorInstance.Data + (longlong)iVar8 * 8) = uVar3;
    uVar10 = local_88 & 0xffffffff;
  }
  if ((FData *)local_90.Data != (FData *)0x0) {
    FMemory::Free(local_90.Data);
  }
  return;
}

// SortByPrefix @ 142cfe490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<bool>::SortByPrefix
          (FSingleValueTestSorter<bool> *this,ICoreProvider *param_1,uint param_2)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulong64 *puVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  undefined1 auStackY_e8 [32];
  undefined1 local_98 [8];
  ForAnyElementType local_90;
  undefined8 local_88;
  <lambda_1> local_80 [8];
  ForAnyElementType local_78;
  int local_70 [2];
  undefined1 local_68 [16];
  FData local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  uVar10 = 0;
  uVar7 = (this->Values).ArrayNum;
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = 0;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
  }
  iVar12 = 0;
  if (0 < (int)uVar7) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar7,&local_90,0,(int *)((longlong)&local_88 + 4));
    iVar12 = (int)local_88;
  }
  uVar14 = uVar10;
  if (0 < (this->Values).ArrayNum) {
    do {
      puVar9 = (ulong64 *)(**(code **)(this->_padding_ + 0x20))(this,local_68,param_1,uVar10);
      local_58.Prefix = *puVar9;
      uVar13 = (uint)uVar14;
      uVar7 = 0;
      if ((int)uVar13 < (this->Values).ArrayNum) {
        uVar7 = ~uVar13 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_58.Value = *(bool *)((this->Values).AllocatorInstance.Data + uVar10);
      if (((local_90.Data <= &local_58) &&
          (&local_58 < (FData *)(local_90.Data + (longlong)local_88._4_4_ * 0x10))) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar8 = (int)local_88;
      if ((int)local_88 == local_88._4_4_) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_90,(int *)((longlong)&local_88 + 4));
      }
      iVar12 = iVar8 + 1;
      uVar10 = uVar10 + 1;
      local_88 = CONCAT44(local_88._4_4_,iVar12);
      *(ulong64 *)&local_90.Data[(longlong)iVar8 * 0x10].field_0x0 = local_58.Prefix;
      *(ulonglong *)(local_90.Data + (longlong)iVar8 * 0x10 + 8) =
           CONCAT71(local_58._9_7_,local_58.Value);
      uVar14 = (ulonglong)(uVar13 + 1);
    } while ((int)(uVar13 + 1) < (this->Values).ArrayNum);
  }
  FVar5.Data = local_90.Data;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70[0] = 0;
  local_70[1] = 0;
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar12,&local_78,local_70,local_70 + 1);
  RadixSort64<1,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<bool>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<bool>::SortByPrefix_::__l2::<lambda_1>_>
            ((FData *)FVar5.Data,(FData *)local_78.Data,iVar12,local_80);
  if ((FData *)local_78.Data != (FData *)0x0) {
    FMemory::Free(local_78.Data);
  }
  piVar1 = &(this->Values).ArrayMax;
  (this->Values).ArrayNum = 0;
  if ((this->Values).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->Values).AllocatorInstance,0,piVar1);
  }
  iVar12 = (int)local_88;
  uVar10 = (ulonglong)(int)local_88;
  pFVar15 = local_90.Data + uVar10 * 0x10;
  pFVar11 = local_90.Data + 8;
  while( true ) {
    if ((int)uVar10 != iVar12) {
      local_98[0] = 0;
      `TCheckedPointerIterator<`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<bool>::SortByPrefix'::__l2::FData,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_98);
    }
    if (pFVar11 + -8 == pFVar15) break;
    pFVar3 = (this->Values).AllocatorInstance.Data;
    if (((pFVar3 <= pFVar11) && (pFVar11 < pFVar3 + *piVar1)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = (this->Values).ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&(this->Values).AllocatorInstance,piVar1);
    }
    (this->Values).ArrayNum = iVar8 + 1;
    FVar2 = *pFVar11;
    pFVar11 = pFVar11 + 0x10;
    (this->Values).AllocatorInstance.Data[iVar8] = FVar2;
    uVar10 = local_88 & 0xffffffff;
  }
  if ((FData *)local_90.Data != (FData *)0x0) {
    FMemory::Free(local_90.Data);
  }
  return;
}

