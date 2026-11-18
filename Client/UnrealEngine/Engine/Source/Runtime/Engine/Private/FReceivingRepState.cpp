// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FReceivingRepState @ 1484bbd80

FReceivingRepState * __thiscall
FReceivingRepState::FReceivingRepState(FReceivingRepState *this,FRepStateStaticBuffer *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  (this->StaticBuffer).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticBuffer).Buffer.AllocatorInstance.Data = (param_1->Buffer).AllocatorInstance.Data;
  (param_1->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticBuffer).Buffer.ArrayNum = (param_1->Buffer).ArrayNum;
  (this->StaticBuffer).Buffer.ArrayMax = (param_1->Buffer).ArrayMax;
  (param_1->Buffer).ArrayNum = 0;
  (param_1->Buffer).ArrayMax = 0;
  (this->StaticBuffer).RepLayout.Object = (param_1->RepLayout).Object;
  pTVar1 = (param_1->RepLayout).SharedReferenceCount.ReferenceController;
  (this->StaticBuffer).RepLayout.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(undefined8 *)&this->GuidReferencesMap = 0;
  *(undefined8 *)&(this->GuidReferencesMap).field_0x8 = 0;
  *(undefined8 *)&(this->GuidReferencesMap).field_0x20 = 0;
  *(undefined4 *)&(this->GuidReferencesMap).field_0x28 = 0;
  *(undefined4 *)&(this->GuidReferencesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->GuidReferencesMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GuidReferencesMap).field_0x34 = 0;
  *(undefined8 *)&(this->GuidReferencesMap).field_0x40 = 0;
  *(undefined4 *)&(this->GuidReferencesMap).field_0x48 = 0;
  (this->RepNotifies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RepNotifies).ArrayNum = 0;
  (this->RepNotifies).ArrayMax = 0;
  *(undefined8 *)&this->RepNotifyMetaData = 0;
  *(undefined8 *)&(this->RepNotifyMetaData).field_0x8 = 0;
  *(undefined8 *)&(this->RepNotifyMetaData).field_0x20 = 0;
  *(undefined4 *)&(this->RepNotifyMetaData).field_0x28 = 0;
  *(undefined4 *)&(this->RepNotifyMetaData).field_0x2c = 0x80;
  *(undefined4 *)&(this->RepNotifyMetaData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RepNotifyMetaData).field_0x34 = 0;
  *(undefined8 *)&(this->RepNotifyMetaData).field_0x40 = 0;
  *(undefined4 *)&(this->RepNotifyMetaData).field_0x48 = 0;
  return this;
}

// CountBytes @ 1484cc960

void __thiscall FReceivingRepState::CountBytes(FReceivingRepState *this,FArchive *param_1)

{
  TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
  *this_00;
  undefined1 *puVar1;
  TMap<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>
  *this_01;
  ulonglong uVar2;
  code *pcVar3;
  TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
  *pTVar4;
  TMap<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  uint local_1c0;
  undefined4 uStack_18c;
  FScopeMarker local_178;
  TMap<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>
  *local_150;
  int iStack_148;
  uint uStack_144;
  undefined1 *local_140;
  undefined4 uStack_138;
  int iStack_134;
  int local_130;
  int iStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
  *local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_118;
  undefined8 uStack_f8;
  TMap<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>
  *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80 [2];
  undefined4 local_54;
  
  ::FString::FString(&local_c0,"FReceivingRepState::CountBytes");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::FScopeMarker(&local_178,param_1,&local_c0)
  ;
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_178);
  FRepStateStaticBuffer::CountBytes(&this->StaticBuffer,param_1);
  ::FString::FString(&local_b0,"StaticBuffer");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_178,&local_b0);
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_178);
  this_00 = &this->GuidReferencesMap;
  TSet<TTuple<int,FGuidReferences>,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>,FDefaultSetAllocator>
  ::CountBytes((TSet<TTuple<int,FGuidReferences>,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>,FDefaultSetAllocator>
                *)this_00,param_1);
  iVar11 = *(int *)&(this->GuidReferencesMap).field_0x28;
  puVar1 = &(this->GuidReferencesMap).field_0x10;
  iVar13 = 0;
  local_1c0 = 1;
  iVar15 = 0;
  iVar10 = 0;
  uVar7 = 1;
  iVar8 = 0;
  if (iVar11 != 0) {
    puVar16 = *(uint **)&(this->GuidReferencesMap).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar7 = *puVar16;
    iVar15 = 0;
    while (uVar7 == 0) {
      lVar9 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) {
        iVar10 = *(int *)&(this->GuidReferencesMap).field_0x28;
        uVar7 = 1;
        iVar8 = iVar11;
        goto LAB_1484ccaa8;
      }
      uVar7 = puVar16[lVar9 + 1];
    }
    iVar10 = *(int *)&(this->GuidReferencesMap).field_0x28;
    uVar7 = -uVar7 & uVar7;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    iVar8 = iVar15 + -1 + local_res20;
    if (iVar10 < iVar8) {
      iVar8 = iVar11;
    }
  }
LAB_1484ccaa8:
  uVar12 = *(uint *)&(this->GuidReferencesMap).field_0x28;
  uVar17 = uVar12 & 0xffffffe0;
  TStack_118._padding_ = CONCAT44(uVar7,iVar13);
  TStack_118.CurrentBitIndex = iVar8;
  TStack_118.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar12 >> 5;
  TStack_118._28_4_ = local_54;
  TStack_118.BaseBitIndex = iVar15;
  uStack_f8 = CONCAT44(uStack_18c,
                       *(int *)&(this->GuidReferencesMap).field_0x8 -
                       *(int *)&(this->GuidReferencesMap).field_0x34);
  local_120 = this_00;
  TStack_118.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar10 < (int)uVar12)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar7 = *(uint *)&(this->GuidReferencesMap).field_0x28;
  if (uVar12 != uVar7) {
    puVar14 = *(undefined1 **)&(this->GuidReferencesMap).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar11 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar11;
      uVar17 = uVar17 + 0x20;
      iVar11 = iVar11 + 1;
      uVar12 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1484ccbd0;
      uVar12 = *(uint *)(puVar14 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar12 = (int)lVar9 + -1 + uVar17;
    if ((int)uVar7 < (int)uVar12) {
      uVar12 = uVar7;
    }
  }
LAB_1484ccbd0:
  while( true ) {
    pTVar4 = local_120;
    if (*(int *)(&local_120->field_0x0 + 8) - *(int *)(&local_120->field_0x0 + 0x34) !=
        (int)uStack_f8) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,FGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_118.CurrentBitIndex == uVar12) &&
        (TStack_118.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar4 == this_00)
       ) break;
    FGuidReferences::CountBytes
              ((FGuidReferences *)
               ((longlong)TStack_118.CurrentBitIndex * 0xe0 + *(longlong *)&pTVar4->field_0x0 + 8),
               param_1);
    TStack_118.UnvisitedBitMask = TStack_118.UnvisitedBitMask & ~TStack_118._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_118);
  }
  ::FString::FString(&local_a0,"GuidReferencesMap");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_178,&local_a0);
  iVar11 = 0;
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_178);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(this->RepNotifies).ArrayNum << 3,
             (longlong)(this->RepNotifies).ArrayMax << 3);
  ::FString::FString(&local_90,"RepNotifies");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_178,&local_90);
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_178);
  this_01 = &this->RepNotifyMetaData;
  TSet<TTuple<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::CountBytes((TSet<TTuple<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)this_01,param_1);
  puVar1 = &(this->RepNotifyMetaData).field_0x10;
  iVar10 = *(int *)&(this->RepNotifyMetaData).field_0x28;
  local_130 = 0;
  iStack_134 = 0;
  if (iVar10 != 0) {
    puVar16 = *(uint **)&(this->RepNotifyMetaData).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar7 = *puVar16;
    while (uVar7 == 0) {
      lVar9 = (longlong)iVar11;
      local_130 = local_130 + 0x20;
      iVar11 = iVar11 + 1;
      iStack_134 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1484ccd61;
      uVar7 = puVar16[lVar9 + 1];
    }
    local_1c0 = -uVar7 & uVar7;
    uVar2 = (ulonglong)local_1c0 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iStack_134 = local_130 + -1 + (int)lVar9;
    if (iVar10 < iStack_134) {
      iStack_134 = iVar10;
    }
  }
LAB_1484ccd61:
  uStack_144 = local_1c0;
  iStack_128 = *(int *)&(this->RepNotifyMetaData).field_0x8 -
               *(int *)&(this->RepNotifyMetaData).field_0x34;
  uVar7 = *(uint *)&(this->RepNotifyMetaData).field_0x28;
  uStack_138 = 0xffffffff;
  uVar12 = uVar7 & 0xffffffe0;
  TStack_e8._padding_ = CONCAT44(local_1c0,iVar11);
  TStack_e8.CurrentBitIndex = iStack_134;
  TStack_e8.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar7 >> 5;
  TStack_e8._28_4_ = iVar8;
  TStack_e8.BaseBitIndex = local_130;
  uStack_c8 = CONCAT44(uStack_124,iStack_128);
  local_150 = this_01;
  iStack_148 = iVar11;
  local_140 = puVar1;
  iStack_12c = iVar8;
  local_f0 = this_01;
  TStack_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar7 < 0) || (iVar10 < (int)uVar7)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar17 = *(uint *)&(this->RepNotifyMetaData).field_0x28;
  if (uVar7 != uVar17) {
    puVar14 = *(undefined1 **)&(this->RepNotifyMetaData).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar7 = -1 << ((byte)uVar7 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar7 == 0) {
      lVar9 = (longlong)iVar13;
      uVar12 = uVar12 + 0x20;
      iVar13 = iVar13 + 1;
      uVar7 = uVar17;
      if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
      goto LAB_1484cce60;
      uVar7 = *(uint *)(puVar14 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar7 & uVar7) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar7 = (int)lVar9 + -1 + uVar12;
    if ((int)uVar17 < (int)uVar7) {
      uVar7 = uVar17;
    }
  }
LAB_1484cce60:
  while( true ) {
    pTVar5 = local_f0;
    if (*(int *)(&local_f0->field_0x0 + 8) - *(int *)(&local_f0->field_0x0 + 0x34) != (int)uStack_c8
       ) {
      `TSparseArray<TSparseSetElement<TTuple<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_e8.CurrentBitIndex == uVar7) &&
        (TStack_e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar5 == this_01))
    break;
    lVar9 = *(longlong *)&pTVar5->field_0x0;
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)*(int *)((longlong)TStack_e8.CurrentBitIndex * 0x20 + 0x10 + lVar9)
               ,(longlong)*(int *)((longlong)TStack_e8.CurrentBitIndex * 0x20 + 0x14 + lVar9));
    TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
  }
  ::FString::FString(local_80,"RepNotifyMetaData");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_178,local_80);
  if (local_80[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80[0].Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::~FScopeMarker(&local_178);
  return;
}

