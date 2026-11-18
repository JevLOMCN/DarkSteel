// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 5

// AddTypedBuffer<FNiagaraEmitterParameters> @ 149266a50

void __thiscall
FScriptExecutionConstantBufferTable::AddTypedBuffer<FNiagaraEmitterParameters>
          (FScriptExecutionConstantBufferTable *this,FNiagaraEmitterParameters *param_1)

{
  int *piVar1;
  TArray<int,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_> *pTVar2;
  ForElementType<unsigned_char_const_*> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<unsigned_char_const_*> FVar7;
  ForElementType<int> FVar8;
  undefined4 local_18 [2];
  FNiagaraEmitterParameters *local_10;
  
  FVar3 = (this->Buffers).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<unsigned_char_const_*>)this;
  if (FVar3 != (ForElementType<unsigned_char_const_*>)0x0) {
    FVar7 = FVar3;
  }
  local_10 = param_1;
  if ((ulonglong)FVar7 <= &local_10) {
    FVar7 = (ForElementType<unsigned_char_const_*>)this;
    if (FVar3 != (ForElementType<unsigned_char_const_*>)0x0) {
      FVar7 = FVar3;
    }
    if ((&local_10 <
         (FNiagaraEmitterParameters **)((longlong)FVar7 + (longlong)(this->Buffers).ArrayMax * 8))
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->Buffers).ArrayNum;
  piVar1 = &(this->Buffers).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char_const_*>_>
                      (0x808,(ForElementType<unsigned_char_const_*> *)this,piVar1);
  }
  local_18[0] = 0x20;
  (this->Buffers).ArrayNum = iVar6 + 1;
  pTVar2 = &this->BufferSizes;
  FVar3 = (this->Buffers).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<unsigned_char_const_*>)this;
  if (FVar3 != (ForElementType<unsigned_char_const_*>)0x0) {
    FVar7 = FVar3;
  }
  *(FNiagaraEmitterParameters **)((longlong)FVar7 + (longlong)iVar6 * 8) = local_10;
  FVar8 = (this->BufferSizes).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<int>)0x0) {
    FVar8 = (ForElementType<int>)pTVar2;
  }
  if ((((ulonglong)FVar8 <= local_18) &&
      (local_18 < (undefined4 *)((longlong)FVar8 + (longlong)(this->BufferSizes).ArrayMax * 4))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = (this->BufferSizes).ArrayNum;
  piVar1 = &(this->BufferSizes).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                      (0x404,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->BufferSizes).ArrayNum = iVar6 + 1;
  FVar8 = (this->BufferSizes).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<int>)0x0) {
    FVar8 = (ForElementType<int>)pTVar2;
  }
  *(undefined4 *)((longlong)FVar8 + (longlong)iVar6 * 4) = local_18[0];
  return;
}

// AddTypedBuffer<FNiagaraGlobalParameters> @ 149266bf0

void __thiscall
FScriptExecutionConstantBufferTable::AddTypedBuffer<FNiagaraGlobalParameters>
          (FScriptExecutionConstantBufferTable *this,FNiagaraGlobalParameters *param_1)

{
  int *piVar1;
  TArray<int,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_> *pTVar2;
  ForElementType<unsigned_char_const_*> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<unsigned_char_const_*> FVar7;
  ForElementType<int> FVar8;
  undefined4 local_18 [2];
  FNiagaraGlobalParameters *local_10;
  
  FVar3 = (this->Buffers).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<unsigned_char_const_*>)this;
  if (FVar3 != (ForElementType<unsigned_char_const_*>)0x0) {
    FVar7 = FVar3;
  }
  local_10 = param_1;
  if ((ulonglong)FVar7 <= &local_10) {
    FVar7 = (ForElementType<unsigned_char_const_*>)this;
    if (FVar3 != (ForElementType<unsigned_char_const_*>)0x0) {
      FVar7 = FVar3;
    }
    if ((&local_10 <
         (FNiagaraGlobalParameters **)((longlong)FVar7 + (longlong)(this->Buffers).ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->Buffers).ArrayNum;
  piVar1 = &(this->Buffers).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char_const_*>_>
                      (0x808,(ForElementType<unsigned_char_const_*> *)this,piVar1);
  }
  local_18[0] = 0x20;
  (this->Buffers).ArrayNum = iVar6 + 1;
  pTVar2 = &this->BufferSizes;
  FVar3 = (this->Buffers).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<unsigned_char_const_*>)this;
  if (FVar3 != (ForElementType<unsigned_char_const_*>)0x0) {
    FVar7 = FVar3;
  }
  *(FNiagaraGlobalParameters **)((longlong)FVar7 + (longlong)iVar6 * 8) = local_10;
  FVar8 = (this->BufferSizes).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<int>)0x0) {
    FVar8 = (ForElementType<int>)pTVar2;
  }
  if ((((ulonglong)FVar8 <= local_18) &&
      (local_18 < (undefined4 *)((longlong)FVar8 + (longlong)(this->BufferSizes).ArrayMax * 4))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = (this->BufferSizes).ArrayNum;
  piVar1 = &(this->BufferSizes).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                      (0x404,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->BufferSizes).ArrayNum = iVar6 + 1;
  FVar8 = (this->BufferSizes).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<int>)0x0) {
    FVar8 = (ForElementType<int>)pTVar2;
  }
  *(undefined4 *)((longlong)FVar8 + (longlong)iVar6 * 4) = local_18[0];
  return;
}

// AddTypedBuffer<FNiagaraOwnerParameters> @ 149266d90

void __thiscall
FScriptExecutionConstantBufferTable::AddTypedBuffer<FNiagaraOwnerParameters>
          (FScriptExecutionConstantBufferTable *this,FNiagaraOwnerParameters *param_1)

{
  int *piVar1;
  TArray<int,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_> *pTVar2;
  ForElementType<unsigned_char_const_*> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<unsigned_char_const_*> FVar7;
  ForElementType<int> FVar8;
  undefined4 local_18 [2];
  FNiagaraOwnerParameters *local_10;
  
  FVar3 = (this->Buffers).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<unsigned_char_const_*>)this;
  if (FVar3 != (ForElementType<unsigned_char_const_*>)0x0) {
    FVar7 = FVar3;
  }
  local_10 = param_1;
  if ((ulonglong)FVar7 <= &local_10) {
    FVar7 = (ForElementType<unsigned_char_const_*>)this;
    if (FVar3 != (ForElementType<unsigned_char_const_*>)0x0) {
      FVar7 = FVar3;
    }
    if ((&local_10 <
         (FNiagaraOwnerParameters **)((longlong)FVar7 + (longlong)(this->Buffers).ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->Buffers).ArrayNum;
  piVar1 = &(this->Buffers).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char_const_*>_>
                      (0x808,(ForElementType<unsigned_char_const_*> *)this,piVar1);
  }
  local_18[0] = 0x200;
  (this->Buffers).ArrayNum = iVar6 + 1;
  pTVar2 = &this->BufferSizes;
  FVar3 = (this->Buffers).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<unsigned_char_const_*>)this;
  if (FVar3 != (ForElementType<unsigned_char_const_*>)0x0) {
    FVar7 = FVar3;
  }
  *(FNiagaraOwnerParameters **)((longlong)FVar7 + (longlong)iVar6 * 8) = local_10;
  FVar8 = (this->BufferSizes).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<int>)0x0) {
    FVar8 = (ForElementType<int>)pTVar2;
  }
  if ((((ulonglong)FVar8 <= local_18) &&
      (local_18 < (undefined4 *)((longlong)FVar8 + (longlong)(this->BufferSizes).ArrayMax * 4))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = (this->BufferSizes).ArrayNum;
  piVar1 = &(this->BufferSizes).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                      (0x404,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->BufferSizes).ArrayNum = iVar6 + 1;
  FVar8 = (this->BufferSizes).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<int>)0x0) {
    FVar8 = (ForElementType<int>)pTVar2;
  }
  *(undefined4 *)((longlong)FVar8 + (longlong)iVar6 * 4) = local_18[0];
  return;
}

// AddTypedBuffer<FNiagaraSystemParameters> @ 149266f30

void __thiscall
FScriptExecutionConstantBufferTable::AddTypedBuffer<FNiagaraSystemParameters>
          (FScriptExecutionConstantBufferTable *this,FNiagaraSystemParameters *param_1)

{
  int *piVar1;
  TArray<int,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_> *pTVar2;
  ForElementType<unsigned_char_const_*> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<unsigned_char_const_*> FVar7;
  ForElementType<int> FVar8;
  undefined4 local_18 [2];
  FNiagaraSystemParameters *local_10;
  
  FVar3 = (this->Buffers).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<unsigned_char_const_*>)this;
  if (FVar3 != (ForElementType<unsigned_char_const_*>)0x0) {
    FVar7 = FVar3;
  }
  local_10 = param_1;
  if ((ulonglong)FVar7 <= &local_10) {
    FVar7 = (ForElementType<unsigned_char_const_*>)this;
    if (FVar3 != (ForElementType<unsigned_char_const_*>)0x0) {
      FVar7 = FVar3;
    }
    if ((&local_10 <
         (FNiagaraSystemParameters **)((longlong)FVar7 + (longlong)(this->Buffers).ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->Buffers).ArrayNum;
  piVar1 = &(this->Buffers).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char_const_*>_>
                      (0x808,(ForElementType<unsigned_char_const_*> *)this,piVar1);
  }
  local_18[0] = 0x40;
  (this->Buffers).ArrayNum = iVar6 + 1;
  pTVar2 = &this->BufferSizes;
  FVar3 = (this->Buffers).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<unsigned_char_const_*>)this;
  if (FVar3 != (ForElementType<unsigned_char_const_*>)0x0) {
    FVar7 = FVar3;
  }
  *(FNiagaraSystemParameters **)((longlong)FVar7 + (longlong)iVar6 * 8) = local_10;
  FVar8 = (this->BufferSizes).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<int>)0x0) {
    FVar8 = (ForElementType<int>)pTVar2;
  }
  if ((((ulonglong)FVar8 <= local_18) &&
      (local_18 < (undefined4 *)((longlong)FVar8 + (longlong)(this->BufferSizes).ArrayMax * 4))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = (this->BufferSizes).ArrayNum;
  piVar1 = &(this->BufferSizes).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                      (0x404,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->BufferSizes).ArrayNum = iVar6 + 1;
  FVar8 = (this->BufferSizes).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<int>)0x0) {
    FVar8 = (ForElementType<int>)pTVar2;
  }
  *(undefined4 *)((longlong)FVar8 + (longlong)iVar6 * 4) = local_18[0];
  return;
}

// AddRawBuffer @ 1492844f0

void __thiscall
FScriptExecutionConstantBufferTable::AddRawBuffer
          (FScriptExecutionConstantBufferTable *this,uchar *param_1,int param_2)

{
  int *piVar1;
  TArray<int,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_> *pTVar2;
  ForElementType<unsigned_char_const_*> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<unsigned_char_const_*> FVar7;
  ForElementType<int> FVar8;
  uchar *local_res10;
  int local_res18 [4];
  
  FVar3 = (this->Buffers).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<unsigned_char_const_*>)this;
  if (FVar3 != (ForElementType<unsigned_char_const_*>)0x0) {
    FVar7 = FVar3;
  }
  local_res10 = param_1;
  local_res18[0] = param_2;
  if ((ulonglong)FVar7 <= &local_res10) {
    FVar7 = (ForElementType<unsigned_char_const_*>)this;
    if (FVar3 != (ForElementType<unsigned_char_const_*>)0x0) {
      FVar7 = FVar3;
    }
    if ((&local_res10 < (uchar **)((longlong)FVar7 + (longlong)(this->Buffers).ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->Buffers).ArrayNum;
  piVar1 = &(this->Buffers).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char_const_*>_>
                      (0x808,(ForElementType<unsigned_char_const_*> *)this,piVar1);
  }
  (this->Buffers).ArrayNum = iVar6 + 1;
  pTVar2 = &this->BufferSizes;
  FVar3 = (this->Buffers).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<unsigned_char_const_*>)this;
  if (FVar3 != (ForElementType<unsigned_char_const_*>)0x0) {
    FVar7 = FVar3;
  }
  *(uchar **)((longlong)FVar7 + (longlong)iVar6 * 8) = local_res10;
  FVar8 = (this->BufferSizes).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<int>)0x0) {
    FVar8 = (ForElementType<int>)pTVar2;
  }
  if ((((ulonglong)FVar8 <= local_res18) &&
      (local_res18 < (int *)((longlong)FVar8 + (longlong)(this->BufferSizes).ArrayMax * 4))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = (this->BufferSizes).ArrayNum;
  piVar1 = &(this->BufferSizes).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                      (0x404,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->BufferSizes).ArrayNum = iVar6 + 1;
  FVar8 = (this->BufferSizes).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<int>)0x0) {
    FVar8 = (ForElementType<int>)pTVar2;
  }
  *(int *)((longlong)FVar8 + (longlong)iVar6 * 4) = local_res18[0];
  return;
}

