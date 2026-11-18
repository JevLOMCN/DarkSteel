// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// FPCGPerExecutionCacheEntry @ 149ca3cc0

FPCGPerExecutionCacheEntry * __thiscall
FPCGPerExecutionCacheEntry::FPCGPerExecutionCacheEntry
          (FPCGPerExecutionCacheEntry *this,FPCGPerExecutionCacheEntry *param_1)

{
  UScriptStruct *pUVar1;
  uchar *puVar2;
  uchar **ppuVar3;
  longlong lVar4;
  
  ppuVar3 = &param_1->Data[0].InstancedStruct.StructMemory;
  lVar4 = 10;
  do {
    pUVar1 = (((FInstancedStruct *)(ppuVar3 + -1))->ScriptStruct).field0_0x0.DebugPtr;
    lVar4 = lVar4 + -1;
    puVar2 = *ppuVar3;
    *(UScriptStruct **)(((longlong)this - (longlong)param_1) + -8 + (longlong)ppuVar3) = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    *(uchar **)(((longlong)this - (longlong)param_1) + (longlong)ppuVar3) = puVar2;
    (((FInstancedStruct *)(ppuVar3 + -1))->ScriptStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
    *ppuVar3 = (uchar *)0x0;
    ppuVar3 = ppuVar3 + 2;
  } while (lVar4 != 0);
  return this;
}

// AddStructReferencedObjects @ 149cabe40

void __thiscall
FPCGPerExecutionCacheEntry::AddStructReferencedObjects
          (FPCGPerExecutionCacheEntry *this,FReferenceCollector *param_1)

{
  int iVar1;
  longlong *plVar2;
  UScriptStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  longlong lVar7;
  
  lVar7 = 10;
  do {
    plVar2 = (longlong *)this->Data[0].InstancedStruct.StructMemory;
    if ((plVar2 != (longlong *)0x0) &&
       (pUVar3 = (((FInstancedStruct *)&this->Data[0].InstancedStruct.ScriptStruct)->ScriptStruct).
                 field0_0x0.DebugPtr, pUVar3 != (UScriptStruct *)0x0)) {
      pUVar6 = FPCGPerExecutionCacheData::StaticStruct();
      if (pUVar6 == (UScriptStruct *)0x0) {
LAB_149cabea4:
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                           ,0xd3,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        iVar1 = (int)pUVar6->_padding_;
        if (((int)pUVar3->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (!bVar5) goto LAB_149cabea4;
      }
      (**(code **)(*plVar2 + 8))(plVar2,param_1);
    }
    this = (FPCGPerExecutionCacheEntry *)((longlong)this + 0x10);
    lVar7 = lVar7 + -1;
    if (lVar7 == 0) {
      return;
    }
  } while( true );
}

