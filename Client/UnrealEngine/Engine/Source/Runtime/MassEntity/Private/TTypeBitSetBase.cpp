// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 28

// ExportTypes<UScriptStruct,TSizedDefaultAllocator<32>_> @ 1471c70a0

void __thiscall
TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
::ExportTypes<UScriptStruct,TSizedDefaultAllocator<32>_>
          (TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
           *this,TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
  *pTVar9;
  ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_> FVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  UObject *local_28 [2];
  
  iVar12 = 0;
  iVar11 = 0;
  uVar13 = 1;
  if (0 < *(int *)&(this->StructTypesBitArray).field_0x18) {
    do {
      pTVar1 = *(TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                 **)&(this->StructTypesBitArray).field_0x10;
      pTVar9 = this;
      if (pTVar1 != (TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                     *)0x0) {
        pTVar9 = pTVar1;
      }
      if ((*(uint *)(&(pTVar9->StructTypesBitArray).field_0x0 + (longlong)iVar12 * 4) & uVar13) != 0
         ) {
        if ((iVar11 < 0) ||
           (FMassFragmentBitSetStructTrackerWrapper::StructTracker.StructTypesList.ArrayNum <=
            iVar11)) {
LAB_1471c7152:
          pUVar7 = (UObject *)0x0;
        }
        else {
          FVar10 = (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)0x1551dc5e0;
          if (FMassFragmentBitSetStructTrackerWrapper::StructTracker.StructTypesList.
              AllocatorInstance.SecondaryData !=
              (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)0x0) {
            FVar10 = FMassFragmentBitSetStructTrackerWrapper::StructTracker.StructTypesList.
                     AllocatorInstance.SecondaryData;
          }
          pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)FVar10 + (longlong)iVar11 * 8));
          if (pUVar7 == (UObject *)0x0) goto LAB_1471c7152;
          pUVar8 = Z_Construct_UClass_UScriptStruct_NoRegister();
          iVar6 = (int)pUVar8->_padding_;
          if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar6) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar6 * 8) !=
              &pUVar8->_padding_)) goto LAB_1471c7152;
        }
        pFVar2 = (param_1->AllocatorInstance).Data;
        local_28[0] = pUVar7;
        if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)param_1->ArrayMax * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = param_1->ArrayNum;
        if (iVar6 == param_1->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar6 + 1;
        *(UObject **)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_28[0];
      }
      iVar11 = iVar11 + 1;
      uVar4 = uVar13 * 2;
      if (uVar4 == 0) {
        iVar12 = iVar12 + 1;
      }
      uVar13 = 1;
      if (uVar4 != 0) {
        uVar13 = uVar4;
      }
    } while (iVar11 < *(int *)&(this->StructTypesBitArray).field_0x18);
  }
  return;
}

// ExportTypes<UScriptStruct,TSizedDefaultAllocator<32>_> @ 1471c7240

void __thiscall
TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
::ExportTypes<UScriptStruct,TSizedDefaultAllocator<32>_>
          (TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
           *this,TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
  *pTVar9;
  ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_> FVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  UObject *local_28 [2];
  
  iVar12 = 0;
  iVar11 = 0;
  uVar13 = 1;
  if (0 < *(int *)&(this->StructTypesBitArray).field_0x18) {
    do {
      pTVar1 = *(TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                 **)&(this->StructTypesBitArray).field_0x10;
      pTVar9 = this;
      if (pTVar1 != (TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                     *)0x0) {
        pTVar9 = pTVar1;
      }
      if ((*(uint *)(&(pTVar9->StructTypesBitArray).field_0x0 + (longlong)iVar12 * 4) & uVar13) != 0
         ) {
        if ((iVar11 < 0) ||
           (FMassTagBitSetStructTrackerWrapper::StructTracker.StructTypesList.ArrayNum <= iVar11)) {
LAB_1471c72f2:
          pUVar7 = (UObject *)0x0;
        }
        else {
          FVar10 = (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)0x1551dcad0;
          if (FMassTagBitSetStructTrackerWrapper::StructTracker.StructTypesList.AllocatorInstance.
              SecondaryData != (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)0x0)
          {
            FVar10 = FMassTagBitSetStructTrackerWrapper::StructTracker.StructTypesList.
                     AllocatorInstance.SecondaryData;
          }
          pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)FVar10 + (longlong)iVar11 * 8));
          if (pUVar7 == (UObject *)0x0) goto LAB_1471c72f2;
          pUVar8 = Z_Construct_UClass_UScriptStruct_NoRegister();
          iVar6 = (int)pUVar8->_padding_;
          if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar6) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar6 * 8) !=
              &pUVar8->_padding_)) goto LAB_1471c72f2;
        }
        pFVar2 = (param_1->AllocatorInstance).Data;
        local_28[0] = pUVar7;
        if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)param_1->ArrayMax * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = param_1->ArrayNum;
        if (iVar6 == param_1->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar6 + 1;
        *(UObject **)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_28[0];
      }
      iVar11 = iVar11 + 1;
      uVar4 = uVar13 * 2;
      if (uVar4 == 0) {
        iVar12 = iVar12 + 1;
      }
      uVar13 = 1;
      if (uVar4 != 0) {
        uVar13 = uVar4;
      }
    } while (iVar11 < *(int *)&(this->StructTypesBitArray).field_0x18);
  }
  return;
}

// ExportTypes<UScriptStruct,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> @ 1471c73e0

void __thiscall
TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
::ExportTypes<UScriptStruct,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          (TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
           *this,TArray<UScriptStruct_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                 *param_1)

{
  TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
  *pTVar1;
  ForElementType<UScriptStruct_const_*> FVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  ForElementType<UScriptStruct_const_*> FVar9;
  TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
  *pTVar10;
  ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_> FVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  UObject *local_28 [2];
  
  iVar13 = 0;
  iVar12 = 0;
  uVar14 = 1;
  if (0 < *(int *)&(this->StructTypesBitArray).field_0x18) {
    do {
      pTVar1 = *(TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                 **)&(this->StructTypesBitArray).field_0x10;
      pTVar10 = this;
      if (pTVar1 != (TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                     *)0x0) {
        pTVar10 = pTVar1;
      }
      if ((*(uint *)(&(pTVar10->StructTypesBitArray).field_0x0 + (longlong)iVar13 * 4) & uVar14) !=
          0) {
        if ((iVar12 < 0) ||
           (FMassFragmentBitSetStructTrackerWrapper::StructTracker.StructTypesList.ArrayNum <=
            iVar12)) {
LAB_1471c7492:
          pUVar7 = (UObject *)0x0;
        }
        else {
          FVar11 = (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)0x1551dc5e0;
          if (FMassFragmentBitSetStructTrackerWrapper::StructTracker.StructTypesList.
              AllocatorInstance.SecondaryData !=
              (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)0x0) {
            FVar11 = FMassFragmentBitSetStructTrackerWrapper::StructTracker.StructTypesList.
                     AllocatorInstance.SecondaryData;
          }
          pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)FVar11 + (longlong)iVar12 * 8));
          if (pUVar7 == (UObject *)0x0) goto LAB_1471c7492;
          pUVar8 = Z_Construct_UClass_UScriptStruct_NoRegister();
          iVar6 = (int)pUVar8->_padding_;
          if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar6) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar6 * 8) !=
              &pUVar8->_padding_)) goto LAB_1471c7492;
        }
        FVar2 = (param_1->AllocatorInstance).SecondaryData;
        FVar9 = (ForElementType<UScriptStruct_const_*>)param_1;
        if (FVar2 != (ForElementType<UScriptStruct_const_*>)0x0) {
          FVar9 = FVar2;
        }
        local_28[0] = pUVar7;
        if ((ulonglong)FVar9 <= local_28) {
          FVar9 = (ForElementType<UScriptStruct_const_*>)param_1;
          if (FVar2 != (ForElementType<UScriptStruct_const_*>)0x0) {
            FVar9 = FVar2;
          }
          if ((local_28 < (UObject **)((longlong)FVar9 + (longlong)param_1->ArrayMax * 8)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        iVar6 = param_1->ArrayNum;
        if (iVar6 == param_1->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UScriptStruct_const_*>_>
                            (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar6 + 1;
        FVar2 = (param_1->AllocatorInstance).SecondaryData;
        FVar9 = (ForElementType<UScriptStruct_const_*>)param_1;
        if (FVar2 != (ForElementType<UScriptStruct_const_*>)0x0) {
          FVar9 = FVar2;
        }
        *(UObject **)((longlong)FVar9 + (longlong)iVar6 * 8) = local_28[0];
      }
      iVar12 = iVar12 + 1;
      uVar4 = uVar14 * 2;
      if (uVar4 == 0) {
        iVar13 = iVar13 + 1;
      }
      uVar14 = 1;
      if (uVar4 != 0) {
        uVar14 = uVar4;
      }
    } while (iVar12 < *(int *)&(this->StructTypesBitArray).field_0x18);
  }
  return;
}

// ExportTypes<UScriptStruct,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> @ 1471c75b0

void __thiscall
TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
::ExportTypes<UScriptStruct,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          (TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
           *this,TArray<UScriptStruct_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                 *param_1)

{
  TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
  *pTVar1;
  ForElementType<UScriptStruct_const_*> FVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  ForElementType<UScriptStruct_const_*> FVar9;
  TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
  *pTVar10;
  ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_> FVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  UObject *local_28 [2];
  
  iVar13 = 0;
  iVar12 = 0;
  uVar14 = 1;
  if (0 < *(int *)&(this->StructTypesBitArray).field_0x18) {
    do {
      pTVar1 = *(TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                 **)&(this->StructTypesBitArray).field_0x10;
      pTVar10 = this;
      if (pTVar1 != (TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                     *)0x0) {
        pTVar10 = pTVar1;
      }
      if ((*(uint *)(&(pTVar10->StructTypesBitArray).field_0x0 + (longlong)iVar13 * 4) & uVar14) !=
          0) {
        if ((iVar12 < 0) ||
           (FMassTagBitSetStructTrackerWrapper::StructTracker.StructTypesList.ArrayNum <= iVar12)) {
LAB_1471c7662:
          pUVar7 = (UObject *)0x0;
        }
        else {
          FVar11 = (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)0x1551dcad0;
          if (FMassTagBitSetStructTrackerWrapper::StructTracker.StructTypesList.AllocatorInstance.
              SecondaryData != (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)0x0)
          {
            FVar11 = FMassTagBitSetStructTrackerWrapper::StructTracker.StructTypesList.
                     AllocatorInstance.SecondaryData;
          }
          pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)FVar11 + (longlong)iVar12 * 8));
          if (pUVar7 == (UObject *)0x0) goto LAB_1471c7662;
          pUVar8 = Z_Construct_UClass_UScriptStruct_NoRegister();
          iVar6 = (int)pUVar8->_padding_;
          if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar6) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar6 * 8) !=
              &pUVar8->_padding_)) goto LAB_1471c7662;
        }
        FVar2 = (param_1->AllocatorInstance).SecondaryData;
        FVar9 = (ForElementType<UScriptStruct_const_*>)param_1;
        if (FVar2 != (ForElementType<UScriptStruct_const_*>)0x0) {
          FVar9 = FVar2;
        }
        local_28[0] = pUVar7;
        if ((ulonglong)FVar9 <= local_28) {
          FVar9 = (ForElementType<UScriptStruct_const_*>)param_1;
          if (FVar2 != (ForElementType<UScriptStruct_const_*>)0x0) {
            FVar9 = FVar2;
          }
          if ((local_28 < (UObject **)((longlong)FVar9 + (longlong)param_1->ArrayMax * 8)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        iVar6 = param_1->ArrayNum;
        if (iVar6 == param_1->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UScriptStruct_const_*>_>
                            (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar6 + 1;
        FVar2 = (param_1->AllocatorInstance).SecondaryData;
        FVar9 = (ForElementType<UScriptStruct_const_*>)param_1;
        if (FVar2 != (ForElementType<UScriptStruct_const_*>)0x0) {
          FVar9 = FVar2;
        }
        *(UObject **)((longlong)FVar9 + (longlong)iVar6 * 8) = local_28[0];
      }
      iVar12 = iVar12 + 1;
      uVar4 = uVar14 * 2;
      if (uVar4 == 0) {
        iVar13 = iVar13 + 1;
      }
      uVar14 = 1;
      if (uVar4 != 0) {
        uVar14 = uVar4;
      }
    } while (iVar12 < *(int *)&(this->StructTypesBitArray).field_0x18);
  }
  return;
}

// ExportTypes<UScriptStruct,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> @ 1471c7780

void __thiscall
TTypeBitSetBase<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassChunkFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
::ExportTypes<UScriptStruct,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
          (TTypeBitSetBase<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassChunkFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
           *this,TArray<UScriptStruct_const_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                 *param_1)

{
  TTypeBitSetBase<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassChunkFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
  *pTVar1;
  ForElementType<UScriptStruct_const_*> FVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  ForElementType<UScriptStruct_const_*> FVar9;
  TTypeBitSetBase<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassChunkFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
  *pTVar10;
  ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_> FVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  UObject *local_28 [2];
  
  iVar13 = 0;
  iVar12 = 0;
  uVar14 = 1;
  if (0 < *(int *)&(this->StructTypesBitArray).field_0x18) {
    do {
      pTVar1 = *(TTypeBitSetBase<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassChunkFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                 **)&(this->StructTypesBitArray).field_0x10;
      pTVar10 = this;
      if (pTVar1 != (TTypeBitSetBase<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassChunkFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                     *)0x0) {
        pTVar10 = pTVar1;
      }
      if ((*(uint *)(&(pTVar10->StructTypesBitArray).field_0x0 + (longlong)iVar13 * 4) & uVar14) !=
          0) {
        if ((iVar12 < 0) ||
           (FMassChunkFragmentBitSetStructTrackerWrapper::StructTracker.StructTypesList.ArrayNum <=
            iVar12)) {
LAB_1471c7832:
          pUVar7 = (UObject *)0x0;
        }
        else {
          FVar11 = (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)0x1551dcfc0;
          if (FMassChunkFragmentBitSetStructTrackerWrapper::StructTracker.StructTypesList.
              AllocatorInstance.SecondaryData !=
              (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)0x0) {
            FVar11 = FMassChunkFragmentBitSetStructTrackerWrapper::StructTracker.StructTypesList.
                     AllocatorInstance.SecondaryData;
          }
          pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)FVar11 + (longlong)iVar12 * 8));
          if (pUVar7 == (UObject *)0x0) goto LAB_1471c7832;
          pUVar8 = Z_Construct_UClass_UScriptStruct_NoRegister();
          iVar6 = (int)pUVar8->_padding_;
          if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar6) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar6 * 8) !=
              &pUVar8->_padding_)) goto LAB_1471c7832;
        }
        FVar2 = (param_1->AllocatorInstance).SecondaryData;
        FVar9 = (ForElementType<UScriptStruct_const_*>)param_1;
        if (FVar2 != (ForElementType<UScriptStruct_const_*>)0x0) {
          FVar9 = FVar2;
        }
        local_28[0] = pUVar7;
        if ((ulonglong)FVar9 <= local_28) {
          FVar9 = (ForElementType<UScriptStruct_const_*>)param_1;
          if (FVar2 != (ForElementType<UScriptStruct_const_*>)0x0) {
            FVar9 = FVar2;
          }
          if ((local_28 < (UObject **)((longlong)FVar9 + (longlong)param_1->ArrayMax * 8)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        iVar6 = param_1->ArrayNum;
        if (iVar6 == param_1->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UScriptStruct_const_*>_>
                            (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar6 + 1;
        FVar2 = (param_1->AllocatorInstance).SecondaryData;
        FVar9 = (ForElementType<UScriptStruct_const_*>)param_1;
        if (FVar2 != (ForElementType<UScriptStruct_const_*>)0x0) {
          FVar9 = FVar2;
        }
        *(UObject **)((longlong)FVar9 + (longlong)iVar6 * 8) = local_28[0];
      }
      iVar12 = iVar12 + 1;
      uVar4 = uVar14 * 2;
      if (uVar4 == 0) {
        iVar13 = iVar13 + 1;
      }
      uVar14 = 1;
      if (uVar4 != 0) {
        uVar14 = uVar4;
      }
    } while (iVar12 < *(int *)&(this->StructTypesBitArray).field_0x18);
  }
  return;
}

// ExportTypes<UScriptStruct,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> @ 1471c7960

void __thiscall
TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
::ExportTypes<UScriptStruct,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
          (TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
           *this,TArray<UScriptStruct_const_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                 *param_1)

{
  TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
  *pTVar1;
  ForElementType<UScriptStruct_const_*> FVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  ForElementType<UScriptStruct_const_*> FVar9;
  TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
  *pTVar10;
  ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_> FVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  UObject *local_28 [2];
  
  iVar13 = 0;
  iVar12 = 0;
  uVar14 = 1;
  if (0 < *(int *)&(this->StructTypesBitArray).field_0x18) {
    do {
      pTVar1 = *(TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                 **)&(this->StructTypesBitArray).field_0x10;
      pTVar10 = this;
      if (pTVar1 != (TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                     *)0x0) {
        pTVar10 = pTVar1;
      }
      if ((*(uint *)(&(pTVar10->StructTypesBitArray).field_0x0 + (longlong)iVar13 * 4) & uVar14) !=
          0) {
        if ((iVar12 < 0) ||
           (FMassFragmentBitSetStructTrackerWrapper::StructTracker.StructTypesList.ArrayNum <=
            iVar12)) {
LAB_1471c7a12:
          pUVar7 = (UObject *)0x0;
        }
        else {
          FVar11 = (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)0x1551dc5e0;
          if (FMassFragmentBitSetStructTrackerWrapper::StructTracker.StructTypesList.
              AllocatorInstance.SecondaryData !=
              (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)0x0) {
            FVar11 = FMassFragmentBitSetStructTrackerWrapper::StructTracker.StructTypesList.
                     AllocatorInstance.SecondaryData;
          }
          pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)FVar11 + (longlong)iVar12 * 8));
          if (pUVar7 == (UObject *)0x0) goto LAB_1471c7a12;
          pUVar8 = Z_Construct_UClass_UScriptStruct_NoRegister();
          iVar6 = (int)pUVar8->_padding_;
          if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar6) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar6 * 8) !=
              &pUVar8->_padding_)) goto LAB_1471c7a12;
        }
        FVar2 = (param_1->AllocatorInstance).SecondaryData;
        FVar9 = (ForElementType<UScriptStruct_const_*>)param_1;
        if (FVar2 != (ForElementType<UScriptStruct_const_*>)0x0) {
          FVar9 = FVar2;
        }
        local_28[0] = pUVar7;
        if ((ulonglong)FVar9 <= local_28) {
          FVar9 = (ForElementType<UScriptStruct_const_*>)param_1;
          if (FVar2 != (ForElementType<UScriptStruct_const_*>)0x0) {
            FVar9 = FVar2;
          }
          if ((local_28 < (UObject **)((longlong)FVar9 + (longlong)param_1->ArrayMax * 8)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        iVar6 = param_1->ArrayNum;
        if (iVar6 == param_1->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UScriptStruct_const_*>_>
                            (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar6 + 1;
        FVar2 = (param_1->AllocatorInstance).SecondaryData;
        FVar9 = (ForElementType<UScriptStruct_const_*>)param_1;
        if (FVar2 != (ForElementType<UScriptStruct_const_*>)0x0) {
          FVar9 = FVar2;
        }
        *(UObject **)((longlong)FVar9 + (longlong)iVar6 * 8) = local_28[0];
      }
      iVar12 = iVar12 + 1;
      uVar4 = uVar14 * 2;
      if (uVar4 == 0) {
        iVar13 = iVar13 + 1;
      }
      uVar14 = 1;
      if (uVar4 != 0) {
        uVar14 = uVar4;
      }
    } while (iVar12 < *(int *)&(this->StructTypesBitArray).field_0x18);
  }
  return;
}

// ExportTypes<UStruct,TSizedDefaultAllocator<32>_> @ 1471c7b40

void __thiscall
TTypeBitSetBase<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>,USubsystem,UClass,FStructTypeBitSet::FBitSetContainer,1>
::ExportTypes<UStruct,TSizedDefaultAllocator<32>_>
          (TTypeBitSetBase<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>,USubsystem,UClass,FStructTypeBitSet::FBitSetContainer,1>
           *this,TArray<UStruct_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  TTypeBitSetBase<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>,USubsystem,UClass,FStructTypeBitSet::FBitSetContainer,1>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TTypeBitSetBase<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>,USubsystem,UClass,FStructTypeBitSet::FBitSetContainer,1>
  *pTVar7;
  ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_> FVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  UObject *local_28 [2];
  
  iVar11 = 0;
  uVar9 = 0;
  uVar10 = 1;
  if (0 < *(int *)&(this->StructTypesBitArray).field_0x18) {
    do {
      pTVar1 = *(TTypeBitSetBase<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>,USubsystem,UClass,FStructTypeBitSet::FBitSetContainer,1>
                 **)&(this->StructTypesBitArray).field_0x10;
      pTVar7 = this;
      if (pTVar1 != (TTypeBitSetBase<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>,USubsystem,UClass,FStructTypeBitSet::FBitSetContainer,1>
                     *)0x0) {
        pTVar7 = pTVar1;
      }
      if ((*(uint *)(&(pTVar7->StructTypesBitArray).field_0x0 + (longlong)iVar11 * 4) & uVar10) != 0
         ) {
        if (((int)uVar9 < 0) ||
           (FMassExternalSubsystemBitSetStructTrackerWrapper::StructTracker.StructTypesList.ArrayNum
            <= (int)uVar9)) {
          local_28[0] = (UObject *)0x0;
        }
        else {
          uVar5 = 0;
          if ((int)uVar9 <
              FMassExternalSubsystemBitSetStructTrackerWrapper::StructTracker.StructTypesList.
              ArrayNum) {
            uVar5 = ~uVar9 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FVar8 = (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)0x1551dde90;
          if (FMassExternalSubsystemBitSetStructTrackerWrapper::StructTracker.StructTypesList.
              AllocatorInstance.SecondaryData !=
              (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)0x0) {
            FVar8 = FMassExternalSubsystemBitSetStructTrackerWrapper::StructTracker.StructTypesList.
                    AllocatorInstance.SecondaryData;
          }
          local_28[0] = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                            ((longlong)FVar8 + (longlong)(int)uVar9 * 8));
        }
        pFVar2 = (param_1->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)param_1->ArrayMax * 8)) &&
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
        iVar6 = param_1->ArrayNum;
        if (iVar6 == param_1->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar6 + 1;
        *(UObject **)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_28[0];
      }
      uVar5 = uVar10 * 2;
      uVar9 = uVar9 + 1;
      iVar6 = iVar11 + 1;
      if (uVar5 != 0) {
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
      uVar10 = 1;
      if (uVar5 != 0) {
        uVar10 = uVar5;
      }
    } while ((int)uVar9 < *(int *)&(this->StructTypesBitArray).field_0x18);
  }
  return;
}

// Add @ 1471eb5c0

void __thiscall
TTypeBitSetBase<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassChunkFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
::Add(TTypeBitSetBase<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassChunkFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
      *this,UScriptStruct *param_1)

{
  bool bVar1;
  int iVar2;
  UStruct *pUVar3;
  UScriptStruct *local_res18 [2];
  
  pUVar3 = GetBaseUStruct();
  if (pUVar3 != (UStruct *)0x0) {
    iVar2 = (int)pUVar3->_padding_;
    if (((int)param_1->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar2 * 8) != &pUVar3->_padding_
       )) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1471eb611;
  }
  local_res18[0] = param_1;
  bVar1 = `TTypeBitSetBase<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassChunkFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
          ::Add'::__l6::<lambda_1>::operator()(local_res18);
  if (!bVar1) {
    return;
  }
LAB_1471eb611:
  iVar2 = FStructTracker::FindOrAddStructTypeIndex
                    (&FMassChunkFragmentBitSetStructTrackerWrapper::StructTracker,(UStruct *)param_1
                    );
  FStructTypeBitSet::FBitSetContainer::AddAtIndex(&this->StructTypesBitArray,iVar2);
  return;
}

// Add @ 1471eb640

void __thiscall
TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
::Add(TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
      *this,UScriptStruct *param_1)

{
  bool bVar1;
  int iVar2;
  UStruct *pUVar3;
  UScriptStruct *local_res18 [2];
  
  pUVar3 = GetBaseUStruct();
  if (pUVar3 != (UStruct *)0x0) {
    iVar2 = (int)pUVar3->_padding_;
    if (((int)param_1->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar2 * 8) != &pUVar3->_padding_
       )) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1471eb691;
  }
  local_res18[0] = param_1;
  bVar1 = `TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
          ::Add'::__l6::<lambda_1>::operator()(local_res18);
  if (!bVar1) {
    return;
  }
LAB_1471eb691:
  iVar2 = FStructTracker::FindOrAddStructTypeIndex
                    (&FMassConstSharedFragmentBitSetStructTrackerWrapper::StructTracker,
                     (UStruct *)param_1);
  FStructTypeBitSet::FBitSetContainer::AddAtIndex(&this->StructTypesBitArray,iVar2);
  return;
}

// Contains @ 1472069f0

bool __thiscall
TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
::Contains(TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
           *this,UScriptStruct *param_1)

{
  bool bVar1;
  int iVar2;
  UStruct *pUVar3;
  UScriptStruct *local_res18 [2];
  
  pUVar3 = GetBaseUStruct();
  if (pUVar3 != (UStruct *)0x0) {
    iVar2 = (int)pUVar3->_padding_;
    if (((int)param_1->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar2 * 8) != &pUVar3->_padding_
       )) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_147206a41;
  }
  local_res18[0] = param_1;
  bVar1 = `TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
          ::Contains'::__l6::<lambda_1>::operator()(local_res18);
  if (!bVar1) {
    return false;
  }
LAB_147206a41:
  iVar2 = FStructTracker::FindStructTypeIndex
                    (&FMassConstSharedFragmentBitSetStructTrackerWrapper::StructTracker,
                     (UStruct *)param_1);
  if ((iVar2 != -1) &&
     (bVar1 = FStructTypeBitSet::FConstBitSetContainer::Contains
                        ((FConstBitSetContainer *)this,iVar2), bVar1)) {
    return true;
  }
  return false;
}

// Contains @ 147206a90

bool __thiscall
TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
::Contains(TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
           *this,UScriptStruct *param_1)

{
  bool bVar1;
  int iVar2;
  UStruct *pUVar3;
  UScriptStruct *local_res18 [2];
  
  pUVar3 = GetBaseUStruct();
  if (pUVar3 != (UStruct *)0x0) {
    iVar2 = (int)pUVar3->_padding_;
    if (((int)param_1->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar2 * 8) != &pUVar3->_padding_
       )) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_147206ae1;
  }
  local_res18[0] = param_1;
  bVar1 = `TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
          ::Contains'::__l6::<lambda_1>::operator()(local_res18);
  if (!bVar1) {
    return false;
  }
LAB_147206ae1:
  iVar2 = FStructTracker::FindStructTypeIndex
                    (&FMassFragmentBitSetStructTrackerWrapper::StructTracker,(UStruct *)param_1);
  if ((iVar2 != -1) &&
     (bVar1 = FStructTypeBitSet::FConstBitSetContainer::Contains
                        ((FConstBitSetContainer *)this,iVar2), bVar1)) {
    return true;
  }
  return false;
}

// Contains @ 147206b30

bool __thiscall
TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
::Contains(TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
           *this,UScriptStruct *param_1)

{
  bool bVar1;
  int iVar2;
  UStruct *pUVar3;
  UScriptStruct *local_res18 [2];
  
  pUVar3 = GetBaseUStruct();
  if (pUVar3 != (UStruct *)0x0) {
    iVar2 = (int)pUVar3->_padding_;
    if (((int)param_1->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar2 * 8) != &pUVar3->_padding_
       )) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_147206b81;
  }
  local_res18[0] = param_1;
  bVar1 = `TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
          ::Contains'::__l6::<lambda_1>::operator()(local_res18);
  if (!bVar1) {
    return false;
  }
LAB_147206b81:
  iVar2 = FStructTracker::FindStructTypeIndex
                    (&FMassTagBitSetStructTrackerWrapper::StructTracker,(UStruct *)param_1);
  if ((iVar2 != -1) &&
     (bVar1 = FStructTypeBitSet::FConstBitSetContainer::Contains
                        ((FConstBitSetContainer *)this,iVar2), bVar1)) {
    return true;
  }
  return false;
}

// DebugGetIndividualNames @ 14720efa0

void __thiscall
TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
::DebugGetIndividualNames
          (TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
           *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
  *pTVar7;
  FStructTracker *pFVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 local_28 [2];
  
  iVar6 = *(int *)&(this->StructTypesBitArray).field_0x18;
  uVar9 = 0;
  if (0 < iVar6) {
    uVar10 = 1;
    lVar11 = 0;
    do {
      if ((((int)uVar9 < 0) || (iVar6 <= (int)uVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar1 = *(TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                 **)&(this->StructTypesBitArray).field_0x10;
      pTVar7 = this;
      if (pTVar1 != (TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                     *)0x0) {
        pTVar7 = pTVar1;
      }
      uVar5 = uVar9;
      if ((int)uVar9 < 0) {
        uVar5 = uVar9 + 0x1f;
      }
      if ((*(uint *)(&(pTVar7->StructTypesBitArray).field_0x0 + (longlong)((int)uVar5 >> 5) * 4) &
          uVar10) != 0) {
        if (((int)uVar9 < 0) ||
           (FMassTagBitSetStructTrackerWrapper::StructTracker.DebugStructTypeNamesList.ArrayNum <=
            (int)uVar9)) {
          local_28[0] = 0;
        }
        else {
          uVar5 = 0;
          if ((int)uVar9 <
              FMassTagBitSetStructTrackerWrapper::StructTracker.DebugStructTypeNamesList.ArrayNum) {
            uVar5 = ~uVar9 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar8 = &FMassTagBitSetStructTrackerWrapper::StructTracker;
          if (FMassTagBitSetStructTrackerWrapper::StructTracker.DebugStructTypeNamesList.
              AllocatorInstance.SecondaryData != (ForElementType<FName>)0x0) {
            pFVar8 = (FStructTracker *)
                     FMassTagBitSetStructTrackerWrapper::StructTracker.DebugStructTypeNamesList.
                     AllocatorInstance.SecondaryData;
          }
          local_28[0] = *(undefined8 *)(lVar11 + (longlong)pFVar8);
        }
        pFVar2 = (param_1->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)param_1->ArrayMax * 8)) &&
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
        iVar6 = param_1->ArrayNum;
        if (iVar6 == param_1->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar6 + 1;
        *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_28[0];
      }
      iVar6 = *(int *)&(this->StructTypesBitArray).field_0x18;
      uVar9 = uVar9 + 1;
      uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      lVar11 = lVar11 + 8;
    } while ((int)uVar9 < iVar6);
  }
  return;
}

// DebugGetStringDesc @ 14720f1b0

void __thiscall
TTypeBitSetBase<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassChunkFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
::DebugGetStringDesc
          (TTypeBitSetBase<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassChunkFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
           *this,FOutputDevice *param_1)

{
  TTypeBitSetBase<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassChunkFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  TTypeBitSetBase<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassChunkFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
  *pTVar6;
  FStructTracker *pFVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FName local_res8;
  FString local_28;
  
  iVar4 = *(int *)&(this->StructTypesBitArray).field_0x18;
  uVar8 = 0;
  if (0 < iVar4) {
    uVar9 = 1;
    lVar10 = 0;
    do {
      if ((((int)uVar8 < 0) || (iVar4 <= (int)uVar8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar1 = *(TTypeBitSetBase<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassChunkFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                 **)&(this->StructTypesBitArray).field_0x10;
      pTVar6 = this;
      if (pTVar1 != (TTypeBitSetBase<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassChunkFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                     *)0x0) {
        pTVar6 = pTVar1;
      }
      uVar5 = uVar8;
      if ((int)uVar8 < 0) {
        uVar5 = uVar8 + 0x1f;
      }
      if ((*(uint *)(&(pTVar6->StructTypesBitArray).field_0x0 + (longlong)((int)uVar5 >> 5) * 4) &
          uVar9) != 0) {
        if (((int)uVar8 < 0) ||
           (FMassChunkFragmentBitSetStructTrackerWrapper::StructTracker.DebugStructTypeNamesList.
            ArrayNum <= (int)uVar8)) {
          local_res8.ComparisonIndex.Value = 0;
          local_res8.Number = 0;
        }
        else {
          uVar5 = 0;
          if ((int)uVar8 <
              FMassChunkFragmentBitSetStructTrackerWrapper::StructTracker.DebugStructTypeNamesList.
              ArrayNum) {
            uVar5 = ~uVar8 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar7 = &FMassChunkFragmentBitSetStructTrackerWrapper::StructTracker;
          if (FMassChunkFragmentBitSetStructTrackerWrapper::StructTracker.DebugStructTypeNamesList.
              AllocatorInstance.SecondaryData != (ForElementType<FName>)0x0) {
            pFVar7 = (FStructTracker *)
                     FMassChunkFragmentBitSetStructTrackerWrapper::StructTracker.
                     DebugStructTypeNamesList.AllocatorInstance.SecondaryData;
          }
          local_res8 = *(FName *)(lVar10 + (longlong)pFVar7);
        }
        ::FName::ToString(&local_res8,&local_28);
        FOutputDevice::LogfImpl(param_1,L"%s, ");
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      iVar4 = *(int *)&(this->StructTypesBitArray).field_0x18;
      uVar8 = uVar8 + 1;
      uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      lVar10 = lVar10 + 8;
    } while ((int)uVar8 < iVar4);
  }
  return;
}

// DebugGetStringDesc @ 14720f330

void __thiscall
TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
::DebugGetStringDesc
          (TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
           *this,FOutputDevice *param_1)

{
  TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
  *pTVar6;
  FStructTracker *pFVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FName local_res8;
  FString local_28;
  
  iVar4 = *(int *)&(this->StructTypesBitArray).field_0x18;
  uVar8 = 0;
  if (0 < iVar4) {
    uVar9 = 1;
    lVar10 = 0;
    do {
      if ((((int)uVar8 < 0) || (iVar4 <= (int)uVar8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar1 = *(TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                 **)&(this->StructTypesBitArray).field_0x10;
      pTVar6 = this;
      if (pTVar1 != (TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                     *)0x0) {
        pTVar6 = pTVar1;
      }
      uVar5 = uVar8;
      if ((int)uVar8 < 0) {
        uVar5 = uVar8 + 0x1f;
      }
      if ((*(uint *)(&(pTVar6->StructTypesBitArray).field_0x0 + (longlong)((int)uVar5 >> 5) * 4) &
          uVar9) != 0) {
        if (((int)uVar8 < 0) ||
           (FMassConstSharedFragmentBitSetStructTrackerWrapper::StructTracker.
            DebugStructTypeNamesList.ArrayNum <= (int)uVar8)) {
          local_res8.ComparisonIndex.Value = 0;
          local_res8.Number = 0;
        }
        else {
          uVar5 = 0;
          if ((int)uVar8 <
              FMassConstSharedFragmentBitSetStructTrackerWrapper::StructTracker.
              DebugStructTypeNamesList.ArrayNum) {
            uVar5 = ~uVar8 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar7 = &FMassConstSharedFragmentBitSetStructTrackerWrapper::StructTracker;
          if (FMassConstSharedFragmentBitSetStructTrackerWrapper::StructTracker.
              DebugStructTypeNamesList.AllocatorInstance.SecondaryData != (ForElementType<FName>)0x0
             ) {
            pFVar7 = (FStructTracker *)
                     FMassConstSharedFragmentBitSetStructTrackerWrapper::StructTracker.
                     DebugStructTypeNamesList.AllocatorInstance.SecondaryData;
          }
          local_res8 = *(FName *)(lVar10 + (longlong)pFVar7);
        }
        ::FName::ToString(&local_res8,&local_28);
        FOutputDevice::LogfImpl(param_1,L"%s, ");
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      iVar4 = *(int *)&(this->StructTypesBitArray).field_0x18;
      uVar8 = uVar8 + 1;
      uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      lVar10 = lVar10 + 8;
    } while ((int)uVar8 < iVar4);
  }
  return;
}

// DebugGetStringDesc @ 14720f4b0

void __thiscall
TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
::DebugGetStringDesc
          (TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
           *this,FOutputDevice *param_1)

{
  TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
  *pTVar6;
  FStructTracker *pFVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FName local_res8;
  FString local_28;
  
  iVar4 = *(int *)&(this->StructTypesBitArray).field_0x18;
  uVar8 = 0;
  if (0 < iVar4) {
    uVar9 = 1;
    lVar10 = 0;
    do {
      if ((((int)uVar8 < 0) || (iVar4 <= (int)uVar8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar1 = *(TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                 **)&(this->StructTypesBitArray).field_0x10;
      pTVar6 = this;
      if (pTVar1 != (TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                     *)0x0) {
        pTVar6 = pTVar1;
      }
      uVar5 = uVar8;
      if ((int)uVar8 < 0) {
        uVar5 = uVar8 + 0x1f;
      }
      if ((*(uint *)(&(pTVar6->StructTypesBitArray).field_0x0 + (longlong)((int)uVar5 >> 5) * 4) &
          uVar9) != 0) {
        if (((int)uVar8 < 0) ||
           (FMassFragmentBitSetStructTrackerWrapper::StructTracker.DebugStructTypeNamesList.ArrayNum
            <= (int)uVar8)) {
          local_res8.ComparisonIndex.Value = 0;
          local_res8.Number = 0;
        }
        else {
          uVar5 = 0;
          if ((int)uVar8 <
              FMassFragmentBitSetStructTrackerWrapper::StructTracker.DebugStructTypeNamesList.
              ArrayNum) {
            uVar5 = ~uVar8 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar7 = &FMassFragmentBitSetStructTrackerWrapper::StructTracker;
          if (FMassFragmentBitSetStructTrackerWrapper::StructTracker.DebugStructTypeNamesList.
              AllocatorInstance.SecondaryData != (ForElementType<FName>)0x0) {
            pFVar7 = (FStructTracker *)
                     FMassFragmentBitSetStructTrackerWrapper::StructTracker.DebugStructTypeNamesList
                     .AllocatorInstance.SecondaryData;
          }
          local_res8 = *(FName *)(lVar10 + (longlong)pFVar7);
        }
        ::FName::ToString(&local_res8,&local_28);
        FOutputDevice::LogfImpl(param_1,L"%s, ");
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      iVar4 = *(int *)&(this->StructTypesBitArray).field_0x18;
      uVar8 = uVar8 + 1;
      uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      lVar10 = lVar10 + 8;
    } while ((int)uVar8 < iVar4);
  }
  return;
}

// DebugGetStringDesc @ 14720f630

void __thiscall
TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
::DebugGetStringDesc
          (TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
           *this,FOutputDevice *param_1)

{
  TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
  *pTVar6;
  FStructTracker *pFVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FName local_res8;
  FString local_28;
  
  iVar4 = *(int *)&(this->StructTypesBitArray).field_0x18;
  uVar8 = 0;
  if (0 < iVar4) {
    uVar9 = 1;
    lVar10 = 0;
    do {
      if ((((int)uVar8 < 0) || (iVar4 <= (int)uVar8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar1 = *(TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                 **)&(this->StructTypesBitArray).field_0x10;
      pTVar6 = this;
      if (pTVar1 != (TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                     *)0x0) {
        pTVar6 = pTVar1;
      }
      uVar5 = uVar8;
      if ((int)uVar8 < 0) {
        uVar5 = uVar8 + 0x1f;
      }
      if ((*(uint *)(&(pTVar6->StructTypesBitArray).field_0x0 + (longlong)((int)uVar5 >> 5) * 4) &
          uVar9) != 0) {
        if (((int)uVar8 < 0) ||
           (FMassSharedFragmentBitSetStructTrackerWrapper::StructTracker.DebugStructTypeNamesList.
            ArrayNum <= (int)uVar8)) {
          local_res8.ComparisonIndex.Value = 0;
          local_res8.Number = 0;
        }
        else {
          uVar5 = 0;
          if ((int)uVar8 <
              FMassSharedFragmentBitSetStructTrackerWrapper::StructTracker.DebugStructTypeNamesList.
              ArrayNum) {
            uVar5 = ~uVar8 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar7 = &FMassSharedFragmentBitSetStructTrackerWrapper::StructTracker;
          if (FMassSharedFragmentBitSetStructTrackerWrapper::StructTracker.DebugStructTypeNamesList.
              AllocatorInstance.SecondaryData != (ForElementType<FName>)0x0) {
            pFVar7 = (FStructTracker *)
                     FMassSharedFragmentBitSetStructTrackerWrapper::StructTracker.
                     DebugStructTypeNamesList.AllocatorInstance.SecondaryData;
          }
          local_res8 = *(FName *)(lVar10 + (longlong)pFVar7);
        }
        ::FName::ToString(&local_res8,&local_28);
        FOutputDevice::LogfImpl(param_1,L"%s, ");
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      iVar4 = *(int *)&(this->StructTypesBitArray).field_0x18;
      uVar8 = uVar8 + 1;
      uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      lVar10 = lVar10 + 8;
    } while ((int)uVar8 < iVar4);
  }
  return;
}

// DebugGetStringDesc @ 14720f7b0

void __thiscall
TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
::DebugGetStringDesc
          (TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
           *this,FOutputDevice *param_1)

{
  TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
  *pTVar6;
  FStructTracker *pFVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FName local_res8;
  FString local_28;
  
  iVar4 = *(int *)&(this->StructTypesBitArray).field_0x18;
  uVar8 = 0;
  if (0 < iVar4) {
    uVar9 = 1;
    lVar10 = 0;
    do {
      if ((((int)uVar8 < 0) || (iVar4 <= (int)uVar8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar1 = *(TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                 **)&(this->StructTypesBitArray).field_0x10;
      pTVar6 = this;
      if (pTVar1 != (TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                     *)0x0) {
        pTVar6 = pTVar1;
      }
      uVar5 = uVar8;
      if ((int)uVar8 < 0) {
        uVar5 = uVar8 + 0x1f;
      }
      if ((*(uint *)(&(pTVar6->StructTypesBitArray).field_0x0 + (longlong)((int)uVar5 >> 5) * 4) &
          uVar9) != 0) {
        if (((int)uVar8 < 0) ||
           (FMassTagBitSetStructTrackerWrapper::StructTracker.DebugStructTypeNamesList.ArrayNum <=
            (int)uVar8)) {
          local_res8.ComparisonIndex.Value = 0;
          local_res8.Number = 0;
        }
        else {
          uVar5 = 0;
          if ((int)uVar8 <
              FMassTagBitSetStructTrackerWrapper::StructTracker.DebugStructTypeNamesList.ArrayNum) {
            uVar5 = ~uVar8 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar7 = &FMassTagBitSetStructTrackerWrapper::StructTracker;
          if (FMassTagBitSetStructTrackerWrapper::StructTracker.DebugStructTypeNamesList.
              AllocatorInstance.SecondaryData != (ForElementType<FName>)0x0) {
            pFVar7 = (FStructTracker *)
                     FMassTagBitSetStructTrackerWrapper::StructTracker.DebugStructTypeNamesList.
                     AllocatorInstance.SecondaryData;
          }
          local_res8 = *(FName *)(lVar10 + (longlong)pFVar7);
        }
        ::FName::ToString(&local_res8,&local_28);
        FOutputDevice::LogfImpl(param_1,L"%s, ");
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      iVar4 = *(int *)&(this->StructTypesBitArray).field_0x18;
      uVar8 = uVar8 + 1;
      uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      lVar10 = lVar10 + 8;
    } while ((int)uVar8 < iVar4);
  }
  return;
}

// GetIndexIterator @ 147222ea0

FIndexIterator * __thiscall
TTypeBitSetBase<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>,USubsystem,UClass,FStructTypeBitSet::FBitSetContainer,1>
::GetIndexIterator(TTypeBitSetBase<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>,USubsystem,UClass,FStructTypeBitSet::FBitSetContainer,1>
                   *this,FIndexIterator *__return_storage_ptr__,bool param_1)

{
  TTypeBitSetBase<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>,USubsystem,UClass,FStructTypeBitSet::FBitSetContainer,1>
  *pTVar1;
  TTypeBitSetBase<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>,USubsystem,UClass,FStructTypeBitSet::FBitSetContainer,1>
  *pTVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar3 = 0;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->It)._padding_ + 4) = 1;
  *(undefined4 *)&(__return_storage_ptr__->It)._padding_ = 0;
  (__return_storage_ptr__->It).Index = 0;
  (__return_storage_ptr__->It).Array = (TBitArray<FDefaultBitArrayAllocator> *)this;
  __return_storage_ptr__->bValueToCheck = param_1;
  if (0 < *(int *)&(this->StructTypesBitArray).field_0x18) {
    pTVar1 = *(TTypeBitSetBase<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>,USubsystem,UClass,FStructTypeBitSet::FBitSetContainer,1>
               **)&(this->StructTypesBitArray).field_0x10;
    if (pTVar1 == (TTypeBitSetBase<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>,USubsystem,UClass,FStructTypeBitSet::FBitSetContainer,1>
                   *)0x0) {
      pTVar1 = this;
    }
    if ((bool)(*(byte *)&pTVar1->StructTypesBitArray & 1) != param_1) {
      uVar5 = 1;
      iVar4 = 0;
      do {
        iVar3 = iVar3 + 1;
        uVar5 = uVar5 * 2;
        (__return_storage_ptr__->It).Index = iVar3;
        *(uint *)((longlong)&(__return_storage_ptr__->It)._padding_ + 4) = uVar5;
        if (uVar5 == 0) {
          iVar4 = iVar4 + 1;
          *(undefined4 *)((longlong)&(__return_storage_ptr__->It)._padding_ + 4) = 1;
          *(int *)&(__return_storage_ptr__->It)._padding_ = iVar4;
          uVar5 = 1;
        }
        if (*(int *)&(this->StructTypesBitArray).field_0x18 <= iVar3) {
          return __return_storage_ptr__;
        }
        pTVar1 = *(TTypeBitSetBase<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>,USubsystem,UClass,FStructTypeBitSet::FBitSetContainer,1>
                   **)&(this->StructTypesBitArray).field_0x10;
        pTVar2 = this;
        if (pTVar1 != (TTypeBitSetBase<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>,USubsystem,UClass,FStructTypeBitSet::FBitSetContainer,1>
                       *)0x0) {
          pTVar2 = pTVar1;
        }
      } while (((*(uint *)(&(pTVar2->StructTypesBitArray).field_0x0 + (longlong)iVar4 * 4) & uVar5)
               != 0) != param_1);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// Remove @ 1472441c0

void __thiscall
TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
::Remove(TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
         *this,UScriptStruct *param_1)

{
  bool bVar1;
  int iVar2;
  UStruct *pUVar3;
  UScriptStruct *local_res18 [2];
  
  pUVar3 = GetBaseUStruct();
  if (pUVar3 != (UStruct *)0x0) {
    iVar2 = (int)pUVar3->_padding_;
    if (((int)param_1->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar2 * 8) != &pUVar3->_padding_
       )) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_147244211;
  }
  local_res18[0] = param_1;
  bVar1 = `TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
          ::Remove'::__l6::<lambda_1>::operator()(local_res18);
  if (!bVar1) {
    return;
  }
LAB_147244211:
  iVar2 = FStructTracker::FindOrAddStructTypeIndex
                    (&FMassTagBitSetStructTrackerWrapper::StructTracker,(UStruct *)param_1);
  FStructTypeBitSet::FBitSetContainer::RemoveAtIndex(&this->StructTypesBitArray,iVar2);
  return;
}

// operator() @ 1505040e0

bool __thiscall
`TTypeBitSetBase<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassChunkFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
::Add'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  UStruct *pUVar6;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6289920888494095868>);
  if (bVar4) {
    pUVar6 = TTypeBitSetBase<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassChunkFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
             ::GetBaseUStruct();
    local_res10 = (FName)pUVar6->_padding_;
    ::FName::ToString(&local_res10,&local_28);
    UObjectBaseUtility::GetPathName(*(UObjectBaseUtility **)this,&local_18,(UObject *)0x0);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6289920888494095868>,
                       &`public:___cdecl_`public:_void___cdecl_TTypeBitSetBase<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassChunkFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>::Add(UScriptStruct_const&___ptr64)___ptr64'::`6'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15050418b;
    }
  }
  bVar4 = false;
LAB_15050418b:
  if ((bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1505041e0

bool __thiscall
`TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
::Add'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  UStruct *pUVar6;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6289920888494095868>);
  if (bVar4) {
    pUVar6 = TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
             ::GetBaseUStruct();
    local_res10 = (FName)pUVar6->_padding_;
    ::FName::ToString(&local_res10,&local_28);
    UObjectBaseUtility::GetPathName(*(UObjectBaseUtility **)this,&local_18,(UObject *)0x0);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6289920888494095868>,
                       &`public:___cdecl_`public:_void___cdecl_TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>::Add(UScriptStruct_const&___ptr64)___ptr64'::`6'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15050428b;
    }
  }
  bVar4 = false;
LAB_15050428b:
  if ((bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1505042e0

bool __thiscall
`TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
::Contains'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  UStruct *pUVar6;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6289920888494095807>);
  if (bVar4) {
    pUVar6 = TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
             ::GetBaseUStruct();
    local_res10 = (FName)pUVar6->_padding_;
    ::FName::ToString(&local_res10,&local_28);
    UObjectBaseUtility::GetPathName(*(UObjectBaseUtility **)this,&local_18,(UObject *)0x0);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6289920888494095807>,
                       &`public:___cdecl_`public:_bool___cdecl_TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>::Contains(UScriptStruct_const&___ptr64)const___ptr64'::`6'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15050438b;
    }
  }
  bVar4 = false;
LAB_15050438b:
  if ((bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1505043e0

bool __thiscall
`TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
::Contains'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  UStruct *pUVar6;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6289920888494095807>);
  if (bVar4) {
    pUVar6 = TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
             ::GetBaseUStruct();
    local_res10 = (FName)pUVar6->_padding_;
    ::FName::ToString(&local_res10,&local_28);
    UObjectBaseUtility::GetPathName(*(UObjectBaseUtility **)this,&local_18,(UObject *)0x0);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6289920888494095807>,
                       &`public:___cdecl_`public:_bool___cdecl_TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>::Contains(UScriptStruct_const&___ptr64)const___ptr64'::`6'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15050448b;
    }
  }
  bVar4 = false;
LAB_15050448b:
  if ((bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1505044e0

bool __thiscall
`TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
::Remove'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  UStruct *pUVar6;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6289920888494095842>);
  if (bVar4) {
    pUVar6 = TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
             ::GetBaseUStruct();
    local_res10 = (FName)pUVar6->_padding_;
    ::FName::ToString(&local_res10,&local_28);
    UObjectBaseUtility::GetPathName(*(UObjectBaseUtility **)this,&local_18,(UObject *)0x0);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6289920888494095842>,
                       &`public:___cdecl_`public:_void___cdecl_TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>::Remove(UScriptStruct_const&___ptr64)___ptr64'::`6'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15050458b;
    }
  }
  bVar4 = false;
LAB_15050458b:
  if ((bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1505045e0

bool __thiscall
`TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
::Remove'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  UStruct *pUVar6;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6289920888494095842>);
  if (bVar4) {
    pUVar6 = TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
             ::GetBaseUStruct();
    local_res10 = (FName)pUVar6->_padding_;
    ::FName::ToString(&local_res10,&local_28);
    UObjectBaseUtility::GetPathName(*(UObjectBaseUtility **)this,&local_18,(UObject *)0x0);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6289920888494095842>,
                       &`public:___cdecl_`public:_void___cdecl_TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>::Remove(UScriptStruct_const&___ptr64)___ptr64'::`6'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15050468b;
    }
  }
  bVar4 = false;
LAB_15050468b:
  if ((bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1505046e0

bool __thiscall
`TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
::Remove'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  UStruct *pUVar6;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6289920888494095842>);
  if (bVar4) {
    pUVar6 = TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
             ::GetBaseUStruct();
    local_res10 = (FName)pUVar6->_padding_;
    ::FName::ToString(&local_res10,&local_28);
    UObjectBaseUtility::GetPathName(*(UObjectBaseUtility **)this,&local_18,(UObject *)0x0);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6289920888494095842>,
                       &`public:___cdecl_`public:_void___cdecl_TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>::Remove(UScriptStruct_const&___ptr64)___ptr64'::`6'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15050478b;
    }
  }
  bVar4 = false;
LAB_15050478b:
  if ((bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1505047e0

bool __thiscall
`TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
::Remove'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  UStruct *pUVar6;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6289920888494095842>);
  if (bVar4) {
    pUVar6 = TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
             ::GetBaseUStruct();
    local_res10 = (FName)pUVar6->_padding_;
    ::FName::ToString(&local_res10,&local_28);
    UObjectBaseUtility::GetPathName(*(UObjectBaseUtility **)this,&local_18,(UObject *)0x0);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6289920888494095842>,
                       &`public:___cdecl_`public:_void___cdecl_TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>::Remove(UScriptStruct_const&___ptr64)___ptr64'::`6'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15050488b;
    }
  }
  bVar4 = false;
LAB_15050488b:
  if ((bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

