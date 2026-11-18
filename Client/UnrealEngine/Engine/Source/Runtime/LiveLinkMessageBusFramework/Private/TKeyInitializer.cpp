// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkMessageBusFramework
// Functions: 1

// operator<FName,FTrackedSubject>_TTuple<FName,FTrackedSubject> @ 14cfe80a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FName,FTrackedSubject> * __thiscall
TKeyInitializer<FName_const_&>::operator<FName,FTrackedSubject>_TTuple<FName,FTrackedSubject>
          (TKeyInitializer<FName_const_&> *this,
          TTuple<FName,FTrackedSubject> *__return_storage_ptr__)

{
  int iVar1;
  uint uVar2;
  undefined1 auStackY_f8 [32];
  undefined1 local_c8 [64];
  undefined1 local_88 [24];
  undefined8 uStack_70;
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  void *local_48;
  ulonglong local_40;
  FFrameTime local_38;
  int local_30;
  int local_2c;
  double local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_5c = 0x80;
  local_c8._0_8_ = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_40 = 0;
  local_28 = 0.0;
  local_88._16_8_ = 0;
  uStack_70 = 0;
  local_c8._8_4_ = 0;
  local_c8._12_4_ = 0;
  local_c8._16_8_ = (FScriptContainerElement *)0x0;
  local_c8._24_4_ = 0;
  local_c8._28_4_ = 0;
  local_c8._32_8_ = (FScriptContainerElement *)0x0;
  local_c8._40_4_ = 0;
  local_c8._44_4_ = 0;
  local_c8._48_8_ = (FScriptContainerElement *)0x0;
  local_c8._56_4_ = 0;
  local_c8._60_4_ = 0;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (void *)0x0;
  local_38.FrameNumber.Value = 0;
  local_38.SubFrame = 0.0;
  local_30 = 0x18;
  local_2c = 1;
  uVar2 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar2;
  FTrackedSubject::FTrackedSubject
            ((FTrackedSubject *)&__return_storage_ptr__->field_0x8,(FTrackedSubject *)local_c8);
  local_40 = local_40 & 0xffffffff00000000;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_88,0,local_88._8_4_);
  iVar1 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  local_60 = 0;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  if ((FScriptContainerElement *)local_c8._48_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._48_8_);
  }
  if ((FScriptContainerElement *)local_c8._32_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._32_8_);
  }
  if ((FScriptContainerElement *)local_c8._16_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._16_8_);
  }
  if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._0_8_);
  }
  return __return_storage_ptr__;
}

