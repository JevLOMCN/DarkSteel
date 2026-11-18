// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Voice
// Functions: 1

// Emplace<FString_const_&,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo_const_&> @ 14ec3a410

FCaptureDeviceInfo * __thiscall
TMapBase<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo,0>_>
::Emplace<FString_const_&,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo_const_&>
          (TMapBase<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo,0>_>
           *this,FString *param_1,FCaptureDeviceInfo *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  TSparseSetElement<TTuple<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo>_> *pTVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AddUninitialized((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)this,&local_28);
  pTVar7 = (TSparseSetElement<TTuple<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo>_> *)0x0
  ;
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo>_> *)0x0) {
    ::FString::FString(local_28.Pointer,param_1);
    ::FString::FString((FString *)((longlong)local_28.Pointer + 0x10),&param_2->DeviceName);
    uVar1 = *(undefined8 *)(param_2->DeviceId).Data4;
    *(undefined8 *)((longlong)local_28.Pointer + 0x20) = *(undefined8 *)&param_2->DeviceId;
    *(undefined8 *)((longlong)local_28.Pointer + 0x28) = uVar1;
    *(bool *)((longlong)local_28.Pointer + 0x30) = param_2->bIsDefault;
    *(undefined4 *)((longlong)local_28.Pointer + 0x38) = 0xffffffff;
    pTVar7 = local_28.Pointer;
  }
  local_res8[0] = local_28.Index;
  iVar4 = *(int *)&pTVar7->field_0x8 + -1;
  if (*(int *)&pTVar7->field_0x8 == 0) {
    pwVar5 = L"";
    iVar4 = 0;
  }
  else {
    pwVar5 = *(wchar_t **)pTVar7;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  bVar2 = TSet<TTuple<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo>,TDefaultMapHashableKeyFuncs<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar3,pTVar7,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar2) {
    TSet<TTuple<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo>,TDefaultMapHashableKeyFuncs<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar3,pTVar7,local_res8[0]);
  }
  return (FCaptureDeviceInfo *)(*(longlong *)&(this->Pairs).Elements + 0x10 + lVar6 * 0x40);
}

