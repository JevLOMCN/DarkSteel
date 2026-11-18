// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 9

// StaticStruct @ 1420e22b0

UScriptStruct * __cdecl FOverriddenPropertyNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOverriddenPropertyNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UScriptStruct_FOverriddenPropertyNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOverriddenPropertyNode,(UObject *)pUVar1,
                         L"OverriddenPropertyNode");
  }
  return Z_Registration_Info_UScriptStruct_FOverriddenPropertyNode.OuterSingleton;
}

// operator= @ 1420ec840

FOverriddenPropertyNode * __thiscall
FOverriddenPropertyNode::operator=(FOverriddenPropertyNode *this,FOverriddenPropertyNode *param_1)

{
  TArray<FOverriddenPropertyNode,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FOverriddenPropertyNode *pFVar4;
  
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FName,TSizedDefaultAllocator<32>_> *)this,
             (TArray<FName,TSizedDefaultAllocator<32>_> *)param_1);
  (this->NodeID).Path.CachedHash = (param_1->NodeID).Path.CachedHash;
  (this->NodeID).Object.WeakPtr = (param_1->NodeID).Object.WeakPtr;
  pTVar1 = &this->SubPropertyNodes;
  this->Operation = param_1->Operation;
  if (pTVar1 != &param_1->SubPropertyNodes) {
    DestructItems<FOverriddenPropertyNode,int>
              ((FOverriddenPropertyNode *)(pTVar1->AllocatorInstance).Data,
               (this->SubPropertyNodes).ArrayNum);
    iVar3 = (param_1->SubPropertyNodes).ArrayNum;
    piVar2 = &(this->SubPropertyNodes).ArrayMax;
    pFVar4 = (FOverriddenPropertyNode *)(param_1->SubPropertyNodes).AllocatorInstance.Data;
    (this->SubPropertyNodes).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      ConstructItems<FOverriddenPropertyNode,FOverriddenPropertyNode,int>
                ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
    }
  }
  return this;
}

// FindOrAddNode @ 1420f76c0

FOverriddenPropertyNode * __thiscall
FOverriddenPropertyNode::FindOrAddNode
          (FOverriddenPropertyNode *this,FOverriddenPropertyNodeID *param_1,bool *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FOverriddenPropertyNode *this_00;
  
  this_00 = TArray<FOverriddenPropertyNode,TSizedDefaultAllocator<32>_>::
            FindByKey<FOverriddenPropertyNodeID>(&this->SubPropertyNodes,param_1);
  if (this_00 == (FOverriddenPropertyNode *)0x0) {
    if (param_2 != (bool *)0x0) {
      *param_2 = true;
    }
    if (this->Operation == None) {
      this->Operation = Modified;
    }
    iVar3 = (this->SubPropertyNodes).ArrayNum;
    piVar1 = &(this->SubPropertyNodes).ArrayMax;
    if (iVar3 == *piVar1) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x838,&(this->SubPropertyNodes).AllocatorInstance,piVar1);
    }
    pFVar2 = (this->SubPropertyNodes).AllocatorInstance.Data;
    (this->SubPropertyNodes).ArrayNum = iVar3 + 1;
    this_00 = (FOverriddenPropertyNode *)(pFVar2 + (longlong)iVar3 * 0x38);
    FOverriddenPropertyPath::FOverriddenPropertyPath
              ((FOverriddenPropertyPath *)this_00,&param_1->Path);
    (this_00->NodeID).Object.WeakPtr = (param_1->Object).WeakPtr;
    (this_00->SubPropertyNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->SubPropertyNodes).ArrayNum = 0;
    (this_00->SubPropertyNodes).ArrayMax = 0;
    this_00->Operation = None;
  }
  return this_00;
}

// HandleDeadObjectReferences @ 1420fdea0

void __thiscall
FOverriddenPropertyNode::HandleDeadObjectReferences
          (FOverriddenPropertyNode *this,
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *param_1,
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *param_2)

{
  int iVar1;
  UObject *pUVar2;
  UObject **ppUVar3;
  FOverriddenPropertyNode *this_00;
  FOverriddenPropertyNode *pFVar4;
  undefined1 local_res8 [8];
  
  pUVar2 = FWeakObjectPtr::Get(&(this->NodeID).Object.WeakPtr,true);
  if (pUVar2 != (UObject *)0x0) {
    ppUVar3 = TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Find
                        (param_1,pUVar2);
    if (ppUVar3 == (UObject **)0x0) {
      ppUVar3 = TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Find
                          (param_2,pUVar2);
      if (ppUVar3 == (UObject **)0x0) goto LAB_1420fdefa;
    }
    (this->NodeID).Object.WeakPtr = (FWeakObjectPtr)0x0;
  }
LAB_1420fdefa:
  iVar1 = (this->SubPropertyNodes).ArrayNum;
  this_00 = (FOverriddenPropertyNode *)(this->SubPropertyNodes).AllocatorInstance.Data;
  pFVar4 = this_00 + iVar1;
  while( true ) {
    if ((this->SubPropertyNodes).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FOverriddenPropertyNode,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pFVar4) break;
    HandleDeadObjectReferences(this_00,param_1,param_2);
    this_00 = this_00 + 1;
  }
  return;
}

// HandleObjectsReInstantiated @ 1420fe180

void __thiscall
FOverriddenPropertyNode::HandleObjectsReInstantiated
          (FOverriddenPropertyNode *this,
          TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
          *param_1)

{
  int iVar1;
  UObject *pUVar2;
  UObject **ppUVar3;
  FOverriddenPropertyNode *this_00;
  FOverriddenPropertyNode *pFVar4;
  UObject *local_res8;
  
  pUVar2 = FWeakObjectPtr::Get(&(this->NodeID).Object.WeakPtr,true);
  if (pUVar2 != (UObject *)0x0) {
    ppUVar3 = TMapBase<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
              ::Find((TMapBase<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
                      *)param_1,pUVar2);
    if (ppUVar3 != (UObject **)0x0) {
      local_res8 = *ppUVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res8);
      }
      FWeakObjectPtr::operator=(&(this->NodeID).Object.WeakPtr,(FObjectPtr)&local_res8);
    }
  }
  iVar1 = (this->SubPropertyNodes).ArrayNum;
  this_00 = (FOverriddenPropertyNode *)(this->SubPropertyNodes).AllocatorInstance.Data;
  pFVar4 = this_00 + iVar1;
  while( true ) {
    if ((this->SubPropertyNodes).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FOverriddenPropertyNode,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (this_00 == pFVar4) break;
    HandleObjectsReInstantiated(this_00,param_1);
    this_00 = this_00 + 1;
  }
  return;
}

// RemoveSubPropertyNode @ 1421094c0

bool __thiscall
FOverriddenPropertyNode::RemoveSubPropertyNode
          (FOverriddenPropertyNode *this,FOverriddenPropertyNodeID *param_1,bool *param_2)

{
  int iVar1;
  FOverriddenPropertyNodeID *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FOverriddenPropertyNodeID local_68;
  undefined1 local_48;
  FOverriddenPropertyNode *local_40;
  undefined8 local_38;
  
  FOverriddenPropertyPath::FOverriddenPropertyPath(&local_68.Path,&param_1->Path);
  local_68.Object.WeakPtr = (param_1->Object).WeakPtr;
  iVar10 = 0;
  iVar9 = 0;
  pFVar2 = (FOverriddenPropertyNodeID *)(this->SubPropertyNodes).AllocatorInstance.Data;
  local_48 = 0;
  local_40 = (FOverriddenPropertyNode *)0x0;
  local_38 = 0;
  if (((pFVar2 <= &local_68) &&
      (&local_68 <
       (FOverriddenPropertyNodeID *)
       ((longlong)pFVar2 + (longlong)(this->SubPropertyNodes).ArrayMax * 0x38))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  iVar1 = (this->SubPropertyNodes).ArrayNum;
  if (iVar1 != 0) {
    pFVar2 = (FOverriddenPropertyNodeID *)(this->SubPropertyNodes).AllocatorInstance.Data;
    bVar5 = FOverriddenPropertyNodeID::operator==(pFVar2,&local_68);
    bVar5 = !bVar5;
    iVar9 = iVar10;
    do {
      iVar4 = iVar9;
      do {
        iVar4 = iVar4 + 1;
        if (iVar1 <= iVar4) break;
        bVar7 = FOverriddenPropertyNodeID::operator==
                          ((FOverriddenPropertyNodeID *)((longlong)pFVar2 + (longlong)iVar4 * 0x38),
                           &local_68);
      } while (bVar5 == !bVar7);
      iVar8 = iVar4 - iVar9;
      if (bVar5 == false) {
        DestructItems<FOverriddenPropertyNode,int>
                  ((FOverriddenPropertyNode *)((longlong)pFVar2 + (longlong)iVar9 * 0x38),iVar8);
      }
      else {
        if (iVar10 != iVar9) {
          memmove((void *)((longlong)pFVar2 + (longlong)iVar10 * 0x38),
                  (void *)((longlong)pFVar2 + (longlong)iVar9 * 0x38),(longlong)iVar8 * 0x38);
        }
        iVar10 = iVar10 + iVar8;
      }
      bVar5 = (bool)(bVar5 ^ 1);
      iVar9 = iVar4;
    } while (iVar4 < iVar1);
    iVar9 = iVar1 - iVar10;
    (this->SubPropertyNodes).ArrayNum = iVar10;
  }
  DestructItems<FOverriddenPropertyNode,int>(local_40,(int)local_38);
  if (local_40 != (FOverriddenPropertyNode *)0x0) {
    FMemory::Free(local_40);
  }
  if (local_68.Path.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Path.Path.AllocatorInstance.Data);
  }
  if (iVar9 != 0) {
    if (param_2 != (bool *)0x0) {
      *param_2 = true;
    }
    return true;
  }
  return false;
}

// Reset @ 14210a430

void __thiscall FOverriddenPropertyNode::Reset(FOverriddenPropertyNode *this,bool *param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((this->Operation != None) && (this->Operation = None, param_1 != (bool *)0x0)) {
    *param_1 = true;
  }
  iVar2 = (this->SubPropertyNodes).ArrayNum;
  if (iVar2 != 0) {
    DestructItems<FOverriddenPropertyNode,int>
              ((FOverriddenPropertyNode *)(this->SubPropertyNodes).AllocatorInstance.Data,iVar2);
    piVar1 = &(this->SubPropertyNodes).ArrayMax;
    (this->SubPropertyNodes).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,&(this->SubPropertyNodes).AllocatorInstance,0,piVar1);
    }
    if (param_1 != (bool *)0x0) {
      *param_1 = true;
    }
  }
  return;
}

// Serialize @ 14210e350

bool __thiscall FOverriddenPropertyNode::Serialize(FOverriddenPropertyNode *this,FArchive *param_1)

{
  EOverriddenPropertyOperation *pEVar1;
  UPackage *pUVar2;
  
  if (Z_Registration_Info_UScriptStruct_FOverriddenPropertyNodeID.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UScriptStruct_FOverriddenPropertyNodeID.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOverriddenPropertyNodeID,(UObject *)pUVar2,
                         L"OverriddenPropertyNodeID");
  }
  UScriptStruct::SerializeItem
            (Z_Registration_Info_UScriptStruct_FOverriddenPropertyNodeID.OuterSingleton,param_1,this
             ,(void *)0x0);
  pEVar1 = (EOverriddenPropertyOperation *)**(undefined8 **)&param_1->field_0x8;
  if ((EOverriddenPropertyOperation *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->Operation,1);
  }
  else {
    this->Operation = *pEVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  TArrayPrivateFriend::Serialize<FOverriddenPropertyNode,TSizedDefaultAllocator<32>_>
            (param_1,&this->SubPropertyNodes);
  return true;
}

// SetOperation @ 142110450

void __thiscall
FOverriddenPropertyNode::SetOperation
          (FOverriddenPropertyNode *this,EOverriddenPropertyOperation param_1,bool *param_2)

{
  if ((this->Operation != param_1) && (this->Operation = param_1, param_2 != (bool *)0x0)) {
    *param_2 = true;
  }
  return;
}

