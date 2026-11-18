// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// Compare @ 1419e5890

TArray<FCustomVersionDifference,TSizedDefaultAllocator<32>_> * __cdecl
FCurrentCustomVersions::Compare
          (TArray<FCustomVersionDifference,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<FCustomVersion,TSizedDefaultAllocator<32>_> *param_1,wchar_t *param_2)

{
  _func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
  *p_Var1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  char cVar6;
  int iVar7;
  FStaticCustomVersionRegistry *SRWLock;
  TArray<FCustomVersionDifference,TSizedDefaultAllocator<32>_> *pTVar8;
  FCustomVersion *pFVar9;
  FPendingRegistration *pFVar10;
  FName *pFVar11;
  ulonglong uVar12;
  FGuid *pFVar13;
  FGuid *pFVar14;
  undefined8 uVar15;
  FGuid *pFVar16;
  undefined1 local_res8 [8];
  uint local_res10;
  wchar_t *local_res18;
  FGuid *local_res20;
  undefined4 local_f8;
  undefined4 uStack_f4;
  FGuid *pFStack_f0;
  int local_e8;
  undefined4 uStack_e4;
  FGuid *pFStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  FGuid *pFStack_d0;
  int local_c8;
  int iStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  int local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  FName local_98;
  FName local_90;
  FGuid local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  int local_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  FName local_58;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (param_1->ArrayNum == 0) {
    return __return_storage_ptr__;
  }
  local_res18 = param_2;
  SRWLock = FStaticCustomVersionRegistry::Get();
  if ((SRWLock == (FStaticCustomVersionRegistry *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x1c,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TArray<FCustomVersionDifference,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
    return pTVar8;
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  local_res10 = param_1->ArrayNum;
  uVar12 = (ulonglong)(int)local_res10;
  pFVar13 = (FGuid *)(param_1->AllocatorInstance).Data;
  pFVar14 = (FGuid *)((longlong)pFVar13 + uVar12 * 0x28);
  local_res20 = pFVar14;
  do {
    if (param_1->ArrayNum != (int)uVar12) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FCustomVersion_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar13 == pFVar14) {
      if (SRWLock != (FStaticCustomVersionRegistry *)0x0) {
        ReleaseSRWLockShared((PSRWLOCK)SRWLock);
      }
      return __return_storage_ptr__;
    }
    local_88.A = pFVar13->A;
    local_88.B = pFVar13->B;
    local_88.C = pFVar13->C;
    local_88.D = pFVar13->D;
    pFVar9 = FCustomVersionContainer::GetVersion(&SRWLock->Registered,&local_88);
    if (pFVar9 == (FCustomVersion *)0x0) {
      pFVar10 = TMapBase<FGuid,FStaticCustomVersionRegistry::FPendingRegistration,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FGuid,FStaticCustomVersionRegistry::FPendingRegistration,0>_>
                ::Find((TMapBase<FGuid,FStaticCustomVersionRegistry::FPendingRegistration,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FGuid,FStaticCustomVersionRegistry::FPendingRegistration,0>_>
                        *)&SRWLock->Queue,pFVar13);
      if (pFVar10 != (FPendingRegistration *)0x0) {
        p_Var1 = pFVar10->ValidatorFunc;
        pFVar11 = ::FName::FName(&local_90,pFVar10->FriendlyName);
        local_b8._0_4_ = pFVar13->A;
        local_b8._4_4_ = pFVar13->B;
        uStack_b0._0_4_ = pFVar13->C;
        uStack_b0._4_4_ = pFVar13->D;
        local_c8 = pFVar10->Version;
        local_58 = *pFVar11;
        uStack_a4 = 1;
        iStack_c4 = 1;
        uStack_a0._0_4_ = SUB84(p_Var1,0);
        uStack_a0._4_4_ = (undefined4)((ulonglong)p_Var1 >> 0x20);
        pFVar14 = local_res20;
        param_2 = local_res18;
        uStack_c0 = (undefined4)uStack_a0;
        uStack_bc = uStack_a0._4_4_;
        local_a8 = local_c8;
        uStack_a0 = p_Var1;
        local_98 = local_58;
        local_78 = local_b8;
        uStack_70 = uStack_b0;
        goto LAB_1419e59ca;
      }
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      local_d8 = 0;
      pFStack_d0 = pFVar13;
      if (((pFVar2 <= (FScriptContainerElement *)&local_d8) &&
          ((FScriptContainerElement *)&local_d8 <
           pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TArray<FCustomVersionDifference,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar8;
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == __return_storage_ptr__->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      uVar15 = CONCAT44(uStack_d4,local_d8);
      pFVar16 = pFStack_d0;
LAB_1419e5bf2:
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
      *(undefined8 *)pFVar2 = uVar15;
      *(FGuid **)(pFVar2 + 8) = pFVar16;
    }
    else {
      local_78._0_4_ = (pFVar9->Key).A;
      local_78._4_4_ = (pFVar9->Key).B;
      uStack_70._0_4_ = (pFVar9->Key).C;
      uStack_70._4_4_ = (pFVar9->Key).D;
      local_c8 = pFVar9->Version;
      iStack_c4 = pFVar9->ReferenceCount;
      local_58 = pFVar9->FriendlyName;
      uStack_c0 = *(undefined4 *)&pFVar9->Validator;
      uStack_bc = *(undefined4 *)((longlong)&pFVar9->Validator + 4);
LAB_1419e59ca:
      auVar4._4_4_ = iStack_c4;
      auVar4._0_4_ = local_c8;
      auVar4._8_4_ = uStack_c0;
      auVar4._12_4_ = uStack_bc;
      local_68 = local_c8;
      iStack_64 = iStack_c4;
      uStack_60 = uStack_c0;
      uStack_5c = uStack_bc;
      if ((auVar4._8_8_ != (code *)0x0) &&
         (cVar6 = (*auVar4._8_8_)(pFVar13,param_1,param_2), cVar6 == '\0')) {
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
        local_f8 = 3;
        pFStack_f0 = pFVar13;
        if ((pFVar2 <= (FScriptContainerElement *)&local_f8) &&
           (((FScriptContainerElement *)&local_f8 <
             pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 0x10 &&
            (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)))) {
          pcVar3 = (code *)swi(3);
          pTVar8 = (TArray<FCustomVersionDifference,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar8;
        }
        iVar7 = __return_storage_ptr__->ArrayNum;
        if (iVar7 == __return_storage_ptr__->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        uVar15 = CONCAT44(uStack_f4,local_f8);
        pFVar16 = pFStack_f0;
        goto LAB_1419e5bf2;
      }
      iVar7 = local_c8 - pFVar13[1].A;
      if (iVar7 != 0) {
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
        local_e8 = (iVar7 >> 0x1f) + 2;
        pFStack_e0 = pFVar13;
        if (((pFVar2 <= (FScriptContainerElement *)&local_e8) &&
            ((FScriptContainerElement *)&local_e8 <
             pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar8 = (TArray<FCustomVersionDifference,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar8;
        }
        iVar7 = __return_storage_ptr__->ArrayNum;
        if (iVar7 == __return_storage_ptr__->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        uVar15 = CONCAT44(uStack_e4,local_e8);
        pFVar16 = pFStack_e0;
        goto LAB_1419e5bf2;
      }
    }
    uVar12 = (ulonglong)local_res10;
    pFVar13 = (FGuid *)&pFVar13[2].C;
    param_2 = local_res18;
  } while( true );
}

// Get @ 1419fbd60

TOptional<FCustomVersion> * __cdecl
FCurrentCustomVersions::Get(TOptional<FCustomVersion> *__return_storage_ptr__,FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  FStaticCustomVersionRegistry *this;
  TOptional<FCustomVersion> *pTVar3;
  
  this = FStaticCustomVersionRegistry::Get();
  if (this == (FStaticCustomVersionRegistry *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TOptional<FCustomVersion> *)(*pcVar1)();
      return pTVar3;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)this);
  FStaticCustomVersionRegistry::Find(this,__return_storage_ptr__,param_1);
  if (this != (FStaticCustomVersionRegistry *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)this);
  }
  return __return_storage_ptr__;
}

// GetAll @ 1419fc680

FCustomVersionContainer * __cdecl
FCurrentCustomVersions::GetAll(FCustomVersionContainer *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FStaticCustomVersionRegistry *this;
  FCustomVersionContainer *pFVar3;
  
  this = FStaticCustomVersionRegistry::Get();
  if (this == (FStaticCustomVersionRegistry *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FCustomVersionContainer *)(*pcVar1)();
      return pFVar3;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)this);
  if (*(int *)&(this->Queue).field_0xc08 == *(int *)&(this->Queue).field_0xc2c) {
    FCustomVersionContainer::FCustomVersionContainer(__return_storage_ptr__,&this->Registered);
    ReleaseSRWLockShared((PSRWLOCK)this);
    return __return_storage_ptr__;
  }
  ReleaseSRWLockShared((PSRWLOCK)this);
  AcquireSRWLockExclusive((PSRWLOCK)this);
  FStaticCustomVersionRegistry::RegisterQueue(this);
  FCustomVersionContainer::FCustomVersionContainer(__return_storage_ptr__,&this->Registered);
  ReleaseSRWLockExclusive((PSRWLOCK)this);
  return __return_storage_ptr__;
}

// Register @ 141a14910

void __cdecl
FCurrentCustomVersions::Register
          (FGuid *param_1,int param_2,wchar_t *param_3,
          _func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  FStaticCustomVersionRegistry *SRWLock;
  FPendingRegistration *pFVar3;
  FGuid *local_48;
  int *local_40;
  int local_38 [2];
  wchar_t *local_30;
  _func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
  *local_28;
  
  SRWLock = FStaticCustomVersionRegistry::Get();
  if (SRWLock == (FStaticCustomVersionRegistry *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  pFVar3 = TMapBase<FGuid,FStaticCustomVersionRegistry::FPendingRegistration,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FGuid,FStaticCustomVersionRegistry::FPendingRegistration,0>_>
           ::Find((TMapBase<FGuid,FStaticCustomVersionRegistry::FPendingRegistration,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FGuid,FStaticCustomVersionRegistry::FPendingRegistration,0>_>
                   *)&SRWLock->Queue,param_1);
  if (pFVar3 != (FPendingRegistration *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Registry.Queue.Find(Key) == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\CustomVersion.cpp"
                       ,0xf3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_40 = local_38;
  local_48 = param_1;
  local_38[0] = param_2;
  local_30 = param_3;
  local_28 = param_4;
  TSet<TTuple<FGuid,FStaticCustomVersionRegistry::FPendingRegistration>,TDefaultMapHashableKeyFuncs<FGuid,FStaticCustomVersionRegistry::FPendingRegistration,0>,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  ::Emplace<TPairInitializer<FGuid_const_&,FStaticCustomVersionRegistry::FPendingRegistration_&&>_>
            ((TSet<TTuple<FGuid,FStaticCustomVersionRegistry::FPendingRegistration>,TDefaultMapHashableKeyFuncs<FGuid,FStaticCustomVersionRegistry::FPendingRegistration,0>,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
              *)&SRWLock->Queue,
             (TPairInitializer<FGuid_const_&,FStaticCustomVersionRegistry::FPendingRegistration_&&>
              *)&stack0x00000010,(bool *)&local_48);
  if (SRWLock != (FStaticCustomVersionRegistry *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return;
}

// Unregister @ 141a2bb10

void __cdecl FCurrentCustomVersions::Unregister(FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  FStaticCustomVersionRegistry *this;
  FGuid local_18;
  
  this = FStaticCustomVersionRegistry::Get();
  if (this == (FStaticCustomVersionRegistry *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)this);
  local_18.A = param_1->A;
  local_18.B = param_1->B;
  local_18.C = param_1->C;
  local_18.D = param_1->D;
  FStaticCustomVersionRegistry::Unregister(this,&local_18);
  if (this != (FStaticCustomVersionRegistry *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)this);
  }
  return;
}

