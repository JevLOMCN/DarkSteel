// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// ~IBreakIterator @ 1416d9830

void __thiscall IBreakIterator::~IBreakIterator(IBreakIterator *this)

{
  return;
}

// ClearString @ 1416e33c0

void __thiscall IBreakIterator::ClearString(IBreakIterator *this)

{
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  (**(code **)((longlong)*this + 0x28))(0,&local_18);
  return;
}

// SetString @ 141711b70

void __thiscall IBreakIterator::SetString(IBreakIterator *this,FString *param_1)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  longlong lVar2;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  local_10 = (param_1->Data).ArrayNum;
  lVar2 = (longlong)local_10;
  _Src = (param_1->Data).AllocatorInstance.Data;
  pcVar1 = *(code **)((longlong)*this + 8);
  local_18.Data = (FScriptContainerElement *)0x0;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_10,0,&local_18,local_10,&local_c);
    memcpy(local_18.Data,_Src,lVar2 * 2);
  }
  (*pcVar1)(this,&local_18);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// SetString @ 141711c20

void __thiscall IBreakIterator::SetString(IBreakIterator *this,FText *param_1)

{
  code *pcVar1;
  FScriptContainerElement *_Src;
  FString *pFVar2;
  longlong lVar3;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  pcVar1 = *(code **)((longlong)*this + 8);
  pFVar2 = FText::ToString(param_1);
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = (pFVar2->Data).ArrayNum;
  lVar3 = (longlong)local_10;
  _Src = (pFVar2->Data).AllocatorInstance.Data;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_10,0,&local_18,local_10,&local_c);
    memcpy(local_18.Data,_Src,lVar3 * 2);
  }
  (*pcVar1)(this,&local_18);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// SetString @ 141711ce0

void __thiscall IBreakIterator::SetString(IBreakIterator *this,wchar_t *param_1,int param_2)

{
  code *pcVar1;
  FString *pFVar2;
  FString local_18;
  
  pcVar1 = *(code **)((longlong)*this + 8);
  if ((param_1 == (wchar_t *)0x0) || (*param_1 == L'\0')) {
    param_2 = 0;
  }
  pFVar2 = ::FString::ConstructFromPtrSize(&local_18,param_1,param_2);
  (*pcVar1)(this,pFVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetStringRef @ 141711fc0

void __thiscall IBreakIterator::SetStringRef(IBreakIterator *this,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *local_18;
  int iStack_10;
  
  local_18 = (param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  iStack_10 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_10 = 0;
  }
  (**(code **)((longlong)*this + 0x28))(local_18._0_4_,&local_18);
  return;
}

// SetStringRef @ 141712000

void __thiscall IBreakIterator::SetStringRef(IBreakIterator *this,FText *param_1)

{
  int iVar1;
  code *pcVar2;
  FString *pFVar3;
  FScriptContainerElement *local_18;
  int iStack_10;
  
  pcVar2 = *(code **)((longlong)*this + 0x28);
  pFVar3 = FText::ToString(param_1);
  local_18 = (pFVar3->Data).AllocatorInstance.Data;
  iVar1 = (pFVar3->Data).ArrayNum;
  iStack_10 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_10 = 0;
  }
  (*pcVar2)(this,&local_18);
  return;
}

// SetStringRef @ 141712060

void __thiscall IBreakIterator::SetStringRef(IBreakIterator *this,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  
  if (param_1 == (FString *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InString",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Internationalization\\IBreakIterator.h"
                       ,0x29,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  iStack_10 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_10 = 0;
  }
  local_28 = SUB84(pFVar2,0);
  uStack_24 = (undefined4)((ulonglong)pFVar2 >> 0x20);
  local_18 = local_28;
  uStack_14 = uStack_24;
  (**(code **)((longlong)*this + 0x28))(this,&local_18);
  return;
}

// SetStringRef @ 1417120e0

void __thiscall IBreakIterator::SetStringRef(IBreakIterator *this,wchar_t *param_1,int param_2)

{
  undefined4 uVar1;
  wchar_t *local_18;
  int iStack_10;
  
  local_18._0_4_ = SUB84(param_1,0);
  uVar1 = local_18._0_4_;
  local_18 = param_1;
  iStack_10 = param_2;
  (**(code **)((longlong)*this + 0x28))(uVar1,&local_18);
  return;
}

