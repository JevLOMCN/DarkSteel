// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// ExecuteInternal @ 149b6e640

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
FPCGConvexHull2DElement::ExecuteInternal(FPCGConvexHull2DElement *this,FPCGContext *param_1)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  double dVar3;
  int iVar4;
  UPCGNode *this_00;
  long64 lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  char cVar18;
  FObjectPtr_u_0 FVar19;
  bool bVar20;
  undefined1 uVar21;
  int iVar22;
  int iVar23;
  undefined4 uVar24;
  UClass *pUVar25;
  UPCGSettings *pUVar26;
  TObjectPtr<UPCGSettings>_u_0 TVar27;
  FPCGTaggedData *pFVar28;
  UPCGBasePointData *this_01;
  TTransform<double> *pTVar29;
  float *pfVar30;
  TVector<double> *pTVar31;
  TVector4<double> *pTVar32;
  int *piVar33;
  long64 *plVar34;
  FText *this_02;
  FString *pFVar35;
  ulonglong uVar36;
  longlong lVar37;
  wchar_t *pwVar38;
  int iVar39;
  FObjectPtr_u_0 *pFVar40;
  FPCGDataCollection *pFVar41;
  ForAnyElementType FVar42;
  undefined1 auStack_518 [32];
  FObjectPtr_u_0 *local_4f8;
  FObjectPtr_u_0 *local_4f0;
  longlong local_4e8;
  longlong local_4e0;
  undefined8 local_4d8;
  char local_4c8;
  <lambda_1> local_4c7;
  undefined1 local_4c6 [6];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_4c0;
  FObjectPtr_u_0 *local_4b0;
  TArray<int,TSizedDefaultAllocator<32>_> local_4a8;
  UPCGBasePointData *local_498;
  uint local_490;
  TObjectPtr<UPCGSettings>_u_0 local_488;
  FObjectPtr_u_0 local_480;
  FObjectPtr_u_0 *local_478;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_470;
  FPCGDataCollection *local_460;
  FPCGContext *local_458;
  FObjectPtr_u_0 local_450;
  FObjectPtr_u_0 FStack_448;
  double local_440;
  FPCGTaggedData *local_438;
  FString local_430;
  FString local_420;
  FText local_410;
  FPCGInitializeFromDataParams local_3f8;
  FPCGPointValueRanges local_3b8;
  FConstPCGPointValueRanges local_228;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_518;
  local_498 = (UPCGBasePointData *)((ulonglong)local_498 & 0xffffffff00000000);
  local_458 = param_1;
  if (CpuChannel->Enabled < 0) {
    local_4c8 = '\0';
  }
  else {
    local_4c8 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId22,"FPCGConvexHullElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGConvexHull2D.cpp"
               ,0x16);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId22);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("Context",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGConvexHull2D.cpp"
                          ,0x18,L""), bVar20)) {
    pcVar6 = (code *)swi(3);
    uVar21 = (*pcVar6)();
    return (bool)uVar21;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr != (UPCGSettings *)0x0) {
    pUVar25 = UPCGConvexHull2DSettings::StaticClass();
    bVar20 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar25);
    if (bVar20) {
      TVar27.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
    else {
      TVar27.DebugPtr = (UPCGSettings *)0x0;
    }
    goto LAB_149b6e7b1;
  }
  this_00 = param_1->Node;
  if ((this_00 == (UPCGNode *)0x0) ||
     (pUVar26 = UPCGNode::GetSettings(this_00), pUVar26 == (UPCGSettings *)0x0)) {
    pFVar28 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
              FindByPredicate<_FPCGDataCollection::GetSettings<UPCGConvexHull2DSettings>_::__l2::<lambda_1>_>
                        (&(param_1->InputData).TaggedData,local_4c7);
    if (pFVar28 != (FPCGTaggedData *)0x0) {
      local_488.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar28->Data).Data.field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (local_488.DebugPtr == (UPCGSettings *)0x0) goto LAB_149b6e7af;
        UE::GC::MarkAsReachable((UObject *)local_488.DebugPtr);
      }
      if (local_488.DebugPtr != (UPCGSettings *)0x0) {
        pUVar25 = UPCGConvexHull2DSettings::StaticClass();
        bVar20 = FObjectPtr::IsA(&local_488.ObjectPtr,pUVar25);
        TVar27 = local_488;
        if (bVar20) goto LAB_149b6e7b1;
      }
    }
  }
  else {
    pUVar26 = UPCGNode::GetSettings(this_00);
    TVar27.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar26);
    if (TVar27.DebugPtr != (UPCGSettings *)0x0) {
      pUVar25 = UPCGConvexHull2DSettings::StaticClass();
      iVar23 = (int)pUVar25->_padding_;
      if ((iVar23 <= *(int *)((TVar27.DebugPtr)->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)((TVar27.DebugPtr)->_padding_ + 0x30) + (longlong)iVar23 * 8) ==
          &pUVar25->_padding_)) goto LAB_149b6e7b1;
    }
  }
LAB_149b6e7af:
  TVar27.DebugPtr = (UPCGSettings *)0x0;
LAB_149b6e7b1:
  if ((TVar27.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGConvexHull2D.cpp"
                          ,0x1b,L""), bVar20)) {
    pcVar6 = (code *)swi(3);
    uVar21 = (*pcVar6)();
    return (bool)uVar21;
  }
  pFVar41 = &param_1->OutputData;
  local_460 = pFVar41;
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_470,&PCGPinConstants::DefaultInputLabel);
  uVar36 = (ulonglong)local_470.ArrayNum;
  local_490 = local_470.ArrayNum;
  local_4b0 = (FObjectPtr_u_0 *)(local_470.AllocatorInstance.Data + uVar36 * 0x78);
  pFVar40 = local_4b0;
  FVar42.Data = local_470.AllocatorInstance.Data;
  do {
    while( true ) {
      local_478 = (FObjectPtr_u_0 *)FVar42.Data;
      if (local_470.ArrayNum != (uint)uVar36) {
        local_4c6[0] = 0;
        `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_4c6);
      }
      if ((FObjectPtr_u_0 *)FVar42.Data == pFVar40) {
        DestructItems<FPCGTaggedData,int>
                  ((FPCGTaggedData *)local_470.AllocatorInstance.Data,local_470.ArrayNum);
        cVar18 = local_4c8;
        if ((FObjectPtr_u_0 *)local_470.AllocatorInstance.Data != (FObjectPtr_u_0 *)0x0) {
          FMemory::Free(local_470.AllocatorInstance.Data);
        }
        if (cVar18 != '\0') {
          FCpuProfilerTrace::OutputEndEvent();
        }
        return true;
      }
      local_480 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)FVar42.Data;
      if (UE::GC::GIsIncrementalReachabilityPending != false) break;
LAB_149b6e857:
      if ((UPCGBasePointData *)local_480.Handle == (UPCGBasePointData *)0x0) goto LAB_149b6eda3;
      pUVar25 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
      bVar20 = FObjectPtr::IsA((FObjectPtr *)&local_480,pUVar25);
      FVar19 = local_480;
      if ((!bVar20) || ((UPCGBasePointData *)local_480.Handle == (UPCGBasePointData *)0x0))
      goto LAB_149b6eda3;
      local_4c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_4c0.ArrayNum = 0;
      local_4c0.ArrayMax = 0;
      local_4a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_4a8.ArrayNum = 0;
      local_4a8.ArrayMax = 0;
      FConstPCGPointValueRanges::FConstPCGPointValueRanges
                (&local_228,(UPCGBasePointData *)local_480.Handle);
      iVar23 = local_228.TransformRange.NumElements;
      for (iVar39 = 0; iVar39 != iVar23; iVar39 = iVar39 + 1) {
        lVar37 = (longlong)(iVar39 % local_228.TransformRange.ElementView.NumElements) *
                 (longlong)local_228.TransformRange.ElementView.BytesBetweenElements;
        pFVar40 = (FObjectPtr_u_0 *)
                  ((longlong)
                   ((local_228.TransformRange.ElementView.FirstElementPtr)->Translation).XY.
                   m128d_f64 + lVar37);
        local_450 = *pFVar40;
        FStack_448 = pFVar40[1];
        local_440 = *(double *)
                     ((longlong)
                      ((local_228.TransformRange.ElementView.FirstElementPtr)->Translation).ZW.
                      m128d_f64 + lVar37);
        if (local_4c0.AllocatorInstance.Data <= &local_450) {
          if (&local_450 <
              (FObjectPtr_u_0 *)
              (local_4c0.AllocatorInstance.Data + (longlong)local_4c0.ArrayMax * 0x18)) {
            local_4e0 = (longlong)local_4c0.ArrayNum;
            local_4d8 = 0x18;
            local_4f8 = &local_450;
            local_4f0 = (FObjectPtr_u_0 *)local_4c0.AllocatorInstance.Data;
            local_4e8 = (longlong)local_4c0.ArrayMax;
            bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar20) {
              pcVar6 = (code *)swi(3);
              uVar21 = (*pcVar6)();
              return (bool)uVar21;
            }
          }
        }
        iVar22 = local_4c0.ArrayNum;
        if (local_4c0.ArrayNum == local_4c0.ArrayMax) {
          iVar22 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&local_4c0.AllocatorInstance,&local_4c0.ArrayMax);
        }
        local_4c0.ArrayNum = iVar22 + 1;
        *(FObjectPtr_u_0 *)(local_4c0.AllocatorInstance.Data + (longlong)iVar22 * 0x18) = local_450;
        ((FObjectPtr_u_0 *)(local_4c0.AllocatorInstance.Data + (longlong)iVar22 * 0x18))[1] =
             FStack_448;
        *(double *)(local_4c0.AllocatorInstance.Data + (longlong)iVar22 * 0x18 + 0x10) = local_440;
      }
      ConvexHull2D::ComputeConvexHull<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>
                (&local_4c0,&local_4a8);
      pFVar40 = (FObjectPtr_u_0 *)(pFVar41->TaggedData).AllocatorInstance.Data;
      if ((pFVar40 <= FVar42.Data) &&
         (lVar37 = (longlong)(pFVar41->TaggedData).ArrayMax, FVar42.Data < pFVar40 + lVar37 * 0xf))
      {
        local_4e0 = (longlong)(pFVar41->TaggedData).ArrayNum;
        local_4d8 = 0x78;
        local_4f8 = (FObjectPtr_u_0 *)FVar42.Data;
        local_4f0 = pFVar40;
        local_4e8 = lVar37;
        bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar20) {
          pcVar6 = (code *)swi(3);
          uVar21 = (*pcVar6)();
          return (bool)uVar21;
        }
      }
      iVar23 = (pFVar41->TaggedData).ArrayNum;
      piVar33 = &(pFVar41->TaggedData).ArrayMax;
      if (iVar23 == *piVar33) {
        iVar23 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x878,(ForAnyElementType *)pFVar41,piVar33);
      }
      (pFVar41->TaggedData).ArrayNum = iVar23 + 1;
      local_438 = FPCGTaggedData::FPCGTaggedData
                            ((FPCGTaggedData *)
                             ((pFVar41->TaggedData).AllocatorInstance.Data + (longlong)iVar23 * 0x78
                             ),(FPCGTaggedData *)FVar42.Data);
      this_01 = FPCGContext::NewPointData_AnyThread(param_1);
      local_498 = this_01;
      FPCGInitializeFromDataParams::FPCGInitializeFromDataParams
                (&local_3f8,(UPCGSpatialData *)FVar19.Handle);
      local_3f8.bInheritSpatialData = false;
      UPCGSpatialData::InitializeFromDataWithParams((UPCGSpatialData *)this_01,&local_3f8);
      (**(code **)(this_01->_padding_ + 0x490))(this_01,local_4a8._8_8_ & 0xffffffff);
      pcVar6 = *(code **)(this_01->_padding_ + 0x498);
      uVar24 = (**(code **)(*(longlong *)FVar19.Handle + 0x640))(FVar19.Handle,1);
      (*pcVar6)(this_01,uVar24);
      (**(code **)(this_01->_padding_ + 0x4b0))(this_01,FVar19.Handle);
      FPCGPointValueRanges::FPCGPointValueRanges(&local_3b8,this_01,false);
      iVar39 = 0;
      iVar23 = local_4a8.ArrayNum;
      pFVar1 = local_4a8.AllocatorInstance.Data + (longlong)local_4a8.ArrayNum * 4;
      FVar42.Data = local_4a8.AllocatorInstance.Data;
      while( true ) {
        if (local_4a8.ArrayNum != iVar23) {
          local_4c7 = (<lambda_1>)0x0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_4c7)
          ;
        }
        pFVar28 = local_438;
        if (FVar42.Data == pFVar1) break;
        iVar22 = *(int *)FVar42.Data;
        if (local_3b8.TransformRange.NumElements != 0) {
          pTVar29 = TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
                    ::GetElement(&local_228.TransformRange,iVar22);
          dVar3 = (pTVar29->Rotation).XY.m128d_f64[0];
          dVar7 = (pTVar29->Rotation).XY.m128d_f64[1];
          dVar8 = (pTVar29->Rotation).ZW.m128d_f64[0];
          dVar9 = (pTVar29->Rotation).ZW.m128d_f64[1];
          dVar10 = (pTVar29->Translation).XY.m128d_f64[0];
          dVar11 = (pTVar29->Translation).XY.m128d_f64[1];
          dVar12 = (pTVar29->Translation).ZW.m128d_f64[0];
          dVar13 = (pTVar29->Translation).ZW.m128d_f64[1];
          dVar14 = (pTVar29->Scale3D).XY.m128d_f64[0];
          dVar15 = (pTVar29->Scale3D).XY.m128d_f64[1];
          dVar16 = (pTVar29->Scale3D).ZW.m128d_f64[0];
          dVar17 = (pTVar29->Scale3D).ZW.m128d_f64[1];
          pTVar29 = TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
                    ::operator[](&local_3b8.TransformRange,iVar39);
          (pTVar29->Rotation).XY.m128d_f64[0] = dVar3;
          (pTVar29->Rotation).XY.m128d_f64[1] = dVar7;
          (pTVar29->Rotation).ZW.m128d_f64[0] = dVar8;
          (pTVar29->Rotation).ZW.m128d_f64[1] = dVar9;
          (pTVar29->Translation).XY.m128d_f64[0] = dVar10;
          (pTVar29->Translation).XY.m128d_f64[1] = dVar11;
          (pTVar29->Translation).ZW.m128d_f64[0] = dVar12;
          (pTVar29->Translation).ZW.m128d_f64[1] = dVar13;
          (pTVar29->Scale3D).XY.m128d_f64[0] = dVar14;
          (pTVar29->Scale3D).XY.m128d_f64[1] = dVar15;
          (pTVar29->Scale3D).ZW.m128d_f64[0] = dVar16;
          (pTVar29->Scale3D).ZW.m128d_f64[1] = dVar17;
        }
        if (local_3b8.DensityRange.NumElements != 0) {
          pfVar30 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                              (&local_228.DensityRange,iVar22);
          fVar2 = *pfVar30;
          pfVar30 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                              (&local_3b8.DensityRange,iVar39);
          *pfVar30 = fVar2;
        }
        if (local_3b8.SteepnessRange.NumElements != 0) {
          pfVar30 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                              (&local_228.SteepnessRange,iVar22);
          fVar2 = *pfVar30;
          pfVar30 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                              (&local_3b8.SteepnessRange,iVar39);
          *pfVar30 = fVar2;
        }
        if (local_3b8.BoundsMinRange.NumElements != 0) {
          pTVar31 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                    ::GetElement(&local_228.BoundsMinRange,iVar22);
          dVar7 = (pTVar31->field0_0x0)._s_0.X;
          dVar8 = (pTVar31->field0_0x0)._s_0.Y;
          dVar3 = (pTVar31->field0_0x0)._s_0.Z;
          pTVar31 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                    ::operator[](&local_3b8.BoundsMinRange,iVar39);
          (pTVar31->field0_0x0)._s_0.X = dVar7;
          (pTVar31->field0_0x0)._s_0.Y = dVar8;
          (pTVar31->field0_0x0)._s_0.Z = dVar3;
        }
        if (local_3b8.BoundsMaxRange.NumElements != 0) {
          pTVar31 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                    ::GetElement(&local_228.BoundsMaxRange,iVar22);
          dVar7 = (pTVar31->field0_0x0)._s_0.X;
          dVar8 = (pTVar31->field0_0x0)._s_0.Y;
          dVar3 = (pTVar31->field0_0x0)._s_0.Z;
          pTVar31 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                    ::operator[](&local_3b8.BoundsMaxRange,iVar39);
          (pTVar31->field0_0x0)._s_0.X = dVar7;
          (pTVar31->field0_0x0)._s_0.Y = dVar8;
          (pTVar31->field0_0x0)._s_0.Z = dVar3;
        }
        if (local_3b8.ColorRange.NumElements != 0) {
          pTVar32 = TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
                    ::GetElement(&local_228.ColorRange,iVar22);
          dVar3 = (pTVar32->field0_0x0)._s_0.X;
          dVar7 = (pTVar32->field0_0x0)._s_0.Y;
          dVar8 = (pTVar32->field0_0x0)._s_0.Z;
          dVar9 = (pTVar32->field0_0x0)._s_0.W;
          pTVar32 = TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_>
                    ::operator[](&local_3b8.ColorRange,iVar39);
          (pTVar32->field0_0x0)._s_0.X = dVar3;
          (pTVar32->field0_0x0)._s_0.Y = dVar7;
          (pTVar32->field0_0x0)._s_0.Z = dVar8;
          (pTVar32->field0_0x0)._s_0.W = dVar9;
        }
        if (local_3b8.SeedRange.NumElements != 0) {
          piVar33 = TPCGValueRange<int_const_,TStridedView<int_const_,int>_>::GetElement
                              (&local_228.SeedRange,iVar22);
          iVar4 = *piVar33;
          piVar33 = TPCGValueRange<int,TStridedView<int,int>_>::operator[]
                              (&local_3b8.SeedRange,iVar39);
          *piVar33 = iVar4;
        }
        if (local_3b8.MetadataEntryRange.NumElements != 0) {
          plVar34 = TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_>::GetElement
                              (&local_228.MetadataEntryRange,iVar22);
          lVar5 = *plVar34;
          plVar34 = TPCGValueRange<__int64,TStridedView<__int64,int>_>::operator[]
                              (&local_3b8.MetadataEntryRange,iVar39);
          *plVar34 = lVar5;
        }
        iVar39 = iVar39 + 1;
        FVar42.Data = FVar42.Data + 4;
      }
      FPCGDataPtrWrapper::operator=(&local_438->Data,(UPCGData *)local_498);
      pFVar28->Pin = PCGPinConstants::DefaultOutputLabel;
      DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
                ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
                 local_3f8.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data,
                 local_3f8.MetadataInitializeParams.DomainInitializeParams.ArrayNum);
      if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
          local_3f8.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data !=
          (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
        FMemory::Free(local_3f8.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.
                      Data);
      }
      if (local_3f8.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3f8.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data);
      }
      if (local_4a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4a8.AllocatorInstance.Data);
      }
      pFVar40 = local_4b0;
      pFVar41 = local_460;
      param_1 = local_458;
      FVar42.Data = (FScriptContainerElement *)local_478;
      if ((FObjectPtr_u_0 *)local_4c0.AllocatorInstance.Data != (FObjectPtr_u_0 *)0x0) {
        FMemory::Free(local_4c0.AllocatorInstance.Data);
        pFVar40 = local_4b0;
        pFVar41 = local_460;
        param_1 = local_458;
        FVar42.Data = (FScriptContainerElement *)local_478;
      }
LAB_149b6ed97:
      uVar36 = (ulonglong)local_490;
      FVar42.Data = FVar42.Data + 0x78;
    }
    if ((UPCGBasePointData *)local_480.Handle != (UPCGBasePointData *)0x0) {
      UE::GC::MarkAsReachable(local_480.Handle);
      goto LAB_149b6e857;
    }
LAB_149b6eda3:
    if ((byte)LogPCG._0_1_ < 2) goto LAB_149b6ed97;
    this_02 = FText::AsLocalizable_Advanced_LocText
                        (&local_410,L"PCGConvexHull2DElement",L"InputNotPointData",
                         L"Input is not a point data");
    pFVar35 = FText::ToString(this_02);
    if ((pFVar35->Data).ArrayNum == 0) {
      pwVar38 = L"";
    }
    else {
      pwVar38 = (wchar_t *)(pFVar35->Data).AllocatorInstance.Data;
    }
    FPCGContext::GetTaskName(param_1,&local_420);
    FPCGContext::GetExecutionSourceName(param_1,&local_430);
    local_4f8 = (FObjectPtr_u_0 *)pwVar38;
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_430.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_430.Data.AllocatorInstance.Data);
    }
    if (local_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_420.Data.AllocatorInstance.Data);
    }
    pFVar40 = local_4b0;
    if (local_410.TextData.Reference == (ITextData *)0x0) goto LAB_149b6ed97;
    (**(code **)((longlong)*local_410.TextData.Reference + 0x10))();
    uVar36 = (ulonglong)local_490;
    FVar42.Data = FVar42.Data + 0x78;
    pFVar40 = local_4b0;
  } while( true );
}

// ExecutionLoopMode @ 149b88ac0

EPCGElementExecutionLoopMode __thiscall
FPCGConvexHull2DElement::ExecutionLoopMode(FPCGConvexHull2DElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// SupportsBasePointDataInputs @ 149b98860

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
FPCGConvexHull2DElement::SupportsBasePointDataInputs
          (FPCGConvexHull2DElement *this,FPCGContext *param_1)

{
  return true;
}

