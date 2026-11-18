// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ISMPool
// Functions: 3

// FISMPoolMeshInfo @ 14633a700

FISMPoolMeshInfo * __thiscall
FISMPoolMeshInfo::FISMPoolMeshInfo(FISMPoolMeshInfo *this,FISMPoolMeshInfo *param_1)

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

// CustomDataSlice @ 14633dfe0

TArrayView<float_const_,int> * __thiscall
FISMPoolMeshInfo::CustomDataSlice
          (FISMPoolMeshInfo *this,TArrayView<float_const_,int> *__return_storage_ptr__,int param_1,
          int param_2)

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

// ShadowCopyCustomData @ 146342610

void __thiscall
FISMPoolMeshInfo::ShadowCopyCustomData
          (FISMPoolMeshInfo *this,int param_1,int param_2,TArrayView<float_const_,int> *param_3)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *_Dst;
  float *pfVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  
  pTVar1 = &this->CustomData;
  uVar10 = (ulonglong)(uint)param_1;
  iVar7 = (this->CustomData).ArrayNum;
  piVar2 = &(this->CustomData).ArrayNum;
  uVar8 = (param_1 + 1) * param_2;
  if (iVar7 < (int)uVar8) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,uVar8 - iVar7,&pTVar1->AllocatorInstance,piVar2,
                       &(this->CustomData).ArrayMax);
    memset((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 4,0,
           (longlong)(int)(uVar8 - iVar7) << 2);
  }
  else {
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if ((int)uVar8 < iVar7) {
      uVar11 = iVar7 - uVar8;
      if (((int)(uVar11 | uVar8) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar11 != 0) {
        _Dst = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar8 * 4;
        iVar7 = (*piVar2 - uVar11) - uVar8;
        if (iVar7 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar11 * 4,(longlong)iVar7 << 2);
        }
        *piVar2 = *piVar2 - uVar11;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&pTVar1->AllocatorInstance,*piVar2,&(this->CustomData).ArrayMax);
      }
    }
  }
  if (0 < param_1) {
    uVar8 = 0;
    lVar9 = 0;
    do {
      pfVar3 = param_3->DataPtr;
      uVar11 = 0;
      if ((int)uVar8 < *piVar2) {
        uVar11 = ~uVar8 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      memcpy((pTVar1->AllocatorInstance).Data + lVar9 * 4,pfVar3 + lVar9,(longlong)param_2 * 4);
      uVar8 = uVar8 + param_2;
      lVar9 = lVar9 + param_2;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return;
}

