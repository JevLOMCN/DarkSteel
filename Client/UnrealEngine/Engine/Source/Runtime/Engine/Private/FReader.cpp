// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// Scatter<FIdentityIndexRemap> @ 147cbca10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TDeltaSetup<float,FInstanceAttributeTracker::FDeltaRange<2>_>::FReader::Scatter<FIdentityIndexRemap>
          (FReader *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1,
          FIdentityIndexRemap *param_2)

{
  int iVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  FConstIterator local_58;
  
  if ((this->Setup).bIsEnabled == false) {
    param_1->ArrayNum = 0;
    if (param_1->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
      return;
    }
  }
  else {
    if ((((this->Setup).DeltaDataArray)->ArrayNum !=
         (this->Setup).Delta.NumItems * (this->Setup).ElementStride) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Setup.DeltaDataArray.Num() == Setup.Delta.GetNumItems() * Setup.ElementStride"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceData\\InstanceUpdateChangeSet.h"
                           ,0xcb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    piVar11 = &(this->Setup).ElementStride;
    if (((this->Setup).Delta.bFullUpdate == false) &&
       (iVar8 = (this->Setup).NumInstances * (this->Setup).ElementStride,
       iVar8 != ((this->Setup).DeltaDataArray)->ArrayNum)) {
      TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized(param_1,iVar8,Default);
      FInstanceAttributeTracker::FDeltaRange<2>::GetIterator(&(this->Setup).Delta,&local_58);
      do {
        if (local_58.bUseIterator == false) goto LAB_147cbcb2f;
        iVar8 = (local_58.It.Tracker)->LastChangedIndex + 1;
        if ((local_58.It.Tracker)->MaxIndex < iVar8) {
          iVar8 = (local_58.It.Tracker)->MaxIndex;
        }
        iVar7 = local_58.It.ElementOffset + local_58.It.ElementIndex * 8;
        bVar5 = SBORROW4(iVar7,iVar8);
        iVar7 = iVar7 - iVar8;
        while( true ) {
          iVar8 = local_58.ItemIndex;
          if (bVar5 == iVar7 < 0) {
            return;
          }
          iVar7 = local_58.ItemIndex;
          if (local_58.bUseIterator != false) {
            iVar7 = local_58.It.ElementOffset + local_58.It.ElementIndex * 8;
          }
          iVar1 = *piVar11;
          pTVar2 = (this->Setup).DeltaDataArray;
          uVar9 = iVar1 * local_58.ItemIndex;
          uVar6 = 0;
          if ((int)uVar9 < pTVar2->ArrayNum) {
            uVar6 = ~uVar9 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar10 = iVar7 * *piVar11;
          pFVar3 = (pTVar2->AllocatorInstance).Data;
          uVar6 = 0;
          if ((int)uVar10 < param_1->ArrayNum) {
            uVar6 = ~uVar10 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          memcpy((param_1->AllocatorInstance).Data + (longlong)(int)uVar10 * 4,
                 pFVar3 + (longlong)(int)uVar9 * 4,(longlong)iVar1 << 2);
          local_58.ItemIndex = iVar8 + 1;
          if (local_58.bUseIterator != false) break;
LAB_147cbcb2f:
          bVar5 = SBORROW4(local_58.ItemIndex,local_58.MaxNum);
          iVar7 = local_58.ItemIndex - local_58.MaxNum;
        }
        local_58.It.CurrentElement = local_58.It.CurrentElement & 0xfffffffa;
        FInstanceAttributeTracker::FAnyValidIterator<5>::AdvanceUntilAny(&local_58.It);
      } while( true );
    }
    if ((((this->Setup).DeltaDataArray)->ArrayNum !=
         (this->Setup).NumInstances * (this->Setup).ElementStride) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Setup.DeltaDataArray.Num() == Setup.NumInstances * Setup.ElementStride",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceData\\InstanceUpdateChangeSet.h"
                           ,0xd0,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TArray<float,TSizedDefaultAllocator<32>_>::operator=(param_1,(this->Setup).DeltaDataArray);
  }
  return;
}

// Scatter<FSrcIndexRemap> @ 147cbccd0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TDeltaSetup<unsigned_int,FIdentityDeltaRange>::FReader::Scatter<FSrcIndexRemap>
          (FReader *this,TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_1,
          FSrcIndexRemap *param_2)

{
  int iVar1;
  int iVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  
  if ((this->Setup).bIsEnabled == false) {
    param_1->ArrayNum = 0;
    if (param_1->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
      return;
    }
  }
  else {
    if ((((this->Setup).DeltaDataArray)->ArrayNum !=
         (this->Setup).ElementStride * (this->Setup).Delta.NumItems) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Setup.DeltaDataArray.Num() == Setup.Delta.GetNumItems() * Setup.ElementStride"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceData\\InstanceUpdateChangeSet.h"
                           ,0xcb,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (param_1,(this->Setup).NumInstances * (this->Setup).ElementStride,Default);
    iVar1 = (this->Setup).Delta.NumItems;
    uVar9 = 0;
    if (0 < iVar1) {
      lVar10 = 0;
      do {
        pTVar3 = param_2->IndexRemap;
        uVar8 = 0;
        if ((int)uVar9 < pTVar3->ArrayNum) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar2 = (this->Setup).ElementStride;
        pTVar4 = (this->Setup).DeltaDataArray;
        uVar11 = iVar2 * *(int *)((pTVar3->AllocatorInstance).Data + lVar10 * 4);
        uVar8 = 0;
        if ((int)uVar11 < pTVar4->ArrayNum) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (pTVar4->AllocatorInstance).Data;
        uVar12 = uVar9 * (this->Setup).ElementStride;
        uVar8 = 0;
        if ((int)uVar12 < param_1->ArrayNum) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        memcpy((param_1->AllocatorInstance).Data + (longlong)(int)uVar12 * 4,
               pFVar5 + (longlong)(int)uVar11 * 4,(longlong)iVar2 << 2);
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 1;
      } while ((int)uVar9 < iVar1);
    }
  }
  return;
}

// Scatter<FSrcIndexRemap> @ 147cbcef0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TDeltaSetup<float,FInstanceAttributeTracker::FDeltaRange<2>_>::FReader::Scatter<FSrcIndexRemap>
          (FReader *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1,FSrcIndexRemap *param_2)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  FConstIterator local_58;
  
  if ((this->Setup).bIsEnabled == false) {
    param_1->ArrayNum = 0;
    if (-1 < param_1->ArrayMax) {
      return;
    }
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
    return;
  }
  if ((((this->Setup).DeltaDataArray)->ArrayNum !=
       (this->Setup).Delta.NumItems * (this->Setup).ElementStride) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Setup.DeltaDataArray.Num() == Setup.Delta.GetNumItems() * Setup.ElementStride"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceData\\InstanceUpdateChangeSet.h"
                         ,0xcb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (param_1,(this->Setup).NumInstances * (this->Setup).ElementStride,Default);
  FInstanceAttributeTracker::FDeltaRange<2>::GetIterator(&(this->Setup).Delta,&local_58);
  do {
    if (local_58.bUseIterator == false) goto LAB_147cbcfe7;
    iVar8 = (local_58.It.Tracker)->LastChangedIndex + 1;
    if ((local_58.It.Tracker)->MaxIndex < iVar8) {
      iVar8 = (local_58.It.Tracker)->MaxIndex;
    }
    iVar7 = local_58.It.ElementOffset + local_58.It.ElementIndex * 8;
    bVar5 = SBORROW4(iVar7,iVar8);
    iVar7 = iVar7 - iVar8;
    while( true ) {
      if (bVar5 == iVar7 < 0) {
        return;
      }
      lVar10 = (longlong)local_58.ItemIndex;
      uVar11 = local_58.ItemIndex;
      if (local_58.bUseIterator != false) {
        uVar11 = local_58.It.ElementOffset + local_58.It.ElementIndex * 8;
      }
      pTVar1 = param_2->IndexRemap;
      uVar6 = 0;
      if (local_58.ItemIndex < pTVar1->ArrayNum) {
        uVar6 = (uint)~local_58.ItemIndex >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar8 = (this->Setup).ElementStride;
      pTVar2 = (this->Setup).DeltaDataArray;
      uVar9 = iVar8 * *(int *)((pTVar1->AllocatorInstance).Data + lVar10 * 4);
      uVar6 = 0;
      if ((int)uVar9 < pTVar2->ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar11 = uVar11 * (this->Setup).ElementStride;
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      uVar6 = 0;
      if ((int)uVar11 < param_1->ArrayNum) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      memcpy((param_1->AllocatorInstance).Data + (longlong)(int)uVar11 * 4,
             pFVar3 + (longlong)(int)uVar9 * 4,(longlong)iVar8 << 2);
      local_58.ItemIndex = local_58.ItemIndex + 1;
      if (local_58.bUseIterator != false) break;
LAB_147cbcfe7:
      bVar5 = SBORROW4(local_58.ItemIndex,local_58.MaxNum);
      iVar7 = local_58.ItemIndex - local_58.MaxNum;
    }
    local_58.It.CurrentElement = local_58.It.CurrentElement & 0xfffffffa;
    FInstanceAttributeTracker::FAnyValidIterator<5>::AdvanceUntilAny(&local_58.It);
  } while( true );
}

// Scatter<FSrcIndexRemap> @ 147cbd190

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TDeltaSetup<UE::Math::TVector4<float>,FIdentityDeltaRange>::FReader::Scatter<FSrcIndexRemap>
          (FReader *this,TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_1,
          FSrcIndexRemap *param_2)

{
  int iVar1;
  int iVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  
  if ((this->Setup).bIsEnabled == false) {
    param_1->ArrayNum = 0;
    if (param_1->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,0x10,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
      return;
    }
  }
  else {
    if ((((this->Setup).DeltaDataArray)->ArrayNum !=
         (this->Setup).ElementStride * (this->Setup).Delta.NumItems) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Setup.DeltaDataArray.Num() == Setup.Delta.GetNumItems() * Setup.ElementStride"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceData\\InstanceUpdateChangeSet.h"
                           ,0xcb,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (param_1,(this->Setup).NumInstances * (this->Setup).ElementStride,Default);
    iVar1 = (this->Setup).Delta.NumItems;
    uVar9 = 0;
    if (0 < iVar1) {
      lVar12 = 0;
      do {
        pTVar3 = param_2->IndexRemap;
        uVar8 = 0;
        if ((int)uVar9 < pTVar3->ArrayNum) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar2 = (this->Setup).ElementStride;
        pTVar4 = (this->Setup).DeltaDataArray;
        uVar10 = iVar2 * *(int *)((pTVar3->AllocatorInstance).Data + lVar12 * 4);
        uVar8 = 0;
        if ((int)uVar10 < pTVar4->ArrayNum) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar11 = uVar9 * (this->Setup).ElementStride;
        pFVar5 = (pTVar4->AllocatorInstance).Data;
        uVar8 = 0;
        if ((int)uVar11 < param_1->ArrayNum) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        memcpy((param_1->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x10,
               pFVar5 + (longlong)(int)uVar10 * 0x10,(longlong)iVar2 << 4);
        uVar9 = uVar9 + 1;
        lVar12 = lVar12 + 1;
      } while ((int)uVar9 < iVar1);
    }
  }
  return;
}

