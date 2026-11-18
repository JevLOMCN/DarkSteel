// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 1

// GetStructValue<FPoseHistoryReference> @ 14a8a5d00

bool __thiscall
FChooserPropertyBinding::GetStructValue<FPoseHistoryReference>
          (FChooserPropertyBinding *this,FChooserEvaluationContext *param_1,
          FPoseHistoryReference *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  IPoseHistory *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  FResolvedPropertyChainResult local_38;
  
  local_38.Container = (uchar *)0x0;
  local_38.PropertyOffset = 0;
  local_38.PropertyType = None;
  local_38.Mask = '\0';
  local_38.Function = (UFunction *)0x0;
  local_38.StructType = (UStruct *)0x0;
  bVar4 = UE::Chooser::ResolvePropertyChain(param_1,this,&local_38);
  if (!bVar4) {
    return false;
  }
  if (local_38.Function != (UFunction *)0x0) {
    (**(code **)(*(longlong *)local_38.Container + 0x260))
              (local_38.Container,local_38.Function,param_2);
    return true;
  }
  pTVar1 = *(TReferenceControllerBase<1> **)
            ((ulonglong)local_38.PropertyOffset + 8 + (longlong)local_38.Container);
  pIVar2 = *(IPoseHistory **)((ulonglong)local_38.PropertyOffset + (longlong)local_38.Container);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (param_2->PoseHistory).SharedReferenceCount.ReferenceController;
  (param_2->PoseHistory).Object = pIVar2;
  (param_2->PoseHistory).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return true;
}

