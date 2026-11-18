// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 2

// FScopedRequirementAccessDetector @ 1471dc4d0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FScopedRequirementAccessDetector * __thiscall
UE::Mass::Debug::FScopedRequirementAccessDetector::FScopedRequirementAccessDetector
          (FScopedRequirementAccessDetector *this,FMassEntityQuery *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FScopedRequirementAccessDetector *pFVar4;
  TArrayView<FMassFragmentRequirementDescription_const_,int> *pTVar5;
  FMassRequirementAccessDetector *this_00;
  TArrayView<FMassFragmentRequirementDescription_const_,int> local_88;
  TArrayView<FMassFragmentRequirementDescription_const_,int> local_78;
  TArrayView<FMassFragmentRequirementDescription_const_,int> local_68;
  TArrayView<FMassFragmentRequirementDescription_const_,int> local_58;
  TArrayView<FMassFragmentRequirementDescription_const_,int> local_48;
  TArrayView<FMassFragmentRequirementDescription_const_,int> local_38;
  TArrayView<FMassFragmentRequirementDescription_const_,int> local_28;
  TArrayView<FMassFragmentRequirementDescription_const_,int> local_18;
  
  (this->EntityManager).Object = (FMassEntityManager *)param_1->_padding_;
  pTVar1 = (TReferenceControllerBase<1> *)param_1->_padding_;
  (this->EntityManager).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->Query = param_1;
  if ((this->EntityManager).Object == (FMassEntityManager *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FScopedRequirementAccessDetector *)(*pcVar2)();
      return pFVar4;
    }
  }
  this_00 = &((this->EntityManager).Object)->RequirementAccessDetector;
  if (Mass::Private::bTrackRequirementsAccess != false) {
    FMassRequirementAccessDetector::
    Operation<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>_>
              (this_00,(TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                        *)&param_1->_padding_,(pmf_6fcdee88)0x1471eb370);
    FMassRequirementAccessDetector::
    Operation<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>_>
              (this_00,(TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                        *)&param_1->_padding_,(pmf_6fcdee88)0x1471eb3d0);
    pTVar5 = TArrayView<FMassFragmentRequirementDescription_const_,int>::
             TArrayView<FMassFragmentRequirementDescription_const_,int><TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_>_const_&,TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_>_>
                       (&local_48,
                        (TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_> *)
                        param_1);
    local_88.DataPtr = pTVar5->DataPtr;
    local_88.ArrayNum = pTVar5->ArrayNum;
    local_88._12_4_ = *(undefined4 *)&pTVar5->field_0xc;
    FMassRequirementAccessDetector::Aquire(this_00,&local_88);
    pTVar5 = TArrayView<FMassFragmentRequirementDescription_const_,int>::
             TArrayView<FMassFragmentRequirementDescription_const_,int><TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_>_const_&,TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_>_>
                       (&local_38,
                        (TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_> *)
                        &param_1->_padding_);
    local_78.DataPtr = pTVar5->DataPtr;
    local_78.ArrayNum = pTVar5->ArrayNum;
    local_78._12_4_ = *(undefined4 *)&pTVar5->field_0xc;
    FMassRequirementAccessDetector::Aquire(this_00,&local_78);
    pTVar5 = TArrayView<FMassFragmentRequirementDescription_const_,int>::
             TArrayView<FMassFragmentRequirementDescription_const_,int><TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_>_const_&,TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_>_>
                       (&local_28,
                        (TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_> *)
                        &param_1->_padding_);
    local_68.DataPtr = pTVar5->DataPtr;
    local_68.ArrayNum = pTVar5->ArrayNum;
    local_68._12_4_ = *(undefined4 *)&pTVar5->field_0xc;
    FMassRequirementAccessDetector::Aquire(this_00,&local_68);
    pTVar5 = TArrayView<FMassFragmentRequirementDescription_const_,int>::
             TArrayView<FMassFragmentRequirementDescription_const_,int><TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_>_const_&,TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_>_>
                       (&local_18,
                        (TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_> *)
                        &param_1->_padding_);
    local_58.DataPtr = pTVar5->DataPtr;
    local_58.ArrayNum = pTVar5->ArrayNum;
    local_58._12_4_ = *(undefined4 *)&pTVar5->field_0xc;
    FMassRequirementAccessDetector::Aquire(this_00,&local_58);
  }
  return this;
}

// ~FScopedRequirementAccessDetector @ 1471e0ae0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UE::Mass::Debug::FScopedRequirementAccessDetector::~FScopedRequirementAccessDetector
          (FScopedRequirementAccessDetector *this)

{
  FMassEntityQuery *pFVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FMassFragmentRequirementDescription_const_,int> *pTVar4;
  FMassRequirementAccessDetector *this_00;
  TArrayView<FMassFragmentRequirementDescription_const_,int> local_88;
  TArrayView<FMassFragmentRequirementDescription_const_,int> local_78;
  TArrayView<FMassFragmentRequirementDescription_const_,int> local_68;
  TArrayView<FMassFragmentRequirementDescription_const_,int> local_58;
  TArrayView<FMassFragmentRequirementDescription_const_,int> local_48;
  TArrayView<FMassFragmentRequirementDescription_const_,int> local_38;
  TArrayView<FMassFragmentRequirementDescription_const_,int> local_28;
  TArrayView<FMassFragmentRequirementDescription_const_,int> local_18;
  
  if ((this->EntityManager).Object == (FMassEntityManager *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = this->Query;
  this_00 = &((this->EntityManager).Object)->RequirementAccessDetector;
  if (Mass::Private::bTrackRequirementsAccess != false) {
    FMassRequirementAccessDetector::
    Operation<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>_>
              (this_00,(TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                        *)&pFVar1->_padding_,(pmf_6fcdee88)0x14719a4f0);
    FMassRequirementAccessDetector::
    Operation<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>_>
              (this_00,(TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                        *)&pFVar1->_padding_,(pmf_6fcdee88)0x1418f25b0);
    pTVar4 = TArrayView<FMassFragmentRequirementDescription_const_,int>::
             TArrayView<FMassFragmentRequirementDescription_const_,int><TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_>_const_&,TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_>_>
                       (&local_48,
                        (TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_> *)
                        pFVar1);
    local_88.DataPtr = pTVar4->DataPtr;
    local_88.ArrayNum = pTVar4->ArrayNum;
    local_88._12_4_ = *(undefined4 *)&pTVar4->field_0xc;
    FMassRequirementAccessDetector::Release(this_00,&local_88);
    pTVar4 = TArrayView<FMassFragmentRequirementDescription_const_,int>::
             TArrayView<FMassFragmentRequirementDescription_const_,int><TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_>_const_&,TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_>_>
                       (&local_38,
                        (TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_> *)
                        &pFVar1->_padding_);
    local_78.DataPtr = pTVar4->DataPtr;
    local_78.ArrayNum = pTVar4->ArrayNum;
    local_78._12_4_ = *(undefined4 *)&pTVar4->field_0xc;
    FMassRequirementAccessDetector::Release(this_00,&local_78);
    pTVar4 = TArrayView<FMassFragmentRequirementDescription_const_,int>::
             TArrayView<FMassFragmentRequirementDescription_const_,int><TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_>_const_&,TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_>_>
                       (&local_28,
                        (TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_> *)
                        &pFVar1->_padding_);
    local_68.DataPtr = pTVar4->DataPtr;
    local_68.ArrayNum = pTVar4->ArrayNum;
    local_68._12_4_ = *(undefined4 *)&pTVar4->field_0xc;
    FMassRequirementAccessDetector::Release(this_00,&local_68);
    pTVar4 = TArrayView<FMassFragmentRequirementDescription_const_,int>::
             TArrayView<FMassFragmentRequirementDescription_const_,int><TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_>_const_&,TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_>_>
                       (&local_18,
                        (TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_> *)
                        &pFVar1->_padding_);
    local_58.DataPtr = pTVar4->DataPtr;
    local_58.ArrayNum = pTVar4->ArrayNum;
    local_58._12_4_ = *(undefined4 *)&pTVar4->field_0xc;
    FMassRequirementAccessDetector::Release(this_00,&local_58);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->EntityManager).SharedReferenceCount.ReferenceController);
  return;
}

