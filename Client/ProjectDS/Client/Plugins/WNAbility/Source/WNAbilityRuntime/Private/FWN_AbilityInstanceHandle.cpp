// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WNAbilityRuntime
// Functions: 4

// StaticStruct @ 148db3af0

UScriptStruct * __cdecl FWN_AbilityInstanceHandle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWN_AbilityInstanceHandle.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WNAbilityRuntime();
    Z_Registration_Info_UScriptStruct_FWN_AbilityInstanceHandle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWN_AbilityInstanceHandle,(UObject *)pUVar1,
                         L"WN_AbilityInstanceHandle");
  }
  return Z_Registration_Info_UScriptStruct_FWN_AbilityInstanceHandle.OuterSingleton;
}

// FWN_AbilityInstanceHandle @ 148db5bc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FWN_AbilityInstanceHandle * __thiscall
FWN_AbilityInstanceHandle::FWN_AbilityInstanceHandle(FWN_AbilityInstanceHandle *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  FWN_AbilityInstanceHandle *pFVar5;
  uint uVar6;
  TReferenceControllerBase<1> *pTVar7;
  FWN_AbilityInstanceHandle local_18;
  
  (this->HandleImpl).Object = (FWN_AbilityInstanceHandleImpl *)0x0;
  (this->HandleImpl).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_18.HandleImpl.Object =
         (FWN_AbilityInstanceHandleImpl *)___xmm_00000000000000000000000000000010;
    pTVar7 = (TReferenceControllerBase<1> *)&DAT_00000010;
    local_18.HandleImpl.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFWN_AbilityInstanceHandleImpl___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ = -1;
    if (sAbilityInstanceUniqueIDGenerator.FreedIDs.ArrayNum < 1) {
      if (sAbilityInstanceUniqueIDGenerator.NumCreated == 0xffffffff) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumCreated != 0xffffffffui32",
                           "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WNAbility\\Source\\WNAbilityRuntime\\Public\\WNUniqueIDGenerator.h"
                           ,0x62,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FWN_AbilityInstanceHandle *)(*pcVar2)();
          return pFVar5;
        }
      }
      sAbilityInstanceUniqueIDGenerator.NumCreated =
           sAbilityInstanceUniqueIDGenerator.NumCreated + 1;
      uVar6 = sAbilityInstanceUniqueIDGenerator.NextID + 1;
      sAbilityInstanceUniqueIDGenerator.NextID = uVar6;
    }
    else {
      uVar1 = sAbilityInstanceUniqueIDGenerator.FreedIDs.ArrayNum - 1;
      uVar6 = *(uint *)(sAbilityInstanceUniqueIDGenerator.FreedIDs.AllocatorInstance.Data +
                       (longlong)(int)uVar1 * 4);
      if (~uVar1 + sAbilityInstanceUniqueIDGenerator.FreedIDs.ArrayNum != 0) {
        memmove(sAbilityInstanceUniqueIDGenerator.FreedIDs.AllocatorInstance.Data +
                (longlong)(int)uVar1 * 4,
                sAbilityInstanceUniqueIDGenerator.FreedIDs.AllocatorInstance.Data +
                (longlong)(int)uVar1 * 4 + 4,
                (longlong)(int)(~uVar1 + sAbilityInstanceUniqueIDGenerator.FreedIDs.ArrayNum) << 2);
      }
      sAbilityInstanceUniqueIDGenerator.FreedIDs.ArrayNum =
           sAbilityInstanceUniqueIDGenerator.FreedIDs.ArrayNum + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,&sAbilityInstanceUniqueIDGenerator.FreedIDs.AllocatorInstance,
                 sAbilityInstanceUniqueIDGenerator.FreedIDs.ArrayNum,
                 &sAbilityInstanceUniqueIDGenerator.FreedIDs.ArrayMax);
    }
    pTVar7 = pTVar4 + 1;
    pTVar4[1]._padding_ = CONCAT44(param_1,uVar6);
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FWN_AbilityInstanceHandle *)(*pcVar2)();
        return pFVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.HandleImpl.SharedReferenceCount.ReferenceController = pTVar4;
    local_18.HandleImpl.Object = (FWN_AbilityInstanceHandleImpl *)pTVar7;
  }
  if (this != &local_18) {
    (this->HandleImpl).Object = (FWN_AbilityInstanceHandleImpl *)pTVar7;
    local_18.HandleImpl.Object = (FWN_AbilityInstanceHandleImpl *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->HandleImpl).SharedReferenceCount,&local_18.HandleImpl.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.HandleImpl.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return this;
}

// FWN_AbilityInstanceHandle @ 148db5db0

FWN_AbilityInstanceHandle * __thiscall
FWN_AbilityInstanceHandle::FWN_AbilityInstanceHandle(FWN_AbilityInstanceHandle *this)

{
  (this->HandleImpl).Object = (FWN_AbilityInstanceHandleImpl *)0x0;
  (this->HandleImpl).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~FWN_AbilityInstanceHandle @ 148db66c0

void __thiscall
FWN_AbilityInstanceHandle::~FWN_AbilityInstanceHandle(FWN_AbilityInstanceHandle *this)

{
  FSharedReferencer<1> *this_00;
  FWN_AbilityInstanceHandle local_18;
  
  this_00 = &(this->HandleImpl).SharedReferenceCount;
  local_18.HandleImpl.Object = (FWN_AbilityInstanceHandleImpl *)0x0;
  local_18.HandleImpl.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (this != &local_18) {
    (this->HandleImpl).Object = (FWN_AbilityInstanceHandleImpl *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (this_00,&local_18.HandleImpl.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.HandleImpl.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (this_00->ReferenceController);
  return;
}

