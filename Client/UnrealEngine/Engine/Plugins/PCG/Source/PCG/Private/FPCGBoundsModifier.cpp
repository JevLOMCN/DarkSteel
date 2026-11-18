// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// operator() @ 149ad8680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`FPCGBoundsModifier::ExecuteInternal'::__l2::<lambda_1>::operator()
          (void *this,UPCGBasePointData *param_1,int param_2,int param_3,
          TFunctionRef<void___cdecl(UE::Math::TBox<double>_const_&,UE::Math::TBox<double>_const_&,UE::Math::TVector<double>_&,UE::Math::TVector<double>_&,float_&)>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 in_register_00000084;
  int iVar11;
  undefined8 *puVar12;
  undefined1 auStack_128 [32];
  undefined4 *local_108;
  undefined1 *local_100;
  void *local_f8;
  longlong local_f0;
  int local_e8;
  int local_e4;
  int local_e0;
  undefined1 local_dc [4];
  longlong local_d8;
  int local_d0;
  int local_cc;
  int local_c8;
  undefined8 local_c0 [3];
  longlong local_a8;
  int local_a0;
  int local_9c;
  int local_98;
  undefined4 local_90 [6];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_128;
  uVar7 = (ulonglong)param_2;
  local_f8 = this;
  (**(code **)(param_1->_padding_ + 0x4d0))
            (param_1,&local_d8,CONCAT71((int7)(CONCAT44(in_register_00000084,param_2) >> 8),1));
  (**(code **)(param_1->_padding_ + 0x4d8))(param_1,&local_a8,1);
  (**(code **)(param_1->_padding_ + 0x4e8))(param_1,&local_f0,1);
  iVar11 = param_3 + param_2;
  uVar8 = uVar7;
  while( true ) {
    if (iVar11 <= param_2) {
      return true;
    }
    local_100 = (undefined1 *)(longlong)local_c8;
    uVar6 = (uint)uVar8;
    uVar10 = ~uVar6 >> 0x1f;
    uVar4 = 0;
    if ((int)uVar6 < local_c8) {
      uVar4 = uVar10;
    }
    if ((uVar4 == 0) &&
       (local_108 = (undefined4 *)uVar7,
       bVar2 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < NumElements)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                          ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    uVar4 = (int)uVar6 >> 0x1f;
    uVar5 = (uint)((longlong)((ulonglong)uVar4 << 0x20 | uVar8 & 0xffffffff) % (longlong)local_cc);
    if (uVar6 == uVar5) {
      puVar12 = (undefined8 *)((longlong)local_d0 * (longlong)(int)uVar5 + local_d8);
    }
    else {
      puVar12 = local_c0;
    }
    local_100 = (undefined1 *)(longlong)local_98;
    uVar5 = 0;
    if ((int)uVar6 < local_98) {
      uVar5 = uVar10;
    }
    if ((uVar5 == 0) &&
       (local_108 = (undefined4 *)uVar7,
       bVar2 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < NumElements)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                          ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    uVar5 = (uint)((longlong)((ulonglong)uVar4 << 0x20 | uVar8 & 0xffffffff) % (longlong)local_9c);
    if (uVar6 == uVar5) {
      puVar9 = (undefined4 *)((longlong)local_a0 * (longlong)(int)uVar5 + local_a8);
    }
    else {
      puVar9 = local_90;
    }
    local_100 = (undefined1 *)(longlong)local_e0;
    uVar5 = 0;
    if ((int)uVar6 < local_e0) {
      uVar5 = uVar10;
    }
    if ((uVar5 == 0) &&
       (local_108 = (undefined4 *)uVar7,
       bVar2 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < NumElements)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                          ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar2)) break;
    uVar4 = (uint)((longlong)((ulonglong)uVar4 << 0x20 | uVar8 & 0xffffffff) % (longlong)local_e4);
    if (uVar6 == uVar4) {
      local_100 = (undefined1 *)((longlong)local_e8 * (longlong)(int)uVar4 + local_f0);
    }
    else {
      local_100 = local_dc;
    }
    local_78 = *puVar12;
    uStack_70 = puVar12[1];
    local_68 = puVar12[2];
    local_60 = *puVar9;
    uStack_5c = puVar9[1];
    uStack_58 = puVar9[2];
    uStack_54 = puVar9[3];
    local_50 = *(undefined8 *)(puVar9 + 4);
    local_48 = 1;
    local_108 = puVar9;
    (**(code **)param_4)
              (*(undefined8 *)&param_4->field_0x8,*(undefined8 *)((longlong)local_f8 + 8),&local_78,
               puVar12);
    param_2 = uVar6 + 1;
    uVar8 = (ulonglong)(uint)param_2;
    uVar7 = uVar7 + 1;
  }
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return (bool)uVar3;
}

// ExecuteInternal @ 149b0a5e0

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

bool __thiscall FPCGBoundsModifier::ExecuteInternal(FPCGBoundsModifier *this,FPCGContext *param_1)

{
  char cVar1;
  int iVar2;
  UPCGNode *this_00;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UClass *pUVar6;
  UPCGSettings *pUVar7;
  TObjectPtr<UPCGSettings>_u_0 TVar8;
  FPCGTaggedData *pFVar9;
  TFunctionRef<bool___cdecl(UPCGBasePointData_const_*,UPCGBasePointData_*,int,int)> *pTVar10;
  bool bVar11;
  undefined1 auStack_208 [32];
  <lambda_1> local_1e8;
  TObjectPtr<UPCGSettings>_u_0 local_1e0;
  TObjectPtr<UPCGSettings>_u_0 local_1d8;
  longlong *plStack_1d0;
  TObjectPtr<UPCGSettings>_u_0 local_1c8;
  TObjectPtr<UPCGSettings>_u_0 local_1c0;
  longlong *plStack_1b8;
  TObjectPtr<UPCGSettings>_u_0 local_1b0;
  TObjectPtr<UPCGSettings>_u_0 local_1a8;
  longlong *plStack_1a0;
  TObjectPtr<UPCGSettings>_u_0 local_198;
  TObjectPtr<UPCGSettings>_u_0 local_190;
  longlong *plStack_188;
  TObjectPtr<UPCGSettings>_u_0 local_180;
  TObjectPtr<UPCGSettings>_u_0 local_178;
  longlong *plStack_170;
  TObjectPtr<UPCGSettings>_u_0 local_168;
  code *local_160;
  TObjectPtr<UPCGSettings>_u_0 *local_158;
  code *local_150;
  TObjectPtr<UPCGSettings>_u_0 *local_148;
  code *local_140;
  TObjectPtr<UPCGSettings>_u_0 *local_138;
  code *local_130;
  TObjectPtr<UPCGSettings>_u_0 *local_128;
  code *local_120;
  TObjectPtr<UPCGSettings>_u_0 *local_118;
  TObjectPtr<UPCGSettings>_u_0 local_108;
  longlong *plStack_100;
  TObjectPtr<UPCGSettings>_u_0 local_f8;
  TObjectPtr<UPCGSettings>_u_0 local_e8;
  longlong *plStack_e0;
  TObjectPtr<UPCGSettings>_u_0 local_d8;
  TObjectPtr<UPCGSettings>_u_0 local_c8;
  longlong *plStack_c0;
  TObjectPtr<UPCGSettings>_u_0 local_b8;
  TObjectPtr<UPCGSettings>_u_0 local_a8;
  longlong *plStack_a0;
  TObjectPtr<UPCGSettings>_u_0 local_98;
  TObjectPtr<UPCGSettings>_u_0 local_88;
  longlong *plStack_80;
  TObjectPtr<UPCGSettings>_u_0 local_78;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong local_50;
  longlong lStack_48;
  longlong local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_208;
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId38,"FPCGBoundsModifier::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGBoundsModifier.cpp"
               ,0x26);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId38);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGBoundsModifier.cpp"
                         ,0x28,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar7 = UPCGNode::GetSettings(this_00), pUVar7 == (UPCGSettings *)0x0)) {
      pFVar9 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
               FindByPredicate<_FPCGDataCollection::GetSettings<UPCGBoundsModifierSettings>_::__l2::<lambda_1>_>
                         (&(param_1->InputData).TaggedData,local_1e8);
      if (pFVar9 != (FPCGTaggedData *)0x0) {
        local_1e0.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar9->Data).Data.field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (local_1e0.DebugPtr == (UPCGSettings *)0x0) goto LAB_149b0a717;
          UE::GC::MarkAsReachable((UObject *)local_1e0.DebugPtr);
        }
        if (local_1e0.DebugPtr != (UPCGSettings *)0x0) {
          pUVar6 = UPCGBoundsModifierSettings::StaticClass();
          bVar4 = FObjectPtr::IsA(&local_1e0.ObjectPtr,pUVar6);
          TVar8 = local_1e0;
          if (bVar4) goto LAB_149b0a721;
        }
      }
    }
    else {
      pUVar7 = UPCGNode::GetSettings(this_00);
      TVar8.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar7);
      if (TVar8.DebugPtr != (UPCGSettings *)0x0) {
        pUVar6 = UPCGBoundsModifierSettings::StaticClass();
        iVar2 = (int)pUVar6->_padding_;
        if ((iVar2 <= *(int *)((TVar8.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar8.DebugPtr)->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar6->_padding_)) goto LAB_149b0a721;
      }
    }
LAB_149b0a717:
    TVar8.DebugPtr = (UPCGSettings *)0x0;
  }
  else {
    pUVar6 = UPCGBoundsModifierSettings::StaticClass();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar6);
    if (bVar4) {
      TVar8.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
    else {
      TVar8.DebugPtr = (UPCGSettings *)0x0;
    }
  }
LAB_149b0a721:
  local_68 = TVar8.DebugPtr[1]._padding_;
  lStack_60 = TVar8.DebugPtr[1]._padding_;
  local_58 = TVar8.DebugPtr[1]._padding_;
  local_50 = TVar8.DebugPtr[1]._padding_;
  lStack_48 = TVar8.DebugPtr[1]._padding_;
  local_40 = TVar8.DebugPtr[1]._padding_;
  local_38 = 1;
  cVar1 = (char)TVar8.DebugPtr[1]._padding_;
  if (cVar1 == '\0') {
    plStack_170 = &local_68;
    pTVar10 = (TFunctionRef<bool___cdecl(UPCGBasePointData_const_*,UPCGBasePointData_*,int,int)> *)
              &local_120;
    local_118 = &local_88;
    local_120 = UE::Core::Private::Function::
                TFunctionRefCaller<`FPCGBoundsModifier::ExecuteInternal'::__l18::<lambda_6>,bool,UPCGBasePointData_const_*,UPCGBasePointData_*,int,int>
                ::Call;
    local_178 = TVar8;
    local_168 = TVar8;
    local_88 = TVar8;
    plStack_80 = plStack_170;
    local_78 = TVar8;
  }
  else if (cVar1 == '\x01') {
    plStack_188 = &local_68;
    pTVar10 = (TFunctionRef<bool___cdecl(UPCGBasePointData_const_*,UPCGBasePointData_*,int,int)> *)
              &local_130;
    local_128 = &local_a8;
    local_130 = UE::Core::Private::Function::
                TFunctionRefCaller<`FPCGBoundsModifier::ExecuteInternal'::__l18::<lambda_2>,bool,UPCGBasePointData_const_*,UPCGBasePointData_*,int,int>
                ::Call;
    local_190 = TVar8;
    local_180 = TVar8;
    local_a8 = TVar8;
    plStack_a0 = plStack_188;
    local_98 = TVar8;
  }
  else if (cVar1 == '\x02') {
    plStack_1a0 = &local_68;
    pTVar10 = (TFunctionRef<bool___cdecl(UPCGBasePointData_const_*,UPCGBasePointData_*,int,int)> *)
              &local_140;
    local_138 = &local_c8;
    local_140 = UE::Core::Private::Function::
                TFunctionRefCaller<`FPCGBoundsModifier::ExecuteInternal'::__l18::<lambda_3>,bool,UPCGBasePointData_const_*,UPCGBasePointData_*,int,int>
                ::Call;
    local_1a8 = TVar8;
    local_198 = TVar8;
    local_c8 = TVar8;
    plStack_c0 = plStack_1a0;
    local_b8 = TVar8;
  }
  else if (cVar1 == '\x03') {
    plStack_1b8 = &local_68;
    pTVar10 = (TFunctionRef<bool___cdecl(UPCGBasePointData_const_*,UPCGBasePointData_*,int,int)> *)
              &local_150;
    local_148 = &local_e8;
    local_150 = UE::Core::Private::Function::
                TFunctionRefCaller<`FPCGBoundsModifier::ExecuteInternal'::__l18::<lambda_4>,bool,UPCGBasePointData_const_*,UPCGBasePointData_*,int,int>
                ::Call;
    local_1c0 = TVar8;
    local_1b0 = TVar8;
    local_e8 = TVar8;
    plStack_e0 = plStack_1b8;
    local_d8 = TVar8;
  }
  else {
    if (cVar1 != '\x04') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGBoundsModifier.cpp"
                         ,0x8e,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      bVar4 = true;
      goto LAB_149b0a99b;
    }
    plStack_1d0 = &local_68;
    pTVar10 = (TFunctionRef<bool___cdecl(UPCGBasePointData_const_*,UPCGBasePointData_*,int,int)> *)
              &local_160;
    local_160 = UE::Core::Private::Function::
                TFunctionRefCaller<`FPCGBoundsModifier::ExecuteInternal'::__l18::<lambda_5>,bool,UPCGBasePointData_const_*,UPCGBasePointData_*,int,int>
                ::Call;
    local_1d8 = TVar8;
    local_1c8 = TVar8;
    local_158 = &local_108;
    local_108 = TVar8;
    plStack_100 = plStack_1d0;
    local_f8 = TVar8;
  }
  bVar4 = FPCGPointOperationElementBase::ExecutePointOperationWithIndices
                    ((FPCGPointOperationElementBase *)this,
                     (TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>
                      *)param_1,pTVar10,0x10000);
LAB_149b0a99b:
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar4;
}

// GetPropertiesToAllocate @ 149b18880

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
FPCGBoundsModifier::GetPropertiesToAllocate(FPCGBoundsModifier *this,FPCGContext *param_1)

{
  return Steepness|BoundsMax|BoundsMin;
}

// ShouldCopyPoints @ 149b2cde0

bool __thiscall FPCGBoundsModifier::ShouldCopyPoints(FPCGBoundsModifier *this)

{
  return true;
}

// SupportsBasePointDataInputs @ 149b2d1b0

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
FPCGBoundsModifier::SupportsBasePointDataInputs(FPCGBoundsModifier *this,FPCGContext *param_1)

{
  return true;
}

