// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 3

// FGeometryCollectionMeshInfo @ 1463a1930

FGeometryCollectionMeshInfo * __thiscall
FGeometryCollectionMeshInfo::FGeometryCollectionMeshInfo
          (FGeometryCollectionMeshInfo *this,FGeometryCollectionMeshInfo *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  pTVar1 = &this->CustomData;
  this->ISMIndex = param_1->ISMIndex;
  this->InstanceGroupIndex = param_1->InstanceGroupIndex;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->CustomData).ArrayMax;
  iVar3 = (param_1->CustomData).ArrayNum;
  _Src = (param_1->CustomData).AllocatorInstance.Data;
  (this->CustomData).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 2);
  }
  return this;
}

// CustomDataSlice @ 1463afd00

TArrayView<float_const_,int> * __thiscall
FGeometryCollectionMeshInfo::CustomDataSlice
          (FGeometryCollectionMeshInfo *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<float_const_,int> *pTVar4;
  TArrayView<float_const_,int> local_18;
  
  local_18.DataPtr = (float *)(this->CustomData).AllocatorInstance.Data;
  iVar1 = (this->CustomData).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<float_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  local_18.ArrayNum = iVar1;
  TArrayView<float_const_,int>::Slice(&local_18,__return_storage_ptr__,param_1 * param_2,param_2);
  return __return_storage_ptr__;
}

// ShadowCopyCustomData @ 1463c99d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FGeometryCollectionMeshInfo::ShadowCopyCustomData
          (FGeometryCollectionMeshInfo *this,int param_1,int param_2,
          TArrayView<float_const_,int> *param_3)

{
  float *pfVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  
  uVar6 = (ulonglong)(uint)param_1;
  TArray<float,TSizedDefaultAllocator<32>_>::SetNum
            (&this->CustomData,(param_1 + 1) * param_2,Default);
  if (0 < param_1) {
    uVar7 = 0;
    lVar5 = 0;
    do {
      pfVar1 = param_3->DataPtr;
      uVar4 = 0;
      if ((int)uVar7 < (this->CustomData).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      memcpy((this->CustomData).AllocatorInstance.Data + lVar5 * 4,pfVar1 + lVar5,
             (longlong)param_2 * 4);
      uVar7 = uVar7 + param_2;
      lVar5 = lVar5 + param_2;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}

