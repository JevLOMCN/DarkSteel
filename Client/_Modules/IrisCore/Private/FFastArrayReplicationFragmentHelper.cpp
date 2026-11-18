// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 4

// GetFastArrayStructItemArrayMemberIndex @ 14423c070

uint __cdecl
UE::Net::Private::FFastArrayReplicationFragmentHelper::GetFastArrayStructItemArrayMemberIndex
          (FReplicationStateDescriptor *param_1)

{
  FNetSerializer *pFVar1;
  uint uVar2;
  
  uVar2 = 0;
  pFVar1 = param_1->MemberSerializerDescriptors->Serializer;
  while (pFVar1 != &FArrayPropertyNetSerializerNetSerializerInfo::Serializer) {
    uVar2 = uVar2 + 1;
    pFVar1 = param_1->MemberSerializerDescriptors[uVar2].Serializer;
  }
  return uVar2;
}

// InternalApplyArrayElement @ 144242200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Net::Private::FFastArrayReplicationFragmentHelper::InternalApplyArrayElement
          (FReplicationStateDescriptor *param_1,void *param_2,void *param_3)

{
  ushort uVar1;
  FReplicationStateMemberSerializerDescriptor *pFVar2;
  FNetSerializer *pFVar3;
  longlong lVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  ushort *puVar8;
  FProperty **ppFVar9;
  undefined1 auStack_408 [32];
  FNetApplyArgs FStack_3e8;
  FNetRefHandle_u_0 FStack_3b8;
  FName FStack_3b0;
  undefined8 auStack_3a0 [95];
  uint uStack_a8;
  FNetBitStreamReader *pFStack_a0;
  FNetBitStreamWriter *pFStack_98;
  FNetTraceCollector *pFStack_90;
  FInternalNetSerializationContext *pFStack_88;
  FNetExportContext *pFStack_80;
  FNetStatsContext *pFStack_78;
  FNetBitArrayView *pFStack_70;
  INetBlobReceiver *pIStack_68;
  uint uStack_60;
  int iStack_5c;
  uint uStack_58;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStack_408;
  uVar7 = 0;
  if ((param_1->Traits & (IsStructWithCustomSerializer|IsDerivedFromStructWithCustomSerializer)) !=
      None) {
    pFVar2 = param_1->MemberSerializerDescriptors;
    uVar7 = 1;
    pFVar3 = pFVar2->Serializer;
    if ((pFVar3->Traits & HasApply) == None) {
      UScriptStruct::CopyScriptStruct(param_1->BaseStruct,param_2,param_3,1);
    }
    else {
      FStack_3b8.Value = 0;
      puVar5 = auStack_3a0;
      FStack_3b0.ComparisonIndex.Value = 0;
      FStack_3b0.Number = 0;
      lVar4 = 0x20;
      do {
        *puVar5 = 0;
        puVar5 = puVar5 + 3;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      FStack_3e8._padding_ = (longlong)pFVar2->SerializerConfig;
      uStack_58 = uStack_58 & 0xfffffffc;
      pFStack_98 = (FNetBitStreamWriter *)0x0;
      pFStack_90 = (FNetTraceCollector *)0x0;
      pFStack_88 = (FInternalNetSerializationContext *)0x0;
      pFStack_80 = (FNetExportContext *)0x0;
      pFStack_78 = (FNetStatsContext *)0x0;
      pFStack_70 = (FNetBitArrayView *)0x0;
      uStack_a8 = 0;
      pFStack_a0 = (FNetBitStreamReader *)0x0;
      pIStack_68 = (INetBlobReceiver *)0x0;
      uStack_60 = 0;
      iStack_5c = 0xffffffff;
      FStack_3e8._padding_ = 0;
      FStack_3e8._padding_._0_4_ = 0;
      FStack_3e8.Source = (ulong64)param_3;
      FStack_3e8.Target = (ulong64)param_2;
      (*pFVar3->Apply)((FNetSerializationContext *)&FStack_3b8._s_0,&FStack_3e8);
    }
  }
  uVar1 = param_1->MemberCount;
  if ((uint)uVar7 < (uint)uVar1) {
    ppFVar9 = param_1->MemberProperties + uVar7;
    puVar8 = &param_1->MemberPropertyDescriptors[uVar7].ArrayIndex;
    do {
      lVar4 = (longlong)(int)((uint)*puVar8 * (*ppFVar9)->ElementSize + (*ppFVar9)->Offset_Internal)
      ;
      InternalApplyPropertyValue
                (param_1,(uint)uVar7,(void *)(lVar4 + (longlong)param_2),
                 (void *)(lVar4 + (longlong)param_3));
      uVar6 = (uint)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      ppFVar9 = ppFVar9 + 1;
      puVar8 = puVar8 + 8;
    } while (uVar6 < uVar1);
  }
  return;
}

// InternalCompareArrayElement @ 144242220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Net::Private::FFastArrayReplicationFragmentHelper::InternalCompareArrayElement
          (FReplicationStateDescriptor *param_1,void *param_2,void *param_3)

{
  ushort uVar1;
  FReplicationStateMemberDescriptor *pFVar2;
  FReplicationStateMemberPropertyDescriptor *pFVar3;
  FReplicationStateMemberSerializerDescriptor *pFVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ushort *puVar11;
  FProperty **ppFVar12;
  undefined1 auStack_408 [32];
  FNetIsEqualArgs FStack_3e8;
  FNetRefHandle_u_0 FStack_3b8;
  undefined8 uStack_3b0;
  undefined8 auStack_3a0 [95];
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint uStack_58;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStack_408;
  ppFVar12 = param_1->MemberProperties;
  uVar10 = 0;
  pFVar2 = param_1->MemberDescriptors;
  pFVar3 = param_1->MemberPropertyDescriptors;
  if ((param_1->Traits & IsDerivedFromStructWithCustomSerializer) != None) {
    pFVar4 = param_1->MemberSerializerDescriptors;
    uVar10 = 1;
    puVar7 = auStack_3a0;
    FStack_3b8.Value = 0;
    uStack_3b0 = 0;
    lVar6 = 0x20;
    do {
      *puVar7 = 0;
      puVar7 = puVar7 + 3;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    uVar8 = (ulonglong)pFVar2->ExternalMemberOffset;
    FStack_3e8._padding_ = (longlong)pFVar4->SerializerConfig;
    uStack_58 = uStack_58 & 0xfffffffc;
    FStack_3e8.Source0 = uVar8 + (longlong)param_2;
    uStack_a8 = 0;
    FStack_3e8.Source1 = uVar8 + (longlong)param_3;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_5c = 0xffffffff;
    FStack_3e8._padding_ = 0;
    FStack_3e8._padding_._0_4_ = 0;
    FStack_3e8.bStateIsQuantized = false;
    bVar5 = (*pFVar4->Serializer->IsEqual)((FNetSerializationContext *)&FStack_3b8._s_0,&FStack_3e8)
    ;
    if (!bVar5) {
      return false;
    }
  }
  uVar1 = param_1->MemberCount;
  if ((uint)uVar10 < (uint)uVar1) {
    ppFVar12 = ppFVar12 + uVar10;
    puVar11 = &pFVar3[uVar10].ArrayIndex;
    do {
      lVar6 = (longlong)
              (int)((uint)*puVar11 * (*ppFVar12)->ElementSize + (*ppFVar12)->Offset_Internal);
      bVar5 = InternalCompareMember
                        (param_1,(uint)uVar10,(void *)(lVar6 + (longlong)param_2),
                         (void *)(lVar6 + (longlong)param_3));
      if (!bVar5) {
        return false;
      }
      uVar9 = (uint)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
      ppFVar12 = ppFVar12 + 1;
      puVar11 = puVar11 + 8;
    } while (uVar9 < uVar1);
  }
  return true;
}

// InternalCopyArrayElement @ 144242240

void __cdecl
UE::Net::Private::FFastArrayReplicationFragmentHelper::InternalCopyArrayElement
          (FReplicationStateDescriptor *param_1,void *param_2,void *param_3)

{
  ushort uVar1;
  longlong lVar2;
  uint uVar3;
  ushort *puVar4;
  FProperty **ppFVar5;
  bool bVar6;
  
  bVar6 = (param_1->Traits & IsDerivedFromStructWithCustomSerializer) != None;
  if (bVar6) {
    UScriptStruct::CopyScriptStruct(param_1->BaseStruct,param_2,param_3,1);
  }
  uVar3 = (uint)bVar6;
  uVar1 = param_1->MemberCount;
  if (uVar3 < uVar1) {
    ppFVar5 = param_1->MemberProperties + uVar3;
    puVar4 = &param_1->MemberPropertyDescriptors[uVar3].ArrayIndex;
    do {
      lVar2 = (longlong)(int)((uint)*puVar4 * (*ppFVar5)->ElementSize + (*ppFVar5)->Offset_Internal)
      ;
      InternalCopyPropertyValue
                (param_1,uVar3,(void *)(lVar2 + (longlong)param_2),
                 (void *)(lVar2 + (longlong)param_3));
      uVar3 = uVar3 + 1;
      ppFVar5 = ppFVar5 + 1;
      puVar4 = puVar4 + 8;
    } while (uVar3 < uVar1);
  }
  return;
}

