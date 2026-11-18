// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 1

// AddUniqueImpl<FMVVMViewClass_BindingKey_const_&> @ 14a73c0d0

int __thiscall
TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::
AddUniqueImpl<FMVVMViewClass_BindingKey_const_&>
          (TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
           *this,FMVVMViewClass_BindingKey *param_1)

{
  ForElementType<FMVVMViewClass_BindingKey> FVar1;
  ForElementType<FMVVMViewClass_BindingKey> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FMVVMViewClass_BindingKey> FVar6;
  ForElementType<FMVVMViewClass_BindingKey> FVar7;
  
  FVar2 = (this->AllocatorInstance).SecondaryData;
  FVar7 = (ForElementType<FMVVMViewClass_BindingKey>)this;
  if (FVar2 != (ForElementType<FMVVMViewClass_BindingKey>)0x0) {
    FVar7 = FVar2;
  }
  FVar1 = (ForElementType<FMVVMViewClass_BindingKey>)
          ((longlong)FVar7 + (longlong)this->ArrayNum * 4);
  if (FVar7 != FVar1) {
    FVar6 = FVar7;
    do {
      if (*(int *)FVar6 == param_1->Index) {
        iVar5 = (int)((longlong)FVar6 - (longlong)FVar7 >> 2);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      FVar6 = (ForElementType<FMVVMViewClass_BindingKey>)((longlong)FVar6 + 4);
    } while (FVar6 != FVar1);
  }
  FVar7 = (ForElementType<FMVVMViewClass_BindingKey>)this;
  if (FVar2 != (ForElementType<FMVVMViewClass_BindingKey>)0x0) {
    FVar7 = FVar2;
  }
  if ((ulonglong)FVar7 <= param_1) {
    FVar7 = (ForElementType<FMVVMViewClass_BindingKey>)this;
    if (FVar2 != (ForElementType<FMVVMViewClass_BindingKey>)0x0) {
      FVar7 = FVar2;
    }
    if ((param_1 < (FMVVMViewClass_BindingKey *)((longlong)FVar7 + (longlong)this->ArrayMax * 4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FMVVMViewClass_BindingKey>_>
                      (0x404,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar5 + 1;
  FVar2 = (this->AllocatorInstance).SecondaryData;
  if (FVar2 != (ForElementType<FMVVMViewClass_BindingKey>)0x0) {
    this = (TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
            *)FVar2;
  }
  *(int *)((longlong)this + (longlong)iVar5 * 4) = param_1->Index;
  return iVar5;
}

