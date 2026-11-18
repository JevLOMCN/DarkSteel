// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 16

// ~IPackageResourceManager @ 14212ca90

void __thiscall IPackageResourceManager::~IPackageResourceManager(IPackageResourceManager *this)

{
  return;
}

// DoesPackageExist @ 1421383a0

bool __thiscall
IPackageResourceManager::DoesPackageExist
          (IPackageResourceManager *this,FPackagePath *param_1,FPackagePath *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)((longlong)*this + 0x18))
                    (this,param_1,FBulkDataCookedIndex::Default.Value,0,param_2);
  return (bool)uVar1;
}

// FileSize @ 1421395a0

long64 __thiscall
IPackageResourceManager::FileSize
          (IPackageResourceManager *this,FPackagePath *param_1,FPackagePath *param_2)

{
  long64 lVar1;
  
  lVar1 = (**(code **)((longlong)*this + 0x20))
                    (this,param_1,FBulkDataCookedIndex::Default.Value,0,param_2);
  return lVar1;
}

// FindPackagesRecursive @ 14213acb0

void __thiscall
IPackageResourceManager::FindPackagesRecursive
          (IPackageResourceManager *this,TArray<FPackagePath,TSizedDefaultAllocator<32>_> *param_1,
          TStringView<wchar_t> *param_2,TStringView<wchar_t> *param_3,TStringView<wchar_t> *param_4,
          TStringView<wchar_t> *param_5)

{
  int *piVar1;
  FPackagePath *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  FPackagePath *pFVar8;
  FPackagePath *pFVar9;
  FPackagePath *local_58;
  ulonglong local_50;
  wchar_t *local_48;
  undefined8 uStack_40;
  wchar_t *local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_58 = (FPackagePath *)0x0;
  local_50 = 0;
  local_48 = param_5->DataPtr;
  uStack_40 = *(undefined8 *)&param_5->Size;
  local_28 = *(undefined4 *)&param_3->DataPtr;
  uStack_24 = *(undefined4 *)((longlong)&param_3->DataPtr + 4);
  iStack_20 = param_3->Size;
  uStack_1c = *(undefined4 *)&param_3->field_0xc;
  local_38 = param_4->DataPtr;
  uStack_30 = *(undefined8 *)&param_4->Size;
  local_18 = *(undefined4 *)&param_2->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iStack_10 = param_2->Size;
  uStack_c = *(undefined4 *)&param_2->field_0xc;
  (**(code **)((longlong)*this + 0x60))(local_28,&local_58,&local_18,&local_28,&local_38,&local_48);
  uVar7 = local_50 & 0xffffffff;
  if ((int)local_50 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar7);
  }
  piVar1 = &param_1->ArrayMax;
  if (*piVar1 < (int)local_50) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,(int)local_50,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
    uVar7 = local_50 & 0xffffffff;
  }
  iVar6 = (int)uVar7;
  pFVar9 = (FPackagePath *)((longlong)iVar6 * 0x10 + (longlong)local_58);
  pFVar8 = local_58;
  while( true ) {
    if ((int)uVar7 != iVar6) {
      param_5._0_1_ = 0;
      `TCheckedPointerIterator<TTuple<FPackagePath,enum_EPackageSegment>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&param_5);
      uVar7 = local_50 & 0xffffffff;
    }
    if (pFVar8 == pFVar9) break;
    if ((char)pFVar8[1].PackageName.ComparisonIndex.Value == '\0') {
      pFVar2 = (FPackagePath *)(param_1->AllocatorInstance).Data;
      if ((pFVar2 <= pFVar8) && (pFVar8 < pFVar2 + *piVar1)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar5 = param_1->ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar5 + 1;
      FPackagePath::FPackagePath
                ((FPackagePath *)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 0xc),pFVar8)
      ;
      uVar7 = local_50 & 0xffffffff;
    }
    pFVar8 = (FPackagePath *)&pFVar8[1].PackageName.Number;
  }
  if (local_58 != (FPackagePath *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// Get @ 14213c480

IPackageResourceManager * __cdecl IPackageResourceManager::Get(void)

{
  code *pcVar1;
  bool bVar2;
  IPackageResourceManager *pIVar3;
  
  if ((GPackageResourceManager == (IPackageResourceManager *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GPackageResourceManager",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageResourceManager.cpp"
                         ,0x1a,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IPackageResourceManager *)(*pcVar1)();
    return pIVar3;
  }
  return GPackageResourceManager;
}

// GetOnClearPackageResourceManagerDelegate @ 14213df20

TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
IPackageResourceManager::GetOnClearPackageResourceManagerDelegate(void)

{
  return &GOnClearPackageResourceManagerDelegate;
}

// GetSetPackageResourceManagerDelegate @ 14213e910

TDelegate<IPackageResourceManager_*___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
IPackageResourceManager::GetSetPackageResourceManagerDelegate(void)

{
  return &GSetPackageResourceManagerDelegate;
}

// Initialize @ 1421429e0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl IPackageResourceManager::Initialize(void)

{
  code *pcVar1;
  FSharedReferencer<1> FVar2;
  char cVar3;
  bool bVar4;
  IPackageResourceManager *pIVar5;
  TReferenceControllerBase<1> *pTVar6;
  FIoDispatcher *this;
  TSharedRef<IIoDispatcherBackend,1> local_48;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &GSetPackageResourceManagerDelegate,&local_38);
  if (((GSetPackageResourceManagerDelegate._16_4_ == 0) ||
      (GSetPackageResourceManagerDelegate._8_8_ == 0)) ||
     (cVar3 = (**(code **)(*(longlong *)GSetPackageResourceManagerDelegate._8_8_ + 0x38))(),
     cVar3 == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  if (bVar4) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &GSetPackageResourceManagerDelegate,&local_20);
    pIVar5 = (IPackageResourceManager *)0x0;
    if (GSetPackageResourceManagerDelegate._16_4_ != 0) {
      pIVar5 = (IPackageResourceManager *)GSetPackageResourceManagerDelegate._8_8_;
    }
    pIVar5 = (IPackageResourceManager *)(**(code **)((longlong)*pIVar5 + 0x60))();
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
    GPackageResourceManager = pIVar5;
  }
  if ((GPackageResourceManager == (IPackageResourceManager *)0x0) &&
     (pIVar5 = ::operator_new(8), GPackageResourceManager = (IPackageResourceManager *)0x0,
     pIVar5 != (IPackageResourceManager *)0x0)) {
    *pIVar5 = (IPackageResourceManager)&___7FPackageResourceManagerFile__6B_;
    GPackageResourceManager = pIVar5;
  }
  bVar4 = FIoDispatcher::IsInitialized();
  pIVar5 = GPackageResourceManager;
  if (bVar4) {
    pTVar6 = ::operator_new(0xe0);
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      this = FIoDispatcher::Get();
      local_48.Object = (IIoDispatcherBackend *)&DAT_00000010;
      local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pTVar6->SharedReferenceCount = (atomic<int>)0x1;
      pTVar6->WeakReferenceCount = (atomic<int>)0x1;
      *(IPackageResourceManager **)&pTVar6[1].SharedReferenceCount = pIVar5;
      pTVar6->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFPackageResourceIoBackend_UE___00_SharedPointerInternals__6B_
      ;
      pTVar6[1]._padding_ = (longlong)&___7FPackageResourceIoBackend_UE__6B_;
      pTVar6[2]._padding_ = 0;
      pTVar6[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar6[2].WeakReferenceCount = (atomic<int>)0x0;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar6 + 3),4000);
      pTVar6[5].SharedReferenceCount = (atomic<int>)0x0;
      pTVar6[5].WeakReferenceCount = (atomic<int>)0x0;
      pTVar6[6]._padding_ = 0;
      pTVar6[7].SharedReferenceCount = (atomic<int>)0x0;
      pTVar6[7].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined4 *)&pTVar6[8]._padding_ = 0;
      *(undefined4 *)((longlong)&pTVar6[8]._padding_ + 4) = 0x80;
      pTVar6[8].SharedReferenceCount = (atomic<int>)0xffffffff;
      pTVar6[8].WeakReferenceCount = (atomic<int>)0x0;
      pTVar6[9].SharedReferenceCount = (atomic<int>)0x0;
      pTVar6[9].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined4 *)&pTVar6[10]._padding_ = 0;
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)&pTVar6[10].SharedReferenceCount,4000);
      pTVar6[0xd]._padding_ = 0;
      pTVar6[0xd].SharedReferenceCount = (atomic<int>)0x0;
      pTVar6[0xd].WeakReferenceCount = (atomic<int>)0x0;
      if ((pTVar6 + 1 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      this = FIoDispatcher::Get();
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      local_48.Object = (IIoDispatcherBackend *)(pTVar6 + 1);
      local_48.SharedReferenceCount.ReferenceController = pTVar6;
    }
    FVar2.ReferenceController = local_48.SharedReferenceCount.ReferenceController;
    FIoDispatcher::Mount(this,&local_48,0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar2.ReferenceController);
  }
  return;
}

// IteratePackagesInLocalOnlyDirectory @ 142143c60

void __thiscall
IPackageResourceManager::IteratePackagesInLocalOnlyDirectory
          (IPackageResourceManager *this,TStringView<wchar_t> *param_1,
          TFunctionRef<bool___cdecl(FPackagePath_const_&)> *param_2)

{
  TFunctionRef<bool___cdecl(FPackagePath_const_&)> *local_res8 [4];
  code *local_28;
  TFunctionRef<bool___cdecl(FPackagePath_const_&)> **local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)&param_1->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_10 = param_1->Size;
  uStack_c = *(undefined4 *)&param_1->field_0xc;
  local_20 = local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`IPackageResourceManager::IteratePackagesInLocalOnlyDirectory'::__l2::<lambda_1>,bool,FPackagePath_const_&,enum_EPackageSegment>
             ::Call;
  local_res8[0] = param_2;
  (**(code **)((longlong)*this + 0x70))(local_18,&local_18,&local_28);
  return;
}

// IteratePackagesInPath @ 142143da0

void __thiscall
IPackageResourceManager::IteratePackagesInPath
          (IPackageResourceManager *this,TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2
          ,TStringView<wchar_t> *param_3,TFunctionRef<bool___cdecl(FPackagePath_const_&)> *param_4)

{
  code *local_48;
  TFunctionRef<bool___cdecl(FPackagePath_const_&)> **local_40;
  wchar_t *local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_38 = param_3->DataPtr;
  uStack_30 = *(undefined8 *)&param_3->Size;
  local_28 = *(undefined4 *)&param_2->DataPtr;
  uStack_24 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iStack_20 = param_2->Size;
  uStack_1c = *(undefined4 *)&param_2->field_0xc;
  local_40 = &param_4;
  local_18 = *(undefined4 *)&param_1->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_10 = param_1->Size;
  uStack_c = *(undefined4 *)&param_1->field_0xc;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`IPackageResourceManager::IteratePackagesInPath'::__l2::<lambda_1>,bool,FPackagePath_const_&,enum_EPackageSegment>
             ::Call;
  (**(code **)((longlong)*this + 0x68))(local_18,&local_18,&local_28,&local_38,&local_48);
  return;
}

// IteratePackagesStatInLocalOnlyDirectory @ 142143ea0

void __thiscall
IPackageResourceManager::IteratePackagesStatInLocalOnlyDirectory
          (IPackageResourceManager *this,TStringView<wchar_t> *param_1,
          TFunctionRef<bool___cdecl(FPackagePath_const_&,FFileStatData_const_&)> *param_2)

{
  TFunctionRef<bool___cdecl(FPackagePath_const_&,FFileStatData_const_&)> *local_res8 [4];
  code *local_28;
  TFunctionRef<bool___cdecl(FPackagePath_const_&,FFileStatData_const_&)> **local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)&param_1->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_10 = param_1->Size;
  uStack_c = *(undefined4 *)&param_1->field_0xc;
  local_20 = local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`IPackageResourceManager::IteratePackagesStatInLocalOnlyDirectory'::__l2::<lambda_1>,bool,FPackagePath_const_&,enum_EPackageSegment,FFileStatData_const_&>
             ::Call;
  local_res8[0] = param_2;
  (**(code **)((longlong)*this + 0x80))(local_18,&local_18,&local_28);
  return;
}

// IteratePackagesStatInPath @ 142143fd0

void __thiscall
IPackageResourceManager::IteratePackagesStatInPath
          (IPackageResourceManager *this,TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2
          ,TStringView<wchar_t> *param_3,
          TFunctionRef<bool___cdecl(FPackagePath_const_&,FFileStatData_const_&)> *param_4)

{
  code *local_48;
  TFunctionRef<bool___cdecl(FPackagePath_const_&,FFileStatData_const_&)> **local_40;
  wchar_t *local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_38 = param_3->DataPtr;
  uStack_30 = *(undefined8 *)&param_3->Size;
  local_28 = *(undefined4 *)&param_2->DataPtr;
  uStack_24 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iStack_20 = param_2->Size;
  uStack_1c = *(undefined4 *)&param_2->field_0xc;
  local_40 = &param_4;
  local_18 = *(undefined4 *)&param_1->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_10 = param_1->Size;
  uStack_c = *(undefined4 *)&param_1->field_0xc;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`IPackageResourceManager::IteratePackagesStatInPath'::__l2::<lambda_1>,bool,FPackagePath_const_&,enum_EPackageSegment,FFileStatData_const_&>
             ::Call;
  (**(code **)((longlong)*this + 0x78))(local_18,&local_18,&local_28,&local_38,&local_48);
  return;
}

// OpenAsyncReadPackage @ 142145d50

FOpenAsyncPackageResult * __thiscall
IPackageResourceManager::OpenAsyncReadPackage
          (IPackageResourceManager *this,FOpenAsyncPackageResult *__return_storage_ptr__,
          FPackagePath *param_1)

{
  (**(code **)((longlong)*this + 0x30))();
  return __return_storage_ptr__;
}

// OpenMappedHandleToPackage @ 142145f30

IMappedFileHandle * __thiscall
IPackageResourceManager::OpenMappedHandleToPackage
          (IPackageResourceManager *this,FPackagePath *param_1,FPackagePath *param_2)

{
  IMappedFileHandle *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142145f39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = (IMappedFileHandle *)(**(code **)((longlong)*this + 0x38))(this,param_1,0,param_2);
  return pIVar1;
}

// OpenReadPackage @ 1421460f0

FOpenPackageResult * __thiscall
IPackageResourceManager::OpenReadPackage
          (IPackageResourceManager *this,FOpenPackageResult *__return_storage_ptr__,
          FPackagePath *param_1,FPackagePath *param_2)

{
  (**(code **)((longlong)*this + 0x28))();
  return __return_storage_ptr__;
}

// Shutdown @ 142151940

void __cdecl IPackageResourceManager::Shutdown(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  FDestructionSentinel local_28;
  
  if (GPackageResourceManager != (IPackageResourceManager *)0x0) {
    (**(code **)*GPackageResourceManager)(GPackageResourceManager,1);
  }
  GPackageResourceManager = (IPackageResourceManager *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &GOnClearPackageResourceManagerDelegate,(FWriteAccessScope *)&local_28);
  bVar2 = false;
  GOnClearPackageResourceManagerDelegate._28_4_ = GOnClearPackageResourceManagerDelegate._28_4_ + 1;
  uVar6 = GOnClearPackageResourceManagerDelegate._16_4_ - 1;
  if (-1 < (int)uVar6) {
    lVar7 = (longlong)(int)uVar6 << 4;
    bVar2 = false;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (int)GOnClearPackageResourceManagerDelegate._16_4_) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (((*(int *)(lVar7 + 8 + GOnClearPackageResourceManagerDelegate._8_8_) == 0) ||
          (*(longlong **)(lVar7 + GOnClearPackageResourceManagerDelegate._8_8_) == (longlong *)0x0))
         || (cVar4 = (**(code **)(**(longlong **)
                                    (lVar7 + GOnClearPackageResourceManagerDelegate._8_8_) + 0x68))
                               (), cVar4 == '\0')) {
        bVar2 = true;
      }
      lVar7 = lVar7 + -0x10;
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  GOnClearPackageResourceManagerDelegate._28_4_ = GOnClearPackageResourceManagerDelegate._28_4_ + -1
  ;
  if (bVar2) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &GOnClearPackageResourceManagerDelegate,false);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

