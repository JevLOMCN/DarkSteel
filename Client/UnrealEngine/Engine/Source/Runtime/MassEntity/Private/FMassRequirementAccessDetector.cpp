// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 7

// Operation<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>_> @ 1471d1eb0

void __thiscall
FMassRequirementAccessDetector::
Operation<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>_>
          (FMassRequirementAccessDetector *this,
          TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
          *param_1,pmf_6fcdee88 param_2)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  ulonglong *puVar6;
  uint uVar7;
  ulonglong *puVar8;
  undefined1 *puVar9;
  ForAnyElementType FVar10;
  undefined1 local_res20 [8];
  TArray<UStruct_const_*,TSizedDefaultAllocator<32>_> local_28;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  TTypeBitSetBase<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>,USubsystem,UClass,FStructTypeBitSet::FBitSetContainer,1>
  ::ExportTypes<UStruct,TSizedDefaultAllocator<32>_>
            ((TTypeBitSetBase<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>,USubsystem,UClass,FStructTypeBitSet::FBitSetContainer,1>
              *)param_1,&local_28);
  iVar4 = local_28.ArrayNum;
  pFVar1 = local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 8;
  FVar10.Data = local_28.AllocatorInstance.Data;
LAB_1471d1f00:
  do {
    if (local_28.ArrayNum != iVar4) {
      `TCheckedPointerIterator<UStruct_const_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (FVar10.Data == pFVar1) {
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      return;
    }
    uVar2 = *(ulonglong *)FVar10.Data;
    uVar7 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    if (*(int *)&(this->Detectors).field_0x8 != *(int *)&(this->Detectors).field_0x34) {
      puVar3 = *(undefined1 **)&(this->Detectors).field_0x40;
      puVar9 = &(this->Detectors).field_0x38;
      if (puVar3 != (undefined1 *)0x0) {
        puVar9 = puVar3;
      }
      iVar5 = *(int *)(puVar9 + (ulonglong)
                                (*(int *)&(this->Detectors).field_0x48 - 1U &
                                (uVar7 >> 0x10 ^ uVar7)) * 4);
      if (iVar5 != -1) {
        do {
          puVar6 = (ulonglong *)((longlong)iVar5 * 0x20 + *(longlong *)&this->Detectors);
          if (*puVar6 == uVar2) {
            puVar8 = puVar6 + 1;
            if (puVar6 == (ulonglong *)0x0) {
              puVar8 = (ulonglong *)0x0;
            }
            if (puVar8 != (ulonglong *)0x0) {
              (*(code *)param_2)(*puVar8);
            }
            goto LAB_1471d1fb5;
          }
          iVar5 = (int)puVar6[3];
        } while (iVar5 != -1);
        FVar10.Data = FVar10.Data + 8;
        goto LAB_1471d1f00;
      }
    }
LAB_1471d1fb5:
    FVar10.Data = FVar10.Data + 8;
  } while( true );
}

// AddDetectors @ 1471ecf90

void __thiscall
FMassRequirementAccessDetector::AddDetectors
          (FMassRequirementAccessDetector *this,FStructTracker *param_1)

{
  ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_> FVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  atomic<unsigned_int> *paVar6;
  ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_> FVar7;
  TPairInitializer<UStruct_const_*_&&,TSharedRef<FRWAccessDetector,1>_&&> local_res10;
  TRawPtrProxy<FRWAccessDetector> local_res20;
  UObject *local_48;
  UObject **local_40;
  TSharedRef<FRWAccessDetector,1> *local_38;
  TSharedRef<FRWAccessDetector,1> local_30;
  
  FVar7 = (param_1->StructTypesList).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->StructTypesList).ArrayNum;
  if (FVar7 == (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)0x0) {
    FVar7 = (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)
            &param_1->StructTypesList;
  }
  if ((iVar2 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FVar1 = (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)
          ((longlong)FVar7 + (longlong)iVar2 * 8);
  if (FVar7 != FVar1) {
    do {
      local_res10.Value = *(TSharedRef<FRWAccessDetector,1> **)FVar7;
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_res10.Value);
      if ((pUVar5 == (UObject *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type.Get()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassRequirementAccessDetector.cpp"
                             ,0x20,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      paVar6 = ::operator_new(4);
      local_res20.Object = (FRWAccessDetector *)(atomic<unsigned_int> *)0x0;
      if (paVar6 != (atomic<unsigned_int> *)0x0) {
        *paVar6 = (atomic<unsigned_int>)0x0;
        local_res20.Object = (FRWAccessDetector *)paVar6;
      }
      TSharedRef<FRWAccessDetector,1>::TSharedRef<FRWAccessDetector,1><FRWAccessDetector>
                (&local_30,&local_res20);
      local_48 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_res10.Value);
      local_40 = &local_48;
      local_38 = &local_30;
      TSet<TTuple<UStruct_const_*,TSharedRef<FRWAccessDetector,1>_>,TDefaultMapHashableKeyFuncs<UStruct_const_*,TSharedRef<FRWAccessDetector,1>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UStruct_const_*_&&,TSharedRef<FRWAccessDetector,1>_&&>_>
                ((TSet<TTuple<UStruct_const_*,TSharedRef<FRWAccessDetector,1>_>,TDefaultMapHashableKeyFuncs<UStruct_const_*,TSharedRef<FRWAccessDetector,1>,0>,FDefaultSetAllocator>
                  *)this,&local_res10,(bool *)&local_40);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_30.SharedReferenceCount.ReferenceController);
      FVar7 = (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)((longlong)FVar7 + 8);
    } while (FVar7 != FVar1);
  }
  return;
}

// Aquire @ 1471f3d70

void __thiscall
FMassRequirementAccessDetector::Aquire
          (FMassRequirementAccessDetector *this,
          TArrayView<FMassFragmentRequirementDescription_const_,int> *param_1)

{
  atomic<unsigned_int> aVar1;
  UScriptStruct *pUVar2;
  undefined1 *puVar3;
  int *piVar4;
  atomic<unsigned_int> *paVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  ulonglong *puVar9;
  TSharedRef<FRWAccessDetector,1> *pTVar10;
  uint uVar11;
  undefined1 *puVar12;
  ulonglong *puVar13;
  FMassFragmentRequirementDescription *pFVar14;
  ulonglong *puVar15;
  FMassFragmentRequirementDescription *pFVar16;
  
  pFVar14 = param_1->DataPtr;
  pFVar16 = pFVar14 + param_1->ArrayNum;
  if (pFVar14 != pFVar16) {
    puVar15 = (ulonglong *)0x0;
    do {
      if (pFVar14->Presence != None) {
        if (pFVar14->AccessMode == ReadWrite) {
          pUVar2 = pFVar14->StructType;
          uVar11 = ((uint)((ulonglong)pUVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar2 >> 4)) *
                   -0x7a143595;
          uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
          puVar9 = puVar15;
          if (*(int *)&(this->Detectors).field_0x8 != *(int *)&(this->Detectors).field_0x34) {
            puVar3 = *(undefined1 **)&(this->Detectors).field_0x40;
            puVar12 = &(this->Detectors).field_0x38;
            if (puVar3 != (undefined1 *)0x0) {
              puVar12 = puVar3;
            }
            iVar8 = *(int *)(puVar12 +
                            (ulonglong)
                            (*(int *)&(this->Detectors).field_0x48 - 1U & (uVar11 >> 0x10 ^ uVar11))
                            * 4);
            if (iVar8 != -1) {
              do {
                puVar9 = (ulonglong *)((longlong)iVar8 * 0x20 + *(longlong *)&this->Detectors);
                if ((UScriptStruct *)*puVar9 == pUVar2) break;
                iVar8 = (int)puVar9[3];
                puVar9 = puVar15;
              } while (iVar8 != -1);
            }
          }
          puVar13 = puVar9 + 1;
          if (puVar9 == (ulonglong *)0x0) {
            puVar13 = puVar15;
          }
          piVar4 = (int *)*puVar13;
          LOCK();
          iVar8 = *piVar4;
          *piVar4 = *piVar4 + 0x100000;
          UNLOCK();
          if (((iVar8 != 0) &&
              (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                                 ,0x72,
                                 L"Acquiring a write access while there are ongoing read or write access"
                                ), bVar7)) {
code_r0x0001471f3ecd:
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        else if (pFVar14->AccessMode == ReadOnly) {
          pTVar10 = TMapBase<UStruct_const_*,TSharedRef<FRWAccessDetector,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStruct_const_*,TSharedRef<FRWAccessDetector,1>,0>_>
                    ::Find((TMapBase<UStruct_const_*,TSharedRef<FRWAccessDetector,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStruct_const_*,TSharedRef<FRWAccessDetector,1>,0>_>
                            *)this,(UStruct *)pFVar14->StructType);
          paVar5 = &pTVar10->Object->AtomicValue;
          LOCK();
          aVar1 = *paVar5;
          *paVar5 = (atomic<unsigned_int>)((int)*paVar5 + 1);
          UNLOCK();
          if (((((uint)aVar1 & 0xfff00000) != 0) &&
              (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                                 ,0x5c,
                                 L"Acquiring a read access while there is already a write access"),
             bVar7)) goto code_r0x0001471f3ecd;
        }
      }
      pFVar14 = pFVar14 + 1;
    } while (pFVar14 != pFVar16);
  }
  return;
}

// Initialize @ 14722d740

void __thiscall FMassRequirementAccessDetector::Initialize(FMassRequirementAccessDetector *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassRequirementAccessDetector.cpp"
                       ,0x13,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AddDetectors(this,&FMassFragmentBitSetStructTrackerWrapper::StructTracker);
  AddDetectors(this,&FMassChunkFragmentBitSetStructTrackerWrapper::StructTracker);
  AddDetectors(this,&FMassSharedFragmentBitSetStructTrackerWrapper::StructTracker);
  AddDetectors(this,&FMassConstSharedFragmentBitSetStructTrackerWrapper::StructTracker);
  AddDetectors(this,&FMassExternalSubsystemBitSetStructTrackerWrapper::StructTracker);
  return;
}

// Release @ 1472439b0

void __thiscall
FMassRequirementAccessDetector::Release
          (FMassRequirementAccessDetector *this,
          TArrayView<FMassFragmentRequirementDescription_const_,int> *param_1)

{
  atomic<unsigned_int> aVar1;
  UScriptStruct *pUVar2;
  undefined1 *puVar3;
  int *piVar4;
  atomic<unsigned_int> *paVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  ulonglong *puVar9;
  TSharedRef<FRWAccessDetector,1> *pTVar10;
  uint uVar11;
  undefined1 *puVar12;
  ulonglong *puVar13;
  FMassFragmentRequirementDescription *pFVar14;
  ulonglong *puVar15;
  FMassFragmentRequirementDescription *pFVar16;
  
  pFVar14 = param_1->DataPtr;
  pFVar16 = pFVar14 + param_1->ArrayNum;
  if (pFVar14 != pFVar16) {
    puVar15 = (ulonglong *)0x0;
    do {
      if (pFVar14->Presence != None) {
        if (pFVar14->AccessMode == ReadWrite) {
          pUVar2 = pFVar14->StructType;
          uVar11 = ((uint)((ulonglong)pUVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar2 >> 4)) *
                   -0x7a143595;
          uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
          puVar9 = puVar15;
          if (*(int *)&(this->Detectors).field_0x8 != *(int *)&(this->Detectors).field_0x34) {
            puVar3 = *(undefined1 **)&(this->Detectors).field_0x40;
            puVar12 = &(this->Detectors).field_0x38;
            if (puVar3 != (undefined1 *)0x0) {
              puVar12 = puVar3;
            }
            iVar8 = *(int *)(puVar12 +
                            (ulonglong)
                            (*(int *)&(this->Detectors).field_0x48 - 1U & (uVar11 >> 0x10 ^ uVar11))
                            * 4);
            if (iVar8 != -1) {
              do {
                puVar9 = (ulonglong *)((longlong)iVar8 * 0x20 + *(longlong *)&this->Detectors);
                if ((UScriptStruct *)*puVar9 == pUVar2) break;
                iVar8 = (int)puVar9[3];
                puVar9 = puVar15;
              } while (iVar8 != -1);
            }
          }
          puVar13 = puVar9 + 1;
          if (puVar9 == (ulonglong *)0x0) {
            puVar13 = puVar15;
          }
          piVar4 = (int *)*puVar13;
          LOCK();
          iVar8 = *piVar4;
          *piVar4 = *piVar4 + -0x100000;
          UNLOCK();
          if (((iVar8 != 0x100000) &&
              (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                                 ,0x7d,
                                 L"Another thread asked to have a read or write access during this write access"
                                ), bVar7)) {
code_r0x000147243b11:
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        else if (pFVar14->AccessMode == ReadOnly) {
          pTVar10 = TMapBase<UStruct_const_*,TSharedRef<FRWAccessDetector,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStruct_const_*,TSharedRef<FRWAccessDetector,1>,0>_>
                    ::Find((TMapBase<UStruct_const_*,TSharedRef<FRWAccessDetector,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStruct_const_*,TSharedRef<FRWAccessDetector,1>,0>_>
                            *)this,(UStruct *)pFVar14->StructType);
          paVar5 = &pTVar10->Object->AtomicValue;
          LOCK();
          aVar1 = *paVar5;
          *paVar5 = (atomic<unsigned_int>)((int)*paVar5 - 1);
          UNLOCK();
          if (((((uint)aVar1 & 0xfff00000) != 0) &&
              (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                                 ,0x67,
                                 L"Another thread asked to have a write access during this read access"
                                ), bVar7)) goto code_r0x000147243b11;
        }
      }
      pFVar14 = pFVar14 + 1;
    } while (pFVar14 != pFVar16);
  }
  return;
}

// ReleaseAccess @ 147243e00

void __thiscall
FMassRequirementAccessDetector::ReleaseAccess
          (FMassRequirementAccessDetector *this,FMassEntityQuery *param_1)

{
  TArrayView<FMassFragmentRequirementDescription_const_,int> *pTVar1;
  TArrayView<FMassFragmentRequirementDescription_const_,int> local_28;
  TArrayView<FMassFragmentRequirementDescription_const_,int> local_18;
  
  if (UE::Mass::Private::bTrackRequirementsAccess) {
    Operation<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>_>
              (this,(TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                     *)&param_1->_padding_,(pmf_6fcdee88)0x14719a4f0);
    Operation<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>_>
              (this,(TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                     *)&param_1->_padding_,(pmf_6fcdee88)0x1418f25b0);
    pTVar1 = TArrayView<FMassFragmentRequirementDescription_const_,int>::
             TArrayView<FMassFragmentRequirementDescription_const_,int><TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_>_const_&,TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_>_>
                       (&local_18,
                        (TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_> *)
                        param_1);
    local_28.DataPtr = pTVar1->DataPtr;
    local_28.ArrayNum = pTVar1->ArrayNum;
    local_28._12_4_ = *(undefined4 *)&pTVar1->field_0xc;
    Release(this,&local_28);
    pTVar1 = TArrayView<FMassFragmentRequirementDescription_const_,int>::
             TArrayView<FMassFragmentRequirementDescription_const_,int><TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_>_const_&,TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_>_>
                       (&local_18,
                        (TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_> *)
                        &param_1->_padding_);
    local_28.DataPtr = pTVar1->DataPtr;
    local_28.ArrayNum = pTVar1->ArrayNum;
    local_28._12_4_ = *(undefined4 *)&pTVar1->field_0xc;
    Release(this,&local_28);
    pTVar1 = TArrayView<FMassFragmentRequirementDescription_const_,int>::
             TArrayView<FMassFragmentRequirementDescription_const_,int><TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_>_const_&,TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_>_>
                       (&local_18,
                        (TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_> *)
                        &param_1->_padding_);
    local_28.DataPtr = pTVar1->DataPtr;
    local_28.ArrayNum = pTVar1->ArrayNum;
    local_28._12_4_ = *(undefined4 *)&pTVar1->field_0xc;
    Release(this,&local_28);
    pTVar1 = TArrayView<FMassFragmentRequirementDescription_const_,int>::
             TArrayView<FMassFragmentRequirementDescription_const_,int><TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_>_const_&,TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_>_>
                       (&local_18,
                        (TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_> *)
                        &param_1->_padding_);
    local_28.DataPtr = pTVar1->DataPtr;
    local_28.ArrayNum = pTVar1->ArrayNum;
    local_28._12_4_ = *(undefined4 *)&pTVar1->field_0xc;
    Release(this,&local_28);
  }
  return;
}

// RequireAccess @ 1472486a0

void __thiscall
FMassRequirementAccessDetector::RequireAccess
          (FMassRequirementAccessDetector *this,FMassEntityQuery *param_1)

{
  TArrayView<FMassFragmentRequirementDescription_const_,int> *pTVar1;
  TArrayView<FMassFragmentRequirementDescription_const_,int> local_28;
  TArrayView<FMassFragmentRequirementDescription_const_,int> local_18;
  
  if (UE::Mass::Private::bTrackRequirementsAccess) {
    Operation<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>_>
              (this,(TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                     *)&param_1->_padding_,(pmf_6fcdee88)0x1471eb370);
    Operation<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>_>
              (this,(TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                     *)&param_1->_padding_,(pmf_6fcdee88)0x1471eb3d0);
    pTVar1 = TArrayView<FMassFragmentRequirementDescription_const_,int>::
             TArrayView<FMassFragmentRequirementDescription_const_,int><TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_>_const_&,TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_>_>
                       (&local_18,
                        (TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_> *)
                        param_1);
    local_28.DataPtr = pTVar1->DataPtr;
    local_28.ArrayNum = pTVar1->ArrayNum;
    local_28._12_4_ = *(undefined4 *)&pTVar1->field_0xc;
    Aquire(this,&local_28);
    pTVar1 = TArrayView<FMassFragmentRequirementDescription_const_,int>::
             TArrayView<FMassFragmentRequirementDescription_const_,int><TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_>_const_&,TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_>_>
                       (&local_18,
                        (TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_> *)
                        &param_1->_padding_);
    local_28.DataPtr = pTVar1->DataPtr;
    local_28.ArrayNum = pTVar1->ArrayNum;
    local_28._12_4_ = *(undefined4 *)&pTVar1->field_0xc;
    Aquire(this,&local_28);
    pTVar1 = TArrayView<FMassFragmentRequirementDescription_const_,int>::
             TArrayView<FMassFragmentRequirementDescription_const_,int><TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_>_const_&,TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_>_>
                       (&local_18,
                        (TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_> *)
                        &param_1->_padding_);
    local_28.DataPtr = pTVar1->DataPtr;
    local_28.ArrayNum = pTVar1->ArrayNum;
    local_28._12_4_ = *(undefined4 *)&pTVar1->field_0xc;
    Aquire(this,&local_28);
    pTVar1 = TArrayView<FMassFragmentRequirementDescription_const_,int>::
             TArrayView<FMassFragmentRequirementDescription_const_,int><TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_>_const_&,TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_>_>
                       (&local_18,
                        (TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_> *)
                        &param_1->_padding_);
    local_28.DataPtr = pTVar1->DataPtr;
    local_28.ArrayNum = pTVar1->ArrayNum;
    local_28._12_4_ = *(undefined4 *)&pTVar1->field_0xc;
    Aquire(this,&local_28);
  }
  return;
}

