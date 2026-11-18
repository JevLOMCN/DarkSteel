// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// ExecuteInternal @ 1499e9ff0

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
FPCGSegmentSubdivisionElement::ExecuteInternal
          (FPCGSegmentSubdivisionElement *this,FPCGContext *param_1)

{
  char cVar1;
  UPCGNode *this_00;
  FName FVar2;
  code *pcVar3;
  UPCGMetadata *pUVar4;
  FObjectPtr_u_0 FVar5;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  UClass *pUVar13;
  UPCGSettings *pUVar14;
  TObjectPtr<UPCGSettings>_u_0 TVar15;
  FText *pFVar16;
  TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_> TVar17;
  TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>
  TVar18;
  undefined8 *puVar19;
  IPCGAttributeAccessorKeys *pIVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  FPCGMetadataDomain *pFVar25;
  FPCGTaggedData *pFVar26;
  ForAnyElementType FVar27;
  ulonglong uVar28;
  long64 *plVar29;
  int iVar30;
  FObjectPtr_u_0 *pFVar31;
  uint uVar32;
  bool bVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined1 auStackY_5b8 [32];
  <lambda_1> local_580 [8];
  TObjectPtr<UPCGSettings>_u_0 local_578;
  undefined1 local_570 [8];
  bool local_568 [8];
  FObjectPtr_u_0 *local_560;
  UPCGMetadata *local_558;
  FPCGContext *local_550;
  undefined8 *local_548;
  longlong local_540;
  FObjectPtr_u_0 *local_538;
  UPCGBasePointData *local_530;
  undefined8 *local_528;
  int local_520 [2];
  int local_518 [2];
  int local_510;
  int local_50c;
  uint local_508;
  TObjectPtr<UPCGSettings>_u_0 local_500;
  FObjectPtr_u_0 local_4f8;
  UPCGParamData *local_4f0;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_4e8;
  undefined8 local_4d8;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *local_4d0;
  longlong local_4c8;
  int local_4c0;
  int local_4bc;
  int local_4b8;
  long64 local_4b0;
  undefined1 local_4a8 [16];
  undefined1 local_498 [16];
  FName local_488;
  <lambda_1> local_480;
  FPCGCrc local_478;
  TObjectPtr<UPCGMetadata>_u_0 local_470;
  TObjectPtr<UPCGMetadata>_u_0 local_468 [2];
  TObjectPtr<UPCGMetadata>_u_0 local_458;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  IPCGAttributeAccessorKeys **local_448;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  FPCGInitializeFromDataParams local_438;
  FName local_3f8;
  FPCGMetadataDomainID local_3f0;
  FName local_3d8;
  FPCGMetadataDomainID local_3d0;
  FName local_3b8;
  FPCGMetadataDomainID local_3b0;
  FName local_398;
  FPCGMetadataDomainID local_390;
  FName local_378;
  FPCGMetadataDomainID local_370;
  FName local_358;
  FPCGMetadataDomainID local_350;
  FPCGAttributePropertySelector local_338;
  FPCGAttributePropertySelector local_2f8;
  FPCGAttributePropertySelector local_2b8;
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [8];
  FText local_250;
  TObjectPtr<UPCGMetadata>_u_0 local_238;
  undefined8 uStack_230;
  TArrayView<IPCGAttributeAccessorKeys_const_*_const,int> local_228;
  IPCGAttributeAccessorKeys local_218;
  TVector4<double>_u_0 local_208;
  undefined1 local_1e8 [48];
  TSet<TTuple<FName,FPCGSubdivisionSubmodule>,TDefaultMapHashableKeyFuncs<FName,FPCGSubdivisionSubmodule,0>,FDefaultSetAllocator>
  local_1b8;
  undefined1 local_168 [64];
  void *local_128;
  ulonglong uStack_120;
  ForAnyElementType local_118;
  undefined8 local_110;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 TStack_f0;
  TObjectPtr<UPCGSettings>_u_0 local_d8;
  FPCGContext *pFStack_d0;
  FObjectPtr_u_0 local_c8;
  UPCGBasePointData *pUStack_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  IPCGAttributeAccessorKeys *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  TSet<TTuple<FName,FPCGSubdivisionSubmodule>,TDefaultMapHashableKeyFuncs<FName,FPCGSubdivisionSubmodule,0>,FDefaultSetAllocator>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_5b8;
  bVar33 = -1 < CpuChannel->Enabled;
  local_550 = param_1;
  local_478 = (FPCGCrc)this;
  if (bVar33) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId212,"FPCGSubdivideSegmentElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Grammar\\PCGSubdivideSegment.cpp"
               ,0xd4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId212);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Grammar\\PCGSubdivideSegment.cpp"
                         ,0xd6,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return (bool)uVar8;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar14 = UPCGNode::GetSettings(this_00), pUVar14 == (UPCGSettings *)0x0)) {
      pFVar26 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSubdivideSegmentSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_580[0]);
      if (pFVar26 != (FPCGTaggedData *)0x0) {
        local_500.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar26->Data).Data.field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if ((UPCGSubdivisionBaseSettings *)local_500.DebugPtr ==
              (UPCGSubdivisionBaseSettings *)0x0) goto LAB_1499ea144;
          UE::GC::MarkAsReachable((UObject *)local_500.DebugPtr);
        }
        if ((UPCGSubdivisionBaseSettings *)local_500.DebugPtr != (UPCGSubdivisionBaseSettings *)0x0)
        {
          pUVar13 = UPCGSubdivideSegmentSettings::StaticClass();
          bVar7 = FObjectPtr::IsA(&local_500.ObjectPtr,pUVar13);
          TVar15 = local_500;
          local_578 = local_500;
          if (bVar7) goto LAB_1499ea14b;
        }
      }
    }
    else {
      pUVar14 = UPCGNode::GetSettings(this_00);
      TVar15.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar14);
      if ((UPCGSubdivisionBaseSettings *)TVar15.DebugPtr != (UPCGSubdivisionBaseSettings *)0x0) {
        local_578.DebugPtr = TVar15.DebugPtr;
        pUVar13 = UPCGSubdivideSegmentSettings::StaticClass();
        iVar9 = (int)pUVar13->_padding_;
        if ((iVar9 <= *(int *)((TVar15.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar15.DebugPtr)->_padding_ + 0x30) + (longlong)iVar9 * 8) ==
            &pUVar13->_padding_)) goto LAB_1499ea14b;
      }
    }
LAB_1499ea144:
    local_578.DebugPtr = (UPCGSettings *)0x0;
    TVar15.DebugPtr = local_578.DebugPtr;
  }
  else {
    pUVar13 = UPCGSubdivideSegmentSettings::StaticClass();
    bVar7 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar13);
    if (bVar7) {
      local_578 = (TObjectPtr<UPCGSettings>_u_0)(param_1->SettingsWithOverride).field0_0x0.DebugPtr;
      TVar15 = local_578;
    }
    else {
      local_578.DebugPtr = (UPCGSettings *)0x0;
      TVar15.DebugPtr = local_578.DebugPtr;
    }
  }
LAB_1499ea14b:
  if (((UPCGSubdivisionBaseSettings *)TVar15.DebugPtr == (UPCGSubdivisionBaseSettings *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Grammar\\PCGSubdivideSegment.cpp"
                         ,0xd9,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return (bool)uVar8;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_4e8,&PCGPinConstants::DefaultInputLabel);
  local_118.Data = (FScriptContainerElement *)0x0;
  local_1e8._0_8_ = (FPCGMetadataAttribute<FName> *)0x0;
  local_1e8._8_8_ = (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)0x0;
  local_168._32_8_ = 0;
  local_4d0 = &(param_1->OutputData).TaggedData;
  local_168._0_8_ = 0;
  local_168._56_8_ = 0;
  local_168._8_8_ = 0;
  TStack_f0._s_0.X = 0.0;
  local_168._40_8_ = 0x8000000000;
  local_1b8.Elements._32_8_ = 0;
  local_1e8._32_8_ = (FPCGMetadataAttribute<bool> *)0x0;
  local_1e8._40_8_ = (FPCGMetadataAttribute<int> *)0x0;
  local_168._16_8_ = 0;
  local_168._24_8_ = 0;
  TStack_f0._s_0.Y = 0.0;
  TStack_f0._s_0.Z = 0.0;
  local_1b8.Elements._40_8_ = 0x8000000000;
  local_d8.DebugPtr = (UPCGSettings *)0x0;
  pFStack_d0 = (FPCGContext *)0x0;
  local_1b8.Elements._0_8_ = 0;
  local_1b8.Hash.InlineData[0] = 0;
  local_1b8.Hash.InlineData[1] = 0;
  local_1b8.Hash.InlineData[2] = 0;
  local_1b8.Hash.InlineData[3] = 0;
  local_1b8.Hash._padding_ = 0;
  local_1b8.Elements._8_8_ = 0;
  local_108._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_108._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_108._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_1e8._16_8_ = (FPCGMetadataAttribute<int> *)0x0;
  local_1e8._24_8_ = (FPCGMetadataAttribute<bool> *)0x0;
  local_1b8.Elements._16_8_ = 0;
  local_1b8.Elements._24_8_ = 0;
  local_1b8.Elements._48_8_ = 0xffffffff;
  local_1b8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_1b8._72_8_ = 0;
  local_168._48_8_ = 0xffffffff;
  local_128 = (void *)0x0;
  uStack_120 = 0;
  local_110._0_4_ = 0;
  local_110._4_4_ = 0;
  local_c8.Handle = (UObject *)0x0;
  pUStack_c0 = (UPCGBasePointData *)0x0;
  iVar9 = (int)TVar15.DebugPtr[2]._padding_;
  if (iVar9 == 0) {
    uVar34 = SUB84(UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z,0);
    uVar35 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::XAxisVector.field0_0x0._16_8_ >> 0x20);
    local_108._0_4_ = UE::Math::TVector<double>::XAxisVector.field0_0x0._0_4_;
    local_108._4_4_ = UE::Math::TVector<double>::XAxisVector.field0_0x0._4_4_;
    local_108._8_4_ = UE::Math::TVector<double>::XAxisVector.field0_0x0._8_4_;
    local_108._12_4_ = UE::Math::TVector<double>::XAxisVector.field0_0x0._12_4_;
  }
  else if (iVar9 == 1) {
    uVar34 = SUB84(UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z,0);
    uVar35 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::YAxisVector.field0_0x0._16_8_ >> 0x20);
    local_108._0_4_ = UE::Math::TVector<double>::YAxisVector.field0_0x0._0_4_;
    local_108._4_4_ = UE::Math::TVector<double>::YAxisVector.field0_0x0._4_4_;
    local_108._8_4_ = UE::Math::TVector<double>::YAxisVector.field0_0x0._8_4_;
    local_108._12_4_ = UE::Math::TVector<double>::YAxisVector.field0_0x0._12_4_;
  }
  else {
    if (iVar9 != 2) {
      pFVar16 = FText::AsLocalizable_Advanced_LocText
                          (&local_250,L"PCGSubdivideSegmentElement",L"InvalidAxis",
                           L"Invalid Subdivision Axis enum value.");
      PCGLog::LogErrorOnGraph(pFVar16,param_1);
      if (local_250.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_250.TextData.Reference + 0x10))();
      }
      goto LAB_1499eb41a;
    }
    uVar34 = SUB84(UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z,0);
    uVar35 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ZAxisVector.field0_0x0._16_8_ >> 0x20);
    local_108._0_4_ = UE::Math::TVector<double>::ZAxisVector.field0_0x0._0_4_;
    local_108._4_4_ = UE::Math::TVector<double>::ZAxisVector.field0_0x0._4_4_;
    local_108._8_4_ = UE::Math::TVector<double>::ZAxisVector.field0_0x0._8_4_;
    local_108._12_4_ = UE::Math::TVector<double>::ZAxisVector.field0_0x0._12_4_;
  }
  local_108._s_0.Z = (double)CONCAT44(uVar35,uVar34);
  TStack_f0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X -
       (double)CONCAT44(local_108._4_4_,local_108._0_4_);
  TStack_f0._s_0.Y =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y -
       (double)CONCAT44(local_108._12_4_,local_108._8_4_);
  local_4f0 = (UPCGParamData *)0x0;
  TStack_f0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z - local_108._s_0.Z;
  if ((char)TVar15.DebugPtr[1]._padding_ == '\0') {
    FPCGSubdivisionBaseElement::GetModulesInfoMap
              ((FPCGSubdivisionBaseElement *)this,
               (TMap<FName,FPCGSubdivisionSubmodule,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGSubdivisionSubmodule,0>_>
                *)&local_88,param_1,
               (TArray<FPCGSubdivisionSubmodule,TSizedDefaultAllocator<32>_> *)
               &TVar15.DebugPtr[1]._padding_,&local_4f0);
  }
  else {
    FPCGSubdivisionBaseElement::GetModulesInfoMap
              ((FPCGSubdivisionBaseElement *)this,
               (TMap<FName,FPCGSubdivisionSubmodule,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGSubdivisionSubmodule,0>_>
                *)&local_88,param_1,
               (FPCGSubdivisionModuleAttributeNames *)&TVar15.DebugPtr[1]._padding_,&local_4f0);
  }
  TSet<TTuple<FName,FPCGSubdivisionSubmodule>,TDefaultMapHashableKeyFuncs<FName,FPCGSubdivisionSubmodule,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<FName,FPCGSubdivisionSubmodule>,TDefaultMapHashableKeyFuncs<FName,FPCGSubdivisionSubmodule,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FName,FPCGSubdivisionSubmodule>,TDefaultMapHashableKeyFuncs<FName,FPCGSubdivisionSubmodule,0>,FDefaultSetAllocator>
              *)(local_1e8 + 0x30),&local_88);
  local_88.HashSize = 0;
  if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FPCGSubdivisionSubmodule>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FPCGSubdivisionSubmodule>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88.Elements);
  uVar28 = (ulonglong)local_4e8.ArrayNum;
  local_508 = local_4e8.ArrayNum;
  pFVar31 = (FObjectPtr_u_0 *)(local_4e8.AllocatorInstance.Data + uVar28 * 0x78);
  local_560 = (FObjectPtr_u_0 *)local_4e8.AllocatorInstance.Data;
  local_538 = pFVar31;
  while( true ) {
    if (local_4e8.ArrayNum != (uint)uVar28) {
      local_570[0] = 0;
      `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_570);
    }
    if (local_560 == pFVar31) break;
    local_4f8 = (FObjectPtr_u_0)local_560->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_1499ea546:
      if ((UPCGSpatialData *)local_4f8.Handle != (UPCGSpatialData *)0x0) {
        pUVar13 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
        bVar7 = FObjectPtr::IsA((FObjectPtr *)&local_4f8,pUVar13);
        FVar5 = local_4f8;
        if ((bVar7) &&
           (pFVar31 = local_538, (UPCGSpatialData *)local_4f8.Handle != (UPCGSpatialData *)0x0)) {
          puVar19 = (undefined8 *)0x0;
          puVar24 = (undefined8 *)0x0;
          local_548 = (undefined8 *)0x0;
          puVar21 = (undefined8 *)0x0;
          local_528 = (undefined8 *)0x0;
          puVar23 = (undefined8 *)0x0;
          pIVar20 = (IPCGAttributeAccessorKeys *)0x0;
          cVar1 = (char)local_578.DebugPtr[1]._padding_;
          puVar22 = (undefined8 *)0x0;
          if ((cVar1 == '\0') &&
             ((*(char *)((longlong)&local_578.DebugPtr[2]._padding_ + 4) == '\0' &&
              (*(char *)(local_578.DebugPtr[1].CacheLock.CriticalSection.Opaque3 + 2) == '\0')))) {
            bVar7 = false;
            goto LAB_1499eaa1a;
          }
          bVar7 = true;
          if (cVar1 == '\0') {
            puVar19 = ::operator_new(0x20);
            if (puVar19 == (undefined8 *)0x0) {
              puVar19 = (undefined8 *)0x0;
              local_548 = (undefined8 *)0x0;
            }
            else {
              *(undefined1 *)(puVar19 + 1) = 1;
              *(undefined2 *)((longlong)puVar19 + 10) = 9;
              *puVar19 = &___7__FPCGConstantValueAccessor_VFString____6B_;
              local_548 = puVar19;
              ::FString::FString((FString *)(puVar19 + 2),
                                 (FString *)&local_578.DebugPtr[1]._padding_);
            }
            pIVar20 = ::operator_new(0x18);
            if (pIVar20 == (IPCGAttributeAccessorKeys *)0x0) {
              pIVar20 = (IPCGAttributeAccessorKeys *)0x0;
            }
            else {
              pIVar20->bIsReadOnly = true;
              pIVar20->_padding_ = (longlong)&___7__FPCGAttributeAccessorKeysSingleObjectPtr_XX__6B_
              ;
              pIVar20[1]._padding_ = 0;
            }
LAB_1499ea73b:
            if (*(char *)((longlong)&local_578.DebugPtr[2]._padding_ + 4) == '\0') {
              puVar21 = ::operator_new(0x18);
              if (puVar21 == (undefined8 *)0x0) {
                puVar21 = (undefined8 *)0x0;
              }
              else {
                *(undefined1 *)(puVar21 + 1) = 1;
                *(undefined2 *)((longlong)puVar21 + 10) = 10;
                *puVar21 = &___7__FPCGConstantValueAccessor__N__6B_;
                *(undefined1 *)(puVar21 + 2) =
                     *(undefined1 *)((longlong)&local_578.DebugPtr[2]._padding_ + 5);
              }
              puVar22 = ::operator_new(0x18);
              if (puVar22 == (undefined8 *)0x0) {
                puVar22 = (undefined8 *)0x0;
              }
              else {
                *(undefined1 *)(puVar22 + 1) = 1;
                *puVar22 = &___7__FPCGAttributeAccessorKeysSingleObjectPtr_XX__6B_;
                puVar22[2] = 0;
              }
LAB_1499ea8ae:
              if (*(char *)(local_578.DebugPtr[1].CacheLock.CriticalSection.Opaque3 + 2) == '\0') {
                puVar23 = ::operator_new(0x18);
                if (puVar23 == (undefined8 *)0x0) {
                  puVar23 = (undefined8 *)0x0;
                }
                else {
                  *(undefined1 *)(puVar23 + 1) = 1;
                  *(undefined2 *)((longlong)puVar23 + 10) = 2;
                  *puVar23 = &___7__FPCGConstantValueAccessor_H__6B_;
                  *(undefined4 *)(puVar23 + 2) = 0;
                }
                puVar24 = ::operator_new(0x18);
                if (puVar24 == (undefined8 *)0x0) {
                  puVar24 = (undefined8 *)0x0;
                  local_528 = (undefined8 *)0x0;
                }
                else {
                  *(undefined1 *)(puVar24 + 1) = 1;
                  *puVar24 = &___7__FPCGAttributeAccessorKeysSingleObjectPtr_XX__6B_;
                  puVar24[2] = 0;
                  local_528 = puVar24;
                }
LAB_1499eaa1a:
                local_530 = FPCGContext::NewPointData_AnyThread(local_550);
                FPCGInitializeFromDataParams::FPCGInitializeFromDataParams
                          (&local_438,(UPCGSpatialData *)FVar5.Handle);
                local_438.bInheritSpatialData = false;
                UPCGSpatialData::InitializeFromDataWithParams
                          ((UPCGSpatialData *)local_530,&local_438);
                local_d8.DebugPtr = local_578.DebugPtr;
                pFStack_d0 = local_550;
                local_c8.Handle = FVar5.Handle;
                pUStack_c0 = local_530;
                local_558 = (UPCGMetadata *)local_530->_padding_;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (local_558 != (UPCGMetadata *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)local_558);
                }
                local_4d8 = 0;
                local_488.ComparisonIndex.Value = 0;
                local_488.Number = 0;
                local_3f0 = PCGMetadataDomainID::Default;
                FVar2 = *(FName *)((longlong)&local_578.DebugPtr[2]._padding_ + 4);
                local_3f8 = FVar2;
                pFVar25 = UPCGMetadata::FindOrCreateMetadataDomain(local_558,&local_3f0);
                if (pFVar25 == (FPCGMetadataDomain *)0x0) {
                  local_1e8._0_8_ = (FPCGMetadataAttribute<FName> *)0x0;
LAB_1499eb308:
                  PCGLog::Metadata::LogFailToCreateAttributeError<FName>(FVar2,local_550);
                }
                else {
                  local_1e8._0_8_ =
                       FPCGMetadataDomain::FindOrCreateAttribute<FName>
                                 (pFVar25,local_3f8,&local_488,false,true,true);
                  if ((FPCGMetadataAttribute<FName> *)local_1e8._0_8_ ==
                      (FPCGMetadataAttribute<FName> *)0x0) goto LAB_1499eb308;
                  local_208._s_0.X = 0.0;
                  local_208._s_0.Y = 0.0;
                  local_208._s_0.Z = 0.0;
                  local_208._s_0.W = 0.0;
                  FVar2 = (FName)local_578.DebugPtr[2]._padding_;
                  if (*(char *)((longlong)&local_578.DebugPtr[2]._padding_ + 4) == '\0') {
LAB_1499eab9c:
                    FVar2 = *(FName *)((longlong)
                                       local_578.DebugPtr[2].CacheLock.CriticalSection.Opaque3 + 0xc
                                      );
                    local_520[0] = -1;
                    if (*(char *)((longlong)local_578.DebugPtr[2].CacheLock.CriticalSection.Opaque3
                                 + 9) == '\0') {
LAB_1499eac17:
                      FVar2 = (FName)local_578.DebugPtr[2].CachedOverridableParams.AllocatorInstance
                                     .Data;
                      local_568[0] = false;
                      if (*(char *)((longlong)
                                    local_578.DebugPtr[2].CacheLock.CriticalSection.Opaque3 + 0x14)
                          == '\0') {
LAB_1499eac91:
                        FVar2.ComparisonIndex.Value =
                             ((local_578.DebugPtr + 400)->CachedOverridableParams).ArrayNum;
                        FVar2.Number = ((local_578.DebugPtr + 400)->CachedOverridableParams).
                                       ArrayMax;
                        local_580[0] = (<lambda_1>)0x0;
                        if (*(char *)((longlong)
                                      local_578.DebugPtr[2].CacheLock.CriticalSection.Opaque3 + 0x14
                                     ) == '\0') {
LAB_1499ead0b:
                          FVar2 = *(FName *)((longlong)
                                             &local_578.DebugPtr[2].OverriddenSettingsPropertyBag.
                                              field0_0x0 + 4);
                          local_518[0] = -1;
                          if (*(char *)&local_578.DebugPtr[2].OverriddenSettingsPropertyBag.
                                        field0_0x0 == '\0') {
LAB_1499ead81:
                            if (bVar7) {
                              if (((puVar19 == (undefined8 *)0x0) || (puVar21 == (undefined8 *)0x0))
                                 || (puVar23 == (undefined8 *)0x0)) {
                                bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                  (
                                                  "GrammarAccessor && FlipAxisAccessor && SeedAccessor"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Grammar\\PCGSubdivideSegment.cpp"
                                                  ,0x154,L"");
                                if (bVar7) {
                                  pcVar3 = (code *)swi(3);
                                  uVar8 = (*pcVar3)();
                                  return (bool)uVar8;
                                }
                              }
                              local_458.DebugPtr = (UPCGMetadata *)&local_b8;
                              uStack_450 = 3;
                              uStack_230 = CONCAT44(uStack_44c,3);
                              local_448 = &local_a0;
                              local_480.Callback.Parameters = (<lambda_3>)local_1e8;
                              uStack_440 = 3;
                              local_228.ArrayNum = 3;
                              local_228._12_4_ = uStack_43c;
                              local_238.DebugPtr = local_458.DebugPtr;
                              local_b8 = puVar19;
                              local_b0 = puVar21;
                              local_a8 = puVar23;
                              local_a0 = pIVar20;
                              local_98 = puVar22;
                              local_90 = puVar24;
                              local_228.DataPtr = local_448;
                              PCGMetadataElementCommon::
                              ApplyOnMultiAccessorsRange<FString,bool,int,_PCGMetadataElementCommon::ApplyOnMultiAccessors<FString,bool,int,_FPCGSegmentSubdivisionElement::ExecuteInternal_::__l37::<lambda_3>_&>_::__l2::<lambda_1>_>
                                        (&local_228,
                                         (TArrayView<IPCGAttributeAccessor_const_*_const,int> *)
                                         &local_238.ObjectPtr,&local_480,StrictType,0x100,-1);
                            }
                            else {
                              iVar30 = 0;
                              iVar9 = (**(code **)(*(longlong *)local_c8.Handle + 0x488))();
                              TVar15 = local_578;
                              if (0 < iVar9) {
                                do {
                                  PCGSubdivideSegmentHelpers::Process
                                            ((FParameters *)local_1e8,
                                             (FString *)&TVar15.DebugPtr[1]._padding_,
                                             *(bool *)((longlong)&TVar15.DebugPtr[2]._padding_ + 5),
                                             0,iVar30);
                                  iVar30 = iVar30 + 1;
                                  iVar9 = (**(code **)(*(longlong *)local_c8.Handle + 0x488))();
                                  puVar19 = local_548;
                                  puVar24 = local_528;
                                } while (iVar30 < iVar9);
                              }
                            }
                            iVar9 = (**(code **)(pUStack_c0->_padding_ + 0x488))();
                            if (iVar9 != 0) {
                              if ((FPCGMetadataAttribute<int> *)local_1e8._40_8_ !=
                                  (FPCGMetadataAttribute<int> *)0x0) {
                                (**(code **)(pUStack_c0->_padding_ + 0x4f8))(pUStack_c0,&local_4c8);
                                uVar10 = (uint)local_110 & 0x80000001;
                                if ((int)uVar10 < 0) {
                                  uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
                                }
                                if (uVar10 != 0) {
                                  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                    ("Parameters.CornerIndexes.Num() % 2 == 0",
                                                                                                          
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Grammar\\PCGSubdivideSegment.cpp"
                                                  ,0x16c,L"");
                                  if (bVar7) {
                                    pcVar3 = (code *)swi(3);
                                    uVar8 = (*pcVar3)();
                                    return (bool)uVar8;
                                  }
                                }
                                local_558 = (UPCGMetadata *)
                                            ((ulonglong)local_558 & 0xffffffff00000000);
                                pUVar4 = local_558;
                                if (0 < (int)(uint)local_110) {
                                  local_558._0_4_ = 0;
                                  local_548 = (undefined8 *)&DAT_00000002;
                                  local_540 = 0;
                                  uVar10 = (uint)local_110;
                                  uVar32 = (uint)local_558;
                                  local_558 = pUVar4;
                                  do {
                                    uVar12 = uVar10;
                                    if (uVar32 != 0) {
                                      uVar12 = uVar32;
                                    }
                                    uVar12 = uVar12 - 1;
                                    uVar11 = 0;
                                    if ((int)uVar12 < (int)uVar10) {
                                      uVar11 = ~uVar12 >> 0x1f;
                                    }
                                    if (uVar11 == 0) {
                                      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                        ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                  
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                      if (bVar7) {
                                        pcVar3 = (code *)swi(3);
                                        uVar8 = (*pcVar3)();
                                        return (bool)uVar8;
                                      }
                                      uVar10 = (uint)local_110;
                                    }
                                    local_510 = *(int *)(local_118.Data + (longlong)(int)uVar12 * 4)
                                    ;
                                    if (uVar32 == uVar10 - 2) {
                                      uVar12 = 0;
                                      puVar24 = (undefined8 *)0x0;
                                    }
                                    else {
                                      uVar12 = uVar32 + 2;
                                      puVar24 = local_548;
                                    }
                                    uVar11 = 0;
                                    if ((int)uVar12 < (int)uVar10) {
                                      uVar11 = ~uVar12 >> 0x1f;
                                    }
                                    if (uVar11 == 0) {
                                      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                        ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                  
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                      if (bVar7) {
                                        pcVar3 = (code *)swi(3);
                                        uVar8 = (*pcVar3)();
                                        return (bool)uVar8;
                                      }
                                      uVar10 = (uint)local_110;
                                    }
                                    local_50c = *(int *)(local_118.Data + (longlong)puVar24 * 4);
                                    uVar12 = 0;
                                    if ((int)uVar32 < (int)uVar10) {
                                      uVar12 = ~uVar32 >> 0x1f;
                                    }
                                    if (uVar12 == 0) {
                                      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                        ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                  
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                      if (bVar7) {
                                        pcVar3 = (code *)swi(3);
                                        uVar8 = (*pcVar3)();
                                        return (bool)uVar8;
                                      }
                                    }
                                    uVar10 = *(uint *)(local_118.Data + local_540);
                                    uVar12 = 0;
                                    if ((int)uVar10 < local_4b8) {
                                      uVar12 = ~uVar10 >> 0x1f;
                                    }
                                    if (uVar12 == 0) {
                                      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                        ("(Index >= 0) & (Index < NumElements)",
                                                                                                                  
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                                  ,0x8b,
                                                  L"Array index out of bounds: %lld from an array of size %lld"
                                                  );
                                      if (bVar7) {
                                        pcVar3 = (code *)swi(3);
                                        uVar8 = (*pcVar3)();
                                        return (bool)uVar8;
                                      }
                                    }
                                    if (uVar10 == (int)uVar10 % local_4bc) {
                                      plVar29 = (long64 *)
                                                ((longlong)local_4c0 *
                                                 (longlong)((int)uVar10 % local_4bc) + local_4c8);
                                    }
                                    else {
                                      plVar29 = &local_4b0;
                                    }
                                    FPCGMetadataAttribute<int>::SetValue
                                              ((FPCGMetadataAttribute<int> *)local_1e8._40_8_,
                                               *plVar29,&local_510);
                                    uVar10 = 0;
                                    if ((int)(uVar32 + 1) < (int)(uint)local_110) {
                                      uVar10 = ~(uVar32 + 1) >> 0x1f;
                                    }
                                    if (uVar10 == 0) {
                                      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                        ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                  
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                      if (bVar7) {
                                        pcVar3 = (code *)swi(3);
                                        uVar8 = (*pcVar3)();
                                        return (bool)uVar8;
                                      }
                                    }
                                    uVar10 = *(uint *)(local_118.Data + local_540 + 4);
                                    uVar12 = 0;
                                    if ((int)uVar10 < local_4b8) {
                                      uVar12 = ~uVar10 >> 0x1f;
                                    }
                                    if (uVar12 == 0) {
                                      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                        ("(Index >= 0) & (Index < NumElements)",
                                                                                                                  
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                                  ,0x8b,
                                                  L"Array index out of bounds: %lld from an array of size %lld"
                                                  );
                                      if (bVar7) {
                                        pcVar3 = (code *)swi(3);
                                        uVar8 = (*pcVar3)();
                                        return (bool)uVar8;
                                      }
                                    }
                                    if (uVar10 == (int)uVar10 % local_4bc) {
                                      plVar29 = (long64 *)
                                                ((longlong)local_4c0 *
                                                 (longlong)((int)uVar10 % local_4bc) + local_4c8);
                                    }
                                    else {
                                      plVar29 = &local_4b0;
                                    }
                                    FPCGMetadataAttribute<int>::SetValue
                                              ((FPCGMetadataAttribute<int> *)local_1e8._40_8_,
                                               *plVar29,&local_50c);
                                    uVar32 = uVar32 + 2;
                                    local_540 = local_540 + 8;
                                    local_548 = (undefined8 *)((longlong)local_548 + 2);
                                    puVar24 = local_528;
                                    uVar10 = (uint)local_110;
                                  } while ((int)uVar32 < (int)(uint)local_110);
                                }
                              }
                              pTVar6 = local_4d0;
                              iVar9 = local_4d0->ArrayNum;
                              if (iVar9 == local_4d0->ArrayMax) {
                                iVar9 = UE::Core::Private::
                                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                                  (0x878,&local_4d0->AllocatorInstance,
                                                   &local_4d0->ArrayMax);
                              }
                              pTVar6->ArrayNum = iVar9 + 1;
                              pFVar26 = FPCGTaggedData::FPCGTaggedData
                                                  ((FPCGTaggedData *)
                                                   ((((
                                                  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>
                                                  *)&pTVar6->AllocatorInstance)->AllocatorInstance).
                                                  Data + (longlong)iVar9 * 0x78),
                                                  (FPCGTaggedData *)local_560);
                              FPCGDataPtrWrapper::operator=(&pFVar26->Data,(UPCGData *)local_530);
                            }
                          }
                          else {
                            local_370 = PCGMetadataDomainID::Default;
                            local_378 = FVar2;
                            pFVar25 = UPCGMetadata::FindOrCreateMetadataDomain(local_558,&local_370)
                            ;
                            if (pFVar25 == (FPCGMetadataDomain *)0x0) {
                              local_1e8._40_8_ = (FPCGMetadataAttribute<int> *)0x0;
                            }
                            else {
                              local_1e8._40_8_ =
                                   FPCGMetadataDomain::FindOrCreateAttribute<int>
                                             (pFVar25,local_378,local_518,false,true,true);
                              if ((FPCGMetadataAttribute<int> *)local_1e8._40_8_ !=
                                  (FPCGMetadataAttribute<int> *)0x0) goto LAB_1499ead81;
                            }
                            PCGLog::Metadata::LogFailToCreateAttributeError<int>(FVar2,local_550);
                          }
                        }
                        else {
                          local_390 = PCGMetadataDomainID::Default;
                          local_398 = FVar2;
                          pFVar25 = UPCGMetadata::FindOrCreateMetadataDomain(local_558,&local_390);
                          if (pFVar25 == (FPCGMetadataDomain *)0x0) {
                            local_1e8._32_8_ = (FPCGMetadataAttribute<bool> *)0x0;
                          }
                          else {
                            local_1e8._32_8_ =
                                 FPCGMetadataDomain::FindOrCreateAttribute<bool>
                                           (pFVar25,local_398,(bool *)local_580,false,true,true);
                            if ((FPCGMetadataAttribute<bool> *)local_1e8._32_8_ !=
                                (FPCGMetadataAttribute<bool> *)0x0) goto LAB_1499ead0b;
                          }
                          PCGLog::Metadata::LogFailToCreateAttributeError<bool>(FVar2,local_550);
                        }
                      }
                      else {
                        local_3b0 = PCGMetadataDomainID::Default;
                        local_3b8 = FVar2;
                        pFVar25 = UPCGMetadata::FindOrCreateMetadataDomain(local_558,&local_3b0);
                        if (pFVar25 == (FPCGMetadataDomain *)0x0) {
                          local_1e8._24_8_ = (FPCGMetadataAttribute<bool> *)0x0;
                        }
                        else {
                          local_1e8._24_8_ =
                               FPCGMetadataDomain::FindOrCreateAttribute<bool>
                                         (pFVar25,local_3b8,local_568,false,true,true);
                          if ((FPCGMetadataAttribute<bool> *)local_1e8._24_8_ !=
                              (FPCGMetadataAttribute<bool> *)0x0) goto LAB_1499eac91;
                        }
                        PCGLog::Metadata::LogFailToCreateAttributeError<bool>(FVar2,local_550);
                      }
                    }
                    else {
                      local_3d0 = PCGMetadataDomainID::Default;
                      local_3d8 = FVar2;
                      pFVar25 = UPCGMetadata::FindOrCreateMetadataDomain(local_558,&local_3d0);
                      if (pFVar25 == (FPCGMetadataDomain *)0x0) {
                        local_1e8._16_8_ = (FPCGMetadataAttribute<int> *)0x0;
                      }
                      else {
                        local_1e8._16_8_ =
                             FPCGMetadataDomain::FindOrCreateAttribute<int>
                                       (pFVar25,local_3d8,local_520,false,true,true);
                        if ((FPCGMetadataAttribute<int> *)local_1e8._16_8_ !=
                            (FPCGMetadataAttribute<int> *)0x0) goto LAB_1499eac17;
                      }
                      PCGLog::Metadata::LogFailToCreateAttributeError<int>(FVar2,local_550);
                    }
                  }
                  else {
                    local_350 = PCGMetadataDomainID::Default;
                    local_358 = FVar2;
                    pFVar25 = UPCGMetadata::FindOrCreateMetadataDomain(local_558,&local_350);
                    if (pFVar25 == (FPCGMetadataDomain *)0x0) {
                      local_1e8._8_8_ = (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)0x0;
                    }
                    else {
                      local_1e8._8_8_ =
                           FPCGMetadataDomain::FindOrCreateAttribute<UE::Math::TVector4<double>_>
                                     (pFVar25,local_358,(TVector4<double> *)&local_208._s_0,false,
                                      true,true);
                      if ((FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)local_1e8._8_8_ !=
                          (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)0x0)
                      goto LAB_1499eab9c;
                    }
                    PCGLog::Metadata::LogFailToCreateAttributeError<UE::Math::TVector4<double>_>
                              (FVar2,local_550);
                  }
                }
                DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
                          ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
                           local_438.MetadataInitializeParams.DomainInitializeParams.
                           AllocatorInstance.Data,
                           local_438.MetadataInitializeParams.DomainInitializeParams.ArrayNum);
                FVar27.Data = local_438.MetadataInitializeParams.DomainMapping.AllocatorInstance.
                              Data;
                if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
                    local_438.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data
                    != (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
                  FMemory::Free(local_438.MetadataInitializeParams.DomainInitializeParams.
                                AllocatorInstance.Data);
                  FVar27.Data = local_438.MetadataInitializeParams.DomainMapping.AllocatorInstance.
                                Data;
                }
              }
              else {
                FPCGAttributePropertyInputSelector::CopyAndFixLast
                          ((FPCGAttributePropertyInputSelector *)
                           &local_578.DebugPtr[1].CachedOverridableParams,
                           (FPCGAttributePropertyInputSelector *)&local_2b8,(UPCGData *)FVar5.Handle
                          );
                TVar17 = PCGAttributeAccessorHelpers::CreateConstAccessor
                                   ((UPCGData *)local_498,
                                    (FPCGAttributePropertySelector *)FVar5.Handle,
                                    SUB81(&local_2b8,0));
                if ((IPCGAttributeAccessor *)local_268 != TVar17.Ptr) {
                  puVar23 = (undefined8 *)(TVar17.Ptr)->_padding_;
                  (TVar17.Ptr)->_padding_ = 0;
                }
                if ((undefined8 *)local_498._0_8_ != (undefined8 *)0x0) {
                  (*(code *)**(undefined8 **)local_498._0_8_)(local_498._0_8_,1);
                }
                TVar18 = PCGAttributeAccessorHelpers::CreateConstKeys
                                   ((UPCGData *)(local_498 + 8),
                                    (FPCGAttributePropertySelector *)FVar5.Handle);
                if ((IPCGAttributeAccessorKeys *)(local_268 + 8) != TVar18.Ptr) {
                  puVar24 = (undefined8 *)(TVar18.Ptr)->_padding_;
                  (TVar18.Ptr)->_padding_ = 0;
                  local_528 = puVar24;
                }
                if ((undefined8 *)local_498._8_8_ != (undefined8 *)0x0) {
                  (*(code *)**(undefined8 **)local_498._8_8_)(local_498._8_8_,1);
                }
                if ((puVar23 != (undefined8 *)0x0) && (puVar24 != (undefined8 *)0x0)) {
                  DestructItems<FString,int>
                            ((FString *)local_2b8.ExtraNames.AllocatorInstance.Data,
                             local_2b8.ExtraNames.ArrayNum);
                  if (local_2b8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                  {
                    FMemory::Free(local_2b8.ExtraNames.AllocatorInstance.Data);
                  }
                  goto LAB_1499eaa1a;
                }
                PCGLog::Metadata::LogFailToCreateAccessorError(&local_2b8,local_550);
                DestructItems<FString,int>
                          ((FString *)local_2b8.ExtraNames.AllocatorInstance.Data,
                           local_2b8.ExtraNames.ArrayNum);
                FVar27.Data = local_2b8.ExtraNames.AllocatorInstance.Data;
              }
              if (FVar27.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FVar27.Data);
              }
              if (puVar24 != (undefined8 *)0x0) {
                (**(code **)*puVar24)(puVar24,1);
              }
            }
            else {
              FPCGAttributePropertyInputSelector::CopyAndFixLast
                        ((FPCGAttributePropertyInputSelector *)&local_578.DebugPtr[2].Seed,
                         (FPCGAttributePropertyInputSelector *)&local_2f8,(UPCGData *)FVar5.Handle);
              TVar17 = PCGAttributeAccessorHelpers::CreateConstAccessor
                                 ((UPCGData *)local_4a8,
                                  (FPCGAttributePropertySelector *)FVar5.Handle,SUB81(&local_2f8,0))
              ;
              if ((IPCGAttributeAccessor *)local_278 != TVar17.Ptr) {
                puVar21 = (undefined8 *)(TVar17.Ptr)->_padding_;
                (TVar17.Ptr)->_padding_ = 0;
              }
              if ((undefined8 *)local_4a8._0_8_ != (undefined8 *)0x0) {
                (*(code *)**(undefined8 **)local_4a8._0_8_)(local_4a8._0_8_,1);
              }
              TVar18 = PCGAttributeAccessorHelpers::CreateConstKeys
                                 ((UPCGData *)(local_4a8 + 8),
                                  (FPCGAttributePropertySelector *)FVar5.Handle);
              if ((IPCGAttributeAccessorKeys *)(local_278 + 8) != TVar18.Ptr) {
                puVar22 = (undefined8 *)(TVar18.Ptr)->_padding_;
                (TVar18.Ptr)->_padding_ = 0;
              }
              if ((undefined8 *)local_4a8._8_8_ != (undefined8 *)0x0) {
                (*(code *)**(undefined8 **)local_4a8._8_8_)(local_4a8._8_8_,1);
              }
              if ((puVar21 != (undefined8 *)0x0) && (puVar22 != (undefined8 *)0x0)) {
                DestructItems<FString,int>
                          ((FString *)local_2f8.ExtraNames.AllocatorInstance.Data,
                           local_2f8.ExtraNames.ArrayNum);
                if (local_2f8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_2f8.ExtraNames.AllocatorInstance.Data);
                }
                goto LAB_1499ea8ae;
              }
              PCGLog::Metadata::LogFailToCreateAccessorError(&local_2f8,local_550);
              DestructItems<FString,int>
                        ((FString *)local_2f8.ExtraNames.AllocatorInstance.Data,
                         local_2f8.ExtraNames.ArrayNum);
              if (local_2f8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2f8.ExtraNames.AllocatorInstance.Data);
              }
            }
            if (puVar22 != (undefined8 *)0x0) {
              (**(code **)*puVar22)(puVar22,1);
            }
          }
          else {
            FPCGAttributePropertyInputSelector::CopyAndFixLast
                      ((FPCGAttributePropertyInputSelector *)&local_578.DebugPtr[1].OriginalSettings
                       ,(FPCGAttributePropertyInputSelector *)&local_338,
                       (UPCGData *)local_4f8.Handle);
            TVar17 = PCGAttributeAccessorHelpers::CreateConstAccessor
                               ((UPCGData *)&local_470.ObjectPtr,
                                (FPCGAttributePropertySelector *)FVar5.Handle,SUB81(&local_338,0));
            if ((IPCGAttributeAccessor *)local_258 != TVar17.Ptr) {
              puVar19 = (undefined8 *)(TVar17.Ptr)->_padding_;
              (TVar17.Ptr)->_padding_ = 0;
              local_548 = puVar19;
            }
            if (local_470.DebugPtr != (UPCGMetadata *)0x0) {
              (**(code **)(local_470.DebugPtr)->_padding_)(local_470.DebugPtr,1);
            }
            TVar18 = PCGAttributeAccessorHelpers::CreateConstKeys
                               ((UPCGData *)&local_468[0].ObjectPtr,
                                (FPCGAttributePropertySelector *)FVar5.Handle);
            if (&local_218 != TVar18.Ptr) {
              pIVar20 = (IPCGAttributeAccessorKeys *)(TVar18.Ptr)->_padding_;
              (TVar18.Ptr)->_padding_ = 0;
            }
            if (local_468[0].DebugPtr != (UPCGMetadata *)0x0) {
              (**(code **)(local_468[0].DebugPtr)->_padding_)(local_468[0].DebugPtr,1);
            }
            if ((puVar19 != (undefined8 *)0x0) && (pIVar20 != (IPCGAttributeAccessorKeys *)0x0)) {
              DestructItems<FString,int>
                        ((FString *)local_338.ExtraNames.AllocatorInstance.Data,
                         local_338.ExtraNames.ArrayNum);
              if (local_338.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_338.ExtraNames.AllocatorInstance.Data);
              }
              goto LAB_1499ea73b;
            }
            PCGLog::Metadata::LogFailToCreateAccessorError(&local_338,local_550);
            DestructItems<FString,int>
                      ((FString *)local_338.ExtraNames.AllocatorInstance.Data,
                       local_338.ExtraNames.ArrayNum);
            if (local_338.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_338.ExtraNames.AllocatorInstance.Data);
            }
          }
          if (pIVar20 != (IPCGAttributeAccessorKeys *)0x0) {
            (**(code **)pIVar20->_padding_)(pIVar20,1);
          }
          if (puVar23 != (undefined8 *)0x0) {
            (**(code **)*puVar23)(puVar23,1);
          }
          if (puVar21 != (undefined8 *)0x0) {
            (**(code **)*puVar21)(puVar21,1);
          }
          pFVar31 = local_538;
          if (puVar19 != (undefined8 *)0x0) {
            (**(code **)*puVar19)(puVar19,1);
            pFVar31 = local_538;
          }
        }
      }
    }
    else if ((UPCGSpatialData *)local_4f8.Handle != (UPCGSpatialData *)0x0) {
      UE::GC::MarkAsReachable(local_4f8.Handle);
      goto LAB_1499ea546;
    }
    uVar28 = (ulonglong)local_508;
    local_560 = local_560 + 0xf;
  }
  if (((char)local_578.DebugPtr[2]._padding_ != '\0') && (local_4f0 != (UPCGParamData *)0x0)) {
    FPCGSubdivisionBaseElement::MatchAndSetAttributes
              ((FPCGSubdivisionBaseElement *)local_478,&local_4e8,local_4d0,local_4f0,
               (UPCGSubdivisionBaseSettings *)local_578.DebugPtr,&PCGMetadataDomainID::Default);
  }
LAB_1499eb41a:
  if (local_118.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data);
  }
  uStack_120 = uStack_120 & 0xffffffff00000000;
  if (local_128 != (void *)0x0) {
    FMemory::Free(local_128);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,PCGGrammar::FTokenizedGrammar>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,PCGGrammar::FTokenizedGrammar>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,PCGGrammar::FTokenizedGrammar>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_168);
  local_1b8._72_8_ = local_1b8._72_8_ & 0xffffffff00000000;
  if (local_1b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1b8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FPCGSubdivisionSubmodule>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FPCGSubdivisionSubmodule>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FPCGSubdivisionSubmodule>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_1e8 + 0x30));
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_4e8.AllocatorInstance.Data,local_4e8.ArrayNum);
  if ((FPCGTaggedData *)local_4e8.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_4e8.AllocatorInstance.Data);
  }
  if (bVar33) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// SupportsBasePointDataInputs @ 149a10270

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
FPCGSegmentSubdivisionElement::SupportsBasePointDataInputs
          (FPCGSegmentSubdivisionElement *this,FPCGContext *param_1)

{
  return true;
}

