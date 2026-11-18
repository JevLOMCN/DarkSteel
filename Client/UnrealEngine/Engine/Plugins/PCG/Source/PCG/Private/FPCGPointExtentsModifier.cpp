// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// operator() @ 149bef8d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`FPCGPointExtentsModifier::ExecuteInternal'::__l2::<lambda_1>::operator()
          (void *this,UPCGBasePointData *param_1,int param_2,int param_3,
          TFunctionRef<void___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_&,UE::Math::TVector<double>_&)>
          *param_4)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  double *pdVar9;
  undefined4 in_register_00000084;
  double *pdVar10;
  int iVar11;
  undefined1 local_b8 [16];
  double local_a8;
  longlong local_a0;
  int local_98;
  int local_94;
  int local_90;
  double local_88 [3];
  longlong local_70;
  int local_68;
  int local_64;
  int local_60;
  double local_58 [8];
  
  (**(code **)(param_1->_padding_ + 0x4d0))
            (param_1,&local_a0,CONCAT71((int7)(CONCAT44(in_register_00000084,param_2) >> 8),1));
  (**(code **)(param_1->_padding_ + 0x4d8))(param_1,&local_70,1);
  dVar5 = _UNK_150689678;
  dVar4 = ___xmm_3fe00000000000003fe0000000000000;
  dVar3 = __real_3fe0000000000000;
  iVar11 = param_3 + param_2;
  while( true ) {
    if (iVar11 <= param_2) {
      return true;
    }
    uVar8 = 0;
    if (param_2 < local_90) {
      uVar8 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < NumElements)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                           ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar6)) break;
    if (param_2 == param_2 % local_94) {
      pdVar9 = (double *)((longlong)local_98 * (longlong)(param_2 % local_94) + local_a0);
    }
    else {
      pdVar9 = local_88;
    }
    uVar8 = 0;
    if (param_2 < local_60) {
      uVar8 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < NumElements)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                           ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar6)) {
      pcVar1 = (code *)swi(3);
      uVar7 = (*pcVar1)();
      return (bool)uVar7;
    }
    if (param_2 == param_2 % local_64) {
      pdVar10 = (double *)((longlong)local_68 * (longlong)(param_2 % local_64) + local_70);
    }
    else {
      pdVar10 = local_58;
    }
    local_a8 = (pdVar10[2] - pdVar9[2]) * dVar3;
    dVar2 = (pdVar10[1] - pdVar9[1]) * dVar5;
    local_b8._8_4_ = SUB84(dVar2,0);
    local_b8._0_8_ = (*pdVar10 - *pdVar9) * dVar4;
    local_b8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,local_b8,pdVar9);
    param_2 = param_2 + 1;
  }
  pcVar1 = (code *)swi(3);
  uVar7 = (*pcVar1)();
  return (bool)uVar7;
}

// ExecuteInternal @ 149c14f60

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
FPCGPointExtentsModifier::ExecuteInternal(FPCGPointExtentsModifier *this,FPCGContext *param_1)

{
  char cVar1;
  int iVar2;
  UPCGNode *this_00;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 uVar6;
  UClass *pUVar7;
  UPCGSettings *pUVar8;
  FObjectPtr_u_0 FVar9;
  FPCGTaggedData *pFVar10;
  TFunctionRef<bool___cdecl(UPCGBasePointData_const_*,UPCGBasePointData_*,int,int)> *pTVar11;
  bool bVar12;
  FObjectPtr_u_0 local_res10;
  code *local_1a8;
  undefined8 *local_1a0;
  code *local_198;
  undefined8 *local_190;
  code *local_188;
  undefined8 *local_180;
  code *local_178;
  undefined8 *local_170;
  code *local_168;
  undefined8 *local_160;
  undefined8 uStack_158;
  longlong local_150;
  undefined8 uStack_148;
  undefined8 uStack_138;
  longlong local_130;
  undefined8 uStack_128;
  undefined8 uStack_118;
  longlong local_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  longlong local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_d8;
  longlong local_d0;
  undefined8 uStack_c8;
  undefined8 local_b8;
  longlong lStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  longlong lStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  longlong lStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong lStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  longlong lStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId23,"FPCGPointExtentsModifier::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGPointExtentsModifier.cpp"
               ,0x17);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId23);
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar8 = UPCGNode::GetSettings(this_00), pUVar8 == (UPCGSettings *)0x0)) {
      pFVar10 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGPointExtentsModifierSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,(<lambda_1>)local_res10._0_1_);
      if (pFVar10 != (FPCGTaggedData *)0x0) {
        local_res10 = (FObjectPtr_u_0)(pFVar10->Data).Data.field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if ((UPCGSettings *)local_res10.Handle == (UPCGSettings *)0x0) goto LAB_149c1505d;
          UE::GC::MarkAsReachable(local_res10.Handle);
        }
        if ((UPCGSettings *)local_res10.Handle != (UPCGSettings *)0x0) {
          pUVar7 = UPCGPointExtentsModifierSettings::StaticClass();
          bVar5 = FObjectPtr::IsA((FObjectPtr *)&local_res10,pUVar7);
          FVar9 = local_res10;
          if (bVar5) goto LAB_149c15067;
        }
      }
    }
    else {
      pUVar8 = UPCGNode::GetSettings(this_00);
      FVar9.Handle = (UObject *)FPCGDataCollection::GetSettings(&param_1->InputData,pUVar8);
      if ((UPCGSettings *)FVar9.Handle != (UPCGSettings *)0x0) {
        pUVar7 = UPCGPointExtentsModifierSettings::StaticClass();
        iVar2 = (int)pUVar7->_padding_;
        if ((iVar2 <= *(int *)(*(longlong *)&(FVar9.Handle)->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&(FVar9.Handle)->field_0x10 + 0x30) + (longlong)iVar2 * 8)
            == &pUVar7->_padding_)) goto LAB_149c15067;
      }
    }
LAB_149c1505d:
    FVar9.Handle = (UObject *)0x0;
  }
  else {
    pUVar7 = UPCGPointExtentsModifierSettings::StaticClass();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar7);
    if (bVar5) {
      FVar9 = (FObjectPtr_u_0)(param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
    else {
      FVar9.Handle = (UObject *)0x0;
    }
  }
LAB_149c15067:
  if (((UPCGSettings *)FVar9.Handle == (UPCGSettings *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGPointExtentsModifier.cpp"
                         ,0x1b,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  cVar1 = (char)((UPCGSettings *)(FVar9.Handle + 5))->_padding_;
  if (cVar1 == '\0') {
    local_d0 = ((UPCGSettings *)(FVar9.Handle + 5))->_padding_;
    lVar4 = ((UPCGSettings *)(FVar9.Handle + 5))->_padding_;
    local_160 = &local_38;
    pTVar11 = (TFunctionRef<bool___cdecl(UPCGBasePointData_const_*,UPCGBasePointData_*,int,int)> *)
              &local_168;
    uStack_c8._0_4_ = (undefined4)lVar4;
    uStack_c8._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
    local_168 = UE::Core::Private::Function::
                TFunctionRefCaller<`FPCGPointExtentsModifier::ExecuteInternal'::__l11::<lambda_6>,bool,UPCGBasePointData_const_*,UPCGBasePointData_*,int,int>
                ::Call;
    uStack_20 = (undefined4)((UPCGSettings *)(FVar9.Handle + 5))->_padding_;
    uStack_1c = (undefined4)((ulonglong)((UPCGSettings *)(FVar9.Handle + 5))->_padding_ >> 0x20);
    local_28 = (undefined4)uStack_c8;
    uStack_24 = uStack_c8._4_4_;
    local_38 = uStack_d8;
    uStack_c8 = lVar4;
    lStack_30 = local_d0;
  }
  else if (cVar1 == '\x01') {
    local_f0 = ((UPCGSettings *)(FVar9.Handle + 5))->_padding_;
    lVar4 = ((UPCGSettings *)(FVar9.Handle + 5))->_padding_;
    local_170 = &local_58;
    pTVar11 = (TFunctionRef<bool___cdecl(UPCGBasePointData_const_*,UPCGBasePointData_*,int,int)> *)
              &local_178;
    uStack_e8._0_4_ = (undefined4)lVar4;
    uStack_e8._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
    local_178 = UE::Core::Private::Function::
                TFunctionRefCaller<`FPCGPointExtentsModifier::ExecuteInternal'::__l11::<lambda_2>,bool,UPCGBasePointData_const_*,UPCGBasePointData_*,int,int>
                ::Call;
    uStack_40 = (undefined4)((UPCGSettings *)(FVar9.Handle + 5))->_padding_;
    uStack_3c = (undefined4)((ulonglong)((UPCGSettings *)(FVar9.Handle + 5))->_padding_ >> 0x20);
    local_48 = (undefined4)uStack_e8;
    uStack_44 = uStack_e8._4_4_;
    local_58 = uStack_f8;
    uStack_e8 = lVar4;
    lStack_50 = local_f0;
  }
  else if (cVar1 == '\x02') {
    local_110 = ((UPCGSettings *)(FVar9.Handle + 5))->_padding_;
    lVar4 = ((UPCGSettings *)(FVar9.Handle + 5))->_padding_;
    local_180 = &local_78;
    pTVar11 = (TFunctionRef<bool___cdecl(UPCGBasePointData_const_*,UPCGBasePointData_*,int,int)> *)
              &local_188;
    uStack_108._0_4_ = (undefined4)lVar4;
    uStack_108._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
    local_188 = UE::Core::Private::Function::
                TFunctionRefCaller<`FPCGPointExtentsModifier::ExecuteInternal'::__l11::<lambda_3>,bool,UPCGBasePointData_const_*,UPCGBasePointData_*,int,int>
                ::Call;
    uStack_60 = (undefined4)((UPCGSettings *)(FVar9.Handle + 5))->_padding_;
    uStack_5c = (undefined4)((ulonglong)((UPCGSettings *)(FVar9.Handle + 5))->_padding_ >> 0x20);
    local_68 = (undefined4)uStack_108;
    uStack_64 = uStack_108._4_4_;
    local_78 = uStack_118;
    uStack_108 = lVar4;
    lStack_70 = local_110;
  }
  else if (cVar1 == '\x03') {
    local_130 = ((UPCGSettings *)(FVar9.Handle + 5))->_padding_;
    lVar4 = ((UPCGSettings *)(FVar9.Handle + 5))->_padding_;
    local_190 = &local_98;
    pTVar11 = (TFunctionRef<bool___cdecl(UPCGBasePointData_const_*,UPCGBasePointData_*,int,int)> *)
              &local_198;
    uStack_128._0_4_ = (undefined4)lVar4;
    uStack_128._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
    local_198 = UE::Core::Private::Function::
                TFunctionRefCaller<`FPCGPointExtentsModifier::ExecuteInternal'::__l11::<lambda_4>,bool,UPCGBasePointData_const_*,UPCGBasePointData_*,int,int>
                ::Call;
    uStack_80 = (undefined4)((UPCGSettings *)(FVar9.Handle + 5))->_padding_;
    uStack_7c = (undefined4)((ulonglong)((UPCGSettings *)(FVar9.Handle + 5))->_padding_ >> 0x20);
    local_88 = (undefined4)uStack_128;
    uStack_84 = uStack_128._4_4_;
    local_98 = uStack_138;
    uStack_128 = lVar4;
    lStack_90 = local_130;
  }
  else {
    if (cVar1 != '\x04') {
      bVar5 = true;
      goto LAB_149c152b6;
    }
    local_150 = ((UPCGSettings *)(FVar9.Handle + 5))->_padding_;
    lVar4 = ((UPCGSettings *)(FVar9.Handle + 5))->_padding_;
    local_1a0 = &local_b8;
    pTVar11 = (TFunctionRef<bool___cdecl(UPCGBasePointData_const_*,UPCGBasePointData_*,int,int)> *)
              &local_1a8;
    uStack_148._0_4_ = (undefined4)lVar4;
    uStack_148._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
    local_1a8 = UE::Core::Private::Function::
                TFunctionRefCaller<`FPCGPointExtentsModifier::ExecuteInternal'::__l11::<lambda_5>,bool,UPCGBasePointData_const_*,UPCGBasePointData_*,int,int>
                ::Call;
    uStack_a0 = (undefined4)((UPCGSettings *)(FVar9.Handle + 5))->_padding_;
    uStack_9c = (undefined4)((ulonglong)((UPCGSettings *)(FVar9.Handle + 5))->_padding_ >> 0x20);
    local_a8 = (undefined4)uStack_148;
    uStack_a4 = uStack_148._4_4_;
    local_b8 = uStack_158;
    uStack_148 = lVar4;
    lStack_b0 = local_150;
  }
  bVar5 = FPCGPointOperationElementBase::ExecutePointOperationWithIndices
                    ((FPCGPointOperationElementBase *)this,
                     (TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>
                      *)param_1,pTVar11,0x1000);
LAB_149c152b6:
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar5;
}

// GetPropertiesToAllocate @ 149c27370

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EPCGPointNativeProperties __thiscall
FPCGPointExtentsModifier::GetPropertiesToAllocate
          (FPCGPointExtentsModifier *this,FPCGContext *param_1)

{
  return BoundsMax|BoundsMin;
}

// ShouldCopyPoints @ 149c34370

bool __thiscall FPCGPointExtentsModifier::ShouldCopyPoints(FPCGPointExtentsModifier *this)

{
  return true;
}

// SupportsBasePointDataInputs @ 149c357f0

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
FPCGPointExtentsModifier::SupportsBasePointDataInputs
          (FPCGPointExtentsModifier *this,FPCGContext *param_1)

{
  return true;
}

