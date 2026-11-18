// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// ExecuteInternal @ 149c712b0

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

bool __thiscall FPCGUnionElement::ExecuteInternal(FPCGUnionElement *this,FPCGContext *param_1)

{
  FName *pFVar1;
  EPCGUnionDensityFunction EVar2;
  int iVar3;
  uint uVar4;
  UPCGNode *this_00;
  code *pcVar5;
  ForElementType<FPCGTaggedData> *pFVar6;
  FObjectPtr_u_0 FVar7;
  FObjectPtr_u_0 FVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  UClass *pUVar14;
  UPCGSettings *pUVar15;
  TObjectPtr<UPCGSettings>_u_0 this_01;
  ForElementType<FPCGTaggedData> *pFVar16;
  FPCGTaggedData *pFVar17;
  ForElementType<FPCGTaggedData> FVar18;
  UPCGUnionData *this_02;
  ulonglong uVar19;
  ForAnyElementType FVar20;
  ForElementType<FPCGTaggedData> FVar21;
  ForElementType<FPCGTaggedData> FVar22;
  uint uVar23;
  FPCGDataPtrWrapper *this_03;
  bool bVar24;
  undefined1 auStackY_4b8 [32];
  <lambda_1> local_467;
  undefined1 local_466;
  undefined1 local_465;
  EPCGUnionType local_464;
  uint local_460;
  ForElementType<FPCGTaggedData> *local_458;
  TObjectPtr<UPCGSettings>_u_0 local_450;
  FObjectPtr_u_0 local_448;
  FObjectPtr_u_0 local_440;
  TArray<FName,TSizedDefaultAllocator<32>_> local_438;
  FName local_428;
  UPCGUnionData *local_420;
  FPCGContext *local_418;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_410;
  ForElementType<FPCGTaggedData> local_400;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_4b8;
  bVar24 = -1 < CpuChannel->Enabled;
  local_418 = param_1;
  if (bVar24) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId51,"FPCGUnionElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGUnionElement.cpp"
               ,0x33);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId51);
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr != (UPCGSettings *)0x0) {
    pUVar14 = UPCGUnionSettings::StaticClass();
    bVar9 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar14);
    if (bVar9) {
      this_01.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
    else {
      this_01.DebugPtr = (UPCGSettings *)0x0;
    }
    goto LAB_149c713dc;
  }
  this_00 = param_1->Node;
  if ((this_00 == (UPCGNode *)0x0) ||
     (pUVar15 = UPCGNode::GetSettings(this_00), pUVar15 == (UPCGSettings *)0x0)) {
    pFVar17 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
              FindByPredicate<_FPCGDataCollection::GetSettings<UPCGUnionSettings>_::__l2::<lambda_1>_>
                        (&(param_1->InputData).TaggedData,local_467);
    if (pFVar17 != (FPCGTaggedData *)0x0) {
      local_450.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar17->Data).Data.field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGSettingsWithDynamicInputs *)local_450.DebugPtr ==
            (UPCGSettingsWithDynamicInputs *)0x0) goto LAB_149c713da;
        UE::GC::MarkAsReachable((UObject *)local_450.DebugPtr);
      }
      if ((UPCGSettingsWithDynamicInputs *)local_450.DebugPtr !=
          (UPCGSettingsWithDynamicInputs *)0x0) {
        pUVar14 = UPCGUnionSettings::StaticClass();
        bVar9 = FObjectPtr::IsA(&local_450.ObjectPtr,pUVar14);
        this_01 = local_450;
        if (bVar9) goto LAB_149c713dc;
      }
    }
  }
  else {
    pUVar15 = UPCGNode::GetSettings(this_00);
    this_01.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar15);
    if ((UPCGSettingsWithDynamicInputs *)this_01.DebugPtr != (UPCGSettingsWithDynamicInputs *)0x0) {
      pUVar14 = UPCGUnionSettings::StaticClass();
      iVar13 = (int)pUVar14->_padding_;
      if ((iVar13 <= *(int *)((this_01.DebugPtr)->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)((this_01.DebugPtr)->_padding_ + 0x30) + (longlong)iVar13 * 8) ==
          &pUVar14->_padding_)) goto LAB_149c713dc;
    }
  }
LAB_149c713da:
  this_01.DebugPtr = (UPCGSettings *)0x0;
LAB_149c713dc:
  if (((UPCGSettingsWithDynamicInputs *)this_01.DebugPtr == (UPCGSettingsWithDynamicInputs *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGUnionElement.cpp"
                         ,0x36,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    uVar10 = (*pcVar5)();
    return (bool)uVar10;
  }
  local_464 = (EPCGUnionType)this_01.DebugPtr[1]._padding_;
  local_458 = (ForElementType<FPCGTaggedData> *)&param_1->OutputData;
  EVar2 = *(EPCGUnionDensityFunction *)((longlong)&this_01.DebugPtr[1]._padding_ + 1);
  local_440.Handle = (UObject *)0x0;
  local_420 = (UPCGUnionData *)0x0;
  local_460 = 0xffffffff;
  local_400.SecondaryData = (ForElementType<FPCGTaggedData>)0x0;
  local_38 = 0;
  local_34 = 8;
  UPCGSettingsWithDynamicInputs::GetNodeDefinedPinLabels
            ((UPCGSettingsWithDynamicInputs *)this_01.DebugPtr,&local_438);
  iVar13 = local_438.ArrayNum;
  uVar19 = (ulonglong)local_438.ArrayNum;
  pFVar1 = (FName *)(local_438.AllocatorInstance.Data + uVar19 * 8);
  FVar20.Data = local_438.AllocatorInstance.Data;
  while( true ) {
    if ((uint)uVar19 != iVar13) {
      local_466 = 0;
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_466);
    }
    pFVar6 = local_458;
    if ((FName *)FVar20.Data == pFVar1) break;
    local_428 = *(FName *)FVar20.Data;
    pFVar16 = (ForElementType<FPCGTaggedData> *)
              FPCGDataCollection::GetInputsByPin(&param_1->InputData,&local_410,&local_428);
    if ((&local_400 == pFVar16) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x986,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      uVar10 = (*pcVar5)();
      return (bool)uVar10;
    }
    iVar3 = *(int *)((ForAnyElementType *)pFVar16->InlineData + 1);
    if (iVar3 != 0) {
      iVar11 = UE::Core::Private::
               ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGTaggedData>_>
                         (0x78,8,iVar3,&local_400,&local_38,&local_34);
      FVar21 = (ForElementType<FPCGTaggedData>)&local_400;
      if (local_400.SecondaryData != (ForElementType<FPCGTaggedData>)0x0) {
        FVar21 = local_400.SecondaryData;
      }
      memmove((FPCGTaggedData *)((longlong)iVar11 * 0x78 + (longlong)FVar21),
              ((ForAnyElementType *)pFVar16->InlineData)->Data,(longlong)iVar3 * 0x78);
      *(int *)((ForAnyElementType *)pFVar16->InlineData + 1) = 0;
    }
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_410.AllocatorInstance.Data,local_410.ArrayNum);
    if ((FPCGTaggedData *)local_410.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
      FMemory::Free(local_410.AllocatorInstance.Data);
    }
    uVar19 = (ulonglong)(uint)local_438.ArrayNum;
    FVar20.Data = FVar20.Data + 8;
  }
  if (local_438.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_438.AllocatorInstance.Data);
  }
  uVar19 = (ulonglong)local_38;
  local_458 = (ForElementType<FPCGTaggedData> *)CONCAT44(local_458._4_4_,local_38);
  FVar21 = (ForElementType<FPCGTaggedData>)&local_400;
  if (local_400.SecondaryData != (ForElementType<FPCGTaggedData>)0x0) {
    FVar21 = local_400.SecondaryData;
  }
  FVar22 = (ForElementType<FPCGTaggedData>)(uVar19 * 0x78 + (longlong)FVar21);
  this_02 = local_420;
  uVar23 = 0xffffffff;
  do {
    while( true ) {
      if (local_38 != (int)uVar19) {
        local_465 = 0;
        `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_465);
      }
      if (FVar21 == FVar22) {
        FVar21 = (ForElementType<FPCGTaggedData>)&local_400;
        if (local_400.SecondaryData != (ForElementType<FPCGTaggedData>)0x0) {
          FVar21 = local_400.SecondaryData;
        }
        DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)FVar21,local_38);
        if (local_400.SecondaryData != (ForElementType<FPCGTaggedData>)0x0) {
          FMemory::Free((void *)local_400.SecondaryData);
        }
        if (bVar24) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        return true;
      }
      local_448 = *(FObjectPtr_u_0 *)FVar21;
      if (UE::GC::GIsIncrementalReachabilityPending == false) break;
      if ((UPCGSpatialData *)local_448.Handle != (UPCGSpatialData *)0x0) {
        UE::GC::MarkAsReachable(local_448.Handle);
        break;
      }
LAB_149c717ca:
      if ((ulonglong)*pFVar6 <= (ulonglong)FVar21) {
        FVar18 = (ForElementType<FPCGTaggedData>)
                 ((longlong)*(int *)&pFVar6[1].field_0x4 * 0x78 + (longlong)*pFVar6);
joined_r0x000149c716cc:
        if (((ulonglong)FVar21 < (ulonglong)FVar18) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
      }
LAB_149c71829:
      iVar13 = *(int *)(pFVar6 + 1);
      if (iVar13 == *(int *)&pFVar6[1].field_0x4) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x878,(ForAnyElementType *)pFVar6,(int *)&pFVar6[1].field_0x4);
      }
      *(int *)(pFVar6 + 1) = iVar13 + 1;
      FPCGTaggedData::FPCGTaggedData
                ((FPCGTaggedData *)((longlong)iVar13 * 0x78 + (longlong)*pFVar6),
                 (FPCGTaggedData *)FVar21);
      uVar19 = (ulonglong)local_458 & 0xffffffff;
      FVar21 = (ForElementType<FPCGTaggedData>)((longlong)FVar21 + 0x78);
    }
    if ((UPCGSpatialData *)local_448.Handle == (UPCGSpatialData *)0x0) goto LAB_149c717ca;
    pUVar14 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
    bVar9 = FObjectPtr::IsA((FObjectPtr *)&local_448,pUVar14);
    FVar8 = local_440;
    FVar7 = local_448;
    if ((!bVar9) || ((UPCGSpatialData *)local_448.Handle == (UPCGSpatialData *)0x0))
    goto LAB_149c717ca;
    uVar4 = *(uint *)(pFVar6 + 1);
    if ((UPCGSpatialData *)local_440.Handle == (UPCGSpatialData *)0x0) {
      local_440.Handle = local_448.Handle;
      uVar23 = uVar4;
      local_460 = uVar4;
      if ((ulonglong)*pFVar6 <= (ulonglong)FVar21) {
        FVar18 = (ForElementType<FPCGTaggedData>)
                 ((longlong)*(int *)&pFVar6[1].field_0x4 * 0x78 + (longlong)*pFVar6);
        goto joined_r0x000149c716cc;
      }
      goto LAB_149c71829;
    }
    uVar12 = 0;
    if ((int)uVar23 < (int)uVar4) {
      uVar12 = ~uVar23 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      uVar10 = (*pcVar5)();
      return (bool)uVar10;
    }
    this_03 = (FPCGDataPtrWrapper *)((longlong)(int)uVar23 * 0x78 + (longlong)*pFVar6);
    if (this_02 == (UPCGUnionData *)0x0) {
      this_02 = (UPCGUnionData *)
                (**(code **)(*(longlong *)FVar8.Handle + 0x408))
                          (FVar8.Handle,local_418,FVar7.Handle);
      this_02->UnionType = local_464;
      this_02->DensityFunction = EVar2;
      FPCGDataPtrWrapper::operator=(this_03,(UPCGData *)this_02);
      FPCGDataPtrWrapper::operator=(this_03,(UPCGData *)this_02);
      uVar19 = (ulonglong)local_458 & 0xffffffff;
      FVar21 = (ForElementType<FPCGTaggedData>)((longlong)FVar21 + 0x78);
      uVar23 = local_460;
    }
    else {
      UPCGUnionData::AddData(this_02,(UPCGSpatialData *)FVar7.Handle);
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
                ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(this_03 + 1),
                 (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                 ((longlong)FVar21 + 0x10));
      FPCGDataPtrWrapper::operator=(this_03,(UPCGData *)this_02);
      uVar19 = (ulonglong)local_458 & 0xffffffff;
      FVar21 = (ForElementType<FPCGTaggedData>)((longlong)FVar21 + 0x78);
      uVar23 = local_460;
    }
  } while( true );
}

// SupportsBasePointDataInputs @ 149c92940

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
FPCGUnionElement::SupportsBasePointDataInputs(FPCGUnionElement *this,FPCGContext *param_1)

{
  return true;
}

