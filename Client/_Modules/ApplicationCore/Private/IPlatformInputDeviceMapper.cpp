// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 23

// IPlatformInputDeviceMapper @ 1423c55a0

IPlatformInputDeviceMapper * __thiscall
IPlatformInputDeviceMapper::IPlatformInputDeviceMapper(IPlatformInputDeviceMapper *this)

{
  this->_padding_ = (longlong)&___7IPlatformInputDeviceMapper__6B_;
  *(undefined8 *)&this->MappedInputDevices = 0;
  *(undefined8 *)&(this->MappedInputDevices).field_0x8 = 0;
  *(undefined8 *)&(this->MappedInputDevices).field_0x20 = 0;
  *(undefined4 *)&(this->MappedInputDevices).field_0x28 = 0;
  *(undefined4 *)&(this->MappedInputDevices).field_0x2c = 0x80;
  *(undefined4 *)&(this->MappedInputDevices).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MappedInputDevices).field_0x34 = 0;
  *(undefined8 *)&(this->MappedInputDevices).field_0x40 = 0;
  *(undefined4 *)&(this->MappedInputDevices).field_0x48 = 0;
  this->LastPlatformUserId = -1;
  this->LastInputDeviceId = -1;
  (this->AllocatedPlatformUserIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllocatedPlatformUserIds).ArrayNum = 0;
  (this->AllocatedPlatformUserIds).ArrayMax = 0;
  TMulticastDelegateRegistration<void___cdecl(bool,int,int),FDefaultDelegateUserPolicy>::
  AddRaw<IPlatformInputDeviceMapper>
            ((TMulticastDelegateRegistration<void___cdecl(bool,int,int),FDefaultDelegateUserPolicy>
              *)&FCoreDelegates::OnUserLoginChangedEvent,
             (IPlatformInputDeviceMapper *)&stack0x00000008,(pmf_0498bb03)this);
  return this;
}

// ~IPlatformInputDeviceMapper @ 1423c7b80

void __thiscall
IPlatformInputDeviceMapper::~IPlatformInputDeviceMapper(IPlatformInputDeviceMapper *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7IPlatformInputDeviceMapper__6B_;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnUserLoginChangedEvent,this);
  pFVar1 = (this->AllocatedPlatformUserIds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->MappedInputDevices).field_0x48 = 0;
  pvVar2 = *(void **)&(this->MappedInputDevices).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FInputDeviceId,FPlatformInputDeviceState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FInputDeviceId,FPlatformInputDeviceState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FInputDeviceId,FPlatformInputDeviceState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MappedInputDevices);
  return;
}

// BindCoreDelegates @ 1423d1360

void __thiscall IPlatformInputDeviceMapper::BindCoreDelegates(IPlatformInputDeviceMapper *this)

{
  TMulticastDelegateRegistration<void___cdecl(bool,int,int),FDefaultDelegateUserPolicy>::
  AddRaw<IPlatformInputDeviceMapper>
            ((TMulticastDelegateRegistration<void___cdecl(bool,int,int),FDefaultDelegateUserPolicy>
              *)&FCoreDelegates::OnUserLoginChangedEvent,
             (IPlatformInputDeviceMapper *)&stack0x00000010,(pmf_0498bb03)this);
  return;
}

// Get @ 1423dc970

IPlatformInputDeviceMapper * __cdecl IPlatformInputDeviceMapper::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FGenericPlatformInputDeviceMapper *this;
  IPlatformInputDeviceMapper *pIVar3;
  
  if (StaticManager == (IPlatformInputDeviceMapper *)0x0) {
    this = ::operator_new(0x78);
    if (this == (FGenericPlatformInputDeviceMapper *)0x0) {
      StaticManager = (IPlatformInputDeviceMapper *)0x0;
    }
    else {
      StaticManager =
           (IPlatformInputDeviceMapper *)
           FGenericPlatformInputDeviceMapper::FGenericPlatformInputDeviceMapper(this,true,true);
      if ((FGenericPlatformInputDeviceMapper *)StaticManager !=
          (FGenericPlatformInputDeviceMapper *)0x0) {
        return StaticManager;
      }
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("StaticManager",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\GenericPlatform\\GenericPlatformInputDeviceMapper.cpp"
                       ,0x67,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (IPlatformInputDeviceMapper *)(*pcVar1)();
      return pIVar3;
    }
  }
  return StaticManager;
}

// GetAllActiveUsers @ 1423dcea0

int __thiscall
IPlatformInputDeviceMapper::GetAllActiveUsers
          (IPlatformInputDeviceMapper *this,
          TArray<FPlatformUserId,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined1 *puVar1;
  TMap<FInputDeviceId,FPlatformInputDeviceState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputDeviceId,FPlatformInputDeviceState,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TMap<FInputDeviceId,FPlatformInputDeviceState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputDeviceId,FPlatformInputDeviceState,0>_>
  *pTVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined8 local_c8;
  undefined4 local_c0;
  TMap<FInputDeviceId,FPlatformInputDeviceState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputDeviceId,FPlatformInputDeviceState,0>_>
  *local_b8;
  int iStack_b0;
  uint uStack_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int local_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  TMap<FInputDeviceId,FPlatformInputDeviceState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputDeviceId,FPlatformInputDeviceState,0>_>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  undefined4 local_3c;
  
  iVar10 = 0;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  iVar4 = *(int *)&(this->MappedInputDevices).field_0x28;
  puVar1 = &(this->MappedInputDevices).field_0x10;
  pTVar2 = &this->MappedInputDevices;
  uStack_ac = 1;
  local_98 = 0;
  iStack_9c = 0;
  if (iVar4 != 0) {
    puVar15 = *(uint **)&(this->MappedInputDevices).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar13 = *puVar15;
    while (uVar13 == 0) {
      lVar9 = (longlong)iVar10;
      local_98 = local_98 + 0x20;
      iVar10 = iVar10 + 1;
      iStack_9c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1423dcf6d;
      uVar13 = puVar15[lVar9 + 1];
    }
    uStack_ac = -uVar13 & uVar13;
    uVar3 = (ulonglong)uStack_ac * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iStack_9c = local_res10 + -1 + local_98;
    if (iVar4 < iStack_9c) {
      iStack_9c = iVar4;
    }
  }
LAB_1423dcf6d:
  uStack_94 = local_3c;
  iStack_90 = *(int *)&(this->MappedInputDevices).field_0x8 -
              *(int *)&(this->MappedInputDevices).field_0x34;
  uVar13 = *(uint *)&(this->MappedInputDevices).field_0x28;
  TStack_80._padding_ = CONCAT44(uStack_ac,iVar10);
  uStack_a0 = 0xffffffff;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_80.CurrentBitIndex = iStack_9c;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar13 >> 5;
  TStack_80._28_4_ = local_3c;
  TStack_80.BaseBitIndex = local_98;
  uStack_60 = CONCAT44(uStack_8c,iStack_90);
  local_b8 = pTVar2;
  iStack_b0 = iVar10;
  local_a8 = puVar1;
  local_88 = pTVar2;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    iVar10 = (*pcVar6)();
    return iVar10;
  }
  uVar5 = *(uint *)&(this->MappedInputDevices).field_0x28;
  if (uVar13 != uVar5) {
    puVar14 = *(undefined1 **)&(this->MappedInputDevices).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar11 * 4);
    while (uVar13 == 0) {
      lVar9 = (longlong)iVar11;
      uVar12 = uVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar13 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1423dd070;
      uVar13 = *(uint *)(puVar14 + lVar9 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar13 = (int)lVar9 + -1 + uVar12;
    if ((int)uVar5 < (int)uVar13) {
      uVar13 = uVar5;
    }
  }
LAB_1423dd070:
  while( true ) {
    pTVar7 = local_88;
    if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
      `TSparseArray<TSparseSetElement<TTuple<FInputDeviceId,FPlatformInputDeviceState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_80.CurrentBitIndex == uVar13) &&
        (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar2))
    break;
    lVar9 = *(longlong *)pTVar7;
    local_c8 = *(undefined8 *)(lVar9 + (longlong)TStack_80.CurrentBitIndex * 0x14);
    local_c0 = *(undefined4 *)(lVar9 + 8 + (longlong)TStack_80.CurrentBitIndex * 0x14);
    if ((int)((ulonglong)local_c8 >> 0x20) != -1) {
      TArray<FPlatformUserId,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FPlatformUserId_const_&>
                (param_1,(FPlatformUserId *)((longlong)&local_c8 + 4));
    }
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  }
  return param_1->ArrayNum;
}

// GetAllConnectedInputDevices @ 1423dd110

int __thiscall
IPlatformInputDeviceMapper::GetAllConnectedInputDevices
          (IPlatformInputDeviceMapper *this,
          TArray<FInputDeviceId,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined1 *puVar1;
  TMap<FInputDeviceId,FPlatformInputDeviceState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputDeviceId,FPlatformInputDeviceState,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TMap<FInputDeviceId,FPlatformInputDeviceState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputDeviceId,FPlatformInputDeviceState,0>_>
  *pTVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined8 local_c8;
  undefined4 local_c0;
  TMap<FInputDeviceId,FPlatformInputDeviceState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputDeviceId,FPlatformInputDeviceState,0>_>
  *local_b8;
  int iStack_b0;
  uint uStack_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int local_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  TMap<FInputDeviceId,FPlatformInputDeviceState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputDeviceId,FPlatformInputDeviceState,0>_>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  undefined4 local_3c;
  
  iVar10 = 0;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  iVar4 = *(int *)&(this->MappedInputDevices).field_0x28;
  puVar1 = &(this->MappedInputDevices).field_0x10;
  pTVar2 = &this->MappedInputDevices;
  uStack_ac = 1;
  local_98 = 0;
  iStack_9c = 0;
  if (iVar4 != 0) {
    puVar15 = *(uint **)&(this->MappedInputDevices).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar13 = *puVar15;
    while (uVar13 == 0) {
      lVar9 = (longlong)iVar10;
      local_98 = local_98 + 0x20;
      iVar10 = iVar10 + 1;
      iStack_9c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1423dd1dd;
      uVar13 = puVar15[lVar9 + 1];
    }
    uStack_ac = -uVar13 & uVar13;
    uVar3 = (ulonglong)uStack_ac * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iStack_9c = local_res10 + -1 + local_98;
    if (iVar4 < iStack_9c) {
      iStack_9c = iVar4;
    }
  }
LAB_1423dd1dd:
  uStack_94 = local_3c;
  iStack_90 = *(int *)&(this->MappedInputDevices).field_0x8 -
              *(int *)&(this->MappedInputDevices).field_0x34;
  uVar13 = *(uint *)&(this->MappedInputDevices).field_0x28;
  TStack_80._padding_ = CONCAT44(uStack_ac,iVar10);
  uStack_a0 = 0xffffffff;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_80.CurrentBitIndex = iStack_9c;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar13 >> 5;
  TStack_80._28_4_ = local_3c;
  TStack_80.BaseBitIndex = local_98;
  uStack_60 = CONCAT44(uStack_8c,iStack_90);
  local_b8 = pTVar2;
  iStack_b0 = iVar10;
  local_a8 = puVar1;
  local_88 = pTVar2;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    iVar10 = (*pcVar6)();
    return iVar10;
  }
  uVar5 = *(uint *)&(this->MappedInputDevices).field_0x28;
  if (uVar13 != uVar5) {
    puVar14 = *(undefined1 **)&(this->MappedInputDevices).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar11 * 4);
    while (uVar13 == 0) {
      lVar9 = (longlong)iVar11;
      uVar12 = uVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar13 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1423dd2e0;
      uVar13 = *(uint *)(puVar14 + lVar9 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar13 = (int)lVar9 + -1 + uVar12;
    if ((int)uVar5 < (int)uVar13) {
      uVar13 = uVar5;
    }
  }
LAB_1423dd2e0:
  while( true ) {
    pTVar7 = local_88;
    if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
      `TSparseArray<TSparseSetElement<TTuple<FInputDeviceId,FPlatformInputDeviceState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_80.CurrentBitIndex == uVar13) &&
        (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar2))
    break;
    lVar9 = *(longlong *)pTVar7;
    local_c8 = *(undefined8 *)(lVar9 + (longlong)TStack_80.CurrentBitIndex * 0x14);
    local_c0 = *(undefined4 *)(lVar9 + 8 + (longlong)TStack_80.CurrentBitIndex * 0x14);
    if ((char)local_c0 == '\x03') {
      TArray<FInputDeviceId,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FInputDeviceId_const_&>
                (param_1,(FInputDeviceId *)&local_c8);
    }
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  }
  return param_1->ArrayNum;
}

// GetAllConnectedInputDevicesForUser @ 1423dd370

int __thiscall
IPlatformInputDeviceMapper::GetAllConnectedInputDevicesForUser
          (IPlatformInputDeviceMapper *this,FPlatformUserId param_1,
          TArray<FInputDeviceId,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined1 *puVar1;
  TMap<FInputDeviceId,FPlatformInputDeviceState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputDeviceId,FPlatformInputDeviceState,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TMap<FInputDeviceId,FPlatformInputDeviceState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputDeviceId,FPlatformInputDeviceState,0>_>
  *pTVar7;
  bool bVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  undefined8 local_c8;
  undefined4 local_c0;
  TMap<FInputDeviceId,FPlatformInputDeviceState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputDeviceId,FPlatformInputDeviceState,0>_>
  *local_b8;
  int iStack_b0;
  uint uStack_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int local_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  TMap<FInputDeviceId,FPlatformInputDeviceState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputDeviceId,FPlatformInputDeviceState,0>_>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  undefined4 local_3c;
  
  iVar11 = 0;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  iVar4 = *(int *)&(this->MappedInputDevices).field_0x28;
  puVar1 = &(this->MappedInputDevices).field_0x10;
  pTVar2 = &this->MappedInputDevices;
  uStack_ac = 1;
  local_98 = 0;
  iStack_9c = 0;
  if (iVar4 != 0) {
    puVar14 = *(uint **)&(this->MappedInputDevices).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      local_98 = local_98 + 0x20;
      iVar11 = iVar11 + 1;
      iStack_9c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1423dd44d;
      uVar10 = puVar14[lVar9 + 1];
    }
    uStack_ac = -uVar10 & uVar10;
    uVar3 = (ulonglong)uStack_ac * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iStack_9c = (int)lVar9 + -1 + local_98;
    if (iVar4 < iStack_9c) {
      iStack_9c = iVar4;
    }
  }
LAB_1423dd44d:
  uStack_94 = local_3c;
  iStack_90 = *(int *)&(this->MappedInputDevices).field_0x8 -
              *(int *)&(this->MappedInputDevices).field_0x34;
  uVar10 = *(uint *)&(this->MappedInputDevices).field_0x28;
  uStack_a0 = 0xffffffff;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_80._padding_ = CONCAT44(uStack_ac,iVar11);
  TStack_80.CurrentBitIndex = iStack_9c;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar10 >> 5;
  TStack_80._28_4_ = local_3c;
  TStack_80.BaseBitIndex = local_98;
  uStack_60 = CONCAT44(uStack_8c,iStack_90);
  local_b8 = pTVar2;
  iStack_b0 = iVar11;
  local_a8 = puVar1;
  local_88 = pTVar2;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar4 < (int)uVar10)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    iVar11 = (*pcVar6)();
    return iVar11;
  }
  uVar5 = *(uint *)&(this->MappedInputDevices).field_0x28;
  if (uVar10 != uVar5) {
    puVar13 = *(undefined1 **)&(this->MappedInputDevices).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar12;
      uVar15 = uVar15 + 0x20;
      iVar12 = iVar12 + 1;
      uVar10 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1423dd550;
      uVar10 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar5 < (int)uVar10) {
      uVar10 = uVar5;
    }
  }
LAB_1423dd550:
  while( true ) {
    pTVar7 = local_88;
    if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
      `TSparseArray<TSparseSetElement<TTuple<FInputDeviceId,FPlatformInputDeviceState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_80.CurrentBitIndex == uVar10) &&
        (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar2))
    break;
    lVar9 = *(longlong *)pTVar7;
    local_c8 = *(undefined8 *)(lVar9 + (longlong)TStack_80.CurrentBitIndex * 0x14);
    local_c0 = *(undefined4 *)(lVar9 + 8 + (longlong)TStack_80.CurrentBitIndex * 0x14);
    if (((int)((ulonglong)local_c8 >> 0x20) == param_1.InternalId) && ((char)local_c0 == '\x03')) {
      TArray<FInputDeviceId,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FInputDeviceId_const_&>
                (param_2,(FInputDeviceId *)&local_c8);
    }
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  }
  return param_2->ArrayNum;
}

// GetAllInputDevices @ 1423dd5f0

int __thiscall
IPlatformInputDeviceMapper::GetAllInputDevices
          (IPlatformInputDeviceMapper *this,
          TArray<FInputDeviceId,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  
  iVar1 = TMapBase<FInputDeviceId,FPlatformInputDeviceState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputDeviceId,FPlatformInputDeviceState,0>_>
          ::GetKeys<TSizedDefaultAllocator<32>_>
                    ((TMapBase<FInputDeviceId,FPlatformInputDeviceState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputDeviceId,FPlatformInputDeviceState,0>_>
                      *)&this->MappedInputDevices,param_1);
  return iVar1;
}

// GetAllInputDevicesForUser @ 1423dd600

int __thiscall
IPlatformInputDeviceMapper::GetAllInputDevicesForUser
          (IPlatformInputDeviceMapper *this,FPlatformUserId param_1,
          TArray<FInputDeviceId,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined1 *puVar1;
  TMap<FInputDeviceId,FPlatformInputDeviceState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputDeviceId,FPlatformInputDeviceState,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TMap<FInputDeviceId,FPlatformInputDeviceState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputDeviceId,FPlatformInputDeviceState,0>_>
  *pTVar7;
  bool bVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  undefined8 local_c8;
  undefined4 local_c0;
  TMap<FInputDeviceId,FPlatformInputDeviceState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputDeviceId,FPlatformInputDeviceState,0>_>
  *local_b8;
  int iStack_b0;
  uint uStack_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int local_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  TMap<FInputDeviceId,FPlatformInputDeviceState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputDeviceId,FPlatformInputDeviceState,0>_>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  undefined4 local_3c;
  
  iVar11 = 0;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  iVar4 = *(int *)&(this->MappedInputDevices).field_0x28;
  puVar1 = &(this->MappedInputDevices).field_0x10;
  pTVar2 = &this->MappedInputDevices;
  uStack_ac = 1;
  local_98 = 0;
  iStack_9c = 0;
  if (iVar4 != 0) {
    puVar14 = *(uint **)&(this->MappedInputDevices).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      local_98 = local_98 + 0x20;
      iVar11 = iVar11 + 1;
      iStack_9c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1423dd6dd;
      uVar10 = puVar14[lVar9 + 1];
    }
    uStack_ac = -uVar10 & uVar10;
    uVar3 = (ulonglong)uStack_ac * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iStack_9c = (int)lVar9 + -1 + local_98;
    if (iVar4 < iStack_9c) {
      iStack_9c = iVar4;
    }
  }
LAB_1423dd6dd:
  uStack_94 = local_3c;
  iStack_90 = *(int *)&(this->MappedInputDevices).field_0x8 -
              *(int *)&(this->MappedInputDevices).field_0x34;
  uVar10 = *(uint *)&(this->MappedInputDevices).field_0x28;
  uStack_a0 = 0xffffffff;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_80._padding_ = CONCAT44(uStack_ac,iVar11);
  TStack_80.CurrentBitIndex = iStack_9c;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar10 >> 5;
  TStack_80._28_4_ = local_3c;
  TStack_80.BaseBitIndex = local_98;
  uStack_60 = CONCAT44(uStack_8c,iStack_90);
  local_b8 = pTVar2;
  iStack_b0 = iVar11;
  local_a8 = puVar1;
  local_88 = pTVar2;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar4 < (int)uVar10)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    iVar11 = (*pcVar6)();
    return iVar11;
  }
  uVar5 = *(uint *)&(this->MappedInputDevices).field_0x28;
  if (uVar10 != uVar5) {
    puVar13 = *(undefined1 **)&(this->MappedInputDevices).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar12;
      uVar15 = uVar15 + 0x20;
      iVar12 = iVar12 + 1;
      uVar10 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1423dd7e0;
      uVar10 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar5 < (int)uVar10) {
      uVar10 = uVar5;
    }
  }
LAB_1423dd7e0:
  while( true ) {
    pTVar7 = local_88;
    if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
      `TSparseArray<TSparseSetElement<TTuple<FInputDeviceId,FPlatformInputDeviceState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_80.CurrentBitIndex == uVar10) &&
        (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar2))
    break;
    lVar9 = *(longlong *)pTVar7;
    local_c8 = *(undefined8 *)(lVar9 + (longlong)TStack_80.CurrentBitIndex * 0x14);
    local_c0 = *(undefined4 *)(lVar9 + 8 + (longlong)TStack_80.CurrentBitIndex * 0x14);
    if ((int)((ulonglong)local_c8 >> 0x20) == param_1.InternalId) {
      TArray<FInputDeviceId,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FInputDeviceId_const_&>
                (param_2,(FInputDeviceId *)&local_c8);
    }
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  }
  return param_2->ArrayNum;
}

// GetCurrentDeviceMappingPolicy @ 1423de0a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EInputDeviceMappingPolicy __thiscall
IPlatformInputDeviceMapper::GetCurrentDeviceMappingPolicy(IPlatformInputDeviceMapper *this)

{
  code *pcVar1;
  bool bVar2;
  EInputDeviceMappingPolicy EVar3;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  undefined1 auStackY_188 [32];
  undefined1 auStack_158 [4];
  EInputDeviceMappingPolicy EStack_154;
  FString FStack_150;
  wchar_t awStack_138 [128];
  void *pvStack_38;
  wchar_t *pwStack_30;
  undefined4 uStack_28;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (UE::Input::CachedDevicePolicy == Invalid) {
    EStack_154 = UE::Input::CachedDevicePolicy;
    pwStack_30 = awStack_138;
    pvStack_38 = (void *)0x0;
    uStack_28 = 7;
    pwVar4 = FGenericPlatformString::Convert<char,wchar_t>(awStack_138,8,"Windows",8);
    if ((pwVar4 == (wchar_t *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                           ,0x25,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
    ::FString::PrintfImpl(&FStack_150,L"InputPlatformSettings_%s InputPlatformSettings");
    if (pvStack_38 != (void *)0x0) {
      FMemory::Free(pvStack_38);
    }
    FVar5.Data = (FScriptContainerElement *)L"";
    if (FStack_150.Data.ArrayNum != 0) {
      FVar5.Data = FStack_150.Data.AllocatorInstance.Data;
    }
    bVar2 = FConfigCacheIni::GetInt
                      (GConfig,(wchar_t *)FVar5.Data,DeviceMappingPolicyName,(int *)&EStack_154,
                       &GInputIni);
    EVar3 = EStack_154;
    if (!bVar2) {
      `UE::Input::GetDeviceMappingPolicyFromConfig'::__l10::<lambda_1>::operator()(auStack_158);
      EVar3 = PrimaryUserSharesKeyboardAndFirstGamepad;
    }
    UE::Input::CachedDevicePolicy = EVar3;
    if (FStack_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_150.Data.AllocatorInstance.Data);
    }
  }
  return UE::Input::CachedDevicePolicy;
}

// GetFirstPlatformUserWithNoInputDevice @ 1423de870

FPlatformUserId __thiscall
IPlatformInputDeviceMapper::GetFirstPlatformUserWithNoInputDevice(IPlatformInputDeviceMapper *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  int *in_RDX;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  int local_res18 [2];
  int local_res20 [2];
  
  (**(code **)(this->_padding_ + 0x38))(this,local_res18);
  pFVar4 = (this->AllocatedPlatformUserIds).AllocatorInstance.Data;
  iVar2 = (this->AllocatedPlatformUserIds).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 4;
  while( true ) {
    if ((this->AllocatedPlatformUserIds).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FPlatformUserId_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    iVar3 = *(int *)pFVar4;
    if (iVar3 != local_res18[0]) {
      (**(code **)(this->_padding_ + 0x70))(this,local_res20,iVar3);
      if (local_res20[0] < 0) {
        *in_RDX = iVar3;
LAB_1423de8e6:
        return (FPlatformUserId)(int)in_RDX;
      }
    }
    pFVar4 = pFVar4 + 4;
  }
  *in_RDX = -1;
  goto LAB_1423de8e6;
}

// GetInputDeviceConnectionState @ 1423df590

EInputDeviceConnectionState __thiscall
IPlatformInputDeviceMapper::GetInputDeviceConnectionState
          (IPlatformInputDeviceMapper *this,FInputDeviceId param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 *puVar3;
  int iVar4;
  
  if (param_1.InternalId < 0) {
    return Invalid;
  }
  if (*(int *)&(this->MappedInputDevices).field_0x8 !=
      *(int *)&(this->MappedInputDevices).field_0x34) {
    puVar3 = *(undefined1 **)&(this->MappedInputDevices).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->MappedInputDevices).field_0x38;
    }
    iVar4 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(this->MappedInputDevices).field_0x48 - 1U &
                              param_1.InternalId) * 4);
    if (iVar4 != -1) {
      do {
        lVar1 = *(longlong *)&this->MappedInputDevices + (longlong)iVar4 * 0x14;
        if (*(int *)(*(longlong *)&this->MappedInputDevices + (longlong)iVar4 * 0x14) ==
            param_1.InternalId) {
          lVar2 = lVar1 + 4;
          if (lVar1 == 0) {
            lVar2 = 0;
          }
          if (lVar2 == 0) {
            return Unknown;
          }
          return *(EInputDeviceConnectionState *)(lVar2 + 4);
        }
        iVar4 = *(int *)(lVar1 + 0xc);
      } while (iVar4 != -1);
    }
  }
  return Unknown;
}

// GetMaxPlatformUserCount @ 1423df960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall IPlatformInputDeviceMapper::GetMaxPlatformUserCount(IPlatformInputDeviceMapper *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  undefined1 auStackY_188 [32];
  undefined1 local_158 [4];
  int local_154;
  FString local_150;
  wchar_t local_138 [128];
  void *local_38;
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (UE::Input::CachedMaxUserCount == -1) {
    local_154 = UE::Input::CachedMaxUserCount;
    local_30 = local_138;
    local_38 = (void *)0x0;
    local_28 = 7;
    pwVar4 = FGenericPlatformString::Convert<char,wchar_t>(local_138,8,"Windows",8);
    if ((pwVar4 == (wchar_t *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                           ,0x25,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    ::FString::PrintfImpl(&local_150,L"InputPlatformSettings_%s InputPlatformSettings");
    if (local_38 != (void *)0x0) {
      FMemory::Free(local_38);
    }
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_150.Data.ArrayNum != 0) {
      FVar5.Data = local_150.Data.AllocatorInstance.Data;
    }
    bVar2 = FConfigCacheIni::GetInt
                      (GConfig,(wchar_t *)FVar5.Data,DeviceMappingPolicyName,&local_154,&GInputIni);
    iVar3 = local_154;
    if (!bVar2) {
      `UE::Input::GetCachedMaxUserCount'::__l10::<lambda_1>::operator()(local_158);
      iVar3 = 8;
    }
    UE::Input::CachedMaxUserCount = iVar3;
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
  }
  return UE::Input::CachedMaxUserCount;
}

// GetPlatformUserForNewlyConnectedDevice @ 1423e1250

FPlatformUserId __thiscall
IPlatformInputDeviceMapper::GetPlatformUserForNewlyConnectedDevice
          (IPlatformInputDeviceMapper *this,int param_1)

{
  char cVar1;
  EInputDeviceMappingPolicy EVar2;
  undefined4 in_register_00000014;
  int *piVar3;
  int in_R8D;
  int local_res8 [2];
  int local_res20 [2];
  void *local_28;
  undefined8 local_20;
  
  piVar3 = (int *)CONCAT44(in_register_00000014,param_1);
  EVar2 = UE::Input::GetDeviceMappingPolicyFromConfig();
  (**(code **)(this->_padding_ + 0x50))(this,local_res8);
  if (EVar2 != MapAllDevicesToPrimaryUser) {
    if (EVar2 == PrimaryUserSharesKeyboardAndFirstGamepad) {
      local_28 = (void *)0x0;
      local_20 = 0;
      (**(code **)(this->_padding_ + 8))(this,local_res8[0],&local_28);
      if ((int)local_20 < 2) {
        *piVar3 = local_res8[0];
        if (local_28 == (void *)0x0) {
          return (FPlatformUserId)param_1;
        }
        FMemory::Free(local_28);
        return (FPlatformUserId)param_1;
      }
      if (local_28 != (void *)0x0) {
        FMemory::Free(local_28);
      }
    }
    else if ((in_R8D != -1) && (cVar1 = (**(code **)(this->_padding_ + 0xf0))(this), cVar1 != '\0'))
    {
      (**(code **)(this->_padding_ + 0xb8))(this,piVar3,in_R8D);
      return (FPlatformUserId)param_1;
    }
    (**(code **)(this->_padding_ + 0x30))(this,local_res20);
    local_res8[0] = local_res20[0];
    if (local_res20[0] == -1) {
      (**(code **)(this->_padding_ + 0xc0))(this,piVar3);
      return (FPlatformUserId)param_1;
    }
  }
  *piVar3 = local_res8[0];
  return (FPlatformUserId)param_1;
}

// GetPrimaryInputDeviceForUser @ 1423e1550

FInputDeviceId __thiscall
IPlatformInputDeviceMapper::GetPrimaryInputDeviceForUser
          (IPlatformInputDeviceMapper *this,FPlatformUserId param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined4 in_register_00000014;
  int *piVar10;
  uint uVar11;
  int in_R8D;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  ulonglong local_res8;
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  piVar10 = (int *)CONCAT44(in_register_00000014,param_1.InternalId);
  iVar8 = *(int *)&(this->MappedInputDevices).field_0x28;
  puVar1 = &(this->MappedInputDevices).field_0x10;
  local_res8 = CONCAT44(local_res8._4_4_,1);
  iVar12 = 0;
  *piVar10 = -1;
  iVar7 = iVar12;
  iVar14 = iVar12;
  if (iVar8 != 0) {
    puVar15 = *(uint **)&(this->MappedInputDevices).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar7 = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1423e1602;
      uVar11 = puVar15[lVar9 + 1];
    }
    local_res8 = (ulonglong)(-uVar11 & uVar11);
    uVar2 = local_res8 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar7 = local_res10 + -1 + iVar14;
    if (iVar8 < iVar7) {
      iVar7 = iVar8;
    }
  }
LAB_1423e1602:
  uVar11 = *(uint *)&(this->MappedInputDevices).field_0x28;
  uVar16 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44((int)local_res8,iVar12);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->MappedInputDevices).field_0x8 -
                       *(int *)&(this->MappedInputDevices).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar8 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar8 = (*pcVar5)();
    return (FInputDeviceId)iVar8;
  }
  uVar3 = *(uint *)&(this->MappedInputDevices).field_0x28;
  if (uVar11 != uVar3) {
    puVar13 = *(undefined1 **)&(this->MappedInputDevices).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar16 = uVar16 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1423e1700;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar16;
    if ((int)uVar3 < (int)uVar11) {
      uVar11 = uVar3;
    }
  }
LAB_1423e1700:
  while( true ) {
    if (*(int *)&(this->MappedInputDevices).field_0x8 -
        *(int *)&(this->MappedInputDevices).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FInputDeviceId,FPlatformInputDeviceState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    lVar9 = (longlong)TStack_60.CurrentBitIndex;
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar4 = *(longlong *)&this->MappedInputDevices;
    if ((*(int *)(lVar4 + 4 + lVar9 * 0x14) == in_R8D) &&
       ((*piVar10 == -1 || (*(int *)(lVar4 + lVar9 * 0x14) < *piVar10)))) {
      *piVar10 = *(int *)(lVar4 + lVar9 * 0x14);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return (FInputDeviceId)param_1.InternalId;
}

// GetUserForInputDevice @ 1423e4c60

FPlatformUserId __thiscall
IPlatformInputDeviceMapper::GetUserForInputDevice
          (IPlatformInputDeviceMapper *this,FInputDeviceId param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 in_register_00000014;
  uint in_R8D;
  undefined1 *puVar4;
  
  if (*(int *)&(this->MappedInputDevices).field_0x8 !=
      *(int *)&(this->MappedInputDevices).field_0x34) {
    puVar4 = *(undefined1 **)&(this->MappedInputDevices).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->MappedInputDevices).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->MappedInputDevices).field_0x48 - 1U & in_R8D) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)&this->MappedInputDevices + (longlong)iVar2 * 0x14;
        if (*(uint *)(*(longlong *)&this->MappedInputDevices + (longlong)iVar2 * 0x14) == in_R8D) {
          puVar3 = (undefined4 *)(lVar1 + 4);
          if (lVar1 == 0) {
            puVar3 = (undefined4 *)0x0;
          }
          if (puVar3 != (undefined4 *)0x0) {
            *(undefined4 *)CONCAT44(in_register_00000014,param_1.InternalId) = *puVar3;
            return (FPlatformUserId)param_1.InternalId;
          }
          break;
        }
        iVar2 = *(int *)(lVar1 + 0xc);
      } while (iVar2 != -1);
    }
  }
  *(undefined4 *)CONCAT44(in_register_00000014,param_1.InternalId) = 0xffffffff;
  return (FPlatformUserId)param_1.InternalId;
}

// Internal_ChangeInputDeviceUserMapping @ 1423e9db0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
IPlatformInputDeviceMapper::Internal_ChangeInputDeviceUserMapping
          (IPlatformInputDeviceMapper *this,FInputDeviceId param_1,FPlatformUserId param_2,
          FPlatformUserId param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  FStaticBasicLogRecord *pFVar9;
  int *piVar10;
  undefined1 *puVar11;
  uint uVar12;
  longlong lVar13;
  FDestructionSentinel local_48;
  
  if (param_1.InternalId < 0) {
    if ((byte)LogInputDeviceMapper._0_1_ < 2) {
      return false;
    }
    pFVar9 = &::LOG_Static;
  }
  else {
    if (param_2.InternalId == param_3.InternalId) {
      if ((byte)LogInputDeviceMapper._0_1_ < 5) {
        return false;
      }
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInputDeviceMapper);
      return false;
    }
    if (*(int *)&(this->MappedInputDevices).field_0x8 !=
        *(int *)&(this->MappedInputDevices).field_0x34) {
      puVar11 = *(undefined1 **)&(this->MappedInputDevices).field_0x40;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = &(this->MappedInputDevices).field_0x38;
      }
      iVar7 = *(int *)(puVar11 +
                      (ulonglong)
                      (*(int *)&(this->MappedInputDevices).field_0x48 - 1U & param_1.InternalId) * 4
                      );
      if (iVar7 != -1) {
        do {
          lVar13 = *(longlong *)&this->MappedInputDevices + (longlong)iVar7 * 0x14;
          if (*(int *)(*(longlong *)&this->MappedInputDevices + (longlong)iVar7 * 0x14) ==
              param_1.InternalId) {
            piVar10 = (int *)(lVar13 + 4);
            if (lVar13 == 0) {
              piVar10 = (int *)0x0;
            }
            if (piVar10 != (int *)0x0) {
              if (*piVar10 == param_3.InternalId) {
                *piVar10 = param_2.InternalId;
              }
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                         &OnInputDevicePairingChange,(FWriteAccessScope *)&local_48);
              bVar3 = false;
              OnInputDevicePairingChange._28_4_ = OnInputDevicePairingChange._28_4_ + 1;
              uVar12 = OnInputDevicePairingChange._16_4_ - 1;
              if (-1 < (int)uVar12) {
                lVar13 = (longlong)(int)uVar12 << 4;
                bVar3 = false;
                do {
                  uVar8 = 0;
                  if ((int)uVar12 < (int)OnInputDevicePairingChange._16_4_) {
                    uVar8 = ~uVar12 >> 0x1f;
                  }
                  if ((uVar8 == 0) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar4)) {
                    pcVar2 = (code *)swi(3);
                    uVar5 = (*pcVar2)();
                    return (bool)uVar5;
                  }
                  if (((*(int *)(lVar13 + 8 + OnInputDevicePairingChange._8_8_) == 0) ||
                      (plVar1 = *(longlong **)(lVar13 + OnInputDevicePairingChange._8_8_),
                      plVar1 == (longlong *)0x0)) ||
                     (cVar6 = (**(code **)(*plVar1 + 0x68))
                                        (plVar1,param_1.InternalId,param_2.InternalId,
                                         param_3.InternalId), cVar6 == '\0')) {
                    bVar3 = true;
                  }
                  lVar13 = lVar13 + -0x10;
                  uVar12 = uVar12 - 1;
                } while (-1 < (int)uVar12);
              }
              OnInputDevicePairingChange._28_4_ = OnInputDevicePairingChange._28_4_ + -1;
              if (bVar3) {
                TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                          ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                           &OnInputDevicePairingChange,false);
              }
              if (local_48.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
              }
              return true;
            }
            break;
          }
          iVar7 = *(int *)(lVar13 + 0xc);
        } while (iVar7 != -1);
      }
    }
    if ((byte)LogInputDeviceMapper._0_1_ < 2) {
      return false;
    }
    pFVar9 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<2>(pFVar9,(FLogCategoryBase *)&LogInputDeviceMapper);
  return false;
}

// Internal_MapInputDeviceToUser @ 1423ea000

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
IPlatformInputDeviceMapper::Internal_MapInputDeviceToUser
          (IPlatformInputDeviceMapper *this,FInputDeviceId param_1,FPlatformUserId param_2,
          EInputDeviceConnectionState param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  FInputDeviceId FVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  FPlatformInputDeviceState *pFVar9;
  uint uVar10;
  longlong lVar11;
  FInputDeviceId local_res10 [2];
  FDestructionSentinel local_48;
  
  local_res10[0].InternalId = param_1.InternalId;
  if (param_1.InternalId < 0) {
    if (1 < (byte)LogInputDeviceMapper._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogInputDeviceMapper);
    }
    return false;
  }
  if ((this->LastInputDeviceId).InternalId < param_1.InternalId) {
    (this->LastInputDeviceId).InternalId = param_1.InternalId;
  }
  if ((this->LastPlatformUserId).InternalId < param_2.InternalId) {
    (this->LastPlatformUserId).InternalId = param_2.InternalId;
  }
  pFVar9 = TMapBase<FInputDeviceId,FPlatformInputDeviceState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputDeviceId,FPlatformInputDeviceState,0>_>
           ::FindOrAddImpl<FInputDeviceId_const_&>
                     ((TMapBase<FInputDeviceId,FPlatformInputDeviceState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputDeviceId,FPlatformInputDeviceState,0>_>
                       *)&this->MappedInputDevices,param_1.InternalId,local_res10);
  FVar4 = local_res10[0];
  (pFVar9->OwningPlatformUser).InternalId = param_2.InternalId;
  pFVar9->ConnectionState = param_3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &OnInputDeviceConnectionChange,(FWriteAccessScope *)&local_48);
  bVar3 = false;
  OnInputDeviceConnectionChange._28_4_ = OnInputDeviceConnectionChange._28_4_ + 1;
  uVar10 = OnInputDeviceConnectionChange._16_4_ - 1;
  if (-1 < (int)uVar10) {
    lVar11 = (longlong)(int)uVar10 << 4;
    bVar3 = false;
    do {
      uVar8 = 0;
      if ((int)uVar10 < (int)OnInputDeviceConnectionChange._16_4_) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      if (((*(int *)(lVar11 + 8 + OnInputDeviceConnectionChange._8_8_) == 0) ||
          (plVar1 = *(longlong **)(lVar11 + OnInputDeviceConnectionChange._8_8_),
          plVar1 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar1 + 0x68))(plVar1,param_3,param_2.InternalId,FVar4.InternalId),
         cVar7 == '\0')) {
        bVar3 = true;
      }
      lVar11 = lVar11 + -0x10;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  OnInputDeviceConnectionChange._28_4_ = OnInputDeviceConnectionChange._28_4_ + -1;
  if (bVar3) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnInputDeviceConnectionChange,
               false);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return true;
}

// Internal_SetInputDeviceConnectionState @ 1423ea1c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
IPlatformInputDeviceMapper::Internal_SetInputDeviceConnectionState
          (IPlatformInputDeviceMapper *this,FInputDeviceId param_1,
          EInputDeviceConnectionState param_2)

{
  EInputDeviceConnectionState EVar1;
  undefined1 uVar2;
  int *piVar3;
  int local_res10 [2];
  undefined1 local_res20 [8];
  
  if (param_1.InternalId < 0) {
    if (1 < (byte)LogInputDeviceMapper._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogInputDeviceMapper);
      return false;
    }
  }
  else {
    EVar1 = (**(code **)(this->_padding_ + 0x80))();
    if (EVar1 != param_2) {
      (**(code **)(this->_padding_ + 0x68))(this,local_res10,param_1.InternalId);
      if (local_res10[0] == -1) {
        piVar3 = (int *)(**(code **)(this->_padding_ + 0x38))(this,local_res20);
        local_res10[0] = *piVar3;
      }
      uVar2 = (**(code **)(this->_padding_ + 0x88))(this,param_1.InternalId,local_res10[0],param_2);
      return (bool)uVar2;
    }
  }
  return false;
}

// IsInputDeviceMappedToUnpairedUser @ 1423eaa10

bool __thiscall
IPlatformInputDeviceMapper::IsInputDeviceMappedToUnpairedUser
          (IPlatformInputDeviceMapper *this,FInputDeviceId param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  
  if (*(int *)&(this->MappedInputDevices).field_0x8 !=
      *(int *)&(this->MappedInputDevices).field_0x34) {
    puVar5 = *(undefined1 **)&(this->MappedInputDevices).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->MappedInputDevices).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->MappedInputDevices).field_0x48 - 1U &
                              param_1.InternalId) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *(longlong *)&this->MappedInputDevices + (longlong)iVar3 * 0x14;
        if (*(int *)(*(longlong *)&this->MappedInputDevices + (longlong)iVar3 * 0x14) ==
            param_1.InternalId) {
          puVar4 = (undefined4 *)(lVar1 + 4);
          if (lVar1 == 0) {
            puVar4 = (undefined4 *)0x0;
          }
          if (puVar4 == (undefined4 *)0x0) {
            return false;
          }
                    /* WARNING: Could not recover jumptable at 0x0001423eaa85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (**(code **)(this->_padding_ + 0x40))(this,*puVar4);
          return (bool)uVar2;
        }
        iVar3 = *(int *)(lVar1 + 0xc);
      } while (iVar3 != -1);
    }
  }
  return false;
}

// IsUnpairedUserId @ 1423eb400

bool __thiscall
IPlatformInputDeviceMapper::IsUnpairedUserId
          (IPlatformInputDeviceMapper *this,FPlatformUserId param_1)

{
  int *piVar1;
  undefined1 local_res10 [24];
  
  piVar1 = (int *)(**(code **)(this->_padding_ + 0x38))(this,local_res10);
  return param_1.InternalId == *piVar1;
}

// ShouldCreateUniqueUserForEachDevice @ 142406350

bool __thiscall
IPlatformInputDeviceMapper::ShouldCreateUniqueUserForEachDevice(IPlatformInputDeviceMapper *this)

{
  EInputDeviceMappingPolicy EVar1;
  
  EVar1 = UE::Input::GetDeviceMappingPolicyFromConfig();
  return (EVar1 & ~CreateUniquePlatformUserForEachDevice) == UseManagedPlatformLogin;
}

// UnbindCoreDelegates @ 14240ad70

void __thiscall IPlatformInputDeviceMapper::UnbindCoreDelegates(IPlatformInputDeviceMapper *this)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnUserLoginChangedEvent,this);
  return;
}

