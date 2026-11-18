// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosSolverEngine
// Functions: 1

// operator<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet>_TTuple<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet> @ 1463034f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TTuple<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet> * __thiscall
TKeyInitializer<TObjectPtr<UPrimitiveComponent>_&&>::
operator<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet>_TTuple<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet>
          (TKeyInitializer<TObjectPtr<UPrimitiveComponent>_&&> *this,
          TTuple<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet> *__return_storage_ptr__)

{
  UPrimitiveComponent *pUVar1;
  ulonglong uVar2;
  int iVar3;
  undefined1 auStackY_a8 [32];
  undefined1 local_78 [8];
  ForAnyElementType FStack_70;
  undefined8 local_68;
  TBitArray<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  ForElementType<FSetElementId> local_38;
  ulonglong local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  TStack_60.NumBits = 0;
  TStack_60.MaxBits = 0x80;
  local_38.InlineData[0] = '\0';
  local_38.InlineData[1] = '\0';
  local_38.InlineData[2] = '\0';
  local_38.InlineData[3] = '\0';
  local_38._padding_ = 0;
  local_78[0] = false;
  local_78._1_3_ = 0;
  local_78._4_4_ = 0;
  FStack_70.Data = (FScriptContainerElement *)0x0;
  uStack_40 = 0xffffffff;
  local_68 = 0;
  TStack_60.AllocatorInstance.InlineData[0] = '\0';
  TStack_60.AllocatorInstance.InlineData[1] = '\0';
  TStack_60.AllocatorInstance.InlineData[2] = '\0';
  TStack_60.AllocatorInstance.InlineData[3] = '\0';
  TStack_60.AllocatorInstance.InlineData[4] = '\0';
  TStack_60.AllocatorInstance.InlineData[5] = '\0';
  TStack_60.AllocatorInstance.InlineData[6] = '\0';
  TStack_60.AllocatorInstance.InlineData[7] = '\0';
  local_38.SecondaryData = (ForElementType<FSetElementId>)0x0;
  TStack_60.AllocatorInstance.InlineData[8] = '\0';
  TStack_60.AllocatorInstance.InlineData[9] = '\0';
  TStack_60.AllocatorInstance.InlineData[10] = '\0';
  TStack_60.AllocatorInstance.InlineData[0xb] = '\0';
  TStack_60.AllocatorInstance.InlineData[0xc] = '\0';
  TStack_60.AllocatorInstance.InlineData[0xd] = '\0';
  TStack_60.AllocatorInstance.InlineData[0xe] = '\0';
  TStack_60.AllocatorInstance.InlineData[0xf] = '\0';
  TStack_60.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_28 = 0;
  pUVar1 = (this->Key->field0_0x0).DebugPtr;
  *(UPrimitiveComponent **)__return_storage_ptr__ = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UPrimitiveComponent *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FChaosHandlerSet::FChaosHandlerSet
            ((FChaosHandlerSet *)&__return_storage_ptr__->field_0x8,(FChaosHandlerSet *)local_78);
  local_28 = local_28 & 0xffffffff00000000;
  if (local_38.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_38.SecondaryData);
  }
  uVar2 = local_68 >> 0x20;
  local_68 = local_68 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&FStack_70,0,(int *)((longlong)&local_68 + 4));
  }
  iVar3 = TStack_60.MaxBits;
  uStack_40 = 0xffffffff;
  TStack_60._24_8_ = (ulonglong)(uint)TStack_60.MaxBits << 0x20;
  if (0x80 < (uint)iVar3) {
    TStack_60.NumBits = 0;
    TStack_60.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&TStack_60,0);
  }
  if (TStack_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)TStack_60.AllocatorInstance.SecondaryData);
  }
  if (FStack_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_70.Data);
  }
  return __return_storage_ptr__;
}

