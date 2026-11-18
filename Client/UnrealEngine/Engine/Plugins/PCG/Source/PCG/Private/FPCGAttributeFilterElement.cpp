// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// ExecuteInternal @ 149b04710

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
FPCGAttributeFilterElement::ExecuteInternal(FPCGAttributeFilterElement *this,FPCGContext *param_1)

{
  int iVar1;
  UPCGNode *this_00;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  UClass *pUVar6;
  UPCGSettings *pUVar7;
  TObjectPtr<UPCGSettings>_u_0 TVar8;
  FPCGTaggedData *pFVar9;
  bool bVar10;
  undefined1 auStackY_248 [32];
  <lambda_1> local_1f8;
  TObjectPtr<UPCGSettings>_u_0 local_1f0;
  undefined1 local_1e8 [56];
  int local_1b0;
  bool local_1a0;
  undefined1 local_198 [312];
  void *local_60;
  undefined8 uStack_58;
  FName local_50;
  FName FStack_48;
  ForAnyElementType local_40;
  undefined8 uStack_38;
  bool local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_248;
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId906,"FPCGAttributeFilterElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttributeFilter.cpp"
               ,0x38a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId906);
  }
  if ((param_1->Node == (UPCGNode *)0x0) ||
     (bVar3 = UPCGNode::IsOutputPinConnected(param_1->Node,&PCGPinConstants::DefaultInFilterLabel),
     !bVar3)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((param_1->Node == (UPCGNode *)0x0) ||
     (bVar4 = UPCGNode::IsOutputPinConnected(param_1->Node,&PCGPinConstants::DefaultOutFilterLabel),
     !bVar4)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((!bVar3) && (!bVar4)) {
    bVar3 = true;
    goto LAB_149b04b52;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar7 = UPCGNode::GetSettings(this_00), pUVar7 == (UPCGSettings *)0x0)) {
      pFVar9 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
               FindByPredicate<_FPCGDataCollection::GetSettings<UPCGAttributeFilteringSettings>_::__l2::<lambda_1>_>
                         (&(param_1->InputData).TaggedData,local_1f8);
      if (pFVar9 != (FPCGTaggedData *)0x0) {
        local_1f0.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar9->Data).Data.field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_1f0.DebugPtr != (UPCGSettings *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_1f0.DebugPtr);
        }
        if (local_1f0.DebugPtr != (UPCGSettings *)0x0) {
          pUVar6 = UPCGAttributeFilteringSettings::StaticClass();
          bVar3 = FObjectPtr::IsA(&local_1f0.ObjectPtr,pUVar6);
          TVar8 = local_1f0;
          if (bVar3) goto LAB_149b048d7;
        }
      }
    }
    else {
      pUVar7 = UPCGNode::GetSettings(this_00);
      TVar8.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar7);
      if (TVar8.DebugPtr != (UPCGSettings *)0x0) {
        pUVar6 = UPCGAttributeFilteringSettings::StaticClass();
        iVar1 = (int)pUVar6->_padding_;
        if ((iVar1 <= *(int *)((TVar8.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar8.DebugPtr)->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar6->_padding_)) goto LAB_149b048d7;
      }
    }
LAB_149b048d4:
    TVar8.DebugPtr = (UPCGSettings *)0x0;
  }
  else {
    pUVar6 = UPCGAttributeFilteringSettings::StaticClass();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar6);
    if (!bVar3) goto LAB_149b048d4;
    TVar8.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
  }
LAB_149b048d7:
  if ((TVar8.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttributeFilter.cpp"
                         ,0x398,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  local_1e8[0] = true;
  local_1e8[1] = false;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)(local_1e8 + 8));
  local_1a0 = true;
  local_198[0] = Double;
  local_198._16_8_ = 0.0;
  local_198._4_4_ = String;
  local_198._8_4_ = 0.0;
  local_198._32_16_ = (undefined1  [16])UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  local_198._48_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_198._56_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_198._64_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_198._80_8_ = 0.0;
  local_198._88_8_ = 0.0;
  local_198._96_8_ = 0.0;
  local_198._104_8_ = 0.0;
  local_198._112_8_ = UE::Math::TQuat<double>::Identity.X;
  local_198._120_8_ = UE::Math::TQuat<double>::Identity.Y;
  local_198._128_8_ = UE::Math::TQuat<double>::Identity.Z;
  local_198._136_8_ = UE::Math::TQuat<double>::Identity.W;
  local_198._144_8_ = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
  local_198._152_8_ = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
  local_198._160_8_ = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
  local_198._168_8_ = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
  local_198._176_8_ = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
  local_198._184_8_ = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
  local_198._192_8_ = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
  local_198._200_8_ = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
  local_198._208_8_ = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
  local_198._216_8_ = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
  local_198._224_8_ = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
  local_198._232_8_ = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
  local_198._12_4_ = 0;
  local_198._24_8_ = 0;
  ::FString::FString((FString *)(local_198 + 0xf0),"");
  local_198[0x100] = false;
  local_198._288_4_ = 0;
  local_198._292_4_ = 0;
  local_198._264_8_ = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  local_198._272_8_ = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  local_30 = true;
  local_198._280_8_ = UE::Math::TRotator<double>::ZeroRotator.Roll;
  local_198._296_8_ = 0;
  local_198._304_8_ = 0;
  local_60 = (void *)0x0;
  uStack_58 = 0;
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  FStack_48.ComparisonIndex.Value = 0;
  FStack_48.Number = 0;
  local_40.Data = (FScriptContainerElement *)0x0;
  uStack_38._0_4_ = 0;
  uStack_38._4_4_ = 0;
  local_1e8[1] = SUB81(TVar8.DebugPtr[1]._padding_,0);
  local_1a0 = *(bool *)(TVar8.DebugPtr[1].CacheLock.CriticalSection.Opaque3 + 1);
  FPCGAttributePropertySelector::operator=
            ((FPCGAttributePropertySelector *)(local_1e8 + 8),
             (FPCGAttributePropertySelector *)&TVar8.DebugPtr[1].Seed);
  FPCGMetadataTypesConstantStruct::operator=
            ((FPCGMetadataTypesConstantStruct *)local_198,
             (FPCGMetadataTypesConstantStruct *)
             (TVar8.DebugPtr[1].CacheLock.CriticalSection.Opaque3 + 2));
  bVar3 = FPCGAttributeFilterElementBase::DoFiltering
                    ((FPCGAttributeFilterElementBase *)this,param_1,
                     (EPCGAttributeFilterOperator)TVar8.DebugPtr[1]._padding_,
                     (FPCGAttributePropertyInputSelector *)&TVar8.DebugPtr[1]._padding_,
                     *(bool *)((longlong)TVar8.DebugPtr[3].CacheLock.CriticalSection.Opaque1 + 2),
                     *(bool *)TVar8.DebugPtr[3].CacheLock.CriticalSection.Opaque1,
                     *(bool *)((longlong)TVar8.DebugPtr[3].CacheLock.CriticalSection.Opaque1 + 1),
                     (FPCGAttributeFilterThresholdSettings *)local_1e8,
                     (FPCGAttributeFilterThresholdSettings *)0x0);
  if (local_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data);
  }
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  if ((FScriptContainerElement *)local_198._240_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_198._240_8_);
  }
  DestructItems<FString,int>((FString *)local_1e8._48_8_,local_1b0);
  if ((FString *)local_1e8._48_8_ != (FString *)0x0) {
    FMemory::Free((void *)local_1e8._48_8_);
  }
LAB_149b04b52:
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar3;
}

