// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationTest
// Functions: 1

// operator<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_> @ 148bedb50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_> * __thiscall
TKeyInitializer<FString_const_&>::
operator<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<FString_const_&> *this,
          TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
          *__return_storage_ptr__)

{
  int iVar1;
  uint uVar2;
  FName *pFVar3;
  int iVar4;
  undefined1 auStackY_a8 [32];
  FName local_78 [2];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_30;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_30.InlineData[0] = '\0';
  local_30.InlineData[1] = '\0';
  local_30.InlineData[2] = '\0';
  local_30.InlineData[3] = '\0';
  local_30._padding_ = 0;
  local_20 = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  iVar1 = (this->Key->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  pFVar3 = ::FName::FName(local_78,iVar4,(wchar_t *)(this->Key->Data).AllocatorInstance.Data,
                          FNAME_Add);
  uVar2 = pFVar3->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (pFVar3->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar2;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x38 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x3c = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x50 = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
  Move<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
             &__return_storage_ptr__->field_0x8,
             (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

