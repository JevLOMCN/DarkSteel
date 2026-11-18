// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// Gather<float> @ 14789da00

void __thiscall
TDeltaSetup<float,FInstanceAttributeTracker::FDeltaRange<2>_>::FWriter::Gather<float>
          (FWriter *this,TArrayView<float,int> *param_1,int param_2)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  FInstanceAttributeTracker *pFVar2;
  float *pfVar3;
  code *pcVar4;
  int *piVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  FAnyValidIterator<5> local_58;
  char local_40;
  int local_3c;
  int iStack_38;
  FAnyValidIterator<5> local_30;
  
  if ((this->Setup).bIsEnabled != false) {
    if ((this->Setup).Delta.NumItems == 0) {
      pTVar1 = (this->Setup).DeltaDataArray;
      pTVar1->ArrayNum = 0;
      if (pTVar1->ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&pTVar1->AllocatorInstance,0,&pTVar1->ArrayMax);
      }
    }
    else {
      if ((param_2 != (this->Setup).ElementStride) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InElementStride == Setup.ElementStride",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceData\\InstanceUpdateChangeSet.h"
                             ,0x80,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (((this->Setup).Delta.bFullUpdate == false) &&
         (param_1->ArrayNum != (this->Setup).ElementStride * (this->Setup).Delta.NumItems)) {
        uVar11 = (this->Setup).Delta.NumItems * (this->Setup).ElementStride;
        pTVar1 = (this->Setup).DeltaDataArray;
        if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
        }
        uVar10 = 0;
        pTVar1->ArrayNum = 0;
        if (pTVar1->ArrayMax < (int)uVar11) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar11,&pTVar1->AllocatorInstance,0,&pTVar1->ArrayMax);
        }
        if ((this->Setup).Delta.bFullUpdate == false) {
          pFVar2 = (this->Setup).Delta.Tracker;
          iVar9 = pFVar2->FirstChangedIndex;
          if (pFVar2->MaxIndex < pFVar2->FirstChangedIndex) {
            iVar9 = pFVar2->MaxIndex;
          }
          uVar8 = iVar9 >> 0x1f & 7;
          uVar11 = iVar9 + uVar8;
          iVar9 = (uVar11 & 7) - uVar8;
          uVar11 = (int)uVar11 >> 3;
          local_58.Tracker = pFVar2;
          local_58.ElementIndex = uVar11;
          local_58.ElementOffset = iVar9;
          if ((-1 < (int)uVar11) && (iVar7 = (pFVar2->Data).ArrayNum, (int)uVar11 < iVar7)) {
            if ((int)uVar11 < iVar7) {
              uVar10 = ~uVar11 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar10 = *(uint *)((pFVar2->Data).AllocatorInstance.Data + (longlong)(int)uVar11 * 4) &
                     0x55555555;
          }
          local_58.CurrentElement = uVar10 >> ((char)iVar9 * '\x04' & 0x1fU);
          FInstanceAttributeTracker::FAnyValidIterator<5>::AdvanceUntilAny(&local_58);
          local_40 = '\x01';
          local_30._16_8_ = CONCAT44(local_58._20_4_,local_58.ElementOffset);
          local_30.CurrentElement = local_58.CurrentElement;
          local_3c = 0;
          iStack_38 = 0;
          local_30.ElementIndex = local_58.ElementIndex;
          local_30.Tracker = local_58.Tracker;
        }
        else {
          iStack_38 = (this->Setup).Delta.NumItems;
          local_40 = '\0';
          local_3c = 0;
          local_30.Tracker = (FInstanceAttributeTracker *)0x0;
          local_30.ElementIndex = 0;
          local_30._16_8_ = (ulonglong)(uint)local_30._20_4_ << 0x20;
        }
        do {
          if (local_40 == '\0') goto LAB_14789dc29;
          iVar9 = (local_30.Tracker)->LastChangedIndex + 1;
          if ((local_30.Tracker)->MaxIndex < iVar9) {
            iVar9 = (local_30.Tracker)->MaxIndex;
          }
          iVar7 = local_30.ElementOffset + local_30.ElementIndex * 8;
          bVar6 = SBORROW4(iVar7,iVar9);
          iVar7 = iVar7 - iVar9;
          while( true ) {
            if (bVar6 == iVar7 < 0) {
              return;
            }
            if (((this->Setup).Delta.NumItems * (this->Setup).ElementStride <=
                 ((this->Setup).DeltaDataArray)->ArrayNum) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Setup.DeltaDataArray.Num() < Setup.Delta.GetNumItems() * Setup.ElementStride"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceData\\InstanceUpdateChangeSet.h"
                                   ,0x8e,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pTVar1 = (this->Setup).DeltaDataArray;
            iVar9 = (this->Setup).ElementStride;
            iVar7 = local_3c;
            if (local_40 != '\0') {
              iVar7 = local_30.ElementOffset + local_30.ElementIndex * 8;
            }
            uVar10 = iVar9 * iVar7;
            uVar11 = 0;
            if ((int)uVar10 < param_1->ArrayNum) {
              uVar11 = ~uVar10 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pfVar3 = param_1->DataPtr;
            if (((pfVar3 + (int)uVar10 == (float *)0x0) && (iVar9 != 0)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Ptr != nullptr || Count == 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x9c1,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar7 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (4,4,iVar9,&pTVar1->AllocatorInstance,&pTVar1->ArrayNum,
                               &pTVar1->ArrayMax);
            if (iVar9 != 0) {
              memcpy((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 4,pfVar3 + (int)uVar10,
                     (longlong)iVar9 << 2);
            }
            local_3c = local_3c + 1;
            if (local_40 != '\0') break;
LAB_14789dc29:
            bVar6 = SBORROW4(local_3c,iStack_38);
            iVar7 = local_3c - iStack_38;
          }
          local_30.CurrentElement = local_30.CurrentElement & 0xfffffffa;
          FInstanceAttributeTracker::FAnyValidIterator<5>::AdvanceUntilAny(&local_30);
        } while( true );
      }
      pTVar1 = (this->Setup).DeltaDataArray;
      iVar9 = param_1->ArrayNum;
      piVar5 = &pTVar1->ArrayMax;
      pTVar1->ArrayNum = iVar9;
      if ((iVar9 == 0) && (*piVar5 == 0)) {
        *piVar5 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar9,*piVar5,&pTVar1->AllocatorInstance,iVar9,piVar5);
        if (iVar9 != 0) {
          memcpy((pTVar1->AllocatorInstance).Data,param_1->DataPtr,(longlong)iVar9 << 2);
        }
      }
    }
  }
  return;
}

// Gather @ 1478cde00

void __thiscall
TDeltaSetup<unsigned_int,FIdentityDeltaRange>::FWriter::Gather
          (FWriter *this,TFunctionRef<unsigned_int___cdecl(int)> *param_1)

{
  uint uVar1;
  int iVar2;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int local_res8 [2];
  
  if ((this->Setup).bIsEnabled != false) {
    uVar1 = (this->Setup).Delta.NumItems;
    pTVar3 = (this->Setup).DeltaDataArray;
    if (uVar1 == 0) {
      pTVar3->ArrayNum = 0;
      if (pTVar3->ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&pTVar3->AllocatorInstance,0,&pTVar3->ArrayMax);
        return;
      }
    }
    else {
      if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
      }
      iVar8 = 0;
      pTVar3->ArrayNum = 0;
      if (pTVar3->ArrayMax < (int)uVar1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar1,&pTVar3->AllocatorInstance,0,&pTVar3->ArrayMax);
      }
      iVar2 = (this->Setup).Delta.NumItems;
      if (0 < iVar2) {
        do {
          if (((this->Setup).Delta.NumItems <= ((this->Setup).DeltaDataArray)->ArrayNum) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Setup.DeltaDataArray.Num() < Setup.Delta.GetNumItems()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceData\\InstanceUpdateChangeSet.h"
                                 ,0x6a,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((((this->Setup).DeltaDataArray)->ArrayNum != iVar8) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Setup.DeltaDataArray.Num() == It.GetItemIndex()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceData\\InstanceUpdateChangeSet.h"
                                 ,0x6b,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pTVar3 = (this->Setup).DeltaDataArray;
          local_res8[0] = iVar8;
          uVar6 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,local_res8);
          iVar7 = pTVar3->ArrayNum;
          if (iVar7 == pTVar3->ArrayMax) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&pTVar3->AllocatorInstance,&pTVar3->ArrayMax);
          }
          iVar8 = iVar8 + 1;
          pTVar3->ArrayNum = iVar7 + 1;
          *(undefined4 *)((pTVar3->AllocatorInstance).Data + (longlong)iVar7 * 4) = uVar6;
        } while (iVar8 < iVar2);
      }
    }
  }
  return;
}

// Gather @ 1478cdf90

void __thiscall
TDeltaSetup<FRenderBounds,FIdentityDeltaRange>::FWriter::Gather
          (FWriter *this,TFunctionRef<FRenderBounds___cdecl(int)> *param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  TArray<FRenderBounds,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int local_res8 [2];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  if ((this->Setup).bIsEnabled != false) {
    uVar2 = (this->Setup).Delta.NumItems;
    pTVar4 = (this->Setup).DeltaDataArray;
    if (uVar2 == 0) {
      pTVar4->ArrayNum = 0;
      if (pTVar4->ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,4,0,&pTVar4->AllocatorInstance,0,&pTVar4->ArrayMax);
        return;
      }
    }
    else {
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
      }
      iVar9 = 0;
      pTVar4->ArrayNum = 0;
      if (pTVar4->ArrayMax < (int)uVar2) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,4,uVar2,&pTVar4->AllocatorInstance,0,&pTVar4->ArrayMax);
      }
      iVar3 = (this->Setup).Delta.NumItems;
      if (0 < iVar3) {
        do {
          if (((this->Setup).Delta.NumItems <= ((this->Setup).DeltaDataArray)->ArrayNum) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Setup.DeltaDataArray.Num() < Setup.Delta.GetNumItems()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceData\\InstanceUpdateChangeSet.h"
                                 ,0x6a,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if ((((this->Setup).DeltaDataArray)->ArrayNum != iVar9) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Setup.DeltaDataArray.Num() == It.GetItemIndex()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceData\\InstanceUpdateChangeSet.h"
                                 ,0x6b,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pTVar4 = (this->Setup).DeltaDataArray;
          local_res8[0] = iVar9;
          (**(code **)param_1)(&local_38,*(undefined8 *)&param_1->field_0x8,local_res8);
          iVar8 = pTVar4->ArrayNum;
          if (iVar8 == pTVar4->ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x418,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
          }
          iVar9 = iVar9 + 1;
          pTVar4->ArrayNum = iVar8 + 1;
          pFVar5 = (pTVar4->AllocatorInstance).Data;
          pFVar1 = pFVar5 + (longlong)iVar8 * 0x18;
          *(undefined8 *)pFVar1 = local_38;
          *(undefined8 *)(pFVar1 + 8) = uStack_30;
          *(undefined8 *)(pFVar5 + (longlong)iVar8 * 0x18 + 0x10) = local_28;
        } while (iVar9 < iVar3);
      }
    }
  }
  return;
}

// Gather @ 1478ce130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TDeltaSetup<FRenderTransform,FInstanceAttributeTracker::FDeltaRange<1>_>::FWriter::Gather
          (FWriter *this,TFunctionRef<FRenderTransform___cdecl(int)> *param_1)

{
  TArray<FRenderTransform,TSizedDefaultAllocator<32>_> *pTVar1;
  FInstanceAttributeTracker *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStackY_d8 [32];
  int local_a0;
  FAnyValidIterator<3> local_98;
  int local_80 [2];
  FAnyValidIterator<3> local_78;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  if ((this->Setup).bIsEnabled != false) {
    uVar7 = (this->Setup).Delta.NumItems;
    pTVar1 = (this->Setup).DeltaDataArray;
    if (uVar7 != 0) {
      if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
      }
      iVar12 = 0;
      uVar10 = 0;
      pTVar1->ArrayNum = 0;
      if (pTVar1->ArrayMax < (int)uVar7) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,4,uVar7,&pTVar1->AllocatorInstance,0,&pTVar1->ArrayMax);
      }
      if ((this->Setup).Delta.bFullUpdate == false) {
        pFVar2 = (this->Setup).Delta.Tracker;
        iVar11 = pFVar2->FirstChangedIndex;
        if (pFVar2->MaxIndex < pFVar2->FirstChangedIndex) {
          iVar11 = pFVar2->MaxIndex;
        }
        uVar9 = iVar11 >> 0x1f & 7;
        uVar7 = iVar11 + uVar9;
        iVar11 = (uVar7 & 7) - uVar9;
        uVar7 = (int)uVar7 >> 3;
        local_78.Tracker = pFVar2;
        local_78.ElementIndex = uVar7;
        local_78.ElementOffset = iVar11;
        if ((-1 < (int)uVar7) && (iVar4 = (pFVar2->Data).ArrayNum, (int)uVar7 < iVar4)) {
          if ((int)uVar7 < iVar4) {
            uVar10 = ~uVar7 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar10 = *(uint *)((pFVar2->Data).AllocatorInstance.Data + (longlong)(int)uVar7 * 4) &
                   0x33333333;
        }
        local_78.CurrentElement = uVar10 >> ((char)iVar11 * '\x04' & 0x1fU);
        FInstanceAttributeTracker::FAnyValidIterator<3>::AdvanceUntilAny(&local_78);
        bVar6 = true;
        local_98._16_8_ = CONCAT44(local_78._20_4_,local_78.ElementOffset);
        local_98.CurrentElement = local_78.CurrentElement;
        local_a0 = 0;
        local_98.ElementIndex = local_78.ElementIndex;
        local_98.Tracker = local_78.Tracker;
      }
      else {
        local_a0 = (this->Setup).Delta.NumItems;
        bVar6 = false;
        local_98.Tracker = (FInstanceAttributeTracker *)0x0;
        local_98.ElementIndex = 0;
        local_98._16_8_ = (ulonglong)(uint)local_98._20_4_ << 0x20;
      }
      do {
        if (!bVar6) goto LAB_1478ce316;
        iVar11 = (local_98.Tracker)->LastChangedIndex + 1;
        if ((local_98.Tracker)->MaxIndex < iVar11) {
          iVar11 = (local_98.Tracker)->MaxIndex;
        }
        iVar4 = local_98.ElementOffset + local_98.ElementIndex * 8;
        bVar13 = SBORROW4(iVar4,iVar11);
        iVar4 = iVar4 - iVar11;
        while( true ) {
          if (bVar13 == iVar4 < 0) {
            return;
          }
          if (((this->Setup).Delta.NumItems <= ((this->Setup).DeltaDataArray)->ArrayNum) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Setup.DeltaDataArray.Num() < Setup.Delta.GetNumItems()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceData\\InstanceUpdateChangeSet.h"
                                  ,0x6a,L""), bVar13)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if ((((this->Setup).DeltaDataArray)->ArrayNum != iVar12) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Setup.DeltaDataArray.Num() == It.GetItemIndex()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceData\\InstanceUpdateChangeSet.h"
                                  ,0x6b,L""), bVar13)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pTVar1 = (this->Setup).DeltaDataArray;
          local_80[0] = iVar12;
          if (bVar6) {
            local_80[0] = local_98.ElementOffset + local_98.ElementIndex * 8;
          }
          (**(code **)param_1)(&local_60,*(undefined8 *)&param_1->field_0x8,local_80);
          iVar11 = pTVar1->ArrayNum;
          if (iVar11 == pTVar1->ArrayMax) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x430,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
          }
          iVar12 = iVar12 + 1;
          pTVar1->ArrayNum = iVar11 + 1;
          lVar8 = (longlong)iVar11;
          pFVar3 = (pTVar1->AllocatorInstance).Data;
          *(undefined8 *)(pFVar3 + lVar8 * 0x30) = local_60;
          *(undefined8 *)(pFVar3 + lVar8 * 0x30 + 8) = uStack_58;
          *(undefined8 *)(pFVar3 + lVar8 * 0x30 + 0x10) = local_50;
          *(undefined8 *)(pFVar3 + lVar8 * 0x30 + 0x10 + 8) = uStack_48;
          *(undefined8 *)(pFVar3 + lVar8 * 0x30 + 0x20) = local_40;
          *(undefined8 *)(pFVar3 + lVar8 * 0x30 + 0x20 + 8) = uStack_38;
          if (bVar6) break;
LAB_1478ce316:
          bVar13 = SBORROW4(iVar12,local_a0);
          iVar4 = iVar12 - local_a0;
        }
        local_98.CurrentElement = local_98.CurrentElement & 0xfffffffc;
        FInstanceAttributeTracker::FAnyValidIterator<3>::AdvanceUntilAny(&local_98);
      } while( true );
    }
    pTVar1->ArrayNum = 0;
    if (pTVar1->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,4,0,&pTVar1->AllocatorInstance,0,&pTVar1->ArrayMax);
    }
  }
  return;
}

// Gather<float_const_> @ 147d6a970

void __thiscall
TDeltaSetup<float,FInstanceAttributeTracker::FDeltaRange<2>_>::FWriter::Gather<float_const_>
          (FWriter *this,TArrayView<float_const_,int> *param_1,int param_2)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  float *pfVar2;
  code *pcVar3;
  int *piVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  FConstIterator local_38;
  
  if ((this->Setup).bIsEnabled != false) {
    if ((this->Setup).Delta.NumItems == 0) {
      pTVar1 = (this->Setup).DeltaDataArray;
      pTVar1->ArrayNum = 0;
      if (pTVar1->ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&pTVar1->AllocatorInstance,0,&pTVar1->ArrayMax);
        return;
      }
    }
    else {
      if ((param_2 != (this->Setup).ElementStride) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InElementStride == Setup.ElementStride",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceData\\InstanceUpdateChangeSet.h"
                             ,0x80,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (((this->Setup).Delta.bFullUpdate == false) &&
         (param_1->ArrayNum != (this->Setup).ElementStride * (this->Setup).Delta.NumItems)) {
        uVar9 = (this->Setup).Delta.NumItems * (this->Setup).ElementStride;
        pTVar1 = (this->Setup).DeltaDataArray;
        if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
        }
        pTVar1->ArrayNum = 0;
        if (pTVar1->ArrayMax < (int)uVar9) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar9,&pTVar1->AllocatorInstance,0,&pTVar1->ArrayMax);
        }
        FInstanceAttributeTracker::FDeltaRange<2>::GetIterator(&(this->Setup).Delta,&local_38);
        do {
          if (local_38.bUseIterator == false) goto LAB_147d6aab9;
          iVar7 = (local_38.It.Tracker)->LastChangedIndex + 1;
          if ((local_38.It.Tracker)->MaxIndex < iVar7) {
            iVar7 = (local_38.It.Tracker)->MaxIndex;
          }
          iVar6 = local_38.It.ElementOffset + local_38.It.ElementIndex * 8;
          bVar5 = SBORROW4(iVar6,iVar7);
          iVar6 = iVar6 - iVar7;
          while( true ) {
            if (bVar5 == iVar6 < 0) {
              return;
            }
            if (((this->Setup).Delta.NumItems * (this->Setup).ElementStride <=
                 ((this->Setup).DeltaDataArray)->ArrayNum) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Setup.DeltaDataArray.Num() < Setup.Delta.GetNumItems() * Setup.ElementStride"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceData\\InstanceUpdateChangeSet.h"
                                   ,0x8e,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pTVar1 = (this->Setup).DeltaDataArray;
            iVar7 = (this->Setup).ElementStride;
            iVar6 = local_38.ItemIndex;
            if (local_38.bUseIterator != false) {
              iVar6 = local_38.It.ElementOffset + local_38.It.ElementIndex * 8;
            }
            uVar8 = iVar7 * iVar6;
            uVar9 = 0;
            if ((int)uVar8 < param_1->ArrayNum) {
              uVar9 = ~uVar8 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pfVar2 = param_1->DataPtr;
            if (((pfVar2 + (int)uVar8 == (float *)0x0) && (iVar7 != 0)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Ptr != nullptr || Count == 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x9c1,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar6 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (4,4,iVar7,&pTVar1->AllocatorInstance,&pTVar1->ArrayNum,
                               &pTVar1->ArrayMax);
            if (iVar7 != 0) {
              memcpy((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 4,pfVar2 + (int)uVar8,
                     (longlong)iVar7 << 2);
            }
            local_38.ItemIndex = local_38.ItemIndex + 1;
            if (local_38.bUseIterator != false) break;
LAB_147d6aab9:
            bVar5 = SBORROW4(local_38.ItemIndex,local_38.MaxNum);
            iVar6 = local_38.ItemIndex - local_38.MaxNum;
          }
          local_38.It.CurrentElement = local_38.It.CurrentElement & 0xfffffffa;
          FInstanceAttributeTracker::FAnyValidIterator<5>::AdvanceUntilAny(&local_38.It);
        } while( true );
      }
      pTVar1 = (this->Setup).DeltaDataArray;
      iVar7 = param_1->ArrayNum;
      piVar4 = &pTVar1->ArrayMax;
      pTVar1->ArrayNum = iVar7;
      if ((iVar7 == 0) && (*piVar4 == 0)) {
        *piVar4 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar7,*piVar4,&pTVar1->AllocatorInstance,iVar7,piVar4);
        if (iVar7 != 0) {
          memcpy((pTVar1->AllocatorInstance).Data,param_1->DataPtr,(longlong)iVar7 << 2);
        }
      }
    }
  }
  return;
}

