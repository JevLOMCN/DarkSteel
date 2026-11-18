// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b422380

UClass * __cdecl UDS_AttackableManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AttackableManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AttackableManager",
               &Z_Registration_Info_UClass_UDS_AttackableManager.InnerSingleton,
               StaticRegisterNativesUDS_AttackableManager,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AttackableManager>,
               InternalVTableHelperCtorCaller<UDS_AttackableManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AttackableManager.InnerSingleton;
}

// UDS_AttackableManager @ 14b423c20

UDS_AttackableManager * __thiscall
UDS_AttackableManager::UDS_AttackableManager(UDS_AttackableManager *this,FVTableHelper *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_AttackableManager__6B_;
  (this->PCAttackableHandlers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PCAttackableHandlers).ArrayNum = 0;
  (this->PCAttackableHandlers).ArrayMax = 0;
  (this->NPCAttackableHandler).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NPCAttackableHandler).ArrayNum = 0;
  (this->NPCAttackableHandler).ArrayMax = 0;
  return this;
}

// UDS_AttackableManager @ 14b423c60

UDS_AttackableManager * __thiscall
UDS_AttackableManager::UDS_AttackableManager
          (UDS_AttackableManager *this,FObjectInitializer *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_AttackableManager__6B_;
  (this->PCAttackableHandlers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PCAttackableHandlers).ArrayNum = 0;
  (this->PCAttackableHandlers).ArrayMax = 0;
  (this->NPCAttackableHandler).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NPCAttackableHandler).ArrayNum = 0;
  (this->NPCAttackableHandler).ArrayMax = 0;
  return this;
}

// ~UDS_AttackableManager @ 14b424020

void __thiscall UDS_AttackableManager::~UDS_AttackableManager(UDS_AttackableManager *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDS_AttackableManager__6B_;
  DestructItems<TSharedPtr<FDS_AttackableHandler,1>,int>
            ((TSharedPtr<FDS_AttackableHandler,1> *)
             (this->NPCAttackableHandler).AllocatorInstance.Data,
             (this->NPCAttackableHandler).ArrayNum);
  pFVar1 = (this->NPCAttackableHandler).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<FDS_AttackableHandler,1>,int>
            ((TSharedPtr<FDS_AttackableHandler,1> *)
             (this->PCAttackableHandlers).AllocatorInstance.Data,
             (this->PCAttackableHandlers).ArrayNum);
  pFVar1 = (this->PCAttackableHandlers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b424ff0

UClass * __cdecl UDS_AttackableManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AttackableManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AttackableManager",
               &Z_Registration_Info_UClass_UDS_AttackableManager.InnerSingleton,
               StaticRegisterNativesUDS_AttackableManager,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AttackableManager>,
               InternalVTableHelperCtorCaller<UDS_AttackableManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AttackableManager.InnerSingleton;
}

// StaticRegisterNativesUDS_AttackableManager @ 14b425570

void __cdecl UDS_AttackableManager::StaticRegisterNativesUDS_AttackableManager(void)

{
  return;
}

// GetInst @ 14baab280

UDS_AttackableManager * __cdecl UDS_AttackableManager::GetInst(void)

{
  int iVar1;
  UDS_GameInstance *this;
  UClass *pUVar2;
  UDS_AttackableManager *pUVar3;
  
  this = UDS_GameInstance::GetInst();
  if (this == (UDS_GameInstance *)0x0) {
    return (UDS_AttackableManager *)0x0;
  }
  pUVar2 = Z_Construct_UClass_UDS_AttackableManager_NoRegister();
  pUVar3 = (UDS_AttackableManager *)UDS_GameInstance::GetManager(this,(FName)pUVar2->_padding_);
  if (pUVar3 != (UDS_AttackableManager *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_AttackableManager_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return pUVar3;
    }
  }
  return (UDS_AttackableManager *)0x0;
}

// Init @ 14bab2f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_AttackableManager::Init(UDS_AttackableManager *this)

{
  int *piVar1;
  TArray<TSharedPtr<FDS_AttackableHandler,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  TReferenceControllerBase<1> *pTVar8;
  UDS_LogManager *pUVar9;
  FScriptContainerElement *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  FScriptContainerElement *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  undefined1 auStackY_198 [32];
  undefined1 local_168 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pTVar8 = ::operator_new(0x18);
  pTVar13 = (TReferenceControllerBase<1> *)&DAT_00000010;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
    pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11 = pTVar8 + 1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFDS_AttackableNPC___00_SharedPointerInternals__6B_;
    pTVar8[1]._padding_ = (longlong)&___7FDS_AttackableNPC__6B_;
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  iVar7 = (this->NPCAttackableHandler).ArrayNum;
  piVar1 = &(this->NPCAttackableHandler).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->NPCAttackableHandler).AllocatorInstance,piVar1);
  }
  (this->NPCAttackableHandler).ArrayNum = iVar7 + 1;
  pFVar10 = (this->NPCAttackableHandler).AllocatorInstance.Data;
  *(TReferenceControllerBase<1> **)(pFVar10 + (longlong)iVar7 * 0x10) = pTVar11;
  *(TReferenceControllerBase<1> **)(pFVar10 + (longlong)iVar7 * 0x10 + 8) = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  pTVar2 = &this->PCAttackableHandlers;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
    pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11 = pTVar8 + 1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFDS_AttackablePKZone___00_SharedPointerInternals__6B_
    ;
    pTVar8[1]._padding_ = (longlong)&___7FDS_AttackablePKZone__6B_;
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  iVar7 = (this->PCAttackableHandlers).ArrayNum;
  if (iVar7 == (this->PCAttackableHandlers).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,&(this->PCAttackableHandlers).ArrayMax);
  }
  (this->PCAttackableHandlers).ArrayNum = iVar7 + 1;
  pFVar10 = (pTVar2->AllocatorInstance).Data;
  *(TReferenceControllerBase<1> **)(pFVar10 + (longlong)iVar7 * 0x10) = pTVar11;
  *(TReferenceControllerBase<1> **)(pFVar10 + (longlong)iVar7 * 0x10 + 8) = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
    pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11 = pTVar8 + 1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDS_AttackableTeamMode___00_SharedPointerInternals__6B_
    ;
    pTVar8[1]._padding_ = (longlong)&___7FDS_AttackableTeamMode__6B_;
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  iVar7 = (this->PCAttackableHandlers).ArrayNum;
  if (iVar7 == (this->PCAttackableHandlers).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,&(this->PCAttackableHandlers).ArrayMax);
  }
  (this->PCAttackableHandlers).ArrayNum = iVar7 + 1;
  pFVar10 = (pTVar2->AllocatorInstance).Data;
  *(TReferenceControllerBase<1> **)(pFVar10 + (longlong)iVar7 * 0x10) = pTVar11;
  *(TReferenceControllerBase<1> **)(pFVar10 + (longlong)iVar7 * 0x10 + 8) = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
    pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11 = pTVar8 + 1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDS_AttackablePKGuard___00_SharedPointerInternals__6B_
    ;
    pTVar8[1]._padding_ = (longlong)&___7FDS_AttackablePKGuard__6B_;
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  iVar7 = (this->PCAttackableHandlers).ArrayNum;
  if (iVar7 == (this->PCAttackableHandlers).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,&(this->PCAttackableHandlers).ArrayMax);
  }
  (this->PCAttackableHandlers).ArrayNum = iVar7 + 1;
  pFVar10 = (pTVar2->AllocatorInstance).Data;
  *(TReferenceControllerBase<1> **)(pFVar10 + (longlong)iVar7 * 0x10) = pTVar11;
  *(TReferenceControllerBase<1> **)(pFVar10 + (longlong)iVar7 * 0x10 + 8) = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
    pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11 = pTVar8 + 1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFDS_AttackableParty___00_SharedPointerInternals__6B_;
    pTVar8[1]._padding_ = (longlong)&___7FDS_AttackableParty__6B_;
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  iVar7 = (this->PCAttackableHandlers).ArrayNum;
  if (iVar7 == (this->PCAttackableHandlers).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,&(this->PCAttackableHandlers).ArrayMax);
  }
  (this->PCAttackableHandlers).ArrayNum = iVar7 + 1;
  pFVar10 = (pTVar2->AllocatorInstance).Data;
  *(TReferenceControllerBase<1> **)(pFVar10 + (longlong)iVar7 * 0x10) = pTVar11;
  *(TReferenceControllerBase<1> **)(pFVar10 + (longlong)iVar7 * 0x10 + 8) = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
    pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11 = pTVar8 + 1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDS_AttackableOwnerMonsterAttacker___00_SharedPointerInternals__6B_
    ;
    pTVar8[1]._padding_ = (longlong)&___7FDS_AttackableOwnerMonsterAttacker__6B_;
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  iVar7 = (this->PCAttackableHandlers).ArrayNum;
  if (iVar7 == (this->PCAttackableHandlers).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,&(this->PCAttackableHandlers).ArrayMax);
  }
  (this->PCAttackableHandlers).ArrayNum = iVar7 + 1;
  pFVar10 = (pTVar2->AllocatorInstance).Data;
  *(TReferenceControllerBase<1> **)(pFVar10 + (longlong)iVar7 * 0x10) = pTVar11;
  *(TReferenceControllerBase<1> **)(pFVar10 + (longlong)iVar7 * 0x10 + 8) = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
    pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11 = pTVar8 + 1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDS_AttackableForceAttack___00_SharedPointerInternals__6B_
    ;
    pTVar8[1]._padding_ = (longlong)&___7FDS_AttackableForceAttack__6B_;
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  iVar7 = (this->PCAttackableHandlers).ArrayNum;
  if (iVar7 == (this->PCAttackableHandlers).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,&(this->PCAttackableHandlers).ArrayMax);
  }
  (this->PCAttackableHandlers).ArrayNum = iVar7 + 1;
  pFVar10 = (pTVar2->AllocatorInstance).Data;
  *(TReferenceControllerBase<1> **)(pFVar10 + (longlong)iVar7 * 0x10) = pTVar11;
  *(TReferenceControllerBase<1> **)(pFVar10 + (longlong)iVar7 * 0x10 + 8) = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
    pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11 = pTVar8 + 1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDS_AttackableAttackMe___00_SharedPointerInternals__6B_
    ;
    pTVar8[1]._padding_ = (longlong)&___7FDS_AttackableAttackMe__6B_;
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  iVar7 = (this->PCAttackableHandlers).ArrayNum;
  if (iVar7 == (this->PCAttackableHandlers).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,&(this->PCAttackableHandlers).ArrayMax);
  }
  (this->PCAttackableHandlers).ArrayNum = iVar7 + 1;
  pFVar10 = (pTVar2->AllocatorInstance).Data;
  *(TReferenceControllerBase<1> **)(pFVar10 + (longlong)iVar7 * 0x10) = pTVar11;
  *(TReferenceControllerBase<1> **)(pFVar10 + (longlong)iVar7 * 0x10 + 8) = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar13 = pTVar8 + 1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDS_AttackableCriminalGrade___00_SharedPointerInternals__6B_
    ;
    pTVar8[1]._padding_ = (longlong)&___7FDS_AttackableCriminalGrade__6B_;
    if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  iVar7 = (this->PCAttackableHandlers).ArrayNum;
  if (iVar7 == (this->PCAttackableHandlers).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,&(this->PCAttackableHandlers).ArrayMax);
  }
  (this->PCAttackableHandlers).ArrayNum = iVar7 + 1;
  pFVar10 = (pTVar2->AllocatorInstance).Data;
  *(TReferenceControllerBase<1> **)(pFVar10 + (longlong)iVar7 * 0x10) = pTVar13;
  *(TReferenceControllerBase<1> **)(pFVar10 + (longlong)iVar7 * 0x10 + 8) = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  iVar7 = (this->PCAttackableHandlers).ArrayNum;
  pFVar10 = (pTVar2->AllocatorInstance).Data;
  pFVar12 = pFVar10 + (longlong)iVar7 * 0x10;
  while( true ) {
    if ((this->PCAttackableHandlers).ArrayNum != iVar7) {
      local_168[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FDS_AttackableHandler,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_168);
    }
    if (pFVar10 == pFVar12) break;
    pTVar13 = *(TReferenceControllerBase<1> **)(pFVar10 + 8);
    puVar3 = *(undefined8 **)pFVar10;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (puVar3 == (undefined8 *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    cVar6 = (**(code **)*puVar3)(puVar3);
    if (cVar6 == '\0') {
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 != (UDS_LogManager *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_AttackableManager::Init",0x1b,Yes);
        UDS_LogManager::PrintLog
                  (pUVar9,1,Error,local_158.Ptr,0x3c,L"AttackHandler Init Failed!!!!!");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    pFVar10 = pFVar10 + 0x10;
  }
  return;
}

// IsAttackable @ 14bab6b40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
UDS_AttackableManager::IsAttackable
          (UDS_AttackableManager *this,FDS_EntityBase *param_1,FDS_EntityBase *param_2)

{
  EDS_EntityType EVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  TReferenceControllerBase<1> *pTVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  FDS_EntityBase *local_48;
  FDS_EntityBase *local_40;
  undefined1 local_38;
  
  EVar1 = param_2->EntityType;
  local_38 = 0;
  if (EVar1 == MainCharacter) {
    return true;
  }
  local_48 = param_1;
  local_40 = param_2;
  if (EVar1 == NPC) {
    iVar2 = (this->NPCAttackableHandler).ArrayNum;
    pFVar9 = (this->NPCAttackableHandler).AllocatorInstance.Data;
    pFVar10 = pFVar9 + (longlong)iVar2 * 0x10;
    while( true ) {
      if ((this->NPCAttackableHandler).ArrayNum != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<FDS_AttackableHandler,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar9 == pFVar10) {
        return (bool)local_38;
      }
      pTVar8 = *(TReferenceControllerBase<1> **)(pFVar9 + 8);
      plVar3 = *(longlong **)pFVar9;
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((plVar3 == (longlong *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      cVar7 = (**(code **)(*plVar3 + 8))(plVar3,&local_48);
      if (cVar7 != '\0') break;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      pFVar9 = pFVar9 + 0x10;
    }
  }
  else {
    if (EVar1 != NetCharacter) {
      return false;
    }
    iVar2 = (this->PCAttackableHandlers).ArrayNum;
    pFVar9 = (this->PCAttackableHandlers).AllocatorInstance.Data;
    pFVar10 = pFVar9 + (longlong)iVar2 * 0x10;
    while( true ) {
      if ((this->PCAttackableHandlers).ArrayNum != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<FDS_AttackableHandler,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar9 == pFVar10) {
        return (bool)local_38;
      }
      pTVar8 = *(TReferenceControllerBase<1> **)(pFVar9 + 8);
      plVar3 = *(longlong **)pFVar9;
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((plVar3 == (longlong *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      cVar7 = (**(code **)(*plVar3 + 8))(plVar3,&local_48);
      if (cVar7 != '\0') break;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      pFVar9 = pFVar9 + 0x10;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return (bool)local_38;
}

// IsAttackable @ 14bab6cf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
UDS_AttackableManager::IsAttackable(UDS_AttackableManager *this,ulong64 param_1,ulong64 param_2)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  FDS_EntityBase *pFVar3;
  ulong64 local_res10;
  ulong64 local_res18 [2];
  
  local_res10 = param_1;
  local_res18[0] = param_2;
  pFVar2 = FDS_EntityBase::GetEntityBase(&local_res10);
  pFVar3 = FDS_EntityBase::GetEntityBase(local_res18);
  if ((pFVar2 != (FDS_EntityBase *)0x0) && (pFVar3 != (FDS_EntityBase *)0x0)) {
    bVar1 = IsAttackable(this,pFVar2,pFVar3);
    return bVar1;
  }
  return false;
}

