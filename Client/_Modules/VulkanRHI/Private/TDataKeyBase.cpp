// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 4

// CopyDataDeep @ 145b5f240

void __thiscall TDataKeyBase<1>::CopyDataDeep(TDataKeyBase<1> *this,TDataKeyBase<1> *param_1)

{
  TUniquePtr<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong local_18 [2];
  
  if ((this->Data == (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Public\\VulkanUtil.h"
                         ,0x59,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar7 = this->Data;
  pTVar6 = ::operator_new(0x10);
  if (pTVar6 == (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar6 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0;
  }
  else {
    (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar2 = pTVar7->ArrayNum;
    pFVar3 = (pTVar7->AllocatorInstance).Data;
    pTVar6->ArrayNum = iVar2;
    if (iVar2 == 0) {
      pTVar6->ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar2,0,&pTVar6->AllocatorInstance,iVar2,&pTVar6->ArrayMax);
      memcpy((pTVar6->AllocatorInstance).Data,pFVar3,(longlong)iVar2);
    }
  }
  pTVar1 = &param_1->DataStorage;
  if (pTVar1 == (TUniquePtr<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_>
                 *)local_18) {
    if (pTVar6 == (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0) goto LAB_145b5f34c;
    pFVar3 = (pTVar6->AllocatorInstance).Data;
    pTVar7 = pTVar6;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
  }
  else {
    pTVar7 = pTVar1->Ptr;
    pTVar1->Ptr = pTVar6;
    if (pTVar7 == (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0) {
      param_1->Data = pTVar6;
      return;
    }
    pFVar3 = (pTVar7->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
  }
  ::operator_delete(pTVar7,0x10);
LAB_145b5f34c:
  param_1->Data = pTVar1->Ptr;
  return;
}

// EnsureDataStorage @ 145b65c20

void __thiscall TDataKeyBase<1>::EnsureDataStorage(TDataKeyBase<1> *this)

{
  TUniquePtr<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar4;
  undefined8 local_18 [2];
  
  pTVar1 = &this->DataStorage;
  if ((this->DataStorage).Ptr != (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0) {
    return;
  }
  pTVar3 = ::operator_new(0x10);
  if (pTVar3 != (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0) {
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar3->ArrayNum = 0;
    pTVar3->ArrayMax = 0;
  }
  if (pTVar1 == (TUniquePtr<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_>
                 *)local_18) {
    if (pTVar3 == (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0) goto LAB_145b65cac;
    pFVar2 = (pTVar3->AllocatorInstance).Data;
    pTVar4 = pTVar3;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  }
  else {
    pTVar4 = pTVar1->Ptr;
    pTVar1->Ptr = pTVar3;
    if (pTVar4 == (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0) goto LAB_145b65cac;
    pFVar2 = (pTVar4->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  }
  ::operator_delete(pTVar4,0x10);
LAB_145b65cac:
  this->Data = pTVar1->Ptr;
  return;
}

// IsDataEquals @ 145b6be20

bool __thiscall TDataKeyBase<2>::IsDataEquals(TDataKeyBase<2> *this,TDataKeyBase<2> *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  
  if (((*(longlong *)&this->field_0x8 == 0) || (*(longlong *)&param_1->field_0x8 == 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data && Other.Data",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Public\\VulkanUtil.h"
                         ,0x88,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  puVar1 = *(undefined8 **)&param_1->field_0x8;
  iVar5 = *(int *)(*(undefined8 **)&this->field_0x8 + 1);
  if ((iVar5 == *(int *)(puVar1 + 1)) &&
     (iVar5 = memcmp((void *)**(undefined8 **)&this->field_0x8,(void *)*puVar1,(longlong)iVar5),
     iVar5 == 0)) {
    return true;
  }
  return false;
}

// SetData @ 145b7b120

void __thiscall TDataKeyBase<1>::SetData(TDataKeyBase<1> *this,void *param_1,uint param_2)

{
  int *piVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *_Dst;
  uint uVar7;
  
  EnsureDataStorage(this);
  pTVar2 = this->Data;
  iVar6 = pTVar2->ArrayNum;
  piVar1 = &pTVar2->ArrayNum;
  if (iVar6 < (int)param_2) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,param_2 - iVar6,&pTVar2->AllocatorInstance,piVar1,&pTVar2->ArrayMax);
    memset((pTVar2->AllocatorInstance).Data + iVar5,0,(longlong)(int)(param_2 - iVar6));
  }
  else {
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)param_2);
    }
    if ((int)param_2 < iVar6) {
      uVar7 = iVar6 - param_2;
      if ((int)(uVar7 | param_2) < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (uVar7 != 0) {
        _Dst = (pTVar2->AllocatorInstance).Data + (int)param_2;
        iVar6 = (*piVar1 - uVar7) - param_2;
        if (iVar6 != 0) {
          memmove(_Dst,_Dst + (int)uVar7,(longlong)iVar6);
        }
        *piVar1 = *piVar1 - uVar7;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,&pTVar2->AllocatorInstance,*piVar1,&pTVar2->ArrayMax);
      }
    }
  }
  memcpy((this->Data->AllocatorInstance).Data,param_1,(ulonglong)param_2);
  return;
}

