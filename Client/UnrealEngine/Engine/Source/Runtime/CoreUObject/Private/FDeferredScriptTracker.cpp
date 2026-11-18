// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// FDeferredScriptTracker @ 1421fdf50

FDeferredScriptTracker * __thiscall
FDeferredScriptTracker::FDeferredScriptTracker(FDeferredScriptTracker *this)

{
  DWORD DVar1;
  
  this->_padding_ = (longlong)&___7__TThreadSingleton_UFDeferredScriptTracker____6B_;
  DVar1 = GetCurrentThreadId();
  *(DWORD *)&this->_padding_ = DVar1;
  this->_padding_ = (longlong)&___7FDeferredScriptTracker__6B_;
  *(undefined8 *)&this->DeferredScriptLoads = 0;
  *(undefined8 *)&(this->DeferredScriptLoads).field_0x8 = 0;
  *(undefined8 *)&(this->DeferredScriptLoads).field_0x20 = 0;
  *(undefined4 *)&(this->DeferredScriptLoads).field_0x28 = 0;
  *(undefined4 *)&(this->DeferredScriptLoads).field_0x2c = 0x80;
  *(undefined4 *)&(this->DeferredScriptLoads).field_0x34 = 0;
  *(undefined4 *)&(this->DeferredScriptLoads).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DeferredScriptLoads).field_0x40 = 0;
  *(undefined4 *)&(this->DeferredScriptLoads).field_0x48 = 0;
  return this;
}

// AddDeferredScriptObject @ 142203540

void __thiscall
FDeferredScriptTracker::AddDeferredScriptObject
          (FDeferredScriptTracker *this,FLinkerLoad *param_1,UStruct *param_2,
          FStructScriptLoader *param_3)

{
  TPairInitializer<FLinkerLoad_*_const_&,FDeferredScriptLoader_&&> local_res8;
  FDeferredScriptLoader **local_38;
  undefined8 *local_30;
  undefined8 local_28;
  long64 lStack_20;
  FWeakObjectPtr local_18 [2];
  
  local_28._0_4_ = param_3->BytecodeBufferSize;
  local_28._4_4_ = param_3->SerializedScriptSize;
  lStack_20 = param_3->ScriptSerializationOffset;
  local_res8.Value = (FDeferredScriptLoader *)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_2 != (UStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  local_18[0].ObjectIndex = 0;
  local_18[0].ObjectSerialNumber = 0;
  local_res8.Key = (FLinkerLoad **)param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(local_18,(FObjectPtr)&local_res8);
  local_38 = &local_res8.Value;
  local_30 = &local_28;
  TSet<TTuple<FLinkerLoad_*,FDeferredScriptLoader>,TDefaultMapHashableKeyFuncs<FLinkerLoad_*,FDeferredScriptLoader,1>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FLinkerLoad_*_const_&,FDeferredScriptLoader_&&>_>
            ((TSet<TTuple<FLinkerLoad_*,FDeferredScriptLoader>,TDefaultMapHashableKeyFuncs<FLinkerLoad_*,FDeferredScriptLoader,1>,FDefaultSetAllocator>
              *)&this->DeferredScriptLoads,&local_res8,(bool *)&local_38);
  return;
}

// ResolveDeferredScripts @ 14221b980

int __thiscall
FDeferredScriptTracker::ResolveDeferredScripts(FDeferredScriptTracker *this,FLinkerLoad *param_1)

{
  longlong *plVar1;
  FStructScriptLoader *pFVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 uVar7;
  UStruct *pUVar8;
  uint uVar9;
  ForAnyElementType this_00;
  int iVar10;
  ulonglong uVar11;
  FLinkerLoad *local_res10;
  TArray<FDeferredScriptLoader,TSizedDefaultAllocator<32>_> local_28;
  
  plVar1 = &param_1->_padding_;
  if (((((param_1->_padding_ & 1) != 0) && ((param_1->_padding_ & 0x100) != 0)) &&
      (lVar6 = (**(code **)(*plVar1 + 0x20))(plVar1), lVar6 != 0)) &&
     ((*(int *)(lVar6 + 0xb8) == 1 && ((*(uint *)(lVar6 + 0x350) >> 0x14 & 1) != 0)))) {
    return 0;
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  TMultiMap<FLinkerLoad_*,FDeferredScriptLoader,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLinkerLoad_*,FDeferredScriptLoader,1>_>
  ::MultiFind<TSizedDefaultAllocator<32>_>(&this->DeferredScriptLoads,param_1,&local_28,false);
  local_res10 = param_1;
  if (*(int *)&(this->DeferredScriptLoads).field_0x8 !=
      *(int *)&(this->DeferredScriptLoads).field_0x34) {
    uVar9 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
    TSet<TTuple<FLinkerLoad_*,FDeferredScriptLoader>,TDefaultMapHashableKeyFuncs<FLinkerLoad_*,FDeferredScriptLoader,1>,FDefaultSetAllocator>
    ::RemoveImpl<FLinkerLoad_const_*>
              ((TSet<TTuple<FLinkerLoad_*,FDeferredScriptLoader>,TDefaultMapHashableKeyFuncs<FLinkerLoad_*,FDeferredScriptLoader,1>,FDefaultSetAllocator>
                *)&this->DeferredScriptLoads,uVar9 >> 0x10 ^ uVar9,&local_res10);
  }
  uVar7 = (**(code **)(*plVar1 + 0x28))(plVar1);
  iVar3 = local_28.ArrayNum;
  uVar11 = (ulonglong)local_28.ArrayNum;
  pFVar2 = (FStructScriptLoader *)(local_28.AllocatorInstance.Data + uVar11 * 0x18);
  this_00.Data = local_28.AllocatorInstance.Data;
  iVar4 = 0;
  while( true ) {
    iVar10 = iVar4;
    if ((int)uVar11 != iVar3) {
      `TCheckedPointerIterator<FDeferredScriptLoader,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res10);
    }
    if ((FStructScriptLoader *)this_00.Data == pFVar2) break;
    pUVar8 = (UStruct *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this_00.Data + 0x10));
    if (pUVar8 == (UStruct *)0x0) {
      bVar5 = false;
    }
    else {
      bVar5 = FStructScriptLoader::LoadStructWithScript
                        ((FStructScriptLoader *)this_00.Data,pUVar8,(FArchive *)plVar1,true);
    }
    uVar11 = local_28._8_8_ & 0xffffffff;
    this_00.Data = (FScriptContainerElement *)
                   &((FStructScriptLoader *)((longlong)this_00.Data + 0x10))->
                    ScriptSerializationOffset;
    iVar4 = iVar10 + 1;
    if (bVar5 == false) {
      iVar4 = iVar10;
    }
  }
  (**(code **)(*plVar1 + 0x1b8))(plVar1,uVar7);
  if ((FStructScriptLoader *)local_28.AllocatorInstance.Data != (FStructScriptLoader *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return iVar10;
}

