// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// GetMutablePtr<FDS_Int32StringFormatArg> @ 14b7d4ca0

/* WARNING: Removing unreachable block (ram,0x00014b7d4cfa) */

FDS_Int32StringFormatArg * __thiscall
FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(FInstancedStruct *this)

{
  int iVar1;
  FDS_Int32StringFormatArg *pFVar2;
  UScriptStruct *pUVar3;
  UScriptStruct *pUVar4;
  
  pFVar2 = (FDS_Int32StringFormatArg *)this->StructMemory;
  if (((pFVar2 != (FDS_Int32StringFormatArg *)0x0) &&
      (pUVar3 = (this->ScriptStruct).field0_0x0.DebugPtr, pUVar3 != (UScriptStruct *)0x0)) &&
     (pUVar4 = FDS_Int32StringFormatArg::StaticStruct(), pUVar4 != (UScriptStruct *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= (int)pUVar3->_padding_) &&
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) == &pUVar4->_padding_)
       ) {
      return pFVar2;
    }
    return (FDS_Int32StringFormatArg *)0x0;
  }
  return (FDS_Int32StringFormatArg *)0x0;
}

// InitializeAs<FDS_Int32StringFormatArg> @ 14b7d4d20

FDS_Int32StringFormatArg * __thiscall
FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(FInstancedStruct *this)

{
  code *pcVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  FDS_Int32StringFormatArg *pFVar4;
  uint uVar5;
  uint uVar6;
  
  pUVar3 = FDS_Int32StringFormatArg::StaticStruct();
  if (pUVar3 == (this->ScriptStruct).field0_0x0.DebugPtr) {
    pFVar4 = (FDS_Int32StringFormatArg *)this->StructMemory;
  }
  else {
    Reset(this);
    uVar6 = (uint)*(short *)((longlong)&pUVar3->_padding_ + 4);
    uVar5 = (int)pUVar3->_padding_ + -1 + uVar6 & -uVar6;
    if ((int)uVar5 < 1) {
      uVar5 = 1;
    }
    pFVar4 = FMemory::Malloc((longlong)(int)uVar5,uVar6);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->ScriptStruct).field0_0x0.DebugPtr = pUVar3;
    this->StructMemory = (uchar *)pFVar4;
  }
  if (pFVar4 == (FDS_Int32StringFormatArg *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FDS_Int32StringFormatArg *)(*pcVar1)();
      return pFVar4;
    }
  }
  pFVar4->Value = 0;
  return pFVar4;
}

// GetMutablePtr<FDS_StringFormatArg> @ 14bbe9a60

/* WARNING: Removing unreachable block (ram,0x00014bbe9aba) */

FDS_StringFormatArg * __thiscall
FInstancedStruct::GetMutablePtr<FDS_StringFormatArg>(FInstancedStruct *this)

{
  int iVar1;
  FDS_StringFormatArg *pFVar2;
  UScriptStruct *pUVar3;
  UScriptStruct *pUVar4;
  
  pFVar2 = (FDS_StringFormatArg *)this->StructMemory;
  if (((pFVar2 != (FDS_StringFormatArg *)0x0) &&
      (pUVar3 = (this->ScriptStruct).field0_0x0.DebugPtr, pUVar3 != (UScriptStruct *)0x0)) &&
     (pUVar4 = FDS_StringFormatArg::StaticStruct(), pUVar4 != (UScriptStruct *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= (int)pUVar3->_padding_) &&
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) == &pUVar4->_padding_)
       ) {
      return pFVar2;
    }
    return (FDS_StringFormatArg *)0x0;
  }
  return (FDS_StringFormatArg *)0x0;
}

// InitializeAs<FDS_StringFormatArg> @ 14bbe9ae0

FDS_StringFormatArg * __thiscall
FInstancedStruct::InitializeAs<FDS_StringFormatArg>(FInstancedStruct *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  FDS_StringFormatArg *pFVar5;
  uint uVar6;
  uint uVar7;
  
  pUVar4 = FDS_StringFormatArg::StaticStruct();
  if (pUVar4 == (this->ScriptStruct).field0_0x0.DebugPtr) {
    pFVar5 = (FDS_StringFormatArg *)this->StructMemory;
    pFVar1 = (pFVar5->Value).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  }
  else {
    Reset(this);
    uVar7 = (uint)*(short *)((longlong)&pUVar4->_padding_ + 4);
    uVar6 = (int)pUVar4->_padding_ + -1 + uVar7 & -uVar7;
    if ((int)uVar6 < 1) {
      uVar6 = 1;
    }
    pFVar5 = FMemory::Malloc((longlong)(int)uVar6,uVar7);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->ScriptStruct).field0_0x0.DebugPtr = pUVar4;
    this->StructMemory = (uchar *)pFVar5;
  }
  if (pFVar5 == (FDS_StringFormatArg *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FDS_StringFormatArg *)(*pcVar2)();
      return pFVar5;
    }
  }
  (pFVar5->Value).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar5->Value).Data.ArrayNum = 0;
  (pFVar5->Value).Data.ArrayMax = 0;
  return pFVar5;
}

// GetMutablePtr<FDS_Int64StringFormatArg> @ 14bda0970

/* WARNING: Removing unreachable block (ram,0x00014bda09ca) */

FDS_Int64StringFormatArg * __thiscall
FInstancedStruct::GetMutablePtr<FDS_Int64StringFormatArg>(FInstancedStruct *this)

{
  int iVar1;
  FDS_Int64StringFormatArg *pFVar2;
  UScriptStruct *pUVar3;
  UScriptStruct *pUVar4;
  
  pFVar2 = (FDS_Int64StringFormatArg *)this->StructMemory;
  if (((pFVar2 != (FDS_Int64StringFormatArg *)0x0) &&
      (pUVar3 = (this->ScriptStruct).field0_0x0.DebugPtr, pUVar3 != (UScriptStruct *)0x0)) &&
     (pUVar4 = FDS_Int64StringFormatArg::StaticStruct(), pUVar4 != (UScriptStruct *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= (int)pUVar3->_padding_) &&
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) == &pUVar4->_padding_)
       ) {
      return pFVar2;
    }
    return (FDS_Int64StringFormatArg *)0x0;
  }
  return (FDS_Int64StringFormatArg *)0x0;
}

// GetMutablePtr<FDS_StringBaseIDFormatArg> @ 14bda09f0

/* WARNING: Removing unreachable block (ram,0x00014bda0a4a) */

FDS_StringBaseIDFormatArg * __thiscall
FInstancedStruct::GetMutablePtr<FDS_StringBaseIDFormatArg>(FInstancedStruct *this)

{
  int iVar1;
  FDS_StringBaseIDFormatArg *pFVar2;
  UScriptStruct *pUVar3;
  UScriptStruct *pUVar4;
  
  pFVar2 = (FDS_StringBaseIDFormatArg *)this->StructMemory;
  if (((pFVar2 != (FDS_StringBaseIDFormatArg *)0x0) &&
      (pUVar3 = (this->ScriptStruct).field0_0x0.DebugPtr, pUVar3 != (UScriptStruct *)0x0)) &&
     (pUVar4 = FDS_StringBaseIDFormatArg::StaticStruct(), pUVar4 != (UScriptStruct *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= (int)pUVar3->_padding_) &&
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) == &pUVar4->_padding_)
       ) {
      return pFVar2;
    }
    return (FDS_StringBaseIDFormatArg *)0x0;
  }
  return (FDS_StringBaseIDFormatArg *)0x0;
}

// InitializeAs<FDS_Int64StringFormatArg> @ 14bda0e30

FDS_Int64StringFormatArg * __thiscall
FInstancedStruct::InitializeAs<FDS_Int64StringFormatArg>(FInstancedStruct *this)

{
  code *pcVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  FDS_Int64StringFormatArg *pFVar4;
  uint uVar5;
  uint uVar6;
  
  pUVar3 = FDS_Int64StringFormatArg::StaticStruct();
  if (pUVar3 == (this->ScriptStruct).field0_0x0.DebugPtr) {
    pFVar4 = (FDS_Int64StringFormatArg *)this->StructMemory;
  }
  else {
    Reset(this);
    uVar6 = (uint)*(short *)((longlong)&pUVar3->_padding_ + 4);
    uVar5 = (int)pUVar3->_padding_ + -1 + uVar6 & -uVar6;
    if ((int)uVar5 < 1) {
      uVar5 = 1;
    }
    pFVar4 = FMemory::Malloc((longlong)(int)uVar5,uVar6);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->ScriptStruct).field0_0x0.DebugPtr = pUVar3;
    this->StructMemory = (uchar *)pFVar4;
  }
  if (pFVar4 == (FDS_Int64StringFormatArg *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FDS_Int64StringFormatArg *)(*pcVar1)();
      return pFVar4;
    }
  }
  pFVar4->Value = 0;
  return pFVar4;
}

// InitializeAs<FDS_StringBaseIDFormatArg> @ 14bda0ef0

FDS_StringBaseIDFormatArg * __thiscall
FInstancedStruct::InitializeAs<FDS_StringBaseIDFormatArg>(FInstancedStruct *this)

{
  code *pcVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  FDS_StringBaseIDFormatArg *pFVar4;
  uint uVar5;
  uint uVar6;
  
  pUVar3 = FDS_StringBaseIDFormatArg::StaticStruct();
  if (pUVar3 == (this->ScriptStruct).field0_0x0.DebugPtr) {
    pFVar4 = (FDS_StringBaseIDFormatArg *)this->StructMemory;
  }
  else {
    Reset(this);
    uVar6 = (uint)*(short *)((longlong)&pUVar3->_padding_ + 4);
    uVar5 = (int)pUVar3->_padding_ + -1 + uVar6 & -uVar6;
    if ((int)uVar5 < 1) {
      uVar5 = 1;
    }
    pFVar4 = FMemory::Malloc((longlong)(int)uVar5,uVar6);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->ScriptStruct).field0_0x0.DebugPtr = pUVar3;
    this->StructMemory = (uchar *)pFVar4;
  }
  if (pFVar4 == (FDS_StringBaseIDFormatArg *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FDS_StringBaseIDFormatArg *)(*pcVar1)();
      return pFVar4;
    }
  }
  (pFVar4->Value)._padding_ = (longlong)&___7FDS_StringBaseID__6B_;
  (pFVar4->Value).ID = 0;
  return pFVar4;
}

// GetMutablePtr<FDS_StringWorldIDFormatArg> @ 14be051b0

/* WARNING: Removing unreachable block (ram,0x00014be0520a) */

FDS_StringWorldIDFormatArg * __thiscall
FInstancedStruct::GetMutablePtr<FDS_StringWorldIDFormatArg>(FInstancedStruct *this)

{
  int iVar1;
  FDS_StringWorldIDFormatArg *pFVar2;
  UScriptStruct *pUVar3;
  UScriptStruct *pUVar4;
  
  pFVar2 = (FDS_StringWorldIDFormatArg *)this->StructMemory;
  if (((pFVar2 != (FDS_StringWorldIDFormatArg *)0x0) &&
      (pUVar3 = (this->ScriptStruct).field0_0x0.DebugPtr, pUVar3 != (UScriptStruct *)0x0)) &&
     (pUVar4 = FDS_StringWorldIDFormatArg::StaticStruct(), pUVar4 != (UScriptStruct *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= (int)pUVar3->_padding_) &&
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) == &pUVar4->_padding_)
       ) {
      return pFVar2;
    }
    return (FDS_StringWorldIDFormatArg *)0x0;
  }
  return (FDS_StringWorldIDFormatArg *)0x0;
}

// InitializeAs<FDS_StringWorldIDFormatArg> @ 14be05880

FDS_StringWorldIDFormatArg * __thiscall
FInstancedStruct::InitializeAs<FDS_StringWorldIDFormatArg>(FInstancedStruct *this)

{
  code *pcVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  FDS_StringWorldIDFormatArg *pFVar4;
  uint uVar5;
  uint uVar6;
  
  pUVar3 = FDS_StringWorldIDFormatArg::StaticStruct();
  if (pUVar3 == (this->ScriptStruct).field0_0x0.DebugPtr) {
    pFVar4 = (FDS_StringWorldIDFormatArg *)this->StructMemory;
  }
  else {
    Reset(this);
    uVar6 = (uint)*(short *)((longlong)&pUVar3->_padding_ + 4);
    uVar5 = (int)pUVar3->_padding_ + -1 + uVar6 & -uVar6;
    if ((int)uVar5 < 1) {
      uVar5 = 1;
    }
    pFVar4 = FMemory::Malloc((longlong)(int)uVar5,uVar6);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->ScriptStruct).field0_0x0.DebugPtr = pUVar3;
    this->StructMemory = (uchar *)pFVar4;
  }
  if (pFVar4 == (FDS_StringWorldIDFormatArg *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FDS_StringWorldIDFormatArg *)(*pcVar1)();
      return pFVar4;
    }
  }
  (pFVar4->Value)._padding_ = (longlong)&___7FDS_StringWorldID__6B_;
  (pFVar4->Value).ID = 0;
  return pFVar4;
}

