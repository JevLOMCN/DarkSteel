// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// operator() @ 149bf67d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`FPCGNormalToDensityElement::ExecuteInternal'::__l2::<lambda_2>::operator()
          (void *this,UPCGBasePointData *param_1,int param_2,int param_3,
          TFunctionRef<void___cdecl(float,float_&)> *param_4)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  undefined1 uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  int iVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined4 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auStack_1c8 [32];
  ulonglong local_1a8;
  longlong local_1a0;
  float local_198 [2];
  longlong local_190;
  int local_188;
  int local_184;
  int local_180;
  undefined1 local_17c [4];
  undefined8 local_178;
  undefined8 uStack_170;
  double local_168;
  undefined1 local_160 [16];
  double local_150;
  undefined1 local_148 [16];
  longlong local_128;
  int local_120;
  int local_11c;
  int local_118;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  uVar10 = (ulonglong)param_2;
  (**(code **)(param_1->_padding_ + 0x500))(param_1,&local_128);
  (**(code **)(param_1->_padding_ + 0x4c8))(param_1,&local_190,1);
  dVar4 = __real_3ff0000000000000;
  iVar13 = param_3 + param_2;
  uVar11 = uVar10;
  lVar7 = local_1a0;
  while( true ) {
    if (iVar13 <= param_2) {
      return true;
    }
    local_1a0 = (longlong)local_180;
    uVar9 = (uint)uVar11;
    uVar8 = 0;
    if ((int)uVar9 < local_180) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (local_1a8 = uVar10,
       bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < NumElements)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                          ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
       lVar7 = local_1a0, bVar5)) break;
    local_1a0 = lVar7;
    uVar8 = (uint)((longlong)((ulonglong)(uint)((int)uVar9 >> 0x1f) << 0x20 | uVar11 & 0xffffffff) %
                  (longlong)local_184);
    if (uVar9 == uVar8) {
      puVar12 = (undefined1 *)((longlong)local_188 * (longlong)(int)uVar8 + local_190);
    }
    else {
      puVar12 = local_17c;
    }
    uVar8 = 0;
    if ((int)uVar9 < local_118) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (local_1a8 = uVar10, local_1a0 = (longlong)local_118,
       bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < NumElements)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                          ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar5)) {
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return (bool)uVar6;
    }
    local_168 = dVar4;
    lVar7 = (longlong)
            (int)((longlong)((ulonglong)(uint)((int)uVar9 >> 0x1f) << 0x20 | uVar11 & 0xffffffff) %
                 (longlong)local_11c) * (longlong)local_120;
    local_178 = 0;
    uStack_170 = 0;
    auVar23 = *(undefined1 (*) [16])(lVar7 + 0x10 + local_128);
    dVar16 = auVar23._0_8_;
    local_148 = *(undefined1 (*) [16])(lVar7 + local_128);
    auVar18 = *(undefined1 (*) [16])(lVar7 + local_128);
    dVar3 = *(double *)(lVar7 + local_128 + 0x18);
    auVar19 = blendpd(local_148,auVar23,2);
    auVar25._0_8_ = local_148._0_8_ * 0.0 - local_148._8_8_ * 0.0;
    auVar25._8_8_ = dVar4 * local_148._8_8_ - dVar16 * 0.0;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = dVar4;
    auVar15 = blendpd(ZEXT816(0),auVar15,2);
    auVar20._0_8_ = auVar15._0_8_ * dVar16 - auVar19._0_8_ * dVar4;
    auVar20._8_8_ = auVar15._8_8_ * auVar23._8_8_ - auVar19._8_8_ * 0.0;
    auVar15 = blendpd(auVar25,auVar20,2);
    auVar26._0_8_ = auVar15._0_8_ + auVar15._0_8_;
    auVar26._8_8_ = auVar15._8_8_ + auVar15._8_8_;
    dVar14 = auVar25._8_8_ + auVar25._8_8_;
    dVar2 = auVar20._0_8_ + auVar20._0_8_;
    uVar24 = (undefined4)((ulonglong)dVar2 >> 0x20);
    auVar21._8_4_ = SUB84(dVar2,0);
    auVar21._0_8_ = dVar14;
    auVar21._12_4_ = uVar24;
    auVar17._8_4_ = SUB84(dVar2,0);
    auVar17._0_8_ = dVar14;
    auVar17._12_4_ = uVar24;
    auVar15 = blendpd(auVar17,auVar26,2);
    auVar22._0_8_ = auVar21._8_8_ * auVar18._0_8_ - auVar18._8_8_ * dVar14;
    auVar22._8_8_ = auVar26._0_8_ * auVar18._8_8_ - dVar16 * dVar2;
    auVar19._8_4_ = SUB84(auVar22._8_8_,0);
    auVar19._0_8_ = auVar22._0_8_;
    auVar19._12_4_ = (int)((ulonglong)auVar22._8_8_ >> 0x20);
    auVar20 = blendpd(auVar18,auVar23,2);
    auVar18._0_8_ = auVar15._0_8_ * dVar16 - auVar20._0_8_ * auVar26._0_8_;
    auVar18._8_8_ = auVar15._8_8_ * auVar23._8_8_ - auVar20._8_8_ * auVar26._8_8_;
    dVar14 = dVar14 * dVar3 + auVar19._8_8_;
    dVar2 = dVar2 * dVar3 + auVar18._0_8_;
    auVar23 = blendpd(auVar22,auVar18,2);
    local_150 = auVar26._0_8_ * dVar3 + dVar4 + auVar23._0_8_;
    local_160._8_4_ = SUB84(dVar2,0);
    local_160._0_8_ = dVar14;
    local_160._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    dVar14 = dVar14 * *(double *)this + dVar2 * *(double *)((longlong)this + 8) +
             local_150 * *(double *)((longlong)this + 0x10) + *(double *)((longlong)this + 0x18);
    if (dVar4 <= dVar14) {
      dVar14 = dVar4;
    }
    if (dVar14 <= 0.0) {
      dVar14 = 0.0;
    }
    dVar14 = pow(dVar14,*(double *)((longlong)this + 0x20));
    local_198[0] = (float)dVar14;
    (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,local_198,puVar12);
    param_2 = uVar9 + 1;
    uVar11 = (ulonglong)(uint)param_2;
    uVar10 = uVar10 + 1;
    lVar7 = local_1a0;
  }
  pcVar1 = (code *)swi(3);
  uVar6 = (*pcVar1)();
  return (bool)uVar6;
}

// ExecuteInternal @ 149c134d0

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
FPCGNormalToDensityElement::ExecuteInternal(FPCGNormalToDensityElement *this,FPCGContext *param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  UPCGNode *this_00;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 uVar9;
  UClass *pUVar10;
  UPCGSettings *pUVar11;
  FObjectPtr_u_0 FVar12;
  FPCGTaggedData *pFVar13;
  bool bVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  double dVar19;
  double dVar20;
  FObjectPtr_u_0 local_res10 [3];
  code *local_210;
  undefined1 *local_208;
  code *local_200;
  undefined1 *local_1f8;
  code *local_1f0;
  undefined1 *local_1e8;
  code *local_1e0;
  undefined1 *local_1d8;
  code *local_1d0;
  undefined1 *local_1c8;
  code *local_1c0;
  undefined1 *local_1b8;
  code *local_1b0;
  undefined1 *local_1a8;
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  double local_178;
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  double local_148;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  double local_118;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  double local_e8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  double local_b8;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  double local_88;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  double local_58;
  
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId36,"FPCGNormalToDensityElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGNormalToDensity.cpp"
               ,0x24);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId36);
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr != (UPCGSettings *)0x0) {
    pUVar10 = UPCGNormalToDensitySettings::StaticClass();
    bVar8 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar10);
    if (bVar8) {
      FVar12 = (FObjectPtr_u_0)(param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
    else {
      FVar12.Handle = (UObject *)0x0;
    }
    goto LAB_149c135df;
  }
  this_00 = param_1->Node;
  if ((this_00 == (UPCGNode *)0x0) ||
     (pUVar11 = UPCGNode::GetSettings(this_00), pUVar11 == (UPCGSettings *)0x0)) {
    pFVar13 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
              FindByPredicate<_FPCGDataCollection::GetSettings<UPCGNormalToDensitySettings>_::__l2::<lambda_1>_>
                        (&(param_1->InputData).TaggedData,(<lambda_1>)local_res10[0]._0_1_);
    if (pFVar13 != (FPCGTaggedData *)0x0) {
      local_res10[0] = (FObjectPtr_u_0)(pFVar13->Data).Data.field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGSettings *)local_res10[0].Handle == (UPCGSettings *)0x0) goto LAB_149c135d5;
        UE::GC::MarkAsReachable(local_res10[0].Handle);
      }
      if ((UPCGSettings *)local_res10[0].Handle != (UPCGSettings *)0x0) {
        pUVar10 = UPCGNormalToDensitySettings::StaticClass();
        bVar8 = FObjectPtr::IsA((FObjectPtr *)local_res10,pUVar10);
        FVar12 = local_res10[0];
        if (bVar8) goto LAB_149c135df;
      }
    }
  }
  else {
    pUVar11 = UPCGNode::GetSettings(this_00);
    FVar12.Handle = (UObject *)FPCGDataCollection::GetSettings(&param_1->InputData,pUVar11);
    if ((UPCGSettings *)FVar12.Handle != (UPCGSettings *)0x0) {
      pUVar10 = UPCGNormalToDensitySettings::StaticClass();
      iVar3 = (int)pUVar10->_padding_;
      if ((iVar3 <= *(int *)(*(longlong *)&(FVar12.Handle)->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&(FVar12.Handle)->field_0x10 + 0x30) + (longlong)iVar3 * 8)
          == &pUVar10->_padding_)) goto LAB_149c135df;
    }
  }
LAB_149c135d5:
  FVar12.Handle = (UObject *)0x0;
LAB_149c135df:
  if (((UPCGSettings *)FVar12.Handle == (UPCGSettings *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGNormalToDensity.cpp"
                         ,0x29,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  dVar20 = (double)((UPCGSettings *)(FVar12.Handle + 5))->_padding_;
  dVar1 = (double)((UPCGSettings *)(FVar12.Handle + 5))->_padding_;
  dVar2 = (double)((UPCGSettings *)(FVar12.Handle + 5))->_padding_;
  dVar19 = dVar1 * dVar1 + dVar20 * dVar20 + dVar2 * dVar2;
  if (dVar19 == __real_3ff0000000000000) {
    uVar5 = ((UPCGSettings *)(FVar12.Handle + 5))->_padding_;
    uVar6 = ((UPCGSettings *)(FVar12.Handle + 5))->_padding_;
    uVar7 = ((UPCGSettings *)(FVar12.Handle + 5))->_padding_;
  }
  else {
    uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (__real_3e45798ee0000000 <= dVar19) {
      dVar19 = __real_3ff0000000000000 / SQRT(dVar19);
      uVar5 = dVar1 * dVar19;
      uVar6 = dVar20 * dVar19;
      uVar7 = dVar2 * dVar19;
    }
  }
  uVar18 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uVar17 = (undefined4)uVar6;
  dVar20 = (double)((UPCGSettings *)(FVar12.Handle + 5))->_padding_;
  if ((double)((UPCGSettings *)(FVar12.Handle + 5))->_padding_ <= __real_3f1a36e2eb1c432d) {
    dVar20 = __real_3f1a36e2eb1c432d;
  }
  dVar20 = __real_3ff0000000000000 / dVar20;
  uVar15 = (undefined4)((UPCGSettings *)(FVar12.Handle + 5))->_padding_;
  uVar16 = (undefined4)((ulonglong)((UPCGSettings *)(FVar12.Handle + 5))->_padding_ >> 0x20);
  switch((char)((UPCGSettings *)(FVar12.Handle + 5))->_padding_) {
  case '\0':
    local_208 = local_198;
    local_188._8_4_ = uVar15;
    local_188._0_8_ = uVar7;
    local_188._12_4_ = uVar16;
    local_210 = UE::Core::Private::Function::
                TFunctionRefCaller<`FPCGNormalToDensityElement::ExecuteInternal'::__l11::<lambda_3>,bool,UPCGBasePointData_const_*,UPCGBasePointData_*,int,int>
                ::Call;
    local_198._8_4_ = uVar17;
    local_198._0_8_ = uVar5;
    local_198._12_4_ = uVar18;
    local_178 = dVar20;
    bVar8 = FPCGPointOperationElementBase::ExecutePointOperationWithIndices
                      ((FPCGPointOperationElementBase *)this,
                       (TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>
                        *)param_1,
                       (TFunctionRef<bool___cdecl(UPCGBasePointData_const_*,UPCGBasePointData_*,int,int)>
                        *)&local_210,0x1000);
    break;
  case '\x01':
    local_1f8 = local_168;
    local_158._8_4_ = uVar15;
    local_158._0_8_ = uVar7;
    local_158._12_4_ = uVar16;
    local_200 = UE::Core::Private::Function::
                TFunctionRefCaller<`FPCGNormalToDensityElement::ExecuteInternal'::__l11::<lambda_4>,bool,UPCGBasePointData_const_*,UPCGBasePointData_*,int,int>
                ::Call;
    local_168._8_4_ = uVar17;
    local_168._0_8_ = uVar5;
    local_168._12_4_ = uVar18;
    local_148 = dVar20;
    bVar8 = FPCGPointOperationElementBase::ExecutePointOperationWithIndices
                      ((FPCGPointOperationElementBase *)this,
                       (TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>
                        *)param_1,
                       (TFunctionRef<bool___cdecl(UPCGBasePointData_const_*,UPCGBasePointData_*,int,int)>
                        *)&local_200,0x1000);
    break;
  case '\x02':
    local_1e8 = local_138;
    local_128._8_4_ = uVar15;
    local_128._0_8_ = uVar7;
    local_128._12_4_ = uVar16;
    local_1f0 = UE::Core::Private::Function::
                TFunctionRefCaller<`FPCGNormalToDensityElement::ExecuteInternal'::__l11::<lambda_5>,bool,UPCGBasePointData_const_*,UPCGBasePointData_*,int,int>
                ::Call;
    local_138._8_4_ = uVar17;
    local_138._0_8_ = uVar5;
    local_138._12_4_ = uVar18;
    local_118 = dVar20;
    bVar8 = FPCGPointOperationElementBase::ExecutePointOperationWithIndices
                      ((FPCGPointOperationElementBase *)this,
                       (TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>
                        *)param_1,
                       (TFunctionRef<bool___cdecl(UPCGBasePointData_const_*,UPCGBasePointData_*,int,int)>
                        *)&local_1f0,0x1000);
    break;
  case '\x03':
    local_1d8 = local_108;
    local_f8._8_4_ = uVar15;
    local_f8._0_8_ = uVar7;
    local_f8._12_4_ = uVar16;
    local_1e0 = UE::Core::Private::Function::
                TFunctionRefCaller<`FPCGNormalToDensityElement::ExecuteInternal'::__l11::<lambda_6>,bool,UPCGBasePointData_const_*,UPCGBasePointData_*,int,int>
                ::Call;
    local_108._8_4_ = uVar17;
    local_108._0_8_ = uVar5;
    local_108._12_4_ = uVar18;
    local_e8 = dVar20;
    bVar8 = FPCGPointOperationElementBase::ExecutePointOperationWithIndices
                      ((FPCGPointOperationElementBase *)this,
                       (TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>
                        *)param_1,
                       (TFunctionRef<bool___cdecl(UPCGBasePointData_const_*,UPCGBasePointData_*,int,int)>
                        *)&local_1e0,0x1000);
    break;
  case '\x04':
    local_1c8 = local_d8;
    local_c8._8_4_ = uVar15;
    local_c8._0_8_ = uVar7;
    local_c8._12_4_ = uVar16;
    local_1d0 = UE::Core::Private::Function::
                TFunctionRefCaller<`FPCGNormalToDensityElement::ExecuteInternal'::__l11::<lambda_7>,bool,UPCGBasePointData_const_*,UPCGBasePointData_*,int,int>
                ::Call;
    local_d8._8_4_ = uVar17;
    local_d8._0_8_ = uVar5;
    local_d8._12_4_ = uVar18;
    local_b8 = dVar20;
    bVar8 = FPCGPointOperationElementBase::ExecutePointOperationWithIndices
                      ((FPCGPointOperationElementBase *)this,
                       (TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>
                        *)param_1,
                       (TFunctionRef<bool___cdecl(UPCGBasePointData_const_*,UPCGBasePointData_*,int,int)>
                        *)&local_1d0,0x1000);
    break;
  case '\x05':
    local_1b8 = local_a8;
    local_98._8_4_ = uVar15;
    local_98._0_8_ = uVar7;
    local_98._12_4_ = uVar16;
    local_1c0 = UE::Core::Private::Function::
                TFunctionRefCaller<`FPCGNormalToDensityElement::ExecuteInternal'::__l11::<lambda_8>,bool,UPCGBasePointData_const_*,UPCGBasePointData_*,int,int>
                ::Call;
    local_a8._8_4_ = uVar17;
    local_a8._0_8_ = uVar5;
    local_a8._12_4_ = uVar18;
    local_88 = dVar20;
    bVar8 = FPCGPointOperationElementBase::ExecutePointOperationWithIndices
                      ((FPCGPointOperationElementBase *)this,
                       (TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>
                        *)param_1,
                       (TFunctionRef<bool___cdecl(UPCGBasePointData_const_*,UPCGBasePointData_*,int,int)>
                        *)&local_1c0,0x1000);
    break;
  case '\x06':
    local_1a8 = local_78;
    local_68._8_4_ = uVar15;
    local_68._0_8_ = uVar7;
    local_68._12_4_ = uVar16;
    local_1b0 = UE::Core::Private::Function::
                TFunctionRefCaller<`FPCGNormalToDensityElement::ExecuteInternal'::__l11::<lambda_9>,bool,UPCGBasePointData_const_*,UPCGBasePointData_*,int,int>
                ::Call;
    local_78._8_4_ = uVar17;
    local_78._0_8_ = uVar5;
    local_78._12_4_ = uVar18;
    local_58 = dVar20;
    bVar8 = FPCGPointOperationElementBase::ExecutePointOperationWithIndices
                      ((FPCGPointOperationElementBase *)this,
                       (TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>
                        *)param_1,
                       (TFunctionRef<bool___cdecl(UPCGBasePointData_const_*,UPCGBasePointData_*,int,int)>
                        *)&local_1b0,0x1000);
    break;
  default:
    bVar8 = true;
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar8;
}

// GetPropertiesToAllocate @ 149c27360

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
FPCGNormalToDensityElement::GetPropertiesToAllocate
          (FPCGNormalToDensityElement *this,FPCGContext *param_1)

{
  return Density;
}

// ShouldCopyPoints @ 149c34360

bool __thiscall FPCGNormalToDensityElement::ShouldCopyPoints(FPCGNormalToDensityElement *this)

{
  return true;
}

// SupportsBasePointDataInputs @ 149c357b0

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
FPCGNormalToDensityElement::SupportsBasePointDataInputs
          (FPCGNormalToDensityElement *this,FPCGContext *param_1)

{
  return true;
}

