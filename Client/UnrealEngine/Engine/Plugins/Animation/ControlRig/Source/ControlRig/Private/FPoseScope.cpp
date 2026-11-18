// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// FPoseScope @ 14a21fa20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FPoseScope * __thiscall
UControlRig::FPoseScope::FPoseScope
          (FPoseScope *this,UControlRig *param_1,ERigElementType param_2,
          TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *param_3,Type param_4)

{
  FRigPose *pFVar1;
  TMap<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FPoseScope *pFVar6;
  FRigPose *pFVar7;
  undefined1 auStackY_f8 [32];
  TArrayView<FRigElementKey_const_,int> local_c8;
  undefined1 local_b8 [96];
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pFVar1 = &this->CachedPose;
  (this->CachedPose).HierarchyTopologyVersion = -1;
  (this->CachedPose).PoseHash = -1;
  *(undefined8 *)&(this->CachedPose).KeyToIndex = 0;
  pTVar2 = &(this->CachedPose).KeyToIndex;
  *(undefined8 *)&(this->CachedPose).KeyToIndex.field_0x8 = 0;
  *(undefined8 *)&(this->CachedPose).KeyToIndex.field_0x20 = 0;
  (pFVar1->Elements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedPose).Elements.ArrayNum = 0;
  (this->CachedPose).Elements.ArrayMax = 0;
  (this->CachedPose).CachedPoseHash = -1;
  this->ControlRig = param_1;
  this->Filter = param_2;
  *(undefined4 *)&(this->CachedPose).KeyToIndex.field_0x28 = 0;
  *(undefined4 *)&(this->CachedPose).KeyToIndex.field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedPose).KeyToIndex.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedPose).KeyToIndex.field_0x34 = 0;
  *(undefined8 *)&(this->CachedPose).KeyToIndex.field_0x40 = 0;
  *(undefined4 *)&(this->CachedPose).KeyToIndex.field_0x48 = 0;
  this->TransformType = param_4;
  if (param_1 == (UControlRig *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InControlRig",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ControlRig.cpp"
                       ,0xf1e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FPoseScope *)(*pcVar4)();
      return pFVar6;
    }
  }
  local_c8.DataPtr = (FRigElementKey *)(param_3->AllocatorInstance).Data;
  local_c8.ArrayNum = param_3->ArrayNum;
  if (local_c8.ArrayNum < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FPoseScope *)(*pcVar4)();
      return pFVar6;
    }
  }
  pFVar7 = URigHierarchy::GetPose
                     ((param_1->DynamicHierarchy).field0_0x0.DebugPtr,(FRigPose *)local_b8,
                      (param_4 & ~InitialGlobal) == InitialLocal,param_2,&local_c8,true);
  if (pFVar1 != pFVar7) {
    pFVar3 = (pFVar1->Elements).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Elements).AllocatorInstance.Data = (pFVar7->Elements).AllocatorInstance.Data;
    (pFVar7->Elements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->CachedPose).Elements.ArrayNum = (pFVar7->Elements).ArrayNum;
    (this->CachedPose).Elements.ArrayMax = (pFVar7->Elements).ArrayMax;
    (pFVar7->Elements).ArrayNum = 0;
    (pFVar7->Elements).ArrayMax = 0;
  }
  (this->CachedPose).HierarchyTopologyVersion = pFVar7->HierarchyTopologyVersion;
  (this->CachedPose).PoseHash = pFVar7->PoseHash;
  (this->CachedPose).CachedPoseHash = pFVar7->CachedPoseHash;
  if (pTVar2 != &pFVar7->KeyToIndex) {
    TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
                *)pTVar2,
               (TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
                *)&pFVar7->KeyToIndex);
  }
  local_50 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_b8 + 0x20));
  if ((FScriptContainerElement *)local_b8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_b8._0_8_);
  }
  return this;
}

// ~FPoseScope @ 14a225de0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UControlRig::FPoseScope::~FPoseScope(FPoseScope *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRigElementKeyCollection local_18;
  
  if (this->ControlRig == (UControlRig *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ControlRig",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ControlRig.cpp"
                       ,0xf25,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18.Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Keys.ArrayNum = 0;
  local_18.Keys.ArrayMax = 0;
  URigHierarchy::SetPose
            ((this->ControlRig->DynamicHierarchy).field0_0x0.DebugPtr,&this->CachedPose,
             this->TransformType,All,&local_18,__real_3f800000);
  if (local_18.Keys.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Keys.AllocatorInstance.Data);
  }
  *(undefined4 *)&(this->CachedPose).KeyToIndex.field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedPose).KeyToIndex.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->CachedPose).KeyToIndex);
  pFVar2 = (this->CachedPose).Elements.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

