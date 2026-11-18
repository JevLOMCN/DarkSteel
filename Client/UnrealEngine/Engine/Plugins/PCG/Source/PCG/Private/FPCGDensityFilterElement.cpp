// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// operator() @ 149b5e3c0

void __thiscall
`FPCGDensityFilterElement::ExecuteInternal'::__l34::<lambda_1>::operator()(void *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  
  plVar1 = *(longlong **)this;
  pcVar2 = *(code **)(*plVar1 + 0x490);
  uVar3 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x488))();
  (*pcVar2)(plVar1,uVar3,0);
  plVar1 = *(longlong **)this;
  pcVar2 = *(code **)(*plVar1 + 0x498);
  uVar4 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x640))
                    (*(longlong **)((longlong)this + 8),1);
  (*pcVar2)(plVar1,uVar4 | 2);
                    /* WARNING: Could not recover jumptable at 0x000149b5e435. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)this + 0x4b0))(*(longlong **)this,*(undefined8 *)((longlong)this + 8))
  ;
  return;
}

// operator() @ 149b61110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
`FPCGDensityFilterElement::ExecuteInternal'::__l34::<lambda_2>::operator()
          (void *this,int param_1,int param_2,int param_3)

{
  float fVar1;
  double dVar2;
  int iVar3;
  long64 lVar4;
  code *pcVar5;
  double dVar6;
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
  bool bVar17;
  char cVar18;
  uint uVar19;
  int iVar20;
  TTransform<double> *pTVar21;
  float *pfVar22;
  TVector<double> *pTVar23;
  TVector4<double> *pTVar24;
  int *piVar25;
  long64 *plVar26;
  uint uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  undefined1 auStack_408 [32];
  ulonglong local_3e8;
  longlong local_3e0;
  int local_3d8;
  FPCGPointValueRanges local_3c8;
  FConstPCGPointValueRanges local_238;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_408;
  uVar28 = (ulonglong)param_1;
  FConstPCGPointValueRanges::FConstPCGPointValueRanges
            (&local_238,*(UPCGBasePointData **)((longlong)this + 8));
  FPCGPointValueRanges::FPCGPointValueRanges(&local_3c8,*(UPCGBasePointData **)this,false);
  local_3d8 = param_1 + param_3;
  iVar20 = 0;
  uVar29 = uVar28;
  if (param_1 < local_3d8) {
    do {
      uVar27 = (uint)uVar28;
      uVar19 = 0;
      if ((int)uVar27 < local_238.DensityRange.NumElements) {
        uVar19 = ~uVar27 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (local_3e8 = uVar29, local_3e0 = (longlong)local_238.DensityRange.NumElements,
         bVar17 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar17)) {
        pcVar5 = (code *)swi(3);
        iVar20 = (*pcVar5)();
        return iVar20;
      }
      fVar1 = *(float *)((longlong)
                         (int)((longlong)
                               ((ulonglong)(uint)((int)uVar27 >> 0x1f) << 0x20 | uVar28 & 0xffffffff
                               ) % (longlong)local_238.DensityRange.ElementView.NumElements) *
                         (longlong)local_238.DensityRange.ElementView.BytesBetweenElements +
                        (longlong)local_238.DensityRange.ElementView.FirstElementPtr);
      if ((fVar1 < *(float *)((longlong)this + 0x10)) ||
         (*(float *)((longlong)this + 0x14) <= fVar1 && fVar1 != *(float *)((longlong)this + 0x14)))
      {
        cVar18 = '\0';
      }
      else {
        cVar18 = '\x01';
      }
      if (cVar18 != *(char *)((longlong)this + 0x18)) {
        if (local_3c8.TransformRange.NumElements != 0) {
          pTVar21 = TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
                    ::GetElement(&local_238.TransformRange,uVar27);
          dVar2 = (pTVar21->Rotation).XY.m128d_f64[0];
          dVar6 = (pTVar21->Rotation).XY.m128d_f64[1];
          dVar7 = (pTVar21->Rotation).ZW.m128d_f64[0];
          dVar8 = (pTVar21->Rotation).ZW.m128d_f64[1];
          dVar9 = (pTVar21->Translation).XY.m128d_f64[0];
          dVar10 = (pTVar21->Translation).XY.m128d_f64[1];
          dVar11 = (pTVar21->Translation).ZW.m128d_f64[0];
          dVar12 = (pTVar21->Translation).ZW.m128d_f64[1];
          dVar13 = (pTVar21->Scale3D).XY.m128d_f64[0];
          dVar14 = (pTVar21->Scale3D).XY.m128d_f64[1];
          dVar15 = (pTVar21->Scale3D).ZW.m128d_f64[0];
          dVar16 = (pTVar21->Scale3D).ZW.m128d_f64[1];
          pTVar21 = TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
                    ::operator[](&local_3c8.TransformRange,param_2);
          (pTVar21->Rotation).XY.m128d_f64[0] = dVar2;
          (pTVar21->Rotation).XY.m128d_f64[1] = dVar6;
          (pTVar21->Rotation).ZW.m128d_f64[0] = dVar7;
          (pTVar21->Rotation).ZW.m128d_f64[1] = dVar8;
          (pTVar21->Translation).XY.m128d_f64[0] = dVar9;
          (pTVar21->Translation).XY.m128d_f64[1] = dVar10;
          (pTVar21->Translation).ZW.m128d_f64[0] = dVar11;
          (pTVar21->Translation).ZW.m128d_f64[1] = dVar12;
          (pTVar21->Scale3D).XY.m128d_f64[0] = dVar13;
          (pTVar21->Scale3D).XY.m128d_f64[1] = dVar14;
          (pTVar21->Scale3D).ZW.m128d_f64[0] = dVar15;
          (pTVar21->Scale3D).ZW.m128d_f64[1] = dVar16;
        }
        if (local_3c8.DensityRange.NumElements != 0) {
          pfVar22 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                              (&local_238.DensityRange,uVar27);
          fVar1 = *pfVar22;
          pfVar22 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                              (&local_3c8.DensityRange,param_2);
          *pfVar22 = fVar1;
        }
        if (local_3c8.SteepnessRange.NumElements != 0) {
          pfVar22 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                              (&local_238.SteepnessRange,uVar27);
          fVar1 = *pfVar22;
          pfVar22 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                              (&local_3c8.SteepnessRange,param_2);
          *pfVar22 = fVar1;
        }
        if (local_3c8.BoundsMinRange.NumElements != 0) {
          pTVar23 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                    ::GetElement(&local_238.BoundsMinRange,uVar27);
          dVar6 = (pTVar23->field0_0x0)._s_0.X;
          dVar7 = (pTVar23->field0_0x0)._s_0.Y;
          dVar2 = (pTVar23->field0_0x0)._s_0.Z;
          pTVar23 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                    ::operator[](&local_3c8.BoundsMinRange,param_2);
          (pTVar23->field0_0x0)._s_0.X = dVar6;
          (pTVar23->field0_0x0)._s_0.Y = dVar7;
          (pTVar23->field0_0x0)._s_0.Z = dVar2;
        }
        if (local_3c8.BoundsMaxRange.NumElements != 0) {
          pTVar23 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                    ::GetElement(&local_238.BoundsMaxRange,uVar27);
          dVar6 = (pTVar23->field0_0x0)._s_0.X;
          dVar7 = (pTVar23->field0_0x0)._s_0.Y;
          dVar2 = (pTVar23->field0_0x0)._s_0.Z;
          pTVar23 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                    ::operator[](&local_3c8.BoundsMaxRange,param_2);
          (pTVar23->field0_0x0)._s_0.X = dVar6;
          (pTVar23->field0_0x0)._s_0.Y = dVar7;
          (pTVar23->field0_0x0)._s_0.Z = dVar2;
        }
        if (local_3c8.ColorRange.NumElements != 0) {
          pTVar24 = TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
                    ::GetElement(&local_238.ColorRange,uVar27);
          dVar2 = (pTVar24->field0_0x0)._s_0.X;
          dVar6 = (pTVar24->field0_0x0)._s_0.Y;
          dVar7 = (pTVar24->field0_0x0)._s_0.Z;
          dVar8 = (pTVar24->field0_0x0)._s_0.W;
          pTVar24 = TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_>
                    ::operator[](&local_3c8.ColorRange,param_2);
          (pTVar24->field0_0x0)._s_0.X = dVar2;
          (pTVar24->field0_0x0)._s_0.Y = dVar6;
          (pTVar24->field0_0x0)._s_0.Z = dVar7;
          (pTVar24->field0_0x0)._s_0.W = dVar8;
        }
        if (local_3c8.SeedRange.NumElements != 0) {
          piVar25 = TPCGValueRange<int_const_,TStridedView<int_const_,int>_>::GetElement
                              (&local_238.SeedRange,uVar27);
          iVar3 = *piVar25;
          piVar25 = TPCGValueRange<int,TStridedView<int,int>_>::operator[]
                              (&local_3c8.SeedRange,param_2);
          *piVar25 = iVar3;
        }
        if (local_3c8.MetadataEntryRange.NumElements != 0) {
          plVar26 = TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_>::GetElement
                              (&local_238.MetadataEntryRange,uVar27);
          lVar4 = *plVar26;
          plVar26 = TPCGValueRange<__int64,TStridedView<__int64,int>_>::operator[]
                              (&local_3c8.MetadataEntryRange,param_2);
          *plVar26 = lVar4;
        }
        uVar19 = 0;
        if ((int)uVar27 < local_238.DensityRange.NumElements) {
          uVar19 = ~uVar27 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (local_3e8 = uVar29, local_3e0 = (longlong)local_238.DensityRange.NumElements,
           bVar17 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                               ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar17)) {
          pcVar5 = (code *)swi(3);
          iVar20 = (*pcVar5)();
          return iVar20;
        }
        fVar1 = *(float *)((longlong)
                           (int)((longlong)
                                 ((ulonglong)(uint)((int)uVar27 >> 0x1f) << 0x20 |
                                 uVar28 & 0xffffffff) %
                                (longlong)local_238.DensityRange.ElementView.NumElements) *
                           (longlong)local_238.DensityRange.ElementView.BytesBetweenElements +
                          (longlong)local_238.DensityRange.ElementView.FirstElementPtr);
        uVar19 = 0;
        if (param_2 < local_3c8.DensityRange.NumElements) {
          uVar19 = (uint)~param_2 >> 0x1f;
        }
        if (uVar19 == 0) {
          local_3e8 = (ulonglong)param_2;
          local_3e0 = (longlong)local_3c8.DensityRange.NumElements;
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar17) {
            pcVar5 = (code *)swi(3);
            iVar20 = (*pcVar5)();
            return iVar20;
          }
        }
        if (param_2 == param_2 % local_3c8.DensityRange.ElementView.NumElements) {
          pfVar22 = (float *)((longlong)local_3c8.DensityRange.ElementView.BytesBetweenElements *
                              (longlong)(param_2 % local_3c8.DensityRange.ElementView.NumElements) +
                             (longlong)local_3c8.DensityRange.ElementView.FirstElementPtr);
        }
        else {
          pfVar22 = &local_3c8.DensityRange.StubValue;
        }
        iVar20 = iVar20 + 1;
        *pfVar22 = fVar1;
        param_2 = param_2 + 1;
      }
      uVar28 = (ulonglong)(uVar27 + 1);
      uVar29 = uVar29 + 1;
    } while ((int)(uVar27 + 1) < local_3d8);
  }
  return iVar20;
}

// ExecuteInternal @ 149b7aee0

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
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FPCGDensityFilterElement::ExecuteInternal(FPCGDensityFilterElement *this,FPCGContext *param_1)

{
  float fVar1;
  char cVar2;
  UPCGNode *this_00;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  UClass *pUVar9;
  UPCGSettings *pUVar10;
  TObjectPtr<UPCGSettings>_u_0 TVar11;
  FText *pFVar12;
  FPCGTaggedData *pFVar13;
  UPCGBasePointData *pUVar14;
  UPCGBasePointData *this_01;
  FTextFormat *pFVar15;
  FObjectPtr_u_0 FVar16;
  ulonglong uVar17;
  int *piVar18;
  FPCGDataCollection *pFVar19;
  int *piVar20;
  ForAnyElementType FVar21;
  bool bVar22;
  float fVar23;
  float fVar24;
  undefined1 auStackY_2b8 [32];
  <lambda_1> local_266;
  undefined1 local_265 [5];
  int *local_260;
  uint local_258;
  TObjectPtr<UPCGSettings>_u_0 local_250;
  FObjectPtr_u_0 local_248;
  FObjectPtr_u_0 local_240;
  FPCGTaggedData *local_238;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_230;
  FPCGTaggedData *local_220;
  <lambda_4> local_218;
  <lambda_3> local_210;
  <lambda_2> local_208;
  <lambda_1> local_1e8;
  FString local_1d8;
  FText local_1c8;
  FString local_1b8;
  FString local_1a8;
  FText local_198;
  FString local_188;
  FString local_178;
  FText local_168;
  FString local_158;
  FString local_148;
  FText local_138;
  FText local_128;
  FString local_118;
  FString local_108;
  FText local_f8;
  FString local_e8;
  FPCGInitializeFromDataParams local_d8;
  FTextFormat local_98;
  TVector<double>_u_0 local_88;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined4 local_57;
  undefined2 local_53;
  undefined1 local_51;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  local_258 = 0;
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId22,"FPCGDensityFilterElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDensityFilter.cpp"
               ,0x16);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId22);
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr != (UPCGSettings *)0x0) {
    pUVar9 = UPCGDensityFilterSettings::StaticClass();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar9);
    if (bVar5) {
      TVar11.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
    else {
      TVar11.DebugPtr = (UPCGSettings *)0x0;
    }
    goto LAB_149b7b012;
  }
  this_00 = param_1->Node;
  if ((this_00 == (UPCGNode *)0x0) ||
     (pUVar10 = UPCGNode::GetSettings(this_00), pUVar10 == (UPCGSettings *)0x0)) {
    pFVar13 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
              FindByPredicate<_FPCGDataCollection::GetSettings<UPCGDensityFilterSettings>_::__l2::<lambda_1>_>
                        (&(param_1->InputData).TaggedData,local_266);
    if (pFVar13 != (FPCGTaggedData *)0x0) {
      local_250.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar13->Data).Data.field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (local_250.DebugPtr == (UPCGSettings *)0x0) goto LAB_149b7b010;
        UE::GC::MarkAsReachable((UObject *)local_250.DebugPtr);
      }
      if (local_250.DebugPtr != (UPCGSettings *)0x0) {
        pUVar9 = UPCGDensityFilterSettings::StaticClass();
        bVar5 = FObjectPtr::IsA(&local_250.ObjectPtr,pUVar9);
        TVar11 = local_250;
        if (bVar5) goto LAB_149b7b012;
      }
    }
  }
  else {
    pUVar10 = UPCGNode::GetSettings(this_00);
    TVar11.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar10);
    if (TVar11.DebugPtr != (UPCGSettings *)0x0) {
      pUVar9 = UPCGDensityFilterSettings::StaticClass();
      iVar7 = (int)pUVar9->_padding_;
      if ((iVar7 <= *(int *)((TVar11.DebugPtr)->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)((TVar11.DebugPtr)->_padding_ + 0x30) + (longlong)iVar7 * 8)
          == &pUVar9->_padding_)) goto LAB_149b7b012;
    }
  }
LAB_149b7b010:
  TVar11.DebugPtr = (UPCGSettings *)0x0;
LAB_149b7b012:
  if ((TVar11.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDensityFilter.cpp"
                         ,0x19,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_230,&PCGPinConstants::DefaultInputLabel);
  fVar24 = *(float *)((longlong)&TVar11.DebugPtr[1]._padding_ + 4);
  fVar1 = *(float *)&TVar11.DebugPtr[1]._padding_;
  cVar2 = (char)TVar11.DebugPtr[1]._padding_;
  fVar23 = fVar24;
  if (fVar24 <= fVar1) {
    fVar23 = fVar1;
  }
  if (fVar1 <= fVar24) {
    fVar24 = fVar1;
  }
  if ((0.0 < fVar23) || (cVar2 != '\0')) {
    if ((fVar24 != 0.0) || ((fVar23 < __real_3f800000 || (cVar2 == '\0')))) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
  }
  else {
    bVar5 = true;
  }
  if ((((fVar24 <= 0.0) && (__real_3f800000 <= fVar23)) && (cVar2 == '\0')) ||
     (((fVar24 == 0.0 && (fVar23 == 0.0)) && (cVar2 != '\0')))) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (bVar5) {
    if (5 < (byte)LogPCG._0_1_) {
      pFVar12 = FText::AsLocalizable_Advanced_LocText
                          (&local_1c8,L"PCGDensityFilterElement",L"AllInputsRejected",
                           L"Skipped - all inputs rejected");
      FText::ToString(pFVar12);
      FPCGContext::GetTaskName(param_1,&local_1d8);
      FPCGContext::GetExecutionSourceName(param_1,&local_e8);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
      if (local_1c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1c8.TextData.Reference + 0x10))();
      }
    }
  }
  else {
    uVar17 = (ulonglong)local_230.ArrayNum;
    piVar20 = &(param_1->OutputData).TaggedData.ArrayMax;
    local_220 = (FPCGTaggedData *)(local_230.AllocatorInstance.Data + uVar17 * 0x78);
    local_258 = local_230.ArrayNum;
    FVar21.Data = local_230.AllocatorInstance.Data;
    while( true ) {
      pFVar19 = &param_1->OutputData;
      local_238 = (FPCGTaggedData *)FVar21.Data;
      if (local_230.ArrayNum != (uint)uVar17) {
        local_265[0] = 0;
        local_260 = piVar20;
        `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_265);
        piVar20 = &(param_1->OutputData).TaggedData.ArrayMax;
      }
      piVar18 = &(param_1->OutputData).TaggedData.ArrayNum;
      local_260 = piVar20;
      if ((FPCGTaggedData *)FVar21.Data == local_220) break;
      pFVar13 = (FPCGTaggedData *)(pFVar19->TaggedData).AllocatorInstance.Data;
      if (((pFVar13 <= FVar21.Data) && (FVar21.Data < pFVar13 + *piVar20)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      iVar7 = *piVar18;
      if (iVar7 == *piVar20) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x878,(ForAnyElementType *)pFVar19,piVar20);
      }
      *piVar18 = iVar7 + 1;
      pFVar13 = FPCGTaggedData::FPCGTaggedData
                          ((FPCGTaggedData *)
                           ((pFVar19->TaggedData).AllocatorInstance.Data + (longlong)iVar7 * 0x78),
                           (FPCGTaggedData *)FVar21.Data);
      FVar16.Handle = (UObject *)(((FPCGTaggedData *)FVar21.Data)->Data).Data.field0_0x0.DebugPtr;
      if ((UPCGData *)FVar16.Handle == (UPCGData *)0x0) {
LAB_149b7b7d2:
        if (1 < (byte)LogPCG._0_1_) {
          pFVar12 = FText::AsLocalizable_Advanced_LocText
                              (&local_f8,L"PCGDensityFilterElement",L"InvalidInputData",
                               L"Invalid input data");
          FText::ToString(pFVar12);
          FPCGContext::GetTaskName(param_1,&local_108);
          FPCGContext::GetExecutionSourceName(param_1,&local_118);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118.Data.AllocatorInstance.Data);
          }
          if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data.AllocatorInstance.Data);
          }
          piVar20 = local_260;
          if (local_f8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
            piVar20 = local_260;
          }
        }
      }
      else {
        local_248.Handle = FVar16.Handle;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(FVar16.Handle);
        }
        if ((UPCGData *)local_248.Handle == (UPCGData *)0x0) goto LAB_149b7b7d2;
        pUVar9 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
        bVar5 = FObjectPtr::IsA((FObjectPtr *)&local_248,pUVar9);
        if ((!bVar5) || ((UPCGData *)local_248.Handle == (UPCGData *)0x0)) goto LAB_149b7b7d2;
        if (bVar4) {
          if (5 < (byte)LogPCG._0_1_) {
            pFVar12 = FText::AsLocalizable_Advanced_LocText
                                (&local_198,L"PCGDensityFilterElement",L"TrivialFilter",
                                 L"Skipped - trivial filter");
            FText::ToString(pFVar12);
            FPCGContext::GetTaskName(param_1,&local_1a8);
            FPCGContext::GetExecutionSourceName(param_1,&local_1b8);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
            if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
            }
            if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
            }
            piVar20 = local_260;
            if (local_198.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
              piVar20 = local_260;
            }
          }
        }
        else {
          local_240.Handle =
               (UObject *)(((FPCGTaggedData *)FVar21.Data)->Data).Data.field0_0x0.DebugPtr;
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149b7b459:
            if ((UPCGSpatialData *)local_240.Handle == (UPCGSpatialData *)0x0) goto LAB_149b7b47b;
            pUVar9 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
            bVar5 = FObjectPtr::IsA((FObjectPtr *)&local_240,pUVar9);
            FVar16 = local_240;
            if (!bVar5) goto LAB_149b7b47b;
          }
          else {
            if ((UPCGSpatialData *)local_240.Handle != (UPCGSpatialData *)0x0) {
              UE::GC::MarkAsReachable(local_240.Handle);
              goto LAB_149b7b459;
            }
LAB_149b7b47b:
            FVar16.Handle = (UObject *)0x0;
          }
          local_58 = 0;
          local_57 = 0;
          local_53 = 0;
          local_51 = 0;
          local_88._s_0.X = 0.0;
          local_88._s_0.Y = 0.0;
          local_88._s_0.Z = 0.0;
          uStack_70 = 0;
          local_68 = 0;
          uStack_60 = 0;
          pUVar14 = UPCGSpatialData::ToBasePointData
                              ((UPCGSpatialData *)FVar16.Handle,param_1,
                               (TBox<double> *)&local_88._s_0);
          if (pUVar14 == (UPCGBasePointData *)0x0) {
            piVar20 = local_260;
            if (1 < (byte)LogPCG._0_1_) {
              pFVar12 = FText::AsLocalizable_Advanced_LocText
                                  (&local_168,L"PCGDensityFilterElement",L"NoPointDataInInput",
                                   L"Unable to get point data from input");
              FText::ToString(pFVar12);
              FPCGContext::GetTaskName(param_1,&local_178);
              FPCGContext::GetExecutionSourceName(param_1,&local_188);
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
              if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_188.Data.AllocatorInstance.Data);
              }
              if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_178.Data.AllocatorInstance.Data);
              }
              piVar20 = local_260;
              if (local_168.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
                piVar20 = local_260;
              }
            }
          }
          else {
            this_01 = FPCGContext::NewPointData_AnyThread(param_1);
            FPCGInitializeFromDataParams::FPCGInitializeFromDataParams
                      (&local_d8,(UPCGSpatialData *)pUVar14);
            local_d8.bInheritSpatialData = false;
            UPCGSpatialData::InitializeFromDataWithParams((UPCGSpatialData *)this_01,&local_d8);
            FPCGDataPtrWrapper::operator=(&pFVar13->Data,(UPCGData *)this_01);
            local_208.bKeepZeroDensityPoints = false;
            local_218.FilteredData = this_01;
            local_210.FilteredData = this_01;
            local_208.FilteredData = this_01;
            local_208.OriginalData = pUVar14;
            local_208.MinBound = fVar24;
            local_208.MaxBound = fVar23;
            local_208.bInvertFilter = (bool)cVar2;
            local_1e8.FilteredData = this_01;
            local_1e8.OriginalData = pUVar14;
            iVar7 = (**(code **)(pUVar14->_padding_ + 0x488))(pUVar14);
            FPCGAsync::
            AsyncProcessingRangeEx<_FPCGDensityFilterElement::ExecuteInternal_::__l34::<lambda_1>_&,_FPCGDensityFilterElement::ExecuteInternal_::__l34::<lambda_2>_&,_FPCGDensityFilterElement::ExecuteInternal_::__l34::<lambda_3>_&,_FPCGDensityFilterElement::ExecuteInternal_::__l34::<lambda_4>_&>
                      (&param_1->AsyncState,iVar7,&local_1e8,&local_208,&local_210,&local_218,false,
                       0x40,true);
            if (5 < (byte)LogPCG._0_1_) {
              iVar7 = (**(code **)(pUVar14->_padding_ + 0x488))(pUVar14);
              iVar8 = (**(code **)(this_01->_padding_ + 0x488))(this_01);
              pFVar12 = FText::AsLocalizable_Advanced_LocText
                                  (&local_128,L"PCGDensityFilterElement",L"GenerationInfo",
                                   L"Generated {0} points out of {1} source points");
              pFVar15 = FTextFormat::FTextFormat(&local_98,pFVar12,Default);
              pFVar12 = FText::Format<int,int>(&local_138,pFVar15,iVar8,iVar7);
              FText::ToString(pFVar12);
              FPCGContext::GetTaskName(param_1,&local_148);
              FPCGContext::GetExecutionSourceName(param_1,&local_158);
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
              if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_158.Data.AllocatorInstance.Data);
              }
              if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_148.Data.AllocatorInstance.Data);
              }
              if (local_138.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
              }
              if (local_128.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
              }
            }
            DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
                      ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
                       local_d8.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.
                       Data,local_d8.MetadataInitializeParams.DomainInitializeParams.ArrayNum);
            if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
                local_d8.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data !=
                (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
              FMemory::Free(local_d8.MetadataInitializeParams.DomainInitializeParams.
                            AllocatorInstance.Data);
            }
            piVar20 = local_260;
            FVar21.Data = (FScriptContainerElement *)local_238;
            if (local_d8.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d8.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data);
              piVar20 = local_260;
              FVar21.Data = (FScriptContainerElement *)local_238;
            }
          }
        }
      }
      uVar17 = (ulonglong)local_258;
      FVar21.Data = FVar21.Data + 0x78;
    }
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_230.AllocatorInstance.Data,local_230.ArrayNum);
  if ((FPCGTaggedData *)local_230.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_230.AllocatorInstance.Data);
  }
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// ExecutionLoopMode @ 149b88b30

EPCGElementExecutionLoopMode __thiscall
FPCGDensityFilterElement::ExecutionLoopMode(FPCGDensityFilterElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// SupportsBasePointDataInputs @ 149b98940

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
FPCGDensityFilterElement::SupportsBasePointDataInputs
          (FPCGDensityFilterElement *this,FPCGContext *param_1)

{
  return true;
}

