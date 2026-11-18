// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 3

// FRigDependenciesProviderForControlRig @ 14a2d9fb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigDependenciesProviderForControlRig * __thiscall
FRigDependenciesProviderForControlRig::FRigDependenciesProviderForControlRig
          (FRigDependenciesProviderForControlRig *this,UControlRig *param_1,FName *param_2,
          bool param_3)

{
  uint uVar1;
  UControlRig *local_res8;
  
  this->field_0x8 = 0;
  *(undefined ***)this = &___7FRigDependenciesProviderForVM__6B_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UControlRig *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  *(undefined8 *)&this->field_0x10 = 0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UControlRig *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->field_0x10,(FObjectPtr)&local_res8);
  uVar1 = param_2->Number;
  *(uint *)&this->field_0x18 = (param_2->ComparisonIndex).Value;
  *(uint *)&this->field_0x1c = uVar1;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  this->field_0x20 = param_3;
  *(undefined4 *)&this->field_0x50 = 0;
  *(undefined4 *)&this->field_0x54 = 0x80;
  *(undefined4 *)&this->field_0x58 = 0xffffffff;
  *(undefined4 *)&this->field_0x5c = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined4 *)&this->field_0x70 = 0;
  *(undefined8 *)&this->field_0x78 = 0;
  *(undefined8 *)&this->field_0x80 = 0;
  *(undefined8 *)&this->field_0x98 = 0;
  *(undefined4 *)&this->field_0xa0 = 0;
  *(undefined4 *)&this->field_0xa4 = 0x80;
  *(undefined4 *)&this->field_0xa8 = 0xffffffff;
  *(undefined4 *)&this->field_0xac = 0;
  *(undefined8 *)&this->field_0xb8 = 0;
  *(undefined4 *)&this->field_0xc0 = 0;
  *(undefined ***)this = &___7FRigDependenciesProviderForControlRig__6B_;
  *(undefined8 *)&this->field_0xc8 = 0;
  return this;
}

// ~FRigDependenciesProviderForControlRig @ 14a2dead0

void __thiscall
FRigDependenciesProviderForControlRig::~FRigDependenciesProviderForControlRig
          (FRigDependenciesProviderForControlRig *this)

{
  *(undefined4 *)&this->field_0xc0 = 0;
  if (*(void **)&this->field_0xb8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb8);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x78);
  *(undefined4 *)&this->field_0x70 = 0;
  if (*(void **)&this->field_0x68 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x68);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x28);
  return;
}

// GetRigHierarchyDependencies @ 14a3158d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TMap<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>,0>_>
* __thiscall
FRigDependenciesProviderForControlRig::GetRigHierarchyDependencies
          (FRigDependenciesProviderForControlRig *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UModularRig *this_00;
  UClass *pUVar4;
  TMap<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>,0>_>
  *pTVar5;
  FControlRigExecuteContext *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_2b8 [32];
  code *local_298;
  FRigDependenciesProviderForControlRig **local_290;
  FRigDependenciesProviderForControlRig *local_288 [2];
  FControlRigExecuteContext local_278;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x10);
  if ((bVar3) &&
     (this_00 = (UModularRig *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x10),
     this_00 != (UModularRig *)0x0)) {
    pUVar4 = Z_Construct_UClass_UModularRig_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      if ((*(longlong *)&this_00->field_0x150 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("RigVMExtendedExecuteContext != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMHost.h"
                             ,0x151,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TMap<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>,0>_>
                  *)(*pcVar2)();
        return pTVar5;
      }
      pFVar6 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>
                         (*(FRigVMExtendedExecuteContext **)&this_00->field_0x150);
      if ((pFVar6->Records == (FInstructionRecordContainer *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Records",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Units\\RigUnitContext.h"
                             ,0x110,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TMap<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>,0>_>
                  *)(*pcVar2)();
        return pTVar5;
      }
      uVar8 = pFVar6->Records->WrittenRecordsHash;
      uVar9 = pFVar6->Records->ReadRecordsHash - uVar8 ^ uVar8 >> 0xd;
      uVar7 = (-0x61c88647 - uVar9) - uVar8 ^ uVar9 << 8;
      uVar10 = (uVar8 - uVar7) - uVar9 ^ uVar7 >> 0xd;
      uVar9 = (uVar9 - uVar10) - uVar7 ^ uVar10 >> 0xc;
      uVar8 = (uVar7 - uVar9) - uVar10 ^ uVar9 << 0x10;
      uVar10 = (uVar10 - uVar8) - uVar9 ^ uVar8 >> 5;
      uVar7 = (uVar9 - uVar10) - uVar8 ^ uVar10 >> 3;
      uVar8 = (uVar8 - uVar7) - uVar10 ^ uVar7 << 10;
      uVar8 = (uVar10 - uVar8) - uVar7 ^ uVar8 >> 0xf;
      if ((*(int *)&this->field_0x30 == *(int *)&this->field_0x5c) ||
         (*(uint *)&this->field_0xc8 != uVar8)) {
        TSet<TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
        ::Reset((TSet<TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                 *)&this->field_0x28);
        TSet<TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
        ::Reset((TSet<TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                 *)&this->field_0x78);
        local_288[0] = this;
        FControlRigExecuteContext::FControlRigExecuteContext(&local_278,pFVar6);
        local_290 = local_288;
        local_298 = UE::Core::Private::Function::
                    TFunctionRefCaller<`FRigDependenciesProviderForControlRig::GetRigHierarchyDependencies'::__l5::<lambda_1>,bool,FRigModuleInstance_const_*>
                    ::Call;
        UModularRig::ForEachModule
                  (this_00,(TFunctionRef<bool___cdecl(FRigModuleInstance_const_*)> *)&local_298,true
                  );
        FControlRigExecuteContext::~FControlRigExecuteContext(&local_278);
        *(uint *)&this->field_0xc8 = uVar8;
        *(undefined4 *)&this->field_0xcc = 0xffffffff;
      }
      goto LAB_14a315ac8;
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`FRigDependenciesProviderForVM::GetRigHierarchyDependencies'::__l2::
           _dynamic_atexit_destructor_for__Empty__);
    _Init_thread_footer(&::_TSS0);
  }
LAB_14a315ac8:
  return (TMap<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>,0>_>
          *)&this->field_0x28;
}

