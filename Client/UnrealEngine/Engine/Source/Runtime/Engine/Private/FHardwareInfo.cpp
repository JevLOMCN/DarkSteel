// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// GetHardwareDetailsString @ 147d057e0

FString * __cdecl FHardwareInfo::GetHardwareDetailsString(FString *__return_storage_ptr__)

{
  void *_Src;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *pTVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  uint *puVar10;
  FString local_a8;
  FString local_98;
  undefined8 local_88;
  undefined4 uStack_80;
  uint uStack_7c;
  uint local_78;
  uint uStack_74;
  FString local_68;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  FString local_30;
  
  uVar6 = 0;
  local_78 = 0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 1;
  iVar5 = HardwareDetailsMap._40_4_;
  uVar3 = uVar6;
  if (iVar5 != 0) {
    puVar10 = (uint *)&HardwareDetailsMap.field_0x10;
    if (HardwareDetailsMap._32_8_ != 0) {
      puVar10 = (uint *)HardwareDetailsMap._32_8_;
    }
    uVar2 = *puVar10;
    uVar9 = uVar6;
    local_98.Data.ArrayNum = 0;
    local_78 = 0;
    while (uVar2 == 0) {
      iVar8 = (int)uVar3;
      local_78 = (int)uVar9 + 0x20;
      uVar9 = (ulonglong)local_78;
      local_98.Data.ArrayNum = iVar8 + 1;
      uVar3 = (ulonglong)(uint)local_98.Data.ArrayNum;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < local_98.Data.ArrayNum) {
        uVar3 = HardwareDetailsMap._40_8_ & 0xffffffff;
        goto LAB_147d0589d;
      }
      uVar2 = puVar10[(longlong)iVar8 + 1];
    }
    local_98.Data.ArrayMax = -uVar2 & uVar2;
    uVar3 = (ulonglong)(uint)local_98.Data.ArrayMax * 2 + 1;
    lVar4 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar2 = (local_78 - 1) + (int)lVar4;
    uVar3 = (ulonglong)uVar2;
    if (iVar5 < (int)uVar2) {
      uVar3 = HardwareDetailsMap._40_8_ & 0xffffffff;
    }
  }
LAB_147d0589d:
  uStack_7c = (uint)uVar3;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)&HardwareDetailsMap;
  local_88 = 0x154c44450;
  uStack_80 = 0xffffffff;
  TStack_50._padding_ = CONCAT44(local_98.Data.ArrayMax,local_98.Data.ArrayNum);
  TStack_50.UnvisitedBitMask = 0xffffffff;
  local_58 = &HardwareDetailsMap;
  TStack_50._28_4_ = uStack_7c;
  TStack_50.BaseBitIndex = local_78;
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&HardwareDetailsMap.field_0x10;
  uStack_74 = uStack_7c;
  TStack_50.CurrentBitIndex = uStack_7c;
  if ((int)uStack_7c < iVar5) {
    do {
      iVar5 = (int)uVar6;
      uVar6 = (ulonglong)(iVar5 + 1);
      if (0 < iVar5) {
        ::FString::AppendChars(__return_storage_ptr__,L", ",2);
      }
      pTVar1 = local_58;
      lVar7 = (longlong)(int)uVar3 * 0x20;
      ::FName::ToString((FName *)(*(longlong *)local_58 + lVar7),&local_98);
      local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.Data.ArrayNum = *(int *)(lVar7 + 0x10 + *(longlong *)pTVar1);
      lVar4 = (longlong)local_a8.Data.ArrayNum;
      _Src = *(void **)(lVar7 + 8 + *(longlong *)pTVar1);
      if (local_a8.Data.ArrayNum == 0) {
        local_a8.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_a8.Data.ArrayNum,0,(ForAnyElementType *)&local_a8,
                   local_a8.Data.ArrayNum,&local_a8.Data.ArrayMax);
        memcpy(local_a8.Data.AllocatorInstance.Data,_Src,lVar4 * 2);
      }
      ::FString::ConcatFC(&local_30,&local_98,L"=");
      ::FString::ConcatFF(&local_68,&local_30,&local_a8);
      uVar2 = local_68.Data.ArrayNum - 1;
      if (local_68.Data.ArrayNum == 0) {
        uVar2 = 0;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)local_68.Data.AllocatorInstance.Data,uVar2);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.Data.AllocatorInstance.Data);
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      if ((TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *)
          local_98.Data.AllocatorInstance.Data !=
          (TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *)
          0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
      uVar3 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
    } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
  }
  return __return_storage_ptr__;
}

// GetHardwareInfo @ 147d05a50

FString * __cdecl FHardwareInfo::GetHardwareInfo(FString *__return_storage_ptr__,FName param_1)

{
  TTuple<FName,FString> *pTVar1;
  
  pTVar1 = TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                   *)&HardwareDetailsMap,param_1);
  if (pTVar1 != (TTuple<FName,FString> *)0x0) {
    ::FString::FString(__return_storage_ptr__,(FString *)&pTVar1->field_0x8);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// RegisterHardwareInfo @ 147d20210

void __cdecl FHardwareInfo::RegisterHardwareInfo(FName param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  FName local_res8;
  TPairInitializer<FName_const_&,FString_const_&> local_res10;
  FName *local_18;
  FString *local_10;
  
  local_res8 = param_1;
  if (((param_1 != NAME_RHI) && (param_1 != NAME_TextureFormat)) && (param_1 != NAME_DeviceType)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SpecIdentifier == NAME_RHI || SpecIdentifier == NAME_TextureFormat || SpecIdentifier == NAME_DeviceType"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\HardwareInfo.cpp"
                       ,0x18,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18 = &local_res8;
  local_10 = param_2;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,FString_const_&>_>
            ((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              *)&HardwareDetailsMap,&local_res10,(bool *)&local_18);
  return;
}

