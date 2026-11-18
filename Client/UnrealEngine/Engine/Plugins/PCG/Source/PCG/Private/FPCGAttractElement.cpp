// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// operator() @ 149ad77d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
`FPCGAttractElement::ExecuteInternal'::__l2::<lambda_1>::operator()
          (void *this,
          TPCGTimeSlicedContext<PCGAttractElement::FExecState,PCGAttractElement::FAttractState,FPCGContext>
          *param_1,FExecState *param_2,FAttractState *param_3,uint param_4)

{
  TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_> *pTVar1;
  TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> *pTVar2;
  UPCGBasePointData *pUVar3;
  IPCGAttributeAccessorKeys *pIVar4;
  IPCGAttributeAccessor *pIVar5;
  undefined8 *puVar6;
  UPCGAttractSettings *pUVar7;
  code *pcVar8;
  FPCGMetadataDomainID FVar9;
  bool bVar10;
  undefined1 uVar11;
  char cVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_> TVar16;
  FPCGMetadataDomain *this_00;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  ulonglong uVar21;
  UPCGMetadata *pUVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined1 auStackY_508 [32];
  undefined1 local_4b8 [8];
  TObjectPtr<UPCGMetadata>_u_0 local_4b0;
  undefined8 local_4a8;
  undefined1 local_4a0 [16];
  longlong *local_490;
  int local_488 [2];
  undefined1 local_480 [24];
  FName local_468;
  TArrayView<int_const_,int> local_458;
  TObjectPtr<UPCGMetadata>_u_0 local_448;
  int iStack_440;
  atomic<int> aStack_43c;
  FPCGAttributePropertySelector local_438;
  FPCGMetadataDomainID local_3f0;
  TObjectPtr<UPCGMetadata>_u_0 local_3d8;
  undefined8 uStack_3d0;
  undefined1 local_3c8 [48];
  int local_398;
  FConstPCGPointValueRanges local_388;
  FPCGPointValueRanges local_1f8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_508;
  local_490 = this;
  if ((((int)param_4 < 0) || ((param_1->PerIterationStateResultArray).ArrayNum <= (int)param_4)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0 && Index < PerIterationStateResultArray.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\PCGTimeSlicedElementBase.h"
                          ,0x48,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    uVar11 = (*pcVar8)();
    return (bool)uVar11;
  }
  uVar21 = 0;
  uVar17 = 0;
  if ((int)param_4 < (param_1->PerIterationStateResultArray).ArrayNum) {
    uVar17 = ~param_4 >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar8 = (code *)swi(3);
    uVar11 = (*pcVar8)();
    return (bool)uVar11;
  }
  if ((param_1->PerIterationStateResultArray).AllocatorInstance.Data[(int)param_4] ==
      (FScriptContainerElement)0x2) {
    return true;
  }
  if (param_3->bAttractPhaseDone == false) {
    if (((*(UPCGAttractSettings **)this)->Mode != FromIndex) &&
       (bVar10 = (*param_2->AttractFunction)
                           ((FPCGContext *)param_1,param_3,*(UPCGAttractSettings **)this), !bVar10))
    {
      return bVar10;
    }
    param_3->bAttractPhaseDone = true;
  }
  local_4b0.DebugPtr = (UPCGMetadata *)0x0;
  local_4a8 = 0;
  uVar17 = 0;
  if (*(char *)(*(longlong *)this + 0x118) == '\0') {
    cVar12 = (**(code **)(param_3->OutputData->_padding_ + 0x440))();
    if (cVar12 == '\0') {
      local_458.DataPtr = (int *)0x0;
      local_458.ArrayNum = 0;
      UPCGBasePointData::SetPoints(param_3->SourceData,param_3->OutputData,&local_458,true);
    }
    if (&local_4b0 != (TObjectPtr<UPCGMetadata>_u_0 *)&param_3->Mapping) {
      iVar14 = (param_3->Mapping).ArrayNum;
      pFVar18 = (param_3->Mapping).AllocatorInstance.Data;
      local_4a8 = CONCAT44(local_4a8._4_4_,iVar14);
      if (iVar14 == 0) {
        if (local_4a8._4_4_ != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,local_4a8._4_4_,(ForAnyElementType *)&local_4b0.ObjectPtr,0,
                     (int *)((longlong)&local_4a8 + 4));
        }
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar14,local_4a8._4_4_,(ForAnyElementType *)&local_4b0.ObjectPtr,iVar14,
                   (int *)((longlong)&local_4a8 + 4));
        memcpy(local_4b0.DebugPtr,pFVar18,(longlong)iVar14 << 2);
      }
    }
  }
  else {
    pFVar20 = (param_3->Mapping).AllocatorInstance.Data;
    iVar14 = (param_3->Mapping).ArrayNum;
    pFVar18 = pFVar20 + (longlong)iVar14 * 4;
    uVar23 = uVar21;
    while( true ) {
      if ((param_3->Mapping).ArrayNum != iVar14) {
        local_4b8[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_4b8);
      }
      if (pFVar20 == pFVar18) break;
      if (*(int *)pFVar20 != -1) {
        uVar23 = uVar23 + 1;
      }
      pFVar20 = pFVar20 + 4;
    }
    iVar14 = (int)uVar23;
    (**(code **)(param_3->OutputData->_padding_ + 0x490))(param_3->OutputData,uVar23 & 0xffffffff,0)
    ;
    pUVar3 = param_3->OutputData;
    pcVar8 = *(code **)(pUVar3->_padding_ + 0x498);
    uVar13 = (**(code **)(param_3->SourceData->_padding_ + 0x640))(param_3->SourceData,1);
    (*pcVar8)(pUVar3,uVar13);
    (**(code **)(param_3->OutputData->_padding_ + 0x4b0))(param_3->OutputData,param_3->SourceData);
    if (iVar14 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar23 & 0xffffffff);
    }
    if (local_4a8._4_4_ < iVar14) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar14,(ForAnyElementType *)&local_4b0.ObjectPtr,(int)local_4a8,
                 (int *)((longlong)&local_4a8 + 4));
    }
    FConstPCGPointValueRanges::FConstPCGPointValueRanges(&local_388,param_3->SourceData);
    FPCGPointValueRanges::FPCGPointValueRanges(&local_1f8,param_3->OutputData,true);
    iVar14 = (**(code **)(param_3->SourceData->_padding_ + 0x488))();
    uVar23 = uVar21;
    uVar24 = uVar21;
    this = local_490;
    if (0 < iVar14) {
      do {
        uVar19 = (uint)uVar21;
        uVar15 = uVar17;
        if ((int)uVar19 < (param_3->Mapping).ArrayNum) {
          uVar15 = ~uVar19 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          uVar11 = (*pcVar8)();
          return (bool)uVar11;
        }
        if (*(int *)((param_3->Mapping).AllocatorInstance.Data + uVar24) != -1) {
          FPCGPointValueRanges::SetFromValueRanges(&local_1f8,(int)uVar23,&local_388,uVar19);
          uVar15 = uVar17;
          if ((int)uVar19 < (param_3->Mapping).ArrayNum) {
            uVar15 = ~uVar19 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            uVar11 = (*pcVar8)();
            return (bool)uVar11;
          }
          pUVar22 = (UPCGMetadata *)((param_3->Mapping).AllocatorInstance.Data + uVar24);
          if (((local_4b0.DebugPtr <= pUVar22) &&
              (pUVar22 < (UPCGMetadata *)
                         (((local_4b0.DebugPtr)->OtherParents).Hash.InlineData +
                         (longlong)local_4a8._4_4_ * 4 + -0x68))) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar8 = (code *)swi(3);
            uVar11 = (*pcVar8)();
            return (bool)uVar11;
          }
          iVar14 = (int)local_4a8;
          if ((int)local_4a8 == local_4a8._4_4_) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,(ForAnyElementType *)&local_4b0.ObjectPtr,
                                (int *)((longlong)&local_4a8 + 4));
          }
          uVar23 = (ulonglong)((int)uVar23 + 1);
          local_4a8 = CONCAT44(local_4a8._4_4_,iVar14 + 1);
          *(int *)(((local_4b0.DebugPtr)->OtherParents).Hash.InlineData +
                  (longlong)iVar14 * 4 + -0x68) = (int)pUVar22->_padding_;
        }
        uVar21 = (ulonglong)(uVar19 + 1);
        iVar14 = (**(code **)(param_3->SourceData->_padding_ + 0x488))();
        uVar24 = uVar24 + 4;
        this = local_490;
      } while ((int)(uVar19 + 1) < iVar14);
    }
  }
  FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector
            ((FPCGAttributePropertyOutputSelector *)local_3c8);
  TVar16 = PCGAttributeAccessorHelpers::CreateKeys
                     ((UPCGData *)local_480,(FPCGAttributePropertySelector *)param_3->OutputData);
  pTVar1 = &param_3->OutputKeys;
  if ((IPCGAttributeAccessorKeys *)pTVar1 != TVar16.Ptr) {
    pIVar4 = pTVar1->Ptr;
    pTVar1->Ptr = (IPCGAttributeAccessorKeys *)(TVar16.Ptr)->_padding_;
    (TVar16.Ptr)->_padding_ = 0;
    if (pIVar4 != (IPCGAttributeAccessorKeys *)0x0) {
      (**(code **)pIVar4->_padding_)(pIVar4,1);
    }
  }
  if ((undefined8 *)local_480._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_480._0_8_)(local_480._0_8_,1);
  }
  DestructItems<FString,int>((FString *)local_3c8._40_8_,local_398);
  if ((FString *)local_3c8._40_8_ != (FString *)0x0) {
    FMemory::Free((void *)local_3c8._40_8_);
  }
  if (*(char *)(*(longlong *)this + 0x248) != '\0') {
    FPCGAttributePropertySelector::FPCGAttributePropertySelector
              (&local_438,(FPCGAttributePropertySelector *)(*(longlong *)this + 0x250));
    local_438._padding_ = (longlong)&___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
    bVar10 = FPCGAttributePropertySelector::IsBasicAttribute(&local_438);
    FVar9 = PCGMetadataDomainID::Default;
    if (bVar10) {
      local_488[0] = 0;
      pUVar22 = (UPCGMetadata *)param_3->OutputData->_padding_;
      local_3f0 = PCGMetadataDomainID::Default;
      local_480._8_8_ = FPCGAttributePropertySelector::GetName(&local_438);
      local_480._8_8_ = *(undefined8 *)local_480._8_8_;
      local_480._16_8_ = FVar9._0_8_;
      local_468 = local_3f0.DebugName;
      this_00 = UPCGMetadata::FindOrCreateMetadataDomain
                          (pUVar22,(FPCGMetadataDomainID *)(local_480 + 0x10));
      if (this_00 != (FPCGMetadataDomain *)0x0) {
        FPCGMetadataDomain::FindOrCreateAttribute<int>
                  (this_00,(FName)local_480._8_8_,local_488,false,true,true);
      }
    }
    PCGAttributeAccessorHelpers::CreateAccessor
              ((UPCGData *)(local_4a0 + 8),(FPCGAttributePropertySelector *)param_3->OutputData,
               SUB81(&local_438,0));
    if ((IPCGAttributeAccessor *)local_4a0._8_8_ == (IPCGAttributeAccessor *)0x0) {
      PCGLog::Metadata::LogFailToCreateAccessorError(&local_438,(FPCGContext *)param_1);
      if ((IPCGAttributeAccessor *)local_4a0._8_8_ != (IPCGAttributeAccessor *)0x0) {
        (**(code **)*(longlong *)local_4a0._8_8_)(local_4a0._8_8_,1);
      }
      DestructItems<FString,int>
                ((FString *)local_438.ExtraNames.AllocatorInstance.Data,
                 local_438.ExtraNames.ArrayNum);
      if (local_438.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_438.ExtraNames.AllocatorInstance.Data);
      }
      goto LAB_149ad7ce1;
    }
    pTVar2 = &param_3->OutputAttractIndexAccessor;
    if (pTVar2 != (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> *)
                  (local_4a0 + 8)) {
      pIVar5 = pTVar2->Ptr;
      pTVar2->Ptr = (IPCGAttributeAccessor *)local_4a0._8_8_;
      local_4a0._8_8_ = (IPCGAttributeAccessor *)0x0;
      if (pIVar5 != (IPCGAttributeAccessor *)0x0) {
        (**(code **)pIVar5->_padding_)(pIVar5,1);
      }
    }
    pIVar5 = pTVar2->Ptr;
    iVar14 = (int)local_4a8;
    pIVar4 = (param_3->OutputKeys).Ptr;
    local_448 = local_4b0;
    if (((int)local_4a8 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      uVar11 = (*pcVar8)();
      return (bool)uVar11;
    }
    iStack_440 = iVar14;
    uStack_3d0 = CONCAT44(aStack_43c,iVar14);
    local_3d8 = local_448;
    IPCGAttributeAccessor::SetRange<int>
              (pIVar5,(TArrayView<int_const_,int> *)&local_3d8.ObjectPtr,0,pIVar4,StrictType);
    if ((IPCGAttributeAccessor *)local_4a0._8_8_ != (IPCGAttributeAccessor *)0x0) {
      (**(code **)*(longlong *)local_4a0._8_8_)(local_4a0._8_8_,1);
    }
    DestructItems<FString,int>
              ((FString *)local_438.ExtraNames.AllocatorInstance.Data,local_438.ExtraNames.ArrayNum)
    ;
    this = local_490;
    if (local_438.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_438.ExtraNames.AllocatorInstance.Data);
      this = local_490;
    }
  }
  uVar15 = param_3->InterpolationIndex;
  if ((int)uVar15 < (param_3->Interpolators).ArrayNum) {
    do {
      uVar19 = uVar17;
      if ((int)uVar15 < (param_3->Interpolators).ArrayNum) {
        uVar19 = ~uVar15 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        uVar11 = (*pcVar8)();
        return (bool)uVar11;
      }
      PCGAttributeAccessorHelpers::CreateAccessor
                ((UPCGData *)local_4a0,(FPCGAttributePropertySelector *)param_3->OutputData,
                 (bool)((char)(param_3->Interpolators).AllocatorInstance.Data + ' ' +
                       (char)uVar15 * 'h'));
      uVar15 = param_3->InterpolationIndex;
      iVar14 = (param_3->Interpolators).ArrayNum;
      if ((undefined8 *)local_4a0._0_8_ == (undefined8 *)0x0) {
        if ((int)uVar15 < iVar14) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          uVar11 = (*pcVar8)();
          return (bool)uVar11;
        }
        PCGLog::Metadata::LogFailToCreateAccessorError
                  ((FPCGAttributePropertySelector *)
                   ((param_3->Interpolators).AllocatorInstance.Data +
                   (longlong)(int)uVar15 * 0x68 + 0x20),(FPCGContext *)param_1);
LAB_149ad8086:
        if ((undefined8 *)local_4a0._0_8_ != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)local_4a0._0_8_)(local_4a0._0_8_,1);
        }
        bVar10 = false;
        goto LAB_149ad7ce3;
      }
      uVar19 = uVar17;
      if ((int)uVar15 < iVar14) {
        uVar19 = ~uVar15 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        uVar11 = (*pcVar8)();
        return (bool)uVar11;
      }
      pFVar18 = (param_3->Interpolators).AllocatorInstance.Data +
                (longlong)(int)uVar15 * 0x68 + 0x60;
      if (pFVar18 != (FScriptContainerElement *)local_4a0) {
        puVar6 = *(undefined8 **)pFVar18;
        *(undefined8 *)pFVar18 = local_4a0._0_8_;
        local_4a0._0_8_ = (undefined8 *)0x0;
        if (puVar6 != (undefined8 *)0x0) {
          (**(code **)*puVar6)(puVar6,1);
        }
      }
      iVar14 = param_3->InterpolationIndex;
      pUVar7 = *(UPCGAttractSettings **)this;
      param_3->InterpolationIndex = iVar14 + 1;
      PCGAttractElement::Helpers::InterpolatePoints(param_3,iVar14,pUVar7);
      if ((param_3->InterpolationIndex != (param_3->Interpolators).ArrayNum) &&
         (bVar10 = FPCGAsyncState::ShouldStop((FPCGAsyncState *)&param_1->_padding_), bVar10))
      goto LAB_149ad8086;
      if ((undefined8 *)local_4a0._0_8_ != (undefined8 *)0x0) {
        (*(code *)**(undefined8 **)local_4a0._0_8_)(local_4a0._0_8_,1);
      }
      uVar15 = param_3->InterpolationIndex;
    } while ((int)uVar15 < (param_3->Interpolators).ArrayNum);
  }
LAB_149ad7ce1:
  bVar10 = true;
LAB_149ad7ce3:
  if (local_4b0.DebugPtr != (UPCGMetadata *)0x0) {
    FMemory::Free(local_4b0.DebugPtr);
  }
  return bVar10;
}

// operator() @ 149ae1c70

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

EPCGTimeSliceInitResult __thiscall
`FPCGAttractElement::PrepareDataInternal'::__l2::<lambda_2>::operator()
          (void *this,FAttractState *param_1,FExecState *param_2,uint param_3)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  FPCGCrc *pFVar2;
  int *piVar3;
  char cVar4;
  ushort uVar5;
  ushort uVar6;
  FScriptContainerElement *pFVar7;
  undefined8 *puVar8;
  FPCGCrc FVar9;
  longlong lVar10;
  code *pcVar11;
  undefined8 uVar12;
  longlong *plVar13;
  bool bVar14;
  EPCGTimeSliceInitResult EVar15;
  int iVar16;
  int iVar17;
  UClass *pUVar18;
  UPCGPointData *pUVar19;
  TObjectPtr<UPCGMetadata>_u_0 TVar20;
  UPCGPointData *pUVar21;
  FPCGAttributePropertySelector *pFVar22;
  uint uVar23;
  ulonglong uVar24;
  FPCGAttributePropertyInputSelector *this_00;
  FScriptContainerElement *pFVar25;
  uint uVar26;
  FPCGTaggedData *pFVar27;
  uint uVar28;
  ulonglong uVar29;
  longlong lVar30;
  TBitArray<FDefaultBitArrayAllocator> *pTVar31;
  TObjectPtr<UPCGMetadata>_u_0 TVar32;
  UPCGPointData *pUVar33;
  longlong *plVar34;
  undefined1 local_res20 [8];
  undefined1 local_3a8 [8];
  undefined1 local_3a0 [24];
  undefined8 local_388;
  undefined1 local_380 [16];
  TObjectPtr<UPCGMetadata>_u_0 local_370;
  TObjectPtr<UPCGMetadata>_u_0 local_368;
  undefined1 local_360 [24];
  TObjectPtr<UPCGMetadata>_u_0 local_348 [2];
  FScriptContainerElement *local_338;
  uint uStack_330;
  bool bStack_32c;
  undefined3 uStack_32b;
  TObjectPtr<UPCGMetadata>_u_0 local_328;
  TObjectPtr<UPCGMetadata>_u_0 local_320;
  TObjectPtr<UPCGMetadata>_u_0 local_318;
  TObjectPtr<UPCGMetadata>_u_0 local_310;
  TObjectPtr<UPCGMetadata>_u_0 local_308;
  UPCGPointData *local_300;
  FPCGAttributePropertySelector local_2f8;
  int local_2b8;
  longlong *local_2b0;
  int iStack_2a8;
  uint uStack_2a4;
  TBitArray<FDefaultBitArrayAllocator> *local_2a0;
  undefined4 uStack_298;
  int iStack_294;
  int local_290;
  undefined4 uStack_28c;
  int iStack_288;
  undefined4 uStack_284;
  longlong *local_280;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_278;
  undefined8 uStack_258;
  FPCGAttributePropertySelector local_248;
  FPCGAttributePropertySelector local_208;
  FPCGAttributePropertySelector local_1c8;
  FPCGAttributePropertySelector local_188;
  FPCGAttributePropertySelector local_148;
  TArrayView<int,int> local_108;
  TArrayView<double,int> local_f8;
  TArrayView<double,int> local_e8;
  FPCGAttributePropertySelector local_d8;
  undefined1 local_98 [48];
  int local_68;
  undefined4 local_3c;
  
  plVar34 = *(longlong **)this;
  uVar28 = 0;
  if ((int)param_3 < (int)plVar34[1]) {
    uVar28 = ~param_3 >> 0x1f;
  }
  if ((uVar28 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar11 = (code *)swi(3);
    EVar15 = (*pcVar11)();
    return EVar15;
  }
  local_328 = (TObjectPtr<UPCGMetadata>_u_0)
              ((TObjectPtr<UPCGMetadata>_u_0 *)(*plVar34 + (longlong)(int)param_3 * 0x78))->DebugPtr
  ;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UPCGPointData *)local_328.DebugPtr != (UPCGPointData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_328.DebugPtr);
  }
  if ((UPCGPointData *)local_328.DebugPtr == (UPCGPointData *)0x0) {
    return NoOperation;
  }
  pUVar18 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
  bVar14 = FObjectPtr::IsA(&local_328.ObjectPtr,pUVar18);
  TVar32 = local_328;
  if (!bVar14) {
    return NoOperation;
  }
  if ((UPCGPointData *)local_328.DebugPtr == (UPCGPointData *)0x0) {
    return NoOperation;
  }
  iVar16 = (**(code **)((local_328.DebugPtr)->_padding_ + 0x488))(local_328.DebugPtr);
  if (iVar16 == 0) {
    return NoOperation;
  }
  plVar34 = *(longlong **)((longlong)this + 8);
  uVar28 = *(uint *)(plVar34 + 1);
  uVar23 = param_3 % uVar28;
  uVar26 = 0;
  if ((int)uVar23 < (int)uVar28) {
    uVar26 = ~uVar23 >> 0x1f;
  }
  if ((uVar26 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar11 = (code *)swi(3);
    EVar15 = (*pcVar11)();
    return EVar15;
  }
  local_360._8_8_ =
       Cast<UPCGBasePointData>((FPCGDataPtrWrapper *)((longlong)(int)uVar23 * 0x78 + *plVar34));
  if ((UPCGPointData *)local_360._8_8_ == (UPCGPointData *)0x0) {
    return NoOperation;
  }
  local_300 = (UPCGPointData *)
              FPCGContext::NewPointData_AnyThread(*(FPCGContext **)((longlong)this + 0x18));
  UPCGSpatialData::InitializeFromData
            ((UPCGSpatialData *)local_300,(UPCGSpatialData *)TVar32.DebugPtr,(UPCGMetadata *)0x0,
             true,true);
  lVar30 = *(longlong *)((longlong)this + 0x18);
  plVar34 = *(longlong **)this;
  uVar28 = 0;
  if ((int)param_3 < (int)plVar34[1]) {
    uVar28 = ~param_3 >> 0x1f;
  }
  if ((uVar28 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar11 = (code *)swi(3);
    EVar15 = (*pcVar11)();
    return EVar15;
  }
  pFVar27 = (FPCGTaggedData *)(*plVar34 + (longlong)(int)param_3 * 0x78);
  if (((*(FPCGTaggedData **)(lVar30 + 0x38) <= pFVar27) &&
      (pFVar27 < *(FPCGTaggedData **)(lVar30 + 0x38) + *(int *)(lVar30 + 0x44))) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar14)) {
    pcVar11 = (code *)swi(3);
    EVar15 = (*pcVar11)();
    return EVar15;
  }
  iVar16 = *(int *)(lVar30 + 0x40);
  if (iVar16 == *(int *)(lVar30 + 0x44)) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x878,(ForAnyElementType *)(lVar30 + 0x38),(int *)(lVar30 + 0x44));
  }
  *(int *)(lVar30 + 0x40) = iVar16 + 1;
  pFVar27 = FPCGTaggedData::FPCGTaggedData
                      ((FPCGTaggedData *)((longlong)iVar16 * 0x78 + *(longlong *)(lVar30 + 0x38)),
                       pFVar27);
  pUVar21 = local_300;
  FPCGDataPtrWrapper::operator=(&pFVar27->Data,(UPCGData *)local_300);
  pUVar33 = (UPCGPointData *)local_360._8_8_;
  param_1->TargetData = (UPCGBasePointData *)local_360._8_8_;
  param_1->bTargetIsSource = (UPCGMetadata *)local_360._8_8_ == TVar32.DebugPtr;
  param_1->SourceData = (UPCGBasePointData *)TVar32;
  param_1->OutputData = (UPCGBasePointData *)pUVar21;
  param_1->IterationIndex = 0;
  pUVar18 = Z_Construct_UClass_UPCGPointData_NoRegister();
  iVar16 = (int)pUVar18->_padding_;
  if ((*(int *)(*(longlong *)((longlong)pUVar33 + 0x10) + 0x38) < iVar16) ||
     (pUVar19 = pUVar33,
     (longlong *)
     *(undefined1 **)
      (*(longlong *)(*(longlong *)((longlong)pUVar33 + 0x10) + 0x30) + (longlong)iVar16 * 8) !=
     &pUVar18->_padding_)) {
    pUVar19 = (UPCGPointData *)0x0;
  }
  local_370.DebugPtr = TVar32.DebugPtr;
  param_1->TargetPointData = pUVar19;
  pUVar18 = Z_Construct_UClass_UPCGPointData_NoRegister();
  iVar16 = (int)pUVar18->_padding_;
  if ((*(int *)((TVar32.DebugPtr)->_padding_ + 0x38) < iVar16) ||
     (TVar20 = TVar32,
     (longlong *)
     *(undefined1 **)(*(longlong *)((TVar32.DebugPtr)->_padding_ + 0x30) + (longlong)iVar16 * 8) !=
     &pUVar18->_padding_)) {
    local_370.DebugPtr = TVar32.DebugPtr;
    TVar20.DebugPtr = (UPCGMetadata *)0x0;
  }
  param_1->SourcePointData = (UPCGPointData *)TVar20;
  if (pUVar21 == (UPCGPointData *)0x0) {
LAB_149ae1fa9:
    pUVar21 = (UPCGPointData *)0x0;
  }
  else {
    pUVar18 = Z_Construct_UClass_UPCGPointData_NoRegister();
    iVar16 = (int)pUVar18->_padding_;
    if ((*(int *)(pUVar21->_padding_ + 0x38) < iVar16) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar21->_padding_ + 0x30) + (longlong)iVar16 * 8) !=
        &pUVar18->_padding_)) goto LAB_149ae1fa9;
    local_370.DebugPtr = TVar32.DebugPtr;
  }
  param_1->OutPointData = pUVar21;
  iVar16 = (**(code **)((TVar32.DebugPtr)->_padding_ + 0x488))(TVar32.DebugPtr);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&param_1->Mapping,iVar16,Default);
  if (*(char *)(*(longlong *)((longlong)this + 0x10) + 200) == '\x03') {
    FPCGAttributePropertyInputSelector::CopyAndFixLast
              ((FPCGAttributePropertyInputSelector *)(*(longlong *)((longlong)this + 0x10) + 0xd0),
               (FPCGAttributePropertyInputSelector *)&local_208,(UPCGData *)TVar32.DebugPtr);
    PCGAttributeAccessorHelpers::CreateConstAccessor
              ((UPCGData *)&local_318.ObjectPtr,(FPCGAttributePropertySelector *)TVar32.DebugPtr,
               SUB81(&local_208,0));
    PCGAttributeAccessorHelpers::CreateConstKeys
              ((UPCGData *)&local_320.ObjectPtr,(FPCGAttributePropertySelector *)TVar32.DebugPtr);
    TVar20 = local_318;
    TVar32 = local_320;
    if ((local_318.DebugPtr == (UPCGMetadata *)0x0) || (local_320.DebugPtr == (UPCGMetadata *)0x0))
    {
      PCGLog::Metadata::LogFailToCreateAccessorError
                (&local_208,*(FPCGContext **)((longlong)this + 0x18));
    }
    else {
      local_338 = (param_1->Mapping).AllocatorInstance.Data;
      uVar28 = (param_1->Mapping).ArrayNum;
      if (((int)uVar28 < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar14)) {
        pcVar11 = (code *)swi(3);
        EVar15 = (*pcVar11)();
        return EVar15;
      }
      local_108._12_1_ = bStack_32c;
      local_108._13_3_ = uStack_32b;
      local_108.ArrayNum = uVar28;
      local_108.DataPtr = (int *)local_338;
      uStack_330 = uVar28;
      bVar14 = IPCGAttributeAccessor::GetRange<int>
                         ((IPCGAttributeAccessor *)TVar20.DebugPtr,&local_108,0,
                          (IPCGAttributeAccessorKeys *)TVar32.DebugPtr,StrictType);
      if (bVar14) {
        iVar17 = (**(code **)(*&pUVar33->_padding_ + 0x488))(pUVar33);
        pFVar25 = (param_1->Mapping).AllocatorInstance.Data;
        iVar16 = (param_1->Mapping).ArrayNum;
        pFVar7 = pFVar25 + (longlong)iVar16 * 4;
        while( true ) {
          if ((param_1->Mapping).ArrayNum != iVar16) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res20);
          }
          if (pFVar25 == pFVar7) break;
          if ((*(int *)pFVar25 < 0) || (iVar17 <= *(int *)pFVar25)) {
            *(int *)pFVar25 = -1;
          }
          pFVar25 = pFVar25 + 4;
        }
        if (local_320.DebugPtr != (UPCGMetadata *)0x0) {
          (**(code **)(local_320.DebugPtr)->_padding_)(local_320.DebugPtr,1);
        }
        if (local_318.DebugPtr != (UPCGMetadata *)0x0) {
          (**(code **)(local_318.DebugPtr)->_padding_)(local_318.DebugPtr,1);
        }
        DestructItems<FString,int>
                  ((FString *)local_208.ExtraNames.AllocatorInstance.Data,
                   local_208.ExtraNames.ArrayNum);
        TVar32 = local_370;
        pUVar33 = (UPCGPointData *)local_360._8_8_;
        if (local_208.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.ExtraNames.AllocatorInstance.Data);
          TVar32 = local_370;
          pUVar33 = (UPCGPointData *)local_360._8_8_;
        }
        goto LAB_149ae215a;
      }
      PCGLog::Metadata::LogFailToGetAttributeError
                (&local_208,*(FPCGContext **)((longlong)this + 0x18));
    }
    if (local_320.DebugPtr != (UPCGMetadata *)0x0) {
      (**(code **)(local_320.DebugPtr)->_padding_)(local_320.DebugPtr,1);
    }
    if (local_318.DebugPtr != (UPCGMetadata *)0x0) {
      (**(code **)(local_318.DebugPtr)->_padding_)(local_318.DebugPtr,1);
    }
    DestructItems<FString,int>
              ((FString *)local_208.ExtraNames.AllocatorInstance.Data,local_208.ExtraNames.ArrayNum)
    ;
    goto LAB_149ae2e22;
  }
  iVar16 = (param_1->Mapping).ArrayNum;
  uVar28 = 0;
  if (pUVar33 == (UPCGPointData *)TVar32.DebugPtr) {
    if (0 < iVar16) {
      lVar30 = 0;
      do {
        uVar26 = 0;
        if ((int)uVar28 < (param_1->Mapping).ArrayNum) {
          uVar26 = ~uVar28 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar11 = (code *)swi(3);
          EVar15 = (*pcVar11)();
          return EVar15;
        }
        *(uint *)((param_1->Mapping).AllocatorInstance.Data + lVar30) = uVar28;
        uVar28 = uVar28 + 1;
        lVar30 = lVar30 + 4;
      } while ((int)uVar28 < (param_1->Mapping).ArrayNum);
    }
  }
  else if (0 < iVar16) {
    lVar30 = 0;
    do {
      uVar26 = 0;
      if ((int)uVar28 < (param_1->Mapping).ArrayNum) {
        uVar26 = ~uVar28 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar11 = (code *)swi(3);
        EVar15 = (*pcVar11)();
        return EVar15;
      }
      uVar28 = uVar28 + 1;
      *(undefined4 *)((param_1->Mapping).AllocatorInstance.Data + lVar30) = 0xffffffff;
      lVar30 = lVar30 + 4;
    } while ((int)uVar28 < (param_1->Mapping).ArrayNum);
  }
LAB_149ae215a:
  cVar4 = *(char *)(*(longlong *)((longlong)this + 0x10) + 200);
  if ((cVar4 == '\x01') || (cVar4 == '\x02')) {
    FPCGAttributePropertyInputSelector::CopyAndFixLast
              ((FPCGAttributePropertyInputSelector *)(*(longlong *)((longlong)this + 0x10) + 0x120),
               (FPCGAttributePropertyInputSelector *)&local_148,(UPCGData *)pUVar33);
    PCGAttributeAccessorHelpers::CreateConstAccessor
              ((UPCGData *)&local_348[0].ObjectPtr,(FPCGAttributePropertySelector *)pUVar33,
               SUB81(&local_148,0));
    PCGAttributeAccessorHelpers::CreateConstKeys
              ((UPCGData *)(local_360 + 0x10),(FPCGAttributePropertySelector *)pUVar33);
    if ((local_348[0].DebugPtr == (UPCGMetadata *)0x0) ||
       ((FPCGCrc)local_360._16_8_ == (FPCGCrc)0x0)) {
      PCGLog::Metadata::LogFailToCreateAccessorError
                (&local_148,*(FPCGContext **)((longlong)this + 0x18));
      if ((FPCGCrc)local_360._16_8_ != (FPCGCrc)0x0) {
        (*(code *)**(undefined8 **)local_360._16_8_)(local_360._16_8_,1);
      }
      if (local_348[0].DebugPtr != (UPCGMetadata *)0x0) {
        (**(code **)(local_348[0].DebugPtr)->_padding_)(local_348[0].DebugPtr,1);
      }
      DestructItems<FString,int>
                ((FString *)local_148.ExtraNames.AllocatorInstance.Data,
                 local_148.ExtraNames.ArrayNum);
      local_208.ExtraNames.AllocatorInstance.Data = local_148.ExtraNames.AllocatorInstance.Data;
      goto LAB_149ae2e22;
    }
    uVar24 = 0;
    local_3a0._16_8_ = (FScriptContainerElement *)0x0;
    local_388 = 0;
    iVar16 = (**(code **)(pUVar33->_padding_ + 0x488))(pUVar33);
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              ((TArray<int,TSizedDefaultAllocator<32>_> *)(local_3a0 + 0x10),iVar16,Default);
    uVar29 = uVar24;
    if (0 < (int)local_388) {
      do {
        uVar26 = (uint)uVar24;
        uVar28 = 0;
        if ((int)uVar26 < (int)local_388) {
          uVar28 = ~uVar26 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar11 = (code *)swi(3);
          EVar15 = (*pcVar11)();
          return EVar15;
        }
        *(uint *)(local_3a0._16_8_ + uVar29) = uVar26;
        uVar24 = (ulonglong)(uVar26 + 1);
        uVar29 = uVar29 + 4;
      } while ((int)(uVar26 + 1) < (int)local_388);
    }
    PCGAttributeAccessorHelpers::
    SortByAttribute<int,PCGAttributeAccessorHelpers::Private::<lambda_24>,PCGAttributeAccessorHelpers::Private::<lambda_25>_>
              ((IPCGAttributeAccessor *)local_348[0].DebugPtr,
               (IPCGAttributeAccessorKeys *)local_360._16_8_,
               (TArray<int,TSizedDefaultAllocator<32>_> *)(local_3a0 + 0x10),
               *(char *)(*(longlong *)((longlong)this + 0x10) + 200) == '\x01',
               PCGAttributeAccessorHelpers::Private::DefaultIndexGetter,
               PCGAttributeAccessorHelpers::Private::DefaultStableCompareLessLambda);
    pTVar1 = &param_1->SortedTargetIndices;
    if (pTVar1 != (TArray<int,TSizedDefaultAllocator<32>_> *)(local_3a0 + 0x10)) {
      pFVar7 = (pTVar1->AllocatorInstance).Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)local_3a0._16_8_;
      (param_1->SortedTargetIndices).ArrayNum = (int)local_388;
      (param_1->SortedTargetIndices).ArrayMax = local_388._4_4_;
      local_388 = 0;
      local_3a0._16_8_ = (FScriptContainerElement *)0x0;
    }
    if ((FScriptContainerElement *)local_3a0._16_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_3a0._16_8_);
    }
    if ((FPCGCrc)local_360._16_8_ != (FPCGCrc)0x0) {
      (*(code *)**(undefined8 **)local_360._16_8_)(local_360._16_8_,1);
    }
    if (local_348[0].DebugPtr != (UPCGMetadata *)0x0) {
      (**(code **)(local_348[0].DebugPtr)->_padding_)(local_348[0].DebugPtr,1);
    }
    DestructItems<FString,int>
              ((FString *)local_148.ExtraNames.AllocatorInstance.Data,local_148.ExtraNames.ArrayNum)
    ;
    if (local_148.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.ExtraNames.AllocatorInstance.Data);
    }
  }
  if (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x160) == '\0') {
LAB_149ae2611:
    if (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x1a8) == '\0') {
LAB_149ae27a5:
      lVar30 = *(longlong *)((longlong)this + 0x10);
      iStack_2a8 = 0;
      plVar34 = (longlong *)(lVar30 + 0x1f8);
      iVar16 = *(int *)(lVar30 + 0x220);
      local_2a0 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar30 + 0x208);
      local_290 = 0;
      uStack_2a4 = 1;
      iStack_294 = 0;
      if (iVar16 != 0) {
        pTVar31 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar30 + 0x218);
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar30 + 0x218) ==
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar31 = local_2a0;
        }
        uVar28 = *(uint *)(pTVar31->AllocatorInstance).InlineData;
        while (uVar28 == 0) {
          iStack_2a8 = iStack_2a8 + 1;
          local_290 = local_290 + 0x20;
          iStack_294 = iVar16;
          if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_2a8)
          goto LAB_149ae282e;
          uVar28 = *(uint *)((pTVar31->AllocatorInstance).InlineData + (longlong)iStack_2a8 * 4);
        }
        uStack_2a4 = -uVar28 & uVar28;
        uVar29 = (ulonglong)uStack_2a4 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar29 != 0) {
          for (; uVar29 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        local_2b8 = (int)lVar10;
        iStack_294 = local_290 + -1 + local_2b8;
        if (iVar16 < iStack_294) {
          iStack_294 = iVar16;
        }
      }
LAB_149ae282e:
      uVar28 = *(uint *)(lVar30 + 0x220);
      uStack_28c = local_3c;
      uVar26 = uVar28 & 0xffffffe0;
      iStack_288 = *(int *)(lVar30 + 0x200) - *(int *)(lVar30 + 0x22c);
      uStack_298 = 0xffffffff;
      TStack_278._padding_ = CONCAT44(uStack_2a4,iStack_2a8);
      TStack_278.CurrentBitIndex = iStack_294;
      TStack_278.UnvisitedBitMask = 0xffffffff;
      iVar16 = (int)uVar28 >> 5;
      TStack_278._28_4_ = local_3c;
      TStack_278.BaseBitIndex = local_290;
      uStack_258 = CONCAT44(uStack_284,iStack_288);
      local_2b0 = plVar34;
      local_280 = plVar34;
      TStack_278.Array = local_2a0;
      if ((((int)uVar28 < 0) || (*(int *)(lVar30 + 0x220) < (int)uVar28)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar14)) {
        pcVar11 = (code *)swi(3);
        EVar15 = (*pcVar11)();
        return EVar15;
      }
      uVar23 = *(uint *)(lVar30 + 0x220);
      if (uVar28 != uVar23) {
        pTVar31 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar30 + 0x208);
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar30 + 0x218) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar31 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar30 + 0x218);
        }
        uVar28 = -1 << ((byte)uVar28 & 0x1f) &
                 *(uint *)((pTVar31->AllocatorInstance).InlineData + (longlong)iVar16 * 4);
        while (uVar28 == 0) {
          iVar16 = iVar16 + 1;
          uVar26 = uVar26 + 0x20;
          uVar28 = uVar23;
          if ((int)(((int)(uVar23 - 1) >> 0x1f & 0x1fU) + (uVar23 - 1)) >> 5 < iVar16)
          goto LAB_149ae2940;
          uVar28 = *(uint *)((pTVar31->AllocatorInstance).InlineData + (longlong)iVar16 * 4);
        }
        uVar29 = (ulonglong)(-uVar28 & uVar28) * 2 + 1;
        lVar10 = 0x3f;
        if (uVar29 != 0) {
          for (; uVar29 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        uVar28 = (uVar26 - 1) + (int)lVar10;
        if ((int)uVar23 < (int)uVar28) {
          uVar28 = uVar23;
        }
      }
LAB_149ae2940:
      do {
        plVar13 = local_280;
        if ((int)local_280[1] - *(int *)((longlong)local_280 + 0x34) != (int)uStack_258) {
          `TSparseArray<TSparseSetElement<TTuple<FPCGAttributePropertyInputSelector,FPCGAttributePropertyInputSelector>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_3a0 + 8);
        }
        TVar32 = local_370;
        if (((TStack_278.CurrentBitIndex == uVar28) &&
            (TStack_278.Array == (TBitArray<FDefaultBitArrayAllocator> *)(lVar30 + 0x208))) &&
           (plVar13 == plVar34)) {
          return Success;
        }
        this_00 = (FPCGAttributePropertyInputSelector *)
                  (*plVar13 + (longlong)TStack_278.CurrentBitIndex * 0x88);
        FPCGAttributePropertyInputSelector::CopyAndFixLast
                  (this_00,(FPCGAttributePropertyInputSelector *)&local_2f8,
                   (UPCGData *)local_370.DebugPtr);
        PCGAttributeAccessorHelpers::CreateConstAccessor
                  ((UPCGData *)local_3a8,(FPCGAttributePropertySelector *)TVar32.DebugPtr,
                   SUB81(&local_2f8,0));
        PCGAttributeAccessorHelpers::CreateConstKeys
                  ((UPCGData *)(local_3a8 + 8),(FPCGAttributePropertySelector *)TVar32.DebugPtr);
        uVar12 = local_360._8_8_;
        if ((local_3a8 == (undefined1  [8])0x0) ||
           ((undefined8 *)local_3a0._0_8_ == (undefined8 *)0x0)) {
          PCGLog::Metadata::LogFailToCreateAccessorError
                    (&local_2f8,*(FPCGContext **)((longlong)this + 0x18));
LAB_149ae2d73:
          if ((undefined8 *)local_3a0._0_8_ != (undefined8 *)0x0) {
            (*(code *)**(undefined8 **)local_3a0._0_8_)(local_3a0._0_8_,1);
          }
          if (local_3a8 != (undefined1  [8])0x0) {
            (*(code *)**(undefined8 **)local_3a8)(local_3a8,1);
          }
          DestructItems<FString,int>
                    ((FString *)local_2f8.ExtraNames.AllocatorInstance.Data,
                     local_2f8.ExtraNames.ArrayNum);
          if (local_2f8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2f8.ExtraNames.AllocatorInstance.Data);
          }
        }
        else {
          FPCGAttributePropertyInputSelector::CopyAndFixLast
                    (this_00 + 1,(FPCGAttributePropertyInputSelector *)&local_248,
                     (UPCGData *)local_360._8_8_);
          PCGAttributeAccessorHelpers::CreateConstAccessor
                    ((UPCGData *)(local_380 + 8),(FPCGAttributePropertySelector *)uVar12,
                     SUB81(&local_248,0));
          PCGAttributeAccessorHelpers::CreateConstKeys
                    ((UPCGData *)local_380,(FPCGAttributePropertySelector *)uVar12);
          if (((FPCGCrc)local_380._8_8_ == (FPCGCrc)0x0) ||
             ((undefined8 *)local_380._0_8_ == (undefined8 *)0x0)) {
            PCGLog::Metadata::LogFailToCreateAccessorError
                      (&local_2f8,*(FPCGContext **)((longlong)this + 0x18));
LAB_149ae2d29:
            if ((undefined8 *)local_380._0_8_ != (undefined8 *)0x0) {
              (*(code *)**(undefined8 **)local_380._0_8_)(local_380._0_8_,1);
            }
            if ((FPCGCrc)local_380._8_8_ != (FPCGCrc)0x0) {
              (*(code *)**(undefined8 **)local_380._8_8_)(local_380._8_8_,1);
            }
            DestructItems<FString,int>
                      ((FString *)local_248.ExtraNames.AllocatorInstance.Data,
                       local_248.ExtraNames.ArrayNum);
            if (local_248.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_248.ExtraNames.AllocatorInstance.Data);
            }
            goto LAB_149ae2d73;
          }
          uVar5 = *(ushort *)(local_380._8_8_ + 10);
          uVar6 = *(ushort *)((longlong)local_3a8 + 10);
          if (uVar5 < 0xf) {
            if (0xe < uVar6) goto LAB_149ae2d04;
            if (PCG::Private::BroadcastableTypes.Values[uVar5][uVar6] == false) goto LAB_149ae2a5f;
          }
          else {
LAB_149ae2a5f:
            if (((0xe < uVar6) || (0xe < uVar5)) ||
               (PCG::Private::ConstructibleTypes.Values[uVar6][uVar5] == false)) {
LAB_149ae2d04:
              PCGLog::Metadata::LogIncomparableAttributesError
                        (&local_248,&local_2f8,*(FPCGContext **)((longlong)this + 0x18));
              goto LAB_149ae2d29;
            }
          }
          FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector
                    ((FPCGAttributePropertyOutputSelector *)&local_d8);
          FPCGAttributePropertySelector::ImportFromOtherSelector(&local_d8,&local_2f8);
          pFVar22 = (FPCGAttributePropertySelector *)
                    FPCGAttributePropertyOutputSelector::CopyAndFixSource
                              ((FPCGAttributePropertyOutputSelector *)&local_d8,
                               (FPCGAttributePropertyOutputSelector *)local_98,
                               (FPCGAttributePropertyInputSelector *)&local_2f8,
                               (UPCGData *)local_300);
          FPCGAttributePropertySelector::operator=(&local_d8,pFVar22);
          DestructItems<FString,int>((FString *)local_98._40_8_,local_68);
          if ((FString *)local_98._40_8_ != (FString *)0x0) {
            FMemory::Free((void *)local_98._40_8_);
          }
          iVar16 = (param_1->Interpolators).ArrayNum;
          piVar3 = &(param_1->Interpolators).ArrayMax;
          if (iVar16 == *piVar3) {
            iVar16 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x868,&(param_1->Interpolators).AllocatorInstance,piVar3);
          }
          (param_1->Interpolators).ArrayNum = iVar16 + 1;
          pFVar25 = (param_1->Interpolators).AllocatorInstance.Data + (longlong)iVar16 * 0x68;
          pFVar7 = pFVar25 + 8;
          pFVar2 = (FPCGCrc *)(pFVar25 + 0x10);
          *(longlong *)(pFVar25 + 0x20) = 0;
          *(longlong *)(pFVar25 + 0x28) = 0;
          *(longlong *)(pFVar25 + 0x30) = 0;
          *(longlong *)(pFVar25 + 0x38) = 0;
          *(longlong *)(pFVar25 + 0x40) = 0;
          *(longlong *)(pFVar25 + 0x48) = 0;
          *(longlong *)(pFVar25 + 0x50) = 0;
          *(longlong *)(pFVar25 + 0x58) = 0;
          *(longlong *)(pFVar25 + 0x60) = 0;
          *(longlong *)pFVar25 = 0;
          *(longlong *)pFVar7 = 0;
          pFVar2->Value = 0;
          pFVar2->bValid = false;
          *(undefined3 *)&pFVar2->field_0x5 = 0;
          *(longlong *)(pFVar25 + 0x18) = 0;
          FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector
                    ((FPCGAttributePropertyOutputSelector *)(pFVar25 + 0x20));
          *(longlong *)(pFVar25 + 0x60) = 0;
          if (pFVar25 != (FScriptContainerElement *)local_3a8) {
            puVar8 = *(undefined8 **)pFVar25;
            *(undefined1 (*) [8])pFVar25 = local_3a8;
            local_3a8 = (undefined1  [8])0x0;
            if (puVar8 != (undefined8 *)0x0) {
              (**(code **)*puVar8)();
            }
          }
          if (pFVar7 != (FScriptContainerElement *)(local_3a8 + 8)) {
            puVar8 = *(undefined8 **)pFVar7;
            *(undefined8 *)pFVar7 = local_3a0._0_8_;
            local_3a0._0_8_ = (undefined8 *)0x0;
            if (puVar8 != (undefined8 *)0x0) {
              (**(code **)*puVar8)(puVar8,1);
            }
          }
          if (pFVar2 != (FPCGCrc *)(local_380 + 8)) {
            FVar9 = *pFVar2;
            pFVar2->Value = local_380._8_4_;
            pFVar2->bValid = (bool)local_380[0xc];
            *(undefined3 *)&pFVar2->field_0x5 = local_380._13_3_;
            local_380._8_4_ = 0;
            local_380[0xc] = false;
            local_380._13_3_ = 0;
            if (FVar9 != (FPCGCrc)0x0) {
              (*(code *)**(undefined8 **)FVar9)(FVar9,1);
            }
          }
          pFVar7 = pFVar25 + 0x18;
          if (pFVar7 != (FScriptContainerElement *)local_380) {
            puVar8 = *(undefined8 **)pFVar7;
            *(undefined8 *)pFVar7 = local_380._0_8_;
            local_380._0_8_ = (undefined8 *)0x0;
            if (puVar8 != (undefined8 *)0x0) {
              (**(code **)*puVar8)(puVar8,1);
            }
          }
          FPCGAttributePropertySelector::operator=
                    ((FPCGAttributePropertySelector *)(pFVar25 + 0x20),&local_d8);
          DestructItems<FString,int>
                    ((FString *)local_d8.ExtraNames.AllocatorInstance.Data,
                     local_d8.ExtraNames.ArrayNum);
          if (local_d8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.ExtraNames.AllocatorInstance.Data);
          }
          if ((undefined8 *)local_380._0_8_ != (undefined8 *)0x0) {
            (*(code *)**(undefined8 **)local_380._0_8_)(local_380._0_8_,1);
          }
          if ((FPCGCrc)local_380._8_8_ != (FPCGCrc)0x0) {
            (*(code *)**(undefined8 **)local_380._8_8_)(local_380._8_8_,1);
          }
          DestructItems<FString,int>
                    ((FString *)local_248.ExtraNames.AllocatorInstance.Data,
                     local_248.ExtraNames.ArrayNum);
          if (local_248.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_248.ExtraNames.AllocatorInstance.Data);
          }
          if ((undefined8 *)local_3a0._0_8_ != (undefined8 *)0x0) {
            (*(code *)**(undefined8 **)local_3a0._0_8_)(local_3a0._0_8_,1);
          }
          if (local_3a8 != (undefined1  [8])0x0) {
            (*(code *)**(undefined8 **)local_3a8)(local_3a8,1);
          }
          DestructItems<FString,int>
                    ((FString *)local_2f8.ExtraNames.AllocatorInstance.Data,
                     local_2f8.ExtraNames.ArrayNum);
          if (local_2f8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2f8.ExtraNames.AllocatorInstance.Data);
          }
        }
        TStack_278.UnvisitedBitMask = TStack_278.UnvisitedBitMask & ~TStack_278._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_278);
      } while( true );
    }
    FPCGAttributePropertyInputSelector::CopyAndFixLast
              ((FPCGAttributePropertyInputSelector *)(*(longlong *)((longlong)this + 0x10) + 0x1b0),
               (FPCGAttributePropertyInputSelector *)&local_188,(UPCGData *)pUVar33);
    PCGAttributeAccessorHelpers::CreateConstAccessor
              ((UPCGData *)local_360,(FPCGAttributePropertySelector *)pUVar33,SUB81(&local_188,0));
    PCGAttributeAccessorHelpers::CreateConstKeys
              ((UPCGData *)&local_308.ObjectPtr,(FPCGAttributePropertySelector *)pUVar33);
    if ((IPCGAttributeAccessor *)local_360._0_8_ == (IPCGAttributeAccessor *)0x0) {
      PCGLog::Metadata::LogFailToCreateAccessorError
                (&local_188,*(FPCGContext **)((longlong)this + 0x18));
    }
    else {
      iVar16 = (**(code **)(pUVar33->_padding_ + 0x488))(pUVar33);
      TArray<double,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&param_1->TargetWeights,iVar16,Default);
      TVar32 = local_308;
      uVar12 = local_360._0_8_;
      local_338 = (param_1->TargetWeights).AllocatorInstance.Data;
      uVar28 = (param_1->TargetWeights).ArrayNum;
      if (((int)uVar28 < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar14)) {
        pcVar11 = (code *)swi(3);
        EVar15 = (*pcVar11)();
        return EVar15;
      }
      local_e8._12_1_ = bStack_32c;
      local_e8._13_3_ = uStack_32b;
      local_e8.ArrayNum = uVar28;
      local_e8.DataPtr = (double *)local_338;
      uStack_330 = uVar28;
      bVar14 = IPCGAttributeAccessor::GetRange<double>
                         ((IPCGAttributeAccessor *)uVar12,&local_e8,0,
                          (IPCGAttributeAccessorKeys *)TVar32,StrictType);
      if (bVar14) {
        if (local_308 != (TObjectPtr<UPCGMetadata>_u_0)0x0) {
          (**(code **)*(longlong *)local_308)(local_308,1);
        }
        if ((IPCGAttributeAccessor *)local_360._0_8_ != (IPCGAttributeAccessor *)0x0) {
          (**(code **)*(longlong *)local_360._0_8_)(local_360._0_8_,1);
        }
        DestructItems<FString,int>
                  ((FString *)local_188.ExtraNames.AllocatorInstance.Data,
                   local_188.ExtraNames.ArrayNum);
        if (local_188.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.ExtraNames.AllocatorInstance.Data);
        }
        goto LAB_149ae27a5;
      }
      PCGLog::Metadata::LogFailToGetAttributeError
                (&local_188,*(FPCGContext **)((longlong)this + 0x18));
    }
    if (local_308 != (TObjectPtr<UPCGMetadata>_u_0)0x0) {
      (**(code **)*(longlong *)local_308)(local_308,1);
    }
    if ((IPCGAttributeAccessor *)local_360._0_8_ != (IPCGAttributeAccessor *)0x0) {
      (**(code **)*(longlong *)local_360._0_8_)(local_360._0_8_,1);
    }
    DestructItems<FString,int>
              ((FString *)local_188.ExtraNames.AllocatorInstance.Data,local_188.ExtraNames.ArrayNum)
    ;
    local_208.ExtraNames.AllocatorInstance.Data = local_188.ExtraNames.AllocatorInstance.Data;
  }
  else {
    FPCGAttributePropertyInputSelector::CopyAndFixLast
              ((FPCGAttributePropertyInputSelector *)(*(longlong *)((longlong)this + 0x10) + 0x168),
               (FPCGAttributePropertyInputSelector *)&local_1c8,(UPCGData *)TVar32.DebugPtr);
    PCGAttributeAccessorHelpers::CreateConstAccessor
              ((UPCGData *)&local_368.ObjectPtr,(FPCGAttributePropertySelector *)TVar32.DebugPtr,
               SUB81(&local_1c8,0));
    PCGAttributeAccessorHelpers::CreateConstKeys
              ((UPCGData *)&local_310.ObjectPtr,(FPCGAttributePropertySelector *)TVar32.DebugPtr);
    if (local_368.DebugPtr == (UPCGMetadata *)0x0) {
      PCGLog::Metadata::LogFailToCreateAccessorError
                (&local_1c8,*(FPCGContext **)((longlong)this + 0x18));
    }
    else {
      iVar16 = (**(code **)((TVar32.DebugPtr)->_padding_ + 0x488))(TVar32.DebugPtr);
      TArray<double,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&param_1->SourceWeights,iVar16,Default);
      TVar20 = local_310;
      TVar32 = local_368;
      local_338 = (param_1->SourceWeights).AllocatorInstance.Data;
      uVar28 = (param_1->SourceWeights).ArrayNum;
      if (((int)uVar28 < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar14)) {
        pcVar11 = (code *)swi(3);
        EVar15 = (*pcVar11)();
        return EVar15;
      }
      local_f8._12_1_ = bStack_32c;
      local_f8._13_3_ = uStack_32b;
      local_f8.ArrayNum = uVar28;
      local_f8.DataPtr = (double *)local_338;
      uStack_330 = uVar28;
      bVar14 = IPCGAttributeAccessor::GetRange<double>
                         ((IPCGAttributeAccessor *)TVar32.DebugPtr,&local_f8,0,
                          (IPCGAttributeAccessorKeys *)TVar20.DebugPtr,StrictType);
      if (bVar14) {
        if (local_310.DebugPtr != (UPCGMetadata *)0x0) {
          (**(code **)(local_310.DebugPtr)->_padding_)(local_310.DebugPtr,1);
        }
        if (local_368.DebugPtr != (UPCGMetadata *)0x0) {
          (**(code **)(local_368.DebugPtr)->_padding_)(local_368.DebugPtr,1);
        }
        DestructItems<FString,int>
                  ((FString *)local_1c8.ExtraNames.AllocatorInstance.Data,
                   local_1c8.ExtraNames.ArrayNum);
        if (local_1c8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.ExtraNames.AllocatorInstance.Data);
        }
        goto LAB_149ae2611;
      }
      PCGLog::Metadata::LogFailToGetAttributeError
                (&local_1c8,*(FPCGContext **)((longlong)this + 0x18));
    }
    if (local_310.DebugPtr != (UPCGMetadata *)0x0) {
      (**(code **)(local_310.DebugPtr)->_padding_)(local_310.DebugPtr,1);
    }
    if (local_368.DebugPtr != (UPCGMetadata *)0x0) {
      (**(code **)(local_368.DebugPtr)->_padding_)(local_368.DebugPtr,1);
    }
    DestructItems<FString,int>
              ((FString *)local_1c8.ExtraNames.AllocatorInstance.Data,local_1c8.ExtraNames.ArrayNum)
    ;
    local_208.ExtraNames.AllocatorInstance.Data = local_1c8.ExtraNames.AllocatorInstance.Data;
  }
LAB_149ae2e22:
  if (local_208.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.ExtraNames.AllocatorInstance.Data);
  }
  return NoOperation;
}

// ExecuteInternal @ 149b044f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FPCGAttractElement::ExecuteInternal(FPCGAttractElement *this,FPCGContext *param_1)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  bool bVar7;
  undefined1 local_res10 [8];
  UPCGAttractSettings *local_res18 [2];
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId521,"FPCGAttractElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttractElement.cpp"
               ,0x209);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId521);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TimeSlicedContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttractElement.cpp"
                         ,0x20c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  bVar4 = TPCGTimeSlicedContext<PCGAttractElement::FExecState,PCGAttractElement::FAttractState,FPCGContext>
          ::DataIsPreparedForExecution
                    ((TPCGTimeSlicedContext<PCGAttractElement::FExecState,PCGAttractElement::FAttractState,FPCGContext>
                      *)param_1);
  if (bVar4) {
    if (*(char *)((longlong)&param_1[1].InputData.TaggedData.AllocatorInstance.Data + 1) != '\x02')
    {
      local_res18[0] = FPCGContext::GetInputSettings<UPCGAttractSettings>(param_1);
      if ((local_res18[0] == (UPCGAttractSettings *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Settings",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttractElement.cpp"
                             ,0x21a,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      *(int *)&param_1[1]._padding_ = (int)param_1[1]._padding_ + 1;
      bVar4 = TPCGTimeSlicedContext<PCGAttractElement::FExecState,PCGAttractElement::FAttractState,FPCGContext>
              ::DataIsPreparedForExecution
                        ((TPCGTimeSlicedContext<PCGAttractElement::FExecState,PCGAttractElement::FAttractState,FPCGContext>
                          *)param_1);
      if (((bVar4) ||
          (local_res10[0] = bVar4,
          bVar4 = `TPCGTimeSlicedElementBase<PCGAttractElement::FExecState,PCGAttractElement::FAttractState,FPCGContext>
                  ::ExecuteSlice'::__l3::<lambda_1>::operator()(local_res10), bVar4)) &&
         ((int)param_1[1].InputData.InactiveOutputPinBitmask != 0)) {
        do {
          uVar2 = *(uint *)((longlong)&param_1[1]._padding_ + 4);
          uVar6 = 0;
          if ((int)uVar2 < (int)param_1[1].InputData.InactiveOutputPinBitmask) {
            uVar6 = ~uVar2 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          bVar4 = `FPCGAttractElement::ExecuteInternal'::__l2::<lambda_1>::operator()
                            (local_res18,
                             (TPCGTimeSlicedContext<PCGAttractElement::FExecState,PCGAttractElement::FAttractState,FPCGContext>
                              *)param_1,(FExecState *)&param_1[1].InputData.DataCrcs,
                             (FAttractState *)
                             ((longlong)(int)uVar2 * 0xa0 +
                             *(longlong *)&param_1[1].InputData.DataCrcs.ArrayNum),uVar2);
          if (!bVar4) {
            bVar4 = false;
            goto LAB_149b04590;
          }
          piVar1 = (int *)((longlong)&param_1[1]._padding_ + 4);
          *piVar1 = *piVar1 + 1;
        } while ((*(int *)((longlong)&param_1[1]._padding_ + 4) <
                  (int)param_1[1].InputData.InactiveOutputPinBitmask) &&
                (bVar4 = FPCGAsyncState::ShouldStop(&param_1->AsyncState), !bVar4));
        bVar4 = *(int *)((longlong)&param_1[1]._padding_ + 4) ==
                (int)param_1[1].InputData.InactiveOutputPinBitmask;
      }
      else {
        bVar4 = true;
      }
      goto LAB_149b04590;
    }
    FPCGDataCollection::operator=(&param_1->OutputData,&param_1->InputData);
  }
  bVar4 = true;
LAB_149b04590:
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar4;
}

// PrepareDataInternal @ 149b20ee0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGAttractElement::PrepareDataInternal(FPCGAttractElement *this,FPCGContext *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  int iVar5;
  bool bVar6;
  undefined1 uVar7;
  EPCGTimeSliceInitResult EVar8;
  UPCGAttractSettings *pUVar9;
  FText *pFVar10;
  FPCGDataCollection *pFVar11;
  bool bVar12;
  TPCGTimeSlicedContext<PCGAttractElement::FExecState,PCGAttractElement::FAttractState,FPCGContext>
  *local_res10;
  UPCGAttractSettings *local_res18;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_78;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_68;
  code *local_58;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> **local_50;
  FText local_48;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *local_38;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *local_30;
  UPCGAttractSettings *local_28;
  FPCGContext *local_20;
  
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId283,"FPCGAttractElement::PrepareData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttractElement.cpp"
               ,0x11b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId283);
  }
  pUVar9 = FPCGContext::GetInputSettings<UPCGAttractSettings>(param_1);
  if ((pUVar9 == (UPCGAttractSettings *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttractElement.cpp"
                         ,0x11e,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttractElement.cpp"
                         ,0x121,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_78,&PCGAttractElement::Constants::InputSourceLabel);
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_68,&PCGAttractElement::Constants::InputTargetLabel);
  if ((local_78.ArrayNum == 0) || (local_68.ArrayNum == 0)) {
    pFVar11 = &param_1->OutputData;
    if (pFVar11 != (FPCGDataCollection *)&local_78) {
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)(pFVar11->TaggedData).AllocatorInstance.Data,
                 (param_1->OutputData).TaggedData.ArrayNum);
      iVar5 = local_78.ArrayNum;
      FVar4.Data = local_78.AllocatorInstance.Data;
      piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
      iVar2 = *piVar1;
      (param_1->OutputData).TaggedData.ArrayNum = local_78.ArrayNum;
      if ((local_78.ArrayNum == 0) && (iVar2 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x78,8,local_78.ArrayNum,iVar2,(ForAnyElementType *)pFVar11,local_78.ArrayNum,
                   piVar1);
        ConstructItems<FPCGTaggedData,FPCGTaggedData,int>
                  ((pFVar11->TaggedData).AllocatorInstance.Data,(FPCGTaggedData *)FVar4.Data,iVar5);
      }
    }
  }
  else if ((local_68.ArrayNum < 2) || (local_68.ArrayNum == local_78.ArrayNum)) {
    if ((pUVar9->bRemoveUnattractedPoints == false) &&
       ((pUVar9->bOutputAttractIndex == false &&
        (*(int *)&(pUVar9->SourceAndTargetAttributeMapping).field_0x8 ==
         *(int *)&(pUVar9->SourceAndTargetAttributeMapping).field_0x34)))) {
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_48,L"PCGAttractElement",L"NoOperation",
                           L"Attract node settings will do nothing. Sources will be forwarded.");
      PCGLog::LogWarningOnGraph(pFVar10,param_1);
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      }
      TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::operator=
                (&(param_1->OutputData).TaggedData,&local_78);
    }
    else {
      local_res18 = pUVar9;
      if (*(char *)((longlong)&param_1[1].InputData.TaggedData.AllocatorInstance.Data + 1) == '\0')
      {
        local_res10 = (TPCGTimeSlicedContext<PCGAttractElement::FExecState,PCGAttractElement::FAttractState,FPCGContext>
                       *)param_1;
        EVar8 = UE::Core::Private::Function::
                TFunctionRefCaller<`FPCGAttractElement::PrepareDataInternal'::__l2::<lambda_1>,enum_EPCGTimeSliceInitResult,TPCGTimeSlicedContext<PCGAttractElement::FExecState,PCGAttractElement::FAttractState,FPCGContext>_*,PCGAttractElement::FExecState_&>
                ::Call(&local_res18,&local_res10,(FExecState *)&param_1[1].InputData.DataCrcs);
        *(EPCGTimeSliceInitResult *)
         ((longlong)&param_1[1].InputData.TaggedData.AllocatorInstance.Data + 1) = EVar8;
      }
      local_38 = &local_78;
      local_30 = &local_68;
      local_50 = &local_38;
      local_58 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FPCGAttractElement::PrepareDataInternal'::__l2::<lambda_2>,enum_EPCGTimeSliceInitResult,PCGAttractElement::FAttractState_&,PCGAttractElement::FExecState_const_&,unsigned_int>
                 ::Call;
      local_28 = pUVar9;
      local_20 = param_1;
      TPCGTimeSlicedContext<PCGAttractElement::FExecState,PCGAttractElement::FAttractState,FPCGContext>
      ::InitializePerIterationStates
                ((TPCGTimeSlicedContext<PCGAttractElement::FExecState,PCGAttractElement::FAttractState,FPCGContext>
                  *)param_1,local_78.ArrayNum,
                 (TFunctionRef<EPCGTimeSliceInitResult___cdecl(PCGAttractElement::FAttractState_&,PCGAttractElement::FExecState_const_&,unsigned_int)>
                  *)&local_58);
    }
  }
  else {
    PCGLog::InputOutput::LogInvalidCardinalityError
              (PCGAttractElement::Constants::InputSourceLabel,
               PCGAttractElement::Constants::InputTargetLabel,param_1);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
  if ((FPCGTaggedData *)local_68.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
  if ((FPCGTaggedData *)local_78.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// SupportsBasePointDataInputs @ 149b2d120

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGAttractElement::SupportsBasePointDataInputs(FPCGAttractElement *this,FPCGContext *param_1)

{
  return true;
}

