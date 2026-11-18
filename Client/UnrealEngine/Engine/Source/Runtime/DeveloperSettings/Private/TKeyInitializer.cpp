// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DeveloperSettings
// Functions: 1

// operator<TSubclassOf<UPlatformSettings>,FPlatformSettingsInstances>_TTuple<TSubclassOf<UPlatformSettings>,FPlatformSettingsInstances> @ 14241adf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<TSubclassOf<UPlatformSettings>,FPlatformSettingsInstances> * __thiscall
TKeyInitializer<TSubclassOf<UPlatformSettings>_const_&>::
operator<TSubclassOf<UPlatformSettings>,FPlatformSettingsInstances>_TTuple<TSubclassOf<UPlatformSettings>,FPlatformSettingsInstances>
          (TKeyInitializer<TSubclassOf<UPlatformSettings>_const_&> *this,
          TTuple<TSubclassOf<UPlatformSettings>,FPlatformSettingsInstances> *__return_storage_ptr__)

{
  UClass *pUVar1;
  ulonglong uVar2;
  int iVar3;
  undefined1 auStackY_a8 [32];
  TObjectPtr<UPlatformSettings>_u_0 local_78;
  ForAnyElementType FStack_70;
  undefined8 local_68;
  TBitArray<FDefaultBitArrayAllocator> local_60;
  undefined8 uStack_40;
  undefined8 local_38;
  void *local_30;
  ulonglong local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_38 = 0;
  local_28 = 0;
  local_60.AllocatorInstance.InlineData[0] = '\0';
  local_60.AllocatorInstance.InlineData[1] = '\0';
  local_60.AllocatorInstance.InlineData[2] = '\0';
  local_60.AllocatorInstance.InlineData[3] = '\0';
  local_60.AllocatorInstance.InlineData[4] = '\0';
  local_60.AllocatorInstance.InlineData[5] = '\0';
  local_60.AllocatorInstance.InlineData[6] = '\0';
  local_60.AllocatorInstance.InlineData[7] = '\0';
  local_60.AllocatorInstance.InlineData[8] = '\0';
  local_60.AllocatorInstance.InlineData[9] = '\0';
  local_60.AllocatorInstance.InlineData[10] = '\0';
  local_60.AllocatorInstance.InlineData[0xb] = '\0';
  local_60.AllocatorInstance.InlineData[0xc] = '\0';
  local_60.AllocatorInstance.InlineData[0xd] = '\0';
  local_60.AllocatorInstance.InlineData[0xe] = '\0';
  local_60.AllocatorInstance.InlineData[0xf] = '\0';
  local_68 = 0;
  local_78.DebugPtr = (UPlatformSettings *)0x0;
  FStack_70.Data = (FScriptContainerElement *)0x0;
  local_60.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_60._24_8_ = ___xmm_00000000ffffffff0000008000000000;
  uStack_40 = _UNK_150631d98;
  local_30 = (void *)0x0;
  pUVar1 = (this->Key->Class).field0_0x0.DebugPtr;
  *(UClass **)__return_storage_ptr__ = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FPlatformSettingsInstances::FPlatformSettingsInstances
            ((FPlatformSettingsInstances *)&__return_storage_ptr__->field_0x8,
             (FPlatformSettingsInstances *)&local_78.ObjectPtr);
  local_28 = local_28 & 0xffffffff00000000;
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  uVar2 = local_68 >> 0x20;
  local_68 = local_68 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&FStack_70,0,(int *)((longlong)&local_68 + 4));
  }
  iVar3 = local_60.MaxBits;
  uStack_40 = 0xffffffff;
  local_60._24_8_ = (ulonglong)(uint)local_60.MaxBits << 0x20;
  if (0x80 < (uint)iVar3) {
    local_60.NumBits = 0;
    local_60.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_60,0);
  }
  if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_60.AllocatorInstance.SecondaryData);
  }
  if (FStack_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_70.Data);
  }
  return __return_storage_ptr__;
}

