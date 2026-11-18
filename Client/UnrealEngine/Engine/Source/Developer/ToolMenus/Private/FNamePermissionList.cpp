// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 1

// FNamePermissionList @ 142c37da0

FNamePermissionList * __thiscall
FNamePermissionList::FNamePermissionList(FNamePermissionList *this,FNamePermissionList *param_1)

{
  int *piVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  int iVar3;
  FScriptContainerElement *_Src;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FNamePermissionList__6B_;
  TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  ::
  TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
            (&this->DenyList,&param_1->DenyList);
  TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  ::
  TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
            (&this->AllowList,&param_1->AllowList);
  pTVar2 = &this->DenyListAll;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->DenyListAll).ArrayMax;
  iVar3 = (param_1->DenyListAll).ArrayNum;
  _Src = (param_1->DenyListAll).AllocatorInstance.Data;
  (this->DenyListAll).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3 << 3);
  }
  this_00 = &this->OnFilterChangedDelegate;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->OnFilterChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnFilterChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnFilterChangedDelegate).field_0x18 = 2;
  if (&param_1->OnFilterChangedDelegate != this_00) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &param_1->OnFilterChangedDelegate);
  }
  this->bSuppressOnFilterChanged = param_1->bSuppressOnFilterChanged;
  return this;
}

