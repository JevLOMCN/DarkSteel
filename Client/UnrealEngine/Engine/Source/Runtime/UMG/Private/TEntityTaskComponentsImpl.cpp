// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 4

// HasAnyWork @ 146928c90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  FComponentMask *pFVar9;
  byte bVar10;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar9 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar9->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar9->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar10 = 0;
  }
  else {
    bVar10 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0xe;
  pFVar9 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar9->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar9->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x10;
  pFVar9 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar9->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar9->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x12;
  pFVar9 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar9->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar9->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x14;
  pFVar9 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar9->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar9->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x16;
  pFVar9 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar9->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar9->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar6 = 0;
  }
  else {
    bVar6 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x18;
  pFVar9 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar9->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar9->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar7 = 0;
  }
  else {
    bVar7 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x1a;
  pFVar9 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar9->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar9->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar8 = 0;
  }
  else {
    bVar8 = 1;
  }
  return (bool)(bVar8 & bVar10 & bVar2 & bVar3 & bVar4 & bVar5 & bVar6 & bVar7);
}

// PopulatePrerequisites @ 146932320

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::PopulatePrerequisites
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
           *this,FSystemTaskPrerequisites *param_1,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  FComponentTypeID local_res8;
  FComponentTypeID local_resa [3];
  initializer_list<UE::MovieScene::FComponentTypeID> local_28;
  
  local_28._First = &local_res8;
  local_28._Last = local_resa;
  local_res8.Value = 0xffff;
  FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_28);
  MovieScene::PopulatePrerequisites((FComponentAccess *)this,param_1,param_2);
  PopulatePrerequisites<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
            ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&(this->Accessors).field_0x2,param_1,param_2);
  local_res8.Value = *(ushort *)&(this->Accessors).field_0xe;
  if (local_res8.Value != 0xffff) {
    local_28._First = &local_res8;
    local_28._Last = local_resa;
    FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_28);
  }
  local_res8.Value = *(ushort *)&(this->Accessors).field_0x12;
  if (local_res8.Value != 0xffff) {
    local_28._First = &local_res8;
    local_28._Last = local_resa;
    FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_28);
  }
  local_res8.Value = *(ushort *)&(this->Accessors).field_0x16;
  if (local_res8.Value != 0xffff) {
    local_28._First = &local_res8;
    local_28._Last = local_resa;
    FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_28);
  }
  local_res8.Value = *(ushort *)&(this->Accessors).field_0x1a;
  if (local_res8.Value != 0xffff) {
    local_28._First = &local_res8;
    local_28._Last = local_resa;
    FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_28);
  }
  local_res8.Value = *(ushort *)&(this->Accessors).field_0x1e;
  if (local_res8.Value != 0xffff) {
    local_28._First = &local_res8;
    local_28._Last = local_resa;
    FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_28);
  }
  local_res8.Value = *(ushort *)&(this->Accessors).field_0x22;
  if (local_res8.Value != 0xffff) {
    local_28._First = &local_res8;
    local_28._Last = local_resa;
    FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_28);
  }
  local_res8.Value = *(ushort *)&(this->Accessors).field_0x26;
  if (local_res8.Value != 0xffff) {
    local_28._First = &local_res8;
    local_28._Last = local_resa;
    FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_28);
  }
  return;
}

// PreLockComponentHeaders @ 1469336f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  FComponentMask *pFVar7;
  uint uVar8;
  FComponentHeader *pFVar9;
  uint uVar10;
  uint uVar11;
  FComponentHeader *pFVar12;
  FEntityAllocationProxy local_98;
  FEntityAllocationProxy local_88;
  FEntityAllocationProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationProxy local_48;
  FEntityAllocationProxy local_38;
  FEntityAllocationProxy local_28;
  
  uVar11 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0xb,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,0xb);
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4));
  uVar10 = uVar11 + 1;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_28.Manager = param_1->Manager;
  local_28.AllocationIndex = param_1->AllocationIndex;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::PreLockComponentData
            ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&(this->Accessors).field_0x2,&local_28,
             (TRelativePtr<void,unsigned_int> *)
             ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 4));
  uVar10 = uVar11 + 4;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_98.Manager = param_1->Manager;
  local_98.AllocationIndex = param_1->AllocationIndex;
  local_98._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_98);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x10,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_98);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0xe) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 5;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_88.Manager = param_1->Manager;
  local_88.AllocationIndex = param_1->AllocationIndex;
  local_88._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_88);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x14,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_88);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x12) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 6;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_78.Manager = param_1->Manager;
  local_78.AllocationIndex = param_1->AllocationIndex;
  local_78._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_78);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x18,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_78);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x16) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 7;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_68.Manager = param_1->Manager;
  local_68.AllocationIndex = param_1->AllocationIndex;
  local_68._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_68);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x1c,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_68);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x1a) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 8;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_58.Manager = param_1->Manager;
  local_58.AllocationIndex = param_1->AllocationIndex;
  local_58._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_58);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x20,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_58);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x1e) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 9;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_48.Manager = param_1->Manager;
  local_48.AllocationIndex = param_1->AllocationIndex;
  local_48._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_48);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x24,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_48);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x22) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar11 = uVar11 + 10;
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_38.Manager = param_1->Manager;
  local_38.AllocationIndex = param_1->AllocationIndex;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_38);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x28,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_38);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x26) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        return;
      }
    }
  }
  return;
}

// PreLockComponentHeaders @ 146933db0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  FEntityAllocationProxy local_28;
  
  uVar9 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0xb,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,0xb);
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  uVar8 = uVar9 + 1;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_28.Manager = param_1->Manager;
  local_28.AllocationIndex = param_1->AllocationIndex;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::PreLockComponentData
            ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&(this->Accessors).field_0x2,&local_28,
             (TRelativePtr<void,unsigned_int> *)
             ((param_2->AllocatorInstance).Data + (longlong)(int)uVar8 * 4));
  uVar8 = uVar9 + 4;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0xe,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar8 = uVar9 + 5;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x10,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar8 = uVar9 + 6;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x12,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar8 = uVar9 + 7;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x14,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar8 = uVar9 + 8;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x16,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar8 = uVar9 + 9;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x18,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar9 = uVar9 + 10;
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x1a,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  return;
}

