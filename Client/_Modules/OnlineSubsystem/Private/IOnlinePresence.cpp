// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 1

// SetPresence @ 14ec12450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
IOnlinePresence::SetPresence
          (IOnlinePresence *this,FUniqueNetId *param_1,FOnlinePresenceSetPresenceParameters *param_2
          ,TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  undefined1 auStackY_108 [32];
  longlong local_d8;
  TReferenceControllerBase<1> *pTStack_d0;
  TOptional<FString>_u_0 local_c8;
  Type local_b8;
  undefined1 local_b0 [32];
  void *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ForElementType<FSetElementId> local_70;
  int local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_d8 = 0;
  pTStack_d0 = (TReferenceControllerBase<1> *)0x0;
  if (((*(int *)((longlong)&(param_2->StatusStr).field0_0x0 + 0xc) == -1) ||
      ((param_2->State).bIsSet == false)) || ((param_2->Properties).bIsSet == false)) {
    (**(code **)(this->_padding_ + 0x68))(this,param_1,&local_d8);
  }
  iVar4 = *(int *)((longlong)&(param_2->StatusStr).field0_0x0 + 0xc);
  local_c8.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_c8._8_8_ = 0;
  local_b8 = Offline;
  local_b0._0_8_ = (FScriptContainerElement *)0x0;
  local_b0._8_8_ = 0;
  local_90 = (void *)0x0;
  local_88 = ___xmm_00000000ffffffff0000008000000000;
  uStack_80 = _UNK_150631d98;
  local_70 = (ForElementType<FSetElementId>)0x0;
  local_68 = 0;
  if (iVar4 == -1) {
    if (local_d8 != 0) {
      if (local_d8 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      iVar4 = *(int *)(local_d8 + 0x28) + -1;
      if (*(int *)(local_d8 + 0x28) == 0) {
        iVar4 = 0;
      }
      ::FString::AssignRange(&local_c8.TypedValue,*(wchar_t **)(local_d8 + 0x20),iVar4);
    }
  }
  else if (&local_c8 != (TOptional<FString>_u_0 *)param_2) {
    local_c8.TypedValue.Data.AllocatorInstance.Data =
         (ForAnyElementType)(param_2->StatusStr).field0_0x0.TypedValue.Data.AllocatorInstance.Data;
    (param_2->StatusStr).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_c8.TypedValue.Data.ArrayNum =
         *(undefined4 *)((longlong)&(param_2->StatusStr).field0_0x0 + 8);
    *(int *)((longlong)&(param_2->StatusStr).field0_0x0 + 8) = 0;
    *(int *)((longlong)&(param_2->StatusStr).field0_0x0 + 0xc) = 0;
    local_c8.TypedValue.Data.ArrayMax = iVar4;
  }
  if ((param_2->State).bIsSet == false) {
    if (local_d8 != 0) {
      if (local_d8 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      local_b8 = *(Type *)(local_d8 + 0x30);
    }
  }
  else {
    local_b8 = (param_2->State).TypedValue;
  }
  if ((param_2->Properties).bIsSet == false) {
    if (local_d8 != 0) {
      if (local_d8 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
                   *)local_b0,
                  (TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
                   *)(local_d8 + 0x38));
    }
  }
  else if ((TOptional<FOnlineKeyValuePairs<FString,FVariantData>_> *)local_b0 !=
           &param_2->Properties) {
    TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
                *)local_b0,
               (TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
                *)&param_2->Properties);
  }
  (**(code **)(this->_padding_ + 0x10))(this,param_1,&local_c8,param_3);
  local_68 = 0;
  if (local_70 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_70);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_b0,0,local_b0._8_4_);
  iVar4 = SUB84(local_b0._8_8_,4);
  local_b0._8_8_ = local_b0._8_8_ & 0xffffffff00000000;
  if (iVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)local_b0,0,(int *)(local_b0 + 0xc));
  }
  uVar2 = local_88._4_4_;
  uStack_80 = 0xffffffff;
  local_88 = (ulonglong)local_88._4_4_ << 0x20;
  if (0x80 < uVar2) {
    local_88 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_b0 + 0x10),0);
  }
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  if ((FScriptContainerElement *)local_b0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_b0._0_8_);
  }
  if (local_c8.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8.TypedValue.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_d0);
  return;
}

