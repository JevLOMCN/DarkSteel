// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// ExecuteInternal @ 149c175b0

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
FPCGProjectionElement::ExecuteInternal(FPCGProjectionElement *this,FPCGContext *param_1)

{
  int *piVar1;
  UPCGNode *this_00;
  code *pcVar2;
  FObjectPtr_u_0 FVar3;
  FObjectPtr_u_0 *pFVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  UClass *pUVar8;
  UPCGSettings *pUVar9;
  TObjectPtr<UPCGSettings>_u_0 TVar10;
  ulonglong uVar11;
  UPCGBasePointData *this_01;
  FPCGTaggedData *pFVar12;
  FText *this_02;
  FString *pFVar13;
  UPCGSpatialData *pUVar14;
  wchar_t *pwVar15;
  ForAnyElementType FVar16;
  bool bVar17;
  undefined1 auStack_148 [32];
  FScriptContainerElement *local_128;
  longlong local_120;
  char local_118;
  <lambda_1> local_117;
  undefined1 local_116 [2];
  uint local_114;
  UPCGSpatialData *local_110;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_108;
  TObjectPtr<UPCGSettings>_u_0 local_f8;
  FObjectPtr_u_0 local_f0;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_e8;
  FObjectPtr_u_0 *local_d8;
  FString local_d0;
  FString local_c0;
  FText local_b0;
  TVector<double>_u_0 local_a0;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined4 local_6f;
  undefined2 local_6b;
  undefined1 local_69;
  TVector<double>_u_0 local_68;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined4 local_37;
  undefined2 local_33;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_114 = 0;
  bVar17 = CpuChannel->Enabled < 0;
  if (bVar17) {
    local_118 = '\0';
  }
  else {
    local_118 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId63,"FPCGProjectionElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGProjectionElement.cpp"
               ,0x3f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId63);
  }
  cVar6 = !bVar17;
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Context",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGProjectionElement.cpp"
                          ,0x40,L""), bVar17)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr != (UPCGSettings *)0x0) {
    pUVar8 = UPCGProjectionSettings::StaticClass();
    bVar17 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar8);
    if (bVar17) {
      TVar10.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
    else {
      TVar10.DebugPtr = (UPCGSettings *)0x0;
    }
    goto LAB_149c17700;
  }
  this_00 = param_1->Node;
  if ((this_00 == (UPCGNode *)0x0) ||
     (pUVar9 = UPCGNode::GetSettings(this_00), pUVar9 == (UPCGSettings *)0x0)) {
    pFVar12 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
              FindByPredicate<_FPCGDataCollection::GetSettings<UPCGProjectionSettings>_::__l2::<lambda_1>_>
                        (&(param_1->InputData).TaggedData,local_117);
    if (pFVar12 != (FPCGTaggedData *)0x0) {
      local_f8.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar12->Data).Data.field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (local_f8.DebugPtr == (UPCGSettings *)0x0) goto LAB_149c176fd;
        UE::GC::MarkAsReachable((UObject *)local_f8.DebugPtr);
      }
      if (local_f8.DebugPtr != (UPCGSettings *)0x0) {
        pUVar8 = UPCGProjectionSettings::StaticClass();
        bVar17 = FObjectPtr::IsA(&local_f8.ObjectPtr,pUVar8);
        TVar10 = local_f8;
        if (bVar17) goto LAB_149c17700;
      }
    }
  }
  else {
    pUVar9 = UPCGNode::GetSettings(this_00);
    TVar10.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar9);
    if (TVar10.DebugPtr != (UPCGSettings *)0x0) {
      pUVar8 = UPCGProjectionSettings::StaticClass();
      iVar7 = (int)pUVar8->_padding_;
      if ((iVar7 <= *(int *)((TVar10.DebugPtr)->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)((TVar10.DebugPtr)->_padding_ + 0x30) + (longlong)iVar7 * 8)
          == &pUVar8->_padding_)) goto LAB_149c17700;
    }
  }
LAB_149c176fd:
  TVar10.DebugPtr = (UPCGSettings *)0x0;
LAB_149c17700:
  if ((TVar10.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGProjectionElement.cpp"
                          ,0x43,L""), bVar17)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_e8,&PCGPinConstants::DefaultInputLabel);
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_108,&PCGProjectionConstants::ProjectionTargetLabel);
  if ((local_e8.ArrayNum != 0) && (local_108.ArrayNum != 0)) {
    if (local_108.ArrayNum < 1) {
      local_128 = (FScriptContainerElement *)0x0;
      local_120 = (longlong)local_108.ArrayNum;
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar17) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    local_110 = Cast<UPCGSpatialData>((FPCGDataPtrWrapper *)local_108.AllocatorInstance.Data);
    if (local_110 != (UPCGSpatialData *)0x0) {
      local_117 = *(<lambda_1> *)((longlong)&TVar10.DebugPtr[1]._padding_ + 1);
      uVar11 = (ulonglong)local_e8.ArrayNum;
      local_d8 = (FObjectPtr_u_0 *)(local_e8.AllocatorInstance.Data + uVar11 * 0x78);
      local_114 = local_e8.ArrayNum;
      pUVar14 = local_110;
      FVar16.Data = local_e8.AllocatorInstance.Data;
      while( true ) {
        pFVar4 = local_d8;
        if (local_e8.ArrayNum != (uint)uVar11) {
          local_116[0] = 0;
          `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_116);
        }
        cVar6 = local_118;
        if ((FObjectPtr_u_0 *)FVar16.Data == pFVar4) break;
        local_f0 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)FVar16.Data;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149c1782c:
          if (local_f0.Handle == (UObject *)0x0) goto LAB_149c17ac2;
          pUVar8 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
          bVar17 = FObjectPtr::IsA((FObjectPtr *)&local_f0,pUVar8);
          FVar3 = local_f0;
          if ((!bVar17) || (local_f0.Handle == (UObject *)0x0)) goto LAB_149c17ac2;
          this_01 = (UPCGBasePointData *)
                    (**(code **)(*(longlong *)local_f0.Handle + 0x3f8))
                              (local_f0.Handle,param_1,pUVar14,TVar10.DebugPtr + 1);
          *(<lambda_1> *)&this_01->_padding_ = local_117;
          if ((char)TVar10.DebugPtr[1]._padding_ == '\0') {
            pUVar8 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
            iVar7 = (int)pUVar8->_padding_;
            if ((iVar7 <= *(int *)(*(longlong *)&(FVar3.Handle)->field_0x10 + 0x38)) &&
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&(FVar3.Handle)->field_0x10 + 0x30) +
                 (longlong)iVar7 * 8) == &pUVar8->_padding_)) goto LAB_149c1796a;
            cVar6 = (**(code **)(this_01->_padding_ + 0x428))(this_01);
            if (cVar6 != '\0') {
              local_70 = 0;
              local_6f = 0;
              local_6b = 0;
              local_69 = 0;
              local_a0._s_0.X = 0.0;
              local_a0._s_0.Y = 0.0;
              local_a0._s_0.Z = 0.0;
              uStack_88 = 0;
              local_80 = 0;
              uStack_78 = 0;
              UPCGSpatialData::ToBasePointData
                        ((UPCGSpatialData *)this_01,param_1,(TBox<double> *)&local_a0._s_0);
            }
          }
          else {
LAB_149c1796a:
            local_38 = 0;
            local_37 = 0;
            local_33 = 0;
            local_31 = 0;
            local_68._s_0.X = 0.0;
            local_68._s_0.Y = 0.0;
            local_68._s_0.Z = 0.0;
            uStack_50 = 0;
            local_48 = 0;
            uStack_40 = 0;
            this_01 = UPCGSpatialData::ToBasePointData
                                ((UPCGSpatialData *)this_01,param_1,(TBox<double> *)&local_68._s_0);
          }
          iVar7 = (param_1->OutputData).TaggedData.ArrayNum;
          piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
          if (iVar7 == *piVar1) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
          }
          (param_1->OutputData).TaggedData.ArrayNum = iVar7 + 1;
          pFVar12 = FPCGTaggedData::FPCGTaggedData
                              ((FPCGTaggedData *)
                               ((param_1->OutputData).TaggedData.AllocatorInstance.Data +
                               (longlong)iVar7 * 0x78),(FPCGTaggedData *)FVar16.Data);
          FPCGDataPtrWrapper::operator=(&pFVar12->Data,(UPCGData *)this_01);
          cVar6 = *(char *)((longlong)&TVar10.DebugPtr[1]._padding_ + 2);
          if (cVar6 == '\x01') {
            if (local_108.ArrayNum < 1) {
              local_128 = (FScriptContainerElement *)0x0;
              local_120 = (longlong)local_108.ArrayNum;
              bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar17) {
                pcVar2 = (code *)swi(3);
                uVar5 = (*pcVar2)();
                return (bool)uVar5;
              }
            }
            TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
                      (&pFVar12->Tags,
                       (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                       (local_108.AllocatorInstance.Data + 0x10));
            uVar11 = (ulonglong)local_114;
            FVar16.Data = FVar16.Data + 0x78;
            pUVar14 = local_110;
          }
          else {
            pUVar14 = local_110;
            if (cVar6 != '\x02') goto LAB_149c17ba0;
            if (local_108.ArrayNum < 1) {
              local_128 = (FScriptContainerElement *)0x0;
              local_120 = (longlong)local_108.ArrayNum;
              bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar17) {
                pcVar2 = (code *)swi(3);
                uVar5 = (*pcVar2)();
                return (bool)uVar5;
              }
            }
            TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
            Append<FDefaultSetAllocator>
                      (&pFVar12->Tags,
                       (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                       (local_108.AllocatorInstance.Data + 0x10));
            uVar11 = (ulonglong)local_114;
            FVar16.Data = FVar16.Data + 0x78;
            pUVar14 = local_110;
          }
        }
        else {
          if (local_f0.Handle != (UObject *)0x0) {
            UE::GC::MarkAsReachable(local_f0.Handle);
            goto LAB_149c1782c;
          }
LAB_149c17ac2:
          if (1 < (byte)LogPCG._0_1_) {
            this_02 = FText::AsLocalizable_Advanced_LocText
                                (&local_b0,L"PCGProjectionElement",L"InvalidProjectionSource",
                                 L"Invalid projection source data input found (non-Spatial data). Input will be ignored."
                                );
            pFVar13 = FText::ToString(this_02);
            if ((pFVar13->Data).ArrayNum == 0) {
              pwVar15 = L"";
            }
            else {
              pwVar15 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
            }
            FPCGContext::GetTaskName(param_1,&local_c0);
            FPCGContext::GetExecutionSourceName(param_1,&local_d0);
            local_128 = (FScriptContainerElement *)pwVar15;
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
            if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d0.Data.AllocatorInstance.Data);
            }
            if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c0.Data.AllocatorInstance.Data);
            }
            pUVar14 = local_110;
            if (local_b0.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_b0.TextData.Reference + 0x10))();
              pUVar14 = local_110;
            }
          }
LAB_149c17ba0:
          FVar16.Data = FVar16.Data + 0x78;
          uVar11 = (ulonglong)local_114;
        }
      }
    }
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_108.AllocatorInstance.Data,local_108.ArrayNum);
  if ((FPCGTaggedData *)local_108.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum);
  if ((FPCGTaggedData *)local_e8.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  if (cVar6 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// SupportsBasePointDataInputs @ 149c35830

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
FPCGProjectionElement::SupportsBasePointDataInputs(FPCGProjectionElement *this,FPCGContext *param_1)

{
  return true;
}

