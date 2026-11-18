// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 31

// OutputAnimNodeBlendableAttributes<FComponentSpacePoseContext> @ 1474ab1c0

void __cdecl
FAnimTrace::OutputAnimNodeBlendableAttributes<FComponentSpacePoseContext>
          (FComponentSpacePoseContext *param_1,int param_2,int param_3)

{
  if (*(int *)&(param_1->CustomAttributes).field_0x28 != 0) {
    OutputAnimNodeAttribute
              ((FAnimInstanceProxy *)param_1->_padding_,(FAnimInstanceProxy *)param_1->_padding_,
               param_2,param_3,UE::Anim::FAttributes::Attributes);
  }
  if (0 < *(int *)&(param_1->Curve).field_0x8) {
    OutputAnimNodeAttribute
              ((FAnimInstanceProxy *)param_1->_padding_,(FAnimInstanceProxy *)param_1->_padding_,
               param_2,param_3,UE::Anim::FAttributes::Curves);
  }
  return;
}

// OutputAnimNodeBlendableAttributes<FPoseContext> @ 1474ab240

void __cdecl
FAnimTrace::OutputAnimNodeBlendableAttributes<FPoseContext>
          (FPoseContext *param_1,int param_2,int param_3)

{
  if (*(int *)&(param_1->CustomAttributes).field_0x28 != 0) {
    OutputAnimNodeAttribute
              ((FAnimInstanceProxy *)param_1->_padding_,(FAnimInstanceProxy *)param_1->_padding_,
               param_2,param_3,UE::Anim::FAttributes::Attributes);
  }
  if (0 < *(int *)&(param_1->Curve).field_0x8) {
    OutputAnimNodeAttribute
              ((FAnimInstanceProxy *)param_1->_padding_,(FAnimInstanceProxy *)param_1->_padding_,
               param_2,param_3,UE::Anim::FAttributes::Curves);
  }
  return;
}

// OutputAnimGraph @ 14756caf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FAnimTrace::OutputAnimGraph
          (FAnimationBaseContext *param_1,ulong64 param_2,ulong64 param_3,uchar param_4)

{
  int iVar1;
  AActor *this;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  USkeletalMeshComponent *pUVar5;
  UWorld *pUVar6;
  UClass *pUVar7;
  ulong64 uVar8;
  longlong lVar9;
  UObject *pUVar10;
  undefined4 uVar11;
  UObject *pUVar12;
  undefined1 auStack_68 [32];
  ulong64 *local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_68;
  if (AnimationChannel->Enabled < 0) {
    return;
  }
  if ((param_1->AnimInstanceProxy == (FAnimInstanceProxy *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext.AnimInstanceProxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimTrace.cpp"
                         ,0x2c4,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar5 = FAnimInstanceProxy::GetSkelMeshComponent(param_1->AnimInstanceProxy);
  bVar3 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar5);
  if (!bVar3) {
    if (pUVar5 == (USkeletalMeshComponent *)0x0) {
      return;
    }
    this = (AActor *)pUVar5->_padding_;
    bVar3 = FTraceFilter::IsObjectTraceable<1>((UObject *)this);
    if (!bVar3) {
      return;
    }
    if (this == (AActor *)0x0) {
      return;
    }
    pUVar6 = AActor::GetWorld(this);
    bVar3 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar6);
    if (!bVar3) {
      return;
    }
  }
  uVar11 = 0;
  pUVar10 = param_1->AnimInstanceProxy->AnimInstanceObject;
  if (pUVar10 == (UObject *)0x0) {
LAB_14756cbf5:
    pUVar10 = (UObject *)0x0;
  }
  else {
    pUVar7 = Z_Construct_UClass_UAnimInstance_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar7->_padding_)) goto LAB_14756cbf5;
  }
  pUVar12 = *(UObject **)&pUVar10->field_0x10;
  if (pUVar12 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_UAnimBlueprintGeneratedClass_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar12->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar12->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) goto LAB_14756cc27;
  }
  pUVar12 = (UObject *)0x0;
LAB_14756cc27:
  FObjectTrace::OutputObject(pUVar10);
  if (-1 < AnimationChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FAnimationAnimGraphFields>((TLogScope<0> *)&local_48);
    *local_48 = param_2;
    local_48[1] = param_3;
    uVar8 = FObjectTrace::GetObjectId(pUVar10);
    local_48[2] = uVar8;
    if (pUVar12 != (UObject *)0x0) {
      lVar9 = (**(code **)(*(longlong *)(pUVar12 + 0x16) + 0x20))();
      uVar11 = *(undefined4 *)(lVar9 + 8);
    }
    *(undefined4 *)(local_48 + 3) = uVar11;
    uVar4 = FObjectTrace::GetObjectWorldTickCounter(pUVar10);
    *(ushort *)((longlong)local_48 + 0x1c) = uVar4;
    *(uchar *)((longlong)local_48 + 0x1e) = param_4;
    *(undefined8 *)(local_40 + 0x28) = *(undefined8 *)(local_40 + 0x20);
  }
  return;
}

// OutputAnimNodeAttribute @ 14756cce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FAnimTrace::OutputAnimNodeAttribute
          (FAnimInstanceProxy *param_1,FAnimInstanceProxy *param_2,int param_3,int param_4,
          FName param_5)

{
  AActor *pAVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  bool bVar4;
  uint uVar5;
  USkeletalMeshComponent *pUVar6;
  UWorld *pUVar7;
  ulong64 uVar8;
  undefined1 auStack_68 [32];
  LARGE_INTEGER local_48;
  LARGE_INTEGER *local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_68;
  if (AnimationChannel->Enabled < 0) {
    return;
  }
  pUVar6 = FAnimInstanceProxy::GetSkelMeshComponent(param_2);
  bVar4 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar6);
  if (!bVar4) {
    if (pUVar6 == (USkeletalMeshComponent *)0x0) {
      return;
    }
    pAVar1 = (AActor *)pUVar6->_padding_;
    bVar4 = FTraceFilter::IsObjectTraceable<1>((UObject *)pAVar1);
    if (!bVar4) {
      return;
    }
    if (pAVar1 == (AActor *)0x0) {
      return;
    }
    pUVar7 = AActor::GetWorld(pAVar1);
    bVar4 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar7);
    if (!bVar4) {
      return;
    }
  }
  pUVar6 = FAnimInstanceProxy::GetSkelMeshComponent(param_1);
  bVar4 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar6);
  if (!bVar4) {
    if (pUVar6 == (USkeletalMeshComponent *)0x0) {
      return;
    }
    pAVar1 = (AActor *)pUVar6->_padding_;
    bVar4 = FTraceFilter::IsObjectTraceable<1>((UObject *)pAVar1);
    if (!bVar4) {
      return;
    }
    if (pAVar1 == (AActor *)0x0) {
      return;
    }
    pUVar7 = AActor::GetWorld(pAVar1);
    bVar4 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar7);
    if (!bVar4) {
      return;
    }
  }
  pUVar2 = param_2->AnimInstanceObject;
  FObjectTrace::OutputObject(pUVar2);
  pUVar3 = param_1->AnimInstanceObject;
  FObjectTrace::OutputObject(pUVar3);
  uVar5 = OutputName(&param_5);
  if (-1 < AnimationChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FAnimationAnimNodeAttributeFields>
              ((TLogScope<0> *)&local_40);
    QueryPerformanceCounter(&local_48);
    *local_40 = local_48;
    uVar8 = FObjectTrace::GetObjectId(pUVar2);
    local_40[1].QuadPart = uVar8;
    uVar8 = FObjectTrace::GetObjectId(pUVar3);
    local_40[2].QuadPart = uVar8;
    local_40[3].s.LowPart = param_4;
    *(int *)((longlong)local_40 + 0x1c) = param_3;
    local_40[4].s.LowPart = uVar5;
    *(undefined8 *)(local_38 + 0x28) = *(undefined8 *)(local_38 + 0x20);
  }
  return;
}

// OutputAnimNodeEnd @ 14756cea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl FAnimTrace::OutputAnimNodeEnd(FAnimationBaseContext *param_1,ulong64 param_2)

{
  AActor *this;
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  USkeletalMeshComponent *pUVar4;
  UWorld *pUVar5;
  ulong64 uVar6;
  undefined1 auStack_48 [32];
  ulong64 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (AnimationChannel->Enabled < 0) {
    return;
  }
  if ((param_1->AnimInstanceProxy == (FAnimInstanceProxy *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext.AnimInstanceProxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimTrace.cpp"
                         ,0x31c,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar4 = FAnimInstanceProxy::GetSkelMeshComponent(param_1->AnimInstanceProxy);
  bVar3 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar4);
  if (!bVar3) {
    if (pUVar4 == (USkeletalMeshComponent *)0x0) {
      return;
    }
    this = (AActor *)pUVar4->_padding_;
    bVar3 = FTraceFilter::IsObjectTraceable<1>((UObject *)this);
    if (!bVar3) {
      return;
    }
    if (this == (AActor *)0x0) {
      return;
    }
    pUVar5 = AActor::GetWorld(this);
    bVar3 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar5);
    if (!bVar3) {
      return;
    }
  }
  pUVar1 = param_1->AnimInstanceProxy->AnimInstanceObject;
  FObjectTrace::OutputObject(pUVar1);
  if (-1 < AnimationChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FAnimationAnimNodeEndFields>((TLogScope<0> *)&local_28);
    *local_28 = param_2;
    uVar6 = FObjectTrace::GetObjectId(pUVar1);
    local_28[1] = uVar6;
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  return;
}

// OutputAnimNodeStart @ 14756cfd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FAnimTrace::OutputAnimNodeStart
          (FAnimationBaseContext *param_1,ulong64 param_2,int param_3,int param_4,float param_5,
          float param_6,uchar param_7)

{
  FScriptContainerElement *pFVar1;
  short sVar2;
  wchar_t wVar3;
  AActor *this;
  UObject *pUVar4;
  longlong lVar5;
  code *pcVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  ushort uVar9;
  uint uVar10;
  USkeletalMeshComponent *pUVar11;
  UWorld *pUVar12;
  FScriptContainerElement *pFVar13;
  IAnimClassInterface *pIVar14;
  longlong *plVar15;
  FString *pFVar16;
  ulong64 uVar17;
  wchar_t *pwVar18;
  int iVar19;
  int iVar20;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  float local_b8;
  FString local_b0;
  FString local_a0;
  FName local_90;
  FName local_88;
  ulong64 local_80;
  FString local_78;
  FString local_68;
  FLogScope local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (AnimationChannel->Enabled < 0) {
    return;
  }
  if (param_4 == -1) {
    return;
  }
  local_b8 = (float)param_3;
  local_80 = param_2;
  pUVar11 = FAnimInstanceProxy::GetSkelMeshComponent(param_1->AnimInstanceProxy);
  bVar8 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar11);
  if (!bVar8) {
    if (pUVar11 == (USkeletalMeshComponent *)0x0) {
      return;
    }
    this = (AActor *)pUVar11->_padding_;
    bVar8 = FTraceFilter::IsObjectTraceable<1>((UObject *)this);
    if (!bVar8) {
      return;
    }
    if (this == (AActor *)0x0) {
      return;
    }
    pUVar12 = AActor::GetWorld(this);
    bVar8 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar12);
    if (!bVar8) {
      return;
    }
  }
  if ((param_1->AnimInstanceProxy == (FAnimInstanceProxy *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext.AnimInstanceProxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimTrace.cpp"
                         ,0x2ea,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pUVar4 = param_1->AnimInstanceProxy->AnimInstanceObject;
  FObjectTrace::OutputObject(pUVar4);
  pFVar13 = (FScriptContainerElement *)0x0;
  local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar20 = 0;
  local_b0.Data.ArrayNum = 0;
  local_b0.Data.ArrayMax = 0;
  pIVar14 = FAnimationBaseContext::GetAnimClass(param_1);
  if (pIVar14 == (IAnimClassInterface *)0x0) {
    ::FString::operator=(&local_b0,L"Anim Node");
  }
  else {
    plVar15 = (longlong *)(**(code **)((longlong)*pIVar14 + 0x20))(pIVar14);
    if (((param_4 < 0) || ((int)plVar15[1] <= param_4)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("AnimNodeProperties.IsValidIndex(InNodeId)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimTrace.cpp"
                           ,0x2f4,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar10 = 0;
    if (param_4 < (int)plVar15[1]) {
      uVar10 = (uint)~param_4 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (local_c8 = (longlong)param_4, local_c0 = (longlong)(int)plVar15[1],
       bVar8 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar5 = *(longlong *)(*plVar15 + (longlong)param_4 * 8);
    if ((*(longlong *)(lVar5 + 0x70) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("LinkedProperty->Struct",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimTrace.cpp"
                           ,0x2f6,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_90 = *(FName *)(*(longlong *)(lVar5 + 0x70) + 0x18);
    pFVar16 = ::FName::ToString(&local_90,&local_78);
    iVar20 = 0;
    if (&local_68 != pFVar16) {
      pFVar13 = (pFVar16->Data).AllocatorInstance.Data;
      (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar20 = (pFVar16->Data).ArrayNum;
      (pFVar16->Data).ArrayNum = 0;
      (pFVar16->Data).ArrayMax = 0;
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    local_88 = *(FName *)(*(longlong *)(lVar5 + 0x70) + 0x18);
    ::FName::ToString(&local_88,&local_a0);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    local_b0.Data.AllocatorInstance.Data = local_a0.Data.AllocatorInstance.Data;
    local_b0.Data.ArrayNum = local_a0.Data.ArrayNum;
    local_b0.Data.ArrayMax = local_a0.Data.ArrayMax;
    local_a0.Data.ArrayNum = 0;
    local_a0.Data.ArrayMax = 0;
    local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ::FString::RemoveFromStart(&local_b0,L"Anim Node ",10,IgnoreCase);
    param_3 = (int)local_b8;
  }
  if ((param_3 == param_4) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InPreviousNodeId != InNodeId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimTrace.cpp"
                         ,0x306,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (-1 < AnimationChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FAnimationAnimNodeStartFields>((TLogScope<1> *)&local_58);
    *(ulong64 *)local_58.Ptr = local_80;
    uVar17 = FObjectTrace::GetObjectId(pUVar4);
    local_b8 = param_5;
    *(ulong64 *)((longlong)local_58.Ptr + 8) = uVar17;
    *(int *)((longlong)local_58.Ptr + 0x10) = param_3;
    *(int *)((longlong)local_58.Ptr + 0x14) = param_4;
    *(float *)((longlong)local_58.Ptr + 0x18) = param_5;
    uVar9 = FObjectTrace::GetObjectWorldTickCounter(pUVar4);
    iVar19 = iVar20 + -1;
    if (iVar20 == 0) {
      iVar19 = 0;
    }
    *(ushort *)((longlong)local_58.Ptr + 0x1c) = uVar9;
    *(uchar *)((longlong)local_58.Ptr + 0x1e) = param_7;
    pwVar18 = (wchar_t *)pFVar13;
    if (iVar20 == 0) {
      pwVar18 = L"";
    }
    if (iVar19 < 0) {
      iVar19 = 0;
      sVar2 = *pwVar18;
      pFVar1 = (FScriptContainerElement *)pwVar18;
      while (sVar2 != 0) {
        pFVar1 = pFVar1 + 2;
        iVar19 = iVar19 + 1;
        sVar2 = *(short *)pFVar1;
      }
    }
    UE::Trace::Private::Field_WriteStringWide(7,pwVar18,iVar19);
    iVar20 = local_b0.Data.ArrayNum + -1;
    FVar7.Data = local_b0.Data.AllocatorInstance.Data;
    if (local_b0.Data.ArrayNum == 0) {
      iVar20 = 0;
      FVar7.Data = (FScriptContainerElement *)L"";
    }
    if (iVar20 < 0) {
      iVar20 = 0;
      wVar3 = *(wchar_t *)FVar7.Data;
      pFVar1 = FVar7.Data;
      while (wVar3 != L'\0') {
        pFVar1 = pFVar1 + 2;
        iVar20 = iVar20 + 1;
        wVar3 = *(wchar_t *)pFVar1;
      }
    }
    UE::Trace::Private::Field_WriteStringWide(8,(wchar_t *)FVar7.Data,iVar20);
    UE::Trace::Private::TLogScope<1>::operator+=((TLogScope<1> *)&local_58,&local_58);
  }
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  if (pFVar13 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar13);
  }
  return;
}

// OutputAnimNodeValue @ 14756d3f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FAnimTrace::OutputAnimNodeValue
          (FAnimationBaseContext *param_1,uint param_2,wchar_t *param_3,wchar_t *param_4)

{
  wchar_t wVar1;
  AActor *this;
  UObject *pUVar2;
  code *pcVar3;
  wchar_t *pwVar4;
  bool bVar5;
  ushort uVar6;
  USkeletalMeshComponent *pUVar7;
  UWorld *pUVar8;
  ulong64 uVar9;
  int iVar10;
  undefined1 auStack_68 [32];
  LARGE_INTEGER local_48;
  LARGE_INTEGER *local_40;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_68;
  if (AnimationChannel->Enabled < 0) {
    return;
  }
  if ((param_1->AnimInstanceProxy == (FAnimInstanceProxy *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext.AnimInstanceProxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimTrace.cpp"
                         ,0x400,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar7 = FAnimInstanceProxy::GetSkelMeshComponent(param_1->AnimInstanceProxy);
  bVar5 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar7);
  if (!bVar5) {
    if (pUVar7 == (USkeletalMeshComponent *)0x0) {
      return;
    }
    this = (AActor *)pUVar7->_padding_;
    bVar5 = FTraceFilter::IsObjectTraceable<1>((UObject *)this);
    if (!bVar5) {
      return;
    }
    if (this == (AActor *)0x0) {
      return;
    }
    pUVar8 = AActor::GetWorld(this);
    bVar5 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar8);
    if (!bVar5) {
      return;
    }
  }
  pUVar2 = param_1->AnimInstanceProxy->AnimInstanceObject;
  FObjectTrace::OutputObject(pUVar2);
  if (-1 < AnimationChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FAnimationAnimNodeValueStringFields>
              ((TLogScope<1> *)&stack0xffffffffffffffc0);
    QueryPerformanceCounter(&local_48);
    *local_40 = local_48;
    pUVar8 = (UWorld *)(**(code **)(*(longlong *)pUVar2 + 0x180))(pUVar2);
    local_48 = (LARGE_INTEGER)FObjectTrace::GetWorldElapsedTime(pUVar8);
    local_40[1] = local_48;
    uVar9 = FObjectTrace::GetObjectId(pUVar2);
    local_40[2].QuadPart = uVar9;
    local_40[3].s.LowPart = param_2;
    uVar6 = FObjectTrace::GetObjectWorldTickCounter(pUVar2);
    *(ushort *)((longlong)local_40 + 0x1c) = uVar6;
    FAnimationAnimNodeValueStringFields::Key<wchar_t_const_*>
              ((FAnimationAnimNodeValueStringFields *)&stack0xffffffffffffffc0,param_3);
    iVar10 = 0;
    wVar1 = *param_4;
    pwVar4 = param_4;
    while (wVar1 != L'\0') {
      pwVar4 = pwVar4 + 1;
      iVar10 = iVar10 + 1;
      wVar1 = *pwVar4;
    }
    UE::Trace::Private::Field_WriteStringWide(4,param_4,iVar10);
    UE::Trace::Private::TLogScope<1>::operator+=
              ((TLogScope<1> *)&stack0xffffffffffffffc0,(FLogScope *)&stack0xffffffffffffffc0);
  }
  return;
}

// OutputAnimNodeValue @ 14756d5b0

void __cdecl
FAnimTrace::OutputAnimNodeValue
          (FAnimationBaseContext *param_1,uint param_2,wchar_t *param_3,TRotator<double> *param_4)

{
  TVector<double>_u_0 local_28;
  
  local_28._s_0.Y = param_4->Pitch;
  local_28._s_0.Z = param_4->Yaw;
  local_28._s_0.X = param_4->Roll;
  OutputAnimNodeValue(param_1,param_2,param_3,(TVector<double> *)&local_28._s_0);
  return;
}

// OutputAnimNodeValue @ 14756d5e0

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

void __cdecl
FAnimTrace::OutputAnimNodeValue
          (FAnimationBaseContext *param_1,uint param_2,wchar_t *param_3,TVector2<double> *param_4)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  UObject *pUVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  ushort uVar7;
  UWorld *pUVar8;
  ulong64 uVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  LARGE_INTEGER *local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (-1 < AnimationChannel->Enabled) {
    if ((param_1->AnimInstanceProxy == (FAnimInstanceProxy *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InContext.AnimInstanceProxy",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimTrace.cpp"
                           ,0x3a4,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pUVar3 = param_1->AnimInstanceProxy->AnimInstanceObject;
    FObjectTrace::OutputObject(pUVar3);
    if (-1 < AnimationChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<FAnimationAnimNodeValueVector2DFields>
                ((TLogScope<1> *)&local_30);
      QueryPerformanceCounter(&local_38);
      *local_30 = local_38;
      pUVar8 = (UWorld *)(**(code **)(*(longlong *)pUVar3 + 0x180))(pUVar3);
      local_38 = (LARGE_INTEGER)FObjectTrace::GetWorldElapsedTime(pUVar8);
      local_30[1].s = (_struct_19)local_38;
      uVar9 = FObjectTrace::GetObjectId(pUVar3);
      local_30[2].QuadPart = uVar9;
      local_30[3].s.LowPart = param_2;
      *(float *)((longlong)local_30 + 0x1c) = (float)(param_4->field0_0x0)._s_0.X;
      local_38.s.LowPart = (DWORD)(float)(param_4->field0_0x0)._s_0.Y;
      *(undefined4 *)(local_30 + 4) = local_38.s.LowPart;
      uVar7 = FObjectTrace::GetObjectWorldTickCounter(pUVar3);
      iVar11 = 0;
      *(ushort *)((longlong)local_30 + 0x24) = uVar7;
      wVar2 = *param_3;
      pwVar1 = param_3;
      while (wVar2 != L'\0') {
        pwVar1 = pwVar1 + 1;
        iVar11 = iVar11 + 1;
        wVar2 = *pwVar1;
      }
      UE::Trace::Private::Field_WriteStringWide(7,param_3,iVar11);
      lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar4 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar4 = *(longlong *)(lVar4 + 0x20);
      **(undefined1 **)(lVar4 + 0x20) = 6;
      lVar10 = *(longlong *)(lVar4 + 0x20) + 1;
      *(longlong *)(lVar4 + 0x20) = lVar10;
      if (lVar4 != local_28) {
        *(longlong *)(lVar4 + 0x28) = lVar10;
      }
      *(undefined8 *)(local_28 + 0x28) = *(undefined8 *)(local_28 + 0x20);
    }
  }
  return;
}

// OutputAnimNodeValue @ 14756d7b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FAnimTrace::OutputAnimNodeValue
          (FAnimationBaseContext *param_1,uint param_2,wchar_t *param_3,TVector<double> *param_4)

{
  wchar_t wVar1;
  AActor *this;
  UObject *pUVar2;
  code *pcVar3;
  wchar_t *pwVar4;
  uchar *puVar5;
  bool bVar6;
  ushort uVar7;
  USkeletalMeshComponent *pUVar8;
  UWorld *pUVar9;
  ulong64 uVar10;
  int iVar11;
  undefined1 auStack_68 [32];
  LARGE_INTEGER local_48;
  FLogScope local_40;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_68;
  if (AnimationChannel->Enabled < 0) {
    return;
  }
  if ((param_1->AnimInstanceProxy == (FAnimInstanceProxy *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext.AnimInstanceProxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimTrace.cpp"
                         ,0x3c3,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar8 = FAnimInstanceProxy::GetSkelMeshComponent(param_1->AnimInstanceProxy);
  bVar6 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar8);
  if (!bVar6) {
    if (pUVar8 == (USkeletalMeshComponent *)0x0) {
      return;
    }
    this = (AActor *)pUVar8->_padding_;
    bVar6 = FTraceFilter::IsObjectTraceable<1>((UObject *)this);
    if (!bVar6) {
      return;
    }
    if (this == (AActor *)0x0) {
      return;
    }
    pUVar9 = AActor::GetWorld(this);
    bVar6 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar9);
    if (!bVar6) {
      return;
    }
  }
  pUVar2 = param_1->AnimInstanceProxy->AnimInstanceObject;
  FObjectTrace::OutputObject(pUVar2);
  if (-1 < AnimationChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FAnimationAnimNodeValueVectorFields>
              ((TLogScope<1> *)&local_40);
    QueryPerformanceCounter(&local_48);
    *(LARGE_INTEGER *)local_40.Ptr = local_48;
    pUVar9 = (UWorld *)(**(code **)(*(longlong *)pUVar2 + 0x180))(pUVar2);
    local_48 = (LARGE_INTEGER)FObjectTrace::GetWorldElapsedTime(pUVar9);
    puVar5 = local_40.Ptr;
    ((LARGE_INTEGER *)((longlong)local_40.Ptr + 8))->s = (_struct_19)local_48;
    uVar10 = FObjectTrace::GetObjectId(param_1->AnimInstanceProxy->AnimInstanceObject);
    ((LARGE_INTEGER *)((longlong)puVar5 + 0x10))->QuadPart = uVar10;
    (((LARGE_INTEGER *)((longlong)puVar5 + 0x18))->s).LowPart = param_2;
    *(float *)((longlong)puVar5 + 0x1c) = (float)(param_4->field0_0x0)._s_0.X;
    *(float *)((longlong)puVar5 + 0x20) = (float)(param_4->field0_0x0)._s_0.Y;
    local_48.s.LowPart = (DWORD)(float)(param_4->field0_0x0)._s_0.Z;
    *(undefined4 *)((longlong)puVar5 + 0x24) = local_48.s.LowPart;
    uVar7 = FObjectTrace::GetObjectWorldTickCounter(pUVar2);
    iVar11 = 0;
    *(ushort *)((longlong)local_40.Ptr + 0x28) = uVar7;
    wVar1 = *param_3;
    pwVar4 = param_3;
    while (wVar1 != L'\0') {
      pwVar4 = pwVar4 + 1;
      iVar11 = iVar11 + 1;
      wVar1 = *pwVar4;
    }
    UE::Trace::Private::Field_WriteStringWide(8,param_3,iVar11);
    UE::Trace::Private::TLogScope<1>::operator+=((TLogScope<1> *)&local_40,&local_40);
  }
  return;
}

// OutputAnimNodeValue @ 14756d9d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FAnimTrace::OutputAnimNodeValue
          (FAnimationBaseContext *param_1,uint param_2,wchar_t *param_3,FName *param_4)

{
  AActor *this;
  UObject *pUVar1;
  code *pcVar2;
  TField<1,8,double> *pTVar3;
  bool bVar4;
  ushort uVar5;
  uint uVar6;
  USkeletalMeshComponent *pUVar7;
  UWorld *pUVar8;
  ulong64 uVar9;
  undefined1 auStack_898 [32];
  LARGE_INTEGER local_878;
  FAnimationAnimNodeValueStringFields local_870 [10];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_898;
  if (AnimationChannel->Enabled < 0) {
    return;
  }
  if ((param_1->AnimInstanceProxy == (FAnimInstanceProxy *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext.AnimInstanceProxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimTrace.cpp"
                         ,0x3e1,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar7 = FAnimInstanceProxy::GetSkelMeshComponent(param_1->AnimInstanceProxy);
  bVar4 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar7);
  if (!bVar4) {
    if (pUVar7 == (USkeletalMeshComponent *)0x0) {
      return;
    }
    this = (AActor *)pUVar7->_padding_;
    bVar4 = FTraceFilter::IsObjectTraceable<1>((UObject *)this);
    if (!bVar4) {
      return;
    }
    if (this == (AActor *)0x0) {
      return;
    }
    pUVar8 = AActor::GetWorld(this);
    bVar4 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar8);
    if (!bVar4) {
      return;
    }
  }
  pUVar1 = param_1->AnimInstanceProxy->AnimInstanceObject;
  FObjectTrace::OutputObject(pUVar1);
  uVar6 = ::FName::ToStringInternal(param_4,(wchar_t *)&local_870[0].RecordingTime_Field,0x40b);
  if (-1 < AnimationChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FAnimationAnimNodeValueStringFields>
              ((TLogScope<1> *)local_870);
    QueryPerformanceCounter(&local_878);
    *(LARGE_INTEGER *)local_870[0].Cycle_Field.FieldDesc.Name = local_878;
    pUVar8 = (UWorld *)(**(code **)(*(longlong *)pUVar1 + 0x180))(pUVar1);
    local_878 = (LARGE_INTEGER)FObjectTrace::GetWorldElapsedTime(pUVar8);
    *(LARGE_INTEGER *)((longlong)local_870[0].Cycle_Field.FieldDesc.Name + 8) = local_878;
    uVar9 = FObjectTrace::GetObjectId(pUVar1);
    ((LARGE_INTEGER *)((longlong)local_870[0].Cycle_Field.FieldDesc.Name + 0x10))->QuadPart = uVar9;
    (((LARGE_INTEGER *)((longlong)local_870[0].Cycle_Field.FieldDesc.Name + 0x18))->s).LowPart =
         param_2;
    uVar5 = FObjectTrace::GetObjectWorldTickCounter(pUVar1);
    *(ushort *)((longlong)local_870[0].Cycle_Field.FieldDesc.Name + 0x1c) = uVar5;
    FAnimationAnimNodeValueStringFields::Key<wchar_t_const_*>(local_870,param_3);
    if ((int)uVar6 < 0) {
      uVar6 = 0;
      pTVar3 = &local_870[0].RecordingTime_Field;
      while ((short)local_870[0].RecordingTime_Field.FieldDesc.Name != 0) {
        pTVar3 = (TField<1,8,double> *)((longlong)&(pTVar3->FieldDesc).Name + 2);
        uVar6 = uVar6 + 1;
        local_870[0].RecordingTime_Field.FieldDesc.Name._0_2_ = *(short *)&(pTVar3->FieldDesc).Name;
      }
    }
    UE::Trace::Private::Field_WriteStringWide(4,(wchar_t *)&local_870[0].RecordingTime_Field,uVar6);
    UE::Trace::Private::TLogScope<1>::operator+=((TLogScope<1> *)local_870,(FLogScope *)local_870);
  }
  return;
}

// OutputAnimNodeValue @ 14756dbc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FAnimTrace::OutputAnimNodeValue
          (FAnimationBaseContext *param_1,uint param_2,wchar_t *param_3,int param_4)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  AActor *this;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  ushort uVar6;
  USkeletalMeshComponent *pUVar7;
  UWorld *pUVar8;
  ulong64 uVar9;
  int iVar10;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  FLogScope local_30;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (AnimationChannel->Enabled < 0) {
    return;
  }
  if ((param_1->AnimInstanceProxy == (FAnimInstanceProxy *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext.AnimInstanceProxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimTrace.cpp"
                         ,0x36c,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pUVar7 = FAnimInstanceProxy::GetSkelMeshComponent(param_1->AnimInstanceProxy);
  bVar5 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar7);
  if (!bVar5) {
    if (pUVar7 == (USkeletalMeshComponent *)0x0) {
      return;
    }
    this = (AActor *)pUVar7->_padding_;
    bVar5 = FTraceFilter::IsObjectTraceable<1>((UObject *)this);
    if (!bVar5) {
      return;
    }
    if (this == (AActor *)0x0) {
      return;
    }
    pUVar8 = AActor::GetWorld(this);
    bVar5 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar8);
    if (!bVar5) {
      return;
    }
  }
  pUVar3 = param_1->AnimInstanceProxy->AnimInstanceObject;
  FObjectTrace::OutputObject(pUVar3);
  if (-1 < AnimationChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FAnimationAnimNodeValueIntFields>
              ((TLogScope<1> *)&local_30);
    QueryPerformanceCounter(&local_38);
    *(LARGE_INTEGER *)local_30.Ptr = local_38;
    pUVar8 = (UWorld *)(**(code **)(*(longlong *)pUVar3 + 0x180))(pUVar3);
    local_38 = (LARGE_INTEGER)FObjectTrace::GetWorldElapsedTime(pUVar8);
    *(LARGE_INTEGER *)((longlong)local_30.Ptr + 8) = local_38;
    uVar9 = FObjectTrace::GetObjectId(pUVar3);
    ((LARGE_INTEGER *)((longlong)local_30.Ptr + 0x10))->QuadPart = uVar9;
    (((LARGE_INTEGER *)((longlong)local_30.Ptr + 0x18))->s).LowPart = param_2;
    *(int *)((longlong)local_30.Ptr + 0x1c) = param_4;
    uVar6 = FObjectTrace::GetObjectWorldTickCounter(pUVar3);
    iVar10 = 0;
    *(ushort *)((longlong)local_30.Ptr + 0x20) = uVar6;
    wVar2 = *param_3;
    pwVar1 = param_3;
    while (wVar2 != L'\0') {
      pwVar1 = pwVar1 + 1;
      iVar10 = iVar10 + 1;
      wVar2 = *pwVar1;
    }
    UE::Trace::Private::Field_WriteStringWide(6,param_3,iVar10);
    UE::Trace::Private::TLogScope<1>::operator+=((TLogScope<1> *)&local_30,&local_30);
  }
  return;
}

// OutputAnimNodeValue @ 14756dd80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FAnimTrace::OutputAnimNodeValue
          (FAnimationBaseContext *param_1,uint param_2,wchar_t *param_3,float param_4)

{
  wchar_t wVar1;
  AActor *this;
  UObject *pUVar2;
  code *pcVar3;
  wchar_t *pwVar4;
  bool bVar5;
  ushort uVar6;
  USkeletalMeshComponent *pUVar7;
  UWorld *pUVar8;
  ulong64 uVar9;
  int iVar10;
  undefined1 auStack_68 [32];
  LARGE_INTEGER local_48;
  FLogScope local_40;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_68;
  if (AnimationChannel->Enabled < 0) {
    return;
  }
  if ((param_1->AnimInstanceProxy == (FAnimInstanceProxy *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext.AnimInstanceProxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimTrace.cpp"
                         ,0x388,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar7 = FAnimInstanceProxy::GetSkelMeshComponent(param_1->AnimInstanceProxy);
  bVar5 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar7);
  if (!bVar5) {
    if (pUVar7 == (USkeletalMeshComponent *)0x0) {
      return;
    }
    this = (AActor *)pUVar7->_padding_;
    bVar5 = FTraceFilter::IsObjectTraceable<1>((UObject *)this);
    if (!bVar5) {
      return;
    }
    if (this == (AActor *)0x0) {
      return;
    }
    pUVar8 = AActor::GetWorld(this);
    bVar5 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar8);
    if (!bVar5) {
      return;
    }
  }
  pUVar2 = param_1->AnimInstanceProxy->AnimInstanceObject;
  FObjectTrace::OutputObject(pUVar2);
  if (-1 < AnimationChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FAnimationAnimNodeValueFloatFields>
              ((TLogScope<1> *)&local_40);
    QueryPerformanceCounter(&local_48);
    *(LARGE_INTEGER *)local_40.Ptr = local_48;
    pUVar8 = (UWorld *)(**(code **)(*(longlong *)pUVar2 + 0x180))(pUVar2);
    local_48 = (LARGE_INTEGER)FObjectTrace::GetWorldElapsedTime(pUVar8);
    ((LARGE_INTEGER *)((longlong)local_40.Ptr + 8))->s = (_struct_19)local_48;
    uVar9 = FObjectTrace::GetObjectId(pUVar2);
    local_48.s.LowPart = (DWORD)param_4;
    ((LARGE_INTEGER *)((longlong)local_40.Ptr + 0x10))->QuadPart = uVar9;
    (((LARGE_INTEGER *)((longlong)local_40.Ptr + 0x18))->s).LowPart = param_2;
    *(float *)((longlong)local_40.Ptr + 0x1c) = param_4;
    uVar6 = FObjectTrace::GetObjectWorldTickCounter(pUVar2);
    iVar10 = 0;
    *(ushort *)((longlong)local_40.Ptr + 0x20) = uVar6;
    wVar1 = *param_3;
    pwVar4 = param_3;
    while (wVar1 != L'\0') {
      pwVar4 = pwVar4 + 1;
      iVar10 = iVar10 + 1;
      wVar1 = *pwVar4;
    }
    UE::Trace::Private::Field_WriteStringWide(6,param_3,iVar10);
    UE::Trace::Private::TLogScope<1>::operator+=((TLogScope<1> *)&local_40,&local_40);
  }
  return;
}

// OutputAnimNodeValue @ 14756df40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FAnimTrace::OutputAnimNodeValue
          (FAnimationBaseContext *param_1,uint param_2,wchar_t *param_3,UClass *param_4)

{
  wchar_t wVar1;
  AActor *this;
  UObject *pUVar2;
  code *pcVar3;
  wchar_t *pwVar4;
  uchar *puVar5;
  bool bVar6;
  ushort uVar7;
  USkeletalMeshComponent *pUVar8;
  UWorld *pUVar9;
  ulong64 uVar10;
  int iVar11;
  undefined1 auStack_68 [32];
  LARGE_INTEGER local_48;
  FLogScope local_40;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_68;
  if (AnimationChannel->Enabled < 0) {
    return;
  }
  if ((param_1->AnimInstanceProxy == (FAnimInstanceProxy *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext.AnimInstanceProxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimTrace.cpp"
                         ,0x439,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar8 = FAnimInstanceProxy::GetSkelMeshComponent(param_1->AnimInstanceProxy);
  bVar6 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar8);
  if (!bVar6) {
    if (pUVar8 == (USkeletalMeshComponent *)0x0) {
      return;
    }
    this = (AActor *)pUVar8->_padding_;
    bVar6 = FTraceFilter::IsObjectTraceable<1>((UObject *)this);
    if (!bVar6) {
      return;
    }
    if (this == (AActor *)0x0) {
      return;
    }
    pUVar9 = AActor::GetWorld(this);
    bVar6 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar9);
    if (!bVar6) {
      return;
    }
  }
  pUVar2 = param_1->AnimInstanceProxy->AnimInstanceObject;
  FObjectTrace::OutputObject(pUVar2);
  FObjectTrace::OutputType((UStruct *)param_4);
  if (-1 < AnimationChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FAnimationAnimNodeValueClassFields>
              ((TLogScope<1> *)&local_40);
    QueryPerformanceCounter(&local_48);
    *(LARGE_INTEGER *)local_40.Ptr = local_48;
    pUVar9 = (UWorld *)(**(code **)(*(longlong *)pUVar2 + 0x180))(pUVar2);
    local_48 = (LARGE_INTEGER)FObjectTrace::GetWorldElapsedTime(pUVar9);
    *(LARGE_INTEGER *)((longlong)local_40.Ptr + 8) = local_48;
    uVar10 = FObjectTrace::GetObjectId(pUVar2);
    puVar5 = local_40.Ptr;
    ((LARGE_INTEGER *)((longlong)local_40.Ptr + 0x10))->QuadPart = uVar10;
    (((LARGE_INTEGER *)((longlong)local_40.Ptr + 0x20))->s).LowPart = param_2;
    uVar10 = FObjectTrace::GetObjectId((UObject *)param_4);
    ((LARGE_INTEGER *)((longlong)puVar5 + 0x18))->QuadPart = uVar10;
    uVar7 = FObjectTrace::GetObjectWorldTickCounter(pUVar2);
    iVar11 = 0;
    *(ushort *)((longlong)local_40.Ptr + 0x24) = uVar7;
    wVar1 = *param_3;
    pwVar4 = param_3;
    while (wVar1 != L'\0') {
      pwVar4 = pwVar4 + 1;
      iVar11 = iVar11 + 1;
      wVar1 = *pwVar4;
    }
    UE::Trace::Private::Field_WriteStringWide(6,param_3,iVar11);
    UE::Trace::Private::TLogScope<1>::operator+=((TLogScope<1> *)&local_40,&local_40);
  }
  return;
}

// OutputAnimNodeValue @ 14756e110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FAnimTrace::OutputAnimNodeValue
          (FAnimationBaseContext *param_1,uint param_2,wchar_t *param_3,UObject *param_4)

{
  wchar_t wVar1;
  AActor *this;
  UObject *pUVar2;
  code *pcVar3;
  wchar_t *pwVar4;
  uchar *puVar5;
  bool bVar6;
  ushort uVar7;
  USkeletalMeshComponent *pUVar8;
  UWorld *pUVar9;
  ulong64 uVar10;
  int iVar11;
  undefined1 auStack_68 [32];
  LARGE_INTEGER local_48;
  FLogScope local_40;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_68;
  if (AnimationChannel->Enabled < 0) {
    return;
  }
  if ((param_1->AnimInstanceProxy == (FAnimInstanceProxy *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext.AnimInstanceProxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimTrace.cpp"
                         ,0x41c,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar8 = FAnimInstanceProxy::GetSkelMeshComponent(param_1->AnimInstanceProxy);
  bVar6 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar8);
  if (!bVar6) {
    if (pUVar8 == (USkeletalMeshComponent *)0x0) {
      return;
    }
    this = (AActor *)pUVar8->_padding_;
    bVar6 = FTraceFilter::IsObjectTraceable<1>((UObject *)this);
    if (!bVar6) {
      return;
    }
    if (this == (AActor *)0x0) {
      return;
    }
    pUVar9 = AActor::GetWorld(this);
    bVar6 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar9);
    if (!bVar6) {
      return;
    }
  }
  pUVar2 = param_1->AnimInstanceProxy->AnimInstanceObject;
  FObjectTrace::OutputObject(pUVar2);
  FObjectTrace::OutputObject(param_4);
  if (-1 < AnimationChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FAnimationAnimNodeValueObjectFields>
              ((TLogScope<1> *)&local_40);
    QueryPerformanceCounter(&local_48);
    *(LARGE_INTEGER *)local_40.Ptr = local_48;
    pUVar9 = (UWorld *)(**(code **)(*(longlong *)pUVar2 + 0x180))(pUVar2);
    local_48 = (LARGE_INTEGER)FObjectTrace::GetWorldElapsedTime(pUVar9);
    *(LARGE_INTEGER *)((longlong)local_40.Ptr + 8) = local_48;
    uVar10 = FObjectTrace::GetObjectId(pUVar2);
    puVar5 = local_40.Ptr;
    ((LARGE_INTEGER *)((longlong)local_40.Ptr + 0x10))->QuadPart = uVar10;
    (((LARGE_INTEGER *)((longlong)local_40.Ptr + 0x20))->s).LowPart = param_2;
    uVar10 = FObjectTrace::GetObjectId(param_4);
    ((LARGE_INTEGER *)((longlong)puVar5 + 0x18))->QuadPart = uVar10;
    uVar7 = FObjectTrace::GetObjectWorldTickCounter(pUVar2);
    iVar11 = 0;
    *(ushort *)((longlong)local_40.Ptr + 0x24) = uVar7;
    wVar1 = *param_3;
    pwVar4 = param_3;
    while (wVar1 != L'\0') {
      pwVar4 = pwVar4 + 1;
      iVar11 = iVar11 + 1;
      wVar1 = *pwVar4;
    }
    UE::Trace::Private::Field_WriteStringWide(6,param_3,iVar11);
    UE::Trace::Private::TLogScope<1>::operator+=((TLogScope<1> *)&local_40,&local_40);
  }
  return;
}

// OutputAnimNodeValue @ 14756e2e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FAnimTrace::OutputAnimNodeValue
          (FAnimationBaseContext *param_1,uint param_2,wchar_t *param_3,bool param_4)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  AActor *this;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  ushort uVar6;
  USkeletalMeshComponent *pUVar7;
  UWorld *pUVar8;
  ulong64 uVar9;
  int iVar10;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  FLogScope local_30;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (AnimationChannel->Enabled < 0) {
    return;
  }
  if ((param_1->AnimInstanceProxy == (FAnimInstanceProxy *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext.AnimInstanceProxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimTrace.cpp"
                         ,0x350,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pUVar7 = FAnimInstanceProxy::GetSkelMeshComponent(param_1->AnimInstanceProxy);
  bVar5 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar7);
  if (!bVar5) {
    if (pUVar7 == (USkeletalMeshComponent *)0x0) {
      return;
    }
    this = (AActor *)pUVar7->_padding_;
    bVar5 = FTraceFilter::IsObjectTraceable<1>((UObject *)this);
    if (!bVar5) {
      return;
    }
    if (this == (AActor *)0x0) {
      return;
    }
    pUVar8 = AActor::GetWorld(this);
    bVar5 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar8);
    if (!bVar5) {
      return;
    }
  }
  pUVar3 = param_1->AnimInstanceProxy->AnimInstanceObject;
  FObjectTrace::OutputObject(pUVar3);
  if (-1 < AnimationChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FAnimationAnimNodeValueBoolFields>
              ((TLogScope<1> *)&local_30);
    QueryPerformanceCounter(&local_38);
    *(LARGE_INTEGER *)local_30.Ptr = local_38;
    pUVar8 = (UWorld *)(**(code **)(*(longlong *)pUVar3 + 0x180))(pUVar3);
    local_38 = (LARGE_INTEGER)FObjectTrace::GetWorldElapsedTime(pUVar8);
    *(LARGE_INTEGER *)((longlong)local_30.Ptr + 8) = local_38;
    uVar9 = FObjectTrace::GetObjectId(pUVar3);
    ((LARGE_INTEGER *)((longlong)local_30.Ptr + 0x10))->QuadPart = uVar9;
    (((LARGE_INTEGER *)((longlong)local_30.Ptr + 0x18))->s).LowPart = param_2;
    *(bool *)((longlong)local_30.Ptr + 0x1e) = param_4;
    uVar6 = FObjectTrace::GetObjectWorldTickCounter(pUVar3);
    iVar10 = 0;
    *(ushort *)((longlong)local_30.Ptr + 0x1c) = uVar6;
    wVar2 = *param_3;
    pwVar1 = param_3;
    while (wVar2 != L'\0') {
      pwVar1 = pwVar1 + 1;
      iVar10 = iVar10 + 1;
      wVar2 = *pwVar1;
    }
    UE::Trace::Private::Field_WriteStringWide(6,param_3,iVar10);
    UE::Trace::Private::TLogScope<1>::operator+=((TLogScope<1> *)&local_30,&local_30);
  }
  return;
}

// OutputAnimNodeValueAnimNode @ 14756e4a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FAnimTrace::OutputAnimNodeValueAnimNode
          (FAnimationBaseContext *param_1,uint param_2,wchar_t *param_3,int param_4,UObject *param_5
          )

{
  wchar_t wVar1;
  AActor *this;
  UObject *pUVar2;
  code *pcVar3;
  wchar_t *pwVar4;
  uchar *puVar5;
  bool bVar6;
  ushort uVar7;
  USkeletalMeshComponent *pUVar8;
  UWorld *pUVar9;
  ulong64 uVar10;
  int iVar11;
  undefined1 auStack_68 [32];
  LARGE_INTEGER local_48;
  FLogScope local_40;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_68;
  if (AnimationChannel->Enabled < 0) {
    return;
  }
  if ((param_1->AnimInstanceProxy == (FAnimInstanceProxy *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext.AnimInstanceProxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimTrace.cpp"
                         ,0x456,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar8 = FAnimInstanceProxy::GetSkelMeshComponent(param_1->AnimInstanceProxy);
  bVar6 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar8);
  if (!bVar6) {
    if (pUVar8 == (USkeletalMeshComponent *)0x0) {
      return;
    }
    this = (AActor *)pUVar8->_padding_;
    bVar6 = FTraceFilter::IsObjectTraceable<1>((UObject *)this);
    if (!bVar6) {
      return;
    }
    if (this == (AActor *)0x0) {
      return;
    }
    pUVar9 = AActor::GetWorld(this);
    bVar6 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar9);
    if (!bVar6) {
      return;
    }
  }
  pUVar2 = param_1->AnimInstanceProxy->AnimInstanceObject;
  FObjectTrace::OutputObject(pUVar2);
  if (-1 < AnimationChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FAnimationAnimNodeValueAnimNodeFields>
              ((TLogScope<1> *)&local_40);
    QueryPerformanceCounter(&local_48);
    *(LARGE_INTEGER *)local_40.Ptr = local_48;
    pUVar9 = (UWorld *)(**(code **)(*(longlong *)pUVar2 + 0x180))(pUVar2);
    local_48 = (LARGE_INTEGER)FObjectTrace::GetWorldElapsedTime(pUVar9);
    *(LARGE_INTEGER *)((longlong)local_40.Ptr + 8) = local_48;
    uVar10 = FObjectTrace::GetObjectId(pUVar2);
    puVar5 = local_40.Ptr;
    ((LARGE_INTEGER *)((longlong)local_40.Ptr + 0x10))->QuadPart = uVar10;
    *(uint *)((longlong)local_40.Ptr + 0x24) = param_2;
    (((LARGE_INTEGER *)((longlong)local_40.Ptr + 0x18))->s).LowPart = param_4;
    uVar10 = FObjectTrace::GetObjectId(param_5);
    *(ulong64 *)((longlong)puVar5 + 0x1c) = uVar10;
    uVar7 = FObjectTrace::GetObjectWorldTickCounter(pUVar2);
    iVar11 = 0;
    *(ushort *)((longlong)local_40.Ptr + 0x28) = uVar7;
    wVar1 = *param_3;
    pwVar4 = param_3;
    while (wVar1 != L'\0') {
      pwVar4 = pwVar4 + 1;
      iVar11 = iVar11 + 1;
      wVar1 = *pwVar4;
    }
    UE::Trace::Private::Field_WriteStringWide(7,param_3,iVar11);
    UE::Trace::Private::TLogScope<1>::operator+=((TLogScope<1> *)&local_40,&local_40);
  }
  return;
}

// OutputAnimNotify @ 14756e680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FAnimTrace::OutputAnimNotify
          (UAnimInstance *param_1,FAnimNotifyEvent *param_2,ENotifyEventType param_3)

{
  AActor *this;
  LARGE_INTEGER *pLVar1;
  bool bVar2;
  uint uVar3;
  USkeletalMeshComponent *pUVar4;
  UWorld *pUVar5;
  ulong64 uVar6;
  UAnimNotify *pUVar7;
  UObject *pUVar8;
  float fVar9;
  undefined1 auStack_78 [32];
  LARGE_INTEGER local_58;
  LARGE_INTEGER *local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_78;
  if (AnimationChannel->Enabled < 0) {
    return;
  }
  pUVar4 = UAnimInstance::GetSkelMeshComponentChecked(param_1);
  bVar2 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar4);
  if (!bVar2) {
    if (pUVar4 == (USkeletalMeshComponent *)0x0) {
      return;
    }
    this = (AActor *)pUVar4->_padding_;
    bVar2 = FTraceFilter::IsObjectTraceable<1>((UObject *)this);
    if (!bVar2) {
      return;
    }
    if (this == (AActor *)0x0) {
      return;
    }
    pUVar5 = AActor::GetWorld(this);
    bVar2 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar5);
    if (!bVar2) {
      return;
    }
  }
  FObjectTrace::OutputObject((UObject *)param_1);
  pUVar7 = (param_2->Notify).field0_0x0.DebugPtr;
  if (pUVar7 == (UAnimNotify *)0x0) {
    pUVar7 = (UAnimNotify *)(param_2->NotifyStateClass).field0_0x0.DebugPtr;
    if (pUVar7 == (UAnimNotify *)0x0) {
      pUVar8 = (UObject *)param_2->_padding_;
      pUVar7 = (UAnimNotify *)0x0;
      if (pUVar8 == (UObject *)0x0) {
        pUVar8 = (UObject *)param_2->_padding_;
        pUVar7 = (UAnimNotify *)0x0;
      }
    }
    else {
      pUVar8 = (UObject *)pUVar7->_padding_;
    }
  }
  else {
    pUVar8 = (UObject *)pUVar7->_padding_;
  }
  FObjectTrace::OutputObject(pUVar8);
  FObjectTrace::OutputObject((UObject *)pUVar7);
  uVar3 = OutputName(&param_2->NotifyName);
  if (-1 < AnimationChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FAnimationNotify2Fields>((TLogScope<0> *)&local_50);
    QueryPerformanceCounter(&local_58);
    pLVar1 = local_50;
    *local_50 = local_58;
    pUVar5 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
    local_58 = (LARGE_INTEGER)FObjectTrace::GetWorldElapsedTime(pUVar5);
    pLVar1[1].s = (_struct_19)local_58;
    uVar6 = FObjectTrace::GetObjectId((UObject *)param_1);
    pLVar1[2].QuadPart = uVar6;
    uVar6 = FObjectTrace::GetObjectId(pUVar8);
    local_50[3].QuadPart = uVar6;
    uVar6 = FObjectTrace::GetObjectId((UObject *)pUVar7);
    local_50[4].QuadPart = uVar6;
    local_50[5].s.LowPart = uVar3;
    fVar9 = FAnimLinkableElement::GetTime((FAnimLinkableElement *)param_2,Absolute);
    local_58.s.LowPart = (DWORD)fVar9;
    *(float *)((longlong)local_50 + 0x2c) = fVar9;
    fVar9 = FAnimNotifyEvent::GetDuration(param_2);
    local_50[6].s.LowPart = (DWORD)fVar9;
    *(ENotifyEventType *)((longlong)local_50 + 0x34) = param_3;
    *(undefined8 *)(local_48 + 0x28) = *(undefined8 *)(local_48 + 0x20);
  }
  return;
}

// OutputAnimSequencePlayer @ 14756e890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FAnimTrace::OutputAnimSequencePlayer
          (FAnimationBaseContext *param_1,FAnimNode_SequencePlayerBase *param_2)

{
  AActor *this;
  UObject *pUVar1;
  code *pcVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined2 uVar5;
  USkeletalMeshComponent *pUVar6;
  UWorld *pUVar7;
  longlong *plVar8;
  ulong64 uVar9;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  undefined8 *local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (AnimationChannel->Enabled < 0) {
    return;
  }
  if ((param_1->AnimInstanceProxy == (FAnimInstanceProxy *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext.AnimInstanceProxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimTrace.cpp"
                         ,0x473,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar6 = FAnimInstanceProxy::GetSkelMeshComponent(param_1->AnimInstanceProxy);
  bVar4 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar6);
  if (!bVar4) {
    if (pUVar6 == (USkeletalMeshComponent *)0x0) {
      return;
    }
    this = (AActor *)pUVar6->_padding_;
    bVar4 = FTraceFilter::IsObjectTraceable<1>((UObject *)this);
    if (!bVar4) {
      return;
    }
    if (this == (AActor *)0x0) {
      return;
    }
    pUVar7 = AActor::GetWorld(this);
    bVar4 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar7);
    if (!bVar4) {
      return;
    }
  }
  pUVar1 = param_1->AnimInstanceProxy->AnimInstanceObject;
  FObjectTrace::OutputObject(pUVar1);
  plVar8 = (longlong *)(**(code **)(param_2->_padding_ + 0x148))(param_2);
  if (-1 < AnimationChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FAnimationAnimSequencePlayerFields>
              ((TLogScope<0> *)&local_30);
    QueryPerformanceCounter(&local_38);
    *local_30 = CONCAT44(local_38.s.HighPart,local_38.s.LowPart);
    uVar9 = FObjectTrace::GetObjectId(pUVar1);
    puVar3 = local_30;
    local_30[1] = uVar9;
    *(int *)(local_30 + 2) = param_1->CurrentNodeId;
    local_38.s.LowPart = (**(code **)(param_2->_padding_ + 0xa8))();
    *(undefined4 *)((longlong)puVar3 + 0x14) = local_38.s.LowPart;
    if (plVar8 == (longlong *)0x0) {
      uVar5 = 0;
      *(undefined4 *)(puVar3 + 3) = 0;
    }
    else {
      local_38.s.LowPart = (**(code **)(*plVar8 + 0x2c0))(plVar8);
      *(undefined4 *)(local_30 + 3) = local_38.s.LowPart;
      uVar5 = (**(code **)(*plVar8 + 0x310))(plVar8);
    }
    *(undefined2 *)((longlong)local_30 + 0x1c) = uVar5;
    *(undefined8 *)(local_28 + 0x28) = *(undefined8 *)(local_28 + 0x20);
  }
  return;
}

// OutputAnimSyncMarker @ 14756ea60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl FAnimTrace::OutputAnimSyncMarker(UAnimInstance *param_1,FPassedMarker *param_2)

{
  AActor *this;
  bool bVar1;
  uint uVar2;
  USkeletalMeshComponent *pUVar3;
  UWorld *pUVar4;
  ulong64 uVar5;
  LARGE_INTEGER LVar6;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (AnimationChannel->Enabled < 0) {
    return;
  }
  pUVar3 = UAnimInstance::GetSkelMeshComponentChecked(param_1);
  bVar1 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar3);
  if (!bVar1) {
    if (pUVar3 == (USkeletalMeshComponent *)0x0) {
      return;
    }
    this = (AActor *)pUVar3->_padding_;
    bVar1 = FTraceFilter::IsObjectTraceable<1>((UObject *)this);
    if (!bVar1) {
      return;
    }
    if (this == (AActor *)0x0) {
      return;
    }
    pUVar4 = AActor::GetWorld(this);
    bVar1 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar4);
    if (!bVar1) {
      return;
    }
  }
  FObjectTrace::OutputObject((UObject *)param_1);
  uVar2 = OutputName(&param_2->PassedMarkerName);
  if (-1 < AnimationChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FAnimationSyncMarker2Fields>((TLogScope<0> *)&local_20);
    QueryPerformanceCounter(&local_28);
    *local_20 = local_28;
    uVar5 = FObjectTrace::GetObjectId((UObject *)param_1);
    local_20[2].QuadPart = uVar5;
    pUVar4 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
    LVar6 = (LARGE_INTEGER)FObjectTrace::GetWorldElapsedTime(pUVar4);
    local_20[1] = LVar6;
    local_20[3].s.LowPart = uVar2;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return;
}

// OutputAnimTickRecord @ 14756eba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FAnimTrace::OutputAnimTickRecord(FAnimationBaseContext *param_1,FAnimTickRecord *param_2)

{
  int iVar1;
  AActor *this;
  UObject *pUVar2;
  FBlendFilter *pFVar3;
  FScriptContainerElement *pFVar4;
  LARGE_INTEGER *pLVar5;
  bool bVar6;
  ushort uVar7;
  USkeletalMeshComponent *pUVar8;
  UWorld *pUVar9;
  ulong64 uVar10;
  DWORD DVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_b8 [32];
  LARGE_INTEGER local_98;
  LARGE_INTEGER *local_90;
  longlong local_88;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (AnimationChannel->Enabled < 0) {
    return;
  }
  pUVar8 = FAnimInstanceProxy::GetSkelMeshComponent(param_1->AnimInstanceProxy);
  bVar6 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar8);
  if (!bVar6) {
    if (pUVar8 == (USkeletalMeshComponent *)0x0) {
      return;
    }
    this = (AActor *)pUVar8->_padding_;
    bVar6 = FTraceFilter::IsObjectTraceable<1>((UObject *)this);
    if (!bVar6) {
      return;
    }
    if (this == (AActor *)0x0) {
      return;
    }
    pUVar9 = AActor::GetWorld(this);
    bVar6 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar9);
    if (!bVar6) {
      return;
    }
  }
  if ((param_2->SourceAsset).field0_0x0.DebugPtr != (UAnimationAsset *)0x0) {
    pUVar2 = param_1->AnimInstanceProxy->AnimInstanceObject;
    FObjectTrace::OutputObject(pUVar2);
    FObjectTrace::OutputObject((UObject *)(param_2->SourceAsset).field0_0x0.DebugPtr);
    DVar11 = 0;
    fVar12 = 0.0;
    if (param_2->TimeAccumulator != (float *)0x0) {
      fVar12 = *param_2->TimeAccumulator;
    }
    bVar6 = UObjectBaseUtility::IsA<UAnimMontage>
                      ((UObjectBaseUtility *)(param_2->SourceAsset).field0_0x0.DebugPtr);
    if (bVar6) {
      fVar12 = (param_2->field13_0x40).Montage.CurrentPosition;
    }
    fVar14 = 0.0;
    fVar15 = 0.0;
    uVar13 = 0;
    bVar6 = UObjectBaseUtility::IsA<UBlendSpace>
                      ((UObjectBaseUtility *)(param_2->SourceAsset).field0_0x0.DebugPtr);
    if (bVar6) {
      pFVar3 = (param_2->field13_0x40).BlendSpace.BlendFilter;
      fVar14 = (param_2->field13_0x40).BlendSpace.BlendSpacePositionX;
      fVar15 = (param_2->field13_0x40).BlendSpace.BlendSpacePositionY;
      iVar1 = (pFVar3->FilterPerAxis).ArrayNum;
      if (0 < iVar1) {
        pFVar4 = (pFVar3->FilterPerAxis).AllocatorInstance.Data;
        uVar13 = *(undefined4 *)pFVar4;
        if (1 < iVar1) {
          DVar11 = *(DWORD *)(pFVar4 + 0x38);
        }
      }
    }
    if (-1 < AnimationChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<FAnimationTickRecord2Fields>((TLogScope<0> *)&local_90);
      QueryPerformanceCounter(&local_98);
      *local_90 = local_98;
      pUVar9 = (UWorld *)(**(code **)(*(longlong *)pUVar2 + 0x180))(pUVar2);
      local_98 = (LARGE_INTEGER)FObjectTrace::GetWorldElapsedTime(pUVar9);
      local_90[1].s = (_struct_19)local_98;
      uVar10 = FObjectTrace::GetObjectId(pUVar2);
      pLVar5 = local_90;
      local_90[2].QuadPart = uVar10;
      uVar10 = FObjectTrace::GetObjectId((UObject *)(param_2->SourceAsset).field0_0x0.DebugPtr);
      pLVar5[3].QuadPart = uVar10;
      pLVar5[4].s.LowPart = param_1->CurrentNodeId;
      *(float *)((longlong)pLVar5 + 0x24) = param_2->EffectiveBlendWeight;
      pLVar5[5].s.LowPart = (DWORD)fVar12;
      *(float *)((longlong)pLVar5 + 0x2c) = param_2->RootMotionWeightModifier;
      pLVar5[6].s.LowPart = (DWORD)param_2->PlayRateMultiplier;
      *(float *)((longlong)pLVar5 + 0x34) = fVar14;
      pLVar5[7].s.LowPart = (DWORD)fVar15;
      *(undefined4 *)((longlong)pLVar5 + 0x3c) = uVar13;
      local_98.s.LowPart = DVar11;
      pLVar5[8].s.LowPart = DVar11;
      uVar7 = FObjectTrace::GetObjectWorldTickCounter(pUVar2);
      *(ushort *)((longlong)local_90 + 0x44) = uVar7;
      *(bool *)((longlong)local_90 + 0x46) = param_2->bLooping;
      *(bool *)((longlong)local_90 + 0x47) = bVar6;
      *(undefined8 *)(local_88 + 0x28) = *(undefined8 *)(local_88 + 0x20);
    }
  }
  return;
}

// OutputInertialization @ 14756ee80

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

void __cdecl
FAnimTrace::OutputInertialization
          (FAnimInstanceProxy *param_1,int param_2,float param_3,EInertializationType param_4)

{
  UAnimInstance *pUVar1;
  UWorld *pUVar2;
  ulong64 uVar3;
  undefined1 auStack_68 [32];
  LARGE_INTEGER local_48;
  LARGE_INTEGER *local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_68;
  pUVar1 = CastChecked<UAnimInstance,UObject_const_>(param_1->AnimInstanceObject);
  FObjectTrace::OutputObject((UObject *)pUVar1);
  if (-1 < AnimationChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FAnimationInertializationFields>((TLogScope<0> *)&local_40)
    ;
    QueryPerformanceCounter(&local_48);
    *local_40 = local_48;
    pUVar2 = (UWorld *)(**(code **)(*(longlong *)pUVar1 + 0x180))(pUVar1);
    local_48 = (LARGE_INTEGER)FObjectTrace::GetWorldElapsedTime(pUVar2);
    local_40[1] = local_48;
    uVar3 = FObjectTrace::GetObjectId(param_1->AnimInstanceObject);
    local_40[3].QuadPart = uVar3;
    local_40[4].s.LowPart = param_2;
    *(float *)((longlong)local_40 + 0x24) = param_3;
    *(EInertializationType *)(local_40 + 5) = param_4;
    *(undefined8 *)(local_38 + 0x28) = *(undefined8 *)(local_38 + 0x20);
  }
  return;
}

// OutputMontage @ 14756ef90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl FAnimTrace::OutputMontage(UAnimInstance *param_1,FAnimMontageInstance *param_2)

{
  AActor *this;
  bool bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  USkeletalMeshComponent *pUVar5;
  UWorld *pUVar6;
  FName FVar7;
  ulong64 uVar8;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  LARGE_INTEGER *local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (AnimationChannel->Enabled < 0) {
    return;
  }
  if ((param_2->Montage).field0_0x0.DebugPtr == (UAnimMontage *)0x0) {
    return;
  }
  pUVar5 = UAnimInstance::GetSkelMeshComponentChecked(param_1);
  bVar1 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar5);
  if (!bVar1) {
    if (pUVar5 == (USkeletalMeshComponent *)0x0) {
      return;
    }
    this = (AActor *)pUVar5->_padding_;
    bVar1 = FTraceFilter::IsObjectTraceable<1>((UObject *)this);
    if (!bVar1) {
      return;
    }
    if (this == (AActor *)0x0) {
      return;
    }
    pUVar6 = AActor::GetWorld(this);
    bVar1 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar6);
    if (!bVar1) {
      return;
    }
  }
  FObjectTrace::OutputObject((UObject *)param_1);
  FObjectTrace::OutputObject((UObject *)(param_2->Montage).field0_0x0.DebugPtr);
  FVar7 = FAnimMontageInstance::GetCurrentSection(param_2);
  uVar3 = OutputName((FName *)FVar7);
  FVar7 = FAnimMontageInstance::GetNextSection(param_2);
  uVar4 = OutputName((FName *)FVar7);
  if (-1 < AnimationChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FAnimationMontage2Fields>((TLogScope<0> *)&local_30);
    QueryPerformanceCounter(&local_38);
    *local_30 = local_38;
    pUVar6 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
    local_38 = (LARGE_INTEGER)FObjectTrace::GetWorldElapsedTime(pUVar6);
    local_30[1].s = (_struct_19)local_38;
    uVar8 = FObjectTrace::GetObjectId((UObject *)param_1);
    local_30[2].QuadPart = uVar8;
    uVar8 = FObjectTrace::GetObjectId((UObject *)(param_2->Montage).field0_0x0.DebugPtr);
    local_30[3].QuadPart = uVar8;
    local_30[4].s.LowPart = uVar3;
    *(uint *)((longlong)local_30 + 0x24) = uVar4;
    local_30[5].s.LowPart = (DWORD)(param_2->Blend).BlendedValue;
    *(float *)((longlong)local_30 + 0x2c) = (param_2->Blend).DesiredValue;
    local_38.s.LowPart = (DWORD)param_2->Position;
    local_30[6].s.LowPart = (DWORD)param_2->Position;
    uVar2 = FObjectTrace::GetObjectWorldTickCounter((UObject *)param_1);
    *(ushort *)((longlong)local_30 + 0x34) = uVar2;
    *(undefined8 *)(local_28 + 0x28) = *(undefined8 *)(local_28 + 0x20);
  }
  return;
}

// OutputName @ 14756f170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __cdecl FAnimTrace::OutputName(FName *param_1)

{
  int iVar1;
  FName FVar2;
  bool bVar3;
  uint **ppuVar4;
  undefined8 uVar5;
  uint uVar6;
  FNameEntryId FVar7;
  int *piVar8;
  uint *puVar9;
  longlong lVar10;
  undefined1 auStack_888 [32];
  FNameEntryId local_868 [2];
  undefined1 local_860 [12];
  int iStack_854;
  TPairInitializer<FName_const_&,unsigned_int_const_&> local_850 [130];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_888;
  bVar3 = false;
  local_868[0].Value = 0;
  FVar7.Value = 0;
  if (*param_1 != (FName)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&GAnimTraceNameCriticalSection);
    FVar2 = *param_1;
    uVar6 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
    if (GAnimTraceNames._8_4_ != GAnimTraceNames._52_4_) {
      lVar10 = 0x154c25bf8;
      if (GAnimTraceNames._64_8_ != 0) {
        lVar10 = GAnimTraceNames._64_8_;
      }
      iVar1 = *(int *)(lVar10 + (ulonglong)(GAnimTraceNames._72_4_ - 1 & FVar2.Number + uVar6) * 4);
      while (iVar1 != -1) {
        lVar10 = GAnimTraceNames._0_8_ + (longlong)iVar1 * 0x14;
        if (*(FName *)(GAnimTraceNames._0_8_ + (longlong)iVar1 * 0x14) == FVar2) {
          puVar9 = (uint *)(lVar10 + 8);
          if (lVar10 == 0) {
            puVar9 = (uint *)0x0;
          }
          if (puVar9 != (uint *)0x0) {
            local_868[0].Value = *puVar9;
            goto LAB_14756f269;
          }
          break;
        }
        iVar1 = *(int *)(lVar10 + 0xc);
      }
    }
    local_868[0].Value = GAnimTraceCurrentNameId;
    GAnimTraceCurrentNameId = GAnimTraceCurrentNameId + 1;
    unique0x00009c00 = local_868;
    local_860._0_8_ = param_1;
    TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,unsigned_int_const_&>_>
              ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
                *)&GAnimTraceNames,local_850,(bool *)local_860);
    bVar3 = true;
LAB_14756f269:
    LeaveCriticalSection((LPCRITICAL_SECTION)&GAnimTraceNameCriticalSection);
    FVar7.Value = local_868[0].Value;
    if ((bVar3) &&
       (uVar6 = ::FName::ToStringInternal(param_1,(wchar_t *)&local_850[0].Value,0x40b),
       FVar7.Value = local_868[0].Value, -1 < AnimationChannel->Enabled)) {
      UE::Trace::Private::FImportantLogScope::Enter<FAnimationNameFields>
                ((FImportantLogScope *)local_860,uVar6 * 2);
      uVar5 = local_860._0_8_;
      ((FNameEntryId *)local_860._0_8_)->Value = local_868[0].Value;
      if ((int)uVar6 < 0) {
        ppuVar4 = &local_850[0].Value;
        uVar6 = 0;
        while ((short)local_850[0].Value != 0) {
          ppuVar4 = (uint **)((longlong)ppuVar4 + 2);
          uVar6 = uVar6 + 1;
          local_850[0].Value._0_2_ = *(short *)ppuVar4;
        }
      }
      iVar1 = iStack_854;
      puVar9 = (uint *)((longlong)&((FNameEntryId *)local_860._0_8_)->Value + (longlong)iStack_854);
      *puVar9 = uVar6 << 0xe | 0x100;
      *(undefined1 *)puVar9 = 1;
      memcpy(puVar9 + 1,&local_850[0].Value,(ulonglong)(uVar6 * 2));
      *(undefined1 *)((longlong)(uVar5 + 4) + (longlong)(int)(iVar1 + uVar6 * 2)) = 3;
      piVar8 = (int *)((longlong)&((FNameEntryId *)local_860._0_8_)->Value +
                      (longlong)(int)stack0xfffffffffffff7a8);
      LOCK();
      *piVar8 = *piVar8 + 1;
      UNLOCK();
      FVar7.Value = local_868[0].Value;
    }
  }
  return FVar7.Value;
}

// OutputPoseWatch @ 14756f3a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FAnimTrace::OutputPoseWatch
          (FAnimInstanceProxy *param_1,UPoseWatchPoseElement *param_2,int param_3,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_4,
          FBlendedHeapCurve *param_5,TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_6,
          TTransform<double> *param_7,bool param_8)

{
  int iVar1;
  AActor *this;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  USkeletalMeshComponent *pUVar5;
  UWorld *pUVar6;
  UAnimInstance *this_00;
  FTlsAutoCleanup *pFVar7;
  FTlsAutoCleanup *pFVar8;
  ulonglong uVar9;
  ulong64 uVar10;
  FString *pFVar11;
  uint uVar12;
  wchar_t *pwVar13;
  uint uVar14;
  longlong lVar15;
  FName *pFVar16;
  FName *pFVar17;
  undefined1 auStackY_108 [32];
  undefined1 local_d8;
  undefined1 local_d7;
  undefined1 local_d6 [2];
  uint local_d4;
  uint local_d0;
  int local_cc;
  LARGE_INTEGER local_c8;
  FAnimInstanceProxy *local_c0;
  UAnimInstance *local_b8;
  USkeletalMeshComponent *local_b0;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_a8;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *local_a0;
  TTransform<double> *local_98;
  code *local_90;
  undefined1 *local_88;
  code *local_80;
  undefined1 *local_78;
  FString local_70;
  FLogScope local_60;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_98 = param_7;
  local_a0 = param_6;
  if (AnimationChannel->Enabled < 0) {
    return;
  }
  local_cc = param_3;
  local_c0 = param_1;
  local_a8 = param_4;
  pUVar5 = FAnimInstanceProxy::GetSkelMeshComponent(param_1);
  bVar3 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar5);
  if (!bVar3) {
    if (pUVar5 == (USkeletalMeshComponent *)0x0) {
      return;
    }
    this = (AActor *)pUVar5->_padding_;
    bVar3 = FTraceFilter::IsObjectTraceable<1>((UObject *)this);
    if (!bVar3) {
      return;
    }
    if (this == (AActor *)0x0) {
      return;
    }
    pUVar6 = AActor::GetWorld(this);
    bVar3 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar6);
    if (!bVar3) {
      return;
    }
  }
  this_00 = CastChecked<UAnimInstance,UObject_const_>(param_1->AnimInstanceObject);
  local_b8 = this_00;
  pUVar5 = UAnimInstance::GetSkelMeshComponentChecked(this_00);
  local_b0 = pUVar5;
  if (pUVar5 == (USkeletalMeshComponent *)0x0) {
    pFVar11 = GetTypeName<USkeletalMeshComponent>(&local_70);
    if ((pFVar11->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar13);
  }
  FObjectTrace::OutputObject((UObject *)pUVar5);
  FObjectTrace::OutputObject((UObject *)this_00);
  local_88 = &local_d7;
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FAnimTraceScratchBuffers>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar7 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_90,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FAnimTraceScratchBuffers>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  iVar1 = *(int *)&pFVar7[3].field_0x4;
  *(undefined4 *)(pFVar7 + 3) = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)(pFVar7 + 2),0,(int *)&pFVar7[3].field_0x4);
  }
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            ((TArray<float,TSizedDefaultAllocator<32>_> *)(pFVar7 + 2),*(int *)&param_5->field_0x8,
             Default);
  local_78 = local_d6;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FAnimTraceScratchBuffers>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar8 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_80,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FAnimTraceScratchBuffers>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  iVar1 = *(int *)&pFVar8[5].field_0x4;
  *(undefined4 *)(pFVar8 + 5) = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)(pFVar8 + 4),0,(int *)&pFVar8[5].field_0x4);
  }
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(pFVar8 + 4),
             *(int *)&param_5->field_0x8,Default);
  local_d0 = *(uint *)&param_5->field_0x8;
  uVar9 = (ulonglong)(int)local_d0;
  if (0 < (int)local_d0) {
    pFVar16 = *(FName **)param_5;
    uVar14 = 0;
    pFVar17 = pFVar16 + uVar9 * 2;
    while( true ) {
      if (*(int *)&param_5->field_0x8 != (int)uVar9) {
        local_d8 = 0;
        `TCheckedPointerIterator<UE::Anim::FCurveElement,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_d8);
      }
      this_00 = local_b8;
      param_4 = local_a8;
      pUVar5 = local_b0;
      param_1 = local_c0;
      param_6 = local_a0;
      if (pFVar16 == pFVar17) break;
      local_d4 = OutputName(pFVar16);
      uVar12 = 0;
      if ((int)uVar14 < *(int *)(pFVar8 + 5)) {
        uVar12 = ~uVar14 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar15 = (longlong)(int)uVar14;
      *(uint *)((longlong)pFVar8[4] + lVar15 * 4) = local_d4;
      uVar12 = pFVar16[1].ComparisonIndex.Value;
      uVar4 = 0;
      if ((int)uVar14 < *(int *)(pFVar7 + 3)) {
        uVar4 = ~uVar14 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar14 = uVar14 + 1;
      pFVar16 = pFVar16 + 2;
      *(uint *)((longlong)pFVar7[2] + lVar15 * 4) = uVar12;
      uVar9 = (ulonglong)local_d0;
    }
  }
  if (-1 < AnimationChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FAnimationPoseWatch2Fields>((TLogScope<1> *)&local_60);
    QueryPerformanceCounter(&local_c8);
    *(LARGE_INTEGER *)local_60.Ptr = local_c8;
    pUVar6 = (UWorld *)(**(code **)(*(longlong *)this_00 + 0x180))(this_00);
    local_c8 = (LARGE_INTEGER)FObjectTrace::GetWorldElapsedTime(pUVar6);
    *(LARGE_INTEGER *)((longlong)local_60.Ptr + 8) = local_c8;
    uVar10 = FObjectTrace::GetObjectId((UObject *)pUVar5);
    ((LARGE_INTEGER *)((longlong)local_60.Ptr + 0x10))->QuadPart = uVar10;
    uVar10 = FObjectTrace::GetObjectId(param_1->AnimInstanceObject);
    ((LARGE_INTEGER *)((longlong)local_60.Ptr + 0x18))->QuadPart = uVar10;
    *(longlong *)((longlong)local_60.Ptr + 0x20) = (longlong)local_cc;
    UE::Trace::Private::Field_WriteAuxData(7,(uchar *)local_98,0x60);
    UE::Trace::Private::Field_WriteAuxData
              (8,(uchar *)(param_4->AllocatorInstance).Data,(param_4->ArrayNum * 3 & 0x3fffU) << 5);
    UE::Trace::Private::Field_WriteAuxData
              (9,(uchar *)pFVar7[2],(*(uint *)(pFVar7 + 3) & 0x1ffff) << 2);
    UE::Trace::Private::Field_WriteAuxData
              (10,(uchar *)pFVar8[4],(*(uint *)(pFVar8 + 5) & 0x1ffff) << 2);
    UE::Trace::Private::Field_WriteAuxData
              (0xb,(uchar *)(param_6->AllocatorInstance).Data,param_6->ArrayNum * 2 & 0x7fffe);
    *(bool *)((longlong)local_60.Ptr + 0x30) = param_8;
    UE::Trace::Private::TLogScope<1>::operator+=((TLogScope<1> *)&local_60,&local_60);
  }
  return;
}

// OutputSkeletalMesh @ 14756f870

void __cdecl FAnimTrace::OutputSkeletalMesh(USkeletalMesh *param_1)

{
  FTlsAutoCleanup *pFVar1;
  undefined1 *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  ForAnyElementType _Src;
  code *pcVar5;
  longlong lVar6;
  uchar *puVar7;
  FBoolAnnotation FVar8;
  bool bVar9;
  undefined7 extraout_var;
  UObject *pUVar10;
  longlong lVar11;
  FTlsAutoCleanup *pFVar12;
  longlong lVar13;
  ulong64 uVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 local_res10 [8];
  FBoolAnnotation local_res18 [16];
  undefined1 local_78 [8];
  longlong local_70;
  FImportantLogScope local_68;
  code *local_58;
  undefined1 *local_50;
  
  if ((-1 < AnimationChannel->Enabled) && (param_1 != (USkeletalMesh *)0x0)) {
    FVar8 = FUObjectAnnotationSparse<FBoolAnnotation,1>::GetAnnotation
                      ((FUObjectAnnotationSparse<FBoolAnnotation,1> *)&GSkeletalMeshTraceAnnotations
                       ,(UObjectBase *)(local_res18 + 8));
    if (*(char *)CONCAT71(extraout_var,FVar8.Mark) == '\0') {
      FObjectTrace::OutputObject((UObject *)param_1);
      pUVar10 = (UObject *)(**(code **)(param_1->_padding_ + 0x400))(param_1);
      FObjectTrace::OutputObject(pUVar10);
      lVar11 = (**(code **)(param_1->_padding_ + 0x318))(param_1);
      uVar16 = *(uint *)(lVar11 + 0x28);
      local_50 = local_78;
      local_58 = UE::Core::Private::Function::
                 TFunctionRefCaller<`TThreadSingleton<FAnimTraceScratchBuffers>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                 ::Call;
      pFVar12 = FThreadSingletonInitializer::Get
                          ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_58,
                           &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FAnimTraceScratchBuffers>::GetTlsSlot(void)'
                            ::__l2::TlsSlot);
      pFVar1 = pFVar12 + 10;
      iVar15 = *(int *)&pFVar12[0xb].field_0x4;
      puVar2 = &pFVar12[0xb].field_0x4;
      *(undefined4 *)(pFVar12 + 0xb) = 0;
      pFVar12 = pFVar12 + 0xb;
      if (iVar15 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,(ForAnyElementType *)pFVar1,0,(int *)puVar2);
      }
      iVar15 = *(int *)pFVar12;
      if (iVar15 < (int)uVar16) {
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar16 - iVar15,(ForAnyElementType *)pFVar1,(int *)pFVar12,(int *)puVar2);
      }
      else {
        if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
        }
        if ((int)uVar16 < iVar15) {
          uVar18 = iVar15 - uVar16;
          if ((int)(uVar18 | uVar16) < 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              );
            if (bVar9) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          if (uVar18 != 0) {
            iVar15 = (*(int *)pFVar12 - uVar16) - uVar18;
            if (iVar15 != 0) {
              memmove(*(FScriptContainerElement **)pFVar1 + (longlong)(int)uVar16 * 4,
                      *(FScriptContainerElement **)pFVar1 + (longlong)(int)uVar16 * 4 +
                      (longlong)(int)uVar18 * 4,(longlong)iVar15 << 2);
            }
            *(uint *)pFVar12 = *(int *)pFVar12 - uVar18;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,(ForAnyElementType *)pFVar1,*(int *)pFVar12,(int *)puVar2);
          }
        }
      }
      uVar16 = 0;
      lVar13 = (**(code **)(param_1->_padding_ + 0x318))(param_1);
      iVar15 = *(int *)(lVar13 + 0x28);
      lVar11 = *(longlong *)(lVar13 + 0x20);
      lVar17 = 0;
      local_70 = lVar11 + (longlong)iVar15 * 0xc;
      while( true ) {
        lVar6 = local_70;
        if (*(int *)(lVar13 + 0x28) != iVar15) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<FMeshBoneInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res10);
        }
        if (lVar11 == lVar6) break;
        uVar4 = *(undefined4 *)(lVar11 + 8);
        uVar18 = 0;
        if ((int)uVar16 < *(int *)pFVar12) {
          uVar18 = ~uVar16 >> 0x1f;
        }
        if (uVar18 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        uVar16 = uVar16 + 1;
        *(undefined4 *)(*(FScriptContainerElement **)pFVar1 + lVar17) = uVar4;
        lVar17 = lVar17 + 4;
        lVar11 = lVar11 + 0xc;
      }
      if (-1 < AnimationChannel->Enabled) {
        UE::Trace::Private::FImportantLogScope::Enter<FAnimationSkeletalMesh3Fields>
                  (&local_68,*(int *)pFVar12 << 2);
        puVar7 = local_68.Ptr;
        uVar14 = FObjectTrace::GetObjectId((UObject *)param_1);
        *(ulong64 *)puVar7 = uVar14;
        pUVar10 = (UObject *)(**(code **)(param_1->_padding_ + 0x400))(param_1);
        uVar14 = FObjectTrace::GetObjectId(pUVar10);
        *(ulong64 *)((longlong)puVar7 + 8) = uVar14;
        puVar3 = (uint *)((longlong)puVar7 + (longlong)local_68.AuxCursor);
        _Src.Data = *(FScriptContainerElement **)pFVar1;
        uVar16 = *(int *)pFVar12 * 4;
        *puVar3 = *(int *)pFVar12 << 0xf | 0x200;
        *(undefined1 *)puVar3 = 1;
        memcpy(puVar3 + 1,_Src.Data,(ulonglong)uVar16);
        iVar15 = local_68.AuxCursor + uVar16;
        local_68.AuxCursor = iVar15 + 4;
        *(undefined1 *)((longlong)iVar15 + 4 + (longlong)puVar7) = 3;
        LOCK();
        *(int *)((longlong)local_68.BufferOffset + (longlong)local_68.Ptr) =
             *(int *)((longlong)local_68.BufferOffset + (longlong)local_68.Ptr) + 1;
        UNLOCK();
      }
      local_res18[0].Mark = true;
      FUObjectAnnotationSparse<FBoolAnnotation,1>::AddAnnotation
                ((FUObjectAnnotationSparse<FBoolAnnotation,1> *)&GSkeletalMeshTraceAnnotations,
                 (UObjectBase *)param_1,local_res18);
    }
  }
  return;
}

// OutputSkeletalMeshComponent @ 14756fc10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl FAnimTrace::OutputSkeletalMeshComponent(USkeletalMeshComponent *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *this;
  ulonglong uVar2;
  undefined4 uVar3;
  AActor *this_00;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  USkeletalMeshComponent *this_01;
  bool bVar7;
  char cVar8;
  ushort uVar9;
  uint uVar10;
  int iVar11;
  UWorld *pUVar12;
  UAnimInstance *pUVar13;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *pTVar14;
  USkeletalMesh *pUVar15;
  FTlsAutoCleanup *pFVar16;
  FTlsAutoCleanup *pFVar17;
  FTlsAutoCleanup *pFVar18;
  UAnimInstance *pUVar19;
  longlong lVar20;
  ulong64 uVar21;
  longlong lVar22;
  EAnimCurveType EVar23;
  TBitArray<FDefaultBitArrayAllocator> *pTVar24;
  uint uVar25;
  TBitArray<FDefaultBitArrayAllocator> *pTVar26;
  uint uVar27;
  int iVar28;
  ForElementType<unsigned_int> FVar29;
  undefined1 *puVar30;
  uint *puVar31;
  ForElementType<unsigned_int> FVar32;
  uint uVar33;
  undefined1 auStackY_218 [32];
  EAnimCurveType local_1d8;
  undefined1 local_1d7;
  undefined1 local_1d6 [2];
  uint local_1d4;
  undefined1 local_1d0;
  undefined1 local_1cf;
  undefined1 local_1ce;
  undefined1 local_1cd [5];
  ForElementType<unsigned_int> local_1c8;
  TBitArray<FDefaultBitArrayAllocator> *local_1c0;
  UAnimInstance *local_1b8;
  int local_1b0;
  undefined8 local_1a8;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *local_1a0;
  UAnimInstance *local_198;
  LARGE_INTEGER local_190;
  UAnimInstance *local_188;
  int iStack_180;
  uint uStack_17c;
  undefined1 *local_178;
  undefined4 uStack_170;
  int iStack_16c;
  int local_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  USkeletalMeshComponent *local_158;
  TArray<float,TSizedDefaultAllocator<32>_> *local_150;
  FName local_148;
  undefined4 local_140;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  UAnimInstance *local_128;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_120;
  undefined8 uStack_100;
  UAnimInstance *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  code *local_c8;
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined4 local_6c;
  undefined4 local_4c;
  LARGE_INTEGER *local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_218;
  if (AnimationChannel->Enabled < 0) {
    return;
  }
  if (param_1 == (USkeletalMeshComponent *)0x0) {
    return;
  }
  local_158 = param_1;
  bVar7 = FTraceFilter::IsObjectTraceable<1>((UObject *)param_1);
  if (!bVar7) {
    this_00 = (AActor *)param_1->_padding_;
    bVar7 = FTraceFilter::IsObjectTraceable<1>((UObject *)this_00);
    if (!bVar7) {
      return;
    }
    if (this_00 == (AActor *)0x0) {
      return;
    }
    pUVar12 = AActor::GetWorld(this_00);
    bVar7 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar12);
    if (!bVar7) {
      return;
    }
  }
  pTVar26 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
  uVar27 = 0;
  iVar11 = (int)(&param_1->_padding_)[(longlong)(int)param_1->_padding_ * 2];
  local_1b0 = iVar11;
  pUVar13 = USkeletalMeshComponent::GetAnimInstance(param_1);
  local_198 = pUVar13;
  if (pUVar13 != (UAnimInstance *)0x0) {
    EVar23 = AttributeCurve;
    pTVar24 = pTVar26;
    do {
      pTVar14 = UAnimInstance::GetAnimationCurveList(pUVar13,EVar23);
      EVar23 = EVar23 + MaterialCurve;
      uVar27 = (int)pTVar24 + (*(int *)&pTVar14->field_0x8 - *(int *)&pTVar14->field_0x34);
      pTVar24 = (TBitArray<FDefaultBitArrayAllocator> *)(ulonglong)uVar27;
    } while (EVar23 != MaxAnimCurveType);
  }
  uVar33 = *(uint *)((longlong)&param_1->_padding_ + 4);
  local_1c0 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
  local_1d4 = uVar33;
  bVar7 = USkinnedMeshComponent::IsValidExternalMorphSetLODIndex
                    ((USkinnedMeshComponent *)param_1,uVar33);
  pTVar24 = pTVar26;
  if ((bVar7) &&
     (cVar8 = (**(code **)(*(longlong *)CVarRecordExternalMorphTargets._8_8_ + 0xc0))(),
     cVar8 != '\0')) {
    uVar10 = 0;
    if ((int)uVar33 < (int)param_1->_padding_) {
      uVar10 = ~uVar33 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar24 = (TBitArray<FDefaultBitArrayAllocator> *)
              ((longlong)(int)uVar33 * 0x50 + param_1->_padding_);
    local_1c0 = pTVar24;
  }
  if (((0 < iVar11) || (0 < (int)uVar27)) ||
     ((pTVar24 != (TBitArray<FDefaultBitArrayAllocator> *)0x0 &&
      (*(int *)((pTVar24->AllocatorInstance).InlineData + 8) !=
       *(int *)&pTVar24[1].AllocatorInstance.SecondaryData.field_0x4)))) {
    FObjectTrace::OutputObject((UObject *)param_1);
    pUVar15 = USkeletalMeshComponent::GetSkeletalMeshAsset(param_1);
    OutputSkeletalMesh(pUVar15);
    local_c0 = &local_1d0;
    local_c8 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FAnimTraceScratchBuffers>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar16 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_c8,
                         &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FAnimTraceScratchBuffers>::GetTlsSlot(void)'
                          ::__l2::TlsSlot);
    pTVar1 = (TArray<float,TSizedDefaultAllocator<32>_> *)(pFVar16 + 2);
    iVar11 = *(int *)&pFVar16[3].field_0x4;
    *(undefined4 *)(pFVar16 + 3) = 0;
    local_150 = pTVar1;
    if (iVar11 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)pTVar1,0,(int *)&pFVar16[3].field_0x4);
    }
    TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized(pTVar1,uVar27,Default);
    local_b0 = &local_1cf;
    local_b8 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FAnimTraceScratchBuffers>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar16 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_b8,
                         &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FAnimTraceScratchBuffers>::GetTlsSlot(void)'
                          ::__l2::TlsSlot);
    this = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(pFVar16 + 4);
    iVar11 = *(int *)&pFVar16[5].field_0x4;
    *(undefined4 *)(pFVar16 + 5) = 0;
    local_1a0 = this;
    if (iVar11 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)this,0,(int *)&pFVar16[5].field_0x4);
    }
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(this,uVar27,Default);
    local_1a8 = 1;
    if ((0 < (int)uVar27) && (pUVar13 != (UAnimInstance *)0x0)) {
      local_1d8 = AttributeCurve;
      pTVar24 = pTVar26;
      do {
        uVar6 = local_1a8;
        local_1b8 = (UAnimInstance *)UAnimInstance::GetAnimationCurveList(pUVar13,local_1d8);
        iVar11 = *(int *)&(local_1b8->CurrentSkeleton).field0_0x0;
        uStack_17c = (uint)uVar6;
        iStack_180 = 0;
        local_168 = 0;
        local_1c8 = (ForElementType<unsigned_int>)&local_1b8->field_0x10;
        iStack_16c = 0;
        if (iVar11 != 0) {
          puVar31 = (uint *)local_1c8;
          if (*(uint **)&local_1b8->field_0x20 != (uint *)0x0) {
            puVar31 = *(uint **)&local_1b8->field_0x20;
          }
          uVar27 = *puVar31;
          while (uVar27 == 0) {
            lVar22 = (longlong)iStack_180;
            local_168 = local_168 + 0x20;
            iStack_180 = iStack_180 + 1;
            iStack_16c = iVar11;
            if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180)
            goto LAB_14756ff6f;
            uVar27 = puVar31[lVar22 + 1];
          }
          uStack_17c = -uVar27 & uVar27;
          uVar2 = (ulonglong)uStack_17c * 2 + 1;
          lVar22 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          local_138 = (int)lVar22;
          iStack_16c = local_168 + -1 + local_138;
          if (iVar11 < iStack_16c) {
            iStack_16c = iVar11;
          }
        }
LAB_14756ff6f:
        uStack_164 = local_6c;
        iStack_160 = *(int *)&local_1b8->field_0x8 - *(int *)&local_1b8->bPostUpdatingAnimation;
        uVar27 = *(uint *)&(local_1b8->CurrentSkeleton).field0_0x0;
        TStack_120._padding_ = CONCAT44(uStack_17c,iStack_180);
        uStack_170 = 0xffffffff;
        uVar33 = uVar27 & 0xffffffe0;
        TStack_120.CurrentBitIndex = iStack_16c;
        TStack_120.UnvisitedBitMask = 0xffffffff;
        iVar28 = (int)uVar27 >> 5;
        TStack_120._28_4_ = local_6c;
        TStack_120.BaseBitIndex = local_168;
        uStack_100 = CONCAT44(uStack_15c,iStack_160);
        local_188 = local_1b8;
        local_178 = (undefined1 *)local_1c8;
        local_128 = local_1b8;
        TStack_120.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_1c8;
        if ((((int)uVar27 < 0) || (iVar11 < (int)uVar27)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar32 = local_1c8;
        uVar10 = *(uint *)&((TObjectPtr<USkeleton> *)((longlong)local_1c8 + 0x18))->field0_0x0;
        if (uVar27 != uVar10) {
          FVar29 = local_1c8;
          if (*(ForElementType<unsigned_int> *)((longlong)local_1c8 + 0x10) !=
              (ForElementType<unsigned_int>)0x0) {
            FVar29 = *(ForElementType<unsigned_int> *)((longlong)local_1c8 + 0x10);
          }
          uVar27 = -1 << ((byte)uVar27 & 0x1f) & *(uint *)((longlong)FVar29 + (longlong)iVar28 * 4);
          while (uVar27 == 0) {
            lVar22 = (longlong)iVar28;
            uVar33 = uVar33 + 0x20;
            iVar28 = iVar28 + 1;
            uVar27 = uVar10;
            if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar28)
            goto LAB_147570082;
            uVar27 = *(uint *)((undefined1 *)((longlong)FVar29 + 4) + lVar22 * 4);
          }
          uVar2 = (ulonglong)(-uVar27 & uVar27) * 2 + 1;
          lVar22 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          local_134 = (int)lVar22;
          uVar27 = (uVar33 - 1) + local_134;
          if ((int)uVar10 < (int)uVar27) {
            uVar27 = uVar10;
          }
        }
LAB_147570082:
        lVar22 = (longlong)pTVar24 * 4;
        while( true ) {
          pUVar13 = local_128;
          if (*(int *)&local_128->field_0x8 - *(int *)&local_128->bPostUpdatingAnimation !=
              (int)uStack_100) {
            local_1d7 = 0;
            `TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1d7);
          }
          if (((TStack_120.CurrentBitIndex == uVar27) &&
              ((ForElementType<unsigned_int>)TStack_120.Array == FVar32)) && (pUVar13 == local_1b8))
          break;
          lVar20 = *(longlong *)pUVar13;
          local_148 = *(FName *)(lVar20 + (longlong)TStack_120.CurrentBitIndex * 0x14);
          local_140 = *(undefined4 *)(lVar20 + 8 + (longlong)TStack_120.CurrentBitIndex * 0x14);
          uVar10 = OutputName(&local_148);
          uVar25 = (uint)pTVar26;
          uVar33 = 0;
          if ((int)uVar25 < local_1a0->ArrayNum) {
            uVar33 = ~uVar25 >> 0x1f;
          }
          if ((uVar33 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pTVar1 = local_150;
          *(uint *)((local_1a0->AllocatorInstance).Data + lVar22) = uVar10;
          uVar33 = 0;
          if ((int)uVar25 < local_150->ArrayNum) {
            uVar33 = ~uVar25 >> 0x1f;
          }
          if ((uVar33 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pTVar26 = (TBitArray<FDefaultBitArrayAllocator> *)(ulonglong)(uVar25 + 1);
          *(undefined4 *)((pTVar1->AllocatorInstance).Data + (longlong)pTVar24 * 4) = local_140;
          pTVar24 = (TBitArray<FDefaultBitArrayAllocator> *)
                    ((pTVar24->AllocatorInstance).InlineData + 1);
          TStack_120.UnvisitedBitMask = TStack_120.UnvisitedBitMask & ~TStack_120._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_120);
          lVar22 = lVar22 + 4;
        }
        local_1d8 = local_1d8 + MaterialCurve;
        param_1 = local_158;
        pUVar13 = local_198;
      } while (local_1d8 != MaxAnimCurveType);
    }
    local_a0 = &local_1ce;
    local_a8 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FAnimTraceScratchBuffers>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar17 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_a8,
                         &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FAnimTraceScratchBuffers>::GetTlsSlot(void)'
                          ::__l2::TlsSlot);
    local_98 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FAnimTraceScratchBuffers>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar16 = pFVar17 + 6;
    local_90 = local_1cd;
    pFVar18 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_98,
                         &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FAnimTraceScratchBuffers>::GetTlsSlot(void)'
                          ::__l2::TlsSlot);
    FVar32 = (ForElementType<unsigned_int>)(pFVar18 + 8);
    iVar11 = *(int *)&pFVar17[7].field_0x4;
    *(undefined4 *)(pFVar17 + 7) = 0;
    local_1c8 = FVar32;
    if (iVar11 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)pFVar16,0,(int *)&pFVar17[7].field_0x4);
    }
    iVar11 = *(int *)&pFVar18[9].field_0x4;
    pUVar13 = (UAnimInstance *)(pFVar18 + 9);
    puVar30 = &pFVar18[9].field_0x4;
    *(uint *)pUVar13 = 0;
    local_1b8 = pUVar13;
    if (iVar11 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)FVar32,0,(int *)puVar30);
    }
    pTVar26 = local_1c0;
    if ((local_1c0 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) &&
       (*(int *)((local_1c0->AllocatorInstance).InlineData + 8) !=
        *(int *)&local_1c0[1].AllocatorInstance.SecondaryData.field_0x4)) {
      pUVar19 = (UAnimInstance *)
                USkinnedMeshComponent::GetExternalMorphWeights
                          ((USkinnedMeshComponent *)param_1,local_1d4);
      uVar27 = *(int *)((pTVar26->AllocatorInstance).InlineData + 8) -
               *(int *)&local_1c0[1].AllocatorInstance.SecondaryData.field_0x4;
      local_198 = pUVar19;
      if ((*(int *)&pUVar19->field_0x8 != *(int *)&pUVar19->bPostUpdatingAnimation) &&
         (uVar27 == *(int *)&pUVar19->field_0x8 - *(int *)&pUVar19->bPostUpdatingAnimation)) {
        uVar33 = *(uint *)pUVar13;
        if ((int)uVar33 < (int)uVar27) {
          iVar11 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (4,4,uVar27 - uVar33,(ForAnyElementType *)FVar32,(int *)pUVar13,
                              (int *)puVar30);
          memset(*(FScriptContainerElement **)FVar32 + (longlong)iVar11 * 4,0,
                 (longlong)(int)(uVar27 - uVar33) << 2);
        }
        else {
          if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar27);
          }
          if ((int)uVar27 < (int)uVar33) {
            uVar33 = uVar33 - uVar27;
            if (((int)(uVar27 | uVar33) < 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if (uVar33 != 0) {
              iVar11 = (*(uint *)pUVar13 - uVar27) - uVar33;
              if (iVar11 != 0) {
                memmove(*(FScriptContainerElement **)FVar32 + (longlong)(int)uVar27 * 4,
                        *(FScriptContainerElement **)FVar32 + (longlong)(int)uVar27 * 4 +
                        (longlong)(int)uVar33 * 4,(longlong)iVar11 << 2);
              }
              *(uint *)pUVar13 = *(uint *)pUVar13 - uVar33;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,(ForAnyElementType *)FVar32,*(uint *)pUVar13,(int *)puVar30);
            }
          }
        }
        iVar11 = *(int *)&(pUVar19->CurrentSkeleton).field0_0x0;
        pTVar26 = (TBitArray<FDefaultBitArrayAllocator> *)&pUVar19->field_0x10;
        uVar27 = 0;
        iStack_180 = 0;
        local_168 = 0;
        iStack_16c = 0;
        if (iVar11 == 0) {
LAB_14757044f:
          uStack_17c = (uint)local_1a8;
        }
        else {
          puVar31 = *(uint **)&pUVar19->field_0x20;
          if (*(uint **)&pUVar19->field_0x20 == (uint *)0x0) {
            puVar31 = (uint *)pTVar26;
          }
          uStack_17c = *puVar31;
          while (uStack_17c == 0) {
            lVar22 = (longlong)iStack_180;
            local_168 = local_168 + 0x20;
            iStack_180 = iStack_180 + 1;
            iStack_16c = iVar11;
            if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180)
            goto LAB_14757044f;
            uStack_17c = (puVar31 + 1)[lVar22];
          }
          uStack_17c = -uStack_17c & uStack_17c;
          uVar2 = (ulonglong)uStack_17c * 2 + 1;
          lVar22 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          local_130 = (int)lVar22;
          iStack_16c = local_130 + -1 + local_168;
          if (iVar11 < iStack_16c) {
            iStack_16c = iVar11;
          }
        }
        uStack_164 = local_4c;
        iStack_160 = *(int *)&pUVar19->field_0x8 - *(int *)&pUVar19->bPostUpdatingAnimation;
        uVar33 = *(uint *)&(pUVar19->CurrentSkeleton).field0_0x0;
        uStack_170 = 0xffffffff;
        local_1d4 = -1 << ((byte)uVar33 & 0x1f);
        uVar10 = uVar33 & 0xffffffe0;
        TStack_f0._padding_ = CONCAT44(uStack_17c,iStack_180);
        TStack_f0.CurrentBitIndex = iStack_16c;
        TStack_f0.UnvisitedBitMask = 0xffffffff;
        iVar28 = (int)uVar33 >> 5;
        TStack_f0._28_4_ = local_4c;
        TStack_f0.BaseBitIndex = local_168;
        uStack_d0 = CONCAT44(uStack_15c,iStack_160);
        local_1c0 = pTVar26;
        local_188 = pUVar19;
        local_178 = (undefined1 *)pTVar26;
        local_f8 = pUVar19;
        TStack_f0.Array = pTVar26;
        if ((((int)uVar33 < 0) || (iVar11 < (int)uVar33)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar25 = *(uint *)&(pUVar19->CurrentSkeleton).field0_0x0;
        if (uVar33 != uVar25) {
          puVar30 = *(undefined1 **)&pUVar19->field_0x20;
          if (*(undefined1 **)&pUVar19->field_0x20 == (undefined1 *)0x0) {
            puVar30 = (undefined1 *)pTVar26;
          }
          uVar33 = local_1d4 & *(uint *)(puVar30 + (longlong)iVar28 * 4);
          while (uVar33 == 0) {
            lVar22 = (longlong)iVar28;
            uVar10 = uVar10 + 0x20;
            iVar28 = iVar28 + 1;
            uVar33 = uVar25;
            if ((int)((uVar25 - 1) + ((int)(uVar25 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar28)
            goto LAB_147570560;
            uVar33 = *(uint *)(puVar30 + lVar22 * 4 + 4);
          }
          uVar2 = (ulonglong)(-uVar33 & uVar33) * 2 + 1;
          lVar22 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          local_12c = (int)lVar22;
          uVar33 = local_12c + -1 + uVar10;
          if ((int)uVar25 < (int)uVar33) {
            uVar33 = uVar25;
          }
        }
LAB_147570560:
        lVar22 = 0;
        while( true ) {
          pUVar19 = local_f8;
          if (*(int *)&local_f8->field_0x8 - *(int *)&local_f8->bPostUpdatingAnimation !=
              (int)uStack_d0) {
            local_1d6[0] = 0;
            `TSparseArray<TSparseSetElement<TTuple<int,FExternalMorphSetWeights>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1d6);
          }
          lVar20 = (longlong)TStack_f0.CurrentBitIndex;
          if (((TStack_f0.CurrentBitIndex == uVar33) && (TStack_f0.Array == pTVar26)) &&
             (FVar32 = local_1c8, pUVar13 = local_1b8, pUVar19 == local_198)) break;
          lVar4 = *(longlong *)pUVar19;
          uVar3 = *(undefined4 *)(lVar20 * 0x30 + 0x18 + lVar4);
          uVar10 = 0;
          if ((int)uVar27 < (int)*(uint *)local_1b8) {
            uVar10 = ~uVar27 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar18 = (FTlsAutoCleanup *)(lVar20 * 0x30 + 0x10 + lVar4);
          *(undefined4 *)(*(FScriptContainerElement **)local_1c8 + lVar22) = uVar3;
          if ((pFVar16 == pFVar18) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(void*)this != (void*)&Source",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x96e,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar11 = *(int *)(pFVar18 + 1);
          if (iVar11 != 0) {
            iVar28 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (4,4,iVar11,(ForAnyElementType *)pFVar16,(int *)(pFVar17 + 7),
                                (int *)&pFVar17[7].field_0x4);
            memcpy(*(FScriptContainerElement **)pFVar16 + (longlong)iVar28 * 4,
                   *(FScriptContainerElement **)pFVar18,(longlong)iVar11 << 2);
          }
          uVar27 = uVar27 + 1;
          TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
          lVar22 = lVar22 + 4;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
          pTVar26 = local_1c0;
        }
      }
    }
    if (-1 < AnimationChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<FAnimationSkeletalMeshComponent4Fields>
                ((TLogScope<1> *)&local_48);
      QueryPerformanceCounter(&local_190);
      this_01 = local_158;
      *local_48 = local_190;
      pUVar12 = (UWorld *)local_158->_padding_;
      if (pUVar12 == (UWorld *)0x0) {
        pUVar12 = UActorComponent::GetWorld_Uncached((UActorComponent *)local_158);
      }
      local_190 = (LARGE_INTEGER)FObjectTrace::GetWorldElapsedTime(pUVar12);
      local_48[1] = local_190;
      uVar21 = FObjectTrace::GetObjectId((UObject *)this_01);
      local_48[2].QuadPart = uVar21;
      pUVar15 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_01);
      uVar21 = FObjectTrace::GetObjectId((UObject *)pUVar15);
      local_48[3].QuadPart = uVar21;
      *(byte *)(local_48 + 4) = (byte)this_01->_padding_ >> 5 & 1;
      UE::Trace::Private::Field_WriteAuxData(5,(uchar *)&this_01->_padding_,0x60);
      UE::Trace::Private::Field_WriteAuxData
                (6,(uchar *)(&this_01->_padding_)[(longlong)(int)this_01->_padding_ * 2],
                 (local_1b0 * 3 & 0x3fffU) << 5);
      UE::Trace::Private::Field_WriteAuxData
                (7,(uchar *)(local_1a0->AllocatorInstance).Data,
                 (local_1a0->ArrayNum & 0x1ffffU) << 2);
      UE::Trace::Private::Field_WriteAuxData
                (8,(uchar *)(local_150->AllocatorInstance).Data,
                 (local_150->ArrayNum & 0x1ffffU) << 2);
      *(undefined2 *)((longlong)local_48 + 0x21) =
           *(undefined2 *)((longlong)&this_01->_padding_ + 4);
      uVar9 = FObjectTrace::GetObjectWorldTickCounter((UObject *)this_01);
      *(ushort *)((longlong)local_48 + 0x23) = uVar9;
      UE::Trace::Private::Field_WriteAuxData
                (0xb,(uchar *)*(FScriptContainerElement **)pFVar16,
                 (*(uint *)(pFVar17 + 7) & 0x1ffff) << 2);
      UE::Trace::Private::Field_WriteAuxData
                (0xc,(uchar *)*(FScriptContainerElement **)FVar32,(*(uint *)pUVar13 & 0x1ffff) << 2)
      ;
      lVar22 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar22 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar22 = *(longlong *)(lVar22 + 0x20);
      **(undefined1 **)(lVar22 + 0x20) = 6;
      lVar20 = *(longlong *)(lVar22 + 0x20) + 1;
      *(longlong *)(lVar22 + 0x20) = lVar20;
      if (lVar22 != local_40) {
        *(longlong *)(lVar22 + 0x28) = lVar20;
      }
      *(undefined8 *)(local_40 + 0x28) = *(undefined8 *)(local_40 + 0x20);
    }
  }
  return;
}

// OutputSkeletalMeshFrame @ 1475708e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl FAnimTrace::OutputSkeletalMeshFrame(USkeletalMeshComponent *param_1)

{
  AActor *this;
  bool bVar1;
  ushort uVar2;
  UWorld *pUVar3;
  ulong64 uVar4;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  bVar1 = FTraceFilter::IsObjectTraceable<1>((UObject *)param_1);
  if (!bVar1) {
    if (param_1 == (USkeletalMeshComponent *)0x0) {
      return;
    }
    this = (AActor *)param_1->_padding_;
    bVar1 = FTraceFilter::IsObjectTraceable<1>((UObject *)this);
    if (!bVar1) {
      return;
    }
    if (this == (AActor *)0x0) {
      return;
    }
    pUVar3 = AActor::GetWorld(this);
    bVar1 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar3);
    if (!bVar1) {
      return;
    }
  }
  FObjectTrace::OutputObject((UObject *)param_1);
  if (-1 < AnimationChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FAnimationSkeletalMeshFrameFields>
              ((TLogScope<0> *)&local_20);
    QueryPerformanceCounter(&local_28);
    *local_20 = local_28;
    uVar4 = FObjectTrace::GetObjectId((UObject *)param_1);
    local_20[1].QuadPart = uVar4;
    uVar2 = FObjectTrace::GetObjectWorldTickCounter((UObject *)param_1);
    *(ushort *)(local_20 + 2) = uVar2;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return;
}

// OutputStateMachineState @ 1475709c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FAnimTrace::OutputStateMachineState
          (FAnimationBaseContext *param_1,int param_2,int param_3,float param_4,float param_5)

{
  AActor *this;
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  USkeletalMeshComponent *pUVar4;
  UWorld *pUVar5;
  ulong64 uVar6;
  undefined1 auStack_68 [32];
  LARGE_INTEGER local_48;
  undefined8 *local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_68;
  if (AnimationChannel->Enabled < 0) {
    return;
  }
  if ((param_1->AnimInstanceProxy == (FAnimInstanceProxy *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext.AnimInstanceProxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimTrace.cpp"
                         ,0x490,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar4 = FAnimInstanceProxy::GetSkelMeshComponent(param_1->AnimInstanceProxy);
  bVar3 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar4);
  if (!bVar3) {
    if (pUVar4 == (USkeletalMeshComponent *)0x0) {
      return;
    }
    this = (AActor *)pUVar4->_padding_;
    bVar3 = FTraceFilter::IsObjectTraceable<1>((UObject *)this);
    if (!bVar3) {
      return;
    }
    if (this == (AActor *)0x0) {
      return;
    }
    pUVar5 = AActor::GetWorld(this);
    bVar3 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar5);
    if (!bVar3) {
      return;
    }
  }
  pUVar1 = param_1->AnimInstanceProxy->AnimInstanceObject;
  FObjectTrace::OutputObject(pUVar1);
  if (-1 < AnimationChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FAnimationStateMachineStateFields>
              ((TLogScope<0> *)&local_40);
    QueryPerformanceCounter(&local_48);
    *local_40 = CONCAT44(local_48.s.HighPart,local_48.s.LowPart);
    uVar6 = FObjectTrace::GetObjectId(pUVar1);
    local_40[1] = uVar6;
    *(int *)(local_40 + 2) = param_1->CurrentNodeId;
    *(int *)((longlong)local_40 + 0x14) = param_2;
    *(int *)(local_40 + 3) = param_3;
    *(float *)((longlong)local_40 + 0x1c) = param_4;
    *(float *)(local_40 + 4) = param_5;
    *(undefined8 *)(local_38 + 0x28) = *(undefined8 *)(local_38 + 0x20);
  }
  return;
}

// OutputSync @ 147570b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl FAnimTrace::OutputSync(FAnimInstanceProxy *param_1,int param_2,FName param_3)

{
  AActor *this;
  bool bVar1;
  uint uVar2;
  USkeletalMeshComponent *pUVar3;
  UWorld *pUVar4;
  ulong64 uVar5;
  FName local_res18 [2];
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  LARGE_INTEGER *local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (AnimationChannel->Enabled < 0) {
    return;
  }
  local_res18[0] = param_3;
  pUVar3 = FAnimInstanceProxy::GetSkelMeshComponent(param_1);
  bVar1 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar3);
  if (!bVar1) {
    if (pUVar3 == (USkeletalMeshComponent *)0x0) {
      return;
    }
    this = (AActor *)pUVar3->_padding_;
    bVar1 = FTraceFilter::IsObjectTraceable<1>((UObject *)this);
    if (!bVar1) {
      return;
    }
    if (this == (AActor *)0x0) {
      return;
    }
    pUVar4 = AActor::GetWorld(this);
    bVar1 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar4);
    if (!bVar1) {
      return;
    }
  }
  FObjectTrace::OutputObject(param_1->AnimInstanceObject);
  uVar2 = OutputName(local_res18);
  if (-1 < AnimationChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FAnimationSyncFields>((TLogScope<0> *)&local_30);
    QueryPerformanceCounter(&local_38);
    *local_30 = local_38;
    uVar5 = FObjectTrace::GetObjectId(param_1->AnimInstanceObject);
    local_30[1].QuadPart = uVar5;
    local_30[2].s.LowPart = param_2;
    *(uint *)((longlong)local_30 + 0x14) = uVar2;
    *(undefined8 *)(local_28 + 0x28) = *(undefined8 *)(local_28 + 0x20);
  }
  return;
}

// Reset @ 147575900

void __cdecl FAnimTrace::Reset(void)

{
  FUObjectAnnotationSparse<FBoolAnnotation,1>::RemoveAllAnnotations
            ((FUObjectAnnotationSparse<FBoolAnnotation,1> *)&GSkeletalMeshTraceAnnotations);
  TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
           *)&GAnimTraceNames);
  GAnimTraceCurrentNameId = 1;
  return;
}

