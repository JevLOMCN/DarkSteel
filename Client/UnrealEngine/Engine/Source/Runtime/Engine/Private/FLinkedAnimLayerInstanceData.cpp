// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 1475116e0

UScriptStruct * __cdecl FLinkedAnimLayerInstanceData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLinkedAnimLayerInstanceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FLinkedAnimLayerInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLinkedAnimLayerInstanceData,(UObject *)pUVar1,
                         L"LinkedAnimLayerInstanceData");
  }
  return Z_Registration_Info_UScriptStruct_FLinkedAnimLayerInstanceData.OuterSingleton;
}

// FLinkedAnimLayerInstanceData @ 1475313b0

FLinkedAnimLayerInstanceData * __thiscall
FLinkedAnimLayerInstanceData::FLinkedAnimLayerInstanceData
          (FLinkedAnimLayerInstanceData *this,FLinkedAnimLayerInstanceData *param_1)

{
  TMap<FName,TWeakObjectPtr<UAnimInstance,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UAnimInstance,FWeakObjectPtr>,0>_>
  *pTVar1;
  TMap<FName,TWeakObjectPtr<UAnimInstance,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UAnimInstance,FWeakObjectPtr>,0>_>
  *pTVar2;
  undefined1 *_Dst;
  undefined1 *_Src;
  UAnimInstance *pUVar3;
  void *pvVar4;
  
  pUVar3 = (param_1->Instance).field0_0x0.DebugPtr;
  (this->Instance).field0_0x0.DebugPtr = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UAnimInstance *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  pTVar1 = &this->LinkedFunctions;
  *(undefined8 *)pTVar1 = 0;
  pTVar2 = &param_1->LinkedFunctions;
  *(undefined8 *)&(this->LinkedFunctions).field_0x8 = 0;
  *(undefined8 *)&(this->LinkedFunctions).field_0x20 = 0;
  *(undefined4 *)&(this->LinkedFunctions).field_0x28 = 0;
  *(undefined4 *)&(this->LinkedFunctions).field_0x2c = 0x80;
  *(undefined4 *)&(this->LinkedFunctions).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LinkedFunctions).field_0x34 = 0;
  *(undefined8 *)&(this->LinkedFunctions).field_0x40 = 0;
  *(undefined4 *)&(this->LinkedFunctions).field_0x48 = 0;
  if (pTVar1 != pTVar2) {
    *(undefined8 *)pTVar1 = *(undefined8 *)pTVar2;
    *(undefined8 *)pTVar2 = 0;
    _Dst = &(this->LinkedFunctions).field_0x10;
    *(undefined4 *)&(this->LinkedFunctions).field_0x8 =
         *(undefined4 *)&(param_1->LinkedFunctions).field_0x8;
    _Src = &(param_1->LinkedFunctions).field_0x10;
    *(undefined4 *)&(this->LinkedFunctions).field_0xc =
         *(undefined4 *)&(param_1->LinkedFunctions).field_0xc;
    *(undefined8 *)&(param_1->LinkedFunctions).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->LinkedFunctions).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar4 = *(void **)&(this->LinkedFunctions).field_0x20;
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      *(undefined8 *)&(this->LinkedFunctions).field_0x20 =
           *(undefined8 *)&(param_1->LinkedFunctions).field_0x20;
      *(undefined8 *)&(param_1->LinkedFunctions).field_0x20 = 0;
      *(undefined4 *)&(this->LinkedFunctions).field_0x28 =
           *(undefined4 *)&(param_1->LinkedFunctions).field_0x28;
      *(undefined4 *)&(this->LinkedFunctions).field_0x2c =
           *(undefined4 *)&(param_1->LinkedFunctions).field_0x2c;
      *(undefined8 *)&(param_1->LinkedFunctions).field_0x28 = 0;
    }
    *(undefined4 *)&(this->LinkedFunctions).field_0x30 =
         *(undefined4 *)&(param_1->LinkedFunctions).field_0x30;
    *(undefined4 *)&(this->LinkedFunctions).field_0x34 =
         *(undefined4 *)&(param_1->LinkedFunctions).field_0x34;
    *(undefined4 *)&(param_1->LinkedFunctions).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->LinkedFunctions).field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->LinkedFunctions).field_0x40 == 0) {
    *(undefined4 *)&(this->LinkedFunctions).field_0x38 =
         *(undefined4 *)&(param_1->LinkedFunctions).field_0x38;
  }
  pvVar4 = *(void **)&(this->LinkedFunctions).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  *(undefined8 *)&(this->LinkedFunctions).field_0x40 =
       *(undefined8 *)&(param_1->LinkedFunctions).field_0x40;
  *(undefined8 *)&(param_1->LinkedFunctions).field_0x40 = 0;
  *(undefined4 *)&(this->LinkedFunctions).field_0x48 =
       *(undefined4 *)&(param_1->LinkedFunctions).field_0x48;
  *(undefined4 *)&(param_1->LinkedFunctions).field_0x48 = 0;
  this->bIsPersistent = param_1->bIsPersistent;
  return this;
}

// AddLinkedFunction @ 147542ae0

void __thiscall
FLinkedAnimLayerInstanceData::AddLinkedFunction
          (FLinkedAnimLayerInstanceData *this,FName param_1,UAnimInstance *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  TPairInitializer<FName_const_&,TWeakObjectPtr<UAnimInstance,FWeakObjectPtr>_&&> local_res8;
  FWeakObjectPtr local_res18;
  UAnimInstance *local_res20;
  TWeakObjectPtr<UAnimInstance,FWeakObjectPtr> **local_28;
  FWeakObjectPtr *local_20;
  
  local_res8.Value = (TWeakObjectPtr<UAnimInstance,FWeakObjectPtr> *)param_1;
  uVar4 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->LinkedFunctions).field_0x8 != *(int *)&(this->LinkedFunctions).field_0x34) {
    puVar6 = *(undefined1 **)&(this->LinkedFunctions).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->LinkedFunctions).field_0x38;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->LinkedFunctions).field_0x48 - 1U &
                              param_1.Number + uVar4) * 4);
    if (iVar5 != -1) {
      lVar1 = *(longlong *)&(this->LinkedFunctions).field_0x0;
      do {
        if (*(FName *)(lVar1 + (longlong)iVar5 * 0x18) == param_1) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!LinkedFunctions.Contains(Function)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSubsystem_SharedLinkedAnimLayers.cpp"
                             ,0x47,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10 + (longlong)iVar5 * 0x18);
      } while (iVar5 != -1);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UAnimInstance *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_res20 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UAnimInstance *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
  local_28 = &local_res8.Value;
  local_20 = &local_res18;
  TSet<TTuple<FName,TWeakObjectPtr<UAnimInstance,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UAnimInstance,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,TWeakObjectPtr<UAnimInstance,FWeakObjectPtr>_&&>_>
            ((TSet<TTuple<FName,TWeakObjectPtr<UAnimInstance,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UAnimInstance,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              *)&this->LinkedFunctions,&local_res8,(bool *)&local_28);
  return;
}

// RemoveLinkedFunction @ 147574af0

void __thiscall
FLinkedAnimLayerInstanceData::RemoveLinkedFunction(FLinkedAnimLayerInstanceData *this,FName param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  FName local_res8;
  FName local_res10;
  
  local_res10 = param_1;
  uVar4 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->LinkedFunctions).field_0x8 != *(int *)&(this->LinkedFunctions).field_0x34) {
    puVar6 = *(undefined1 **)&(this->LinkedFunctions).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->LinkedFunctions).field_0x38;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->LinkedFunctions).field_0x48 - 1U &
                              param_1.Number + uVar4) * 4);
    if (iVar5 != -1) {
      lVar1 = *(longlong *)&(this->LinkedFunctions).field_0x0;
      do {
        if (*(FName *)(lVar1 + (longlong)iVar5 * 0x18) == param_1) goto LAB_147574b7f;
        iVar5 = *(int *)(lVar1 + 0x10 + (longlong)iVar5 * 0x18);
      } while (iVar5 != -1);
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("LinkedFunctions.Contains(Function)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSubsystem_SharedLinkedAnimLayers.cpp"
                     ,0x50,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_147574b7f:
  if (*(int *)&(this->LinkedFunctions).field_0x8 != *(int *)&(this->LinkedFunctions).field_0x34) {
    local_res8 = param_1;
    uVar4 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    TSet<TTuple<FName,TWeakObjectPtr<UAnimInstance,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UAnimInstance,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,TWeakObjectPtr<UAnimInstance,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UAnimInstance,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                         *)&this->LinkedFunctions,local_res10.Number + uVar4,&local_res8);
  }
  return;
}

