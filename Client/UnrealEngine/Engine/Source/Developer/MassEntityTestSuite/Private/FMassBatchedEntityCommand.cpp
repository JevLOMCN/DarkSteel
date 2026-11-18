// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 6

// Add @ 14710f4f0

void __thiscall
FMassBatchedEntityCommand::Add
          (FMassBatchedEntityCommand *this,
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *param_1)

{
  FRWFallbackSafeAccessDetectorDefinition *pFVar1;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *pTVar2;
  FRWFallbackSafeAccessDetectorDefinition FVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  
  LOCK();
  pFVar1 = &this->EntitiesAccessDetector;
  FVar3 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + 0x100000);
  UNLOCK();
  if ((FVar3 != (FRWFallbackSafeAccessDetectorDefinition)0x0) &&
     (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x72,
                       L"Acquiring a write access while there are ongoing read or write access");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar2 = &this->TargetEntities;
  if (pTVar2 == param_1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x986,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 != 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar4,&pTVar2->AllocatorInstance,&(this->TargetEntities).ArrayNum,
                       &(this->TargetEntities).ArrayMax);
    memmove((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8,(param_1->AllocatorInstance).Data
            ,(longlong)iVar4 << 3);
    param_1->ArrayNum = 0;
  }
  *(undefined1 *)&this->_padding_ = 1;
  LOCK();
  pFVar1 = &this->EntitiesAccessDetector;
  FVar3 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + -0x100000);
  UNLOCK();
  if ((FVar3 != (FRWFallbackSafeAccessDetectorDefinition)0x100000) &&
     (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x7d,
                       L"Another thread asked to have a read or write access during this write access"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

// Add @ 14710f630

void __thiscall
FMassBatchedEntityCommand::Add(FMassBatchedEntityCommand *this,FMassEntityHandle param_1)

{
  FRWFallbackSafeAccessDetectorDefinition *pFVar1;
  int *piVar2;
  FRWFallbackSafeAccessDetectorDefinition FVar3;
  FMassEntityHandle *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FMassEntityHandle local_res10 [3];
  
  LOCK();
  pFVar1 = &this->EntitiesAccessDetector;
  FVar3 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + 0x100000);
  UNLOCK();
  local_res10[0] = param_1;
  if ((FVar3 != (FRWFallbackSafeAccessDetectorDefinition)0x0) &&
     (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x72,
                       L"Acquiring a write access while there are ongoing read or write access");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar4 = (FMassEntityHandle *)(this->TargetEntities).AllocatorInstance.Data;
  if ((pFVar4 <= local_res10) && (local_res10 < pFVar4 + (this->TargetEntities).ArrayMax)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar8 = (this->TargetEntities).ArrayNum;
  piVar2 = &(this->TargetEntities).ArrayMax;
  if (iVar8 == *piVar2) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->TargetEntities).AllocatorInstance,piVar2);
  }
  pFVar5 = (this->TargetEntities).AllocatorInstance.Data;
  (this->TargetEntities).ArrayNum = iVar8 + 1;
  *(FMassEntityHandle *)(pFVar5 + (longlong)iVar8 * 8) = local_res10[0];
  *(undefined1 *)&this->_padding_ = 1;
  LOCK();
  pFVar1 = &this->EntitiesAccessDetector;
  FVar3 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + -0x100000);
  UNLOCK();
  if ((FVar3 != (FRWFallbackSafeAccessDetectorDefinition)0x100000) &&
     (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x7d,
                       L"Another thread asked to have a read or write access during this write access"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  return;
}

// Add @ 14710f770

void __thiscall
FMassBatchedEntityCommand::Add
          (FMassBatchedEntityCommand *this,TArrayView<FMassEntityHandle_const_,int> *param_1)

{
  FRWFallbackSafeAccessDetectorDefinition *pFVar1;
  FRWFallbackSafeAccessDetectorDefinition FVar2;
  int iVar3;
  FMassEntityHandle *_Src;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  LOCK();
  pFVar1 = &this->EntitiesAccessDetector;
  FVar2 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + 0x100000);
  UNLOCK();
  if ((FVar2 != (FRWFallbackSafeAccessDetectorDefinition)0x0) &&
     (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x72,
                       L"Acquiring a write access while there are ongoing read or write access");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar3 = param_1->ArrayNum;
  _Src = param_1->DataPtr;
  if ((_Src == (FMassEntityHandle *)0x0) && (iVar3 != 0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr != nullptr || Count == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9c1,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar3,&(this->TargetEntities).AllocatorInstance,
                     &(this->TargetEntities).ArrayNum,&(this->TargetEntities).ArrayMax);
  if (iVar3 != 0) {
    memcpy((this->TargetEntities).AllocatorInstance.Data + (longlong)iVar6 * 8,_Src,
           (longlong)iVar3 << 3);
  }
  *(undefined1 *)&this->_padding_ = 1;
  LOCK();
  pFVar1 = &this->EntitiesAccessDetector;
  FVar2 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + -0x100000);
  UNLOCK();
  if ((FVar2 != (FRWFallbackSafeAccessDetectorDefinition)0x100000) &&
     (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x7d,
                       L"Another thread asked to have a read or write access during this write access"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// GetAllocatedSize @ 14711f830

ulong64 __thiscall FMassBatchedEntityCommand::GetAllocatedSize(FMassBatchedEntityCommand *this)

{
  return (longlong)(this->TargetEntities).ArrayMax << 3;
}

// GetNumOperationsStat @ 147120340

int __thiscall FMassBatchedEntityCommand::GetNumOperationsStat(FMassBatchedEntityCommand *this)

{
  return (this->TargetEntities).ArrayNum;
}

// Reset @ 14719bce0

void __thiscall FMassBatchedEntityCommand::Reset(FMassBatchedEntityCommand *this)

{
  (this->TargetEntities).ArrayNum = 0;
  if ((this->TargetEntities).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->TargetEntities).AllocatorInstance,0,&(this->TargetEntities).ArrayMax);
    *(undefined1 *)&this->_padding_ = 0;
    return;
  }
  *(undefined1 *)&this->_padding_ = 0;
  return;
}

