// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Constraints
// Functions: 2

// FHandleDependencyChecker @ 14649e3a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FHandleDependencyChecker * __thiscall
FHandleDependencyChecker::FHandleDependencyChecker(FHandleDependencyChecker *this,UWorld *param_1)

{
  UWorld *local_res8;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->WeakWorld).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  return this;
}

// HasDependency @ 1464b7f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FHandleDependencyChecker::HasDependency
          (FHandleDependencyChecker *this,UTransformableHandle *param_1,
          UTransformableHandle *param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  UWorld *pUVar4;
  FTickFunction *pFVar5;
  FTickFunction *pFVar6;
  undefined1 auStackY_a8 [32];
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  cVar2 = (**(code **)(param_1->_padding_ + 0x338))(param_1,param_2);
  if (cVar2 == '\0') {
    bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
    if (((!bVar3) ||
        (pUVar4 = (UWorld *)FWeakObjectPtr::Get((FWeakObjectPtr *)this), pUVar4 == (UWorld *)0x0))
       || (((uint)pUVar4->_padding_ >> 0x1e & 1) != 0)) {
      return false;
    }
    bVar3 = DependencyLocals::HasConstraintDependencyWith(pUVar4,param_1,param_2);
    if (!bVar3) {
      local_78._0_8_ = (FScriptContainerElement *)0x0;
      local_78._8_8_ = 0;
      local_58 = (void *)0x0;
      local_50 = 0;
      local_4c = 0x80;
      local_48 = 0xffffffff;
      local_44 = 0;
      local_38 = (ForElementType<FSetElementId>)0x0;
      local_30 = 0;
      pFVar5 = (FTickFunction *)(**(code **)(param_1->_padding_ + 800))(param_1);
      pFVar6 = (FTickFunction *)(**(code **)(param_2->_padding_ + 800))(param_2);
      bVar3 = FConstraintCycleChecker::HasPrerequisiteDependencyWith
                        (pFVar5,pFVar6,
                         (TSet<FTickFunction_const_*,DefaultKeyFuncs<FTickFunction_const_*,0>,FDefaultSetAllocator>
                          *)local_78);
      local_30 = 0;
      if (!bVar3) {
        if (local_38 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_38);
        }
        iVar1 = SUB84(local_78._8_8_,4);
        local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
        if (iVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
        }
        local_48 = 0xffffffff;
        local_44 = 0;
        local_50 = 0;
        if (0x80 < local_4c) {
          local_4c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
        }
        if (local_58 != (void *)0x0) {
          FMemory::Free(local_58);
        }
        if ((FScriptContainerElement *)local_78._0_8_ == (FScriptContainerElement *)0x0) {
          return false;
        }
        FMemory::Free((void *)local_78._0_8_);
        return false;
      }
      if (local_38 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_38);
      }
      iVar1 = SUB84(local_78._8_8_,4);
      local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
      if (iVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
      }
      local_48 = 0xffffffff;
      local_44 = 0;
      local_50 = 0;
      if (0x80 < local_4c) {
        local_4c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
      }
      if (local_58 != (void *)0x0) {
        FMemory::Free(local_58);
      }
      if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_78._0_8_);
      }
    }
  }
  return true;
}

