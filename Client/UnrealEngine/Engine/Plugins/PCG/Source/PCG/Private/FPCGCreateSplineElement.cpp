// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// CanExecuteOnlyOnMainThread @ 149b67b90

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
FPCGCreateSplineElement::CanExecuteOnlyOnMainThread
          (FPCGCreateSplineElement *this,FPCGContext *param_1)

{
  UPCGCreateSplineSettings *pUVar1;
  
  if (param_1 != (FPCGContext *)0x0) {
    pUVar1 = FPCGContext::GetInputSettings<UPCGCreateSplineSettings>(param_1);
    if ((pUVar1 != (UPCGCreateSplineSettings *)0x0) && (pUVar1->Mode != CreateComponent)) {
      return false;
    }
  }
  return true;
}

// ExecuteInternal @ 149b73cd0

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FPCGCreateSplineElement::ExecuteInternal(FPCGCreateSplineElement *this,FPCGContext *param_1)

{
  FScriptContainerElement *pFVar1;
  double *pdVar2;
  double dVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  USceneComponent *pUVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  FObjectPtr_u_0 *pFVar18;
  FPCGMetadataAttribute<UE::Math::TVector<double>_> *this_00;
  FObjectPtr_u_0 this_01;
  FPCGMetadataAttribute<UE::Math::TVector<double>_> *this_02;
  FPCGMetadataDomainID FVar19;
  bool bVar20;
  undefined1 uVar21;
  bool bVar22;
  char cVar23;
  uint uVar24;
  int iVar25;
  UPCGCreateSplineSettings *pUVar26;
  UClass *pUVar27;
  UObject *pUVar28;
  AActor *pAVar29;
  FText *pFVar30;
  UPCGBasePointData *pUVar31;
  UPCGMetadata *this_03;
  FName FVar32;
  FName FVar33;
  FString *pFVar34;
  FTextFormat *pFVar35;
  TTransform<double> *pTVar36;
  UPCGComponent *this_04;
  USplineComponent *this_05;
  UPCGManagedResource *pUVar37;
  UClass *pUVar38;
  FPCGTaggedData *this_06;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *pTVar39;
  ulonglong uVar40;
  TRefCountPtr<ITextData> TVar41;
  longlong lVar42;
  IPCGGraphExecutionSource *pIVar43;
  longlong *plVar44;
  longlong lVar45;
  TVector<double>_u_0 *pTVar46;
  FPCGContext *pFVar47;
  int iVar48;
  ForAnyElementType FVar49;
  byte bVar50;
  byte bVar51;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *pTVar52;
  FObjectPtr_u_0 *pFVar53;
  TVector<double>_u_0 *pTVar54;
  UPCGSplineData *pUVar55;
  bool bVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined1 auStackY_908 [32];
  undefined1 local_8a8;
  FGCScopeGuard local_8a7;
  undefined1 local_8a6 [6];
  FObjectPtr_u_0 *local_8a0;
  ForAnyElementType local_898;
  undefined8 local_890;
  FObjectPtr_u_0 *local_888;
  undefined4 local_880 [2];
  FPCGContext *local_878;
  TArray<FSplinePoint,TSizedDefaultAllocator<32>_> local_870;
  undefined4 local_860;
  AActor *local_858;
  longlong local_850;
  UPCGSplineData *local_848;
  FPCGMetadataAttribute<UE::Math::TVector<double>_> *local_840;
  uint local_838;
  uint local_834;
  FObjectPtr_u_0 local_830;
  TArray<UFunction_const_*,TSizedDefaultAllocator<32>_> local_828;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_818;
  undefined8 local_808;
  undefined8 local_800;
  undefined8 local_7f8;
  FName local_7f0;
  FName local_7e8;
  FPCGMetadataAttribute<UE::Math::TVector<double>_> *local_7e0;
  FText local_7d8;
  TArray<UFunction_*,TSizedDefaultAllocator<32>_> local_7c8;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_7b8;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_7a8;
  USplineComponent *local_798;
  UObject *local_790;
  UObject *local_788;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *local_780;
  FPCGDataCollection *local_778;
  wchar_t *local_768;
  int iStack_760;
  undefined4 uStack_75c;
  FName local_750;
  FName local_740;
  FString local_738;
  FString local_728;
  FText local_718;
  FString local_708;
  FString local_6f8;
  FText local_6e8;
  FString local_6d8;
  FString local_6c8;
  FText local_6b8;
  FString local_6a8;
  FString local_698;
  FString local_688;
  FText local_678;
  FString local_668;
  TStringView<wchar_t> local_658;
  FString local_648;
  FString local_638;
  FText local_628;
  FName local_618;
  FPCGMetadataDomainID FStack_610;
  FPCGAttributeIdentifier local_5f8;
  FName local_5d8;
  FPCGMetadataDomainID FStack_5d0;
  FPCGAttributeIdentifier local_5b8;
  TVector<double>_u_0 local_598;
  TVector<double>_u_0 local_580;
  TQuat<double> local_568;
  double local_548;
  double dStack_540;
  double local_538;
  double local_530;
  double dStack_528;
  double local_520;
  double local_518;
  double dStack_510;
  double local_508;
  TVector<double>_u_0 local_500;
  TVector<double>_u_0 local_4e8;
  double local_4c0;
  double local_4b8;
  double dStack_4b0;
  double local_4a8;
  FText local_4a0;
  FTextFormat local_490;
  FText local_480;
  FTextFormat local_470;
  TRotator<double> local_460;
  double local_448;
  double dStack_440;
  double local_438;
  double dStack_430;
  double local_408;
  double dStack_400;
  double local_3f8;
  double dStack_3f0;
  FConstPCGPointValueRanges local_3e8;
  undefined1 local_258 [128];
  undefined1 local_1d8 [128];
  TVector<double>_u_0 local_158;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128;
  undefined4 local_127;
  undefined2 local_123;
  undefined1 local_121;
  TTransform<double> local_118;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_908;
  bVar50 = 0;
  bVar16 = false;
  bVar22 = false;
  bVar51 = 0;
  bVar17 = false;
  bVar15 = false;
  bVar56 = -1 < CpuChannel->Enabled;
  local_878 = param_1;
  if (bVar56) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId70,"FPCGCreateSplineElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCreateSpline.cpp"
               ,0x46);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId70);
  }
  pUVar26 = FPCGContext::GetInputSettings<UPCGCreateSplineSettings>(param_1);
  if ((pUVar26 == (UPCGCreateSplineSettings *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCreateSpline.cpp"
                          ,0x49,L""), bVar20)) {
    pcVar7 = (code *)swi(3);
    uVar21 = (*pcVar7)();
    return (bool)uVar21;
  }
  local_778 = &param_1->InputData;
  FPCGDataCollection::GetInputsByPin(local_778,&local_818,&PCGPinConstants::DefaultInputLabel);
  uVar40 = (ulonglong)local_818.ArrayNum;
  pTVar52 = &(param_1->OutputData).TaggedData;
  pFVar53 = (FObjectPtr_u_0 *)(local_818.AllocatorInstance.Data + uVar40 * 0x78);
  local_834 = local_818.ArrayNum;
  FVar49.Data = local_818.AllocatorInstance.Data;
  local_888 = pFVar53;
  local_780 = pTVar52;
  do {
    while( true ) {
      local_8a0 = (FObjectPtr_u_0 *)FVar49.Data;
      if (local_818.ArrayNum != (uint)uVar40) {
        local_8a8 = 0;
        `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_8a8);
      }
      if ((FObjectPtr_u_0 *)FVar49.Data == pFVar53) {
        pTVar39 = FPCGDataCollection::GetAllSettings(local_778,&local_7a8);
        if ((pTVar52 == pTVar39) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)this != (void*)&Source",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x986,L""), bVar22)) {
          pcVar7 = (code *)swi(3);
          uVar21 = (*pcVar7)();
          return (bool)uVar21;
        }
        iVar48 = pTVar39->ArrayNum;
        if (iVar48 != 0) {
          iVar25 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x78,8,iVar48,&pTVar52->AllocatorInstance,&pTVar52->ArrayNum,
                              &pTVar52->ArrayMax);
          memmove((pTVar52->AllocatorInstance).Data + (longlong)iVar25 * 0x78,
                  (pTVar39->AllocatorInstance).Data,(longlong)iVar48 * 0x78);
          pTVar39->ArrayNum = 0;
        }
        DestructItems<FPCGTaggedData,int>
                  ((FPCGTaggedData *)local_7a8.AllocatorInstance.Data,local_7a8.ArrayNum);
        if ((FPCGTaggedData *)local_7a8.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
          FMemory::Free(local_7a8.AllocatorInstance.Data);
        }
        DestructItems<FPCGTaggedData,int>
                  ((FPCGTaggedData *)local_818.AllocatorInstance.Data,local_818.ArrayNum);
        if ((FPCGTaggedData *)local_818.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
          FMemory::Free(local_818.AllocatorInstance.Data);
        }
        if (bVar56) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        return true;
      }
      local_830 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)FVar49.Data;
      if (UE::GC::GIsIncrementalReachabilityPending != false) break;
LAB_149b73e51:
      if ((UPCGSpatialData *)local_830.Handle == (UPCGSpatialData *)0x0) goto LAB_149b75085;
      pUVar27 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
      bVar20 = FObjectPtr::IsA((FObjectPtr *)&local_830,pUVar27);
      this_01 = local_830;
      if ((!bVar20) ||
         (FVar49.Data = (FScriptContainerElement *)local_8a0,
         (UPCGSpatialData *)local_830.Handle == (UPCGSpatialData *)0x0)) goto LAB_149b75085;
      pUVar28 = TPersistentObjectPtr<FSoftObjectPath>::Get
                          ((TPersistentObjectPtr<FSoftObjectPath> *)&pUVar26->TargetActor);
      if (pUVar28 == (UObject *)0x0) {
LAB_149b73ef7:
        pAVar29 = FPCGContext::GetTargetActor(param_1,(UPCGSpatialData *)0x0);
        local_858 = pAVar29;
      }
      else {
        pUVar27 = Z_Construct_UClass_AActor_NoRegister();
        iVar48 = (int)pUVar27->_padding_;
        if ((*(int *)(*(longlong *)&pUVar28->field_0x10 + 0x38) < iVar48) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar28->field_0x10 + 0x30) + (longlong)iVar48 * 8) !=
            &pUVar27->_padding_)) goto LAB_149b73ef7;
        pAVar29 = (AActor *)
                  TPersistentObjectPtr<FSoftObjectPath>::Get
                            ((TPersistentObjectPtr<FSoftObjectPath> *)&pUVar26->TargetActor);
        if (pAVar29 == (AActor *)0x0) {
LAB_149b73ef2:
          pAVar29 = (AActor *)0x0;
          local_858 = pAVar29;
        }
        else {
          local_858 = pAVar29;
          pUVar27 = Z_Construct_UClass_AActor_NoRegister();
          iVar48 = (int)pUVar27->_padding_;
          if ((*(int *)(pAVar29->_padding_ + 0x38) < iVar48) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pAVar29->_padding_ + 0x30) + (longlong)iVar48 * 8) !=
              &pUVar27->_padding_)) goto LAB_149b73ef2;
        }
      }
      if (pAVar29 == (AActor *)0x0) {
        if (1 < (byte)LogPCG._0_1_) {
          pFVar30 = FText::AsLocalizable_Advanced_LocText
                              (&local_718,L"PCGCreateSpline",L"InvalidTargetActor",
                               L"Invalid target actor. Ensure TargetActor member is initialized when creating SpatialData."
                              );
          FText::ToString(pFVar30);
          if (param_1 != (FPCGContext *)0x0) {
            FPCGContext::GetTaskName(param_1,&local_728);
            bVar51 = bVar50 | 0xc;
            FPCGContext::GetExecutionSourceName(param_1,&local_738);
            bVar15 = bVar22;
            bVar17 = bVar16;
            bVar50 = bVar51;
          }
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (((bVar50 & 8) != 0) &&
             (bVar50 = bVar50 & 0xf7, bVar15 = bVar22, bVar17 = bVar16, bVar51 = bVar50,
             local_738.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_738.Data.AllocatorInstance.Data);
          }
          TVar41.Reference = local_718.TextData.Reference;
          if (((bVar50 & 4) != 0) &&
             (bVar51 = bVar50 & 0xfb, bVar15 = bVar22, bVar17 = bVar16, bVar50 = bVar51,
             local_728.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_728.Data.AllocatorInstance.Data);
            TVar41.Reference = local_718.TextData.Reference;
          }
          goto LAB_149b7401f;
        }
LAB_149b7402a:
        pTVar52 = &(param_1->OutputData).TaggedData;
        FVar49.Data = (FScriptContainerElement *)local_8a0;
        pFVar53 = local_888;
      }
      else {
        local_128 = 0;
        local_127 = 0;
        local_123 = 0;
        local_121 = 0;
        local_158._s_0.X = 0.0;
        local_158._s_0.Y = 0.0;
        local_158._s_0.Z = 0.0;
        uStack_140 = 0;
        local_138 = 0;
        uStack_130 = 0;
        pUVar31 = UPCGSpatialData::ToBasePointData
                            ((UPCGSpatialData *)this_01.Handle,param_1,
                             (TBox<double> *)&local_158._s_0);
        if (pUVar31 == (UPCGBasePointData *)0x0) {
          if (1 < (byte)LogPCG._0_1_) {
            pFVar30 = FText::AsLocalizable_Advanced_LocText
                                (&local_6e8,L"PCGCreateSpline",L"UnableToGetPointData",
                                 L"Unable to get point data from input");
            FText::ToString(pFVar30);
            if (param_1 != (FPCGContext *)0x0) {
              FPCGContext::GetTaskName(param_1,&local_6f8);
              bVar51 = bVar50 | 0x30;
              FPCGContext::GetExecutionSourceName(param_1,&local_708);
              bVar15 = bVar22;
              bVar17 = bVar16;
              bVar50 = bVar51;
            }
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
            if (((bVar50 & 0x20) != 0) &&
               (bVar50 = bVar50 & 0xdf, bVar15 = bVar22, bVar17 = bVar16, bVar51 = bVar50,
               local_708.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_708.Data.AllocatorInstance.Data);
            }
            TVar41.Reference = local_6e8.TextData.Reference;
            if (((bVar50 & 0x10) != 0) &&
               (bVar51 = bVar50 & 0xef, bVar15 = bVar22, bVar17 = bVar16, bVar50 = bVar51,
               local_6f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_6f8.Data.AllocatorInstance.Data);
              TVar41.Reference = local_6e8.TextData.Reference;
            }
            goto LAB_149b7401f;
          }
          goto LAB_149b7402a;
        }
        local_7e0 = (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0;
        local_840 = (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0;
        if ((pUVar26->bApplyCustomTangents != false) && (pUVar26->bLinear == false)) {
          this_03 = (UPCGMetadata *)(**(code **)(pUVar31->_padding_ + 800))();
          if ((this_03 == (UPCGMetadata *)0x0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("PointMetadata",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCreateSpline.cpp"
                                  ,0x6f,L""), bVar20)) {
            pcVar7 = (code *)swi(3);
            uVar21 = (*pcVar7)();
            return (bool)uVar21;
          }
          local_808 = 0;
          FVar32 = pUVar26->ArriveTangentAttribute;
          FVar33 = FVar32;
          if (FVar32 == (FName)0x0) {
            FVar32 = UPCGMetadata::GetLatestAttributeNameOrNone(this_03);
            FVar32 = *(FName *)FVar32;
            FVar33 = local_750;
          }
          local_750 = FVar33;
          FVar33 = pUVar26->LeaveTangentAttribute;
          local_7f8 = 0;
          local_7e8 = FVar32;
          FVar32 = FVar33;
          if (FVar33 == (FName)0x0) {
            FVar33 = UPCGMetadata::GetLatestAttributeNameOrNone(this_03);
            FVar33 = *(FName *)FVar33;
            FVar32 = local_740;
          }
          local_740 = FVar32;
          local_7f0 = FVar33;
          FText::AsLocalizable_Advanced_LocText
                    (&local_7d8,L"PCGCreateSpline",L"AttributeMissingOrNotVector",
                     L"Attribute \'{0}\' does not exist or is not a vector");
          local_618 = local_7e8;
          FStack_610 = PCGMetadataDomainID::Default;
          FVar19 = FStack_610;
          FStack_610._0_8_ = PCGMetadataDomainID::Default._0_8_;
          local_5f8.Name = local_7e8;
          local_5f8.MetadataDomain.Flag = FStack_610.Flag;
          local_5f8.MetadataDomain._1_3_ = FStack_610._1_3_;
          local_5f8.MetadataDomain.CustomFlag = FStack_610.CustomFlag;
          local_5f8.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
          FStack_610 = FVar19;
          local_7e0 = (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)
                      UPCGMetadata::GetConstAttribute(this_03,&local_5f8);
          if ((local_7e0 == (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0) ||
             ((short)local_7e0->_padding_ != 5)) {
            TVar41.Reference = local_7d8.TextData.Reference;
            if (1 < (byte)LogPCG._0_1_) {
              pFVar34 = ::FName::ToString(&local_7e8,&local_668);
              pFVar30 = FText::FromString(&local_4a0,pFVar34);
              pFVar35 = FTextFormat::FTextFormat(&local_490,&local_7d8,Default);
              pFVar30 = FText::Format<FText>(&local_678,pFVar35,pFVar30);
              FText::ToString(pFVar30);
              if (param_1 != (FPCGContext *)0x0) {
                FPCGContext::GetTaskName(param_1,&local_688);
                bVar50 = bVar50 | 0xc0;
                FPCGContext::GetExecutionSourceName(param_1,&local_698);
                bVar15 = bVar22;
                bVar17 = bVar16;
                bVar51 = bVar50;
              }
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
              if (((char)bVar50 < '\0') &&
                 (bVar50 = bVar50 & 0x7f, bVar15 = bVar22, bVar17 = bVar16, bVar51 = bVar50,
                 local_698.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_698.Data.AllocatorInstance.Data);
              }
              if (((bVar50 & 0x40) != 0) &&
                 (bVar51 = bVar50 & 0xbf, bVar15 = bVar22, bVar17 = bVar16, bVar50 = bVar51,
                 local_688.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_688.Data.AllocatorInstance.Data);
              }
              FVar49.Data = local_668.Data.AllocatorInstance.Data;
              if (local_678.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_678.TextData.Reference + 0x10))();
                FVar49.Data = local_668.Data.AllocatorInstance.Data;
              }
LAB_149b74550:
              TVar41.Reference = local_7d8.TextData.Reference;
              if (FVar49.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FVar49.Data);
                TVar41.Reference = local_7d8.TextData.Reference;
              }
            }
          }
          else {
            local_5d8 = local_7f0;
            FStack_5d0 = PCGMetadataDomainID::Default;
            FVar19 = FStack_5d0;
            FStack_5d0._0_8_ = PCGMetadataDomainID::Default._0_8_;
            local_5b8.Name = local_7f0;
            local_5b8.MetadataDomain.Flag = FStack_5d0.Flag;
            local_5b8.MetadataDomain._1_3_ = FStack_5d0._1_3_;
            local_5b8.MetadataDomain.CustomFlag = FStack_5d0.CustomFlag;
            local_5b8.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
            FStack_5d0 = FVar19;
            local_840 = (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)
                        UPCGMetadata::GetConstAttribute(this_03,&local_5b8);
            if ((local_840 != (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0) &&
               ((short)local_840->_padding_ == 5)) {
              if (local_7d8.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_7d8.TextData.Reference + 0x10))();
              }
              goto LAB_149b7435a;
            }
            TVar41.Reference = local_7d8.TextData.Reference;
            if (1 < (byte)LogPCG._0_1_) {
              pFVar34 = ::FName::ToString(&local_7f0,&local_6a8);
              pFVar30 = FText::FromString(&local_480,pFVar34);
              pFVar35 = FTextFormat::FTextFormat(&local_470,&local_7d8,Default);
              pFVar30 = FText::Format<FText>(&local_6b8,pFVar35,pFVar30);
              FText::ToString(pFVar30);
              if (param_1 != (FPCGContext *)0x0) {
                FPCGContext::GetTaskName(param_1,&local_6c8);
                bVar17 = true;
                bVar22 = true;
                FPCGContext::GetExecutionSourceName(param_1,&local_6d8);
                bVar15 = bVar22;
                bVar16 = bVar17;
                bVar51 = bVar50;
              }
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
              if (bVar22) {
                bVar22 = false;
                bVar15 = bVar22;
                bVar17 = bVar16;
                bVar51 = bVar50;
                if (local_6d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_6d8.Data.AllocatorInstance.Data);
                  bVar15 = false;
                }
              }
              if (bVar16) {
                bVar16 = false;
                bVar15 = bVar22;
                bVar17 = bVar16;
                bVar51 = bVar50;
                if (local_6c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_6c8.Data.AllocatorInstance.Data);
                  bVar17 = false;
                }
              }
              FVar49.Data = local_6a8.Data.AllocatorInstance.Data;
              if (local_6b8.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_6b8.TextData.Reference + 0x10))();
                FVar49.Data = local_6a8.Data.AllocatorInstance.Data;
              }
              goto LAB_149b74550;
            }
          }
LAB_149b7401f:
          if (TVar41.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*TVar41.Reference + 0x10))();
          }
          goto LAB_149b7402a;
        }
LAB_149b7435a:
        local_848 = FPCGContext::NewObject_AnyThread<UPCGSplineData>(param_1);
        UPCGSpatialData::InitializeFromData
                  ((UPCGSpatialData *)local_848,(UPCGSpatialData *)pUVar31,(UPCGMetadata *)0x0,true,
                   true);
        uVar24 = (**(code **)(pUVar31->_padding_ + 0x488))(pUVar31);
        iVar48 = 0;
        local_870.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_870.ArrayNum = 0;
        local_870.ArrayMax = 0;
        local_838 = uVar24;
        if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar24);
        }
        if ((int)uVar24 < 1) {
          local_898.Data = (FScriptContainerElement *)0x0;
          local_890._0_4_ = 0;
          local_890._4_4_ = 0;
        }
        else {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x88,8,uVar24,&local_870.AllocatorInstance,0,&local_870.ArrayMax);
          local_898.Data = (FScriptContainerElement *)0x0;
          local_890._0_4_ = 0;
          local_890._4_4_ = 0;
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,uVar24,&local_898,0,(int *)((longlong)&local_890 + 4));
        }
        pUVar6 = (pAVar29->RootComponent).field0_0x0.DebugPtr;
        bVar20 = false;
        if (pUVar6 == (USceneComponent *)0x0) {
          pTVar36 = &UE::Math::TTransform<double>::Identity;
        }
        else {
          pTVar36 = &pUVar6->ComponentToWorld;
        }
        local_448 = (pTVar36->Rotation).XY.m128d_f64[0];
        dStack_440 = (pTVar36->Rotation).XY.m128d_f64[1];
        local_438 = (pTVar36->Rotation).ZW.m128d_f64[0];
        dStack_430 = (pTVar36->Rotation).ZW.m128d_f64[1];
        dVar11 = (pTVar36->Translation).XY.m128d_f64[0];
        dVar12 = (pTVar36->Translation).XY.m128d_f64[1];
        auVar5 = *(undefined1 (*) [16])(pTVar36->Translation).ZW.m128d_f64;
        local_408 = (pTVar36->Scale3D).XY.m128d_f64[0];
        dStack_400 = (pTVar36->Scale3D).XY.m128d_f64[1];
        local_3f8 = (pTVar36->Scale3D).ZW.m128d_f64[0];
        dStack_3f0 = (pTVar36->Scale3D).ZW.m128d_f64[1];
        if (pUVar26->bLinear == false) {
          local_860 = 1;
          if (pUVar26->bApplyCustomTangents != false) {
            local_860 = 4;
          }
        }
        else {
          local_860 = 0;
        }
        FConstPCGPointValueRanges::FConstPCGPointValueRanges(&local_3e8,pUVar31);
        this_02 = local_7e0;
        this_00 = local_840;
        dVar10 = auVar5._0_8_;
        if ((int)uVar24 < 1) {
LAB_149b74a69:
          local_890._0_4_ = 0;
          if (local_890._4_4_ != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,0,&local_898,0,(int *)((longlong)&local_890 + 4));
          }
        }
        else {
          do {
            if ((local_3e8.TransformRange.NumElements <= iVar48) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < NumElements)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                    ,0x8b,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar22)) {
              pcVar7 = (code *)swi(3);
              uVar21 = (*pcVar7)();
              return (bool)uVar21;
            }
            pTVar36 = local_3e8.TransformRange.ElementView.FirstElementPtr;
            lVar45 = (longlong)(iVar48 % local_3e8.TransformRange.ElementView.NumElements) *
                     (longlong)local_3e8.TransformRange.ElementView.BytesBetweenElements;
            pdVar2 = (double *)
                     ((longlong)
                      ((local_3e8.TransformRange.ElementView.FirstElementPtr)->Translation).XY.
                      m128d_f64 + lVar45);
            local_548 = *pdVar2;
            dStack_540 = pdVar2[1];
            local_538 = *(double *)
                         ((longlong)
                          ((local_3e8.TransformRange.ElementView.FirstElementPtr)->Translation).ZW.
                          m128d_f64 + lVar45);
            local_4c0 = local_538 - dVar10;
            dVar9 = local_548 - dVar11;
            dVar8 = dStack_540 - dVar12;
            local_530 = dVar11;
            dStack_528 = dVar12;
            local_520 = dVar10;
            if ((local_3e8.MetadataEntryRange.NumElements <= iVar48) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < NumElements)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                    ,0x8b,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar22)) {
              pcVar7 = (code *)swi(3);
              uVar21 = (*pcVar7)();
              return (bool)uVar21;
            }
            pdVar2 = (double *)((longlong)(pTVar36->Scale3D).XY.m128d_f64 + lVar45);
            dVar13 = *pdVar2;
            dVar14 = pdVar2[1];
            dVar3 = *(double *)((longlong)(pTVar36->Scale3D).ZW.m128d_f64 + lVar45);
            pdVar2 = (double *)((longlong)(pTVar36->Rotation).XY.m128d_f64 + lVar45);
            local_568.X = *pdVar2;
            local_568.Y = pdVar2[1];
            pdVar2 = (double *)((longlong)(pTVar36->Rotation).ZW.m128d_f64 + lVar45);
            local_568.Z = *pdVar2;
            local_568.W = pdVar2[1];
            lVar45 = *(longlong *)
                      ((longlong)(iVar48 % local_3e8.MetadataEntryRange.ElementView.NumElements) *
                       (longlong)local_3e8.MetadataEntryRange.ElementView.BytesBetweenElements +
                      (longlong)local_3e8.MetadataEntryRange.ElementView.FirstElementPtr);
            local_518 = dVar13;
            dStack_510 = dVar14;
            local_508 = dVar3;
            local_840 = (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)
                        UE::Math::TQuat<double>::Rotator(&local_568,&local_460);
            if (this_00 == (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0) {
              pTVar54 = &local_598;
              uVar57 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
              uVar58 = (undefined4)
                       ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
              local_598._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
              local_598._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
              local_598._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
              local_598._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
              local_598._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            }
            else {
              iVar25 = FPCGMetadataAttributeBase::GetValueKey
                                 ((FPCGMetadataAttributeBase *)this_00,lVar45);
              FPCGMetadataAttribute<UE::Math::TVector<double>_>::GetValue
                        (this_00,(TVector<double> *)&local_500._s_0,iVar25);
              uVar57 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
              uVar58 = (undefined4)
                       ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
              pTVar54 = &local_500;
            }
            if (this_02 == (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0) {
              local_580._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
              local_580._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
              local_580._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
              local_580._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
              pTVar46 = &local_580;
              local_580._s_0.Z = (double)CONCAT44(uVar58,uVar57);
            }
            else {
              iVar25 = FPCGMetadataAttributeBase::GetValueKey
                                 ((FPCGMetadataAttributeBase *)this_02,lVar45);
              FPCGMetadataAttribute<UE::Math::TVector<double>_>::GetValue
                        (this_02,(TVector<double> *)&local_4e8._s_0,iVar25);
              pTVar46 = &local_4e8;
            }
            iVar25 = local_870.ArrayNum;
            if (local_870.ArrayNum == local_870.ArrayMax) {
              iVar25 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x888,&local_870.AllocatorInstance,&local_870.ArrayMax);
            }
            local_870.ArrayNum = iVar25 + 1;
            lVar42 = (longlong)iVar25 * 0x88;
            auVar5._8_4_ = SUB84(dVar8,0);
            auVar5._0_8_ = dVar9;
            auVar5._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
            *(undefined1 (*) [16])(local_870.AllocatorInstance.Data + lVar42 + 8) = auVar5;
            *(double *)(local_870.AllocatorInstance.Data + lVar42 + 0x18) = local_4c0;
            *(float *)(local_870.AllocatorInstance.Data + lVar42) = (float)iVar48;
            dVar8 = (pTVar46->_s_0).Y;
            *(double *)(local_870.AllocatorInstance.Data + lVar42 + 0x20) = (pTVar46->_s_0).X;
            *(double *)(local_870.AllocatorInstance.Data + lVar42 + 0x20 + 8) = dVar8;
            *(double *)(local_870.AllocatorInstance.Data + lVar42 + 0x30) = (pTVar46->_s_0).Z;
            dVar8 = (pTVar54->_s_0).Y;
            *(double *)(local_870.AllocatorInstance.Data + lVar42 + 0x38) = (pTVar54->_s_0).X;
            *(double *)(local_870.AllocatorInstance.Data + lVar42 + 0x38 + 8) = dVar8;
            *(double *)(local_870.AllocatorInstance.Data + lVar42 + 0x48) = (pTVar54->_s_0).Z;
            lVar4 = *(longlong *)&local_840->_padding_;
            *(longlong *)(local_870.AllocatorInstance.Data + lVar42 + 0x50) = local_840->_padding_;
            *(longlong *)(local_870.AllocatorInstance.Data + lVar42 + 0x50 + 8) = lVar4;
            lVar4 = local_840->_padding_;
            *(double *)(local_870.AllocatorInstance.Data + lVar42 + 0x68) = dVar13;
            *(double *)(local_870.AllocatorInstance.Data + lVar42 + 0x68 + 8) = dVar14;
            *(longlong *)(local_870.AllocatorInstance.Data + lVar42 + 0x60) = lVar4;
            *(double *)(local_870.AllocatorInstance.Data + lVar42 + 0x78) = dVar3;
            local_870.AllocatorInstance.Data[lVar42 + 0x80] = SUB41(local_860,0);
            if ((int)local_890 == local_890._4_4_) {
              local_890._0_4_ =
                   UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_898,(int *)((longlong)&local_890 + 4));
            }
            iVar25 = (int)local_890 + 1;
            *(longlong *)(local_898.Data + (longlong)(int)local_890 * 8) = lVar45;
            bVar20 = (bool)(bVar20 | lVar45 != -1);
            iVar48 = iVar48 + 1;
            local_890._0_4_ = iVar25;
          } while (iVar48 < (int)local_838);
          bVar22 = bVar15;
          bVar16 = bVar17;
          bVar50 = bVar51;
          if (!bVar20) goto LAB_149b74a69;
        }
        pUVar55 = local_848;
        local_7b8.AllocatorInstance.Data = local_898.Data;
        local_7b8.ArrayNum = (int)local_890;
        local_118.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_118.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_118.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_7b8.ArrayMax = local_890._4_4_;
        local_898.Data = (FScriptContainerElement *)0x0;
        local_890 = 0;
        local_118.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_118.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_118.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_118.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_118.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_118.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_118.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_118.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_118.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        local_118.Translation.ZW.m128d_f64[1] = 0.0;
        local_4b8 = dVar11;
        dStack_4b0 = dVar12;
        local_4a8 = dVar10;
        local_118.Translation.XY.m128d_f64[0] = dVar11;
        local_118.Translation.XY.m128d_f64[1] = dVar12;
        local_118.Translation.ZW.m128d_f64[0] = dVar10;
        UPCGSplineData::Initialize(local_848,&local_870,pUVar26->bClosedLoop,&local_118,&local_7b8);
        pFVar47 = local_878;
        pAVar29 = local_858;
        if (pUVar26->Mode != CreateDataOnly) {
          bVar20 = IsInGameThread();
          if ((!bVar20) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsInGameThread()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCreateSpline.cpp"
                                  ,0xbf,L""), bVar20)) {
            pcVar7 = (code *)swi(3);
            uVar21 = (*pcVar7)();
            return (bool)uVar21;
          }
          pFVar47 = local_878;
          if (((local_878->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) ||
             (bVar20 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_878->ExecutionSource),
             !bVar20)) {
            pIVar43 = (IPCGGraphExecutionSource *)0x0;
          }
          else {
            pIVar43 = (pFVar47->ExecutionSource).InterfaceInstance;
          }
          this_04 = CastChecked<UPCGComponent,IPCGGraphExecutionSource>(pIVar43);
          pAVar29 = local_858;
          pUVar55 = local_848;
          if (this_04 != (UPCGComponent *)0x0) {
            FObjectInitializer::AssertIfInConstructor
                      ((UObject *)local_858,
                       L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                      );
            pUVar27 = Z_Construct_UClass_USplineComponent_NoRegister();
            FStaticConstructObjectParameters::FStaticConstructObjectParameters
                      ((FStaticConstructObjectParameters *)local_258,pUVar27);
            local_258._8_8_ = pAVar29;
            this_05 = (USplineComponent *)
                      StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_258);
            if (local_258._64_8_ != 0) {
              plVar44 = (longlong *)(local_258 + 0x50);
              if ((longlong *)local_258._104_8_ != (longlong *)0x0) {
                plVar44 = (longlong *)local_258._104_8_;
              }
              (**(code **)(*plVar44 + 0x10))();
            }
            local_850 = this_04->_padding_;
            if ((((longlong *)this_05->_padding_ <= &local_850) &&
                (&local_850 <
                 (longlong *)this_05->_padding_ + *(int *)((longlong)&this_05->_padding_ + 4))) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar20)) {
              pcVar7 = (code *)swi(3);
              uVar21 = (*pcVar7)();
              return (bool)uVar21;
            }
            iVar48 = (int)this_05->_padding_;
            if (iVar48 == *(int *)((longlong)&this_05->_padding_ + 4)) {
              iVar48 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x408,(ForAnyElementType *)&this_05->_padding_,
                                  (int *)((longlong)&this_05->_padding_ + 4));
            }
            *(int *)&this_05->_padding_ = iVar48 + 1;
            *(longlong *)(this_05->_padding_ + (longlong)iVar48 * 8) = local_850;
            if ((((ulonglong)this_05->_padding_ < 0x15528c859) &&
                (&PCGHelpers::DefaultPCGTag <
                 (FName *)(this_05->_padding_ +
                          (longlong)*(int *)((longlong)&this_05->_padding_ + 4) * 8))) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar20)) {
              pcVar7 = (code *)swi(3);
              uVar21 = (*pcVar7)();
              return (bool)uVar21;
            }
            iVar48 = (int)this_05->_padding_;
            if (iVar48 == *(int *)((longlong)&this_05->_padding_ + 4)) {
              iVar48 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x408,(ForAnyElementType *)&this_05->_padding_,
                                  (int *)((longlong)&this_05->_padding_ + 4));
            }
            *(int *)&this_05->_padding_ = iVar48 + 1;
            *(FName *)(this_05->_padding_ + (longlong)iVar48 * 8) = PCGHelpers::DefaultPCGTag;
            UActorComponent::RegisterComponent((UActorComponent *)this_05);
            AActor::AddInstanceComponent(pAVar29,(UActorComponent *)this_05);
            local_880[0] = 0x10100;
            local_800 = 0;
            cVar23 = (**(code **)(this_05->_padding_ + 0x508))
                               (this_05,(pAVar29->RootComponent).field0_0x0.DebugPtr,local_880);
            if (cVar23 == '\0') {
              PCGLog::Component::LogComponentAttachmentFailedWarning(pFVar47);
            }
            UPCGSplineData::ApplyTo(local_848,this_05);
            FObjectInitializer::AssertIfInConstructor
                      ((UObject *)this_04,
                       L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                      );
            pUVar27 = Z_Construct_UClass_UPCGManagedComponent_NoRegister();
            FStaticConstructObjectParameters::FStaticConstructObjectParameters
                      ((FStaticConstructObjectParameters *)local_1d8,pUVar27);
            local_1d8._8_8_ = this_04;
            pUVar37 = (UPCGManagedResource *)
                      StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1d8);
            if (local_1d8._64_8_ != 0) {
              plVar44 = (longlong *)(local_1d8 + 0x50);
              if ((longlong *)local_1d8._104_8_ != (longlong *)0x0) {
                plVar44 = (longlong *)local_1d8._104_8_;
              }
              (**(code **)(*plVar44 + 0x10))();
            }
            local_798 = this_05;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this_05);
            }
            FSoftObjectPtr::operator=((FSoftObjectPtr *)(pUVar37 + 1),(FObjectPtr)&local_798);
            UPCGComponent::AddToManagedResources(this_04,pUVar37);
            pUVar55 = local_848;
          }
        }
        FGCScopeGuard::FGCScopeGuard(&local_8a7);
        iStack_760 = 0x15;
        local_768 = L"PrototypeWithNoParams";
        pUVar27 = Z_Construct_UClass_UPCGFunctionPrototypes_NoRegister();
        pUVar38 = Z_Construct_UClass_UFunction_NoRegister();
        local_658._12_4_ = uStack_75c;
        local_658.Size = iStack_760;
        local_658.DataPtr = local_768;
        pUVar28 = StaticFindObject(pUVar38,(UObject *)pUVar27,&local_658,None);
        FGCScopeGuard::~FGCScopeGuard(&local_8a7);
        local_828.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_828.ArrayNum = 1;
        local_790 = pUVar28;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,1,0,&local_828.AllocatorInstance,1,&local_828.ArrayMax);
        *(UObject **)local_828.AllocatorInstance.Data = local_790;
        local_788 = (UObject *)pAVar29->_padding_;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_788 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_788);
        }
        PCGHelpers::FindUserFunctions
                  (&local_7c8,(TSubclassOf<UObject>)&local_788,&pUVar26->PostProcessFunctionNames,
                   &local_828,pFVar47);
        if (local_828.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_828.AllocatorInstance.Data);
        }
        iVar48 = local_7c8.ArrayNum;
        uVar40 = (ulonglong)local_7c8.ArrayNum;
        pFVar1 = local_7c8.AllocatorInstance.Data + uVar40 * 8;
        FVar49.Data = local_7c8.AllocatorInstance.Data;
        while( true ) {
          if ((uint)uVar40 != iVar48) {
            local_8a6[0] = 0;
            `TCheckedPointerIterator<UFunction_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_8a6);
          }
          if (FVar49.Data == pFVar1) break;
          (**(code **)(pAVar29->_padding_ + 0x260))(pAVar29,*(undefined8 *)FVar49.Data,0);
          uVar40 = (ulonglong)(uint)local_7c8.ArrayNum;
          FVar49.Data = FVar49.Data + 8;
        }
        if (local_7c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_7c8.AllocatorInstance.Data);
        }
        pTVar52 = local_780;
        pFVar18 = local_8a0;
        pFVar53 = (FObjectPtr_u_0 *)(local_780->AllocatorInstance).Data;
        if (((pFVar53 <= local_8a0) && (local_8a0 < pFVar53 + (longlong)local_780->ArrayMax * 0xf))
           && (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar20)) {
          pcVar7 = (code *)swi(3);
          uVar21 = (*pcVar7)();
          return (bool)uVar21;
        }
        iVar48 = pTVar52->ArrayNum;
        if (iVar48 == pTVar52->ArrayMax) {
          iVar48 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x878,&pTVar52->AllocatorInstance,&pTVar52->ArrayMax);
        }
        pTVar52->ArrayNum = iVar48 + 1;
        this_06 = FPCGTaggedData::FPCGTaggedData
                            ((FPCGTaggedData *)
                             ((pTVar52->AllocatorInstance).Data + (longlong)iVar48 * 0x78),
                             (FPCGTaggedData *)pFVar18);
        FPCGDataPtrWrapper::operator=(&this_06->Data,(UPCGData *)pUVar55);
        if (local_898.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_898.Data);
        }
        FVar49.Data = (FScriptContainerElement *)local_8a0;
        param_1 = local_878;
        pFVar53 = local_888;
        if (local_870.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_870.AllocatorInstance.Data);
          FVar49.Data = (FScriptContainerElement *)local_8a0;
          param_1 = local_878;
          pFVar53 = local_888;
        }
      }
LAB_149b7403c:
      uVar40 = (ulonglong)local_834;
      FVar49.Data = FVar49.Data + 0x78;
    }
    if ((UPCGSpatialData *)local_830.Handle != (UPCGSpatialData *)0x0) {
      UE::GC::MarkAsReachable(local_830.Handle);
      goto LAB_149b73e51;
    }
LAB_149b75085:
    if ((byte)LogPCG._0_1_ < 2) goto LAB_149b7403c;
    pFVar30 = FText::AsLocalizable_Advanced_LocText
                        (&local_628,L"PCGCreateSpline",L"InvalidInputData",L"Invalid input data");
    FText::ToString(pFVar30);
    if (param_1 != (FPCGContext *)0x0) {
      FPCGContext::GetTaskName(param_1,&local_638);
      bVar50 = bVar50 | 3;
      FPCGContext::GetExecutionSourceName(param_1,&local_648);
      bVar15 = bVar22;
      bVar17 = bVar16;
      bVar51 = bVar50;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (((bVar50 & 2) != 0) &&
       (bVar50 = bVar50 & 0xfd, bVar15 = bVar22, bVar17 = bVar16, bVar51 = bVar50,
       local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_648.Data.AllocatorInstance.Data);
    }
    if (((bVar50 & 1) != 0) &&
       (bVar51 = bVar50 & 0xfe, bVar15 = bVar22, bVar17 = bVar16, bVar50 = bVar51,
       local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_638.Data.AllocatorInstance.Data);
    }
    FVar49.Data = (FScriptContainerElement *)local_8a0;
    if (local_628.TextData.Reference == (ITextData *)0x0) goto LAB_149b7403c;
    (**(code **)((longlong)*local_628.TextData.Reference + 0x10))();
    FVar49.Data = (FScriptContainerElement *)(local_8a0 + 0xf);
    uVar40 = (ulonglong)local_834;
  } while( true );
}

// ExecutionLoopMode @ 149b88ae0

EPCGElementExecutionLoopMode __thiscall
FPCGCreateSplineElement::ExecutionLoopMode(FPCGCreateSplineElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// IsCacheable @ 149b93110

bool __thiscall
FPCGCreateSplineElement::IsCacheable(FPCGCreateSplineElement *this,UPCGSettings *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UPCGSettings *)0x0) {
    pUVar2 = UPCGCreateSplineSettings::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if (((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar2->_padding_)) && ((char)param_1[1]._padding_ != '\0')) {
      return false;
    }
  }
  return true;
}

// SupportsBasePointDataInputs @ 149b988c0

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
FPCGCreateSplineElement::SupportsBasePointDataInputs
          (FPCGCreateSplineElement *this,FPCGContext *param_1)

{
  return true;
}

