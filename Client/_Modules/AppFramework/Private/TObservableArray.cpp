// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 4

// ~TObservableArray<TSharedPtr<int,1>_> @ 142f398e0

void __thiscall
UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>::~TObservableArray<TSharedPtr<int,1>_>
          (TObservableArray<TSharedPtr<int,1>_> *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ArrayChangedDelegate).field_0x8,
             *(int *)&(this->ArrayChangedDelegate).field_0x10);
  pvVar1 = *(void **)&(this->ArrayChangedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ArrayChangedDelegate);
  DestructItems<TSharedPtr<int,1>,int>
            ((TSharedPtr<int,1> *)(this->Array).AllocatorInstance.Data,(this->Array).ArrayNum);
  pFVar2 = (this->Array).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// Add @ 142f57cc0

int __thiscall
UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>::Add
          (TObservableArray<TSharedPtr<int,1>_> *this,TSharedPtr<int,1> *param_1)

{
  int *piVar1;
  TSharedPtr<int,1> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  undefined7 uStack_2f;
  TObservableArrayChangedArgs<TSharedPtr<int,1>_> local_28;
  
  pTVar2 = (TSharedPtr<int,1> *)(this->Array).AllocatorInstance.Data;
  if (((pTVar2 <= param_1) && (param_1 < pTVar2 + (this->Array).ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  iVar6 = (this->Array).ArrayNum;
  piVar1 = &(this->Array).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
  }
  pFVar3 = (this->Array).AllocatorInstance.Data;
  (this->Array).ArrayNum = iVar6 + 1;
  lVar7 = (longlong)iVar6 * 0x10;
  *(int **)(pFVar3 + lVar7) = param_1->Object;
  *(TReferenceControllerBase<1> **)(pFVar3 + lVar7 + 8) =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (int *)0x0;
  pFVar3 = (this->Array).AllocatorInstance.Data;
  if ((iVar6 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result.Array.Num() > 0 && Result.StartIndex >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Containers\\ObservableArray.h"
                         ,0x3d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  local_28.Array.ArrayNum = 1;
  local_28.MoveIndex = -1;
  local_28.StartIndex = iVar6;
  local_28._25_7_ = uStack_2f;
  local_28.Action = Add;
  local_28.Array.DataPtr = (TSharedPtr<int,1> *)(pFVar3 + lVar7);
  TMulticastDelegate<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<int,1>_>),FDefaultDelegateUserPolicy>
  ::Broadcast(&this->ArrayChangedDelegate,&local_28);
  return iVar6;
}

// Num @ 142fedc40

int __thiscall
UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>::Num
          (TObservableArray<TSharedPtr<int,1>_> *this)

{
  return (this->Array).ArrayNum;
}

// RemoveAt @ 143008080

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>::RemoveAt
          (TObservableArray<TSharedPtr<int,1>_> *this,int param_1,EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  TSharedPtr<int,1> local_58;
  TSharedPtr<int,1> *local_48;
  undefined4 uStack_40;
  int local_38;
  int iStack_34;
  EObservableArrayChangedAction EStack_30;
  undefined7 uStack_2f;
  TObservableArrayChangedArgs<TSharedPtr<int,1>_> local_28;
  
  uVar3 = 0;
  if (param_1 < (this->Array).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < Num())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Containers\\ObservableArray.h"
                         ,0x151,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar3 = 0;
  if (param_1 < (this->Array).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar4 = (this->Array).AllocatorInstance.Data + (longlong)param_1 * 0x10;
  local_58.Object = *(int **)pFVar4;
  local_58.SharedReferenceCount.ReferenceController = *(TReferenceControllerBase<1> **)(pFVar4 + 8);
  *(undefined8 *)(pFVar4 + 8) = 0;
  *(undefined8 *)pFVar4 = 0;
  TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_>::RemoveAt(&this->Array,param_1,param_2);
  local_28.Array.DataPtr = &local_58;
  iStack_34 = -1;
  EStack_30 = Remove;
  uStack_40 = 1;
  local_38 = param_1;
  local_48 = local_28.Array.DataPtr;
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result.Array.Num() > 0 && Result.StartIndex >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Containers\\ObservableArray.h"
                       ,0x47,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_28.Array.ArrayNum = 1;
  local_28.MoveIndex = iStack_34;
  local_28.StartIndex = local_38;
  local_28._25_7_ = uStack_2f;
  local_28.Action = EStack_30;
  TMulticastDelegate<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<int,1>_>),FDefaultDelegateUserPolicy>
  ::Broadcast(&this->ArrayChangedDelegate,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  return;
}

