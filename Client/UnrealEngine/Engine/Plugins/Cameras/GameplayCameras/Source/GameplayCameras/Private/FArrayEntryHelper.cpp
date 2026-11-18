// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 6

// FArrayEntryHelper @ 14d542700

FArrayEntryHelper * __thiscall
UE::Cameras::FCameraContextDataTable::FArrayEntryHelper::FArrayEntryHelper
          (FArrayEntryHelper *this,FEntry *param_1,uchar *param_2)

{
  uint uVar1;
  ECameraContextDataType EVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  FArrayEntryHelper *pFVar6;
  uint local_res8 [2];
  uint local_res10 [2];
  
  uVar1 = param_1->Offset;
  pUVar3 = (param_1->TypeObject).field0_0x0.DebugPtr;
  EVar2 = param_1->Type;
  (this->ElementTypeObject).field0_0x0.DebugPtr = (UObject *)0x0;
  this->ElementType = EVar2;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar3);
  }
  (this->ElementTypeObject).field0_0x0.DebugPtr = pUVar3;
  GetDataTypeAllocationInfo(EVar2,pUVar3,local_res10,local_res8);
  this->ElementAlignOf = local_res8[0];
  this->ScriptArray = (FScriptArray *)(param_2 + uVar1);
  this->ElementSizeOf = (local_res10[0] - 1) + local_res8[0] & -local_res8[0];
  if (param_1->ContainerType != Array) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Entry.ContainerType == ECameraContextDataContainerType::Array",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraContextDataTable.cpp"
                       ,0x3d9,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FArrayEntryHelper *)(*pcVar4)();
      return pFVar6;
    }
  }
  return this;
}

// FArrayEntryHelper @ 14d5427d0

FArrayEntryHelper * __thiscall
UE::Cameras::FCameraContextDataTable::FArrayEntryHelper::FArrayEntryHelper
          (FArrayEntryHelper *this,ECameraContextDataType param_1,UObject *param_2,uchar *param_3)

{
  uint local_res8 [2];
  uint local_res10 [2];
  
  (this->ElementTypeObject).field0_0x0.DebugPtr = (UObject *)0x0;
  this->ElementType = param_1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
    GC::MarkAsReachable(param_2);
  }
  (this->ElementTypeObject).field0_0x0.DebugPtr = param_2;
  GetDataTypeAllocationInfo(param_1,param_2,local_res8,local_res10);
  this->ElementAlignOf = local_res10[0];
  this->ScriptArray = (FScriptArray *)param_3;
  this->ElementSizeOf = (local_res8[0] - 1) + local_res10[0] & -local_res10[0];
  return this;
}

// GetRawPtr @ 14d558a50

uchar * __thiscall
UE::Cameras::FCameraContextDataTable::FArrayEntryHelper::GetRawPtr
          (FArrayEntryHelper *this,int param_1)

{
  return (uchar *)((ulonglong)(param_1 * this->ElementSizeOf) + *(longlong *)this->ScriptArray);
}

// IsValidIndex @ 14d55a5c0

bool __thiscall
UE::Cameras::FCameraContextDataTable::FArrayEntryHelper::IsValidIndex
          (FArrayEntryHelper *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < *(int *)&this->ScriptArray->field_0x8)) {
    return true;
  }
  return false;
}

// Num @ 14d55ab80

int __thiscall UE::Cameras::FCameraContextDataTable::FArrayEntryHelper::Num(FArrayEntryHelper *this)

{
  return *(int *)&this->ScriptArray->field_0x8;
}

// Resize @ 14d561750

void __thiscall
UE::Cameras::FCameraContextDataTable::FArrayEntryHelper::Resize(FArrayEntryHelper *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  TScriptArray<TSizedHeapAllocator<32,FMemory>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  
  pTVar4 = (TScriptArray<TSizedHeapAllocator<32,FMemory>_> *)this->ScriptArray;
  iVar9 = pTVar4->ArrayNum;
  if (iVar9 < param_1) {
    uVar1 = this->ElementSizeOf;
    uVar2 = this->ElementAlignOf;
    if ((param_1 - iVar9 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Count>=0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ScriptArray.h"
                           ,0x54,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar3 = pTVar4->ArrayNum;
    iVar8 = iVar3 + (param_1 - iVar9);
    pTVar4->ArrayNum = iVar8;
    if (pTVar4->ArrayMax < iVar8) {
      TScriptArray<TSizedHeapAllocator<32,FMemory>_>::ResizeGrow(pTVar4,iVar3,uVar1,uVar2);
    }
    do {
      ConstructDataValue(this->ElementType,(this->ElementTypeObject).field0_0x0.DebugPtr,
                         (uchar *)((ulonglong)(iVar9 * this->ElementSizeOf) +
                                  *(longlong *)this->ScriptArray));
      iVar9 = iVar9 + 1;
    } while (iVar9 < param_1);
  }
  else {
    iVar8 = param_1;
    if (param_1 < iVar9) {
      do {
        DestroyDataValue(this->ElementType,(this->ElementTypeObject).field0_0x0.DebugPtr,
                         (uchar *)((ulonglong)(iVar8 * this->ElementSizeOf) +
                                  *(longlong *)this->ScriptArray));
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar9);
      pTVar4 = (TScriptArray<TSizedHeapAllocator<32,FMemory>_> *)this->ScriptArray;
      uVar1 = this->ElementAlignOf;
      uVar2 = this->ElementSizeOf;
      lVar7 = (longlong)(int)uVar2;
      iVar9 = iVar9 - param_1;
      if (iVar9 != 0) {
        iVar8 = (pTVar4->ArrayNum - iVar9) - param_1;
        if (iVar8 != 0) {
          memmove((void *)(param_1 * lVar7 + pTVar4->_padding_),
                  (void *)(((longlong)iVar9 + (longlong)param_1) * lVar7 + pTVar4->_padding_),
                  iVar8 * lVar7);
        }
        pTVar4->ArrayNum = pTVar4->ArrayNum - iVar9;
        TScriptArray<TSizedHeapAllocator<32,FMemory>_>::ResizeShrink(pTVar4,uVar2,uVar1);
      }
    }
  }
  return;
}

