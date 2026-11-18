// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// FLoadingTestsScope @ 14887c7c0

FLoadingTestsScope * __thiscall
FLoadingTestsScope::FLoadingTestsScope
          (FLoadingTestsScope *this,FAutomationTestBase *param_1,
          TFunction<void___cdecl(FLoadingTestsScope_&)> *param_2)

{
  code *pcVar1;
  UPackage *pUVar2;
  FName *pFVar3;
  UAsyncLoadingTests_Shared *pUVar4;
  undefined8 uVar5;
  longlong *plVar6;
  FName local_38 [2];
  
  this->AutomationTest = param_1;
  this->_padding_ = (longlong)&___7FLoadingTestsScope__6B_;
  (this->PackageNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PackageNames).ArrayNum = 0;
  (this->PackageNames).ArrayMax = 0;
  this->PackageIndex = (atomic<unsigned_int>)0x0;
  this->Package1 = (UPackage *)0x0;
  this->Package2 = (UPackage *)0x0;
  this->Package3 = (UPackage *)0x0;
  this->Object1 = (UAsyncLoadingTests_Shared *)0x0;
  this->Object2 = (UAsyncLoadingTests_Shared *)0x0;
  this->Object3 = (UAsyncLoadingTests_Shared *)0x0;
  FlushAsyncLoading(-1);
  pUVar2 = CreatePackage(this);
  this->Package1 = pUVar2;
  pFVar3 = ::FName::FName(local_38,L"TestObject");
  pUVar4 = NewObject<UAsyncLoadingTests_Shared>
                     ((UObject *)this->Package1,*pFVar3,RF_Standalone|RF_Public,(UObject *)0x0,false
                      ,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  this->Object1 = pUVar4;
  pUVar2 = CreatePackage(this);
  this->Package2 = pUVar2;
  pFVar3 = ::FName::FName(local_38,L"TestObject");
  pUVar4 = NewObject<UAsyncLoadingTests_Shared>
                     ((UObject *)this->Package2,*pFVar3,RF_Standalone|RF_Public,(UObject *)0x0,false
                      ,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  this->Object2 = pUVar4;
  pUVar2 = CreatePackage(this);
  this->Package3 = pUVar2;
  pFVar3 = ::FName::FName(local_38,L"TestObject");
  pUVar4 = NewObject<UAsyncLoadingTests_Shared>
                     ((UObject *)this->Package3,*pFVar3,RF_Standalone|RF_Public,(UObject *)0x0,false
                      ,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  this->Object3 = pUVar4;
  if (*(void **)param_2 == (void *)0x0) {
    local_38[0] = (FName)this->Object2;
    pUVar4 = this->Object1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38[0] != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_38[0]);
    }
    FSoftObjectPtr::operator=(&(pUVar4->SoftReference).SoftObjectPtr,(FObjectPtr)local_38);
  }
  else {
    UE::Core::Private::Function::CheckCallable(*(void **)param_2);
    pcVar1 = *(code **)param_2;
    plVar6 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar6 = *(longlong **)&param_2->field_0x28;
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    (*pcVar1)(uVar5,this);
  }
  SavePackages(this);
  GarbageCollect(&this->PackageNames,this->AutomationTest);
  if (*(longlong *)param_2 != 0) {
    plVar6 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar6 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  return this;
}

// ~FLoadingTestsScope @ 14887ea10

void __thiscall FLoadingTestsScope::~FLoadingTestsScope(FLoadingTestsScope *this)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FLoadingTestsScope__6B_;
  FlushAsyncLoading(-1);
  pTVar1 = &this->PackageNames;
  GarbageCollect(pTVar1,this->AutomationTest);
  if ((UAsyncLoadingTests_Shared::OnPostLoad._8_4_ != 0) &&
     (UAsyncLoadingTests_Shared::OnPostLoad._0_8_ != 0)) {
    (*(code *)**(undefined8 **)UAsyncLoadingTests_Shared::OnPostLoad._0_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&UAsyncLoadingTests_Shared::OnPostLoad,0,0,0x10);
    UAsyncLoadingTests_Shared::OnPostLoad._8_4_ = 0;
  }
  if ((UAsyncLoadingTests_Shared::OnSerialize._8_4_ != 0) &&
     (UAsyncLoadingTests_Shared::OnSerialize._0_8_ != 0)) {
    (*(code *)**(undefined8 **)UAsyncLoadingTests_Shared::OnSerialize._0_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&UAsyncLoadingTests_Shared::OnSerialize,0,0,0x10);
    UAsyncLoadingTests_Shared::OnSerialize._8_4_ = 0;
  }
  if ((UAsyncLoadingTests_Shared::OnIsPostLoadThreadSafe._8_4_ != 0) &&
     (UAsyncLoadingTests_Shared::OnIsPostLoadThreadSafe._0_8_ != 0)) {
    (*(code *)**(undefined8 **)UAsyncLoadingTests_Shared::OnIsPostLoadThreadSafe._0_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&UAsyncLoadingTests_Shared::OnIsPostLoadThreadSafe,0,0,0x10);
    UAsyncLoadingTests_Shared::OnIsPostLoadThreadSafe._8_4_ = 0;
  }
  if ((UAsyncLoadingTests_Shared::OnIsReadyForAsyncPostLoad._8_4_ != 0) &&
     (UAsyncLoadingTests_Shared::OnIsReadyForAsyncPostLoad._0_8_ != 0)) {
    (*(code *)**(undefined8 **)UAsyncLoadingTests_Shared::OnIsReadyForAsyncPostLoad._0_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&UAsyncLoadingTests_Shared::OnIsReadyForAsyncPostLoad,0,0,0x10);
    UAsyncLoadingTests_Shared::OnIsReadyForAsyncPostLoad._8_4_ = 0;
  }
  DestructItems<FString,int>
            ((FString *)(pTVar1->AllocatorInstance).Data,(this->PackageNames).ArrayNum);
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// operator() @ 148880e30

bool __thiscall
`FLoadingTestsScope::GarbageCollect'::__l9::<lambda_1>::operator()(void *this,UObject *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FString local_18;
  
  pFVar2 = *(ForAnyElementType **)this;
  pFVar7 = (FScriptContainerElement *)
           UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_18,(UObject *)0x0);
  if ((pFVar2->Data <= pFVar7) &&
     (pFVar7 < pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  pFVar8 = pFVar2->Data + (longlong)iVar6 * 0x10;
  *(undefined8 *)pFVar8 = 0;
  *(undefined8 *)pFVar8 = *(undefined8 *)pFVar7;
  *(undefined8 *)pFVar7 = 0;
  *(undefined4 *)(pFVar8 + 8) = *(undefined4 *)(pFVar7 + 8);
  *(undefined4 *)(pFVar8 + 0xc) = *(undefined4 *)(pFVar7 + 0xc);
  *(undefined8 *)(pFVar7 + 8) = 0;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  UObjectBase::AtomicallyClearFlags((UObjectBase *)param_1,RF_Standalone);
  return true;
}

// CleanupObjects @ 148884a30

void __thiscall FLoadingTestsScope::CleanupObjects(FLoadingTestsScope *this)

{
  GarbageCollect(&this->PackageNames,this->AutomationTest);
  if ((UAsyncLoadingTests_Shared::OnPostLoad._8_4_ != 0) &&
     (UAsyncLoadingTests_Shared::OnPostLoad._0_8_ != 0)) {
    (*(code *)**(undefined8 **)UAsyncLoadingTests_Shared::OnPostLoad._0_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&UAsyncLoadingTests_Shared::OnPostLoad,0,0,0x10);
    UAsyncLoadingTests_Shared::OnPostLoad._8_4_ = 0;
  }
  if ((UAsyncLoadingTests_Shared::OnSerialize._8_4_ != 0) &&
     (UAsyncLoadingTests_Shared::OnSerialize._0_8_ != 0)) {
    (*(code *)**(undefined8 **)UAsyncLoadingTests_Shared::OnSerialize._0_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&UAsyncLoadingTests_Shared::OnSerialize,0,0,0x10);
    UAsyncLoadingTests_Shared::OnSerialize._8_4_ = 0;
  }
  if ((UAsyncLoadingTests_Shared::OnIsPostLoadThreadSafe._8_4_ != 0) &&
     (UAsyncLoadingTests_Shared::OnIsPostLoadThreadSafe._0_8_ != 0)) {
    (*(code *)**(undefined8 **)UAsyncLoadingTests_Shared::OnIsPostLoadThreadSafe._0_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&UAsyncLoadingTests_Shared::OnIsPostLoadThreadSafe,0,0,0x10);
    UAsyncLoadingTests_Shared::OnIsPostLoadThreadSafe._8_4_ = 0;
  }
  if ((UAsyncLoadingTests_Shared::OnIsReadyForAsyncPostLoad._8_4_ != 0) &&
     (UAsyncLoadingTests_Shared::OnIsReadyForAsyncPostLoad._0_8_ != 0)) {
    (*(code *)**(undefined8 **)UAsyncLoadingTests_Shared::OnIsReadyForAsyncPostLoad._0_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&UAsyncLoadingTests_Shared::OnIsReadyForAsyncPostLoad,0,0,0x10);
    UAsyncLoadingTests_Shared::OnIsReadyForAsyncPostLoad._8_4_ = 0;
  }
  return;
}

// CreateObjects @ 1488878c0

void __thiscall FLoadingTestsScope::CreateObjects(FLoadingTestsScope *this)

{
  UPackage *pUVar1;
  FName *pFVar2;
  UAsyncLoadingTests_Shared *pUVar3;
  FName local_res8;
  
  pUVar1 = CreatePackage(this);
  this->Package1 = pUVar1;
  pFVar2 = ::FName::FName(&local_res8,L"TestObject");
  pUVar3 = NewObject<UAsyncLoadingTests_Shared>
                     ((UObject *)this->Package1,*pFVar2,RF_Standalone|RF_Public,(UObject *)0x0,false
                      ,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  this->Object1 = pUVar3;
  pUVar1 = CreatePackage(this);
  this->Package2 = pUVar1;
  pFVar2 = ::FName::FName(&local_res8,L"TestObject");
  pUVar3 = NewObject<UAsyncLoadingTests_Shared>
                     ((UObject *)this->Package2,*pFVar2,RF_Standalone|RF_Public,(UObject *)0x0,false
                      ,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  this->Object2 = pUVar3;
  pUVar1 = CreatePackage(this);
  this->Package3 = pUVar1;
  pFVar2 = ::FName::FName(&local_res8,L"TestObject");
  pUVar3 = NewObject<UAsyncLoadingTests_Shared>
                     ((UObject *)this->Package3,*pFVar2,RF_Standalone|RF_Public,(UObject *)0x0,false
                      ,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  this->Object3 = pUVar3;
  return;
}

// CreatePackage @ 1488879b0

UPackage * __thiscall FLoadingTestsScope::CreatePackage(FLoadingTestsScope *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UPackage *pUVar5;
  ForAnyElementType FVar6;
  FScriptContainerElement *pFVar7;
  FString local_18;
  
  LOCK();
  this->PackageIndex = (atomic<unsigned_int>)((int)this->PackageIndex + 1);
  UNLOCK();
  ::FString::PrintfImpl(&local_18,L"/Engine/LoadingTestsScope_Package%u");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar6.Data = local_18.Data.AllocatorInstance.Data;
  }
  pUVar5 = ::CreatePackage((wchar_t *)FVar6.Data);
  pFVar7 = (this->PackageNames).AllocatorInstance.Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar7 + (longlong)(this->PackageNames).ArrayMax * 0x10
     )) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar5 = (UPackage *)(*pcVar2)();
      return pUVar5;
    }
  }
  iVar4 = (this->PackageNames).ArrayNum;
  piVar1 = &(this->PackageNames).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->PackageNames).AllocatorInstance,piVar1);
  }
  FVar6.Data = local_18.Data.AllocatorInstance.Data;
  (this->PackageNames).ArrayNum = iVar4 + 1;
  pFVar7 = (this->PackageNames).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  *(int *)&pFVar7[8].field_0x0 = local_18.Data.ArrayNum;
  if (local_18.Data.ArrayNum == 0) {
    *(int *)(pFVar7 + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_18.Data.ArrayNum,
               (int *)(pFVar7 + 0xc));
    memcpy(*(void **)&pFVar7->field_0x0,FVar6.Data,(longlong)local_18.Data.ArrayNum * 2);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return pUVar5;
}

// DefaultMutateObjects @ 148889000

void __thiscall FLoadingTestsScope::DefaultMutateObjects(FLoadingTestsScope *this)

{
  UAsyncLoadingTests_Shared *pUVar1;
  UAsyncLoadingTests_Shared *local_res8 [4];
  
  local_res8[0] = this->Object2;
  pUVar1 = this->Object1;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (local_res8[0] != (UAsyncLoadingTests_Shared *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  FSoftObjectPtr::operator=(&(pUVar1->SoftReference).SoftObjectPtr,(FObjectPtr)local_res8);
  return;
}

// GarbageCollect @ 14888a590

void __thiscall FLoadingTestsScope::GarbageCollect(FLoadingTestsScope *this)

{
  GarbageCollect(&this->PackageNames,this->AutomationTest);
  return;
}

// GarbageCollect @ 14888a5b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
FLoadingTestsScope::GarbageCollect
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,FAutomationTestBase *param_2)

{
  int iVar1;
  code *pcVar2;
  FAutomationTestBase *this;
  bool bVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  UClass *pUVar7;
  UPackage *pUVar8;
  UObject *pUVar9;
  ForAnyElementType FVar10;
  FScriptContainerElement *pFVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  FAutomationTestBase *local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_f8;
  undefined8 local_f0;
  ForAnyElementType *local_e8 [2];
  wchar_t *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  wchar_t *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  FString local_b8;
  wchar_t *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  FString local_98;
  code *local_88;
  ForAnyElementType **local_80;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  
  iVar1 = param_1->ArrayNum;
  pFVar11 = (param_1->AllocatorInstance).Data;
  local_f8.Data = (FScriptContainerElement *)0x0;
  pFVar13 = pFVar11 + (longlong)iVar1 * 0x10;
  local_f0 = 0;
  local_res10 = param_2;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    this = local_res10;
    iVar4 = 0;
    if (pFVar11 == pFVar13) break;
    if (*(int *)(pFVar11 + 8) == 0) {
      local_d8 = L"";
LAB_14888a635:
      sVar6 = wcslen(local_d8);
      iVar4 = (int)sVar6;
    }
    else {
      local_d8 = *(wchar_t **)pFVar11;
      if (local_d8 != (wchar_t *)0x0) goto LAB_14888a635;
    }
    iStack_d0 = iVar4;
    pUVar7 = Z_Construct_UClass_UPackage_NoRegister();
    local_78._12_4_ = uStack_cc;
    local_78.Size = iStack_d0;
    local_78.DataPtr = local_d8;
    pUVar8 = (UPackage *)StaticFindObject(pUVar7,(UObject *)0x0,&local_78,None);
    if (pUVar8 != (UPackage *)0x0) {
      if (((local_f8.Data <= pFVar11) && (pFVar11 < local_f8.Data + (longlong)local_f0._4_4_ * 0x10)
          ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = (int)local_f0;
      if ((int)local_f0 == local_f0._4_4_) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_f8,(int *)((longlong)&local_f0 + 4));
      }
      local_f0 = CONCAT44(local_f0._4_4_,iVar4 + 1);
      ::FString::FString((FString *)(local_f8.Data + (longlong)iVar4 * 0x10),(FString *)pFVar11);
      local_e8[0] = &local_f8;
      local_88 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FLoadingTestsScope::GarbageCollect'::__l9::<lambda_1>,bool,UObject_*>
                 ::Call;
      local_80 = local_e8;
      ForEachObjectWithPackage
                (pUVar8,(TFunctionRef<bool___cdecl(UObject_*)> *)&local_88,true,RF_NoFlags,Borrowed)
      ;
    }
    pFVar11 = pFVar11 + 0x10;
  }
  iVar1 = (int)local_f0;
  pFVar11 = local_f8.Data + (longlong)(int)local_f0 * 0x10;
  FVar12.Data = local_f8.Data;
  while( true ) {
    if ((int)local_f0 != iVar1) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    bVar3 = GIsInitialLoad;
    if (FVar12.Data == pFVar11) break;
    if (*(int *)(FVar12.Data + 8) == 0) {
      local_c8 = L"";
LAB_14888a79b:
      sVar6 = wcslen(local_c8);
      iVar5 = (int)sVar6;
    }
    else {
      local_c8 = *(wchar_t **)FVar12.Data;
      iVar5 = iVar4;
      if (local_c8 != (wchar_t *)0x0) goto LAB_14888a79b;
    }
    iStack_c0 = iVar5;
    pUVar7 = Z_Construct_UClass_UObject_NoRegister();
    local_68._12_4_ = uStack_bc;
    local_68.Size = iStack_c0;
    local_68.DataPtr = local_c8;
    pUVar9 = StaticFindObject(pUVar7,(UObject *)0x0,&local_68,None);
    ::FString::PrintfImpl(&local_b8,L"%s should be present in memory");
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_b8.Data.ArrayNum != 0) {
      FVar10.Data = local_b8.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue(this,(wchar_t *)FVar10.Data,pUVar9 != (UObject *)0x0);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    FVar12.Data = FVar12.Data + 0x10;
  }
  GIsInitialLoad = false;
  CollectGarbage(RF_NoFlags,true);
  iVar1 = (int)local_f0;
  pFVar11 = local_f8.Data + (longlong)(int)local_f0 * 0x10;
  FVar12.Data = local_f8.Data;
  GIsInitialLoad = bVar3;
  do {
    if ((int)local_f0 != iVar1) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (FVar12.Data == pFVar11) {
      DestructItems<FString,int>((FString *)local_f8.Data,(int)local_f0);
      if (local_f8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data);
      }
      return;
    }
    if (*(int *)(FVar12.Data + 8) == 0) {
      local_a8 = L"";
LAB_14888a88b:
      sVar6 = wcslen(local_a8);
      iVar5 = (int)sVar6;
    }
    else {
      local_a8 = *(wchar_t **)FVar12.Data;
      iVar5 = iVar4;
      if (local_a8 != (wchar_t *)0x0) goto LAB_14888a88b;
    }
    iStack_a0 = iVar5;
    pUVar7 = Z_Construct_UClass_UObject_NoRegister();
    local_58._12_4_ = uStack_9c;
    local_58.Size = iStack_a0;
    local_58.DataPtr = local_a8;
    pUVar9 = StaticFindObject(pUVar7,(UObject *)0x0,&local_58,None);
    ::FString::PrintfImpl(&local_98,L"%s should have been garbage collected");
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_98.Data.ArrayNum != 0) {
      FVar10.Data = local_98.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue(this,(wchar_t *)FVar10.Data,pUVar9 == (UObject *)0x0);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    FVar12.Data = FVar12.Data + 0x10;
  } while( true );
}

// LoadObjects @ 148896430

void __thiscall FLoadingTestsScope::LoadObjects(FLoadingTestsScope *this)

{
  UClass *pUVar1;
  UObject *pUVar2;
  TStringView<wchar_t> local_18;
  
  LoadPackage((UPackage *)0x0,L"/Engine/LoadingTestsScope_Package1",0,(FArchive *)0x0,
              (FLinkerInstancingContext *)0x0);
  local_18.Size = 0x2d;
  local_18.DataPtr = L"/Engine/LoadingTestsScope_Package1.TestObject";
  pUVar1 = UAsyncLoadingTests_Shared::StaticClass();
  pUVar2 = StaticFindObject(pUVar1,(UObject *)0x0,&local_18,None);
  FAutomationTestBase::TestTrue
            (this->AutomationTest,L"The object should have been properly loaded recursively",
             pUVar2 != (UObject *)0x0);
  if (pUVar2 != (UObject *)0x0) {
    FAutomationTestBase::TestFalse
              (this->AutomationTest,L"The object should have been properly loaded recursively",
               (*(uint *)&pUVar2->field_0x8 & 0x1400) != 0);
  }
  return;
}

// SavePackages @ 148897e90

void __thiscall FLoadingTestsScope::SavePackages(FLoadingTestsScope *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  size_t sVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  UPackage *pUVar8;
  FString *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  wchar_t *pwVar12;
  int iVar13;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  wchar_t *local_d8;
  undefined4 uStack_cc;
  wchar_t *local_c8;
  undefined4 uStack_bc;
  FSavePackageArgs local_b8;
  FString local_80;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  FString local_48;
  
  iVar1 = (this->PackageNames).ArrayNum;
  pFVar10 = (this->PackageNames).AllocatorInstance.Data;
  pFVar11 = pFVar10 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PackageNames).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    iVar13 = 0;
    if (pFVar10 == pFVar11) break;
    if (*(int *)(pFVar10 + 8) == 0) {
      local_d8 = L"";
LAB_148897efe:
      sVar5 = wcslen(local_d8);
      iVar13 = (int)sVar5;
    }
    else {
      local_d8 = *(wchar_t **)pFVar10;
      if (local_d8 != (wchar_t *)0x0) goto LAB_148897efe;
    }
    pUVar6 = Z_Construct_UClass_UPackage_NoRegister();
    local_68._12_4_ = uStack_cc;
    local_68.Size = iVar13;
    local_68.DataPtr = local_d8;
    pUVar7 = StaticFindObject(pUVar6,(UObject *)0x0,&local_68,None);
    if (pUVar7 != (UObject *)0x0) {
      *(byte *)(pUVar7 + 1) = *(byte *)(pUVar7 + 1) | 2;
    }
    pFVar10 = pFVar10 + 0x10;
  }
  iVar1 = (this->PackageNames).ArrayNum;
  pFVar10 = (this->PackageNames).AllocatorInstance.Data;
  pFVar11 = pFVar10 + (longlong)iVar1 * 0x10;
  do {
    if ((this->PackageNames).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar10 == pFVar11) {
      return;
    }
    if (*(int *)(pFVar10 + 8) == 0) {
      local_c8 = L"";
LAB_148897f84:
      sVar5 = wcslen(local_c8);
      iVar4 = (int)sVar5;
    }
    else {
      local_c8 = *(wchar_t **)pFVar10;
      iVar4 = iVar13;
      if (local_c8 != (wchar_t *)0x0) goto LAB_148897f84;
    }
    pUVar6 = Z_Construct_UClass_UPackage_NoRegister();
    local_58._12_4_ = uStack_bc;
    local_58.Size = iVar4;
    local_58.DataPtr = local_c8;
    pUVar8 = (UPackage *)StaticFindObject(pUVar6,(UObject *)0x0,&local_58,None);
    if (pUVar8 != (UPackage *)0x0) {
      local_b8.Error = (FOutputDevice *)GError;
      local_b8.SavePackageContext = (FSavePackageContext *)0x0;
      local_b8.InOutSaveOverrides =
           (TMap<UObject_*,FObjectSaveOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FObjectSaveOverride,0>_>
            *)0x0;
      local_b8._19_4_ = 0;
      local_b8._23_1_ = 0;
      local_b8.ArchiveCookData = (FArchiveCookData *)0x0;
      local_b8.TopLevelFlags = RF_NoFlags;
      local_b8.SaveFlags = 0;
      local_b8.bForceByteSwapping = false;
      local_b8.bWarnOfLongFilename = true;
      local_b8.bSlowTask = true;
      local_b8.FinalTimeStamp.Ticks = 0;
      pFVar9 = FPackageName::GetAssetPackageExtension();
      if (*(int *)(pFVar10 + 8) == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = *(wchar_t **)pFVar10;
      }
      ::FString::FString(&local_80,pwVar12);
      pFVar9 = FPackageName::LongPackageNameToFilename(&local_48,&local_80,pFVar9);
      if ((pFVar9->Data).ArrayNum == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
      }
      bVar3 = UPackage::SavePackage(pUVar8,(UObject *)0x0,pwVar12,&local_b8);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
      if ((!bVar3) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("UPackage::SavePackage(Package, nullptr, *FPackageName::LongPackageNameToFilename(*PackageName, FPackageName::GetAssetPackageExtension()), FSavePackageArgs())"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\Loading\\AsyncLoadingTests_Shared.cpp"
                             ,0x35,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar10 = pFVar10 + 0x10;
  } while( true );
}

