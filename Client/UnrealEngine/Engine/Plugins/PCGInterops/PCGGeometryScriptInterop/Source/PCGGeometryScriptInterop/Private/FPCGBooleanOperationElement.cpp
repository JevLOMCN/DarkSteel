// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCGGeometryScriptInterop
// Functions: 1

// ExecuteInternal @ 14ceec1a0

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
FPCGBooleanOperationElement::ExecuteInternal(FPCGBooleanOperationElement *this,FPCGContext *param_1)

{
  int *piVar1;
  char cVar2;
  UPCGNode *this_00;
  UDynamicMesh *pUVar3;
  UDynamicMesh *pUVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  UClass *pUVar13;
  UPCGSettings *pUVar14;
  TObjectPtr<UPCGSettings>_u_0 TVar15;
  FText *pFVar16;
  FObjectPtr_u_0 FVar17;
  UPCGSpatialData *pUVar18;
  FPCGTaggedData *pFVar19;
  int iVar20;
  uint uVar21;
  FObjectPtr_u_0 FVar22;
  int iVar23;
  FObjectPtr_u_0 *pFVar24;
  UPCGDynamicMeshData *pUVar25;
  FObjectPtr_u_0 *pFVar26;
  bool bVar27;
  <lambda_1> local_res10;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_170;
  UPCGDynamicMeshData *local_160;
  TObjectPtr<UPCGSettings>_u_0 local_158;
  FObjectPtr_u_0 local_150;
  FObjectPtr_u_0 local_148;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_140;
  FPCGTaggedData *local_130;
  FGeometryScriptMeshBooleanOptions local_128;
  FText local_118;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  
  bVar27 = -1 < CpuChannel->Enabled;
  if (bVar27) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId51,"FPCGBooleanOperationElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGBooleanOperation.cpp"
               ,0x33);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId51);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGBooleanOperation.cpp"
                         ,0x35,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar14 = UPCGNode::GetSettings(this_00), pUVar14 == (UPCGSettings *)0x0)) {
      pFVar19 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGBooleanOperationSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_res10);
      if (pFVar19 != (FPCGTaggedData *)0x0) {
        local_158.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar19->Data).Data.field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (local_158.DebugPtr == (UPCGSettings *)0x0) goto LAB_14ceec2da;
          UE::GC::MarkAsReachable((UObject *)local_158.DebugPtr);
        }
        if (local_158.DebugPtr != (UPCGSettings *)0x0) {
          pUVar13 = UPCGBooleanOperationSettings::StaticClass();
          bVar7 = FObjectPtr::IsA(&local_158.ObjectPtr,pUVar13);
          TVar15 = local_158;
          if (bVar7) goto LAB_14ceec2e1;
        }
      }
    }
    else {
      pUVar14 = UPCGNode::GetSettings(this_00);
      TVar15.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar14);
      if (TVar15.DebugPtr != (UPCGSettings *)0x0) {
        pUVar13 = UPCGBooleanOperationSettings::StaticClass();
        iVar20 = (int)pUVar13->_padding_;
        if ((iVar20 <= *(int *)((TVar15.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar15.DebugPtr)->_padding_ + 0x30) + (longlong)iVar20 * 8) ==
            &pUVar13->_padding_)) goto LAB_14ceec2e1;
      }
    }
LAB_14ceec2da:
    TVar15.DebugPtr = (UPCGSettings *)0x0;
  }
  else {
    pUVar13 = UPCGBooleanOperationSettings::StaticClass();
    bVar7 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar13);
    if (bVar7) {
      TVar15.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
    else {
      TVar15.DebugPtr = (UPCGSettings *)0x0;
    }
  }
LAB_14ceec2e1:
  if ((TVar15.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGBooleanOperation.cpp"
                         ,0x38,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_140,&PCGBooleanOperation::InputAPinLabel);
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_170,&PCGBooleanOperation::InputBPinLabel);
  if ((local_140.ArrayNum == 0) || (local_170.ArrayNum == 0)) goto LAB_14ceec3b8;
  cVar2 = *(char *)((longlong)&TVar15.DebugPtr[1]._padding_ + 1);
  if ((cVar2 == '\0') && (local_140.ArrayNum != 1)) {
    if (local_170.ArrayNum != 1) {
      if (local_140.ArrayNum != local_170.ArrayNum) {
        pFVar16 = FText::AsLocalizable_Advanced_LocText
                            (&local_118,L"PCGBooleanOperationElement",L"MismatchNumInputs",
                             L"There is a mismatch between the number of inputs. If BoolEachAWithEveryB is false, we only support N:1, 1:N and N:N operations"
                            );
        PCGLog::LogErrorOnGraph(pFVar16,param_1);
        if (local_118.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
        }
        goto LAB_14ceec3b8;
      }
      goto LAB_14ceec498;
    }
LAB_14ceec4b4:
    bVar7 = true;
  }
  else {
LAB_14ceec498:
    if (((local_170.ArrayNum == 1) || (cVar2 == '\x01')) ||
       ((cVar2 == '\0' && (local_140.ArrayNum == local_170.ArrayNum)))) goto LAB_14ceec4b4;
    bVar7 = false;
  }
  if (cVar2 == '\0') {
    iVar20 = local_170.ArrayNum;
    if (local_170.ArrayNum < local_140.ArrayNum) {
      iVar20 = local_140.ArrayNum;
    }
  }
  else {
    iVar20 = local_170.ArrayNum * local_140.ArrayNum;
  }
  iVar23 = 0;
  local_160 = (UPCGDynamicMeshData *)0x0;
  local_130 = (FPCGTaggedData *)0x0;
  if (0 < iVar20) {
    do {
      if (*(char *)((longlong)&TVar15.DebugPtr[1]._padding_ + 1) == '\0') {
        uVar11 = iVar23 % local_140.ArrayNum;
      }
      else {
        uVar11 = iVar23 / local_170.ArrayNum;
      }
      uVar21 = iVar23 % local_170.ArrayNum;
      uVar10 = 0;
      if ((int)uVar11 < local_140.ArrayNum) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      pFVar24 = (FObjectPtr_u_0 *)(local_140.AllocatorInstance.Data + (longlong)(int)uVar11 * 0x78);
      uVar11 = 0;
      if ((int)uVar21 < local_170.ArrayNum) {
        uVar11 = ~uVar21 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      local_150 = (FObjectPtr_u_0)pFVar24->Handle;
      pFVar26 = (FObjectPtr_u_0 *)(local_170.AllocatorInstance.Data + (longlong)(int)uVar21 * 0x78);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14ceec5ff:
        if (local_150.Handle == (UObject *)0x0) goto LAB_14ceec621;
        pUVar13 = Z_Construct_UClass_UPCGDynamicMeshData_NoRegister();
        bVar9 = FObjectPtr::IsA((FObjectPtr *)&local_150,pUVar13);
        FVar22 = local_150;
        if (!bVar9) goto LAB_14ceec621;
      }
      else {
        if (local_150.Handle != (UObject *)0x0) {
          UE::GC::MarkAsReachable(local_150.Handle);
          goto LAB_14ceec5ff;
        }
LAB_14ceec621:
        FVar22.Handle = (UObject *)0x0;
      }
      local_148 = (FObjectPtr_u_0)pFVar26->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14ceec646:
        if (local_148.Handle == (UObject *)0x0) goto LAB_14ceec668;
        pUVar13 = Z_Construct_UClass_UPCGDynamicMeshData_NoRegister();
        bVar9 = FObjectPtr::IsA((FObjectPtr *)&local_148,pUVar13);
        FVar17 = local_148;
        if (!bVar9) goto LAB_14ceec668;
      }
      else {
        if (local_148.Handle != (UObject *)0x0) {
          UE::GC::MarkAsReachable(local_148.Handle);
          goto LAB_14ceec646;
        }
LAB_14ceec668:
        FVar17.Handle = (UObject *)0x0;
      }
      if ((FVar22.Handle == (UObject *)0x0) || (FVar17.Handle == (UObject *)0x0)) {
        PCGLog::InputOutput::LogInvalidInputDataError(param_1);
      }
      else {
        if ((*(char *)((longlong)&TVar15.DebugPtr[1]._padding_ + 1) != '\x01') ||
           (pFVar19 = local_130, pUVar25 = local_160, uVar21 == 0)) {
          if (bVar7) {
            local_160 = IPCGDynamicMeshBaseElement::CopyOrSteal((FPCGTaggedData *)pFVar24,param_1);
          }
          else {
            pUVar18 = (UPCGSpatialData *)
                      (**(code **)(*(longlong *)FVar22.Handle + 0x310))(FVar22.Handle,param_1,1);
            local_160 = CastChecked<UPCGDynamicMeshData,UPCGSpatialData>(pUVar18);
          }
          piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
          iVar12 = (param_1->OutputData).TaggedData.ArrayNum;
          if (iVar12 == *piVar1) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
          }
          (param_1->OutputData).TaggedData.ArrayNum = iVar12 + 1;
          pFVar19 = FPCGTaggedData::FPCGTaggedData
                              ((FPCGTaggedData *)
                               ((param_1->OutputData).TaggedData.AllocatorInstance.Data +
                               (longlong)iVar12 * 0x78),(FPCGTaggedData *)pFVar24);
          pUVar25 = local_160;
          local_130 = pFVar19;
          FPCGDataPtrWrapper::operator=(&pFVar19->Data,(UPCGData *)local_160);
        }
        if ((pUVar25 == (UPCGDynamicMeshData *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("CurrentOutputMeshData",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGBooleanOperation.cpp"
                               ,0x6a,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        if ((pFVar19 == (FPCGTaggedData *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("CurrentTaggedOutputData",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGBooleanOperation.cpp"
                               ,0x6b,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        local_108.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64
        ;
        local_108.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64
        ;
        local_108.Translation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        local_108.Translation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        local_108.Rotation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        local_a8.Rotation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        local_108.Rotation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        local_128._8_4_ = *(undefined4 *)((longlong)&TVar15.DebugPtr[1]._padding_ + 4);
        lVar6 = TVar15.DebugPtr[1]._padding_;
        local_128._0_8_ = *(undefined8 *)((longlong)&TVar15.DebugPtr[1]._padding_ + 4);
        pUVar3 = *(UDynamicMesh **)&FVar17.Handle[3].field_0x20;
        pUVar4 = (pUVar25->DynamicMesh).field0_0x0.DebugPtr;
        pUVar25->bDynamicMeshBoundsAreDirty = true;
        pUVar25->bDynamicMeshOctreeIsDirty = true;
        local_a8.Rotation.ZW.m128d_f64 = local_108.Rotation.ZW.m128d_f64;
        local_a8.Translation.XY.m128d_f64 = local_108.Translation.XY.m128d_f64;
        local_a8.Translation.ZW.m128d_f64 = local_108.Translation.ZW.m128d_f64;
        local_a8.Scale3D.XY.m128d_f64 = local_108.Scale3D.XY.m128d_f64;
        local_a8.Scale3D.ZW.m128d_f64 = local_108.Scale3D.ZW.m128d_f64;
        UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshBoolean
                  (pUVar4,&local_a8,pUVar3,&local_108,(EGeometryScriptBooleanOperation)lVar6,
                   &local_128,(UGeometryScriptDebug *)0x0);
        cVar2 = (char)TVar15.DebugPtr[1]._padding_;
        if (cVar2 == '\x02') {
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
                    (&pFVar19->Tags,
                     (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(pFVar26 + 2))
          ;
        }
        else if (cVar2 == '\0') {
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
          Append<FDefaultSetAllocator>
                    (&pFVar19->Tags,
                     (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(pFVar26 + 2))
          ;
        }
      }
      iVar23 = iVar23 + 1;
    } while (iVar23 < iVar20);
  }
LAB_14ceec3b8:
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_170.AllocatorInstance.Data,local_170.ArrayNum);
  if ((FPCGTaggedData *)local_170.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_170.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_140.AllocatorInstance.Data,local_140.ArrayNum);
  if ((FPCGTaggedData *)local_140.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_140.AllocatorInstance.Data);
  }
  if (bVar27) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

