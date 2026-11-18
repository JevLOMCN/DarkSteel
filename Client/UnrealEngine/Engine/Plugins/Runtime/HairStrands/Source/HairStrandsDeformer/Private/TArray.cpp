// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsDeformer
// Functions: 3

// CopyToEmpty<unsigned_short,int> @ 14e259560

void __thiscall
TArray<unsigned_short,TSizedDefaultAllocator<32>_>::CopyToEmpty<unsigned_short,int>
          (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *this,ushort *param_1,int param_2,
          int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  if (param_2 != 0) {
    memcpy((this->AllocatorInstance).Data,param_1,(longlong)param_2 * 2);
  }
  return;
}

// CopyToEmpty<UE::Math::TMatrix<float>,int> @ 14e2595f0

void __thiscall
TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>::
CopyToEmpty<UE::Math::TMatrix<float>,int>
          (TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *this,
          TMatrix<float> *param_1,int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x40,0x10,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  if (param_2 != 0) {
    memcpy((this->AllocatorInstance).Data,param_1,(longlong)param_2 << 6);
  }
  return;
}

// Init @ 14e288730

void __thiscall
TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>::Init
          (TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *this,
          TMatrix<float> *param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar8 = (ulonglong)(uint)param_2;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar8);
  }
  piVar1 = &this->ArrayMax;
  this->ArrayNum = 0;
  if (*piVar1 != param_2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,param_2,&this->AllocatorInstance,0,piVar1);
  }
  if (0 < param_2) {
    do {
      pFVar2 = (this->AllocatorInstance).Data;
      if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (longlong)*piVar1 * 0x40)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar6 = this->ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1040,&this->AllocatorInstance,piVar1);
      }
      this->ArrayNum = iVar6 + 1;
      uVar4 = *(undefined8 *)(param_1->M[0] + 2);
      pFVar2 = (this->AllocatorInstance).Data;
      lVar7 = (longlong)iVar6 * 0x40;
      *(undefined8 *)(pFVar2 + lVar7) = *(undefined8 *)param_1->M[0];
      *(undefined8 *)(pFVar2 + lVar7 + 8) = uVar4;
      uVar4 = *(undefined8 *)(param_1->M[1] + 2);
      *(undefined8 *)(pFVar2 + lVar7 + 0x10) = *(undefined8 *)param_1->M[1];
      *(undefined8 *)(pFVar2 + lVar7 + 0x10 + 8) = uVar4;
      uVar4 = *(undefined8 *)(param_1->M[2] + 2);
      *(undefined8 *)(pFVar2 + lVar7 + 0x20) = *(undefined8 *)param_1->M[2];
      *(undefined8 *)(pFVar2 + lVar7 + 0x20 + 8) = uVar4;
      uVar4 = *(undefined8 *)(param_1->M[3] + 2);
      *(undefined8 *)(pFVar2 + lVar7 + 0x30) = *(undefined8 *)param_1->M[3];
      *(undefined8 *)(pFVar2 + lVar7 + 0x30 + 8) = uVar4;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return;
}

