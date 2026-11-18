// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCore
// Functions: 9

// StaticClass @ 14e322290

UClass * __cdecl UInterchangeResultsContainer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeResultsContainer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeCore",L"InterchangeResultsContainer",
               &Z_Registration_Info_UClass_UInterchangeResultsContainer.InnerSingleton,
               StaticRegisterNativesUInterchangeResultsContainer,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeResultsContainer>,
               InternalVTableHelperCtorCaller<UInterchangeResultsContainer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeResultsContainer.InnerSingleton;
}

// UInterchangeResultsContainer @ 14e401b00

UInterchangeResultsContainer * __thiscall
UInterchangeResultsContainer::UInterchangeResultsContainer
          (UInterchangeResultsContainer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeResultsContainer__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->Lock,4000);
  (this->Results).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Results).ArrayNum = 0;
  (this->Results).ArrayMax = 0;
  return this;
}

// UInterchangeResultsContainer @ 14e401b40

UInterchangeResultsContainer * __thiscall
UInterchangeResultsContainer::UInterchangeResultsContainer
          (UInterchangeResultsContainer *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeResultsContainer__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->Lock,4000);
  (this->Results).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Results).ArrayNum = 0;
  (this->Results).ArrayMax = 0;
  return this;
}

// ~UInterchangeResultsContainer @ 14e404f70

void __thiscall
UInterchangeResultsContainer::~UInterchangeResultsContainer(UInterchangeResultsContainer *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeResultsContainer__6B_;
  pFVar1 = (this->Results).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->Lock);
  UObject::~UObject((UObject *)this);
  return;
}

// Append @ 14e40ffd0

void __thiscall
UInterchangeResultsContainer::Append
          (UInterchangeResultsContainer *this,UInterchangeResultsContainer *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<TObjectPtr<UInterchangeResult>,TSizedDefaultAllocator<32>_> *pTVar1;
  FWindowsRecursiveMutex *lpCriticalSection_00;
  FScriptContainerElement *_Src;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  lpCriticalSection = &this->Lock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar1 = &this->Results;
  lpCriticalSection_00 = &param_1->Lock;
  if (lpCriticalSection_00 != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
    local_10 = (param_1->Results).ArrayNum;
    lVar6 = (longlong)local_10;
    _Src = (param_1->Results).AllocatorInstance.Data;
    local_18.Data = (FScriptContainerElement *)0x0;
    if (local_10 == 0) {
      local_c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_10,0,&local_18,local_10,&local_c);
      memcpy(local_18.Data,_Src,lVar6 << 3);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
    if (pTVar1 == (TArray<TObjectPtr<UInterchangeResult>,TSizedDefaultAllocator<32>_> *)&local_18) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x986,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar3 = local_10;
    if (local_10 != 0) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,local_10,&pTVar1->AllocatorInstance,&(this->Results).ArrayNum,
                         &(this->Results).ArrayMax);
      RelocateConstructItems<TObjectPtr<UInterchangeResult>,UInterchangeResult_*,int>
                ((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 8,
                 (UInterchangeResult **)local_18.Data,iVar3);
      local_10 = 0;
    }
    if (local_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data);
    }
                    /* WARNING: Could not recover jumptable at 0x00014e41012b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Empty @ 14e4307d0

void __thiscall UInterchangeResultsContainer::Empty(UInterchangeResultsContainer *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  
  lpCriticalSection = &this->Lock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    piVar1 = &(this->Results).ArrayMax;
    (this->Results).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->Results).AllocatorInstance,0,piVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00014e430826. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Finalize @ 14e435700

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UInterchangeResultsContainer::Finalize(UInterchangeResultsContainer *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FUObjectItem *this_00;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  bVar4 = IsInGameThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\InterchangeResultsContainer.cpp"
                       ,0x18,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar5 = (this->Results).AllocatorInstance.Data;
  iVar2 = (this->Results).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Results).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UInterchangeResult>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    this_00 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(*(longlong *)pFVar5 + 0xc));
    FUObjectItem::ClearRootFlags(this_00,Async);
    pFVar5 = pFVar5 + 8;
  }
  return;
}

// GetPrivateStaticClass @ 14e4420a0

UClass * __cdecl UInterchangeResultsContainer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeResultsContainer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeCore",L"InterchangeResultsContainer",
               &Z_Registration_Info_UClass_UInterchangeResultsContainer.InnerSingleton,
               StaticRegisterNativesUInterchangeResultsContainer,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeResultsContainer>,
               InternalVTableHelperCtorCaller<UInterchangeResultsContainer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeResultsContainer.InnerSingleton;
}

// StaticRegisterNativesUInterchangeResultsContainer @ 14e460030

void __cdecl UInterchangeResultsContainer::StaticRegisterNativesUInterchangeResultsContainer(void)

{
  return;
}

