// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 6

// operator() @ 149ad8380

/* WARNING: Removing unreachable block (ram,0x000149ad85c2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`FPCGBlurElement::ExecuteInternal'::__l2::<lambda_1>::operator()
          (void *this,
          TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,FPCGBlurIterState,FPCGContext> *param_1,
          FEmptyStruct *param_2,FPCGBlurIterState *param_3,uint param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  FPCGBlurIterState *local_130;
  undefined8 local_128;
  TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,FPCGBlurIterState,FPCGContext> *local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  TVector2<double>_u_0 local_c8;
  TVector<double>_u_0 local_b8;
  TVector4<double>_u_0 local_98;
  TQuat<double> local_78;
  TQuat<double> local_58;
  undefined8 local_28;
  
  if ((((int)param_4 < 0) || ((param_1->PerIterationStateResultArray).ArrayNum <= (int)param_4)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && Index < PerIterationStateResultArray.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\PCGTimeSlicedElementBase.h"
                         ,0x48,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  uVar4 = 0;
  if ((int)param_4 < (param_1->PerIterationStateResultArray).ArrayNum) {
    uVar4 = ~param_4 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((param_1->PerIterationStateResultArray).AllocatorInstance.Data[(int)param_4] !=
      (FScriptContainerElement)0x1) goto LAB_149ad8555;
  local_128 = *(undefined8 *)((longlong)this + 8);
  local_118 = *(undefined8 *)((longlong)this + 0x10);
  uStack_110 = *(undefined8 *)((longlong)this + 0x18);
  local_130 = param_3;
  local_120 = param_1;
  switch(((param_3->InputAccessor).Ptr)->UnderlyingType) {
  case 0:
  case 1:
  case 2:
  case 3:
    bVar2 = ``FPCGBlurElement::ExecuteInternal'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::
            operator()<double>(&local_130,0.0);
    break;
  case 4:
    local_c8._s_0.X = 0.0;
    local_c8._s_0.Y = 0.0;
    bVar2 = ``FPCGBlurElement::ExecuteInternal'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::
            operator()<UE::Math::TVector2<double>_>(&local_130,(TVector2<double> *)&local_c8._s_0);
    break;
  case 5:
    local_b8._s_0.X = 0.0;
    local_b8._s_0.Y = 0.0;
    local_28 = 0;
    local_b8._s_0.Z = 0.0;
    bVar2 = ``FPCGBlurElement::ExecuteInternal'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::
            operator()<UE::Math::TVector<double>_>(&local_130,(TVector<double> *)&local_b8._s_0);
    break;
  case 6:
    local_98._s_0.Z = ___xmm_3ff00000000000000000000000000000;
    local_98._s_0.W = _UNK_15061cbc8;
    local_98._s_0.X = 0.0;
    local_98._s_0.Y = 0.0;
    bVar2 = ``FPCGBlurElement::ExecuteInternal'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::
            operator()<UE::Math::TVector4<double>_>(&local_130,(TVector4<double> *)&local_98._s_0);
    break;
  case 7:
    local_78.X = 0.0;
    local_78.Y = 0.0;
    local_78.Z = 0.0;
    local_78.W = 0.0;
    bVar2 = ``FPCGBlurElement::ExecuteInternal'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::
            operator()<UE::Math::TQuat<double>_>(&local_130,&local_78);
    break;
  case 8:
  case 9:
  case 10:
  case 0xc:
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7408001626985725636>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGBlurElement.cpp"
                       ,0x13c,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    goto LAB_149ad8555;
  case 0xb:
    local_58.X = 0.0;
    local_58.Y = 0.0;
    local_58.Z = 0.0;
    local_58.W = 0.0;
    bVar2 = ``FPCGBlurElement::ExecuteInternal'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::
            operator()<UE::Math::TQuat<double>_>(&local_130,&local_58);
    break;
  case 0xd:
    local_108 = 0;
    local_100 = 0;
    local_f8 = 0;
    local_f0 = 0;
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7408001626985725636>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGBlurElement.cpp"
                       ,0x13c,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    goto LAB_149ad8555;
  case 0xe:
    local_e8 = 0;
    local_e0 = 0;
    local_d8 = 0;
    local_d0 = 0;
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7408001626985725636>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGBlurElement.cpp"
                       ,0x13c,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
LAB_149ad8555:
    bVar2 = true;
    break;
  default:
    bVar2 = false;
  }
  return bVar2;
}

// operator() @ 149adb010

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EPCGTimeSliceInitResult __thiscall
`FPCGBlurElement::PrepareDataInternal'::__l2::<lambda_1>::operator()
          (void *this,FPCGBlurIterState *param_1,FEmptyStruct *param_2,uint param_3)

{
  int *piVar1;
  TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>
  *pTVar2;
  ushort uVar3;
  longlong *plVar4;
  ForAnyElementType *pFVar5;
  longlong lVar6;
  IPCGAttributeAccessor *pIVar7;
  IPCGAttributeAccessorKeys *pIVar8;
  FPCGContext *pFVar9;
  code *pcVar10;
  FPCGMetadataDomainID FVar11;
  bool bVar12;
  EPCGTimeSliceInitResult EVar13;
  uint uVar14;
  int iVar15;
  UClass *pUVar16;
  TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_> TVar17;
  TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>
  TVar18;
  TObjectPtr<UPCGMetadata>_u_0 TVar19;
  FPCGMetadataAttributeBase *pFVar20;
  FString *pFVar21;
  FText *pFVar22;
  FTextFormat *pFVar23;
  TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> TVar24;
  TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_> TVar25;
  wchar_t *pwVar26;
  wchar_t *pwVar27;
  bool local_478 [16];
  FPCGBlurIterState *local_468;
  FName FStack_460;
  TObjectPtr<UPCGMetadata>_u_0 local_458;
  FObjectPtr_u_0 local_440;
  FName local_438;
  int local_430;
  float local_42c;
  undefined1 local_428 [16];
  undefined1 local_418 [16];
  FPCGTaggedData *local_408;
  FTextFormat local_400;
  TObjectPtr<UPCGMetadata>_u_0 local_3f0;
  FPCGAttributePropertySelector local_3e8;
  FPCGAttributePropertySelector local_3a8;
  FText local_368;
  FText local_358;
  FText local_348;
  FString local_338;
  FText local_328;
  FText local_318;
  FText local_308;
  FString local_2f8;
  FText local_2e8;
  FText local_2d8;
  FText local_2c8;
  FString local_2b8;
  FText local_2a8;
  FText local_298;
  FText local_288;
  long64 local_278;
  double local_270;
  FName local_268;
  FPCGMetadataDomainID FStack_260;
  FPCGAttributeIdentifier local_248;
  FName local_228;
  FPCGMetadataDomainID FStack_220;
  FPCGAttributeIdentifier local_208;
  FName local_1e8;
  FString local_1e0;
  FString local_1d0;
  TVector2<double> local_1c0;
  FString local_1b0;
  FTextFormat local_1a0;
  FTextFormat local_190;
  FString local_180;
  FString local_170;
  FTextFormat local_160;
  TVector<double> local_150;
  TRotator<double> local_138;
  TVector4<double> local_118;
  TQuat<double> local_f8;
  FSoftObjectPath local_d8;
  FSoftClassPath local_b8;
  TTransform<double> local_98;
  
  plVar4 = *(longlong **)this;
  pFVar5 = *(ForAnyElementType **)((longlong)this + 8);
  uVar14 = 0;
  if ((int)param_3 < (int)plVar4[1]) {
    uVar14 = ~param_3 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    EVar13 = (*pcVar10)();
    return EVar13;
  }
  lVar6 = *plVar4;
  piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
  iVar15 = *(int *)&pFVar5[1].Data;
  if (iVar15 == *piVar1) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x878,pFVar5,piVar1);
  }
  *(int *)&pFVar5[1].Data = iVar15 + 1;
  local_408 = FPCGTaggedData::FPCGTaggedData
                        ((FPCGTaggedData *)(pFVar5->Data + (longlong)iVar15 * 0x78),
                         (FPCGTaggedData *)(lVar6 + (longlong)(int)param_3 * 0x78));
  local_408->Pin = PCGPinConstants::DefaultOutputLabel;
  plVar4 = *(longlong **)this;
  uVar14 = 0;
  if ((int)param_3 < (int)plVar4[1]) {
    uVar14 = ~param_3 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    EVar13 = (*pcVar10)();
    return EVar13;
  }
  local_440 = (FObjectPtr_u_0)((FObjectPtr_u_0 *)((longlong)(int)param_3 * 0x78 + *plVar4))->Handle;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if ((UPCGBasePointData *)local_440.Handle == (UPCGBasePointData *)0x0) goto LAB_149adb896;
    UE::GC::MarkAsReachable(local_440.Handle);
  }
  if ((UPCGBasePointData *)local_440.Handle == (UPCGBasePointData *)0x0) {
LAB_149adb896:
    param_1->InputData = (UPCGBasePointData *)0x0;
    return NoOperation;
  }
  pUVar16 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
  bVar12 = FObjectPtr::IsA((FObjectPtr *)&local_440,pUVar16);
  if (!bVar12) goto LAB_149adb896;
  param_1->InputData = (UPCGBasePointData *)local_440;
  if ((UPCGBasePointData *)local_440.Handle == (UPCGBasePointData *)0x0) {
    return NoOperation;
  }
  FPCGAttributePropertyInputSelector::CopyAndFixLast
            ((FPCGAttributePropertyInputSelector *)(*(longlong *)((longlong)this + 0x18) + 200),
             (FPCGAttributePropertyInputSelector *)&local_3a8,(UPCGData *)local_440.Handle);
  TVar17 = PCGAttributeAccessorHelpers::CreateConstAccessor
                     ((UPCGData *)local_428,(FPCGAttributePropertySelector *)param_1->InputData,
                      SUB81(&local_3a8,0));
  if (param_1 != (FPCGBlurIterState *)TVar17.Ptr) {
    pIVar7 = (param_1->InputAccessor).Ptr;
    (param_1->InputAccessor).Ptr = (IPCGAttributeAccessor *)(TVar17.Ptr)->_padding_;
    (TVar17.Ptr)->_padding_ = 0;
    if (pIVar7 != (IPCGAttributeAccessor *)0x0) {
      (**(code **)pIVar7->_padding_)(pIVar7,1);
    }
  }
  if ((undefined8 *)local_428._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_428._0_8_)(local_428._0_8_,1);
  }
  TVar18 = PCGAttributeAccessorHelpers::CreateConstKeys
                     ((UPCGData *)(local_428 + 8),
                      (FPCGAttributePropertySelector *)param_1->InputData);
  pTVar2 = &param_1->InputKeys;
  if ((IPCGAttributeAccessorKeys *)pTVar2 != TVar18.Ptr) {
    pIVar8 = pTVar2->Ptr;
    pTVar2->Ptr = (IPCGAttributeAccessorKeys *)(TVar18.Ptr)->_padding_;
    (TVar18.Ptr)->_padding_ = 0;
    if (pIVar8 != (IPCGAttributeAccessorKeys *)0x0) {
      (**(code **)pIVar8->_padding_)(pIVar8,1);
    }
  }
  if ((undefined8 *)local_428._8_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_428._8_8_)(local_428._8_8_,1);
  }
  if (((param_1->InputAccessor).Ptr == (IPCGAttributeAccessor *)0x0) ||
     (pTVar2->Ptr == (IPCGAttributeAccessorKeys *)0x0)) {
    pFVar9 = *(FPCGContext **)((longlong)this + 0x10);
    pFVar21 = FPCGAttributePropertySelector::ToString(&local_3a8,&local_2b8,false);
    FText::FromString(&local_2a8,pFVar21);
    if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
    }
    pFVar22 = FText::AsLocalizable_Advanced_LocText
                        (&local_288,L"PCGBlurElement",L"InputAttributeNotFound",
                         L"Attribute {0} was not found in input {1}");
    pFVar23 = FTextFormat::FTextFormat(&local_400,pFVar22,Default);
    pFVar22 = FText::Format<FText,unsigned_int>(&local_298,pFVar23,&local_2a8,param_3);
    PCGLog::LogErrorOnGraph(pFVar22,pFVar9);
    if (local_298.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_298.TextData.Reference + 0x10))();
    }
LAB_149adb86a:
    if (local_288.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_288.TextData.Reference + 0x10))();
    }
LAB_149adb875:
    EVar13 = NoOperation;
    goto LAB_149adb877;
  }
  iVar15 = (**(code **)(pTVar2->Ptr->_padding_ + 0x10))();
  if (iVar15 == 0) goto LAB_149adb875;
  uVar3 = ((param_1->InputAccessor).Ptr)->UnderlyingType;
  if ((0xfe < uVar3) || ((7 < uVar3 && (uVar3 != 0xb)))) {
    pFVar9 = *(FPCGContext **)((longlong)this + 0x10);
    pFVar21 = FPCGAttributePropertySelector::ToString(&local_3a8,&local_2f8,false);
    FText::FromString(&local_2e8,pFVar21);
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
    pFVar22 = FText::AsLocalizable_Advanced_LocText
                        (&local_2c8,L"PCGBlurElement",L"InputNotNumerical",
                         L"Attribute {0} is not numerical for input {1}");
    pFVar23 = FTextFormat::FTextFormat(&local_160,pFVar22,Default);
    pFVar22 = FText::Format<FText,unsigned_int>(&local_2d8,pFVar23,&local_2e8,param_3);
    PCGLog::LogErrorOnGraph(pFVar22,pFVar9);
    local_288.TextData.Reference = local_2c8.TextData.Reference;
    if (local_2d8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2d8.TextData.Reference + 0x10))();
      local_288.TextData.Reference = local_2c8.TextData.Reference;
    }
    goto LAB_149adb86a;
  }
  TVar19.DebugPtr =
       (UPCGMetadata *)
       (**(code **)(param_1->InputData->_padding_ + 0x310))
                 (param_1->InputData,*(undefined8 *)((longlong)this + 0x10),1);
  if (TVar19.DebugPtr == (UPCGMetadata *)0x0) {
    pFVar21 = GetTypeName<UPCGBasePointData>(&local_1d0);
    if ((pFVar21->Data).ArrayNum == 0) {
      pwVar27 = L"";
    }
    else {
      pwVar27 = (wchar_t *)(pFVar21->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar27);
  }
  pUVar16 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
  iVar15 = (int)pUVar16->_padding_;
  if ((*(int *)((TVar19.DebugPtr)->_padding_ + 0x38) < iVar15) ||
     ((longlong *)
      *(undefined1 **)(*(longlong *)((TVar19.DebugPtr)->_padding_ + 0x30) + (longlong)iVar15 * 8) !=
      &pUVar16->_padding_)) {
    pFVar21 = GetTypeName<UPCGBasePointData>(&local_180);
    pwVar27 = L"";
    if ((pFVar21->Data).ArrayNum == 0) {
      pwVar26 = L"";
    }
    else {
      pwVar26 = (wchar_t *)(pFVar21->Data).AllocatorInstance.Data;
    }
    pFVar21 = GetFullNameForCastLogError<UPCGSpatialData>
                        (&local_170,(UPCGSpatialData *)TVar19.DebugPtr);
    if ((pFVar21->Data).ArrayNum != 0) {
      pwVar27 = (wchar_t *)(pFVar21->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar27,pwVar26);
  }
  FPCGAttributePropertyOutputSelector::CopyAndFixSource
            ((FPCGAttributePropertyOutputSelector *)(*(longlong *)((longlong)this + 0x18) + 0x108),
             (FPCGAttributePropertyOutputSelector *)&local_3e8,
             (FPCGAttributePropertyInputSelector *)&local_3a8,(UPCGData *)param_1->InputData);
  bVar12 = FPCGAttributePropertySelector::IsBasicAttribute(&local_3e8);
  if (bVar12) {
    if ((*(longlong *)&((TVar19.DebugPtr)->OtherParents).Elements.field_0x8 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("OutputPointData->Metadata",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGBlurElement.cpp"
                            ,0x6a,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      EVar13 = (*pcVar10)();
      return EVar13;
    }
    FPCGAttributePropertySelector::GetName(&local_3e8);
    FStack_260 = PCGMetadataDomainID::Default;
    FVar11 = FStack_260;
    local_268 = local_438;
    FStack_260._0_8_ = PCGMetadataDomainID::Default._0_8_;
    local_248.Name = local_438;
    local_248.MetadataDomain.Flag = FStack_260.Flag;
    local_248.MetadataDomain._1_3_ = FStack_260._1_3_;
    local_248.MetadataDomain.CustomFlag = FStack_260.CustomFlag;
    local_248.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
    FStack_260 = FVar11;
    bVar12 = UPCGMetadata::HasAttribute
                       (*(UPCGMetadata **)&((TVar19.DebugPtr)->OtherParents).Elements.field_0x8,
                        &local_248);
    if (bVar12) {
      FStack_220 = PCGMetadataDomainID::Default;
      FVar11 = FStack_220;
      local_228 = local_438;
      FStack_220._0_8_ = PCGMetadataDomainID::Default._0_8_;
      local_208.Name = local_438;
      local_208.MetadataDomain.Flag = FStack_220.Flag;
      local_208.MetadataDomain._1_3_ = FStack_220._1_3_;
      local_208.MetadataDomain.CustomFlag = FStack_220.CustomFlag;
      local_208.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
      FStack_220 = FVar11;
      UPCGMetadata::DeleteAttribute
                (*(UPCGMetadata **)&((TVar19.DebugPtr)->OtherParents).Elements.field_0x8,&local_208)
      ;
    }
    local_400.TextFormatData.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)local_438;
    FStack_460 = local_438;
    local_468 = param_1;
    local_458.DebugPtr = TVar19.DebugPtr;
    local_400.TextFormatData.Object = (FTextFormatData *)param_1;
    local_3f0.DebugPtr = TVar19.DebugPtr;
    switch(((param_1->InputAccessor).Ptr)->UnderlyingType) {
    case 0:
      pFVar20 = ``FPCGBlurElement::PrepareDataInternal'::__l2::<lambda_1>::operator()'::__l17::
                <lambda_1>::operator()<float>(&local_468,&local_42c);
      break;
    case 1:
      pFVar20 = ``FPCGBlurElement::PrepareDataInternal'::__l2::<lambda_1>::operator()'::__l17::
                <lambda_1>::operator()<double>(&local_468,&local_270);
      break;
    case 2:
      pFVar20 = ``FPCGBlurElement::PrepareDataInternal'::__l2::<lambda_1>::operator()'::__l17::
                <lambda_1>::operator()<int>(&local_468,&local_430);
      break;
    case 3:
      pFVar20 = ``FPCGBlurElement::PrepareDataInternal'::__l2::<lambda_1>::operator()'::__l17::
                <lambda_1>::operator()<__int64>(&local_468,&local_278);
      break;
    case 4:
      pFVar20 = ``FPCGBlurElement::PrepareDataInternal'::__l2::<lambda_1>::operator()'::__l17::
                <lambda_1>::operator()<UE::Math::TVector2<double>_>(&local_468,&local_1c0);
      break;
    case 5:
      pFVar20 = ``FPCGBlurElement::PrepareDataInternal'::__l2::<lambda_1>::operator()'::__l17::
                <lambda_1>::operator()<UE::Math::TVector<double>_>(&local_468,&local_150);
      break;
    case 6:
      pFVar20 = ``FPCGBlurElement::PrepareDataInternal'::__l2::<lambda_1>::operator()'::__l17::
                <lambda_1>::operator()<UE::Math::TVector4<double>_>(&local_468,&local_118);
      break;
    case 7:
      pFVar20 = ``FPCGBlurElement::PrepareDataInternal'::__l2::<lambda_1>::operator()'::__l17::
                <lambda_1>::operator()<UE::Math::TQuat<double>_>(&local_468,&local_f8);
      break;
    case 8:
      pFVar20 = ``FPCGBlurElement::PrepareDataInternal'::__l2::<lambda_1>::operator()'::__l17::
                <lambda_1>::operator()<UE::Math::TTransform<double>_>(&local_468,&local_98);
      break;
    case 9:
      pFVar20 = ``FPCGBlurElement::PrepareDataInternal'::__l2::<lambda_1>::operator()'::__l17::
                <lambda_1>::operator()<FString>(&local_468,&local_1b0);
      break;
    case 10:
      pFVar20 = ``FPCGBlurElement::PrepareDataInternal'::__l2::<lambda_1>::operator()'::__l17::
                <lambda_1>::operator()<bool>(&local_468,local_478);
      break;
    case 0xb:
      pFVar20 = ``FPCGBlurElement::PrepareDataInternal'::__l2::<lambda_1>::operator()'::__l17::
                <lambda_1>::operator()<UE::Math::TRotator<double>_>(&local_468,&local_138);
      break;
    case 0xc:
      pFVar20 = ``FPCGBlurElement::PrepareDataInternal'::__l2::<lambda_1>::operator()'::__l17::
                <lambda_1>::operator()<FName>(&local_468,&local_1e8);
      break;
    case 0xd:
      pFVar20 = ``FPCGBlurElement::PrepareDataInternal'::__l2::<lambda_1>::operator()'::__l17::
                <lambda_1>::operator()<FSoftObjectPath>(&local_468,&local_d8);
      break;
    case 0xe:
      pFVar20 = ``FPCGBlurElement::PrepareDataInternal'::__l2::<lambda_1>::operator()'::__l17::
                <lambda_1>::operator()<FSoftClassPath>(&local_468,&local_b8);
      break;
    default:
      goto switchD_149adb3f5_default;
    }
    if (pFVar20 != (FPCGMetadataAttributeBase *)0x0) goto LAB_149adb5c7;
switchD_149adb3f5_default:
    pFVar9 = *(FPCGContext **)((longlong)this + 0x10);
    pFVar21 = FPCGAttributePropertySelector::ToString(&local_3e8,&local_1e0,false);
    FText::FromString(&local_368,pFVar21);
    if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
    }
    pFVar22 = FText::AsLocalizable_Advanced_LocText
                        (&local_348,L"PCGBlurElement",L"FailedToCreateAttr",
                         L"Could not create output attribute \'{0}\' for input {1}");
    pFVar23 = FTextFormat::FTextFormat(&local_1a0,pFVar22,Default);
    pFVar22 = FText::Format<FText,unsigned_int>(&local_358,pFVar23,&local_368,param_3);
    PCGLog::LogErrorOnGraph(pFVar22,pFVar9);
    local_308.TextData.Reference = local_348.TextData.Reference;
    if (local_358.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_358.TextData.Reference + 0x10))();
      local_308.TextData.Reference = local_348.TextData.Reference;
    }
LAB_149adb6ea:
    if (local_308.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_308.TextData.Reference + 0x10))();
    }
    EVar13 = NoOperation;
  }
  else {
LAB_149adb5c7:
    TVar24 = PCGAttributeAccessorHelpers::CreateAccessor
                       ((UPCGData *)local_418,(FPCGAttributePropertySelector *)TVar19.DebugPtr,
                        SUB81(&local_3e8,0));
    TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>::operator=
              (&param_1->OutputAccessor,
               (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> *)
               TVar24.Ptr);
    if ((undefined8 *)local_418._0_8_ != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)local_418._0_8_)(local_418._0_8_,1);
    }
    TVar25 = PCGAttributeAccessorHelpers::CreateKeys
                       ((UPCGData *)(local_418 + 8),(FPCGAttributePropertySelector *)TVar19.DebugPtr
                       );
    TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_>::operator=
              (&param_1->OutputKeys,
               (TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_> *)
               TVar25.Ptr);
    if ((undefined8 *)local_418._8_8_ != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)local_418._8_8_)(local_418._8_8_,1);
    }
    if (((param_1->OutputAccessor).Ptr == (IPCGAttributeAccessor *)0x0) ||
       ((param_1->OutputKeys).Ptr == (IPCGAttributeAccessorKeys *)0x0)) {
      pFVar9 = *(FPCGContext **)((longlong)this + 0x10);
      pFVar21 = FPCGAttributePropertySelector::ToString(&local_3e8,&local_338,false);
      FText::FromString(&local_328,pFVar21);
      if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_338.Data.AllocatorInstance.Data);
      }
      pFVar22 = FText::AsLocalizable_Advanced_LocText
                          (&local_308,L"PCGBlurElement",L"OutputAttributeFailiure",
                           L"Attribute {0} was not found, not compatible or failed to be created for input {1}"
                          );
      pFVar23 = FTextFormat::FTextFormat(&local_190,pFVar22,Default);
      pFVar22 = FText::Format<FText,unsigned_int>(&local_318,pFVar23,&local_328,param_3);
      PCGLog::LogErrorOnGraph(pFVar22,pFVar9);
      if (local_318.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_318.TextData.Reference + 0x10))();
      }
      goto LAB_149adb6ea;
    }
    FPCGDataPtrWrapper::operator=(&local_408->Data,(UPCGData *)TVar19.DebugPtr);
    EVar13 = Success;
  }
  DestructItems<FString,int>
            ((FString *)local_3e8.ExtraNames.AllocatorInstance.Data,local_3e8.ExtraNames.ArrayNum);
  if (local_3e8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3e8.ExtraNames.AllocatorInstance.Data);
  }
LAB_149adb877:
  DestructItems<FString,int>
            ((FString *)local_3a8.ExtraNames.AllocatorInstance.Data,local_3a8.ExtraNames.ArrayNum);
  if (local_3a8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a8.ExtraNames.AllocatorInstance.Data);
  }
  return EVar13;
}

// ExecuteInternal @ 149b098c0

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

bool __thiscall FPCGBlurElement::ExecuteInternal(FPCGBlurElement *this,FPCGContext *param_1)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  UPCGBlurSettings *pUVar8;
  bool bVar9;
  double dVar10;
  undefined1 local_res10 [8];
  FPCGBlurElement *local_38;
  UPCGBlurSettings *local_30;
  double local_28;
  double local_20;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId148,"FPCGBlurElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGBlurElement.cpp"
               ,0x94);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId148);
  }
  if (param_1 == (FPCGContext *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContext",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGBlurElement.cpp"
                       ,0x96,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Context",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGBlurElement.cpp"
                       ,0x99,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  bVar5 = TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,FPCGBlurIterState,FPCGContext>::
          DataIsPreparedForExecution
                    ((TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,FPCGBlurIterState,FPCGContext>
                      *)param_1);
  if (!bVar5) {
    bVar5 = true;
    goto LAB_149b09b7c;
  }
  pUVar8 = FPCGContext::GetInputSettings<UPCGBlurSettings>(param_1);
  if ((pUVar8 == (UPCGBlurSettings *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGBlurElement.cpp"
                         ,0xa1,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  dVar4 = 0.0;
  if ((((pUVar8->BlurMode == Gaussian) && (pUVar8->bUseCustomStandardDeviation != false)) &&
      (pUVar8->CustomStandardDeviation <= 0.0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings->BlurMode != EPCGBlurElementMode::Gaussian || !Settings->bUseCustomStandardDeviation || Settings->CustomStandardDeviation > 0"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGBlurElement.cpp"
                         ,0xa3,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  if ((pUVar8->BlurMode == Gaussian) && (pUVar8->bUseCustomStandardDeviation == false)) {
    dVar10 = pUVar8->SearchDistance * ___real_3fbc71c71c71c71c;
LAB_149b09a3e:
    dVar4 = __real_3ff0000000000000 / ((dVar10 + dVar10) * dVar10);
    local_20 = dVar4 * __real_3fd45f306dc9c883;
  }
  else {
    dVar10 = pUVar8->CustomStandardDeviation;
    if (pUVar8->BlurMode == Gaussian) goto LAB_149b09a3e;
    local_20 = 0.0;
  }
  *(int *)&param_1[1]._padding_ = (int)param_1[1]._padding_ + 1;
  local_38 = this;
  local_30 = pUVar8;
  local_28 = dVar4;
  bVar5 = TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,FPCGBlurIterState,FPCGContext>::
          DataIsPreparedForExecution
                    ((TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,FPCGBlurIterState,FPCGContext>
                      *)param_1);
  if (((bVar5) ||
      (local_res10[0] = bVar5,
      bVar5 = `TPCGTimeSlicedElementBase<PCGTimeSlice::FEmptyStruct,FPCGBlurIterState,FPCGContext>::
              ExecuteSlice'::__l3::<lambda_1>::operator()(local_res10), bVar5)) &&
     ((int)param_1[1].InputData.InactiveOutputPinBitmask != 0)) {
    do {
      uVar2 = *(uint *)((longlong)&param_1[1]._padding_ + 4);
      uVar7 = 0;
      if ((int)uVar2 < (int)param_1[1].InputData.InactiveOutputPinBitmask) {
        uVar7 = ~uVar2 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      bVar5 = `FPCGBlurElement::ExecuteInternal'::__l2::<lambda_1>::operator()
                        (&local_38,
                         (TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,FPCGBlurIterState,FPCGContext>
                          *)param_1,(FEmptyStruct *)&param_1[1].InputData.DataCrcs,
                         (FPCGBlurIterState *)
                         ((longlong)(int)uVar2 * 0x58 +
                         *(longlong *)&param_1[1].InputData.DataCrcs.ArrayNum),uVar2);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_149b09b7c;
      }
      piVar1 = (int *)((longlong)&param_1[1]._padding_ + 4);
      *piVar1 = *piVar1 + 1;
    } while ((*(int *)((longlong)&param_1[1]._padding_ + 4) <
              (int)param_1[1].InputData.InactiveOutputPinBitmask) &&
            (bVar5 = FPCGAsyncState::ShouldStop(&param_1->AsyncState), !bVar5));
    bVar5 = *(int *)((longlong)&param_1[1]._padding_ + 4) ==
            (int)param_1[1].InputData.InactiveOutputPinBitmask;
  }
  else {
    bVar5 = true;
  }
LAB_149b09b7c:
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar5;
}

// ExecutionLoopMode @ 149b11b50

EPCGElementExecutionLoopMode __thiscall
FPCGBlurElement::ExecutionLoopMode(FPCGBlurElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// PrepareDataInternal @ 149b211a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FPCGBlurElement::PrepareDataInternal(FPCGBlurElement *this,FPCGContext *param_1)

{
  FPCGDataCollection *pFVar1;
  int *piVar2;
  double dVar3;
  int iVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  int iVar7;
  bool bVar8;
  undefined1 uVar9;
  EPCGTimeSliceInitResult EVar10;
  UPCGBlurSettings *pUVar11;
  FText *pFVar12;
  bool bVar13;
  undefined1 local_res10 [8];
  TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,FPCGBlurIterState,FPCGContext> *local_res18;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_68;
  code *local_58;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> **local_50;
  FText local_48;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *local_38;
  FPCGDataCollection *local_30;
  FPCGContext *local_28;
  UPCGBlurSettings *local_20;
  
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId35,"FPCGBlurElement::PrepareData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGBlurElement.cpp"
               ,0x23);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId35);
  }
  pUVar11 = FPCGContext::GetInputSettings<UPCGBlurSettings>(param_1);
  if ((pUVar11 == (UPCGBlurSettings *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGBlurElement.cpp"
                         ,0x26,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGBlurElement.cpp"
                         ,0x29,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_68,&PCGPinConstants::DefaultInputLabel);
  pFVar1 = &param_1->OutputData;
  if (((pUVar11->NumIterations < 1) || (dVar3 = pUVar11->SearchDistance, dVar3 <= 0.0)) ||
     ((double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3e45798ee2308c3a)) {
    if (pFVar1 != (FPCGDataCollection *)&local_68) {
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)(pFVar1->TaggedData).AllocatorInstance.Data,
                 (param_1->OutputData).TaggedData.ArrayNum);
      iVar7 = local_68.ArrayNum;
      FVar6.Data = local_68.AllocatorInstance.Data;
      piVar2 = &(param_1->OutputData).TaggedData.ArrayMax;
      iVar4 = *piVar2;
      (param_1->OutputData).TaggedData.ArrayNum = local_68.ArrayNum;
      if ((local_68.ArrayNum == 0) && (iVar4 == 0)) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x78,8,local_68.ArrayNum,iVar4,(ForAnyElementType *)pFVar1,local_68.ArrayNum,
                   piVar2);
        ConstructItems<FPCGTaggedData,FPCGTaggedData,int>
                  ((pFVar1->TaggedData).AllocatorInstance.Data,(FPCGTaggedData *)FVar6.Data,iVar7);
      }
    }
  }
  else if (((pUVar11->BlurMode != Gaussian) || (pUVar11->bUseCustomStandardDeviation == false)) ||
          ((dVar3 = pUVar11->CustomStandardDeviation, 0.0 < dVar3 &&
           (__real_3e45798ee2308c3a <
            (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))))) {
    if (*(char *)((longlong)&param_1[1].InputData.TaggedData.AllocatorInstance.Data + 1) == '\0') {
      local_res18 = (TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,FPCGBlurIterState,FPCGContext>
                     *)param_1;
      EVar10 = UE::Core::Private::Function::
               TFunctionRefCaller<<lambda_27_>,enum_EPCGTimeSliceInitResult,TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,FPCGBlurIterState,FPCGContext>_*,PCGTimeSlice::FEmptyStruct_&>
               ::Call(local_res10,&local_res18,(FEmptyStruct *)&param_1[1].InputData.DataCrcs);
      *(EPCGTimeSliceInitResult *)
       ((longlong)&param_1[1].InputData.TaggedData.AllocatorInstance.Data + 1) = EVar10;
    }
    local_38 = &local_68;
    local_50 = &local_38;
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPCGBlurElement::PrepareDataInternal'::__l2::<lambda_1>,enum_EPCGTimeSliceInitResult,FPCGBlurIterState_&,PCGTimeSlice::FEmptyStruct_const_&,unsigned_int>
               ::Call;
    local_30 = pFVar1;
    local_28 = param_1;
    local_20 = pUVar11;
    TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,FPCGBlurIterState,FPCGContext>::
    InitializePerIterationStates
              ((TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,FPCGBlurIterState,FPCGContext> *)
               param_1,local_68.ArrayNum,
               (TFunctionRef<EPCGTimeSliceInitResult___cdecl(FPCGBlurIterState_&,PCGTimeSlice::FEmptyStruct_const_&,unsigned_int)>
                *)&local_58);
  }
  else {
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&local_48,L"PCGBlurElement",L"InvalidStdDev",
                         L"Blur mode was set to Gaussian but Standard Deviation was less or equal than zero. Abort."
                        );
    PCGLog::LogErrorOnGraph(pFVar12,(FPCGContext *)0x0);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
  if ((FPCGTaggedData *)local_68.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// SupportsBasePointDataInputs @ 149b2d190

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
FPCGBlurElement::SupportsBasePointDataInputs(FPCGBlurElement *this,FPCGContext *param_1)

{
  return true;
}

