// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// operator() @ 1499c9020

void __thiscall
`FPCGSplineToSegmentElement::ExecuteInternal'::__l46::<lambda_1>::operator()
          (void *this,int param_1,TVector<double> *param_2,double param_3)

{
  long64 lVar1;
  long64 lVar2;
  long64 *plVar3;
  int local_res8 [2];
  int local_res10 [2];
  double local_res20;
  
  local_res8[0] = (param_1 + -1 + **(int **)this) % **(int **)this;
  local_res10[0] = param_1;
  local_res20 = param_3;
  plVar3 = TPCGValueRange<__int64,TStridedView<__int64,int>_>::operator[]
                     ((TPCGValueRange<__int64,TStridedView<__int64,int>_> *)
                      (*(longlong *)((longlong)this + 8) + 0x168),local_res8[0]);
  lVar1 = *plVar3;
  plVar3 = TPCGValueRange<__int64,TStridedView<__int64,int>_>::operator[]
                     ((TPCGValueRange<__int64,TStridedView<__int64,int>_> *)
                      (*(longlong *)((longlong)this + 8) + 0x168),local_res10[0]);
  lVar2 = *plVar3;
  if ((**(longlong **)((longlong)this + 0x10) != 0) &&
     ((FPCGMetadataAttribute<UE::Math::TVector<double>_> *)**(undefined8 **)((longlong)this + 0x18)
      != (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0)) {
    FPCGMetadataAttribute<UE::Math::TVector<double>_>::SetValue
              ((FPCGMetadataAttribute<UE::Math::TVector<double>_> *)
               **(undefined8 **)((longlong)this + 0x18),lVar1,param_2);
    FPCGMetadataAttribute<UE::Math::TVector<double>_>::SetValue
              ((FPCGMetadataAttribute<UE::Math::TVector<double>_> *)
               **(undefined8 **)((longlong)this + 0x10),lVar2,param_2);
  }
  if ((**(longlong **)((longlong)this + 0x20) != 0) &&
     ((FPCGMetadataAttribute<double> *)**(undefined8 **)((longlong)this + 0x28) !=
      (FPCGMetadataAttribute<double> *)0x0)) {
    FPCGMetadataAttribute<double>::SetValue
              ((FPCGMetadataAttribute<double> *)**(undefined8 **)((longlong)this + 0x28),lVar1,
               &local_res20);
    FPCGMetadataAttribute<double>::SetValue
              ((FPCGMetadataAttribute<double> *)**(undefined8 **)((longlong)this + 0x20),lVar2,
               &local_res20);
  }
  if ((**(longlong **)((longlong)this + 0x30) != 0) &&
     ((FPCGMetadataAttribute<int> *)**(undefined8 **)((longlong)this + 0x38) !=
      (FPCGMetadataAttribute<int> *)0x0)) {
    FPCGMetadataAttribute<int>::SetValue
              ((FPCGMetadataAttribute<int> *)**(undefined8 **)((longlong)this + 0x38),lVar1,
               local_res10);
    FPCGMetadataAttribute<int>::SetValue
              ((FPCGMetadataAttribute<int> *)**(undefined8 **)((longlong)this + 0x30),lVar2,
               local_res8);
    FPCGMetadataAttribute<int>::SetValue
              ((FPCGMetadataAttribute<int> *)**(undefined8 **)((longlong)this + 0x40),lVar2,
               local_res10);
  }
  return;
}

// ExecuteInternal @ 1499ece40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FPCGSplineToSegmentElement::ExecuteInternal(FPCGSplineToSegmentElement *this,FPCGContext *param_1)

{
  char cVar1;
  UPCGNode *this_00;
  UPCGMetadata *this_01;
  code *pcVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  FObjectPtr_u_0 FVar9;
  bool bVar10;
  undefined1 uVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  UClass *pUVar15;
  UPCGSettings *pUVar16;
  TObjectPtr<UPCGSettings>_u_0 TVar17;
  UPCGBasePointData *this_02;
  FPCGTaggedData *pFVar18;
  TQuat<double> *pTVar19;
  TMatrix<double> *this_03;
  FPCGMetadataDomain *this_04;
  FPCGMetadataAttribute<bool> *pFVar20;
  FText *pFVar21;
  FText *pFVar22;
  FTextFormat *pFVar23;
  TVector<double>_u_0 *pTVar24;
  TTransform<double> *pTVar25;
  int *piVar26;
  ulonglong uVar27;
  long64 *plVar28;
  undefined1 *this_05;
  uint uVar29;
  FObjectPtr_u_0 *pFVar30;
  FPCGDataCollection *pFVar31;
  uint uVar32;
  FPCGContext *pFVar33;
  bool bVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined1 auVar43 [16];
  undefined1 auStackY_668 [32];
  <lambda_1> local_630 [8];
  FObjectPtr_u_0 *local_628;
  undefined1 local_620 [4];
  uint local_61c;
  TObjectPtr<UPCGSettings>_u_0 local_618;
  FObjectPtr_u_0 *local_610;
  FPCGContext *local_608;
  uint local_600;
  TObjectPtr<UPCGSettings>_u_0 local_5f8;
  FObjectPtr_u_0 local_5f0;
  FPCGMetadataAttribute<UE::Math::TVector<double>_> *local_5e8;
  FPCGMetadataAttribute<double> *local_5e0;
  FPCGMetadataAttribute<int> *local_5d8;
  FPCGMetadataAttribute<int> *local_5d0;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_5c8;
  FPCGMetadataAttribute<UE::Math::TVector<double>_> *local_5b8;
  FPCGMetadataAttribute<double> *local_5b0;
  FPCGMetadataAttribute<int> *local_5a8;
  ForAnyElementType local_5a0;
  undefined8 local_598;
  TVector<double>_u_0 local_590;
  TVector<double>_u_0 local_578;
  FPCGDataCollection *local_560;
  FName local_558 [2];
  TVector<double>_u_0 local_548;
  TVector<double>_u_0 local_530;
  TVector<double>_u_0 local_518;
  double local_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  double local_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  FName local_4c8;
  FPCGMetadataDomainID local_4c0;
  uint *local_4a8;
  FPCGPointValueRanges *local_4a0;
  FPCGMetadataAttribute<UE::Math::TVector<double>_> **local_498;
  FPCGMetadataAttribute<UE::Math::TVector<double>_> **local_490;
  FPCGMetadataAttribute<double> **local_488;
  FPCGMetadataAttribute<double> **local_480;
  FPCGMetadataAttribute<int> **local_478;
  FPCGMetadataAttribute<int> **local_470;
  FPCGMetadataAttribute<int> **local_468;
  double local_458;
  double local_450;
  FText local_448;
  FText local_438;
  TVector<double>_u_0 local_428;
  TVector<double>_u_0 local_408;
  TVector<double>_u_0 local_3e8;
  TVector<double>_u_0 local_3c8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  double local_3a0;
  undefined1 local_398 [16];
  double local_388;
  TVector<double> local_380;
  double local_358;
  FText local_348;
  FTextFormat local_338;
  TQuat<double> local_328;
  TQuat<double> local_308;
  FPCGPointValueRanges local_2e8;
  TMatrix<double> local_158;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_668;
  bVar34 = -1 < CpuChannel->Enabled;
  local_608 = param_1;
  if (bVar34) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId77,"FPCGSegmentSplineElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Grammar\\PCGSplineToSegment.cpp"
               ,0x4d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId77);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InContext",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Grammar\\PCGSplineToSegment.cpp"
                          ,0x4f,L""), bVar10)) {
    pcVar2 = (code *)swi(3);
    uVar11 = (*pcVar2)();
    return (bool)uVar11;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar16 = UPCGNode::GetSettings(this_00), pUVar16 == (UPCGSettings *)0x0)) {
      pFVar18 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSplineToSegmentSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_630[0]);
      if (pFVar18 != (FPCGTaggedData *)0x0) {
        local_5f8.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar18->Data).Data.field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_5f8.DebugPtr != (UPCGSettings *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_5f8.DebugPtr);
        }
        if (local_5f8.DebugPtr != (UPCGSettings *)0x0) {
          pUVar15 = UPCGSplineToSegmentSettings::StaticClass();
          bVar10 = FObjectPtr::IsA(&local_5f8.ObjectPtr,pUVar15);
          if (bVar10) {
            local_618.DebugPtr = local_5f8.DebugPtr;
            TVar17 = local_5f8;
            goto LAB_1499ed04b;
          }
        }
      }
    }
    else {
      pUVar16 = UPCGNode::GetSettings(this_00);
      TVar17.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar16);
      if (TVar17.DebugPtr != (UPCGSettings *)0x0) {
        local_618.DebugPtr = TVar17.DebugPtr;
        pUVar15 = UPCGSplineToSegmentSettings::StaticClass();
        iVar13 = (int)pUVar15->_padding_;
        if ((iVar13 <= *(int *)((TVar17.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar17.DebugPtr)->_padding_ + 0x30) + (longlong)iVar13 * 8) ==
            &pUVar15->_padding_)) goto LAB_1499ed04b;
      }
    }
    local_618.DebugPtr = (UPCGSettings *)0x0;
    TVar17.DebugPtr = (UPCGSettings *)0x0;
  }
  else {
    pUVar15 = UPCGSplineToSegmentSettings::StaticClass();
    bVar10 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar15);
    if (bVar10) {
      local_618 = (TObjectPtr<UPCGSettings>_u_0)(param_1->SettingsWithOverride).field0_0x0.DebugPtr;
      TVar17 = local_618;
    }
    else {
      local_618.DebugPtr = (UPCGSettings *)0x0;
      TVar17.DebugPtr = (UPCGSettings *)0x0;
    }
  }
LAB_1499ed04b:
  if ((TVar17.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Grammar\\PCGSplineToSegment.cpp"
                          ,0x52,L""), bVar10)) {
    pcVar2 = (code *)swi(3);
    uVar11 = (*pcVar2)();
    return (bool)uVar11;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_5c8,&PCGPinConstants::DefaultInputLabel);
  dVar8 = __real_bff0000000000000;
  dVar7 = __real_3ff0000000000000;
  uVar27 = (ulonglong)local_5c8.ArrayNum;
  pFVar31 = &param_1->OutputData;
  pFVar30 = (FObjectPtr_u_0 *)(local_5c8.AllocatorInstance.Data + uVar27 * 0x78);
  local_600 = local_5c8.ArrayNum;
  local_628 = (FObjectPtr_u_0 *)local_5c8.AllocatorInstance.Data;
  local_610 = pFVar30;
  local_560 = pFVar31;
  do {
    while( true ) {
      if (local_5c8.ArrayNum != (uint)uVar27) {
        local_620[0] = 0;
        `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_620);
      }
      if (local_628 == pFVar30) {
        DestructItems<FPCGTaggedData,int>
                  ((FPCGTaggedData *)local_5c8.AllocatorInstance.Data,local_5c8.ArrayNum);
        if ((FPCGTaggedData *)local_5c8.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
          FMemory::Free(local_5c8.AllocatorInstance.Data);
        }
        if (bVar34) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        return true;
      }
      local_5f0 = (FObjectPtr_u_0)local_628->Handle;
      pFVar33 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending == false) break;
      if ((UPCGSpatialData *)local_5f0.Handle != (UPCGSpatialData *)0x0) {
        UE::GC::MarkAsReachable(local_5f0.Handle);
        break;
      }
LAB_1499edd55:
      uVar27 = (ulonglong)local_600;
      local_628 = local_628 + 0xf;
      param_1 = pFVar33;
    }
    if ((UPCGSpatialData *)local_5f0.Handle == (UPCGSpatialData *)0x0) goto LAB_1499edd55;
    pUVar15 = Z_Construct_UClass_UPCGSplineData_NoRegister();
    bVar10 = FObjectPtr::IsA((FObjectPtr *)&local_5f0,pUVar15);
    FVar9 = local_5f0;
    if ((!bVar10) || ((UPCGSpatialData *)local_5f0.Handle == (UPCGSpatialData *)0x0))
    goto LAB_1499edd55;
    this_02 = FPCGContext::NewPointData_AnyThread(param_1);
    UPCGSpatialData::InitializeFromData
              ((UPCGSpatialData *)this_02,(UPCGSpatialData *)FVar9.Handle,(UPCGMetadata *)0x0,true,
               true);
    local_61c = (**(code **)(*(longlong *)FVar9.Handle + 0x4a0))(FVar9.Handle);
    pFVar33 = local_608;
    if (0 < (int)local_61c) {
      bVar10 = false;
      local_5e8 = (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0;
      local_5b8 = (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0;
      local_5a8 = (FPCGMetadataAttribute<int> *)0x0;
      local_5d8 = (FPCGMetadataAttribute<int> *)0x0;
      local_5d0 = (FPCGMetadataAttribute<int> *)0x0;
      local_5e0 = (FPCGMetadataAttribute<double> *)0x0;
      local_5b0 = (FPCGMetadataAttribute<double> *)0x0;
      if ((char)local_618.DebugPtr[1]._padding_ != '\0') {
        local_428._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_428._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_428._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_5e8 = PCGSplineToSegment::CreateAttributeWithLog<UE::Math::TVector<double>_>
                              (PCGSplineToSegment::PreviousTangentAttributeName,false,
                               (UPCGMetadata *)this_02->_padding_,local_608,
                               (TVector<double> *)&local_428._s_0);
        local_408._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_408._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_408._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_5b8 = PCGSplineToSegment::CreateAttributeWithLog<UE::Math::TVector<double>_>
                              (PCGSplineToSegment::NextTangentAttributeName,false,
                               (UPCGMetadata *)this_02->_padding_,pFVar33,
                               (TVector<double> *)&local_408._s_0);
        pFVar30 = local_610;
        if ((local_5e8 == (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0) ||
           (local_5b8 == (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0))
        goto LAB_1499edd55;
        bVar10 = true;
      }
      pFVar33 = local_608;
      if (*(char *)((longlong)&local_618.DebugPtr[1]._padding_ + 1) != '\0') {
        local_5e0 = PCGSplineToSegment::CreateAttributeWithLog<double>
                              (PCGSplineToSegment::PreviousAngleAttributeName,true,
                               (UPCGMetadata *)this_02->_padding_,local_608,0.0);
        local_5b0 = PCGSplineToSegment::CreateAttributeWithLog<double>
                              (PCGSplineToSegment::NextAngleAttributeName,true,
                               (UPCGMetadata *)this_02->_padding_,pFVar33,0.0);
        pFVar30 = local_610;
        if ((local_5e0 == (FPCGMetadataAttribute<double> *)0x0) ||
           (local_5b0 == (FPCGMetadataAttribute<double> *)0x0)) goto LAB_1499edd55;
        bVar10 = true;
      }
      pFVar33 = local_608;
      uVar32 = 0;
      if (*(char *)((longlong)&local_618.DebugPtr[1]._padding_ + 2) != '\0') {
        local_5d8 = PCGSplineToSegment::CreateAttributeWithLog<int>
                              (PCGSplineToSegment::PreviousIndexAttributeName,false,
                               (UPCGMetadata *)this_02->_padding_,local_608,-1);
        local_5d0 = PCGSplineToSegment::CreateAttributeWithLog<int>
                              (PCGSplineToSegment::NextIndexAttributeName,false,
                               (UPCGMetadata *)this_02->_padding_,pFVar33,0);
        local_5a8 = PCGSplineToSegment::CreateAttributeWithLog<int>
                              (PCGSplineToSegment::SegmentIndexAttributeName,false,
                               (UPCGMetadata *)this_02->_padding_,pFVar33,0);
        pFVar30 = local_610;
        if (((local_5d8 == (FPCGMetadataAttribute<int> *)0x0) ||
            (local_5d0 == (FPCGMetadataAttribute<int> *)0x0)) ||
           (local_5a8 == (FPCGMetadataAttribute<int> *)0x0)) goto LAB_1499edd55;
        bVar10 = true;
      }
      (**(code **)(this_02->_padding_ + 0x490))(this_02,local_61c);
      (**(code **)(this_02->_padding_ + 0x498))(this_02,0xcd);
      FPCGPointValueRanges::FPCGPointValueRanges(&local_2e8,this_02,false);
      local_5a0.Data = (FScriptContainerElement *)0x0;
      local_598 = 0;
      if ((int)local_61c < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_61c);
      }
      if (0 < (int)local_61c) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,local_61c,&local_5a0,0,(int *)((longlong)&local_598 + 4));
      }
      cVar1 = FVar9.Handle[9].field_0x24;
      dVar5 = 0.0;
      dVar6 = 0.0;
      dVar35 = 0.0;
      uVar29 = 0;
      if (0 < (int)local_61c) {
        do {
          this_05 = &FVar9.Handle[6].field_0x20;
          FPCGSplineStruct::GetLocationAtSplineInputKey
                    ((FPCGSplineStruct *)this_05,(TVector<double> *)&local_578._s_0,
                     (float)(int)uVar29,World);
          FPCGSplineStruct::GetLocationAtSplineInputKey
                    ((FPCGSplineStruct *)this_05,(TVector<double> *)&local_518._s_0,
                     (float)(int)(uVar29 + 1),World);
          pTVar19 = FPCGSplineStruct::GetQuaternionAtSplineInputKey
                              ((FPCGSplineStruct *)this_05,&local_328,(float)(int)uVar29,World);
          local_3a0 = dVar7;
          local_3e8._s_0.X = 0.0;
          local_3e8._s_0.Y = 0.0;
          local_3e8._s_0.Z = dVar7;
          local_3b0 = 0;
          uStack_3a8 = 0;
          UE::Math::TQuat<double>::RotateVector
                    (pTVar19,&local_380,(TVector<double> *)&local_3e8._s_0);
          (**(code **)(*(longlong *)FVar9.Handle + 0x500))(FVar9.Handle,uVar29,&local_548);
          dVar38 = (double)CONCAT44(local_530._12_4_,local_530._8_4_);
          dVar36 = (double)CONCAT44(local_548._12_4_,local_548._8_4_);
          dVar4 = (double)CONCAT44(local_548._4_4_,local_548._0_4_);
          dVar39 = (double)CONCAT44(local_530._4_4_,local_530._0_4_);
          dVar37 = dVar38 * (double)CONCAT44(local_548._4_4_,local_548._0_4_) -
                   (double)CONCAT44(local_530._4_4_,local_530._0_4_) * dVar36;
          local_358 = local_548._s_0.Z;
          dVar35 = dVar36 * dVar36 + (double)CONCAT44(local_548._4_4_,local_548._0_4_) * dVar4;
          if (__real_3e45798ee0000000 < dVar35) {
            local_458 = dVar7 / SQRT(dVar35);
            dVar4 = dVar4 * local_458;
            dVar36 = dVar36 * local_458;
          }
          dVar35 = dVar38 * dVar38 + (double)CONCAT44(local_530._4_4_,local_530._0_4_) * dVar39;
          if (__real_3e45798ee0000000 < dVar35) {
            local_450 = dVar7 / SQRT(dVar35);
            dVar39 = dVar39 * local_450;
            dVar38 = dVar38 * local_450;
          }
          dVar39 = dVar38 * dVar36 + dVar39 * dVar4 + 0.0;
          dVar35 = dVar8;
          if ((dVar8 <= dVar39) && (dVar35 = dVar39, dVar7 <= dVar39)) {
            dVar35 = dVar7;
          }
          dVar35 = acos(dVar35);
          if (dVar37 <= 0.0) {
            if (0.0 <= dVar37) {
              uVar41 = 0;
              uVar42 = 0;
            }
            else {
              uVar41 = (undefined4)__real_c04ca5dc1a63c1f8;
              uVar42 = (undefined4)((ulonglong)__real_c04ca5dc1a63c1f8 >> 0x20);
            }
          }
          else {
            uVar41 = (undefined4)__real_404ca5dc1a63c1f8;
            uVar42 = (undefined4)((ulonglong)__real_404ca5dc1a63c1f8 >> 0x20);
          }
          dVar35 = (double)CONCAT44(uVar42,uVar41) * dVar35;
          if (bVar10) {
            this_01 = (UPCGMetadata *)this_02->_padding_;
            uVar14 = uVar32;
            if ((int)uVar29 < local_2e8.MetadataEntryRange.NumElements) {
              uVar14 = ~uVar29 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < NumElements)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                    ,0x8b,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar12)) {
              pcVar2 = (code *)swi(3);
              uVar11 = (*pcVar2)();
              return (bool)uVar11;
            }
            if (uVar29 == (int)uVar29 % local_2e8.MetadataEntryRange.ElementView.NumElements) {
              plVar28 = (long64 *)
                        ((longlong)local_2e8.MetadataEntryRange.ElementView.BytesBetweenElements *
                         (longlong)
                         ((int)uVar29 % local_2e8.MetadataEntryRange.ElementView.NumElements) +
                        (longlong)local_2e8.MetadataEntryRange.ElementView.FirstElementPtr);
            }
            else {
              plVar28 = &local_2e8.MetadataEntryRange.StubValue;
            }
            UPCGMetadata::InitializeOnSet
                      (this_01,plVar28,-1,(UPCGMetadata *)0x0,-1,(UPCGMetadata *)0x0);
          }
          dVar37 = local_518._s_0.Y - local_578._s_0.Y;
          dVar39 = local_518._s_0.X - local_578._s_0.X;
          dVar36 = local_518._s_0.Z - local_578._s_0.Z;
          dVar4 = dVar37 * __real_3fe0000000000000;
          uVar14 = uVar32;
          if ((int)uVar29 < local_2e8.TransformRange.NumElements) {
            uVar14 = ~uVar29 >> 0x1f;
          }
          dVar38 = dVar39 * __real_3fe0000000000000;
          dVar40 = dVar36 * __real_3fe0000000000000;
          auVar43._0_8_ =
               (dVar37 * dVar37 + dVar39 * dVar39 + dVar36 * dVar36) * __real_3fd0000000000000;
          auVar43._8_8_ = 0;
          auVar43 = sqrtpd(ZEXT816(0),auVar43);
          local_590._s_0.X = dVar38;
          local_590._s_0.Y = dVar4;
          local_590._s_0.Z = dVar40;
          if ((uVar14 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < NumElements)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                  ,0x8b,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar12)) {
            pcVar2 = (code *)swi(3);
            uVar11 = (*pcVar2)();
            return (bool)uVar11;
          }
          if (uVar29 == (int)uVar29 % local_2e8.TransformRange.ElementView.NumElements) {
            pTVar25 = (TTransform<double> *)
                      ((longlong)
                       ((local_2e8.TransformRange.ElementView.FirstElementPtr)->Rotation).XY.
                       m128d_f64 +
                      (longlong)local_2e8.TransformRange.ElementView.BytesBetweenElements *
                      (longlong)((int)uVar29 % local_2e8.TransformRange.ElementView.NumElements));
          }
          else {
            pTVar25 = &local_2e8.TransformRange.StubValue;
          }
          uVar41 = SUB84(dVar4 + local_578._s_0.Y,0);
          uVar42 = (undefined4)((ulonglong)(dVar4 + local_578._s_0.Y) >> 0x20);
          local_388 = dVar40 + local_578._s_0.Z;
          auVar3._8_4_ = uVar41;
          auVar3._0_8_ = dVar38 + local_578._s_0.X;
          auVar3._12_4_ = uVar42;
          *(undefined1 (*) [16])(pTVar25->Translation).XY.m128d_f64 = auVar3;
          (pTVar25->Translation).ZW.m128d_f64[0] = local_388;
          (pTVar25->Translation).ZW.m128d_f64[1] = 0.0;
          local_398._8_4_ = uVar41;
          local_398._0_8_ = dVar38 + local_578._s_0.X;
          local_398._12_4_ = uVar42;
          uVar14 = uVar32;
          if ((int)uVar29 < local_2e8.TransformRange.NumElements) {
            uVar14 = ~uVar29 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < NumElements)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                  ,0x8b,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar12)) {
            pcVar2 = (code *)swi(3);
            uVar11 = (*pcVar2)();
            return (bool)uVar11;
          }
          if (uVar29 == (int)uVar29 % local_2e8.TransformRange.ElementView.NumElements) {
            pTVar25 = (TTransform<double> *)
                      ((longlong)
                       ((local_2e8.TransformRange.ElementView.FirstElementPtr)->Rotation).XY.
                       m128d_f64 +
                      (longlong)local_2e8.TransformRange.ElementView.BytesBetweenElements *
                      (longlong)((int)uVar29 % local_2e8.TransformRange.ElementView.NumElements));
          }
          else {
            pTVar25 = &local_2e8.TransformRange.StubValue;
          }
          this_03 = UE::Math::TRotationMatrix<double>::MakeFromXZ
                              (&local_158,(TVector<double> *)&local_590._s_0,&local_380);
          pTVar19 = UE::Math::TMatrix<double>::ToQuat(this_03,&local_308);
          dVar39 = pTVar19->Y;
          dVar4 = pTVar19->Z;
          dVar36 = pTVar19->W;
          (pTVar25->Rotation).XY.m128d_f64[0] = pTVar19->X;
          (pTVar25->Rotation).XY.m128d_f64[1] = dVar39;
          (pTVar25->Rotation).ZW.m128d_f64[0] = dVar4;
          (pTVar25->Rotation).ZW.m128d_f64[1] = dVar36;
          local_500 = (double)CONCAT44(auVar43._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_,
                                       auVar43._0_4_ ^ (uint)__xmm_80000000000000008000000000000000)
          ;
          uVar14 = uVar32;
          if ((int)uVar29 < local_2e8.BoundsMinRange.NumElements) {
            uVar14 = ~uVar29 >> 0x1f;
          }
          uStack_4f8 = 0;
          uStack_4f0 = 0;
          if ((uVar14 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < NumElements)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                  ,0x8b,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar12)) {
            pcVar2 = (code *)swi(3);
            uVar11 = (*pcVar2)();
            return (bool)uVar11;
          }
          if (uVar29 == (int)uVar29 % local_2e8.BoundsMinRange.ElementView.NumElements) {
            pTVar24 = (TVector<double>_u_0 *)
                      ((longlong)&(local_2e8.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0
                      + (longlong)local_2e8.BoundsMinRange.ElementView.BytesBetweenElements *
                        (longlong)((int)uVar29 % local_2e8.BoundsMinRange.ElementView.NumElements));
          }
          else {
            pTVar24 = &local_2e8.BoundsMinRange.StubValue.field0_0x0;
          }
          (((TVector<double>_u_0 *)&(pTVar24->_s_0).X)->_s_0).X = local_500;
          *(undefined8 *)((longlong)pTVar24 + 8) = uStack_4f8;
          *(undefined8 *)((longlong)pTVar24 + 0x10) = uStack_4f0;
          uStack_4e0 = ___xmm_3ff00000000000003ff0000000000000;
          uStack_4d8 = _UNK_150689688;
          uVar14 = uVar32;
          if ((int)uVar29 < local_2e8.BoundsMaxRange.NumElements) {
            uVar14 = ~uVar29 >> 0x1f;
          }
          local_4e8 = auVar43._0_8_;
          if ((uVar14 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < NumElements)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                  ,0x8b,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar12)) {
            pcVar2 = (code *)swi(3);
            uVar11 = (*pcVar2)();
            return (bool)uVar11;
          }
          if (uVar29 == (int)uVar29 % local_2e8.BoundsMaxRange.ElementView.NumElements) {
            pTVar24 = (TVector<double>_u_0 *)
                      ((longlong)&(local_2e8.BoundsMaxRange.ElementView.FirstElementPtr)->field0_0x0
                      + (longlong)local_2e8.BoundsMaxRange.ElementView.BytesBetweenElements *
                        (longlong)((int)uVar29 % local_2e8.BoundsMaxRange.ElementView.NumElements));
          }
          else {
            pTVar24 = &local_2e8.BoundsMaxRange.StubValue.field0_0x0;
          }
          (((TVector<double>_u_0 *)&(pTVar24->_s_0).X)->_s_0).X = local_4e8;
          *(undefined8 *)((longlong)pTVar24 + 8) = uStack_4e0;
          *(undefined8 *)((longlong)pTVar24 + 0x10) = uStack_4d8;
          uVar14 = uVar32;
          if ((int)uVar29 < local_2e8.TransformRange.NumElements) {
            uVar14 = ~uVar29 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < NumElements)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                  ,0x8b,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar12)) {
            pcVar2 = (code *)swi(3);
            uVar11 = (*pcVar2)();
            return (bool)uVar11;
          }
          if (uVar29 == (int)uVar29 % local_2e8.TransformRange.ElementView.NumElements) {
            pTVar25 = (TTransform<double> *)
                      ((longlong)
                       ((local_2e8.TransformRange.ElementView.FirstElementPtr)->Rotation).XY.
                       m128d_f64 +
                      (longlong)local_2e8.TransformRange.ElementView.BytesBetweenElements *
                      (longlong)((int)uVar29 % local_2e8.TransformRange.ElementView.NumElements));
          }
          else {
            pTVar25 = &local_2e8.TransformRange.StubValue;
          }
          local_3c8._s_0.X = (pTVar25->Translation).XY.m128d_f64[0];
          local_3c8._s_0.Y = (pTVar25->Translation).XY.m128d_f64[1];
          local_3c8._s_0.Z = (pTVar25->Translation).ZW.m128d_f64[0];
          iVar13 = PCGHelpers::ComputeSeedFromPosition((TVector<double> *)&local_3c8._s_0);
          uVar14 = uVar32;
          if ((int)uVar29 < local_2e8.SeedRange.NumElements) {
            uVar14 = ~uVar29 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < NumElements)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                  ,0x8b,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar12)) {
            pcVar2 = (code *)swi(3);
            uVar11 = (*pcVar2)();
            return (bool)uVar11;
          }
          if (uVar29 == (int)uVar29 % local_2e8.SeedRange.ElementView.NumElements) {
            piVar26 = (int *)((longlong)local_2e8.SeedRange.ElementView.BytesBetweenElements *
                              (longlong)((int)uVar29 % local_2e8.SeedRange.ElementView.NumElements)
                             + (longlong)local_2e8.SeedRange.ElementView.FirstElementPtr);
          }
          else {
            piVar26 = &local_2e8.SeedRange.StubValue;
          }
          *piVar26 = iVar13;
          local_4a8 = &local_61c;
          local_4a0 = &local_2e8;
          local_498 = &local_5e8;
          local_490 = &local_5b8;
          local_488 = &local_5e0;
          local_480 = &local_5b0;
          local_478 = &local_5d8;
          local_470 = &local_5d0;
          local_468 = &local_5a8;
          dVar39 = dVar35;
          if ((0 < (int)uVar29) && (dVar5 = dVar5 + dVar35, dVar39 = dVar6, bVar10)) {
            `FPCGSplineToSegmentElement::ExecuteInternal'::__l46::<lambda_1>::operator()
                      (&local_4a8,uVar29,(TVector<double> *)&local_548._s_0,dVar35);
          }
          if (((cVar1 != '\0') && (bVar10)) && (uVar29 == local_61c - 1)) {
            `FPCGSplineToSegmentElement::ExecuteInternal'::__l46::<lambda_1>::operator()
                      (&local_4a8,0,(TVector<double> *)&local_530._s_0,dVar39);
          }
          uVar29 = uVar29 + 1;
          pFVar31 = local_560;
          dVar6 = dVar39;
          dVar35 = dVar5;
        } while ((int)uVar29 < (int)local_61c);
      }
      pFVar33 = local_608;
      if (*(char *)((longlong)&local_618.DebugPtr[1]._padding_ + 3) != '\0') {
        local_558[0] = PCGSplineToSegment::ClockwiseAttributeName;
        local_4c8 = PCGSplineToSegment::ClockwiseAttributeName;
        local_4c0 = PCGMetadataDomainID::Default;
        local_630[0] = (<lambda_1>)(dVar35 <= 0.0);
        this_04 = UPCGMetadata::FindOrCreateMetadataDomain
                            ((UPCGMetadata *)this_02->_padding_,&local_4c0);
        if ((this_04 == (FPCGMetadataDomain *)0x0) ||
           (pFVar20 = FPCGMetadataDomain::FindOrCreateAttribute<bool>
                                (this_04,local_4c8,(bool *)local_630,false,false,true),
           pFVar33 = local_608, pFVar20 == (FPCGMetadataAttribute<bool> *)0x0)) {
          pFVar21 = FText::FromName(&local_348,local_558);
          pFVar22 = FText::AsLocalizable_Advanced_LocText
                              (&local_448,L"PCGSegmentSplineElement",L"FailCreateAttribute",
                               L"Failed to create attribute {0}.");
          pFVar23 = FTextFormat::FTextFormat(&local_338,pFVar22,Default);
          pFVar21 = FText::Format<FText>(&local_438,pFVar23,pFVar21);
          pFVar33 = local_608;
          PCGLog::LogErrorOnGraph(pFVar21,local_608);
          if (local_438.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_438.TextData.Reference + 0x10))();
          }
          if (local_448.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_448.TextData.Reference + 0x10))();
          }
        }
      }
      iVar13 = (pFVar31->TaggedData).ArrayNum;
      piVar26 = &(pFVar31->TaggedData).ArrayMax;
      if (iVar13 == *piVar26) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x878,(ForAnyElementType *)pFVar31,piVar26);
      }
      (pFVar31->TaggedData).ArrayNum = iVar13 + 1;
      pFVar18 = FPCGTaggedData::FPCGTaggedData
                          ((FPCGTaggedData *)
                           ((pFVar31->TaggedData).AllocatorInstance.Data + (longlong)iVar13 * 0x78),
                           (FPCGTaggedData *)local_628);
      FPCGDataPtrWrapper::operator=(&pFVar18->Data,(UPCGData *)this_02);
      pFVar30 = local_610;
      if (local_5a0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5a0.Data);
        pFVar30 = local_610;
      }
      goto LAB_1499edd55;
    }
    iVar13 = (pFVar31->TaggedData).ArrayNum;
    piVar26 = &(pFVar31->TaggedData).ArrayMax;
    if (iVar13 == *piVar26) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x878,(ForAnyElementType *)pFVar31,piVar26);
    }
    (pFVar31->TaggedData).ArrayNum = iVar13 + 1;
    pFVar18 = FPCGTaggedData::FPCGTaggedData
                        ((FPCGTaggedData *)
                         ((pFVar31->TaggedData).AllocatorInstance.Data + (longlong)iVar13 * 0x78),
                         (FPCGTaggedData *)local_628);
    FPCGDataPtrWrapper::operator=(&pFVar18->Data,(UPCGData *)this_02);
    uVar27 = (ulonglong)local_600;
    local_628 = local_628 + 0xf;
  } while( true );
}

// ExecutionLoopMode @ 1499f1a80

EPCGElementExecutionLoopMode __thiscall
FPCGSplineToSegmentElement::ExecutionLoopMode
          (FPCGSplineToSegmentElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

