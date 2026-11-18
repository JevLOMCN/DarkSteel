// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FRemoteObjectConstructionOverrides @ 1421b2e50

FRemoteObjectConstructionOverrides * __thiscall
UE::RemoteObject::Serialization::FRemoteObjectConstructionOverrides::
FRemoteObjectConstructionOverrides
          (FRemoteObjectConstructionOverrides *this,
          TArray<UE::RemoteObject::Serialization::FRemoteObjectHeader,TSizedDefaultAllocator<32>_>
          *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  piVar1 = &(this->Overrides).ArrayMax;
  (this->Overrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Overrides).ArrayNum = 0;
  *piVar1 = 0;
  uVar3 = param_1->ArrayNum;
  if (-1 < (int)uVar3) {
    if (0 < (int)uVar3) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,uVar3,(ForAnyElementType *)this,0,piVar1);
    }
    iVar4 = param_1->ArrayNum;
    pFVar8 = (param_1->AllocatorInstance).Data;
    pFVar7 = pFVar8 + (longlong)iVar4 * 0x40;
    while( true ) {
      if (param_1->ArrayNum != iVar4) {
        `TCheckedPointerIterator<UE::RemoteObject::Serialization::FRemoteObjectHeader_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar8 == pFVar7) break;
      iVar5 = (this->Overrides).ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,(ForAnyElementType *)this,piVar1);
      }
      (this->Overrides).ArrayNum = iVar5 + 1;
      pFVar6 = (this->Overrides).AllocatorInstance.Data + (longlong)iVar5 * 0x20;
      *(undefined8 *)(pFVar6 + 0x18) = 0;
      *(undefined8 *)pFVar6 = 0;
      *(undefined8 *)(pFVar6 + 8) = 0;
      *(undefined8 *)(pFVar6 + 0x10) = 0;
      *(undefined8 *)pFVar6 = *(undefined8 *)pFVar8;
      *(undefined8 *)(pFVar6 + 0x10) = *(undefined8 *)(pFVar8 + 8);
      pFVar2 = pFVar8 + 0x38;
      pFVar8 = pFVar8 + 0x40;
      *(undefined4 *)(pFVar6 + 0x18) = *(undefined4 *)pFVar2;
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

// Find @ 1421ca5f0

FRemoteObjectConstructionParams * __thiscall
UE::RemoteObject::Serialization::FRemoteObjectConstructionOverrides::Find
          (FRemoteObjectConstructionOverrides *this,FName param_1,UObject *param_2)

{
  int iVar1;
  long64 lVar2;
  FRemoteObjectConstructionParams *pFVar3;
  FRemoteObjectConstructionParams *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Overrides).ArrayNum;
  pFVar4 = (FRemoteObjectConstructionParams *)(this->Overrides).AllocatorInstance.Data;
  pFVar3 = pFVar4 + iVar1;
  while( true ) {
    if ((this->Overrides).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::RemoteObject::Serialization::FRemoteObjectConstructionParams_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar3) break;
    if ((pFVar4->Name == param_1) &&
       (lVar2 = FRemoteObjectId::Compare(&pFVar4->OuterId,(FRemoteObjectId)0x0), lVar2 == 0)) {
      return pFVar4;
    }
    pFVar4 = pFVar4 + 1;
  }
  return (FRemoteObjectConstructionParams *)0x0;
}

