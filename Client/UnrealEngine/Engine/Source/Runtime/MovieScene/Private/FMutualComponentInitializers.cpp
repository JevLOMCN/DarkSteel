// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 4

// FMutualComponentInitializers @ 146119bd0

FMutualComponentInitializers * __thiscall
UE::MovieScene::FMutualComponentInitializers::FMutualComponentInitializers
          (FMutualComponentInitializers *this,FMutualComponentInitializers *param_1)

{
  ForElementType<UE::MovieScene::IMutualComponentInitializer_*> FVar1;
  
  (this->Initializers).AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)0x0;
  if ((param_1->Initializers).AllocatorInstance.SecondaryData ==
      (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)0x0) {
    memmove(this,param_1,0x10);
  }
  FVar1 = (this->Initializers).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->Initializers).AllocatorInstance.SecondaryData =
       (param_1->Initializers).AllocatorInstance.SecondaryData;
  (param_1->Initializers).AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)0x0;
  (this->Initializers).ArrayNum = (param_1->Initializers).ArrayNum;
  (this->Initializers).ArrayMax = (param_1->Initializers).ArrayMax;
  (param_1->Initializers).ArrayNum = 0;
  (param_1->Initializers).ArrayMax = 2;
  return this;
}

// Add @ 146204800

void __thiscall
UE::MovieScene::FMutualComponentInitializers::Add
          (FMutualComponentInitializers *this,IMutualComponentInitializer *param_1)

{
  int *piVar1;
  ForElementType<UE::MovieScene::IMutualComponentInitializer_*> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<UE::MovieScene::IMutualComponentInitializer_*> FVar6;
  IMutualComponentInitializer *local_res10 [3];
  
  FVar2 = (this->Initializers).AllocatorInstance.SecondaryData;
  FVar6 = (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)this;
  if (FVar2 != (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)0x0) {
    FVar6 = FVar2;
  }
  local_res10[0] = param_1;
  if ((ulonglong)FVar6 <= local_res10) {
    FVar6 = (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)this;
    if (FVar2 != (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)0x0) {
      FVar6 = FVar2;
    }
    if ((local_res10 <
         (IMutualComponentInitializer **)
         ((longlong)FVar6 + (longlong)(this->Initializers).ArrayMax * 8)) &&
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
  }
  iVar5 = (this->Initializers).ArrayNum;
  piVar1 = &(this->Initializers).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::IMutualComponentInitializer_*>_>
                      (0x808,(ForElementType<UE::MovieScene::IMutualComponentInitializer_*> *)this,
                       piVar1);
  }
  (this->Initializers).ArrayNum = iVar5 + 1;
  FVar2 = (this->Initializers).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)0x0) {
    this = (FMutualComponentInitializers *)FVar2;
  }
  *(IMutualComponentInitializer **)((longlong)this + (longlong)iVar5 * 8) = local_res10[0];
  return;
}

// Execute @ 14620ff10

void __thiscall
UE::MovieScene::FMutualComponentInitializers::Execute
          (FMutualComponentInitializers *this,FEntityRange *param_1,
          FEntityAllocationWriteContext *param_2)

{
  int *piVar1;
  int iVar2;
  ForElementType<UE::MovieScene::IMutualComponentInitializer_*> FVar3;
  undefined1 local_res8 [8];
  
  FVar3 = (this->Initializers).AllocatorInstance.SecondaryData;
  piVar1 = &(this->Initializers).ArrayNum;
  iVar2 = *piVar1;
  if (FVar3 != (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)0x0) {
    this = (FMutualComponentInitializers *)FVar3;
  }
  FVar3 = (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)
          ((longlong)this + (longlong)iVar2 * 8);
  while( true ) {
    if (*piVar1 != iVar2) {
      `TCheckedPointerIterator<UE::MovieScene::IMutualComponentInitializer_*_const,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)this == FVar3) break;
    (**(code **)(**(longlong **)this + 8))(*(longlong **)this,param_1,param_2);
    this = (FMutualComponentInitializers *)((longlong)this + 8);
  }
  return;
}

// Reset @ 1462306d0

void __thiscall
UE::MovieScene::FMutualComponentInitializers::Reset(FMutualComponentInitializers *this)

{
  (this->Initializers).ArrayNum = 0;
  if ((this->Initializers).ArrayMax < 0) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::IMutualComponentInitializer_*>_>
              (8,8,0,(ForElementType<UE::MovieScene::IMutualComponentInitializer_*> *)this,0,
               &(this->Initializers).ArrayMax);
  }
  return;
}

