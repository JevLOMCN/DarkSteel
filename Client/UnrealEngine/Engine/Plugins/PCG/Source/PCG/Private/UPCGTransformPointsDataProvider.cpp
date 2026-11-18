// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 14972d6d0

UClass * __cdecl UPCGTransformPointsDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGTransformPointsDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGTransformPointsDataProvider",
               &Z_Registration_Info_UClass_UPCGTransformPointsDataProvider.InnerSingleton,
               StaticRegisterNativesUPCGTransformPointsDataProvider,0xa0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGTransformPointsDataProvider>,
               InternalVTableHelperCtorCaller<UPCGTransformPointsDataProvider>,local_res8,
               UPCGComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGTransformPointsDataProvider.InnerSingleton;
}

// UPCGTransformPointsDataProvider @ 14973cdb0

UPCGTransformPointsDataProvider * __thiscall
UPCGTransformPointsDataProvider::UPCGTransformPointsDataProvider
          (UPCGTransformPointsDataProvider *this,FVTableHelper *param_1)

{
  UPCGComputeDataProvider::UPCGComputeDataProvider((UPCGComputeDataProvider *)this,param_1);
  this->AttributeId = -1;
  this->_padding_ = (longlong)&___7UPCGTransformPointsDataProvider__6B_;
  return this;
}

// UPCGTransformPointsDataProvider @ 14973cdf0

UPCGTransformPointsDataProvider * __thiscall
UPCGTransformPointsDataProvider::UPCGTransformPointsDataProvider
          (UPCGTransformPointsDataProvider *this,FObjectInitializer *param_1)

{
  UPCGComputeDataProvider::UPCGComputeDataProvider((UPCGComputeDataProvider *)this,param_1);
  this->AttributeId = -1;
  this->_padding_ = (longlong)&___7UPCGTransformPointsDataProvider__6B_;
  return this;
}

// ~UPCGTransformPointsDataProvider @ 14973eb30

void __thiscall
UPCGTransformPointsDataProvider::~UPCGTransformPointsDataProvider
          (UPCGTransformPointsDataProvider *this)

{
  this->_padding_ = (longlong)&___7UPCGComputeDataProvider__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  return;
}

// GetPrivateStaticClass @ 14975cf40

UClass * __cdecl UPCGTransformPointsDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGTransformPointsDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGTransformPointsDataProvider",
               &Z_Registration_Info_UClass_UPCGTransformPointsDataProvider.InnerSingleton,
               StaticRegisterNativesUPCGTransformPointsDataProvider,0xa0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGTransformPointsDataProvider>,
               InternalVTableHelperCtorCaller<UPCGTransformPointsDataProvider>,local_res8,
               UPCGComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGTransformPointsDataProvider.InnerSingleton;
}

// GetRenderProxy @ 14975f360

FComputeDataProviderRenderProxy * __thiscall
UPCGTransformPointsDataProvider::GetRenderProxy(UPCGTransformPointsDataProvider *this)

{
  FComputeDataProviderRenderProxy FVar1;
  FComputeDataProviderRenderProxy FVar2;
  FComputeDataProviderRenderProxy FVar3;
  FComputeDataProviderRenderProxy FVar4;
  FComputeDataProviderRenderProxy FVar5;
  FComputeDataProviderRenderProxy FVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  UObject *pUVar10;
  FComputeDataProviderRenderProxy FVar11;
  FComputeDataProviderRenderProxy FVar12;
  FComputeDataProviderRenderProxy FVar13;
  FComputeDataProviderRenderProxy FVar14;
  FComputeDataProviderRenderProxy FVar15;
  FComputeDataProviderRenderProxy FVar16;
  FComputeDataProviderRenderProxy FVar17;
  FComputeDataProviderRenderProxy FVar18;
  FComputeDataProviderRenderProxy FVar19;
  FComputeDataProviderRenderProxy FVar20;
  FComputeDataProviderRenderProxy FVar21;
  FComputeDataProviderRenderProxy FVar22;
  FComputeDataProviderRenderProxy FVar23;
  FComputeDataProviderRenderProxy FVar24;
  FComputeDataProviderRenderProxy FVar25;
  FComputeDataProviderRenderProxy FVar26;
  UPCGSettings *pUVar27;
  UPCGTransformPointsSettings *pUVar28;
  FComputeDataProviderRenderProxy *pFVar29;
  undefined4 uStack_b4;
  undefined4 uStack_7c;
  undefined4 uStack_34;
  TVector<double> local_28;
  
  pUVar10 = (UObject *)this->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar10);
  }
  pUVar27 = (UPCGSettings *)(**(code **)(*(longlong *)pUVar10 + 0x2b0))(pUVar10);
  pUVar28 = CastChecked<UPCGTransformPointsSettings,UPCGSettings_const_>(pUVar27);
  FVar11 = (FComputeDataProviderRenderProxy)(pUVar28->OffsetMin).field0_0x0._s_0.X;
  FVar12 = (FComputeDataProviderRenderProxy)(pUVar28->OffsetMin).field0_0x0._s_0.Y;
  FVar1 = (FComputeDataProviderRenderProxy)(pUVar28->OffsetMin).field0_0x0._s_0.Z;
  FVar13 = (FComputeDataProviderRenderProxy)(pUVar28->OffsetMax).field0_0x0._s_0.X;
  FVar14 = (FComputeDataProviderRenderProxy)(pUVar28->OffsetMax).field0_0x0._s_0.Y;
  FVar23._1_3_ = 0;
  FVar23._0_1_ = pUVar28->bAbsoluteOffset;
  FVar2 = (FComputeDataProviderRenderProxy)(pUVar28->OffsetMax).field0_0x0._s_0.Z;
  pFVar29 = (FComputeDataProviderRenderProxy *)
            UE::Math::TRotator<double>::Euler(&pUVar28->RotationMin,&local_28);
  FVar15 = *pFVar29;
  FVar16 = pFVar29[1];
  FVar3 = pFVar29[2];
  pFVar29 = (FComputeDataProviderRenderProxy *)
            UE::Math::TRotator<double>::Euler(&pUVar28->RotationMax,&local_28);
  FVar17 = *pFVar29;
  FVar18 = pFVar29[1];
  FVar4 = pFVar29[2];
  FVar24._1_3_ = 0;
  FVar24._0_1_ = pUVar28->bAbsoluteRotation;
  FVar25._1_3_ = 0;
  FVar25._0_1_ = pUVar28->bAbsoluteScale;
  bVar7 = pUVar28->bUniformScale;
  FVar19 = (FComputeDataProviderRenderProxy)(pUVar28->ScaleMin).field0_0x0._s_0.X;
  FVar20 = (FComputeDataProviderRenderProxy)(pUVar28->ScaleMin).field0_0x0._s_0.Y;
  FVar26._1_3_ = 0;
  FVar26._0_1_ = pUVar28->bRecomputeSeed;
  bVar8 = pUVar28->bApplyToAttribute;
  FVar5 = (FComputeDataProviderRenderProxy)(pUVar28->ScaleMin).field0_0x0._s_0.Z;
  FVar21 = (FComputeDataProviderRenderProxy)(pUVar28->ScaleMax).field0_0x0._s_0.X;
  FVar22 = (FComputeDataProviderRenderProxy)(pUVar28->ScaleMax).field0_0x0._s_0.Y;
  iVar9 = this->AttributeId;
  FVar6 = (FComputeDataProviderRenderProxy)(pUVar28->ScaleMax).field0_0x0._s_0.Z;
  pFVar29 = ::operator_new(0xc0);
  if (pFVar29 != (FComputeDataProviderRenderProxy *)0x0) {
    *pFVar29 = (FComputeDataProviderRenderProxy)&___7FPCGTransformPointsDataProviderProxy__6B_;
    pFVar29[1] = FVar11;
    pFVar29[2] = FVar12;
    pFVar29[3] = FVar1;
    pFVar29[4] = FVar13;
    FVar23._4_4_ = uStack_b4;
    pFVar29[5] = FVar14;
    pFVar29[6] = FVar2;
    pFVar29[7] = FVar23;
    pFVar29[8] = FVar15;
    pFVar29[9] = FVar16;
    pFVar29[10] = FVar3;
    FVar24._4_4_ = uStack_7c;
    pFVar29[0xb] = FVar17;
    pFVar29[0xc] = FVar18;
    pFVar29[0xd] = FVar4;
    pFVar29[0xe] = FVar24;
    pFVar29[0xf] = FVar19;
    pFVar29[0x10] = FVar20;
    pFVar29[0x11] = FVar5;
    pFVar29[0x12] = FVar21;
    FVar25._4_1_ = bVar7;
    FVar25._5_3_ = 0;
    FVar26._4_1_ = bVar8;
    FVar26._5_3_ = 0;
    FVar1._4_4_ = uStack_34;
    FVar1._0_4_ = iVar9;
    pFVar29[0x13] = FVar22;
    pFVar29[0x14] = FVar6;
    pFVar29[0x15] = FVar25;
    pFVar29[0x16] = FVar26;
    pFVar29[0x17] = FVar1;
    return pFVar29;
  }
  return (FComputeDataProviderRenderProxy *)0x0;
}

// PrepareForExecute_GameThread @ 149773bd0

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
UPCGTransformPointsDataProvider::PrepareForExecute_GameThread
          (UPCGTransformPointsDataProvider *this,UPCGDataBinding *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  FPCGContext *pFVar5;
  UObject *pUVar6;
  UPCGComputeKernel *pUVar7;
  code *pcVar8;
  FName FVar9;
  undefined1 uVar10;
  bool bVar11;
  atomic<int> aVar12;
  UPCGSettings *pUVar13;
  UPCGTransformPointsSettings *pUVar14;
  FText *pFVar15;
  FText *pFVar16;
  FTextFormat *pFVar17;
  int *piVar18;
  FPCGContextHandle *pFVar19;
  int *piVar20;
  FScriptContainerElement *pFVar21;
  FScriptContainerElement *pFVar22;
  FScriptContainerElement *pFVar23;
  bool bVar24;
  TReferenceControllerBase<1> *local_res18;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FTextFormat local_48;
  
  pTVar4 = (param_1->ContextHandle).WeakReferenceCount.ReferenceController;
  pFVar19 = (param_1->ContextHandle).Object;
  local_res18 = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        local_res18 = (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar12 = pTVar4->SharedReferenceCount;
      bVar24 = aVar2 == aVar12;
      if (bVar24) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar12 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar12;
    } while (!bVar24);
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4);
    }
    if (local_res18 == (TReferenceControllerBase<1> *)0x0) {
      pFVar19 = (FPCGContextHandle *)0x0;
    }
    if ((pFVar19 != (FPCGContextHandle *)0x0) &&
       (pFVar5 = pFVar19->Context, pFVar5 != (FPCGContext *)0x0)) {
      pUVar6 = (UObject *)this->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      pUVar13 = (UPCGSettings *)(**(code **)(*(longlong *)pUVar6 + 0x2b0))(pUVar6);
      pUVar14 = CastChecked<UPCGTransformPointsSettings,UPCGSettings_const_>(pUVar13);
      FVar9 = PCGPinConstants::DefaultInputLabel;
      if ((pUVar14->bApplyToAttribute == false) || (this->AttributeId != -1)) goto LAB_149773d56;
      pUVar7 = (UPCGComputeKernel *)this->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar7 != (UPCGComputeKernel *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      UPCGDataBinding::GetCachedKernelPinDataDesc(param_1,&local_88,pUVar7,FVar9,true);
      if (local_88.Object == (FPCGDataCollectionDesc *)0x0) {
        bVar24 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_4822496220339502910>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGTransformPointsDataInterface.cpp"
                            ,0xc2,"InputDataDesc");
        if (bVar24) {
          pcVar8 = (code *)swi(3);
          uVar10 = (*pcVar8)();
          return (bool)uVar10;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_88.SharedReferenceCount.ReferenceController);
        goto LAB_149773d56;
      }
      bVar24 = false;
      if ((local_88.Object == (FPCGDataCollectionDesc *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        uVar10 = (*pcVar8)();
        return (bool)uVar10;
      }
      iVar3 = ((local_88.Object)->DataDescs).ArrayNum;
      pFVar21 = ((local_88.Object)->DataDescs).AllocatorInstance.Data;
      if ((iVar3 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        uVar10 = (*pcVar8)();
        return (bool)uVar10;
      }
      pFVar23 = pFVar21 + (longlong)iVar3 * 0x68;
      if (pFVar21 != pFVar23) {
        pFVar22 = pFVar21 + 0x18;
        bVar24 = false;
        do {
          bVar11 = bVar24;
          if (0 < *(int *)pFVar22) {
            iVar3 = *(int *)(pFVar22 + 0x20);
            bVar24 = true;
            piVar20 = *(int **)(pFVar22 + 0x18);
            if ((iVar3 < 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar11)) {
              pcVar8 = (code *)swi(3);
              uVar10 = (*pcVar8)();
              return (bool)uVar10;
            }
            piVar18 = piVar20 + (longlong)iVar3 * 0x1e;
            bVar11 = true;
            if (piVar20 != piVar18) {
              do {
                if ((*(FName *)(piVar20 + 2) == pUVar14->AttributeName) &&
                   ((char)piVar20[8] == '\t')) {
                  this->AttributeId = *piVar20;
                  goto LAB_149773e70;
                }
                piVar20 = piVar20 + 0x1e;
              } while (piVar20 != piVar18);
            }
          }
          bVar24 = bVar11;
          pFVar21 = pFVar21 + 0x68;
          pFVar22 = pFVar22 + 0x68;
        } while (pFVar21 != pFVar23);
      }
LAB_149773e70:
      if (this->AttributeId == -1) {
        if ((local_88.Object == (FPCGDataCollectionDesc *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          uVar10 = (*pcVar8)();
          return (bool)uVar10;
        }
        iVar3 = ((local_88.Object)->DataDescs).ArrayNum;
        if (iVar3 < 0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L"");
          if (bVar11) {
            pcVar8 = (code *)swi(3);
            uVar10 = (*pcVar8)();
            return (bool)uVar10;
          }
        }
        else if (iVar3 == 0) goto LAB_149773f7f;
        if (bVar24) {
          pFVar15 = FText::FromName(&local_58,&pUVar14->AttributeName);
          pFVar16 = FText::AsLocalizable_Advanced_LocText
                              (&local_68,L"PCGTransformPointsDataInterface",
                               L"TransformPointsAttributeNotFound",
                               L"Transfrom points attribute \'{0}\' not found.");
          pFVar17 = FTextFormat::FTextFormat(&local_48,pFVar16,Default);
          pFVar15 = FText::Format<FText>(&local_78,pFVar17,pFVar15);
          PCGComputeHelpers::LogKernelError(pFVar5,(UPCGSettings *)pUVar14,pFVar15);
          if (local_78.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
          }
          if (local_68.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
          }
        }
      }
LAB_149773f7f:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.SharedReferenceCount.ReferenceController);
      goto LAB_149773d56;
    }
  }
  bVar24 = UE::Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<_4822496220339502921>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGTransformPointsDataInterface.cpp"
                      ,0xb7,"Context");
  if (bVar24) {
    pcVar8 = (code *)swi(3);
    uVar10 = (*pcVar8)();
    return (bool)uVar10;
  }
LAB_149773d56:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_res18);
  return true;
}

// Reset @ 1497754e0

void __thiscall UPCGTransformPointsDataProvider::Reset(UPCGTransformPointsDataProvider *this)

{
  UPCGComputeDataProvider::Reset((UPCGComputeDataProvider *)this);
  this->AttributeId = -1;
  return;
}

// StaticRegisterNativesUPCGTransformPointsDataProvider @ 149778900

void __cdecl
UPCGTransformPointsDataProvider::StaticRegisterNativesUPCGTransformPointsDataProvider(void)

{
  return;
}

