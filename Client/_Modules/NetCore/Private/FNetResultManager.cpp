// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 4

// AddResultHandler @ 1441d6270

void __thiscall
UE::Net::FNetResultManager::AddResultHandler
          (FNetResultManager *this,
          TUniquePtr<UE::Net::FNetResultHandler,TDefaultDelete<UE::Net::FNetResultHandler>_>
          *param_1,EAddResultHandlerPos param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<UE::Net::FNetResultHandler_*> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<UE::Net::FNetResultHandler_*> FVar7;
  void *_Src;
  int *piVar8;
  int iVar9;
  longlong local_28 [2];
  
  pFVar2 = (this->OwnedResultHandlers).AllocatorInstance.Data;
  if (((pFVar2 <= param_1) &&
      (param_1 < pFVar2 + (longlong)(this->OwnedResultHandlers).ArrayMax * 8)) &&
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
  iVar6 = (this->OwnedResultHandlers).ArrayNum;
  piVar1 = &(this->OwnedResultHandlers).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->OwnedResultHandlers).AllocatorInstance,piVar1);
  }
  iVar9 = 0;
  (this->OwnedResultHandlers).ArrayNum = iVar6 + 1;
  pFVar2 = (this->OwnedResultHandlers).AllocatorInstance.Data + (longlong)iVar6 * 8;
  *(FNetResultHandler **)pFVar2 = param_1->Ptr;
  param_1->Ptr = (FNetResultHandler *)0x0;
  if (param_2 != First) {
    iVar9 = (this->ResultHandlers).ArrayNum;
  }
  local_28[0] = *(longlong *)pFVar2;
  FVar3 = (this->ResultHandlers).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<UE::Net::FNetResultHandler_*>)this;
  if (FVar3 != (ForElementType<UE::Net::FNetResultHandler_*>)0x0) {
    FVar7 = FVar3;
  }
  if ((ulonglong)FVar7 <= local_28) {
    FVar7 = (ForElementType<UE::Net::FNetResultHandler_*>)this;
    if (FVar3 != (ForElementType<UE::Net::FNetResultHandler_*>)0x0) {
      FVar7 = FVar3;
    }
    if ((local_28 < (longlong *)((longlong)FVar7 + (longlong)(this->ResultHandlers).ArrayMax * 8))
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
  piVar8 = &(this->ResultHandlers).ArrayNum;
  iVar6 = *piVar8;
  piVar1 = &(this->ResultHandlers).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetResultHandler_*>_>
                      (0x808,(ForElementType<UE::Net::FNetResultHandler_*> *)this,piVar1);
    *piVar8 = iVar6;
  }
  *piVar8 = iVar6 + 1;
  FVar3 = (this->ResultHandlers).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<UE::Net::FNetResultHandler_*>)this;
  if (FVar3 != (ForElementType<UE::Net::FNetResultHandler_*>)0x0) {
    FVar7 = FVar3;
  }
  _Src = (void *)((longlong)FVar7 + (longlong)iVar9 * 8);
  memmove((void *)((longlong)_Src + 8),_Src,(longlong)(iVar6 - iVar9) << 3);
  FVar3 = (this->ResultHandlers).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<UE::Net::FNetResultHandler_*>)this;
  if (FVar3 != (ForElementType<UE::Net::FNetResultHandler_*>)0x0) {
    FVar7 = FVar3;
  }
  *(longlong *)((longlong)iVar9 * 8 + (longlong)FVar7) = local_28[0];
  *(FNetResultManager **)(*(longlong *)pFVar2 + 8) = this;
                    /* WARNING: Could not recover jumptable at 0x0001441d644c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)pFVar2 + 8))();
  return;
}

// AddResultHandlerPtr @ 1441d6460

void __thiscall
UE::Net::FNetResultManager::AddResultHandlerPtr
          (FNetResultManager *this,FNetResultHandler *param_1,EAddResultHandlerPos param_2)

{
  int *piVar1;
  ForElementType<UE::Net::FNetResultHandler_*> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<UE::Net::FNetResultHandler_*> FVar6;
  void *_Src;
  int *piVar7;
  int iVar8;
  FNetResultHandler *local_res10;
  
  if (param_2 == First) {
    iVar8 = 0;
  }
  else {
    iVar8 = (this->ResultHandlers).ArrayNum;
  }
  FVar2 = (this->ResultHandlers).AllocatorInstance.SecondaryData;
  FVar6 = (ForElementType<UE::Net::FNetResultHandler_*>)this;
  if (FVar2 != (ForElementType<UE::Net::FNetResultHandler_*>)0x0) {
    FVar6 = FVar2;
  }
  local_res10 = param_1;
  if ((ulonglong)FVar6 <= &local_res10) {
    FVar6 = (ForElementType<UE::Net::FNetResultHandler_*>)this;
    if (FVar2 != (ForElementType<UE::Net::FNetResultHandler_*>)0x0) {
      FVar6 = FVar2;
    }
    if ((&local_res10 <
         (FNetResultHandler **)((longlong)FVar6 + (longlong)(this->ResultHandlers).ArrayMax * 8)) &&
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
  piVar7 = &(this->ResultHandlers).ArrayNum;
  iVar5 = *piVar7;
  piVar1 = &(this->ResultHandlers).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetResultHandler_*>_>
                      (0x808,(ForElementType<UE::Net::FNetResultHandler_*> *)this,piVar1);
    *piVar7 = iVar5;
  }
  *piVar7 = iVar5 + 1;
  FVar2 = (this->ResultHandlers).AllocatorInstance.SecondaryData;
  FVar6 = (ForElementType<UE::Net::FNetResultHandler_*>)this;
  if (FVar2 != (ForElementType<UE::Net::FNetResultHandler_*>)0x0) {
    FVar6 = FVar2;
  }
  _Src = (void *)((longlong)FVar6 + (longlong)iVar8 * 8);
  memmove((void *)((longlong)_Src + 8),_Src,(longlong)(iVar5 - iVar8) << 3);
  FVar2 = (this->ResultHandlers).AllocatorInstance.SecondaryData;
  FVar6 = (ForElementType<UE::Net::FNetResultHandler_*>)this;
  if (FVar2 != (ForElementType<UE::Net::FNetResultHandler_*>)0x0) {
    FVar6 = FVar2;
  }
  *(FNetResultHandler **)((longlong)FVar6 + (longlong)iVar8 * 8) = local_res10;
  local_res10->ResultManager = this;
  (**(code **)(local_res10->_padding_ + 8))();
  return;
}

// HandleNetResult @ 1441dd350

EHandleNetResult __thiscall
UE::Net::FNetResultManager::HandleNetResult(FNetResultManager *this,FNetResult *param_1)

{
  int iVar1;
  ForElementType<UE::Net::FNetResultHandler_*> FVar2;
  code *pcVar3;
  longlong *plVar4;
  EHandleNetResult EVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ForElementType<UE::Net::FNetResultHandler_*> FVar8;
  undefined1 local_res8 [8];
  
  FVar2 = (this->ResultHandlers).AllocatorInstance.SecondaryData;
  iVar1 = (this->ResultHandlers).ArrayNum;
  FVar8 = (ForElementType<UE::Net::FNetResultHandler_*>)this;
  if (FVar2 != (ForElementType<UE::Net::FNetResultHandler_*>)0x0) {
    FVar8 = FVar2;
  }
  FVar2 = (ForElementType<UE::Net::FNetResultHandler_*>)((longlong)FVar8 + (longlong)iVar1 * 8);
  while( true ) {
    if ((this->ResultHandlers).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Net::FNetResultHandler_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar8 == FVar2) break;
    EVar5 = (**(code **)(**(longlong **)FVar8 + 0x10))(*(longlong **)FVar8,param_1);
    if (EVar5 != NotHandled) {
      return EVar5;
    }
    FVar8 = (ForElementType<UE::Net::FNetResultHandler_*>)((longlong)FVar8 + 8);
  }
  if (*(void **)&this->UnhandledResultCallback == (void *)0x0) {
    EVar5 = NotHandled;
  }
  else {
    Core::Private::Function::CheckCallable(*(void **)&this->UnhandledResultCallback);
    pcVar3 = *(code **)&this->UnhandledResultCallback;
    plVar4 = *(longlong **)&(this->UnhandledResultCallback).field_0x28;
    plVar7 = (longlong *)&(this->UnhandledResultCallback).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar7 = plVar4;
    }
    uVar6 = (**(code **)(*plVar7 + 8))();
    EVar5 = (*pcVar3)(uVar6,param_1);
  }
  return EVar5;
}

// SetUnhandledResultCallback @ 1441ec500

void __thiscall
UE::Net::FNetResultManager::SetUnhandledResultCallback
          (FNetResultManager *this,
          TUniqueFunction<UE::Net::EHandleNetResult___cdecl(UE::Net::FNetResult_&&)> *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  
  uVar12 = *(undefined8 *)&param_1->field_0x8;
  uVar1 = *(undefined4 *)&this->UnhandledResultCallback;
  uVar2 = *(undefined4 *)&(this->UnhandledResultCallback).field_0x4;
  uVar3 = *(undefined4 *)&(this->UnhandledResultCallback).field_0x8;
  uVar4 = *(undefined4 *)&(this->UnhandledResultCallback).field_0xc;
  uVar5 = *(undefined4 *)&(this->UnhandledResultCallback).field_0x10;
  uVar6 = *(undefined4 *)&(this->UnhandledResultCallback).field_0x14;
  uVar7 = *(undefined4 *)&(this->UnhandledResultCallback).field_0x18;
  uVar8 = *(undefined4 *)&(this->UnhandledResultCallback).field_0x1c;
  uVar13 = *(undefined8 *)&(this->UnhandledResultCallback).field_0x20;
  uVar14 = *(undefined8 *)&(this->UnhandledResultCallback).field_0x28;
  *(undefined8 *)&this->UnhandledResultCallback = *(undefined8 *)param_1;
  *(undefined8 *)&(this->UnhandledResultCallback).field_0x8 = uVar12;
  uVar9 = *(undefined4 *)&param_1->field_0x14;
  uVar10 = *(undefined4 *)&param_1->field_0x18;
  uVar11 = *(undefined4 *)&param_1->field_0x1c;
  *(undefined4 *)&(this->UnhandledResultCallback).field_0x10 = *(undefined4 *)&param_1->field_0x10;
  *(undefined4 *)&(this->UnhandledResultCallback).field_0x14 = uVar9;
  *(undefined4 *)&(this->UnhandledResultCallback).field_0x18 = uVar10;
  *(undefined4 *)&(this->UnhandledResultCallback).field_0x1c = uVar11;
  uVar9 = *(undefined4 *)&param_1->field_0x24;
  uVar10 = *(undefined4 *)&param_1->field_0x28;
  uVar11 = *(undefined4 *)&param_1->field_0x2c;
  *(undefined4 *)&(this->UnhandledResultCallback).field_0x20 = *(undefined4 *)&param_1->field_0x20;
  *(undefined4 *)&(this->UnhandledResultCallback).field_0x24 = uVar9;
  *(undefined4 *)&(this->UnhandledResultCallback).field_0x28 = uVar10;
  *(undefined4 *)&(this->UnhandledResultCallback).field_0x2c = uVar11;
  *(undefined4 *)param_1 = uVar1;
  *(undefined4 *)&param_1->field_0x4 = uVar2;
  *(undefined4 *)&param_1->field_0x8 = uVar3;
  *(undefined4 *)&param_1->field_0xc = uVar4;
  *(undefined4 *)&param_1->field_0x10 = uVar5;
  *(undefined4 *)&param_1->field_0x14 = uVar6;
  *(undefined4 *)&param_1->field_0x18 = uVar7;
  *(undefined4 *)&param_1->field_0x1c = uVar8;
  *(undefined8 *)&param_1->field_0x20 = uVar13;
  *(undefined8 *)&param_1->field_0x28 = uVar14;
  if (*(longlong *)param_1 != 0) {
    plVar15 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar15 = *(longlong **)&param_1->field_0x28;
    }
                    /* WARNING: Could not recover jumptable at 0x0001441ec54c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar15 + 0x10))();
    return;
  }
  return;
}

