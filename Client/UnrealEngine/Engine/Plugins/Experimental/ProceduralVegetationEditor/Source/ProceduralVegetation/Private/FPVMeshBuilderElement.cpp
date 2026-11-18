// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 1

// ExecuteInternal @ 14da82e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014da83154) */
/* WARNING: Removing unreachable block (ram,0x00014da8363a) */
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
FPVMeshBuilderElement::ExecuteInternal(FPVMeshBuilderElement *this,FPCGContext *param_1)

{
  int *piVar1;
  TVector2<float>_u_0 *pTVar2;
  UPCGNode *this_00;
  FScriptContainerElement *pFVar3;
  TVector2<float>_u_0_s_0 TVar4;
  code *pcVar5;
  FPVMaterialSettings *this_01;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  UClass *pUVar9;
  UPCGSettings *pUVar10;
  TObjectPtr<UPCGSettings>_u_0 TVar11;
  FPCGTaggedData *pFVar12;
  FObjectPtr_u_0 FVar13;
  FString *pFVar14;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *pTVar15;
  FText *pFVar16;
  UPVMeshData *pUVar17;
  undefined8 *puVar18;
  wchar_t *pwVar19;
  longlong lVar20;
  FPCGContext *pFVar21;
  FPCGDataPtrWrapper *this_02;
  FObjectPtr_u_0 FVar22;
  int iVar23;
  FManagedArrayCollection *pFVar24;
  longlong *plVar25;
  ForAnyElementType FVar26;
  bool bVar27;
  undefined1 auStackY_988 [32];
  <lambda_1> local_937 [7];
  TObjectPtr<UPCGSettings>_u_0 local_930;
  FString local_928;
  ForAnyElementType local_918;
  undefined8 local_910;
  int local_908;
  FString local_900;
  ForAnyElementType local_8f0;
  int local_8e8;
  int local_8e4;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_8e0;
  TObjectPtr<UPCGSettings>_u_0 local_8d0;
  FObjectPtr_u_0 local_8c8;
  FPVMaterialSettings *local_8c0;
  FString local_8b8;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_8a8;
  FManagedArrayCollection *local_898;
  FPCGContext *local_890;
  FString local_888;
  FText local_878;
  FLinearColor_u_0 local_868;
  FPlantProfileFacade local_858;
  FStringFormatArg local_808;
  FBranchFacade local_7e8;
  FGeometryCollection local_4f8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_988;
  bVar27 = -1 < CpuChannel->Enabled;
  local_890 = param_1;
  if (bVar27) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId135,"FPVMeshBuilderElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Nodes\\PVMeshBuilderSettings.cpp"
               ,0x87);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId135);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Nodes\\PVMeshBuilderSettings.cpp"
                         ,0x89,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar10 = UPCGNode::GetSettings(this_00), pUVar10 == (UPCGSettings *)0x0)) {
      pFVar12 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPVMeshBuilderSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_937[0]);
      if (pFVar12 != (FPCGTaggedData *)0x0) {
        local_8d0.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar12->Data).Data.field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_8d0.DebugPtr != (UPCGSettings *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_8d0.DebugPtr);
        }
        if (local_8d0.DebugPtr != (UPCGSettings *)0x0) {
          pUVar9 = UPVMeshBuilderSettings::StaticClass();
          bVar6 = FObjectPtr::IsA(&local_8d0.ObjectPtr,pUVar9);
          if (bVar6) {
            local_930.DebugPtr = local_8d0.DebugPtr;
            TVar11 = local_8d0;
            goto LAB_14da82fee;
          }
        }
      }
    }
    else {
      pUVar10 = UPCGNode::GetSettings(this_00);
      TVar11.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar10);
      if (TVar11.DebugPtr != (UPCGSettings *)0x0) {
        local_930.DebugPtr = TVar11.DebugPtr;
        pUVar9 = UPVMeshBuilderSettings::StaticClass();
        iVar8 = (int)pUVar9->_padding_;
        if ((iVar8 <= *(int *)((TVar11.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar11.DebugPtr)->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
            &pUVar9->_padding_)) goto LAB_14da82fee;
      }
    }
    local_930.DebugPtr = (UPCGSettings *)0x0;
    TVar11.DebugPtr = (UPCGSettings *)0x0;
  }
  else {
    pUVar9 = UPVMeshBuilderSettings::StaticClass();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar9);
    if (bVar6) {
      local_930 = (TObjectPtr<UPCGSettings>_u_0)(param_1->SettingsWithOverride).field0_0x0.DebugPtr;
      TVar11 = local_930;
    }
    else {
      local_930.DebugPtr = (UPCGSettings *)0x0;
      TVar11.DebugPtr = (UPCGSettings *)0x0;
    }
  }
LAB_14da82fee:
  FVar22.Handle = (UObject *)0x0;
  if (TVar11.DebugPtr == (UPCGSettings *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Settings",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Nodes\\PVMeshBuilderSettings.cpp"
                       ,0x8c,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("MutableSettings",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Nodes\\PVMeshBuilderSettings.cpp"
                       ,0x8f,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  plVar25 = &TVar11.DebugPtr[4]._padding_;
  DestructItems<FString,int>((FString *)*plVar25,(int)TVar11.DebugPtr[4]._padding_);
  iVar8 = *(int *)((longlong)&TVar11.DebugPtr[4]._padding_ + 4);
  piVar1 = (int *)((longlong)&TVar11.DebugPtr[4]._padding_ + 4);
  *(undefined4 *)&TVar11.DebugPtr[4]._padding_ = 0;
  if (iVar8 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)plVar25,0,piVar1);
  }
  ::FString::FString(&local_900,L"None");
  if ((((FString *)*plVar25 <= &local_900) && (&local_900 < (FString *)*plVar25 + *piVar1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  iVar8 = (int)TVar11.DebugPtr[4]._padding_;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)plVar25,piVar1);
    *(int *)&TVar11.DebugPtr[4]._padding_ = iVar8 + 1;
  }
  else {
    *(int *)&TVar11.DebugPtr[4]._padding_ = iVar8 + 1;
  }
  puVar18 = (undefined8 *)(*plVar25 + (longlong)iVar8 * 0x10);
  *puVar18 = 0;
  *puVar18 = local_900.Data.AllocatorInstance.Data;
  *(int *)(puVar18 + 1) = local_900.Data.ArrayNum;
  *(int *)((longlong)puVar18 + 0xc) = local_900.Data.ArrayMax;
  local_900.Data.ArrayNum = 0;
  local_900.Data.ArrayMax = 0;
  local_900.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_8a8,&PCGPinConstants::DefaultInputLabel);
  if (local_8a8.ArrayNum == 0) goto LAB_14da83870;
  if ((local_8a8.ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  local_8c8 = *(FObjectPtr_u_0 *)local_8a8.AllocatorInstance.Data;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14da831d0:
    if (local_8c8.Handle == (UObject *)0x0) goto LAB_14da831ee;
    pUVar9 = UPVGrowthData::StaticClass();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)&local_8c8,pUVar9);
    FVar13 = local_8c8;
    if (!bVar6) goto LAB_14da831ee;
  }
  else {
    if (local_8c8.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_8c8.Handle);
      goto LAB_14da831d0;
    }
LAB_14da831ee:
    FVar13.Handle = FVar22.Handle;
  }
  if (FVar13.Handle == (UObject *)0x0) {
    PCGLog::InputOutput::LogInvalidInputDataError(param_1);
  }
  else {
    local_898 = (FManagedArrayCollection *)&FVar13.Handle[3].field_0x20;
    local_8c0 = (FPVMaterialSettings *)&TVar11.DebugPtr[1]._padding_;
    if ((char)TVar11.DebugPtr[1]._padding_ == '\0') {
      PV::Facades::FBranchFacade::FBranchFacade(&local_7e8,local_898);
      if ((local_7e8.TrunkMaterialPathAttribute.ConstAttributeArray == (TManagedArray<FString> *)0x0
          ) || (iVar8 = (**(code **)(*(longlong *)
                                      local_7e8.TrunkMaterialPathAttribute.ConstAttributeArray +
                                    0x60))(), iVar8 < 1)) {
        local_918.Data = (FScriptContainerElement *)0x0;
        local_910 = 0;
      }
      else {
        pFVar14 = TManagedArrayAccessor<FString>::operator[]
                            (&local_7e8.TrunkMaterialPathAttribute,0);
        local_918.Data = (FScriptContainerElement *)0x0;
        iVar8 = (pFVar14->Data).ArrayNum;
        pFVar3 = (pFVar14->Data).AllocatorInstance.Data;
        local_910 = CONCAT44(local_910._4_4_,iVar8);
        if (iVar8 == 0) {
          local_910 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar8,0,&local_918,iVar8,(int *)((longlong)&local_910 + 4));
          memcpy(local_918.Data,pFVar3,(longlong)iVar8 * 2);
        }
      }
      if ((local_7e8.TrunkURangeAttribute.ConstAttributeArray ==
           (TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *)0x0) ||
         (iVar8 = (**(code **)(*(longlong *)local_7e8.TrunkURangeAttribute.ConstAttributeArray +
                              0x60))(local_7e8.TrunkURangeAttribute.ConstAttributeArray), iVar8 < 1)
         ) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          atexit(`PV::Facades::FBranchFacade::GetTrunkURange'::__l2::
                 _dynamic_atexit_destructor_for__TrunkURange__);
          _Init_thread_footer(&::_TSS0);
        }
        pTVar15 = &TrunkURange;
      }
      else {
        if ((*(int *)&(local_7e8.TrunkURangeAttribute.ConstAttributeArray)->field_0x18 < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pTVar15 = *(TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> **)
                   &(local_7e8.TrunkURangeAttribute.ConstAttributeArray)->field_0x10;
      }
      local_8f0.Data = (FScriptContainerElement *)0x0;
      local_8e8 = pTVar15->ArrayNum;
      lVar20 = (longlong)local_8e8;
      pFVar3 = (pTVar15->AllocatorInstance).Data;
      if (local_8e8 == 0) {
        local_8e4 = 0;
        iVar8 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,local_8e8,0,&local_8f0,local_8e8,&local_8e4);
        memcpy(local_8f0.Data,pFVar3,lVar20 << 3);
        iVar8 = local_8e8;
      }
      this_01 = local_8c0;
      local_908 = 0;
      pTVar2 = (TVector2<float>_u_0 *)(local_8f0.Data + (longlong)iVar8 * 8);
      FVar26.Data = local_8f0.Data;
      iVar23 = iVar8;
      while( true ) {
        if (iVar23 != iVar8) {
          local_937[0] = (<lambda_1>)0x0;
          `TCheckedPointerIterator<UE::Math::TVector2<float>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_937);
        }
        TVar11 = local_930;
        if ((TVector2<float>_u_0 *)FVar26.Data == pTVar2) break;
        lVar20 = (longlong)(int)local_910;
        TVar4 = *(TVector2<float>_u_0_s_0 *)FVar26.Data;
        local_8b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_8c0 = (FPVMaterialSettings *)local_918.Data;
        local_8b8.Data.ArrayNum = (int)local_910;
        if ((int)local_910 == 0) {
          local_8b8.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,(int)local_910,0,(ForAnyElementType *)&local_8b8,(int)local_910,
                     &local_8b8.Data.ArrayMax);
          memcpy(local_8b8.Data.AllocatorInstance.Data,local_8c0,lVar20 * 2);
        }
        iVar23 = local_908;
        FPVMaterialSettings::SetMaterial(this_01,&local_8b8,(TVector2<float>)TVar4,local_908);
        local_908 = iVar23 + 1;
        FVar26.Data = FVar26.Data + 8;
        iVar23 = local_8e8;
      }
      FPVMaterialSettings::operator=
                ((FPVMaterialSettings *)&local_930.DebugPtr[5]._padding_,
                 (FPVMaterialSettings *)&local_930.DebugPtr[1]._padding_);
      plVar25 = &TVar11.DebugPtr[4]._padding_;
      if (TVar11.DebugPtr[5].bUseSeed == false) {
        FPVMaterialSettings::operator=
                  ((FPVMaterialSettings *)&TVar11.DebugPtr[5]._padding_,
                   (FPVMaterialSettings *)&TVar11.DebugPtr[1]._padding_);
        TVar11.DebugPtr[5].bUseSeed = true;
      }
      if ((TVector2<float>_u_0 *)local_8f0.Data != (TVector2<float>_u_0 *)0x0) {
        FMemory::Free(local_8f0.Data);
      }
      if ((FPVMaterialSettings *)local_918.Data != (FPVMaterialSettings *)0x0) {
        FMemory::Free(local_918.Data);
      }
    }
    else {
      FPVMaterialSettings::operator=((FPVMaterialSettings *)&TVar11.DebugPtr[5]._padding_,local_8c0)
      ;
    }
    pFVar24 = local_898;
    PV::Facades::FPlantProfileFacade::FPlantProfileFacade(&local_858,local_898);
    if (local_858.ProfilePointsAttribute.ConstAttributeArray ==
        (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
      iVar8 = FManagedArrayCollection::NumElements
                        (local_858.ProfilePointsAttribute.ConstCollection,
                         local_858.ProfilePointsAttribute.Group);
    }
    else {
      iVar8 = (**(code **)(*(longlong *)local_858.ProfilePointsAttribute.ConstAttributeArray + 0x60)
              )();
    }
    if (iVar8 < 1) {
      uVar7 = 0;
    }
    else {
      while( true ) {
        if (local_858.ProfilePointsAttribute.ConstAttributeArray ==
            (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
          iVar8 = FManagedArrayCollection::NumElements
                            (local_858.ProfilePointsAttribute.ConstCollection,
                             local_858.ProfilePointsAttribute.Group);
        }
        else {
          iVar8 = (**(code **)(*(longlong *)local_858.ProfilePointsAttribute.ConstAttributeArray +
                              0x60))(local_858.ProfilePointsAttribute.ConstAttributeArray);
        }
        iVar23 = FVar22._0_4_;
        if (iVar8 <= iVar23) break;
        local_928.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_928.Data.ArrayNum = 0;
        local_928.Data.ArrayMax = 0;
        ::FString::AppendInt(&local_928,iVar23);
        if ((((FString *)*plVar25 <= &local_928) &&
            (&local_928 < (FString *)*plVar25 + *(int *)((longlong)plVar25 + 0xc))) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        iVar8 = (int)plVar25[1];
        if (iVar8 == *(int *)((longlong)plVar25 + 0xc)) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,(ForAnyElementType *)plVar25,(int *)((longlong)plVar25 + 0xc));
          *(int *)(plVar25 + 1) = iVar8 + 1;
        }
        else {
          *(int *)(plVar25 + 1) = iVar8 + 1;
        }
        puVar18 = (undefined8 *)((longlong)iVar8 * 0x10 + *plVar25);
        *puVar18 = 0;
        *puVar18 = local_928.Data.AllocatorInstance.Data;
        local_928.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(puVar18 + 1) = local_928.Data.ArrayNum;
        *(int *)((longlong)puVar18 + 0xc) = local_928.Data.ArrayMax;
        local_928.Data.ArrayNum = 0;
        local_928.Data.ArrayMax = 0;
        FVar22._0_4_ = iVar23 + 1;
        FVar22._4_4_ = 0;
      }
      uVar7 = 1;
      pFVar24 = local_898;
      TVar11 = local_930;
    }
    *(undefined1 *)&TVar11.DebugPtr[4]._padding_ = uVar7;
    pFVar21 = local_890;
    if (1 < *(int *)&TVar11.DebugPtr[5].CachedElement.SharedReferenceCount.ReferenceController) {
      if (*(int *)&TVar11.DebugPtr[5].CachedElement.SharedReferenceCount.ReferenceController == 0) {
        pwVar19 = L"";
      }
      else {
        pwVar19 = (wchar_t *)TVar11.DebugPtr[5].CachedElement.Object;
      }
      FStringFormatArg::FStringFormatArg(&local_808,pwVar19);
      local_8e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_8e0.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,0,&local_8e0.AllocatorInstance,1,&local_8e0.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_8e0.AllocatorInstance.Data,&local_808,1);
      ::FString::FormatImpl(&local_888,L"{0} ",&local_8e0);
      pFVar16 = FText::FromString(&local_878,&local_888);
      pFVar21 = local_890;
      PCGLog::LogWarningOnGraph(pFVar16,local_890);
      if (local_878.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_878.TextData.Reference + 0x10))();
      }
      if (local_888.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_888.Data.AllocatorInstance.Data);
      }
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_8e0.AllocatorInstance.Data,local_8e0.ArrayNum);
      if ((FStringFormatArg *)local_8e0.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_8e0.AllocatorInstance.Data);
      }
      if (local_808.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_808.StringValue.Data.AllocatorInstance.Data);
      }
    }
    pUVar17 = FPCGContext::NewObject_AnyThread<UPVMeshData>(pFVar21);
    local_868 = FLinearColor::White.field0_0x0;
    FGeometryCollection::FGeometryCollection
              (&local_4f8,(FGeometryCollectionDefaults *)&local_868._s_0);
    FPVMeshBuilder::GenerateGeometryCollection
              (pFVar24,(FPVMeshBuilderParams *)(TVar11.DebugPtr + 1),&local_4f8);
    FManagedArrayCollection::operator=
              ((FManagedArrayCollection *)&pUVar17->field_0x98,(FManagedArrayCollection *)&local_4f8
              );
    iVar8 = (pFVar21->OutputData).TaggedData.ArrayNum;
    piVar1 = &(pFVar21->OutputData).TaggedData.ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x878,(ForAnyElementType *)&pFVar21->OutputData,piVar1);
    }
    (pFVar21->OutputData).TaggedData.ArrayNum = iVar8 + 1;
    this_02 = (FPCGDataPtrWrapper *)
              ((pFVar21->OutputData).TaggedData.AllocatorInstance.Data + (longlong)iVar8 * 0x78);
    this_02[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    this_02[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    this_02[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    this_02[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    this_02[6].WeakData.WeakPtr.ObjectIndex = 0x100;
    (this_02->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
    (this_02->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
    this_02[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    this_02[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    this_02[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    this_02[3].WeakData.WeakPtr.ObjectIndex = 0;
    this_02[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
    *(undefined4 *)&this_02[4].Data.field0_0x0 = 0xffffffff;
    *(undefined4 *)((longlong)&this_02[4].Data.field0_0x0 + 4) = 0;
    this_02[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    this_02[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    *(undefined8 *)&this_02[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
    *(undefined4 *)((longlong)&this_02[7].Data.field0_0x0 + 4) = 0xffffffff;
    FPCGDataPtrWrapper::operator=(this_02,(UPCGData *)pUVar17);
    this_02[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
         (FObjectPtr_u_0)PCGPinConstants::DefaultOutputLabel;
    FGeometryCollection::~FGeometryCollection(&local_4f8);
  }
LAB_14da83870:
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_8a8.AllocatorInstance.Data,local_8a8.ArrayNum);
  if ((FPCGTaggedData *)local_8a8.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_8a8.AllocatorInstance.Data);
  }
  if (bVar27) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

