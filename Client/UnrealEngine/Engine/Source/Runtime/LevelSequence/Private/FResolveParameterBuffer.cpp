// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LevelSequence
// Functions: 6

// AddParameter<FActorLocatorFragmentResolveParameter,UWorld_*_const_&,FActorContainerID_const_,FTopLevelAssetPath_const_&> @ 146c49750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FActorLocatorFragmentResolveParameter * __thiscall
UE::UniversalObjectLocator::FResolveParameterBuffer::
AddParameter<FActorLocatorFragmentResolveParameter,UWorld_*_const_&,FActorContainerID_const_,FTopLevelAssetPath_const_&>
          (FResolveParameterBuffer *this,
          TParameterTypeHandle<FActorLocatorFragmentResolveParameter> param_1,UWorld **param_2,
          FActorContainerID *param_3,FTopLevelAssetPath *param_4)

{
  bool bVar1;
  UScriptStruct *pUVar2;
  FActorLocatorFragmentResolveParameter *pFVar3;
  FParameterTypeHandle local_res10 [8];
  undefined1 local_18 [16];
  
  local_res10[0].Handle = (uchar)param_1;
  pUVar2 = FActorLocatorFragmentResolveParameter::StaticStruct();
  pUVar2 = FParameterTypeHandle::Resolve(local_res10,pUVar2);
  if (pUVar2 == (UScriptStruct *)0x0) {
    bVar1 = `UE::UniversalObjectLocator::FResolveParameterBuffer::
            AddParameter<FActorLocatorFragmentResolveParameter,UWorld_*_const_&,FActorContainerID_const_,FTopLevelAssetPath_const_&>'
            ::__l3::<lambda_1>::operator()(local_18);
    if (!bVar1) {
      return (FActorLocatorFragmentResolveParameter *)0x0;
    }
  }
  pFVar3 = AddParameterImpl<FActorLocatorFragmentResolveParameter,UWorld_*_const_&,FActorContainerID_const_,FTopLevelAssetPath_const_&>
                     (this,1 << (local_res10[0].Handle & 0x1f),param_2,param_3,param_4);
  return pFVar3;
}

// AddParameter<FActorLocatorFragmentResolveParameter,UWorld_*,FActorContainerID_const_&,FTopLevelAssetPath_const_&> @ 146c497e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FActorLocatorFragmentResolveParameter * __thiscall
UE::UniversalObjectLocator::FResolveParameterBuffer::
AddParameter<FActorLocatorFragmentResolveParameter,UWorld_*,FActorContainerID_const_&,FTopLevelAssetPath_const_&>
          (FResolveParameterBuffer *this,
          TParameterTypeHandle<FActorLocatorFragmentResolveParameter> param_1,UWorld **param_2,
          FActorContainerID *param_3,FTopLevelAssetPath *param_4)

{
  bool bVar1;
  UScriptStruct *pUVar2;
  FActorLocatorFragmentResolveParameter *pFVar3;
  FParameterTypeHandle local_res10 [8];
  undefined1 local_18 [16];
  
  local_res10[0].Handle = (uchar)param_1;
  pUVar2 = FActorLocatorFragmentResolveParameter::StaticStruct();
  pUVar2 = FParameterTypeHandle::Resolve(local_res10,pUVar2);
  if (pUVar2 == (UScriptStruct *)0x0) {
    bVar1 = `UE::UniversalObjectLocator::FResolveParameterBuffer::
            AddParameter<FActorLocatorFragmentResolveParameter,UWorld_*,FActorContainerID_const_&,FTopLevelAssetPath_const_&>'
            ::__l3::<lambda_1>::operator()(local_18);
    if (!bVar1) {
      return (FActorLocatorFragmentResolveParameter *)0x0;
    }
  }
  pFVar3 = AddParameterImpl<FActorLocatorFragmentResolveParameter,UWorld_*,FActorContainerID_const_&,FTopLevelAssetPath_const_&>
                     (this,1 << (local_res10[0].Handle & 0x1f),param_2,param_3,param_4);
  return pFVar3;
}

// AddParameterImpl<FActorLocatorFragmentResolveParameter,UWorld_*_const_&,FActorContainerID_const_,FTopLevelAssetPath_const_&> @ 146c49870

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FActorLocatorFragmentResolveParameter * __thiscall
UE::UniversalObjectLocator::FResolveParameterBuffer::
AddParameterImpl<FActorLocatorFragmentResolveParameter,UWorld_*_const_&,FActorContainerID_const_,FTopLevelAssetPath_const_&>
          (FResolveParameterBuffer *this,uint param_1,UWorld **param_2,FActorContainerID *param_3,
          FTopLevelAssetPath *param_4)

{
  byte bVar1;
  uchar *puVar2;
  uchar *puVar3;
  UWorld *pUVar4;
  code *pcVar5;
  undefined8 uVar6;
  FName FVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  FActorLocatorFragmentResolveParameter *pFVar12;
  byte bVar13;
  byte *pbVar14;
  uchar *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  uchar *puVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ushort *puVar22;
  uint uVar23;
  uint uVar24;
  ulonglong uVar25;
  longlong lVar26;
  undefined8 local_res18;
  
  if (((this->AllParameters & param_1) != 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(AllParameters & ParameterBit) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Public\\UniversalObjectLocatorResolveParameterBuffer.inl"
                         ,0x1e,L"Parameter already exists!"), bVar9)) {
    pcVar5 = (code *)swi(3);
    pFVar12 = (FActorLocatorFragmentResolveParameter *)(*pcVar5)();
    return pFVar12;
  }
  this->AllParameters = this->AllParameters | param_1;
  uVar20 = 8;
  bVar13 = this->Num;
  uVar17 = (ulonglong)bVar13;
  uVar23 = param_1 - 1 & this->AllParameters;
  puVar2 = this->Memory;
  uVar16 = (ulonglong)uVar23 - ((ulonglong)(uVar23 >> 1) & 0x5555555555555555);
  uVar16 = (uVar16 >> 2 & 0x3333333333333333) + (uVar16 & 0x3333333333333333);
  uVar16 = ((uVar16 >> 4) + uVar16 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar25 = uVar16 >> 0x38;
  if (bVar13 != 0) {
    pbVar14 = puVar2 + 3;
    uVar21 = uVar20;
    do {
      bVar1 = *pbVar14;
      pbVar14 = pbVar14 + 4;
      uVar20 = (ulonglong)bVar1;
      if (bVar1 < uVar21) {
        uVar20 = uVar21;
      }
      uVar17 = uVar17 - 1;
      uVar21 = uVar20;
    } while (uVar17 != 0);
  }
  uVar11 = bVar13 + 1;
  bVar13 = (byte)(uVar16 >> 0x38);
  lVar18 = (ulonglong)uVar11 * 4;
  uVar24 = (uint)bVar13;
  uVar23 = 0;
  if (bVar13 != 0) {
    pbVar14 = puVar2 + 2;
    uVar16 = uVar25;
    do {
      lVar18 = (lVar18 + -1 + (ulonglong)pbVar14[1] & ~((ulonglong)pbVar14[1] - 1)) +
               (ulonglong)*pbVar14;
      uVar16 = uVar16 - 1;
      pbVar14 = pbVar14 + 4;
      uVar23 = uVar24;
    } while (uVar16 != 0);
  }
  uVar23 = uVar23 + 1;
  uVar16 = (lVar18 + 7U & 0xfffffffffffffff8) + 0x28;
  if ((ulonglong)uVar23 < (ulonglong)uVar11) {
    lVar18 = (ulonglong)uVar11 - (ulonglong)uVar23;
    pbVar14 = puVar2 + (ulonglong)uVar23 * 4 + -2;
    do {
      uVar16 = ((uVar16 - 1) + (ulonglong)pbVar14[1] & ~((ulonglong)pbVar14[1] - 1)) +
               (ulonglong)*pbVar14;
      lVar18 = lVar18 + -1;
      pbVar14 = pbVar14 + 4;
    } while (lVar18 != 0);
  }
  if ((0xff < uVar20) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("RequiredAlignment <= 0XFF",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Public\\UniversalObjectLocatorResolveParameterBuffer.inl"
                         ,0x55,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pFVar12 = (FActorLocatorFragmentResolveParameter *)(*pcVar5)();
    return pFVar12;
  }
  bVar9 = this->bCanFreeMemory;
  puVar3 = this->Memory;
  if ((((ulonglong)puVar3 & uVar20 - 1) == 0) && (uVar16 <= this->Capacity)) {
    bVar8 = false;
    puVar19 = puVar3;
  }
  else {
    uVar17 = (ulonglong)this->Capacity * 2;
    bVar8 = true;
    if (uVar17 < uVar16) {
      uVar17 = uVar16;
    }
    if ((0xffff < uVar17) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("RequiredCapacity <= std::numeric_limits<uint16>::max()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Public\\UniversalObjectLocatorResolveParameterBuffer.inl"
                            ,0x62,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      pFVar12 = (FActorLocatorFragmentResolveParameter *)(*pcVar5)();
      return pFVar12;
    }
    uVar17 = (ulonglong)this->Capacity * 2;
    if (uVar17 < uVar16) {
      uVar17 = uVar16 & 0xffff;
    }
    this->Capacity = (ushort)uVar17;
    puVar19 = FMemory::Malloc(uVar17 & 0xffff,(uint)uVar20);
    this->Memory = puVar19;
    this->bCanFreeMemory = true;
  }
  puVar19 = puVar19 + uVar16;
  bVar13 = this->Num + 1;
  this->Num = bVar13;
  lVar18 = (ulonglong)bVar13 - 1;
  if ((longlong)uVar25 < lVar18) {
    lVar26 = lVar18 - uVar25;
    puVar22 = (ushort *)(puVar2 + lVar18 * 4 + -4);
    do {
      puVar19 = (uchar *)(-(ulonglong)*(byte *)((longlong)puVar22 + 3) &
                         (longlong)puVar19 - (ulonglong)(byte)puVar22[1]);
      memmove(puVar19,puVar3 + *puVar22,(ulonglong)(byte)puVar22[1]);
      *puVar22 = (short)puVar19 - *(short *)&this->Memory;
      lVar26 = lVar26 + -1;
      puVar22 = puVar22 + -2;
    } while (lVar26 != 0);
  }
  puVar19 = (uchar *)((ulonglong)(puVar19 + -0x28) & 0xfffffffffffffff8);
  pUVar4 = *param_2;
  *(UWorld **)puVar19 = pUVar4;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UWorld *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar4);
  }
  uVar20 = (ulonglong)uVar24;
  uVar6 = *(undefined8 *)&(param_3->Guid).C;
  *(undefined8 *)(puVar19 + 8) = *(undefined8 *)&param_3->Guid;
  *(undefined8 *)(puVar19 + 0x10) = uVar6;
  FVar7 = param_4->AssetName;
  *(FName *)(puVar19 + 0x18) = param_4->PackageName;
  *(FName *)(puVar19 + 0x20) = FVar7;
  local_res18 = CONCAT62(0x828,(short)puVar19 - *(short *)&this->Memory);
  while (uVar20 = uVar20 - 1, -1 < (longlong)uVar20) {
    puVar19 = (uchar *)(-(ulonglong)puVar2[uVar20 * 4 + 3] &
                       (longlong)puVar19 - (ulonglong)puVar2[uVar20 * 4 + 2]);
    memmove(puVar19,puVar3 + *(ushort *)(puVar2 + uVar20 * 4),(ulonglong)puVar2[uVar20 * 4 + 2]);
    *(short *)(puVar2 + uVar20 * 4) = (short)puVar19 - *(short *)&this->Memory;
  }
  if ((puVar19 < this->Memory + (ulonglong)this->Num * 4) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParameterPtr >= Memory + sizeof(FResolveParameterHeader)*Num",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Public\\UniversalObjectLocatorResolveParameterBuffer.inl"
                          ,0x9d,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    pFVar12 = (FActorLocatorFragmentResolveParameter *)(*pcVar5)();
    return pFVar12;
  }
  puVar19 = this->Memory;
  lVar18 = (ulonglong)this->Num - 1;
  if ((longlong)uVar25 < lVar18) {
    puVar15 = puVar19 + lVar18 * 4;
    do {
      lVar18 = lVar18 + -1;
      *(undefined4 *)puVar15 =
           *(undefined4 *)(puVar15 + (longlong)(puVar2 + (-4 - (longlong)puVar19)));
      puVar15 = puVar15 + -4;
    } while ((longlong)uVar25 < lVar18);
  }
  *(undefined4 *)(puVar19 + (ulonglong)uVar24 * 4) = (undefined4)local_res18;
  if ((this->Memory != puVar3) && (lVar18 = uVar25 - 1, -1 < lVar18)) {
    puVar15 = puVar19 + lVar18 * 4;
    do {
      lVar18 = lVar18 + -1;
      *(undefined4 *)puVar15 = *(undefined4 *)(puVar15 + ((longlong)puVar2 - (longlong)puVar19));
      puVar15 = puVar15 + -4;
    } while (-1 < lVar18);
  }
  if (((bVar8) && (puVar3 != (uchar *)0x0)) && (bVar9 != false)) {
    FMemory::Free(puVar3);
  }
  return (FActorLocatorFragmentResolveParameter *)(this->Memory + *(ushort *)(puVar19 + uVar25 * 4))
  ;
}

// AddParameterImpl<FActorLocatorFragmentResolveParameter,UWorld_*,FActorContainerID_const_&,FTopLevelAssetPath_const_&> @ 146c49cb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FActorLocatorFragmentResolveParameter * __thiscall
UE::UniversalObjectLocator::FResolveParameterBuffer::
AddParameterImpl<FActorLocatorFragmentResolveParameter,UWorld_*,FActorContainerID_const_&,FTopLevelAssetPath_const_&>
          (FResolveParameterBuffer *this,uint param_1,UWorld **param_2,FActorContainerID *param_3,
          FTopLevelAssetPath *param_4)

{
  byte bVar1;
  uchar *puVar2;
  uchar *puVar3;
  UWorld *pUVar4;
  code *pcVar5;
  undefined8 uVar6;
  FName FVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  FActorLocatorFragmentResolveParameter *pFVar12;
  byte bVar13;
  byte *pbVar14;
  uchar *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  uchar *puVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ushort *puVar22;
  uint uVar23;
  uint uVar24;
  ulonglong uVar25;
  longlong lVar26;
  undefined8 local_res18;
  
  if (((this->AllParameters & param_1) != 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(AllParameters & ParameterBit) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Public\\UniversalObjectLocatorResolveParameterBuffer.inl"
                         ,0x1e,L"Parameter already exists!"), bVar9)) {
    pcVar5 = (code *)swi(3);
    pFVar12 = (FActorLocatorFragmentResolveParameter *)(*pcVar5)();
    return pFVar12;
  }
  this->AllParameters = this->AllParameters | param_1;
  uVar20 = 8;
  bVar13 = this->Num;
  uVar17 = (ulonglong)bVar13;
  uVar23 = param_1 - 1 & this->AllParameters;
  puVar2 = this->Memory;
  uVar16 = (ulonglong)uVar23 - ((ulonglong)(uVar23 >> 1) & 0x5555555555555555);
  uVar16 = (uVar16 >> 2 & 0x3333333333333333) + (uVar16 & 0x3333333333333333);
  uVar16 = ((uVar16 >> 4) + uVar16 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar25 = uVar16 >> 0x38;
  if (bVar13 != 0) {
    pbVar14 = puVar2 + 3;
    uVar21 = uVar20;
    do {
      bVar1 = *pbVar14;
      pbVar14 = pbVar14 + 4;
      uVar20 = (ulonglong)bVar1;
      if (bVar1 < uVar21) {
        uVar20 = uVar21;
      }
      uVar17 = uVar17 - 1;
      uVar21 = uVar20;
    } while (uVar17 != 0);
  }
  uVar11 = bVar13 + 1;
  bVar13 = (byte)(uVar16 >> 0x38);
  lVar18 = (ulonglong)uVar11 * 4;
  uVar24 = (uint)bVar13;
  uVar23 = 0;
  if (bVar13 != 0) {
    pbVar14 = puVar2 + 2;
    uVar16 = uVar25;
    do {
      lVar18 = (lVar18 + -1 + (ulonglong)pbVar14[1] & ~((ulonglong)pbVar14[1] - 1)) +
               (ulonglong)*pbVar14;
      uVar16 = uVar16 - 1;
      pbVar14 = pbVar14 + 4;
      uVar23 = uVar24;
    } while (uVar16 != 0);
  }
  uVar23 = uVar23 + 1;
  uVar16 = (lVar18 + 7U & 0xfffffffffffffff8) + 0x28;
  if ((ulonglong)uVar23 < (ulonglong)uVar11) {
    lVar18 = (ulonglong)uVar11 - (ulonglong)uVar23;
    pbVar14 = puVar2 + (ulonglong)uVar23 * 4 + -2;
    do {
      uVar16 = ((uVar16 - 1) + (ulonglong)pbVar14[1] & ~((ulonglong)pbVar14[1] - 1)) +
               (ulonglong)*pbVar14;
      lVar18 = lVar18 + -1;
      pbVar14 = pbVar14 + 4;
    } while (lVar18 != 0);
  }
  if ((0xff < uVar20) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("RequiredAlignment <= 0XFF",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Public\\UniversalObjectLocatorResolveParameterBuffer.inl"
                         ,0x55,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pFVar12 = (FActorLocatorFragmentResolveParameter *)(*pcVar5)();
    return pFVar12;
  }
  bVar9 = this->bCanFreeMemory;
  puVar3 = this->Memory;
  if ((((ulonglong)puVar3 & uVar20 - 1) == 0) && (uVar16 <= this->Capacity)) {
    bVar8 = false;
    puVar19 = puVar3;
  }
  else {
    uVar17 = (ulonglong)this->Capacity * 2;
    bVar8 = true;
    if (uVar17 < uVar16) {
      uVar17 = uVar16;
    }
    if ((0xffff < uVar17) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("RequiredCapacity <= std::numeric_limits<uint16>::max()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Public\\UniversalObjectLocatorResolveParameterBuffer.inl"
                            ,0x62,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      pFVar12 = (FActorLocatorFragmentResolveParameter *)(*pcVar5)();
      return pFVar12;
    }
    uVar17 = (ulonglong)this->Capacity * 2;
    if (uVar17 < uVar16) {
      uVar17 = uVar16 & 0xffff;
    }
    this->Capacity = (ushort)uVar17;
    puVar19 = FMemory::Malloc(uVar17 & 0xffff,(uint)uVar20);
    this->Memory = puVar19;
    this->bCanFreeMemory = true;
  }
  puVar19 = puVar19 + uVar16;
  bVar13 = this->Num + 1;
  this->Num = bVar13;
  lVar18 = (ulonglong)bVar13 - 1;
  if ((longlong)uVar25 < lVar18) {
    lVar26 = lVar18 - uVar25;
    puVar22 = (ushort *)(puVar2 + lVar18 * 4 + -4);
    do {
      puVar19 = (uchar *)(-(ulonglong)*(byte *)((longlong)puVar22 + 3) &
                         (longlong)puVar19 - (ulonglong)(byte)puVar22[1]);
      memmove(puVar19,puVar3 + *puVar22,(ulonglong)(byte)puVar22[1]);
      *puVar22 = (short)puVar19 - *(short *)&this->Memory;
      lVar26 = lVar26 + -1;
      puVar22 = puVar22 + -2;
    } while (lVar26 != 0);
  }
  puVar19 = (uchar *)((ulonglong)(puVar19 + -0x28) & 0xfffffffffffffff8);
  pUVar4 = *param_2;
  *(UWorld **)puVar19 = pUVar4;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UWorld *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar4);
  }
  uVar20 = (ulonglong)uVar24;
  uVar6 = *(undefined8 *)&(param_3->Guid).C;
  *(undefined8 *)(puVar19 + 8) = *(undefined8 *)&param_3->Guid;
  *(undefined8 *)(puVar19 + 0x10) = uVar6;
  FVar7 = param_4->AssetName;
  *(FName *)(puVar19 + 0x18) = param_4->PackageName;
  *(FName *)(puVar19 + 0x20) = FVar7;
  local_res18 = CONCAT62(0x828,(short)puVar19 - *(short *)&this->Memory);
  while (uVar20 = uVar20 - 1, -1 < (longlong)uVar20) {
    puVar19 = (uchar *)(-(ulonglong)puVar2[uVar20 * 4 + 3] &
                       (longlong)puVar19 - (ulonglong)puVar2[uVar20 * 4 + 2]);
    memmove(puVar19,puVar3 + *(ushort *)(puVar2 + uVar20 * 4),(ulonglong)puVar2[uVar20 * 4 + 2]);
    *(short *)(puVar2 + uVar20 * 4) = (short)puVar19 - *(short *)&this->Memory;
  }
  if ((puVar19 < this->Memory + (ulonglong)this->Num * 4) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParameterPtr >= Memory + sizeof(FResolveParameterHeader)*Num",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Public\\UniversalObjectLocatorResolveParameterBuffer.inl"
                          ,0x9d,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    pFVar12 = (FActorLocatorFragmentResolveParameter *)(*pcVar5)();
    return pFVar12;
  }
  puVar19 = this->Memory;
  lVar18 = (ulonglong)this->Num - 1;
  if ((longlong)uVar25 < lVar18) {
    puVar15 = puVar19 + lVar18 * 4;
    do {
      lVar18 = lVar18 + -1;
      *(undefined4 *)puVar15 =
           *(undefined4 *)(puVar15 + (longlong)(puVar2 + (-4 - (longlong)puVar19)));
      puVar15 = puVar15 + -4;
    } while ((longlong)uVar25 < lVar18);
  }
  *(undefined4 *)(puVar19 + (ulonglong)uVar24 * 4) = (undefined4)local_res18;
  if ((this->Memory != puVar3) && (lVar18 = uVar25 - 1, -1 < lVar18)) {
    puVar15 = puVar19 + lVar18 * 4;
    do {
      lVar18 = lVar18 + -1;
      *(undefined4 *)puVar15 = *(undefined4 *)(puVar15 + ((longlong)puVar2 - (longlong)puVar19));
      puVar15 = puVar15 + -4;
    } while (-1 < lVar18);
  }
  if (((bVar8) && (puVar3 != (uchar *)0x0)) && (bVar9 != false)) {
    FMemory::Free(puVar3);
  }
  return (FActorLocatorFragmentResolveParameter *)(this->Memory + *(ushort *)(puVar19 + uVar25 * 4))
  ;
}

// operator() @ 1504fad50

bool __thiscall
`UE::UniversalObjectLocator::FResolveParameterBuffer::
AddParameter<FActorLocatorFragmentResolveParameter,UWorld_*_const_&,FActorContainerID_const_,FTopLevelAssetPath_const_&>'
::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5253330681928351759>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5253330681928351759>,
                       &`public:___cdecl_`public:_struct_FActorLocatorFragmentResolveParameter*___ptr64___cdecl_UE::UniversalObjectLocator::FResolveParameterBuffer::AddParameter<FActorLocatorFragmentResolveParameter,UWorld*___ptr64_const&___ptr64,FActorContainerID_const_,FTopLevelAssetPath_const&___ptr64>(UE::UniversalObjectLocator::TParameterTypeHandle<FActorLocatorFragmentResolveParameter>,UWorld*___ptr64_const&___ptr64,FActorContainerID_const&&___ptr64,FTopLevelAssetPath_const&___ptr64)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504fad90

bool __thiscall
`UE::UniversalObjectLocator::FResolveParameterBuffer::
AddParameter<FActorLocatorFragmentResolveParameter,UWorld_*,FActorContainerID_const_&,FTopLevelAssetPath_const_&>'
::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5253330681928351759>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5253330681928351759>,
                       &`public:___cdecl_`public:_struct_FActorLocatorFragmentResolveParameter*___ptr64___cdecl_UE::UniversalObjectLocator::FResolveParameterBuffer::AddParameter<FActorLocatorFragmentResolveParameter,UWorld*___ptr64,FActorContainerID_const&___ptr64,FTopLevelAssetPath_const&___ptr64>(UE::UniversalObjectLocator::TParameterTypeHandle<FActorLocatorFragmentResolveParameter>,UWorld*___ptr64&&___ptr64,FActorContainerID_const&___ptr64,FTopLevelAssetPath_const&___ptr64)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

