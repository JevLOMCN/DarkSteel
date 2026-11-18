// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdvancedWidgets
// Functions: 2

// operator<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem>_TTuple<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem> @ 14d82a290

TTuple<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem> * __thiscall
TKeyInitializer<FFieldClass_const_*_const_&>::
operator<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem>_TTuple<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem>
          (TKeyInitializer<FFieldClass_const_*_const_&> *this,
          TTuple<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem>
          *__return_storage_ptr__)

{
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  ForAnyElementType local_28;
  ulonglong local_20;
  undefined8 local_18;
  
  local_20 = 0;
  local_18 = 0;
  local_30 = (undefined1  [8])0x0;
  local_28.Data = (FScriptContainerElement *)0x0;
  *(FFieldClass **)__return_storage_ptr__ = *this->Key;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&__return_storage_ptr__->field_0x8,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_30);
  *(undefined4 *)&__return_storage_ptr__->field_0x20 = (undefined4)local_18;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_30,
             (FWriteAccessScope *)&local_48);
  if (((int)local_20 != 0) && (local_28.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_28.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_28,0,0,0x10);
    local_20 = local_20 & 0xffffffff00000000;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_30);
  return __return_storage_ptr__;
}

// operator<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem>_TTuple<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem> @ 14d82a360

TTuple<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem> * __thiscall
TKeyInitializer<FTopLevelAssetPath_&&>::
operator<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem>_TTuple<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem>
          (TKeyInitializer<FTopLevelAssetPath_&&> *this,
          TTuple<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem>
          *__return_storage_ptr__)

{
  FTopLevelAssetPath *pFVar1;
  uint uVar2;
  FNameEntryId FVar3;
  uint uVar4;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  ForAnyElementType local_28;
  ulonglong local_20;
  undefined8 local_18;
  
  pFVar1 = this->Key;
  local_20 = 0;
  local_18 = 0;
  local_30 = (undefined1  [8])0x0;
  local_28.Data = (FScriptContainerElement *)0x0;
  uVar2 = (pFVar1->PackageName).Number;
  FVar3.Value = (pFVar1->AssetName).ComparisonIndex.Value;
  uVar4 = (pFVar1->AssetName).Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (pFVar1->PackageName).ComparisonIndex.Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar2;
  *(uint *)&__return_storage_ptr__->field_0x8 = FVar3.Value;
  *(uint *)&__return_storage_ptr__->field_0xc = uVar4;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&__return_storage_ptr__->field_0x10,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_30);
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = (undefined4)local_18;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_30,
             (FWriteAccessScope *)&local_48);
  if (((int)local_20 != 0) && (local_28.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_28.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_28,0,0,0x10);
    local_20 = local_20 & 0xffffffff00000000;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_30);
  return __return_storage_ptr__;
}

