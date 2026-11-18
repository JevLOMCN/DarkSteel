// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 6

// operator() @ 149ad88d0

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
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
`FPCGClusterElement::ExecuteInternal'::__l2::<lambda_1>::operator()
          (void *this,
          TPCGTimeSlicedContext<PCGClusterElement::FExecState,PCGClusterElement::FClusteringData,FPCGContext>
          *param_1,FExecState *param_2,FClusteringData *param_3,uint param_4)

{
  undefined1 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  IPCGAttributeAccessor *this_00;
  IPCGAttributeAccessorKeys *pIVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined4 uVar22;
  undefined4 uVar23;
  undefined8 this_01;
  FScriptContainerElement *pFVar24;
  bool bVar25;
  undefined1 uVar26;
  int iVar27;
  int iVar28;
  longlong lVar29;
  UPCGBasePointData *pUVar30;
  UPCGMetadata *pUVar31;
  FPCGDataPtrWrapper *pFVar32;
  ForElementType<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian> FVar33
  ;
  TTransform<double> *pTVar34;
  int *piVar35;
  ForElementType<int> FVar36;
  uint uVar37;
  uint uVar38;
  double *pdVar39;
  FPCGAttributePropertySelector *this_02;
  ulonglong uVar40;
  ulonglong uVar41;
  uint uVar42;
  ForElementType<UE::Math::TVector<double>_> _Src;
  undefined1 auStackY_368 [32];
  undefined1 local_328 [8];
  ForAnyElementType local_320;
  int local_318;
  int local_314;
  undefined1 local_310 [24];
  FScriptContainerElement *local_2f8;
  int iStack_2f0;
  undefined4 uStack_2ec;
  ForElementType<int> local_2e8;
  uint uStack_2e0;
  bool bStack_2dc;
  undefined3 uStack_2db;
  TObjectPtr<UPCGMetadata>_u_0 local_2d8;
  TArrayView<int_const_,int> local_2c8;
  TArrayView<int_const_,int> local_2b8;
  FPCGPointValueRanges local_2a8;
  TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> local_118;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_368;
  local_2e8 = (ForElementType<int>)this;
  local_2d8 = (TObjectPtr<UPCGMetadata>_u_0)param_1;
  if ((((int)param_4 < 0) || ((param_1->PerIterationStateResultArray).ArrayNum <= (int)param_4)) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0 && Index < PerIterationStateResultArray.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\PCGTimeSlicedElementBase.h"
                          ,0x48,L""), bVar25)) {
    pcVar8 = (code *)swi(3);
    uVar26 = (*pcVar8)();
    return (bool)uVar26;
  }
  uVar37 = 0;
  if ((int)param_4 < (param_1->PerIterationStateResultArray).ArrayNum) {
    uVar37 = ~param_4 >> 0x1f;
  }
  if ((uVar37 == 0) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar25)) {
    pcVar8 = (code *)swi(3);
    uVar26 = (*pcVar8)();
    return (bool)uVar26;
  }
  if ((param_1->PerIterationStateResultArray).AllocatorInstance.Data[(int)param_4] !=
      (FScriptContainerElement)0x2) {
    bVar25 = (*param_2->ClusteringFunction)
                       ((FPCGContext *)param_1,param_3,*(int *)(*(longlong *)this + 0x110));
    if (!bVar25) {
      return bVar25;
    }
    if ((param_3->OutputData == (UPCGBasePointData *)0x0) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("ClusteringData.OutputData",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGClusterElement.cpp"
                            ,0x2ad,L""), bVar25)) {
      pcVar8 = (code *)swi(3);
      uVar26 = (*pcVar8)();
      return (bool)uVar26;
    }
    iVar27 = (int)param_1->_padding_;
    if (iVar27 == *(int *)((longlong)&param_1->_padding_ + 4)) {
      iVar27 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x878,(ForAnyElementType *)&param_1->_padding_,
                          (int *)((longlong)&param_1->_padding_ + 4));
    }
    *(int *)&param_1->_padding_ = iVar27 + 1;
    pFVar32 = (FPCGDataPtrWrapper *)((longlong)iVar27 * 0x78 + param_1->_padding_);
    pFVar32[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    pFVar32[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    pFVar32[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    pFVar32[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    pFVar32[6].WeakData.WeakPtr.ObjectIndex = 0x100;
    (pFVar32->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
    (pFVar32->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
    pFVar32[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    pFVar32[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    pFVar32[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    pFVar32[3].WeakData.WeakPtr.ObjectIndex = 0;
    pFVar32[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
    *(undefined4 *)&pFVar32[4].Data.field0_0x0 = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar32[4].Data.field0_0x0 + 4) = 0;
    pFVar32[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    pFVar32[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    *(undefined8 *)&pFVar32[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
    *(undefined4 *)((longlong)&pFVar32[7].Data.field0_0x0 + 4) = 0xffffffff;
    pFVar32[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
         (FObjectPtr_u_0)PCGPinConstants::DefaultOutputLabel;
    FPCGDataPtrWrapper::operator=(pFVar32,(UPCGData *)param_3->OutputData);
    local_2f8 = (param_3->PointToClusterAssignments).AllocatorInstance.Data;
    iStack_2f0 = (param_3->PointToClusterAssignments).ArrayNum;
    this_00 = (param_3->Accessor).Ptr;
    pIVar7 = (param_3->Keys).Ptr;
    if ((iStack_2f0 < 0) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar25)) {
      pcVar8 = (code *)swi(3);
      uVar26 = (*pcVar8)();
      return (bool)uVar26;
    }
    local_2c8._12_4_ = uStack_2ec;
    local_2c8.ArrayNum = iStack_2f0;
    local_2c8.DataPtr = (int *)local_2f8;
    IPCGAttributeAccessor::SetRange<int>(this_00,&local_2c8,0,pIVar7,StrictType);
    if (*(char *)(*(longlong *)this + 0x120) != '\0') {
      if (((param_3->Centroids).ArrayNum == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("!ClusteringData.Centroids.IsEmpty()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGClusterElement.cpp"
                              ,0x2b8,L""), bVar25)) {
        pcVar8 = (code *)swi(3);
        uVar26 = (*pcVar8)();
        return (bool)uVar26;
      }
      local_320.Data = (FScriptContainerElement *)0x0;
      local_318 = 0;
      local_314 = 0;
      if (*(int *)(*(longlong *)this + 200) == 1) {
        uVar37 = (param_3->EMData).Gaussians.ArrayNum;
        if ((int)uVar37 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar37);
        }
        if (0 < (int)uVar37) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,uVar37,&local_320,0,&local_314);
        }
        dVar5 = __real_3ff0000000000000;
        FVar33 = (param_3->EMData).Gaussians.AllocatorInstance.SecondaryData;
        iVar27 = (param_3->EMData).Gaussians.ArrayNum;
        if (FVar33 == (ForElementType<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian>
                       )0x0) {
          FVar33 = (ForElementType<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian>
                    )&param_3->EMData;
        }
        pdVar39 = (double *)((longlong)FVar33 + 8);
        iVar28 = local_318;
        while( true ) {
          if ((param_3->EMData).Gaussians.ArrayNum != iVar27) {
            local_328[0] = 0;
            `TCheckedPointerIterator<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_328);
            iVar28 = local_318;
          }
          if (pdVar39 + -1 == (double *)((longlong)iVar27 * 0x140 + (longlong)FVar33)) break;
          if (*(char *)(pdVar39 + 0x25) == '\0') {
            dVar17 = dVar5 / (param_3->EMData).ScalingFactor;
            dVar2 = pdVar39[-1];
            dVar3 = *pdVar39;
            dVar4 = pdVar39[1];
            if (iVar28 == local_314) {
              iVar28 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x818,&local_320,&local_314);
            }
            lVar29 = (longlong)iVar28;
            iVar28 = iVar28 + 1;
            *(double *)(local_320.Data + lVar29 * 0x18) = dVar17 * dVar2;
            *(double *)(local_320.Data + lVar29 * 0x18 + 8) = dVar17 * dVar3;
            *(double *)(local_320.Data + lVar29 * 0x18 + 0x10) = dVar17 * dVar4;
            local_318 = iVar28;
          }
          pdVar39 = pdVar39 + 0x28;
        }
      }
      else {
        _Src = (param_3->Centroids).AllocatorInstance.SecondaryData;
        local_318 = (param_3->Centroids).ArrayNum;
        lVar29 = (longlong)local_318;
        if (_Src == (ForElementType<UE::Math::TVector<double>_>)0x0) {
          _Src = (ForElementType<UE::Math::TVector<double>_>)&param_3->Centroids;
        }
        if (local_318 != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,local_318,0,&local_320,local_318,&local_314);
          memcpy(local_320.Data,(void *)_Src,lVar29 * 0x18);
        }
      }
      pUVar30 = FPCGContext::NewPointData_AnyThread((FPCGContext *)param_1);
      (**(code **)(pUVar30->_padding_ + 0x490))(pUVar30,local_318,1);
      (**(code **)(pUVar30->_padding_ + 0x548))(pUVar30,__real_3f800000);
      (**(code **)(pUVar30->_padding_ + 0x498))(pUVar30,0x41);
      FPCGPointValueRanges::FPCGPointValueRanges(&local_2a8,pUVar30,false);
      uVar37 = 0;
      if (0 < local_318) {
        local_2f8 = (FScriptContainerElement *)0x0;
        do {
          pFVar24 = local_2f8;
          uVar42 = ~uVar37 >> 0x1f;
          uVar38 = 0;
          if ((int)uVar37 < local_318) {
            uVar38 = uVar42;
          }
          if ((uVar38 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar8 = (code *)swi(3);
            uVar26 = (*pcVar8)();
            return (bool)uVar26;
          }
          fVar9 = GlobalVectorConstants::Float0001.m128_f32[0];
          fVar11 = GlobalVectorConstants::Float0001.m128_f32[1];
          fVar13 = GlobalVectorConstants::Float0001.m128_f32[2];
          fVar15 = GlobalVectorConstants::Float0001.m128_f32[3];
          uVar22 = *(undefined4 *)(pFVar24 + local_320.Data);
          uVar23 = *(undefined4 *)(pFVar24 + local_320.Data + 4);
          dVar5 = *(double *)(pFVar24 + 0x10 + local_320.Data);
          uVar6 = *(undefined8 *)(pFVar24 + 8 + local_320.Data);
          uVar38 = 0;
          if ((int)uVar37 < local_2a8.TransformRange.NumElements) {
            uVar38 = uVar42;
          }
          fVar10 = GlobalVectorConstants::Float1110.m128_f32[0];
          fVar12 = GlobalVectorConstants::Float1110.m128_f32[1];
          fVar14 = GlobalVectorConstants::Float1110.m128_f32[2];
          fVar16 = GlobalVectorConstants::Float1110.m128_f32[3];
          if ((uVar38 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < NumElements)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                  ,0x8b,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar25)) {
            pcVar8 = (code *)swi(3);
            uVar26 = (*pcVar8)();
            return (bool)uVar26;
          }
          if (uVar37 == (int)uVar37 % local_2a8.TransformRange.ElementView.NumElements) {
            pTVar34 = (TTransform<double> *)
                      ((longlong)
                       ((local_2a8.TransformRange.ElementView.FirstElementPtr)->Rotation).XY.
                       m128d_f64 +
                      (longlong)local_2a8.TransformRange.ElementView.BytesBetweenElements *
                      (longlong)((int)uVar37 % local_2a8.TransformRange.ElementView.NumElements));
          }
          else {
            pTVar34 = &local_2a8.TransformRange.StubValue;
          }
          auVar18._8_4_ = SUB84((double)fVar11,0);
          auVar18._0_8_ = (double)fVar9;
          auVar18._12_4_ = (int)((ulonglong)(double)fVar11 >> 0x20);
          *(undefined1 (*) [16])(pTVar34->Rotation).XY.m128d_f64 = auVar18;
          auVar19._8_4_ = SUB84((double)fVar15,0);
          auVar19._0_8_ = (double)fVar13;
          auVar19._12_4_ = (int)((ulonglong)(double)fVar15 >> 0x20);
          *(undefined1 (*) [16])(pTVar34->Rotation).ZW.m128d_f64 = auVar19;
          *(undefined4 *)(pTVar34->Translation).XY.m128d_f64 = uVar22;
          *(undefined4 *)((longlong)(pTVar34->Translation).XY.m128d_f64 + 4) = uVar23;
          *(int *)((pTVar34->Translation).XY.m128d_f64 + 1) = (int)uVar6;
          *(int *)((longlong)(pTVar34->Translation).XY.m128d_f64 + 0xc) =
               (int)((ulonglong)uVar6 >> 0x20);
          (pTVar34->Translation).ZW.m128d_f64[0] = dVar5;
          (pTVar34->Translation).ZW.m128d_f64[1] = 0.0;
          auVar20._8_4_ = SUB84((double)fVar12,0);
          auVar20._0_8_ = (double)fVar10;
          auVar20._12_4_ = (int)((ulonglong)(double)fVar12 >> 0x20);
          *(undefined1 (*) [16])(pTVar34->Scale3D).XY.m128d_f64 = auVar20;
          auVar21._8_4_ = SUB84((double)fVar16,0);
          auVar21._0_8_ = (double)fVar14;
          auVar21._12_4_ = (int)((ulonglong)(double)fVar16 >> 0x20);
          *(undefined1 (*) [16])(pTVar34->Scale3D).ZW.m128d_f64 = auVar21;
          uVar38 = 0;
          if ((int)uVar37 < local_318) {
            uVar38 = uVar42;
          }
          if ((uVar38 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar8 = (code *)swi(3);
            uVar26 = (*pcVar8)();
            return (bool)uVar26;
          }
          iVar27 = PCGHelpers::ComputeSeedFromPosition
                             ((TVector<double> *)(local_320.Data + (longlong)(int)uVar37 * 0x18));
          uVar38 = 0;
          if ((int)uVar37 < local_2a8.SeedRange.NumElements) {
            uVar38 = uVar42;
          }
          if ((uVar38 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < NumElements)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                  ,0x8b,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar25)) {
            pcVar8 = (code *)swi(3);
            uVar26 = (*pcVar8)();
            return (bool)uVar26;
          }
          if (uVar37 == (int)uVar37 % local_2a8.SeedRange.ElementView.NumElements) {
            piVar35 = (int *)((longlong)local_2a8.SeedRange.ElementView.BytesBetweenElements *
                              (longlong)((int)uVar37 % local_2a8.SeedRange.ElementView.NumElements)
                             + (longlong)local_2a8.SeedRange.ElementView.FirstElementPtr);
          }
          else {
            piVar35 = &local_2a8.SeedRange.StubValue;
          }
          uVar37 = uVar37 + 1;
          local_2f8 = local_2f8 + 0x18;
          *piVar35 = iVar27;
          param_1 = (TPCGTimeSlicedContext<PCGClusterElement::FExecState,PCGClusterElement::FClusteringData,FPCGContext>
                     *)local_2d8;
        } while ((int)uVar37 < local_318);
      }
      uVar40 = 0;
      iVar27 = (int)*(longlong *)&(((UPCGMetadata *)param_1)->OtherParents).Elements.field_0x10;
      puVar1 = &(((UPCGMetadata *)param_1)->OtherParents).Elements.field_0x14;
      if (iVar27 == *(int *)puVar1) {
        iVar27 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x878,(ForAnyElementType *)
                                  &(((UPCGMetadata *)param_1)->OtherParents).Elements.field_0x8,
                            (int *)puVar1);
      }
      *(int *)&(((UPCGMetadata *)param_1)->OtherParents).Elements.field_0x10 = iVar27 + 1;
      pFVar32 = (FPCGDataPtrWrapper *)
                ((longlong)iVar27 * 0x78 +
                *(longlong *)&(((UPCGMetadata *)param_1)->OtherParents).Elements.field_0x8);
      pFVar32[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      pFVar32[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      pFVar32[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      pFVar32[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      pFVar32[6].WeakData.WeakPtr.ObjectIndex = 0x100;
      (pFVar32->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
      (pFVar32->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
      pFVar32[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      pFVar32[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      pFVar32[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      pFVar32[3].WeakData.WeakPtr.ObjectIndex = 0;
      pFVar32[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
      *(undefined4 *)&pFVar32[4].Data.field0_0x0 = 0xffffffff;
      *(undefined4 *)((longlong)&pFVar32[4].Data.field0_0x0 + 4) = 0;
      pFVar32[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      pFVar32[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      *(undefined8 *)&pFVar32[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
      *(undefined4 *)((longlong)&pFVar32[7].Data.field0_0x0 + 4) = 0xffffffff;
      pFVar32[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
           (FObjectPtr_u_0)PCGClusterElement::Constants::FinalCentroidsLabel;
      FPCGDataPtrWrapper::operator=(pFVar32,(UPCGData *)pUVar30);
      FVar36 = local_2e8;
      if (*(char *)(*(longlong *)local_2e8 + 0x121) != '\0') {
        lVar29 = (**(code **)(pUVar30->_padding_ + 0x328))(pUVar30);
        if ((lVar29 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("OutputCentroidPointData->MutableMetadata()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGClusterElement.cpp"
                                ,0x2de,L""), bVar25)) {
          pcVar8 = (code *)swi(3);
          uVar26 = (*pcVar8)();
          return (bool)uVar26;
        }
        this_02 = (FPCGAttributePropertySelector *)(*(longlong *)FVar36 + 0x128);
        bVar25 = FPCGAttributePropertySelector::IsBasicAttribute(this_02);
        if (bVar25) {
          pUVar31 = (UPCGMetadata *)(**(code **)(pUVar30->_padding_ + 0x328))(pUVar30);
          PCGMetadataElementCommon::ClearOrCreateAttribute<int>
                    (pUVar31,this_02,0,(FPCGContext *)param_1);
        }
        PCGAttributeAccessorHelpers::CreateAccessor
                  ((UPCGData *)(local_310 + 8),(FPCGAttributePropertySelector *)pUVar30,
                   SUB81(this_02,0));
        PCGAttributeAccessorHelpers::CreateKeys
                  ((UPCGData *)local_310,(FPCGAttributePropertySelector *)pUVar30);
        if (((IPCGAttributeAccessor *)local_310._8_8_ == (IPCGAttributeAccessor *)0x0) ||
           ((IPCGAttributeAccessorKeys *)local_310._0_8_ == (IPCGAttributeAccessorKeys *)0x0)) {
          PCGLog::Metadata::LogFailToCreateAccessorError(this_02,(FPCGContext *)param_1);
        }
        else {
          local_118.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
          local_118.ArrayNum = 0;
          local_118.ArrayMax = 0x10;
          TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>::SetNumZeroed
                    (&local_118,local_318,Default);
          uVar41 = uVar40;
          if (0 < (param_3->PointToClusterAssignments).ArrayNum) {
            do {
              uVar38 = (uint)uVar40;
              uVar37 = 0;
              if ((int)uVar38 < (param_3->PointToClusterAssignments).ArrayNum) {
                uVar37 = ~uVar38 >> 0x1f;
              }
              if ((uVar37 == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar8 = (code *)swi(3);
                uVar26 = (*pcVar8)();
                return (bool)uVar26;
              }
              uVar37 = *(uint *)((param_3->PointToClusterAssignments).AllocatorInstance.Data +
                                uVar41);
              uVar42 = 0;
              if ((int)uVar37 < local_118.ArrayNum) {
                uVar42 = ~uVar37 >> 0x1f;
              }
              if ((uVar42 == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar8 = (code *)swi(3);
                uVar26 = (*pcVar8)();
                return (bool)uVar26;
              }
              FVar36 = (ForElementType<int>)&local_118;
              if (local_118.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
                FVar36 = local_118.AllocatorInstance.SecondaryData;
              }
              uVar40 = (ulonglong)(uVar38 + 1);
              piVar35 = (int *)((longlong)FVar36 + (longlong)(int)uVar37 * 4);
              *piVar35 = *piVar35 + 1;
              uVar41 = uVar41 + 4;
            } while ((int)(uVar38 + 1) < (param_3->PointToClusterAssignments).ArrayNum);
          }
          iVar27 = local_118.ArrayNum;
          this_01 = local_310._8_8_;
          uVar6 = local_310._0_8_;
          local_2e8 = (ForElementType<int>)&local_118;
          if (local_118.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
            local_2e8 = local_118.AllocatorInstance.SecondaryData;
          }
          if ((local_118.ArrayNum < 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar25)) {
            pcVar8 = (code *)swi(3);
            uVar26 = (*pcVar8)();
            return (bool)uVar26;
          }
          uStack_2e0 = iVar27;
          local_2b8._12_1_ = bStack_2dc;
          local_2b8._13_3_ = uStack_2db;
          local_2b8.ArrayNum = iVar27;
          local_2b8.DataPtr = (int *)local_2e8;
          IPCGAttributeAccessor::SetRange<int>
                    ((IPCGAttributeAccessor *)this_01,&local_2b8,0,
                     (IPCGAttributeAccessorKeys *)uVar6,StrictType);
          if (local_118.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
            FMemory::Free((void *)local_118.AllocatorInstance.SecondaryData);
          }
        }
        if ((IPCGAttributeAccessorKeys *)local_310._0_8_ != (IPCGAttributeAccessorKeys *)0x0) {
          (**(code **)*(longlong *)local_310._0_8_)(local_310._0_8_,1);
        }
        if ((IPCGAttributeAccessor *)local_310._8_8_ != (IPCGAttributeAccessor *)0x0) {
          (**(code **)*(longlong *)local_310._8_8_)(local_310._8_8_,1);
        }
      }
      if (local_320.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_320.Data);
      }
    }
  }
  return true;
}

// operator() @ 149adb980

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
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

EPCGTimeSliceInitResult __thiscall
`FPCGClusterElement::PrepareDataInternal'::__l2::<lambda_1>::operator()
          (void *this,
          TPCGTimeSlicedContext<PCGClusterElement::FExecState,PCGClusterElement::FClusteringData,FPCGContext>
          *param_1,FExecState *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  EPCGTimeSliceInitResult EVar9;
  int iVar10;
  uint uVar11;
  code *pcVar12;
  UPCGBasePointData *pUVar13;
  longlong lVar14;
  int iVar15;
  bool bVar16;
  undefined1 auStackY_108 [32];
  longlong local_d8;
  int local_d0;
  int local_cc;
  int local_c8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_108;
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId448,
               "FPCGClusterElement::PrepareData::InitializePerExecutionState",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGClusterElement.cpp"
               ,0x1c0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId448);
  }
  iVar15 = *(int *)(*(longlong *)((longlong)this + 8) + 200);
  if (iVar15 == 0) {
    pcVar12 = PCGClusterElement::Algorithm::KMeans;
  }
  else {
    if (iVar15 != 1) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGClusterElement.cpp"
                         ,0x1cb,L"");
      if (bVar8) {
        pcVar12 = (code *)swi(3);
        EVar9 = (*pcVar12)();
        return EVar9;
      }
      EVar9 = AbortExecution;
      goto LAB_149adbbf1;
    }
    pcVar12 = PCGClusterElement::Algorithm::ExpectationMaximization;
  }
  param_2->ClusteringFunction = pcVar12;
  if (*(int *)(*(longlong *)this + 8) == 0) {
    param_2->bSelectRandomCentroids = true;
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
              (&param_2->InitialCentroids,*(int *)(*(longlong *)((longlong)this + 8) + 0xcc),Default
              );
    EVar9 = Success;
  }
  else {
    param_2->bSelectRandomCentroids = false;
    if (1 < *(int *)(*(longlong *)this + 8)) {
      PCGLog::InputOutput::LogFirstInputOnlyWarning
                (PCGClusterElement::Constants::InputCentroidsLabel,(FPCGContext *)param_1);
    }
    puVar4 = *(undefined8 **)this;
    iVar15 = 0;
    if ((*(int *)(puVar4 + 1) < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar12 = (code *)swi(3);
      EVar9 = (*pcVar12)();
      return EVar9;
    }
    pUVar13 = Cast<UPCGBasePointData>((FPCGDataPtrWrapper *)*puVar4);
    if ((pUVar13 == (UPCGBasePointData *)0x0) ||
       (iVar10 = (**(code **)(pUVar13->_padding_ + 0x488))(pUVar13), iVar10 == 0)) {
      EVar9 = NoOperation;
    }
    else {
      uVar11 = (**(code **)(pUVar13->_padding_ + 0x488))(pUVar13);
      if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
      }
      piVar1 = &(param_2->InitialCentroids).ArrayMax;
      if ((param_2->InitialCentroids).ArrayMax < (int)uVar11) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,uVar11,&(param_2->InitialCentroids).AllocatorInstance,
                   (param_2->InitialCentroids).ArrayNum,piVar1);
      }
      (**(code **)(pUVar13->_padding_ + 0x500))(pUVar13,&local_d8);
      for (; iVar15 != local_c8; iVar15 = iVar15 + 1) {
        lVar14 = (longlong)(iVar15 % local_cc) * (longlong)local_d0;
        puVar4 = (undefined8 *)(lVar14 + 0x20 + local_d8);
        uVar6 = *puVar4;
        uVar7 = puVar4[1];
        uVar3 = *(undefined8 *)(lVar14 + 0x30 + local_d8);
        iVar10 = (param_2->InitialCentroids).ArrayNum;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&(param_2->InitialCentroids).AllocatorInstance,piVar1);
        }
        (param_2->InitialCentroids).ArrayNum = iVar10 + 1;
        pFVar5 = (param_2->InitialCentroids).AllocatorInstance.Data;
        pFVar2 = pFVar5 + (longlong)iVar10 * 0x18;
        *(undefined8 *)pFVar2 = uVar6;
        *(undefined8 *)(pFVar2 + 8) = uVar7;
        *(undefined8 *)(pFVar5 + (longlong)iVar10 * 0x18 + 0x10) = uVar3;
      }
      EVar9 = Success;
    }
  }
LAB_149adbbf1:
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return EVar9;
}

// operator() @ 149ae2e50

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
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

EPCGTimeSliceInitResult __thiscall
`FPCGClusterElement::PrepareDataInternal'::__l2::<lambda_2>::operator()
          (void *this,FClusteringData *param_1,FExecState *param_2,uint param_3)

{
  TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_> *pTVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FExpectationMaximizationData *pFVar3;
  int *piVar4;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  int *piVar6;
  double *pdVar7;
  longlong *plVar8;
  IPCGAttributeAccessor *pIVar9;
  IPCGAttributeAccessorKeys *pIVar10;
  ForElementType<UE::Math::TVector<double>_> FVar11;
  ForElementType<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian> FVar12
  ;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  code *pcVar15;
  double dVar16;
  double dVar17;
  FObjectPtr_u_0 FVar18;
  bool bVar19;
  EPCGTimeSliceInitResult EVar20;
  char cVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  UClass *pUVar26;
  UPCGPointData *pUVar27;
  UPCGMetadata *pUVar28;
  UPCGPointData *pUVar29;
  TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> TVar30;
  TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_> TVar31;
  FPCGDataPtrWrapper *pFVar32;
  longlong lVar33;
  ForElementType<UE::Math::TVector<double>_> FVar34;
  ForElementType<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian> FVar35
  ;
  UPCGPointData *pUVar36;
  uint uVar37;
  FPCGAttributePropertySelector *this_00;
  uint uVar38;
  bool bVar39;
  double dVar40;
  undefined1 auStackY_238 [32];
  ForAnyElementType local_1e0;
  undefined8 local_1d8;
  UPCGMetadata *local_1d0;
  FObjectPtr_u_0 local_1c8;
  double local_1c0;
  double dStack_1b8;
  double local_1b0;
  FScriptContainerElement *local_1a8;
  uint uStack_1a0;
  undefined4 uStack_19c;
  undefined1 local_198 [16];
  TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> *local_188;
  TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_> *local_180;
  longlong local_178;
  int local_170;
  uint local_16c;
  FPCGCrc local_168;
  TObjectPtr<UPCGMetadata>_u_0 local_160;
  TObjectPtr<UPCGMetadata>_u_0 local_158;
  undefined4 local_150;
  TVector<double>_u_0 local_148;
  TArrayView<int_const_,int> local_128;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  longlong local_e8;
  int local_e0;
  int local_dc;
  int local_d8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_238;
  bVar39 = -1 < CpuChannel->Enabled;
  local_1d0 = (UPCGMetadata *)param_2;
  local_1a8 = this;
  if (bVar39) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId497,"FPCGClusterElement::PrepareData::InitializeIteration",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGClusterElement.cpp"
               ,0x1f1);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId497);
  }
  plVar8 = *(longlong **)this;
  pUVar36 = (UPCGPointData *)0x0;
  uVar38 = 0;
  uVar23 = uVar38;
  if ((int)param_3 < (int)plVar8[1]) {
    uVar23 = ~param_3 >> 0x1f;
  }
  if ((uVar23 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar15 = (code *)swi(3);
    EVar20 = (*pcVar15)();
    return EVar20;
  }
  local_1c8 = (FObjectPtr_u_0)((FObjectPtr_u_0 *)((longlong)(int)param_3 * 0x78 + *plVar8))->Handle;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UPCGBasePointData *)local_1c8.Handle != (UPCGBasePointData *)0x0)) {
    UE::GC::MarkAsReachable(local_1c8.Handle);
  }
  if ((UPCGBasePointData *)local_1c8.Handle != (UPCGBasePointData *)0x0) {
    pUVar26 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
    bVar19 = FObjectPtr::IsA((FObjectPtr *)&local_1c8,pUVar26);
    FVar18 = local_1c8;
    if (((bVar19) && ((UPCGBasePointData *)local_1c8.Handle != (UPCGBasePointData *)0x0)) &&
       (iVar22 = (**(code **)(*(longlong *)local_1c8.Handle + 0x488))(local_1c8.Handle), iVar22 != 0
       )) {
      pUVar27 = (UPCGPointData *)
                FPCGContext::NewPointData_AnyThread(*(FPCGContext **)((longlong)this + 0x10));
      UPCGSpatialData::InitializeFromData
                ((UPCGSpatialData *)pUVar27,(UPCGSpatialData *)FVar18.Handle,(UPCGMetadata *)0x0,
                 true,true);
      cVar21 = (**(code **)(pUVar27->_padding_ + 0x440))(pUVar27);
      if (cVar21 == '\0') {
        local_158.DebugPtr = (UPCGMetadata *)0x0;
        local_150 = 0;
        UPCGBasePointData::SetPoints
                  ((UPCGBasePointData *)FVar18.Handle,(UPCGBasePointData *)pUVar27,
                   (TArrayView<int_const_,int> *)&local_158.ObjectPtr,true);
      }
      pUVar28 = (UPCGMetadata *)(**(code **)(pUVar27->_padding_ + 0x328))(pUVar27);
      if ((pUVar28 == (UPCGMetadata *)0x0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("OutPointMetadata",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGClusterElement.cpp"
                              ,0x202,L""), bVar19)) {
        pcVar15 = (code *)swi(3);
        EVar20 = (*pcVar15)();
        return EVar20;
      }
      this_00 = (FPCGAttributePropertySelector *)(*(longlong *)((longlong)this + 8) + 0xd0);
      bVar19 = FPCGAttributePropertySelector::IsBasicAttribute(this_00);
      if (bVar19) {
        PCGMetadataElementCommon::ClearOrCreateAttribute<int>
                  (pUVar28,this_00,0,*(FPCGContext **)((longlong)this + 0x10));
      }
      param_1->OutputData = (UPCGBasePointData *)pUVar27;
      pUVar26 = Z_Construct_UClass_UPCGPointData_NoRegister();
      iVar22 = (int)pUVar26->_padding_;
      if ((*(int *)(pUVar27->_padding_ + 0x38) < iVar22) ||
         (pUVar29 = pUVar27,
         (longlong *)
         *(undefined1 **)(*(longlong *)(pUVar27->_padding_ + 0x30) + (longlong)iVar22 * 8) !=
         &pUVar26->_padding_)) {
        pUVar29 = pUVar36;
      }
      param_1->OutPointData = pUVar29;
      TVar30 = PCGAttributeAccessorHelpers::CreateAccessor
                         ((UPCGData *)local_198,(FPCGAttributePropertySelector *)pUVar27,
                          SUB81(this_00,0));
      local_188 = &param_1->Accessor;
      if ((IPCGAttributeAccessor *)local_188 != TVar30.Ptr) {
        pIVar9 = local_188->Ptr;
        local_188->Ptr = (IPCGAttributeAccessor *)(TVar30.Ptr)->_padding_;
        (TVar30.Ptr)->_padding_ = 0;
        if (pIVar9 != (IPCGAttributeAccessor *)0x0) {
          (**(code **)pIVar9->_padding_)(pIVar9,1);
        }
      }
      if ((undefined8 *)local_198._0_8_ != (undefined8 *)0x0) {
        (*(code *)**(undefined8 **)local_198._0_8_)(local_198._0_8_,1);
      }
      TVar31 = PCGAttributeAccessorHelpers::CreateKeys
                         ((UPCGData *)(local_198 + 8),(FPCGAttributePropertySelector *)pUVar27);
      pTVar1 = &param_1->Keys;
      local_180 = pTVar1;
      if ((IPCGAttributeAccessorKeys *)pTVar1 != TVar31.Ptr) {
        pIVar10 = pTVar1->Ptr;
        pTVar1->Ptr = (IPCGAttributeAccessorKeys *)(TVar31.Ptr)->_padding_;
        (TVar31.Ptr)->_padding_ = 0;
        if (pIVar10 != (IPCGAttributeAccessorKeys *)0x0) {
          (**(code **)pIVar10->_padding_)(pIVar10,1);
        }
      }
      if ((undefined8 *)local_198._8_8_ != (undefined8 *)0x0) {
        (*(code *)**(undefined8 **)local_198._8_8_)(local_198._8_8_,1);
      }
      if (((param_1->Accessor).Ptr == (IPCGAttributeAccessor *)0x0) ||
         (pTVar1->Ptr == (IPCGAttributeAccessorKeys *)0x0)) {
        PCGLog::Metadata::LogFailToCreateAccessorError
                  (this_00,*(FPCGContext **)((longlong)this + 0x10));
        EVar20 = AbortExecution;
        goto LAB_149ae31db;
      }
      uVar23 = (**(code **)(pUVar27->_padding_ + 0x488))(pUVar27);
      iVar22 = (int)local_1d0->_padding_;
      if (iVar22 < 2) {
        lVar33 = *(longlong *)((longlong)this + 0x10);
        iVar22 = *(int *)(lVar33 + 0x40);
        if (iVar22 == *(int *)(lVar33 + 0x44)) {
          iVar22 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x878,(ForAnyElementType *)(lVar33 + 0x38),(int *)(lVar33 + 0x44));
        }
        *(int *)(lVar33 + 0x40) = iVar22 + 1;
        pFVar32 = (FPCGDataPtrWrapper *)((longlong)iVar22 * 0x78 + *(longlong *)(lVar33 + 0x38));
        pFVar32[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        pFVar32[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        pFVar32[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        pFVar32[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        pFVar32[6].WeakData.WeakPtr.ObjectIndex = 0x100;
        (pFVar32->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
        (pFVar32->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
        pFVar32[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        pFVar32[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        pFVar32[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        pFVar32[3].WeakData.WeakPtr.ObjectIndex = 0;
        pFVar32[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
        *(undefined4 *)&pFVar32[4].Data.field0_0x0 = 0xffffffff;
        *(undefined4 *)((longlong)&pFVar32[4].Data.field0_0x0 + 4) = 0;
        pFVar32[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        pFVar32[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        *(undefined8 *)&pFVar32[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
        *(undefined4 *)((longlong)&pFVar32[7].Data.field0_0x0 + 4) = 0xffffffff;
        FPCGDataPtrWrapper::operator=(pFVar32,(UPCGData *)pUVar27);
      }
      else {
        if (iVar22 < (int)uVar23) {
          pTVar2 = &param_1->PointToClusterAssignments;
          iVar25 = (param_1->PointToClusterAssignments).ArrayNum;
          piVar6 = &(param_1->PointToClusterAssignments).ArrayNum;
          if (iVar25 < (int)uVar23) {
            iVar24 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (4,4,uVar23 - iVar25,&pTVar2->AllocatorInstance,piVar6,
                                &(param_1->PointToClusterAssignments).ArrayMax);
            memset((pTVar2->AllocatorInstance).Data + (longlong)iVar24 * 4,0,
                   (longlong)(int)(uVar23 - iVar25) << 2);
          }
          else {
            if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
            }
            if ((int)uVar23 < iVar25) {
              iVar25 = iVar25 - uVar23;
              if (iVar25 < 0) {
                bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   );
                if (bVar19) {
                  pcVar15 = (code *)swi(3);
                  EVar20 = (*pcVar15)();
                  return EVar20;
                }
              }
              else if (iVar25 == 0) goto LAB_149ae349a;
              pFVar13 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar23 * 4;
              iVar24 = (*piVar6 - iVar25) - uVar23;
              if (iVar24 != 0) {
                memmove(pFVar13,pFVar13 + (longlong)iVar25 * 4,(longlong)iVar24 << 2);
              }
              *piVar6 = *piVar6 - iVar25;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,&pTVar2->AllocatorInstance,*piVar6,
                         &(param_1->PointToClusterAssignments).ArrayMax);
            }
          }
LAB_149ae349a:
          local_178 = *(longlong *)(local_1a8 + 8);
          local_160.DebugPtr = local_1d0;
          local_170 = iVar22;
          local_16c = uVar23;
          local_168 = (FPCGCrc)param_1;
          if (*(int *)(local_178 + 200) == 0) {
            ``FPCGClusterElement::PrepareDataInternal'::__l2::<lambda_2>::operator()'::__l2::
            <lambda_1>::operator()(&local_178);
          }
          else {
            if (*(int *)(local_178 + 200) != 1) {
              bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!\"Enclosing block should never be called\"",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGClusterElement.cpp"
                                  ,0x27f,L"");
              if (bVar19) {
                pcVar15 = (code *)swi(3);
                EVar20 = (*pcVar15)();
                return EVar20;
              }
              EVar20 = AbortExecution;
              goto LAB_149ae31db;
            }
            ``FPCGClusterElement::PrepareDataInternal'::__l2::<lambda_2>::operator()'::__l2::
            <lambda_1>::operator()(&local_178);
            (**(code **)(param_1->OutputData->_padding_ + 0x500))(param_1->OutputData,&local_e8);
            dVar17 = __real_3ff0000000000000;
            pUVar27 = pUVar36;
            dVar16 = __real_0010000000000000;
            while (dVar40 = dVar16, iVar25 = (int)pUVar27, iVar25 != local_d8) {
              lVar33 = (longlong)(iVar25 % local_dc) * (longlong)local_e0;
              pUVar27 = (UPCGPointData *)(ulonglong)(iVar25 + 1);
              pdVar7 = (double *)(lVar33 + 0x20 + local_e8);
              local_118 = *pdVar7;
              dStack_110 = pdVar7[1];
              local_108 = *(double *)(lVar33 + 0x30 + local_e8);
              dVar16 = dStack_110 * dStack_110 + local_118 * local_118 + local_108 * local_108;
              if (dVar16 <= dVar40) {
                dVar16 = dVar40;
              }
            }
            pFVar3 = &param_1->EMData;
            (param_1->EMData).ScalingFactor = 1.0;
            if (dVar17 < dVar40) {
              (param_1->EMData).ScalingFactor = __real_4005bf0a8b145769 / SQRT(dVar40);
            }
            piVar6 = &(param_1->EMData).Gaussians.ArrayMax;
            piVar4 = &(param_1->EMData).Gaussians.ArrayNum;
            if (*piVar6 < iVar22) {
              UE::Core::Private::
              ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian>_>
                        (0x140,0x10,iVar22,
                         (ForElementType<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian>
                          *)pFVar3,*piVar4,piVar6);
            }
            local_1d0 = (UPCGMetadata *)0x0;
            pUVar27 = pUVar36;
            pUVar29 = pUVar36;
            do {
              if (((param_1->Centroids).ArrayNum <= (int)pUVar27) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar15 = (code *)swi(3);
                EVar20 = (*pcVar15)();
                return EVar20;
              }
              FVar11 = (param_1->Centroids).AllocatorInstance.SecondaryData;
              dVar16 = (param_1->EMData).ScalingFactor;
              FVar34 = (ForElementType<UE::Math::TVector<double>_>)&param_1->Centroids;
              if (FVar11 != (ForElementType<UE::Math::TVector<double>_>)0x0) {
                FVar34 = FVar11;
              }
              iVar25 = *piVar4;
              pdVar7 = (double *)((longlong)&pUVar29->_padding_ + (longlong)FVar34);
              local_148._s_0.X = *pdVar7 * dVar16;
              local_148._s_0.Y = pdVar7[1] * dVar16;
              local_148._s_0.Z =
                   dVar16 * *(double *)((longlong)&pUVar29->_padding_ + (longlong)FVar34);
              if (iVar25 == *piVar6) {
                iVar25 = UE::Core::Private::
                         ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian>_>
                                   (0x140,0x10,
                                    (ForElementType<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian>
                                     *)pFVar3,piVar6);
                *piVar4 = iVar25;
              }
              *piVar4 = iVar25 + 1;
              FVar12 = (param_1->EMData).Gaussians.AllocatorInstance.SecondaryData;
              FVar35 = (ForElementType<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian>
                        )pFVar3;
              if (FVar12 != (ForElementType<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian>
                             )0x0) {
                FVar35 = FVar12;
              }
              PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian::FGaussian
                        ((FGaussian *)((longlong)iVar25 * 0x140 + (longlong)FVar35),
                         (TVector<double> *)&local_148._s_0,&UE::Math::TMatrix<double>::Identity,
                         dVar17 / (double)iVar22);
              uVar38 = (int)pUVar27 + 1;
              pUVar27 = (UPCGPointData *)(ulonglong)uVar38;
              local_1d0 = (UPCGMetadata *)((longlong)&local_1d0->_padding_ + 1);
              pUVar29 = (UPCGPointData *)&pUVar29->_padding_;
            } while ((int)uVar38 < iVar22);
            iVar25 = (**(code **)(param_1->OutputData->_padding_ + 0x488))();
            if ((iVar25 < 1) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InNumPoints > 0 && InNumCentroids > 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\PCGClusterElement.h"
                                    ,0x82,L""), bVar19)) {
              pcVar15 = (code *)swi(3);
              EVar20 = (*pcVar15)();
              return EVar20;
            }
            (param_1->EMData).Probabilities.NumPoints = iVar25;
            (param_1->EMData).Probabilities.NumCentroids = iVar22;
            TArray<double,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>_>::SetNumZeroed
                      (&(param_1->EMData).Probabilities.Array,iVar25 * iVar22,Default);
            pTVar5 = &(param_1->EMData).NormalizedPointLocations;
            uVar38 = (**(code **)(param_1->OutputData->_padding_ + 0x488))();
            if ((int)uVar38 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar38);
            }
            if ((param_1->EMData).NormalizedPointLocations.ArrayMax < (int)uVar38) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,uVar38,&pTVar5->AllocatorInstance,
                         (param_1->EMData).NormalizedPointLocations.ArrayNum,
                         &(param_1->EMData).NormalizedPointLocations.ArrayMax);
            }
            dVar16 = (param_1->EMData).ScalingFactor;
            while (iVar22 = (int)pUVar36, iVar22 != local_d8) {
              pFVar13 = (pTVar5->AllocatorInstance).Data;
              lVar33 = (longlong)(iVar22 % local_dc) * (longlong)local_e0;
              pdVar7 = (double *)(lVar33 + 0x20 + local_e8);
              local_100 = *pdVar7;
              dStack_f8 = pdVar7[1];
              local_f0 = *(double *)(lVar33 + 0x30 + local_e8);
              dStack_1b8 = dStack_f8 * dVar16;
              local_1c0 = local_100 * dVar16;
              local_1b0 = local_f0 * dVar16;
              if (((pFVar13 <= (FScriptContainerElement *)&local_1c0) &&
                  ((FScriptContainerElement *)&local_1c0 <
                   pFVar13 + (longlong)(param_1->EMData).NormalizedPointLocations.ArrayMax * 0x18))
                 && (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar19)) {
                pcVar15 = (code *)swi(3);
                EVar20 = (*pcVar15)();
                return EVar20;
              }
              iVar25 = (param_1->EMData).NormalizedPointLocations.ArrayNum;
              if (iVar25 == (param_1->EMData).NormalizedPointLocations.ArrayMax) {
                iVar25 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x818,&pTVar5->AllocatorInstance,
                                    &(param_1->EMData).NormalizedPointLocations.ArrayMax);
                (param_1->EMData).NormalizedPointLocations.ArrayNum = iVar25;
              }
              (param_1->EMData).NormalizedPointLocations.ArrayNum = iVar25 + 1;
              pFVar14 = (pTVar5->AllocatorInstance).Data;
              pFVar13 = pFVar14 + (longlong)iVar25 * 0x18;
              *(double *)pFVar13 = local_1c0;
              *(double *)(pFVar13 + 8) = dStack_1b8;
              *(double *)(pFVar14 + (longlong)iVar25 * 0x18 + 0x10) = local_1b0;
              pUVar36 = (UPCGPointData *)(ulonglong)(iVar22 + 1);
            }
          }
          EVar20 = Success;
          goto LAB_149ae31db;
        }
        local_1d8 = 0;
        local_1e0.Data = (FScriptContainerElement *)0x0;
        if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
        }
        if (0 < (int)uVar23) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar23,&local_1e0,0,(int *)((longlong)&local_1d8 + 4));
          do {
            iVar22 = (int)local_1d8;
            if ((int)local_1d8 == local_1d8._4_4_) {
              iVar22 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_1e0,(int *)((longlong)&local_1d8 + 4));
            }
            uVar38 = iVar22 + 1;
            local_1d8 = CONCAT44(local_1d8._4_4_,uVar38);
            *(int *)(local_1e0.Data + (longlong)iVar22 * 4) = (int)pUVar36;
            uVar37 = (int)pUVar36 + 1;
            pUVar36 = (UPCGPointData *)(ulonglong)uVar37;
          } while ((int)uVar37 < (int)uVar23);
        }
        pIVar9 = local_188->Ptr;
        pIVar10 = local_180->Ptr;
        local_1a8 = local_1e0.Data;
        if (((int)uVar38 < 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar19)) {
          pcVar15 = (code *)swi(3);
          EVar20 = (*pcVar15)();
          return EVar20;
        }
        local_128._12_4_ = uStack_19c;
        local_128.ArrayNum = uVar38;
        local_128.DataPtr = (int *)local_1a8;
        uStack_1a0 = uVar38;
        IPCGAttributeAccessor::SetRange<int>(pIVar9,&local_128,0,pIVar10,StrictType);
        lVar33 = *(longlong *)((longlong)this + 0x10);
        iVar22 = *(int *)(lVar33 + 0x40);
        if (iVar22 == *(int *)(lVar33 + 0x44)) {
          iVar22 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x878,(ForAnyElementType *)(lVar33 + 0x38),(int *)(lVar33 + 0x44));
        }
        *(int *)(lVar33 + 0x40) = iVar22 + 1;
        pFVar32 = (FPCGDataPtrWrapper *)((longlong)iVar22 * 0x78 + *(longlong *)(lVar33 + 0x38));
        pFVar32[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        pFVar32[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        pFVar32[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        pFVar32[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        pFVar32[6].WeakData.WeakPtr.ObjectIndex = 0x100;
        (pFVar32->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
        (pFVar32->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
        pFVar32[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        pFVar32[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        pFVar32[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        pFVar32[3].WeakData.WeakPtr.ObjectIndex = 0;
        pFVar32[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
        *(undefined4 *)&pFVar32[4].Data.field0_0x0 = 0xffffffff;
        *(undefined4 *)((longlong)&pFVar32[4].Data.field0_0x0 + 4) = 0;
        pFVar32[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        pFVar32[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        *(undefined8 *)&pFVar32[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
        *(undefined4 *)((longlong)&pFVar32[7].Data.field0_0x0 + 4) = 0xffffffff;
        FPCGDataPtrWrapper::operator=(pFVar32,(UPCGData *)pUVar27);
        if (local_1e0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e0.Data);
        }
      }
    }
  }
  EVar20 = NoOperation;
LAB_149ae31db:
  if (bVar39) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return EVar20;
}

// ExecuteInternal @ 149b0c760

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FPCGClusterElement::ExecuteInternal(FPCGClusterElement *this,FPCGContext *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  bool bVar11;
  undefined1 local_res10 [8];
  UPCGClusterSettings *local_res18 [2];
  
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId653,"FPCGClusterElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGClusterElement.cpp"
               ,0x28d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId653);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("TimeSlicedContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGClusterElement.cpp"
                         ,0x290,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  bVar8 = TPCGTimeSlicedContext<PCGClusterElement::FExecState,PCGClusterElement::FClusteringData,FPCGContext>
          ::DataIsPreparedForExecution
                    ((TPCGTimeSlicedContext<PCGClusterElement::FExecState,PCGClusterElement::FClusteringData,FPCGContext>
                      *)param_1);
  if (bVar8) {
    if (*(char *)((longlong)&param_1[1].InputData.TaggedData.AllocatorInstance.Data + 1) != '\x02')
    {
      local_res18[0] = FPCGContext::GetInputSettings<UPCGClusterSettings>(param_1);
      if ((local_res18[0] == (UPCGClusterSettings *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Settings",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGClusterElement.cpp"
                             ,0x29e,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      *(int *)&param_1[1]._padding_ = (int)param_1[1]._padding_ + 1;
      bVar8 = TPCGTimeSlicedContext<PCGClusterElement::FExecState,PCGClusterElement::FClusteringData,FPCGContext>
              ::DataIsPreparedForExecution
                        ((TPCGTimeSlicedContext<PCGClusterElement::FExecState,PCGClusterElement::FClusteringData,FPCGContext>
                          *)param_1);
      if (((bVar8) ||
          (local_res10[0] = bVar8,
          bVar8 = `TPCGTimeSlicedElementBase<PCGClusterElement::FExecState,PCGClusterElement::FClusteringData,FPCGContext>
                  ::ExecuteSlice'::__l3::<lambda_1>::operator()(local_res10), bVar8)) &&
         (iVar3._0_1_ = param_1[1].OutputData.bCancelExecutionOnEmpty,
         iVar3._1_1_ = param_1[1].OutputData.bCancelExecution,
         iVar3._2_2_ = *(undefined2 *)&param_1[1].OutputData.field_0x12, iVar3 != 0)) {
        do {
          uVar4 = *(uint *)((longlong)&param_1[1]._padding_ + 4);
          iVar5._0_1_ = param_1[1].OutputData.bCancelExecutionOnEmpty;
          iVar5._1_1_ = param_1[1].OutputData.bCancelExecution;
          iVar5._2_2_ = *(undefined2 *)&param_1[1].OutputData.field_0x12;
          uVar10 = 0;
          if ((int)uVar4 < iVar5) {
            uVar10 = ~uVar4 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            uVar9 = (*pcVar7)();
            return (bool)uVar9;
          }
          bVar8 = `FPCGClusterElement::ExecuteInternal'::__l2::<lambda_1>::operator()
                            (local_res18,
                             (TPCGTimeSlicedContext<PCGClusterElement::FExecState,PCGClusterElement::FClusteringData,FPCGContext>
                              *)param_1,(FExecState *)&param_1[1].InputData.DataCrcs,
                             (FClusteringData *)
                             ((longlong)(int)uVar4 * 0x3640 +
                             *(longlong *)&param_1[1].OutputData.TaggedData.ArrayNum),uVar4);
          if (!bVar8) {
            bVar8 = false;
            goto LAB_149b0c800;
          }
          piVar1 = (int *)((longlong)&param_1[1]._padding_ + 4);
          *piVar1 = *piVar1 + 1;
          iVar2._0_1_ = param_1[1].OutputData.bCancelExecutionOnEmpty;
          iVar2._1_1_ = param_1[1].OutputData.bCancelExecution;
          iVar2._2_2_ = *(undefined2 *)&param_1[1].OutputData.field_0x12;
        } while ((*(int *)((longlong)&param_1[1]._padding_ + 4) < iVar2) &&
                (bVar8 = FPCGAsyncState::ShouldStop(&param_1->AsyncState), !bVar8));
        iVar6._0_1_ = param_1[1].OutputData.bCancelExecutionOnEmpty;
        iVar6._1_1_ = param_1[1].OutputData.bCancelExecution;
        iVar6._2_2_ = *(undefined2 *)&param_1[1].OutputData.field_0x12;
        bVar8 = *(int *)((longlong)&param_1[1]._padding_ + 4) == iVar6;
      }
      else {
        bVar8 = true;
      }
      goto LAB_149b0c800;
    }
    FPCGDataCollection::operator=(&param_1->OutputData,&param_1->InputData);
  }
  bVar8 = true;
LAB_149b0c800:
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar8;
}

// PrepareDataInternal @ 149b22310

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
FPCGClusterElement::PrepareDataInternal(FPCGClusterElement *this,FPCGContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  EPCGTimeSliceInitResult EVar4;
  UPCGClusterSettings *pUVar5;
  bool bVar6;
  TPCGTimeSlicedContext<PCGClusterElement::FExecState,PCGClusterElement::FClusteringData,FPCGContext>
  *local_res10;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_78;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_68;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *local_58;
  UPCGClusterSettings *local_50;
  code *local_48;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> **local_40;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *local_38;
  UPCGClusterSettings *local_30;
  FPCGContext *local_28;
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId429,"FPCGClusterElement::PrepareData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGClusterElement.cpp"
               ,0x1ad);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId429);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGClusterElement.cpp"
                         ,0x1b0,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pUVar5 = FPCGContext::GetInputSettings<UPCGClusterSettings>(param_1);
  if ((pUVar5 == (UPCGClusterSettings *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGClusterElement.cpp"
                         ,0x1b2,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_78,&PCGPinConstants::DefaultInputLabel);
  if (local_78.ArrayNum != 0) {
    FPCGDataCollection::GetInputsByPin
              (&param_1->InputData,&local_68,&PCGClusterElement::Constants::InputCentroidsLabel);
    local_58 = &local_68;
    local_50 = pUVar5;
    if (*(char *)((longlong)&param_1[1].InputData.TaggedData.AllocatorInstance.Data + 1) == '\0') {
      local_res10 = (TPCGTimeSlicedContext<PCGClusterElement::FExecState,PCGClusterElement::FClusteringData,FPCGContext>
                     *)param_1;
      EVar4 = UE::Core::Private::Function::
              TFunctionRefCaller<`FPCGClusterElement::PrepareDataInternal'::__l2::<lambda_1>,enum_EPCGTimeSliceInitResult,TPCGTimeSlicedContext<PCGClusterElement::FExecState,PCGClusterElement::FClusteringData,FPCGContext>_*,PCGClusterElement::FExecState_&>
              ::Call(&local_58,&local_res10,(FExecState *)&param_1[1].InputData.DataCrcs);
      *(EPCGTimeSliceInitResult *)
       ((longlong)&param_1[1].InputData.TaggedData.AllocatorInstance.Data + 1) = EVar4;
    }
    local_38 = &local_78;
    local_40 = &local_38;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPCGClusterElement::PrepareDataInternal'::__l2::<lambda_2>,enum_EPCGTimeSliceInitResult,PCGClusterElement::FClusteringData_&,PCGClusterElement::FExecState_const_&,unsigned_int>
               ::Call;
    local_30 = pUVar5;
    local_28 = param_1;
    TPCGTimeSlicedContext<PCGClusterElement::FExecState,PCGClusterElement::FClusteringData,FPCGContext>
    ::InitializePerIterationStates
              ((TPCGTimeSlicedContext<PCGClusterElement::FExecState,PCGClusterElement::FClusteringData,FPCGContext>
                *)param_1,local_78.ArrayNum,
               (TFunctionRef<EPCGTimeSliceInitResult___cdecl(PCGClusterElement::FClusteringData_&,PCGClusterElement::FExecState_const_&,unsigned_int)>
                *)&local_48);
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
    if ((FPCGTaggedData *)local_68.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
  if ((FPCGTaggedData *)local_78.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// SupportsBasePointDataInputs @ 149b2d1c0

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
FPCGClusterElement::SupportsBasePointDataInputs(FPCGClusterElement *this,FPCGContext *param_1)

{
  return true;
}

