// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 1

// operator<TraceServices::FTimingProfilerCallstackKey,TTuple<TraceServices::FTimingProfilerButterflyNode_*,bool>_>_TTuple<TraceServices::FTimingProfilerCallstackKey,TTuple<TraceServices::FTimingProfilerButterflyNode_*,bool>_> @ 14d4074f0

TTuple<TraceServices::FTimingProfilerCallstackKey,TTuple<TraceServices::FTimingProfilerButterflyNode_*,bool>_>
* __thiscall
TPairInitializer<TraceServices::FTimingProfilerCallstackKey_const_&,TTuple<TraceServices::FTimingProfilerButterflyNode_*,bool>_&&>
::
operator<TraceServices::FTimingProfilerCallstackKey,TTuple<TraceServices::FTimingProfilerButterflyNode_*,bool>_>_TTuple<TraceServices::FTimingProfilerCallstackKey,TTuple<TraceServices::FTimingProfilerButterflyNode_*,bool>_>
          (TPairInitializer<TraceServices::FTimingProfilerCallstackKey_const_&,TTuple<TraceServices::FTimingProfilerButterflyNode_*,bool>_&&>
           *this,TTuple<TraceServices::FTimingProfilerCallstackKey,TTuple<TraceServices::FTimingProfilerButterflyNode_*,bool>_>
                 *__return_storage_ptr__)

{
  int iVar1;
  FTimingProfilerCallstackKey *pFVar2;
  TTuple<TraceServices::FTimingProfilerButterflyNode_*,bool> *pTVar3;
  FScriptContainerElement *_Src;
  undefined8 uVar4;
  
  pFVar2 = this->Key;
  pTVar3 = this->Value;
  *(undefined8 *)__return_storage_ptr__ = 0;
  iVar1 = (pFVar2->TimerStack).ArrayNum;
  _Src = (pFVar2->TimerStack).AllocatorInstance.Data;
  *(int *)&__return_storage_ptr__->field_0x8 = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0xc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar1,0,(ForAnyElementType *)__return_storage_ptr__,iVar1,
               (int *)&__return_storage_ptr__->field_0xc);
    memcpy(*(void **)__return_storage_ptr__,_Src,(longlong)iVar1 << 2);
  }
  *(uint *)&__return_storage_ptr__->field_0x10 = pFVar2->Hash;
  uVar4 = *(undefined8 *)&pTVar3->field_0x8;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = *(undefined8 *)pTVar3;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = uVar4;
  return __return_storage_ptr__;
}

