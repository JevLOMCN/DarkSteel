// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// ExecuteInternal @ 149b863a0

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
FPCGGenerateSeedElement::ExecuteInternal(FPCGGenerateSeedElement *this,FPCGContext *param_1)

{
  atomic<int> *paVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  char cVar4;
  UPCGNode *this_00;
  code *pcVar5;
  FPCGMetadataDomainID FVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  FPCGCrc FVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  UClass *pUVar17;
  UPCGSettings *pUVar18;
  TObjectPtr<UPCGSettings>_u_0 TVar19;
  FPCGTaggedData *pFVar20;
  ulonglong uVar21;
  longlong lVar22;
  UPCGData *pUVar23;
  UPCGMetadata *this_01;
  FPCGMetadataDomain *this_02;
  FPCGMetadataAttribute<int> *pFVar24;
  FText *pFVar25;
  FString *pFVar26;
  FPCGDataPtrWrapper *this_03;
  wchar_t *pwVar27;
  uint uVar28;
  FPCGCrc FVar29;
  ulonglong uVar30;
  ForAnyElementType FVar31;
  bool bVar32;
  <lambda_1> local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_368 [16];
  ForAnyElementType local_358;
  int local_350 [2];
  TObjectPtr<UPCGSettings>_u_0 local_348;
  undefined1 local_340 [16];
  FPCGCrc local_330;
  int local_328;
  atomic<int> local_324;
  TObjectPtr<UPCGSettings>_u_0 local_320;
  int local_318 [2];
  undefined1 local_310 [24];
  FPCGAttributePropertySelector local_2f8;
  FPCGAttributePropertySelector local_2b8;
  <lambda_1> local_278;
  <lambda_1> local_270;
  <lambda_1> local_268;
  <lambda_1> local_260;
  <lambda_1> local_258;
  <lambda_1> local_250;
  <lambda_1> local_248;
  <lambda_1> local_240;
  <lambda_1> local_238;
  <lambda_1> local_230;
  <lambda_1> local_228;
  <lambda_1> local_220;
  <lambda_1> local_218;
  UPCGData *local_210;
  FPCGCrc local_208;
  undefined1 local_200 [8];
  FName local_1f8;
  <lambda_1> local_1f0;
  <lambda_1> local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  FText local_1a0;
  FScriptContainerElement *local_188;
  int iStack_180;
  undefined4 uStack_17c;
  FText local_178;
  FString local_168;
  FName local_158;
  FPCGMetadataDomainID FStack_150;
  FText local_138;
  TSharedRef<FTextFormatData,1> local_128;
  FText local_118 [2];
  TArrayView<int_const_,int> local_f8;
  FString local_e8;
  FName local_d8;
  FPCGMetadataDomainID FStack_d0;
  FText local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  bVar32 = -1 < CpuChannel->Enabled;
  if (bVar32) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId49,"FPCGGenerateSeedElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGenerateSeedElement.cpp"
               ,0x31);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId49);
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar18 = UPCGNode::GetSettings(this_00), pUVar18 == (UPCGSettings *)0x0)) {
      local_res10 = SUB81(param_1,0);
      pFVar20 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGGenerateSeedSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_res10);
      if (pFVar20 != (FPCGTaggedData *)0x0) {
        local_320.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar20->Data).Data.field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_320.DebugPtr != (UPCGSettings *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_320.DebugPtr);
        }
        if (local_320.DebugPtr != (UPCGSettings *)0x0) {
          pUVar17 = UPCGGenerateSeedSettings::StaticClass();
          bVar10 = FObjectPtr::IsA(&local_320.ObjectPtr,pUVar17);
          if (bVar10) {
            local_348.DebugPtr = local_320.DebugPtr;
            TVar19 = local_320;
            goto LAB_149b8652a;
          }
        }
      }
    }
    else {
      pUVar18 = UPCGNode::GetSettings(this_00);
      TVar19.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar18);
      if (TVar19.DebugPtr != (UPCGSettings *)0x0) {
        local_348.DebugPtr = TVar19.DebugPtr;
        pUVar17 = UPCGGenerateSeedSettings::StaticClass();
        iVar12 = (int)pUVar17->_padding_;
        if ((iVar12 <= *(int *)((TVar19.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar19.DebugPtr)->_padding_ + 0x30) + (longlong)iVar12 * 8) ==
            &pUVar17->_padding_)) goto LAB_149b8652a;
      }
    }
    local_348.DebugPtr = (UPCGSettings *)0x0;
    TVar19.DebugPtr = (UPCGSettings *)0x0;
  }
  else {
    pUVar17 = UPCGGenerateSeedSettings::StaticClass();
    bVar10 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar17);
    if (bVar10) {
      local_348 = (TObjectPtr<UPCGSettings>_u_0)(param_1->SettingsWithOverride).field0_0x0.DebugPtr;
      TVar19 = local_348;
    }
    else {
      local_348.DebugPtr = (UPCGSettings *)0x0;
      TVar19.DebugPtr = (UPCGSettings *)0x0;
    }
  }
LAB_149b8652a:
  if ((TVar19.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGenerateSeedElement.cpp"
                          ,0x34,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    uVar11 = (*pcVar5)();
    return (bool)uVar11;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,(TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)local_310,
             &PCGPinConstants::DefaultInputLabel);
  iVar12 = FPCGContext::GetSeed(param_1);
  uVar21 = (ulonglong)(int)local_310._8_4_;
  local_324 = (atomic<int>)local_310._8_4_;
  local_208 = (FPCGCrc)(uVar21 * 0x78 + local_310._0_8_);
  FVar29 = (FPCGCrc)local_310._0_8_;
  local_328 = iVar12;
  local_318[0] = iVar12;
  do {
    while( true ) {
      FVar9 = local_208;
      local_330 = FVar29;
      if (local_310._8_4_ != (uint)uVar21) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (FVar29 == FVar9) goto LAB_149b8713f;
      lVar22 = (**(code **)(**(longlong **)FVar29 + 800))();
      if ((lVar22 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InputMetadata",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGenerateSeedElement.cpp"
                              ,0x3e,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
      pUVar23 = (UPCGData *)
                (**(code **)(**(longlong **)FVar29 + 0x310))(*(longlong **)FVar29,param_1,1);
      local_210 = pUVar23;
      this_01 = (UPCGMetadata *)(**(code **)(pUVar23->_padding_ + 0x328))(pUVar23);
      if ((this_01 == (UPCGMetadata *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("OutputMetadata",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGenerateSeedElement.cpp"
                              ,0x42,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
      FVar29 = local_330;
      FPCGAttributePropertyInputSelector::CopyAndFixLast
                ((FPCGAttributePropertyInputSelector *)&TVar19.DebugPtr[1]._padding_,
                 (FPCGAttributePropertyInputSelector *)&local_2b8,*(UPCGData **)local_330);
      FPCGAttributePropertyOutputSelector::CopyAndFixSource
                ((FPCGAttributePropertyOutputSelector *)&TVar19.DebugPtr[1].bUseSeed,
                 (FPCGAttributePropertyOutputSelector *)&local_2f8,
                 (FPCGAttributePropertyInputSelector *)&local_2b8,*(UPCGData **)FVar29);
      if ((local_2f8.Selection == Attribute) &&
         (bVar10 = FPCGAttributePropertySelector::IsBasicAttribute(&local_2f8),
         FVar6 = PCGMetadataDomainID::Default, bVar10)) break;
LAB_149b86866:
      PCGAttributeAccessorHelpers::CreateAccessor
                ((UPCGData *)local_340,(FPCGAttributePropertySelector *)pUVar23,SUB81(&local_2f8,0))
      ;
      PCGAttributeAccessorHelpers::CreateKeys
                ((UPCGData *)(local_340 + 8),(FPCGAttributePropertySelector *)pUVar23);
      if (((IPCGAttributeAccessor *)local_340._0_8_ == (IPCGAttributeAccessor *)0x0) ||
         ((FPCGCrc)local_340._8_8_ == (FPCGCrc)0x0)) {
        PCGLog::Metadata::LogFailToCreateAccessorError(&local_2f8,param_1);
        if ((FPCGCrc)local_340._8_8_ != (FPCGCrc)0x0) {
          (*(code *)**(undefined8 **)local_340._8_8_)(local_340._8_8_,1);
        }
        if ((IPCGAttributeAccessor *)local_340._0_8_ != (IPCGAttributeAccessor *)0x0) {
          (**(code **)*(longlong *)local_340._0_8_)(local_340._0_8_,1);
        }
        goto LAB_149b86815;
      }
      if (*(char *)&TVar19.DebugPtr[1].OriginalSettings != '\0') {
        iVar12 = local_328;
      }
      uVar13 = (**(code **)(*(longlong *)local_340._8_8_ + 0x10))();
      local_358.Data = (FScriptContainerElement *)0x0;
      local_350[0] = 0;
      local_350[1] = 0;
      uVar15 = 0;
      if ((int)uVar13 < 1) {
        if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
        }
      }
      else {
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar13,&local_358,local_350,local_350 + 1);
        uVar21 = 0;
        uVar30 = 0;
        do {
          uVar28 = (uint)uVar30;
          iVar12 = iVar12 * 0xbb38435 + 0x3619636b;
          uVar14 = uVar15;
          if ((int)uVar28 < local_350[0]) {
            uVar14 = ~uVar28 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar5 = (code *)swi(3);
            uVar11 = (*pcVar5)();
            return (bool)uVar11;
          }
          uVar30 = (ulonglong)(uVar28 + 1);
          *(int *)(local_358.Data + uVar21) = iVar12;
          uVar21 = uVar21 + 4;
          TVar19 = local_348;
        } while ((int)(uVar28 + 1) < (int)uVar13);
      }
      FVar29 = local_330;
      cVar4 = (char)TVar19.DebugPtr[1]._padding_;
      if (cVar4 == '\x02') {
        iVar16 = (int)TVar19.DebugPtr[1]._padding_;
        if (iVar16 == 0) {
          pwVar27 = L"";
        }
        else {
          pwVar27 = (wchar_t *)TVar19.DebugPtr[1]._padding_;
          uVar15 = iVar16 - 1;
        }
        uVar15 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar15,pwVar27);
        iVar16 = local_350[0];
        pFVar3 = local_358.Data + (longlong)local_350[0] * 4;
        FVar31.Data = local_358.Data;
        while( true ) {
          if (local_350[0] != iVar16) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res20);
          }
          if (FVar31.Data == pFVar3) break;
          *(uint *)FVar31.Data =
               uVar15 * 0x40 + -0x61c88647 + (uVar15 >> 2) + *(uint *)FVar31.Data ^ uVar15;
          FVar31.Data = FVar31.Data + 4;
        }
      }
      else if (cVar4 == '\x01') {
        PCGAttributeAccessorHelpers::CreateConstAccessor
                  ((UPCGData *)local_368,*(FPCGAttributePropertySelector **)local_330,
                   SUB81(&local_2b8,0));
        PCGAttributeAccessorHelpers::CreateConstKeys
                  ((UPCGData *)(local_368 + 8),*(FPCGAttributePropertySelector **)FVar29);
        if (((IPCGAttributeAccessor *)local_368._0_8_ == (IPCGAttributeAccessor *)0x0) ||
           ((IPCGAttributeAccessorKeys *)local_368._8_8_ == (IPCGAttributeAccessorKeys *)0x0)) {
          PCGLog::Metadata::LogFailToGetAttributeError(&local_2b8,param_1);
          if ((IPCGAttributeAccessorKeys *)local_368._8_8_ != (IPCGAttributeAccessorKeys *)0x0) {
            (**(code **)*(longlong *)local_368._8_8_)(local_368._8_8_,1);
          }
          if ((IPCGAttributeAccessor *)local_368._0_8_ != (IPCGAttributeAccessor *)0x0) {
            (**(code **)*(longlong *)local_368._0_8_)(local_368._0_8_,1);
          }
          if (local_358.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_358.Data);
          }
          if ((FPCGCrc)local_340._8_8_ != (FPCGCrc)0x0) {
            (*(code *)**(undefined8 **)local_340._8_8_)(local_340._8_8_,1);
          }
          if ((IPCGAttributeAccessor *)local_340._0_8_ != (IPCGAttributeAccessor *)0x0) {
            (**(code **)*(longlong *)local_340._0_8_)(local_340._0_8_,1);
          }
          DestructItems<FString,int>
                    ((FString *)local_2f8.ExtraNames.AllocatorInstance.Data,
                     local_2f8.ExtraNames.ArrayNum);
          if (local_2f8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2f8.ExtraNames.AllocatorInstance.Data);
          }
          DestructItems<FString,int>
                    ((FString *)local_2b8.ExtraNames.AllocatorInstance.Data,
                     local_2b8.ExtraNames.ArrayNum);
          if (local_2b8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2b8.ExtraNames.AllocatorInstance.Data);
          }
LAB_149b8713f:
          DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_310._0_8_,local_310._8_4_);
          if ((FPCGCrc)local_310._0_8_ != (FPCGCrc)0x0) {
            FMemory::Free((void *)local_310._0_8_);
          }
          if (bVar32) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          return true;
        }
        switch(*(short *)(local_368._0_8_ + 10)) {
        case 0:
          local_278 = (<lambda_1>)&local_358;
          PCGMetadataElementCommon::
          ApplyOnAccessorRange<float,_PCGMetadataElementCommon::ApplyOnAccessor<float,__FPCGGenerateSeedElement::ExecuteInternal_::__l52::<lambda_1>::operator()<float>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                    ((IPCGAttributeAccessorKeys *)local_368._8_8_,
                     (IPCGAttributeAccessor *)local_368._0_8_,&local_278,StrictType,0x100,-1);
          break;
        case 1:
          local_270 = (<lambda_1>)&local_358;
          PCGMetadataElementCommon::
          ApplyOnAccessorRange<double,_PCGMetadataElementCommon::ApplyOnAccessor<double,__FPCGGenerateSeedElement::ExecuteInternal_::__l52::<lambda_1>::operator()<double>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                    ((IPCGAttributeAccessorKeys *)local_368._8_8_,
                     (IPCGAttributeAccessor *)local_368._0_8_,&local_270,StrictType,0x100,-1);
          break;
        case 2:
          local_1f0 = (<lambda_1>)&local_358;
          PCGMetadataElementCommon::
          ApplyOnAccessorRange<int,_PCGMetadataElementCommon::ApplyOnAccessor<int,__FPCGGenerateSeedElement::ExecuteInternal_::__l52::<lambda_1>::operator()<int>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                    ((IPCGAttributeAccessorKeys *)local_368._8_8_,
                     (IPCGAttributeAccessor *)local_368._0_8_,&local_1f0,StrictType,0x100,-1);
          break;
        case 3:
          local_1e8 = (<lambda_1>)&local_358;
          PCGMetadataElementCommon::
          ApplyOnAccessorRange<__int64,_PCGMetadataElementCommon::ApplyOnAccessor<__int64,__FPCGGenerateSeedElement::ExecuteInternal_::__l52::<lambda_1>::operator()<__int64>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                    ((IPCGAttributeAccessorKeys *)local_368._8_8_,
                     (IPCGAttributeAccessor *)local_368._0_8_,&local_1e8,StrictType,0x100,-1);
          break;
        case 4:
          local_268 = (<lambda_1>)&local_358;
          local_80 = 0;
          uStack_78 = 0;
          PCGMetadataElementCommon::
          ApplyOnAccessorRange<UE::Math::TVector2<double>,_PCGMetadataElementCommon::ApplyOnAccessor<UE::Math::TVector2<double>,__FPCGGenerateSeedElement::ExecuteInternal_::__l52::<lambda_1>::operator()<UE::Math::TVector2<double>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                    ((IPCGAttributeAccessorKeys *)local_368._8_8_,
                     (IPCGAttributeAccessor *)local_368._0_8_,&local_268,StrictType,0x100,-1);
          break;
        case 5:
          local_88 = 0;
          local_260 = (<lambda_1>)&local_358;
          local_98 = 0;
          uStack_90 = 0;
          PCGMetadataElementCommon::
          ApplyOnAccessorRange<UE::Math::TVector<double>,_PCGMetadataElementCommon::ApplyOnAccessor<UE::Math::TVector<double>,__FPCGGenerateSeedElement::ExecuteInternal_::__l52::<lambda_1>::operator()<UE::Math::TVector<double>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                    ((IPCGAttributeAccessorKeys *)local_368._8_8_,
                     (IPCGAttributeAccessor *)local_368._0_8_,&local_260,StrictType,0x100,-1);
          break;
        case 6:
          local_258 = (<lambda_1>)&local_358;
          PCGMetadataElementCommon::
          ApplyOnAccessorRange<UE::Math::TVector4<double>,_PCGMetadataElementCommon::ApplyOnAccessor<UE::Math::TVector4<double>,__FPCGGenerateSeedElement::ExecuteInternal_::__l52::<lambda_1>::operator()<UE::Math::TVector4<double>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                    ((IPCGAttributeAccessorKeys *)local_368._8_8_,
                     (IPCGAttributeAccessor *)local_368._0_8_,&local_258,StrictType,0x100,-1);
          break;
        case 7:
          local_250 = (<lambda_1>)&local_358;
          local_68 = 0;
          uStack_60 = 0;
          local_58 = 0;
          uStack_50 = 0;
          PCGMetadataElementCommon::
          ApplyOnAccessorRange<UE::Math::TQuat<double>,_PCGMetadataElementCommon::ApplyOnAccessor<UE::Math::TQuat<double>,__FPCGGenerateSeedElement::ExecuteInternal_::__l52::<lambda_1>::operator()<UE::Math::TQuat<double>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                    ((IPCGAttributeAccessorKeys *)local_368._8_8_,
                     (IPCGAttributeAccessor *)local_368._0_8_,&local_250,StrictType,0x100,-1);
          break;
        case 8:
          local_248 = (<lambda_1>)&local_358;
          PCGMetadataElementCommon::
          ApplyOnAccessorRange<UE::Math::TTransform<double>,_PCGMetadataElementCommon::ApplyOnAccessor<UE::Math::TTransform<double>,__FPCGGenerateSeedElement::ExecuteInternal_::__l52::<lambda_1>::operator()<UE::Math::TTransform<double>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                    ((IPCGAttributeAccessorKeys *)local_368._8_8_,
                     (IPCGAttributeAccessor *)local_368._0_8_,&local_248,StrictType,0x100,-1);
          break;
        case 9:
          local_240 = (<lambda_1>)&local_358;
          PCGMetadataElementCommon::
          ApplyOnAccessorRange<FString,_PCGMetadataElementCommon::ApplyOnAccessor<FString,__FPCGGenerateSeedElement::ExecuteInternal_::__l52::<lambda_1>::operator()<FString>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                    ((IPCGAttributeAccessorKeys *)local_368._8_8_,
                     (IPCGAttributeAccessor *)local_368._0_8_,&local_240,StrictType,0x100,-1);
          break;
        case 10:
          local_238 = (<lambda_1>)&local_358;
          PCGMetadataElementCommon::
          ApplyOnAccessorRange<bool,_PCGMetadataElementCommon::ApplyOnAccessor<bool,__FPCGGenerateSeedElement::ExecuteInternal_::__l52::<lambda_1>::operator()<bool>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                    ((IPCGAttributeAccessorKeys *)local_368._8_8_,
                     (IPCGAttributeAccessor *)local_368._0_8_,&local_238,StrictType,0x100,-1);
          break;
        case 0xb:
          local_a0 = 0;
          local_230 = (<lambda_1>)&local_358;
          local_b0 = 0;
          uStack_a8 = 0;
          PCGMetadataElementCommon::
          ApplyOnAccessorRange<UE::Math::TRotator<double>,_PCGMetadataElementCommon::ApplyOnAccessor<UE::Math::TRotator<double>,__FPCGGenerateSeedElement::ExecuteInternal_::__l52::<lambda_1>::operator()<UE::Math::TRotator<double>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                    ((IPCGAttributeAccessorKeys *)local_368._8_8_,
                     (IPCGAttributeAccessor *)local_368._0_8_,&local_230,StrictType,0x100,-1);
          break;
        case 0xc:
          local_228 = (<lambda_1>)&local_358;
          PCGMetadataElementCommon::
          ApplyOnAccessorRange<FName,_PCGMetadataElementCommon::ApplyOnAccessor<FName,__FPCGGenerateSeedElement::ExecuteInternal_::__l52::<lambda_1>::operator()<FName>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                    ((IPCGAttributeAccessorKeys *)local_368._8_8_,
                     (IPCGAttributeAccessor *)local_368._0_8_,&local_228,StrictType,0x100,-1);
          break;
        case 0xd:
          local_220 = (<lambda_1>)&local_358;
          local_1e0 = 0;
          local_1d8 = 0;
          local_1d0 = 0;
          local_1c8 = 0;
          PCGMetadataElementCommon::
          ApplyOnAccessorRange<FSoftObjectPath,_PCGMetadataElementCommon::ApplyOnAccessor<FSoftObjectPath,__FPCGGenerateSeedElement::ExecuteInternal_::__l52::<lambda_1>::operator()<FSoftObjectPath>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                    ((IPCGAttributeAccessorKeys *)local_368._8_8_,
                     (IPCGAttributeAccessor *)local_368._0_8_,&local_220,StrictType,0x100,-1);
          break;
        case 0xe:
          local_218 = (<lambda_1>)&local_358;
          local_1c0 = 0;
          local_1b8 = 0;
          local_1b0 = 0;
          local_1a8 = 0;
          PCGMetadataElementCommon::
          ApplyOnAccessorRange<FSoftClassPath,_PCGMetadataElementCommon::ApplyOnAccessor<FSoftClassPath,__FPCGGenerateSeedElement::ExecuteInternal_::__l52::<lambda_1>::operator()<FSoftClassPath>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                    ((IPCGAttributeAccessorKeys *)local_368._8_8_,
                     (IPCGAttributeAccessor *)local_368._0_8_,&local_218,StrictType,0x100,-1);
        }
        if ((IPCGAttributeAccessorKeys *)local_368._8_8_ != (IPCGAttributeAccessorKeys *)0x0) {
          (**(code **)*(longlong *)local_368._8_8_)(local_368._8_8_,1);
        }
        if ((IPCGAttributeAccessor *)local_368._0_8_ != (IPCGAttributeAccessor *)0x0) {
          (**(code **)*(longlong *)local_368._0_8_)(local_368._0_8_,1);
        }
      }
      uVar8 = local_340._8_8_;
      uVar7 = local_340._0_8_;
      iVar16 = local_350[0];
      local_188 = local_358.Data;
      if ((local_350[0] < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
      iStack_180 = iVar16;
      local_f8._12_4_ = uStack_17c;
      local_f8.ArrayNum = iVar16;
      local_f8.DataPtr = (int *)local_188;
      bVar10 = IPCGAttributeAccessor::SetRange<int>
                         ((IPCGAttributeAccessor *)uVar7,&local_f8,0,
                          (IPCGAttributeAccessorKeys *)uVar8,StrictType);
      uVar7 = local_340._0_8_;
      if (bVar10) {
        piVar2 = &(param_1->OutputData).TaggedData.ArrayMax;
        iVar16 = (param_1->OutputData).TaggedData.ArrayNum;
        if (iVar16 == *piVar2) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x878,(ForAnyElementType *)&param_1->OutputData,piVar2);
        }
        (param_1->OutputData).TaggedData.ArrayNum = iVar16 + 1;
        this_03 = (FPCGDataPtrWrapper *)
                  ((param_1->OutputData).TaggedData.AllocatorInstance.Data + (longlong)iVar16 * 0x78
                  );
        this_03[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        this_03[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        this_03[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        this_03[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        this_03[6].WeakData.WeakPtr.ObjectIndex = 0x100;
        (this_03->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
        (this_03->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
        this_03[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        this_03[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        this_03[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        this_03[3].WeakData.WeakPtr.ObjectIndex = 0;
        this_03[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
        *(undefined4 *)&this_03[4].Data.field0_0x0 = 0xffffffff;
        *(undefined4 *)((longlong)&this_03[4].Data.field0_0x0 + 4) = 0;
        this_03[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        this_03[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        *(undefined8 *)&this_03[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
        *(undefined4 *)((longlong)&this_03[7].Data.field0_0x0 + 4) = 0xffffffff;
        this_03[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
             (FObjectPtr_u_0)PCGPinConstants::DefaultOutputLabel;
        FPCGDataPtrWrapper::operator=(this_03,local_210);
      }
      else {
        pFVar26 = FPCGAttributePropertySelector::ToString(&local_2f8,&local_e8,false);
        FText::FromString(&local_178,pFVar26);
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        PCGLog::Metadata::LogFailToSetAttributeError<int>
                  (&local_178,(IPCGAttributeAccessor *)uVar7,param_1);
        if (local_178.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
        }
      }
      if (local_358.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_358.Data);
      }
      if ((FPCGCrc)local_340._8_8_ != (FPCGCrc)0x0) {
        (*(code *)**(undefined8 **)local_340._8_8_)(local_340._8_8_,1);
      }
      if ((IPCGAttributeAccessor *)local_340._0_8_ != (IPCGAttributeAccessor *)0x0) {
        (**(code **)*(longlong *)local_340._0_8_)(local_340._0_8_,1);
      }
      DestructItems<FString,int>
                ((FString *)local_2f8.ExtraNames.AllocatorInstance.Data,
                 local_2f8.ExtraNames.ArrayNum);
      if (local_2f8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2f8.ExtraNames.AllocatorInstance.Data);
      }
      DestructItems<FString,int>
                ((FString *)local_2b8.ExtraNames.AllocatorInstance.Data,
                 local_2b8.ExtraNames.ArrayNum);
      TVar19 = local_348;
      if (local_2b8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b8.ExtraNames.AllocatorInstance.Data);
        TVar19 = local_348;
      }
LAB_149b86f9e:
      FVar29 = (FPCGCrc)((longlong)local_330 + 0x78);
      uVar21 = (ulonglong)(uint)local_324;
    }
    FPCGAttributePropertySelector::GetName(&local_2f8);
    FStack_d0 = FVar6;
    FStack_d0._0_8_ = FVar6._0_8_;
    local_158 = local_d8;
    FStack_150.Flag = FStack_d0.Flag;
    FStack_150._1_3_ = FStack_d0._1_3_;
    FStack_150.CustomFlag = FStack_d0.CustomFlag;
    FStack_150.DebugName = FVar6.DebugName;
    FStack_d0 = FVar6;
    this_02 = UPCGMetadata::FindOrCreateMetadataDomain(this_01,&FStack_150);
    if ((this_02 != (FPCGMetadataDomain *)0x0) &&
       (pFVar24 = FPCGMetadataDomain::FindOrCreateAttribute<int>
                            (this_02,local_158,local_318,true,true,true),
       pFVar24 != (FPCGMetadataAttribute<int> *)0x0)) goto LAB_149b86866;
    local_1f8 = FPCGAttributePropertySelector::GetName(&local_2f8);
    local_1f8 = *(FName *)local_1f8;
    pFVar25 = FText::FromName(&local_c0,&local_1f8);
    PCG::Private::GetTypeName(&local_168,2);
    FText::FromString(&local_138,&local_168);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    local_1a0.TextData.Reference = (pFVar25->TextData).Reference;
    if (local_1a0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1a0.TextData.Reference + 8))
                (local_1a0.TextData.Reference,local_200);
    }
    local_1a0.Flags = pFVar25->Flags;
    local_128 = PCGLog::Metadata::Format::CreateAttributeFailure.TextFormatData;
    if (PCGLog::Metadata::Format::CreateAttributeFailure.TextFormatData.SharedReferenceCount.
        ReferenceController.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(PCGLog::Metadata::Format::CreateAttributeFailure.TextFormatData.
                 SharedReferenceCount.ReferenceController.ReferenceController)->SharedReferenceCount
      ;
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
    }
    pFVar25 = FText::Format<FText,FText>(local_118,(FTextFormat *)&local_128,&local_1a0,&local_138);
    PCGLog::LogErrorOnGraph(pFVar25,param_1);
    if (local_118[0].TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_118[0].TextData.Reference + 0x10))();
    }
    if (local_c0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_c0.TextData.Reference + 0x10))();
    }
LAB_149b86815:
    DestructItems<FString,int>
              ((FString *)local_2f8.ExtraNames.AllocatorInstance.Data,local_2f8.ExtraNames.ArrayNum)
    ;
    if (local_2f8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.ExtraNames.AllocatorInstance.Data);
    }
    DestructItems<FString,int>
              ((FString *)local_2b8.ExtraNames.AllocatorInstance.Data,local_2b8.ExtraNames.ArrayNum)
    ;
    if (local_2b8.ExtraNames.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
    goto LAB_149b86f9e;
    FMemory::Free(local_2b8.ExtraNames.AllocatorInstance.Data);
    FVar29 = (FPCGCrc)((longlong)local_330 + 0x78);
    uVar21 = (ulonglong)(uint)local_324;
  } while( true );
}

// SupportsBasePointDataInputs @ 149b98ac0

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
FPCGGenerateSeedElement::SupportsBasePointDataInputs
          (FPCGGenerateSeedElement *this,FPCGContext *param_1)

{
  return true;
}

