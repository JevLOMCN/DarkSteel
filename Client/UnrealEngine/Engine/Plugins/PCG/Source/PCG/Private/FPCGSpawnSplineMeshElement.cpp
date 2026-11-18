// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 7

// operator() @ 149c4fb90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
`FPCGSpawnSplineMeshElement::ExecuteInternal'::__l2::<lambda_1>::operator()
          (void *this,
          TPCGTimeSlicedContext<FPCGSpawnSplineMeshPerExecutionState,FPCGSpawnSplineMeshPerIterationState,FPCGSpawnSplineMeshContext>
          *param_1,FPCGSpawnSplineMeshPerExecutionState *param_2,
          FPCGSpawnSplineMeshPerIterationState *param_3,uint param_4)

{
  int *piVar1;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_> *pTVar3;
  FPCGSplineMeshParams *this_00;
  undefined1 auVar4 [16];
  EPCGSplineMeshForwardAxis EVar5;
  UPCGPolyLineData *pUVar6;
  UStaticMesh *pUVar7;
  FScriptContainerElement *pFVar8;
  UMaterialInterface *pUVar9;
  longlong lVar10;
  AActor *pAVar11;
  code *pcVar12;
  double dVar13;
  double dVar14;
  ulonglong uVar15;
  double dVar16;
  double dVar17;
  void *pvVar18;
  FPCGObjectPropertyOverrideDescription *pFVar19;
  FPCGSpawnSplineMeshPerExecutionState *pFVar20;
  bool bVar21;
  undefined1 uVar22;
  uint uVar23;
  FSplineMeshComponentDescriptor *pFVar24;
  FText *pFVar25;
  FTextFormat *pFVar26;
  UClass *pUVar27;
  TBoxSphereBounds<double,double> *pTVar28;
  TRotator<double> *pTVar29;
  FPCGCrc FVar30;
  USplineMeshComponent *pUVar31;
  USplineMeshComponent *pUVar32;
  UFunction *pUVar33;
  int iVar34;
  FPCGObjectSingleOverride *pFVar35;
  ForAnyElementType FVar36;
  byte bVar37;
  int iVar38;
  ulonglong uVar39;
  FPCGObjectSingleOverride *pFVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  double dVar45;
  undefined8 uVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined1 auStackY_728 [32];
  <lambda_2> local_6e8;
  undefined1 local_6e7;
  undefined1 local_6e6;
  char local_6e5;
  int local_6e4;
  undefined1 local_6e0 [8];
  TPCGTimeSlicedContext<FPCGSpawnSplineMeshPerExecutionState,FPCGSpawnSplineMeshPerIterationState,FPCGSpawnSplineMeshContext>
  *local_6d8;
  uint local_6d0;
  void *local_6c8;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_6c0;
  TArray<UFunction_const_*,TSizedDefaultAllocator<32>_> local_6b0;
  FPCGObjectPropertyOverrideDescription *local_6a0;
  FPCGSpawnSplineMeshPerExecutionState *local_698;
  TArray<UFunction_*,TSizedDefaultAllocator<32>_> local_690;
  UPCGPolyLineData *local_680;
  FPCGObjectPropertyOverrideDescription *local_678;
  UObject *local_670;
  FTextFormat local_668;
  FText local_658;
  FFormatArgumentValue local_648;
  undefined4 local_628;
  longlong local_620;
  longlong *local_618;
  undefined4 local_610;
  FText local_600;
  FText local_5f0;
  FText local_5e0;
  double local_5d0;
  double dStack_5c8;
  double local_5c0;
  double local_5b8;
  double dStack_5b0;
  double local_5a8;
  double local_590;
  TQuat<double> local_578;
  TQuat<double> local_558;
  undefined1 local_538 [24];
  double local_520;
  double dStack_518;
  double local_510;
  double local_508;
  double dStack_500;
  double local_4f8;
  undefined8 local_4f0;
  double dStack_4e8;
  double local_4e0;
  undefined8 local_4d8;
  double dStack_4d0;
  double local_4c8;
  undefined1 local_490;
  undefined7 uStack_48f;
  FTextFormat local_488;
  FTextFormat local_478;
  TRotator<double> local_468;
  TRotator<double> local_450;
  TBoxSphereBounds<double,double> local_438;
  FSplineMeshComponentDescriptor local_400;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  ulonglong local_1c8;
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [16];
  ulonglong local_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_728;
  uVar39 = (ulonglong)(int)param_4;
  local_6d0 = param_4;
  local_6d8 = param_1;
  local_6c8 = this;
  local_698 = param_2;
  if ((((int)param_4 < 0) || ((param_1->PerIterationStateResultArray).ArrayNum <= (int)param_4)) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0 && Index < PerIterationStateResultArray.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\PCGTimeSlicedElementBase.h"
                          ,0x48,L""), bVar21)) {
    pcVar12 = (code *)swi(3);
    uVar22 = (*pcVar12)();
    return (bool)uVar22;
  }
  uVar23 = 0;
  if ((int)param_4 < (param_1->PerIterationStateResultArray).ArrayNum) {
    uVar23 = ~param_4 >> 0x1f;
  }
  if ((uVar23 == 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar21)) {
    pcVar12 = (code *)swi(3);
    uVar22 = (*pcVar12)();
    return (bool)uVar22;
  }
  if ((param_1->PerIterationStateResultArray).AllocatorInstance.Data[uVar39] ==
      (FScriptContainerElement)0x1) {
    pUVar6 = param_3->SplineData;
    local_680 = pUVar6;
    local_6e4 = (**(code **)(*(longlong *)pUVar6 + 0x4a0))(pUVar6);
    local_6e5 = (**(code **)(*(longlong *)pUVar6 + 0x510))(pUVar6);
    local_678 = TArray<FPCGObjectPropertyOverrideDescription,TSizedDefaultAllocator<32>_>::
                FindByPredicate<__FPCGSpawnSplineMeshElement::ExecuteInternal_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
                          ((TArray<FPCGObjectPropertyOverrideDescription,TSizedDefaultAllocator<32>_>
                            *)(*(longlong *)((longlong)this + 8) + 0x448),(<lambda_1>)local_6e8);
    local_6a0 = TArray<FPCGObjectPropertyOverrideDescription,TSizedDefaultAllocator<32>_>::
                FindByPredicate<__FPCGSpawnSplineMeshElement::ExecuteInternal_::__l2::<lambda_1>::operator()_::__l2::<lambda_2>_>
                          ((TArray<FPCGObjectPropertyOverrideDescription,TSizedDefaultAllocator<32>_>
                            *)(*(longlong *)((longlong)this + 8) + 0x448),local_6e8);
    if (param_3->ElementIndex == 0) {
      pFVar24 = FSplineMeshComponentDescriptor::FSplineMeshComponentDescriptor
                          (&local_400,
                           (FSoftSplineMeshComponentDescriptor *)
                           (*(longlong *)((longlong)this + 8) + 200));
      FSplineMeshComponentDescriptorBase::operator=
                ((FSplineMeshComponentDescriptorBase *)param_3,
                 (FSplineMeshComponentDescriptorBase *)pFVar24);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar7 = (pFVar24->StaticMesh).field0_0x0.DebugPtr, pUVar7 != (UStaticMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      pTVar2 = &(param_3->SMCBuilderParams).Descriptor.OverrideMaterials;
      (param_3->SMCBuilderParams).Descriptor.StaticMesh.field0_0x0 =
           (pFVar24->StaticMesh).field0_0x0;
      if (pTVar2 != &pFVar24->OverrideMaterials) {
        iVar34 = (pFVar24->OverrideMaterials).ArrayNum;
        piVar1 = &(param_3->SMCBuilderParams).Descriptor.OverrideMaterials.ArrayMax;
        pFVar8 = (pFVar24->OverrideMaterials).AllocatorInstance.Data;
        iVar38 = *piVar1;
        (param_3->SMCBuilderParams).Descriptor.OverrideMaterials.ArrayNum = iVar34;
        if ((iVar34 == 0) && (iVar38 == 0)) {
          *piVar1 = 0;
          this = local_6c8;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar34,iVar38,&pTVar2->AllocatorInstance,iVar34,piVar1);
          ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
                    ((pTVar2->AllocatorInstance).Data,(TObjectPtr<UMaterialInterface> *)pFVar8,
                     iVar34);
          this = local_6c8;
        }
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar9 = (pFVar24->OverlayMaterial).field0_0x0.DebugPtr,
         pUVar9 != (UMaterialInterface *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar9);
      }
      (param_3->SMCBuilderParams).Descriptor.OverlayMaterial.field0_0x0 =
           (pFVar24->OverlayMaterial).field0_0x0;
      pTVar3 = &(param_3->SMCBuilderParams).Descriptor.RuntimeVirtualTextures;
      if (pTVar3 != &pFVar24->RuntimeVirtualTextures) {
        iVar34 = (pFVar24->RuntimeVirtualTextures).ArrayNum;
        piVar1 = &(param_3->SMCBuilderParams).Descriptor.RuntimeVirtualTextures.ArrayMax;
        pFVar8 = (pFVar24->RuntimeVirtualTextures).AllocatorInstance.Data;
        iVar38 = *piVar1;
        (param_3->SMCBuilderParams).Descriptor.RuntimeVirtualTextures.ArrayNum = iVar34;
        if ((iVar34 == 0) && (iVar38 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar34,iVar38,&pTVar3->AllocatorInstance,iVar34,piVar1);
          ConstructItems<TObjectPtr<URuntimeVirtualTexture>,TObjectPtr<URuntimeVirtualTexture>,int>
                    ((pTVar3->AllocatorInstance).Data,(TObjectPtr<URuntimeVirtualTexture> *)pFVar8,
                     iVar34);
        }
      }
      FSplineMeshComponentDescriptor::~FSplineMeshComponentDescriptor(&local_400);
      this_00 = &(param_3->SMCBuilderParams).SplineMeshParams;
      FPCGSplineMeshParams::operator=
                (this_00,(FPCGSplineMeshParams *)(*(longlong *)((longlong)this + 8) + 0x310));
      if (((param_3->DescriptionOverrides).bInitialized != false) &&
         ((param_3->DescriptionOverrides).ObjectSingleOverrides.ArrayNum != 0)) {
        *(undefined1 *)&(param_3->DescriptionOverrides).OutputKey._padding_ = 0;
        (param_3->DescriptionOverrides).OutputKey.Ptr = (FSplineMeshComponentDescriptor *)param_3;
      }
      param_1 = local_6d8;
      if (((param_3->ParamsOverrides).bInitialized != false) &&
         ((param_3->ParamsOverrides).ObjectSingleOverrides.ArrayNum != 0)) {
        *(undefined1 *)&(param_3->ParamsOverrides).OutputKey._padding_ = 0;
        (param_3->ParamsOverrides).OutputKey.Ptr = this_00;
      }
    }
    dVar17 = __real_3fe0000000000000;
    dVar16 = __real_3ff0000000000000;
    iVar34 = param_3->ElementIndex;
    if (iVar34 < local_6e4) {
      uVar54 = SUB84(__real_3ff0000000000000,0);
      uVar15 = (ulonglong)__real_3ff0000000000000 >> 0x20;
      do {
        if ((param_3->DescriptionOverrides).bInitialized != false) {
          iVar38 = (param_3->DescriptionOverrides).ObjectSingleOverrides.ArrayNum;
          if (iVar38 != 0) {
            pFVar35 = (FPCGObjectSingleOverride *)
                      (param_3->DescriptionOverrides).ObjectSingleOverrides.AllocatorInstance.Data;
            bVar37 = 1;
            pFVar40 = pFVar35 + iVar38;
            while( true ) {
              if ((param_3->DescriptionOverrides).ObjectSingleOverrides.ArrayNum != iVar38) {
                local_6e7 = 0;
                `TCheckedPointerIterator<FPCGObjectSingleOverride,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_6e7);
              }
              if (pFVar35 == pFVar40) break;
              bVar21 = FPCGObjectSingleOverride::Apply
                                 (pFVar35,iVar34,
                                  (IPCGAttributeAccessorKeys *)
                                  &(param_3->DescriptionOverrides).OutputKey);
              bVar37 = bVar37 & bVar21;
              pFVar35 = pFVar35 + 1;
            }
            if (bVar37 == 0) {
              iVar34 = param_3->ElementIndex;
              pFVar25 = FText::AsLocalizable_Advanced_LocText
                                  (&local_600,L"PCGCreateSplineMeshElement",
                                   L"FailOverrideDescriptor",
                                   L"Failed to override descriptor for input {0} element {1}");
              pFVar26 = FTextFormat::FTextFormat(&local_488,pFVar25,Default);
              local_648.Type = UInt;
              local_648.TextValue.field0_0x0.TypedValue.TextData.Reference =
                   (TRefCountPtr<ITextData>)(ITextData *)0x0;
              local_648.field1_0x8.UIntValue = uVar39 & 0xffffffff;
              local_648.TextValue.field0_0x0.TypedValue.Flags = 0;
              local_628 = 0;
              local_618 = (longlong *)0x0;
              local_610 = 0;
              local_6c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_6c0.ArrayNum = 2;
              local_620 = (longlong)iVar34;
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,8,2,0,&local_6c0.AllocatorInstance,2,&local_6c0.ArrayMax);
              ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                        (local_6c0.AllocatorInstance.Data,&local_648,2);
              local_668.TextFormatData.Object = (pFVar26->TextFormatData).Object;
              local_668.TextFormatData.SharedReferenceCount.ReferenceController =
                   (pFVar26->TextFormatData).SharedReferenceCount.ReferenceController;
              if (local_668.TextFormatData.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_668.TextFormatData.SharedReferenceCount.ReferenceController)->
                SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_668.TextFormatData.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              FText::Format(&local_658,&local_668,&local_6c0);
              DestructItems<FFormatArgumentValue,int>
                        ((FFormatArgumentValue *)local_6c0.AllocatorInstance.Data,local_6c0.ArrayNum
                        );
              if ((FFormatArgumentValue *)local_6c0.AllocatorInstance.Data !=
                  (FFormatArgumentValue *)0x0) {
                FMemory::Free(local_6c0.AllocatorInstance.Data);
              }
              if (local_618 != (longlong *)0x0) {
                (**(code **)(*local_618 + 0x10))();
              }
              if (local_648.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)
              {
                (**(code **)((longlong)
                             *(ITextData *)
                              local_648.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
                          ();
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((pFVar26->TextFormatData).SharedReferenceCount.ReferenceController);
              PCGLog::LogWarningOnGraph(&local_658,(FPCGContext *)0x0);
              if (local_658.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_658.TextData.Reference + 0x10))();
              }
              if (local_600.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_600.TextData.Reference + 0x10))();
              }
            }
          }
        }
        pUVar7 = (param_3->SMCBuilderParams).Descriptor.StaticMesh.field0_0x0.DebugPtr;
        if (((pUVar7 == (UStaticMesh *)0x0) ||
            (lVar10 = (param_3->SMCBuilderParams).Descriptor._padding_, lVar10 == 0)) ||
           (pUVar27 = Z_Construct_UClass_USplineMeshComponent_NoRegister(), pUVar27 == (UClass *)0x0
           )) {
LAB_149c508a8:
          param_3->ElementIndex = param_3->ElementIndex + 1;
          param_1 = local_6d8;
        }
        else {
          iVar34 = (int)pUVar27->_padding_;
          if ((*(int *)(lVar10 + 0x38) < iVar34) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar34 * 8) !=
              &pUVar27->_padding_)) {
            bVar21 = false;
          }
          else {
            bVar21 = true;
          }
          if ((!bVar21) || ((param_3->SMCBuilderParams).Descriptor._padding_ == 0))
          goto LAB_149c508a8;
          if ((param_3->ParamsOverrides).bInitialized != false) {
            iVar34 = (param_3->ParamsOverrides).ObjectSingleOverrides.ArrayNum;
            if (iVar34 != 0) {
              pFVar35 = (FPCGObjectSingleOverride *)
                        (param_3->ParamsOverrides).ObjectSingleOverrides.AllocatorInstance.Data;
              bVar37 = 1;
              iVar38 = param_3->ElementIndex;
              pFVar40 = pFVar35 + iVar34;
              while( true ) {
                if ((param_3->ParamsOverrides).ObjectSingleOverrides.ArrayNum != iVar34) {
                  local_6e6 = 0;
                  `TCheckedPointerIterator<FPCGObjectSingleOverride,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(&local_6e6);
                }
                if (pFVar35 == pFVar40) break;
                bVar21 = FPCGObjectSingleOverride::Apply
                                   (pFVar35,iVar38,
                                    (IPCGAttributeAccessorKeys *)
                                    &(param_3->ParamsOverrides).OutputKey);
                bVar37 = bVar37 & bVar21;
                pFVar35 = pFVar35 + 1;
              }
              if (bVar37 == 0) {
                iVar34 = param_3->ElementIndex;
                pFVar25 = FText::AsLocalizable_Advanced_LocText
                                    (&local_5e0,L"PCGCreateSplineMeshElement",L"FailOverrideParams",
                                     L"Failed to override params for input {0} element {1}");
                pFVar26 = FTextFormat::FTextFormat(&local_478,pFVar25,Default);
                pFVar25 = FText::Format<unsigned_int,int>(&local_5f0,pFVar26,local_6d0,iVar34);
                PCGLog::LogWarningOnGraph(pFVar25,(FPCGContext *)0x0);
                if (local_5f0.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_5f0.TextData.Reference + 0x10))();
                }
                if (local_5e0.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_5e0.TextData.Reference + 0x10))();
                }
              }
            }
          }
          pTVar28 = UStaticMesh::GetBounds(pUVar7,&local_438);
          pUVar6 = local_680;
          iVar34 = param_3->ElementIndex;
          local_590 = (pTVar28->BoxExtent).field0_0x0._s_0.Z;
          auVar4 = *(undefined1 (*) [16])&(pTVar28->BoxExtent).field0_0x0;
          uVar41 = auVar4._8_4_;
          uVar42 = auVar4._12_4_;
          if ((local_6e5 == '\0') || (iVar34 != local_6e4 + -1)) {
            iVar38 = iVar34 + 1;
          }
          else {
            iVar38 = 0;
          }
          local_1c8 = local_1c8 & 0xffffffffffffff00;
          local_190 = local_190 & 0xffffffffffffff00;
          (**(code **)(*(longlong *)local_680 + 0x4d0))(local_680,&local_188,iVar34,0);
          lVar10 = *(longlong *)pUVar6;
          uVar46 = (**(code **)(lVar10 + 0x4b0))(pUVar6,param_3->ElementIndex);
          (**(code **)(lVar10 + 0x4d0))(pUVar6,&local_128,param_3->ElementIndex,uVar46);
          if ((param_3->LandscapeSplineData != (UPCGLandscapeSplineData *)0x0) &&
             ((param_3->SMCBuilderParams).SplineMeshParams.bScaleMeshToLandscapeSplineFullWidth ==
              false)) {
            uVar50 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z +
                           UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0);
            uVar51 = (undefined4)
                     ((ulonglong)
                      (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z +
                      UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z) >> 0x20);
            uVar52 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X +
                           UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0);
            uVar53 = (undefined4)
                     ((ulonglong)
                      (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X +
                      UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X) >> 0x20);
            local_1e8._8_4_ = uVar52;
            local_1e8._0_8_ =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z -
                 UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
            local_1e8._12_4_ = uVar53;
            uVar43 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y -
                           UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0);
            uVar44 = (undefined4)
                     ((ulonglong)
                      (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y -
                      UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y) >> 0x20);
            local_1f8._8_4_ = uVar43;
            local_1f8._0_8_ =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X -
                 UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
            local_1f8._12_4_ = uVar44;
            local_1d8._8_4_ = uVar50;
            local_1d8._0_8_ =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y +
                 UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
            local_1d8._12_4_ = uVar51;
            local_1c8 = CONCAT71(uStack_48f,1);
            local_1c0._8_4_ = uVar43;
            local_1c0._0_8_ =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X -
                 UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
            local_1c0._12_4_ = uVar44;
            local_490 = 1;
            local_1a0._8_4_ = uVar50;
            local_1a0._0_8_ =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y +
                 UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
            local_1a0._12_4_ = uVar51;
            local_190 = CONCAT71(uStack_48f,1);
            local_1b0._8_4_ = uVar52;
            local_1b0._0_8_ =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z -
                 UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
            local_1b0._12_4_ = uVar53;
          }
          (**(code **)(*(longlong *)pUVar6 + 0x500))
                    (pUVar6,param_3->ElementIndex,local_538,&local_5d0);
          (**(code **)(*(longlong *)pUVar6 + 0x500))(pUVar6,iVar38,&local_5b8,local_538);
          pFVar19 = local_6a0;
          local_510 = local_158;
          (param_3->SMCBuilderParams).SplineMeshParams.StartPosition.field0_0x0._s_0.X = local_168;
          (param_3->SMCBuilderParams).SplineMeshParams.StartPosition.field0_0x0._s_0.Y = dStack_160;
          (param_3->SMCBuilderParams).SplineMeshParams.StartPosition.field0_0x0._s_0.Z = local_158;
          local_520 = local_168;
          dStack_518 = dStack_160;
          (param_3->SMCBuilderParams).SplineMeshParams.StartTangent.field0_0x0._s_0.X = local_5d0;
          (param_3->SMCBuilderParams).SplineMeshParams.StartTangent.field0_0x0._s_0.Y = dStack_5c8;
          (param_3->SMCBuilderParams).SplineMeshParams.StartTangent.field0_0x0._s_0.Z = local_5c0;
          local_4f8 = local_f8;
          (param_3->SMCBuilderParams).SplineMeshParams.EndPosition.field0_0x0._s_0.X = local_108;
          (param_3->SMCBuilderParams).SplineMeshParams.EndPosition.field0_0x0._s_0.Y = dStack_100;
          (param_3->SMCBuilderParams).SplineMeshParams.EndPosition.field0_0x0._s_0.Z = local_f8;
          local_508 = local_108;
          dStack_500 = dStack_100;
          (param_3->SMCBuilderParams).SplineMeshParams.EndTangent.field0_0x0._s_0.X = local_5b8;
          (param_3->SMCBuilderParams).SplineMeshParams.EndTangent.field0_0x0._s_0.Y = dStack_5b0;
          (param_3->SMCBuilderParams).SplineMeshParams.EndTangent.field0_0x0._s_0.Z = local_5a8;
          if ((local_678 == (FPCGObjectPropertyOverrideDescription *)0x0) ||
             (local_6a0 == (FPCGObjectPropertyOverrideDescription *)0x0)) {
            local_578.X = local_188;
            local_578.Y = dStack_180;
            local_578.Z = local_178;
            local_578.W = dStack_170;
            local_558.X = local_128;
            local_558.Y = dStack_120;
            local_558.Z = local_118;
            local_558.W = dStack_110;
            if (local_678 == (FPCGObjectPropertyOverrideDescription *)0x0) {
              pTVar29 = UE::Math::TQuat<double>::Rotator(&local_578,&local_468);
              (param_3->SMCBuilderParams).SplineMeshParams.StartRollDegrees = (float)pTVar29->Roll;
            }
            if (pFVar19 == (FPCGObjectPropertyOverrideDescription *)0x0) {
              pTVar29 = UE::Math::TQuat<double>::Rotator(&local_558,&local_450);
              (param_3->SMCBuilderParams).SplineMeshParams.EndRollDegrees = (float)pTVar29->Roll;
            }
          }
          pvVar18 = local_6c8;
          local_4f0 = local_148;
          dStack_4e8 = dStack_140;
          dVar48 = ((double)local_1d8._0_8_ - (double)local_1f8._8_8_) * dVar17 * dStack_140;
          local_4d8 = local_e8;
          dStack_4d0 = dStack_e0;
          local_4e0 = local_138;
          dVar49 = ((double)local_1d8._8_8_ - (double)local_1e8._0_8_) * dVar17 * local_138;
          dVar13 = ((double)local_1a0._0_8_ - (double)local_1c0._8_8_) * dVar17 * dStack_e0;
          local_4c8 = local_d8;
          dVar14 = ((double)local_1a0._8_8_ - (double)local_1b0._0_8_) * dVar17 * local_d8;
          if ((param_3->SMCBuilderParams).SplineMeshParams.bScaleMeshToBounds != false) {
            EVar5 = (param_3->SMCBuilderParams).SplineMeshParams.ForwardAxis;
            dVar47 = local_590;
            if (((EVar5 != X) && (uVar41 = auVar4._0_4_, uVar42 = auVar4._4_4_, EVar5 != Y)) &&
               (uVar41 = uVar54, uVar42 = (int)uVar15, dVar47 = dVar16, EVar5 == Z)) {
              uVar41 = auVar4._0_4_;
              uVar42 = auVar4._4_4_;
              dVar47 = auVar4._8_8_;
            }
            dVar45 = dVar16 / (double)CONCAT44(uVar42,uVar41);
            dVar48 = dVar48 * dVar45;
            dVar49 = dVar49 * (dVar16 / dVar47);
            dVar13 = dVar13 * dVar45;
            dVar14 = dVar14 * (dVar16 / dVar47);
          }
          (param_3->SMCBuilderParams).SplineMeshParams.StartScale.field0_0x0._s_0.X = dVar48;
          (param_3->SMCBuilderParams).SplineMeshParams.StartScale.field0_0x0._s_0.Y = dVar49;
          (param_3->SMCBuilderParams).SplineMeshParams.EndScale.field0_0x0._s_0.X = dVar13;
          (param_3->SMCBuilderParams).SplineMeshParams.EndScale.field0_0x0._s_0.Y = dVar14;
          FVar30 = UPCGSettings::GetSettingsCrc(*(UPCGSettings **)((longlong)local_6c8 + 8));
          FVar30 = *(FPCGCrc *)FVar30;
          (param_3->SMCBuilderParams).SettingsCrc = FVar30;
          if ((FVar30.bValid == false) &&
             (bVar21 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_261674116619173581>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSpawnSplineMesh.cpp"
                                  ,0x133,"IterState.SMCBuilderParams.SettingsCrc.IsValid()"), bVar21
             )) {
            pcVar12 = (code *)swi(3);
            uVar22 = (*pcVar12)();
            return (bool)uVar22;
          }
          param_1 = local_6d8;
          pUVar31 = UPCGActorHelpers::GetOrCreateSplineMeshComponent
                              (local_698->TargetActor,*(UPCGComponent **)((longlong)pvVar18 + 0x10),
                               &param_3->SMCBuilderParams,(FPCGContext *)local_6d8);
          if (((param_3->ComponentOverrides).bInitialized != false) &&
             ((param_3->ComponentOverrides).ObjectSingleOverrides.ArrayNum != 0)) {
            (param_3->ComponentOverrides).OutputKey.Ptr = pUVar31;
            bVar21 = (param_3->ComponentOverrides).bPropagateEditChangeEvent;
            *(undefined1 *)&(param_3->ComponentOverrides).OutputKey._padding_ = 0;
            pUVar32 = (USplineMeshComponent *)0x0;
            if (bVar21 != false) {
              pUVar32 = pUVar31;
            }
            (param_3->ComponentOverrides).CachedOutputObject = (UObject *)pUVar32;
            iVar34 = (param_3->ComponentOverrides).ObjectSingleOverrides.ArrayNum;
            pFVar35 = (FPCGObjectSingleOverride *)
                      (param_3->ComponentOverrides).ObjectSingleOverrides.AllocatorInstance.Data;
            iVar38 = param_3->ElementIndex;
            pFVar40 = pFVar35 + iVar34;
            while( true ) {
              if ((param_3->ComponentOverrides).ObjectSingleOverrides.ArrayNum != iVar34) {
                local_6e8 = (<lambda_2>)0x0;
                `TCheckedPointerIterator<FPCGObjectSingleOverride,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_6e8);
              }
              param_1 = local_6d8;
              if (pFVar35 == pFVar40) break;
              FPCGObjectSingleOverride::Apply
                        (pFVar35,iVar38,
                         (IPCGAttributeAccessorKeys *)&(param_3->ComponentOverrides).OutputKey);
              pFVar35 = pFVar35 + 1;
            }
          }
          param_3->ElementIndex = param_3->ElementIndex + 1;
          bVar21 = FPCGAsyncState::ShouldStop((FPCGAsyncState *)&param_1->_padding_);
          this = local_6c8;
          if (bVar21) break;
        }
        iVar34 = param_3->ElementIndex;
        uVar39 = (ulonglong)local_6d0;
        this = local_6c8;
      } while (iVar34 < local_6e4);
    }
    pFVar20 = local_698;
    bVar21 = param_3->ElementIndex == local_6e4;
    if ((bVar21) && (local_698->TargetActor != (AActor *)0x0)) {
      pUVar33 = UPCGFunctionPrototypes::GetPrototypeWithNoParams();
      local_6b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_6b0.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,1,0,&local_6b0.AllocatorInstance,1,&local_6b0.ArrayMax);
      *(UFunction **)local_6b0.AllocatorInstance.Data = pUVar33;
      lVar10 = *(longlong *)((longlong)this + 8);
      local_670 = (UObject *)pFVar20->TargetActor->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_670 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_670);
      }
      PCGHelpers::FindUserFunctions
                (&local_690,(TSubclassOf<UObject>)&local_670,
                 (TArray<FName,TSizedDefaultAllocator<32>_> *)(lVar10 + 0x420),&local_6b0,
                 (FPCGContext *)param_1);
      if (local_6b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6b0.AllocatorInstance.Data);
      }
      iVar34 = local_690.ArrayNum;
      pFVar8 = local_690.AllocatorInstance.Data + (longlong)iVar34 * 8;
      FVar36.Data = local_690.AllocatorInstance.Data;
      while( true ) {
        if (local_690.ArrayNum != iVar34) {
          `TCheckedPointerIterator<UFunction_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_6e0);
        }
        if (FVar36.Data == pFVar8) break;
        pAVar11 = pFVar20->TargetActor;
        (**(code **)(pAVar11->_padding_ + 0x260))(pAVar11,*(undefined8 *)FVar36.Data,0);
        FVar36.Data = FVar36.Data + 8;
      }
      if (local_690.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_690.AllocatorInstance.Data);
      }
    }
  }
  else {
    bVar21 = true;
  }
  return bVar21;
}

// operator() @ 149c55ce0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

EPCGTimeSliceInitResult __thiscall
`FPCGSpawnSplineMeshElement::PrepareDataInternal'::__l19::<lambda_1>::operator()
          (void *this,
          TPCGTimeSlicedContext<FPCGSpawnSplineMeshPerExecutionState,FPCGSpawnSplineMeshPerIterationState,FPCGSpawnSplineMeshContext>
          *param_1,FPCGSpawnSplineMeshPerExecutionState *param_2)

{
  int iVar1;
  EPCGTimeSliceInitResult EVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  AActor *pAVar5;
  FText *pFVar6;
  FText local_18;
  
  pUVar3 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)(*(longlong *)this + 0x3f8));
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      pAVar5 = (AActor *)
               TPersistentObjectPtr<FSoftObjectPath>::Get
                         ((TPersistentObjectPtr<FSoftObjectPath> *)(*(longlong *)this + 0x3f8));
      if (pAVar5 != (AActor *)0x0) {
        pUVar4 = Z_Construct_UClass_AActor_NoRegister();
        iVar1 = (int)pUVar4->_padding_;
        if ((iVar1 <= *(int *)(pAVar5->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pAVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar4->_padding_)) goto LAB_149c55d83;
      }
      pAVar5 = (AActor *)0x0;
      goto LAB_149c55d83;
    }
  }
  pAVar5 = FPCGContext::GetTargetActor((FPCGContext *)param_1,(UPCGSpatialData *)0x0);
LAB_149c55d83:
  param_2->TargetActor = pAVar5;
  if (pAVar5 == (AActor *)0x0) {
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"PCGCreateSplineMeshElement",L"InvalidTargetActor",
                        L"Invalid target actor.");
    PCGLog::LogErrorOnGraph(pFVar6,(FPCGContext *)param_1);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    EVar2 = AbortExecution;
  }
  else {
    EVar2 = Success;
  }
  return EVar2;
}

// operator() @ 149c58bc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

EPCGTimeSliceInitResult __thiscall
`FPCGSpawnSplineMeshElement::PrepareDataInternal'::__l19::<lambda_2>::operator()
          (void *this,FPCGSpawnSplineMeshPerIterationState *param_1,
          FPCGSpawnSplineMeshPerExecutionState *param_2,uint param_3)

{
  longlong *plVar1;
  longlong lVar2;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *pTVar3;
  UPCGPolyLineData *pUVar4;
  FPCGContext *pFVar5;
  USplineMeshComponent *pUVar6;
  code *pcVar7;
  bool bVar8;
  EPCGTimeSliceInitResult EVar9;
  uint uVar10;
  int iVar11;
  UClass *pUVar12;
  UClass *pUVar13;
  FPCGObjectSingleOverride *this_00;
  FObjectPtr_u_0 *pFVar14;
  FPCGObjectSingleOverride *pFVar15;
  UPCGLandscapeSplineData *pUVar16;
  FObjectPtr_u_0 local_res8;
  undefined1 local_res20 [8];
  
  plVar1 = *(longlong **)this;
  uVar10 = 0;
  if ((int)param_3 < (int)plVar1[1]) {
    uVar10 = ~param_3 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    EVar9 = (*pcVar7)();
    return EVar9;
  }
  pFVar14 = (FObjectPtr_u_0 *)((longlong)(int)param_3 * 0x78 + *plVar1);
  local_res8 = (FObjectPtr_u_0)pFVar14->Handle;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if ((UPCGPolyLineData *)local_res8.Handle == (UPCGPolyLineData *)0x0) goto LAB_149c58fbc;
    UE::GC::MarkAsReachable(local_res8.Handle);
  }
  if ((UPCGPolyLineData *)local_res8.Handle == (UPCGPolyLineData *)0x0) {
LAB_149c58fbc:
    param_1->SplineData = (UPCGPolyLineData *)0x0;
    return NoOperation;
  }
  pUVar12 = Z_Construct_UClass_UPCGPolyLineData_NoRegister();
  bVar8 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar12);
  if (!bVar8) goto LAB_149c58fbc;
  param_1->SplineData = (UPCGPolyLineData *)local_res8;
  if ((UPCGPolyLineData *)local_res8.Handle == (UPCGPolyLineData *)0x0) {
    return NoOperation;
  }
  lVar2 = **(longlong **)((longlong)this + 8);
  if (((*(FObjectPtr_u_0 **)(lVar2 + 0x38) <= pFVar14) &&
      (pFVar14 < *(FObjectPtr_u_0 **)(lVar2 + 0x38) + (longlong)*(int *)(lVar2 + 0x44) * 0xf)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar7 = (code *)swi(3);
    EVar9 = (*pcVar7)();
    return EVar9;
  }
  iVar11 = *(int *)(lVar2 + 0x40);
  if (iVar11 == *(int *)(lVar2 + 0x44)) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x878,(ForAnyElementType *)(lVar2 + 0x38),(int *)(lVar2 + 0x44));
  }
  *(int *)(lVar2 + 0x40) = iVar11 + 1;
  FPCGTaggedData::FPCGTaggedData
            ((FPCGTaggedData *)((longlong)iVar11 * 0x78 + *(longlong *)(lVar2 + 0x38)),
             (FPCGTaggedData *)pFVar14);
  iVar11 = (**(code **)(*(longlong *)param_1->SplineData + 0x4a0))();
  if (iVar11 < 1) {
    return NoOperation;
  }
  pUVar16 = (UPCGLandscapeSplineData *)param_1->SplineData;
  if (pUVar16 == (UPCGLandscapeSplineData *)0x0) {
LAB_149c58d74:
    pUVar16 = (UPCGLandscapeSplineData *)0x0;
  }
  else {
    pUVar12 = Z_Construct_UClass_UPCGLandscapeSplineData_NoRegister();
    iVar11 = (int)pUVar12->_padding_;
    if ((*(int *)(pUVar16->_padding_ + 0x38) < iVar11) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar16->_padding_ + 0x30) + (longlong)iVar11 * 8) !=
        &pUVar12->_padding_)) goto LAB_149c58d74;
  }
  param_1->LandscapeSplineData = pUVar16;
  FPCGSplineMeshParams::operator=
            (&(param_1->SMCBuilderParams).SplineMeshParams,
             (FPCGSplineMeshParams *)(*(longlong *)((longlong)this + 0x10) + 0x310));
  FPCGObjectOverrides<FSplineMeshComponentDescriptor>::Initialize
            (&param_1->DescriptionOverrides,
             (TArray<FPCGObjectPropertyOverrideDescription,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)((longlong)this + 0x10) + 0x438),
             (FSplineMeshComponentDescriptor *)param_1,(UPCGData *)param_1->SplineData,
             (FPCGContext *)**(undefined8 **)((longlong)this + 8),false);
  if (((param_1->DescriptionOverrides).bInitialized != false) &&
     ((param_1->DescriptionOverrides).ObjectSingleOverrides.ArrayNum != 0)) {
    this_00 = (FPCGObjectSingleOverride *)
              (param_1->DescriptionOverrides).ObjectSingleOverrides.AllocatorInstance.Data;
    iVar11 = (param_1->DescriptionOverrides).ObjectSingleOverrides.ArrayNum;
    pTVar3 = *(TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x18);
    pFVar15 = this_00 + iVar11;
    while( true ) {
      if ((param_1->DescriptionOverrides).ObjectSingleOverrides.ArrayNum != iVar11) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FPCGObjectSingleOverride_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (this_00 == pFVar15) break;
      FPCGObjectSingleOverride::GatherAllOverridesToLoad(this_00,pTVar3);
      this_00 = this_00 + 1;
    }
  }
  FPCGObjectOverrides<FPCGSplineMeshParams>::Initialize
            (&param_1->ParamsOverrides,
             (TArray<FPCGObjectPropertyOverrideDescription,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)((longlong)this + 0x10) + 0x448),
             &(param_1->SMCBuilderParams).SplineMeshParams,(UPCGData *)param_1->SplineData,
             (FPCGContext *)**(undefined8 **)((longlong)this + 8),false);
  pUVar12 = *(UClass **)(*(longlong *)((longlong)this + 0x10) + 0xd8);
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar12 == (UClass *)0x0) {
      return Success;
    }
  }
  else {
    if (pUVar12 == (UClass *)0x0) {
      return Success;
    }
    UE::GC::MarkAsReachable((UObject *)pUVar12);
  }
  pUVar13 = Z_Construct_UClass_USplineMeshComponent_NoRegister();
  if (pUVar13 == (UClass *)0x0) {
    return Success;
  }
  iVar11 = (int)pUVar13->_padding_;
  if (((int)pUVar12->_padding_ < iVar11) ||
     ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar11 * 8) != &pUVar13->_padding_
     )) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if (!bVar8) {
    return Success;
  }
  pUVar4 = param_1->SplineData;
  pFVar5 = (FPCGContext *)**(undefined8 **)((longlong)this + 8);
  pUVar13 = Z_Construct_UClass_USplineMeshComponent_NoRegister();
  if (pUVar13 != (UClass *)0x0) {
    iVar11 = (int)pUVar13->_padding_;
    if (((int)pUVar12->_padding_ < iVar11) ||
       ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar11 * 8) !=
        &pUVar13->_padding_)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (bVar8) goto LAB_149c58f29;
  }
  pUVar12 = (UClass *)0x0;
LAB_149c58f29:
  if ((pUVar12->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar12);
  }
  pUVar6 = (USplineMeshComponent *)(pUVar12->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar12 = Z_Construct_UClass_USplineMeshComponent_NoRegister();
  lVar2 = pUVar6->_padding_;
  iVar11 = (int)pUVar12->_padding_;
  if (((*(int *)(lVar2 + 0x38) < iVar11) ||
      ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar11 * 8) !=
       &pUVar12->_padding_)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ret->IsA(T::StaticClass())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0x1181,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    EVar9 = (*pcVar7)();
    return EVar9;
  }
  FPCGObjectOverrides<USplineMeshComponent>::Initialize
            (&param_1->ComponentOverrides,
             (TArray<FPCGObjectPropertyOverrideDescription,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)((longlong)this + 0x10) + 0x458),pUVar6,(UPCGData *)pUVar4,pFVar5,false);
  return Success;
}

// CanExecuteOnlyOnMainThread @ 149c5d650

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
FPCGSpawnSplineMeshElement::CanExecuteOnlyOnMainThread
          (FPCGSpawnSplineMeshElement *this,FPCGContext *param_1)

{
  return true;
}

// ExecuteInternal @ 149c68320

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
FPCGSpawnSplineMeshElement::ExecuteInternal(FPCGSpawnSplineMeshElement *this,FPCGContext *param_1)

{
  ulong64 *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  IPCGGraphExecutionSource *pIVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  UPCGSpawnSplineMeshSettings *pUVar10;
  longlong lVar11;
  UClass *pUVar12;
  bool bVar13;
  undefined1 local_res10 [8];
  FPCGSpawnSplineMeshElement *local_38;
  UPCGSpawnSplineMeshSettings *local_30;
  longlong local_28;
  
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId170,"FPCGCreateSplineMeshElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSpawnSplineMesh.cpp"
               ,0xaa);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId170);
  }
  pUVar10 = FPCGContext::GetInputSettings<UPCGSpawnSplineMeshSettings>(param_1);
  if ((pUVar10 == (UPCGSpawnSplineMeshSettings *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSpawnSplineMesh.cpp"
                         ,0xae,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  bVar7 = TPCGTimeSlicedContext<FPCGSpawnSplineMeshPerExecutionState,FPCGSpawnSplineMeshPerIterationState,FPCGSpawnSplineMeshContext>
          ::DataIsPreparedForExecution
                    ((TPCGTimeSlicedContext<FPCGSpawnSplineMeshPerExecutionState,FPCGSpawnSplineMeshPerIterationState,FPCGSpawnSplineMeshContext>
                      *)param_1);
  if ((((bVar7) && ((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0)
       ) && (bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), bVar7))
     && ((pIVar5 = (param_1->ExecutionSource).InterfaceInstance,
         pIVar5 != (IPCGGraphExecutionSource *)0x0 &&
         (lVar11 = (**(code **)((longlong)*pIVar5 + 8))(), lVar11 != 0)))) {
    pUVar12 = Z_Construct_UClass_UPCGComponent_NoRegister();
    iVar3 = (int)pUVar12->_padding_;
    if ((iVar3 <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) + (longlong)iVar3 * 8)
        == &pUVar12->_padding_)) {
      puVar1 = &param_1[1].InputData.InactiveOutputPinBitmask;
      *(int *)puVar1 = (int)*puVar1 + 1;
      local_38 = this;
      local_30 = pUVar10;
      local_28 = lVar11;
      bVar7 = TPCGTimeSlicedContext<FPCGSpawnSplineMeshPerExecutionState,FPCGSpawnSplineMeshPerIterationState,FPCGSpawnSplineMeshContext>
              ::DataIsPreparedForExecution
                        ((TPCGTimeSlicedContext<FPCGSpawnSplineMeshPerExecutionState,FPCGSpawnSplineMeshPerIterationState,FPCGSpawnSplineMeshContext>
                          *)param_1);
      if (((bVar7) ||
          (local_res10[0] = bVar7,
          bVar7 = `TPCGTimeSlicedElementBase<FPCGSpawnSplineMeshPerExecutionState,FPCGSpawnSplineMeshPerIterationState,FPCGSpawnSplineMeshContext>
                  ::ExecuteSlice'::__l3::<lambda_1>::operator()(local_res10), bVar7)) &&
         ((int)param_1[1].OutputData.InactiveOutputPinBitmask != 0)) {
        do {
          uVar4 = *(uint *)((longlong)&param_1[1].InputData.InactiveOutputPinBitmask + 4);
          uVar9 = 0;
          if ((int)uVar4 < (int)param_1[1].OutputData.InactiveOutputPinBitmask) {
            uVar9 = ~uVar4 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          bVar7 = `FPCGSpawnSplineMeshElement::ExecuteInternal'::__l2::<lambda_1>::operator()
                            (&local_38,
                             (TPCGTimeSlicedContext<FPCGSpawnSplineMeshPerExecutionState,FPCGSpawnSplineMeshPerIterationState,FPCGSpawnSplineMeshContext>
                              *)param_1,
                             (FPCGSpawnSplineMeshPerExecutionState *)&param_1[1].OutputData.DataCrcs
                             ,(FPCGSpawnSplineMeshPerIterationState *)
                              ((longlong)(int)uVar4 * 0x3d0 +
                              *(longlong *)&param_1[1].OutputData.DataCrcs.ArrayNum),uVar4);
          if (!bVar7) {
            bVar7 = false;
            goto LAB_149c6853c;
          }
          piVar2 = (int *)((longlong)&param_1[1].InputData.InactiveOutputPinBitmask + 4);
          *piVar2 = *piVar2 + 1;
        } while ((*(int *)((longlong)&param_1[1].InputData.InactiveOutputPinBitmask + 4) <
                  (int)param_1[1].OutputData.InactiveOutputPinBitmask) &&
                (bVar7 = FPCGAsyncState::ShouldStop(&param_1->AsyncState), !bVar7));
        bVar7 = *(int *)((longlong)&param_1[1].InputData.InactiveOutputPinBitmask + 4) ==
                (int)param_1[1].OutputData.InactiveOutputPinBitmask;
        goto LAB_149c6853c;
      }
    }
  }
  bVar7 = true;
LAB_149c6853c:
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar7;
}

// IsCacheable @ 149c80670

bool __thiscall
FPCGSpawnSplineMeshElement::IsCacheable(FPCGSpawnSplineMeshElement *this,UPCGSettings *param_1)

{
  return false;
}

// PrepareDataInternal @ 149c81cb0

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
FPCGSpawnSplineMeshElement::PrepareDataInternal
          (FPCGSpawnSplineMeshElement *this,FPCGContext *param_1)

{
  void *_Src;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  TPCGTimeSlicedContext<FPCGSpawnSplineMeshPerExecutionState,FPCGSpawnSplineMeshPerIterationState,FPCGSpawnSplineMeshContext>
  *pTVar3;
  bool bVar4;
  undefined1 uVar5;
  EPCGTimeSliceInitResult EVar6;
  uint uVar7;
  UPCGSpawnSplineMeshSettings *pUVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  size_t _Size;
  bool bVar12;
  TPCGTimeSlicedContext<FPCGSpawnSplineMeshPerExecutionState,FPCGSpawnSplineMeshPerIterationState,FPCGSpawnSplineMeshContext>
  *local_res10;
  TPCGTimeSlicedContext<FPCGSpawnSplineMeshPerExecutionState,FPCGSpawnSplineMeshPerIterationState,FPCGSpawnSplineMeshContext>
  *local_res18;
  UPCGSpawnSplineMeshSettings *local_res20;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_98;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_88;
  code *local_78;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> **local_70;
  FSoftObjectPath local_68;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *local_48;
  TPCGTimeSlicedContext<FPCGSpawnSplineMeshPerExecutionState,FPCGSpawnSplineMeshPerIterationState,FPCGSpawnSplineMeshContext>
  **local_40;
  UPCGSpawnSplineMeshSettings *local_38;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *local_30;
  
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId65,"FPCGCreateSplineMeshElement::PrepareDataInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSpawnSplineMesh.cpp"
               ,0x41);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId65);
  }
  local_res10 = (TPCGTimeSlicedContext<FPCGSpawnSplineMeshPerExecutionState,FPCGSpawnSplineMeshPerIterationState,FPCGSpawnSplineMeshContext>
                 *)param_1;
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSpawnSplineMesh.cpp"
                         ,0x44,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  pUVar8 = FPCGContext::GetInputSettings<UPCGSpawnSplineMeshSettings>((FPCGContext *)local_res10);
  if ((pUVar8 == (UPCGSpawnSplineMeshSettings *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSpawnSplineMesh.cpp"
                         ,0x47,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  FPCGDataCollection::GetInputsByPin
            ((FPCGDataCollection *)&local_res10->_padding_,&local_88,
             &PCGPinConstants::DefaultInputLabel);
  if ((char)local_res10->_padding_ == '\0') {
    local_68.AssetPath.PackageName.ComparisonIndex.Value =
         *(uint *)&(pUVar8->SplineMeshDescriptor).StaticMesh.SoftObjectPtr.field_0x8;
    local_68.AssetPath.PackageName.Number =
         *(uint *)&(pUVar8->SplineMeshDescriptor).StaticMesh.SoftObjectPtr.field_0xc;
    local_68.AssetPath.AssetName.ComparisonIndex.Value =
         *(uint *)&(pUVar8->SplineMeshDescriptor).StaticMesh.SoftObjectPtr.field_0x10;
    local_68.AssetPath.AssetName.Number =
         *(uint *)&(pUVar8->SplineMeshDescriptor).StaticMesh.SoftObjectPtr.field_0x14;
    local_68.SubPathString.Data.ArrayNum =
         *(int *)&(pUVar8->SplineMeshDescriptor).StaticMesh.SoftObjectPtr.field_0x20;
    _Size = (size_t)local_68.SubPathString.Data.ArrayNum;
    _Src = *(void **)&(pUVar8->SplineMeshDescriptor).StaticMesh.SoftObjectPtr.field_0x18;
    local_68.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_68.SubPathString.Data.ArrayNum == 0) {
      local_68.SubPathString.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_68.SubPathString.Data.ArrayNum,0,
                 (ForAnyElementType *)&local_68.SubPathString,local_68.SubPathString.Data.ArrayNum,
                 &local_68.SubPathString.Data.ArrayMax);
      memcpy(local_68.SubPathString.Data.AllocatorInstance.Data,_Src,_Size);
    }
    local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_98.AllocatorInstance,1,&local_98.ArrayMax);
    ConstructItems<FSoftObjectPath,FSoftObjectPath,int>(local_98.AllocatorInstance.Data,&local_68,1)
    ;
    if (local_68.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.SubPathString.Data.AllocatorInstance.Data);
    }
    if (*(longlong *)&(pUVar8->SplineMeshDescriptor).OverlayMaterial.SoftObjectPtr.field_0x8 != 0) {
      if (local_98.ArrayNum == local_98.ArrayMax) {
        local_98.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&local_98.AllocatorInstance,&local_98.ArrayMax);
      }
      lVar9 = (longlong)local_98.ArrayNum;
      local_98.ArrayNum = local_98.ArrayNum + 1;
      FSoftObjectPath::FSoftObjectPath
                ((FSoftObjectPath *)(local_98.AllocatorInstance.Data + lVar9 * 0x20),
                 (FSoftObjectPath *)
                 &(pUVar8->SplineMeshDescriptor).OverlayMaterial.SoftObjectPtr.field_0x8);
    }
    uVar11 = 0;
    if (0 < (pUVar8->SplineMeshDescriptor).OverrideMaterials.ArrayNum) {
      lVar9 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar11 < (pUVar8->SplineMeshDescriptor).OverrideMaterials.ArrayNum) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        if (*(longlong *)
             ((pUVar8->SplineMeshDescriptor).OverrideMaterials.AllocatorInstance.Data + lVar9 + 8)
            != 0) {
          uVar7 = 0;
          if ((int)uVar11 < (pUVar8->SplineMeshDescriptor).OverrideMaterials.ArrayNum) {
            uVar7 = ~uVar11 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          pFVar1 = (pUVar8->SplineMeshDescriptor).OverrideMaterials.AllocatorInstance.Data;
          if (local_98.ArrayNum == local_98.ArrayMax) {
            local_98.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&local_98.AllocatorInstance,&local_98.ArrayMax);
          }
          lVar10 = (longlong)local_98.ArrayNum;
          local_98.ArrayNum = local_98.ArrayNum + 1;
          FSoftObjectPath::FSoftObjectPath
                    ((FSoftObjectPath *)(local_98.AllocatorInstance.Data + lVar10 * 0x20),
                     (FSoftObjectPath *)(pFVar1 + (longlong)(int)uVar11 * 0x28 + 8));
        }
        uVar11 = uVar11 + 1;
        lVar9 = lVar9 + 0x28;
      } while ((int)uVar11 < (pUVar8->SplineMeshDescriptor).OverrideMaterials.ArrayNum);
    }
    uVar11 = 0;
    if (0 < (pUVar8->SplineMeshDescriptor).RuntimeVirtualTextures.ArrayNum) {
      lVar9 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar11 < (pUVar8->SplineMeshDescriptor).RuntimeVirtualTextures.ArrayNum) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        if (*(longlong *)
             ((pUVar8->SplineMeshDescriptor).RuntimeVirtualTextures.AllocatorInstance.Data +
             lVar9 + 8) != 0) {
          uVar7 = 0;
          if ((int)uVar11 < (pUVar8->SplineMeshDescriptor).RuntimeVirtualTextures.ArrayNum) {
            uVar7 = ~uVar11 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          pFVar1 = (pUVar8->SplineMeshDescriptor).RuntimeVirtualTextures.AllocatorInstance.Data;
          if (local_98.ArrayNum == local_98.ArrayMax) {
            local_98.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&local_98.AllocatorInstance,&local_98.ArrayMax);
          }
          lVar10 = (longlong)local_98.ArrayNum;
          local_98.ArrayNum = local_98.ArrayNum + 1;
          FSoftObjectPath::FSoftObjectPath
                    ((FSoftObjectPath *)(local_98.AllocatorInstance.Data + lVar10 * 0x20),
                     (FSoftObjectPath *)(pFVar1 + (longlong)(int)uVar11 * 0x28 + 8));
        }
        uVar11 = uVar11 + 1;
        lVar9 = lVar9 + 0x28;
      } while ((int)uVar11 < (pUVar8->SplineMeshDescriptor).RuntimeVirtualTextures.ArrayNum);
    }
    pTVar3 = local_res10;
    EVar6 = local_res10->ExecutionStateResult;
    local_res20 = pUVar8;
    if (EVar6 == Uninitialized) {
      local_res18 = local_res10;
      EVar6 = UE::Core::Private::Function::
              TFunctionRefCaller<`FPCGSpawnSplineMeshElement::PrepareDataInternal'::__l19::<lambda_1>,enum_EPCGTimeSliceInitResult,TPCGTimeSlicedContext<FPCGSpawnSplineMeshPerExecutionState,FPCGSpawnSplineMeshPerIterationState,FPCGSpawnSplineMeshContext>_*,FPCGSpawnSplineMeshPerExecutionState_&>
              ::Call(&local_res20,&local_res18,&local_res10->PerExecutionStateData);
      pTVar3->ExecutionStateResult = EVar6;
    }
    if (EVar6 == AbortExecution) {
      bVar4 = true;
    }
    else {
      local_48 = &local_88;
      local_40 = &local_res10;
      local_30 = &local_98;
      local_70 = &local_48;
      local_78 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FPCGSpawnSplineMeshElement::PrepareDataInternal'::__l19::<lambda_2>,enum_EPCGTimeSliceInitResult,FPCGSpawnSplineMeshPerIterationState_&,FPCGSpawnSplineMeshPerExecutionState_const_&,unsigned_int>
                 ::Call;
      local_38 = pUVar8;
      TPCGTimeSlicedContext<FPCGSpawnSplineMeshPerExecutionState,FPCGSpawnSplineMeshPerIterationState,FPCGSpawnSplineMeshContext>
      ::InitializePerIterationStates
                (local_res10,local_88.ArrayNum,
                 (TFunctionRef<EPCGTimeSliceInitResult___cdecl(FPCGSpawnSplineMeshPerIterationState_&,FPCGSpawnSplineMeshPerExecutionState_const_&,unsigned_int)>
                  *)&local_78);
      bVar4 = IPCGAsyncLoadingContext::RequestResourceLoad
                        ((IPCGAsyncLoadingContext *)&local_res10->_padding_,
                         (FPCGContext *)local_res10,&local_98,pUVar8->bSynchronousLoad == false);
    }
    DestructItems<FSoftObjectPath,int>
              ((FSoftObjectPath *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
    if ((FSoftObjectPath *)local_98.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
      FMemory::Free(local_98.AllocatorInstance.Data);
    }
  }
  else {
    bVar4 = true;
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if ((FPCGTaggedData *)local_88.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar4;
}

