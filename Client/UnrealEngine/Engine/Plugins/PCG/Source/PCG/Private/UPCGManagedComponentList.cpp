// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 13

// StaticClass @ 149f1e1c0

UClass * __cdecl UPCGManagedComponentList::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGManagedComponentList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGManagedComponentList",
               &Z_Registration_Info_UClass_UPCGManagedComponentList.InnerSingleton,
               StaticRegisterNativesUPCGManagedComponentList,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGManagedComponentList>,
               InternalVTableHelperCtorCaller<UPCGManagedComponentList>,local_res8,
               UPCGManagedComponentBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGManagedComponentList.InnerSingleton;
}

// UPCGManagedComponentList @ 149f32730

UPCGManagedComponentList * __thiscall
UPCGManagedComponentList::UPCGManagedComponentList
          (UPCGManagedComponentList *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGManagedComponentList__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)&this->_padding_ = 0;
  (this->GeneratedComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeneratedComponents).ArrayNum = 0;
  (this->GeneratedComponents).ArrayMax = 0;
  return this;
}

// UPCGManagedComponentList @ 149f32770

UPCGManagedComponentList * __thiscall
UPCGManagedComponentList::UPCGManagedComponentList
          (UPCGManagedComponentList *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGManagedComponentList__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)&this->_padding_ = 0;
  (this->GeneratedComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeneratedComponents).ArrayNum = 0;
  (this->GeneratedComponents).ArrayMax = 0;
  return this;
}

// ~UPCGManagedComponentList @ 149f34910

void __thiscall UPCGManagedComponentList::~UPCGManagedComponentList(UPCGManagedComponentList *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGManagedComponentList__6B_;
  DestructItems<TSoftObjectPtr<UActorComponent>,int>
            ((TSoftObjectPtr<UActorComponent> *)(this->GeneratedComponents).AllocatorInstance.Data,
             (this->GeneratedComponents).ArrayNum);
  pFVar1 = (this->GeneratedComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UPCGManagedResource__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ForgetComponent @ 149f46390

void __thiscall
UPCGManagedComponentList::ForgetComponent(UPCGManagedComponentList *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 < (this->GeneratedComponents).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<TSoftObjectPtr<UActorComponent>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
            (&this->GeneratedComponents,param_1);
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x28,8,&(this->GeneratedComponents).AllocatorInstance,
             (this->GeneratedComponents).ArrayNum,&(this->GeneratedComponents).ArrayMax);
  return;
}

// GetComponentsArray @ 149f49020

TArrayView<TSoftObjectPtr<UActorComponent>,int> * __thiscall
UPCGManagedComponentList::GetComponentsArray
          (UPCGManagedComponentList *this,
          TArrayView<TSoftObjectPtr<UActorComponent>,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<TSoftObjectPtr<UActorComponent>,int> *pTVar4;
  
  iVar1 = (this->GeneratedComponents).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (TSoftObjectPtr<UActorComponent> *)(this->GeneratedComponents).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<TSoftObjectPtr<UActorComponent>,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetComponentsCount @ 149f490c0

int __thiscall UPCGManagedComponentList::GetComponentsCount(UPCGManagedComponentList *this)

{
  return (this->GeneratedComponents).ArrayNum;
}

// GetPrivateStaticClass @ 149f4d680

UClass * __cdecl UPCGManagedComponentList::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGManagedComponentList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGManagedComponentList",
               &Z_Registration_Info_UClass_UPCGManagedComponentList.InnerSingleton,
               StaticRegisterNativesUPCGManagedComponentList,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGManagedComponentList>,
               InternalVTableHelperCtorCaller<UPCGManagedComponentList>,local_res8,
               UPCGManagedComponentBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGManagedComponentList.InnerSingleton;
}

// Release @ 149f5c450

bool __thiscall
UPCGManagedComponentList::Release
          (UPCGManagedComponentList *this,bool param_1,
          TSet<TSoftObjectPtr<AActor>,DefaultKeyFuncs<TSoftObjectPtr<AActor>,0>,FDefaultSetAllocator>
          *param_2)

{
  FWeakObjectPtr *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  FWeakObjectPtr *pFVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TPersistentObjectPtr<FSoftObjectPath> local_88;
  TPersistentObjectPtr<FSoftObjectPath> local_60;
  
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId484,"UPCGManagedComponentList::Release",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGManagedResource.cpp"
               ,0x1e4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId484);
  }
  cVar3 = (**(code **)(this->_padding_ + 800))(this);
  if ((param_1) || (cVar3 == '\0')) {
    bVar12 = true;
  }
  else {
    bVar12 = false;
  }
  iVar10 = (this->GeneratedComponents).ArrayNum + -1;
  if (-1 < iVar10) {
    lVar11 = (longlong)iVar10 * 0x28;
    do {
      if (((this->GeneratedComponents).ArrayNum <= iVar10) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pUVar7 = TPersistentObjectPtr<FSoftObjectPath>::Get
                         ((TPersistentObjectPtr<FSoftObjectPath> *)
                          ((this->GeneratedComponents).AllocatorInstance.Data + lVar11));
      if (pUVar7 == (UObject *)0x0) {
LAB_149f5c57f:
        if (((this->GeneratedComponents).ArrayNum <= iVar10) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        TArray<TSoftObjectPtr<UActorComponent>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (&this->GeneratedComponents,iVar10);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,&(this->GeneratedComponents).AllocatorInstance,
                   (this->GeneratedComponents).ArrayNum,&(this->GeneratedComponents).ArrayMax);
      }
      else {
        pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
        iVar6 = (int)pUVar8->_padding_;
        if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar6) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar6 * 8) !=
            &pUVar8->_padding_)) goto LAB_149f5c57f;
      }
      lVar11 = lVar11 + -0x28;
      iVar10 = iVar10 + -1;
    } while (-1 < iVar10);
  }
  if ((this->GeneratedComponents).ArrayNum == 0) {
    bVar12 = true;
  }
  else if (bVar12 == false) {
    PCGGeneratedResourcesLogging::LogManagedResourceSoftRelease((UPCGManagedResource *)this);
    *(undefined1 *)&this->_padding_ = 1;
    iVar10 = (this->GeneratedComponents).ArrayNum;
    pFVar9 = (FWeakObjectPtr *)(this->GeneratedComponents).AllocatorInstance.Data;
    pFVar1 = pFVar9 + (longlong)iVar10 * 5;
    while( true ) {
      if ((this->GeneratedComponents).ArrayNum != iVar10) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<TSoftObjectPtr<UActorComponent>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar9 == pFVar1) break;
      local_60.WeakPtr = *pFVar9;
      FSoftObjectPath::FSoftObjectPath(&local_60.ObjectID,(FSoftObjectPath *)(pFVar9 + 1));
      pUVar7 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_60);
      if (pUVar7 == (UObject *)0x0) {
LAB_149f5c7e6:
        pUVar7 = (UObject *)0x0;
      }
      else {
        pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
        iVar6 = (int)pUVar8->_padding_;
        if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar6) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar6 * 8) !=
            &pUVar8->_padding_)) goto LAB_149f5c7e6;
      }
      if (((*(ulonglong *)&pUVar7[2].field_0x18 < 0x1552922a1) &&
          (&PCGHelpers::MarkedForCleanupPCGTag <
           (FName *)(*(ulonglong *)&pUVar7[2].field_0x18 +
                    (longlong)*(int *)&pUVar7[2].field_0x24 * 8))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      iVar6 = *(int *)&pUVar7[2].field_0x20;
      if (iVar6 == *(int *)&pUVar7[2].field_0x24) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,(ForAnyElementType *)&pUVar7[2].field_0x18,
                           (int *)&pUVar7[2].field_0x24);
      }
      *(int *)&pUVar7[2].field_0x20 = iVar6 + 1;
      *(FName *)(*(longlong *)&pUVar7[2].field_0x18 + (longlong)iVar6 * 8) =
           PCGHelpers::MarkedForCleanupPCGTag;
      if (local_60.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.ObjectID.SubPathString.Data.AllocatorInstance.Data);
      }
      pFVar9 = pFVar9 + 5;
    }
  }
  else {
    PCGGeneratedResourcesLogging::LogManagedResourceHardRelease((UPCGManagedResource *)this);
    iVar10 = (this->GeneratedComponents).ArrayNum;
    pFVar9 = (FWeakObjectPtr *)(this->GeneratedComponents).AllocatorInstance.Data;
    pFVar1 = pFVar9 + (longlong)iVar10 * 5;
    while( true ) {
      if ((this->GeneratedComponents).ArrayNum != iVar10) {
        `TCheckedPointerIterator<TSoftObjectPtr<UActorComponent>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar9 == pFVar1) break;
      local_88.WeakPtr = *pFVar9;
      FSoftObjectPath::FSoftObjectPath(&local_88.ObjectID,(FSoftObjectPath *)(pFVar9 + 1));
      pUVar7 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_88);
      if (pUVar7 == (UObject *)0x0) {
LAB_149f5c6e3:
        pUVar7 = (UObject *)0x0;
      }
      else {
        pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
        iVar6 = (int)pUVar8->_padding_;
        if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar6) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar6 * 8) !=
            &pUVar8->_padding_)) goto LAB_149f5c6e3;
      }
      (**(code **)(*(longlong *)pUVar7 + 0x4a0))(pUVar7,0);
      if (local_88.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.ObjectID.SubPathString.Data.AllocatorInstance.Data);
      }
      pFVar9 = pFVar9 + 5;
    }
    iVar10 = (**(code **)(this->_padding_ + 0x330))(this);
    while (iVar10 = iVar10 + -1, -1 < iVar10) {
      (**(code **)(this->_padding_ + 0x308))(this,iVar10);
    }
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar12;
}

// ReleaseIfUnused @ 149f5c960

bool __thiscall
UPCGManagedComponentList::ReleaseIfUnused
          (UPCGManagedComponentList *this,
          TSet<TSoftObjectPtr<AActor>,DefaultKeyFuncs<TSoftObjectPtr<AActor>,0>,FDefaultSetAllocator>
          *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  int iVar7;
  longlong lVar8;
  
  if ((char)this->_padding_ != '\0') {
    (**(code **)(this->_padding_ + 0x2b8))(this,1,param_1);
    return true;
  }
  iVar7 = (this->GeneratedComponents).ArrayNum + -1;
  if (-1 < iVar7) {
    lVar8 = (longlong)iVar7 * 0x28;
    do {
      if (((this->GeneratedComponents).ArrayNum <= iVar7) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pUVar5 = TPersistentObjectPtr<FSoftObjectPath>::Get
                         ((TPersistentObjectPtr<FSoftObjectPath> *)
                          ((this->GeneratedComponents).AllocatorInstance.Data + lVar8));
      if (pUVar5 == (UObject *)0x0) {
LAB_149f5ca25:
        if (((this->GeneratedComponents).ArrayNum <= iVar7) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        TArray<TSoftObjectPtr<UActorComponent>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (&this->GeneratedComponents,iVar7);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,&(this->GeneratedComponents).AllocatorInstance,
                   (this->GeneratedComponents).ArrayNum,&(this->GeneratedComponents).ArrayMax);
      }
      else {
        pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) goto LAB_149f5ca25;
      }
      lVar8 = lVar8 + -0x28;
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
  }
  return (this->GeneratedComponents).ArrayNum == 0;
}

// SetGeneratedComponentsFromBP @ 149f60af0

void __thiscall
UPCGManagedComponentList::SetGeneratedComponentsFromBP
          (UPCGManagedComponentList *this,
          TArray<TSoftObjectPtr<UActorComponent>,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<TSoftObjectPtr<UActorComponent>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 uVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  FSoftObjectPath local_60;
  undefined1 local_40 [40];
  
  pTVar1 = &this->GeneratedComponents;
  if (pTVar1 != param_1) {
    DestructItems<TSoftObjectPtr<UActorComponent>,int>
              ((TSoftObjectPtr<UActorComponent> *)(pTVar1->AllocatorInstance).Data,
               (this->GeneratedComponents).ArrayNum);
    iVar3 = param_1->ArrayNum;
    piVar2 = &(this->GeneratedComponents).ArrayMax;
    pFVar4 = (param_1->AllocatorInstance).Data;
    (this->GeneratedComponents).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      ConstructItems<TSoftObjectPtr<UActorComponent>,TSoftObjectPtr<UActorComponent>,int>
                ((pTVar1->AllocatorInstance).Data,(TSoftObjectPtr<UActorComponent> *)pFVar4,iVar3);
    }
  }
  iVar3 = (this->GeneratedComponents).ArrayNum;
  pFVar6 = (pTVar1->AllocatorInstance).Data;
  pFVar4 = pFVar6 + (longlong)iVar3 * 0x28;
  while( true ) {
    if ((this->GeneratedComponents).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TSoftObjectPtr<UActorComponent>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar6 == pFVar4) break;
    uVar5 = *(undefined8 *)pFVar6;
    FSoftObjectPath::FSoftObjectPath(&local_60,(FSoftObjectPath *)(pFVar6 + 8));
    local_40._0_8_ = uVar5;
    FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)(local_40 + 8),&local_60);
    UPCGManagedComponentBase::SetupGeneratedComponentFromBP
              ((UPCGManagedComponentBase *)this,(TSoftObjectPtr<UActorComponent> *)local_40);
    if (local_60.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.SubPathString.Data.AllocatorInstance.Data);
    }
    pFVar6 = pFVar6 + 0x28;
  }
  return;
}

// StaticRegisterNativesUPCGManagedComponentList @ 149f639f0

void __cdecl UPCGManagedComponentList::StaticRegisterNativesUPCGManagedComponentList(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UPCGManagedComponentList_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetGeneratedComponentsFromBP @ 149f727a0

void __cdecl
UPCGManagedComponentList::execSetGeneratedComponentsFromBP
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  FProperty *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined8 *puVar7;
  ForAnyElementType *pFVar8;
  undefined1 local_res8 [8];
  ForAnyElementType local_78;
  undefined8 local_70;
  undefined1 local_68 [24];
  void *local_50;
  undefined1 local_40 [40];
  
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  puVar1 = &param_1[1].field_0x10;
  pFVar8 = &local_78;
  if ((ForAnyElementType *)param_2->MostRecentPropertyAddress != (ForAnyElementType *)0x0) {
    pFVar8 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((ForAnyElementType *)puVar1 != pFVar8) {
    DestructItems<TSoftObjectPtr<UActorComponent>,int>
              (*(TSoftObjectPtr<UActorComponent> **)puVar1,*(int *)&param_1[1].field_0x18);
    iVar4 = *(int *)&pFVar8[1].Data;
    puVar2 = &param_1[1].field_0x1c;
    pFVar6 = pFVar8->Data;
    *(int *)&param_1[1].field_0x18 = iVar4;
    if ((iVar4 == 0) && (*(int *)puVar2 == 0)) {
      *(undefined4 *)puVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar4,*(int *)puVar2,(ForAnyElementType *)puVar1,iVar4,(int *)puVar2);
      ConstructItems<TSoftObjectPtr<UActorComponent>,TSoftObjectPtr<UActorComponent>,int>
                (*(void **)puVar1,(TSoftObjectPtr<UActorComponent> *)pFVar6,iVar4);
    }
  }
  iVar4 = *(int *)&param_1[1].field_0x18;
  puVar7 = *(undefined8 **)puVar1;
  puVar3 = puVar7 + (longlong)iVar4 * 5;
  while( true ) {
    if (*(int *)&param_1[1].field_0x18 != iVar4) {
      `TCheckedPointerIterator<TSoftObjectPtr<UActorComponent>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (puVar7 == puVar3) break;
    local_68._0_8_ = *puVar7;
    FSoftObjectPath::FSoftObjectPath
              ((FSoftObjectPath *)(local_68 + 8),(FSoftObjectPath *)(puVar7 + 1));
    local_40._0_8_ = local_68._0_8_;
    FSoftObjectPath::FSoftObjectPath
              ((FSoftObjectPath *)(local_40 + 8),(FSoftObjectPath *)(local_68 + 8));
    UPCGManagedComponentBase::SetupGeneratedComponentFromBP
              ((UPCGManagedComponentBase *)param_1,(TSoftObjectPtr<UActorComponent> *)local_40);
    if (local_50 != (void *)0x0) {
      FMemory::Free(local_50);
    }
    puVar7 = puVar7 + 5;
  }
  DestructItems<TSoftObjectPtr<UActorComponent>,int>
            ((TSoftObjectPtr<UActorComponent> *)local_78.Data,(int)local_70);
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  return;
}

