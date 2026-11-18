// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 2

// CanExecuteOnlyOnMainThread @ 14da706c0

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
FPVFoliageElement::CanExecuteOnlyOnMainThread(FPVFoliageElement *this,FPCGContext *param_1)

{
  return true;
}

// ExecuteInternal @ 14da81790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014da81dfc) */
/* WARNING: Removing unreachable block (ram,0x00014da82006) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FPVFoliageElement::ExecuteInternal(FPVFoliageElement *this,FPCGContext *param_1)

{
  int *piVar1;
  FName *pFVar2;
  UPCGNode *this_00;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  UPVMeshData *pUVar6;
  FPCGContext *pFVar7;
  ForAnyElementType FVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  UClass *pUVar15;
  UPCGSettings *pUVar16;
  TObjectPtr<UPCGSettings>_u_0 TVar17;
  FPCGTaggedData *pFVar18;
  FString *pFVar19;
  longlong lVar20;
  uint uVar21;
  FObjectPtr_u_0 FVar22;
  FScriptContainerElement *pFVar23;
  FObjectPtr_u_0 FVar24;
  FName FVar25;
  FPCGDataPtrWrapper *this_01;
  uint uVar26;
  TManagedArray<FString> *pTVar27;
  FObjectPtr_u_0 FVar28;
  FManagedArrayCollection *this_02;
  <lambda_1> <Var29;
  undefined1 auStackY_498 [32];
  TArray<FString,TSizedDefaultAllocator<32>_> local_450;
  ForAnyElementType local_440;
  undefined8 local_438;
  FScriptContainerElement *local_430;
  TObjectPtr<UPCGSettings>_u_0 local_428;
  FObjectPtr_u_0 local_420;
  FString local_418;
  FString local_408;
  FSoftObjectPath local_3f8;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_3d8;
  ForAnyElementType *local_3c8;
  UPVMeshData *local_3c0;
  FPCGContext *local_3b8;
  FScriptContainerElement *local_3a8;
  uint uStack_3a0;
  undefined4 uStack_39c;
  TStringView<wchar_t> local_398;
  FName local_388;
  FName FStack_380;
  FFoliageFacade local_368;
  FManagedArrayCollection local_e8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_498;
  <Var29 = (<lambda_1>)(-1 < CpuChannel->Enabled);
  local_3b8 = param_1;
  if ((bool)<Var29) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId97,"FPVFoliageElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Nodes\\PVFoliagePaletteSettings.cpp"
               ,0x61);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId97);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InContext",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Nodes\\PVFoliagePaletteSettings.cpp"
                          ,99,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    uVar11 = (*pcVar4)();
    return (bool)uVar11;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar16 = UPCGNode::GetSettings(this_00), pUVar16 == (UPCGSettings *)0x0)) {
      pFVar18 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPVFoliagePaletteSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,<Var29);
      if (pFVar18 != (FPCGTaggedData *)0x0) {
        local_428.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar18->Data).Data.field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_428.DebugPtr != (UPCGSettings *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_428.DebugPtr);
        }
        if (local_428.DebugPtr != (UPCGSettings *)0x0) {
          pUVar15 = UPVFoliagePaletteSettings::StaticClass();
          bVar10 = FObjectPtr::IsA(&local_428.ObjectPtr,pUVar15);
          TVar17 = local_428;
          if (bVar10) goto LAB_14da81949;
        }
      }
    }
    else {
      pUVar16 = UPCGNode::GetSettings(this_00);
      TVar17.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar16);
      if (TVar17.DebugPtr != (UPCGSettings *)0x0) {
        pUVar15 = UPVFoliagePaletteSettings::StaticClass();
        iVar12 = (int)pUVar15->_padding_;
        if ((iVar12 <= *(int *)((TVar17.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar17.DebugPtr)->_padding_ + 0x30) + (longlong)iVar12 * 8) ==
            &pUVar15->_padding_)) goto LAB_14da81949;
      }
    }
    TVar17.DebugPtr = (UPCGSettings *)0x0;
  }
  else {
    pUVar15 = UPVFoliagePaletteSettings::StaticClass();
    bVar10 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar15);
    TVar17.DebugPtr = (UPCGSettings *)0x0;
    if (bVar10) {
      TVar17.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
  }
LAB_14da81949:
  FVar24.Handle = (UObject *)0x0;
  if (TVar17.DebugPtr == (UPCGSettings *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Settings",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Nodes\\PVFoliagePaletteSettings.cpp"
                        ,0x66,L"");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      uVar11 = (*pcVar4)();
      return (bool)uVar11;
    }
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("MutableSettings",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Nodes\\PVFoliagePaletteSettings.cpp"
                        ,0x69,L"");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      uVar11 = (*pcVar4)();
      return (bool)uVar11;
    }
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_3d8,&PCGPinConstants::DefaultInputLabel);
  if (local_3d8.ArrayNum == 0) goto LAB_14da82110;
  if ((local_3d8.ArrayNum < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar4 = (code *)swi(3);
    uVar11 = (*pcVar4)();
    return (bool)uVar11;
  }
  local_420 = *(FObjectPtr_u_0 *)local_3d8.AllocatorInstance.Data;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14da81a12:
    if (local_420.Handle == (UObject *)0x0) goto LAB_14da81a32;
    pUVar15 = UPVMeshData::StaticClass();
    bVar10 = FObjectPtr::IsA((FObjectPtr *)&local_420,pUVar15);
    FVar22 = local_420;
    if (!bVar10) goto LAB_14da81a32;
  }
  else {
    if (local_420.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_420.Handle);
      goto LAB_14da81a12;
    }
LAB_14da81a32:
    FVar22.Handle = FVar24.Handle;
  }
  if (FVar22.Handle == (UObject *)0x0) {
    PCGLog::InputOutput::LogInvalidInputDataError(param_1);
  }
  else {
    FManagedArrayCollection::FManagedArrayCollection
              (&local_e8,(FManagedArrayCollection *)&FVar22.Handle[3].field_0x20);
    local_3c0 = FPCGContext::NewObject_AnyThread<UPVMeshData>(param_1);
    PV::Facades::FFoliageFacade::FFoliageFacade(&local_368,&local_e8,0);
    pTVar27 = local_368.NamesAttribute.ConstAttributeArray;
    FVar25 = local_368.NamesAttribute.Group;
    uVar26 = 0;
    if ((char)TVar17.DebugPtr[1]._padding_ == '\0') {
      DestructItems<TSoftObjectPtr<UObject>,int>
                ((TSoftObjectPtr<UObject> *)TVar17.DebugPtr[1]._padding_,
                 (int)TVar17.DebugPtr[1]._padding_);
      piVar1 = (int *)((longlong)&TVar17.DebugPtr[1]._padding_ + 4);
      *(undefined4 *)&TVar17.DebugPtr[1]._padding_ = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,(ForAnyElementType *)&TVar17.DebugPtr[1]._padding_,0,piVar1);
      }
      *(undefined1 *)&TVar17.DebugPtr[1]._padding_ = 0;
      FVar22.Handle = FVar24.Handle;
      while( true ) {
        if (pTVar27 == (TManagedArray<FString> *)0x0) {
          iVar12 = FManagedArrayCollection::NumElements
                             (local_368.NamesAttribute.ConstCollection,FVar25);
        }
        else {
          iVar12 = (**(code **)(*(longlong *)pTVar27 + 0x60))(pTVar27);
        }
        iVar13 = FVar22._0_4_;
        if (iVar12 <= iVar13) break;
        if (((pTVar27 == (TManagedArray<FString> *)0x0) || (iVar13 < 0)) ||
           (iVar12 = (**(code **)(*(longlong *)pTVar27 + 0x60))(pTVar27), iVar12 <= iVar13)) {
          local_438 = 0;
          local_440.Data = (FScriptContainerElement *)0x0;
          local_438._0_4_ = uVar26;
        }
        else {
          pFVar19 = TManagedArrayAccessor<FString>::operator[](&local_368.NamesAttribute,iVar13);
          local_440.Data = (FScriptContainerElement *)0x0;
          iVar12 = (pFVar19->Data).ArrayNum;
          local_430 = (pFVar19->Data).AllocatorInstance.Data;
          local_438 = CONCAT44(local_438._4_4_,iVar12);
          if (iVar12 == 0) {
            local_438 = 0;
            local_438._0_4_ = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar12,0,&local_440,iVar12,(int *)((longlong)&local_438 + 4));
            memcpy(local_440.Data,local_430,(longlong)iVar12 * 2);
          }
        }
        local_3f8.AssetPath.PackageName.ComparisonIndex.Value = 0;
        local_3f8.AssetPath.PackageName.Number = 0;
        local_3f8.AssetPath.AssetName.ComparisonIndex.Value = 0;
        local_3f8.AssetPath.AssetName.Number = 0;
        local_3f8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3f8.SubPathString.Data.ArrayNum = 0;
        local_3f8.SubPathString.Data.ArrayMax = 0;
        uStack_3a0 = uVar26;
        if ((uint)local_438 != 0) {
          uStack_3a0 = (uint)local_438 - 1;
        }
        local_398._12_4_ = uStack_39c;
        local_398.Size = uStack_3a0;
        local_3a8 = local_440.Data;
        local_398.DataPtr = (wchar_t *)local_440.Data;
        FSoftObjectPath::SetPath(&local_3f8,&local_398);
        iVar12 = (int)TVar17.DebugPtr[1]._padding_;
        if (iVar12 == *(int *)((longlong)&TVar17.DebugPtr[1]._padding_ + 4)) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x828,(ForAnyElementType *)&TVar17.DebugPtr[1]._padding_,
                              (int *)((longlong)&TVar17.DebugPtr[1]._padding_ + 4));
        }
        FVar8.Data = local_3f8.SubPathString.Data.AllocatorInstance.Data;
        iVar5 = local_3f8.SubPathString.Data.ArrayNum;
        *(int *)&TVar17.DebugPtr[1]._padding_ = iVar12 + 1;
        lVar20 = (longlong)iVar12;
        local_3f8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3f8.SubPathString.Data.ArrayNum = 0;
        local_3f8.SubPathString.Data.ArrayMax = 0;
        local_388 = local_3f8.AssetPath.PackageName;
        FStack_380 = local_3f8.AssetPath.AssetName;
        local_430 = (FScriptContainerElement *)CONCAT44(local_430._4_4_,iVar5);
        lVar3 = TVar17.DebugPtr[1]._padding_;
        *(undefined8 *)(lVar3 + lVar20 * 0x28) = 0;
        pFVar2 = (FName *)(lVar3 + lVar20 * 0x28 + 8);
        *pFVar2 = local_3f8.AssetPath.PackageName;
        pFVar2[1] = local_3f8.AssetPath.AssetName;
        local_3c8 = (ForAnyElementType *)(lVar3 + lVar20 * 0x28 + 0x18);
        local_3c8->Data = (FScriptContainerElement *)0x0;
        piVar1 = (int *)(lVar3 + lVar20 * 0x28 + 0x24);
        *(int *)(lVar3 + lVar20 * 0x28 + 0x20) = iVar5;
        if (iVar5 == 0) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar5,0,local_3c8,iVar5,piVar1);
          memcpy(local_3c8->Data,FVar8.Data,(longlong)(int)local_430);
        }
        if (FVar8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar8.Data);
        }
        if (local_3f8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3f8.SubPathString.Data.AllocatorInstance.Data);
        }
        if (local_440.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_440.Data);
        }
        FVar22._0_4_ = iVar13 + 1;
        FVar22._4_4_ = 0;
      }
    }
    if (pTVar27 == (TManagedArray<FString> *)0x0) {
      iVar12 = FManagedArrayCollection::NumElements(local_368.NamesAttribute.ConstCollection,FVar25)
      ;
    }
    else {
      iVar12 = (**(code **)(*(longlong *)pTVar27 + 0x60))(pTVar27);
    }
    local_450.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar13 = (int)TVar17.DebugPtr[1]._padding_;
    local_450.ArrayNum = 0;
    local_450.ArrayMax = 0;
    if (iVar13 < iVar12) {
      iVar12 = iVar13;
    }
    FVar28.Handle = FVar24.Handle;
    FVar8.Data = local_418.Data.AllocatorInstance.Data;
    uVar9 = local_418.Data._8_8_;
    if (0 < iVar12) {
      do {
        local_418.Data._8_8_ = uVar9;
        local_418.Data.AllocatorInstance.Data = FVar8.Data;
        if (((int)TVar17.DebugPtr[1]._padding_ <= FVar28._0_4_) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          uVar11 = (*pcVar4)();
          return (bool)uVar11;
        }
        FSoftObjectPath::ToString
                  ((FSoftObjectPath *)(&(FVar24.Handle)->field_0x8 + TVar17.DebugPtr[1]._padding_),
                   &local_418);
        iVar13 = local_450.ArrayNum;
        if (local_450.ArrayNum == local_450.ArrayMax) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_450.AllocatorInstance,&local_450.ArrayMax);
          local_450.ArrayNum = iVar13 + 1;
        }
        else {
          local_450.ArrayNum = local_450.ArrayNum + 1;
        }
        pFVar23 = local_450.AllocatorInstance.Data + (longlong)iVar13 * 0x10;
        *(undefined8 *)pFVar23 = 0;
        *(FScriptContainerElement **)pFVar23 = local_418.Data.AllocatorInstance.Data;
        local_418.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FVar8.Data = local_418.Data.AllocatorInstance.Data;
        *(int *)(pFVar23 + 8) = local_418.Data.ArrayNum;
        *(int *)(pFVar23 + 0xc) = local_418.Data.ArrayMax;
        local_418.Data.ArrayNum = 0;
        local_418.Data.ArrayMax = 0;
        uVar9 = local_418.Data._8_8_;
        local_418.Data.ArrayNum = 0;
        local_418.Data.ArrayMax = 0;
        local_418.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FVar28._0_4_ = FVar28._0_4_ + 1;
        FVar28._4_4_ = 0;
        FVar24.Handle = FVar24.Handle + 1;
        FVar25 = local_368.NamesAttribute.Group;
        pTVar27 = local_368.NamesAttribute.ConstAttributeArray;
      } while ((int)FVar28._0_4_ < iVar12);
    }
    this_02 = local_368.NamesAttribute.ConstCollection;
    if (pTVar27 == (TManagedArray<FString> *)0x0) {
      iVar12 = FManagedArrayCollection::NumElements(local_368.NamesAttribute.ConstCollection,FVar25)
      ;
    }
    else {
      iVar12 = (**(code **)(*(longlong *)pTVar27 + 0x60))(pTVar27);
      this_02 = local_368.NamesAttribute.ConstCollection;
    }
    if (iVar12 < (int)TVar17.DebugPtr[1]._padding_) {
      if (2 < (byte)LogProceduralVegetation._0_1_) {
        if (pTVar27 == (TManagedArray<FString> *)0x0) {
          FManagedArrayCollection::NumElements(this_02,FVar25);
        }
        else {
          (**(code **)(*(longlong *)pTVar27 + 0x60))(pTVar27);
        }
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogProceduralVegetation);
      }
    }
    else {
      if (pTVar27 == (TManagedArray<FString> *)0x0) {
        iVar12 = FManagedArrayCollection::NumElements(this_02,FVar25);
      }
      else {
        iVar12 = (**(code **)(*(longlong *)pTVar27 + 0x60))(pTVar27);
      }
      iVar13 = (int)TVar17.DebugPtr[1]._padding_;
      if ((iVar13 < iVar12) && (0 < iVar13)) {
        if (2 < (byte)LogProceduralVegetation._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    (&::LOG_Static,(FLogCategoryBase *)&LogProceduralVegetation);
        }
        iVar12 = (int)TVar17.DebugPtr[1]._padding_;
        while( true ) {
          if (pTVar27 == (TManagedArray<FString> *)0x0) {
            iVar13 = FManagedArrayCollection::NumElements
                               (local_368.NamesAttribute.ConstCollection,FVar25);
          }
          else {
            iVar13 = (**(code **)(*(longlong *)pTVar27 + 0x60))(pTVar27);
          }
          if (iVar13 <= iVar12) break;
          iVar13 = (int)TVar17.DebugPtr[1]._padding_;
          uVar21 = iVar13 - 1;
          uVar14 = uVar26;
          if ((int)uVar21 < iVar13) {
            uVar14 = ~uVar21 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            uVar11 = (*pcVar4)();
            return (bool)uVar11;
          }
          FSoftObjectPath::ToString
                    ((FSoftObjectPath *)
                     (TVar17.DebugPtr[1]._padding_ +
                     ((longlong)((int)TVar17.DebugPtr[1]._padding_ + -1) * 5 + 1) * 8),&local_408);
          iVar13 = local_450.ArrayNum;
          if (local_450.ArrayNum == local_450.ArrayMax) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_450.AllocatorInstance,&local_450.ArrayMax);
            local_450.ArrayNum = iVar13 + 1;
          }
          else {
            local_450.ArrayNum = local_450.ArrayNum + 1;
          }
          pFVar23 = local_450.AllocatorInstance.Data + (longlong)iVar13 * 0x10;
          *(undefined8 *)pFVar23 = 0;
          *(FScriptContainerElement **)pFVar23 = local_408.Data.AllocatorInstance.Data;
          local_408.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(pFVar23 + 8) = local_408.Data.ArrayNum;
          *(int *)(pFVar23 + 0xc) = local_408.Data.ArrayMax;
          local_408.Data.ArrayNum = 0;
          local_408.Data.ArrayMax = 0;
          iVar12 = iVar12 + 1;
        }
      }
    }
    PV::Facades::FFoliageFacade::SetFoliageNames(&local_368,&local_450);
    pUVar6 = local_3c0;
    FManagedArrayCollection::operator=((FManagedArrayCollection *)&local_3c0->field_0x98,&local_e8);
    pFVar7 = local_3b8;
    piVar1 = &(local_3b8->OutputData).TaggedData.ArrayMax;
    iVar12 = (local_3b8->OutputData).TaggedData.ArrayNum;
    if (iVar12 == *piVar1) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x878,(ForAnyElementType *)&local_3b8->OutputData,piVar1);
    }
    (pFVar7->OutputData).TaggedData.ArrayNum = iVar12 + 1;
    this_01 = (FPCGDataPtrWrapper *)
              ((pFVar7->OutputData).TaggedData.AllocatorInstance.Data + (longlong)iVar12 * 0x78);
    FPCGDataPtrWrapper::FPCGDataPtrWrapper(this_01,(UPCGData *)pUVar6);
    this_01[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    this_01[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    this_01[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    this_01[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    this_01[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    this_01[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    this_01[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    this_01[3].WeakData.WeakPtr.ObjectIndex = 0;
    this_01[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
    *(undefined4 *)&this_01[4].Data.field0_0x0 = 0xffffffff;
    *(undefined4 *)((longlong)&this_01[4].Data.field0_0x0 + 4) = 0;
    this_01[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    this_01[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    *(undefined2 *)&this_01[6].WeakData.WeakPtr.ObjectIndex = 0x100;
    *(undefined8 *)&this_01[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
    *(undefined4 *)((longlong)&this_01[7].Data.field0_0x0 + 4) = 0xffffffff;
    DestructItems<FString,int>((FString *)local_450.AllocatorInstance.Data,local_450.ArrayNum);
    if (local_450.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_450.AllocatorInstance.Data);
    }
    FManagedArrayCollection::~FManagedArrayCollection(&local_e8);
  }
LAB_14da82110:
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_3d8.AllocatorInstance.Data,local_3d8.ArrayNum);
  if ((FPCGTaggedData *)local_3d8.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_3d8.AllocatorInstance.Data);
  }
  if ((bool)<Var29) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

