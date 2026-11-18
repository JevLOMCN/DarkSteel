// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// operator() @ 149b5d6d0

bool __thiscall
`FPCGDensityRemapElement::ExecuteInternal'::__l2::<lambda_1>::operator()
          (void *this,UPCGBasePointData *param_1,UPCGBasePointData *param_2,int param_3,int param_4)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  float *pfVar6;
  int iVar7;
  float fVar8;
  longlong local_68;
  int local_60;
  int local_5c;
  int local_58;
  float local_54;
  longlong local_50;
  int local_48;
  int local_44;
  int local_40;
  
  (**(code **)(param_1->_padding_ + 0x508))(param_1,&local_50);
  (**(code **)(param_2->_padding_ + 0x4c8))(param_2,&local_68,1);
  fVar2 = __real_3f800000;
  iVar7 = param_4 + param_3;
  while( true ) {
    if (iVar7 <= param_3) {
      return true;
    }
    uVar5 = 0;
    if (param_3 < local_40) {
      uVar5 = (uint)~param_3 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < NumElements)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                           ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar3)) break;
    fVar8 = *(float *)((longlong)(param_3 % local_44) * (longlong)local_48 + local_50);
    if ((*(char *)this == '\0') ||
       ((*(float *)((longlong)this + 4) <= fVar8 &&
        (fVar8 < *(float *)((longlong)this + 8) || fVar8 == *(float *)((longlong)this + 8))))) {
      uVar5 = 0;
      if (param_3 < local_58) {
        uVar5 = (uint)~param_3 >> 0x1f;
      }
      fVar8 = (fVar8 - *(float *)((longlong)this + 0x10)) * *(float *)((longlong)this + 0xc) +
              *(float *)((longlong)this + 0x14);
      if (fVar2 <= fVar8) {
        fVar8 = fVar2;
      }
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      if (param_3 == param_3 % local_5c) {
        pfVar6 = (float *)((longlong)local_60 * (longlong)(param_3 % local_5c) + local_68);
      }
      else {
        pfVar6 = &local_54;
      }
      *pfVar6 = fVar8;
    }
    param_3 = param_3 + 1;
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// ExecuteInternal @ 149b7b950

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
FPCGDensityRemapElement::ExecuteInternal(FPCGDensityRemapElement *this,FPCGContext *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  UPCGNode *this_00;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  UClass *pUVar8;
  UPCGSettings *pUVar9;
  FObjectPtr_u_0 FVar10;
  FPCGTaggedData *pFVar11;
  bool bVar12;
  float fVar13;
  FObjectPtr_u_0 local_res10;
  code *local_78;
  undefined4 *local_70;
  undefined4 local_68;
  undefined4 local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined8 local_38;
  
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId30,"FPCGDensityRemapElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDensityRemapElement.cpp"
               ,0x1e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId30);
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr != (UPCGSettings *)0x0) {
    pUVar8 = UPCGDensityRemapSettings::StaticClass();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar8);
    if (bVar6) {
      FVar10 = (FObjectPtr_u_0)(param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
    else {
      FVar10.Handle = (UObject *)0x0;
    }
    goto LAB_149b7ba53;
  }
  this_00 = param_1->Node;
  if ((this_00 == (UPCGNode *)0x0) ||
     (pUVar9 = UPCGNode::GetSettings(this_00), pUVar9 == (UPCGSettings *)0x0)) {
    pFVar11 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
              FindByPredicate<_FPCGDataCollection::GetSettings<UPCGDensityRemapSettings>_::__l2::<lambda_1>_>
                        (&(param_1->InputData).TaggedData,(<lambda_1>)local_res10._0_1_);
    if (pFVar11 != (FPCGTaggedData *)0x0) {
      local_res10 = (FObjectPtr_u_0)(pFVar11->Data).Data.field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGSettings *)local_res10.Handle == (UPCGSettings *)0x0) goto LAB_149b7ba49;
        UE::GC::MarkAsReachable(local_res10.Handle);
      }
      if ((UPCGSettings *)local_res10.Handle != (UPCGSettings *)0x0) {
        pUVar8 = UPCGDensityRemapSettings::StaticClass();
        bVar6 = FObjectPtr::IsA((FObjectPtr *)&local_res10,pUVar8);
        FVar10 = local_res10;
        if (bVar6) goto LAB_149b7ba53;
      }
    }
  }
  else {
    pUVar9 = UPCGNode::GetSettings(this_00);
    FVar10.Handle = (UObject *)FPCGDataCollection::GetSettings(&param_1->InputData,pUVar9);
    if ((UPCGSettings *)FVar10.Handle != (UPCGSettings *)0x0) {
      pUVar8 = UPCGDensityRemapSettings::StaticClass();
      iVar4 = (int)pUVar8->_padding_;
      if ((iVar4 <= *(int *)(*(longlong *)&(FVar10.Handle)->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&(FVar10.Handle)->field_0x10 + 0x30) + (longlong)iVar4 * 8)
          == &pUVar8->_padding_)) goto LAB_149b7ba53;
    }
  }
LAB_149b7ba49:
  FVar10.Handle = (UObject *)0x0;
LAB_149b7ba53:
  if (((UPCGSettings *)FVar10.Handle == (UPCGSettings *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDensityRemapElement.cpp"
                         ,0x24,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  fVar1 = *(float *)((longlong)&((UPCGSettings *)(FVar10.Handle + 5))->_padding_ + 4);
  fStack_3c = 0.0;
  fVar2 = *(float *)&((UPCGSettings *)(FVar10.Handle + 5))->_padding_;
  fVar13 = *(float *)&((UPCGSettings *)(FVar10.Handle + 5))->_padding_;
  fStack_44 = fVar1;
  if (fVar2 <= fVar1) {
    fStack_44 = fVar2;
  }
  fVar3 = *(float *)((longlong)&((UPCGSettings *)(FVar10.Handle + 5))->_padding_ + 4);
  fStack_40 = fVar1;
  if (fVar1 <= fVar2) {
    fStack_40 = fVar2;
  }
  if (fVar1 - fVar2 == 0.0) {
    fVar13 = (fVar13 + fVar3) * __real_3f000000;
  }
  else {
    fStack_3c = (fVar3 - fVar13) / (fVar1 - fVar2);
  }
  local_68 = CONCAT31(local_68._1_3_,(char)((UPCGSettings *)(FVar10.Handle + 5))->_padding_);
  local_70 = &local_48;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`FPCGDensityRemapElement::ExecuteInternal'::__l2::<lambda_1>,bool,UPCGBasePointData_const_*,UPCGBasePointData_*,int,int>
             ::Call;
  local_48 = local_68;
  local_38 = CONCAT44(fVar13,fVar2);
  bVar6 = FPCGPointOperationElementBase::ExecutePointOperationWithIndices
                    ((FPCGPointOperationElementBase *)this,
                     (TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>
                      *)param_1,
                     (TFunctionRef<bool___cdecl(UPCGBasePointData_const_*,UPCGBasePointData_*,int,int)>
                      *)&local_78,0x1000);
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar6;
}

// GetPropertiesToAllocate @ 149b91880

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
FPCGDensityRemapElement::GetPropertiesToAllocate(FPCGDensityRemapElement *this,FPCGContext *param_1)

{
  return Density;
}

// ShouldCopyPoints @ 149b98180

bool __thiscall FPCGDensityRemapElement::ShouldCopyPoints(FPCGDensityRemapElement *this)

{
  return true;
}

// SupportsBasePointDataInputs @ 149b98950

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
FPCGDensityRemapElement::SupportsBasePointDataInputs
          (FPCGDensityRemapElement *this,FPCGContext *param_1)

{
  return true;
}

