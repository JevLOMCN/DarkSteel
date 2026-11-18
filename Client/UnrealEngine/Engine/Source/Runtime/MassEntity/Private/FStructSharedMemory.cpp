// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 1

// Create @ 147207120

TSharedPtr<FStructSharedMemory,1> * __cdecl
FStructSharedMemory::Create
          (TSharedPtr<FStructSharedMemory,1> *__return_storage_ptr__,UScriptStruct *param_1,
          uchar *param_2)

{
  UScriptStruct *pUVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<FStructSharedMemory,1> *pTVar4;
  FStructSharedMemory *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  uint uVar7;
  longlong lVar8;
  
  if (param_1 == (UScriptStruct *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InScriptStruct",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\SharedStruct.h"
                       ,0x41,L"FStructSharedMemory::Create - script struct cannot be null");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<FStructSharedMemory,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  uVar7 = (uint)*(short *)((longlong)&param_1->_padding_ + 4);
  pFVar5 = FMemory::Malloc((longlong)
                           (int)(((int)param_1->_padding_ + -1 + uVar7 & -uVar7) +
                                (uVar7 + 7 & -uVar7)),uVar7);
  (pFVar5->ScriptStruct).field0_0x0.DebugPtr = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pUVar1 = (pFVar5->ScriptStruct).field0_0x0.DebugPtr;
  lVar8 = (longlong)*(short *)((longlong)&pUVar1->_padding_ + 4);
  (**(code **)(pUVar1->_padding_ + 0x2f8))
            (pUVar1,(longlong)&(pFVar5->ScriptStruct).field0_0x0 + lVar8 + 7 & -lVar8,1);
  if (param_2 != (uchar *)0x0) {
    pUVar1 = (pFVar5->ScriptStruct).field0_0x0.DebugPtr;
    lVar8 = (longlong)*(short *)((longlong)&pUVar1->_padding_ + 4);
    UScriptStruct::CopyScriptStruct
              (pUVar1,(void *)((longlong)&(pFVar5->ScriptStruct).field0_0x0 + lVar8 + 7 & -lVar8),
               param_2,1);
  }
  if (pFVar5 == (FStructSharedMemory *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("StructMemory != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\SharedStruct.h"
                       ,0x44,
                       L"CreateImpl is expected to always return a valid pointer to FStructSharedMemory."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<FStructSharedMemory,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = pFVar5;
  pTVar6 = ::operator_new(0x18);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFStructSharedMemory__UFStructSharedMemoryDeleter_1__00_SharedPointerInternals__6B_
    ;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6[1]._padding_ = (longlong)pFVar5;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar6;
  }
  return __return_storage_ptr__;
}

