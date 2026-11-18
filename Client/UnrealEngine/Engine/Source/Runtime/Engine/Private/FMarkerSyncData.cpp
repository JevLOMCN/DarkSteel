// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticStruct @ 147522410

UScriptStruct * __cdecl FMarkerSyncData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMarkerSyncData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FMarkerSyncData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMarkerSyncData,(UObject *)pUVar1,
                         L"MarkerSyncData");
  }
  return Z_Registration_Info_UScriptStruct_FMarkerSyncData.OuterSingleton;
}

// CollectMarkersInRange @ 14754dad0

void __thiscall
FMarkerSyncData::CollectMarkersInRange
          (FMarkerSyncData *this,float param_1,float param_2,
          TArray<FPassedMarker,TSizedDefaultAllocator<32>_> *param_3,float param_4)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  
  pFVar12 = (this->AuthoredSyncMarkers).AllocatorInstance.Data;
  uVar3 = (this->AuthoredSyncMarkers).ArrayNum;
  uVar10 = (ulonglong)(int)uVar3;
  pFVar1 = pFVar12 + uVar10 * 0xc;
  while( true ) {
    if ((this->AuthoredSyncMarkers).ArrayNum != (int)uVar10) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FAnimSyncMarker,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar12 == pFVar1) break;
    fVar2 = *(float *)(pFVar12 + 8);
    if ((param_1 <= fVar2) && (fVar2 < param_2)) {
      pFVar4 = (param_3->AllocatorInstance).Data;
      local_78 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      if ((pFVar4 <= (FScriptContainerElement *)&local_78) &&
         ((FScriptContainerElement *)&local_78 < pFVar4 + (longlong)param_3->ArrayMax * 0xc)) {
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
      uVar8 = param_3->ArrayNum;
      if (uVar8 == param_3->ArrayMax) {
        uVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,&param_3->AllocatorInstance,&param_3->ArrayMax);
      }
      param_3->ArrayNum = uVar8 + 1;
      pFVar4 = (param_3->AllocatorInstance).Data;
      lVar11 = (longlong)(int)uVar8;
      *(ulonglong *)(pFVar4 + lVar11 * 0xc) = CONCAT44(uStack_74,local_78);
      *(undefined4 *)(pFVar4 + lVar11 * 0xc + 8) = uStack_70;
      uVar5 = *(undefined8 *)pFVar12;
      uVar9 = 0;
      if ((int)uVar8 < param_3->ArrayNum) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      *(undefined8 *)((param_3->AllocatorInstance).Data + lVar11 * 0xc) = uVar5;
      uVar9 = 0;
      if ((int)uVar8 < param_3->ArrayNum) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      *(float *)((param_3->AllocatorInstance).Data + lVar11 * 0xc + 8) = param_4 - (fVar2 - param_1)
      ;
    }
    uVar10 = (ulonglong)uVar3;
    pFVar12 = pFVar12 + 0xc;
  }
  return;
}

// CollectUniqueNames @ 14754dd40

void __thiscall FMarkerSyncData::CollectUniqueNames(FMarkerSyncData *this)

{
  int *piVar1;
  FName *pFVar2;
  int iVar3;
  uint uVar4;
  FName *pFVar5;
  FIdentityFunctor local_res8 [8];
  
  iVar3 = (this->AuthoredSyncMarkers).ArrayNum;
  piVar1 = &(this->UniqueMarkerNames).ArrayMax;
  if (iVar3 < 1) {
    (this->UniqueMarkerNames).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&(this->UniqueMarkerNames).AllocatorInstance,0,piVar1);
      return;
    }
  }
  else {
    AlgoImpl::
    IntroSortInternal<FAnimSyncMarker,int,FIdentityFunctor,TDereferenceWrapper<FAnimSyncMarker,TLess<void>_>_>
              ((FAnimSyncMarker *)(this->AuthoredSyncMarkers).AllocatorInstance.Data,iVar3,
               local_res8[0],(TLess<void> *)local_res8);
    (this->UniqueMarkerNames).ArrayNum = 0;
    if (*piVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&(this->UniqueMarkerNames).AllocatorInstance,0,piVar1);
    }
    uVar4 = (this->AuthoredSyncMarkers).ArrayNum;
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    if (*piVar1 < (int)uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar4,&(this->UniqueMarkerNames).AllocatorInstance,
                 (this->UniqueMarkerNames).ArrayNum,piVar1);
    }
    iVar3 = (this->AuthoredSyncMarkers).ArrayNum;
    pFVar5 = (FName *)(this->AuthoredSyncMarkers).AllocatorInstance.Data;
    pFVar2 = (FName *)((longlong)pFVar5 + (longlong)iVar3 * 0xc);
    while( true ) {
      if ((this->AuthoredSyncMarkers).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FAnimSyncMarker,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar5 == pFVar2) break;
      TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
                (&this->UniqueMarkerNames,pFVar5);
      pFVar5 = (FName *)&pFVar5[1].Number;
    }
  }
  return;
}

// GetMarkerIndicesForTime @ 14755d1b0

void __thiscall
FMarkerSyncData::GetMarkerIndicesForTime
          (FMarkerSyncData *this,float param_1,bool param_2,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_3,FMarkerPair *param_4,
          FMarkerPair *param_5,float param_6)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  
  param_4->TimeToMarker = (float)((uint)param_1 ^ __xmm_80000000800000008000000080000000);
  param_4->MarkerIndex = -1;
  param_5->MarkerIndex = -1;
  iVar9 = (param_2 ^ 1) - 1;
  param_5->TimeToMarker = param_6 - param_1;
  do {
    if ((int)(param_2 + 1) <= iVar9) {
      return;
    }
    iVar7 = (this->AuthoredSyncMarkers).ArrayNum;
    uVar8 = 0;
    if (0 < iVar7) {
      lVar10 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar8 < iVar7) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar6 = (param_3->AllocatorInstance).Data;
        pFVar2 = (this->AuthoredSyncMarkers).AllocatorInstance.Data;
        pFVar1 = pFVar6 + (longlong)param_3->ArrayNum * 8;
        if (pFVar6 != pFVar1) {
          do {
            if (*(longlong *)pFVar6 == *(longlong *)(pFVar2 + lVar10)) {
              fVar11 = (float)iVar9 * param_6 + *(float *)(pFVar2 + lVar10 + 8);
              fVar12 = fVar11 - param_1;
              if (param_1 <= fVar11) {
                param_5->TimeToMarker = fVar12;
                param_5->MarkerIndex = uVar8;
                goto LAB_14755d30d;
              }
              param_4->TimeToMarker = fVar12;
              param_4->MarkerIndex = uVar8;
              break;
            }
            pFVar6 = pFVar6 + 8;
          } while (pFVar6 != pFVar1);
        }
        iVar7 = (this->AuthoredSyncMarkers).ArrayNum;
        uVar8 = uVar8 + 1;
        lVar10 = lVar10 + 0xc;
      } while ((int)uVar8 < iVar7);
    }
LAB_14755d30d:
    if (param_5->MarkerIndex != -1) {
      return;
    }
    iVar9 = iVar9 + 1;
  } while( true );
}

// GetMarkerSyncPositionFromMarkerIndicies @ 14755d360

FMarkerSyncAnimPosition * __thiscall
FMarkerSyncData::GetMarkerSyncPositionFromMarkerIndicies
          (FMarkerSyncData *this,FMarkerSyncAnimPosition *__return_storage_ptr__,int param_1,
          int param_2,float param_3,float param_4,UMirrorDataTable *param_5)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FMarkerSyncAnimPosition *pFVar5;
  FName *pFVar6;
  float fVar7;
  float fVar8;
  
  (__return_storage_ptr__->PreviousMarkerName).ComparisonIndex = 0;
  (__return_storage_ptr__->PreviousMarkerName).Number = 0;
  (__return_storage_ptr__->NextMarkerName).ComparisonIndex = 0;
  (__return_storage_ptr__->NextMarkerName).Number = 0;
  __return_storage_ptr__->PositionBetweenMarkers = 0.0;
  if (((param_1 == -1) || (param_1 < 0)) || ((this->AuthoredSyncMarkers).ArrayNum <= param_1)) {
    fVar7 = 0.0;
  }
  else {
    fVar7 = *(float *)((this->AuthoredSyncMarkers).AllocatorInstance.Data +
                      (longlong)param_1 * 0xc + 8);
    uVar4 = 0;
    if (param_1 < (this->AuthoredSyncMarkers).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FMarkerSyncAnimPosition *)(*pcVar2)();
      return pFVar5;
    }
    FVar1 = *(FName *)((this->AuthoredSyncMarkers).AllocatorInstance.Data + (longlong)param_1 * 0xc)
    ;
    __return_storage_ptr__->PreviousMarkerName = FVar1;
    if ((param_5 != (UMirrorDataTable *)0x0) &&
       (pFVar6 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                 ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                         *)&param_5->SyncToMirrorSyncMap,FVar1), pFVar6 != (FName *)0x0)) {
      __return_storage_ptr__->PreviousMarkerName = *pFVar6;
    }
  }
  fVar8 = param_4;
  if ((-1 < param_2) && (param_2 < (this->AuthoredSyncMarkers).ArrayNum)) {
    fVar8 = *(float *)((this->AuthoredSyncMarkers).AllocatorInstance.Data +
                      (longlong)param_2 * 0xc + 8);
    uVar4 = 0;
    if (param_2 < (this->AuthoredSyncMarkers).ArrayNum) {
      uVar4 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FMarkerSyncAnimPosition *)(*pcVar2)();
      return pFVar5;
    }
    FVar1 = *(FName *)((this->AuthoredSyncMarkers).AllocatorInstance.Data + (longlong)param_2 * 0xc)
    ;
    __return_storage_ptr__->NextMarkerName = FVar1;
    if ((param_5 != (UMirrorDataTable *)0x0) &&
       (pFVar6 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                 ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                         *)&param_5->SyncToMirrorSyncMap,FVar1), pFVar6 != (FName *)0x0)) {
      __return_storage_ptr__->NextMarkerName = *pFVar6;
    }
  }
  if (fVar7 <= fVar8) {
    if (param_3 < fVar7) {
      param_3 = param_3 + param_4;
    }
  }
  else {
    if (param_3 < fVar7) {
      fVar7 = fVar7 - param_4;
    }
    if (fVar8 < param_3) {
      fVar8 = fVar8 + param_4;
    }
  }
  if (fVar7 == fVar8) {
    fVar7 = fVar7 - param_4;
  }
  if ((fVar8 <= fVar7) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NextTime > PrevTime",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimTypes.cpp"
                         ,0x127,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FMarkerSyncAnimPosition *)(*pcVar2)();
    return pFVar5;
  }
  __return_storage_ptr__->PositionBetweenMarkers = (param_3 - fVar7) / (fVar8 - fVar7);
  return __return_storage_ptr__;
}

// GetMarkerSyncPositionfromMarkerIndicies @ 14755d5c0

FMarkerSyncAnimPosition * __thiscall
FMarkerSyncData::GetMarkerSyncPositionfromMarkerIndicies
          (FMarkerSyncData *this,FMarkerSyncAnimPosition *__return_storage_ptr__,int param_1,
          int param_2,float param_3,float param_4)

{
  GetMarkerSyncPositionFromMarkerIndicies
            (this,__return_storage_ptr__,param_1,param_2,param_3,param_4,(UMirrorDataTable *)0x0);
  return __return_storage_ptr__;
}

