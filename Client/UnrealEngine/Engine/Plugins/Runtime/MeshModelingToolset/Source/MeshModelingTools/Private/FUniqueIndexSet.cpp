// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 3

// Collect<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> @ 14cc11a10

void __thiscall
UE::Geometry::FUniqueIndexSet::Collect<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
          (FUniqueIndexSet *this,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined4 local_res8 [2];
  int local_res18 [2];
  
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reserve(param_1,(this->Values).ArrayNum);
  pFVar3 = (this->Values).AllocatorInstance.Data;
  iVar2 = (this->Values).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 4;
  while( true ) {
    if ((this->Values).ArrayNum != iVar2) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    local_res8[0] = *(undefined4 *)pFVar3;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (param_1,local_res18,(bool *)local_res8);
    pFVar3 = pFVar3 + 4;
  }
  return;
}

// Initialize @ 14cc60330

void __thiscall
UE::Geometry::FUniqueIndexSet::Initialize(FUniqueIndexSet *this,int param_1,int param_2)

{
  int *piVar1;
  undefined1 auVar2 [16];
  ulong64 uVar3;
  long64 *plVar4;
  int iVar5;
  
  this->MaxIndex = param_1;
  iVar5 = ((int)((param_1 >> 0x1f & 0x3fU) + param_1) >> 6) + 1;
  if (this->NumWords < iVar5) {
    if (this->Bits != (long64 *)0x0) {
      operator_delete__(this->Bits);
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (longlong)iVar5;
    uVar3 = SUB168(ZEXT816(8) * auVar2,0);
    this->NumWords = iVar5;
    if (SUB168(ZEXT816(8) * auVar2,8) != 0) {
      uVar3 = 0xffffffffffffffff;
    }
    plVar4 = operator_new__(uVar3);
    this->Bits = plVar4;
  }
  memset(this->Bits,0,(longlong)(iVar5 * 8));
  piVar1 = &(this->Values).ArrayMax;
  (this->Values).ArrayNum = 0;
  if ((this->Values).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Values).AllocatorInstance,0,piVar1);
  }
  if (-1 < param_2) {
    if (*piVar1 < param_2) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,param_2,&(this->Values).AllocatorInstance,(this->Values).ArrayNum,piVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
}

// SwapValuesWith @ 14cd2fa30

void __thiscall
UE::Geometry::FUniqueIndexSet::SwapValuesWith
          (FUniqueIndexSet *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  TArray<int,TSizedDefaultAllocator<32>_> local_28;
  
  pFVar5 = (this->Values).AllocatorInstance.Data;
  pTVar1 = &this->Values;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (this->Values).ArrayNum;
  iVar3 = (this->Values).ArrayMax;
  (this->Values).ArrayNum = 0;
  (this->Values).ArrayMax = 0;
  if (pTVar1 != param_1) {
    (pTVar1->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Values).ArrayNum = param_1->ArrayNum;
    (this->Values).ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  if (param_1 != &local_28) {
    pFVar4 = (param_1->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (param_1->AllocatorInstance).Data = pFVar5;
    param_1->ArrayNum = iVar2;
    param_1->ArrayMax = iVar3;
    pFVar5 = (FScriptContainerElement *)0x0;
  }
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  return;
}

