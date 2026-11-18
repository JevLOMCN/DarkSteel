// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenCVHelper
// Functions: 1

// Init @ 14d3702a0

void __thiscall
TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::Init
          (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *this,
          TVector2<float> *param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)(uint)param_2;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar6);
  }
  piVar1 = &this->ArrayMax;
  this->ArrayNum = 0;
  if (*piVar1 != param_2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,param_2,&this->AllocatorInstance,0,piVar1);
  }
  if (0 < param_2) {
    do {
      pFVar2 = (this->AllocatorInstance).Data;
      if (((pFVar2 <= param_1) && (param_1 < pFVar2 + (longlong)*piVar1 * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = this->ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&this->AllocatorInstance,piVar1);
      }
      this->ArrayNum = iVar5 + 1;
      ((TVector2<float>_u_0 *)((this->AllocatorInstance).Data + (longlong)iVar5 * 8))->_s_0 =
           (TVector2<float>_u_0_s_0)param_1->field0_0x0;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}

