// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 8

// FCounterProvider @ 14d4210b0

FCounterProvider * __thiscall
TraceServices::FCounterProvider::FCounterProvider
          (FCounterProvider *this,IAnalysisSession *param_1,IFrameProvider *param_2)

{
  this->Session = param_1;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__ICounterProvider__;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IEditableCounterProvider__;
  (this->Counters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Counters).ArrayNum = 0;
  (this->Counters).ArrayMax = 0;
  this->FrameProvider = param_2;
  return this;
}

// ~FCounterProvider @ 14d42b3d0

void __thiscall TraceServices::FCounterProvider::~FCounterProvider(FCounterProvider *this)

{
  int iVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  this->_padding_ = (longlong)&_vftable__for__TraceServices__ICounterProvider__;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IEditableCounterProvider__;
  pFVar4 = (this->Counters).AllocatorInstance.Data;
  iVar1 = (this->Counters).ArrayNum;
  pFVar3 = pFVar4 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->Counters).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::ICounter_const_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar4 == pFVar3) break;
    puVar2 = *(undefined8 **)pFVar4;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    pFVar4 = pFVar4 + 8;
  }
  pFVar3 = (this->Counters).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// AddCounter @ 14d43a250

void __thiscall
TraceServices::FCounterProvider::AddCounter(FCounterProvider *this,ICounter *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  IFrameProvider local_res10 [3];
  
  local_res10[0] = (IFrameProvider)param_1;
  if ((this->FrameProvider <= local_res10) &&
     (local_res10 <
      this->FrameProvider + *(int *)((longlong)&(this->Counters).AllocatorInstance.Data + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = *(int *)&(this->Counters).AllocatorInstance.Data;
  piVar1 = (int *)((longlong)&(this->Counters).AllocatorInstance.Data + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&this->FrameProvider,piVar1);
  }
  *(int *)&(this->Counters).AllocatorInstance.Data = iVar4 + 1;
  this->FrameProvider[iVar4] = local_res10[0];
  return;
}

// CreateEditableCounter @ 14d44a2a0

IEditableCounter * __thiscall
TraceServices::FCounterProvider::CreateEditableCounter(FCounterProvider *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FCounter *this_00;
  TArray<double,TSizedDefaultAllocator<64>_> *pTVar5;
  ILinearAllocator *pIVar6;
  IFrameProvider IVar7;
  IEditableCounter *pIVar8;
  IFrameProvider IVar9;
  IFrameProvider local_18 [2];
  
  this_00 = ::operator_new(0x248);
  IVar7 = (IFrameProvider)0x0;
  if (this_00 != (FCounter *)0x0) {
    pTVar5 = (TArray<double,TSizedDefaultAllocator<64>_> *)
             (**(code **)((longlong)*this->Session + 0x38))(this->Session,0);
    pIVar6 = (ILinearAllocator *)(**(code **)(*(longlong *)this->_padding_ + 0xb8))();
    IVar7 = (IFrameProvider)FCounter::FCounter(this_00,pIVar6,pTVar5);
  }
  local_18[0] = IVar7;
  if (((this->FrameProvider <= local_18) &&
      (local_18 <
       this->FrameProvider + *(int *)((longlong)&(this->Counters).AllocatorInstance.Data + 4))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pIVar8 = (IEditableCounter *)(*pcVar2)();
    return pIVar8;
  }
  iVar4 = *(int *)&(this->Counters).AllocatorInstance.Data;
  piVar1 = (int *)((longlong)&(this->Counters).AllocatorInstance.Data + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&this->FrameProvider,piVar1);
  }
  *(int *)&(this->Counters).AllocatorInstance.Data = iVar4 + 1;
  this->FrameProvider[iVar4] = local_18[0];
  IVar9 = (IFrameProvider)((longlong)IVar7 + 8);
  if (IVar7 == (IFrameProvider)0x0) {
    IVar9 = (IFrameProvider)0x0;
  }
  return (IEditableCounter *)IVar9;
}

// EnumerateCounters @ 14d452360

void __thiscall
TraceServices::FCounterProvider::EnumerateCounters
          (FCounterProvider *this,
          TFunctionRef<void___cdecl(unsigned_int,TraceServices::ICounter_const_&)> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  int local_res8 [2];
  
  pFVar3 = (this->Counters).AllocatorInstance.Data;
  iVar2 = (this->Counters).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  iVar4 = 0;
  while( true ) {
    if ((this->Counters).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TraceServices::ICounter_const_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    local_res8[0] = iVar4;
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,local_res8,*(undefined8 *)pFVar3);
    pFVar3 = pFVar3 + 8;
    iVar4 = iVar4 + 1;
  }
  return;
}

// GetCounter @ 14d464500

ICounter * __thiscall
TraceServices::FCounterProvider::GetCounter(FCounterProvider *this,IEditableCounter *param_1)

{
  ICounter *pIVar1;
  
  pIVar1 = (ICounter *)(param_1 + -1);
  if (param_1 == (IEditableCounter *)0x0) {
    pIVar1 = (ICounter *)0x0;
  }
  return pIVar1;
}

// GetCounterCount @ 14d464520

ulong64 __thiscall TraceServices::FCounterProvider::GetCounterCount(FCounterProvider *this)

{
  return (longlong)(this->Counters).ArrayNum;
}

// ReadCounter @ 14d481690

bool __thiscall
TraceServices::FCounterProvider::ReadCounter
          (FCounterProvider *this,uint param_1,
          TFunctionRef<void___cdecl(TraceServices::ICounter_const_&)> *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  uVar1 = (this->Counters).ArrayNum;
  if (uVar1 <= param_1) {
    return false;
  }
  uVar5 = 0;
  if ((int)param_1 < (int)uVar1) {
    uVar5 = ~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  (**(code **)param_2)
            (*(undefined8 *)&param_2->field_0x8,
             *(undefined8 *)((this->Counters).AllocatorInstance.Data + (longlong)(int)param_1 * 8));
  return true;
}

