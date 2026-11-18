// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 8

// StaticClass @ 149483820

UClass * __cdecl UWN_VariantObjectReferencer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_VariantObjectReferencer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_VariantObjectReferencer",
               &Z_Registration_Info_UClass_UWN_VariantObjectReferencer.InnerSingleton,
               StaticRegisterNativesUWN_VariantObjectReferencer,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWN_VariantObjectReferencer>,
               InternalVTableHelperCtorCaller<UWN_VariantObjectReferencer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_VariantObjectReferencer.InnerSingleton;
}

// UWN_VariantObjectReferencer @ 14948ef20

UWN_VariantObjectReferencer * __thiscall
UWN_VariantObjectReferencer::UWN_VariantObjectReferencer
          (UWN_VariantObjectReferencer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UWN_VariantObjectReferencer__6B_;
  (this->References).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->References).ArrayNum = 0;
  (this->References).ArrayMax = 0;
  (this->FreedIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreedIndices).ArrayNum = 0;
  (this->FreedIndices).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CS,4000);
  return this;
}

// UWN_VariantObjectReferencer @ 14948ef70

UWN_VariantObjectReferencer * __thiscall
UWN_VariantObjectReferencer::UWN_VariantObjectReferencer(UWN_VariantObjectReferencer *this)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  UWN_VariantObjectReferencer *pUVar5;
  
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UWN_VariantObjectReferencer__6B_;
  piVar1 = &(this->References).ArrayMax;
  piVar2 = &(this->FreedIndices).ArrayMax;
  (this->References).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->References).ArrayNum = 0;
  *piVar1 = 0;
  (this->FreedIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreedIndices).ArrayNum = 0;
  *piVar2 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CS,4000);
  pUVar5 = FWN_VariantItemBase::ObjectReferencer;
  if ((this->_padding_ & 0x10) == 0) {
    if (*piVar1 < 0x2000) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0x2000,&(this->References).AllocatorInstance,(this->References).ArrayNum,piVar1
                );
    }
    if (*piVar2 < 0x400) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0x400,&(this->FreedIndices).AllocatorInstance,(this->FreedIndices).ArrayNum,
                 piVar2);
    }
    pUVar5 = this;
    if ((FWN_VariantItemBase::ObjectReferencer != (UWN_VariantObjectReferencer *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("FWN_VariantItemBase::ObjectReferencer == nullptr",
                           "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_Common\\Source\\WN_Common\\Private\\WN_Variant.cpp"
                           ,0x14,L""), pUVar5 = this, bVar4)) {
      pcVar3 = (code *)swi(3);
      pUVar5 = (UWN_VariantObjectReferencer *)(*pcVar3)();
      return pUVar5;
    }
  }
  FWN_VariantItemBase::ObjectReferencer = pUVar5;
  return this;
}

// ~UWN_VariantObjectReferencer @ 149490c20

void __thiscall
UWN_VariantObjectReferencer::~UWN_VariantObjectReferencer(UWN_VariantObjectReferencer *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UWN_VariantObjectReferencer__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CS);
  pFVar1 = (this->FreedIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->References).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddUObject @ 149495230

int __thiscall
UWN_VariantObjectReferencer::AddUObject(UWN_VariantObjectReferencer *this,UObject *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  int iVar5;
  
  lpCriticalSection = &this->CS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar5 = (this->FreedIndices).ArrayNum;
    if (iVar5 < 1) {
      iVar4 = (this->References).ArrayNum;
      piVar2 = &(this->References).ArrayMax;
      if (iVar4 == *piVar2) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->References).AllocatorInstance,piVar2);
      }
      pFVar3 = (this->References).AllocatorInstance.Data;
      (this->References).ArrayNum = iVar4 + 1;
      *(UObject **)(pFVar3 + (longlong)iVar4 * 8) = param_1;
    }
    else {
      iVar5 = (this->FreedIndices).ArrayNum;
      iVar4 = iVar5 + -1;
      iVar5 = *(int *)((this->FreedIndices).AllocatorInstance.Data + (longlong)iVar5 * 4 + -4);
      (this->FreedIndices).ArrayNum = iVar4;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,&(this->FreedIndices).AllocatorInstance,iVar4,&(this->FreedIndices).ArrayMax);
      pTVar1 = &this->References;
      iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,1,&pTVar1->AllocatorInstance,&(this->References).ArrayNum,
                         &(this->References).ArrayMax);
      pFVar3 = (pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 8;
      memmove(pFVar3 + 8,pFVar3,(longlong)(iVar4 - iVar5) << 3);
      *(UObject **)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 8) = param_1;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetPrivateStaticClass @ 1494a22c0

UClass * __cdecl UWN_VariantObjectReferencer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_VariantObjectReferencer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_VariantObjectReferencer",
               &Z_Registration_Info_UClass_UWN_VariantObjectReferencer.InnerSingleton,
               StaticRegisterNativesUWN_VariantObjectReferencer,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWN_VariantObjectReferencer>,
               InternalVTableHelperCtorCaller<UWN_VariantObjectReferencer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_VariantObjectReferencer.InnerSingleton;
}

// RemoveUObject @ 1494ab6a0

void __thiscall
UWN_VariantObjectReferencer::RemoveUObject(UWN_VariantObjectReferencer *this,int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  
  lpCriticalSection = &this->CS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar4 = 0;
  if (param_1 < (this->References).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  piVar1 = &(this->FreedIndices).ArrayMax;
  *(undefined8 *)((this->References).AllocatorInstance.Data + (longlong)param_1 * 8) = 0;
  iVar5 = (this->FreedIndices).ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->FreedIndices).AllocatorInstance,piVar1);
  }
  (this->FreedIndices).ArrayNum = iVar5 + 1;
  *(int *)((this->FreedIndices).AllocatorInstance.Data + (longlong)iVar5 * 4) = param_1;
                    /* WARNING: Could not recover jumptable at 0x0001494ab759. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// StaticRegisterNativesUWN_VariantObjectReferencer @ 1494ae380

void __cdecl UWN_VariantObjectReferencer::StaticRegisterNativesUWN_VariantObjectReferencer(void)

{
  return;
}

